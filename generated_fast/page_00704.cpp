#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_702(u8* __restrict R,Cpu& c);
u32 body_703(u8* __restrict R,Cpu& c);
u32 body_705(u8* __restrict R,Cpu& c);
u32 body_70c(u8* __restrict R,Cpu& c);
u32 body_70d(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x704,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x704,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_704(u8* __restrict R,Cpu& c);
u32 page_704(Cpu& c){return body_704(c.regs.data(),c);}
__attribute__((noinline)) u32 body_704(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x704000:goto L704000;
case 0x704003:c.instructions+=2;goto B704003;
case 0x704004:c.instructions+=1;goto B704004;
case 0x704006:goto L704006;
case 0x704007:c.instructions+=2;goto B704007;
case 0x704008:c.instructions+=1;goto B704008;
case 0x704009:goto L704009;
case 0x70400a:c.instructions+=8;goto B70400a;
case 0x70400c:c.instructions+=7;goto B70400c;
case 0x70400f:c.instructions+=6;goto B70400f;
case 0x704012:c.instructions+=5;goto B704012;
case 0x704013:c.instructions+=4;goto B704013;
case 0x704015:c.instructions+=3;goto B704015;
case 0x704018:c.instructions+=2;goto B704018;
case 0x70401b:c.instructions+=1;goto B70401b;
case 0x70401c:goto L70401c;
case 0x70401f:c.instructions+=27;goto B70401f;
case 0x704022:c.instructions+=26;goto B704022;
case 0x704025:c.instructions+=25;goto B704025;
case 0x704028:c.instructions+=24;goto B704028;
case 0x70402a:c.instructions+=23;goto B70402a;
case 0x70402c:c.instructions+=22;goto B70402c;
case 0x70402f:c.instructions+=21;goto B70402f;
case 0x704032:c.instructions+=20;goto B704032;
case 0x704035:c.instructions+=19;goto B704035;
case 0x704038:c.instructions+=18;goto B704038;
case 0x70403b:c.instructions+=17;goto B70403b;
case 0x70403e:c.instructions+=16;goto B70403e;
case 0x704041:c.instructions+=15;goto B704041;
case 0x704044:c.instructions+=14;goto B704044;
case 0x704047:c.instructions+=13;goto B704047;
case 0x70404a:c.instructions+=12;goto B70404a;
case 0x70404d:c.instructions+=11;goto B70404d;
case 0x704050:c.instructions+=10;goto B704050;
case 0x704053:c.instructions+=9;goto B704053;
case 0x704056:c.instructions+=8;goto B704056;
case 0x704059:c.instructions+=7;goto B704059;
case 0x70405c:c.instructions+=6;goto B70405c;
case 0x70405f:c.instructions+=5;goto B70405f;
case 0x704062:c.instructions+=4;goto B704062;
case 0x704065:c.instructions+=3;goto B704065;
case 0x704068:c.instructions+=2;goto B704068;
case 0x704069:c.instructions+=1;goto B704069;
case 0x70406b:goto L70406b;
case 0x70406c:c.instructions+=2;goto B70406c;
case 0x70406d:c.instructions+=1;goto B70406d;
case 0x70406e:goto L70406e;
case 0x704073:goto L704073;
case 0x704078:goto L704078;
case 0x704079:c.instructions+=4;goto B704079;
case 0x70407b:c.instructions+=3;goto B70407b;
case 0x70407e:c.instructions+=2;goto B70407e;
case 0x704080:c.instructions+=1;goto B704080;
case 0x704086:goto L704086;
case 0x704087:c.instructions+=4;goto B704087;
case 0x704088:c.instructions+=3;goto B704088;
case 0x70408b:c.instructions+=2;goto B70408b;
case 0x70408c:c.instructions+=1;goto B70408c;
case 0x70408f:goto L70408f;
case 0x704091:c.instructions+=2;goto B704091;
case 0x704094:c.instructions+=1;goto B704094;
case 0x704096:goto L704096;
case 0x704099:c.instructions+=4;goto B704099;
case 0x70409c:c.instructions+=3;goto B70409c;
case 0x70409e:c.instructions+=2;goto B70409e;
case 0x7040a0:c.instructions+=1;goto B7040a0;
case 0x7040a2:goto L7040a2;
case 0x7040a5:c.instructions+=14;goto B7040a5;
case 0x7040a9:c.instructions+=13;goto B7040a9;
case 0x7040ac:c.instructions+=12;goto B7040ac;
case 0x7040b0:c.instructions+=11;goto B7040b0;
case 0x7040b3:c.instructions+=10;goto B7040b3;
case 0x7040b7:c.instructions+=9;goto B7040b7;
case 0x7040b9:c.instructions+=8;goto B7040b9;
case 0x7040bc:c.instructions+=7;goto B7040bc;
case 0x7040c0:c.instructions+=6;goto B7040c0;
case 0x7040c2:c.instructions+=5;goto B7040c2;
case 0x7040c5:c.instructions+=4;goto B7040c5;
case 0x7040c8:c.instructions+=3;goto B7040c8;
case 0x7040cc:c.instructions+=2;goto B7040cc;
case 0x7040cf:c.instructions+=1;goto B7040cf;
case 0x7040d1:goto L7040d1;
case 0x7040d3:c.instructions+=1;goto B7040d3;
case 0x7040d5:goto L7040d5;
case 0x7040da:c.instructions+=2;goto B7040da;
case 0x7040dc:c.instructions+=1;goto B7040dc;
case 0x7040de:goto L7040de;
case 0x7040e0:goto L7040e0;
case 0x7040e3:c.instructions+=7;goto B7040e3;
case 0x7040e6:c.instructions+=6;goto B7040e6;
case 0x7040e7:c.instructions+=5;goto B7040e7;
case 0x7040e8:c.instructions+=4;goto B7040e8;
case 0x7040ec:c.instructions+=3;goto B7040ec;
case 0x7040ed:c.instructions+=2;goto B7040ed;
case 0x7040f0:c.instructions+=1;goto B7040f0;
case 0x7040f2:goto L7040f2;
case 0x7040f5:c.instructions+=7;goto B7040f5;
case 0x7040f8:c.instructions+=6;goto B7040f8;
case 0x7040fb:c.instructions+=5;goto B7040fb;
case 0x7040fe:c.instructions+=4;goto B7040fe;
case 0x704100:c.instructions+=3;goto B704100;
case 0x704103:c.instructions+=2;goto B704103;
case 0x704106:c.instructions+=1;goto B704106;
case 0x704108:goto L704108;
case 0x704109:c.instructions+=2;goto B704109;
case 0x70410a:c.instructions+=1;goto B70410a;
case 0x70410b:goto L70410b;
case 0x70410c:c.instructions+=1;goto B70410c;
case 0x70410d:goto L70410d;
case 0x70410e:c.instructions+=4;goto B70410e;
case 0x704110:c.instructions+=3;goto B704110;
case 0x704113:c.instructions+=2;goto B704113;
case 0x704115:c.instructions+=1;goto B704115;
case 0x70411b:goto L70411b;
case 0x70411c:c.instructions+=4;goto B70411c;
case 0x70411d:c.instructions+=3;goto B70411d;
case 0x704120:c.instructions+=2;goto B704120;
case 0x704121:c.instructions+=1;goto B704121;
case 0x704124:goto L704124;
case 0x704126:c.instructions+=2;goto B704126;
case 0x704129:c.instructions+=1;goto B704129;
case 0x70412b:goto L70412b;
case 0x70412e:c.instructions+=4;goto B70412e;
case 0x704131:c.instructions+=3;goto B704131;
case 0x704133:c.instructions+=2;goto B704133;
case 0x704135:c.instructions+=1;goto B704135;
case 0x704137:goto L704137;
case 0x70413a:c.instructions+=14;goto B70413a;
case 0x70413e:c.instructions+=13;goto B70413e;
case 0x704141:c.instructions+=12;goto B704141;
case 0x704145:c.instructions+=11;goto B704145;
case 0x704148:c.instructions+=10;goto B704148;
case 0x70414c:c.instructions+=9;goto B70414c;
case 0x70414e:c.instructions+=8;goto B70414e;
case 0x704151:c.instructions+=7;goto B704151;
case 0x704155:c.instructions+=6;goto B704155;
case 0x704157:c.instructions+=5;goto B704157;
case 0x70415a:c.instructions+=4;goto B70415a;
case 0x70415d:c.instructions+=3;goto B70415d;
case 0x704161:c.instructions+=2;goto B704161;
case 0x704164:c.instructions+=1;goto B704164;
case 0x704166:goto L704166;
case 0x704168:c.instructions+=1;goto B704168;
case 0x70416a:goto L70416a;
case 0x70416f:c.instructions+=2;goto B70416f;
case 0x704171:c.instructions+=1;goto B704171;
case 0x704173:goto L704173;
case 0x704175:goto L704175;
case 0x704178:c.instructions+=7;goto B704178;
case 0x70417b:c.instructions+=6;goto B70417b;
case 0x70417c:c.instructions+=5;goto B70417c;
case 0x70417d:c.instructions+=4;goto B70417d;
case 0x704180:c.instructions+=3;goto B704180;
case 0x704181:c.instructions+=2;goto B704181;
case 0x704184:c.instructions+=1;goto B704184;
case 0x704186:goto L704186;
case 0x704189:c.instructions+=7;goto B704189;
case 0x70418c:c.instructions+=6;goto B70418c;
case 0x70418f:c.instructions+=5;goto B70418f;
case 0x704192:c.instructions+=4;goto B704192;
case 0x704195:c.instructions+=3;goto B704195;
case 0x704198:c.instructions+=2;goto B704198;
case 0x70419b:c.instructions+=1;goto B70419b;
case 0x70419d:goto L70419d;
case 0x70419e:c.instructions+=2;goto B70419e;
case 0x70419f:c.instructions+=1;goto B70419f;
case 0x7041a0:goto L7041a0;
case 0x7041a1:c.instructions+=1;goto B7041a1;
case 0x7041a2:goto L7041a2;
case 0x7041a3:c.instructions+=5;goto B7041a3;
case 0x7041a5:c.instructions+=4;goto B7041a5;
case 0x7041a6:c.instructions+=3;goto B7041a6;
case 0x7041a9:c.instructions+=2;goto B7041a9;
case 0x7041ab:c.instructions+=1;goto B7041ab;
case 0x7041b1:goto L7041b1;
case 0x7041b4:c.instructions+=9;goto B7041b4;
case 0x7041b7:c.instructions+=8;goto B7041b7;
case 0x7041b8:c.instructions+=7;goto B7041b8;
case 0x7041b9:c.instructions+=6;goto B7041b9;
case 0x7041bc:c.instructions+=5;goto B7041bc;
case 0x7041bf:c.instructions+=4;goto B7041bf;
case 0x7041c2:c.instructions+=3;goto B7041c2;
case 0x7041c5:c.instructions+=2;goto B7041c5;
case 0x7041c6:c.instructions+=1;goto B7041c6;
case 0x7041c9:goto L7041c9;
case 0x7041cb:c.instructions+=2;goto B7041cb;
case 0x7041ce:c.instructions+=1;goto B7041ce;
case 0x7041d0:goto L7041d0;
case 0x7041d3:c.instructions+=3;goto B7041d3;
case 0x7041d6:c.instructions+=2;goto B7041d6;
case 0x7041d8:c.instructions+=1;goto B7041d8;
case 0x7041da:goto L7041da;
case 0x7041dd:c.instructions+=13;goto B7041dd;
case 0x7041e0:c.instructions+=12;goto B7041e0;
case 0x7041e3:c.instructions+=11;goto B7041e3;
case 0x7041e7:c.instructions+=10;goto B7041e7;
case 0x7041eb:c.instructions+=9;goto B7041eb;
case 0x7041ed:c.instructions+=8;goto B7041ed;
case 0x7041ef:c.instructions+=7;goto B7041ef;
case 0x7041f3:c.instructions+=6;goto B7041f3;
case 0x7041f5:c.instructions+=5;goto B7041f5;
case 0x7041f7:c.instructions+=4;goto B7041f7;
case 0x7041fa:c.instructions+=3;goto B7041fa;
case 0x7041fe:c.instructions+=2;goto B7041fe;
case 0x704201:c.instructions+=1;goto B704201;
case 0x704203:goto L704203;
case 0x704205:c.instructions+=1;goto B704205;
case 0x704207:goto L704207;
case 0x70420c:c.instructions+=2;goto B70420c;
case 0x70420e:c.instructions+=1;goto B70420e;
case 0x704210:goto L704210;
case 0x704212:goto L704212;
case 0x704215:c.instructions+=6;goto B704215;
case 0x704218:c.instructions+=5;goto B704218;
case 0x70421b:c.instructions+=4;goto B70421b;
case 0x70421f:c.instructions+=3;goto B70421f;
case 0x704220:c.instructions+=2;goto B704220;
case 0x704223:c.instructions+=1;goto B704223;
case 0x704225:goto L704225;
case 0x704228:goto L704228;
case 0x70422b:c.instructions+=5;goto B70422b;
case 0x70422d:c.instructions+=4;goto B70422d;
case 0x704230:c.instructions+=3;goto B704230;
case 0x704232:c.instructions+=2;goto B704232;
case 0x704235:c.instructions+=1;goto B704235;
case 0x704237:goto L704237;
case 0x704238:c.instructions+=2;goto B704238;
case 0x704239:c.instructions+=1;goto B704239;
case 0x70423a:goto L70423a;
case 0x70423b:c.instructions+=1;goto B70423b;
case 0x70423c:goto L70423c;
case 0x70423d:c.instructions+=11;goto B70423d;
case 0x70423f:c.instructions+=10;goto B70423f;
case 0x704242:c.instructions+=9;goto B704242;
case 0x704245:c.instructions+=8;goto B704245;
case 0x704248:c.instructions+=7;goto B704248;
case 0x70424a:c.instructions+=6;goto B70424a;
case 0x70424c:c.instructions+=5;goto B70424c;
case 0x70424e:c.instructions+=4;goto B70424e;
case 0x704251:c.instructions+=3;goto B704251;
case 0x704256:c.instructions+=2;goto B704256;
case 0x704257:c.instructions+=1;goto B704257;
case 0x70425c:goto L70425c;
case 0x70425f:c.instructions+=7;goto B70425f;
case 0x704261:c.instructions+=6;goto B704261;
case 0x704263:c.instructions+=5;goto B704263;
case 0x704265:c.instructions+=4;goto B704265;
case 0x704267:c.instructions+=3;goto B704267;
case 0x70426a:c.instructions+=2;goto B70426a;
case 0x70426f:c.instructions+=1;goto B70426f;
case 0x704274:goto L704274;
case 0x704277:c.instructions+=2;goto B704277;
case 0x704278:c.instructions+=1;goto B704278;
case 0x704279:goto L704279;
case 0x70427a:c.instructions+=4;goto B70427a;
case 0x70427c:c.instructions+=3;goto B70427c;
case 0x70427f:c.instructions+=2;goto B70427f;
case 0x704281:c.instructions+=1;goto B704281;
case 0x704283:goto L704283;
case 0x704286:c.instructions+=6;goto B704286;
case 0x704287:c.instructions+=5;goto B704287;
case 0x704288:c.instructions+=4;goto B704288;
case 0x70428b:c.instructions+=3;goto B70428b;
case 0x70428e:c.instructions+=2;goto B70428e;
case 0x704291:c.instructions+=1;goto B704291;
case 0x704292:goto L704292;
case 0x704294:c.instructions+=2;goto B704294;
case 0x704296:c.instructions+=1;goto B704296;
case 0x704298:goto L704298;
case 0x70429b:c.instructions+=12;goto B70429b;
case 0x70429f:c.instructions+=11;goto B70429f;
case 0x7042a2:c.instructions+=10;goto B7042a2;
case 0x7042a6:c.instructions+=9;goto B7042a6;
case 0x7042a9:c.instructions+=8;goto B7042a9;
case 0x7042ad:c.instructions+=7;goto B7042ad;
case 0x7042b0:c.instructions+=6;goto B7042b0;
case 0x7042b3:c.instructions+=5;goto B7042b3;
case 0x7042b4:c.instructions+=4;goto B7042b4;
case 0x7042b8:c.instructions+=3;goto B7042b8;
case 0x7042b9:c.instructions+=2;goto B7042b9;
case 0x7042bb:c.instructions+=1;goto B7042bb;
case 0x7042bd:goto L7042bd;
case 0x7042c0:c.instructions+=6;goto B7042c0;
case 0x7042c2:c.instructions+=5;goto B7042c2;
case 0x7042c4:c.instructions+=4;goto B7042c4;
case 0x7042c7:c.instructions+=3;goto B7042c7;
case 0x7042ca:c.instructions+=2;goto B7042ca;
case 0x7042cd:c.instructions+=1;goto B7042cd;
case 0x7042cf:goto L7042cf;
case 0x7042d0:c.instructions+=2;goto B7042d0;
case 0x7042d1:c.instructions+=1;goto B7042d1;
case 0x7042d2:goto L7042d2;
case 0x7042d3:c.instructions+=1;goto B7042d3;
case 0x7042d4:goto L7042d4;
case 0x7042d5:c.instructions+=4;goto B7042d5;
case 0x7042d7:c.instructions+=3;goto B7042d7;
case 0x7042da:c.instructions+=2;goto B7042da;
case 0x7042dc:c.instructions+=1;goto B7042dc;
case 0x7042de:goto L7042de;
case 0x7042e1:c.instructions+=6;goto B7042e1;
case 0x7042e2:c.instructions+=5;goto B7042e2;
case 0x7042e3:c.instructions+=4;goto B7042e3;
case 0x7042e6:c.instructions+=3;goto B7042e6;
case 0x7042e9:c.instructions+=2;goto B7042e9;
case 0x7042ec:c.instructions+=1;goto B7042ec;
case 0x7042ed:goto L7042ed;
case 0x7042ef:c.instructions+=2;goto B7042ef;
case 0x7042f1:c.instructions+=1;goto B7042f1;
case 0x7042f3:goto L7042f3;
case 0x7042f6:c.instructions+=12;goto B7042f6;
case 0x7042fa:c.instructions+=11;goto B7042fa;
case 0x7042fd:c.instructions+=10;goto B7042fd;
case 0x704301:c.instructions+=9;goto B704301;
case 0x704304:c.instructions+=8;goto B704304;
case 0x704308:c.instructions+=7;goto B704308;
case 0x70430b:c.instructions+=6;goto B70430b;
case 0x70430e:c.instructions+=5;goto B70430e;
case 0x70430f:c.instructions+=4;goto B70430f;
case 0x704312:c.instructions+=3;goto B704312;
case 0x704313:c.instructions+=2;goto B704313;
case 0x704315:c.instructions+=1;goto B704315;
case 0x704317:goto L704317;
case 0x70431a:c.instructions+=7;goto B70431a;
case 0x70431c:c.instructions+=6;goto B70431c;
case 0x70431e:c.instructions+=5;goto B70431e;
case 0x704320:c.instructions+=4;goto B704320;
case 0x704323:c.instructions+=3;goto B704323;
case 0x704326:c.instructions+=2;goto B704326;
case 0x704329:c.instructions+=1;goto B704329;
case 0x70432b:goto L70432b;
case 0x70432c:c.instructions+=2;goto B70432c;
case 0x70432d:c.instructions+=1;goto B70432d;
case 0x70432e:goto L70432e;
case 0x70432f:c.instructions+=1;goto B70432f;
case 0x704330:goto L704330;
case 0x704331:c.instructions+=5;goto B704331;
case 0x704333:c.instructions+=4;goto B704333;
case 0x704334:c.instructions+=3;goto B704334;
case 0x704337:c.instructions+=2;goto B704337;
case 0x704339:c.instructions+=1;goto B704339;
case 0x70433b:goto L70433b;
case 0x70433e:c.instructions+=8;goto B70433e;
case 0x704341:c.instructions+=7;goto B704341;
case 0x704342:c.instructions+=6;goto B704342;
case 0x704343:c.instructions+=5;goto B704343;
case 0x704346:c.instructions+=4;goto B704346;
case 0x704349:c.instructions+=3;goto B704349;
case 0x70434c:c.instructions+=2;goto B70434c;
case 0x70434d:c.instructions+=1;goto B70434d;
case 0x704350:goto L704350;
case 0x704352:c.instructions+=2;goto B704352;
case 0x704355:c.instructions+=1;goto B704355;
case 0x704357:goto L704357;
case 0x70435a:c.instructions+=2;goto B70435a;
case 0x70435d:c.instructions+=1;goto B70435d;
case 0x704360:goto L704360;
case 0x704363:c.instructions+=12;goto B704363;
case 0x704366:c.instructions+=11;goto B704366;
case 0x70436a:c.instructions+=10;goto B70436a;
case 0x70436c:c.instructions+=9;goto B70436c;
case 0x70436f:c.instructions+=8;goto B70436f;
case 0x704373:c.instructions+=7;goto B704373;
case 0x704376:c.instructions+=6;goto B704376;
case 0x704379:c.instructions+=5;goto B704379;
case 0x70437c:c.instructions+=4;goto B70437c;
case 0x704380:c.instructions+=3;goto B704380;
case 0x704381:c.instructions+=2;goto B704381;
case 0x704384:c.instructions+=1;goto B704384;
case 0x704386:goto L704386;
case 0x704389:c.instructions+=5;goto B704389;
case 0x70438b:c.instructions+=4;goto B70438b;
case 0x70438e:c.instructions+=3;goto B70438e;
case 0x704390:c.instructions+=2;goto B704390;
case 0x704393:c.instructions+=1;goto B704393;
case 0x704395:goto L704395;
case 0x704396:c.instructions+=2;goto B704396;
case 0x704397:c.instructions+=1;goto B704397;
case 0x704398:goto L704398;
case 0x704399:c.instructions+=1;goto B704399;
case 0x70439a:goto L70439a;
case 0x70439b:c.instructions+=11;goto B70439b;
case 0x70439d:c.instructions+=10;goto B70439d;
case 0x70439e:c.instructions+=9;goto B70439e;
case 0x7043a1:c.instructions+=8;goto B7043a1;
case 0x7043a6:c.instructions+=7;goto B7043a6;
case 0x7043a8:c.instructions+=6;goto B7043a8;
case 0x7043aa:c.instructions+=5;goto B7043aa;
case 0x7043ac:c.instructions+=4;goto B7043ac;
case 0x7043af:c.instructions+=3;goto B7043af;
case 0x7043b0:c.instructions+=2;goto B7043b0;
case 0x7043b3:c.instructions+=1;goto B7043b3;
case 0x7043b8:goto L7043b8;
case 0x7043bb:c.instructions+=7;goto B7043bb;
case 0x7043bd:c.instructions+=6;goto B7043bd;
case 0x7043bf:c.instructions+=5;goto B7043bf;
case 0x7043c1:c.instructions+=4;goto B7043c1;
case 0x7043c3:c.instructions+=3;goto B7043c3;
case 0x7043c6:c.instructions+=2;goto B7043c6;
case 0x7043c7:c.instructions+=1;goto B7043c7;
case 0x7043cc:goto L7043cc;
case 0x7043cf:c.instructions+=3;goto B7043cf;
case 0x7043d0:c.instructions+=2;goto B7043d0;
case 0x7043d1:c.instructions+=1;goto B7043d1;
case 0x7043d2:goto L7043d2;
case 0x7043d3:c.instructions+=5;goto B7043d3;
case 0x7043d5:c.instructions+=4;goto B7043d5;
case 0x7043d8:c.instructions+=3;goto B7043d8;
case 0x7043db:c.instructions+=2;goto B7043db;
case 0x7043dd:c.instructions+=1;goto B7043dd;
case 0x7043df:goto L7043df;
case 0x7043e1:c.instructions+=2;goto B7043e1;
case 0x7043e4:c.instructions+=1;goto B7043e4;
case 0x7043e6:goto L7043e6;
case 0x7043e9:c.instructions+=1;goto B7043e9;
case 0x7043eb:goto L7043eb;
case 0x7043ef:c.instructions+=2;goto B7043ef;
case 0x7043f2:c.instructions+=1;goto B7043f2;
case 0x7043f4:goto L7043f4;
case 0x7043f7:c.instructions+=7;goto B7043f7;
case 0x7043fc:c.instructions+=6;goto B7043fc;
case 0x7043fd:c.instructions+=5;goto B7043fd;
case 0x7043ff:c.instructions+=4;goto B7043ff;
case 0x704401:c.instructions+=3;goto B704401;
case 0x704403:c.instructions+=2;goto B704403;
case 0x704406:c.instructions+=1;goto B704406;
case 0x704408:goto L704408;
case 0x70440f:c.instructions+=6;goto B70440f;
case 0x704410:c.instructions+=5;goto B704410;
case 0x704412:c.instructions+=4;goto B704412;
case 0x704414:c.instructions+=3;goto B704414;
case 0x704416:c.instructions+=2;goto B704416;
case 0x704419:c.instructions+=1;goto B704419;
case 0x70441b:goto L70441b;
case 0x70441e:c.instructions+=2;goto B70441e;
case 0x704420:c.instructions+=1;goto B704420;
case 0x704422:goto L704422;
case 0x704426:c.instructions+=2;goto B704426;
case 0x704429:c.instructions+=1;goto B704429;
case 0x70442b:goto L70442b;
case 0x70442e:c.instructions+=6;goto B70442e;
case 0x704433:c.instructions+=5;goto B704433;
case 0x704434:c.instructions+=4;goto B704434;
case 0x704436:c.instructions+=3;goto B704436;
case 0x704438:c.instructions+=2;goto B704438;
case 0x704439:c.instructions+=1;goto B704439;
case 0x70443a:goto L70443a;
case 0x70443d:c.instructions+=2;goto B70443d;
case 0x70443e:c.instructions+=1;goto B70443e;
case 0x704443:goto L704443;
case 0x704446:c.instructions+=2;goto B704446;
case 0x704447:c.instructions+=1;goto B704447;
case 0x704448:goto L704448;
case 0x70444f:c.instructions+=5;goto B70444f;
case 0x704450:c.instructions+=4;goto B704450;
case 0x704452:c.instructions+=3;goto B704452;
case 0x704454:c.instructions+=2;goto B704454;
case 0x704455:c.instructions+=1;goto B704455;
case 0x704456:goto L704456;
case 0x704459:c.instructions+=2;goto B704459;
case 0x70445a:c.instructions+=1;goto B70445a;
case 0x70445f:goto L70445f;
case 0x704461:goto L704461;
case 0x704462:c.instructions+=3;goto B704462;
case 0x704465:c.instructions+=2;goto B704465;
case 0x704467:c.instructions+=1;goto B704467;
case 0x704469:goto L704469;
case 0x70446d:c.instructions+=1;goto B70446d;
case 0x70446f:goto L70446f;
case 0x704472:c.instructions+=9;goto B704472;
case 0x704475:c.instructions+=8;goto B704475;
case 0x70447a:c.instructions+=7;goto B70447a;
case 0x70447c:c.instructions+=6;goto B70447c;
case 0x70447d:c.instructions+=5;goto B70447d;
case 0x704480:c.instructions+=4;goto B704480;
case 0x704483:c.instructions+=3;goto B704483;
case 0x704485:c.instructions+=2;goto B704485;
case 0x704486:c.instructions+=1;goto B704486;
case 0x704488:goto L704488;
case 0x704489:goto L704489;
case 0x70448c:c.instructions+=9;goto B70448c;
case 0x704493:c.instructions+=8;goto B704493;
case 0x704494:c.instructions+=7;goto B704494;
case 0x704497:c.instructions+=6;goto B704497;
case 0x70449e:c.instructions+=5;goto B70449e;
case 0x70449f:c.instructions+=4;goto B70449f;
case 0x7044a0:c.instructions+=3;goto B7044a0;
case 0x7044a3:c.instructions+=2;goto B7044a3;
case 0x7044a4:c.instructions+=1;goto B7044a4;
case 0x7044a9:goto L7044a9;
case 0x7044ac:goto L7044ac;
case 0x7044ad:c.instructions+=2;goto B7044ad;
case 0x7044ae:c.instructions+=1;goto B7044ae;
case 0x7044af:goto L7044af;
case 0x7044b2:c.instructions+=2;goto B7044b2;
case 0x7044b4:c.instructions+=1;goto B7044b4;
case 0x7044b6:goto L7044b6;
case 0x7044ba:c.instructions+=1;goto B7044ba;
case 0x7044bc:goto L7044bc;
case 0x7044bf:c.instructions+=7;goto B7044bf;
case 0x7044c2:c.instructions+=6;goto B7044c2;
case 0x7044c7:c.instructions+=5;goto B7044c7;
case 0x7044c9:c.instructions+=4;goto B7044c9;
case 0x7044ca:c.instructions+=3;goto B7044ca;
case 0x7044cd:c.instructions+=2;goto B7044cd;
case 0x7044d0:c.instructions+=1;goto B7044d0;
case 0x7044d2:goto L7044d2;
case 0x7044d3:c.instructions+=4;goto B7044d3;
case 0x7044d4:c.instructions+=3;goto B7044d4;
case 0x7044d7:c.instructions+=2;goto B7044d7;
case 0x7044d8:c.instructions+=1;goto B7044d8;
case 0x7044dd:goto L7044dd;
case 0x7044df:goto L7044df;
case 0x7044e0:c.instructions+=4;goto B7044e0;
case 0x7044e2:c.instructions+=3;goto B7044e2;
case 0x7044e5:c.instructions+=2;goto B7044e5;
case 0x7044e7:c.instructions+=1;goto B7044e7;
case 0x7044e9:goto L7044e9;
case 0x7044ea:c.instructions+=6;goto B7044ea;
case 0x7044eb:c.instructions+=5;goto B7044eb;
case 0x7044ee:c.instructions+=4;goto B7044ee;
case 0x7044ef:c.instructions+=3;goto B7044ef;
case 0x7044f2:c.instructions+=2;goto B7044f2;
case 0x7044f5:c.instructions+=1;goto B7044f5;
case 0x7044f8:goto L7044f8;
case 0x7044fa:c.instructions+=2;goto B7044fa;
case 0x7044fd:c.instructions+=1;goto B7044fd;
case 0x7044ff:goto L7044ff;
case 0x704502:c.instructions+=11;goto B704502;
case 0x704506:c.instructions+=10;goto B704506;
case 0x704509:c.instructions+=9;goto B704509;
case 0x70450d:c.instructions+=8;goto B70450d;
case 0x704510:c.instructions+=7;goto B704510;
case 0x704514:c.instructions+=6;goto B704514;
case 0x704517:c.instructions+=5;goto B704517;
case 0x704518:c.instructions+=4;goto B704518;
case 0x70451b:c.instructions+=3;goto B70451b;
case 0x70451c:c.instructions+=2;goto B70451c;
case 0x70451f:c.instructions+=1;goto B70451f;
case 0x704521:goto L704521;
case 0x704524:c.instructions+=5;goto B704524;
case 0x704527:c.instructions+=4;goto B704527;
case 0x70452a:c.instructions+=3;goto B70452a;
case 0x70452c:c.instructions+=2;goto B70452c;
case 0x70452f:c.instructions+=1;goto B70452f;
case 0x704531:goto L704531;
case 0x704532:c.instructions+=2;goto B704532;
case 0x704533:c.instructions+=1;goto B704533;
case 0x704534:goto L704534;
case 0x704535:c.instructions+=1;goto B704535;
case 0x704536:goto L704536;
case 0x704537:c.instructions+=5;goto B704537;
case 0x704539:c.instructions+=4;goto B704539;
case 0x70453a:c.instructions+=3;goto B70453a;
case 0x70453d:c.instructions+=2;goto B70453d;
case 0x70453f:c.instructions+=1;goto B70453f;
case 0x704541:goto L704541;
case 0x704542:c.instructions+=8;goto B704542;
case 0x704543:c.instructions+=7;goto B704543;
case 0x704546:c.instructions+=6;goto B704546;
case 0x704549:c.instructions+=5;goto B704549;
case 0x70454a:c.instructions+=4;goto B70454a;
case 0x70454d:c.instructions+=3;goto B70454d;
case 0x704550:c.instructions+=2;goto B704550;
case 0x704553:c.instructions+=1;goto B704553;
case 0x704556:goto L704556;
case 0x704558:c.instructions+=2;goto B704558;
case 0x70455b:c.instructions+=1;goto B70455b;
case 0x70455d:goto L70455d;
case 0x704560:c.instructions+=2;goto B704560;
case 0x704563:c.instructions+=1;goto B704563;
case 0x704566:goto L704566;
case 0x704569:c.instructions+=12;goto B704569;
case 0x70456c:c.instructions+=11;goto B70456c;
case 0x704570:c.instructions+=10;goto B704570;
case 0x704572:c.instructions+=9;goto B704572;
case 0x704575:c.instructions+=8;goto B704575;
case 0x704579:c.instructions+=7;goto B704579;
case 0x70457c:c.instructions+=6;goto B70457c;
case 0x70457f:c.instructions+=5;goto B70457f;
case 0x704582:c.instructions+=4;goto B704582;
case 0x704585:c.instructions+=3;goto B704585;
case 0x704586:c.instructions+=2;goto B704586;
case 0x704589:c.instructions+=1;goto B704589;
case 0x70458b:goto L70458b;
case 0x70458e:c.instructions+=4;goto B70458e;
case 0x704591:c.instructions+=3;goto B704591;
case 0x704593:c.instructions+=2;goto B704593;
case 0x704596:c.instructions+=1;goto B704596;
case 0x704598:goto L704598;
case 0x704599:c.instructions+=2;goto B704599;
case 0x70459a:c.instructions+=1;goto B70459a;
case 0x70459b:goto L70459b;
case 0x70459c:c.instructions+=1;goto B70459c;
case 0x70459d:goto L70459d;
case 0x70459e:c.instructions+=11;goto B70459e;
case 0x7045a0:c.instructions+=10;goto B7045a0;
case 0x7045a1:c.instructions+=9;goto B7045a1;
case 0x7045a4:c.instructions+=8;goto B7045a4;
case 0x7045a9:c.instructions+=7;goto B7045a9;
case 0x7045ab:c.instructions+=6;goto B7045ab;
case 0x7045ad:c.instructions+=5;goto B7045ad;
case 0x7045af:c.instructions+=4;goto B7045af;
case 0x7045b2:c.instructions+=3;goto B7045b2;
case 0x7045b3:c.instructions+=2;goto B7045b3;
case 0x7045b6:c.instructions+=1;goto B7045b6;
case 0x7045bb:goto L7045bb;
case 0x7045be:c.instructions+=7;goto B7045be;
case 0x7045c0:c.instructions+=6;goto B7045c0;
case 0x7045c2:c.instructions+=5;goto B7045c2;
case 0x7045c4:c.instructions+=4;goto B7045c4;
case 0x7045c6:c.instructions+=3;goto B7045c6;
case 0x7045c9:c.instructions+=2;goto B7045c9;
case 0x7045ca:c.instructions+=1;goto B7045ca;
case 0x7045cf:goto L7045cf;
case 0x7045d2:c.instructions+=3;goto B7045d2;
case 0x7045d3:c.instructions+=2;goto B7045d3;
case 0x7045d4:c.instructions+=1;goto B7045d4;
case 0x7045d5:goto L7045d5;
case 0x7045d6:c.instructions+=5;goto B7045d6;
case 0x7045d8:c.instructions+=4;goto B7045d8;
case 0x7045db:c.instructions+=3;goto B7045db;
case 0x7045de:c.instructions+=2;goto B7045de;
case 0x7045e0:c.instructions+=1;goto B7045e0;
case 0x7045e2:goto L7045e2;
case 0x7045e4:c.instructions+=2;goto B7045e4;
case 0x7045e7:c.instructions+=1;goto B7045e7;
case 0x7045e9:goto L7045e9;
case 0x7045ec:c.instructions+=1;goto B7045ec;
case 0x7045ee:goto L7045ee;
case 0x7045f1:c.instructions+=6;goto B7045f1;
case 0x7045f8:c.instructions+=5;goto B7045f8;
case 0x7045f9:c.instructions+=4;goto B7045f9;
case 0x7045fb:c.instructions+=3;goto B7045fb;
case 0x7045fd:c.instructions+=2;goto B7045fd;
case 0x7045ff:c.instructions+=1;goto B7045ff;
case 0x704602:goto L704602;
case 0x704605:c.instructions+=2;goto B704605;
case 0x704606:c.instructions+=1;goto B704606;
case 0x70460b:goto L70460b;
case 0x70460e:c.instructions+=2;goto B70460e;
case 0x70460f:c.instructions+=1;goto B70460f;
case 0x704610:goto L704610;
case 0x704613:c.instructions+=2;goto B704613;
case 0x704615:c.instructions+=1;goto B704615;
case 0x704617:goto L704617;
case 0x70461a:c.instructions+=7;goto B70461a;
case 0x704621:c.instructions+=6;goto B704621;
case 0x704622:c.instructions+=5;goto B704622;
case 0x704624:c.instructions+=4;goto B704624;
case 0x704626:c.instructions+=3;goto B704626;
case 0x704627:c.instructions+=2;goto B704627;
case 0x704628:c.instructions+=1;goto B704628;
case 0x70462a:goto L70462a;
case 0x70462b:c.instructions+=3;goto B70462b;
case 0x70462e:c.instructions+=2;goto B70462e;
case 0x704630:c.instructions+=1;goto B704630;
case 0x704632:goto L704632;
case 0x704633:c.instructions+=1;goto B704633;
case 0x704635:goto L704635;
case 0x704638:c.instructions+=2;goto B704638;
case 0x70463a:c.instructions+=1;goto B70463a;
case 0x70463c:goto L70463c;
case 0x70463f:c.instructions+=9;goto B70463f;
case 0x704646:c.instructions+=8;goto B704646;
case 0x704647:c.instructions+=7;goto B704647;
case 0x70464a:c.instructions+=6;goto B70464a;
case 0x704651:c.instructions+=5;goto B704651;
case 0x704652:c.instructions+=4;goto B704652;
case 0x704653:c.instructions+=3;goto B704653;
case 0x704656:c.instructions+=2;goto B704656;
case 0x704657:c.instructions+=1;goto B704657;
case 0x70465c:goto L70465c;
case 0x70465f:goto L70465f;
case 0x704660:c.instructions+=2;goto B704660;
case 0x704661:c.instructions+=1;goto B704661;
case 0x704662:goto L704662;
case 0x704663:c.instructions+=18;goto B704663;
case 0x704665:c.instructions+=17;goto B704665;
case 0x704666:c.instructions+=16;goto B704666;
case 0x704667:c.instructions+=15;goto B704667;
case 0x704668:c.instructions+=14;goto B704668;
case 0x704669:c.instructions+=13;goto B704669;
case 0x70466a:c.instructions+=12;goto B70466a;
case 0x70466c:c.instructions+=11;goto B70466c;
case 0x70466e:c.instructions+=10;goto B70466e;
case 0x704671:c.instructions+=9;goto B704671;
case 0x704672:c.instructions+=8;goto B704672;
case 0x704675:c.instructions+=7;goto B704675;
case 0x704678:c.instructions+=6;goto B704678;
case 0x704679:c.instructions+=5;goto B704679;
case 0x70467a:c.instructions+=4;goto B70467a;
case 0x70467c:c.instructions+=3;goto B70467c;
case 0x70467d:c.instructions+=2;goto B70467d;
case 0x70467e:c.instructions+=1;goto B70467e;
case 0x70467f:goto L70467f;
case 0x704680:c.instructions+=9;goto B704680;
case 0x704682:c.instructions+=8;goto B704682;
case 0x704685:c.instructions+=7;goto B704685;
case 0x704686:c.instructions+=6;goto B704686;
case 0x704687:c.instructions+=5;goto B704687;
case 0x704688:c.instructions+=4;goto B704688;
case 0x70468b:c.instructions+=3;goto B70468b;
case 0x70468c:c.instructions+=2;goto B70468c;
case 0x70468e:c.instructions+=1;goto B70468e;
case 0x704694:goto L704694;
case 0x704696:c.instructions+=1;goto B704696;
case 0x70469c:goto L70469c;
case 0x7046a2:c.instructions+=3;goto B7046a2;
case 0x7046a5:c.instructions+=2;goto B7046a5;
case 0x7046a6:c.instructions+=1;goto B7046a6;
case 0x7046a8:goto L7046a8;
case 0x7046ab:c.instructions+=2;goto B7046ab;
case 0x7046ac:c.instructions+=1;goto B7046ac;
case 0x7046b1:goto L7046b1;
case 0x7046b7:c.instructions+=2;goto B7046b7;
case 0x7046b8:c.instructions+=1;goto B7046b8;
case 0x7046ba:goto L7046ba;
case 0x7046bd:c.instructions+=1;goto B7046bd;
case 0x7046bf:goto L7046bf;
case 0x7046c1:goto L7046c1;
case 0x7046c3:c.instructions+=1;goto B7046c3;
case 0x7046c5:goto L7046c5;
case 0x7046c8:c.instructions+=2;goto B7046c8;
case 0x7046c9:c.instructions+=1;goto B7046c9;
case 0x7046cb:goto L7046cb;
case 0x7046ce:c.instructions+=2;goto B7046ce;
case 0x7046cf:c.instructions+=1;goto B7046cf;
case 0x7046d4:goto L7046d4;
case 0x7046d7:c.instructions+=6;goto B7046d7;
case 0x7046da:c.instructions+=5;goto B7046da;
case 0x7046db:c.instructions+=4;goto B7046db;
case 0x7046dd:c.instructions+=3;goto B7046dd;
case 0x7046e0:c.instructions+=2;goto B7046e0;
case 0x7046e3:c.instructions+=1;goto B7046e3;
case 0x7046e5:goto L7046e5;
case 0x7046eb:goto L7046eb;
case 0x7046ee:c.instructions+=3;goto B7046ee;
case 0x7046f1:c.instructions+=2;goto B7046f1;
case 0x7046f3:c.instructions+=1;goto B7046f3;
case 0x7046f5:goto L7046f5;
case 0x7046fb:goto L7046fb;
case 0x7046fe:c.instructions+=6;goto B7046fe;
case 0x704700:c.instructions+=5;goto B704700;
case 0x704703:c.instructions+=4;goto B704703;
case 0x704705:c.instructions+=3;goto B704705;
case 0x704708:c.instructions+=2;goto B704708;
case 0x70470b:c.instructions+=1;goto B70470b;
case 0x70470d:goto L70470d;
case 0x704713:goto L704713;
case 0x704715:c.instructions+=2;goto B704715;
case 0x70471b:c.instructions+=1;goto B70471b;
case 0x704720:goto L704720;
case 0x704722:goto L704722;
case 0x704724:c.instructions+=29;goto B704724;
case 0x704729:c.instructions+=28;goto B704729;
case 0x70472d:c.instructions+=27;goto B70472d;
case 0x70472f:c.instructions+=26;goto B70472f;
case 0x704731:c.instructions+=25;goto B704731;
case 0x704733:c.instructions+=24;goto B704733;
case 0x704734:c.instructions+=23;goto B704734;
case 0x704736:c.instructions+=22;goto B704736;
case 0x70473c:c.instructions+=21;goto B70473c;
case 0x70473e:c.instructions+=20;goto B70473e;
case 0x704740:c.instructions+=19;goto B704740;
case 0x704741:c.instructions+=18;goto B704741;
case 0x704743:c.instructions+=17;goto B704743;
case 0x704746:c.instructions+=16;goto B704746;
case 0x704748:c.instructions+=15;goto B704748;
case 0x70474a:c.instructions+=14;goto B70474a;
case 0x70474d:c.instructions+=13;goto B70474d;
case 0x70474f:c.instructions+=12;goto B70474f;
case 0x704751:c.instructions+=11;goto B704751;
case 0x704752:c.instructions+=10;goto B704752;
case 0x704754:c.instructions+=9;goto B704754;
case 0x704756:c.instructions+=8;goto B704756;
case 0x704758:c.instructions+=7;goto B704758;
case 0x70475a:c.instructions+=6;goto B70475a;
case 0x70475c:c.instructions+=5;goto B70475c;
case 0x70475d:c.instructions+=4;goto B70475d;
case 0x70475f:c.instructions+=3;goto B70475f;
case 0x704761:c.instructions+=2;goto B704761;
case 0x704763:c.instructions+=1;goto B704763;
case 0x704765:goto L704765;
case 0x704767:c.instructions+=1;goto B704767;
case 0x704769:goto L704769;
case 0x70476f:c.instructions+=2;goto B70476f;
case 0x704771:c.instructions+=1;goto B704771;
case 0x704773:goto L704773;
case 0x704774:goto L704774;
case 0x704775:c.instructions+=4;goto B704775;
case 0x704776:c.instructions+=3;goto B704776;
case 0x704777:c.instructions+=2;goto B704777;
case 0x704778:c.instructions+=1;goto B704778;
case 0x704779:goto L704779;
case 0x70477a:c.instructions+=9;goto B70477a;
case 0x70477c:c.instructions+=8;goto B70477c;
case 0x70477f:c.instructions+=7;goto B70477f;
case 0x704782:c.instructions+=6;goto B704782;
case 0x704783:c.instructions+=5;goto B704783;
case 0x704786:c.instructions+=4;goto B704786;
case 0x704787:c.instructions+=3;goto B704787;
case 0x70478a:c.instructions+=2;goto B70478a;
case 0x70478b:c.instructions+=1;goto B70478b;
case 0x704790:goto L704790;
case 0x704793:c.instructions+=2;goto B704793;
case 0x704797:c.instructions+=1;goto B704797;
case 0x704799:goto L704799;
case 0x7047a3:c.instructions+=2;goto B7047a3;
case 0x7047a4:c.instructions+=1;goto B7047a4;
case 0x7047a5:goto L7047a5;
case 0x7047a9:c.instructions+=2;goto B7047a9;
case 0x7047b3:c.instructions+=1;goto B7047b3;
case 0x7047b5:goto L7047b5;
case 0x7047bf:goto L7047bf;
case 0x7047c0:c.instructions+=1;goto B7047c0;
case 0x7047c1:goto L7047c1;
case 0x7047c2:c.instructions+=6;goto B7047c2;
case 0x7047c4:c.instructions+=5;goto B7047c4;
case 0x7047c9:c.instructions+=4;goto B7047c9;
case 0x7047cb:c.instructions+=3;goto B7047cb;
case 0x7047ce:c.instructions+=2;goto B7047ce;
case 0x7047d0:c.instructions+=1;goto B7047d0;
case 0x7047d6:goto L7047d6;
case 0x7047d7:c.instructions+=1;goto B7047d7;
case 0x7047d8:goto L7047d8;
case 0x7047d9:c.instructions+=3;goto B7047d9;
case 0x7047db:c.instructions+=2;goto B7047db;
case 0x7047de:c.instructions+=1;goto B7047de;
case 0x7047e4:goto L7047e4;
case 0x7047e5:c.instructions+=1;goto B7047e5;
case 0x7047e6:goto L7047e6;
case 0x7047e7:c.instructions+=4;goto B7047e7;
case 0x7047e9:c.instructions+=3;goto B7047e9;
case 0x7047ec:c.instructions+=2;goto B7047ec;
case 0x7047ee:c.instructions+=1;goto B7047ee;
case 0x7047f4:goto L7047f4;
case 0x7047f5:c.instructions+=1;goto B7047f5;
case 0x7047f6:goto L7047f6;
case 0x7047f7:c.instructions+=3;goto B7047f7;
case 0x7047f9:c.instructions+=2;goto B7047f9;
case 0x7047fc:c.instructions+=1;goto B7047fc;
case 0x704802:goto L704802;
case 0x704803:c.instructions+=1;goto B704803;
case 0x704804:goto L704804;
case 0x704805:c.instructions+=9;goto B704805;
case 0x704807:c.instructions+=8;goto B704807;
case 0x704808:c.instructions+=7;goto B704808;
case 0x704809:c.instructions+=6;goto B704809;
case 0x70480c:c.instructions+=5;goto B70480c;
case 0x70480e:c.instructions+=4;goto B70480e;
case 0x70480f:c.instructions+=3;goto B70480f;
case 0x704811:c.instructions+=2;goto B704811;
case 0x704813:c.instructions+=1;goto B704813;
case 0x704815:goto L704815;
case 0x704816:c.instructions+=1;goto B704816;
case 0x70481b:goto L70481b;
case 0x70481c:goto L70481c;
case 0x704822:c.instructions+=5;goto B704822;
case 0x704824:c.instructions+=4;goto B704824;
case 0x704826:c.instructions+=3;goto B704826;
case 0x704828:c.instructions+=2;goto B704828;
case 0x70482b:c.instructions+=1;goto B70482b;
case 0x70482d:goto L70482d;
case 0x70482e:c.instructions+=1;goto B70482e;
case 0x704833:goto L704833;
case 0x704834:goto L704834;
case 0x704836:c.instructions+=5;goto B704836;
case 0x70483c:c.instructions+=4;goto B70483c;
case 0x70483e:c.instructions+=3;goto B70483e;
case 0x704840:c.instructions+=2;goto B704840;
case 0x704846:c.instructions+=1;goto B704846;
case 0x704848:goto L704848;
case 0x704849:c.instructions+=1;goto B704849;
case 0x70484e:goto L70484e;
case 0x70484f:goto L70484f;
case 0x704851:c.instructions+=5;goto B704851;
case 0x704857:c.instructions+=4;goto B704857;
case 0x704859:c.instructions+=3;goto B704859;
case 0x70485b:c.instructions+=2;goto B70485b;
case 0x704861:c.instructions+=1;goto B704861;
case 0x704863:goto L704863;
case 0x704864:c.instructions+=1;goto B704864;
case 0x704869:goto L704869;
case 0x70486a:goto L70486a;
case 0x70486c:c.instructions+=5;goto B70486c;
case 0x704872:c.instructions+=4;goto B704872;
case 0x704874:c.instructions+=3;goto B704874;
case 0x704876:c.instructions+=2;goto B704876;
case 0x70487c:c.instructions+=1;goto B70487c;
case 0x70487e:goto L70487e;
case 0x70487f:c.instructions+=1;goto B70487f;
case 0x704884:goto L704884;
case 0x704885:goto L704885;
case 0x704887:c.instructions+=5;goto B704887;
case 0x70488d:c.instructions+=4;goto B70488d;
case 0x70488f:c.instructions+=3;goto B70488f;
case 0x704891:c.instructions+=2;goto B704891;
case 0x704897:c.instructions+=1;goto B704897;
case 0x704899:goto L704899;
case 0x70489a:c.instructions+=1;goto B70489a;
case 0x70489f:goto L70489f;
case 0x7048a0:goto L7048a0;
case 0x7048a2:c.instructions+=5;goto B7048a2;
case 0x7048a8:c.instructions+=4;goto B7048a8;
case 0x7048aa:c.instructions+=3;goto B7048aa;
case 0x7048ac:c.instructions+=2;goto B7048ac;
case 0x7048b2:c.instructions+=1;goto B7048b2;
case 0x7048b4:goto L7048b4;
case 0x7048b5:c.instructions+=1;goto B7048b5;
case 0x7048ba:goto L7048ba;
case 0x7048bb:goto L7048bb;
case 0x7048bd:c.instructions+=5;goto B7048bd;
case 0x7048c3:c.instructions+=4;goto B7048c3;
case 0x7048c5:c.instructions+=3;goto B7048c5;
case 0x7048c7:c.instructions+=2;goto B7048c7;
case 0x7048cd:c.instructions+=1;goto B7048cd;
case 0x7048cf:goto L7048cf;
case 0x7048d0:c.instructions+=1;goto B7048d0;
case 0x7048d5:goto L7048d5;
case 0x7048d6:goto L7048d6;
case 0x7048d8:c.instructions+=6;goto B7048d8;
case 0x7048de:c.instructions+=5;goto B7048de;
case 0x7048df:c.instructions+=4;goto B7048df;
case 0x7048e0:c.instructions+=3;goto B7048e0;
case 0x7048e1:c.instructions+=2;goto B7048e1;
case 0x7048e2:c.instructions+=1;goto B7048e2;
case 0x7048e3:goto L7048e3;
case 0x7048e4:c.instructions+=6;goto B7048e4;
case 0x7048e6:c.instructions+=5;goto B7048e6;
case 0x7048e7:c.instructions+=4;goto B7048e7;
case 0x7048e8:c.instructions+=3;goto B7048e8;
case 0x7048eb:c.instructions+=2;goto B7048eb;
case 0x7048ec:c.instructions+=1;goto B7048ec;
case 0x7048f1:goto L7048f1;
case 0x7048f3:c.instructions+=3;goto B7048f3;
case 0x7048f4:c.instructions+=2;goto B7048f4;
case 0x7048f9:c.instructions+=1;goto B7048f9;
case 0x7048fe:goto L7048fe;
case 0x704901:c.instructions+=3;goto B704901;
case 0x704903:c.instructions+=2;goto B704903;
case 0x704905:c.instructions+=1;goto B704905;
case 0x704907:goto L704907;
case 0x704908:c.instructions+=1;goto B704908;
case 0x70490d:goto L70490d;
case 0x70490e:c.instructions+=2;goto B70490e;
case 0x704910:c.instructions+=1;goto B704910;
case 0x704915:goto L704915;
case 0x704916:c.instructions+=11;goto B704916;
case 0x704919:c.instructions+=10;goto B704919;
case 0x70491b:c.instructions+=9;goto B70491b;
case 0x70491c:c.instructions+=8;goto B70491c;
case 0x70491e:c.instructions+=7;goto B70491e;
case 0x704921:c.instructions+=6;goto B704921;
case 0x704927:c.instructions+=5;goto B704927;
case 0x70492a:c.instructions+=4;goto B70492a;
case 0x70492d:c.instructions+=3;goto B70492d;
case 0x70492e:c.instructions+=2;goto B70492e;
case 0x70492f:c.instructions+=1;goto B70492f;
case 0x704934:goto L704934;
case 0x704936:c.instructions+=4;goto B704936;
case 0x704937:c.instructions+=3;goto B704937;
case 0x704938:c.instructions+=2;goto B704938;
case 0x70493e:c.instructions+=1;goto B70493e;
case 0x704940:goto L704940;
case 0x704941:c.instructions+=1;goto B704941;
case 0x704946:goto L704946;
case 0x704947:c.instructions+=2;goto B704947;
case 0x704949:c.instructions+=1;goto B704949;
case 0x70494e:goto L70494e;
case 0x704951:c.instructions+=9;goto B704951;
case 0x704953:c.instructions+=8;goto B704953;
case 0x704959:c.instructions+=7;goto B704959;
case 0x70495f:c.instructions+=6;goto B70495f;
case 0x704961:c.instructions+=5;goto B704961;
case 0x704964:c.instructions+=4;goto B704964;
case 0x704967:c.instructions+=3;goto B704967;
case 0x704968:c.instructions+=2;goto B704968;
case 0x704969:c.instructions+=1;goto B704969;
case 0x70496e:goto L70496e;
case 0x704970:c.instructions+=4;goto B704970;
case 0x704971:c.instructions+=3;goto B704971;
case 0x704972:c.instructions+=2;goto B704972;
case 0x704978:c.instructions+=1;goto B704978;
case 0x70497a:goto L70497a;
case 0x70497d:c.instructions+=9;goto B70497d;
case 0x70497f:c.instructions+=8;goto B70497f;
case 0x704985:c.instructions+=7;goto B704985;
case 0x70498b:c.instructions+=6;goto B70498b;
case 0x70498d:c.instructions+=5;goto B70498d;
case 0x704990:c.instructions+=4;goto B704990;
case 0x704993:c.instructions+=3;goto B704993;
case 0x704994:c.instructions+=2;goto B704994;
case 0x704995:c.instructions+=1;goto B704995;
case 0x70499a:goto L70499a;
case 0x70499c:c.instructions+=4;goto B70499c;
case 0x70499d:c.instructions+=3;goto B70499d;
case 0x70499e:c.instructions+=2;goto B70499e;
case 0x7049a4:c.instructions+=1;goto B7049a4;
case 0x7049a6:goto L7049a6;
case 0x7049a9:c.instructions+=7;goto B7049a9;
case 0x7049ab:c.instructions+=6;goto B7049ab;
case 0x7049b1:c.instructions+=5;goto B7049b1;
case 0x7049b7:c.instructions+=4;goto B7049b7;
case 0x7049ba:c.instructions+=3;goto B7049ba;
case 0x7049bb:c.instructions+=2;goto B7049bb;
case 0x7049bc:c.instructions+=1;goto B7049bc;
case 0x7049c1:goto L7049c1;
case 0x7049c3:c.instructions+=4;goto B7049c3;
case 0x7049c4:c.instructions+=3;goto B7049c4;
case 0x7049c5:c.instructions+=2;goto B7049c5;
case 0x7049cb:c.instructions+=1;goto B7049cb;
case 0x7049d1:goto L7049d1;
case 0x7049d4:c.instructions+=7;goto B7049d4;
case 0x7049d6:c.instructions+=6;goto B7049d6;
case 0x7049dc:c.instructions+=5;goto B7049dc;
case 0x7049e2:c.instructions+=4;goto B7049e2;
case 0x7049e5:c.instructions+=3;goto B7049e5;
case 0x7049e6:c.instructions+=2;goto B7049e6;
case 0x7049e7:c.instructions+=1;goto B7049e7;
case 0x7049ec:goto L7049ec;
case 0x7049ee:c.instructions+=4;goto B7049ee;
case 0x7049ef:c.instructions+=3;goto B7049ef;
case 0x7049f0:c.instructions+=2;goto B7049f0;
case 0x7049f6:c.instructions+=1;goto B7049f6;
case 0x7049fc:goto L7049fc;
case 0x7049ff:c.instructions+=7;goto B7049ff;
case 0x704a01:c.instructions+=6;goto B704a01;
case 0x704a07:c.instructions+=5;goto B704a07;
case 0x704a0d:c.instructions+=4;goto B704a0d;
case 0x704a14:c.instructions+=3;goto B704a14;
case 0x704a15:c.instructions+=2;goto B704a15;
case 0x704a16:c.instructions+=1;goto B704a16;
case 0x704a1b:goto L704a1b;
case 0x704a1d:c.instructions+=4;goto B704a1d;
case 0x704a1e:c.instructions+=3;goto B704a1e;
case 0x704a1f:c.instructions+=2;goto B704a1f;
case 0x704a25:c.instructions+=1;goto B704a25;
case 0x704a2b:goto L704a2b;
case 0x704a2e:c.instructions+=7;goto B704a2e;
case 0x704a30:c.instructions+=6;goto B704a30;
case 0x704a36:c.instructions+=5;goto B704a36;
case 0x704a3c:c.instructions+=4;goto B704a3c;
case 0x704a43:c.instructions+=3;goto B704a43;
case 0x704a44:c.instructions+=2;goto B704a44;
case 0x704a45:c.instructions+=1;goto B704a45;
case 0x704a4a:goto L704a4a;
case 0x704a4c:c.instructions+=4;goto B704a4c;
case 0x704a4d:c.instructions+=3;goto B704a4d;
case 0x704a4e:c.instructions+=2;goto B704a4e;
case 0x704a54:c.instructions+=1;goto B704a54;
case 0x704a5a:goto L704a5a;
case 0x704a5d:c.instructions+=4;goto B704a5d;
case 0x704a5f:c.instructions+=3;goto B704a5f;
case 0x704a65:c.instructions+=2;goto B704a65;
case 0x704a67:c.instructions+=1;goto B704a67;
case 0x704a68:goto L704a68;
case 0x704a69:goto L704a69;
case 0x704a6a:c.instructions+=3;goto B704a6a;
case 0x704a6b:c.instructions+=2;goto B704a6b;
case 0x704a6c:c.instructions+=1;goto B704a6c;
case 0x704a6d:goto L704a6d;
case 0x704a6e:c.instructions+=8;goto B704a6e;
case 0x704a70:c.instructions+=7;goto B704a70;
case 0x704a71:c.instructions+=6;goto B704a71;
case 0x704a74:c.instructions+=5;goto B704a74;
case 0x704a7a:c.instructions+=4;goto B704a7a;
case 0x704a7b:c.instructions+=3;goto B704a7b;
case 0x704a7d:c.instructions+=2;goto B704a7d;
case 0x704a7f:c.instructions+=1;goto B704a7f;
case 0x704a81:goto L704a81;
case 0x704a82:c.instructions+=1;goto B704a82;
case 0x704a87:goto L704a87;
case 0x704a88:goto L704a88;
case 0x704a8e:c.instructions+=2;goto B704a8e;
case 0x704a90:c.instructions+=1;goto B704a90;
case 0x704a92:goto L704a92;
case 0x704a93:c.instructions+=1;goto B704a93;
case 0x704a98:goto L704a98;
case 0x704a99:goto L704a99;
case 0x704a9f:c.instructions+=2;goto B704a9f;
case 0x704aa1:c.instructions+=1;goto B704aa1;
case 0x704aa3:goto L704aa3;
case 0x704aa4:c.instructions+=1;goto B704aa4;
case 0x704aa9:goto L704aa9;
case 0x704aaa:goto L704aaa;
case 0x704ab0:c.instructions+=2;goto B704ab0;
case 0x704ab2:c.instructions+=1;goto B704ab2;
case 0x704ab4:goto L704ab4;
case 0x704ab5:c.instructions+=1;goto B704ab5;
case 0x704aba:goto L704aba;
case 0x704abb:goto L704abb;
case 0x704ac1:c.instructions+=10;goto B704ac1;
case 0x704ac7:c.instructions+=9;goto B704ac7;
case 0x704acd:c.instructions+=8;goto B704acd;
case 0x704ad3:c.instructions+=7;goto B704ad3;
case 0x704ad9:c.instructions+=6;goto B704ad9;
case 0x704adf:c.instructions+=5;goto B704adf;
case 0x704ae5:c.instructions+=4;goto B704ae5;
case 0x704ae6:c.instructions+=3;goto B704ae6;
case 0x704ae7:c.instructions+=2;goto B704ae7;
case 0x704ae8:c.instructions+=1;goto B704ae8;
case 0x704ae9:goto L704ae9;
case 0x704aea:c.instructions+=6;goto B704aea;
case 0x704aec:c.instructions+=5;goto B704aec;
case 0x704aed:c.instructions+=4;goto B704aed;
case 0x704af0:c.instructions+=3;goto B704af0;
case 0x704af1:c.instructions+=2;goto B704af1;
case 0x704af2:c.instructions+=1;goto B704af2;
case 0x704af7:goto L704af7;
case 0x704afd:c.instructions+=5;goto B704afd;
case 0x704b00:c.instructions+=4;goto B704b00;
case 0x704b04:c.instructions+=3;goto B704b04;
case 0x704b06:c.instructions+=2;goto B704b06;
case 0x704b07:c.instructions+=1;goto B704b07;
case 0x704b0c:goto L704b0c;
case 0x704b0f:c.instructions+=3;goto B704b0f;
case 0x704b11:c.instructions+=2;goto B704b11;
case 0x704b17:c.instructions+=1;goto B704b17;
case 0x704b19:goto L704b19;
case 0x704b1c:c.instructions+=7;goto B704b1c;
case 0x704b1f:c.instructions+=6;goto B704b1f;
case 0x704b25:c.instructions+=5;goto B704b25;
case 0x704b2b:c.instructions+=4;goto B704b2b;
case 0x704b2f:c.instructions+=3;goto B704b2f;
case 0x704b31:c.instructions+=2;goto B704b31;
case 0x704b32:c.instructions+=1;goto B704b32;
case 0x704b37:goto L704b37;
case 0x704b39:c.instructions+=4;goto B704b39;
case 0x704b3a:c.instructions+=3;goto B704b3a;
case 0x704b3b:c.instructions+=2;goto B704b3b;
case 0x704b41:c.instructions+=1;goto B704b41;
case 0x704b43:goto L704b43;
case 0x704b46:c.instructions+=7;goto B704b46;
case 0x704b49:c.instructions+=6;goto B704b49;
case 0x704b4f:c.instructions+=5;goto B704b4f;
case 0x704b55:c.instructions+=4;goto B704b55;
case 0x704b59:c.instructions+=3;goto B704b59;
case 0x704b5b:c.instructions+=2;goto B704b5b;
case 0x704b5c:c.instructions+=1;goto B704b5c;
case 0x704b61:goto L704b61;
case 0x704b63:c.instructions+=4;goto B704b63;
case 0x704b64:c.instructions+=3;goto B704b64;
case 0x704b65:c.instructions+=2;goto B704b65;
case 0x704b6b:c.instructions+=1;goto B704b6b;
case 0x704b6d:goto L704b6d;
case 0x704b6e:c.instructions+=1;goto B704b6e;
case 0x704b73:goto L704b73;
case 0x704b74:c.instructions+=2;goto B704b74;
case 0x704b76:c.instructions+=1;goto B704b76;
case 0x704b78:goto L704b78;
case 0x704b7b:c.instructions+=4;goto B704b7b;
case 0x704b7e:c.instructions+=3;goto B704b7e;
case 0x704b84:c.instructions+=2;goto B704b84;
case 0x704b86:c.instructions+=1;goto B704b86;
case 0x704b87:goto L704b87;
case 0x704b88:c.instructions+=3;goto B704b88;
case 0x704b89:c.instructions+=2;goto B704b89;
case 0x704b8a:c.instructions+=1;goto B704b8a;
case 0x704b8b:goto L704b8b;
case 0x704b8c:c.instructions+=10;goto B704b8c;
case 0x704b8e:c.instructions+=9;goto B704b8e;
case 0x704b8f:c.instructions+=8;goto B704b8f;
case 0x704b90:c.instructions+=7;goto B704b90;
case 0x704b91:c.instructions+=6;goto B704b91;
case 0x704b92:c.instructions+=5;goto B704b92;
case 0x704b95:c.instructions+=4;goto B704b95;
case 0x704b9b:c.instructions+=3;goto B704b9b;
case 0x704b9d:c.instructions+=2;goto B704b9d;
case 0x704b9e:c.instructions+=1;goto B704b9e;
case 0x704ba0:goto L704ba0;
case 0x704ba1:c.instructions+=3;goto B704ba1;
case 0x704ba3:c.instructions+=2;goto B704ba3;
case 0x704ba4:c.instructions+=1;goto B704ba4;
case 0x704ba9:goto L704ba9;
case 0x704bac:goto L704bac;
case 0x704bb2:c.instructions+=71;goto B704bb2;
case 0x704bb8:c.instructions+=70;goto B704bb8;
case 0x704bba:c.instructions+=69;goto B704bba;
case 0x704bbd:c.instructions+=68;goto B704bbd;
case 0x704bbf:c.instructions+=67;goto B704bbf;
case 0x704bc1:c.instructions+=66;goto B704bc1;
case 0x704bc4:c.instructions+=65;goto B704bc4;
case 0x704bc7:c.instructions+=64;goto B704bc7;
case 0x704bcd:c.instructions+=63;goto B704bcd;
case 0x704bcf:c.instructions+=62;goto B704bcf;
case 0x704bd5:c.instructions+=61;goto B704bd5;
case 0x704bd7:c.instructions+=60;goto B704bd7;
case 0x704bde:c.instructions+=59;goto B704bde;
case 0x704be4:c.instructions+=58;goto B704be4;
case 0x704bea:c.instructions+=57;goto B704bea;
case 0x704bed:c.instructions+=56;goto B704bed;
case 0x704bf3:c.instructions+=55;goto B704bf3;
case 0x704bf5:c.instructions+=54;goto B704bf5;
case 0x704bfb:c.instructions+=53;goto B704bfb;
case 0x704c01:c.instructions+=52;goto B704c01;
case 0x704c05:c.instructions+=51;goto B704c05;
case 0x704c08:c.instructions+=50;goto B704c08;
case 0x704c0e:c.instructions+=49;goto B704c0e;
case 0x704c11:c.instructions+=48;goto B704c11;
case 0x704c17:c.instructions+=47;goto B704c17;
case 0x704c19:c.instructions+=46;goto B704c19;
case 0x704c1f:c.instructions+=45;goto B704c1f;
case 0x704c22:c.instructions+=44;goto B704c22;
case 0x704c28:c.instructions+=43;goto B704c28;
case 0x704c29:c.instructions+=42;goto B704c29;
case 0x704c2b:c.instructions+=41;goto B704c2b;
case 0x704c2d:c.instructions+=40;goto B704c2d;
case 0x704c33:c.instructions+=39;goto B704c33;
case 0x704c36:c.instructions+=38;goto B704c36;
case 0x704c39:c.instructions+=37;goto B704c39;
case 0x704c3c:c.instructions+=36;goto B704c3c;
case 0x704c3e:c.instructions+=35;goto B704c3e;
case 0x704c41:c.instructions+=34;goto B704c41;
case 0x704c44:c.instructions+=33;goto B704c44;
case 0x704c4a:c.instructions+=32;goto B704c4a;
case 0x704c4d:c.instructions+=31;goto B704c4d;
case 0x704c50:c.instructions+=30;goto B704c50;
case 0x704c53:c.instructions+=29;goto B704c53;
case 0x704c55:c.instructions+=28;goto B704c55;
case 0x704c5b:c.instructions+=27;goto B704c5b;
case 0x704c61:c.instructions+=26;goto B704c61;
case 0x704c67:c.instructions+=25;goto B704c67;
case 0x704c6a:c.instructions+=24;goto B704c6a;
case 0x704c6c:c.instructions+=23;goto B704c6c;
case 0x704c6e:c.instructions+=22;goto B704c6e;
case 0x704c70:c.instructions+=21;goto B704c70;
case 0x704c72:c.instructions+=20;goto B704c72;
case 0x704c74:c.instructions+=19;goto B704c74;
case 0x704c7a:c.instructions+=18;goto B704c7a;
case 0x704c80:c.instructions+=17;goto B704c80;
case 0x704c82:c.instructions+=16;goto B704c82;
case 0x704c84:c.instructions+=15;goto B704c84;
case 0x704c87:c.instructions+=14;goto B704c87;
case 0x704c8b:c.instructions+=13;goto B704c8b;
case 0x704c8d:c.instructions+=12;goto B704c8d;
case 0x704c8f:c.instructions+=11;goto B704c8f;
case 0x704c91:c.instructions+=10;goto B704c91;
case 0x704c97:c.instructions+=9;goto B704c97;
case 0x704c99:c.instructions+=8;goto B704c99;
case 0x704c9b:c.instructions+=7;goto B704c9b;
case 0x704c9e:c.instructions+=6;goto B704c9e;
case 0x704ca2:c.instructions+=5;goto B704ca2;
case 0x704ca8:c.instructions+=4;goto B704ca8;
case 0x704cab:c.instructions+=3;goto B704cab;
case 0x704cb1:c.instructions+=2;goto B704cb1;
case 0x704cb7:c.instructions+=1;goto B704cb7;
case 0x704cb9:goto L704cb9;
case 0x704cbf:c.instructions+=7;goto B704cbf;
case 0x704cc6:c.instructions+=6;goto B704cc6;
case 0x704ccc:c.instructions+=5;goto B704ccc;
case 0x704ccf:c.instructions+=4;goto B704ccf;
case 0x704cd1:c.instructions+=3;goto B704cd1;
case 0x704cd4:c.instructions+=2;goto B704cd4;
case 0x704cd7:c.instructions+=1;goto B704cd7;
case 0x704cd9:goto L704cd9;
case 0x704cdf:c.instructions+=3;goto B704cdf;
case 0x704ce0:c.instructions+=2;goto B704ce0;
case 0x704ce6:c.instructions+=1;goto B704ce6;
case 0x704ceb:goto L704ceb;
case 0x704cec:c.instructions+=1;goto B704cec;
case 0x704cf1:goto L704cf1;
case 0x704cf4:c.instructions+=2;goto B704cf4;
case 0x704cf6:c.instructions+=1;goto B704cf6;
case 0x704cf8:goto L704cf8;
case 0x704cfb:c.instructions+=2;goto B704cfb;
case 0x704cfc:c.instructions+=1;goto B704cfc;
case 0x704d01:goto L704d01;
case 0x704d03:c.instructions+=3;goto B704d03;
case 0x704d04:c.instructions+=2;goto B704d04;
case 0x704d05:c.instructions+=1;goto B704d05;
case 0x704d07:goto L704d07;
case 0x704d08:c.instructions+=1;goto B704d08;
case 0x704d0d:goto L704d0d;
case 0x704d0e:goto L704d0e;
case 0x704d10:c.instructions+=1;goto B704d10;
case 0x704d12:goto L704d12;
case 0x704d18:c.instructions+=1;goto B704d18;
case 0x704d1a:goto L704d1a;
case 0x704d20:c.instructions+=2;goto B704d20;
case 0x704d22:c.instructions+=1;goto B704d22;
case 0x704d24:goto L704d24;
case 0x704d26:c.instructions+=1;goto B704d26;
case 0x704d28:goto L704d28;
case 0x704d2e:c.instructions+=2;goto B704d2e;
case 0x704d34:c.instructions+=1;goto B704d34;
case 0x704d36:goto L704d36;
case 0x704d3c:c.instructions+=9;goto B704d3c;
case 0x704d3f:c.instructions+=8;goto B704d3f;
case 0x704d42:c.instructions+=7;goto B704d42;
case 0x704d45:c.instructions+=6;goto B704d45;
case 0x704d48:c.instructions+=5;goto B704d48;
case 0x704d4a:c.instructions+=4;goto B704d4a;
case 0x704d4d:c.instructions+=3;goto B704d4d;
case 0x704d4e:c.instructions+=2;goto B704d4e;
case 0x704d4f:c.instructions+=1;goto B704d4f;
case 0x704d54:goto L704d54;
case 0x704d5a:c.instructions+=5;goto B704d5a;
case 0x704d5d:c.instructions+=4;goto B704d5d;
case 0x704d5e:c.instructions+=3;goto B704d5e;
case 0x704d61:c.instructions+=2;goto B704d61;
case 0x704d62:c.instructions+=1;goto B704d62;
case 0x704d68:goto L704d68;
case 0x704d6a:c.instructions+=1;goto B704d6a;
case 0x704d6b:goto L704d6b;
case 0x704d6c:c.instructions+=4;goto B704d6c;
case 0x704d6d:c.instructions+=3;goto B704d6d;
case 0x704d6e:c.instructions+=2;goto B704d6e;
case 0x704d6f:c.instructions+=1;goto B704d6f;
case 0x704d70:goto L704d70;
case 0x704d71:c.instructions+=8;goto B704d71;
case 0x704d73:c.instructions+=7;goto B704d73;
case 0x704d76:c.instructions+=6;goto B704d76;
case 0x704d78:c.instructions+=5;goto B704d78;
case 0x704d79:c.instructions+=4;goto B704d79;
case 0x704d7f:c.instructions+=3;goto B704d7f;
case 0x704d85:c.instructions+=2;goto B704d85;
case 0x704d86:c.instructions+=1;goto B704d86;
case 0x704d87:goto L704d87;
case 0x704d88:c.instructions+=27;goto B704d88;
case 0x704d8a:c.instructions+=26;goto B704d8a;
case 0x704d8d:c.instructions+=25;goto B704d8d;
case 0x704d90:c.instructions+=24;goto B704d90;
case 0x704d96:c.instructions+=23;goto B704d96;
case 0x704d9c:c.instructions+=22;goto B704d9c;
case 0x704d9d:c.instructions+=21;goto B704d9d;
case 0x704da0:c.instructions+=20;goto B704da0;
case 0x704da1:c.instructions+=19;goto B704da1;
case 0x704da7:c.instructions+=18;goto B704da7;
case 0x704da8:c.instructions+=17;goto B704da8;
case 0x704dae:c.instructions+=16;goto B704dae;
case 0x704db1:c.instructions+=15;goto B704db1;
case 0x704db4:c.instructions+=14;goto B704db4;
case 0x704db6:c.instructions+=13;goto B704db6;
case 0x704dba:c.instructions+=12;goto B704dba;
case 0x704dbd:c.instructions+=11;goto B704dbd;
case 0x704dbf:c.instructions+=10;goto B704dbf;
case 0x704dc2:c.instructions+=9;goto B704dc2;
case 0x704dc5:c.instructions+=8;goto B704dc5;
case 0x704dc8:c.instructions+=7;goto B704dc8;
case 0x704dcb:c.instructions+=6;goto B704dcb;
case 0x704dcc:c.instructions+=5;goto B704dcc;
case 0x704dce:c.instructions+=4;goto B704dce;
case 0x704dd1:c.instructions+=3;goto B704dd1;
case 0x704dd4:c.instructions+=2;goto B704dd4;
case 0x704dd7:c.instructions+=1;goto B704dd7;
case 0x704dd9:goto L704dd9;
case 0x704ddc:goto L704ddc;
case 0x704ddf:c.instructions+=9;goto B704ddf;
case 0x704de2:c.instructions+=8;goto B704de2;
case 0x704de5:c.instructions+=7;goto B704de5;
case 0x704de7:c.instructions+=6;goto B704de7;
case 0x704de9:c.instructions+=5;goto B704de9;
case 0x704deb:c.instructions+=4;goto B704deb;
case 0x704dee:c.instructions+=3;goto B704dee;
case 0x704df0:c.instructions+=2;goto B704df0;
case 0x704df3:c.instructions+=1;goto B704df3;
case 0x704df6:goto L704df6;
case 0x704df8:goto L704df8;
case 0x704dfa:c.instructions+=1;goto B704dfa;
case 0x704dfd:goto L704dfd;
case 0x704dff:goto L704dff;
case 0x704e02:c.instructions+=9;goto B704e02;
case 0x704e05:c.instructions+=8;goto B704e05;
case 0x704e08:c.instructions+=7;goto B704e08;
case 0x704e0a:c.instructions+=6;goto B704e0a;
case 0x704e0c:c.instructions+=5;goto B704e0c;
case 0x704e0e:c.instructions+=4;goto B704e0e;
case 0x704e11:c.instructions+=3;goto B704e11;
case 0x704e13:c.instructions+=2;goto B704e13;
case 0x704e16:c.instructions+=1;goto B704e16;
case 0x704e19:goto L704e19;
case 0x704e1b:goto L704e1b;
case 0x704e1d:c.instructions+=1;goto B704e1d;
case 0x704e20:goto L704e20;
case 0x704e22:goto L704e22;
case 0x704e25:c.instructions+=8;goto B704e25;
case 0x704e28:c.instructions+=7;goto B704e28;
case 0x704e2b:c.instructions+=6;goto B704e2b;
case 0x704e2e:c.instructions+=5;goto B704e2e;
case 0x704e31:c.instructions+=4;goto B704e31;
case 0x704e33:c.instructions+=3;goto B704e33;
case 0x704e36:c.instructions+=2;goto B704e36;
case 0x704e39:c.instructions+=1;goto B704e39;
case 0x704e3b:goto L704e3b;
case 0x704e3e:goto L704e3e;
case 0x704e44:c.instructions+=13;goto B704e44;
case 0x704e47:c.instructions+=12;goto B704e47;
case 0x704e49:c.instructions+=11;goto B704e49;
case 0x704e4d:c.instructions+=10;goto B704e4d;
case 0x704e54:c.instructions+=9;goto B704e54;
case 0x704e57:c.instructions+=8;goto B704e57;
case 0x704e59:c.instructions+=7;goto B704e59;
case 0x704e5b:c.instructions+=6;goto B704e5b;
case 0x704e5e:c.instructions+=5;goto B704e5e;
case 0x704e60:c.instructions+=4;goto B704e60;
case 0x704e62:c.instructions+=3;goto B704e62;
case 0x704e65:c.instructions+=2;goto B704e65;
case 0x704e68:c.instructions+=1;goto B704e68;
case 0x704e6a:goto L704e6a;
case 0x704e6d:c.instructions+=3;goto B704e6d;
case 0x704e70:c.instructions+=2;goto B704e70;
case 0x704e73:c.instructions+=1;goto B704e73;
case 0x704e75:goto L704e75;
case 0x704e78:goto L704e78;
case 0x704e7b:c.instructions+=2;goto B704e7b;
case 0x704e7d:c.instructions+=1;goto B704e7d;
case 0x704e80:goto L704e80;
case 0x704e82:goto L704e82;
case 0x704e84:c.instructions+=2;goto B704e84;
case 0x704e87:c.instructions+=1;goto B704e87;
case 0x704e8a:goto L704e8a;
case 0x704e8c:goto L704e8c;
case 0x704e8f:c.instructions+=5;goto B704e8f;
case 0x704e92:c.instructions+=4;goto B704e92;
case 0x704e95:c.instructions+=3;goto B704e95;
case 0x704e97:c.instructions+=2;goto B704e97;
case 0x704e99:c.instructions+=1;goto B704e99;
case 0x704e9c:goto L704e9c;
case 0x704e9e:goto L704e9e;
case 0x704ea0:c.instructions+=1;goto B704ea0;
case 0x704ea3:goto L704ea3;
case 0x704ea5:goto L704ea5;
case 0x704ea7:c.instructions+=3;goto B704ea7;
case 0x704eaa:c.instructions+=2;goto B704eaa;
case 0x704ead:c.instructions+=1;goto B704ead;
case 0x704eaf:goto L704eaf;
case 0x704eb5:c.instructions+=22;goto B704eb5;
case 0x704eb8:c.instructions+=21;goto B704eb8;
case 0x704ebe:c.instructions+=20;goto B704ebe;
case 0x704ec1:c.instructions+=19;goto B704ec1;
case 0x704ec4:c.instructions+=18;goto B704ec4;
case 0x704eca:c.instructions+=17;goto B704eca;
case 0x704ecc:c.instructions+=16;goto B704ecc;
case 0x704ed0:c.instructions+=15;goto B704ed0;
case 0x704ed3:c.instructions+=14;goto B704ed3;
case 0x704ed6:c.instructions+=13;goto B704ed6;
case 0x704ed8:c.instructions+=12;goto B704ed8;
case 0x704edb:c.instructions+=11;goto B704edb;
case 0x704edd:c.instructions+=10;goto B704edd;
case 0x704edf:c.instructions+=9;goto B704edf;
case 0x704ee2:c.instructions+=8;goto B704ee2;
case 0x704ee3:c.instructions+=7;goto B704ee3;
case 0x704ee6:c.instructions+=6;goto B704ee6;
case 0x704ee9:c.instructions+=5;goto B704ee9;
case 0x704eeb:c.instructions+=4;goto B704eeb;
case 0x704eee:c.instructions+=3;goto B704eee;
case 0x704ef1:c.instructions+=2;goto B704ef1;
case 0x704ef4:c.instructions+=1;goto B704ef4;
case 0x704ef6:goto L704ef6;
case 0x704ef9:goto L704ef9;
case 0x704efc:c.instructions+=8;goto B704efc;
case 0x704eff:c.instructions+=7;goto B704eff;
case 0x704f01:c.instructions+=6;goto B704f01;
case 0x704f03:c.instructions+=5;goto B704f03;
case 0x704f05:c.instructions+=4;goto B704f05;
case 0x704f08:c.instructions+=3;goto B704f08;
case 0x704f0a:c.instructions+=2;goto B704f0a;
case 0x704f0d:c.instructions+=1;goto B704f0d;
case 0x704f10:goto L704f10;
case 0x704f12:goto L704f12;
case 0x704f14:c.instructions+=1;goto B704f14;
case 0x704f17:goto L704f17;
case 0x704f19:goto L704f19;
case 0x704f1c:c.instructions+=9;goto B704f1c;
case 0x704f1f:c.instructions+=8;goto B704f1f;
case 0x704f22:c.instructions+=7;goto B704f22;
case 0x704f24:c.instructions+=6;goto B704f24;
case 0x704f26:c.instructions+=5;goto B704f26;
case 0x704f28:c.instructions+=4;goto B704f28;
case 0x704f2b:c.instructions+=3;goto B704f2b;
case 0x704f2d:c.instructions+=2;goto B704f2d;
case 0x704f30:c.instructions+=1;goto B704f30;
case 0x704f33:goto L704f33;
case 0x704f35:goto L704f35;
case 0x704f37:c.instructions+=2;goto B704f37;
case 0x704f3a:c.instructions+=1;goto B704f3a;
case 0x704f3d:goto L704f3d;
case 0x704f3f:goto L704f3f;
case 0x704f42:c.instructions+=9;goto B704f42;
case 0x704f45:c.instructions+=8;goto B704f45;
case 0x704f48:c.instructions+=7;goto B704f48;
case 0x704f4b:c.instructions+=6;goto B704f4b;
case 0x704f4d:c.instructions+=5;goto B704f4d;
case 0x704f4f:c.instructions+=4;goto B704f4f;
case 0x704f52:c.instructions+=3;goto B704f52;
case 0x704f55:c.instructions+=2;goto B704f55;
case 0x704f58:c.instructions+=1;goto B704f58;
case 0x704f5a:goto L704f5a;
case 0x704f5d:goto L704f5d;
case 0x704f63:c.instructions+=17;goto B704f63;
case 0x704f66:c.instructions+=16;goto B704f66;
case 0x704f69:c.instructions+=15;goto B704f69;
case 0x704f6b:c.instructions+=14;goto B704f6b;
case 0x704f6e:c.instructions+=13;goto B704f6e;
case 0x704f75:c.instructions+=12;goto B704f75;
case 0x704f78:c.instructions+=11;goto B704f78;
case 0x704f7a:c.instructions+=10;goto B704f7a;
case 0x704f7c:c.instructions+=9;goto B704f7c;
case 0x704f7f:c.instructions+=8;goto B704f7f;
case 0x704f81:c.instructions+=7;goto B704f81;
case 0x704f84:c.instructions+=6;goto B704f84;
case 0x704f87:c.instructions+=5;goto B704f87;
case 0x704f8a:c.instructions+=4;goto B704f8a;
case 0x704f8c:c.instructions+=3;goto B704f8c;
case 0x704f8e:c.instructions+=2;goto B704f8e;
case 0x704f91:c.instructions+=1;goto B704f91;
case 0x704f93:goto L704f93;
case 0x704f96:c.instructions+=2;goto B704f96;
case 0x704f99:c.instructions+=1;goto B704f99;
case 0x704f9c:goto L704f9c;
case 0x704f9f:c.instructions+=4;goto B704f9f;
case 0x704fa2:c.instructions+=3;goto B704fa2;
case 0x704fa4:c.instructions+=2;goto B704fa4;
case 0x704fa6:c.instructions+=1;goto B704fa6;
case 0x704fa9:goto L704fa9;
case 0x704fab:goto L704fab;
case 0x704fad:c.instructions+=3;goto B704fad;
case 0x704fb0:c.instructions+=2;goto B704fb0;
case 0x704fb3:c.instructions+=1;goto B704fb3;
case 0x704fb6:goto L704fb6;
case 0x704fb8:goto L704fb8;
case 0x704fbb:c.instructions+=5;goto B704fbb;
case 0x704fbe:c.instructions+=4;goto B704fbe;
case 0x704fc0:c.instructions+=3;goto B704fc0;
case 0x704fc2:c.instructions+=2;goto B704fc2;
case 0x704fc4:c.instructions+=1;goto B704fc4;
case 0x704fc7:goto L704fc7;
case 0x704fc9:goto L704fc9;
case 0x704fcb:c.instructions+=2;goto B704fcb;
case 0x704fce:c.instructions+=1;goto B704fce;
case 0x704fd1:goto L704fd1;
case 0x704fd3:goto L704fd3;
case 0x704fd5:goto L704fd5;
case 0x704fd8:goto L704fd8;
case 0x704fde:c.instructions+=12;goto B704fde;
case 0x704fe4:c.instructions+=11;goto B704fe4;
case 0x704fe6:c.instructions+=10;goto B704fe6;
case 0x704fea:c.instructions+=9;goto B704fea;
case 0x704fec:c.instructions+=8;goto B704fec;
case 0x704fef:c.instructions+=7;goto B704fef;
case 0x704ff2:c.instructions+=6;goto B704ff2;
case 0x704ff3:c.instructions+=5;goto B704ff3;
case 0x704ff6:c.instructions+=4;goto B704ff6;
case 0x704ff9:c.instructions+=3;goto B704ff9;
case 0x704ffb:c.instructions+=2;goto B704ffb;
case 0x704ffe:c.instructions+=1;goto B704ffe;
default:missing_instruction(c.pc);}
B704000:L704000:{c.instructions+=3;NFSU2_TR(0x704000);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B704003:{NFSU2_TR(0x704003);
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
B704004:{NFSU2_TR(0x704004);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x703ff4u,703);}
}
B704006:L704006:{c.instructions+=3;NFSU2_TR(0x704006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B704007:{NFSU2_TR(0x704007);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B704008:{NFSU2_TR(0x704008);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B704009:L704009:{c.instructions+=9;NFSU2_TR(0x704009);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70400a:{NFSU2_TR(0x70400a);
__builtin_memmove((R+20),(R+16),4);
}
B70400c:{NFSU2_TR(0x70400c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70400f:{NFSU2_TR(0x70400f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704012:{NFSU2_TR(0x704012);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704013:{NFSU2_TR(0x704013);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704015:{NFSU2_TR(0x704015);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B704018:{NFSU2_TR(0x704018);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B70401b:{NFSU2_TR(0x70401b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70401c:L70401c:{c.instructions+=28;NFSU2_TR(0x70401c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B70401f:{NFSU2_TR(0x70401f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B704022:{NFSU2_TR(0x704022);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B704025:{NFSU2_TR(0x704025);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B704028:{NFSU2_TR(0x704028);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B70402a:{NFSU2_TR(0x70402a);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B70402c:{NFSU2_TR(0x70402c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B70402f:{NFSU2_TR(0x70402f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B704032:{NFSU2_TR(0x704032);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B704035:{NFSU2_TR(0x704035);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B704038:{NFSU2_TR(0x704038);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B70403b:{NFSU2_TR(0x70403b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70403e:{NFSU2_TR(0x70403e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B704041:{NFSU2_TR(0x704041);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B704044:{NFSU2_TR(0x704044);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B704047:{NFSU2_TR(0x704047);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70404a:{NFSU2_TR(0x70404a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B70404d:{NFSU2_TR(0x70404d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B704050:{NFSU2_TR(0x704050);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B704053:{NFSU2_TR(0x704053);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B704056:{NFSU2_TR(0x704056);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B704059:{NFSU2_TR(0x704059);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70405c:{NFSU2_TR(0x70405c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B70405f:{NFSU2_TR(0x70405f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B704062:{NFSU2_TR(0x704062);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B704065:{NFSU2_TR(0x704065);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B704068:{NFSU2_TR(0x704068);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B704069:{NFSU2_TR(0x704069);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70401cu);}goto L70401c;}}
}
B70406b:L70406b:{c.instructions+=3;NFSU2_TR(0x70406b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70406c:{NFSU2_TR(0x70406c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70406d:{NFSU2_TR(0x70406d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70406e:L70406e:{c.instructions+=1;NFSU2_TR(0x70406e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704073ull));
TAIL_STATIC(0x70cf14u,70c);
}
B704073:L704073:{c.instructions+=1;NFSU2_TR(0x704073);
TAIL_STATIC(0x70d01au,70d);
}
B704078:L704078:{c.instructions+=5;NFSU2_TR(0x704078);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704079:{NFSU2_TR(0x704079);
__builtin_memmove((R+20),(R+16),4);
}
B70407b:{NFSU2_TR(0x70407b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70407e:{NFSU2_TR(0x70407e);
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
B704080:{NFSU2_TR(0x704080);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70410b;}}
}
B704086:L704086:{c.instructions+=5;NFSU2_TR(0x704086);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704087:{NFSU2_TR(0x704087);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704088:{NFSU2_TR(0x704088);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70408b:{NFSU2_TR(0x70408b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70408c:{NFSU2_TR(0x70408c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70408f:L70408f:{c.instructions+=3;NFSU2_TR(0x70408f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B704091:{NFSU2_TR(0x704091);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B704094:{NFSU2_TR(0x704094);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7040f2;}}
}
B704096:L704096:{c.instructions+=5;NFSU2_TR(0x704096);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B704099:{NFSU2_TR(0x704099);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70409c:{NFSU2_TR(0x70409c);
__builtin_memmove((R+8),(R+4),4);
}
B70409e:{NFSU2_TR(0x70409e);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B7040a0:{NFSU2_TR(0x7040a0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B7040a2:L7040a2:{c.instructions+=15;NFSU2_TR(0x7040a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7040a5:{NFSU2_TR(0x7040a5);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B7040a9:{NFSU2_TR(0x7040a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7040ac:{NFSU2_TR(0x7040ac);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B7040b0:{NFSU2_TR(0x7040b0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+12,u32(r1(U+0)));
}
B7040b3:{NFSU2_TR(0x7040b3);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B7040b7:{NFSU2_TR(0x7040b7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B7040b9:{NFSU2_TR(0x7040b9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+12,u32(r1(U+0)));
}
B7040bc:{NFSU2_TR(0x7040bc);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B7040c0:{NFSU2_TR(0x7040c0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B7040c2:{NFSU2_TR(0x7040c2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+12,u32(r1(U+0)));
}
B7040c5:{NFSU2_TR(0x7040c5);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+12,u32(r8(U+20)));
}
B7040c8:{NFSU2_TR(0x7040c8);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7040cc:{NFSU2_TR(0x7040cc);
u8 U[9];
w4(U+5,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+519))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+519,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B7040cf:{NFSU2_TR(0x7040cf);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L7040d5;}}
}
B7040d1:L7040d1:{c.instructions+=2;NFSU2_TR(0x7040d1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7040d3:{NFSU2_TR(0x7040d3);
{goto L7040e0;}
}
B7040d5:L7040d5:{c.instructions+=3;NFSU2_TR(0x7040d5);
w4(R+12,u32(0xffull));
}
B7040da:{NFSU2_TR(0x7040da);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7040dc:{NFSU2_TR(0x7040dc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7040e0;}}
}
B7040de:L7040de:{c.instructions+=1;NFSU2_TR(0x7040de);
__builtin_memmove((R+0),(R+12),4);
}
B7040e0:L7040e0:{c.instructions+=8;NFSU2_TR(0x7040e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7040e3:{NFSU2_TR(0x7040e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7040e6:{NFSU2_TR(0x7040e6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7040e7:{NFSU2_TR(0x7040e7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7040e8:{NFSU2_TR(0x7040e8);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B7040ec:{NFSU2_TR(0x7040ec);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7040ed:{NFSU2_TR(0x7040ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B7040f0:{NFSU2_TR(0x7040f0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7040a2u);}goto L7040a2;}}
}
B7040f2:L7040f2:{c.instructions+=8;NFSU2_TR(0x7040f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7040f5:{NFSU2_TR(0x7040f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B7040f8:{NFSU2_TR(0x7040f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B7040fb:{NFSU2_TR(0x7040fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7040fe:{NFSU2_TR(0x7040fe);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B704100:{NFSU2_TR(0x704100);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B704103:{NFSU2_TR(0x704103);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B704106:{NFSU2_TR(0x704106);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70408fu);}goto L70408f;}}
}
B704108:L704108:{c.instructions+=3;NFSU2_TR(0x704108);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B704109:{NFSU2_TR(0x704109);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70410a:{NFSU2_TR(0x70410a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70410b:L70410b:{c.instructions+=2;NFSU2_TR(0x70410b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70410c:{NFSU2_TR(0x70410c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70410d:L70410d:{c.instructions+=5;NFSU2_TR(0x70410d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70410e:{NFSU2_TR(0x70410e);
__builtin_memmove((R+20),(R+16),4);
}
B704110:{NFSU2_TR(0x704110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704113:{NFSU2_TR(0x704113);
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
B704115:{NFSU2_TR(0x704115);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7041a0;}}
}
B70411b:L70411b:{c.instructions+=5;NFSU2_TR(0x70411b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70411c:{NFSU2_TR(0x70411c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70411d:{NFSU2_TR(0x70411d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B704120:{NFSU2_TR(0x704120);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704121:{NFSU2_TR(0x704121);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704124:L704124:{c.instructions+=3;NFSU2_TR(0x704124);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B704126:{NFSU2_TR(0x704126);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B704129:{NFSU2_TR(0x704129);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L704186;}}
}
B70412b:L70412b:{c.instructions+=5;NFSU2_TR(0x70412b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70412e:{NFSU2_TR(0x70412e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704131:{NFSU2_TR(0x704131);
__builtin_memmove((R+8),(R+4),4);
}
B704133:{NFSU2_TR(0x704133);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B704135:{NFSU2_TR(0x704135);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B704137:L704137:{c.instructions+=15;NFSU2_TR(0x704137);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70413a:{NFSU2_TR(0x70413a);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B70413e:{NFSU2_TR(0x70413e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B704141:{NFSU2_TR(0x704141);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B704145:{NFSU2_TR(0x704145);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+12,u32(r1(U+0)));
}
B704148:{NFSU2_TR(0x704148);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B70414c:{NFSU2_TR(0x70414c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70414e:{NFSU2_TR(0x70414e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+12,u32(r1(U+0)));
}
B704151:{NFSU2_TR(0x704151);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B704155:{NFSU2_TR(0x704155);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B704157:{NFSU2_TR(0x704157);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+12,u32(r1(U+0)));
}
B70415a:{NFSU2_TR(0x70415a);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+12,u32(r8(U+20)));
}
B70415d:{NFSU2_TR(0x70415d);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B704161:{NFSU2_TR(0x704161);
u8 U[9];
w4(U+5,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+519))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+519,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B704164:{NFSU2_TR(0x704164);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L70416a;}}
}
B704166:L704166:{c.instructions+=2;NFSU2_TR(0x704166);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B704168:{NFSU2_TR(0x704168);
{goto L704175;}
}
B70416a:L70416a:{c.instructions+=3;NFSU2_TR(0x70416a);
w4(R+12,u32(0xffull));
}
B70416f:{NFSU2_TR(0x70416f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704171:{NFSU2_TR(0x704171);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L704175;}}
}
B704173:L704173:{c.instructions+=1;NFSU2_TR(0x704173);
__builtin_memmove((R+0),(R+12),4);
}
B704175:L704175:{c.instructions+=8;NFSU2_TR(0x704175);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B704178:{NFSU2_TR(0x704178);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70417b:{NFSU2_TR(0x70417b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70417c:{NFSU2_TR(0x70417c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B70417d:{NFSU2_TR(0x70417d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B704180:{NFSU2_TR(0x704180);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B704181:{NFSU2_TR(0x704181);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B704184:{NFSU2_TR(0x704184);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704137u);}goto L704137;}}
}
B704186:L704186:{c.instructions+=8;NFSU2_TR(0x704186);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704189:{NFSU2_TR(0x704189);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B70418c:{NFSU2_TR(0x70418c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70418f:{NFSU2_TR(0x70418f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704192:{NFSU2_TR(0x704192);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B704195:{NFSU2_TR(0x704195);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B704198:{NFSU2_TR(0x704198);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B70419b:{NFSU2_TR(0x70419b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704124u);}goto L704124;}}
}
B70419d:L70419d:{c.instructions+=3;NFSU2_TR(0x70419d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70419e:{NFSU2_TR(0x70419e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70419f:{NFSU2_TR(0x70419f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7041a0:L7041a0:{c.instructions+=2;NFSU2_TR(0x7041a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7041a1:{NFSU2_TR(0x7041a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7041a2:L7041a2:{c.instructions+=6;NFSU2_TR(0x7041a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7041a3:{NFSU2_TR(0x7041a3);
__builtin_memmove((R+20),(R+16),4);
}
B7041a5:{NFSU2_TR(0x7041a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7041a6:{NFSU2_TR(0x7041a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7041a9:{NFSU2_TR(0x7041a9);
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
B7041ab:{NFSU2_TR(0x7041ab);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70423a;}}
}
B7041b1:L7041b1:{c.instructions+=10;NFSU2_TR(0x7041b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7041b4:{NFSU2_TR(0x7041b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B7041b7:{NFSU2_TR(0x7041b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7041b8:{NFSU2_TR(0x7041b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7041b9:{NFSU2_TR(0x7041b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7041bc:{NFSU2_TR(0x7041bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7041bf:{NFSU2_TR(0x7041bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7041c2:{NFSU2_TR(0x7041c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7041c5:{NFSU2_TR(0x7041c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7041c6:{NFSU2_TR(0x7041c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7041c9:L7041c9:{c.instructions+=3;NFSU2_TR(0x7041c9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7041cb:{NFSU2_TR(0x7041cb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7041ce:{NFSU2_TR(0x7041ce);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L704228;}}
}
B7041d0:L7041d0:{c.instructions+=4;NFSU2_TR(0x7041d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7041d3:{NFSU2_TR(0x7041d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7041d6:{NFSU2_TR(0x7041d6);
__builtin_memmove((R+8),(R+4),4);
}
B7041d8:{NFSU2_TR(0x7041d8);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B7041da:L7041da:{c.instructions+=14;NFSU2_TR(0x7041da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7041dd:{NFSU2_TR(0x7041dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B7041e0:{NFSU2_TR(0x7041e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B7041e3:{NFSU2_TR(0x7041e3);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B7041e7:{NFSU2_TR(0x7041e7);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B7041eb:{NFSU2_TR(0x7041eb);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B7041ed:{NFSU2_TR(0x7041ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7041ef:{NFSU2_TR(0x7041ef);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B7041f3:{NFSU2_TR(0x7041f3);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B7041f5:{NFSU2_TR(0x7041f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7041f7:{NFSU2_TR(0x7041f7);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+0,u32(r8(U+20)));
}
B7041fa:{NFSU2_TR(0x7041fa);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7041fe:{NFSU2_TR(0x7041fe);
u8 U[9];
w4(U+5,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+519))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+519,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B704201:{NFSU2_TR(0x704201);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L704207;}}
}
B704203:L704203:{c.instructions+=2;NFSU2_TR(0x704203);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B704205:{NFSU2_TR(0x704205);
{goto L704212;}
}
B704207:L704207:{c.instructions+=3;NFSU2_TR(0x704207);
w4(R+12,u32(0xffull));
}
B70420c:{NFSU2_TR(0x70420c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70420e:{NFSU2_TR(0x70420e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L704212;}}
}
B704210:L704210:{c.instructions+=1;NFSU2_TR(0x704210);
__builtin_memmove((R+0),(R+12),4);
}
B704212:L704212:{c.instructions+=7;NFSU2_TR(0x704212);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B704215:{NFSU2_TR(0x704215);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B704218:{NFSU2_TR(0x704218);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B70421b:{NFSU2_TR(0x70421b);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B70421f:{NFSU2_TR(0x70421f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B704220:{NFSU2_TR(0x704220);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B704223:{NFSU2_TR(0x704223);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7041dau);}goto L7041da;}}
}
B704225:L704225:{c.instructions+=1;NFSU2_TR(0x704225);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704228:L704228:{c.instructions+=6;NFSU2_TR(0x704228);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70422b:{NFSU2_TR(0x70422b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+8))));
}
B70422d:{NFSU2_TR(0x70422d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B704230:{NFSU2_TR(0x704230);
w1(R+512,carry<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B704232:{NFSU2_TR(0x704232);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B704235:{NFSU2_TR(0x704235);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7041c9u);}goto L7041c9;}}
}
B704237:L704237:{c.instructions+=3;NFSU2_TR(0x704237);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B704238:{NFSU2_TR(0x704238);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B704239:{NFSU2_TR(0x704239);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70423a:L70423a:{c.instructions+=2;NFSU2_TR(0x70423a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70423b:{NFSU2_TR(0x70423b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70423c:L70423c:{c.instructions+=12;NFSU2_TR(0x70423c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70423d:{NFSU2_TR(0x70423d);
__builtin_memmove((R+20),(R+16),4);
}
B70423f:{NFSU2_TR(0x70423f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B704242:{NFSU2_TR(0x704242);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704245:{NFSU2_TR(0x704245);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B704248:{NFSU2_TR(0x704248);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70424a:{NFSU2_TR(0x70424a);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70424c:{NFSU2_TR(0x70424c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70424e:{NFSU2_TR(0x70424e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B704251:{NFSU2_TR(0x704251);
u8 U[4];
w4(U+0,u32(0x8b3e50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704256:{NFSU2_TR(0x704256);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704257:{NFSU2_TR(0x704257);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70425cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70410du);}goto L70410d;}
}
B70425c:L70425c:{c.instructions+=8;NFSU2_TR(0x70425c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70425f:{NFSU2_TR(0x70425f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704261:{NFSU2_TR(0x704261);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704263:{NFSU2_TR(0x704263);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704265:{NFSU2_TR(0x704265);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704267:{NFSU2_TR(0x704267);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70426a:{NFSU2_TR(0x70426a);
u8 U[4];
w4(U+0,u32(0x8b3e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70426f:{NFSU2_TR(0x70426f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704274ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7041a2u);}goto L7041a2;}
}
B704274:L704274:{c.instructions+=3;NFSU2_TR(0x704274);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B704277:{NFSU2_TR(0x704277);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B704278:{NFSU2_TR(0x704278);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B704279:L704279:{c.instructions+=5;NFSU2_TR(0x704279);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70427a:{NFSU2_TR(0x70427a);
__builtin_memmove((R+20),(R+16),4);
}
B70427c:{NFSU2_TR(0x70427c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70427f:{NFSU2_TR(0x70427f);
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
B704281:{NFSU2_TR(0x704281);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7042d2;}}
}
B704283:L704283:{c.instructions+=7;NFSU2_TR(0x704283);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B704286:{NFSU2_TR(0x704286);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704287:{NFSU2_TR(0x704287);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704288:{NFSU2_TR(0x704288);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70428b:{NFSU2_TR(0x70428b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70428e:{NFSU2_TR(0x70428e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704291:{NFSU2_TR(0x704291);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704292:L704292:{c.instructions+=3;NFSU2_TR(0x704292);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B704294:{NFSU2_TR(0x704294);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B704296:{NFSU2_TR(0x704296);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7042bd;}}
}
B704298:L704298:{c.instructions+=13;NFSU2_TR(0x704298);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70429b:{NFSU2_TR(0x70429b);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B70429f:{NFSU2_TR(0x70429f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+12,u32(r1(U+0)));
}
B7042a2:{NFSU2_TR(0x7042a2);
u8 U[32];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B7042a6:{NFSU2_TR(0x7042a6);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+12,u32(r8(U+20)));
}
B7042a9:{NFSU2_TR(0x7042a9);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B7042ad:{NFSU2_TR(0x7042ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7042b0:{NFSU2_TR(0x7042b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B7042b3:{NFSU2_TR(0x7042b3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7042b4:{NFSU2_TR(0x7042b4);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),2);
s2(u32(r4(U+4)),r2(U+8));
}
B7042b8:{NFSU2_TR(0x7042b8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7042b9:{NFSU2_TR(0x7042b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B7042bb:{NFSU2_TR(0x7042bb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704298u);}goto L704298;}}
}
B7042bd:L7042bd:{c.instructions+=7;NFSU2_TR(0x7042bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7042c0:{NFSU2_TR(0x7042c0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B7042c2:{NFSU2_TR(0x7042c2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7042c4:{NFSU2_TR(0x7042c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7042c7:{NFSU2_TR(0x7042c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B7042ca:{NFSU2_TR(0x7042ca);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B7042cd:{NFSU2_TR(0x7042cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704292u);}goto L704292;}}
}
B7042cf:L7042cf:{c.instructions+=3;NFSU2_TR(0x7042cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7042d0:{NFSU2_TR(0x7042d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7042d1:{NFSU2_TR(0x7042d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7042d2:L7042d2:{c.instructions+=2;NFSU2_TR(0x7042d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7042d3:{NFSU2_TR(0x7042d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7042d4:L7042d4:{c.instructions+=5;NFSU2_TR(0x7042d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7042d5:{NFSU2_TR(0x7042d5);
__builtin_memmove((R+20),(R+16),4);
}
B7042d7:{NFSU2_TR(0x7042d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7042da:{NFSU2_TR(0x7042da);
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
B7042dc:{NFSU2_TR(0x7042dc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70432e;}}
}
B7042de:L7042de:{c.instructions+=7;NFSU2_TR(0x7042de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7042e1:{NFSU2_TR(0x7042e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7042e2:{NFSU2_TR(0x7042e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7042e3:{NFSU2_TR(0x7042e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7042e6:{NFSU2_TR(0x7042e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7042e9:{NFSU2_TR(0x7042e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7042ec:{NFSU2_TR(0x7042ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7042ed:L7042ed:{c.instructions+=3;NFSU2_TR(0x7042ed);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7042ef:{NFSU2_TR(0x7042ef);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7042f1:{NFSU2_TR(0x7042f1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L704317;}}
}
B7042f3:L7042f3:{c.instructions+=13;NFSU2_TR(0x7042f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7042f6:{NFSU2_TR(0x7042f6);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B7042fa:{NFSU2_TR(0x7042fa);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+12,u32(r1(U+0)));
}
B7042fd:{NFSU2_TR(0x7042fd);
u8 U[32];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B704301:{NFSU2_TR(0x704301);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+12,u32(r8(U+20)));
}
B704304:{NFSU2_TR(0x704304);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B704308:{NFSU2_TR(0x704308);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70430b:{NFSU2_TR(0x70430b);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B70430e:{NFSU2_TR(0x70430e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70430f:{NFSU2_TR(0x70430f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B704312:{NFSU2_TR(0x704312);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B704313:{NFSU2_TR(0x704313);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B704315:{NFSU2_TR(0x704315);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7042f3u);}goto L7042f3;}}
}
B704317:L704317:{c.instructions+=8;NFSU2_TR(0x704317);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70431a:{NFSU2_TR(0x70431a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B70431c:{NFSU2_TR(0x70431c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B70431e:{NFSU2_TR(0x70431e);
__builtin_memmove((R+4),(R+24),4);
}
B704320:{NFSU2_TR(0x704320);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B704323:{NFSU2_TR(0x704323);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B704326:{NFSU2_TR(0x704326);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B704329:{NFSU2_TR(0x704329);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7042edu);}goto L7042ed;}}
}
B70432b:L70432b:{c.instructions+=3;NFSU2_TR(0x70432b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70432c:{NFSU2_TR(0x70432c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70432d:{NFSU2_TR(0x70432d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70432e:L70432e:{c.instructions+=2;NFSU2_TR(0x70432e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70432f:{NFSU2_TR(0x70432f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B704330:L704330:{c.instructions+=6;NFSU2_TR(0x704330);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704331:{NFSU2_TR(0x704331);
__builtin_memmove((R+20),(R+16),4);
}
B704333:{NFSU2_TR(0x704333);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704334:{NFSU2_TR(0x704334);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704337:{NFSU2_TR(0x704337);
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
B704339:{NFSU2_TR(0x704339);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L704398;}}
}
B70433b:L70433b:{c.instructions+=9;NFSU2_TR(0x70433b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70433e:{NFSU2_TR(0x70433e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B704341:{NFSU2_TR(0x704341);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704342:{NFSU2_TR(0x704342);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704343:{NFSU2_TR(0x704343);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B704346:{NFSU2_TR(0x704346);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704349:{NFSU2_TR(0x704349);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70434c:{NFSU2_TR(0x70434c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70434d:{NFSU2_TR(0x70434d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B704350:L704350:{c.instructions+=3;NFSU2_TR(0x704350);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B704352:{NFSU2_TR(0x704352);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B704355:{NFSU2_TR(0x704355);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L704386;}}
}
B704357:L704357:{c.instructions+=3;NFSU2_TR(0x704357);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70435a:{NFSU2_TR(0x70435a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B70435d:{NFSU2_TR(0x70435d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704360:L704360:{c.instructions+=13;NFSU2_TR(0x704360);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B704363:{NFSU2_TR(0x704363);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B704366:{NFSU2_TR(0x704366);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B70436a:{NFSU2_TR(0x70436a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B70436c:{NFSU2_TR(0x70436c);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+12,u32(r8(U+20)));
}
B70436f:{NFSU2_TR(0x70436f);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B704373:{NFSU2_TR(0x704373);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B704376:{NFSU2_TR(0x704376);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B704379:{NFSU2_TR(0x704379);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B70437c:{NFSU2_TR(0x70437c);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),2);
s2(u32(r4(U+4)),r2(U+8));
}
B704380:{NFSU2_TR(0x704380);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B704381:{NFSU2_TR(0x704381);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B704384:{NFSU2_TR(0x704384);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704360u);}goto L704360;}}
}
B704386:L704386:{c.instructions+=6;NFSU2_TR(0x704386);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B704389:{NFSU2_TR(0x704389);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+8))));
}
B70438b:{NFSU2_TR(0x70438b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B70438e:{NFSU2_TR(0x70438e);
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B704390:{NFSU2_TR(0x704390);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B704393:{NFSU2_TR(0x704393);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704350u);}goto L704350;}}
}
B704395:L704395:{c.instructions+=3;NFSU2_TR(0x704395);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B704396:{NFSU2_TR(0x704396);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B704397:{NFSU2_TR(0x704397);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B704398:L704398:{c.instructions+=2;NFSU2_TR(0x704398);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B704399:{NFSU2_TR(0x704399);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70439a:L70439a:{c.instructions+=12;NFSU2_TR(0x70439a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70439b:{NFSU2_TR(0x70439b);
__builtin_memmove((R+20),(R+16),4);
}
B70439d:{NFSU2_TR(0x70439d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70439e:{NFSU2_TR(0x70439e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7043a1:{NFSU2_TR(0x7043a1);
w4(R+24,u32(0x8b3e50ull));
}
B7043a6:{NFSU2_TR(0x7043a6);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7043a8:{NFSU2_TR(0x7043a8);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7043aa:{NFSU2_TR(0x7043aa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7043ac:{NFSU2_TR(0x7043ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7043af:{NFSU2_TR(0x7043af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7043b0:{NFSU2_TR(0x7043b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7043b3:{NFSU2_TR(0x7043b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7043b8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7042d4u);}goto L7042d4;}
}
B7043b8:L7043b8:{c.instructions+=8;NFSU2_TR(0x7043b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7043bb:{NFSU2_TR(0x7043bb);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7043bd:{NFSU2_TR(0x7043bd);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7043bf:{NFSU2_TR(0x7043bf);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7043c1:{NFSU2_TR(0x7043c1);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7043c3:{NFSU2_TR(0x7043c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7043c6:{NFSU2_TR(0x7043c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7043c7:{NFSU2_TR(0x7043c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7043ccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704330u);}goto L704330;}
}
B7043cc:L7043cc:{c.instructions+=4;NFSU2_TR(0x7043cc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7043cf:{NFSU2_TR(0x7043cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7043d0:{NFSU2_TR(0x7043d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7043d1:{NFSU2_TR(0x7043d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7043d2:L7043d2:{c.instructions+=6;NFSU2_TR(0x7043d2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7043d3:{NFSU2_TR(0x7043d3);
__builtin_memmove((R+20),(R+16),4);
}
B7043d5:{NFSU2_TR(0x7043d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7043d8:{NFSU2_TR(0x7043d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7043db:{NFSU2_TR(0x7043db);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B7043dd:{NFSU2_TR(0x7043dd);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L7043e6;}}
}
B7043df:L7043df:{c.instructions+=3;NFSU2_TR(0x7043df);
__builtin_memmove((R+0),(R+4),4);
}
B7043e1:{NFSU2_TR(0x7043e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7043e4:{NFSU2_TR(0x7043e4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B7043e6:L7043e6:{c.instructions+=2;NFSU2_TR(0x7043e6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7043e9:{NFSU2_TR(0x7043e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70441b;}}
}
B7043eb:L7043eb:{c.instructions+=3;NFSU2_TR(0x7043eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7043ef:{NFSU2_TR(0x7043ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7043f2:{NFSU2_TR(0x7043f2);
if(r1(R+518)){{goto L704408;}}
}
B7043f4:L7043f4:{c.instructions+=8;NFSU2_TR(0x7043f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7043f7:{NFSU2_TR(0x7043f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x816688ull))));
}
B7043fc:{NFSU2_TR(0x7043fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7043fd:{NFSU2_TR(0x7043fd);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7043ff:{NFSU2_TR(0x7043ff);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704401:{NFSU2_TR(0x704401);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704403:{NFSU2_TR(0x704403);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B704406:{NFSU2_TR(0x704406);
{goto L70443a;}
}
B704408:L704408:{c.instructions+=7;NFSU2_TR(0x704408);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x816708ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70440f:{NFSU2_TR(0x70440f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704410:{NFSU2_TR(0x704410);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704412:{NFSU2_TR(0x704412);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704414:{NFSU2_TR(0x704414);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704416:{NFSU2_TR(0x704416);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B704419:{NFSU2_TR(0x704419);
{goto L704456;}
}
B70441b:L70441b:{c.instructions+=3;NFSU2_TR(0x70441b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70441e:{NFSU2_TR(0x70441e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704420:{NFSU2_TR(0x704420);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L704461;}}
}
B704422:L704422:{c.instructions+=3;NFSU2_TR(0x704422);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B704426:{NFSU2_TR(0x704426);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704429:{NFSU2_TR(0x704429);
if(r1(R+518)){{goto L704448;}}
}
B70442b:L70442b:{c.instructions+=7;NFSU2_TR(0x70442b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70442e:{NFSU2_TR(0x70442e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x816688ull))));
}
B704433:{NFSU2_TR(0x704433);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704434:{NFSU2_TR(0x704434);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704436:{NFSU2_TR(0x704436);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704438:{NFSU2_TR(0x704438);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704439:{NFSU2_TR(0x704439);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70443a:L70443a:{c.instructions+=3;NFSU2_TR(0x70443a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70443d:{NFSU2_TR(0x70443d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70443e:{NFSU2_TR(0x70443e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704443ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704078u);}goto L704078;}
}
B704443:L704443:{c.instructions+=3;NFSU2_TR(0x704443);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B704446:{NFSU2_TR(0x704446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B704447:{NFSU2_TR(0x704447);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B704448:L704448:{c.instructions+=6;NFSU2_TR(0x704448);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x816708ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70444f:{NFSU2_TR(0x70444f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704450:{NFSU2_TR(0x704450);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704452:{NFSU2_TR(0x704452);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704454:{NFSU2_TR(0x704454);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704455:{NFSU2_TR(0x704455);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704456:L704456:{c.instructions+=3;NFSU2_TR(0x704456);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B704459:{NFSU2_TR(0x704459);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70445a:{NFSU2_TR(0x70445a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70445full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704279u);}goto L704279;}
}
B70445f:L70445f:{c.instructions+=1;NFSU2_TR(0x70445f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704443u);}goto L704443;}
}
B704461:L704461:{c.instructions+=4;NFSU2_TR(0x704461);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704462:{NFSU2_TR(0x704462);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B704465:{NFSU2_TR(0x704465);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704467:{NFSU2_TR(0x704467);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7044af;}}
}
B704469:L704469:{c.instructions+=2;NFSU2_TR(0x704469);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70446d:{NFSU2_TR(0x70446d);
if(r1(R+518)){{goto L704488;}}
}
B70446f:L70446f:{c.instructions+=10;NFSU2_TR(0x70446f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B704472:{NFSU2_TR(0x704472);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B704475:{NFSU2_TR(0x704475);
w4(R+0,u32(0x816688ull));
}
B70447a:{NFSU2_TR(0x70447a);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B70447c:{NFSU2_TR(0x70447c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70447d:{NFSU2_TR(0x70447d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B704480:{NFSU2_TR(0x704480);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B704483:{NFSU2_TR(0x704483);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B704485:{NFSU2_TR(0x704485);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B704486:{NFSU2_TR(0x704486);
{goto L7044d2;}
}
B704488:L704488:{c.instructions+=1;NFSU2_TR(0x704488);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B704489:L704489:{c.instructions+=10;NFSU2_TR(0x704489);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70448c:{NFSU2_TR(0x70448c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x816708ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B704493:{NFSU2_TR(0x704493);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704494:{NFSU2_TR(0x704494);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704497:{NFSU2_TR(0x704497);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x816708ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70449e:{NFSU2_TR(0x70449e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70449f:{NFSU2_TR(0x70449f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7044a0:{NFSU2_TR(0x7044a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7044a3:{NFSU2_TR(0x7044a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7044a4:{NFSU2_TR(0x7044a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7044a9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70439au);}goto L70439a;}
}
B7044a9:L7044a9:{c.instructions+=1;NFSU2_TR(0x7044a9);
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
B7044ac:L7044ac:{c.instructions+=3;NFSU2_TR(0x7044ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7044ad:{NFSU2_TR(0x7044ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7044ae:{NFSU2_TR(0x7044ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7044af:L7044af:{c.instructions+=3;NFSU2_TR(0x7044af);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7044b2:{NFSU2_TR(0x7044b2);
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
B7044b4:{NFSU2_TR(0x7044b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7044acu);}goto L7044ac;}}
}
B7044b6:L7044b6:{c.instructions+=2;NFSU2_TR(0x7044b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7044ba:{NFSU2_TR(0x7044ba);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704489u);}goto L704489;}}
}
B7044bc:L7044bc:{c.instructions+=8;NFSU2_TR(0x7044bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7044bf:{NFSU2_TR(0x7044bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B7044c2:{NFSU2_TR(0x7044c2);
w4(R+0,u32(0x816688ull));
}
B7044c7:{NFSU2_TR(0x7044c7);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B7044c9:{NFSU2_TR(0x7044c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7044ca:{NFSU2_TR(0x7044ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7044cd:{NFSU2_TR(0x7044cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B7044d0:{NFSU2_TR(0x7044d0);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B7044d2:L7044d2:{c.instructions+=5;NFSU2_TR(0x7044d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7044d3:{NFSU2_TR(0x7044d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7044d4:{NFSU2_TR(0x7044d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7044d7:{NFSU2_TR(0x7044d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7044d8:{NFSU2_TR(0x7044d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7044ddull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70423cu);}goto L70423c;}
}
B7044dd:L7044dd:{c.instructions+=1;NFSU2_TR(0x7044dd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7044a9u);}goto L7044a9;}
}
B7044df:L7044df:{c.instructions+=5;NFSU2_TR(0x7044df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7044e0:{NFSU2_TR(0x7044e0);
__builtin_memmove((R+20),(R+16),4);
}
B7044e2:{NFSU2_TR(0x7044e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7044e5:{NFSU2_TR(0x7044e5);
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
B7044e7:{NFSU2_TR(0x7044e7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L704534;}}
}
B7044e9:L7044e9:{c.instructions+=7;NFSU2_TR(0x7044e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7044ea:{NFSU2_TR(0x7044ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7044eb:{NFSU2_TR(0x7044eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7044ee:{NFSU2_TR(0x7044ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7044ef:{NFSU2_TR(0x7044ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7044f2:{NFSU2_TR(0x7044f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7044f5:{NFSU2_TR(0x7044f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7044f8:L7044f8:{c.instructions+=3;NFSU2_TR(0x7044f8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7044fa:{NFSU2_TR(0x7044fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7044fd:{NFSU2_TR(0x7044fd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L704521;}}
}
B7044ff:L7044ff:{c.instructions+=12;NFSU2_TR(0x7044ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B704502:{NFSU2_TR(0x704502);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(r1(U+8)));
}
B704506:{NFSU2_TR(0x704506);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+12,u32(r1(U+0)));
}
B704509:{NFSU2_TR(0x704509);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B70450d:{NFSU2_TR(0x70450d);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+12,u32(r8(U+20)));
}
B704510:{NFSU2_TR(0x704510);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B704514:{NFSU2_TR(0x704514);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B704517:{NFSU2_TR(0x704517);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B704518:{NFSU2_TR(0x704518);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70451b:{NFSU2_TR(0x70451b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70451c:{NFSU2_TR(0x70451c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B70451f:{NFSU2_TR(0x70451f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7044ffu);}goto L7044ff;}}
}
B704521:L704521:{c.instructions+=6;NFSU2_TR(0x704521);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B704524:{NFSU2_TR(0x704524);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B704527:{NFSU2_TR(0x704527);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B70452a:{NFSU2_TR(0x70452a);
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B70452c:{NFSU2_TR(0x70452c);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B70452f:{NFSU2_TR(0x70452f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7044f8u);}goto L7044f8;}}
}
B704531:L704531:{c.instructions+=3;NFSU2_TR(0x704531);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B704532:{NFSU2_TR(0x704532);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B704533:{NFSU2_TR(0x704533);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B704534:L704534:{c.instructions+=2;NFSU2_TR(0x704534);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B704535:{NFSU2_TR(0x704535);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B704536:L704536:{c.instructions+=6;NFSU2_TR(0x704536);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704537:{NFSU2_TR(0x704537);
__builtin_memmove((R+20),(R+16),4);
}
B704539:{NFSU2_TR(0x704539);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70453a:{NFSU2_TR(0x70453a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70453d:{NFSU2_TR(0x70453d);
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
B70453f:{NFSU2_TR(0x70453f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70459b;}}
}
B704541:L704541:{c.instructions+=9;NFSU2_TR(0x704541);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704542:{NFSU2_TR(0x704542);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704543:{NFSU2_TR(0x704543);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B704546:{NFSU2_TR(0x704546);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B704549:{NFSU2_TR(0x704549);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70454a:{NFSU2_TR(0x70454a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70454d:{NFSU2_TR(0x70454d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704550:{NFSU2_TR(0x704550);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704553:{NFSU2_TR(0x704553);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B704556:L704556:{c.instructions+=3;NFSU2_TR(0x704556);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B704558:{NFSU2_TR(0x704558);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70455b:{NFSU2_TR(0x70455b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70458b;}}
}
B70455d:L70455d:{c.instructions+=3;NFSU2_TR(0x70455d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B704560:{NFSU2_TR(0x704560);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B704563:{NFSU2_TR(0x704563);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704566:L704566:{c.instructions+=13;NFSU2_TR(0x704566);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B704569:{NFSU2_TR(0x704569);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B70456c:{NFSU2_TR(0x70456c);
u8 U[32];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B704570:{NFSU2_TR(0x704570);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B704572:{NFSU2_TR(0x704572);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+12,u32(r8(U+20)));
}
B704575:{NFSU2_TR(0x704575);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B704579:{NFSU2_TR(0x704579);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70457c:{NFSU2_TR(0x70457c);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B70457f:{NFSU2_TR(0x70457f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B704582:{NFSU2_TR(0x704582);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B704585:{NFSU2_TR(0x704585);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B704586:{NFSU2_TR(0x704586);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B704589:{NFSU2_TR(0x704589);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704566u);}goto L704566;}}
}
B70458b:L70458b:{c.instructions+=5;NFSU2_TR(0x70458b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70458e:{NFSU2_TR(0x70458e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B704591:{NFSU2_TR(0x704591);
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B704593:{NFSU2_TR(0x704593);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B704596:{NFSU2_TR(0x704596);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704556u);}goto L704556;}}
}
B704598:L704598:{c.instructions+=3;NFSU2_TR(0x704598);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B704599:{NFSU2_TR(0x704599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70459a:{NFSU2_TR(0x70459a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70459b:L70459b:{c.instructions+=2;NFSU2_TR(0x70459b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70459c:{NFSU2_TR(0x70459c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70459d:L70459d:{c.instructions+=12;NFSU2_TR(0x70459d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70459e:{NFSU2_TR(0x70459e);
__builtin_memmove((R+20),(R+16),4);
}
B7045a0:{NFSU2_TR(0x7045a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7045a1:{NFSU2_TR(0x7045a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7045a4:{NFSU2_TR(0x7045a4);
w4(R+24,u32(0x8b3e50ull));
}
B7045a9:{NFSU2_TR(0x7045a9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7045ab:{NFSU2_TR(0x7045ab);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7045ad:{NFSU2_TR(0x7045ad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7045af:{NFSU2_TR(0x7045af);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7045b2:{NFSU2_TR(0x7045b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7045b3:{NFSU2_TR(0x7045b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7045b6:{NFSU2_TR(0x7045b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7045bbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7042d4u);}goto L7042d4;}
}
B7045bb:L7045bb:{c.instructions+=8;NFSU2_TR(0x7045bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7045be:{NFSU2_TR(0x7045be);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7045c0:{NFSU2_TR(0x7045c0);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7045c2:{NFSU2_TR(0x7045c2);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7045c4:{NFSU2_TR(0x7045c4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7045c6:{NFSU2_TR(0x7045c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7045c9:{NFSU2_TR(0x7045c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7045ca:{NFSU2_TR(0x7045ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7045cfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704536u);}goto L704536;}
}
B7045cf:L7045cf:{c.instructions+=4;NFSU2_TR(0x7045cf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7045d2:{NFSU2_TR(0x7045d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7045d3:{NFSU2_TR(0x7045d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7045d4:{NFSU2_TR(0x7045d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7045d5:L7045d5:{c.instructions+=6;NFSU2_TR(0x7045d5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7045d6:{NFSU2_TR(0x7045d6);
__builtin_memmove((R+20),(R+16),4);
}
B7045d8:{NFSU2_TR(0x7045d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7045db:{NFSU2_TR(0x7045db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7045de:{NFSU2_TR(0x7045de);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B7045e0:{NFSU2_TR(0x7045e0);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L7045e9;}}
}
B7045e2:L7045e2:{c.instructions+=3;NFSU2_TR(0x7045e2);
__builtin_memmove((R+0),(R+8),4);
}
B7045e4:{NFSU2_TR(0x7045e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7045e7:{NFSU2_TR(0x7045e7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B7045e9:L7045e9:{c.instructions+=2;NFSU2_TR(0x7045e9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7045ec:{NFSU2_TR(0x7045ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L704610;}}
}
B7045ee:L7045ee:{c.instructions+=7;NFSU2_TR(0x7045ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7045f1:{NFSU2_TR(0x7045f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x816708ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7045f8:{NFSU2_TR(0x7045f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7045f9:{NFSU2_TR(0x7045f9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7045fb:{NFSU2_TR(0x7045fb);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7045fd:{NFSU2_TR(0x7045fd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7045ff:{NFSU2_TR(0x7045ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B704602:L704602:{c.instructions+=3;NFSU2_TR(0x704602);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B704605:{NFSU2_TR(0x704605);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704606:{NFSU2_TR(0x704606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70460bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7044dfu);}goto L7044df;}
}
B70460b:L70460b:{c.instructions+=3;NFSU2_TR(0x70460b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70460e:{NFSU2_TR(0x70460e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70460f:{NFSU2_TR(0x70460f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B704610:L704610:{c.instructions+=3;NFSU2_TR(0x704610);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B704613:{NFSU2_TR(0x704613);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704615:{NFSU2_TR(0x704615);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70462a;}}
}
B704617:L704617:{c.instructions+=8;NFSU2_TR(0x704617);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70461a:{NFSU2_TR(0x70461a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x816708ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B704621:{NFSU2_TR(0x704621);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704622:{NFSU2_TR(0x704622);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704624:{NFSU2_TR(0x704624);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704626:{NFSU2_TR(0x704626);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704627:{NFSU2_TR(0x704627);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704628:{NFSU2_TR(0x704628);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704602u);}goto L704602;}
}
B70462a:L70462a:{c.instructions+=4;NFSU2_TR(0x70462a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70462b:{NFSU2_TR(0x70462b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B70462e:{NFSU2_TR(0x70462e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704630:{NFSU2_TR(0x704630);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L704635;}}
}
B704632:L704632:{c.instructions+=2;NFSU2_TR(0x704632);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B704633:{NFSU2_TR(0x704633);
{goto L70463c;}
}
B704635:L704635:{c.instructions+=3;NFSU2_TR(0x704635);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B704638:{NFSU2_TR(0x704638);
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
B70463a:{NFSU2_TR(0x70463a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70465f;}}
}
B70463c:L70463c:{c.instructions+=10;NFSU2_TR(0x70463c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70463f:{NFSU2_TR(0x70463f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x816708ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B704646:{NFSU2_TR(0x704646);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704647:{NFSU2_TR(0x704647);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70464a:{NFSU2_TR(0x70464a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x816708ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B704651:{NFSU2_TR(0x704651);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704652:{NFSU2_TR(0x704652);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704653:{NFSU2_TR(0x704653);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B704656:{NFSU2_TR(0x704656);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704657:{NFSU2_TR(0x704657);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70465cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70459du);}goto L70459d;}
}
B70465c:L70465c:{c.instructions+=1;NFSU2_TR(0x70465c);
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
B70465f:L70465f:{c.instructions+=3;NFSU2_TR(0x70465f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B704660:{NFSU2_TR(0x704660);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B704661:{NFSU2_TR(0x704661);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B704662:L704662:{c.instructions+=19;NFSU2_TR(0x704662);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704663:{NFSU2_TR(0x704663);
__builtin_memmove((R+20),(R+16),4);
}
B704665:{NFSU2_TR(0x704665);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704666:{NFSU2_TR(0x704666);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704667:{NFSU2_TR(0x704667);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704668:{NFSU2_TR(0x704668);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704669:{NFSU2_TR(0x704669);
u8 U[8];
__builtin_memmove((U+4),(R+16),4);
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70466a:{NFSU2_TR(0x70466a);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L70466a_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L70466a_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L70466a_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L70466a_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L70466a_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L70466a_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L70466a_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L70466a_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L70466a_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L70466a_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L70466a_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L70466a_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L70466a_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L70466a_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L70466a_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L70466a_65;}
{SPILL();c.pc=0x70466au;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L70466a_67;
L70466a_35:;
{SPILL();c.pc=0x70466au;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L70466a_67;
L70466a_37:;
{SPILL();c.pc=0x70466au;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L70466a_67;
L70466a_39:;
{SPILL();c.pc=0x70466au;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L70466a_67;
L70466a_41:;
{SPILL();c.pc=0x70466au;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L70466a_67;
L70466a_43:;
{SPILL();c.pc=0x70466au;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L70466a_67;
L70466a_45:;
{SPILL();c.pc=0x70466au;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L70466a_67;
L70466a_47:;
{SPILL();c.pc=0x70466au;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L70466a_67;
L70466a_49:;
{SPILL();c.pc=0x70466au;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L70466a_67;
L70466a_51:;
{SPILL();c.pc=0x70466au;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L70466a_67;
L70466a_53:;
{SPILL();c.pc=0x70466au;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L70466a_67;
L70466a_55:;
{SPILL();c.pc=0x70466au;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L70466a_67;
L70466a_57:;
{SPILL();c.pc=0x70466au;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L70466a_67;
L70466a_59:;
{SPILL();c.pc=0x70466au;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L70466a_67;
L70466a_61:;
{SPILL();c.pc=0x70466au;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L70466a_67;
L70466a_63:;
{SPILL();c.pc=0x70466au;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L70466a_67;
L70466a_65:;
{SPILL();c.pc=0x70466au;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L70466a_67;
L70466a_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B70466c:{NFSU2_TR(0x70466c);
u8 U[8];
{SPILL();c.pc=0x70466cu;V r_=user_op(c,524364,{});SPILL();wv<8>((U+0),r_);}
w4(R+8,u32(u64(r8(U+0))>>32));
w4(R+0,u32(r8(U+0)));
}
B70466e:{NFSU2_TR(0x70466e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704671:{NFSU2_TR(0x704671);
__builtin_memmove((R+28),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B704672:{NFSU2_TR(0x704672);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704675:{NFSU2_TR(0x704675);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B704678:{NFSU2_TR(0x704678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B704679:{NFSU2_TR(0x704679);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70467a:{NFSU2_TR(0x70467a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B70467c:{NFSU2_TR(0x70467c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70467d:{NFSU2_TR(0x70467d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70467e:{NFSU2_TR(0x70467e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70467f:L70467f:{c.instructions+=10;NFSU2_TR(0x70467f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704680:{NFSU2_TR(0x704680);
__builtin_memmove((R+20),(R+16),4);
}
B704682:{NFSU2_TR(0x704682);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B704685:{NFSU2_TR(0x704685);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704686:{NFSU2_TR(0x704686);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704687:{NFSU2_TR(0x704687);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704688:{NFSU2_TR(0x704688);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70468b:{NFSU2_TR(0x70468b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70468c:{NFSU2_TR(0x70468c);
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
B70468e:{NFSU2_TR(0x70468e);
u8 U[4];
__builtin_memmove((U+0),gp(0x783118),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704694ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B704694:L704694:{c.instructions+=2;NFSU2_TR(0x704694);
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
B704696:{NFSU2_TR(0x704696);
if(r1(R+518)){{goto L704722;}}
}
B70469c:L70469c:{c.instructions+=4;NFSU2_TR(0x70469c);
__builtin_memmove((R+28),gp(0x78311c),4);
}
B7046a2:{NFSU2_TR(0x7046a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7046a5:{NFSU2_TR(0x7046a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7046a6:{NFSU2_TR(0x7046a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7046a8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7046a8:L7046a8:{c.instructions+=3;NFSU2_TR(0x7046a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7046ab:{NFSU2_TR(0x7046ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7046ac:{NFSU2_TR(0x7046ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7046b1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704662u);}goto L704662;}
}
B7046b1:L7046b1:{c.instructions+=3;NFSU2_TR(0x7046b1);
__builtin_memmove((R+24),gp(0x7833b8),4);
}
B7046b7:{NFSU2_TR(0x7046b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7046b8:{NFSU2_TR(0x7046b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7046baull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7046ba:L7046ba:{c.instructions+=2;NFSU2_TR(0x7046ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7046bd:{NFSU2_TR(0x7046bd);
{goto L7046c1;}
}
B7046bf:L7046bf:{c.instructions+=1;NFSU2_TR(0x7046bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7046c1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7046c1:L7046c1:{c.instructions+=2;NFSU2_TR(0x7046c1);
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
B7046c3:{NFSU2_TR(0x7046c3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7046bfu);}goto L7046bf;}}
}
B7046c5:L7046c5:{c.instructions+=3;NFSU2_TR(0x7046c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7046c8:{NFSU2_TR(0x7046c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7046c9:{NFSU2_TR(0x7046c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7046cbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7046cb:L7046cb:{c.instructions+=3;NFSU2_TR(0x7046cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B7046ce:{NFSU2_TR(0x7046ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7046cf:{NFSU2_TR(0x7046cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7046d4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704662u);}goto L704662;}
}
B7046d4:L7046d4:{c.instructions+=7;NFSU2_TR(0x7046d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7046d7:{NFSU2_TR(0x7046d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B7046da:{NFSU2_TR(0x7046da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7046db:{NFSU2_TR(0x7046db);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7046dd:{NFSU2_TR(0x7046dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7046e0:{NFSU2_TR(0x7046e0);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7046e3:{NFSU2_TR(0x7046e3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7046eb;}}
}
B7046e5:L7046e5:{c.instructions+=1;NFSU2_TR(0x7046e5);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B7046eb:L7046eb:{c.instructions+=4;NFSU2_TR(0x7046eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7046ee:{NFSU2_TR(0x7046ee);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7046f1:{NFSU2_TR(0x7046f1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7046f3:{NFSU2_TR(0x7046f3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7046fb;}}
}
B7046f5:L7046f5:{c.instructions+=1;NFSU2_TR(0x7046f5);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B7046fb:L7046fb:{c.instructions+=7;NFSU2_TR(0x7046fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7046fe:{NFSU2_TR(0x7046fe);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B704700:{NFSU2_TR(0x704700);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B704703:{NFSU2_TR(0x704703);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B704705:{NFSU2_TR(0x704705);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704708:{NFSU2_TR(0x704708);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B70470b:{NFSU2_TR(0x70470b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L704713;}}
}
B70470d:L70470d:{c.instructions+=1;NFSU2_TR(0x70470d);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B704713:L704713:{c.instructions+=3;NFSU2_TR(0x704713);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B704715:{NFSU2_TR(0x704715);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B70471b:{NFSU2_TR(0x70471b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704720ull));
TAIL_STATIC(0x75bed4u,75b);
}
B704720:L704720:{c.instructions+=1;NFSU2_TR(0x704720);
__builtin_memmove((R+24),(R+0),4);
}
B704722:L704722:{c.instructions+=30;NFSU2_TR(0x704722);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B704724:{NFSU2_TR(0x704724);
w4(R+4,u32(0xc8ull));
}
B704729:{NFSU2_TR(0x704729);
u8 U[12];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70472d:{NFSU2_TR(0x70472d);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70472d);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70472d);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B70472f:{NFSU2_TR(0x70472f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B704731:{NFSU2_TR(0x704731);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704733:{NFSU2_TR(0x704733);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704734:{NFSU2_TR(0x704734);
u8 U[4];
w4(U+0,u32(0x32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704736:{NFSU2_TR(0x704736);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xc8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70473c:{NFSU2_TR(0x70473c);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70473c);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70473c);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B70473e:{NFSU2_TR(0x70473e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B704740:{NFSU2_TR(0x704740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704741:{NFSU2_TR(0x704741);
__builtin_memmove((R+28),(R+0),4);
}
B704743:{NFSU2_TR(0x704743);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((R+0),(U+0),4);
}
B704746:{NFSU2_TR(0x704746);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x704746);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x704746);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B704748:{NFSU2_TR(0x704748);
__builtin_memmove((R+4),(R+0),4);
}
B70474a:{NFSU2_TR(0x70474a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x32ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B70474d:{NFSU2_TR(0x70474d);
__builtin_memmove((R+0),(R+4),4);
}
B70474f:{NFSU2_TR(0x70474f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B704751:{NFSU2_TR(0x704751);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B704752:{NFSU2_TR(0x704752);
__builtin_memmove((R+12),(R+0),4);
}
B704754:{NFSU2_TR(0x704754);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+8))));
}
B704756:{NFSU2_TR(0x704756);
__builtin_memmove((R+0),(R+28),4);
}
B704758:{NFSU2_TR(0x704758);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B70475a:{NFSU2_TR(0x70475a);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B70475c:{NFSU2_TR(0x70475c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B70475d:{NFSU2_TR(0x70475d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B70475f:{NFSU2_TR(0x70475f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B704761:{NFSU2_TR(0x704761);
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
B704763:{NFSU2_TR(0x704763);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L704769;}}
}
B704765:L704765:{c.instructions+=2;NFSU2_TR(0x704765);
__builtin_memmove((R+0),(R+4),4);
}
B704767:{NFSU2_TR(0x704767);
{goto L704774;}
}
B704769:L704769:{c.instructions+=3;NFSU2_TR(0x704769);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x29aull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x29aull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x29aull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70476f:{NFSU2_TR(0x70476f);
__builtin_memmove((R+0),(R+28),4);
}
B704771:{NFSU2_TR(0x704771);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L704774;}}
}
B704773:L704773:{c.instructions+=1;NFSU2_TR(0x704773);
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
B704774:L704774:{c.instructions+=5;NFSU2_TR(0x704774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B704775:{NFSU2_TR(0x704775);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B704776:{NFSU2_TR(0x704776);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B704777:{NFSU2_TR(0x704777);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B704778:{NFSU2_TR(0x704778);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B704779:L704779:{c.instructions+=10;NFSU2_TR(0x704779);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70477a:{NFSU2_TR(0x70477a);
__builtin_memmove((R+20),(R+16),4);
}
B70477c:{NFSU2_TR(0x70477c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B70477f:{NFSU2_TR(0x70477f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B704782:{NFSU2_TR(0x704782);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704783:{NFSU2_TR(0x704783);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B704786:{NFSU2_TR(0x704786);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704787:{NFSU2_TR(0x704787);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70478a:{NFSU2_TR(0x70478a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70478b:{NFSU2_TR(0x70478b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704790ull));
TAIL_STATIC(0x70cf98u,70c);
}
B704790:L704790:{c.instructions+=3;NFSU2_TR(0x704790);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B704793:{NFSU2_TR(0x704793);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B704797:{NFSU2_TR(0x704797);
if(r1(R+518)){{goto L7047a5;}}
}
B704799:L704799:{c.instructions+=3;NFSU2_TR(0x704799);
s4(0x8b9eb0,u32(0x70d30eull));
}
B7047a3:{NFSU2_TR(0x7047a3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7047a4:{NFSU2_TR(0x7047a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7047a5:L7047a5:{c.instructions+=3;NFSU2_TR(0x7047a5);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B7047a9:{NFSU2_TR(0x7047a9);
s4(0x8b9eb0,u32(0x70d2dfull));
}
B7047b3:{NFSU2_TR(0x7047b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7047bf;}}
}
B7047b5:L7047b5:{c.instructions+=1;NFSU2_TR(0x7047b5);
s4(0x8b9eb0,u32(0x703925ull));
}
B7047bf:L7047bf:{c.instructions+=2;NFSU2_TR(0x7047bf);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7047c0:{NFSU2_TR(0x7047c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7047c1:L7047c1:{c.instructions+=7;NFSU2_TR(0x7047c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7047c2:{NFSU2_TR(0x7047c2);
__builtin_memmove((R+20),(R+16),4);
}
B7047c4:{NFSU2_TR(0x7047c4);
u8 U[4];
w4(U+0,u32(0x2030ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7047c9:{NFSU2_TR(0x7047c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7047cb:{NFSU2_TR(0x7047cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7047ce:{NFSU2_TR(0x7047ce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7047d0:{NFSU2_TR(0x7047d0);
u8 U[4];
__builtin_memmove((U+0),gp(0x783318),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7047d6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7047d6:L7047d6:{c.instructions+=2;NFSU2_TR(0x7047d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7047d7:{NFSU2_TR(0x7047d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7047d8:L7047d8:{c.instructions+=4;NFSU2_TR(0x7047d8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7047d9:{NFSU2_TR(0x7047d9);
__builtin_memmove((R+20),(R+16),4);
}
B7047db:{NFSU2_TR(0x7047db);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7047de:{NFSU2_TR(0x7047de);
u8 U[4];
__builtin_memmove((U+0),gp(0x783150),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7047e4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7047e4:L7047e4:{c.instructions+=2;NFSU2_TR(0x7047e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7047e5:{NFSU2_TR(0x7047e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7047e6:L7047e6:{c.instructions+=5;NFSU2_TR(0x7047e6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7047e7:{NFSU2_TR(0x7047e7);
__builtin_memmove((R+20),(R+16),4);
}
B7047e9:{NFSU2_TR(0x7047e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7047ec:{NFSU2_TR(0x7047ec);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7047ee:{NFSU2_TR(0x7047ee);
u8 U[4];
__builtin_memmove((U+0),gp(0x78323c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7047f4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7047f4:L7047f4:{c.instructions+=2;NFSU2_TR(0x7047f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7047f5:{NFSU2_TR(0x7047f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7047f6:L7047f6:{c.instructions+=4;NFSU2_TR(0x7047f6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7047f7:{NFSU2_TR(0x7047f7);
__builtin_memmove((R+20),(R+16),4);
}
B7047f9:{NFSU2_TR(0x7047f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7047fc:{NFSU2_TR(0x7047fc);
u8 U[4];
__builtin_memmove((U+0),gp(0x783240),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704802ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B704802:L704802:{c.instructions+=2;NFSU2_TR(0x704802);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B704803:{NFSU2_TR(0x704803);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B704804:L704804:{c.instructions+=10;NFSU2_TR(0x704804);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704805:{NFSU2_TR(0x704805);
__builtin_memmove((R+20),(R+16),4);
}
B704807:{NFSU2_TR(0x704807);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704808:{NFSU2_TR(0x704808);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704809:{NFSU2_TR(0x704809);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70480c:{NFSU2_TR(0x70480c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B70480e:{NFSU2_TR(0x70480e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70480f:{NFSU2_TR(0x70480f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B704811:{NFSU2_TR(0x704811);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704813:{NFSU2_TR(0x704813);
if(r1(R+518)){{goto L70481c;}}
}
B704815:L704815:{c.instructions+=2;NFSU2_TR(0x704815);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704816:{NFSU2_TR(0x704816);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70481bull));
TAIL_STATIC(0x702eedu,702);
}
B70481b:L70481b:{c.instructions+=1;NFSU2_TR(0x70481b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70481c:L70481c:{c.instructions+=6;NFSU2_TR(0x70481c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((R+12),(U+0),4);
}
B704822:{NFSU2_TR(0x704822);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B704824:{NFSU2_TR(0x704824);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704826:{NFSU2_TR(0x704826);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B704828:{NFSU2_TR(0x704828);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70482b:{NFSU2_TR(0x70482b);
if(r1(R+518)){{goto L704834;}}
}
B70482d:L70482d:{c.instructions+=2;NFSU2_TR(0x70482d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70482e:{NFSU2_TR(0x70482e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704833ull));
TAIL_STATIC(0x702eedu,702);
}
B704833:L704833:{c.instructions+=1;NFSU2_TR(0x704833);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704834:L704834:{c.instructions+=6;NFSU2_TR(0x704834);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B704836:{NFSU2_TR(0x704836);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70483c:{NFSU2_TR(0x70483c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B70483e:{NFSU2_TR(0x70483e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704840:{NFSU2_TR(0x704840);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704846:{NFSU2_TR(0x704846);
if(r1(R+518)){{goto L70484f;}}
}
B704848:L704848:{c.instructions+=2;NFSU2_TR(0x704848);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704849:{NFSU2_TR(0x704849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70484eull));
TAIL_STATIC(0x702eedu,702);
}
B70484e:L70484e:{c.instructions+=1;NFSU2_TR(0x70484e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70484f:L70484f:{c.instructions+=6;NFSU2_TR(0x70484f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B704851:{NFSU2_TR(0x704851);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+12),(U+0),4);
}
B704857:{NFSU2_TR(0x704857);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B704859:{NFSU2_TR(0x704859);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70485b:{NFSU2_TR(0x70485b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704861:{NFSU2_TR(0x704861);
if(r1(R+518)){{goto L70486a;}}
}
B704863:L704863:{c.instructions+=2;NFSU2_TR(0x704863);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704864:{NFSU2_TR(0x704864);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704869ull));
TAIL_STATIC(0x702eedu,702);
}
B704869:L704869:{c.instructions+=1;NFSU2_TR(0x704869);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70486a:L70486a:{c.instructions+=6;NFSU2_TR(0x70486a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B70486c:{NFSU2_TR(0x70486c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((R+12),(U+0),4);
}
B704872:{NFSU2_TR(0x704872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B704874:{NFSU2_TR(0x704874);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704876:{NFSU2_TR(0x704876);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70487c:{NFSU2_TR(0x70487c);
if(r1(R+518)){{goto L704885;}}
}
B70487e:L70487e:{c.instructions+=2;NFSU2_TR(0x70487e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70487f:{NFSU2_TR(0x70487f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704884ull));
TAIL_STATIC(0x702eedu,702);
}
B704884:L704884:{c.instructions+=1;NFSU2_TR(0x704884);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704885:L704885:{c.instructions+=6;NFSU2_TR(0x704885);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B704887:{NFSU2_TR(0x704887);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70488d:{NFSU2_TR(0x70488d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B70488f:{NFSU2_TR(0x70488f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704891:{NFSU2_TR(0x704891);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704897:{NFSU2_TR(0x704897);
if(r1(R+518)){{goto L7048a0;}}
}
B704899:L704899:{c.instructions+=2;NFSU2_TR(0x704899);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70489a:{NFSU2_TR(0x70489a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70489full));
TAIL_STATIC(0x702eedu,702);
}
B70489f:L70489f:{c.instructions+=1;NFSU2_TR(0x70489f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7048a0:L7048a0:{c.instructions+=6;NFSU2_TR(0x7048a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B7048a2:{NFSU2_TR(0x7048a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x700ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7048a8:{NFSU2_TR(0x7048a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7048aa:{NFSU2_TR(0x7048aa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7048ac:{NFSU2_TR(0x7048ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7048b2:{NFSU2_TR(0x7048b2);
if(r1(R+518)){{goto L7048bb;}}
}
B7048b4:L7048b4:{c.instructions+=2;NFSU2_TR(0x7048b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7048b5:{NFSU2_TR(0x7048b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7048baull));
TAIL_STATIC(0x702eedu,702);
}
B7048ba:L7048ba:{c.instructions+=1;NFSU2_TR(0x7048ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7048bb:L7048bb:{c.instructions+=6;NFSU2_TR(0x7048bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B7048bd:{NFSU2_TR(0x7048bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((R+12),(U+0),4);
}
B7048c3:{NFSU2_TR(0x7048c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7048c5:{NFSU2_TR(0x7048c5);
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
B7048c7:{NFSU2_TR(0x7048c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7048cd:{NFSU2_TR(0x7048cd);
if(r1(R+518)){{goto L7048d6;}}
}
B7048cf:L7048cf:{c.instructions+=2;NFSU2_TR(0x7048cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7048d0:{NFSU2_TR(0x7048d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7048d5ull));
TAIL_STATIC(0x702eedu,702);
}
B7048d5:L7048d5:{c.instructions+=1;NFSU2_TR(0x7048d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7048d6:L7048d6:{c.instructions+=7;NFSU2_TR(0x7048d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B7048d8:{NFSU2_TR(0x7048d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7048de:{NFSU2_TR(0x7048de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7048df:{NFSU2_TR(0x7048df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7048e0:{NFSU2_TR(0x7048e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7048e1:{NFSU2_TR(0x7048e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7048e2:{NFSU2_TR(0x7048e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7048e3:L7048e3:{c.instructions+=7;NFSU2_TR(0x7048e3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7048e4:{NFSU2_TR(0x7048e4);
__builtin_memmove((R+20),(R+16),4);
}
B7048e6:{NFSU2_TR(0x7048e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7048e7:{NFSU2_TR(0x7048e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7048e8:{NFSU2_TR(0x7048e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7048eb:{NFSU2_TR(0x7048eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7048ec:{NFSU2_TR(0x7048ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7048f1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704804u);}goto L704804;}
}
B7048f1:L7048f1:{c.instructions+=4;NFSU2_TR(0x7048f1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7048f3:{NFSU2_TR(0x7048f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7048f4:{NFSU2_TR(0x7048f4);
u8 U[4];
w4(U+0,u32(0x320ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7048f9:{NFSU2_TR(0x7048f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7048feull));
TAIL_STATIC(0x702edfu,702);
}
B7048fe:L7048fe:{c.instructions+=4;NFSU2_TR(0x7048fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B704901:{NFSU2_TR(0x704901);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704903:{NFSU2_TR(0x704903);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B704905:{NFSU2_TR(0x704905);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L704915;}}
}
B704907:L704907:{c.instructions+=2;NFSU2_TR(0x704907);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704908:{NFSU2_TR(0x704908);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70490dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704804u);}goto L704804;}
}
B70490d:L70490d:{c.instructions+=3;NFSU2_TR(0x70490d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70490e:{NFSU2_TR(0x70490e);
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
B704910:{NFSU2_TR(0x704910);
{goto L704a69;}
}
B704915:L704915:{c.instructions+=12;NFSU2_TR(0x704915);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704916:{NFSU2_TR(0x704916);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B704919:{NFSU2_TR(0x704919);
u8 U[4];
w4(U+0,u32(0xffffffe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70491b:{NFSU2_TR(0x70491b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70491c:{NFSU2_TR(0x70491c);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B70491e:{NFSU2_TR(0x70491e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704921:{NFSU2_TR(0x704921);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704927:{NFSU2_TR(0x704927);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
}
B70492a:{NFSU2_TR(0x70492a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70492d:{NFSU2_TR(0x70492d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70492e:{NFSU2_TR(0x70492e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70492f:{NFSU2_TR(0x70492f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704934ull));
TAIL_STATIC(0x702edfu,702);
}
B704934:L704934:{c.instructions+=5;NFSU2_TR(0x704934);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704936:{NFSU2_TR(0x704936);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704937:{NFSU2_TR(0x704937);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704938:{NFSU2_TR(0x704938);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70493e:{NFSU2_TR(0x70493e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70494e;}}
}
B704940:L704940:{c.instructions+=2;NFSU2_TR(0x704940);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704941:{NFSU2_TR(0x704941);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704946ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704804u);}goto L704804;}
}
B704946:L704946:{c.instructions+=3;NFSU2_TR(0x704946);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704947:{NFSU2_TR(0x704947);
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
B704949:{NFSU2_TR(0x704949);
{goto L704a68;}
}
B70494e:L70494e:{c.instructions+=10;NFSU2_TR(0x70494e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B704951:{NFSU2_TR(0x704951);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B704953:{NFSU2_TR(0x704953);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704959:{NFSU2_TR(0x704959);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70495f:{NFSU2_TR(0x70495f);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B704961:{NFSU2_TR(0x704961);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
}
B704964:{NFSU2_TR(0x704964);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B704967:{NFSU2_TR(0x704967);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704968:{NFSU2_TR(0x704968);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704969:{NFSU2_TR(0x704969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70496eull));
TAIL_STATIC(0x702edfu,702);
}
B70496e:L70496e:{c.instructions+=5;NFSU2_TR(0x70496e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704970:{NFSU2_TR(0x704970);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704971:{NFSU2_TR(0x704971);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704972:{NFSU2_TR(0x704972);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704978:{NFSU2_TR(0x704978);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704940u);}goto L704940;}}
}
B70497a:L70497a:{c.instructions+=10;NFSU2_TR(0x70497a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B70497d:{NFSU2_TR(0x70497d);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B70497f:{NFSU2_TR(0x70497f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704985:{NFSU2_TR(0x704985);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70498b:{NFSU2_TR(0x70498b);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70498d:{NFSU2_TR(0x70498d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
}
B704990:{NFSU2_TR(0x704990);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B704993:{NFSU2_TR(0x704993);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704994:{NFSU2_TR(0x704994);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704995:{NFSU2_TR(0x704995);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70499aull));
TAIL_STATIC(0x702edfu,702);
}
B70499a:L70499a:{c.instructions+=5;NFSU2_TR(0x70499a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70499c:{NFSU2_TR(0x70499c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70499d:{NFSU2_TR(0x70499d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70499e:{NFSU2_TR(0x70499e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7049a4:{NFSU2_TR(0x7049a4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704940u);}goto L704940;}}
}
B7049a6:L7049a6:{c.instructions+=8;NFSU2_TR(0x7049a6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B7049a9:{NFSU2_TR(0x7049a9);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B7049ab:{NFSU2_TR(0x7049ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7049b1:{NFSU2_TR(0x7049b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7049b7:{NFSU2_TR(0x7049b7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B7049ba:{NFSU2_TR(0x7049ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7049bb:{NFSU2_TR(0x7049bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7049bc:{NFSU2_TR(0x7049bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7049c1ull));
TAIL_STATIC(0x702edfu,702);
}
B7049c1:L7049c1:{c.instructions+=5;NFSU2_TR(0x7049c1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7049c3:{NFSU2_TR(0x7049c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7049c4:{NFSU2_TR(0x7049c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7049c5:{NFSU2_TR(0x7049c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7049cb:{NFSU2_TR(0x7049cb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704940u);}goto L704940;}}
}
B7049d1:L7049d1:{c.instructions+=8;NFSU2_TR(0x7049d1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B7049d4:{NFSU2_TR(0x7049d4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B7049d6:{NFSU2_TR(0x7049d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7049dc:{NFSU2_TR(0x7049dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7049e2:{NFSU2_TR(0x7049e2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B7049e5:{NFSU2_TR(0x7049e5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7049e6:{NFSU2_TR(0x7049e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7049e7:{NFSU2_TR(0x7049e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7049ecull));
TAIL_STATIC(0x702edfu,702);
}
B7049ec:L7049ec:{c.instructions+=5;NFSU2_TR(0x7049ec);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7049ee:{NFSU2_TR(0x7049ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7049ef:{NFSU2_TR(0x7049ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7049f0:{NFSU2_TR(0x7049f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7049f6:{NFSU2_TR(0x7049f6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704940u);}goto L704940;}}
}
B7049fc:L7049fc:{c.instructions+=8;NFSU2_TR(0x7049fc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B7049ff:{NFSU2_TR(0x7049ff);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B704a01:{NFSU2_TR(0x704a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704a07:{NFSU2_TR(0x704a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704a0d:{NFSU2_TR(0x704a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x20ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B704a14:{NFSU2_TR(0x704a14);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704a15:{NFSU2_TR(0x704a15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704a16:{NFSU2_TR(0x704a16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704a1bull));
TAIL_STATIC(0x702edfu,702);
}
B704a1b:L704a1b:{c.instructions+=5;NFSU2_TR(0x704a1b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704a1d:{NFSU2_TR(0x704a1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704a1e:{NFSU2_TR(0x704a1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704a1f:{NFSU2_TR(0x704a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x700ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704a25:{NFSU2_TR(0x704a25);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704940u);}goto L704940;}}
}
B704a2b:L704a2b:{c.instructions+=8;NFSU2_TR(0x704a2b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B704a2e:{NFSU2_TR(0x704a2e);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B704a30:{NFSU2_TR(0x704a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704a36:{NFSU2_TR(0x704a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704a3c:{NFSU2_TR(0x704a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x20ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B704a43:{NFSU2_TR(0x704a43);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704a44:{NFSU2_TR(0x704a44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704a45:{NFSU2_TR(0x704a45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704a4aull));
TAIL_STATIC(0x702edfu,702);
}
B704a4a:L704a4a:{c.instructions+=5;NFSU2_TR(0x704a4a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704a4c:{NFSU2_TR(0x704a4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704a4d:{NFSU2_TR(0x704a4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704a4e:{NFSU2_TR(0x704a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704a54:{NFSU2_TR(0x704a54);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704940u);}goto L704940;}}
}
B704a5a:L704a5a:{c.instructions+=5;NFSU2_TR(0x704a5a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B704a5d:{NFSU2_TR(0x704a5d);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B704a5f:{NFSU2_TR(0x704a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704a65:{NFSU2_TR(0x704a65);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B704a67:{NFSU2_TR(0x704a67);
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
B704a68:L704a68:{c.instructions+=1;NFSU2_TR(0x704a68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B704a69:L704a69:{c.instructions+=4;NFSU2_TR(0x704a69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B704a6a:{NFSU2_TR(0x704a6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B704a6b:{NFSU2_TR(0x704a6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B704a6c:{NFSU2_TR(0x704a6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B704a6d:L704a6d:{c.instructions+=9;NFSU2_TR(0x704a6d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704a6e:{NFSU2_TR(0x704a6e);
__builtin_memmove((R+20),(R+16),4);
}
B704a70:{NFSU2_TR(0x704a70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704a71:{NFSU2_TR(0x704a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B704a74:{NFSU2_TR(0x704a74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704a7a:{NFSU2_TR(0x704a7a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704a7b:{NFSU2_TR(0x704a7b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B704a7d:{NFSU2_TR(0x704a7d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704a7f:{NFSU2_TR(0x704a7f);
if(r1(R+518)){{goto L704a88;}}
}
B704a81:L704a81:{c.instructions+=2;NFSU2_TR(0x704a81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704a82:{NFSU2_TR(0x704a82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704a87ull));
TAIL_STATIC(0x702eedu,702);
}
B704a87:L704a87:{c.instructions+=1;NFSU2_TR(0x704a87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704a88:L704a88:{c.instructions+=3;NFSU2_TR(0x704a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704a8e:{NFSU2_TR(0x704a8e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704a90:{NFSU2_TR(0x704a90);
if(r1(R+518)){{goto L704a99;}}
}
B704a92:L704a92:{c.instructions+=2;NFSU2_TR(0x704a92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704a93:{NFSU2_TR(0x704a93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704a98ull));
TAIL_STATIC(0x702eedu,702);
}
B704a98:L704a98:{c.instructions+=1;NFSU2_TR(0x704a98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704a99:L704a99:{c.instructions+=3;NFSU2_TR(0x704a99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x258ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704a9f:{NFSU2_TR(0x704a9f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704aa1:{NFSU2_TR(0x704aa1);
if(r1(R+518)){{goto L704aaa;}}
}
B704aa3:L704aa3:{c.instructions+=2;NFSU2_TR(0x704aa3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704aa4:{NFSU2_TR(0x704aa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704aa9ull));
TAIL_STATIC(0x702eedu,702);
}
B704aa9:L704aa9:{c.instructions+=1;NFSU2_TR(0x704aa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704aaa:L704aaa:{c.instructions+=3;NFSU2_TR(0x704aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x260ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704ab0:{NFSU2_TR(0x704ab0);
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
B704ab2:{NFSU2_TR(0x704ab2);
if(r1(R+518)){{goto L704abb;}}
}
B704ab4:L704ab4:{c.instructions+=2;NFSU2_TR(0x704ab4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704ab5:{NFSU2_TR(0x704ab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704abaull));
TAIL_STATIC(0x702eedu,702);
}
B704aba:L704aba:{c.instructions+=1;NFSU2_TR(0x704aba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704abb:L704abb:{c.instructions+=11;NFSU2_TR(0x704abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704ac1:{NFSU2_TR(0x704ac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704ac7:{NFSU2_TR(0x704ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x258ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704acd:{NFSU2_TR(0x704acd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704ad3:{NFSU2_TR(0x704ad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704ad9:{NFSU2_TR(0x704ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704adf:{NFSU2_TR(0x704adf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x260ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704ae5:{NFSU2_TR(0x704ae5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B704ae6:{NFSU2_TR(0x704ae6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B704ae7:{NFSU2_TR(0x704ae7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B704ae8:{NFSU2_TR(0x704ae8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B704ae9:L704ae9:{c.instructions+=7;NFSU2_TR(0x704ae9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704aea:{NFSU2_TR(0x704aea);
__builtin_memmove((R+20),(R+16),4);
}
B704aec:{NFSU2_TR(0x704aec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704aed:{NFSU2_TR(0x704aed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B704af0:{NFSU2_TR(0x704af0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704af1:{NFSU2_TR(0x704af1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704af2:{NFSU2_TR(0x704af2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704af7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704a6du);}goto L704a6d;}
}
B704af7:L704af7:{c.instructions+=6;NFSU2_TR(0x704af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704afd:{NFSU2_TR(0x704afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B704b00:{NFSU2_TR(0x704b00);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B704b04:{NFSU2_TR(0x704b04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704b06:{NFSU2_TR(0x704b06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704b07:{NFSU2_TR(0x704b07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704b0cull));
TAIL_STATIC(0x702edfu,702);
}
B704b0c:L704b0c:{c.instructions+=4;NFSU2_TR(0x704b0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B704b0f:{NFSU2_TR(0x704b0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B704b11:{NFSU2_TR(0x704b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704b17:{NFSU2_TR(0x704b17);
if(r1(R+518)){{goto L704b6d;}}
}
B704b19:L704b19:{c.instructions+=8;NFSU2_TR(0x704b19);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B704b1c:{NFSU2_TR(0x704b1c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe0ull))));
}
B704b1f:{NFSU2_TR(0x704b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704b25:{NFSU2_TR(0x704b25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704b2b:{NFSU2_TR(0x704b2b);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B704b2f:{NFSU2_TR(0x704b2f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704b31:{NFSU2_TR(0x704b31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704b32:{NFSU2_TR(0x704b32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704b37ull));
TAIL_STATIC(0x702edfu,702);
}
B704b37:L704b37:{c.instructions+=5;NFSU2_TR(0x704b37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B704b39:{NFSU2_TR(0x704b39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704b3a:{NFSU2_TR(0x704b3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704b3b:{NFSU2_TR(0x704b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704b41:{NFSU2_TR(0x704b41);
if(r1(R+518)){{goto L704b6d;}}
}
B704b43:L704b43:{c.instructions+=8;NFSU2_TR(0x704b43);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B704b46:{NFSU2_TR(0x704b46);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe0ull))));
}
B704b49:{NFSU2_TR(0x704b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704b4f:{NFSU2_TR(0x704b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704b55:{NFSU2_TR(0x704b55);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B704b59:{NFSU2_TR(0x704b59);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704b5b:{NFSU2_TR(0x704b5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704b5c:{NFSU2_TR(0x704b5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704b61ull));
TAIL_STATIC(0x702edfu,702);
}
B704b61:L704b61:{c.instructions+=5;NFSU2_TR(0x704b61);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B704b63:{NFSU2_TR(0x704b63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704b64:{NFSU2_TR(0x704b64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704b65:{NFSU2_TR(0x704b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x258ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704b6b:{NFSU2_TR(0x704b6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L704b78;}}
}
B704b6d:L704b6d:{c.instructions+=2;NFSU2_TR(0x704b6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704b6e:{NFSU2_TR(0x704b6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704b73ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704a6du);}goto L704a6d;}
}
B704b73:L704b73:{c.instructions+=3;NFSU2_TR(0x704b73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704b74:{NFSU2_TR(0x704b74);
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
B704b76:{NFSU2_TR(0x704b76);
{goto L704b87;}
}
B704b78:L704b78:{c.instructions+=5;NFSU2_TR(0x704b78);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B704b7b:{NFSU2_TR(0x704b7b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe0ull))));
}
B704b7e:{NFSU2_TR(0x704b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704b84:{NFSU2_TR(0x704b84);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B704b86:{NFSU2_TR(0x704b86);
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
B704b87:L704b87:{c.instructions+=4;NFSU2_TR(0x704b87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B704b88:{NFSU2_TR(0x704b88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B704b89:{NFSU2_TR(0x704b89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B704b8a:{NFSU2_TR(0x704b8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B704b8b:L704b8b:{c.instructions+=11;NFSU2_TR(0x704b8b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704b8c:{NFSU2_TR(0x704b8c);
__builtin_memmove((R+20),(R+16),4);
}
B704b8e:{NFSU2_TR(0x704b8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704b8f:{NFSU2_TR(0x704b8f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704b90:{NFSU2_TR(0x704b90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704b91:{NFSU2_TR(0x704b91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704b92:{NFSU2_TR(0x704b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B704b95:{NFSU2_TR(0x704b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704b9b:{NFSU2_TR(0x704b9b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B704b9d:{NFSU2_TR(0x704b9d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704b9e:{NFSU2_TR(0x704b9e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L704bac;}}
}
B704ba0:L704ba0:{c.instructions+=4;NFSU2_TR(0x704ba0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704ba1:{NFSU2_TR(0x704ba1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704ba3:{NFSU2_TR(0x704ba3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704ba4:{NFSU2_TR(0x704ba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704ba9ull));
TAIL_STATIC(0x702593u,702);
}
B704ba9:L704ba9:{c.instructions+=1;NFSU2_TR(0x704ba9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B704bac:L704bac:{c.instructions+=72;NFSU2_TR(0x704bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B704bb2:{NFSU2_TR(0x704bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B704bb8:{NFSU2_TR(0x704bb8);
__builtin_memmove((R+12),(R+28),4);
}
B704bba:{NFSU2_TR(0x704bba);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B704bbd:{NFSU2_TR(0x704bbd);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B704bbf:{NFSU2_TR(0x704bbf);
__builtin_memmove((R+0),(R+12),4);
}
B704bc1:{NFSU2_TR(0x704bc1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B704bc4:{NFSU2_TR(0x704bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704bc7:{NFSU2_TR(0x704bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704bcd:{NFSU2_TR(0x704bcd);
__builtin_memmove((R+0),(R+28),4);
}
B704bcf:{NFSU2_TR(0x704bcf);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x704bcf);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x704bcf);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B704bd5:{NFSU2_TR(0x704bd5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B704bd7:{NFSU2_TR(0x704bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B704bde:{NFSU2_TR(0x704bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704be4:{NFSU2_TR(0x704be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704bea:{NFSU2_TR(0x704bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704bed:{NFSU2_TR(0x704bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704bf3:{NFSU2_TR(0x704bf3);
__builtin_memmove((R+0),(R+4),4);
}
B704bf5:{NFSU2_TR(0x704bf5);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x704bf5);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x704bf5);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B704bfb:{NFSU2_TR(0x704bfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704c01:{NFSU2_TR(0x704c01);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B704c05:{NFSU2_TR(0x704c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B704c08:{NFSU2_TR(0x704c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704c0e:{NFSU2_TR(0x704c0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B704c11:{NFSU2_TR(0x704c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x204ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704c17:{NFSU2_TR(0x704c17);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B704c19:{NFSU2_TR(0x704c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704c1f:{NFSU2_TR(0x704c1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B704c22:{NFSU2_TR(0x704c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704c28:{NFSU2_TR(0x704c28);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B704c29:{NFSU2_TR(0x704c29);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B704c2b:{NFSU2_TR(0x704c2b);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B704c2d:{NFSU2_TR(0x704c2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704c33:{NFSU2_TR(0x704c33);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B704c36:{NFSU2_TR(0x704c36);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B704c39:{NFSU2_TR(0x704c39);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B704c3c:{NFSU2_TR(0x704c3c);
__builtin_memmove((R+8),(R+0),4);
}
B704c3e:{NFSU2_TR(0x704c3e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B704c41:{NFSU2_TR(0x704c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704c44:{NFSU2_TR(0x704c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704c4a:{NFSU2_TR(0x704c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B704c4d:{NFSU2_TR(0x704c4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704c50:{NFSU2_TR(0x704c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B704c53:{NFSU2_TR(0x704c53);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B704c55:{NFSU2_TR(0x704c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704c5b:{NFSU2_TR(0x704c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704c61:{NFSU2_TR(0x704c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704c67:{NFSU2_TR(0x704c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B704c6a:{NFSU2_TR(0x704c6a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B704c6c:{NFSU2_TR(0x704c6c);
__builtin_memmove((R+0),(R+4),4);
}
B704c6e:{NFSU2_TR(0x704c6e);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B704c70:{NFSU2_TR(0x704c70);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B704c72:{NFSU2_TR(0x704c72);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B704c74:{NFSU2_TR(0x704c74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704c7a:{NFSU2_TR(0x704c7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704c80:{NFSU2_TR(0x704c80);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B704c82:{NFSU2_TR(0x704c82);
w4(R+0,u32(0-u32(r4(R+0))));
}
B704c84:{NFSU2_TR(0x704c84);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B704c87:{NFSU2_TR(0x704c87);
u8 U[12];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B704c8b:{NFSU2_TR(0x704c8b);
__builtin_memmove((R+0),(R+28),4);
}
B704c8d:{NFSU2_TR(0x704c8d);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B704c8f:{NFSU2_TR(0x704c8f);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B704c91:{NFSU2_TR(0x704c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704c97:{NFSU2_TR(0x704c97);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B704c99:{NFSU2_TR(0x704c99);
w4(R+0,u32(0-u32(r4(R+0))));
}
B704c9b:{NFSU2_TR(0x704c9b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B704c9e:{NFSU2_TR(0x704c9e);
u8 U[12];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B704ca2:{NFSU2_TR(0x704ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704ca8:{NFSU2_TR(0x704ca8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B704cab:{NFSU2_TR(0x704cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704cb1:{NFSU2_TR(0x704cb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B704cb7:{NFSU2_TR(0x704cb7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B704cb9:L704cb9:{c.instructions+=8;NFSU2_TR(0x704cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7c5528ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B704cbf:{NFSU2_TR(0x704cbf);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B704cc6:{NFSU2_TR(0x704cc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7c552cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B704ccc:{NFSU2_TR(0x704ccc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B704ccf:{NFSU2_TR(0x704ccf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B704cd1:{NFSU2_TR(0x704cd1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B704cd4:{NFSU2_TR(0x704cd4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x60ull))));
}
B704cd7:{NFSU2_TR(0x704cd7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704cb9u);}goto L704cb9;}}
}
B704cd9:L704cd9:{c.instructions+=4;NFSU2_TR(0x704cd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B704cdf:{NFSU2_TR(0x704cdf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704ce0:{NFSU2_TR(0x704ce0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B704ce6:{NFSU2_TR(0x704ce6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704cebull));
TAIL_STATIC(0x70322du,703);
}
B704ceb:L704ceb:{c.instructions+=2;NFSU2_TR(0x704ceb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704cec:{NFSU2_TR(0x704cec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704cf1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7048e3u);}goto L7048e3;}
}
B704cf1:L704cf1:{c.instructions+=3;NFSU2_TR(0x704cf1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B704cf4:{NFSU2_TR(0x704cf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B704cf6:{NFSU2_TR(0x704cf6);
if(r1(R+518)){{goto L704d0e;}}
}
B704cf8:L704cf8:{c.instructions+=3;NFSU2_TR(0x704cf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B704cfb:{NFSU2_TR(0x704cfb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704cfc:{NFSU2_TR(0x704cfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704d01ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704ae9u);}goto L704ae9;}
}
B704d01:L704d01:{c.instructions+=4;NFSU2_TR(0x704d01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B704d03:{NFSU2_TR(0x704d03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704d04:{NFSU2_TR(0x704d04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704d05:{NFSU2_TR(0x704d05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L704d12;}}
}
B704d07:L704d07:{c.instructions+=2;NFSU2_TR(0x704d07);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704d08:{NFSU2_TR(0x704d08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704d0dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704804u);}goto L704804;}
}
B704d0d:L704d0d:{c.instructions+=1;NFSU2_TR(0x704d0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704d0e:L704d0e:{c.instructions+=2;NFSU2_TR(0x704d0e);
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
B704d10:{NFSU2_TR(0x704d10);
{goto L704d6b;}
}
B704d12:L704d12:{c.instructions+=2;NFSU2_TR(0x704d12);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B704d18:{NFSU2_TR(0x704d18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L704d68;}}
}
B704d1a:L704d1a:{c.instructions+=3;NFSU2_TR(0x704d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B704d20:{NFSU2_TR(0x704d20);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704d22:{NFSU2_TR(0x704d22);
if(r1(R+518)){{goto L704d68;}}
}
B704d24:L704d24:{c.instructions+=2;NFSU2_TR(0x704d24);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B704d26:{NFSU2_TR(0x704d26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L704d36;}}
}
B704d28:L704d28:{c.instructions+=3;NFSU2_TR(0x704d28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704d2e:{NFSU2_TR(0x704d2e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B704d34:{NFSU2_TR(0x704d34);
if(r1(R+518)){{goto L704d68;}}
}
B704d36:L704d36:{c.instructions+=10;NFSU2_TR(0x704d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704d3c:{NFSU2_TR(0x704d3c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B704d3f:{NFSU2_TR(0x704d3f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B704d42:{NFSU2_TR(0x704d42);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B704d45:{NFSU2_TR(0x704d45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B704d48:{NFSU2_TR(0x704d48);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B704d4a:{NFSU2_TR(0x704d4a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B704d4d:{NFSU2_TR(0x704d4d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704d4e:{NFSU2_TR(0x704d4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704d4f:{NFSU2_TR(0x704d4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x704d54ull));
TAIL_STATIC(0x702edfu,702);
}
B704d54:L704d54:{c.instructions+=6;NFSU2_TR(0x704d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704d5a:{NFSU2_TR(0x704d5a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B704d5d:{NFSU2_TR(0x704d5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704d5e:{NFSU2_TR(0x704d5e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe0ull))));
}
B704d61:{NFSU2_TR(0x704d61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704d62:{NFSU2_TR(0x704d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704d68:L704d68:{c.instructions+=2;NFSU2_TR(0x704d68);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B704d6a:{NFSU2_TR(0x704d6a);
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
B704d6b:L704d6b:{c.instructions+=5;NFSU2_TR(0x704d6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B704d6c:{NFSU2_TR(0x704d6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B704d6d:{NFSU2_TR(0x704d6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B704d6e:{NFSU2_TR(0x704d6e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B704d6f:{NFSU2_TR(0x704d6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B704d70:L704d70:{c.instructions+=9;NFSU2_TR(0x704d70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704d71:{NFSU2_TR(0x704d71);
__builtin_memmove((R+20),(R+16),4);
}
B704d73:{NFSU2_TR(0x704d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704d76:{NFSU2_TR(0x704d76);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704d78:{NFSU2_TR(0x704d78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B704d79:{NFSU2_TR(0x704d79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704d7f:{NFSU2_TR(0x704d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704d85:{NFSU2_TR(0x704d85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B704d86:{NFSU2_TR(0x704d86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B704d87:L704d87:{c.instructions+=28;NFSU2_TR(0x704d87);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704d88:{NFSU2_TR(0x704d88);
__builtin_memmove((R+20),(R+16),4);
}
B704d8a:{NFSU2_TR(0x704d8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B704d8d:{NFSU2_TR(0x704d8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B704d90:{NFSU2_TR(0x704d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704d96:{NFSU2_TR(0x704d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B704d9c:{NFSU2_TR(0x704d9c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704d9d:{NFSU2_TR(0x704d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B704da0:{NFSU2_TR(0x704da0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704da1:{NFSU2_TR(0x704da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B704da7:{NFSU2_TR(0x704da7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B704da8:{NFSU2_TR(0x704da8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B704dae:{NFSU2_TR(0x704dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704db1:{NFSU2_TR(0x704db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704db4:{NFSU2_TR(0x704db4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B704db6:{NFSU2_TR(0x704db6);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B704dba:{NFSU2_TR(0x704dba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704dbd:{NFSU2_TR(0x704dbd);
__builtin_memmove((R+28),(R+0),4);
}
B704dbf:{NFSU2_TR(0x704dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B704dc2:{NFSU2_TR(0x704dc2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B704dc5:{NFSU2_TR(0x704dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704dc8:{NFSU2_TR(0x704dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B704dcb:{NFSU2_TR(0x704dcb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B704dcc:{NFSU2_TR(0x704dcc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B704dce:{NFSU2_TR(0x704dce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704dd1:{NFSU2_TR(0x704dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704dd4:{NFSU2_TR(0x704dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704dd7:{NFSU2_TR(0x704dd7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L704e3e;}}
}
B704dd9:L704dd9:{c.instructions+=1;NFSU2_TR(0x704dd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704ddc:L704ddc:{c.instructions+=10;NFSU2_TR(0x704ddc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(r1(U+0)));
}
B704ddf:{NFSU2_TR(0x704ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B704de2:{NFSU2_TR(0x704de2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B704de5:{NFSU2_TR(0x704de5);
__builtin_memmove((R+12),(R+0),1);
}
B704de7:{NFSU2_TR(0x704de7);
__builtin_memmove((R+13),(R+12),1);
}
B704de9:{NFSU2_TR(0x704de9);
__builtin_memmove((R+24),(R+4),4);
}
B704deb:{NFSU2_TR(0x704deb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B704dee:{NFSU2_TR(0x704dee);
__builtin_memmove((R+0),(R+12),4);
}
B704df0:{NFSU2_TR(0x704df0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B704df3:{NFSU2_TR(0x704df3);
__builtin_memmove((R+0),(R+12),2);
}
B704df6:L704df6:{c.instructions+=1;NFSU2_TR(0x704df6);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L704df8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704df6u);}goto L704df6;}
}
B704df8:L704df8:{c.instructions+=2;NFSU2_TR(0x704df8);
__builtin_memmove((R+4),(R+24),4);
}
B704dfa:{NFSU2_TR(0x704dfa);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B704dfd:L704dfd:{c.instructions+=1;NFSU2_TR(0x704dfd);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L704dff;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704dfdu);}goto L704dfd;}
}
B704dff:L704dff:{c.instructions+=10;NFSU2_TR(0x704dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704e02:{NFSU2_TR(0x704e02);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(r1(U+0)));
}
B704e05:{NFSU2_TR(0x704e05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B704e08:{NFSU2_TR(0x704e08);
__builtin_memmove((R+12),(R+0),1);
}
B704e0a:{NFSU2_TR(0x704e0a);
__builtin_memmove((R+13),(R+12),1);
}
B704e0c:{NFSU2_TR(0x704e0c);
__builtin_memmove((R+4),(R+24),4);
}
B704e0e:{NFSU2_TR(0x704e0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B704e11:{NFSU2_TR(0x704e11);
__builtin_memmove((R+0),(R+12),4);
}
B704e13:{NFSU2_TR(0x704e13);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B704e16:{NFSU2_TR(0x704e16);
__builtin_memmove((R+0),(R+12),2);
}
B704e19:L704e19:{c.instructions+=1;NFSU2_TR(0x704e19);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L704e1b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704e19u);}goto L704e19;}
}
B704e1b:L704e1b:{c.instructions+=2;NFSU2_TR(0x704e1b);
__builtin_memmove((R+4),(R+24),4);
}
B704e1d:{NFSU2_TR(0x704e1d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B704e20:L704e20:{c.instructions+=1;NFSU2_TR(0x704e20);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L704e22;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704e20u);}goto L704e20;}
}
B704e22:L704e22:{c.instructions+=9;NFSU2_TR(0x704e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B704e25:{NFSU2_TR(0x704e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704e28:{NFSU2_TR(0x704e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B704e2b:{NFSU2_TR(0x704e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B704e2e:{NFSU2_TR(0x704e2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B704e31:{NFSU2_TR(0x704e31);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B704e33:{NFSU2_TR(0x704e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704e36:{NFSU2_TR(0x704e36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704e39:{NFSU2_TR(0x704e39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704ddcu);}goto L704ddc;}}
}
B704e3b:L704e3b:{c.instructions+=1;NFSU2_TR(0x704e3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B704e3e:L704e3e:{c.instructions+=14;NFSU2_TR(0x704e3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704e44:{NFSU2_TR(0x704e44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B704e47:{NFSU2_TR(0x704e47);
__builtin_memmove((R+24),(R+4),4);
}
B704e49:{NFSU2_TR(0x704e49);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w8(U+8,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
}
B704e4d:{NFSU2_TR(0x704e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0xffffffffull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B704e54:{NFSU2_TR(0x704e54);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B704e57:{NFSU2_TR(0x704e57);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B704e59:{NFSU2_TR(0x704e59);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B704e5b:{NFSU2_TR(0x704e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704e5e:{NFSU2_TR(0x704e5e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B704e60:{NFSU2_TR(0x704e60);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B704e62:{NFSU2_TR(0x704e62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704e65:{NFSU2_TR(0x704e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704e68:{NFSU2_TR(0x704e68);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L704eaf;}}
}
B704e6a:L704e6a:{c.instructions+=4;NFSU2_TR(0x704e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704e6d:{NFSU2_TR(0x704e6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B704e70:{NFSU2_TR(0x704e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704e73:{NFSU2_TR(0x704e73);
{goto L704e78;}
}
B704e75:L704e75:{c.instructions+=1;NFSU2_TR(0x704e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B704e78:L704e78:{c.instructions+=3;NFSU2_TR(0x704e78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B704e7b:{NFSU2_TR(0x704e7b);
__builtin_memmove((R+0),(R+4),4);
}
B704e7d:{NFSU2_TR(0x704e7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B704e80:L704e80:{c.instructions+=1;NFSU2_TR(0x704e80);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L704e82;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704e80u);}goto L704e80;}
}
B704e82:L704e82:{c.instructions+=3;NFSU2_TR(0x704e82);
__builtin_memmove((R+4),(R+0),4);
}
B704e84:{NFSU2_TR(0x704e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704e87:{NFSU2_TR(0x704e87);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B704e8a:L704e8a:{c.instructions+=1;NFSU2_TR(0x704e8a);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L704e8c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704e8au);}goto L704e8a;}
}
B704e8c:L704e8c:{c.instructions+=6;NFSU2_TR(0x704e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B704e8f:{NFSU2_TR(0x704e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B704e92:{NFSU2_TR(0x704e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B704e95:{NFSU2_TR(0x704e95);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B704e97:{NFSU2_TR(0x704e97);
__builtin_memmove((R+0),(R+4),4);
}
B704e99:{NFSU2_TR(0x704e99);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B704e9c:L704e9c:{c.instructions+=1;NFSU2_TR(0x704e9c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L704e9e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704e9cu);}goto L704e9c;}
}
B704e9e:L704e9e:{c.instructions+=2;NFSU2_TR(0x704e9e);
__builtin_memmove((R+4),(R+0),4);
}
B704ea0:{NFSU2_TR(0x704ea0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B704ea3:L704ea3:{c.instructions+=1;NFSU2_TR(0x704ea3);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L704ea5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704ea3u);}goto L704ea3;}
}
B704ea5:L704ea5:{c.instructions+=4;NFSU2_TR(0x704ea5);
__builtin_memmove((R+4),(R+0),4);
}
B704ea7:{NFSU2_TR(0x704ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B704eaa:{NFSU2_TR(0x704eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704ead:{NFSU2_TR(0x704ead);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704e75u);}goto L704e75;}}
}
B704eaf:L704eaf:{c.instructions+=23;NFSU2_TR(0x704eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B704eb5:{NFSU2_TR(0x704eb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B704eb8:{NFSU2_TR(0x704eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704ebe:{NFSU2_TR(0x704ebe);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B704ec1:{NFSU2_TR(0x704ec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704ec4:{NFSU2_TR(0x704ec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B704eca:{NFSU2_TR(0x704eca);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B704ecc:{NFSU2_TR(0x704ecc);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B704ed0:{NFSU2_TR(0x704ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704ed3:{NFSU2_TR(0x704ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B704ed6:{NFSU2_TR(0x704ed6);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B704ed8:{NFSU2_TR(0x704ed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704edb:{NFSU2_TR(0x704edb);
__builtin_memmove((R+28),(R+24),4);
}
B704edd:{NFSU2_TR(0x704edd);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B704edf:{NFSU2_TR(0x704edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B704ee2:{NFSU2_TR(0x704ee2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B704ee3:{NFSU2_TR(0x704ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704ee6:{NFSU2_TR(0x704ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B704ee9:{NFSU2_TR(0x704ee9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B704eeb:{NFSU2_TR(0x704eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704eee:{NFSU2_TR(0x704eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704ef1:{NFSU2_TR(0x704ef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704ef4:{NFSU2_TR(0x704ef4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L704f5d;}}
}
B704ef6:L704ef6:{c.instructions+=1;NFSU2_TR(0x704ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704ef9:L704ef9:{c.instructions+=9;NFSU2_TR(0x704ef9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B704efc:{NFSU2_TR(0x704efc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B704eff:{NFSU2_TR(0x704eff);
__builtin_memmove((R+12),(R+0),1);
}
B704f01:{NFSU2_TR(0x704f01);
__builtin_memmove((R+13),(R+12),1);
}
B704f03:{NFSU2_TR(0x704f03);
__builtin_memmove((R+24),(R+4),4);
}
B704f05:{NFSU2_TR(0x704f05);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B704f08:{NFSU2_TR(0x704f08);
__builtin_memmove((R+0),(R+12),4);
}
B704f0a:{NFSU2_TR(0x704f0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B704f0d:{NFSU2_TR(0x704f0d);
__builtin_memmove((R+0),(R+12),2);
}
B704f10:L704f10:{c.instructions+=1;NFSU2_TR(0x704f10);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L704f12;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704f10u);}goto L704f10;}
}
B704f12:L704f12:{c.instructions+=2;NFSU2_TR(0x704f12);
__builtin_memmove((R+4),(R+24),4);
}
B704f14:{NFSU2_TR(0x704f14);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B704f17:L704f17:{c.instructions+=1;NFSU2_TR(0x704f17);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L704f19;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704f17u);}goto L704f17;}
}
B704f19:L704f19:{c.instructions+=10;NFSU2_TR(0x704f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704f1c:{NFSU2_TR(0x704f1c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(r1(U+0)));
}
B704f1f:{NFSU2_TR(0x704f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B704f22:{NFSU2_TR(0x704f22);
__builtin_memmove((R+12),(R+0),1);
}
B704f24:{NFSU2_TR(0x704f24);
__builtin_memmove((R+13),(R+12),1);
}
B704f26:{NFSU2_TR(0x704f26);
__builtin_memmove((R+4),(R+24),4);
}
B704f28:{NFSU2_TR(0x704f28);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B704f2b:{NFSU2_TR(0x704f2b);
__builtin_memmove((R+0),(R+12),4);
}
B704f2d:{NFSU2_TR(0x704f2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B704f30:{NFSU2_TR(0x704f30);
__builtin_memmove((R+0),(R+12),2);
}
B704f33:L704f33:{c.instructions+=1;NFSU2_TR(0x704f33);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L704f35;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704f33u);}goto L704f33;}
}
B704f35:L704f35:{c.instructions+=3;NFSU2_TR(0x704f35);
__builtin_memmove((R+4),(R+24),4);
}
B704f37:{NFSU2_TR(0x704f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B704f3a:{NFSU2_TR(0x704f3a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B704f3d:L704f3d:{c.instructions+=1;NFSU2_TR(0x704f3d);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L704f3f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704f3du);}goto L704f3d;}
}
B704f3f:L704f3f:{c.instructions+=10;NFSU2_TR(0x704f3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B704f42:{NFSU2_TR(0x704f42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B704f45:{NFSU2_TR(0x704f45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B704f48:{NFSU2_TR(0x704f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B704f4b:{NFSU2_TR(0x704f4b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B704f4d:{NFSU2_TR(0x704f4d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B704f4f:{NFSU2_TR(0x704f4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704f52:{NFSU2_TR(0x704f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704f55:{NFSU2_TR(0x704f55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704f58:{NFSU2_TR(0x704f58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704ef9u);}goto L704ef9;}}
}
B704f5a:L704f5a:{c.instructions+=1;NFSU2_TR(0x704f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B704f5d:L704f5d:{c.instructions+=18;NFSU2_TR(0x704f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B704f63:{NFSU2_TR(0x704f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B704f66:{NFSU2_TR(0x704f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B704f69:{NFSU2_TR(0x704f69);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B704f6b:{NFSU2_TR(0x704f6b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B704f6e:{NFSU2_TR(0x704f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0xffffffffull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B704f75:{NFSU2_TR(0x704f75);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B704f78:{NFSU2_TR(0x704f78);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B704f7a:{NFSU2_TR(0x704f7a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B704f7c:{NFSU2_TR(0x704f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704f7f:{NFSU2_TR(0x704f7f);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B704f81:{NFSU2_TR(0x704f81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704f84:{NFSU2_TR(0x704f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B704f87:{NFSU2_TR(0x704f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704f8a:{NFSU2_TR(0x704f8a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B704f8c:{NFSU2_TR(0x704f8c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B704f8e:{NFSU2_TR(0x704f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704f91:{NFSU2_TR(0x704f91);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L704fd8;}}
}
B704f93:L704f93:{c.instructions+=3;NFSU2_TR(0x704f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704f96:{NFSU2_TR(0x704f96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B704f99:{NFSU2_TR(0x704f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704f9c:L704f9c:{c.instructions+=5;NFSU2_TR(0x704f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B704f9f:{NFSU2_TR(0x704f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B704fa2:{NFSU2_TR(0x704fa2);
__builtin_memmove((R+4),(R+0),4);
}
B704fa4:{NFSU2_TR(0x704fa4);
__builtin_memmove((R+12),(R+4),4);
}
B704fa6:{NFSU2_TR(0x704fa6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B704fa9:L704fa9:{c.instructions+=1;NFSU2_TR(0x704fa9);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L704fab;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704fa9u);}goto L704fa9;}
}
B704fab:L704fab:{c.instructions+=4;NFSU2_TR(0x704fab);
__builtin_memmove((R+4),(R+12),4);
}
B704fad:{NFSU2_TR(0x704fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B704fb0:{NFSU2_TR(0x704fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B704fb3:{NFSU2_TR(0x704fb3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B704fb6:L704fb6:{c.instructions+=1;NFSU2_TR(0x704fb6);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L704fb8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704fb6u);}goto L704fb6;}
}
B704fb8:L704fb8:{c.instructions+=6;NFSU2_TR(0x704fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B704fbb:{NFSU2_TR(0x704fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B704fbe:{NFSU2_TR(0x704fbe);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B704fc0:{NFSU2_TR(0x704fc0);
__builtin_memmove((R+4),(R+0),4);
}
B704fc2:{NFSU2_TR(0x704fc2);
__builtin_memmove((R+12),(R+4),4);
}
B704fc4:{NFSU2_TR(0x704fc4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B704fc7:L704fc7:{c.instructions+=1;NFSU2_TR(0x704fc7);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L704fc9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704fc7u);}goto L704fc7;}
}
B704fc9:L704fc9:{c.instructions+=3;NFSU2_TR(0x704fc9);
__builtin_memmove((R+4),(R+12),4);
}
B704fcb:{NFSU2_TR(0x704fcb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B704fce:{NFSU2_TR(0x704fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B704fd1:L704fd1:{c.instructions+=1;NFSU2_TR(0x704fd1);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L704fd3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704fd1u);}goto L704fd1;}
}
B704fd3:L704fd3:{c.instructions+=1;NFSU2_TR(0x704fd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x704f9cu);}goto L704f9c;}}
}
B704fd5:L704fd5:{c.instructions+=1;NFSU2_TR(0x704fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B704fd8:L704fd8:{c.instructions+=13;NFSU2_TR(0x704fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B704fde:{NFSU2_TR(0x704fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B704fe4:{NFSU2_TR(0x704fe4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B704fe6:{NFSU2_TR(0x704fe6);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B704fea:{NFSU2_TR(0x704fea);
__builtin_memmove((R+28),(R+24),4);
}
B704fec:{NFSU2_TR(0x704fec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B704fef:{NFSU2_TR(0x704fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704ff2:{NFSU2_TR(0x704ff2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B704ff3:{NFSU2_TR(0x704ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704ff6:{NFSU2_TR(0x704ff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B704ff9:{NFSU2_TR(0x704ff9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B704ffb:{NFSU2_TR(0x704ffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B704ffe:{NFSU2_TR(0x704ffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x705001u,705);
}
XIT:NFSU2_TR_EXIT(0x704,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
