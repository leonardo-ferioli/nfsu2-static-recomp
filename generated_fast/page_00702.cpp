#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_701(u8* __restrict R,Cpu& c);
u32 body_703(u8* __restrict R,Cpu& c);
u32 body_704(u8* __restrict R,Cpu& c);
u32 body_705(u8* __restrict R,Cpu& c);
u32 body_706(u8* __restrict R,Cpu& c);
u32 body_707(u8* __restrict R,Cpu& c);
u32 body_708(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x702,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x702,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_702(u8* __restrict R,Cpu& c);
u32 page_702(Cpu& c){return body_702(c.regs.data(),c);}
__attribute__((noinline)) u32 body_702(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x702004:goto L702004;
case 0x702006:c.instructions+=3;goto B702006;
case 0x70200b:c.instructions+=2;goto B70200b;
case 0x702010:c.instructions+=1;goto B702010;
case 0x702015:goto L702015;
case 0x70201a:c.instructions+=5;goto B70201a;
case 0x702020:c.instructions+=4;goto B702020;
case 0x702022:c.instructions+=3;goto B702022;
case 0x702027:c.instructions+=2;goto B702027;
case 0x70202c:c.instructions+=1;goto B70202c;
case 0x702031:goto L702031;
case 0x702032:c.instructions+=4;goto B702032;
case 0x702033:c.instructions+=3;goto B702033;
case 0x702034:c.instructions+=2;goto B702034;
case 0x702035:c.instructions+=1;goto B702035;
case 0x702040:goto L702040;
case 0x702041:c.instructions+=16;goto B702041;
case 0x702042:c.instructions+=15;goto B702042;
case 0x702043:c.instructions+=14;goto B702043;
case 0x702044:c.instructions+=13;goto B702044;
case 0x70204a:c.instructions+=12;goto B70204a;
case 0x702050:c.instructions+=11;goto B702050;
case 0x702056:c.instructions+=10;goto B702056;
case 0x702058:c.instructions+=9;goto B702058;
case 0x70205b:c.instructions+=8;goto B70205b;
case 0x702060:c.instructions+=7;goto B702060;
case 0x702066:c.instructions+=6;goto B702066;
case 0x70206b:c.instructions+=5;goto B70206b;
case 0x70206d:c.instructions+=4;goto B70206d;
case 0x702070:c.instructions+=3;goto B702070;
case 0x702073:c.instructions+=2;goto B702073;
case 0x702076:c.instructions+=1;goto B702076;
case 0x702078:goto L702078;
case 0x70207b:c.instructions+=6;goto B70207b;
case 0x702080:c.instructions+=5;goto B702080;
case 0x702082:c.instructions+=4;goto B702082;
case 0x702085:c.instructions+=3;goto B702085;
case 0x702087:c.instructions+=2;goto B702087;
case 0x702089:c.instructions+=1;goto B702089;
case 0x70208c:goto L70208c;
case 0x70208e:c.instructions+=1;goto B70208e;
case 0x702093:goto L702093;
case 0x702095:c.instructions+=11;goto B702095;
case 0x702098:c.instructions+=10;goto B702098;
case 0x70209b:c.instructions+=9;goto B70209b;
case 0x70209e:c.instructions+=8;goto B70209e;
case 0x7020a1:c.instructions+=7;goto B7020a1;
case 0x7020a4:c.instructions+=6;goto B7020a4;
case 0x7020a7:c.instructions+=5;goto B7020a7;
case 0x7020aa:c.instructions+=4;goto B7020aa;
case 0x7020ad:c.instructions+=3;goto B7020ad;
case 0x7020b0:c.instructions+=2;goto B7020b0;
case 0x7020b1:c.instructions+=1;goto B7020b1;
case 0x7020b3:goto L7020b3;
case 0x7020b8:goto L7020b8;
case 0x7020ba:c.instructions+=5;goto B7020ba;
case 0x7020bd:c.instructions+=4;goto B7020bd;
case 0x7020c4:c.instructions+=3;goto B7020c4;
case 0x7020c6:c.instructions+=2;goto B7020c6;
case 0x7020c9:c.instructions+=1;goto B7020c9;
case 0x7020cf:goto L7020cf;
case 0x7020d2:c.instructions+=1;goto B7020d2;
case 0x7020d4:goto L7020d4;
case 0x7020d7:c.instructions+=1;goto B7020d7;
case 0x7020d9:goto L7020d9;
case 0x7020dc:c.instructions+=3;goto B7020dc;
case 0x7020df:c.instructions+=2;goto B7020df;
case 0x7020e2:c.instructions+=1;goto B7020e2;
case 0x7020e4:goto L7020e4;
case 0x7020e7:c.instructions+=6;goto B7020e7;
case 0x7020ec:c.instructions+=5;goto B7020ec;
case 0x7020ee:c.instructions+=4;goto B7020ee;
case 0x7020f1:c.instructions+=3;goto B7020f1;
case 0x7020f3:c.instructions+=2;goto B7020f3;
case 0x7020f5:c.instructions+=1;goto B7020f5;
case 0x7020f8:goto L7020f8;
case 0x7020fa:c.instructions+=3;goto B7020fa;
case 0x7020fd:c.instructions+=2;goto B7020fd;
case 0x702104:c.instructions+=1;goto B702104;
case 0x702106:goto L702106;
case 0x702109:c.instructions+=3;goto B702109;
case 0x70210c:c.instructions+=2;goto B70210c;
case 0x70210f:c.instructions+=1;goto B70210f;
case 0x702111:goto L702111;
case 0x702114:c.instructions+=6;goto B702114;
case 0x702119:c.instructions+=5;goto B702119;
case 0x70211b:c.instructions+=4;goto B70211b;
case 0x70211e:c.instructions+=3;goto B70211e;
case 0x702120:c.instructions+=2;goto B702120;
case 0x702122:c.instructions+=1;goto B702122;
case 0x702125:goto L702125;
case 0x702127:c.instructions+=3;goto B702127;
case 0x70212a:c.instructions+=2;goto B70212a;
case 0x702131:c.instructions+=1;goto B702131;
case 0x702133:goto L702133;
case 0x702136:c.instructions+=1;goto B702136;
case 0x702138:goto L702138;
case 0x70213b:c.instructions+=3;goto B70213b;
case 0x70213e:c.instructions+=2;goto B70213e;
case 0x702141:c.instructions+=1;goto B702141;
case 0x702143:goto L702143;
case 0x702146:c.instructions+=6;goto B702146;
case 0x70214b:c.instructions+=5;goto B70214b;
case 0x70214d:c.instructions+=4;goto B70214d;
case 0x702150:c.instructions+=3;goto B702150;
case 0x702152:c.instructions+=2;goto B702152;
case 0x702154:c.instructions+=1;goto B702154;
case 0x702157:goto L702157;
case 0x702159:c.instructions+=3;goto B702159;
case 0x70215f:c.instructions+=2;goto B70215f;
case 0x702162:c.instructions+=1;goto B702162;
case 0x702164:goto L702164;
case 0x702167:c.instructions+=3;goto B702167;
case 0x70216a:c.instructions+=2;goto B70216a;
case 0x70216d:c.instructions+=1;goto B70216d;
case 0x70216f:goto L70216f;
case 0x702172:c.instructions+=7;goto B702172;
case 0x702177:c.instructions+=6;goto B702177;
case 0x702179:c.instructions+=5;goto B702179;
case 0x70217c:c.instructions+=4;goto B70217c;
case 0x70217e:c.instructions+=3;goto B70217e;
case 0x702180:c.instructions+=2;goto B702180;
case 0x702183:c.instructions+=1;goto B702183;
case 0x702185:goto L702185;
case 0x702187:c.instructions+=10;goto B702187;
case 0x702189:c.instructions+=9;goto B702189;
case 0x70218c:c.instructions+=8;goto B70218c;
case 0x70218e:c.instructions+=7;goto B70218e;
case 0x702191:c.instructions+=6;goto B702191;
case 0x702193:c.instructions+=5;goto B702193;
case 0x702195:c.instructions+=4;goto B702195;
case 0x702197:c.instructions+=3;goto B702197;
case 0x702199:c.instructions+=2;goto B702199;
case 0x70219c:c.instructions+=1;goto B70219c;
case 0x70219e:goto L70219e;
case 0x7021a1:c.instructions+=6;goto B7021a1;
case 0x7021a6:c.instructions+=5;goto B7021a6;
case 0x7021a8:c.instructions+=4;goto B7021a8;
case 0x7021ab:c.instructions+=3;goto B7021ab;
case 0x7021ad:c.instructions+=2;goto B7021ad;
case 0x7021af:c.instructions+=1;goto B7021af;
case 0x7021b2:goto L7021b2;
case 0x7021b9:c.instructions+=6;goto B7021b9;
case 0x7021bb:c.instructions+=5;goto B7021bb;
case 0x7021be:c.instructions+=4;goto B7021be;
case 0x7021bf:c.instructions+=3;goto B7021bf;
case 0x7021c5:c.instructions+=2;goto B7021c5;
case 0x7021cb:c.instructions+=1;goto B7021cb;
case 0x7021d0:goto L7021d0;
case 0x7021d6:c.instructions+=8;goto B7021d6;
case 0x7021dc:c.instructions+=7;goto B7021dc;
case 0x7021e2:c.instructions+=6;goto B7021e2;
case 0x7021e4:c.instructions+=5;goto B7021e4;
case 0x7021e5:c.instructions+=4;goto B7021e5;
case 0x7021e6:c.instructions+=3;goto B7021e6;
case 0x7021e7:c.instructions+=2;goto B7021e7;
case 0x7021e8:c.instructions+=1;goto B7021e8;
case 0x7021e9:goto L7021e9;
case 0x7021ea:c.instructions+=8;goto B7021ea;
case 0x7021ec:c.instructions+=7;goto B7021ec;
case 0x7021ed:c.instructions+=6;goto B7021ed;
case 0x7021f0:c.instructions+=5;goto B7021f0;
case 0x7021f6:c.instructions+=4;goto B7021f6;
case 0x7021f7:c.instructions+=3;goto B7021f7;
case 0x7021f9:c.instructions+=2;goto B7021f9;
case 0x7021fb:c.instructions+=1;goto B7021fb;
case 0x7021fd:goto L7021fd;
case 0x7021fe:c.instructions+=1;goto B7021fe;
case 0x702203:goto L702203;
case 0x702204:goto L702204;
case 0x70220a:c.instructions+=2;goto B70220a;
case 0x70220c:c.instructions+=1;goto B70220c;
case 0x70220e:goto L70220e;
case 0x70220f:c.instructions+=1;goto B70220f;
case 0x702214:goto L702214;
case 0x702215:goto L702215;
case 0x70221b:c.instructions+=2;goto B70221b;
case 0x70221d:c.instructions+=1;goto B70221d;
case 0x70221f:goto L70221f;
case 0x702220:c.instructions+=1;goto B702220;
case 0x702225:goto L702225;
case 0x702226:goto L702226;
case 0x70222c:c.instructions+=2;goto B70222c;
case 0x70222e:c.instructions+=1;goto B70222e;
case 0x702230:goto L702230;
case 0x702231:c.instructions+=1;goto B702231;
case 0x702236:goto L702236;
case 0x702237:goto L702237;
case 0x70223d:c.instructions+=2;goto B70223d;
case 0x70223f:c.instructions+=1;goto B70223f;
case 0x702241:goto L702241;
case 0x702242:c.instructions+=1;goto B702242;
case 0x702247:goto L702247;
case 0x702248:goto L702248;
case 0x70224e:c.instructions+=13;goto B70224e;
case 0x702254:c.instructions+=12;goto B702254;
case 0x70225a:c.instructions+=11;goto B70225a;
case 0x702260:c.instructions+=10;goto B702260;
case 0x702266:c.instructions+=9;goto B702266;
case 0x70226c:c.instructions+=8;goto B70226c;
case 0x702272:c.instructions+=7;goto B702272;
case 0x702278:c.instructions+=6;goto B702278;
case 0x70227e:c.instructions+=5;goto B70227e;
case 0x702284:c.instructions+=4;goto B702284;
case 0x702285:c.instructions+=3;goto B702285;
case 0x702286:c.instructions+=2;goto B702286;
case 0x702287:c.instructions+=1;goto B702287;
case 0x702288:goto L702288;
case 0x702289:c.instructions+=6;goto B702289;
case 0x70228b:c.instructions+=5;goto B70228b;
case 0x70228c:c.instructions+=4;goto B70228c;
case 0x70228f:c.instructions+=3;goto B70228f;
case 0x702290:c.instructions+=2;goto B702290;
case 0x702291:c.instructions+=1;goto B702291;
case 0x702296:goto L702296;
case 0x702298:c.instructions+=3;goto B702298;
case 0x70229d:c.instructions+=2;goto B70229d;
case 0x70229e:c.instructions+=1;goto B70229e;
case 0x7022a3:goto L7022a3;
case 0x7022a6:c.instructions+=3;goto B7022a6;
case 0x7022a8:c.instructions+=2;goto B7022a8;
case 0x7022ae:c.instructions+=1;goto B7022ae;
case 0x7022b0:goto L7022b0;
case 0x7022b3:c.instructions+=5;goto B7022b3;
case 0x7022b6:c.instructions+=4;goto B7022b6;
case 0x7022b8:c.instructions+=3;goto B7022b8;
case 0x7022b9:c.instructions+=2;goto B7022b9;
case 0x7022bf:c.instructions+=1;goto B7022bf;
case 0x7022c4:goto L7022c4;
case 0x7022c6:c.instructions+=4;goto B7022c6;
case 0x7022c7:c.instructions+=3;goto B7022c7;
case 0x7022c8:c.instructions+=2;goto B7022c8;
case 0x7022ce:c.instructions+=1;goto B7022ce;
case 0x7022d0:goto L7022d0;
case 0x7022d3:c.instructions+=5;goto B7022d3;
case 0x7022d6:c.instructions+=4;goto B7022d6;
case 0x7022d8:c.instructions+=3;goto B7022d8;
case 0x7022dd:c.instructions+=2;goto B7022dd;
case 0x7022e3:c.instructions+=1;goto B7022e3;
case 0x7022e8:goto L7022e8;
case 0x7022ea:c.instructions+=4;goto B7022ea;
case 0x7022eb:c.instructions+=3;goto B7022eb;
case 0x7022ec:c.instructions+=2;goto B7022ec;
case 0x7022f2:c.instructions+=1;goto B7022f2;
case 0x7022f4:goto L7022f4;
case 0x7022f7:c.instructions+=5;goto B7022f7;
case 0x7022fa:c.instructions+=4;goto B7022fa;
case 0x7022fc:c.instructions+=3;goto B7022fc;
case 0x7022fd:c.instructions+=2;goto B7022fd;
case 0x702303:c.instructions+=1;goto B702303;
case 0x702308:goto L702308;
case 0x70230a:c.instructions+=4;goto B70230a;
case 0x70230b:c.instructions+=3;goto B70230b;
case 0x70230c:c.instructions+=2;goto B70230c;
case 0x702312:c.instructions+=1;goto B702312;
case 0x702314:goto L702314;
case 0x702315:c.instructions+=1;goto B702315;
case 0x70231a:goto L70231a;
case 0x70231b:c.instructions+=2;goto B70231b;
case 0x70231d:c.instructions+=1;goto B70231d;
case 0x70231f:goto L70231f;
case 0x702322:c.instructions+=4;goto B702322;
case 0x702325:c.instructions+=3;goto B702325;
case 0x70232b:c.instructions+=2;goto B70232b;
case 0x70232d:c.instructions+=1;goto B70232d;
case 0x70232e:goto L70232e;
case 0x70232f:c.instructions+=3;goto B70232f;
case 0x702330:c.instructions+=2;goto B702330;
case 0x702331:c.instructions+=1;goto B702331;
case 0x702332:goto L702332;
case 0x702333:c.instructions+=6;goto B702333;
case 0x702335:c.instructions+=5;goto B702335;
case 0x702336:c.instructions+=4;goto B702336;
case 0x702339:c.instructions+=3;goto B702339;
case 0x70233b:c.instructions+=2;goto B70233b;
case 0x70233d:c.instructions+=1;goto B70233d;
case 0x70233f:goto L70233f;
case 0x702340:c.instructions+=1;goto B702340;
case 0x702345:goto L702345;
case 0x702347:c.instructions+=3;goto B702347;
case 0x70234c:c.instructions+=2;goto B70234c;
case 0x70234d:c.instructions+=1;goto B70234d;
case 0x702352:goto L702352;
case 0x702354:c.instructions+=3;goto B702354;
case 0x702359:c.instructions+=2;goto B702359;
case 0x70235a:c.instructions+=1;goto B70235a;
case 0x70235f:goto L70235f;
case 0x702362:goto L702362;
case 0x702364:c.instructions+=1;goto B702364;
case 0x702369:goto L702369;
case 0x70236c:c.instructions+=4;goto B70236c;
case 0x70236d:c.instructions+=3;goto B70236d;
case 0x70236e:c.instructions+=2;goto B70236e;
case 0x70236f:c.instructions+=1;goto B70236f;
case 0x702370:goto L702370;
case 0x702371:c.instructions+=24;goto B702371;
case 0x702373:c.instructions+=23;goto B702373;
case 0x702376:c.instructions+=22;goto B702376;
case 0x702377:c.instructions+=21;goto B702377;
case 0x702378:c.instructions+=20;goto B702378;
case 0x70237a:c.instructions+=19;goto B70237a;
case 0x70237c:c.instructions+=18;goto B70237c;
case 0x70237d:c.instructions+=17;goto B70237d;
case 0x70237e:c.instructions+=16;goto B70237e;
case 0x702383:c.instructions+=15;goto B702383;
case 0x702386:c.instructions+=14;goto B702386;
case 0x702389:c.instructions+=13;goto B702389;
case 0x70238c:c.instructions+=12;goto B70238c;
case 0x70238f:c.instructions+=11;goto B70238f;
case 0x702392:c.instructions+=10;goto B702392;
case 0x702395:c.instructions+=9;goto B702395;
case 0x702398:c.instructions+=8;goto B702398;
case 0x70239b:c.instructions+=7;goto B70239b;
case 0x70239e:c.instructions+=6;goto B70239e;
case 0x7023a1:c.instructions+=5;goto B7023a1;
case 0x7023a4:c.instructions+=4;goto B7023a4;
case 0x7023a7:c.instructions+=3;goto B7023a7;
case 0x7023aa:c.instructions+=2;goto B7023aa;
case 0x7023ad:c.instructions+=1;goto B7023ad;
case 0x7023b2:goto L7023b2;
case 0x7023b4:c.instructions+=5;goto B7023b4;
case 0x7023b5:c.instructions+=4;goto B7023b5;
case 0x7023b7:c.instructions+=3;goto B7023b7;
case 0x7023b9:c.instructions+=2;goto B7023b9;
case 0x7023ba:c.instructions+=1;goto B7023ba;
case 0x7023bc:goto L7023bc;
case 0x7023bd:c.instructions+=2;goto B7023bd;
case 0x7023c2:c.instructions+=1;goto B7023c2;
case 0x7023c4:goto L7023c4;
case 0x7023c6:goto L7023c6;
case 0x7023c8:c.instructions+=4;goto B7023c8;
case 0x7023c9:c.instructions+=3;goto B7023c9;
case 0x7023cf:c.instructions+=2;goto B7023cf;
case 0x7023d2:c.instructions+=1;goto B7023d2;
case 0x7023d3:goto L7023d3;
case 0x7023d5:goto L7023d5;
case 0x7023da:goto L7023da;
case 0x7023dc:c.instructions+=2;goto B7023dc;
case 0x7023dd:c.instructions+=1;goto B7023dd;
case 0x7023df:goto L7023df;
case 0x7023e0:c.instructions+=1;goto B7023e0;
case 0x7023e5:goto L7023e5;
case 0x7023e6:c.instructions+=2;goto B7023e6;
case 0x7023e8:c.instructions+=1;goto B7023e8;
case 0x7023ea:goto L7023ea;
case 0x7023ec:c.instructions+=13;goto B7023ec;
case 0x7023f6:c.instructions+=12;goto B7023f6;
case 0x702400:c.instructions+=11;goto B702400;
case 0x702406:c.instructions+=10;goto B702406;
case 0x702407:c.instructions+=9;goto B702407;
case 0x702408:c.instructions+=8;goto B702408;
case 0x702409:c.instructions+=7;goto B702409;
case 0x70240a:c.instructions+=6;goto B70240a;
case 0x70240b:c.instructions+=5;goto B70240b;
case 0x70240d:c.instructions+=4;goto B70240d;
case 0x70240f:c.instructions+=3;goto B70240f;
case 0x702411:c.instructions+=2;goto B702411;
case 0x702412:c.instructions+=1;goto B702412;
case 0x702418:goto L702418;
case 0x70241a:goto L70241a;
case 0x70241c:goto L70241c;
case 0x70241d:goto L70241d;
case 0x70241e:c.instructions+=3;goto B70241e;
case 0x70241f:c.instructions+=2;goto B70241f;
case 0x702420:c.instructions+=1;goto B702420;
case 0x702421:goto L702421;
case 0x702422:c.instructions+=2;goto B702422;
case 0x702423:c.instructions+=1;goto B702423;
case 0x702428:goto L702428;
case 0x70242d:c.instructions+=1;goto B70242d;
case 0x702432:goto L702432;
case 0x702437:c.instructions+=2;goto B702437;
case 0x702439:c.instructions+=1;goto B702439;
case 0x70243e:goto L70243e;
case 0x702441:c.instructions+=11;goto B702441;
case 0x702442:c.instructions+=10;goto B702442;
case 0x702444:c.instructions+=9;goto B702444;
case 0x702446:c.instructions+=8;goto B702446;
case 0x702447:c.instructions+=7;goto B702447;
case 0x702448:c.instructions+=6;goto B702448;
case 0x702449:c.instructions+=5;goto B702449;
case 0x70244b:c.instructions+=4;goto B70244b;
case 0x70244c:c.instructions+=3;goto B70244c;
case 0x70244f:c.instructions+=2;goto B70244f;
case 0x702455:c.instructions+=1;goto B702455;
case 0x702457:goto L702457;
case 0x702459:c.instructions+=4;goto B702459;
case 0x70245a:c.instructions+=3;goto B70245a;
case 0x70245b:c.instructions+=2;goto B70245b;
case 0x70245c:c.instructions+=1;goto B70245c;
case 0x702461:goto L702461;
case 0x702464:c.instructions+=3;goto B702464;
case 0x702465:c.instructions+=2;goto B702465;
case 0x702466:c.instructions+=1;goto B702466;
case 0x70246b:goto L70246b;
case 0x70246c:goto L70246c;
case 0x70246d:c.instructions+=5;goto B70246d;
case 0x70246f:c.instructions+=4;goto B70246f;
case 0x702472:c.instructions+=3;goto B702472;
case 0x702477:c.instructions+=2;goto B702477;
case 0x702478:c.instructions+=1;goto B702478;
case 0x70247f:goto L70247f;
case 0x702480:c.instructions+=6;goto B702480;
case 0x702482:c.instructions+=5;goto B702482;
case 0x702485:c.instructions+=4;goto B702485;
case 0x70248b:c.instructions+=3;goto B70248b;
case 0x70248d:c.instructions+=2;goto B70248d;
case 0x70248f:c.instructions+=1;goto B70248f;
case 0x702491:goto L702491;
case 0x702494:c.instructions+=7;goto B702494;
case 0x702495:c.instructions+=6;goto B702495;
case 0x702498:c.instructions+=5;goto B702498;
case 0x70249b:c.instructions+=4;goto B70249b;
case 0x70249e:c.instructions+=3;goto B70249e;
case 0x7024a1:c.instructions+=2;goto B7024a1;
case 0x7024a3:c.instructions+=1;goto B7024a3;
case 0x7024a5:goto L7024a5;
case 0x7024a6:c.instructions+=1;goto B7024a6;
case 0x7024a7:goto L7024a7;
case 0x7024aa:c.instructions+=1;goto B7024aa;
case 0x7024af:goto L7024af;
case 0x7024b0:c.instructions+=2;goto B7024b0;
case 0x7024b1:c.instructions+=1;goto B7024b1;
case 0x7024b2:goto L7024b2;
case 0x7024b3:c.instructions+=4;goto B7024b3;
case 0x7024b5:c.instructions+=3;goto B7024b5;
case 0x7024bb:c.instructions+=2;goto B7024bb;
case 0x7024bd:c.instructions+=1;goto B7024bd;
case 0x7024bf:goto L7024bf;
case 0x7024c1:c.instructions+=3;goto B7024c1;
case 0x7024c3:c.instructions+=2;goto B7024c3;
case 0x7024c6:c.instructions+=1;goto B7024c6;
case 0x7024c9:goto L7024c9;
case 0x7024ca:c.instructions+=1;goto B7024ca;
case 0x7024cb:goto L7024cb;
case 0x7024cc:c.instructions+=1;goto B7024cc;
case 0x7024d7:goto L7024d7;
case 0x7024d8:c.instructions+=3;goto B7024d8;
case 0x7024da:c.instructions+=2;goto B7024da;
case 0x7024db:c.instructions+=1;goto B7024db;
case 0x7024e0:goto L7024e0;
case 0x7024e3:c.instructions+=18;goto B7024e3;
case 0x7024e6:c.instructions+=17;goto B7024e6;
case 0x7024e8:c.instructions+=16;goto B7024e8;
case 0x7024ee:c.instructions+=15;goto B7024ee;
case 0x7024f0:c.instructions+=14;goto B7024f0;
case 0x7024f3:c.instructions+=13;goto B7024f3;
case 0x7024f9:c.instructions+=12;goto B7024f9;
case 0x7024fb:c.instructions+=11;goto B7024fb;
case 0x702501:c.instructions+=10;goto B702501;
case 0x702503:c.instructions+=9;goto B702503;
case 0x702509:c.instructions+=8;goto B702509;
case 0x70250b:c.instructions+=7;goto B70250b;
case 0x702511:c.instructions+=6;goto B702511;
case 0x702513:c.instructions+=5;goto B702513;
case 0x702519:c.instructions+=4;goto B702519;
case 0x70251b:c.instructions+=3;goto B70251b;
case 0x702520:c.instructions+=2;goto B702520;
case 0x702521:c.instructions+=1;goto B702521;
case 0x702526:goto L702526;
case 0x702528:c.instructions+=2;goto B702528;
case 0x70252e:c.instructions+=1;goto B70252e;
case 0x702533:goto L702533;
case 0x702535:c.instructions+=6;goto B702535;
case 0x70253b:c.instructions+=5;goto B70253b;
case 0x70253d:c.instructions+=4;goto B70253d;
case 0x702543:c.instructions+=3;goto B702543;
case 0x702549:c.instructions+=2;goto B702549;
case 0x70254b:c.instructions+=1;goto B70254b;
case 0x702550:goto L702550;
case 0x702552:c.instructions+=3;goto B702552;
case 0x702553:c.instructions+=2;goto B702553;
case 0x702554:c.instructions+=1;goto B702554;
case 0x702556:goto L702556;
case 0x702557:c.instructions+=1;goto B702557;
case 0x70255c:goto L70255c;
case 0x70255e:c.instructions+=1;goto B70255e;
case 0x702560:goto L702560;
case 0x702562:c.instructions+=4;goto B702562;
case 0x702568:c.instructions+=3;goto B702568;
case 0x70256c:c.instructions+=2;goto B70256c;
case 0x70256e:c.instructions+=1;goto B70256e;
case 0x702573:goto L702573;
case 0x702575:c.instructions+=1;goto B702575;
case 0x702576:goto L702576;
case 0x702577:c.instructions+=3;goto B702577;
case 0x702578:c.instructions+=2;goto B702578;
case 0x702579:c.instructions+=1;goto B702579;
case 0x70257a:goto L70257a;
case 0x70257b:c.instructions+=3;goto B70257b;
case 0x70257d:c.instructions+=2;goto B70257d;
case 0x702581:c.instructions+=1;goto B702581;
case 0x702583:goto L702583;
case 0x702586:c.instructions+=3;goto B702586;
case 0x70258c:c.instructions+=2;goto B70258c;
case 0x70258f:c.instructions+=1;goto B70258f;
case 0x702591:goto L702591;
case 0x702592:c.instructions+=1;goto B702592;
case 0x702593:goto L702593;
case 0x702594:c.instructions+=6;goto B702594;
case 0x702596:c.instructions+=5;goto B702596;
case 0x702597:c.instructions+=4;goto B702597;
case 0x702598:c.instructions+=3;goto B702598;
case 0x70259b:c.instructions+=2;goto B70259b;
case 0x70259c:c.instructions+=1;goto B70259c;
case 0x70259e:goto L70259e;
case 0x7025a1:c.instructions+=2;goto B7025a1;
case 0x7025a3:c.instructions+=1;goto B7025a3;
case 0x7025a5:goto L7025a5;
case 0x7025a8:c.instructions+=1;goto B7025a8;
case 0x7025ae:goto L7025ae;
case 0x7025b0:c.instructions+=3;goto B7025b0;
case 0x7025b1:c.instructions+=2;goto B7025b1;
case 0x7025b8:c.instructions+=1;goto B7025b8;
case 0x7025ba:goto L7025ba;
case 0x7025bb:c.instructions+=1;goto B7025bb;
case 0x7025c1:goto L7025c1;
case 0x7025c4:c.instructions+=1;goto B7025c4;
case 0x7025c6:goto L7025c6;
case 0x7025c7:c.instructions+=1;goto B7025c7;
case 0x7025c9:goto L7025c9;
case 0x7025ca:c.instructions+=1;goto B7025ca;
case 0x7025cc:goto L7025cc;
case 0x7025cd:c.instructions+=1;goto B7025cd;
case 0x7025cf:goto L7025cf;
case 0x7025d0:c.instructions+=1;goto B7025d0;
case 0x7025d6:goto L7025d6;
case 0x7025d9:c.instructions+=4;goto B7025d9;
case 0x7025da:c.instructions+=3;goto B7025da;
case 0x7025e0:c.instructions+=2;goto B7025e0;
case 0x7025e6:c.instructions+=1;goto B7025e6;
case 0x7025eb:goto L7025eb;
case 0x7025ec:c.instructions+=2;goto B7025ec;
case 0x7025ed:c.instructions+=1;goto B7025ed;
case 0x7025f2:goto L7025f2;
case 0x7025f5:c.instructions+=2;goto B7025f5;
case 0x7025fb:c.instructions+=1;goto B7025fb;
case 0x702600:goto L702600;
case 0x702603:c.instructions+=5;goto B702603;
case 0x702609:c.instructions+=4;goto B702609;
case 0x70260f:c.instructions+=3;goto B70260f;
case 0x702610:c.instructions+=2;goto B702610;
case 0x702612:c.instructions+=1;goto B702612;
case 0x702617:goto L702617;
case 0x70261d:c.instructions+=3;goto B70261d;
case 0x70261e:c.instructions+=2;goto B70261e;
case 0x702620:c.instructions+=1;goto B702620;
case 0x702625:goto L702625;
case 0x702628:c.instructions+=1;goto B702628;
case 0x70262d:goto L70262d;
case 0x702630:c.instructions+=2;goto B702630;
case 0x702636:c.instructions+=1;goto B702636;
case 0x70263b:goto L70263b;
case 0x70263e:c.instructions+=2;goto B70263e;
case 0x702644:c.instructions+=1;goto B702644;
case 0x702649:goto L702649;
case 0x70264c:c.instructions+=6;goto B70264c;
case 0x702652:c.instructions+=5;goto B702652;
case 0x702659:c.instructions+=4;goto B702659;
case 0x70265b:c.instructions+=3;goto B70265b;
case 0x70265e:c.instructions+=2;goto B70265e;
case 0x702661:c.instructions+=1;goto B702661;
case 0x702663:goto L702663;
case 0x702669:goto L702669;
case 0x70266f:c.instructions+=10;goto B70266f;
case 0x702671:c.instructions+=9;goto B702671;
case 0x702673:c.instructions+=8;goto B702673;
case 0x702675:c.instructions+=7;goto B702675;
case 0x702676:c.instructions+=6;goto B702676;
case 0x702679:c.instructions+=5;goto B702679;
case 0x70267b:c.instructions+=4;goto B70267b;
case 0x70267d:c.instructions+=3;goto B70267d;
case 0x702680:c.instructions+=2;goto B702680;
case 0x702683:c.instructions+=1;goto B702683;
case 0x702685:goto L702685;
case 0x70268b:goto L70268b;
case 0x70268d:c.instructions+=6;goto B70268d;
case 0x702693:c.instructions+=5;goto B702693;
case 0x702699:c.instructions+=4;goto B702699;
case 0x70269f:c.instructions+=3;goto B70269f;
case 0x7026a1:c.instructions+=2;goto B7026a1;
case 0x7026a4:c.instructions+=1;goto B7026a4;
case 0x7026a6:goto L7026a6;
case 0x7026a8:c.instructions+=2;goto B7026a8;
case 0x7026ae:c.instructions+=1;goto B7026ae;
case 0x7026b0:goto L7026b0;
case 0x7026b6:c.instructions+=3;goto B7026b6;
case 0x7026b8:c.instructions+=2;goto B7026b8;
case 0x7026bb:c.instructions+=1;goto B7026bb;
case 0x7026bd:goto L7026bd;
case 0x7026bf:c.instructions+=2;goto B7026bf;
case 0x7026c9:c.instructions+=1;goto B7026c9;
case 0x7026cb:goto L7026cb;
case 0x7026d1:c.instructions+=3;goto B7026d1;
case 0x7026d3:c.instructions+=2;goto B7026d3;
case 0x7026d6:c.instructions+=1;goto B7026d6;
case 0x7026d8:goto L7026d8;
case 0x7026da:c.instructions+=2;goto B7026da;
case 0x7026e4:c.instructions+=1;goto B7026e4;
case 0x7026e6:goto L7026e6;
case 0x7026ec:c.instructions+=3;goto B7026ec;
case 0x7026ee:c.instructions+=2;goto B7026ee;
case 0x7026f1:c.instructions+=1;goto B7026f1;
case 0x7026f3:goto L7026f3;
case 0x7026fd:c.instructions+=1;goto B7026fd;
case 0x7026ff:goto L7026ff;
case 0x702709:c.instructions+=1;goto B702709;
case 0x70270b:goto L70270b;
case 0x70270e:c.instructions+=2;goto B70270e;
case 0x702714:c.instructions+=1;goto B702714;
case 0x70271a:goto L70271a;
case 0x70271b:c.instructions+=4;goto B70271b;
case 0x70271c:c.instructions+=3;goto B70271c;
case 0x70271d:c.instructions+=2;goto B70271d;
case 0x70271e:c.instructions+=1;goto B70271e;
case 0x70271f:goto L70271f;
case 0x702720:c.instructions+=21;goto B702720;
case 0x702722:c.instructions+=20;goto B702722;
case 0x702723:c.instructions+=19;goto B702723;
case 0x702726:c.instructions+=18;goto B702726;
case 0x70272c:c.instructions+=17;goto B70272c;
case 0x702732:c.instructions+=16;goto B702732;
case 0x702733:c.instructions+=15;goto B702733;
case 0x702739:c.instructions+=14;goto B702739;
case 0x70273a:c.instructions+=13;goto B70273a;
case 0x702740:c.instructions+=12;goto B702740;
case 0x702741:c.instructions+=11;goto B702741;
case 0x702747:c.instructions+=10;goto B702747;
case 0x702749:c.instructions+=9;goto B702749;
case 0x70274c:c.instructions+=8;goto B70274c;
case 0x702753:c.instructions+=7;goto B702753;
case 0x702755:c.instructions+=6;goto B702755;
case 0x702757:c.instructions+=5;goto B702757;
case 0x70275a:c.instructions+=4;goto B70275a;
case 0x70275c:c.instructions+=3;goto B70275c;
case 0x70275e:c.instructions+=2;goto B70275e;
case 0x702764:c.instructions+=1;goto B702764;
case 0x702766:goto L702766;
case 0x702768:c.instructions+=2;goto B702768;
case 0x70276a:c.instructions+=1;goto B70276a;
case 0x702770:goto L702770;
case 0x702776:c.instructions+=1;goto B702776;
case 0x702778:goto L702778;
case 0x70277a:c.instructions+=2;goto B70277a;
case 0x70277c:c.instructions+=1;goto B70277c;
case 0x702782:goto L702782;
case 0x702788:c.instructions+=1;goto B702788;
case 0x70278a:goto L70278a;
case 0x70278c:c.instructions+=2;goto B70278c;
case 0x70278f:c.instructions+=1;goto B70278f;
case 0x702795:goto L702795;
case 0x702797:c.instructions+=1;goto B702797;
case 0x702799:goto L702799;
case 0x70279b:c.instructions+=2;goto B70279b;
case 0x70279e:c.instructions+=1;goto B70279e;
case 0x7027a4:goto L7027a4;
case 0x7027aa:c.instructions+=2;goto B7027aa;
case 0x7027ac:c.instructions+=1;goto B7027ac;
case 0x7027ae:goto L7027ae;
case 0x7027b1:c.instructions+=1;goto B7027b1;
case 0x7027b6:goto L7027b6;
case 0x7027bc:c.instructions+=6;goto B7027bc;
case 0x7027be:c.instructions+=5;goto B7027be;
case 0x7027c0:c.instructions+=4;goto B7027c0;
case 0x7027c1:c.instructions+=3;goto B7027c1;
case 0x7027c3:c.instructions+=2;goto B7027c3;
case 0x7027c6:c.instructions+=1;goto B7027c6;
case 0x7027c8:goto L7027c8;
case 0x7027ce:c.instructions+=5;goto B7027ce;
case 0x7027d4:c.instructions+=4;goto B7027d4;
case 0x7027da:c.instructions+=3;goto B7027da;
case 0x7027dc:c.instructions+=2;goto B7027dc;
case 0x7027de:c.instructions+=1;goto B7027de;
case 0x7027e0:goto L7027e0;
case 0x7027e2:goto L7027e2;
case 0x7027e3:c.instructions+=1;goto B7027e3;
case 0x7027e8:goto L7027e8;
case 0x7027ee:c.instructions+=3;goto B7027ee;
case 0x7027f0:c.instructions+=2;goto B7027f0;
case 0x7027f2:c.instructions+=1;goto B7027f2;
case 0x7027f4:goto L7027f4;
case 0x7027fa:c.instructions+=3;goto B7027fa;
case 0x7027fc:c.instructions+=2;goto B7027fc;
case 0x7027fe:c.instructions+=1;goto B7027fe;
case 0x702800:goto L702800;
case 0x702806:c.instructions+=2;goto B702806;
case 0x702808:c.instructions+=1;goto B702808;
case 0x70280a:goto L70280a;
case 0x702810:c.instructions+=8;goto B702810;
case 0x702812:c.instructions+=7;goto B702812;
case 0x702818:c.instructions+=6;goto B702818;
case 0x70281a:c.instructions+=5;goto B70281a;
case 0x70281c:c.instructions+=4;goto B70281c;
case 0x70281d:c.instructions+=3;goto B70281d;
case 0x70281f:c.instructions+=2;goto B70281f;
case 0x702822:c.instructions+=1;goto B702822;
case 0x702824:goto L702824;
case 0x702826:c.instructions+=5;goto B702826;
case 0x70282c:c.instructions+=4;goto B70282c;
case 0x70282e:c.instructions+=3;goto B70282e;
case 0x702830:c.instructions+=2;goto B702830;
case 0x702833:c.instructions+=1;goto B702833;
case 0x702839:goto L702839;
case 0x70283b:c.instructions+=9;goto B70283b;
case 0x702841:c.instructions+=8;goto B702841;
case 0x702843:c.instructions+=7;goto B702843;
case 0x702845:c.instructions+=6;goto B702845;
case 0x702846:c.instructions+=5;goto B702846;
case 0x702848:c.instructions+=4;goto B702848;
case 0x70284e:c.instructions+=3;goto B70284e;
case 0x702850:c.instructions+=2;goto B702850;
case 0x702852:c.instructions+=1;goto B702852;
case 0x702854:goto L702854;
case 0x70285a:c.instructions+=3;goto B70285a;
case 0x70285c:c.instructions+=2;goto B70285c;
case 0x70285e:c.instructions+=1;goto B70285e;
case 0x702860:goto L702860;
case 0x702862:c.instructions+=1;goto B702862;
case 0x702867:goto L702867;
case 0x70286d:c.instructions+=3;goto B70286d;
case 0x70286f:c.instructions+=2;goto B70286f;
case 0x702871:c.instructions+=1;goto B702871;
case 0x702873:goto L702873;
case 0x702875:c.instructions+=1;goto B702875;
case 0x70287a:goto L70287a;
case 0x702880:c.instructions+=1;goto B702880;
case 0x702882:goto L702882;
case 0x702884:c.instructions+=2;goto B702884;
case 0x702886:c.instructions+=1;goto B702886;
case 0x702889:goto L702889;
case 0x70288a:c.instructions+=4;goto B70288a;
case 0x70288b:c.instructions+=3;goto B70288b;
case 0x70288c:c.instructions+=2;goto B70288c;
case 0x70288d:c.instructions+=1;goto B70288d;
case 0x70288e:goto L70288e;
case 0x70288f:c.instructions+=8;goto B70288f;
case 0x702891:c.instructions+=7;goto B702891;
case 0x702892:c.instructions+=6;goto B702892;
case 0x702893:c.instructions+=5;goto B702893;
case 0x702894:c.instructions+=4;goto B702894;
case 0x702897:c.instructions+=3;goto B702897;
case 0x702898:c.instructions+=2;goto B702898;
case 0x702899:c.instructions+=1;goto B702899;
case 0x70289e:goto L70289e;
case 0x7028a1:c.instructions+=2;goto B7028a1;
case 0x7028a2:c.instructions+=1;goto B7028a2;
case 0x7028a7:goto L7028a7;
case 0x7028a9:c.instructions+=5;goto B7028a9;
case 0x7028ab:c.instructions+=4;goto B7028ab;
case 0x7028ac:c.instructions+=3;goto B7028ac;
case 0x7028ad:c.instructions+=2;goto B7028ad;
case 0x7028b3:c.instructions+=1;goto B7028b3;
case 0x7028b5:goto L7028b5;
case 0x7028bb:c.instructions+=1;goto B7028bb;
case 0x7028c1:goto L7028c1;
case 0x7028c7:c.instructions+=1;goto B7028c7;
case 0x7028cd:goto L7028cd;
case 0x7028d3:c.instructions+=1;goto B7028d3;
case 0x7028d5:goto L7028d5;
case 0x7028db:c.instructions+=6;goto B7028db;
case 0x7028e1:c.instructions+=5;goto B7028e1;
case 0x7028e5:c.instructions+=4;goto B7028e5;
case 0x7028eb:c.instructions+=3;goto B7028eb;
case 0x7028ec:c.instructions+=2;goto B7028ec;
case 0x7028ed:c.instructions+=1;goto B7028ed;
case 0x7028f2:goto L7028f2;
case 0x7028f8:c.instructions+=5;goto B7028f8;
case 0x7028fe:c.instructions+=4;goto B7028fe;
case 0x702901:c.instructions+=3;goto B702901;
case 0x702904:c.instructions+=2;goto B702904;
case 0x70290a:c.instructions+=1;goto B70290a;
case 0x70290f:goto L70290f;
case 0x702912:goto L702912;
case 0x702918:c.instructions+=8;goto B702918;
case 0x70291d:c.instructions+=7;goto B70291d;
case 0x70291f:c.instructions+=6;goto B70291f;
case 0x702921:c.instructions+=5;goto B702921;
case 0x702927:c.instructions+=4;goto B702927;
case 0x70292d:c.instructions+=3;goto B70292d;
case 0x702933:c.instructions+=2;goto B702933;
case 0x702939:c.instructions+=1;goto B702939;
case 0x70293b:goto L70293b;
case 0x702940:c.instructions+=7;goto B702940;
case 0x702941:c.instructions+=6;goto B702941;
case 0x702948:c.instructions+=5;goto B702948;
case 0x702949:c.instructions+=4;goto B702949;
case 0x702950:c.instructions+=3;goto B702950;
case 0x702951:c.instructions+=2;goto B702951;
case 0x702957:c.instructions+=1;goto B702957;
case 0x70295c:goto L70295c;
case 0x70295f:c.instructions+=2;goto B70295f;
case 0x702960:c.instructions+=1;goto B702960;
case 0x702965:goto L702965;
case 0x702966:c.instructions+=1;goto B702966;
case 0x70296b:goto L70296b;
case 0x70296e:c.instructions+=1;goto B70296e;
case 0x702970:goto L702970;
case 0x702973:c.instructions+=1;goto B702973;
case 0x702975:goto L702975;
case 0x702978:c.instructions+=7;goto B702978;
case 0x702979:c.instructions+=6;goto B702979;
case 0x702980:c.instructions+=5;goto B702980;
case 0x702981:c.instructions+=4;goto B702981;
case 0x702988:c.instructions+=3;goto B702988;
case 0x702989:c.instructions+=2;goto B702989;
case 0x70298f:c.instructions+=1;goto B70298f;
case 0x702994:goto L702994;
case 0x702997:c.instructions+=2;goto B702997;
case 0x702998:c.instructions+=1;goto B702998;
case 0x70299d:goto L70299d;
case 0x70299e:c.instructions+=1;goto B70299e;
case 0x7029a3:goto L7029a3;
case 0x7029a5:goto L7029a5;
case 0x7029a6:c.instructions+=6;goto B7029a6;
case 0x7029ad:c.instructions+=5;goto B7029ad;
case 0x7029ae:c.instructions+=4;goto B7029ae;
case 0x7029b5:c.instructions+=3;goto B7029b5;
case 0x7029b6:c.instructions+=2;goto B7029b6;
case 0x7029bc:c.instructions+=1;goto B7029bc;
case 0x7029c1:goto L7029c1;
case 0x7029c4:c.instructions+=2;goto B7029c4;
case 0x7029c5:c.instructions+=1;goto B7029c5;
case 0x7029ca:goto L7029ca;
case 0x7029cd:goto L7029cd;
case 0x7029d3:c.instructions+=2;goto B7029d3;
case 0x7029d5:c.instructions+=1;goto B7029d5;
case 0x7029d7:goto L7029d7;
case 0x7029dd:c.instructions+=6;goto B7029dd;
case 0x7029de:c.instructions+=5;goto B7029de;
case 0x7029df:c.instructions+=4;goto B7029df;
case 0x7029e5:c.instructions+=3;goto B7029e5;
case 0x7029e6:c.instructions+=2;goto B7029e6;
case 0x7029ec:c.instructions+=1;goto B7029ec;
case 0x7029f2:goto L7029f2;
case 0x7029f5:goto L7029f5;
case 0x7029fb:c.instructions+=4;goto B7029fb;
case 0x702a01:c.instructions+=3;goto B702a01;
case 0x702a03:c.instructions+=2;goto B702a03;
case 0x702a04:c.instructions+=1;goto B702a04;
case 0x702a0a:goto L702a0a;
case 0x702a10:c.instructions+=2;goto B702a10;
case 0x702a16:c.instructions+=1;goto B702a16;
case 0x702a1c:goto L702a1c;
case 0x702a1f:c.instructions+=15;goto B702a1f;
case 0x702a21:c.instructions+=14;goto B702a21;
case 0x702a27:c.instructions+=13;goto B702a27;
case 0x702a2a:c.instructions+=12;goto B702a2a;
case 0x702a30:c.instructions+=11;goto B702a30;
case 0x702a33:c.instructions+=10;goto B702a33;
case 0x702a39:c.instructions+=9;goto B702a39;
case 0x702a3b:c.instructions+=8;goto B702a3b;
case 0x702a3e:c.instructions+=7;goto B702a3e;
case 0x702a44:c.instructions+=6;goto B702a44;
case 0x702a46:c.instructions+=5;goto B702a46;
case 0x702a49:c.instructions+=4;goto B702a49;
case 0x702a4f:c.instructions+=3;goto B702a4f;
case 0x702a52:c.instructions+=2;goto B702a52;
case 0x702a58:c.instructions+=1;goto B702a58;
case 0x702a5a:goto L702a5a;
case 0x702a60:c.instructions+=1;goto B702a60;
case 0x702a62:goto L702a62;
case 0x702a68:c.instructions+=1;goto B702a68;
case 0x702a6a:goto L702a6a;
case 0x702a70:c.instructions+=22;goto B702a70;
case 0x702a71:c.instructions+=21;goto B702a71;
case 0x702a74:c.instructions+=20;goto B702a74;
case 0x702a77:c.instructions+=19;goto B702a77;
case 0x702a7d:c.instructions+=18;goto B702a7d;
case 0x702a83:c.instructions+=17;goto B702a83;
case 0x702a86:c.instructions+=16;goto B702a86;
case 0x702a8c:c.instructions+=15;goto B702a8c;
case 0x702a92:c.instructions+=14;goto B702a92;
case 0x702a93:c.instructions+=13;goto B702a93;
case 0x702a96:c.instructions+=12;goto B702a96;
case 0x702a99:c.instructions+=11;goto B702a99;
case 0x702a9f:c.instructions+=10;goto B702a9f;
case 0x702aa2:c.instructions+=9;goto B702aa2;
case 0x702aa8:c.instructions+=8;goto B702aa8;
case 0x702aae:c.instructions+=7;goto B702aae;
case 0x702aaf:c.instructions+=6;goto B702aaf;
case 0x702ab2:c.instructions+=5;goto B702ab2;
case 0x702ab5:c.instructions+=4;goto B702ab5;
case 0x702abb:c.instructions+=3;goto B702abb;
case 0x702abe:c.instructions+=2;goto B702abe;
case 0x702ac4:c.instructions+=1;goto B702ac4;
case 0x702aca:goto L702aca;
case 0x702acd:c.instructions+=1;goto B702acd;
case 0x702ad2:goto L702ad2;
case 0x702ad8:c.instructions+=23;goto B702ad8;
case 0x702ad9:c.instructions+=22;goto B702ad9;
case 0x702adc:c.instructions+=21;goto B702adc;
case 0x702adf:c.instructions+=20;goto B702adf;
case 0x702ae5:c.instructions+=19;goto B702ae5;
case 0x702aeb:c.instructions+=18;goto B702aeb;
case 0x702aee:c.instructions+=17;goto B702aee;
case 0x702af4:c.instructions+=16;goto B702af4;
case 0x702afa:c.instructions+=15;goto B702afa;
case 0x702afb:c.instructions+=14;goto B702afb;
case 0x702afe:c.instructions+=13;goto B702afe;
case 0x702b01:c.instructions+=12;goto B702b01;
case 0x702b07:c.instructions+=11;goto B702b07;
case 0x702b0a:c.instructions+=10;goto B702b0a;
case 0x702b10:c.instructions+=9;goto B702b10;
case 0x702b16:c.instructions+=8;goto B702b16;
case 0x702b17:c.instructions+=7;goto B702b17;
case 0x702b1a:c.instructions+=6;goto B702b1a;
case 0x702b1d:c.instructions+=5;goto B702b1d;
case 0x702b23:c.instructions+=4;goto B702b23;
case 0x702b26:c.instructions+=3;goto B702b26;
case 0x702b2c:c.instructions+=2;goto B702b2c;
case 0x702b32:c.instructions+=1;goto B702b32;
case 0x702b34:goto L702b34;
case 0x702b37:c.instructions+=35;goto B702b37;
case 0x702b3a:c.instructions+=34;goto B702b3a;
case 0x702b3c:c.instructions+=33;goto B702b3c;
case 0x702b42:c.instructions+=32;goto B702b42;
case 0x702b44:c.instructions+=31;goto B702b44;
case 0x702b47:c.instructions+=30;goto B702b47;
case 0x702b4a:c.instructions+=29;goto B702b4a;
case 0x702b4c:c.instructions+=28;goto B702b4c;
case 0x702b4d:c.instructions+=27;goto B702b4d;
case 0x702b4f:c.instructions+=26;goto B702b4f;
case 0x702b51:c.instructions+=25;goto B702b51;
case 0x702b54:c.instructions+=24;goto B702b54;
case 0x702b55:c.instructions+=23;goto B702b55;
case 0x702b57:c.instructions+=22;goto B702b57;
case 0x702b59:c.instructions+=21;goto B702b59;
case 0x702b5c:c.instructions+=20;goto B702b5c;
case 0x702b5f:c.instructions+=19;goto B702b5f;
case 0x702b61:c.instructions+=18;goto B702b61;
case 0x702b64:c.instructions+=17;goto B702b64;
case 0x702b67:c.instructions+=16;goto B702b67;
case 0x702b6a:c.instructions+=15;goto B702b6a;
case 0x702b70:c.instructions+=14;goto B702b70;
case 0x702b73:c.instructions+=13;goto B702b73;
case 0x702b76:c.instructions+=12;goto B702b76;
case 0x702b79:c.instructions+=11;goto B702b79;
case 0x702b7f:c.instructions+=10;goto B702b7f;
case 0x702b81:c.instructions+=9;goto B702b81;
case 0x702b83:c.instructions+=8;goto B702b83;
case 0x702b86:c.instructions+=7;goto B702b86;
case 0x702b8c:c.instructions+=6;goto B702b8c;
case 0x702b8d:c.instructions+=5;goto B702b8d;
case 0x702b90:c.instructions+=4;goto B702b90;
case 0x702b96:c.instructions+=3;goto B702b96;
case 0x702b99:c.instructions+=2;goto B702b99;
case 0x702ba0:c.instructions+=1;goto B702ba0;
case 0x702ba2:goto L702ba2;
case 0x702ba8:c.instructions+=1;goto B702ba8;
case 0x702baa:goto L702baa;
case 0x702bb0:goto L702bb0;
case 0x702bb6:c.instructions+=1;goto B702bb6;
case 0x702bbb:goto L702bbb;
case 0x702bbe:c.instructions+=49;goto B702bbe;
case 0x702bc4:c.instructions+=48;goto B702bc4;
case 0x702bc6:c.instructions+=47;goto B702bc6;
case 0x702bcc:c.instructions+=46;goto B702bcc;
case 0x702bcf:c.instructions+=45;goto B702bcf;
case 0x702bd1:c.instructions+=44;goto B702bd1;
case 0x702bd5:c.instructions+=43;goto B702bd5;
case 0x702bd7:c.instructions+=42;goto B702bd7;
case 0x702bd9:c.instructions+=41;goto B702bd9;
case 0x702bdc:c.instructions+=40;goto B702bdc;
case 0x702be2:c.instructions+=39;goto B702be2;
case 0x702be5:c.instructions+=38;goto B702be5;
case 0x702be7:c.instructions+=37;goto B702be7;
case 0x702bed:c.instructions+=36;goto B702bed;
case 0x702bf0:c.instructions+=35;goto B702bf0;
case 0x702bf3:c.instructions+=34;goto B702bf3;
case 0x702bf6:c.instructions+=33;goto B702bf6;
case 0x702bfc:c.instructions+=32;goto B702bfc;
case 0x702bfe:c.instructions+=31;goto B702bfe;
case 0x702c00:c.instructions+=30;goto B702c00;
case 0x702c02:c.instructions+=29;goto B702c02;
case 0x702c05:c.instructions+=28;goto B702c05;
case 0x702c07:c.instructions+=27;goto B702c07;
case 0x702c0a:c.instructions+=26;goto B702c0a;
case 0x702c10:c.instructions+=25;goto B702c10;
case 0x702c12:c.instructions+=24;goto B702c12;
case 0x702c14:c.instructions+=23;goto B702c14;
case 0x702c16:c.instructions+=22;goto B702c16;
case 0x702c18:c.instructions+=21;goto B702c18;
case 0x702c1b:c.instructions+=20;goto B702c1b;
case 0x702c21:c.instructions+=19;goto B702c21;
case 0x702c27:c.instructions+=18;goto B702c27;
case 0x702c29:c.instructions+=17;goto B702c29;
case 0x702c2b:c.instructions+=16;goto B702c2b;
case 0x702c2e:c.instructions+=15;goto B702c2e;
case 0x702c30:c.instructions+=14;goto B702c30;
case 0x702c34:c.instructions+=13;goto B702c34;
case 0x702c36:c.instructions+=12;goto B702c36;
case 0x702c38:c.instructions+=11;goto B702c38;
case 0x702c3a:c.instructions+=10;goto B702c3a;
case 0x702c3c:c.instructions+=9;goto B702c3c;
case 0x702c3f:c.instructions+=8;goto B702c3f;
case 0x702c45:c.instructions+=7;goto B702c45;
case 0x702c47:c.instructions+=6;goto B702c47;
case 0x702c4a:c.instructions+=5;goto B702c4a;
case 0x702c50:c.instructions+=4;goto B702c50;
case 0x702c52:c.instructions+=3;goto B702c52;
case 0x702c55:c.instructions+=2;goto B702c55;
case 0x702c58:c.instructions+=1;goto B702c58;
case 0x702c5a:goto L702c5a;
case 0x702c60:goto L702c60;
case 0x702c63:c.instructions+=13;goto B702c63;
case 0x702c66:c.instructions+=12;goto B702c66;
case 0x702c68:c.instructions+=11;goto B702c68;
case 0x702c6e:c.instructions+=10;goto B702c6e;
case 0x702c70:c.instructions+=9;goto B702c70;
case 0x702c72:c.instructions+=8;goto B702c72;
case 0x702c73:c.instructions+=7;goto B702c73;
case 0x702c75:c.instructions+=6;goto B702c75;
case 0x702c7b:c.instructions+=5;goto B702c7b;
case 0x702c7d:c.instructions+=4;goto B702c7d;
case 0x702c7e:c.instructions+=3;goto B702c7e;
case 0x702c85:c.instructions+=2;goto B702c85;
case 0x702c87:c.instructions+=1;goto B702c87;
case 0x702c89:goto L702c89;
case 0x702c8b:c.instructions+=1;goto B702c8b;
case 0x702c8d:goto L702c8d;
case 0x702c8f:c.instructions+=4;goto B702c8f;
case 0x702c92:c.instructions+=3;goto B702c92;
case 0x702c94:c.instructions+=2;goto B702c94;
case 0x702c97:c.instructions+=1;goto B702c97;
case 0x702c99:goto L702c99;
case 0x702c9a:c.instructions+=3;goto B702c9a;
case 0x702c9b:c.instructions+=2;goto B702c9b;
case 0x702c9c:c.instructions+=1;goto B702c9c;
case 0x702c9d:goto L702c9d;
case 0x702c9e:c.instructions+=6;goto B702c9e;
case 0x702ca0:c.instructions+=5;goto B702ca0;
case 0x702ca1:c.instructions+=4;goto B702ca1;
case 0x702ca2:c.instructions+=3;goto B702ca2;
case 0x702ca5:c.instructions+=2;goto B702ca5;
case 0x702ca6:c.instructions+=1;goto B702ca6;
case 0x702cab:goto L702cab;
case 0x702cae:c.instructions+=5;goto B702cae;
case 0x702cb1:c.instructions+=4;goto B702cb1;
case 0x702cb7:c.instructions+=3;goto B702cb7;
case 0x702cbd:c.instructions+=2;goto B702cbd;
case 0x702cbe:c.instructions+=1;goto B702cbe;
case 0x702cc3:goto L702cc3;
case 0x702cc4:c.instructions+=1;goto B702cc4;
case 0x702cc9:goto L702cc9;
case 0x702ccc:c.instructions+=2;goto B702ccc;
case 0x702cce:c.instructions+=1;goto B702cce;
case 0x702cd0:goto L702cd0;
case 0x702cd3:c.instructions+=2;goto B702cd3;
case 0x702cd4:c.instructions+=1;goto B702cd4;
case 0x702cd5:goto L702cd5;
case 0x702cd6:c.instructions+=4;goto B702cd6;
case 0x702cd8:c.instructions+=3;goto B702cd8;
case 0x702cde:c.instructions+=2;goto B702cde;
case 0x702cdf:c.instructions+=1;goto B702cdf;
case 0x702ce1:goto L702ce1;
case 0x702ce8:c.instructions+=1;goto B702ce8;
case 0x702cea:goto L702cea;
case 0x702cf0:c.instructions+=3;goto B702cf0;
case 0x702cf3:c.instructions+=2;goto B702cf3;
case 0x702cf9:c.instructions+=1;goto B702cf9;
case 0x702cfb:goto L702cfb;
case 0x702d01:c.instructions+=3;goto B702d01;
case 0x702d07:c.instructions+=2;goto B702d07;
case 0x702d0d:c.instructions+=1;goto B702d0d;
case 0x702d0f:goto L702d0f;
case 0x702d10:c.instructions+=3;goto B702d10;
case 0x702d16:c.instructions+=2;goto B702d16;
case 0x702d17:c.instructions+=1;goto B702d17;
case 0x702d1c:goto L702d1c;
case 0x702d1d:c.instructions+=1;goto B702d1d;
case 0x702d1e:goto L702d1e;
case 0x702d1f:c.instructions+=1;goto B702d1f;
case 0x702d24:goto L702d24;
case 0x702d2a:c.instructions+=7;goto B702d2a;
case 0x702d30:c.instructions+=6;goto B702d30;
case 0x702d32:c.instructions+=5;goto B702d32;
case 0x702d33:c.instructions+=4;goto B702d33;
case 0x702d39:c.instructions+=3;goto B702d39;
case 0x702d3f:c.instructions+=2;goto B702d3f;
case 0x702d41:c.instructions+=1;goto B702d41;
case 0x702d46:goto L702d46;
case 0x702d49:c.instructions+=2;goto B702d49;
case 0x702d50:c.instructions+=1;goto B702d50;
case 0x702d52:goto L702d52;
case 0x702d58:c.instructions+=1;goto B702d58;
case 0x702d5a:goto L702d5a;
case 0x702d60:c.instructions+=6;goto B702d60;
case 0x702d66:c.instructions+=5;goto B702d66;
case 0x702d6c:c.instructions+=4;goto B702d6c;
case 0x702d72:c.instructions+=3;goto B702d72;
case 0x702d75:c.instructions+=2;goto B702d75;
case 0x702d77:c.instructions+=1;goto B702d77;
case 0x702d7a:goto L702d7a;
case 0x702d7c:goto L702d7c;
case 0x702d7e:c.instructions+=1;goto B702d7e;
case 0x702d81:goto L702d81;
case 0x702d83:goto L702d83;
case 0x702d85:goto L702d85;
case 0x702d8b:goto L702d8b;
case 0x702d92:c.instructions+=1;goto B702d92;
case 0x702d94:goto L702d94;
case 0x702d9a:c.instructions+=3;goto B702d9a;
case 0x702d9c:c.instructions+=2;goto B702d9c;
case 0x702da2:c.instructions+=1;goto B702da2;
case 0x702da4:goto L702da4;
case 0x702daa:c.instructions+=7;goto B702daa;
case 0x702dac:c.instructions+=6;goto B702dac;
case 0x702db2:c.instructions+=5;goto B702db2;
case 0x702db4:c.instructions+=4;goto B702db4;
case 0x702db7:c.instructions+=3;goto B702db7;
case 0x702dbb:c.instructions+=2;goto B702dbb;
case 0x702dbe:c.instructions+=1;goto B702dbe;
case 0x702dc0:goto L702dc0;
case 0x702dc3:c.instructions+=2;goto B702dc3;
case 0x702dc4:c.instructions+=1;goto B702dc4;
case 0x702dc9:goto L702dc9;
case 0x702dcc:c.instructions+=9;goto B702dcc;
case 0x702dcf:c.instructions+=8;goto B702dcf;
case 0x702dd1:c.instructions+=7;goto B702dd1;
case 0x702dd7:c.instructions+=6;goto B702dd7;
case 0x702ddd:c.instructions+=5;goto B702ddd;
case 0x702dde:c.instructions+=4;goto B702dde;
case 0x702de0:c.instructions+=3;goto B702de0;
case 0x702de2:c.instructions+=2;goto B702de2;
case 0x702de8:c.instructions+=1;goto B702de8;
case 0x702dea:goto L702dea;
case 0x702dec:c.instructions+=1;goto B702dec;
case 0x702dee:goto L702dee;
case 0x702df1:c.instructions+=3;goto B702df1;
case 0x702df3:c.instructions+=2;goto B702df3;
case 0x702df6:c.instructions+=1;goto B702df6;
case 0x702df8:goto L702df8;
case 0x702dfe:c.instructions+=3;goto B702dfe;
case 0x702e00:c.instructions+=2;goto B702e00;
case 0x702e06:c.instructions+=1;goto B702e06;
case 0x702e08:goto L702e08;
case 0x702e0d:c.instructions+=2;goto B702e0d;
case 0x702e12:c.instructions+=1;goto B702e12;
case 0x702e17:goto L702e17;
case 0x702e1d:c.instructions+=6;goto B702e1d;
case 0x702e1f:c.instructions+=5;goto B702e1f;
case 0x702e21:c.instructions+=4;goto B702e21;
case 0x702e27:c.instructions+=3;goto B702e27;
case 0x702e2c:c.instructions+=2;goto B702e2c;
case 0x702e2d:c.instructions+=1;goto B702e2d;
case 0x702e32:goto L702e32;
case 0x702e33:c.instructions+=1;goto B702e33;
case 0x702e38:goto L702e38;
case 0x702e3b:goto L702e3b;
case 0x702e41:c.instructions+=5;goto B702e41;
case 0x702e42:c.instructions+=4;goto B702e42;
case 0x702e44:c.instructions+=3;goto B702e44;
case 0x702e45:c.instructions+=2;goto B702e45;
case 0x702e46:c.instructions+=1;goto B702e46;
case 0x702e47:goto L702e47;
case 0x702e48:c.instructions+=6;goto B702e48;
case 0x702e4a:c.instructions+=5;goto B702e4a;
case 0x702e4b:c.instructions+=4;goto B702e4b;
case 0x702e4e:c.instructions+=3;goto B702e4e;
case 0x702e51:c.instructions+=2;goto B702e51;
case 0x702e54:c.instructions+=1;goto B702e54;
case 0x702e59:goto L702e59;
case 0x702e5a:c.instructions+=4;goto B702e5a;
case 0x702e5b:c.instructions+=3;goto B702e5b;
case 0x702e5c:c.instructions+=2;goto B702e5c;
case 0x702e5d:c.instructions+=1;goto B702e5d;
case 0x702e5e:goto L702e5e;
case 0x702e5f:c.instructions+=6;goto B702e5f;
case 0x702e61:c.instructions+=5;goto B702e61;
case 0x702e62:c.instructions+=4;goto B702e62;
case 0x702e65:c.instructions+=3;goto B702e65;
case 0x702e67:c.instructions+=2;goto B702e67;
case 0x702e69:c.instructions+=1;goto B702e69;
case 0x702e6b:goto L702e6b;
case 0x702e70:c.instructions+=2;goto B702e70;
case 0x702e71:c.instructions+=1;goto B702e71;
case 0x702e76:goto L702e76;
case 0x702e78:c.instructions+=3;goto B702e78;
case 0x702e7d:c.instructions+=2;goto B702e7d;
case 0x702e7e:c.instructions+=1;goto B702e7e;
case 0x702e83:goto L702e83;
case 0x702e85:c.instructions+=1;goto B702e85;
case 0x702e8a:goto L702e8a;
case 0x702e8c:c.instructions+=1;goto B702e8c;
case 0x702e91:goto L702e91;
case 0x702e92:c.instructions+=1;goto B702e92;
case 0x702e97:goto L702e97;
case 0x702e9a:goto L702e9a;
case 0x702e9c:c.instructions+=4;goto B702e9c;
case 0x702e9d:c.instructions+=3;goto B702e9d;
case 0x702e9e:c.instructions+=2;goto B702e9e;
case 0x702e9f:c.instructions+=1;goto B702e9f;
case 0x702ea0:goto L702ea0;
case 0x702ea1:c.instructions+=5;goto B702ea1;
case 0x702ea3:c.instructions+=4;goto B702ea3;
case 0x702ea6:c.instructions+=3;goto B702ea6;
case 0x702eac:c.instructions+=2;goto B702eac;
case 0x702ead:c.instructions+=1;goto B702ead;
case 0x702eae:goto L702eae;
case 0x702eaf:c.instructions+=6;goto B702eaf;
case 0x702eb1:c.instructions+=5;goto B702eb1;
case 0x702eb4:c.instructions+=4;goto B702eb4;
case 0x702eba:c.instructions+=3;goto B702eba;
case 0x702ec0:c.instructions+=2;goto B702ec0;
case 0x702ec1:c.instructions+=1;goto B702ec1;
case 0x702ec2:goto L702ec2;
case 0x702ec3:c.instructions+=6;goto B702ec3;
case 0x702ec5:c.instructions+=5;goto B702ec5;
case 0x702ec8:c.instructions+=4;goto B702ec8;
case 0x702ece:c.instructions+=3;goto B702ece;
case 0x702ed4:c.instructions+=2;goto B702ed4;
case 0x702ed5:c.instructions+=1;goto B702ed5;
case 0x702ed6:goto L702ed6;
case 0x702ed7:c.instructions+=3;goto B702ed7;
case 0x702ed9:c.instructions+=2;goto B702ed9;
case 0x702eda:c.instructions+=1;goto B702eda;
case 0x702edf:goto L702edf;
case 0x702ee0:c.instructions+=3;goto B702ee0;
case 0x702ee2:c.instructions+=2;goto B702ee2;
case 0x702ee5:c.instructions+=1;goto B702ee5;
case 0x702eea:goto L702eea;
case 0x702eeb:c.instructions+=2;goto B702eeb;
case 0x702eec:c.instructions+=1;goto B702eec;
case 0x702eed:goto L702eed;
case 0x702eee:c.instructions+=3;goto B702eee;
case 0x702ef0:c.instructions+=2;goto B702ef0;
case 0x702ef1:c.instructions+=1;goto B702ef1;
case 0x702ef6:goto L702ef6;
case 0x702ef7:c.instructions+=15;goto B702ef7;
case 0x702ef9:c.instructions+=14;goto B702ef9;
case 0x702efc:c.instructions+=13;goto B702efc;
case 0x702eff:c.instructions+=12;goto B702eff;
case 0x702f00:c.instructions+=11;goto B702f00;
case 0x702f02:c.instructions+=10;goto B702f02;
case 0x702f04:c.instructions+=9;goto B702f04;
case 0x702f05:c.instructions+=8;goto B702f05;
case 0x702f06:c.instructions+=7;goto B702f06;
case 0x702f09:c.instructions+=6;goto B702f09;
case 0x702f0b:c.instructions+=5;goto B702f0b;
case 0x702f0d:c.instructions+=4;goto B702f0d;
case 0x702f10:c.instructions+=3;goto B702f10;
case 0x702f12:c.instructions+=2;goto B702f12;
case 0x702f15:c.instructions+=1;goto B702f15;
case 0x702f18:goto L702f18;
case 0x702f1a:goto L702f1a;
case 0x702f1c:c.instructions+=1;goto B702f1c;
case 0x702f1f:goto L702f1f;
case 0x702f21:goto L702f21;
case 0x702f22:c.instructions+=5;goto B702f22;
case 0x702f24:c.instructions+=4;goto B702f24;
case 0x702f25:c.instructions+=3;goto B702f25;
case 0x702f26:c.instructions+=2;goto B702f26;
case 0x702f27:c.instructions+=1;goto B702f27;
case 0x702f28:goto L702f28;
case 0x702f29:c.instructions+=8;goto B702f29;
case 0x702f2b:c.instructions+=7;goto B702f2b;
case 0x702f2c:c.instructions+=6;goto B702f2c;
case 0x702f2f:c.instructions+=5;goto B702f2f;
case 0x702f33:c.instructions+=4;goto B702f33;
case 0x702f34:c.instructions+=3;goto B702f34;
case 0x702f37:c.instructions+=2;goto B702f37;
case 0x702f38:c.instructions+=1;goto B702f38;
case 0x702f3d:goto L702f3d;
case 0x702f3f:c.instructions+=4;goto B702f3f;
case 0x702f41:c.instructions+=3;goto B702f41;
case 0x702f42:c.instructions+=2;goto B702f42;
case 0x702f43:c.instructions+=1;goto B702f43;
case 0x702f45:goto L702f45;
case 0x702f46:c.instructions+=3;goto B702f46;
case 0x702f48:c.instructions+=2;goto B702f48;
case 0x702f49:c.instructions+=1;goto B702f49;
case 0x702f4e:goto L702f4e;
case 0x702f51:goto L702f51;
case 0x702f53:c.instructions+=4;goto B702f53;
case 0x702f54:c.instructions+=3;goto B702f54;
case 0x702f55:c.instructions+=2;goto B702f55;
case 0x702f56:c.instructions+=1;goto B702f56;
case 0x702f57:goto L702f57;
case 0x702f58:c.instructions+=9;goto B702f58;
case 0x702f5a:c.instructions+=8;goto B702f5a;
case 0x702f5d:c.instructions+=7;goto B702f5d;
case 0x702f5e:c.instructions+=6;goto B702f5e;
case 0x702f61:c.instructions+=5;goto B702f61;
case 0x702f62:c.instructions+=4;goto B702f62;
case 0x702f65:c.instructions+=3;goto B702f65;
case 0x702f67:c.instructions+=2;goto B702f67;
case 0x702f69:c.instructions+=1;goto B702f69;
case 0x702f6c:goto L702f6c;
case 0x702f6e:goto L702f6e;
case 0x702f70:c.instructions+=1;goto B702f70;
case 0x702f73:goto L702f73;
case 0x702f75:goto L702f75;
case 0x702f76:c.instructions+=4;goto B702f76;
case 0x702f78:c.instructions+=3;goto B702f78;
case 0x702f79:c.instructions+=2;goto B702f79;
case 0x702f7a:c.instructions+=1;goto B702f7a;
case 0x702f7b:goto L702f7b;
case 0x702f7c:c.instructions+=4;goto B702f7c;
case 0x702f7e:c.instructions+=3;goto B702f7e;
case 0x702f81:c.instructions+=2;goto B702f81;
case 0x702f82:c.instructions+=1;goto B702f82;
case 0x702f85:goto L702f85;
case 0x702f87:c.instructions+=3;goto B702f87;
case 0x702f89:c.instructions+=2;goto B702f89;
case 0x702f8b:c.instructions+=1;goto B702f8b;
case 0x702f8d:goto L702f8d;
case 0x702f8f:c.instructions+=1;goto B702f8f;
case 0x702f91:goto L702f91;
case 0x702f94:c.instructions+=3;goto B702f94;
case 0x702f96:c.instructions+=2;goto B702f96;
case 0x702f99:c.instructions+=1;goto B702f99;
case 0x702f9b:goto L702f9b;
case 0x702f9c:c.instructions+=5;goto B702f9c;
case 0x702f9d:c.instructions+=4;goto B702f9d;
case 0x702f9e:c.instructions+=3;goto B702f9e;
case 0x702f9f:c.instructions+=2;goto B702f9f;
case 0x702fa1:c.instructions+=1;goto B702fa1;
case 0x702fa3:goto L702fa3;
case 0x702fa5:c.instructions+=1;goto B702fa5;
case 0x702fa7:goto L702fa7;
case 0x702fa9:c.instructions+=1;goto B702fa9;
case 0x702fac:goto L702fac;
case 0x702fad:c.instructions+=2;goto B702fad;
case 0x702fae:c.instructions+=1;goto B702fae;
case 0x702fb0:goto L702fb0;
case 0x702fb1:c.instructions+=3;goto B702fb1;
case 0x702fb3:c.instructions+=2;goto B702fb3;
case 0x702fb8:c.instructions+=1;goto B702fb8;
case 0x702fbd:goto L702fbd;
case 0x702fbf:c.instructions+=1;goto B702fbf;
case 0x702fc1:goto L702fc1;
case 0x702fc3:c.instructions+=1;goto B702fc3;
case 0x702fc5:goto L702fc5;
case 0x702fc7:c.instructions+=2;goto B702fc7;
case 0x702fc9:c.instructions+=1;goto B702fc9;
case 0x702fcb:goto L702fcb;
case 0x702fcd:goto L702fcd;
case 0x702fd3:c.instructions+=3;goto B702fd3;
case 0x702fd4:c.instructions+=2;goto B702fd4;
case 0x702fda:c.instructions+=1;goto B702fda;
case 0x702fdc:goto L702fdc;
case 0x702fdf:c.instructions+=9;goto B702fdf;
case 0x702fe2:c.instructions+=8;goto B702fe2;
case 0x702fe7:c.instructions+=7;goto B702fe7;
case 0x702fea:c.instructions+=6;goto B702fea;
case 0x702fef:c.instructions+=5;goto B702fef;
case 0x702ff4:c.instructions+=4;goto B702ff4;
case 0x702ffa:c.instructions+=3;goto B702ffa;
case 0x702ffc:c.instructions+=2;goto B702ffc;
case 0x702fff:c.instructions+=1;goto B702fff;
default:missing_instruction(c.pc);}
B702004:L702004:{c.instructions+=4;NFSU2_TR(0x702004);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B702006:{NFSU2_TR(0x702006);
w4(R+24,u32(0x816314ull));
}
B70200b:{NFSU2_TR(0x70200b);
__builtin_memmove(gp(0x816214),(R+0),4);
}
B702010:{NFSU2_TR(0x702010);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702015ull));
TAIL_STATIC(0x701d9du,701);
}
B702015:L702015:{c.instructions+=6;NFSU2_TR(0x702015);
__builtin_memmove((R+0),gp(0x816214),4);
}
B70201a:{NFSU2_TR(0x70201a);
__builtin_memmove((R+8),gp(0x816210),4);
}
B702020:{NFSU2_TR(0x702020);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B702022:{NFSU2_TR(0x702022);
w4(R+24,u32(0x816338ull));
}
B702027:{NFSU2_TR(0x702027);
__builtin_memmove(gp(0x816214),(R+0),4);
}
B70202c:{NFSU2_TR(0x70202c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702031ull));
TAIL_STATIC(0x701d9du,701);
}
B702031:L702031:{c.instructions+=5;NFSU2_TR(0x702031);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B702032:{NFSU2_TR(0x702032);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B702033:{NFSU2_TR(0x702033);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B702034:{NFSU2_TR(0x702034);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B702035:{NFSU2_TR(0x702035);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B702040:L702040:{c.instructions+=17;NFSU2_TR(0x702040);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702041:{NFSU2_TR(0x702041);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702042:{NFSU2_TR(0x702042);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702043:{NFSU2_TR(0x702043);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702044:{NFSU2_TR(0x702044);
__builtin_memmove((R+24),gp(0x8b3d40),4);
}
B70204a:{NFSU2_TR(0x70204a);
__builtin_memmove((R+28),gp(0x8b2f30),4);
}
B702050:{NFSU2_TR(0x702050);
__builtin_memmove((R+20),gp(0x8b2328),4);
}
B702056:{NFSU2_TR(0x702056);
__builtin_memmove((R+0),(R+28),4);
}
B702058:{NFSU2_TR(0x702058);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B70205b:{NFSU2_TR(0x70205b);
w4(R+12,u32(0x816360ull));
}
B702060:{NFSU2_TR(0x702060);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(m4(0x8b2730)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B702066:{NFSU2_TR(0x702066);
__builtin_memmove(gp(0x81635c),(R+0),4);
}
B70206b:{NFSU2_TR(0x70206b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70206d:{NFSU2_TR(0x70206d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B702070:{NFSU2_TR(0x702070);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x8ull))));
}
B702073:{NFSU2_TR(0x702073);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B702076:{NFSU2_TR(0x702076);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70208c;}}
}
B702078:L702078:{c.instructions+=7;NFSU2_TR(0x702078);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+0),(U+0),2);
}
B70207b:{NFSU2_TR(0x70207b);
w4(R+4,u32(0x10ull));
}
B702080:{NFSU2_TR(0x702080);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B702082:{NFSU2_TR(0x702082);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B702085:{NFSU2_TR(0x702085);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B702087:{NFSU2_TR(0x702087);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B702089:{NFSU2_TR(0x702089);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B70208c:L70208c:{c.instructions+=2;NFSU2_TR(0x70208c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70208e:{NFSU2_TR(0x70208e);
w4(R+4,u32(0x7ull));
}
B702093:L702093:{c.instructions+=12;NFSU2_TR(0x702093);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B702095:{NFSU2_TR(0x702095);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702098:{NFSU2_TR(0x702098);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70209b:{NFSU2_TR(0x70209b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70209e:{NFSU2_TR(0x70209e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7020a1:{NFSU2_TR(0x7020a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7020a4:{NFSU2_TR(0x7020a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7020a7:{NFSU2_TR(0x7020a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7020aa:{NFSU2_TR(0x7020aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7020ad:{NFSU2_TR(0x7020ad);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x24ull))));
}
B7020b0:{NFSU2_TR(0x7020b0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B7020b1:{NFSU2_TR(0x7020b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x702093u);}goto L702093;}}
}
B7020b3:L7020b3:{c.instructions+=1;NFSU2_TR(0x7020b3);
w4(R+12,u32(0x1ull));
}
B7020b8:L7020b8:{c.instructions+=6;NFSU2_TR(0x7020b8);
__builtin_memmove((R+0),(R+28),4);
}
B7020ba:{NFSU2_TR(0x7020ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B7020bd:{NFSU2_TR(0x7020bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b2f38ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B7020c4:{NFSU2_TR(0x7020c4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7020c6:{NFSU2_TR(0x7020c6);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x9ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x9ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7020c9:{NFSU2_TR(0x7020c9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L702185;}}
}
B7020cf:L7020cf:{c.instructions+=2;NFSU2_TR(0x7020cf);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(U+0))<(u8(0x20ull))));
}
B7020d2:{NFSU2_TR(0x7020d2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L702133;}}
}
B7020d4:L7020d4:{c.instructions+=2;NFSU2_TR(0x7020d4);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(U+0))<(u8(0x10ull))));
}
B7020d7:{NFSU2_TR(0x7020d7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L702106;}}
}
B7020d9:L7020d9:{c.instructions+=4;NFSU2_TR(0x7020d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B7020dc:{NFSU2_TR(0x7020dc);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x9ull))));
}
B7020df:{NFSU2_TR(0x7020df);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7020e2:{NFSU2_TR(0x7020e2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7020f8;}}
}
B7020e4:L7020e4:{c.instructions+=7;NFSU2_TR(0x7020e4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+0),(U+0),2);
}
B7020e7:{NFSU2_TR(0x7020e7);
w4(R+4,u32(0x10ull));
}
B7020ec:{NFSU2_TR(0x7020ec);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B7020ee:{NFSU2_TR(0x7020ee);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B7020f1:{NFSU2_TR(0x7020f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B7020f3:{NFSU2_TR(0x7020f3);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B7020f5:{NFSU2_TR(0x7020f5);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B7020f8:L7020f8:{c.instructions+=4;NFSU2_TR(0x7020f8);
__builtin_memmove((R+0),(R+28),4);
}
B7020fa:{NFSU2_TR(0x7020fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B7020fd:{NFSU2_TR(0x7020fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b2a30ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B702104:{NFSU2_TR(0x702104);
{goto L702185;}
}
B702106:L702106:{c.instructions+=4;NFSU2_TR(0x702106);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B702109:{NFSU2_TR(0x702109);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x6ull))));
}
B70210c:{NFSU2_TR(0x70210c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70210f:{NFSU2_TR(0x70210f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L702125;}}
}
B702111:L702111:{c.instructions+=7;NFSU2_TR(0x702111);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+0),(U+0),2);
}
B702114:{NFSU2_TR(0x702114);
w4(R+4,u32(0x10ull));
}
B702119:{NFSU2_TR(0x702119);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B70211b:{NFSU2_TR(0x70211b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B70211e:{NFSU2_TR(0x70211e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B702120:{NFSU2_TR(0x702120);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B702122:{NFSU2_TR(0x702122);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B702125:L702125:{c.instructions+=4;NFSU2_TR(0x702125);
__builtin_memmove((R+0),(R+28),4);
}
B702127:{NFSU2_TR(0x702127);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B70212a:{NFSU2_TR(0x70212a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b3740ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B702131:{NFSU2_TR(0x702131);
{goto L702185;}
}
B702133:L702133:{c.instructions+=2;NFSU2_TR(0x702133);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(U+0))<(u8(0x30ull))));
}
B702136:{NFSU2_TR(0x702136);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L702164;}}
}
B702138:L702138:{c.instructions+=4;NFSU2_TR(0x702138);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B70213b:{NFSU2_TR(0x70213b);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x6ull))));
}
B70213e:{NFSU2_TR(0x70213e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B702141:{NFSU2_TR(0x702141);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L702157;}}
}
B702143:L702143:{c.instructions+=7;NFSU2_TR(0x702143);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+0),(U+0),2);
}
B702146:{NFSU2_TR(0x702146);
w4(R+4,u32(0x10ull));
}
B70214b:{NFSU2_TR(0x70214b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B70214d:{NFSU2_TR(0x70214d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B702150:{NFSU2_TR(0x702150);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B702152:{NFSU2_TR(0x702152);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B702154:{NFSU2_TR(0x702154);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B702157:L702157:{c.instructions+=4;NFSU2_TR(0x702157);
__builtin_memmove((R+8),(R+28),4);
}
B702159:{NFSU2_TR(0x702159);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffff0000ull))));
}
B70215f:{NFSU2_TR(0x70215f);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x10ull))));
}
B702162:{NFSU2_TR(0x702162);
{goto L702185;}
}
B702164:L702164:{c.instructions+=4;NFSU2_TR(0x702164);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B702167:{NFSU2_TR(0x702167);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x2ull))));
}
B70216a:{NFSU2_TR(0x70216a);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70216d:{NFSU2_TR(0x70216d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7021d0;}}
}
B70216f:L70216f:{c.instructions+=8;NFSU2_TR(0x70216f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+0),(U+0),2);
}
B702172:{NFSU2_TR(0x702172);
w4(R+4,u32(0x10ull));
}
B702177:{NFSU2_TR(0x702177);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B702179:{NFSU2_TR(0x702179);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B70217c:{NFSU2_TR(0x70217c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B70217e:{NFSU2_TR(0x70217e);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B702180:{NFSU2_TR(0x702180);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x10ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B702183:{NFSU2_TR(0x702183);
{goto L7021d0;}
}
B702185:L702185:{c.instructions+=11;NFSU2_TR(0x702185);
__builtin_memmove((R+0),(R+8),4);
}
B702187:{NFSU2_TR(0x702187);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B702189:{NFSU2_TR(0x702189);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B70218c:{NFSU2_TR(0x70218c);
__builtin_memmove((R+4),(R+8),1);
}
B70218e:{NFSU2_TR(0x70218e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3full))));
}
B702191:{NFSU2_TR(0x702191);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+4))));
}
B702193:{NFSU2_TR(0x702193);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B702195:{NFSU2_TR(0x702195);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B702197:{NFSU2_TR(0x702197);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B702199:{NFSU2_TR(0x702199);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70219c:{NFSU2_TR(0x70219c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7021b2;}}
}
B70219e:L70219e:{c.instructions+=7;NFSU2_TR(0x70219e);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+0),(U+0),2);
}
B7021a1:{NFSU2_TR(0x7021a1);
w4(R+4,u32(0x10ull));
}
B7021a6:{NFSU2_TR(0x7021a6);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B7021a8:{NFSU2_TR(0x7021a8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B7021ab:{NFSU2_TR(0x7021ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B7021ad:{NFSU2_TR(0x7021ad);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B7021af:{NFSU2_TR(0x7021af);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B7021b2:L7021b2:{c.instructions+=7;NFSU2_TR(0x7021b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x816560ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B7021b9:{NFSU2_TR(0x7021b9);
__builtin_memmove((R+0),(R+8),4);
}
B7021bb:{NFSU2_TR(0x7021bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B7021be:{NFSU2_TR(0x7021be);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7021bf:{NFSU2_TR(0x7021bf);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8b2730ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B7021c5:{NFSU2_TR(0x7021c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x81635cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7021cb:{NFSU2_TR(0x7021cb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7020b8u);}goto L7020b8;}
}
B7021d0:L7021d0:{c.instructions+=9;NFSU2_TR(0x7021d0);
__builtin_memmove(gp(0x8b3d40),(R+24),4);
}
B7021d6:{NFSU2_TR(0x7021d6);
__builtin_memmove(gp(0x8b2f30),(R+28),4);
}
B7021dc:{NFSU2_TR(0x7021dc);
__builtin_memmove(gp(0x8b2328),(R+20),4);
}
B7021e2:{NFSU2_TR(0x7021e2);
__builtin_memmove((R+0),(R+12),4);
}
B7021e4:{NFSU2_TR(0x7021e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7021e5:{NFSU2_TR(0x7021e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7021e6:{NFSU2_TR(0x7021e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7021e7:{NFSU2_TR(0x7021e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7021e8:{NFSU2_TR(0x7021e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7021e9:L7021e9:{c.instructions+=9;NFSU2_TR(0x7021e9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7021ea:{NFSU2_TR(0x7021ea);
__builtin_memmove((R+20),(R+16),4);
}
B7021ec:{NFSU2_TR(0x7021ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7021ed:{NFSU2_TR(0x7021ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7021f0:{NFSU2_TR(0x7021f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7021f6:{NFSU2_TR(0x7021f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7021f7:{NFSU2_TR(0x7021f7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7021f9:{NFSU2_TR(0x7021f9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7021fb:{NFSU2_TR(0x7021fb);
if(r1(R+518)){{goto L702204;}}
}
B7021fd:L7021fd:{c.instructions+=2;NFSU2_TR(0x7021fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7021fe:{NFSU2_TR(0x7021fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702203ull));
{goto L702eed;}
}
B702203:L702203:{c.instructions+=1;NFSU2_TR(0x702203);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B702204:L702204:{c.instructions+=3;NFSU2_TR(0x702204);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70220a:{NFSU2_TR(0x70220a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70220c:{NFSU2_TR(0x70220c);
if(r1(R+518)){{goto L702215;}}
}
B70220e:L70220e:{c.instructions+=2;NFSU2_TR(0x70220e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70220f:{NFSU2_TR(0x70220f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702214ull));
{goto L702eed;}
}
B702214:L702214:{c.instructions+=1;NFSU2_TR(0x702214);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B702215:L702215:{c.instructions+=3;NFSU2_TR(0x702215);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x288ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70221b:{NFSU2_TR(0x70221b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70221d:{NFSU2_TR(0x70221d);
if(r1(R+518)){{goto L702226;}}
}
B70221f:L70221f:{c.instructions+=2;NFSU2_TR(0x70221f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702220:{NFSU2_TR(0x702220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702225ull));
{goto L702eed;}
}
B702225:L702225:{c.instructions+=1;NFSU2_TR(0x702225);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B702226:L702226:{c.instructions+=3;NFSU2_TR(0x702226);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70222c:{NFSU2_TR(0x70222c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70222e:{NFSU2_TR(0x70222e);
if(r1(R+518)){{goto L702237;}}
}
B702230:L702230:{c.instructions+=2;NFSU2_TR(0x702230);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702231:{NFSU2_TR(0x702231);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702236ull));
{goto L702eed;}
}
B702236:L702236:{c.instructions+=1;NFSU2_TR(0x702236);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B702237:L702237:{c.instructions+=3;NFSU2_TR(0x702237);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70223d:{NFSU2_TR(0x70223d);
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
B70223f:{NFSU2_TR(0x70223f);
if(r1(R+518)){{goto L702248;}}
}
B702241:L702241:{c.instructions+=2;NFSU2_TR(0x702241);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702242:{NFSU2_TR(0x702242);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702247ull));
{goto L702eed;}
}
B702247:L702247:{c.instructions+=1;NFSU2_TR(0x702247);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B702248:L702248:{c.instructions+=14;NFSU2_TR(0x702248);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70224e:{NFSU2_TR(0x70224e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702254:{NFSU2_TR(0x702254);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x288ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70225a:{NFSU2_TR(0x70225a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702260:{NFSU2_TR(0x702260);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702266:{NFSU2_TR(0x702266);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70226c:{NFSU2_TR(0x70226c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x290ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702272:{NFSU2_TR(0x702272);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702278:{NFSU2_TR(0x702278);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x27cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70227e:{NFSU2_TR(0x70227e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702284:{NFSU2_TR(0x702284);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B702285:{NFSU2_TR(0x702285);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B702286:{NFSU2_TR(0x702286);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B702287:{NFSU2_TR(0x702287);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B702288:L702288:{c.instructions+=7;NFSU2_TR(0x702288);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702289:{NFSU2_TR(0x702289);
__builtin_memmove((R+20),(R+16),4);
}
B70228b:{NFSU2_TR(0x70228b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70228c:{NFSU2_TR(0x70228c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70228f:{NFSU2_TR(0x70228f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702290:{NFSU2_TR(0x702290);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702291:{NFSU2_TR(0x702291);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702296ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7021e9u);}goto L7021e9;}
}
B702296:L702296:{c.instructions+=4;NFSU2_TR(0x702296);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702298:{NFSU2_TR(0x702298);
w4(R+28,u32(0xa0ull));
}
B70229d:{NFSU2_TR(0x70229d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70229e:{NFSU2_TR(0x70229e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7022a3ull));
{goto L702edf;}
}
B7022a3:L7022a3:{c.instructions+=4;NFSU2_TR(0x7022a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7022a6:{NFSU2_TR(0x7022a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7022a8:{NFSU2_TR(0x7022a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7022ae:{NFSU2_TR(0x7022ae);
if(r1(R+518)){{goto L702314;}}
}
B7022b0:L7022b0:{c.instructions+=6;NFSU2_TR(0x7022b0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B7022b3:{NFSU2_TR(0x7022b3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe0ull))));
}
B7022b6:{NFSU2_TR(0x7022b6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7022b8:{NFSU2_TR(0x7022b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7022b9:{NFSU2_TR(0x7022b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7022bf:{NFSU2_TR(0x7022bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7022c4ull));
{goto L702edf;}
}
B7022c4:L7022c4:{c.instructions+=5;NFSU2_TR(0x7022c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7022c6:{NFSU2_TR(0x7022c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7022c7:{NFSU2_TR(0x7022c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7022c8:{NFSU2_TR(0x7022c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x288ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7022ce:{NFSU2_TR(0x7022ce);
if(r1(R+518)){{goto L702314;}}
}
B7022d0:L7022d0:{c.instructions+=6;NFSU2_TR(0x7022d0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B7022d3:{NFSU2_TR(0x7022d3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe0ull))));
}
B7022d6:{NFSU2_TR(0x7022d6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7022d8:{NFSU2_TR(0x7022d8);
u8 U[4];
w4(U+0,u32(0x120ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7022dd:{NFSU2_TR(0x7022dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7022e3:{NFSU2_TR(0x7022e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7022e8ull));
{goto L702edf;}
}
B7022e8:L7022e8:{c.instructions+=5;NFSU2_TR(0x7022e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7022ea:{NFSU2_TR(0x7022ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7022eb:{NFSU2_TR(0x7022eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7022ec:{NFSU2_TR(0x7022ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7022f2:{NFSU2_TR(0x7022f2);
if(r1(R+518)){{goto L702314;}}
}
B7022f4:L7022f4:{c.instructions+=6;NFSU2_TR(0x7022f4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B7022f7:{NFSU2_TR(0x7022f7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe0ull))));
}
B7022fa:{NFSU2_TR(0x7022fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7022fc:{NFSU2_TR(0x7022fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7022fd:{NFSU2_TR(0x7022fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x290ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702303:{NFSU2_TR(0x702303);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702308ull));
{goto L702edf;}
}
B702308:L702308:{c.instructions+=5;NFSU2_TR(0x702308);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70230a:{NFSU2_TR(0x70230a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70230b:{NFSU2_TR(0x70230b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70230c:{NFSU2_TR(0x70230c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702312:{NFSU2_TR(0x702312);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70231f;}}
}
B702314:L702314:{c.instructions+=2;NFSU2_TR(0x702314);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702315:{NFSU2_TR(0x702315);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70231aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7021e9u);}goto L7021e9;}
}
B70231a:L70231a:{c.instructions+=3;NFSU2_TR(0x70231a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70231b:{NFSU2_TR(0x70231b);
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
B70231d:{NFSU2_TR(0x70231d);
{goto L70232e;}
}
B70231f:L70231f:{c.instructions+=5;NFSU2_TR(0x70231f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B702322:{NFSU2_TR(0x702322);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe0ull))));
}
B702325:{NFSU2_TR(0x702325);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x27cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70232b:{NFSU2_TR(0x70232b);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70232d:{NFSU2_TR(0x70232d);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70232e:L70232e:{c.instructions+=4;NFSU2_TR(0x70232e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70232f:{NFSU2_TR(0x70232f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B702330:{NFSU2_TR(0x702330);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B702331:{NFSU2_TR(0x702331);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B702332:L702332:{c.instructions+=7;NFSU2_TR(0x702332);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702333:{NFSU2_TR(0x702333);
__builtin_memmove((R+20),(R+16),4);
}
B702335:{NFSU2_TR(0x702335);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702336:{NFSU2_TR(0x702336);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B702339:{NFSU2_TR(0x702339);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B70233b:{NFSU2_TR(0x70233b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70233d:{NFSU2_TR(0x70233d);
if(r1(R+518)){{goto L702362;}}
}
B70233f:L70233f:{c.instructions+=2;NFSU2_TR(0x70233f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702340:{NFSU2_TR(0x702340);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702345ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7021e9u);}goto L7021e9;}
}
B702345:L702345:{c.instructions+=4;NFSU2_TR(0x702345);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B702347:{NFSU2_TR(0x702347);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x13cull))));
}
B70234c:{NFSU2_TR(0x70234c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70234d:{NFSU2_TR(0x70234d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702352ull));
TAIL_STATIC(0x703dadu,703);
}
B702352:L702352:{c.instructions+=4;NFSU2_TR(0x702352);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B702354:{NFSU2_TR(0x702354);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x298ull))));
}
B702359:{NFSU2_TR(0x702359);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70235a:{NFSU2_TR(0x70235a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70235full));
TAIL_STATIC(0x70331au,703);
}
B70235f:L70235f:{c.instructions+=1;NFSU2_TR(0x70235f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B702362:L702362:{c.instructions+=2;NFSU2_TR(0x702362);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B702364:{NFSU2_TR(0x702364);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702369ull));
{goto L702eed;}
}
B702369:L702369:{c.instructions+=5;NFSU2_TR(0x702369);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B70236c:{NFSU2_TR(0x70236c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70236d:{NFSU2_TR(0x70236d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70236e:{NFSU2_TR(0x70236e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70236f:{NFSU2_TR(0x70236f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B702370:L702370:{c.instructions+=25;NFSU2_TR(0x702370);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702371:{NFSU2_TR(0x702371);
__builtin_memmove((R+20),(R+16),4);
}
B702373:{NFSU2_TR(0x702373);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B702376:{NFSU2_TR(0x702376);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702377:{NFSU2_TR(0x702377);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702378:{NFSU2_TR(0x702378);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B70237a:{NFSU2_TR(0x70237a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70237c:{NFSU2_TR(0x70237c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70237d:{NFSU2_TR(0x70237d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70237e:{NFSU2_TR(0x70237e);
u8 U[4];
w4(U+0,u32(0x4954ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702383:{NFSU2_TR(0x702383);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702386:{NFSU2_TR(0x702386);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702389:{NFSU2_TR(0x702389);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70238c:{NFSU2_TR(0x70238c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70238f:{NFSU2_TR(0x70238f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702392:{NFSU2_TR(0x702392);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702395:{NFSU2_TR(0x702395);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702398:{NFSU2_TR(0x702398);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70239b:{NFSU2_TR(0x70239b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70239e:{NFSU2_TR(0x70239e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7023a1:{NFSU2_TR(0x7023a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7023a4:{NFSU2_TR(0x7023a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7023a7:{NFSU2_TR(0x7023a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7023aa:{NFSU2_TR(0x7023aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7023ad:{NFSU2_TR(0x7023ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7023b2ull));
{goto L702edf;}
}
B7023b2:L7023b2:{c.instructions+=6;NFSU2_TR(0x7023b2);
__builtin_memmove((R+12),(R+0),4);
}
B7023b4:{NFSU2_TR(0x7023b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7023b5:{NFSU2_TR(0x7023b5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7023b7:{NFSU2_TR(0x7023b7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B7023b9:{NFSU2_TR(0x7023b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7023ba:{NFSU2_TR(0x7023ba);
if(r1(R+518)){{goto L70241d;}}
}
B7023bc:L7023bc:{c.instructions+=3;NFSU2_TR(0x7023bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7023bd:{NFSU2_TR(0x7023bd);
w4(R+4,u32(0x1255ull));
}
B7023c2:{NFSU2_TR(0x7023c2);
__builtin_memmove((R+28),(R+12),4);
}
B7023c4:L7023c4:{c.instructions+=1;NFSU2_TR(0x7023c4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7023c6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7023c4u);}goto L7023c4;}
}
B7023c6:L7023c6:{c.instructions+=5;NFSU2_TR(0x7023c6);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7023c8:{NFSU2_TR(0x7023c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7023c9:{NFSU2_TR(0x7023c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7023cf:{NFSU2_TR(0x7023cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7023d2:{NFSU2_TR(0x7023d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7023d3:L7023d3:{c.instructions+=1;NFSU2_TR(0x7023d3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7023d5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7023d3u);}goto L7023d3;}
}
B7023d5:L7023d5:{c.instructions+=1;NFSU2_TR(0x7023d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7023daull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x702288u);}goto L702288;}
}
B7023da:L7023da:{c.instructions+=3;NFSU2_TR(0x7023da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7023dc:{NFSU2_TR(0x7023dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7023dd:{NFSU2_TR(0x7023dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7023ea;}}
}
B7023df:L7023df:{c.instructions+=2;NFSU2_TR(0x7023df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7023e0:{NFSU2_TR(0x7023e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7023e5ull));
{goto L702eed;}
}
B7023e5:L7023e5:{c.instructions+=3;NFSU2_TR(0x7023e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7023e6:{NFSU2_TR(0x7023e6);
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
B7023e8:{NFSU2_TR(0x7023e8);
{goto L70241c;}
}
B7023ea:L7023ea:{c.instructions+=14;NFSU2_TR(0x7023ea);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7023ec:{NFSU2_TR(0x7023ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1a8ull))));
w4(U+4,u32(0x46ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7023f6:{NFSU2_TR(0x7023f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x294ull))));
w4(U+4,u32(0x8b9c80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B702400:{NFSU2_TR(0x702400);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3a0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B702406:{NFSU2_TR(0x702406);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B702407:{NFSU2_TR(0x702407);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B702408:{NFSU2_TR(0x702408);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B702409:{NFSU2_TR(0x702409);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B70240a:{NFSU2_TR(0x70240a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B70240b:{NFSU2_TR(0x70240b);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B70240d:{NFSU2_TR(0x70240d);
u8 U[4];
w4(U+0,u32(0x63ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70240f:{NFSU2_TR(0x70240f);
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
B702411:{NFSU2_TR(0x702411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B702412:{NFSU2_TR(0x702412);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3b6ull))));
__builtin_memmove((R+28),(U+0),4);
}
B702418:L702418:{c.instructions+=1;NFSU2_TR(0x702418);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L70241a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x702418u);}goto L702418;}
}
B70241a:L70241a:{c.instructions+=1;NFSU2_TR(0x70241a);
__builtin_memmove((R+0),(R+12),4);
}
B70241c:L70241c:{c.instructions+=1;NFSU2_TR(0x70241c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70241d:L70241d:{c.instructions+=4;NFSU2_TR(0x70241d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70241e:{NFSU2_TR(0x70241e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70241f:{NFSU2_TR(0x70241f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B702420:{NFSU2_TR(0x702420);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B702421:L702421:{c.instructions+=3;NFSU2_TR(0x702421);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702422:{NFSU2_TR(0x702422);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702423:{NFSU2_TR(0x702423);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702428ull));
TAIL_STATIC(0x70467fu,704);
}
B702428:L702428:{c.instructions+=2;NFSU2_TR(0x702428);
__builtin_memmove(gp(0x8ba220),(R+0),4);
}
B70242d:{NFSU2_TR(0x70242d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702432ull));
TAIL_STATIC(0x704779u,704);
}
B702432:L702432:{c.instructions+=3;NFSU2_TR(0x702432);
w4(R+4,u32(0x8b3d48ull));
}
B702437:{NFSU2_TR(0x702437);
__builtin_memmove((R+28),(R+4),4);
}
B702439:{NFSU2_TR(0x702439);
w4(R+24,u32(0x7c4c18ull));
}
B70243e:L70243e:{c.instructions+=12;NFSU2_TR(0x70243e);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B702441:{NFSU2_TR(0x702441);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B702442:{NFSU2_TR(0x702442);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B702444:{NFSU2_TR(0x702444);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B702446:{NFSU2_TR(0x702446);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B702447:{NFSU2_TR(0x702447);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B702448:{NFSU2_TR(0x702448);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B702449:{NFSU2_TR(0x702449);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B70244b:{NFSU2_TR(0x70244b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B70244c:{NFSU2_TR(0x70244c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B70244f:{NFSU2_TR(0x70244f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7c4c98ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7c4c98ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B702455:{NFSU2_TR(0x702455);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70243eu);}goto L70243e;}}
}
B702457:L702457:{c.instructions+=5;NFSU2_TR(0x702457);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702459:{NFSU2_TR(0x702459);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70245a:{NFSU2_TR(0x70245a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70245b:{NFSU2_TR(0x70245b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70245c:{NFSU2_TR(0x70245c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702461ull));
{goto L702fb0;}
}
B702461:L702461:{c.instructions+=4;NFSU2_TR(0x702461);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B702464:{NFSU2_TR(0x702464);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B702465:{NFSU2_TR(0x702465);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B702466:{NFSU2_TR(0x702466);
TAIL_STATIC(0x70406eu,704);
}
B70246b:L70246b:{c.instructions+=1;NFSU2_TR(0x70246b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70246c:L70246c:{c.instructions+=6;NFSU2_TR(0x70246c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70246d:{NFSU2_TR(0x70246d);
__builtin_memmove((R+20),(R+16),4);
}
B70246f:{NFSU2_TR(0x70246f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702472:{NFSU2_TR(0x702472);
__builtin_memmove(gp(0x8b3e48),(R+0),4);
}
B702477:{NFSU2_TR(0x702477);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B702478:{NFSU2_TR(0x702478);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70247f:L70247f:{c.instructions+=7;NFSU2_TR(0x70247f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702480:{NFSU2_TR(0x702480);
__builtin_memmove((R+20),(R+16),4);
}
B702482:{NFSU2_TR(0x702482);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B702485:{NFSU2_TR(0x702485);
__builtin_memmove((R+4),gp(0x8b3e48),4);
}
B70248b:{NFSU2_TR(0x70248b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70248d:{NFSU2_TR(0x70248d);
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
B70248f:{NFSU2_TR(0x70248f);
if(r1(R+518)){{goto L7024a7;}}
}
B702491:L702491:{c.instructions+=8;NFSU2_TR(0x702491);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B702494:{NFSU2_TR(0x702494);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702495:{NFSU2_TR(0x702495);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B702498:{NFSU2_TR(0x702498);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70249b:{NFSU2_TR(0x70249b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70249e:{NFSU2_TR(0x70249e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7024a1:{NFSU2_TR(0x7024a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7024a3:{NFSU2_TR(0x7024a3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7024a5ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B7024a5:L7024a5:{c.instructions+=2;NFSU2_TR(0x7024a5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7024a6:{NFSU2_TR(0x7024a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7024a7:L7024a7:{c.instructions+=2;NFSU2_TR(0x7024a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7024aa:{NFSU2_TR(0x7024aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7024afull));
TAIL_STATIC(0x75c6c8u,75c);
}
B7024af:L7024af:{c.instructions+=3;NFSU2_TR(0x7024af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7024b0:{NFSU2_TR(0x7024b0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7024b1:{NFSU2_TR(0x7024b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7024b2:L7024b2:{c.instructions+=5;NFSU2_TR(0x7024b2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7024b3:{NFSU2_TR(0x7024b3);
__builtin_memmove((R+20),(R+16),4);
}
B7024b5:{NFSU2_TR(0x7024b5);
__builtin_memmove((R+4),gp(0x8b3e48),4);
}
B7024bb:{NFSU2_TR(0x7024bb);
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
B7024bd:{NFSU2_TR(0x7024bd);
if(r1(R+518)){{goto L7024cb;}}
}
B7024bf:L7024bf:{c.instructions+=4;NFSU2_TR(0x7024bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7024c1:{NFSU2_TR(0x7024c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7024c3:{NFSU2_TR(0x7024c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7024c6:{NFSU2_TR(0x7024c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7024c9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7024c9:L7024c9:{c.instructions+=2;NFSU2_TR(0x7024c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7024ca:{NFSU2_TR(0x7024ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7024cb:L7024cb:{c.instructions+=2;NFSU2_TR(0x7024cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7024cc:{NFSU2_TR(0x7024cc);
TAIL_STATIC(0x75c6dau,75c);
}
B7024d7:L7024d7:{c.instructions+=4;NFSU2_TR(0x7024d7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7024d8:{NFSU2_TR(0x7024d8);
__builtin_memmove((R+20),(R+16),4);
}
B7024da:{NFSU2_TR(0x7024da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7024db:{NFSU2_TR(0x7024db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7024e0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x702370u);}goto L702370;}
}
B7024e0:L7024e0:{c.instructions+=19;NFSU2_TR(0x7024e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7024e3:{NFSU2_TR(0x7024e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7024e6:{NFSU2_TR(0x7024e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B7024e8:{NFSU2_TR(0x7024e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x234ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7024ee:{NFSU2_TR(0x7024ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7024f0:{NFSU2_TR(0x7024f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7024f3:{NFSU2_TR(0x7024f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7024f9:{NFSU2_TR(0x7024f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7024fb:{NFSU2_TR(0x7024fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702501:{NFSU2_TR(0x702501);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B702503:{NFSU2_TR(0x702503);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x240ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702509:{NFSU2_TR(0x702509);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B70250b:{NFSU2_TR(0x70250b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702511:{NFSU2_TR(0x702511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B702513:{NFSU2_TR(0x702513);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702519:{NFSU2_TR(0x702519);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B70251b:{NFSU2_TR(0x70251b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1b0ull))));
}
B702520:{NFSU2_TR(0x702520);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702521:{NFSU2_TR(0x702521);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702526ull));
TAIL_STATIC(0x7032ddu,703);
}
B702526:L702526:{c.instructions+=3;NFSU2_TR(0x702526);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B702528:{NFSU2_TR(0x702528);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x298ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70252e:{NFSU2_TR(0x70252e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702533ull));
TAIL_STATIC(0x703dcfu,703);
}
B702533:L702533:{c.instructions+=7;NFSU2_TR(0x702533);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B702535:{NFSU2_TR(0x702535);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70253b:{NFSU2_TR(0x70253b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B70253d:{NFSU2_TR(0x70253d);
__builtin_memmove((R+4),gp(0x8ba220),4);
}
B702543:{NFSU2_TR(0x702543);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702549:{NFSU2_TR(0x702549);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B70254b:{NFSU2_TR(0x70254b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702550ull));
TAIL_STATIC(0x704b8bu,704);
}
B702550:L702550:{c.instructions+=4;NFSU2_TR(0x702550);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B702552:{NFSU2_TR(0x702552);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B702553:{NFSU2_TR(0x702553);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B702554:{NFSU2_TR(0x702554);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L702560;}}
}
B702556:L702556:{c.instructions+=2;NFSU2_TR(0x702556);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702557:{NFSU2_TR(0x702557);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70255cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x702332u);}goto L702332;}
}
B70255c:L70255c:{c.instructions+=2;NFSU2_TR(0x70255c);
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
B70255e:{NFSU2_TR(0x70255e);
{goto L702576;}
}
B702560:L702560:{c.instructions+=5;NFSU2_TR(0x702560);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B702562:{NFSU2_TR(0x702562);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702568:{NFSU2_TR(0x702568);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B70256c:{NFSU2_TR(0x70256c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B70256e:{NFSU2_TR(0x70256e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702573ull));
TAIL_STATIC(0x704d70u,704);
}
B702573:L702573:{c.instructions+=2;NFSU2_TR(0x702573);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B702575:{NFSU2_TR(0x702575);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B702576:L702576:{c.instructions+=4;NFSU2_TR(0x702576);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B702577:{NFSU2_TR(0x702577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B702578:{NFSU2_TR(0x702578);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B702579:{NFSU2_TR(0x702579);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70257a:L70257a:{c.instructions+=4;NFSU2_TR(0x70257a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70257b:{NFSU2_TR(0x70257b);
__builtin_memmove((R+20),(R+16),4);
}
B70257d:{NFSU2_TR(0x70257d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B702581:{NFSU2_TR(0x702581);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L702591;}}
}
B702583:L702583:{c.instructions+=4;NFSU2_TR(0x702583);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702586:{NFSU2_TR(0x702586);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70258c:{NFSU2_TR(0x70258c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70258f:{NFSU2_TR(0x70258f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B702591:L702591:{c.instructions+=2;NFSU2_TR(0x702591);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B702592:{NFSU2_TR(0x702592);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B702593:L702593:{c.instructions+=7;NFSU2_TR(0x702593);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702594:{NFSU2_TR(0x702594);
__builtin_memmove((R+20),(R+16),4);
}
B702596:{NFSU2_TR(0x702596);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702597:{NFSU2_TR(0x702597);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702598:{NFSU2_TR(0x702598);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70259b:{NFSU2_TR(0x70259b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70259c:{NFSU2_TR(0x70259c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B70259e:L70259e:{c.instructions+=3;NFSU2_TR(0x70259e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7025a1:{NFSU2_TR(0x7025a1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7025a3:{NFSU2_TR(0x7025a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7025ba;}}
}
B7025a5:L7025a5:{c.instructions+=2;NFSU2_TR(0x7025a5);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7025a8:{NFSU2_TR(0x7025a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70270b;}}
}
B7025ae:L7025ae:{c.instructions+=4;NFSU2_TR(0x7025ae);
u8 U[4];
w4(U+0,u32(0x46ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7025b0:{NFSU2_TR(0x7025b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7025b1:{NFSU2_TR(0x7025b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7025b8:{NFSU2_TR(0x7025b8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70259eu);}goto L70259e;}
}
B7025ba:L7025ba:{c.instructions+=2;NFSU2_TR(0x7025ba);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7025bb:{NFSU2_TR(0x7025bb);
if(r1(R+518)){{goto L702649;}}
}
B7025c1:L7025c1:{c.instructions+=2;NFSU2_TR(0x7025c1);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7025c4:{NFSU2_TR(0x7025c4);
if(r1(R+518)){{goto L70263b;}}
}
B7025c6:L7025c6:{c.instructions+=2;NFSU2_TR(0x7025c6);
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
B7025c7:{NFSU2_TR(0x7025c7);
if(r1(R+518)){{goto L70262d;}}
}
B7025c9:L7025c9:{c.instructions+=2;NFSU2_TR(0x7025c9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7025ca:{NFSU2_TR(0x7025ca);
if(r1(R+518)){{goto L702600;}}
}
B7025cc:L7025cc:{c.instructions+=2;NFSU2_TR(0x7025cc);
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
B7025cd:{NFSU2_TR(0x7025cd);
if(r1(R+518)){{goto L7025f2;}}
}
B7025cf:L7025cf:{c.instructions+=2;NFSU2_TR(0x7025cf);
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
B7025d0:{NFSU2_TR(0x7025d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70271a;}}
}
B7025d6:L7025d6:{c.instructions+=5;NFSU2_TR(0x7025d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7025d9:{NFSU2_TR(0x7025d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7025da:{NFSU2_TR(0x7025da);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7025e0:{NFSU2_TR(0x7025e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4948ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7025e6:{NFSU2_TR(0x7025e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7025ebull));
TAIL_STATIC(0x70335bu,703);
}
B7025eb:L7025eb:{c.instructions+=3;NFSU2_TR(0x7025eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7025ec:{NFSU2_TR(0x7025ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7025ed:{NFSU2_TR(0x7025ed);
{goto L70271a;}
}
B7025f2:L7025f2:{c.instructions+=3;NFSU2_TR(0x7025f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7025f5:{NFSU2_TR(0x7025f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4944ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7025fb:{NFSU2_TR(0x7025fb);
{goto L70271a;}
}
B702600:L702600:{c.instructions+=6;NFSU2_TR(0x702600);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B702603:{NFSU2_TR(0x702603);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B702609:{NFSU2_TR(0x702609);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x298ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70260f:{NFSU2_TR(0x70260f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702610:{NFSU2_TR(0x702610);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B702612:{NFSU2_TR(0x702612);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702617ull));
TAIL_STATIC(0x7050dfu,705);
}
B702617:L702617:{c.instructions+=4;NFSU2_TR(0x702617);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70261d:{NFSU2_TR(0x70261d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70261e:{NFSU2_TR(0x70261e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B702620:{NFSU2_TR(0x702620);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702625ull));
TAIL_STATIC(0x7050dfu,705);
}
B702625:L702625:{c.instructions+=2;NFSU2_TR(0x702625);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B702628:{NFSU2_TR(0x702628);
{goto L70271a;}
}
B70262d:L70262d:{c.instructions+=3;NFSU2_TR(0x70262d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702630:{NFSU2_TR(0x702630);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4940ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702636:{NFSU2_TR(0x702636);
{goto L70271a;}
}
B70263b:L70263b:{c.instructions+=3;NFSU2_TR(0x70263b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70263e:{NFSU2_TR(0x70263e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x493cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702644:{NFSU2_TR(0x702644);
{goto L70271a;}
}
B702649:L702649:{c.instructions+=7;NFSU2_TR(0x702649);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70264c:{NFSU2_TR(0x70264c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702652:{NFSU2_TR(0x702652);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b0ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B702659:{NFSU2_TR(0x702659);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B70265b:{NFSU2_TR(0x70265b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70265e:{NFSU2_TR(0x70265e);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B702661:{NFSU2_TR(0x702661);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L702669;}}
}
B702663:L702663:{c.instructions+=1;NFSU2_TR(0x702663);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B702669:L702669:{c.instructions+=11;NFSU2_TR(0x702669);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70266f:{NFSU2_TR(0x70266f);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B702671:{NFSU2_TR(0x702671);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702673:{NFSU2_TR(0x702673);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B702675:{NFSU2_TR(0x702675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B702676:{NFSU2_TR(0x702676);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B702679:{NFSU2_TR(0x702679);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x702679);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x702679);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B70267b:{NFSU2_TR(0x70267b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B70267d:{NFSU2_TR(0x70267d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702680:{NFSU2_TR(0x702680);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B702683:{NFSU2_TR(0x702683);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70268b;}}
}
B702685:L702685:{c.instructions+=1;NFSU2_TR(0x702685);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B70268b:L70268b:{c.instructions+=7;NFSU2_TR(0x70268b);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B70268d:{NFSU2_TR(0x70268d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702693:{NFSU2_TR(0x702693);
{u32 ea_=u32(u32(7914104u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B702699:{NFSU2_TR(0x702699);
{u32 ea_=u32(u32(8144328u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B70269f:{NFSU2_TR(0x70269f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7026a1:{NFSU2_TR(0x7026a1);
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
B7026a4:{NFSU2_TR(0x7026a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7026b0;}}
}
B7026a6:L7026a6:{c.instructions+=3;NFSU2_TR(0x7026a6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7026a8:{NFSU2_TR(0x7026a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7026ae:{NFSU2_TR(0x7026ae);
{goto L70271a;}
}
B7026b0:L7026b0:{c.instructions+=4;NFSU2_TR(0x7026b0);
{u32 ea_=u32(u32(7914104u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B7026b6:{NFSU2_TR(0x7026b6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7026b8:{NFSU2_TR(0x7026b8);
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
B7026bb:{NFSU2_TR(0x7026bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7026cb;}}
}
B7026bd:L7026bd:{c.instructions+=3;NFSU2_TR(0x7026bd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7026bf:{NFSU2_TR(0x7026bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a0ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7026c9:{NFSU2_TR(0x7026c9);
{goto L70271a;}
}
B7026cb:L7026cb:{c.instructions+=4;NFSU2_TR(0x7026cb);
{u32 ea_=u32(u32(8144320u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B7026d1:{NFSU2_TR(0x7026d1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7026d3:{NFSU2_TR(0x7026d3);
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
B7026d6:{NFSU2_TR(0x7026d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7026e6;}}
}
B7026d8:L7026d8:{c.instructions+=3;NFSU2_TR(0x7026d8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7026da:{NFSU2_TR(0x7026da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a0ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7026e4:{NFSU2_TR(0x7026e4);
{goto L70271a;}
}
B7026e6:L7026e6:{c.instructions+=4;NFSU2_TR(0x7026e6);
{u32 ea_=u32(u32(8144312u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B7026ec:{NFSU2_TR(0x7026ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7026ee:{NFSU2_TR(0x7026ee);
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
B7026f1:{NFSU2_TR(0x7026f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7026ff;}}
}
B7026f3:L7026f3:{c.instructions+=2;NFSU2_TR(0x7026f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a0ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7026fd:{NFSU2_TR(0x7026fd);
{goto L70271a;}
}
B7026ff:L7026ff:{c.instructions+=2;NFSU2_TR(0x7026ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a0ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B702709:{NFSU2_TR(0x702709);
{goto L70271a;}
}
B70270b:L70270b:{c.instructions+=3;NFSU2_TR(0x70270b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70270e:{NFSU2_TR(0x70270e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702714:{NFSU2_TR(0x702714);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70271a:L70271a:{c.instructions+=5;NFSU2_TR(0x70271a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70271b:{NFSU2_TR(0x70271b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70271c:{NFSU2_TR(0x70271c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70271d:{NFSU2_TR(0x70271d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70271e:{NFSU2_TR(0x70271e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70271f:L70271f:{c.instructions+=22;NFSU2_TR(0x70271f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702720:{NFSU2_TR(0x702720);
__builtin_memmove((R+20),(R+16),4);
}
B702722:{NFSU2_TR(0x702722);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702723:{NFSU2_TR(0x702723);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702726:{NFSU2_TR(0x702726);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70272c:{NFSU2_TR(0x70272c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x940ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702732:{NFSU2_TR(0x702732);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702733:{NFSU2_TR(0x702733);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x938ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B702739:{NFSU2_TR(0x702739);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70273a:{NFSU2_TR(0x70273a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x914ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B702740:{NFSU2_TR(0x702740);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702741:{NFSU2_TR(0x702741);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x910ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B702747:{NFSU2_TR(0x702747);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B702749:{NFSU2_TR(0x702749);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70274c:{NFSU2_TR(0x70274c);
u8 U[16];
w4(U+0,u32(u32(u32(0x918ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B702753:{NFSU2_TR(0x702753);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B702755:{NFSU2_TR(0x702755);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B702757:{NFSU2_TR(0x702757);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70275a:{NFSU2_TR(0x70275a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70275c:{NFSU2_TR(0x70275c);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B70275e:{NFSU2_TR(0x70275e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B702764:{NFSU2_TR(0x702764);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L702770;}}
}
B702766:L702766:{c.instructions+=3;NFSU2_TR(0x702766);
__builtin_memmove((R+0),(R+24),4);
}
B702768:{NFSU2_TR(0x702768);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70276a:{NFSU2_TR(0x70276a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x930ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702770:L702770:{c.instructions+=2;NFSU2_TR(0x702770);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x92cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B702776:{NFSU2_TR(0x702776);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L702782;}}
}
B702778:L702778:{c.instructions+=3;NFSU2_TR(0x702778);
__builtin_memmove((R+0),(R+24),4);
}
B70277a:{NFSU2_TR(0x70277a);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70277c:{NFSU2_TR(0x70277c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x92cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702782:L702782:{c.instructions+=2;NFSU2_TR(0x702782);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x928ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B702788:{NFSU2_TR(0x702788);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L702795;}}
}
B70278a:L70278a:{c.instructions+=3;NFSU2_TR(0x70278a);
__builtin_memmove((R+0),(R+24),4);
}
B70278c:{NFSU2_TR(0x70278c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B70278f:{NFSU2_TR(0x70278f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x928ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702795:L702795:{c.instructions+=2;NFSU2_TR(0x702795);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B702797:{NFSU2_TR(0x702797);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7027a4;}}
}
B702799:L702799:{c.instructions+=3;NFSU2_TR(0x702799);
__builtin_memmove((R+0),(R+24),4);
}
B70279b:{NFSU2_TR(0x70279b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B70279e:{NFSU2_TR(0x70279e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x938ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7027a4:L7027a4:{c.instructions+=3;NFSU2_TR(0x7027a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7027aa:{NFSU2_TR(0x7027aa);
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
B7027ac:{NFSU2_TR(0x7027ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7027b6;}}
}
B7027ae:L7027ae:{c.instructions+=2;NFSU2_TR(0x7027ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7027b1:{NFSU2_TR(0x7027b1);
{goto L702889;}
}
B7027b6:L7027b6:{c.instructions+=7;NFSU2_TR(0x7027b6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x7918ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7027bc:{NFSU2_TR(0x7027bc);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7027be:{NFSU2_TR(0x7027be);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7027c0:{NFSU2_TR(0x7027c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7027c1:{NFSU2_TR(0x7027c1);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7027c1);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7027c1);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B7027c3:{NFSU2_TR(0x7027c3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7027c6:{NFSU2_TR(0x7027c6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70280a;}}
}
B7027c8:L7027c8:{c.instructions+=6;NFSU2_TR(0x7027c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x910ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7027ce:{NFSU2_TR(0x7027ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x914ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7027d4:{NFSU2_TR(0x7027d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7027da:{NFSU2_TR(0x7027da);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B7027dc:{NFSU2_TR(0x7027dc);
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
B7027de:{NFSU2_TR(0x7027de);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7027e8;}}
}
B7027e0:L7027e0:{c.instructions+=1;NFSU2_TR(0x7027e0);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7027e2:L7027e2:{c.instructions+=2;NFSU2_TR(0x7027e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7027e3:{NFSU2_TR(0x7027e3);
{goto L702889;}
}
B7027e8:L7027e8:{c.instructions+=4;NFSU2_TR(0x7027e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x92cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7027ee:{NFSU2_TR(0x7027ee);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B7027f0:{NFSU2_TR(0x7027f0);
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
B7027f2:{NFSU2_TR(0x7027f2);
if(r1(R+512)){{goto L702860;}}
}
B7027f4:L7027f4:{c.instructions+=4;NFSU2_TR(0x7027f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x928ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7027fa:{NFSU2_TR(0x7027fa);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B7027fc:{NFSU2_TR(0x7027fc);
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
B7027fe:{NFSU2_TR(0x7027fe);
if(r1(R+512)){{goto L702873;}}
}
B702800:L702800:{c.instructions+=3;NFSU2_TR(0x702800);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x938ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702806:{NFSU2_TR(0x702806);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B702808:{NFSU2_TR(0x702808);
{goto L702882;}
}
B70280a:L70280a:{c.instructions+=9;NFSU2_TR(0x70280a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B702810:{NFSU2_TR(0x702810);
__builtin_memmove((R+0),(R+28),4);
}
B702812:{NFSU2_TR(0x702812);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x7530ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B702818:{NFSU2_TR(0x702818);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70281a:{NFSU2_TR(0x70281a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70281c:{NFSU2_TR(0x70281c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70281d:{NFSU2_TR(0x70281d);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70281d);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70281d);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B70281f:{NFSU2_TR(0x70281f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B702822:{NFSU2_TR(0x702822);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L702839;}}
}
B702824:L702824:{c.instructions+=6;NFSU2_TR(0x702824);
__builtin_memmove((R+0),(R+28),4);
}
B702826:{NFSU2_TR(0x702826);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x6d60ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70282c:{NFSU2_TR(0x70282c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70282e:{NFSU2_TR(0x70282e);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70282e);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70282e);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B702830:{NFSU2_TR(0x702830);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B702833:{NFSU2_TR(0x702833);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7027aeu);}goto L7027ae;}}
}
B702839:L702839:{c.instructions+=10;NFSU2_TR(0x702839);
__builtin_memmove((R+0),(R+28),4);
}
B70283b:{NFSU2_TR(0x70283b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x6d60ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B702841:{NFSU2_TR(0x702841);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B702843:{NFSU2_TR(0x702843);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702845:{NFSU2_TR(0x702845);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B702846:{NFSU2_TR(0x702846);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x702846);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x702846);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B702848:{NFSU2_TR(0x702848);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70284e:{NFSU2_TR(0x70284e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B702850:{NFSU2_TR(0x702850);
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
B702852:{NFSU2_TR(0x702852);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7027e0u);}goto L7027e0;}}
}
B702854:L702854:{c.instructions+=4;NFSU2_TR(0x702854);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x92cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70285a:{NFSU2_TR(0x70285a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B70285c:{NFSU2_TR(0x70285c);
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
B70285e:{NFSU2_TR(0x70285e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L702867;}}
}
B702860:L702860:{c.instructions+=2;NFSU2_TR(0x702860);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702862:{NFSU2_TR(0x702862);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7027e2u);}goto L7027e2;}
}
B702867:L702867:{c.instructions+=4;NFSU2_TR(0x702867);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x928ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70286d:{NFSU2_TR(0x70286d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B70286f:{NFSU2_TR(0x70286f);
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
B702871:{NFSU2_TR(0x702871);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L70287a;}}
}
B702873:L702873:{c.instructions+=2;NFSU2_TR(0x702873);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702875:{NFSU2_TR(0x702875);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7027e2u);}goto L7027e2;}
}
B70287a:L70287a:{c.instructions+=2;NFSU2_TR(0x70287a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x938ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702880:{NFSU2_TR(0x702880);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B702882:L702882:{c.instructions+=3;NFSU2_TR(0x702882);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B702884:{NFSU2_TR(0x702884);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B702886:{NFSU2_TR(0x702886);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B702889:L702889:{c.instructions+=5;NFSU2_TR(0x702889);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70288a:{NFSU2_TR(0x70288a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70288b:{NFSU2_TR(0x70288b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70288c:{NFSU2_TR(0x70288c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70288d:{NFSU2_TR(0x70288d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70288e:L70288e:{c.instructions+=9;NFSU2_TR(0x70288e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70288f:{NFSU2_TR(0x70288f);
__builtin_memmove((R+20),(R+16),4);
}
B702891:{NFSU2_TR(0x702891);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702892:{NFSU2_TR(0x702892);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702893:{NFSU2_TR(0x702893);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702894:{NFSU2_TR(0x702894);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B702897:{NFSU2_TR(0x702897);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702898:{NFSU2_TR(0x702898);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702899:{NFSU2_TR(0x702899);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70289eull));
TAIL_STATIC(0x704662u,704);
}
B70289e:L70289e:{c.instructions+=3;NFSU2_TR(0x70289e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7028a1:{NFSU2_TR(0x7028a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7028a2:{NFSU2_TR(0x7028a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7028a7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70271fu);}goto L70271f;}
}
B7028a7:L7028a7:{c.instructions+=6;NFSU2_TR(0x7028a7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7028a9:{NFSU2_TR(0x7028a9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7028ab:{NFSU2_TR(0x7028ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7028ac:{NFSU2_TR(0x7028ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7028ad:{NFSU2_TR(0x7028ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7028b3:{NFSU2_TR(0x7028b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7028cd;}}
}
B7028b5:L7028b5:{c.instructions+=2;NFSU2_TR(0x7028b5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7028bb:{NFSU2_TR(0x7028bb);
if(r1(R+518)){{goto L7029f5;}}
}
B7028c1:L7028c1:{c.instructions+=2;NFSU2_TR(0x7028c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4944ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7028c7:{NFSU2_TR(0x7028c7);
if(r1(R+518)){{goto L7029f5;}}
}
B7028cd:L7028cd:{c.instructions+=2;NFSU2_TR(0x7028cd);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7028d3:{NFSU2_TR(0x7028d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L702912;}}
}
B7028d5:L7028d5:{c.instructions+=7;NFSU2_TR(0x7028d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7028db:{NFSU2_TR(0x7028db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7028e1:{NFSU2_TR(0x7028e1);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7028e5:{NFSU2_TR(0x7028e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B7028eb:{NFSU2_TR(0x7028eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7028ec:{NFSU2_TR(0x7028ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7028ed:{NFSU2_TR(0x7028ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7028f2ull));
{goto L702edf;}
}
B7028f2:L7028f2:{c.instructions+=6;NFSU2_TR(0x7028f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7028f8:{NFSU2_TR(0x7028f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x260ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7028fe:{NFSU2_TR(0x7028fe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B702901:{NFSU2_TR(0x702901);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe0ull))));
}
B702904:{NFSU2_TR(0x702904);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70290a:{NFSU2_TR(0x70290a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70290full));
TAIL_STATIC(0x703106u,703);
}
B70290f:L70290f:{c.instructions+=1;NFSU2_TR(0x70290f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B702912:L702912:{c.instructions+=9;NFSU2_TR(0x702912);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702918:{NFSU2_TR(0x702918);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc8ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc8ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70291d:{NFSU2_TR(0x70291d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70291f:{NFSU2_TR(0x70291f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702921:{NFSU2_TR(0x702921);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B702927:{NFSU2_TR(0x702927);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70292d:{NFSU2_TR(0x70292d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B702933:{NFSU2_TR(0x702933);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B702939:{NFSU2_TR(0x702939);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L702970;}}
}
B70293b:L70293b:{c.instructions+=8;NFSU2_TR(0x70293b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffff38ull))));
}
B702940:{NFSU2_TR(0x702940);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702941:{NFSU2_TR(0x702941);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B702948:{NFSU2_TR(0x702948);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702949:{NFSU2_TR(0x702949);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B702950:{NFSU2_TR(0x702950);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702951:{NFSU2_TR(0x702951);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B702957:{NFSU2_TR(0x702957);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70295cull));
TAIL_STATIC(0x70355au,703);
}
B70295c:L70295c:{c.instructions+=3;NFSU2_TR(0x70295c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B70295f:{NFSU2_TR(0x70295f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702960:{NFSU2_TR(0x702960);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702965ull));
TAIL_STATIC(0x704662u,704);
}
B702965:L702965:{c.instructions+=2;NFSU2_TR(0x702965);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702966:{NFSU2_TR(0x702966);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70296bull));
TAIL_STATIC(0x7067a3u,706);
}
B70296b:L70296b:{c.instructions+=2;NFSU2_TR(0x70296b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B70296e:{NFSU2_TR(0x70296e);
{goto L7029cd;}
}
B702970:L702970:{c.instructions+=2;NFSU2_TR(0x702970);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x64ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B702973:{NFSU2_TR(0x702973);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7029a5;}}
}
B702975:L702975:{c.instructions+=8;NFSU2_TR(0x702975);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffff9cull))));
}
B702978:{NFSU2_TR(0x702978);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702979:{NFSU2_TR(0x702979);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B702980:{NFSU2_TR(0x702980);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702981:{NFSU2_TR(0x702981);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B702988:{NFSU2_TR(0x702988);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702989:{NFSU2_TR(0x702989);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70298f:{NFSU2_TR(0x70298f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702994ull));
TAIL_STATIC(0x70355au,703);
}
B702994:L702994:{c.instructions+=3;NFSU2_TR(0x702994);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B702997:{NFSU2_TR(0x702997);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702998:{NFSU2_TR(0x702998);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70299dull));
TAIL_STATIC(0x704662u,704);
}
B70299d:L70299d:{c.instructions+=2;NFSU2_TR(0x70299d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70299e:{NFSU2_TR(0x70299e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7029a3ull));
TAIL_STATIC(0x7066efu,706);
}
B7029a3:L7029a3:{c.instructions+=1;NFSU2_TR(0x7029a3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70296bu);}goto L70296b;}
}
B7029a5:L7029a5:{c.instructions+=7;NFSU2_TR(0x7029a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7029a6:{NFSU2_TR(0x7029a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7029ad:{NFSU2_TR(0x7029ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7029ae:{NFSU2_TR(0x7029ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7029b5:{NFSU2_TR(0x7029b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7029b6:{NFSU2_TR(0x7029b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7029bc:{NFSU2_TR(0x7029bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7029c1ull));
TAIL_STATIC(0x70355au,703);
}
B7029c1:L7029c1:{c.instructions+=3;NFSU2_TR(0x7029c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B7029c4:{NFSU2_TR(0x7029c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7029c5:{NFSU2_TR(0x7029c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7029caull));
TAIL_STATIC(0x704662u,704);
}
B7029ca:L7029ca:{c.instructions+=1;NFSU2_TR(0x7029ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B7029cd:L7029cd:{c.instructions+=3;NFSU2_TR(0x7029cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x493cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7029d3:{NFSU2_TR(0x7029d3);
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
B7029d5:{NFSU2_TR(0x7029d5);
if(r1(R+518)){{goto L7029f5;}}
}
B7029d7:L7029d7:{c.instructions+=7;NFSU2_TR(0x7029d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7029dd:{NFSU2_TR(0x7029dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7029de:{NFSU2_TR(0x7029de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7029df:{NFSU2_TR(0x7029df);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4940ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7029e5:{NFSU2_TR(0x7029e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7029e6:{NFSU2_TR(0x7029e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7029ec:{NFSU2_TR(0x7029ec);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f04),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7029f2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7029f2:L7029f2:{c.instructions+=1;NFSU2_TR(0x7029f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B7029f5:L7029f5:{c.instructions+=5;NFSU2_TR(0x7029f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7029fb:{NFSU2_TR(0x7029fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702a01:{NFSU2_TR(0x702a01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B702a03:{NFSU2_TR(0x702a03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702a04:{NFSU2_TR(0x702a04);
if(r1(R+512)){{goto L702b34;}}
}
B702a0a:L702a0a:{c.instructions+=3;NFSU2_TR(0x702a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B702a10:{NFSU2_TR(0x702a10);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B702a16:{NFSU2_TR(0x702a16);
if(r1(R+512)){{goto L702b34;}}
}
B702a1c:L702a1c:{c.instructions+=16;NFSU2_TR(0x702a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702a1f:{NFSU2_TR(0x702a1f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B702a21:{NFSU2_TR(0x702a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702a27:{NFSU2_TR(0x702a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702a2a:{NFSU2_TR(0x702a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702a30:{NFSU2_TR(0x702a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702a33:{NFSU2_TR(0x702a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702a39:{NFSU2_TR(0x702a39);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B702a3b:{NFSU2_TR(0x702a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702a3e:{NFSU2_TR(0x702a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702a44:{NFSU2_TR(0x702a44);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B702a46:{NFSU2_TR(0x702a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702a49:{NFSU2_TR(0x702a49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702a4f:{NFSU2_TR(0x702a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702a52:{NFSU2_TR(0x702a52);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B702a58:{NFSU2_TR(0x702a58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L702ad2;}}
}
B702a5a:L702a5a:{c.instructions+=2;NFSU2_TR(0x702a5a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B702a60:{NFSU2_TR(0x702a60);
if(r1(R+518)){{goto L702a6a;}}
}
B702a62:L702a62:{c.instructions+=2;NFSU2_TR(0x702a62);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4944ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B702a68:{NFSU2_TR(0x702a68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L702ad2;}}
}
B702a6a:L702a6a:{c.instructions+=23;NFSU2_TR(0x702a6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702a70:{NFSU2_TR(0x702a70);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B702a71:{NFSU2_TR(0x702a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B702a74:{NFSU2_TR(0x702a74);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B702a77:{NFSU2_TR(0x702a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B702a7d:{NFSU2_TR(0x702a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B702a83:{NFSU2_TR(0x702a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702a86:{NFSU2_TR(0x702a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702a8c:{NFSU2_TR(0x702a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B702a92:{NFSU2_TR(0x702a92);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B702a93:{NFSU2_TR(0x702a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B702a96:{NFSU2_TR(0x702a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B702a99:{NFSU2_TR(0x702a99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B702a9f:{NFSU2_TR(0x702a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702aa2:{NFSU2_TR(0x702aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702aa8:{NFSU2_TR(0x702aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B702aae:{NFSU2_TR(0x702aae);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B702aaf:{NFSU2_TR(0x702aaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B702ab2:{NFSU2_TR(0x702ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B702ab5:{NFSU2_TR(0x702ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B702abb:{NFSU2_TR(0x702abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702abe:{NFSU2_TR(0x702abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702ac4:{NFSU2_TR(0x702ac4);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B702aca:L702aca:{c.instructions+=2;NFSU2_TR(0x702aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702acd:{NFSU2_TR(0x702acd);
{goto L702c5a;}
}
B702ad2:L702ad2:{c.instructions+=24;NFSU2_TR(0x702ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702ad8:{NFSU2_TR(0x702ad8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B702ad9:{NFSU2_TR(0x702ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B702adc:{NFSU2_TR(0x702adc);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B702adf:{NFSU2_TR(0x702adf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B702ae5:{NFSU2_TR(0x702ae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B702aeb:{NFSU2_TR(0x702aeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702aee:{NFSU2_TR(0x702aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702af4:{NFSU2_TR(0x702af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B702afa:{NFSU2_TR(0x702afa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B702afb:{NFSU2_TR(0x702afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B702afe:{NFSU2_TR(0x702afe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B702b01:{NFSU2_TR(0x702b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B702b07:{NFSU2_TR(0x702b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702b0a:{NFSU2_TR(0x702b0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702b10:{NFSU2_TR(0x702b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B702b16:{NFSU2_TR(0x702b16);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B702b17:{NFSU2_TR(0x702b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B702b1a:{NFSU2_TR(0x702b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B702b1d:{NFSU2_TR(0x702b1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B702b23:{NFSU2_TR(0x702b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702b26:{NFSU2_TR(0x702b26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702b2c:{NFSU2_TR(0x702b2c);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B702b32:{NFSU2_TR(0x702b32);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x702acau);}goto L702aca;}
}
B702b34:L702b34:{c.instructions+=36;NFSU2_TR(0x702b34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B702b37:{NFSU2_TR(0x702b37);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B702b3a:{NFSU2_TR(0x702b3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B702b3c:{NFSU2_TR(0x702b3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702b42:{NFSU2_TR(0x702b42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B702b44:{NFSU2_TR(0x702b44);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B702b47:{NFSU2_TR(0x702b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702b4a:{NFSU2_TR(0x702b4a);
__builtin_memmove((R+0),(R+12),4);
}
B702b4c:{NFSU2_TR(0x702b4c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B702b4d:{NFSU2_TR(0x702b4d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B702b4f:{NFSU2_TR(0x702b4f);
__builtin_memmove((R+4),(R+0),4);
}
B702b51:{NFSU2_TR(0x702b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702b54:{NFSU2_TR(0x702b54);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B702b55:{NFSU2_TR(0x702b55);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B702b57:{NFSU2_TR(0x702b57);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B702b59:{NFSU2_TR(0x702b59);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702b5c:{NFSU2_TR(0x702b5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702b5f:{NFSU2_TR(0x702b5f);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B702b61:{NFSU2_TR(0x702b61);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702b64:{NFSU2_TR(0x702b64);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B702b67:{NFSU2_TR(0x702b67);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702b6a:{NFSU2_TR(0x702b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B702b70:{NFSU2_TR(0x702b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702b73:{NFSU2_TR(0x702b73);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B702b76:{NFSU2_TR(0x702b76);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B702b79:{NFSU2_TR(0x702b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B702b7f:{NFSU2_TR(0x702b7f);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B702b81:{NFSU2_TR(0x702b81);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B702b83:{NFSU2_TR(0x702b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702b86:{NFSU2_TR(0x702b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B702b8c:{NFSU2_TR(0x702b8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702b8d:{NFSU2_TR(0x702b8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702b90:{NFSU2_TR(0x702b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702b96:{NFSU2_TR(0x702b96);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702b99:{NFSU2_TR(0x702b99);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B702ba0:{NFSU2_TR(0x702ba0);
if(r1(R+518)){{goto L702baa;}}
}
B702ba2:L702ba2:{c.instructions+=2;NFSU2_TR(0x702ba2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B702ba8:{NFSU2_TR(0x702ba8);
{goto L702bb0;}
}
B702baa:L702baa:{c.instructions+=1;NFSU2_TR(0x702baa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B702bb0:L702bb0:{c.instructions+=2;NFSU2_TR(0x702bb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B702bb6:{NFSU2_TR(0x702bb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702bbbull));
TAIL_STATIC(0x7064dau,706);
}
B702bbb:L702bbb:{c.instructions+=50;NFSU2_TR(0x702bbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702bbe:{NFSU2_TR(0x702bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B702bc4:{NFSU2_TR(0x702bc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B702bc6:{NFSU2_TR(0x702bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B702bcc:{NFSU2_TR(0x702bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B702bcf:{NFSU2_TR(0x702bcf);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B702bd1:{NFSU2_TR(0x702bd1);
u8 U[32];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B702bd5:{NFSU2_TR(0x702bd5);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B702bd7:{NFSU2_TR(0x702bd7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B702bd9:{NFSU2_TR(0x702bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B702bdc:{NFSU2_TR(0x702bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702be2:{NFSU2_TR(0x702be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702be5:{NFSU2_TR(0x702be5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B702be7:{NFSU2_TR(0x702be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702bed:{NFSU2_TR(0x702bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702bf0:{NFSU2_TR(0x702bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702bf3:{NFSU2_TR(0x702bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702bf6:{NFSU2_TR(0x702bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B702bfc:{NFSU2_TR(0x702bfc);
__builtin_memmove((R+12),(R+0),4);
}
B702bfe:{NFSU2_TR(0x702bfe);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B702c00:{NFSU2_TR(0x702c00);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B702c02:{NFSU2_TR(0x702c02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B702c05:{NFSU2_TR(0x702c05);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B702c07:{NFSU2_TR(0x702c07);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B702c0a:{NFSU2_TR(0x702c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702c10:{NFSU2_TR(0x702c10);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B702c12:{NFSU2_TR(0x702c12);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B702c14:{NFSU2_TR(0x702c14);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B702c16:{NFSU2_TR(0x702c16);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B702c18:{NFSU2_TR(0x702c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B702c1b:{NFSU2_TR(0x702c1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702c21:{NFSU2_TR(0x702c21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B702c27:{NFSU2_TR(0x702c27);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B702c29:{NFSU2_TR(0x702c29);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B702c2b:{NFSU2_TR(0x702c2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702c2e:{NFSU2_TR(0x702c2e);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B702c30:{NFSU2_TR(0x702c30);
u8 U[32];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B702c34:{NFSU2_TR(0x702c34);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B702c36:{NFSU2_TR(0x702c36);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B702c38:{NFSU2_TR(0x702c38);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B702c3a:{NFSU2_TR(0x702c3a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B702c3c:{NFSU2_TR(0x702c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B702c3f:{NFSU2_TR(0x702c3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702c45:{NFSU2_TR(0x702c45);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B702c47:{NFSU2_TR(0x702c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702c4a:{NFSU2_TR(0x702c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702c50:{NFSU2_TR(0x702c50);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B702c52:{NFSU2_TR(0x702c52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B702c55:{NFSU2_TR(0x702c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702c58:{NFSU2_TR(0x702c58);
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
B702c5a:L702c5a:{c.instructions+=1;NFSU2_TR(0x702c5a);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c60),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702c60ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B702c60:L702c60:{c.instructions+=14;NFSU2_TR(0x702c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702c63:{NFSU2_TR(0x702c63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B702c66:{NFSU2_TR(0x702c66);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B702c68:{NFSU2_TR(0x702c68);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x702c68);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x702c68);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B702c6e:{NFSU2_TR(0x702c6e);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702c70:{NFSU2_TR(0x702c70);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B702c72:{NFSU2_TR(0x702c72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B702c73:{NFSU2_TR(0x702c73);
__builtin_memmove((R+4),(R+0),4);
}
B702c75:{NFSU2_TR(0x702c75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702c7b:{NFSU2_TR(0x702c7b);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x702c7b);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x702c7b);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B702c7d:{NFSU2_TR(0x702c7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B702c7e:{NFSU2_TR(0x702c7e);
u8 U[12];
w4(U+0,u32(u32(u32(0x918ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B702c85:{NFSU2_TR(0x702c85);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B702c87:{NFSU2_TR(0x702c87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L702c8d;}}
}
B702c89:L702c89:{c.instructions+=2;NFSU2_TR(0x702c89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B702c8b:{NFSU2_TR(0x702c8b);
{goto L702c99;}
}
B702c8d:L702c8d:{c.instructions+=5;NFSU2_TR(0x702c8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B702c8f:{NFSU2_TR(0x702c8f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x7ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B702c92:{NFSU2_TR(0x702c92);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B702c94:{NFSU2_TR(0x702c94);
u8 U[48];
w4(U+40,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B702c97:{NFSU2_TR(0x702c97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B702c99:L702c99:{c.instructions+=4;NFSU2_TR(0x702c99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B702c9a:{NFSU2_TR(0x702c9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B702c9b:{NFSU2_TR(0x702c9b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B702c9c:{NFSU2_TR(0x702c9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B702c9d:L702c9d:{c.instructions+=7;NFSU2_TR(0x702c9d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702c9e:{NFSU2_TR(0x702c9e);
__builtin_memmove((R+20),(R+16),4);
}
B702ca0:{NFSU2_TR(0x702ca0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702ca1:{NFSU2_TR(0x702ca1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702ca2:{NFSU2_TR(0x702ca2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B702ca5:{NFSU2_TR(0x702ca5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702ca6:{NFSU2_TR(0x702ca6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702cabull));
TAIL_STATIC(0x704662u,704);
}
B702cab:L702cab:{c.instructions+=6;NFSU2_TR(0x702cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702cae:{NFSU2_TR(0x702cae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B702cb1:{NFSU2_TR(0x702cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702cb7:{NFSU2_TR(0x702cb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x450cull))));
__builtin_memmove((R+0),(U+0),4);
}
B702cbd:{NFSU2_TR(0x702cbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702cbe:{NFSU2_TR(0x702cbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702cc3ull));
TAIL_STATIC(0x707c3cu,707);
}
B702cc3:L702cc3:{c.instructions+=2;NFSU2_TR(0x702cc3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702cc4:{NFSU2_TR(0x702cc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702cc9ull));
TAIL_STATIC(0x7081dbu,708);
}
B702cc9:L702cc9:{c.instructions+=3;NFSU2_TR(0x702cc9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B702ccc:{NFSU2_TR(0x702ccc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B702cce:{NFSU2_TR(0x702cce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L702cd5;}}
}
B702cd0:L702cd0:{c.instructions+=3;NFSU2_TR(0x702cd0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B702cd3:{NFSU2_TR(0x702cd3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B702cd4:{NFSU2_TR(0x702cd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B702cd5:L702cd5:{c.instructions+=5;NFSU2_TR(0x702cd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702cd6:{NFSU2_TR(0x702cd6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B702cd8:{NFSU2_TR(0x702cd8);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x944ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B702cde:{NFSU2_TR(0x702cde);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702cdf:{NFSU2_TR(0x702cdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L702cea;}}
}
B702ce1:L702ce1:{c.instructions+=2;NFSU2_TR(0x702ce1);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x19dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B702ce8:{NFSU2_TR(0x702ce8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L702d1e;}}
}
B702cea:L702cea:{c.instructions+=4;NFSU2_TR(0x702cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x451cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702cf0:{NFSU2_TR(0x702cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B702cf3:{NFSU2_TR(0x702cf3);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4520ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B702cf9:{NFSU2_TR(0x702cf9);
if(r1(R+518)){{goto L702d0f;}}
}
B702cfb:L702cfb:{c.instructions+=4;NFSU2_TR(0x702cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702d01:{NFSU2_TR(0x702d01);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x194ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702d07:{NFSU2_TR(0x702d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702d0d:{NFSU2_TR(0x702d0d);
{goto L702d1e;}
}
B702d0f:L702d0f:{c.instructions+=4;NFSU2_TR(0x702d0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702d10:{NFSU2_TR(0x702d10);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x170ull))));
__builtin_memmove((R+0),(U+0),4);
}
B702d16:{NFSU2_TR(0x702d16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702d17:{NFSU2_TR(0x702d17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702d1cull));
TAIL_STATIC(0x707bcau,707);
}
B702d1c:L702d1c:{c.instructions+=2;NFSU2_TR(0x702d1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B702d1d:{NFSU2_TR(0x702d1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B702d1e:L702d1e:{c.instructions+=2;NFSU2_TR(0x702d1e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702d1f:{NFSU2_TR(0x702d1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702d24ull));
TAIL_STATIC(0x7077b2u,707);
}
B702d24:L702d24:{c.instructions+=8;NFSU2_TR(0x702d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702d2a:{NFSU2_TR(0x702d2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x244ull))));
__builtin_memmove((R+0),(U+0),4);
}
B702d30:{NFSU2_TR(0x702d30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B702d32:{NFSU2_TR(0x702d32);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702d33:{NFSU2_TR(0x702d33);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B702d39:{NFSU2_TR(0x702d39);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x254ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702d3f:{NFSU2_TR(0x702d3f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B702d41:{NFSU2_TR(0x702d41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702d46ull));
TAIL_STATIC(0x704d87u,704);
}
B702d46:L702d46:{c.instructions+=3;NFSU2_TR(0x702d46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B702d49:{NFSU2_TR(0x702d49);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B702d50:{NFSU2_TR(0x702d50);
if(r1(R+518)){{goto L702d5a;}}
}
B702d52:L702d52:{c.instructions+=2;NFSU2_TR(0x702d52);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x698ull))));
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
B702d58:{NFSU2_TR(0x702d58);
if(r1(R+518)){{goto L702d85;}}
}
B702d5a:L702d5a:{c.instructions+=7;NFSU2_TR(0x702d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702d60:{NFSU2_TR(0x702d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702d66:{NFSU2_TR(0x702d66);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B702d6c:{NFSU2_TR(0x702d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B702d72:{NFSU2_TR(0x702d72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B702d75:{NFSU2_TR(0x702d75);
__builtin_memmove((R+0),(R+4),4);
}
B702d77:{NFSU2_TR(0x702d77);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B702d7a:L702d7a:{c.instructions+=1;NFSU2_TR(0x702d7a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L702d7c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x702d7au);}goto L702d7a;}
}
B702d7c:L702d7c:{c.instructions+=2;NFSU2_TR(0x702d7c);
__builtin_memmove((R+4),(R+0),4);
}
B702d7e:{NFSU2_TR(0x702d7e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B702d81:L702d81:{c.instructions+=1;NFSU2_TR(0x702d81);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L702d83;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x702d81u);}goto L702d81;}
}
B702d83:L702d83:{c.instructions+=1;NFSU2_TR(0x702d83);
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
B702d85:L702d85:{c.instructions+=1;NFSU2_TR(0x702d85);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c60),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702d8bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B702d8b:L702d8b:{c.instructions+=2;NFSU2_TR(0x702d8b);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B702d92:{NFSU2_TR(0x702d92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L702da4;}}
}
B702d94:L702d94:{c.instructions+=4;NFSU2_TR(0x702d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702d9a:{NFSU2_TR(0x702d9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B702d9c:{NFSU2_TR(0x702d9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702da2:{NFSU2_TR(0x702da2);
{goto L702dc0;}
}
B702da4:L702da4:{c.instructions+=8;NFSU2_TR(0x702da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B702daa:{NFSU2_TR(0x702daa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B702dac:{NFSU2_TR(0x702dac);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6a0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B702db2:{NFSU2_TR(0x702db2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B702db4:{NFSU2_TR(0x702db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B702db7:{NFSU2_TR(0x702db7);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B702dbb:{NFSU2_TR(0x702dbb);
u8 U[48];
w4(U+40,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+4),4);
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B702dbe:{NFSU2_TR(0x702dbe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B702dc0:L702dc0:{c.instructions+=3;NFSU2_TR(0x702dc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B702dc3:{NFSU2_TR(0x702dc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702dc4:{NFSU2_TR(0x702dc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702dc9ull));
TAIL_STATIC(0x704662u,704);
}
B702dc9:L702dc9:{c.instructions+=10;NFSU2_TR(0x702dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702dcc:{NFSU2_TR(0x702dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B702dcf:{NFSU2_TR(0x702dcf);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B702dd1:{NFSU2_TR(0x702dd1);
u8 U[64];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x702dd1);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x702dd1);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B702dd7:{NFSU2_TR(0x702dd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x914ull))));
__builtin_memmove((R+8),(U+0),4);
}
B702ddd:{NFSU2_TR(0x702ddd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B702dde:{NFSU2_TR(0x702dde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B702de0:{NFSU2_TR(0x702de0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B702de2:{NFSU2_TR(0x702de2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x910ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B702de8:{NFSU2_TR(0x702de8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L702dee;}}
}
B702dea:L702dea:{c.instructions+=2;NFSU2_TR(0x702dea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B702dec:{NFSU2_TR(0x702dec);
{goto L702df8;}
}
B702dee:L702dee:{c.instructions+=4;NFSU2_TR(0x702dee);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x7ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B702df1:{NFSU2_TR(0x702df1);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B702df3:{NFSU2_TR(0x702df3);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B702df6:{NFSU2_TR(0x702df6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B702df8:L702df8:{c.instructions+=4;NFSU2_TR(0x702df8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x160ull))));
__builtin_memmove((R+24),(U+0),4);
}
B702dfe:{NFSU2_TR(0x702dfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B702e00:{NFSU2_TR(0x702e00);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B702e06:{NFSU2_TR(0x702e06);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L702e3b;}}
}
B702e08:L702e08:{c.instructions+=3;NFSU2_TR(0x702e08);
u8 U[4];
w4(U+0,u32(0x799428ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702e0d:{NFSU2_TR(0x702e0d);
u8 U[4];
w4(U+0,u32(0x7c45e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702e12:{NFSU2_TR(0x702e12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702e17ull));
TAIL_STATIC(0x75d406u,75d);
}
B702e17:L702e17:{c.instructions+=7;NFSU2_TR(0x702e17);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B702e1d:{NFSU2_TR(0x702e1d);
__builtin_memmove((R+28),(R+0),4);
}
B702e1f:{NFSU2_TR(0x702e1f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B702e21:{NFSU2_TR(0x702e21);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b3e4c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702e27:{NFSU2_TR(0x702e27);
u8 U[4];
w4(U+0,u32(0x7c45d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702e2c:{NFSU2_TR(0x702e2c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702e2d:{NFSU2_TR(0x702e2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702e32ull));
TAIL_STATIC(0x760d1fu,760);
}
B702e32:L702e32:{c.instructions+=2;NFSU2_TR(0x702e32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702e33:{NFSU2_TR(0x702e33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702e38ull));
TAIL_STATIC(0x75d359u,75d);
}
B702e38:L702e38:{c.instructions+=1;NFSU2_TR(0x702e38);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B702e3b:L702e3b:{c.instructions+=6;NFSU2_TR(0x702e3b);
s4(0x8b3e4c,u32(u32(m4(0x8b3e4c))+u32(u32(0x1ull))));
}
B702e41:{NFSU2_TR(0x702e41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B702e42:{NFSU2_TR(0x702e42);
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
B702e44:{NFSU2_TR(0x702e44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B702e45:{NFSU2_TR(0x702e45);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B702e46:{NFSU2_TR(0x702e46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B702e47:L702e47:{c.instructions+=7;NFSU2_TR(0x702e47);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702e48:{NFSU2_TR(0x702e48);
__builtin_memmove((R+20),(R+16),4);
}
B702e4a:{NFSU2_TR(0x702e4a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702e4b:{NFSU2_TR(0x702e4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B702e4e:{NFSU2_TR(0x702e4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B702e51:{NFSU2_TR(0x702e51);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B702e54:{NFSU2_TR(0x702e54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702e59ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x702c9du);}goto L702c9d;}
}
B702e59:L702e59:{c.instructions+=5;NFSU2_TR(0x702e59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B702e5a:{NFSU2_TR(0x702e5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B702e5b:{NFSU2_TR(0x702e5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B702e5c:{NFSU2_TR(0x702e5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B702e5d:{NFSU2_TR(0x702e5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B702e5e:L702e5e:{c.instructions+=7;NFSU2_TR(0x702e5e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702e5f:{NFSU2_TR(0x702e5f);
__builtin_memmove((R+20),(R+16),4);
}
B702e61:{NFSU2_TR(0x702e61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702e62:{NFSU2_TR(0x702e62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B702e65:{NFSU2_TR(0x702e65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B702e67:{NFSU2_TR(0x702e67);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B702e69:{NFSU2_TR(0x702e69);
if(r1(R+518)){{goto L702e9a;}}
}
B702e6b:L702e6b:{c.instructions+=3;NFSU2_TR(0x702e6b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x13cull))));
}
B702e70:{NFSU2_TR(0x702e70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702e71:{NFSU2_TR(0x702e71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702e76ull));
TAIL_STATIC(0x703dadu,703);
}
B702e76:L702e76:{c.instructions+=4;NFSU2_TR(0x702e76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B702e78:{NFSU2_TR(0x702e78);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x298ull))));
}
B702e7d:{NFSU2_TR(0x702e7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702e7e:{NFSU2_TR(0x702e7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702e83ull));
TAIL_STATIC(0x70331au,703);
}
B702e83:L702e83:{c.instructions+=2;NFSU2_TR(0x702e83);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B702e85:{NFSU2_TR(0x702e85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702e8aull));
TAIL_STATIC(0x704804u,704);
}
B702e8a:L702e8a:{c.instructions+=2;NFSU2_TR(0x702e8a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B702e8c:{NFSU2_TR(0x702e8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702e91ull));
TAIL_STATIC(0x704a6du,704);
}
B702e91:L702e91:{c.instructions+=2;NFSU2_TR(0x702e91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702e92:{NFSU2_TR(0x702e92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702e97ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x702332u);}goto L702332;}
}
B702e97:L702e97:{c.instructions+=1;NFSU2_TR(0x702e97);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B702e9a:L702e9a:{c.instructions+=5;NFSU2_TR(0x702e9a);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B702e9c:{NFSU2_TR(0x702e9c);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B702e9d:{NFSU2_TR(0x702e9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B702e9e:{NFSU2_TR(0x702e9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B702e9f:{NFSU2_TR(0x702e9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B702ea0:L702ea0:{c.instructions+=6;NFSU2_TR(0x702ea0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702ea1:{NFSU2_TR(0x702ea1);
__builtin_memmove((R+20),(R+16),4);
}
B702ea3:{NFSU2_TR(0x702ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702ea6:{NFSU2_TR(0x702ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702eac:{NFSU2_TR(0x702eac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B702ead:{NFSU2_TR(0x702ead);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B702eae:L702eae:{c.instructions+=7;NFSU2_TR(0x702eae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702eaf:{NFSU2_TR(0x702eaf);
__builtin_memmove((R+20),(R+16),4);
}
B702eb1:{NFSU2_TR(0x702eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702eb4:{NFSU2_TR(0x702eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702eba:{NFSU2_TR(0x702eba);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B702ec0:{NFSU2_TR(0x702ec0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B702ec1:{NFSU2_TR(0x702ec1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B702ec2:L702ec2:{c.instructions+=7;NFSU2_TR(0x702ec2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702ec3:{NFSU2_TR(0x702ec3);
__builtin_memmove((R+20),(R+16),4);
}
B702ec5:{NFSU2_TR(0x702ec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702ec8:{NFSU2_TR(0x702ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702ece:{NFSU2_TR(0x702ece);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B702ed4:{NFSU2_TR(0x702ed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B702ed5:{NFSU2_TR(0x702ed5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B702ed6:L702ed6:{c.instructions+=4;NFSU2_TR(0x702ed6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702ed7:{NFSU2_TR(0x702ed7);
__builtin_memmove((R+20),(R+16),4);
}
B702ed9:{NFSU2_TR(0x702ed9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B702eda:{NFSU2_TR(0x702eda);
TAIL_STATIC(0x75cfd0u,75c);
}
B702edf:L702edf:{c.instructions+=4;NFSU2_TR(0x702edf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702ee0:{NFSU2_TR(0x702ee0);
__builtin_memmove((R+20),(R+16),4);
}
B702ee2:{NFSU2_TR(0x702ee2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B702ee5:{NFSU2_TR(0x702ee5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702eeaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70247fu);}goto L70247f;}
}
B702eea:L702eea:{c.instructions+=3;NFSU2_TR(0x702eea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B702eeb:{NFSU2_TR(0x702eeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B702eec:{NFSU2_TR(0x702eec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B702eed:L702eed:{c.instructions+=4;NFSU2_TR(0x702eed);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702eee:{NFSU2_TR(0x702eee);
__builtin_memmove((R+20),(R+16),4);
}
B702ef0:{NFSU2_TR(0x702ef0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B702ef1:{NFSU2_TR(0x702ef1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7024b2u);}goto L7024b2;}
}
B702ef6:L702ef6:{c.instructions+=16;NFSU2_TR(0x702ef6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702ef7:{NFSU2_TR(0x702ef7);
__builtin_memmove((R+20),(R+16),4);
}
B702ef9:{NFSU2_TR(0x702ef9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B702efc:{NFSU2_TR(0x702efc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702eff:{NFSU2_TR(0x702eff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702f00:{NFSU2_TR(0x702f00);
__builtin_memmove((R+12),(R+0),1);
}
B702f02:{NFSU2_TR(0x702f02);
__builtin_memmove((R+13),(R+12),1);
}
B702f04:{NFSU2_TR(0x702f04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702f05:{NFSU2_TR(0x702f05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702f06:{NFSU2_TR(0x702f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B702f09:{NFSU2_TR(0x702f09);
__builtin_memmove((R+8),(R+4),4);
}
B702f0b:{NFSU2_TR(0x702f0b);
__builtin_memmove((R+24),(R+28),4);
}
B702f0d:{NFSU2_TR(0x702f0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B702f10:{NFSU2_TR(0x702f10);
__builtin_memmove((R+0),(R+12),4);
}
B702f12:{NFSU2_TR(0x702f12);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B702f15:{NFSU2_TR(0x702f15);
__builtin_memmove((R+0),(R+12),2);
}
B702f18:L702f18:{c.instructions+=1;NFSU2_TR(0x702f18);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L702f1a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x702f18u);}goto L702f18;}
}
B702f1a:L702f1a:{c.instructions+=2;NFSU2_TR(0x702f1a);
__builtin_memmove((R+4),(R+8),4);
}
B702f1c:{NFSU2_TR(0x702f1c);
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
B702f1f:L702f1f:{c.instructions+=1;NFSU2_TR(0x702f1f);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L702f21;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x702f1fu);}goto L702f1f;}
}
B702f21:L702f21:{c.instructions+=6;NFSU2_TR(0x702f21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B702f22:{NFSU2_TR(0x702f22);
__builtin_memmove((R+0),(R+24),4);
}
B702f24:{NFSU2_TR(0x702f24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B702f25:{NFSU2_TR(0x702f25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B702f26:{NFSU2_TR(0x702f26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B702f27:{NFSU2_TR(0x702f27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B702f28:L702f28:{c.instructions+=9;NFSU2_TR(0x702f28);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702f29:{NFSU2_TR(0x702f29);
__builtin_memmove((R+20),(R+16),4);
}
B702f2b:{NFSU2_TR(0x702f2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702f2c:{NFSU2_TR(0x702f2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B702f2f:{NFSU2_TR(0x702f2f);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
}
B702f33:{NFSU2_TR(0x702f33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702f34:{NFSU2_TR(0x702f34);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B702f37:{NFSU2_TR(0x702f37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702f38:{NFSU2_TR(0x702f38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702f3dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x702edfu);}goto L702edf;}
}
B702f3d:L702f3d:{c.instructions+=5;NFSU2_TR(0x702f3d);
__builtin_memmove((R+28),(R+0),4);
}
B702f3f:{NFSU2_TR(0x702f3f);
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
B702f41:{NFSU2_TR(0x702f41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B702f42:{NFSU2_TR(0x702f42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B702f43:{NFSU2_TR(0x702f43);
if(r1(R+518)){{goto L702f51;}}
}
B702f45:L702f45:{c.instructions+=4;NFSU2_TR(0x702f45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702f46:{NFSU2_TR(0x702f46);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702f48:{NFSU2_TR(0x702f48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702f49:{NFSU2_TR(0x702f49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x702f4eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x702ef6u);}goto L702ef6;}
}
B702f4e:L702f4e:{c.instructions+=1;NFSU2_TR(0x702f4e);
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
B702f51:L702f51:{c.instructions+=5;NFSU2_TR(0x702f51);
__builtin_memmove((R+0),(R+28),4);
}
B702f53:{NFSU2_TR(0x702f53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B702f54:{NFSU2_TR(0x702f54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B702f55:{NFSU2_TR(0x702f55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B702f56:{NFSU2_TR(0x702f56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B702f57:L702f57:{c.instructions+=10;NFSU2_TR(0x702f57);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702f58:{NFSU2_TR(0x702f58);
__builtin_memmove((R+20),(R+16),4);
}
B702f5a:{NFSU2_TR(0x702f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702f5d:{NFSU2_TR(0x702f5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702f5e:{NFSU2_TR(0x702f5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B702f61:{NFSU2_TR(0x702f61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702f62:{NFSU2_TR(0x702f62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B702f65:{NFSU2_TR(0x702f65);
__builtin_memmove((R+0),(R+4),4);
}
B702f67:{NFSU2_TR(0x702f67);
__builtin_memmove((R+8),(R+28),4);
}
B702f69:{NFSU2_TR(0x702f69);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B702f6c:L702f6c:{c.instructions+=1;NFSU2_TR(0x702f6c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L702f6e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x702f6cu);}goto L702f6c;}
}
B702f6e:L702f6e:{c.instructions+=2;NFSU2_TR(0x702f6e);
__builtin_memmove((R+4),(R+0),4);
}
B702f70:{NFSU2_TR(0x702f70);
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
B702f73:L702f73:{c.instructions+=1;NFSU2_TR(0x702f73);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L702f75;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x702f73u);}goto L702f73;}
}
B702f75:L702f75:{c.instructions+=5;NFSU2_TR(0x702f75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B702f76:{NFSU2_TR(0x702f76);
__builtin_memmove((R+0),(R+8),4);
}
B702f78:{NFSU2_TR(0x702f78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B702f79:{NFSU2_TR(0x702f79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B702f7a:{NFSU2_TR(0x702f7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B702f7b:L702f7b:{c.instructions+=5;NFSU2_TR(0x702f7b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702f7c:{NFSU2_TR(0x702f7c);
__builtin_memmove((R+20),(R+16),4);
}
B702f7e:{NFSU2_TR(0x702f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702f81:{NFSU2_TR(0x702f81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702f82:{NFSU2_TR(0x702f82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B702f85:L702f85:{c.instructions+=4;NFSU2_TR(0x702f85);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B702f87:{NFSU2_TR(0x702f87);
__builtin_memmove((R+4),(R+8),1);
}
B702f89:{NFSU2_TR(0x702f89);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B702f8b:{NFSU2_TR(0x702f8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L702fa7;}}
}
B702f8d:L702f8d:{c.instructions+=2;NFSU2_TR(0x702f8d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B702f8f:{NFSU2_TR(0x702f8f);
if(r1(R+518)){{goto L702fa3;}}
}
B702f91:L702f91:{c.instructions+=4;NFSU2_TR(0x702f91);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B702f94:{NFSU2_TR(0x702f94);
__builtin_memmove((R+4),(R+8),1);
}
B702f96:{NFSU2_TR(0x702f96);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B702f99:{NFSU2_TR(0x702f99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L702fa7;}}
}
B702f9b:L702f9b:{c.instructions+=6;NFSU2_TR(0x702f9b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B702f9c:{NFSU2_TR(0x702f9c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B702f9d:{NFSU2_TR(0x702f9d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B702f9e:{NFSU2_TR(0x702f9e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B702f9f:{NFSU2_TR(0x702f9f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B702fa1:{NFSU2_TR(0x702fa1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x702f85u);}goto L702f85;}}
}
B702fa3:L702fa3:{c.instructions+=2;NFSU2_TR(0x702fa3);
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
B702fa5:{NFSU2_TR(0x702fa5);
{goto L702fac;}
}
B702fa7:L702fa7:{c.instructions+=2;NFSU2_TR(0x702fa7);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B702fa9:{NFSU2_TR(0x702fa9);
u8 U[16];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w1(U+9,sborrow<u32>(r4(U+4),r4(U+0)));
w1(R+523,u8(((r1(R+523))!=0)!=((r1(U+9))!=0)));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+10,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r4(U+10)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B702fac:L702fac:{c.instructions+=3;NFSU2_TR(0x702fac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B702fad:{NFSU2_TR(0x702fad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B702fae:{NFSU2_TR(0x702fae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B702fb0:L702fb0:{c.instructions+=4;NFSU2_TR(0x702fb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B702fb1:{NFSU2_TR(0x702fb1);
__builtin_memmove((R+20),(R+16),4);
}
B702fb3:{NFSU2_TR(0x702fb3);
w4(R+4,u32(0xffffff00ull));
}
B702fb8:{NFSU2_TR(0x702fb8);
w4(R+8,u32(0xffull));
}
B702fbd:L702fbd:{c.instructions+=2;NFSU2_TR(0x702fbd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B702fbf:{NFSU2_TR(0x702fbf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L702fc5;}}
}
B702fc1:L702fc1:{c.instructions+=2;NFSU2_TR(0x702fc1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B702fc3:{NFSU2_TR(0x702fc3);
{goto L702fcd;}
}
B702fc5:L702fc5:{c.instructions+=3;NFSU2_TR(0x702fc5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B702fc7:{NFSU2_TR(0x702fc7);
__builtin_memmove((R+0),(R+4),4);
}
B702fc9:{NFSU2_TR(0x702fc9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L702fcd;}}
}
B702fcb:L702fcb:{c.instructions+=1;NFSU2_TR(0x702fcb);
__builtin_memmove((R+0),(R+8),4);
}
B702fcd:L702fcd:{c.instructions+=4;NFSU2_TR(0x702fcd);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B702fd3:{NFSU2_TR(0x702fd3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B702fd4:{NFSU2_TR(0x702fd4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x200ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B702fda:{NFSU2_TR(0x702fda);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x702fbdu);}goto L702fbd;}}
}
B702fdc:L702fdc:{c.instructions+=10;NFSU2_TR(0x702fdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702fdf:{NFSU2_TR(0x702fdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B702fe2:{NFSU2_TR(0x702fe2);
__builtin_memmove(gp(0x8b9c50),(R+0),4);
}
B702fe7:{NFSU2_TR(0x702fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B702fea:{NFSU2_TR(0x702fea);
__builtin_memmove(gp(0x8b9c48),(R+0),4);
}
B702fef:{NFSU2_TR(0x702fef);
w4(R+0,u32(0x8b9b40ull));
}
B702ff4:{NFSU2_TR(0x702ff4);
__builtin_memmove(gp(0x8b9c44),(R+4),4);
}
B702ffa:{NFSU2_TR(0x702ffa);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B702ffc:{NFSU2_TR(0x702ffc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B702fff:{NFSU2_TR(0x702fff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
TAIL_STATIC(0x703001u,703);
}
XIT:NFSU2_TR_EXIT(0x702,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
