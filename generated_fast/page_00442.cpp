#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_441(u8* __restrict R,Cpu& c);
u32 body_443(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x442,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x442,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_442(u8* __restrict R,Cpu& c);
u32 page_442(Cpu& c){return body_442(c.regs.data(),c);}
__attribute__((noinline)) u32 body_442(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x442007:goto L442007;
case 0x442008:goto L442008;
case 0x44200e:c.instructions+=3;goto B44200e;
case 0x442012:c.instructions+=2;goto B442012;
case 0x442018:c.instructions+=1;goto B442018;
case 0x442020:goto L442020;
case 0x442021:c.instructions+=5;goto B442021;
case 0x442025:c.instructions+=4;goto B442025;
case 0x442029:c.instructions+=3;goto B442029;
case 0x44202b:c.instructions+=2;goto B44202b;
case 0x44202e:c.instructions+=1;goto B44202e;
case 0x442030:goto L442030;
case 0x442034:c.instructions+=1;goto B442034;
case 0x442036:goto L442036;
case 0x44203a:goto L44203a;
case 0x44203e:c.instructions+=3;goto B44203e;
case 0x442040:c.instructions+=2;goto B442040;
case 0x442043:c.instructions+=1;goto B442043;
case 0x442045:goto L442045;
case 0x442047:c.instructions+=1;goto B442047;
case 0x44204b:goto L44204b;
case 0x44204f:c.instructions+=4;goto B44204f;
case 0x442053:c.instructions+=3;goto B442053;
case 0x442055:c.instructions+=2;goto B442055;
case 0x442058:c.instructions+=1;goto B442058;
case 0x44205a:goto L44205a;
case 0x44205e:c.instructions+=1;goto B44205e;
case 0x442060:goto L442060;
case 0x442064:goto L442064;
case 0x442068:c.instructions+=3;goto B442068;
case 0x44206a:c.instructions+=2;goto B44206a;
case 0x44206d:c.instructions+=1;goto B44206d;
case 0x44206f:goto L44206f;
case 0x442071:c.instructions+=1;goto B442071;
case 0x442075:goto L442075;
case 0x442079:c.instructions+=12;goto B442079;
case 0x44207b:c.instructions+=11;goto B44207b;
case 0x44207d:c.instructions+=10;goto B44207d;
case 0x442081:c.instructions+=9;goto B442081;
case 0x442083:c.instructions+=8;goto B442083;
case 0x442085:c.instructions+=7;goto B442085;
case 0x442087:c.instructions+=6;goto B442087;
case 0x442089:c.instructions+=5;goto B442089;
case 0x44208b:c.instructions+=4;goto B44208b;
case 0x442091:c.instructions+=3;goto B442091;
case 0x442093:c.instructions+=2;goto B442093;
case 0x442096:c.instructions+=1;goto B442096;
case 0x442098:goto L442098;
case 0x44209c:c.instructions+=3;goto B44209c;
case 0x44209e:c.instructions+=2;goto B44209e;
case 0x4420a1:c.instructions+=1;goto B4420a1;
case 0x4420a3:goto L4420a3;
case 0x4420a5:c.instructions+=9;goto B4420a5;
case 0x4420a9:c.instructions+=8;goto B4420a9;
case 0x4420ad:c.instructions+=7;goto B4420ad;
case 0x4420b1:c.instructions+=6;goto B4420b1;
case 0x4420b7:c.instructions+=5;goto B4420b7;
case 0x4420bd:c.instructions+=4;goto B4420bd;
case 0x4420bf:c.instructions+=3;goto B4420bf;
case 0x4420c1:c.instructions+=2;goto B4420c1;
case 0x4420c4:c.instructions+=1;goto B4420c4;
case 0x4420c6:goto L4420c6;
case 0x4420cc:c.instructions+=3;goto B4420cc;
case 0x4420ce:c.instructions+=2;goto B4420ce;
case 0x4420cf:c.instructions+=1;goto B4420cf;
case 0x4420d0:goto L4420d0;
case 0x4420d4:c.instructions+=3;goto B4420d4;
case 0x4420d6:c.instructions+=2;goto B4420d6;
case 0x4420d9:c.instructions+=1;goto B4420d9;
case 0x4420db:goto L4420db;
case 0x4420df:c.instructions+=7;goto B4420df;
case 0x4420e3:c.instructions+=6;goto B4420e3;
case 0x4420e7:c.instructions+=5;goto B4420e7;
case 0x4420ed:c.instructions+=4;goto B4420ed;
case 0x4420f3:c.instructions+=3;goto B4420f3;
case 0x4420f5:c.instructions+=2;goto B4420f5;
case 0x4420f6:c.instructions+=1;goto B4420f6;
case 0x4420f7:goto L4420f7;
case 0x4420fb:c.instructions+=7;goto B4420fb;
case 0x4420ff:c.instructions+=6;goto B4420ff;
case 0x442103:c.instructions+=5;goto B442103;
case 0x442109:c.instructions+=4;goto B442109;
case 0x44210f:c.instructions+=3;goto B44210f;
case 0x442111:c.instructions+=2;goto B442111;
case 0x442112:c.instructions+=1;goto B442112;
case 0x442113:goto L442113;
case 0x442119:goto L442119;
case 0x44211b:c.instructions+=2;goto B44211b;
case 0x44211c:c.instructions+=1;goto B44211c;
case 0x442120:goto L442120;
case 0x442121:c.instructions+=20;goto B442121;
case 0x442124:c.instructions+=19;goto B442124;
case 0x442128:c.instructions+=18;goto B442128;
case 0x44212c:c.instructions+=17;goto B44212c;
case 0x44212d:c.instructions+=16;goto B44212d;
case 0x442131:c.instructions+=15;goto B442131;
case 0x442136:c.instructions+=14;goto B442136;
case 0x442139:c.instructions+=13;goto B442139;
case 0x44213c:c.instructions+=12;goto B44213c;
case 0x442142:c.instructions+=11;goto B442142;
case 0x442146:c.instructions+=10;goto B442146;
case 0x44214a:c.instructions+=9;goto B44214a;
case 0x44214e:c.instructions+=8;goto B44214e;
case 0x442152:c.instructions+=7;goto B442152;
case 0x442156:c.instructions+=6;goto B442156;
case 0x44215c:c.instructions+=5;goto B44215c;
case 0x442160:c.instructions+=4;goto B442160;
case 0x442164:c.instructions+=3;goto B442164;
case 0x44216a:c.instructions+=2;goto B44216a;
case 0x44216d:c.instructions+=1;goto B44216d;
case 0x442172:goto L442172;
case 0x442175:c.instructions+=1;goto B442175;
case 0x442180:goto L442180;
case 0x442181:c.instructions+=6;goto B442181;
case 0x442185:c.instructions+=5;goto B442185;
case 0x442186:c.instructions+=4;goto B442186;
case 0x44218c:c.instructions+=3;goto B44218c;
case 0x442190:c.instructions+=2;goto B442190;
case 0x442192:c.instructions+=1;goto B442192;
case 0x442197:goto L442197;
case 0x44219a:c.instructions+=20;goto B44219a;
case 0x44219e:c.instructions+=19;goto B44219e;
case 0x4421a2:c.instructions+=18;goto B4421a2;
case 0x4421a4:c.instructions+=17;goto B4421a4;
case 0x4421a8:c.instructions+=16;goto B4421a8;
case 0x4421aa:c.instructions+=15;goto B4421aa;
case 0x4421b0:c.instructions+=14;goto B4421b0;
case 0x4421b4:c.instructions+=13;goto B4421b4;
case 0x4421b8:c.instructions+=12;goto B4421b8;
case 0x4421bc:c.instructions+=11;goto B4421bc;
case 0x4421c0:c.instructions+=10;goto B4421c0;
case 0x4421c6:c.instructions+=9;goto B4421c6;
case 0x4421ca:c.instructions+=8;goto B4421ca;
case 0x4421ce:c.instructions+=7;goto B4421ce;
case 0x4421d4:c.instructions+=6;goto B4421d4;
case 0x4421d8:c.instructions+=5;goto B4421d8;
case 0x4421dc:c.instructions+=4;goto B4421dc;
case 0x4421e2:c.instructions+=3;goto B4421e2;
case 0x4421e6:c.instructions+=2;goto B4421e6;
case 0x4421ea:c.instructions+=1;goto B4421ea;
case 0x4421ec:goto L4421ec;
case 0x4421f3:goto L4421f3;
case 0x4421f7:c.instructions+=7;goto B4421f7;
case 0x4421fb:c.instructions+=6;goto B4421fb;
case 0x4421fd:c.instructions+=5;goto B4421fd;
case 0x4421ff:c.instructions+=4;goto B4421ff;
case 0x442201:c.instructions+=3;goto B442201;
case 0x442202:c.instructions+=2;goto B442202;
case 0x442203:c.instructions+=1;goto B442203;
case 0x442204:goto L442204;
case 0x442208:c.instructions+=7;goto B442208;
case 0x44220c:c.instructions+=6;goto B44220c;
case 0x44220e:c.instructions+=5;goto B44220e;
case 0x442210:c.instructions+=4;goto B442210;
case 0x442212:c.instructions+=3;goto B442212;
case 0x442213:c.instructions+=2;goto B442213;
case 0x442214:c.instructions+=1;goto B442214;
case 0x442215:goto L442215;
case 0x442219:c.instructions+=7;goto B442219;
case 0x44221b:c.instructions+=6;goto B44221b;
case 0x44221f:c.instructions+=5;goto B44221f;
case 0x442221:c.instructions+=4;goto B442221;
case 0x442223:c.instructions+=3;goto B442223;
case 0x442224:c.instructions+=2;goto B442224;
case 0x442225:c.instructions+=1;goto B442225;
case 0x442226:goto L442226;
case 0x44222a:c.instructions+=7;goto B44222a;
case 0x44222c:c.instructions+=6;goto B44222c;
case 0x442230:c.instructions+=5;goto B442230;
case 0x442232:c.instructions+=4;goto B442232;
case 0x442234:c.instructions+=3;goto B442234;
case 0x442235:c.instructions+=2;goto B442235;
case 0x442236:c.instructions+=1;goto B442236;
case 0x442237:goto L442237;
case 0x44223b:c.instructions+=7;goto B44223b;
case 0x44223f:c.instructions+=6;goto B44223f;
case 0x442241:c.instructions+=5;goto B442241;
case 0x442243:c.instructions+=4;goto B442243;
case 0x442245:c.instructions+=3;goto B442245;
case 0x442246:c.instructions+=2;goto B442246;
case 0x442247:c.instructions+=1;goto B442247;
case 0x442248:goto L442248;
case 0x44224c:c.instructions+=7;goto B44224c;
case 0x442250:c.instructions+=6;goto B442250;
case 0x442252:c.instructions+=5;goto B442252;
case 0x442254:c.instructions+=4;goto B442254;
case 0x442256:c.instructions+=3;goto B442256;
case 0x442257:c.instructions+=2;goto B442257;
case 0x442258:c.instructions+=1;goto B442258;
case 0x442259:goto L442259;
case 0x44225b:c.instructions+=3;goto B44225b;
case 0x44225c:c.instructions+=2;goto B44225c;
case 0x44225d:c.instructions+=1;goto B44225d;
case 0x442280:goto L442280;
case 0x442286:c.instructions+=4;goto B442286;
case 0x442287:c.instructions+=3;goto B442287;
case 0x44228b:c.instructions+=2;goto B44228b;
case 0x44228e:c.instructions+=1;goto B44228e;
case 0x442293:goto L442293;
case 0x442297:c.instructions+=7;goto B442297;
case 0x44229b:c.instructions+=6;goto B44229b;
case 0x44229d:c.instructions+=5;goto B44229d;
case 0x4422a3:c.instructions+=4;goto B4422a3;
case 0x4422a7:c.instructions+=3;goto B4422a7;
case 0x4422ad:c.instructions+=2;goto B4422ad;
case 0x4422b0:c.instructions+=1;goto B4422b0;
case 0x4422b5:goto L4422b5;
case 0x4422b9:c.instructions+=7;goto B4422b9;
case 0x4422bd:c.instructions+=6;goto B4422bd;
case 0x4422c1:c.instructions+=5;goto B4422c1;
case 0x4422c5:c.instructions+=4;goto B4422c5;
case 0x4422c7:c.instructions+=3;goto B4422c7;
case 0x4422ca:c.instructions+=2;goto B4422ca;
case 0x4422cc:c.instructions+=1;goto B4422cc;
case 0x4422d0:goto L4422d0;
case 0x4422d1:c.instructions+=5;goto B4422d1;
case 0x4422d5:c.instructions+=4;goto B4422d5;
case 0x4422d9:c.instructions+=3;goto B4422d9;
case 0x4422da:c.instructions+=2;goto B4422da;
case 0x4422db:c.instructions+=1;goto B4422db;
case 0x4422e0:goto L4422e0;
case 0x4422e3:c.instructions+=17;goto B4422e3;
case 0x4422e7:c.instructions+=16;goto B4422e7;
case 0x4422eb:c.instructions+=15;goto B4422eb;
case 0x4422ee:c.instructions+=14;goto B4422ee;
case 0x4422f2:c.instructions+=13;goto B4422f2;
case 0x4422f8:c.instructions+=12;goto B4422f8;
case 0x4422fa:c.instructions+=11;goto B4422fa;
case 0x4422fe:c.instructions+=10;goto B4422fe;
case 0x442302:c.instructions+=9;goto B442302;
case 0x442306:c.instructions+=8;goto B442306;
case 0x44230a:c.instructions+=7;goto B44230a;
case 0x44230c:c.instructions+=6;goto B44230c;
case 0x44230e:c.instructions+=5;goto B44230e;
case 0x442310:c.instructions+=4;goto B442310;
case 0x442316:c.instructions+=3;goto B442316;
case 0x442318:c.instructions+=2;goto B442318;
case 0x44231b:c.instructions+=1;goto B44231b;
case 0x44231d:goto L44231d;
case 0x442321:c.instructions+=4;goto B442321;
case 0x442327:c.instructions+=3;goto B442327;
case 0x442329:c.instructions+=2;goto B442329;
case 0x44232a:c.instructions+=1;goto B44232a;
case 0x44232b:goto L44232b;
case 0x44232f:c.instructions+=3;goto B44232f;
case 0x442331:c.instructions+=2;goto B442331;
case 0x442332:c.instructions+=1;goto B442332;
case 0x442340:goto L442340;
case 0x442341:c.instructions+=9;goto B442341;
case 0x442342:c.instructions+=8;goto B442342;
case 0x442346:c.instructions+=7;goto B442346;
case 0x442348:c.instructions+=6;goto B442348;
case 0x44234b:c.instructions+=5;goto B44234b;
case 0x44234e:c.instructions+=4;goto B44234e;
case 0x442351:c.instructions+=3;goto B442351;
case 0x442356:c.instructions+=2;goto B442356;
case 0x442357:c.instructions+=1;goto B442357;
case 0x44235c:goto L44235c;
case 0x44235f:c.instructions+=4;goto B44235f;
case 0x442360:c.instructions+=3;goto B442360;
case 0x442365:c.instructions+=2;goto B442365;
case 0x442366:c.instructions+=1;goto B442366;
case 0x44236b:goto L44236b;
case 0x44236e:c.instructions+=4;goto B44236e;
case 0x442371:c.instructions+=3;goto B442371;
case 0x442373:c.instructions+=2;goto B442373;
case 0x442378:c.instructions+=1;goto B442378;
case 0x44237a:goto L44237a;
case 0x44237f:goto L44237f;
case 0x442380:c.instructions+=3;goto B442380;
case 0x442385:c.instructions+=2;goto B442385;
case 0x442386:c.instructions+=1;goto B442386;
case 0x44238b:goto L44238b;
case 0x44238e:c.instructions+=4;goto B44238e;
case 0x442391:c.instructions+=3;goto B442391;
case 0x442393:c.instructions+=2;goto B442393;
case 0x442398:c.instructions+=1;goto B442398;
case 0x44239a:goto L44239a;
case 0x44239f:goto L44239f;
case 0x4423a0:c.instructions+=3;goto B4423a0;
case 0x4423a5:c.instructions+=2;goto B4423a5;
case 0x4423a6:c.instructions+=1;goto B4423a6;
case 0x4423ab:goto L4423ab;
case 0x4423ae:c.instructions+=4;goto B4423ae;
case 0x4423b1:c.instructions+=3;goto B4423b1;
case 0x4423b3:c.instructions+=2;goto B4423b3;
case 0x4423b8:c.instructions+=1;goto B4423b8;
case 0x4423ba:goto L4423ba;
case 0x4423bf:goto L4423bf;
case 0x4423c0:c.instructions+=3;goto B4423c0;
case 0x4423c5:c.instructions+=2;goto B4423c5;
case 0x4423c6:c.instructions+=1;goto B4423c6;
case 0x4423cb:goto L4423cb;
case 0x4423cf:c.instructions+=5;goto B4423cf;
case 0x4423d6:c.instructions+=4;goto B4423d6;
case 0x4423d7:c.instructions+=3;goto B4423d7;
case 0x4423dc:c.instructions+=2;goto B4423dc;
case 0x4423dd:c.instructions+=1;goto B4423dd;
case 0x4423e2:goto L4423e2;
case 0x4423e6:c.instructions+=5;goto B4423e6;
case 0x4423ed:c.instructions+=4;goto B4423ed;
case 0x4423ee:c.instructions+=3;goto B4423ee;
case 0x4423f3:c.instructions+=2;goto B4423f3;
case 0x4423f4:c.instructions+=1;goto B4423f4;
case 0x4423f9:goto L4423f9;
case 0x4423fc:c.instructions+=4;goto B4423fc;
case 0x4423ff:c.instructions+=3;goto B4423ff;
case 0x442401:c.instructions+=2;goto B442401;
case 0x442406:c.instructions+=1;goto B442406;
case 0x442408:goto L442408;
case 0x44240d:goto L44240d;
case 0x44240e:c.instructions+=3;goto B44240e;
case 0x442413:c.instructions+=2;goto B442413;
case 0x442414:c.instructions+=1;goto B442414;
case 0x442419:goto L442419;
case 0x44241c:c.instructions+=4;goto B44241c;
case 0x44241f:c.instructions+=3;goto B44241f;
case 0x442421:c.instructions+=2;goto B442421;
case 0x442426:c.instructions+=1;goto B442426;
case 0x442428:goto L442428;
case 0x44242d:goto L44242d;
case 0x44242e:c.instructions+=3;goto B44242e;
case 0x442433:c.instructions+=2;goto B442433;
case 0x442434:c.instructions+=1;goto B442434;
case 0x442439:goto L442439;
case 0x44243c:c.instructions+=4;goto B44243c;
case 0x44243f:c.instructions+=3;goto B44243f;
case 0x442441:c.instructions+=2;goto B442441;
case 0x442446:c.instructions+=1;goto B442446;
case 0x442448:goto L442448;
case 0x44244d:goto L44244d;
case 0x44244e:c.instructions+=3;goto B44244e;
case 0x442453:c.instructions+=2;goto B442453;
case 0x442454:c.instructions+=1;goto B442454;
case 0x442459:goto L442459;
case 0x44245c:c.instructions+=4;goto B44245c;
case 0x44245f:c.instructions+=3;goto B44245f;
case 0x442461:c.instructions+=2;goto B442461;
case 0x442466:c.instructions+=1;goto B442466;
case 0x442468:goto L442468;
case 0x44246d:goto L44246d;
case 0x44246e:c.instructions+=3;goto B44246e;
case 0x442473:c.instructions+=2;goto B442473;
case 0x442474:c.instructions+=1;goto B442474;
case 0x442479:goto L442479;
case 0x44247c:c.instructions+=5;goto B44247c;
case 0x44247f:c.instructions+=4;goto B44247f;
case 0x442482:c.instructions+=3;goto B442482;
case 0x442487:c.instructions+=2;goto B442487;
case 0x442488:c.instructions+=1;goto B442488;
case 0x44248d:goto L44248d;
case 0x442490:c.instructions+=9;goto B442490;
case 0x442494:c.instructions+=8;goto B442494;
case 0x442497:c.instructions+=7;goto B442497;
case 0x44249a:c.instructions+=6;goto B44249a;
case 0x44249e:c.instructions+=5;goto B44249e;
case 0x4424a1:c.instructions+=4;goto B4424a1;
case 0x4424a4:c.instructions+=3;goto B4424a4;
case 0x4424a9:c.instructions+=2;goto B4424a9;
case 0x4424aa:c.instructions+=1;goto B4424aa;
case 0x4424af:goto L4424af;
case 0x4424b2:c.instructions+=9;goto B4424b2;
case 0x4424b5:c.instructions+=8;goto B4424b5;
case 0x4424b9:c.instructions+=7;goto B4424b9;
case 0x4424bc:c.instructions+=6;goto B4424bc;
case 0x4424c0:c.instructions+=5;goto B4424c0;
case 0x4424c3:c.instructions+=4;goto B4424c3;
case 0x4424c6:c.instructions+=3;goto B4424c6;
case 0x4424cb:c.instructions+=2;goto B4424cb;
case 0x4424cc:c.instructions+=1;goto B4424cc;
case 0x4424d1:goto L4424d1;
case 0x4424d4:c.instructions+=5;goto B4424d4;
case 0x4424d7:c.instructions+=4;goto B4424d7;
case 0x4424da:c.instructions+=3;goto B4424da;
case 0x4424df:c.instructions+=2;goto B4424df;
case 0x4424e0:c.instructions+=1;goto B4424e0;
case 0x4424e5:goto L4424e5;
case 0x4424e8:c.instructions+=5;goto B4424e8;
case 0x4424eb:c.instructions+=4;goto B4424eb;
case 0x4424ee:c.instructions+=3;goto B4424ee;
case 0x4424f3:c.instructions+=2;goto B4424f3;
case 0x4424f4:c.instructions+=1;goto B4424f4;
case 0x4424f9:goto L4424f9;
case 0x4424fc:c.instructions+=5;goto B4424fc;
case 0x4424ff:c.instructions+=4;goto B4424ff;
case 0x442502:c.instructions+=3;goto B442502;
case 0x442507:c.instructions+=2;goto B442507;
case 0x442508:c.instructions+=1;goto B442508;
case 0x44250d:goto L44250d;
case 0x442510:c.instructions+=5;goto B442510;
case 0x442513:c.instructions+=4;goto B442513;
case 0x442516:c.instructions+=3;goto B442516;
case 0x44251b:c.instructions+=2;goto B44251b;
case 0x44251c:c.instructions+=1;goto B44251c;
case 0x442521:goto L442521;
case 0x442524:c.instructions+=5;goto B442524;
case 0x442527:c.instructions+=4;goto B442527;
case 0x44252a:c.instructions+=3;goto B44252a;
case 0x44252f:c.instructions+=2;goto B44252f;
case 0x442530:c.instructions+=1;goto B442530;
case 0x442535:goto L442535;
case 0x442539:c.instructions+=4;goto B442539;
case 0x44253a:c.instructions+=3;goto B44253a;
case 0x44253f:c.instructions+=2;goto B44253f;
case 0x442540:c.instructions+=1;goto B442540;
case 0x442545:goto L442545;
case 0x442549:c.instructions+=4;goto B442549;
case 0x44254a:c.instructions+=3;goto B44254a;
case 0x44254f:c.instructions+=2;goto B44254f;
case 0x442550:c.instructions+=1;goto B442550;
case 0x442555:goto L442555;
case 0x442559:c.instructions+=4;goto B442559;
case 0x44255a:c.instructions+=3;goto B44255a;
case 0x44255f:c.instructions+=2;goto B44255f;
case 0x442560:c.instructions+=1;goto B442560;
case 0x442565:goto L442565;
case 0x442569:c.instructions+=8;goto B442569;
case 0x44256d:c.instructions+=7;goto B44256d;
case 0x442571:c.instructions+=6;goto B442571;
case 0x442572:c.instructions+=5;goto B442572;
case 0x442573:c.instructions+=4;goto B442573;
case 0x442574:c.instructions+=3;goto B442574;
case 0x442579:c.instructions+=2;goto B442579;
case 0x44257a:c.instructions+=1;goto B44257a;
case 0x44257f:goto L44257f;
case 0x442583:c.instructions+=7;goto B442583;
case 0x442587:c.instructions+=6;goto B442587;
case 0x44258a:c.instructions+=5;goto B44258a;
case 0x44258b:c.instructions+=4;goto B44258b;
case 0x44258c:c.instructions+=3;goto B44258c;
case 0x442591:c.instructions+=2;goto B442591;
case 0x442592:c.instructions+=1;goto B442592;
case 0x442597:goto L442597;
case 0x44259e:c.instructions+=4;goto B44259e;
case 0x44259f:c.instructions+=3;goto B44259f;
case 0x4425a4:c.instructions+=2;goto B4425a4;
case 0x4425a5:c.instructions+=1;goto B4425a5;
case 0x4425aa:goto L4425aa;
case 0x4425ad:c.instructions+=5;goto B4425ad;
case 0x4425b0:c.instructions+=4;goto B4425b0;
case 0x4425b3:c.instructions+=3;goto B4425b3;
case 0x4425b8:c.instructions+=2;goto B4425b8;
case 0x4425b9:c.instructions+=1;goto B4425b9;
case 0x4425be:goto L4425be;
case 0x4425c1:c.instructions+=9;goto B4425c1;
case 0x4425c5:c.instructions+=8;goto B4425c5;
case 0x4425c8:c.instructions+=7;goto B4425c8;
case 0x4425cb:c.instructions+=6;goto B4425cb;
case 0x4425cf:c.instructions+=5;goto B4425cf;
case 0x4425d2:c.instructions+=4;goto B4425d2;
case 0x4425d5:c.instructions+=3;goto B4425d5;
case 0x4425da:c.instructions+=2;goto B4425da;
case 0x4425db:c.instructions+=1;goto B4425db;
case 0x4425e0:goto L4425e0;
case 0x4425e3:c.instructions+=9;goto B4425e3;
case 0x4425e6:c.instructions+=8;goto B4425e6;
case 0x4425ea:c.instructions+=7;goto B4425ea;
case 0x4425ed:c.instructions+=6;goto B4425ed;
case 0x4425f1:c.instructions+=5;goto B4425f1;
case 0x4425f4:c.instructions+=4;goto B4425f4;
case 0x4425f7:c.instructions+=3;goto B4425f7;
case 0x4425fc:c.instructions+=2;goto B4425fc;
case 0x4425fd:c.instructions+=1;goto B4425fd;
case 0x442602:goto L442602;
case 0x442605:c.instructions+=5;goto B442605;
case 0x442608:c.instructions+=4;goto B442608;
case 0x44260b:c.instructions+=3;goto B44260b;
case 0x442610:c.instructions+=2;goto B442610;
case 0x442611:c.instructions+=1;goto B442611;
case 0x442616:goto L442616;
case 0x442619:c.instructions+=5;goto B442619;
case 0x44261c:c.instructions+=4;goto B44261c;
case 0x44261f:c.instructions+=3;goto B44261f;
case 0x442624:c.instructions+=2;goto B442624;
case 0x442625:c.instructions+=1;goto B442625;
case 0x44262a:goto L44262a;
case 0x44262d:c.instructions+=5;goto B44262d;
case 0x442630:c.instructions+=4;goto B442630;
case 0x442633:c.instructions+=3;goto B442633;
case 0x442638:c.instructions+=2;goto B442638;
case 0x442639:c.instructions+=1;goto B442639;
case 0x44263e:goto L44263e;
case 0x442641:c.instructions+=5;goto B442641;
case 0x442644:c.instructions+=4;goto B442644;
case 0x442647:c.instructions+=3;goto B442647;
case 0x44264c:c.instructions+=2;goto B44264c;
case 0x44264d:c.instructions+=1;goto B44264d;
case 0x442652:goto L442652;
case 0x442655:c.instructions+=5;goto B442655;
case 0x442658:c.instructions+=4;goto B442658;
case 0x44265b:c.instructions+=3;goto B44265b;
case 0x442660:c.instructions+=2;goto B442660;
case 0x442661:c.instructions+=1;goto B442661;
case 0x442666:goto L442666;
case 0x44266a:c.instructions+=4;goto B44266a;
case 0x44266b:c.instructions+=3;goto B44266b;
case 0x442670:c.instructions+=2;goto B442670;
case 0x442671:c.instructions+=1;goto B442671;
case 0x442676:goto L442676;
case 0x44267a:c.instructions+=4;goto B44267a;
case 0x44267b:c.instructions+=3;goto B44267b;
case 0x442680:c.instructions+=2;goto B442680;
case 0x442681:c.instructions+=1;goto B442681;
case 0x442686:goto L442686;
case 0x44268a:c.instructions+=4;goto B44268a;
case 0x44268b:c.instructions+=3;goto B44268b;
case 0x442690:c.instructions+=2;goto B442690;
case 0x442691:c.instructions+=1;goto B442691;
case 0x442696:goto L442696;
case 0x44269a:c.instructions+=8;goto B44269a;
case 0x44269e:c.instructions+=7;goto B44269e;
case 0x4426a2:c.instructions+=6;goto B4426a2;
case 0x4426a3:c.instructions+=5;goto B4426a3;
case 0x4426a4:c.instructions+=4;goto B4426a4;
case 0x4426a5:c.instructions+=3;goto B4426a5;
case 0x4426aa:c.instructions+=2;goto B4426aa;
case 0x4426ab:c.instructions+=1;goto B4426ab;
case 0x4426b0:goto L4426b0;
case 0x4426b4:c.instructions+=7;goto B4426b4;
case 0x4426b8:c.instructions+=6;goto B4426b8;
case 0x4426bb:c.instructions+=5;goto B4426bb;
case 0x4426bc:c.instructions+=4;goto B4426bc;
case 0x4426bd:c.instructions+=3;goto B4426bd;
case 0x4426c2:c.instructions+=2;goto B4426c2;
case 0x4426c3:c.instructions+=1;goto B4426c3;
case 0x4426c8:goto L4426c8;
case 0x4426cf:c.instructions+=4;goto B4426cf;
case 0x4426d0:c.instructions+=3;goto B4426d0;
case 0x4426d5:c.instructions+=2;goto B4426d5;
case 0x4426d6:c.instructions+=1;goto B4426d6;
case 0x4426db:goto L4426db;
case 0x4426e1:c.instructions+=4;goto B4426e1;
case 0x4426e2:c.instructions+=3;goto B4426e2;
case 0x4426e7:c.instructions+=2;goto B4426e7;
case 0x4426e8:c.instructions+=1;goto B4426e8;
case 0x4426ed:goto L4426ed;
case 0x4426f0:c.instructions+=3;goto B4426f0;
case 0x4426f1:c.instructions+=2;goto B4426f1;
case 0x4426f2:c.instructions+=1;goto B4426f2;
case 0x442700:goto L442700;
case 0x442702:c.instructions+=11;goto B442702;
case 0x442707:c.instructions+=10;goto B442707;
case 0x44270d:c.instructions+=9;goto B44270d;
case 0x44270e:c.instructions+=8;goto B44270e;
case 0x442715:c.instructions+=7;goto B442715;
case 0x44271b:c.instructions+=6;goto B44271b;
case 0x44271c:c.instructions+=5;goto B44271c;
case 0x44271d:c.instructions+=4;goto B44271d;
case 0x44271f:c.instructions+=3;goto B44271f;
case 0x442723:c.instructions+=2;goto B442723;
case 0x442728:c.instructions+=1;goto B442728;
case 0x44272d:goto L44272d;
case 0x442734:c.instructions+=6;goto B442734;
case 0x442736:c.instructions+=5;goto B442736;
case 0x44273b:c.instructions+=4;goto B44273b;
case 0x44273c:c.instructions+=3;goto B44273c;
case 0x442740:c.instructions+=2;goto B442740;
case 0x44274b:c.instructions+=1;goto B44274b;
case 0x442750:goto L442750;
case 0x442754:c.instructions+=6;goto B442754;
case 0x442755:c.instructions+=5;goto B442755;
case 0x442757:c.instructions+=4;goto B442757;
case 0x442759:c.instructions+=3;goto B442759;
case 0x44275a:c.instructions+=2;goto B44275a;
case 0x44275e:c.instructions+=1;goto B44275e;
case 0x442763:goto L442763;
case 0x442767:c.instructions+=2;goto B442767;
case 0x442769:c.instructions+=1;goto B442769;
case 0x44276b:goto L44276b;
case 0x442771:c.instructions+=2;goto B442771;
case 0x442775:c.instructions+=1;goto B442775;
case 0x442777:goto L442777;
case 0x442779:c.instructions+=1;goto B442779;
case 0x442781:goto L442781;
case 0x442785:c.instructions+=2;goto B442785;
case 0x442790:c.instructions+=1;goto B442790;
case 0x442795:goto L442795;
case 0x442799:c.instructions+=6;goto B442799;
case 0x4427a0:c.instructions+=5;goto B4427a0;
case 0x4427a1:c.instructions+=4;goto B4427a1;
case 0x4427a2:c.instructions+=3;goto B4427a2;
case 0x4427a9:c.instructions+=2;goto B4427a9;
case 0x4427af:c.instructions+=1;goto B4427af;
case 0x4427c0:goto L4427c0;
case 0x4427c1:c.instructions+=15;goto B4427c1;
case 0x4427c3:c.instructions+=14;goto B4427c3;
case 0x4427c6:c.instructions+=13;goto B4427c6;
case 0x4427c8:c.instructions+=12;goto B4427c8;
case 0x4427cd:c.instructions+=11;goto B4427cd;
case 0x4427d3:c.instructions+=10;goto B4427d3;
case 0x4427d4:c.instructions+=9;goto B4427d4;
case 0x4427db:c.instructions+=8;goto B4427db;
case 0x4427e1:c.instructions+=7;goto B4427e1;
case 0x4427e2:c.instructions+=6;goto B4427e2;
case 0x4427e3:c.instructions+=5;goto B4427e3;
case 0x4427e4:c.instructions+=4;goto B4427e4;
case 0x4427e6:c.instructions+=3;goto B4427e6;
case 0x4427ec:c.instructions+=2;goto B4427ec;
case 0x4427ee:c.instructions+=1;goto B4427ee;
case 0x4427f0:goto L4427f0;
case 0x4427f6:c.instructions+=1;goto B4427f6;
case 0x4427f8:goto L4427f8;
case 0x4427fa:c.instructions+=2;goto B4427fa;
case 0x4427ff:c.instructions+=1;goto B4427ff;
case 0x442804:goto L442804;
case 0x442806:c.instructions+=1;goto B442806;
case 0x44280c:goto L44280c;
case 0x44280d:c.instructions+=2;goto B44280d;
case 0x442812:c.instructions+=1;goto B442812;
case 0x442817:goto L442817;
case 0x442819:c.instructions+=2;goto B442819;
case 0x44281b:c.instructions+=1;goto B44281b;
case 0x442821:goto L442821;
case 0x442824:c.instructions+=6;goto B442824;
case 0x442825:c.instructions+=5;goto B442825;
case 0x44282b:c.instructions+=4;goto B44282b;
case 0x44282c:c.instructions+=3;goto B44282c;
case 0x442830:c.instructions+=2;goto B442830;
case 0x442831:c.instructions+=1;goto B442831;
case 0x442836:goto L442836;
case 0x44283c:c.instructions+=3;goto B44283c;
case 0x44283f:c.instructions+=2;goto B44283f;
case 0x442841:c.instructions+=1;goto B442841;
case 0x442843:goto L442843;
case 0x442847:c.instructions+=2;goto B442847;
case 0x44284d:c.instructions+=1;goto B44284d;
case 0x442852:goto L442852;
case 0x442854:c.instructions+=5;goto B442854;
case 0x442859:c.instructions+=4;goto B442859;
case 0x44285a:c.instructions+=3;goto B44285a;
case 0x44285e:c.instructions+=2;goto B44285e;
case 0x442869:c.instructions+=1;goto B442869;
case 0x44286e:goto L44286e;
case 0x442870:c.instructions+=5;goto B442870;
case 0x442872:c.instructions+=4;goto B442872;
case 0x442874:c.instructions+=3;goto B442874;
case 0x442875:c.instructions+=2;goto B442875;
case 0x442879:c.instructions+=1;goto B442879;
case 0x44287e:goto L44287e;
case 0x442884:c.instructions+=3;goto B442884;
case 0x442888:c.instructions+=2;goto B442888;
case 0x442893:c.instructions+=1;goto B442893;
case 0x442898:goto L442898;
case 0x44289c:c.instructions+=3;goto B44289c;
case 0x44289d:c.instructions+=2;goto B44289d;
case 0x44289f:c.instructions+=1;goto B44289f;
case 0x4428a4:goto L4428a4;
case 0x4428a7:c.instructions+=1;goto B4428a7;
case 0x4428aa:goto L4428aa;
case 0x4428b1:c.instructions+=7;goto B4428b1;
case 0x4428b2:c.instructions+=6;goto B4428b2;
case 0x4428b3:c.instructions+=5;goto B4428b3;
case 0x4428ba:c.instructions+=4;goto B4428ba;
case 0x4428bb:c.instructions+=3;goto B4428bb;
case 0x4428bd:c.instructions+=2;goto B4428bd;
case 0x4428be:c.instructions+=1;goto B4428be;
case 0x4428d0:goto L4428d0;
case 0x4428d1:c.instructions+=6;goto B4428d1;
case 0x4428d3:c.instructions+=5;goto B4428d3;
case 0x4428d6:c.instructions+=4;goto B4428d6;
case 0x4428d8:c.instructions+=3;goto B4428d8;
case 0x4428d9:c.instructions+=2;goto B4428d9;
case 0x4428dd:c.instructions+=1;goto B4428dd;
case 0x4428df:goto L4428df;
case 0x4428e3:c.instructions+=1;goto B4428e3;
case 0x4428e5:goto L4428e5;
case 0x4428e8:c.instructions+=5;goto B4428e8;
case 0x4428eb:c.instructions+=4;goto B4428eb;
case 0x4428ee:c.instructions+=3;goto B4428ee;
case 0x4428f3:c.instructions+=2;goto B4428f3;
case 0x4428f4:c.instructions+=1;goto B4428f4;
case 0x4428f9:goto L4428f9;
case 0x4428fc:goto L4428fc;
case 0x442900:c.instructions+=3;goto B442900;
case 0x442902:c.instructions+=2;goto B442902;
case 0x442904:c.instructions+=1;goto B442904;
case 0x442906:goto L442906;
case 0x442907:c.instructions+=3;goto B442907;
case 0x442908:c.instructions+=2;goto B442908;
case 0x44290b:c.instructions+=1;goto B44290b;
case 0x442910:goto L442910;
case 0x442911:c.instructions+=5;goto B442911;
case 0x442914:c.instructions+=4;goto B442914;
case 0x442915:c.instructions+=3;goto B442915;
case 0x44291a:c.instructions+=2;goto B44291a;
case 0x44291b:c.instructions+=1;goto B44291b;
case 0x442920:goto L442920;
case 0x442923:c.instructions+=3;goto B442923;
case 0x442924:c.instructions+=2;goto B442924;
case 0x442926:c.instructions+=1;goto B442926;
case 0x44292b:goto L44292b;
case 0x442930:c.instructions+=2;goto B442930;
case 0x442931:c.instructions+=1;goto B442931;
case 0x442936:goto L442936;
case 0x44293a:c.instructions+=5;goto B44293a;
case 0x44293c:c.instructions+=4;goto B44293c;
case 0x44293f:c.instructions+=3;goto B44293f;
case 0x442945:c.instructions+=2;goto B442945;
case 0x442947:c.instructions+=1;goto B442947;
case 0x442949:goto L442949;
case 0x44294a:c.instructions+=1;goto B44294a;
case 0x44294b:goto L44294b;
case 0x44294c:c.instructions+=2;goto B44294c;
case 0x44294d:c.instructions+=1;goto B44294d;
case 0x442950:goto L442950;
case 0x442951:c.instructions+=5;goto B442951;
case 0x442952:c.instructions+=4;goto B442952;
case 0x44295c:c.instructions+=3;goto B44295c;
case 0x442962:c.instructions+=2;goto B442962;
case 0x442967:c.instructions+=1;goto B442967;
case 0x44296c:goto L44296c;
case 0x44296e:goto L44296e;
case 0x44296f:c.instructions+=3;goto B44296f;
case 0x442976:c.instructions+=2;goto B442976;
case 0x442977:c.instructions+=1;goto B442977;
case 0x442980:goto L442980;
case 0x442983:c.instructions+=5;goto B442983;
case 0x442984:c.instructions+=4;goto B442984;
case 0x442986:c.instructions+=3;goto B442986;
case 0x442988:c.instructions+=2;goto B442988;
case 0x442989:c.instructions+=1;goto B442989;
case 0x44298b:goto L44298b;
case 0x44298e:c.instructions+=2;goto B44298e;
case 0x442992:c.instructions+=1;goto B442992;
case 0x442994:goto L442994;
case 0x442996:c.instructions+=1;goto B442996;
case 0x442998:goto L442998;
case 0x442999:c.instructions+=3;goto B442999;
case 0x44299c:c.instructions+=2;goto B44299c;
case 0x44299e:c.instructions+=1;goto B44299e;
case 0x4429a0:goto L4429a0;
case 0x4429a1:c.instructions+=3;goto B4429a1;
case 0x4429a2:c.instructions+=2;goto B4429a2;
case 0x4429a4:c.instructions+=1;goto B4429a4;
case 0x4429a7:goto L4429a7;
case 0x4429aa:c.instructions+=4;goto B4429aa;
case 0x4429ab:c.instructions+=3;goto B4429ab;
case 0x4429ae:c.instructions+=2;goto B4429ae;
case 0x4429af:c.instructions+=1;goto B4429af;
case 0x4429c0:goto L4429c0;
case 0x4429c1:c.instructions+=6;goto B4429c1;
case 0x4429c2:c.instructions+=5;goto B4429c2;
case 0x4429c5:c.instructions+=4;goto B4429c5;
case 0x4429c7:c.instructions+=3;goto B4429c7;
case 0x4429c9:c.instructions+=2;goto B4429c9;
case 0x4429ca:c.instructions+=1;goto B4429ca;
case 0x4429cc:goto L4429cc;
case 0x4429cf:c.instructions+=4;goto B4429cf;
case 0x4429d4:c.instructions+=3;goto B4429d4;
case 0x4429d9:c.instructions+=2;goto B4429d9;
case 0x4429db:c.instructions+=1;goto B4429db;
case 0x4429e0:goto L4429e0;
case 0x4429e3:c.instructions+=1;goto B4429e3;
case 0x4429e5:goto L4429e5;
case 0x4429e9:c.instructions+=1;goto B4429e9;
case 0x4429eb:goto L4429eb;
case 0x4429ec:c.instructions+=3;goto B4429ec;
case 0x4429ef:c.instructions+=2;goto B4429ef;
case 0x4429f1:c.instructions+=1;goto B4429f1;
case 0x4429f3:goto L4429f3;
case 0x4429f4:c.instructions+=4;goto B4429f4;
case 0x4429f5:c.instructions+=3;goto B4429f5;
case 0x4429f7:c.instructions+=2;goto B4429f7;
case 0x4429f8:c.instructions+=1;goto B4429f8;
case 0x4429fb:goto L4429fb;
case 0x4429fc:c.instructions+=5;goto B4429fc;
case 0x4429ff:c.instructions+=4;goto B4429ff;
case 0x442a00:c.instructions+=3;goto B442a00;
case 0x442a03:c.instructions+=2;goto B442a03;
case 0x442a04:c.instructions+=1;goto B442a04;
case 0x442a10:goto L442a10;
case 0x442a16:c.instructions+=4;goto B442a16;
case 0x442a19:c.instructions+=3;goto B442a19;
case 0x442a1f:c.instructions+=2;goto B442a1f;
case 0x442a20:c.instructions+=1;goto B442a20;
case 0x442a22:goto L442a22;
case 0x442a23:c.instructions+=1;goto B442a23;
case 0x442a25:goto L442a25;
case 0x442a26:c.instructions+=1;goto B442a26;
case 0x442a28:goto L442a28;
case 0x442a2b:c.instructions+=8;goto B442a2b;
case 0x442a2d:c.instructions+=7;goto B442a2d;
case 0x442a2e:c.instructions+=6;goto B442a2e;
case 0x442a30:c.instructions+=5;goto B442a30;
case 0x442a33:c.instructions+=4;goto B442a33;
case 0x442a34:c.instructions+=3;goto B442a34;
case 0x442a36:c.instructions+=2;goto B442a36;
case 0x442a38:c.instructions+=1;goto B442a38;
case 0x442a3a:goto L442a3a;
case 0x442a3c:goto L442a3c;
case 0x442a3e:c.instructions+=1;goto B442a3e;
case 0x442a40:goto L442a40;
case 0x442a43:c.instructions+=4;goto B442a43;
case 0x442a46:c.instructions+=3;goto B442a46;
case 0x442a49:c.instructions+=2;goto B442a49;
case 0x442a4a:c.instructions+=1;goto B442a4a;
case 0x442a4b:goto L442a4b;
case 0x442a4e:c.instructions+=8;goto B442a4e;
case 0x442a50:c.instructions+=7;goto B442a50;
case 0x442a51:c.instructions+=6;goto B442a51;
case 0x442a53:c.instructions+=5;goto B442a53;
case 0x442a56:c.instructions+=4;goto B442a56;
case 0x442a57:c.instructions+=3;goto B442a57;
case 0x442a59:c.instructions+=2;goto B442a59;
case 0x442a5b:c.instructions+=1;goto B442a5b;
case 0x442a5d:goto L442a5d;
case 0x442a5f:goto L442a5f;
case 0x442a61:c.instructions+=1;goto B442a61;
case 0x442a63:goto L442a63;
case 0x442a66:c.instructions+=4;goto B442a66;
case 0x442a69:c.instructions+=3;goto B442a69;
case 0x442a6c:c.instructions+=2;goto B442a6c;
case 0x442a6d:c.instructions+=1;goto B442a6d;
case 0x442a6e:goto L442a6e;
case 0x442a71:c.instructions+=8;goto B442a71;
case 0x442a73:c.instructions+=7;goto B442a73;
case 0x442a74:c.instructions+=6;goto B442a74;
case 0x442a76:c.instructions+=5;goto B442a76;
case 0x442a79:c.instructions+=4;goto B442a79;
case 0x442a7a:c.instructions+=3;goto B442a7a;
case 0x442a7c:c.instructions+=2;goto B442a7c;
case 0x442a7e:c.instructions+=1;goto B442a7e;
case 0x442a80:goto L442a80;
case 0x442a82:goto L442a82;
case 0x442a84:c.instructions+=1;goto B442a84;
case 0x442a86:goto L442a86;
case 0x442a89:c.instructions+=4;goto B442a89;
case 0x442a8c:c.instructions+=3;goto B442a8c;
case 0x442a8f:c.instructions+=2;goto B442a8f;
case 0x442a90:c.instructions+=1;goto B442a90;
case 0x442a91:goto L442a91;
case 0x442a93:c.instructions+=2;goto B442a93;
case 0x442a94:c.instructions+=1;goto B442a94;
case 0x442aa0:goto L442aa0;
case 0x442aa2:c.instructions+=10;goto B442aa2;
case 0x442aa8:c.instructions+=9;goto B442aa8;
case 0x442aae:c.instructions+=8;goto B442aae;
case 0x442ab4:c.instructions+=7;goto B442ab4;
case 0x442aba:c.instructions+=6;goto B442aba;
case 0x442ac0:c.instructions+=5;goto B442ac0;
case 0x442ac6:c.instructions+=4;goto B442ac6;
case 0x442acc:c.instructions+=3;goto B442acc;
case 0x442ad2:c.instructions+=2;goto B442ad2;
case 0x442ad8:c.instructions+=1;goto B442ad8;
case 0x442ae0:goto L442ae0;
case 0x442ae4:c.instructions+=4;goto B442ae4;
case 0x442ae5:c.instructions+=3;goto B442ae5;
case 0x442ae7:c.instructions+=2;goto B442ae7;
case 0x442ae9:c.instructions+=1;goto B442ae9;
case 0x442aeb:goto L442aeb;
case 0x442af1:c.instructions+=1;goto B442af1;
case 0x442af5:goto L442af5;
case 0x442af7:c.instructions+=4;goto B442af7;
case 0x442afb:c.instructions+=3;goto B442afb;
case 0x442afd:c.instructions+=2;goto B442afd;
case 0x442b00:c.instructions+=1;goto B442b00;
case 0x442b02:goto L442b02;
case 0x442b03:c.instructions+=3;goto B442b03;
case 0x442b09:c.instructions+=2;goto B442b09;
case 0x442b0b:c.instructions+=1;goto B442b0b;
case 0x442b0d:goto L442b0d;
case 0x442b0f:goto L442b0f;
case 0x442b20:goto L442b20;
case 0x442b22:c.instructions+=3;goto B442b22;
case 0x442b26:c.instructions+=2;goto B442b26;
case 0x442b28:c.instructions+=1;goto B442b28;
case 0x442b2a:goto L442b2a;
case 0x442b30:c.instructions+=3;goto B442b30;
case 0x442b31:c.instructions+=2;goto B442b31;
case 0x442b33:c.instructions+=1;goto B442b33;
case 0x442b35:goto L442b35;
case 0x442b37:c.instructions+=2;goto B442b37;
case 0x442b3d:c.instructions+=1;goto B442b3d;
case 0x442b44:goto L442b44;
case 0x442b46:c.instructions+=4;goto B442b46;
case 0x442b4a:c.instructions+=3;goto B442b4a;
case 0x442b4c:c.instructions+=2;goto B442b4c;
case 0x442b4f:c.instructions+=1;goto B442b4f;
case 0x442b51:goto L442b51;
case 0x442b52:c.instructions+=3;goto B442b52;
case 0x442b58:c.instructions+=2;goto B442b58;
case 0x442b5a:c.instructions+=1;goto B442b5a;
case 0x442b5c:goto L442b5c;
case 0x442b5e:c.instructions+=1;goto B442b5e;
case 0x442b61:goto L442b61;
case 0x442b65:c.instructions+=2;goto B442b65;
case 0x442b66:c.instructions+=1;goto B442b66;
case 0x442b6b:goto L442b6b;
case 0x442b70:goto L442b70;
case 0x442b71:c.instructions+=9;goto B442b71;
case 0x442b77:c.instructions+=8;goto B442b77;
case 0x442b78:c.instructions+=7;goto B442b78;
case 0x442b7a:c.instructions+=6;goto B442b7a;
case 0x442b7e:c.instructions+=5;goto B442b7e;
case 0x442b81:c.instructions+=4;goto B442b81;
case 0x442b83:c.instructions+=3;goto B442b83;
case 0x442b84:c.instructions+=2;goto B442b84;
case 0x442b85:c.instructions+=1;goto B442b85;
case 0x442b87:goto L442b87;
case 0x442b8a:c.instructions+=1;goto B442b8a;
case 0x442b8c:goto L442b8c;
case 0x442b91:goto L442b91;
case 0x442b94:c.instructions+=1;goto B442b94;
case 0x442b9a:goto L442b9a;
case 0x442b9b:c.instructions+=1;goto B442b9b;
case 0x442b9d:goto L442b9d;
case 0x442b9e:c.instructions+=1;goto B442b9e;
case 0x442ba4:goto L442ba4;
case 0x442ba8:c.instructions+=3;goto B442ba8;
case 0x442bab:c.instructions+=2;goto B442bab;
case 0x442bad:c.instructions+=1;goto B442bad;
case 0x442baf:goto L442baf;
case 0x442bb5:c.instructions+=2;goto B442bb5;
case 0x442bb7:c.instructions+=1;goto B442bb7;
case 0x442bbd:goto L442bbd;
case 0x442bbf:c.instructions+=2;goto B442bbf;
case 0x442bc1:c.instructions+=1;goto B442bc1;
case 0x442bc6:goto L442bc6;
case 0x442bc8:c.instructions+=1;goto B442bc8;
case 0x442bce:goto L442bce;
case 0x442bd2:c.instructions+=1;goto B442bd2;
case 0x442bd4:goto L442bd4;
case 0x442bd7:c.instructions+=4;goto B442bd7;
case 0x442bdd:c.instructions+=3;goto B442bdd;
case 0x442bdf:c.instructions+=2;goto B442bdf;
case 0x442be2:c.instructions+=1;goto B442be2;
case 0x442be8:goto L442be8;
case 0x442bea:c.instructions+=1;goto B442bea;
case 0x442bef:goto L442bef;
case 0x442bf2:c.instructions+=5;goto B442bf2;
case 0x442bf8:c.instructions+=4;goto B442bf8;
case 0x442bfa:c.instructions+=3;goto B442bfa;
case 0x442bfc:c.instructions+=2;goto B442bfc;
case 0x442bff:c.instructions+=1;goto B442bff;
case 0x442c01:goto L442c01;
case 0x442c02:c.instructions+=6;goto B442c02;
case 0x442c04:c.instructions+=5;goto B442c04;
case 0x442c0a:c.instructions+=4;goto B442c0a;
case 0x442c0b:c.instructions+=3;goto B442c0b;
case 0x442c0c:c.instructions+=2;goto B442c0c;
case 0x442c0d:c.instructions+=1;goto B442c0d;
case 0x442c10:goto L442c10;
case 0x442c13:c.instructions+=2;goto B442c13;
case 0x442c15:c.instructions+=1;goto B442c15;
case 0x442c17:goto L442c17;
case 0x442c1e:c.instructions+=2;goto B442c1e;
case 0x442c20:c.instructions+=1;goto B442c20;
case 0x442c22:goto L442c22;
case 0x442c26:c.instructions+=11;goto B442c26;
case 0x442c28:c.instructions+=10;goto B442c28;
case 0x442c2e:c.instructions+=9;goto B442c2e;
case 0x442c2f:c.instructions+=8;goto B442c2f;
case 0x442c30:c.instructions+=7;goto B442c30;
case 0x442c34:c.instructions+=6;goto B442c34;
case 0x442c36:c.instructions+=5;goto B442c36;
case 0x442c37:c.instructions+=4;goto B442c37;
case 0x442c3a:c.instructions+=3;goto B442c3a;
case 0x442c3e:c.instructions+=2;goto B442c3e;
case 0x442c40:c.instructions+=1;goto B442c40;
case 0x442c45:goto L442c45;
case 0x442c47:c.instructions+=3;goto B442c47;
case 0x442c49:c.instructions+=2;goto B442c49;
case 0x442c4e:c.instructions+=1;goto B442c4e;
case 0x442c53:goto L442c53;
case 0x442c55:c.instructions+=1;goto B442c55;
case 0x442c57:goto L442c57;
case 0x442c58:c.instructions+=2;goto B442c58;
case 0x442c5d:c.instructions+=1;goto B442c5d;
case 0x442c62:goto L442c62;
case 0x442c64:c.instructions+=1;goto B442c64;
case 0x442c66:goto L442c66;
case 0x442c69:c.instructions+=6;goto B442c69;
case 0x442c6a:c.instructions+=5;goto B442c6a;
case 0x442c6b:c.instructions+=4;goto B442c6b;
case 0x442c6e:c.instructions+=3;goto B442c6e;
case 0x442c6f:c.instructions+=2;goto B442c6f;
case 0x442c70:c.instructions+=1;goto B442c70;
case 0x442c73:goto L442c73;
case 0x442c77:goto L442c77;
case 0x442c78:c.instructions+=4;goto B442c78;
case 0x442c79:c.instructions+=3;goto B442c79;
case 0x442c7a:c.instructions+=2;goto B442c7a;
case 0x442c7b:c.instructions+=1;goto B442c7b;
case 0x442c80:goto L442c80;
case 0x442c81:c.instructions+=3;goto B442c81;
case 0x442c87:c.instructions+=2;goto B442c87;
case 0x442c89:c.instructions+=1;goto B442c89;
case 0x442c8b:goto L442c8b;
case 0x442c91:c.instructions+=2;goto B442c91;
case 0x442c92:c.instructions+=1;goto B442c92;
case 0x442c95:goto L442c95;
case 0x442c96:c.instructions+=4;goto B442c96;
case 0x442c98:c.instructions+=3;goto B442c98;
case 0x442c9d:c.instructions+=2;goto B442c9d;
case 0x442ca5:c.instructions+=1;goto B442ca5;
case 0x442caa:goto L442caa;
case 0x442cac:c.instructions+=1;goto B442cac;
case 0x442cae:goto L442cae;
case 0x442caf:c.instructions+=2;goto B442caf;
case 0x442cb4:c.instructions+=1;goto B442cb4;
case 0x442cb9:goto L442cb9;
case 0x442cbb:c.instructions+=1;goto B442cbb;
case 0x442cbd:goto L442cbd;
case 0x442cc0:c.instructions+=4;goto B442cc0;
case 0x442cc3:c.instructions+=3;goto B442cc3;
case 0x442cc4:c.instructions+=2;goto B442cc4;
case 0x442cc5:c.instructions+=1;goto B442cc5;
case 0x442cc8:goto L442cc8;
case 0x442ccc:c.instructions+=2;goto B442ccc;
case 0x442cce:c.instructions+=1;goto B442cce;
case 0x442cd3:goto L442cd3;
case 0x442cd5:c.instructions+=1;goto B442cd5;
case 0x442cd7:goto L442cd7;
case 0x442cdd:c.instructions+=7;goto B442cdd;
case 0x442ce1:c.instructions+=6;goto B442ce1;
case 0x442ce3:c.instructions+=5;goto B442ce3;
case 0x442ce4:c.instructions+=4;goto B442ce4;
case 0x442ce7:c.instructions+=3;goto B442ce7;
case 0x442ceb:c.instructions+=2;goto B442ceb;
case 0x442ced:c.instructions+=1;goto B442ced;
case 0x442cf2:goto L442cf2;
case 0x442cf6:c.instructions+=3;goto B442cf6;
case 0x442cf7:c.instructions+=2;goto B442cf7;
case 0x442cf8:c.instructions+=1;goto B442cf8;
case 0x442d00:goto L442d00;
case 0x442d01:c.instructions+=4;goto B442d01;
case 0x442d03:c.instructions+=3;goto B442d03;
case 0x442d07:c.instructions+=2;goto B442d07;
case 0x442d09:c.instructions+=1;goto B442d09;
case 0x442d0b:goto L442d0b;
case 0x442d0f:c.instructions+=7;goto B442d0f;
case 0x442d15:c.instructions+=6;goto B442d15;
case 0x442d17:c.instructions+=5;goto B442d17;
case 0x442d1a:c.instructions+=4;goto B442d1a;
case 0x442d1b:c.instructions+=3;goto B442d1b;
case 0x442d1d:c.instructions+=2;goto B442d1d;
case 0x442d1f:c.instructions+=1;goto B442d1f;
case 0x442d21:goto L442d21;
case 0x442d23:c.instructions+=1;goto B442d23;
case 0x442d25:goto L442d25;
case 0x442d27:goto L442d27;
case 0x442d2d:c.instructions+=3;goto B442d2d;
case 0x442d34:c.instructions+=2;goto B442d34;
case 0x442d35:c.instructions+=1;goto B442d35;
case 0x442d38:goto L442d38;
case 0x442d3e:c.instructions+=2;goto B442d3e;
case 0x442d3f:c.instructions+=1;goto B442d3f;
case 0x442d42:goto L442d42;
case 0x442d46:c.instructions+=2;goto B442d46;
case 0x442d48:c.instructions+=1;goto B442d48;
case 0x442d4a:goto L442d4a;
case 0x442d50:c.instructions+=2;goto B442d50;
case 0x442d51:c.instructions+=1;goto B442d51;
case 0x442d54:goto L442d54;
case 0x442d58:c.instructions+=2;goto B442d58;
case 0x442d5a:c.instructions+=1;goto B442d5a;
case 0x442d5c:goto L442d5c;
case 0x442d62:c.instructions+=3;goto B442d62;
case 0x442d63:c.instructions+=2;goto B442d63;
case 0x442d67:c.instructions+=1;goto B442d67;
case 0x442d70:goto L442d70;
case 0x442d71:c.instructions+=8;goto B442d71;
case 0x442d75:c.instructions+=7;goto B442d75;
case 0x442d77:c.instructions+=6;goto B442d77;
case 0x442d78:c.instructions+=5;goto B442d78;
case 0x442d79:c.instructions+=4;goto B442d79;
case 0x442d7b:c.instructions+=3;goto B442d7b;
case 0x442d7f:c.instructions+=2;goto B442d7f;
case 0x442d84:c.instructions+=1;goto B442d84;
case 0x442d86:goto L442d86;
case 0x442d88:c.instructions+=7;goto B442d88;
case 0x442d8b:c.instructions+=6;goto B442d8b;
case 0x442d8d:c.instructions+=5;goto B442d8d;
case 0x442d90:c.instructions+=4;goto B442d90;
case 0x442d92:c.instructions+=3;goto B442d92;
case 0x442d95:c.instructions+=2;goto B442d95;
case 0x442d97:c.instructions+=1;goto B442d97;
case 0x442d99:goto L442d99;
case 0x442d9b:c.instructions+=6;goto B442d9b;
case 0x442da1:c.instructions+=5;goto B442da1;
case 0x442da3:c.instructions+=4;goto B442da3;
case 0x442da6:c.instructions+=3;goto B442da6;
case 0x442da8:c.instructions+=2;goto B442da8;
case 0x442dab:c.instructions+=1;goto B442dab;
case 0x442dad:goto L442dad;
case 0x442daf:c.instructions+=5;goto B442daf;
case 0x442db0:c.instructions+=4;goto B442db0;
case 0x442db3:c.instructions+=3;goto B442db3;
case 0x442db4:c.instructions+=2;goto B442db4;
case 0x442db6:c.instructions+=1;goto B442db6;
case 0x442dbb:goto L442dbb;
case 0x442dbf:c.instructions+=4;goto B442dbf;
case 0x442dc0:c.instructions+=3;goto B442dc0;
case 0x442dc1:c.instructions+=2;goto B442dc1;
case 0x442dc3:c.instructions+=1;goto B442dc3;
case 0x442dc8:goto L442dc8;
case 0x442dcc:c.instructions+=4;goto B442dcc;
case 0x442dcd:c.instructions+=3;goto B442dcd;
case 0x442dce:c.instructions+=2;goto B442dce;
case 0x442dcf:c.instructions+=1;goto B442dcf;
case 0x442de0:goto L442de0;
case 0x442de4:c.instructions+=4;goto B442de4;
case 0x442de5:c.instructions+=3;goto B442de5;
case 0x442de6:c.instructions+=2;goto B442de6;
case 0x442de8:c.instructions+=1;goto B442de8;
case 0x442ded:goto L442ded;
case 0x442df3:c.instructions+=4;goto B442df3;
case 0x442df7:c.instructions+=3;goto B442df7;
case 0x442df9:c.instructions+=2;goto B442df9;
case 0x442dfc:c.instructions+=1;goto B442dfc;
case 0x442dfe:goto L442dfe;
case 0x442e00:c.instructions+=5;goto B442e00;
case 0x442e06:c.instructions+=4;goto B442e06;
case 0x442e08:c.instructions+=3;goto B442e08;
case 0x442e0a:c.instructions+=2;goto B442e0a;
case 0x442e0d:c.instructions+=1;goto B442e0d;
case 0x442e0f:goto L442e0f;
case 0x442e11:c.instructions+=1;goto B442e11;
case 0x442e17:goto L442e17;
case 0x442e19:c.instructions+=5;goto B442e19;
case 0x442e1b:c.instructions+=4;goto B442e1b;
case 0x442e1d:c.instructions+=3;goto B442e1d;
case 0x442e1f:c.instructions+=2;goto B442e1f;
case 0x442e22:c.instructions+=1;goto B442e22;
case 0x442e28:goto L442e28;
case 0x442e2c:c.instructions+=3;goto B442e2c;
case 0x442e2d:c.instructions+=2;goto B442e2d;
case 0x442e2f:c.instructions+=1;goto B442e2f;
case 0x442e34:goto L442e34;
case 0x442e38:c.instructions+=2;goto B442e38;
case 0x442e3a:c.instructions+=1;goto B442e3a;
case 0x442e3c:goto L442e3c;
case 0x442e40:c.instructions+=1;goto B442e40;
case 0x442e42:goto L442e42;
case 0x442e46:c.instructions+=2;goto B442e46;
case 0x442e48:c.instructions+=1;goto B442e48;
case 0x442e4a:goto L442e4a;
case 0x442e4c:c.instructions+=1;goto B442e4c;
case 0x442e4e:goto L442e4e;
case 0x442e54:c.instructions+=1;goto B442e54;
case 0x442e56:goto L442e56;
case 0x442e5c:c.instructions+=1;goto B442e5c;
case 0x442e5e:goto L442e5e;
case 0x442e62:c.instructions+=2;goto B442e62;
case 0x442e64:c.instructions+=1;goto B442e64;
case 0x442e66:goto L442e66;
case 0x442e6c:c.instructions+=1;goto B442e6c;
case 0x442e6e:goto L442e6e;
case 0x442e70:c.instructions+=2;goto B442e70;
case 0x442e76:c.instructions+=1;goto B442e76;
case 0x442e7a:goto L442e7a;
case 0x442e7c:goto L442e7c;
case 0x442e80:c.instructions+=2;goto B442e80;
case 0x442e82:c.instructions+=1;goto B442e82;
case 0x442e84:goto L442e84;
case 0x442e87:c.instructions+=2;goto B442e87;
case 0x442e89:c.instructions+=1;goto B442e89;
case 0x442e8b:goto L442e8b;
case 0x442e91:c.instructions+=1;goto B442e91;
case 0x442e93:goto L442e93;
case 0x442e94:c.instructions+=4;goto B442e94;
case 0x442e98:c.instructions+=3;goto B442e98;
case 0x442e9a:c.instructions+=2;goto B442e9a;
case 0x442e9b:c.instructions+=1;goto B442e9b;
case 0x442e9d:goto L442e9d;
case 0x442ea3:c.instructions+=1;goto B442ea3;
case 0x442ea5:goto L442ea5;
case 0x442eab:c.instructions+=1;goto B442eab;
case 0x442eaf:goto L442eaf;
case 0x442eb1:goto L442eb1;
case 0x442eb5:c.instructions+=8;goto B442eb5;
case 0x442eb7:c.instructions+=7;goto B442eb7;
case 0x442eb8:c.instructions+=6;goto B442eb8;
case 0x442eba:c.instructions+=5;goto B442eba;
case 0x442ebd:c.instructions+=4;goto B442ebd;
case 0x442ebe:c.instructions+=3;goto B442ebe;
case 0x442ec0:c.instructions+=2;goto B442ec0;
case 0x442ec2:c.instructions+=1;goto B442ec2;
case 0x442ec4:goto L442ec4;
case 0x442ec6:goto L442ec6;
case 0x442ec8:c.instructions+=1;goto B442ec8;
case 0x442eca:goto L442eca;
case 0x442ed0:c.instructions+=3;goto B442ed0;
case 0x442ed4:c.instructions+=2;goto B442ed4;
case 0x442ed5:c.instructions+=1;goto B442ed5;
case 0x442ed8:goto L442ed8;
case 0x442eda:c.instructions+=2;goto B442eda;
case 0x442edb:c.instructions+=1;goto B442edb;
case 0x442ee0:goto L442ee0;
case 0x442ee1:c.instructions+=6;goto B442ee1;
case 0x442ee5:c.instructions+=5;goto B442ee5;
case 0x442ee7:c.instructions+=4;goto B442ee7;
case 0x442ee8:c.instructions+=3;goto B442ee8;
case 0x442eea:c.instructions+=2;goto B442eea;
case 0x442eef:c.instructions+=1;goto B442eef;
case 0x442ef1:goto L442ef1;
case 0x442ef5:c.instructions+=22;goto B442ef5;
case 0x442ef7:c.instructions+=21;goto B442ef7;
case 0x442efa:c.instructions+=20;goto B442efa;
case 0x442efc:c.instructions+=19;goto B442efc;
case 0x442eff:c.instructions+=18;goto B442eff;
case 0x442f01:c.instructions+=17;goto B442f01;
case 0x442f03:c.instructions+=16;goto B442f03;
case 0x442f06:c.instructions+=15;goto B442f06;
case 0x442f08:c.instructions+=14;goto B442f08;
case 0x442f0c:c.instructions+=13;goto B442f0c;
case 0x442f0e:c.instructions+=12;goto B442f0e;
case 0x442f12:c.instructions+=11;goto B442f12;
case 0x442f15:c.instructions+=10;goto B442f15;
case 0x442f19:c.instructions+=9;goto B442f19;
case 0x442f1b:c.instructions+=8;goto B442f1b;
case 0x442f1d:c.instructions+=7;goto B442f1d;
case 0x442f1e:c.instructions+=6;goto B442f1e;
case 0x442f20:c.instructions+=5;goto B442f20;
case 0x442f23:c.instructions+=4;goto B442f23;
case 0x442f24:c.instructions+=3;goto B442f24;
case 0x442f26:c.instructions+=2;goto B442f26;
case 0x442f28:c.instructions+=1;goto B442f28;
case 0x442f2a:goto L442f2a;
case 0x442f2c:goto L442f2c;
case 0x442f2e:c.instructions+=1;goto B442f2e;
case 0x442f30:goto L442f30;
case 0x442f36:c.instructions+=4;goto B442f36;
case 0x442f37:c.instructions+=3;goto B442f37;
case 0x442f3b:c.instructions+=2;goto B442f3b;
case 0x442f3c:c.instructions+=1;goto B442f3c;
case 0x442f3f:goto L442f3f;
case 0x442f43:c.instructions+=23;goto B442f43;
case 0x442f45:c.instructions+=22;goto B442f45;
case 0x442f4b:c.instructions+=21;goto B442f4b;
case 0x442f4d:c.instructions+=20;goto B442f4d;
case 0x442f50:c.instructions+=19;goto B442f50;
case 0x442f52:c.instructions+=18;goto B442f52;
case 0x442f54:c.instructions+=17;goto B442f54;
case 0x442f57:c.instructions+=16;goto B442f57;
case 0x442f59:c.instructions+=15;goto B442f59;
case 0x442f5d:c.instructions+=14;goto B442f5d;
case 0x442f5f:c.instructions+=13;goto B442f5f;
case 0x442f65:c.instructions+=12;goto B442f65;
case 0x442f68:c.instructions+=11;goto B442f68;
case 0x442f6c:c.instructions+=10;goto B442f6c;
case 0x442f6e:c.instructions+=9;goto B442f6e;
case 0x442f70:c.instructions+=8;goto B442f70;
case 0x442f71:c.instructions+=7;goto B442f71;
case 0x442f73:c.instructions+=6;goto B442f73;
case 0x442f76:c.instructions+=5;goto B442f76;
case 0x442f77:c.instructions+=4;goto B442f77;
case 0x442f79:c.instructions+=3;goto B442f79;
case 0x442f7b:c.instructions+=2;goto B442f7b;
case 0x442f7d:c.instructions+=1;goto B442f7d;
case 0x442f7f:goto L442f7f;
case 0x442f81:goto L442f81;
case 0x442f83:c.instructions+=1;goto B442f83;
case 0x442f85:goto L442f85;
case 0x442f8b:c.instructions+=4;goto B442f8b;
case 0x442f92:c.instructions+=3;goto B442f92;
case 0x442f93:c.instructions+=2;goto B442f93;
case 0x442f94:c.instructions+=1;goto B442f94;
case 0x442f97:goto L442f97;
case 0x442f98:c.instructions+=3;goto B442f98;
case 0x442f9a:c.instructions+=2;goto B442f9a;
case 0x442f9b:c.instructions+=1;goto B442f9b;
case 0x442fa0:goto L442fa0;
case 0x442fa2:c.instructions+=7;goto B442fa2;
case 0x442fa6:c.instructions+=6;goto B442fa6;
case 0x442fac:c.instructions+=5;goto B442fac;
case 0x442fad:c.instructions+=4;goto B442fad;
case 0x442fae:c.instructions+=3;goto B442fae;
case 0x442fb5:c.instructions+=2;goto B442fb5;
case 0x442fbb:c.instructions+=1;goto B442fbb;
case 0x442fc0:goto L442fc0;
case 0x442fc2:goto L442fc2;
case 0x442fc3:c.instructions+=3;goto B442fc3;
case 0x442fca:c.instructions+=2;goto B442fca;
case 0x442fcb:c.instructions+=1;goto B442fcb;
case 0x442fd0:goto L442fd0;
case 0x442fd6:c.instructions+=2;goto B442fd6;
case 0x442fd8:c.instructions+=1;goto B442fd8;
case 0x442fda:goto L442fda;
case 0x442fde:c.instructions+=8;goto B442fde;
case 0x442fe4:c.instructions+=7;goto B442fe4;
case 0x442feb:c.instructions+=6;goto B442feb;
case 0x442fec:c.instructions+=5;goto B442fec;
case 0x442fee:c.instructions+=4;goto B442fee;
case 0x442fef:c.instructions+=3;goto B442fef;
case 0x442ff5:c.instructions+=2;goto B442ff5;
case 0x442ffb:c.instructions+=1;goto B442ffb;
default:missing_instruction(c.pc);}
B442007:L442007:{c.instructions+=1;NFSU2_TR(0x442007);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442008:L442008:{c.instructions+=4;NFSU2_TR(0x442008);
{u32 ea_=u32(u32(8561908u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44200e:{NFSU2_TR(0x44200e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B442012:{NFSU2_TR(0x442012);
{u32 ea_=u32(u32(8561908u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B442018:{NFSU2_TR(0x442018);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442020:L442020:{c.instructions+=6;NFSU2_TR(0x442020);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442021:{NFSU2_TR(0x442021);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442025:{NFSU2_TR(0x442025);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B442029:{NFSU2_TR(0x442029);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44202b:{NFSU2_TR(0x44202b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44202e:{NFSU2_TR(0x44202e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L442036;}}
}
B442030:L442030:{c.instructions+=2;NFSU2_TR(0x442030);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442034:{NFSU2_TR(0x442034);
{goto L44203a;}
}
B442036:L442036:{c.instructions+=1;NFSU2_TR(0x442036);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44203a:L44203a:{c.instructions+=4;NFSU2_TR(0x44203a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B44203e:{NFSU2_TR(0x44203e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B442040:{NFSU2_TR(0x442040);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B442043:{NFSU2_TR(0x442043);
if(r1(R+518)){{goto L44204b;}}
}
B442045:L442045:{c.instructions+=2;NFSU2_TR(0x442045);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B442047:{NFSU2_TR(0x442047);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44204b:L44204b:{c.instructions+=5;NFSU2_TR(0x44204b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44204f:{NFSU2_TR(0x44204f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B442053:{NFSU2_TR(0x442053);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B442055:{NFSU2_TR(0x442055);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B442058:{NFSU2_TR(0x442058);
if(r1(R+514)){{goto L442060;}}
}
B44205a:L44205a:{c.instructions+=2;NFSU2_TR(0x44205a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44205e:{NFSU2_TR(0x44205e);
{goto L442064;}
}
B442060:L442060:{c.instructions+=1;NFSU2_TR(0x442060);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442064:L442064:{c.instructions+=4;NFSU2_TR(0x442064);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B442068:{NFSU2_TR(0x442068);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44206a:{NFSU2_TR(0x44206a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44206d:{NFSU2_TR(0x44206d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L442075;}}
}
B44206f:L44206f:{c.instructions+=2;NFSU2_TR(0x44206f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B442071:{NFSU2_TR(0x442071);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442075:L442075:{c.instructions+=13;NFSU2_TR(0x442075);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B442079:{NFSU2_TR(0x442079);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B44207b:{NFSU2_TR(0x44207b);
__asm__ volatile(".byte 0xde,0xe1":::"memory");
}
B44207d:{NFSU2_TR(0x44207d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B442081:{NFSU2_TR(0x442081);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B442083:{NFSU2_TR(0x442083);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B442085:{NFSU2_TR(0x442085);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B442087:{NFSU2_TR(0x442087);
__asm__ volatile(".byte 0xd8,0xf2":::"memory");
}
B442089:{NFSU2_TR(0x442089);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44208b:{NFSU2_TR(0x44208b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B442091:{NFSU2_TR(0x442091);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B442093:{NFSU2_TR(0x442093);
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
B442096:{NFSU2_TR(0x442096);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L442113;}}
}
B442098:L442098:{c.instructions+=4;NFSU2_TR(0x442098);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B44209c:{NFSU2_TR(0x44209c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44209e:{NFSU2_TR(0x44209e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4420a1:{NFSU2_TR(0x4420a1);
if(r1(R+514)){{goto L4420d0;}}
}
B4420a3:L4420a3:{c.instructions+=10;NFSU2_TR(0x4420a3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4420a5:{NFSU2_TR(0x4420a5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4420a9:{NFSU2_TR(0x4420a9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4420ad:{NFSU2_TR(0x4420ad);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4420b1:{NFSU2_TR(0x4420b1);
{u32 ea_=u32(u32(7892372u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4420b7:{NFSU2_TR(0x4420b7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4420bd:{NFSU2_TR(0x4420bd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4420bf:{NFSU2_TR(0x4420bf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4420c1:{NFSU2_TR(0x4420c1);
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
B4420c4:{NFSU2_TR(0x4420c4);
if(r1(R+514)){{goto L442119;}}
}
B4420c6:L4420c6:{c.instructions+=4;NFSU2_TR(0x4420c6);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4420cc:{NFSU2_TR(0x4420cc);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4420ce:{NFSU2_TR(0x4420ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4420cf:{NFSU2_TR(0x4420cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4420d0:L4420d0:{c.instructions+=4;NFSU2_TR(0x4420d0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4420d4:{NFSU2_TR(0x4420d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4420d6:{NFSU2_TR(0x4420d6);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4420d9:{NFSU2_TR(0x4420d9);
if(r1(R+514)){{goto L4420f7;}}
}
B4420db:L4420db:{c.instructions+=8;NFSU2_TR(0x4420db);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4420df:{NFSU2_TR(0x4420df);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4420e3:{NFSU2_TR(0x4420e3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4420e7:{NFSU2_TR(0x4420e7);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4420ed:{NFSU2_TR(0x4420ed);
{u32 ea_=u32(u32(7892372u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4420f3:{NFSU2_TR(0x4420f3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4420f5:{NFSU2_TR(0x4420f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4420f6:{NFSU2_TR(0x4420f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4420f7:L4420f7:{c.instructions+=8;NFSU2_TR(0x4420f7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4420fb:{NFSU2_TR(0x4420fb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4420ff:{NFSU2_TR(0x4420ff);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B442103:{NFSU2_TR(0x442103);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B442109:{NFSU2_TR(0x442109);
{u32 ea_=u32(u32(7892372u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44210f:{NFSU2_TR(0x44210f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B442111:{NFSU2_TR(0x442111);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B442112:{NFSU2_TR(0x442112);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442113:L442113:{c.instructions+=1;NFSU2_TR(0x442113);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B442119:L442119:{c.instructions+=3;NFSU2_TR(0x442119);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44211b:{NFSU2_TR(0x44211b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44211c:{NFSU2_TR(0x44211c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442120:L442120:{c.instructions+=21;NFSU2_TR(0x442120);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442121:{NFSU2_TR(0x442121);
w4(R+4,u32(r1(R+4)));
}
B442124:{NFSU2_TR(0x442124);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B442128:{NFSU2_TR(0x442128);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44212c:{NFSU2_TR(0x44212c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44212d:{NFSU2_TR(0x44212d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B442131:{NFSU2_TR(0x442131);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B442136:{NFSU2_TR(0x442136);
w4(R+8,u32(r1(R+8)));
}
B442139:{NFSU2_TR(0x442139);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B44213c:{NFSU2_TR(0x44213c);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B442142:{NFSU2_TR(0x442142);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B442146:{NFSU2_TR(0x442146);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44214a:{NFSU2_TR(0x44214a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44214e:{NFSU2_TR(0x44214e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B442152:{NFSU2_TR(0x442152);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B442156:{NFSU2_TR(0x442156);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44215c:{NFSU2_TR(0x44215c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B442160:{NFSU2_TR(0x442160);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B442164:{NFSU2_TR(0x442164);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44216a:{NFSU2_TR(0x44216a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44216d:{NFSU2_TR(0x44216d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442172ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x442020u);}goto L442020;}
}
B442172:L442172:{c.instructions+=2;NFSU2_TR(0x442172);
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
B442175:{NFSU2_TR(0x442175);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442180:L442180:{c.instructions+=7;NFSU2_TR(0x442180);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442181:{NFSU2_TR(0x442181);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442185:{NFSU2_TR(0x442185);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442186:{NFSU2_TR(0x442186);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44218c:{NFSU2_TR(0x44218c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B442190:{NFSU2_TR(0x442190);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B442192:{NFSU2_TR(0x442192);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442197ull));
TAIL_STATIC(0x75bed4u,75b);
}
B442197:L442197:{c.instructions+=21;NFSU2_TR(0x442197);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44219a:{NFSU2_TR(0x44219a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44219e:{NFSU2_TR(0x44219e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4421a2:{NFSU2_TR(0x4421a2);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B4421a4:{NFSU2_TR(0x4421a4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4421a8:{NFSU2_TR(0x4421a8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4421aa:{NFSU2_TR(0x4421aa);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4421b0:{NFSU2_TR(0x4421b0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4421b4:{NFSU2_TR(0x4421b4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4421b8:{NFSU2_TR(0x4421b8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4421bc:{NFSU2_TR(0x4421bc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4421c0:{NFSU2_TR(0x4421c0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4421c6:{NFSU2_TR(0x4421c6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4421ca:{NFSU2_TR(0x4421ca);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4421ce:{NFSU2_TR(0x4421ce);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4421d4:{NFSU2_TR(0x4421d4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4421d8:{NFSU2_TR(0x4421d8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4421dc:{NFSU2_TR(0x4421dc);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4421e2:{NFSU2_TR(0x4421e2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4421e6:{NFSU2_TR(0x4421e6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4421ea:{NFSU2_TR(0x4421ea);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L442259;}}
}
B4421ec:L4421ec:{c.instructions+=1;NFSU2_TR(0x4421ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x442260ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4421f3:L4421f3:{c.instructions+=8;NFSU2_TR(0x4421f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4421f7:{NFSU2_TR(0x4421f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4421fb:{NFSU2_TR(0x4421fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4421fd:{NFSU2_TR(0x4421fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4421ff:{NFSU2_TR(0x4421ff);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B442201:{NFSU2_TR(0x442201);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B442202:{NFSU2_TR(0x442202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B442203:{NFSU2_TR(0x442203);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442204:L442204:{c.instructions+=8;NFSU2_TR(0x442204);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B442208:{NFSU2_TR(0x442208);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44220c:{NFSU2_TR(0x44220c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B44220e:{NFSU2_TR(0x44220e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B442210:{NFSU2_TR(0x442210);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B442212:{NFSU2_TR(0x442212);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B442213:{NFSU2_TR(0x442213);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B442214:{NFSU2_TR(0x442214);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442215:L442215:{c.instructions+=8;NFSU2_TR(0x442215);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B442219:{NFSU2_TR(0x442219);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44221b:{NFSU2_TR(0x44221b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44221f:{NFSU2_TR(0x44221f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B442221:{NFSU2_TR(0x442221);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B442223:{NFSU2_TR(0x442223);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B442224:{NFSU2_TR(0x442224);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B442225:{NFSU2_TR(0x442225);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442226:L442226:{c.instructions+=8;NFSU2_TR(0x442226);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44222a:{NFSU2_TR(0x44222a);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44222c:{NFSU2_TR(0x44222c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B442230:{NFSU2_TR(0x442230);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B442232:{NFSU2_TR(0x442232);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B442234:{NFSU2_TR(0x442234);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B442235:{NFSU2_TR(0x442235);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B442236:{NFSU2_TR(0x442236);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442237:L442237:{c.instructions+=8;NFSU2_TR(0x442237);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44223b:{NFSU2_TR(0x44223b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44223f:{NFSU2_TR(0x44223f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B442241:{NFSU2_TR(0x442241);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B442243:{NFSU2_TR(0x442243);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B442245:{NFSU2_TR(0x442245);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B442246:{NFSU2_TR(0x442246);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B442247:{NFSU2_TR(0x442247);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442248:L442248:{c.instructions+=8;NFSU2_TR(0x442248);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44224c:{NFSU2_TR(0x44224c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B442250:{NFSU2_TR(0x442250);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B442252:{NFSU2_TR(0x442252);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B442254:{NFSU2_TR(0x442254);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B442256:{NFSU2_TR(0x442256);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B442257:{NFSU2_TR(0x442257);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B442258:{NFSU2_TR(0x442258);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442259:L442259:{c.instructions+=4;NFSU2_TR(0x442259);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44225b:{NFSU2_TR(0x44225b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44225c:{NFSU2_TR(0x44225c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44225d:{NFSU2_TR(0x44225d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442280:L442280:{c.instructions+=5;NFSU2_TR(0x442280);
{u32 ea_=u32(u32(7892880u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442286:{NFSU2_TR(0x442286);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442287:{NFSU2_TR(0x442287);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44228b:{NFSU2_TR(0x44228b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44228e:{NFSU2_TR(0x44228e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442293ull));
TAIL_STATIC(0x43c350u,43c);
}
B442293:L442293:{c.instructions+=8;NFSU2_TR(0x442293);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B442297:{NFSU2_TR(0x442297);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44229b:{NFSU2_TR(0x44229b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44229d:{NFSU2_TR(0x44229d);
{u32 ea_=u32(u32(7892880u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4422a3:{NFSU2_TR(0x4422a3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4422a7:{NFSU2_TR(0x4422a7);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4422ad:{NFSU2_TR(0x4422ad);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4422b0:{NFSU2_TR(0x4422b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4422b5ull));
TAIL_STATIC(0x43c350u,43c);
}
B4422b5:L4422b5:{c.instructions+=8;NFSU2_TR(0x4422b5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4422b9:{NFSU2_TR(0x4422b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4422bd:{NFSU2_TR(0x4422bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4422c1:{NFSU2_TR(0x4422c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4422c5:{NFSU2_TR(0x4422c5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4422c7:{NFSU2_TR(0x4422c7);
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
B4422ca:{NFSU2_TR(0x4422ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4422cc:{NFSU2_TR(0x4422cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4422d0:L4422d0:{c.instructions+=6;NFSU2_TR(0x4422d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4422d1:{NFSU2_TR(0x4422d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4422d5:{NFSU2_TR(0x4422d5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4422d9:{NFSU2_TR(0x4422d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4422da:{NFSU2_TR(0x4422da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4422db:{NFSU2_TR(0x4422db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4422e0ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B4422e0:L4422e0:{c.instructions+=18;NFSU2_TR(0x4422e0);
w4(R+8,u32(r2(R+0)));
}
B4422e3:{NFSU2_TR(0x4422e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4422e7:{NFSU2_TR(0x4422e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4422eb:{NFSU2_TR(0x4422eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4422ee:{NFSU2_TR(0x4422ee);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4422f2:{NFSU2_TR(0x4422f2);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4422f8:{NFSU2_TR(0x4422f8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4422fa:{NFSU2_TR(0x4422fa);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4422fe:{NFSU2_TR(0x4422fe);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B442302:{NFSU2_TR(0x442302);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442306:{NFSU2_TR(0x442306);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44230a:{NFSU2_TR(0x44230a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44230c:{NFSU2_TR(0x44230c);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B44230e:{NFSU2_TR(0x44230e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B442310:{NFSU2_TR(0x442310);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B442316:{NFSU2_TR(0x442316);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B442318:{NFSU2_TR(0x442318);
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
B44231b:{NFSU2_TR(0x44231b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44232b;}}
}
B44231d:L44231d:{c.instructions+=5;NFSU2_TR(0x44231d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B442321:{NFSU2_TR(0x442321);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
s4(u32(r4(R+24)),r4(U+0));
}
B442327:{NFSU2_TR(0x442327);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B442329:{NFSU2_TR(0x442329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44232a:{NFSU2_TR(0x44232a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44232b:L44232b:{c.instructions+=4;NFSU2_TR(0x44232b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44232f:{NFSU2_TR(0x44232f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B442331:{NFSU2_TR(0x442331);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B442332:{NFSU2_TR(0x442332);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442340:L442340:{c.instructions+=10;NFSU2_TR(0x442340);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442341:{NFSU2_TR(0x442341);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442342:{NFSU2_TR(0x442342);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B442346:{NFSU2_TR(0x442346);
__builtin_memmove((R+24),(R+4),4);
}
B442348:{NFSU2_TR(0x442348);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44234b:{NFSU2_TR(0x44234b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B44234e:{NFSU2_TR(0x44234e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B442351:{NFSU2_TR(0x442351);
u8 U[4];
w4(U+0,u32(0x787a54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442356:{NFSU2_TR(0x442356);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442357:{NFSU2_TR(0x442357);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44235cull));
TAIL_STATIC(0x579c10u,579);
}
B44235c:L44235c:{c.instructions+=5;NFSU2_TR(0x44235c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B44235f:{NFSU2_TR(0x44235f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442360:{NFSU2_TR(0x442360);
u8 U[4];
w4(U+0,u32(0x787a38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442365:{NFSU2_TR(0x442365);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442366:{NFSU2_TR(0x442366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44236bull));
TAIL_STATIC(0x579c10u,579);
}
B44236b:L44236b:{c.instructions+=5;NFSU2_TR(0x44236b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44236e:{NFSU2_TR(0x44236e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B442371:{NFSU2_TR(0x442371);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B442373:{NFSU2_TR(0x442373);
w4(R+0,u32(0x787a34ull));
}
B442378:{NFSU2_TR(0x442378);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44237f;}}
}
B44237a:L44237a:{c.instructions+=1;NFSU2_TR(0x44237a);
w4(R+0,u32(0x787a30ull));
}
B44237f:L44237f:{c.instructions+=4;NFSU2_TR(0x44237f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442380:{NFSU2_TR(0x442380);
u8 U[4];
w4(U+0,u32(0x787a14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442385:{NFSU2_TR(0x442385);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442386:{NFSU2_TR(0x442386);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44238bull));
TAIL_STATIC(0x579c10u,579);
}
B44238b:L44238b:{c.instructions+=5;NFSU2_TR(0x44238b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44238e:{NFSU2_TR(0x44238e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B442391:{NFSU2_TR(0x442391);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B442393:{NFSU2_TR(0x442393);
w4(R+0,u32(0x787a0cull));
}
B442398:{NFSU2_TR(0x442398);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44239f;}}
}
B44239a:L44239a:{c.instructions+=1;NFSU2_TR(0x44239a);
w4(R+0,u32(0x787a04ull));
}
B44239f:L44239f:{c.instructions+=4;NFSU2_TR(0x44239f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4423a0:{NFSU2_TR(0x4423a0);
u8 U[4];
w4(U+0,u32(0x7879e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4423a5:{NFSU2_TR(0x4423a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4423a6:{NFSU2_TR(0x4423a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4423abull));
TAIL_STATIC(0x579c10u,579);
}
B4423ab:L4423ab:{c.instructions+=5;NFSU2_TR(0x4423ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4423ae:{NFSU2_TR(0x4423ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4423b1:{NFSU2_TR(0x4423b1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4423b3:{NFSU2_TR(0x4423b3);
w4(R+0,u32(0x787a0cull));
}
B4423b8:{NFSU2_TR(0x4423b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4423bf;}}
}
B4423ba:L4423ba:{c.instructions+=1;NFSU2_TR(0x4423ba);
w4(R+0,u32(0x787a04ull));
}
B4423bf:L4423bf:{c.instructions+=4;NFSU2_TR(0x4423bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4423c0:{NFSU2_TR(0x4423c0);
u8 U[4];
w4(U+0,u32(0x7879ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4423c5:{NFSU2_TR(0x4423c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4423c6:{NFSU2_TR(0x4423c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4423cbull));
TAIL_STATIC(0x579c10u,579);
}
B4423cb:L4423cb:{c.instructions+=6;NFSU2_TR(0x4423cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4423cf:{NFSU2_TR(0x4423cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7eb514ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4423d6:{NFSU2_TR(0x4423d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4423d7:{NFSU2_TR(0x4423d7);
u8 U[4];
w4(U+0,u32(0x7879b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4423dc:{NFSU2_TR(0x4423dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4423dd:{NFSU2_TR(0x4423dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4423e2ull));
TAIL_STATIC(0x579c10u,579);
}
B4423e2:L4423e2:{c.instructions+=6;NFSU2_TR(0x4423e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4423e6:{NFSU2_TR(0x4423e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7eb514ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4423ed:{NFSU2_TR(0x4423ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4423ee:{NFSU2_TR(0x4423ee);
u8 U[4];
w4(U+0,u32(0x787994ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4423f3:{NFSU2_TR(0x4423f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4423f4:{NFSU2_TR(0x4423f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4423f9ull));
TAIL_STATIC(0x579c10u,579);
}
B4423f9:L4423f9:{c.instructions+=5;NFSU2_TR(0x4423f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4423fc:{NFSU2_TR(0x4423fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4423ff:{NFSU2_TR(0x4423ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B442401:{NFSU2_TR(0x442401);
w4(R+0,u32(0x787a34ull));
}
B442406:{NFSU2_TR(0x442406);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44240d;}}
}
B442408:L442408:{c.instructions+=1;NFSU2_TR(0x442408);
w4(R+0,u32(0x787a30ull));
}
B44240d:L44240d:{c.instructions+=4;NFSU2_TR(0x44240d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44240e:{NFSU2_TR(0x44240e);
u8 U[4];
w4(U+0,u32(0x787978ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442413:{NFSU2_TR(0x442413);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442414:{NFSU2_TR(0x442414);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442419ull));
TAIL_STATIC(0x579c10u,579);
}
B442419:L442419:{c.instructions+=5;NFSU2_TR(0x442419);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44241c:{NFSU2_TR(0x44241c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B44241f:{NFSU2_TR(0x44241f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B442421:{NFSU2_TR(0x442421);
w4(R+0,u32(0x787a34ull));
}
B442426:{NFSU2_TR(0x442426);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44242d;}}
}
B442428:L442428:{c.instructions+=1;NFSU2_TR(0x442428);
w4(R+0,u32(0x787a30ull));
}
B44242d:L44242d:{c.instructions+=4;NFSU2_TR(0x44242d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44242e:{NFSU2_TR(0x44242e);
u8 U[4];
w4(U+0,u32(0x78795cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442433:{NFSU2_TR(0x442433);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442434:{NFSU2_TR(0x442434);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442439ull));
TAIL_STATIC(0x579c10u,579);
}
B442439:L442439:{c.instructions+=5;NFSU2_TR(0x442439);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44243c:{NFSU2_TR(0x44243c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B44243f:{NFSU2_TR(0x44243f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B442441:{NFSU2_TR(0x442441);
w4(R+0,u32(0x787a34ull));
}
B442446:{NFSU2_TR(0x442446);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44244d;}}
}
B442448:L442448:{c.instructions+=1;NFSU2_TR(0x442448);
w4(R+0,u32(0x787a30ull));
}
B44244d:L44244d:{c.instructions+=4;NFSU2_TR(0x44244d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44244e:{NFSU2_TR(0x44244e);
u8 U[4];
w4(U+0,u32(0x787940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442453:{NFSU2_TR(0x442453);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442454:{NFSU2_TR(0x442454);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442459ull));
TAIL_STATIC(0x579c10u,579);
}
B442459:L442459:{c.instructions+=5;NFSU2_TR(0x442459);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44245c:{NFSU2_TR(0x44245c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B44245f:{NFSU2_TR(0x44245f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B442461:{NFSU2_TR(0x442461);
w4(R+0,u32(0x787a34ull));
}
B442466:{NFSU2_TR(0x442466);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44246d;}}
}
B442468:L442468:{c.instructions+=1;NFSU2_TR(0x442468);
w4(R+0,u32(0x787a30ull));
}
B44246d:L44246d:{c.instructions+=4;NFSU2_TR(0x44246d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44246e:{NFSU2_TR(0x44246e);
u8 U[4];
w4(U+0,u32(0x787924ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442473:{NFSU2_TR(0x442473);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442474:{NFSU2_TR(0x442474);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442479ull));
TAIL_STATIC(0x579c10u,579);
}
B442479:L442479:{c.instructions+=6;NFSU2_TR(0x442479);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44247c:{NFSU2_TR(0x44247c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44247f:{NFSU2_TR(0x44247f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B442482:{NFSU2_TR(0x442482);
u8 U[4];
w4(U+0,u32(0x787908ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442487:{NFSU2_TR(0x442487);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442488:{NFSU2_TR(0x442488);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44248dull));
TAIL_STATIC(0x579c10u,579);
}
B44248d:L44248d:{c.instructions+=10;NFSU2_TR(0x44248d);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442490:{NFSU2_TR(0x442490);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B442494:{NFSU2_TR(0x442494);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B442497:{NFSU2_TR(0x442497);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44249a:{NFSU2_TR(0x44249a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B44249e:{NFSU2_TR(0x44249e);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4424a1:{NFSU2_TR(0x4424a1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4424a4:{NFSU2_TR(0x4424a4);
u8 U[4];
w4(U+0,u32(0x7878e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4424a9:{NFSU2_TR(0x4424a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4424aa:{NFSU2_TR(0x4424aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4424afull));
TAIL_STATIC(0x579c10u,579);
}
B4424af:L4424af:{c.instructions+=10;NFSU2_TR(0x4424af);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4424b2:{NFSU2_TR(0x4424b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4424b5:{NFSU2_TR(0x4424b5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4424b9:{NFSU2_TR(0x4424b9);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4424bc:{NFSU2_TR(0x4424bc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4424c0:{NFSU2_TR(0x4424c0);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4424c3:{NFSU2_TR(0x4424c3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4424c6:{NFSU2_TR(0x4424c6);
u8 U[4];
w4(U+0,u32(0x7878c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4424cb:{NFSU2_TR(0x4424cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4424cc:{NFSU2_TR(0x4424cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4424d1ull));
TAIL_STATIC(0x579c10u,579);
}
B4424d1:L4424d1:{c.instructions+=6;NFSU2_TR(0x4424d1);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4424d4:{NFSU2_TR(0x4424d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4424d7:{NFSU2_TR(0x4424d7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4424da:{NFSU2_TR(0x4424da);
u8 U[4];
w4(U+0,u32(0x7878a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4424df:{NFSU2_TR(0x4424df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4424e0:{NFSU2_TR(0x4424e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4424e5ull));
TAIL_STATIC(0x579c10u,579);
}
B4424e5:L4424e5:{c.instructions+=6;NFSU2_TR(0x4424e5);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4424e8:{NFSU2_TR(0x4424e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4424eb:{NFSU2_TR(0x4424eb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4424ee:{NFSU2_TR(0x4424ee);
u8 U[4];
w4(U+0,u32(0x787888ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4424f3:{NFSU2_TR(0x4424f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4424f4:{NFSU2_TR(0x4424f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4424f9ull));
TAIL_STATIC(0x579c10u,579);
}
B4424f9:L4424f9:{c.instructions+=6;NFSU2_TR(0x4424f9);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4424fc:{NFSU2_TR(0x4424fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4424ff:{NFSU2_TR(0x4424ff);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B442502:{NFSU2_TR(0x442502);
u8 U[4];
w4(U+0,u32(0x78786cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442507:{NFSU2_TR(0x442507);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442508:{NFSU2_TR(0x442508);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44250dull));
TAIL_STATIC(0x579c10u,579);
}
B44250d:L44250d:{c.instructions+=6;NFSU2_TR(0x44250d);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442510:{NFSU2_TR(0x442510);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B442513:{NFSU2_TR(0x442513);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B442516:{NFSU2_TR(0x442516);
u8 U[4];
w4(U+0,u32(0x787850ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44251b:{NFSU2_TR(0x44251b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44251c:{NFSU2_TR(0x44251c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442521ull));
TAIL_STATIC(0x579c10u,579);
}
B442521:L442521:{c.instructions+=6;NFSU2_TR(0x442521);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442524:{NFSU2_TR(0x442524);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B442527:{NFSU2_TR(0x442527);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B44252a:{NFSU2_TR(0x44252a);
u8 U[4];
w4(U+0,u32(0x787834ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44252f:{NFSU2_TR(0x44252f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442530:{NFSU2_TR(0x442530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442535ull));
TAIL_STATIC(0x579c10u,579);
}
B442535:L442535:{c.instructions+=5;NFSU2_TR(0x442535);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B442539:{NFSU2_TR(0x442539);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44253a:{NFSU2_TR(0x44253a);
u8 U[4];
w4(U+0,u32(0x787818ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44253f:{NFSU2_TR(0x44253f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442540:{NFSU2_TR(0x442540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442545ull));
TAIL_STATIC(0x579c10u,579);
}
B442545:L442545:{c.instructions+=5;NFSU2_TR(0x442545);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x72ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B442549:{NFSU2_TR(0x442549);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44254a:{NFSU2_TR(0x44254a);
u8 U[4];
w4(U+0,u32(0x7877fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44254f:{NFSU2_TR(0x44254f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442550:{NFSU2_TR(0x442550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442555ull));
TAIL_STATIC(0x579c10u,579);
}
B442555:L442555:{c.instructions+=5;NFSU2_TR(0x442555);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B442559:{NFSU2_TR(0x442559);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44255a:{NFSU2_TR(0x44255a);
u8 U[4];
w4(U+0,u32(0x7877e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44255f:{NFSU2_TR(0x44255f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442560:{NFSU2_TR(0x442560);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442565ull));
TAIL_STATIC(0x579c10u,579);
}
B442565:L442565:{c.instructions+=9;NFSU2_TR(0x442565);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B442569:{NFSU2_TR(0x442569);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B44256d:{NFSU2_TR(0x44256d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x76ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B442571:{NFSU2_TR(0x442571);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442572:{NFSU2_TR(0x442572);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442573:{NFSU2_TR(0x442573);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442574:{NFSU2_TR(0x442574);
u8 U[4];
w4(U+0,u32(0x7877bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442579:{NFSU2_TR(0x442579);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44257a:{NFSU2_TR(0x44257a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44257full));
TAIL_STATIC(0x579c10u,579);
}
B44257f:L44257f:{c.instructions+=8;NFSU2_TR(0x44257f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B442583:{NFSU2_TR(0x442583);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B442587:{NFSU2_TR(0x442587);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B44258a:{NFSU2_TR(0x44258a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44258b:{NFSU2_TR(0x44258b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44258c:{NFSU2_TR(0x44258c);
u8 U[4];
w4(U+0,u32(0x78779cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442591:{NFSU2_TR(0x442591);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442592:{NFSU2_TR(0x442592);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442597ull));
TAIL_STATIC(0x579c10u,579);
}
B442597:L442597:{c.instructions+=5;NFSU2_TR(0x442597);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B44259e:{NFSU2_TR(0x44259e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44259f:{NFSU2_TR(0x44259f);
u8 U[4];
w4(U+0,u32(0x787780ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4425a4:{NFSU2_TR(0x4425a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4425a5:{NFSU2_TR(0x4425a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4425aaull));
TAIL_STATIC(0x579c10u,579);
}
B4425aa:L4425aa:{c.instructions+=6;NFSU2_TR(0x4425aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4425ad:{NFSU2_TR(0x4425ad);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4425b0:{NFSU2_TR(0x4425b0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4425b3:{NFSU2_TR(0x4425b3);
u8 U[4];
w4(U+0,u32(0x787764ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4425b8:{NFSU2_TR(0x4425b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4425b9:{NFSU2_TR(0x4425b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4425beull));
TAIL_STATIC(0x579c10u,579);
}
B4425be:L4425be:{c.instructions+=10;NFSU2_TR(0x4425be);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4425c1:{NFSU2_TR(0x4425c1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4425c5:{NFSU2_TR(0x4425c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4425c8:{NFSU2_TR(0x4425c8);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4425cb:{NFSU2_TR(0x4425cb);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4425cf:{NFSU2_TR(0x4425cf);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4425d2:{NFSU2_TR(0x4425d2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4425d5:{NFSU2_TR(0x4425d5);
u8 U[4];
w4(U+0,u32(0x787740ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4425da:{NFSU2_TR(0x4425da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4425db:{NFSU2_TR(0x4425db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4425e0ull));
TAIL_STATIC(0x579c10u,579);
}
B4425e0:L4425e0:{c.instructions+=10;NFSU2_TR(0x4425e0);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4425e3:{NFSU2_TR(0x4425e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4425e6:{NFSU2_TR(0x4425e6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4425ea:{NFSU2_TR(0x4425ea);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4425ed:{NFSU2_TR(0x4425ed);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4425f1:{NFSU2_TR(0x4425f1);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4425f4:{NFSU2_TR(0x4425f4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4425f7:{NFSU2_TR(0x4425f7);
u8 U[4];
w4(U+0,u32(0x78771cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4425fc:{NFSU2_TR(0x4425fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4425fd:{NFSU2_TR(0x4425fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442602ull));
TAIL_STATIC(0x579c10u,579);
}
B442602:L442602:{c.instructions+=6;NFSU2_TR(0x442602);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442605:{NFSU2_TR(0x442605);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B442608:{NFSU2_TR(0x442608);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B44260b:{NFSU2_TR(0x44260b);
u8 U[4];
w4(U+0,u32(0x787700ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442610:{NFSU2_TR(0x442610);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442611:{NFSU2_TR(0x442611);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442616ull));
TAIL_STATIC(0x579c10u,579);
}
B442616:L442616:{c.instructions+=6;NFSU2_TR(0x442616);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442619:{NFSU2_TR(0x442619);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44261c:{NFSU2_TR(0x44261c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B44261f:{NFSU2_TR(0x44261f);
u8 U[4];
w4(U+0,u32(0x7876e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442624:{NFSU2_TR(0x442624);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442625:{NFSU2_TR(0x442625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44262aull));
TAIL_STATIC(0x579c10u,579);
}
B44262a:L44262a:{c.instructions+=6;NFSU2_TR(0x44262a);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44262d:{NFSU2_TR(0x44262d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B442630:{NFSU2_TR(0x442630);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B442633:{NFSU2_TR(0x442633);
u8 U[4];
w4(U+0,u32(0x7876c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442638:{NFSU2_TR(0x442638);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442639:{NFSU2_TR(0x442639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44263eull));
TAIL_STATIC(0x579c10u,579);
}
B44263e:L44263e:{c.instructions+=6;NFSU2_TR(0x44263e);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442641:{NFSU2_TR(0x442641);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B442644:{NFSU2_TR(0x442644);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B442647:{NFSU2_TR(0x442647);
u8 U[4];
w4(U+0,u32(0x7876acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44264c:{NFSU2_TR(0x44264c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44264d:{NFSU2_TR(0x44264d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442652ull));
TAIL_STATIC(0x579c10u,579);
}
B442652:L442652:{c.instructions+=6;NFSU2_TR(0x442652);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442655:{NFSU2_TR(0x442655);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B442658:{NFSU2_TR(0x442658);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B44265b:{NFSU2_TR(0x44265b);
u8 U[4];
w4(U+0,u32(0x787690ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442660:{NFSU2_TR(0x442660);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442661:{NFSU2_TR(0x442661);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442666ull));
TAIL_STATIC(0x579c10u,579);
}
B442666:L442666:{c.instructions+=5;NFSU2_TR(0x442666);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B44266a:{NFSU2_TR(0x44266a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44266b:{NFSU2_TR(0x44266b);
u8 U[4];
w4(U+0,u32(0x787674ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442670:{NFSU2_TR(0x442670);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442671:{NFSU2_TR(0x442671);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442676ull));
TAIL_STATIC(0x579c10u,579);
}
B442676:L442676:{c.instructions+=5;NFSU2_TR(0x442676);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x73ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B44267a:{NFSU2_TR(0x44267a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44267b:{NFSU2_TR(0x44267b);
u8 U[4];
w4(U+0,u32(0x787658ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442680:{NFSU2_TR(0x442680);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442681:{NFSU2_TR(0x442681);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442686ull));
TAIL_STATIC(0x579c10u,579);
}
B442686:L442686:{c.instructions+=5;NFSU2_TR(0x442686);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x75ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B44268a:{NFSU2_TR(0x44268a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44268b:{NFSU2_TR(0x44268b);
u8 U[4];
w4(U+0,u32(0x78763cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442690:{NFSU2_TR(0x442690);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442691:{NFSU2_TR(0x442691);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442696ull));
TAIL_STATIC(0x579c10u,579);
}
B442696:L442696:{c.instructions+=9;NFSU2_TR(0x442696);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B44269a:{NFSU2_TR(0x44269a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B44269e:{NFSU2_TR(0x44269e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x79ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4426a2:{NFSU2_TR(0x4426a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4426a3:{NFSU2_TR(0x4426a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4426a4:{NFSU2_TR(0x4426a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4426a5:{NFSU2_TR(0x4426a5);
u8 U[4];
w4(U+0,u32(0x787618ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4426aa:{NFSU2_TR(0x4426aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4426ab:{NFSU2_TR(0x4426ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4426b0ull));
TAIL_STATIC(0x579c10u,579);
}
B4426b0:L4426b0:{c.instructions+=8;NFSU2_TR(0x4426b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B4426b4:{NFSU2_TR(0x4426b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4426b8:{NFSU2_TR(0x4426b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B4426bb:{NFSU2_TR(0x4426bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4426bc:{NFSU2_TR(0x4426bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4426bd:{NFSU2_TR(0x4426bd);
u8 U[4];
w4(U+0,u32(0x7875f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4426c2:{NFSU2_TR(0x4426c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4426c3:{NFSU2_TR(0x4426c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4426c8ull));
TAIL_STATIC(0x579c10u,579);
}
B4426c8:L4426c8:{c.instructions+=5;NFSU2_TR(0x4426c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x81ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4426cf:{NFSU2_TR(0x4426cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4426d0:{NFSU2_TR(0x4426d0);
u8 U[4];
w4(U+0,u32(0x7875dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4426d5:{NFSU2_TR(0x4426d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4426d6:{NFSU2_TR(0x4426d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4426dbull));
TAIL_STATIC(0x579c10u,579);
}
B4426db:L4426db:{c.instructions+=5;NFSU2_TR(0x4426db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4426e1:{NFSU2_TR(0x4426e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4426e2:{NFSU2_TR(0x4426e2);
u8 U[4];
w4(U+0,u32(0x7875c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4426e7:{NFSU2_TR(0x4426e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4426e8:{NFSU2_TR(0x4426e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4426edull));
TAIL_STATIC(0x579c10u,579);
}
B4426ed:L4426ed:{c.instructions+=4;NFSU2_TR(0x4426ed);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4426f0:{NFSU2_TR(0x4426f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4426f1:{NFSU2_TR(0x4426f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4426f2:{NFSU2_TR(0x4426f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442700:L442700:{c.instructions+=12;NFSU2_TR(0x442700);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442702:{NFSU2_TR(0x442702);
u8 U[4];
w4(U+0,u32(0x771febull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442707:{NFSU2_TR(0x442707);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44270d:{NFSU2_TR(0x44270d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44270e:{NFSU2_TR(0x44270e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B442715:{NFSU2_TR(0x442715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x31cull))));
}
B44271b:{NFSU2_TR(0x44271b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44271c:{NFSU2_TR(0x44271c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44271d:{NFSU2_TR(0x44271d);
__builtin_memmove((R+28),(R+4),4);
}
B44271f:{NFSU2_TR(0x44271f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B442723:{NFSU2_TR(0x442723);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B442728:{NFSU2_TR(0x442728);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44272dull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B44272d:L44272d:{c.instructions+=7;NFSU2_TR(0x44272d);
u8 U[8];
w4(U+0,u32(u32(u32(0x334ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B442734:{NFSU2_TR(0x442734);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442736:{NFSU2_TR(0x442736);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44273b:{NFSU2_TR(0x44273b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44273c:{NFSU2_TR(0x44273c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B442740:{NFSU2_TR(0x442740);
u8 U[8];
w4(U+0,u32(u32(u32(0x338ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44274b:{NFSU2_TR(0x44274b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442750ull));
TAIL_STATIC(0x5e6fa0u,5e6);
}
B442750:L442750:{c.instructions+=7;NFSU2_TR(0x442750);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B442754:{NFSU2_TR(0x442754);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442755:{NFSU2_TR(0x442755);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442757:{NFSU2_TR(0x442757);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442759:{NFSU2_TR(0x442759);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44275a:{NFSU2_TR(0x44275a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44275e:{NFSU2_TR(0x44275e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442763ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B442763:L442763:{c.instructions+=3;NFSU2_TR(0x442763);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B442767:{NFSU2_TR(0x442767);
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
B442769:{NFSU2_TR(0x442769);
if(r1(R+518)){{goto L442777;}}
}
B44276b:L44276b:{c.instructions+=3;NFSU2_TR(0x44276b);
{u32 ea_=u32(r4(R+28)+u32(7264u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B442771:{NFSU2_TR(0x442771);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B442775:{NFSU2_TR(0x442775);
{goto L442781;}
}
B442777:L442777:{c.instructions+=2;NFSU2_TR(0x442777);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B442779:{NFSU2_TR(0x442779);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B442781:L442781:{c.instructions+=3;NFSU2_TR(0x442781);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B442785:{NFSU2_TR(0x442785);
u8 U[8];
w4(U+0,u32(u32(u32(0x32cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B442790:{NFSU2_TR(0x442790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442795ull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B442795:L442795:{c.instructions+=7;NFSU2_TR(0x442795);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442799:{NFSU2_TR(0x442799);
u8 U[8];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4427a0:{NFSU2_TR(0x4427a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4427a1:{NFSU2_TR(0x4427a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4427a2:{NFSU2_TR(0x4427a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4427a9:{NFSU2_TR(0x4427a9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x328ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x328ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x328ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4427af:{NFSU2_TR(0x4427af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4427c0:L4427c0:{c.instructions+=16;NFSU2_TR(0x4427c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4427c1:{NFSU2_TR(0x4427c1);
__builtin_memmove((R+20),(R+16),4);
}
B4427c3:{NFSU2_TR(0x4427c3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4427c6:{NFSU2_TR(0x4427c6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4427c8:{NFSU2_TR(0x4427c8);
u8 U[4];
w4(U+0,u32(0x77224bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4427cd:{NFSU2_TR(0x4427cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4427d3:{NFSU2_TR(0x4427d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4427d4:{NFSU2_TR(0x4427d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4427db:{NFSU2_TR(0x4427db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x338ull))));
}
B4427e1:{NFSU2_TR(0x4427e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4427e2:{NFSU2_TR(0x4427e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4427e3:{NFSU2_TR(0x4427e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4427e4:{NFSU2_TR(0x4427e4);
__builtin_memmove((R+28),(R+4),4);
}
B4427e6:{NFSU2_TR(0x4427e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4427ec:{NFSU2_TR(0x4427ec);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4427ee:{NFSU2_TR(0x4427ee);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4427f8;}}
}
B4427f0:L4427f0:{c.instructions+=2;NFSU2_TR(0x4427f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4427f6:{NFSU2_TR(0x4427f6);
{goto L442804;}
}
B4427f8:L4427f8:{c.instructions+=3;NFSU2_TR(0x4427f8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4427fa:{NFSU2_TR(0x4427fa);
w4(R+4,u32(0x827b88ull));
}
B4427ff:{NFSU2_TR(0x4427ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442804ull));
TAIL_STATIC(0x4324d0u,432);
}
B442804:L442804:{c.instructions+=2;NFSU2_TR(0x442804);
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
B442806:{NFSU2_TR(0x442806);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4428aa;}}
}
B44280c:L44280c:{c.instructions+=3;NFSU2_TR(0x44280c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44280d:{NFSU2_TR(0x44280d);
w4(R+4,u32(0x827b88ull));
}
B442812:{NFSU2_TR(0x442812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442817ull));
TAIL_STATIC(0x432490u,432);
}
B442817:L442817:{c.instructions+=3;NFSU2_TR(0x442817);
__builtin_memmove((R+24),(R+0),4);
}
B442819:{NFSU2_TR(0x442819);
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
B44281b:{NFSU2_TR(0x44281b);
if(r1(R+518)){{goto L4428aa;}}
}
B442821:L442821:{c.instructions+=7;NFSU2_TR(0x442821);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B442824:{NFSU2_TR(0x442824);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442825:{NFSU2_TR(0x442825);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B44282b:{NFSU2_TR(0x44282b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44282c:{NFSU2_TR(0x44282c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B442830:{NFSU2_TR(0x442830);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442831:{NFSU2_TR(0x442831);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442836ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B442836:L442836:{c.instructions+=4;NFSU2_TR(0x442836);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44283c:{NFSU2_TR(0x44283c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B44283f:{NFSU2_TR(0x44283f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442841:{NFSU2_TR(0x442841);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L442898;}}
}
B442843:L442843:{c.instructions+=3;NFSU2_TR(0x442843);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B442847:{NFSU2_TR(0x442847);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x110ull))));
}
B44284d:{NFSU2_TR(0x44284d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442852ull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B442852:L442852:{c.instructions+=6;NFSU2_TR(0x442852);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442854:{NFSU2_TR(0x442854);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442859:{NFSU2_TR(0x442859);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44285a:{NFSU2_TR(0x44285a);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44285e:{NFSU2_TR(0x44285e);
u8 U[8];
w4(U+0,u32(u32(u32(0x358ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B442869:{NFSU2_TR(0x442869);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44286eull));
TAIL_STATIC(0x5e6fa0u,5e6);
}
B44286e:L44286e:{c.instructions+=6;NFSU2_TR(0x44286e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442870:{NFSU2_TR(0x442870);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442872:{NFSU2_TR(0x442872);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442874:{NFSU2_TR(0x442874);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442875:{NFSU2_TR(0x442875);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B442879:{NFSU2_TR(0x442879);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44287eull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B44287e:L44287e:{c.instructions+=4;NFSU2_TR(0x44287e);
{u32 ea_=u32(r4(R+28)+u32(7264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B442884:{NFSU2_TR(0x442884);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B442888:{NFSU2_TR(0x442888);
u8 U[8];
w4(U+0,u32(u32(u32(0x34cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B442893:{NFSU2_TR(0x442893);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442898ull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B442898:L442898:{c.instructions+=4;NFSU2_TR(0x442898);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44289c:{NFSU2_TR(0x44289c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44289d:{NFSU2_TR(0x44289d);
__builtin_memmove((R+4),(R+28),4);
}
B44289f:{NFSU2_TR(0x44289f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4428a4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x442700u);}goto L442700;}
}
B4428a4:L4428a4:{c.instructions+=2;NFSU2_TR(0x4428a4);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4428a7:{NFSU2_TR(0x4428a7);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4428aa:L4428aa:{c.instructions+=8;NFSU2_TR(0x4428aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x344ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4428b1:{NFSU2_TR(0x4428b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4428b2:{NFSU2_TR(0x4428b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4428b3:{NFSU2_TR(0x4428b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4428ba:{NFSU2_TR(0x4428ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4428bb:{NFSU2_TR(0x4428bb);
__builtin_memmove((R+16),(R+20),4);
}
B4428bd:{NFSU2_TR(0x4428bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4428be:{NFSU2_TR(0x4428be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4428d0:L4428d0:{c.instructions+=7;NFSU2_TR(0x4428d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4428d1:{NFSU2_TR(0x4428d1);
__builtin_memmove((R+20),(R+4),4);
}
B4428d3:{NFSU2_TR(0x4428d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4428d6:{NFSU2_TR(0x4428d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4428d8:{NFSU2_TR(0x4428d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4428d9:{NFSU2_TR(0x4428d9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4428dd:{NFSU2_TR(0x4428dd);
if(r1(R+518)){{goto L4428fc;}}
}
B4428df:L4428df:{c.instructions+=2;NFSU2_TR(0x4428df);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4428e3:{NFSU2_TR(0x4428e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4428fc;}}
}
B4428e5:L4428e5:{c.instructions+=6;NFSU2_TR(0x4428e5);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4428e8:{NFSU2_TR(0x4428e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4428eb:{NFSU2_TR(0x4428eb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4428ee:{NFSU2_TR(0x4428ee);
u8 U[4];
w4(U+0,u32(0x787a98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4428f3:{NFSU2_TR(0x4428f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4428f4:{NFSU2_TR(0x4428f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4428f9ull));
TAIL_STATIC(0x579c10u,579);
}
B4428f9:L4428f9:{c.instructions+=1;NFSU2_TR(0x4428f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4428fc:L4428fc:{c.instructions+=4;NFSU2_TR(0x4428fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B442900:{NFSU2_TR(0x442900);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B442902:{NFSU2_TR(0x442902);
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
B442904:{NFSU2_TR(0x442904);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44294b;}}
}
B442906:L442906:{c.instructions+=4;NFSU2_TR(0x442906);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442907:{NFSU2_TR(0x442907);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442908:{NFSU2_TR(0x442908);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44290b:{NFSU2_TR(0x44290b);
{goto L442910;}
}
B442910:L442910:{c.instructions+=6;NFSU2_TR(0x442910);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442911:{NFSU2_TR(0x442911);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442914:{NFSU2_TR(0x442914);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442915:{NFSU2_TR(0x442915);
u8 U[4];
w4(U+0,u32(0x787a7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44291a:{NFSU2_TR(0x44291a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44291b:{NFSU2_TR(0x44291b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442920ull));
TAIL_STATIC(0x579c10u,579);
}
B442920:L442920:{c.instructions+=4;NFSU2_TR(0x442920);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B442923:{NFSU2_TR(0x442923);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442924:{NFSU2_TR(0x442924);
__builtin_memmove((R+4),(R+12),4);
}
B442926:{NFSU2_TR(0x442926);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44292bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x442340u);}goto L442340;}
}
B44292b:L44292b:{c.instructions+=3;NFSU2_TR(0x44292b);
u8 U[4];
w4(U+0,u32(0x787a70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442930:{NFSU2_TR(0x442930);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442931:{NFSU2_TR(0x442931);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442936ull));
TAIL_STATIC(0x579c10u,579);
}
B442936:L442936:{c.instructions+=6;NFSU2_TR(0x442936);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B44293a:{NFSU2_TR(0x44293a);
__builtin_memmove((R+4),(R+24),4);
}
B44293c:{NFSU2_TR(0x44293c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44293f:{NFSU2_TR(0x44293f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x88ull))));
}
B442945:{NFSU2_TR(0x442945);
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
B442947:{NFSU2_TR(0x442947);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x442910u);}goto L442910;}}
}
B442949:L442949:{c.instructions+=2;NFSU2_TR(0x442949);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44294a:{NFSU2_TR(0x44294a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44294b:L44294b:{c.instructions+=3;NFSU2_TR(0x44294b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44294c:{NFSU2_TR(0x44294c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44294d:{NFSU2_TR(0x44294d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442950:L442950:{c.instructions+=6;NFSU2_TR(0x442950);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442951:{NFSU2_TR(0x442951);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442952:{NFSU2_TR(0x442952);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c2cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44295c:{NFSU2_TR(0x44295c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x19cull))));
__builtin_memmove((R+28),(U+0),4);
}
B442962:{NFSU2_TR(0x442962);
w4(R+4,u32(0x22ull));
}
B442967:{NFSU2_TR(0x442967);
w4(R+24,u32(0x7ec7b0ull));
}
B44296c:L44296c:{c.instructions+=1;NFSU2_TR(0x44296c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L44296e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44296cu);}goto L44296c;}
}
B44296e:L44296e:{c.instructions+=4;NFSU2_TR(0x44296e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44296f:{NFSU2_TR(0x44296f);
s1(0x828649,u8(0x0ull));
}
B442976:{NFSU2_TR(0x442976);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442977:{NFSU2_TR(0x442977);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442980:L442980:{c.instructions+=6;NFSU2_TR(0x442980);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B442983:{NFSU2_TR(0x442983);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442984:{NFSU2_TR(0x442984);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B442986:{NFSU2_TR(0x442986);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442988:{NFSU2_TR(0x442988);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442989:{NFSU2_TR(0x442989);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4429a0;}}
}
B44298b:L44298b:{c.instructions+=3;NFSU2_TR(0x44298b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44298e:{NFSU2_TR(0x44298e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B442992:{NFSU2_TR(0x442992);
__builtin_memmove((R+4),(R+24),4);
}
B442994:L442994:{c.instructions+=2;NFSU2_TR(0x442994);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+10)));
w4(U+14,u32(u32(r4(R+28))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B442996:{NFSU2_TR(0x442996);
if(r1(R+518)){{goto L4429a7;}}
}
B442998:L442998:{c.instructions+=4;NFSU2_TR(0x442998);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B442999:{NFSU2_TR(0x442999);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B44299c:{NFSU2_TR(0x44299c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44299e:{NFSU2_TR(0x44299e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x442994u);}goto L442994;}}
}
B4429a0:L4429a0:{c.instructions+=4;NFSU2_TR(0x4429a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4429a1:{NFSU2_TR(0x4429a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4429a2:{NFSU2_TR(0x4429a2);
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
B4429a4:{NFSU2_TR(0x4429a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4429a7:L4429a7:{c.instructions+=5;NFSU2_TR(0x4429a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4429aa:{NFSU2_TR(0x4429aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4429ab:{NFSU2_TR(0x4429ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4429ae:{NFSU2_TR(0x4429ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4429af:{NFSU2_TR(0x4429af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4429c0:L4429c0:{c.instructions+=7;NFSU2_TR(0x4429c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4429c1:{NFSU2_TR(0x4429c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4429c2:{NFSU2_TR(0x4429c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4429c5:{NFSU2_TR(0x4429c5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4429c7:{NFSU2_TR(0x4429c7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4429c9:{NFSU2_TR(0x4429c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4429ca:{NFSU2_TR(0x4429ca);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4429f3;}}
}
B4429cc:L4429cc:{c.instructions+=5;NFSU2_TR(0x4429cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4429cf:{NFSU2_TR(0x4429cf);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B4429d4:{NFSU2_TR(0x4429d4);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B4429d9:{NFSU2_TR(0x4429d9);
__builtin_memmove((R+0),(R+4),4);
}
B4429db:{NFSU2_TR(0x4429db);
{goto L4429e0;}
}
B4429e0:L4429e0:{c.instructions+=2;NFSU2_TR(0x4429e0);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+12))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B4429e3:{NFSU2_TR(0x4429e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4429eb;}}
}
B4429e5:L4429e5:{c.instructions+=2;NFSU2_TR(0x4429e5);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(R+28))<(r2(U+10))));
w1(R+523,sborrow<u16>(r2(R+28),r2(U+10)));
w2(U+12,u16(u32(r2(R+28))-u32(r2(U+10))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4429e9:{NFSU2_TR(0x4429e9);
if(r1(R+518)){{goto L4429fb;}}
}
B4429eb:L4429eb:{c.instructions+=4;NFSU2_TR(0x4429eb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4429ec:{NFSU2_TR(0x4429ec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B4429ef:{NFSU2_TR(0x4429ef);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4429f1:{NFSU2_TR(0x4429f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4429e0u);}goto L4429e0;}}
}
B4429f3:L4429f3:{c.instructions+=5;NFSU2_TR(0x4429f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4429f4:{NFSU2_TR(0x4429f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4429f5:{NFSU2_TR(0x4429f5);
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
B4429f7:{NFSU2_TR(0x4429f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4429f8:{NFSU2_TR(0x4429f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4429fb:L4429fb:{c.instructions+=6;NFSU2_TR(0x4429fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4429fc:{NFSU2_TR(0x4429fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4429ff:{NFSU2_TR(0x4429ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442a00:{NFSU2_TR(0x442a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B442a03:{NFSU2_TR(0x442a03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B442a04:{NFSU2_TR(0x442a04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442a10:L442a10:{c.instructions+=5;NFSU2_TR(0x442a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B442a16:{NFSU2_TR(0x442a16);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B442a19:{NFSU2_TR(0x442a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B442a1f:{NFSU2_TR(0x442a1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442a20:{NFSU2_TR(0x442a20);
if(r1(R+518)){{goto L442a6e;}}
}
B442a22:L442a22:{c.instructions+=2;NFSU2_TR(0x442a22);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B442a23:{NFSU2_TR(0x442a23);
if(r1(R+518)){{goto L442a4b;}}
}
B442a25:L442a25:{c.instructions+=2;NFSU2_TR(0x442a25);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B442a26:{NFSU2_TR(0x442a26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L442a91;}}
}
B442a28:L442a28:{c.instructions+=9;NFSU2_TR(0x442a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B442a2b:{NFSU2_TR(0x442a2b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B442a2d:{NFSU2_TR(0x442a2d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B442a2e:{NFSU2_TR(0x442a2e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442a30:{NFSU2_TR(0x442a30);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B442a33:{NFSU2_TR(0x442a33);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B442a34:{NFSU2_TR(0x442a34);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B442a36:{NFSU2_TR(0x442a36);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B442a38:{NFSU2_TR(0x442a38);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L442a3c;}}
}
B442a3a:L442a3a:{c.instructions+=1;NFSU2_TR(0x442a3a);
__builtin_memmove((R+8),(R+24),4);
}
B442a3c:L442a3c:{c.instructions+=2;NFSU2_TR(0x442a3c);
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
B442a3e:{NFSU2_TR(0x442a3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L442a91;}}
}
B442a40:L442a40:{c.instructions+=5;NFSU2_TR(0x442a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B442a43:{NFSU2_TR(0x442a43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B442a46:{NFSU2_TR(0x442a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B442a49:{NFSU2_TR(0x442a49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442a4a:{NFSU2_TR(0x442a4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442a4b:L442a4b:{c.instructions+=9;NFSU2_TR(0x442a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B442a4e:{NFSU2_TR(0x442a4e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B442a50:{NFSU2_TR(0x442a50);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B442a51:{NFSU2_TR(0x442a51);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442a53:{NFSU2_TR(0x442a53);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B442a56:{NFSU2_TR(0x442a56);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B442a57:{NFSU2_TR(0x442a57);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B442a59:{NFSU2_TR(0x442a59);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B442a5b:{NFSU2_TR(0x442a5b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L442a5f;}}
}
B442a5d:L442a5d:{c.instructions+=1;NFSU2_TR(0x442a5d);
__builtin_memmove((R+8),(R+24),4);
}
B442a5f:L442a5f:{c.instructions+=2;NFSU2_TR(0x442a5f);
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
B442a61:{NFSU2_TR(0x442a61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L442a91;}}
}
B442a63:L442a63:{c.instructions+=5;NFSU2_TR(0x442a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B442a66:{NFSU2_TR(0x442a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B442a69:{NFSU2_TR(0x442a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B442a6c:{NFSU2_TR(0x442a6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442a6d:{NFSU2_TR(0x442a6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442a6e:L442a6e:{c.instructions+=9;NFSU2_TR(0x442a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B442a71:{NFSU2_TR(0x442a71);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B442a73:{NFSU2_TR(0x442a73);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B442a74:{NFSU2_TR(0x442a74);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442a76:{NFSU2_TR(0x442a76);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B442a79:{NFSU2_TR(0x442a79);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B442a7a:{NFSU2_TR(0x442a7a);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B442a7c:{NFSU2_TR(0x442a7c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B442a7e:{NFSU2_TR(0x442a7e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L442a82;}}
}
B442a80:L442a80:{c.instructions+=1;NFSU2_TR(0x442a80);
__builtin_memmove((R+8),(R+24),4);
}
B442a82:L442a82:{c.instructions+=2;NFSU2_TR(0x442a82);
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
B442a84:{NFSU2_TR(0x442a84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L442a91;}}
}
B442a86:L442a86:{c.instructions+=5;NFSU2_TR(0x442a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B442a89:{NFSU2_TR(0x442a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B442a8c:{NFSU2_TR(0x442a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B442a8f:{NFSU2_TR(0x442a8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442a90:{NFSU2_TR(0x442a90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442a91:L442a91:{c.instructions+=3;NFSU2_TR(0x442a91);
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
B442a93:{NFSU2_TR(0x442a93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442a94:{NFSU2_TR(0x442a94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442aa0:L442aa0:{c.instructions+=11;NFSU2_TR(0x442aa0);
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
B442aa2:{NFSU2_TR(0x442aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B442aa8:{NFSU2_TR(0x442aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B442aae:{NFSU2_TR(0x442aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B442ab4:{NFSU2_TR(0x442ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B442aba:{NFSU2_TR(0x442aba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B442ac0:{NFSU2_TR(0x442ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ca0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B442ac6:{NFSU2_TR(0x442ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ca4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B442acc:{NFSU2_TR(0x442acc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ca8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B442ad2:{NFSU2_TR(0x442ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B442ad8:{NFSU2_TR(0x442ad8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442ae0:L442ae0:{c.instructions+=5;NFSU2_TR(0x442ae0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B442ae4:{NFSU2_TR(0x442ae4);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B442ae5:{NFSU2_TR(0x442ae5);
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
B442ae7:{NFSU2_TR(0x442ae7);
__builtin_memmove((R+0),(R+8),4);
}
B442ae9:{NFSU2_TR(0x442ae9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L442b0f;}}
}
B442aeb:L442aeb:{c.instructions+=2;NFSU2_TR(0x442aeb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B442af1:{NFSU2_TR(0x442af1);
u8 U[12];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B442af5:L442af5:{c.instructions+=5;NFSU2_TR(0x442af5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442af7:{NFSU2_TR(0x442af7);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B442afb:{NFSU2_TR(0x442afb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B442afd:{NFSU2_TR(0x442afd);
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
B442b00:{NFSU2_TR(0x442b00);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L442b0d;}}
}
B442b02:L442b02:{c.instructions+=4;NFSU2_TR(0x442b02);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B442b03:{NFSU2_TR(0x442b03);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x88ull))));
}
B442b09:{NFSU2_TR(0x442b09);
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
B442b0b:{NFSU2_TR(0x442b0b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x442af5u);}goto L442af5;}}
}
B442b0d:L442b0d:{c.instructions+=1;NFSU2_TR(0x442b0d);
__builtin_memmove((R+0),(R+8),4);
}
B442b0f:L442b0f:{c.instructions+=1;NFSU2_TR(0x442b0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442b20:L442b20:{c.instructions+=4;NFSU2_TR(0x442b20);
__builtin_memmove((R+0),(R+4),4);
}
B442b22:{NFSU2_TR(0x442b22);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B442b26:{NFSU2_TR(0x442b26);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442b28:{NFSU2_TR(0x442b28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L442b61;}}
}
B442b2a:L442b2a:{c.instructions+=4;NFSU2_TR(0x442b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B442b30:{NFSU2_TR(0x442b30);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B442b31:{NFSU2_TR(0x442b31);
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
B442b33:{NFSU2_TR(0x442b33);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L442b5c;}}
}
B442b35:L442b35:{c.instructions+=3;NFSU2_TR(0x442b35);
__builtin_memmove((R+4),(R+8),4);
}
B442b37:{NFSU2_TR(0x442b37);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B442b3d:{NFSU2_TR(0x442b3d);
u8 U[12];
w4(U+0,u32(u32(u32(0x1a8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B442b44:L442b44:{c.instructions+=5;NFSU2_TR(0x442b44);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442b46:{NFSU2_TR(0x442b46);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B442b4a:{NFSU2_TR(0x442b4a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B442b4c:{NFSU2_TR(0x442b4c);
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
B442b4f:{NFSU2_TR(0x442b4f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L442b5c;}}
}
B442b51:L442b51:{c.instructions+=4;NFSU2_TR(0x442b51);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B442b52:{NFSU2_TR(0x442b52);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x88ull))));
}
B442b58:{NFSU2_TR(0x442b58);
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
B442b5a:{NFSU2_TR(0x442b5a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x442b44u);}goto L442b44;}}
}
B442b5c:L442b5c:{c.instructions+=2;NFSU2_TR(0x442b5c);
__builtin_memmove((R+0),(R+8),4);
}
B442b5e:{NFSU2_TR(0x442b5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442b61:L442b61:{c.instructions+=3;NFSU2_TR(0x442b61);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B442b65:{NFSU2_TR(0x442b65);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442b66:{NFSU2_TR(0x442b66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442b6bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x442ae0u);}goto L442ae0;}
}
B442b6b:L442b6b:{c.instructions+=1;NFSU2_TR(0x442b6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442b70:L442b70:{c.instructions+=10;NFSU2_TR(0x442b70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442b71:{NFSU2_TR(0x442b71);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442b77:{NFSU2_TR(0x442b77);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442b78:{NFSU2_TR(0x442b78);
__builtin_memmove((R+12),(R+4),4);
}
B442b7a:{NFSU2_TR(0x442b7a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B442b7e:{NFSU2_TR(0x442b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B442b81:{NFSU2_TR(0x442b81);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442b83:{NFSU2_TR(0x442b83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442b84:{NFSU2_TR(0x442b84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442b85:{NFSU2_TR(0x442b85);
if(r1(R+518)){{goto L442b8c;}}
}
B442b87:L442b87:{c.instructions+=2;NFSU2_TR(0x442b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B442b8a:{NFSU2_TR(0x442b8a);
{goto L442b91;}
}
B442b8c:L442b8c:{c.instructions+=1;NFSU2_TR(0x442b8c);
w4(R+0,u32(0x3ull));
}
B442b91:L442b91:{c.instructions+=2;NFSU2_TR(0x442b91);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B442b94:{NFSU2_TR(0x442b94);
if(r1(R+518)){{goto L442c45;}}
}
B442b9a:L442b9a:{c.instructions+=2;NFSU2_TR(0x442b9a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B442b9b:{NFSU2_TR(0x442b9b);
if(r1(R+518)){{goto L442c10;}}
}
B442b9d:L442b9d:{c.instructions+=2;NFSU2_TR(0x442b9d);
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
B442b9e:{NFSU2_TR(0x442b9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L442c77;}}
}
B442ba4:L442ba4:{c.instructions+=4;NFSU2_TR(0x442ba4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B442ba8:{NFSU2_TR(0x442ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B442bab:{NFSU2_TR(0x442bab);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442bad:{NFSU2_TR(0x442bad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L442bd4;}}
}
B442baf:L442baf:{c.instructions+=3;NFSU2_TR(0x442baf);
__builtin_memmove((R+24),gp(0x8900b4),4);
}
B442bb5:{NFSU2_TR(0x442bb5);
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
B442bb7:{NFSU2_TR(0x442bb7);
if(r1(R+518)){{goto L442c77;}}
}
B442bbd:L442bbd:{c.instructions+=3;NFSU2_TR(0x442bbd);
__builtin_memmove((R+4),(R+24),4);
}
B442bbf:{NFSU2_TR(0x442bbf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B442bc1:{NFSU2_TR(0x442bc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442bc6ull));
TAIL_STATIC(0x5eac70u,5ea);
}
B442bc6:L442bc6:{c.instructions+=2;NFSU2_TR(0x442bc6);
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
B442bc8:{NFSU2_TR(0x442bc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L442c73;}}
}
B442bce:L442bce:{c.instructions+=2;NFSU2_TR(0x442bce);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442bd2:{NFSU2_TR(0x442bd2);
__builtin_memmove((R+4),(R+24),4);
}
B442bd4:L442bd4:{c.instructions+=5;NFSU2_TR(0x442bd4);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442bd7:{NFSU2_TR(0x442bd7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B442bdd:{NFSU2_TR(0x442bdd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B442bdf:{NFSU2_TR(0x442bdf);
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
B442be2:{NFSU2_TR(0x442be2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L442c77;}}
}
B442be8:L442be8:{c.instructions+=2;NFSU2_TR(0x442be8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B442bea:{NFSU2_TR(0x442bea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442befull));
TAIL_STATIC(0x4418a0u,441);
}
B442bef:L442bef:{c.instructions+=6;NFSU2_TR(0x442bef);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B442bf2:{NFSU2_TR(0x442bf2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442bf8:{NFSU2_TR(0x442bf8);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B442bfa:{NFSU2_TR(0x442bfa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B442bfc:{NFSU2_TR(0x442bfc);
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
B442bff:{NFSU2_TR(0x442bff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L442c77;}}
}
B442c01:L442c01:{c.instructions+=7;NFSU2_TR(0x442c01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B442c02:{NFSU2_TR(0x442c02);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B442c04:{NFSU2_TR(0x442c04);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442c0a:{NFSU2_TR(0x442c0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442c0b:{NFSU2_TR(0x442c0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B442c0c:{NFSU2_TR(0x442c0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B442c0d:{NFSU2_TR(0x442c0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442c10:L442c10:{c.instructions+=3;NFSU2_TR(0x442c10);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B442c13:{NFSU2_TR(0x442c13);
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
B442c15:{NFSU2_TR(0x442c15);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L442c77;}}
}
B442c17:L442c17:{c.instructions+=3;NFSU2_TR(0x442c17);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B442c1e:{NFSU2_TR(0x442c1e);
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
B442c20:{NFSU2_TR(0x442c20);
if(r1(R+518)){{goto L442c77;}}
}
B442c22:L442c22:{c.instructions+=12;NFSU2_TR(0x442c22);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B442c26:{NFSU2_TR(0x442c26);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B442c28:{NFSU2_TR(0x442c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B442c2e:{NFSU2_TR(0x442c2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B442c2f:{NFSU2_TR(0x442c2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442c30:{NFSU2_TR(0x442c30);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B442c34:{NFSU2_TR(0x442c34);
__builtin_memmove((R+4),(R+8),4);
}
B442c36:{NFSU2_TR(0x442c36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B442c37:{NFSU2_TR(0x442c37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B442c3a:{NFSU2_TR(0x442c3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B442c3e:{NFSU2_TR(0x442c3e);
__builtin_memmove((R+4),(R+0),4);
}
B442c40:{NFSU2_TR(0x442c40);
TAIL_STATIC(0x5d4540u,5d4);
}
B442c45:L442c45:{c.instructions+=4;NFSU2_TR(0x442c45);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442c47:{NFSU2_TR(0x442c47);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B442c49:{NFSU2_TR(0x442c49);
w4(R+4,u32(0x827b88ull));
}
B442c4e:{NFSU2_TR(0x442c4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442c53ull));
TAIL_STATIC(0x4324d0u,432);
}
B442c53:L442c53:{c.instructions+=2;NFSU2_TR(0x442c53);
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
B442c55:{NFSU2_TR(0x442c55);
if(r1(R+518)){{goto L442c73;}}
}
B442c57:L442c57:{c.instructions+=3;NFSU2_TR(0x442c57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442c58:{NFSU2_TR(0x442c58);
w4(R+4,u32(0x827b88ull));
}
B442c5d:{NFSU2_TR(0x442c5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442c62ull));
TAIL_STATIC(0x432490u,432);
}
B442c62:L442c62:{c.instructions+=2;NFSU2_TR(0x442c62);
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
B442c64:{NFSU2_TR(0x442c64);
if(r1(R+518)){{goto L442c73;}}
}
B442c66:L442c66:{c.instructions+=7;NFSU2_TR(0x442c66);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442c69:{NFSU2_TR(0x442c69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B442c6a:{NFSU2_TR(0x442c6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442c6b:{NFSU2_TR(0x442c6b);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B442c6e:{NFSU2_TR(0x442c6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B442c6f:{NFSU2_TR(0x442c6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B442c70:{NFSU2_TR(0x442c70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442c73:L442c73:{c.instructions+=1;NFSU2_TR(0x442c73);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442c77:L442c77:{c.instructions+=5;NFSU2_TR(0x442c77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B442c78:{NFSU2_TR(0x442c78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442c79:{NFSU2_TR(0x442c79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B442c7a:{NFSU2_TR(0x442c7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B442c7b:{NFSU2_TR(0x442c7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442c80:L442c80:{c.instructions+=4;NFSU2_TR(0x442c80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442c81:{NFSU2_TR(0x442c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B442c87:{NFSU2_TR(0x442c87);
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
B442c89:{NFSU2_TR(0x442c89);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L442c95;}}
}
B442c8b:L442c8b:{c.instructions+=3;NFSU2_TR(0x442c8b);
{u32 ea_=u32(r4(R+4)+u32(7268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442c91:{NFSU2_TR(0x442c91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B442c92:{NFSU2_TR(0x442c92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442c95:L442c95:{c.instructions+=5;NFSU2_TR(0x442c95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442c96:{NFSU2_TR(0x442c96);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442c98:{NFSU2_TR(0x442c98);
w4(R+4,u32(0x827b88ull));
}
B442c9d:{NFSU2_TR(0x442c9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B442ca5:{NFSU2_TR(0x442ca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442caaull));
TAIL_STATIC(0x4324d0u,432);
}
B442caa:L442caa:{c.instructions+=2;NFSU2_TR(0x442caa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442cac:{NFSU2_TR(0x442cac);
if(r1(R+518)){{goto L442cc8;}}
}
B442cae:L442cae:{c.instructions+=3;NFSU2_TR(0x442cae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442caf:{NFSU2_TR(0x442caf);
w4(R+4,u32(0x827b88ull));
}
B442cb4:{NFSU2_TR(0x442cb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442cb9ull));
TAIL_STATIC(0x432490u,432);
}
B442cb9:L442cb9:{c.instructions+=2;NFSU2_TR(0x442cb9);
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
B442cbb:{NFSU2_TR(0x442cbb);
if(r1(R+518)){{goto L442cf2;}}
}
B442cbd:L442cbd:{c.instructions+=5;NFSU2_TR(0x442cbd);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442cc0:{NFSU2_TR(0x442cc0);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B442cc3:{NFSU2_TR(0x442cc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442cc4:{NFSU2_TR(0x442cc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B442cc5:{NFSU2_TR(0x442cc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442cc8:L442cc8:{c.instructions+=3;NFSU2_TR(0x442cc8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B442ccc:{NFSU2_TR(0x442ccc);
__builtin_memmove((R+4),(R+24),4);
}
B442cce:{NFSU2_TR(0x442cce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442cd3ull));
TAIL_STATIC(0x5ec0a0u,5ec);
}
B442cd3:L442cd3:{c.instructions+=2;NFSU2_TR(0x442cd3);
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
B442cd5:{NFSU2_TR(0x442cd5);
if(r1(R+518)){{goto L442cf2;}}
}
B442cd7:L442cd7:{c.instructions+=8;NFSU2_TR(0x442cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B442cdd:{NFSU2_TR(0x442cdd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B442ce1:{NFSU2_TR(0x442ce1);
__builtin_memmove((R+8),(R+4),4);
}
B442ce3:{NFSU2_TR(0x442ce3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442ce4:{NFSU2_TR(0x442ce4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B442ce7:{NFSU2_TR(0x442ce7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B442ceb:{NFSU2_TR(0x442ceb);
__builtin_memmove((R+4),(R+0),4);
}
B442ced:{NFSU2_TR(0x442ced);
TAIL_STATIC(0x5d4540u,5d4);
}
B442cf2:L442cf2:{c.instructions+=4;NFSU2_TR(0x442cf2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442cf6:{NFSU2_TR(0x442cf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442cf7:{NFSU2_TR(0x442cf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B442cf8:{NFSU2_TR(0x442cf8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442d00:L442d00:{c.instructions+=5;NFSU2_TR(0x442d00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442d01:{NFSU2_TR(0x442d01);
__builtin_memmove((R+24),(R+4),4);
}
B442d03:{NFSU2_TR(0x442d03);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B442d07:{NFSU2_TR(0x442d07);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442d09:{NFSU2_TR(0x442d09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L442d42;}}
}
B442d0b:L442d0b:{c.instructions+=8;NFSU2_TR(0x442d0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B442d0f:{NFSU2_TR(0x442d0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B442d15:{NFSU2_TR(0x442d15);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442d17:{NFSU2_TR(0x442d17);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B442d1a:{NFSU2_TR(0x442d1a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B442d1b:{NFSU2_TR(0x442d1b);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B442d1d:{NFSU2_TR(0x442d1d);
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
B442d1f:{NFSU2_TR(0x442d1f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L442d25;}}
}
B442d21:L442d21:{c.instructions+=2;NFSU2_TR(0x442d21);
__builtin_memmove((R+8),(R+0),4);
}
B442d23:{NFSU2_TR(0x442d23);
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
B442d25:L442d25:{c.instructions+=1;NFSU2_TR(0x442d25);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L442d38;}}
}
B442d27:L442d27:{c.instructions+=4;NFSU2_TR(0x442d27);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x88ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B442d2d:{NFSU2_TR(0x442d2d);
{u32 ea_=u32(r4(R+24)+r4(R+8)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442d34:{NFSU2_TR(0x442d34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442d35:{NFSU2_TR(0x442d35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442d38:L442d38:{c.instructions+=3;NFSU2_TR(0x442d38);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442d3e:{NFSU2_TR(0x442d3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442d3f:{NFSU2_TR(0x442d3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442d42:L442d42:{c.instructions+=3;NFSU2_TR(0x442d42);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B442d46:{NFSU2_TR(0x442d46);
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
B442d48:{NFSU2_TR(0x442d48);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L442d54;}}
}
B442d4a:L442d4a:{c.instructions+=3;NFSU2_TR(0x442d4a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442d50:{NFSU2_TR(0x442d50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442d51:{NFSU2_TR(0x442d51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442d54:L442d54:{c.instructions+=3;NFSU2_TR(0x442d54);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B442d58:{NFSU2_TR(0x442d58);
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
B442d5a:{NFSU2_TR(0x442d5a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x442d38u);}goto L442d38;}}
}
B442d5c:L442d5c:{c.instructions+=4;NFSU2_TR(0x442d5c);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x88ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B442d62:{NFSU2_TR(0x442d62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442d63:{NFSU2_TR(0x442d63);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442d67:{NFSU2_TR(0x442d67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442d70:L442d70:{c.instructions+=9;NFSU2_TR(0x442d70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442d71:{NFSU2_TR(0x442d71);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B442d75:{NFSU2_TR(0x442d75);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442d77:{NFSU2_TR(0x442d77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442d78:{NFSU2_TR(0x442d78);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442d79:{NFSU2_TR(0x442d79);
__builtin_memmove((R+28),(R+4),4);
}
B442d7b:{NFSU2_TR(0x442d7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B442d7f:{NFSU2_TR(0x442d7f);
w4(R+0,u32(0x78787879ull));
}
B442d84:{NFSU2_TR(0x442d84);
if(r1(R+518)){{goto L442d99;}}
}
B442d86:L442d86:{c.instructions+=8;NFSU2_TR(0x442d86);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B442d88:{NFSU2_TR(0x442d88);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
}
B442d8b:{NFSU2_TR(0x442d8b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B442d8d:{NFSU2_TR(0x442d8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B442d90:{NFSU2_TR(0x442d90);
__builtin_memmove((R+0),(R+8),4);
}
B442d92:{NFSU2_TR(0x442d92);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B442d95:{NFSU2_TR(0x442d95);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B442d97:{NFSU2_TR(0x442d97);
{goto L442dad;}
}
B442d99:L442d99:{c.instructions+=7;NFSU2_TR(0x442d99);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B442d9b:{NFSU2_TR(0x442d9b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x19cull))));
}
B442da1:{NFSU2_TR(0x442da1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B442da3:{NFSU2_TR(0x442da3);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B442da6:{NFSU2_TR(0x442da6);
__builtin_memmove((R+4),(R+8),4);
}
B442da8:{NFSU2_TR(0x442da8);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B442dab:{NFSU2_TR(0x442dab);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B442dad:L442dad:{c.instructions+=6;NFSU2_TR(0x442dad);
__builtin_memmove((R+24),(R+8),4);
}
B442daf:{NFSU2_TR(0x442daf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442db0:{NFSU2_TR(0x442db0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B442db3:{NFSU2_TR(0x442db3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442db4:{NFSU2_TR(0x442db4);
__builtin_memmove((R+4),(R+28),4);
}
B442db6:{NFSU2_TR(0x442db6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442dbbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x442d00u);}goto L442d00;}
}
B442dbb:L442dbb:{c.instructions+=5;NFSU2_TR(0x442dbb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B442dbf:{NFSU2_TR(0x442dbf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442dc0:{NFSU2_TR(0x442dc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442dc1:{NFSU2_TR(0x442dc1);
__builtin_memmove((R+4),(R+28),4);
}
B442dc3:{NFSU2_TR(0x442dc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442dc8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x442d00u);}goto L442d00;}
}
B442dc8:L442dc8:{c.instructions+=5;NFSU2_TR(0x442dc8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B442dcc:{NFSU2_TR(0x442dcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B442dcd:{NFSU2_TR(0x442dcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442dce:{NFSU2_TR(0x442dce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B442dcf:{NFSU2_TR(0x442dcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442de0:L442de0:{c.instructions+=5;NFSU2_TR(0x442de0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B442de4:{NFSU2_TR(0x442de4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442de5:{NFSU2_TR(0x442de5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442de6:{NFSU2_TR(0x442de6);
__builtin_memmove((R+24),(R+4),4);
}
B442de8:{NFSU2_TR(0x442de8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442dedull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x442b70u);}goto L442b70;}
}
B442ded:L442ded:{c.instructions+=5;NFSU2_TR(0x442ded);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B442df3:{NFSU2_TR(0x442df3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B442df7:{NFSU2_TR(0x442df7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B442df9:{NFSU2_TR(0x442df9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B442dfc:{NFSU2_TR(0x442dfc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L442e56;}}
}
B442dfe:L442dfe:{c.instructions+=6;NFSU2_TR(0x442dfe);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B442e00:{NFSU2_TR(0x442e00);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442e06:{NFSU2_TR(0x442e06);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B442e08:{NFSU2_TR(0x442e08);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B442e0a:{NFSU2_TR(0x442e0a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B442e0d:{NFSU2_TR(0x442e0d);
if(r1(R+514)){{goto L442e17;}}
}
B442e0f:L442e0f:{c.instructions+=2;NFSU2_TR(0x442e0f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B442e11:{NFSU2_TR(0x442e11);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442e17:L442e17:{c.instructions+=6;NFSU2_TR(0x442e17);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B442e19:{NFSU2_TR(0x442e19);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B442e1b:{NFSU2_TR(0x442e1b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B442e1d:{NFSU2_TR(0x442e1d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B442e1f:{NFSU2_TR(0x442e1f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B442e22:{NFSU2_TR(0x442e22);
if(r1(R+514)){{goto L442ed8;}}
}
B442e28:L442e28:{c.instructions+=4;NFSU2_TR(0x442e28);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B442e2c:{NFSU2_TR(0x442e2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442e2d:{NFSU2_TR(0x442e2d);
__builtin_memmove((R+4),(R+24),4);
}
B442e2f:{NFSU2_TR(0x442e2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x442e34ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x442ae0u);}goto L442ae0;}
}
B442e34:L442e34:{c.instructions+=3;NFSU2_TR(0x442e34);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B442e38:{NFSU2_TR(0x442e38);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442e3a:{NFSU2_TR(0x442e3a);
if(r1(R+518)){{goto L442e42;}}
}
B442e3c:L442e3c:{c.instructions+=2;NFSU2_TR(0x442e3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B442e40:{NFSU2_TR(0x442e40);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B442e42:L442e42:{c.instructions+=3;NFSU2_TR(0x442e42);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B442e46:{NFSU2_TR(0x442e46);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442e48:{NFSU2_TR(0x442e48);
if(r1(R+518)){{goto L442e7c;}}
}
B442e4a:L442e4a:{c.instructions+=2;NFSU2_TR(0x442e4a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B442e4c:{NFSU2_TR(0x442e4c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L442e5e;}}
}
B442e4e:L442e4e:{c.instructions+=2;NFSU2_TR(0x442e4e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442e54:{NFSU2_TR(0x442e54);
{goto L442e7a;}
}
B442e56:L442e56:{c.instructions+=2;NFSU2_TR(0x442e56);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442e5c:{NFSU2_TR(0x442e5c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x442e17u);}goto L442e17;}
}
B442e5e:L442e5e:{c.instructions+=3;NFSU2_TR(0x442e5e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B442e62:{NFSU2_TR(0x442e62);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B442e64:{NFSU2_TR(0x442e64);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L442e6e;}}
}
B442e66:L442e66:{c.instructions+=2;NFSU2_TR(0x442e66);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442e6c:{NFSU2_TR(0x442e6c);
{goto L442e7a;}
}
B442e6e:L442e6e:{c.instructions+=3;NFSU2_TR(0x442e6e);
__builtin_memmove((R+8),(R+0),4);
}
B442e70:{NFSU2_TR(0x442e70);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B442e76:{NFSU2_TR(0x442e76);
{u32 ea_=u32(r4(R+24)+r4(R+8)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442e7a:L442e7a:{c.instructions+=1;NFSU2_TR(0x442e7a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B442e7c:L442e7c:{c.instructions+=3;NFSU2_TR(0x442e7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B442e80:{NFSU2_TR(0x442e80);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442e82:{NFSU2_TR(0x442e82);
if(r1(R+518)){{goto L442eb1;}}
}
B442e84:L442e84:{c.instructions+=3;NFSU2_TR(0x442e84);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B442e87:{NFSU2_TR(0x442e87);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B442e89:{NFSU2_TR(0x442e89);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L442e93;}}
}
B442e8b:L442e8b:{c.instructions+=2;NFSU2_TR(0x442e8b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442e91:{NFSU2_TR(0x442e91);
{goto L442eaf;}
}
B442e93:L442e93:{c.instructions+=5;NFSU2_TR(0x442e93);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442e94:{NFSU2_TR(0x442e94);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B442e98:{NFSU2_TR(0x442e98);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B442e9a:{NFSU2_TR(0x442e9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B442e9b:{NFSU2_TR(0x442e9b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L442ea5;}}
}
B442e9d:L442e9d:{c.instructions+=2;NFSU2_TR(0x442e9d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442ea3:{NFSU2_TR(0x442ea3);
{goto L442eaf;}
}
B442ea5:L442ea5:{c.instructions+=2;NFSU2_TR(0x442ea5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B442eab:{NFSU2_TR(0x442eab);
{u32 ea_=u32(r4(R+24)+r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442eaf:L442eaf:{c.instructions+=1;NFSU2_TR(0x442eaf);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B442eb1:L442eb1:{c.instructions+=9;NFSU2_TR(0x442eb1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B442eb5:{NFSU2_TR(0x442eb5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B442eb7:{NFSU2_TR(0x442eb7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B442eb8:{NFSU2_TR(0x442eb8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442eba:{NFSU2_TR(0x442eba);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B442ebd:{NFSU2_TR(0x442ebd);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B442ebe:{NFSU2_TR(0x442ebe);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B442ec0:{NFSU2_TR(0x442ec0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B442ec2:{NFSU2_TR(0x442ec2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L442ec6;}}
}
B442ec4:L442ec4:{c.instructions+=1;NFSU2_TR(0x442ec4);
__builtin_memmove((R+4),(R+8),4);
}
B442ec6:L442ec6:{c.instructions+=2;NFSU2_TR(0x442ec6);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w4(U+10,u32(u32(r4(R+0))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B442ec8:{NFSU2_TR(0x442ec8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L442ed8;}}
}
B442eca:L442eca:{c.instructions+=4;NFSU2_TR(0x442eca);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x88ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B442ed0:{NFSU2_TR(0x442ed0);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B442ed4:{NFSU2_TR(0x442ed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442ed5:{NFSU2_TR(0x442ed5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442ed8:L442ed8:{c.instructions+=3;NFSU2_TR(0x442ed8);
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
B442eda:{NFSU2_TR(0x442eda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442edb:{NFSU2_TR(0x442edb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442ee0:L442ee0:{c.instructions+=7;NFSU2_TR(0x442ee0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442ee1:{NFSU2_TR(0x442ee1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B442ee5:{NFSU2_TR(0x442ee5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442ee7:{NFSU2_TR(0x442ee7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442ee8:{NFSU2_TR(0x442ee8);
__builtin_memmove((R+28),(R+4),4);
}
B442eea:{NFSU2_TR(0x442eea);
w4(R+0,u32(0x78787879ull));
}
B442eef:{NFSU2_TR(0x442eef);
if(r1(R+518)){{goto L442f3f;}}
}
B442ef1:L442ef1:{c.instructions+=23;NFSU2_TR(0x442ef1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B442ef5:{NFSU2_TR(0x442ef5);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B442ef7:{NFSU2_TR(0x442ef7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
}
B442efa:{NFSU2_TR(0x442efa);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B442efc:{NFSU2_TR(0x442efc);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B442eff:{NFSU2_TR(0x442eff);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B442f01:{NFSU2_TR(0x442f01);
__builtin_memmove((R+0),(R+8),4);
}
B442f03:{NFSU2_TR(0x442f03);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B442f06:{NFSU2_TR(0x442f06);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B442f08:{NFSU2_TR(0x442f08);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B442f0c:{NFSU2_TR(0x442f0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442f0e:{NFSU2_TR(0x442f0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B442f12:{NFSU2_TR(0x442f12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B442f15:{NFSU2_TR(0x442f15);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B442f19:{NFSU2_TR(0x442f19);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B442f1b:{NFSU2_TR(0x442f1b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B442f1d:{NFSU2_TR(0x442f1d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B442f1e:{NFSU2_TR(0x442f1e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442f20:{NFSU2_TR(0x442f20);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B442f23:{NFSU2_TR(0x442f23);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B442f24:{NFSU2_TR(0x442f24);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B442f26:{NFSU2_TR(0x442f26);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B442f28:{NFSU2_TR(0x442f28);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L442f2c;}}
}
B442f2a:L442f2a:{c.instructions+=1;NFSU2_TR(0x442f2a);
__builtin_memmove((R+0),(R+4),4);
}
B442f2c:L442f2c:{c.instructions+=2;NFSU2_TR(0x442f2c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B442f2e:{NFSU2_TR(0x442f2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L442f97;}}
}
B442f30:L442f30:{c.instructions+=5;NFSU2_TR(0x442f30);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x88ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B442f36:{NFSU2_TR(0x442f36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B442f37:{NFSU2_TR(0x442f37);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B442f3b:{NFSU2_TR(0x442f3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442f3c:{NFSU2_TR(0x442f3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442f3f:L442f3f:{c.instructions+=24;NFSU2_TR(0x442f3f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B442f43:{NFSU2_TR(0x442f43);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B442f45:{NFSU2_TR(0x442f45);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x19cull))));
}
B442f4b:{NFSU2_TR(0x442f4b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B442f4d:{NFSU2_TR(0x442f4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B442f50:{NFSU2_TR(0x442f50);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B442f52:{NFSU2_TR(0x442f52);
__builtin_memmove((R+0),(R+8),4);
}
B442f54:{NFSU2_TR(0x442f54);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B442f57:{NFSU2_TR(0x442f57);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B442f59:{NFSU2_TR(0x442f59);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B442f5d:{NFSU2_TR(0x442f5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442f5f:{NFSU2_TR(0x442f5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B442f65:{NFSU2_TR(0x442f65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B442f68:{NFSU2_TR(0x442f68);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B442f6c:{NFSU2_TR(0x442f6c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B442f6e:{NFSU2_TR(0x442f6e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B442f70:{NFSU2_TR(0x442f70);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B442f71:{NFSU2_TR(0x442f71);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B442f73:{NFSU2_TR(0x442f73);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B442f76:{NFSU2_TR(0x442f76);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B442f77:{NFSU2_TR(0x442f77);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B442f79:{NFSU2_TR(0x442f79);
__builtin_memmove((R+24),(R+4),4);
}
B442f7b:{NFSU2_TR(0x442f7b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B442f7d:{NFSU2_TR(0x442f7d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L442f81;}}
}
B442f7f:L442f7f:{c.instructions+=1;NFSU2_TR(0x442f7f);
__builtin_memmove((R+0),(R+24),4);
}
B442f81:L442f81:{c.instructions+=2;NFSU2_TR(0x442f81);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B442f83:{NFSU2_TR(0x442f83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L442f97;}}
}
B442f85:L442f85:{c.instructions+=5;NFSU2_TR(0x442f85);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x88ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B442f8b:{NFSU2_TR(0x442f8b);
u8 U[12];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B442f92:{NFSU2_TR(0x442f92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B442f93:{NFSU2_TR(0x442f93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442f94:{NFSU2_TR(0x442f94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442f97:L442f97:{c.instructions+=4;NFSU2_TR(0x442f97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B442f98:{NFSU2_TR(0x442f98);
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
B442f9a:{NFSU2_TR(0x442f9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442f9b:{NFSU2_TR(0x442f9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442fa0:L442fa0:{c.instructions+=8;NFSU2_TR(0x442fa0);
__builtin_memmove((R+0),(R+4),4);
}
B442fa2:{NFSU2_TR(0x442fa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B442fa6:{NFSU2_TR(0x442fa6);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x88ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B442fac:{NFSU2_TR(0x442fac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442fad:{NFSU2_TR(0x442fad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442fae:{NFSU2_TR(0x442fae);
u8 U[12];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B442fb5:{NFSU2_TR(0x442fb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((R+28),(U+0),4);
}
B442fbb:{NFSU2_TR(0x442fbb);
w4(R+4,u32(0x22ull));
}
B442fc0:L442fc0:{c.instructions+=1;NFSU2_TR(0x442fc0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L442fc2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x442fc0u);}goto L442fc0;}
}
B442fc2:L442fc2:{c.instructions+=4;NFSU2_TR(0x442fc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B442fc3:{NFSU2_TR(0x442fc3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B442fca:{NFSU2_TR(0x442fca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442fcb:{NFSU2_TR(0x442fcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B442fd0:L442fd0:{c.instructions+=3;NFSU2_TR(0x442fd0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B442fd6:{NFSU2_TR(0x442fd6);
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
B442fd8:{NFSU2_TR(0x442fd8);
if(r1(R+518)){TAIL_STATIC(0x44300au,443);}
}
B442fda:L442fda:{c.instructions+=9;NFSU2_TR(0x442fda);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B442fde:{NFSU2_TR(0x442fde);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B442fe4:{NFSU2_TR(0x442fe4);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B442feb:{NFSU2_TR(0x442feb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442fec:{NFSU2_TR(0x442fec);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B442fee:{NFSU2_TR(0x442fee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B442fef:{NFSU2_TR(0x442fef);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((R+24),(U+0),4);
}
B442ff5:{NFSU2_TR(0x442ff5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19cull))));
__builtin_memmove((R+28),(U+0),4);
}
B442ffb:{NFSU2_TR(0x442ffb);
w4(R+4,u32(0x22ull));
TAIL_STATIC(0x443000u,443);
}
XIT:NFSU2_TR_EXIT(0x442,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
