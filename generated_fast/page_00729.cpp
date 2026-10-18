#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_724(u8* __restrict R,Cpu& c);
u32 body_725(u8* __restrict R,Cpu& c);
u32 body_726(u8* __restrict R,Cpu& c);
u32 body_727(u8* __restrict R,Cpu& c);
u32 body_728(u8* __restrict R,Cpu& c);
u32 body_72a(u8* __restrict R,Cpu& c);
u32 body_72c(u8* __restrict R,Cpu& c);
u32 body_72d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x729,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x729,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_729(u8* __restrict R,Cpu& c);
u32 page_729(Cpu& c){return body_729(c.regs.data(),c);}
__attribute__((noinline)) u32 body_729(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x729001:goto L729001;
case 0x729007:c.instructions+=1;goto B729007;
case 0x729009:goto L729009;
case 0x72900b:c.instructions+=2;goto B72900b;
case 0x729011:c.instructions+=1;goto B729011;
case 0x729013:goto L729013;
case 0x729016:goto L729016;
case 0x729018:c.instructions+=9;goto B729018;
case 0x72901f:c.instructions+=8;goto B72901f;
case 0x729022:c.instructions+=7;goto B729022;
case 0x729023:c.instructions+=6;goto B729023;
case 0x729026:c.instructions+=5;goto B729026;
case 0x729028:c.instructions+=4;goto B729028;
case 0x72902a:c.instructions+=3;goto B72902a;
case 0x729031:c.instructions+=2;goto B729031;
case 0x729033:c.instructions+=1;goto B729033;
case 0x729035:goto L729035;
case 0x729038:c.instructions+=3;goto B729038;
case 0x72903b:c.instructions+=2;goto B72903b;
case 0x72903d:c.instructions+=1;goto B72903d;
case 0x72903f:goto L72903f;
case 0x729040:c.instructions+=1;goto B729040;
case 0x729042:goto L729042;
case 0x729043:goto L729043;
case 0x729046:c.instructions+=3;goto B729046;
case 0x729049:c.instructions+=2;goto B729049;
case 0x72904a:c.instructions+=1;goto B72904a;
case 0x72904f:goto L72904f;
case 0x729051:c.instructions+=3;goto B729051;
case 0x729052:c.instructions+=2;goto B729052;
case 0x729055:c.instructions+=1;goto B729055;
case 0x729057:goto L729057;
case 0x729058:c.instructions+=3;goto B729058;
case 0x72905b:c.instructions+=2;goto B72905b;
case 0x72905c:c.instructions+=1;goto B72905c;
case 0x72905d:goto L72905d;
case 0x729061:c.instructions+=10;goto B729061;
case 0x729065:c.instructions+=9;goto B729065;
case 0x72906b:c.instructions+=8;goto B72906b;
case 0x72906d:c.instructions+=7;goto B72906d;
case 0x729070:c.instructions+=6;goto B729070;
case 0x729073:c.instructions+=5;goto B729073;
case 0x729077:c.instructions+=4;goto B729077;
case 0x72907b:c.instructions+=3;goto B72907b;
case 0x729081:c.instructions+=2;goto B729081;
case 0x729086:c.instructions+=1;goto B729086;
case 0x729087:goto L729087;
case 0x72908b:c.instructions+=9;goto B72908b;
case 0x72908f:c.instructions+=8;goto B72908f;
case 0x729095:c.instructions+=7;goto B729095;
case 0x729098:c.instructions+=6;goto B729098;
case 0x72909c:c.instructions+=5;goto B72909c;
case 0x7290a0:c.instructions+=4;goto B7290a0;
case 0x7290a3:c.instructions+=3;goto B7290a3;
case 0x7290a9:c.instructions+=2;goto B7290a9;
case 0x7290ae:c.instructions+=1;goto B7290ae;
case 0x7290af:goto L7290af;
case 0x7290b4:c.instructions+=1;goto B7290b4;
case 0x7290b9:goto L7290b9;
case 0x7290c0:c.instructions+=1;goto B7290c0;
case 0x7290c5:goto L7290c5;
case 0x7290cc:c.instructions+=1;goto B7290cc;
case 0x7290d1:goto L7290d1;
case 0x7290d8:c.instructions+=2;goto B7290d8;
case 0x7290d9:c.instructions+=1;goto B7290d9;
case 0x7290db:goto L7290db;
case 0x7290e1:goto L7290e1;
case 0x7290e2:c.instructions+=8;goto B7290e2;
case 0x7290e3:c.instructions+=7;goto B7290e3;
case 0x7290e7:c.instructions+=6;goto B7290e7;
case 0x7290e8:c.instructions+=5;goto B7290e8;
case 0x7290ed:c.instructions+=4;goto B7290ed;
case 0x7290ee:c.instructions+=3;goto B7290ee;
case 0x7290ef:c.instructions+=2;goto B7290ef;
case 0x7290f0:c.instructions+=1;goto B7290f0;
case 0x7290f5:goto L7290f5;
case 0x7290fa:goto L7290fa;
case 0x7290fc:c.instructions+=3;goto B7290fc;
case 0x7290fe:c.instructions+=2;goto B7290fe;
case 0x729104:c.instructions+=1;goto B729104;
case 0x729106:goto L729106;
case 0x72910c:c.instructions+=4;goto B72910c;
case 0x72910f:c.instructions+=3;goto B72910f;
case 0x729110:c.instructions+=2;goto B729110;
case 0x729116:c.instructions+=1;goto B729116;
case 0x729118:goto L729118;
case 0x72911d:goto L72911d;
case 0x729122:c.instructions+=1;goto B729122;
case 0x729127:goto L729127;
case 0x72912a:c.instructions+=5;goto B72912a;
case 0x72912d:c.instructions+=4;goto B72912d;
case 0x72912f:c.instructions+=3;goto B72912f;
case 0x729130:c.instructions+=2;goto B729130;
case 0x729132:c.instructions+=1;goto B729132;
case 0x729134:goto L729134;
case 0x729137:c.instructions+=2;goto B729137;
case 0x72913a:c.instructions+=1;goto B72913a;
case 0x72913c:goto L72913c;
case 0x72913f:c.instructions+=2;goto B72913f;
case 0x729145:c.instructions+=1;goto B729145;
case 0x729147:goto L729147;
case 0x72914e:c.instructions+=1;goto B72914e;
case 0x729150:goto L729150;
case 0x729157:c.instructions+=3;goto B729157;
case 0x72915a:c.instructions+=2;goto B72915a;
case 0x72915b:c.instructions+=1;goto B72915b;
case 0x729160:goto L729160;
case 0x729161:c.instructions+=1;goto B729161;
case 0x729166:goto L729166;
case 0x729168:c.instructions+=2;goto B729168;
case 0x72916f:c.instructions+=1;goto B72916f;
case 0x729171:goto L729171;
case 0x729176:goto L729176;
case 0x72917b:c.instructions+=1;goto B72917b;
case 0x729180:goto L729180;
case 0x729182:c.instructions+=4;goto B729182;
case 0x729185:c.instructions+=3;goto B729185;
case 0x729186:c.instructions+=2;goto B729186;
case 0x729188:c.instructions+=1;goto B729188;
case 0x72918a:goto L72918a;
case 0x72918d:c.instructions+=2;goto B72918d;
case 0x729190:c.instructions+=1;goto B729190;
case 0x729192:goto L729192;
case 0x729199:c.instructions+=4;goto B729199;
case 0x72919a:c.instructions+=3;goto B72919a;
case 0x72919d:c.instructions+=2;goto B72919d;
case 0x72919f:c.instructions+=1;goto B72919f;
case 0x7291a1:goto L7291a1;
case 0x7291a6:c.instructions+=2;goto B7291a6;
case 0x7291a8:c.instructions+=1;goto B7291a8;
case 0x7291ae:goto L7291ae;
case 0x7291b4:c.instructions+=5;goto B7291b4;
case 0x7291b7:c.instructions+=4;goto B7291b7;
case 0x7291be:c.instructions+=3;goto B7291be;
case 0x7291c1:c.instructions+=2;goto B7291c1;
case 0x7291c2:c.instructions+=1;goto B7291c2;
case 0x7291c7:goto L7291c7;
case 0x7291cd:c.instructions+=7;goto B7291cd;
case 0x7291d4:c.instructions+=6;goto B7291d4;
case 0x7291db:c.instructions+=5;goto B7291db;
case 0x7291de:c.instructions+=4;goto B7291de;
case 0x7291df:c.instructions+=3;goto B7291df;
case 0x7291e0:c.instructions+=2;goto B7291e0;
case 0x7291e5:c.instructions+=1;goto B7291e5;
case 0x7291ea:goto L7291ea;
case 0x7291f1:c.instructions+=7;goto B7291f1;
case 0x7291f3:c.instructions+=6;goto B7291f3;
case 0x7291f6:c.instructions+=5;goto B7291f6;
case 0x7291fc:c.instructions+=4;goto B7291fc;
case 0x7291ff:c.instructions+=3;goto B7291ff;
case 0x729201:c.instructions+=2;goto B729201;
case 0x729203:c.instructions+=1;goto B729203;
case 0x729205:goto L729205;
case 0x729207:goto L729207;
case 0x72920d:c.instructions+=12;goto B72920d;
case 0x729211:c.instructions+=11;goto B729211;
case 0x729217:c.instructions+=10;goto B729217;
case 0x72921a:c.instructions+=9;goto B72921a;
case 0x729220:c.instructions+=8;goto B729220;
case 0x729224:c.instructions+=7;goto B729224;
case 0x72922a:c.instructions+=6;goto B72922a;
case 0x72922d:c.instructions+=5;goto B72922d;
case 0x729234:c.instructions+=4;goto B729234;
case 0x729235:c.instructions+=3;goto B729235;
case 0x729238:c.instructions+=2;goto B729238;
case 0x72923a:c.instructions+=1;goto B72923a;
case 0x72923c:goto L72923c;
case 0x729241:goto L729241;
case 0x729246:goto L729246;
case 0x72924b:goto L72924b;
case 0x729250:goto L729250;
case 0x729255:goto L729255;
case 0x72925a:goto L72925a;
case 0x729261:c.instructions+=1;goto B729261;
case 0x729263:goto L729263;
case 0x729268:c.instructions+=1;goto B729268;
case 0x72926d:goto L72926d;
case 0x729270:c.instructions+=2;goto B729270;
case 0x729271:c.instructions+=1;goto B729271;
case 0x729276:goto L729276;
case 0x72927b:c.instructions+=4;goto B72927b;
case 0x72927c:c.instructions+=3;goto B72927c;
case 0x72927d:c.instructions+=2;goto B72927d;
case 0x729281:c.instructions+=1;goto B729281;
case 0x729286:goto L729286;
case 0x72928b:c.instructions+=2;goto B72928b;
case 0x72928e:c.instructions+=1;goto B72928e;
case 0x729293:goto L729293;
case 0x72929a:c.instructions+=6;goto B72929a;
case 0x72929d:c.instructions+=5;goto B72929d;
case 0x72929e:c.instructions+=4;goto B72929e;
case 0x7292a1:c.instructions+=3;goto B7292a1;
case 0x7292a4:c.instructions+=2;goto B7292a4;
case 0x7292a6:c.instructions+=1;goto B7292a6;
case 0x7292a8:goto L7292a8;
case 0x7292a9:c.instructions+=3;goto B7292a9;
case 0x7292aa:c.instructions+=2;goto B7292aa;
case 0x7292ab:c.instructions+=1;goto B7292ab;
case 0x7292ac:goto L7292ac;
case 0x7292b0:c.instructions+=1;goto B7292b0;
case 0x7292b5:goto L7292b5;
case 0x7292b6:c.instructions+=1;goto B7292b6;
case 0x7292bc:goto L7292bc;
case 0x7292bd:c.instructions+=5;goto B7292bd;
case 0x7292bf:c.instructions+=4;goto B7292bf;
case 0x7292c2:c.instructions+=3;goto B7292c2;
case 0x7292c4:c.instructions+=2;goto B7292c4;
case 0x7292ca:c.instructions+=1;goto B7292ca;
case 0x7292cc:goto L7292cc;
case 0x7292d1:c.instructions+=2;goto B7292d1;
case 0x7292d5:c.instructions+=1;goto B7292d5;
case 0x7292d7:goto L7292d7;
case 0x7292dc:c.instructions+=7;goto B7292dc;
case 0x7292e2:c.instructions+=6;goto B7292e2;
case 0x7292e5:c.instructions+=5;goto B7292e5;
case 0x7292e7:c.instructions+=4;goto B7292e7;
case 0x7292e9:c.instructions+=3;goto B7292e9;
case 0x7292eb:c.instructions+=2;goto B7292eb;
case 0x7292ee:c.instructions+=1;goto B7292ee;
case 0x7292f0:goto L7292f0;
case 0x7292f5:c.instructions+=3;goto B7292f5;
case 0x7292f8:c.instructions+=2;goto B7292f8;
case 0x7292f9:c.instructions+=1;goto B7292f9;
case 0x7292fe:goto L7292fe;
case 0x7292ff:c.instructions+=1;goto B7292ff;
case 0x729300:goto L729300;
case 0x729301:c.instructions+=2;goto B729301;
case 0x729307:c.instructions+=1;goto B729307;
case 0x729309:goto L729309;
case 0x72930a:c.instructions+=5;goto B72930a;
case 0x72930b:c.instructions+=4;goto B72930b;
case 0x72930c:c.instructions+=3;goto B72930c;
case 0x72930e:c.instructions+=2;goto B72930e;
case 0x729315:c.instructions+=1;goto B729315;
case 0x729317:goto L729317;
case 0x72931a:c.instructions+=2;goto B72931a;
case 0x72931d:c.instructions+=1;goto B72931d;
case 0x729322:goto L729322;
case 0x729323:c.instructions+=2;goto B729323;
case 0x729326:c.instructions+=1;goto B729326;
case 0x72932b:goto L72932b;
case 0x729331:c.instructions+=7;goto B729331;
case 0x729333:c.instructions+=6;goto B729333;
case 0x729334:c.instructions+=5;goto B729334;
case 0x729336:c.instructions+=4;goto B729336;
case 0x729337:c.instructions+=3;goto B729337;
case 0x729339:c.instructions+=2;goto B729339;
case 0x72933c:c.instructions+=1;goto B72933c;
case 0x72933e:goto L72933e;
case 0x729341:c.instructions+=2;goto B729341;
case 0x729342:c.instructions+=1;goto B729342;
case 0x729347:goto L729347;
case 0x729348:c.instructions+=1;goto B729348;
case 0x729349:goto L729349;
case 0x729350:c.instructions+=4;goto B729350;
case 0x729351:c.instructions+=3;goto B729351;
case 0x729354:c.instructions+=2;goto B729354;
case 0x729356:c.instructions+=1;goto B729356;
case 0x729358:goto L729358;
case 0x72935c:c.instructions+=2;goto B72935c;
case 0x729363:c.instructions+=1;goto B729363;
case 0x729369:goto L729369;
case 0x72936d:goto L72936d;
case 0x729372:c.instructions+=4;goto B729372;
case 0x729375:c.instructions+=3;goto B729375;
case 0x729378:c.instructions+=2;goto B729378;
case 0x72937b:c.instructions+=1;goto B72937b;
case 0x729381:goto L729381;
case 0x729385:c.instructions+=1;goto B729385;
case 0x729387:goto L729387;
case 0x729388:c.instructions+=1;goto B729388;
case 0x72938d:goto L72938d;
case 0x72938f:c.instructions+=5;goto B72938f;
case 0x729392:c.instructions+=4;goto B729392;
case 0x729393:c.instructions+=3;goto B729393;
case 0x729395:c.instructions+=2;goto B729395;
case 0x729399:c.instructions+=1;goto B729399;
case 0x72939b:goto L72939b;
case 0x72939e:c.instructions+=1;goto B72939e;
case 0x7293a0:goto L7293a0;
case 0x7293a2:c.instructions+=1;goto B7293a2;
case 0x7293a8:goto L7293a8;
case 0x7293ab:c.instructions+=6;goto B7293ab;
case 0x7293ad:c.instructions+=5;goto B7293ad;
case 0x7293b3:c.instructions+=4;goto B7293b3;
case 0x7293b9:c.instructions+=3;goto B7293b9;
case 0x7293ba:c.instructions+=2;goto B7293ba;
case 0x7293bb:c.instructions+=1;goto B7293bb;
case 0x7293bd:goto L7293bd;
case 0x7293bf:c.instructions+=4;goto B7293bf;
case 0x7293c2:c.instructions+=3;goto B7293c2;
case 0x7293c4:c.instructions+=2;goto B7293c4;
case 0x7293c7:c.instructions+=1;goto B7293c7;
case 0x7293c9:goto L7293c9;
case 0x7293cc:c.instructions+=1;goto B7293cc;
case 0x7293d1:goto L7293d1;
case 0x7293d2:c.instructions+=1;goto B7293d2;
case 0x7293d7:goto L7293d7;
case 0x7293dd:goto L7293dd;
case 0x7293e2:c.instructions+=5;goto B7293e2;
case 0x7293e6:c.instructions+=4;goto B7293e6;
case 0x7293ea:c.instructions+=3;goto B7293ea;
case 0x7293ed:c.instructions+=2;goto B7293ed;
case 0x7293f4:c.instructions+=1;goto B7293f4;
case 0x7293f6:goto L7293f6;
case 0x7293fd:c.instructions+=2;goto B7293fd;
case 0x729400:c.instructions+=1;goto B729400;
case 0x729403:goto L729403;
case 0x729409:c.instructions+=5;goto B729409;
case 0x72940b:c.instructions+=4;goto B72940b;
case 0x72940d:c.instructions+=3;goto B72940d;
case 0x72940f:c.instructions+=2;goto B72940f;
case 0x729412:c.instructions+=1;goto B729412;
case 0x729414:goto L729414;
case 0x729417:c.instructions+=9;goto B729417;
case 0x729419:c.instructions+=8;goto B729419;
case 0x72941c:c.instructions+=7;goto B72941c;
case 0x72941f:c.instructions+=6;goto B72941f;
case 0x729420:c.instructions+=5;goto B729420;
case 0x729426:c.instructions+=4;goto B729426;
case 0x729427:c.instructions+=3;goto B729427;
case 0x72942a:c.instructions+=2;goto B72942a;
case 0x72942b:c.instructions+=1;goto B72942b;
case 0x729431:goto L729431;
case 0x729434:c.instructions+=1;goto B729434;
case 0x729437:goto L729437;
case 0x72943e:c.instructions+=4;goto B72943e;
case 0x729441:c.instructions+=3;goto B729441;
case 0x729444:c.instructions+=2;goto B729444;
case 0x729447:c.instructions+=1;goto B729447;
case 0x729449:goto L729449;
case 0x72944b:c.instructions+=2;goto B72944b;
case 0x729451:c.instructions+=1;goto B729451;
case 0x729453:goto L729453;
case 0x729458:c.instructions+=2;goto B729458;
case 0x72945c:c.instructions+=1;goto B72945c;
case 0x72945e:goto L72945e;
case 0x729461:c.instructions+=7;goto B729461;
case 0x729467:c.instructions+=6;goto B729467;
case 0x72946a:c.instructions+=5;goto B72946a;
case 0x72946c:c.instructions+=4;goto B72946c;
case 0x72946e:c.instructions+=3;goto B72946e;
case 0x729470:c.instructions+=2;goto B729470;
case 0x729473:c.instructions+=1;goto B729473;
case 0x729475:goto L729475;
case 0x72947a:c.instructions+=9;goto B72947a;
case 0x72947c:c.instructions+=8;goto B72947c;
case 0x72947f:c.instructions+=7;goto B72947f;
case 0x729482:c.instructions+=6;goto B729482;
case 0x729483:c.instructions+=5;goto B729483;
case 0x729489:c.instructions+=4;goto B729489;
case 0x72948a:c.instructions+=3;goto B72948a;
case 0x72948d:c.instructions+=2;goto B72948d;
case 0x729490:c.instructions+=1;goto B729490;
case 0x729496:goto L729496;
case 0x729499:c.instructions+=1;goto B729499;
case 0x7294a0:goto L7294a0;
case 0x7294a1:c.instructions+=2;goto B7294a1;
case 0x7294a7:c.instructions+=1;goto B7294a7;
case 0x7294a9:goto L7294a9;
case 0x7294b0:c.instructions+=4;goto B7294b0;
case 0x7294b3:c.instructions+=3;goto B7294b3;
case 0x7294b7:c.instructions+=2;goto B7294b7;
case 0x7294ba:c.instructions+=1;goto B7294ba;
case 0x7294c0:goto L7294c0;
case 0x7294c5:c.instructions+=2;goto B7294c5;
case 0x7294c7:c.instructions+=1;goto B7294c7;
case 0x7294c9:goto L7294c9;
case 0x7294cc:c.instructions+=1;goto B7294cc;
case 0x7294ce:goto L7294ce;
case 0x7294cf:goto L7294cf;
case 0x7294d3:c.instructions+=2;goto B7294d3;
case 0x7294da:c.instructions+=1;goto B7294da;
case 0x7294dc:goto L7294dc;
case 0x7294df:c.instructions+=6;goto B7294df;
case 0x7294e6:c.instructions+=5;goto B7294e6;
case 0x7294e9:c.instructions+=4;goto B7294e9;
case 0x7294ee:c.instructions+=3;goto B7294ee;
case 0x7294f3:c.instructions+=2;goto B7294f3;
case 0x7294f5:c.instructions+=1;goto B7294f5;
case 0x7294f7:goto L7294f7;
case 0x7294fa:c.instructions+=5;goto B7294fa;
case 0x7294fc:c.instructions+=4;goto B7294fc;
case 0x7294fe:c.instructions+=3;goto B7294fe;
case 0x729500:c.instructions+=2;goto B729500;
case 0x729501:c.instructions+=1;goto B729501;
case 0x729503:goto L729503;
case 0x729509:c.instructions+=5;goto B729509;
case 0x72950b:c.instructions+=4;goto B72950b;
case 0x72950e:c.instructions+=3;goto B72950e;
case 0x729511:c.instructions+=2;goto B729511;
case 0x729512:c.instructions+=1;goto B729512;
case 0x729514:goto L729514;
case 0x729517:c.instructions+=6;goto B729517;
case 0x729519:c.instructions+=5;goto B729519;
case 0x72951b:c.instructions+=4;goto B72951b;
case 0x729521:c.instructions+=3;goto B729521;
case 0x729524:c.instructions+=2;goto B729524;
case 0x729525:c.instructions+=1;goto B729525;
case 0x729527:goto L729527;
case 0x72952a:c.instructions+=1;goto B72952a;
case 0x72952c:goto L72952c;
case 0x72952e:c.instructions+=5;goto B72952e;
case 0x729531:c.instructions+=4;goto B729531;
case 0x729534:c.instructions+=3;goto B729534;
case 0x729537:c.instructions+=2;goto B729537;
case 0x729538:c.instructions+=1;goto B729538;
case 0x72953a:goto L72953a;
case 0x72953d:goto L72953d;
case 0x729544:c.instructions+=4;goto B729544;
case 0x729547:c.instructions+=3;goto B729547;
case 0x72954a:c.instructions+=2;goto B72954a;
case 0x72954d:c.instructions+=1;goto B72954d;
case 0x72954f:goto L72954f;
case 0x729556:c.instructions+=4;goto B729556;
case 0x729557:c.instructions+=3;goto B729557;
case 0x729558:c.instructions+=2;goto B729558;
case 0x729559:c.instructions+=1;goto B729559;
case 0x72955b:goto L72955b;
case 0x729562:c.instructions+=1;goto B729562;
case 0x729564:goto L729564;
case 0x729567:c.instructions+=2;goto B729567;
case 0x72956a:c.instructions+=1;goto B72956a;
case 0x729570:goto L729570;
case 0x729571:c.instructions+=1;goto B729571;
case 0x729572:goto L729572;
case 0x729573:c.instructions+=1;goto B729573;
case 0x729574:goto L729574;
case 0x729575:c.instructions+=12;goto B729575;
case 0x729577:c.instructions+=11;goto B729577;
case 0x72957a:c.instructions+=10;goto B72957a;
case 0x72957b:c.instructions+=9;goto B72957b;
case 0x72957c:c.instructions+=8;goto B72957c;
case 0x72957e:c.instructions+=7;goto B72957e;
case 0x729585:c.instructions+=6;goto B729585;
case 0x729589:c.instructions+=5;goto B729589;
case 0x72958c:c.instructions+=4;goto B72958c;
case 0x72958d:c.instructions+=3;goto B72958d;
case 0x72958f:c.instructions+=2;goto B72958f;
case 0x729590:c.instructions+=1;goto B729590;
case 0x729596:goto L729596;
case 0x72959a:c.instructions+=4;goto B72959a;
case 0x72959d:c.instructions+=3;goto B72959d;
case 0x72959f:c.instructions+=2;goto B72959f;
case 0x7295a2:c.instructions+=1;goto B7295a2;
case 0x7295a8:goto L7295a8;
case 0x7295ad:c.instructions+=1;goto B7295ad;
case 0x7295ae:goto L7295ae;
case 0x7295b1:c.instructions+=2;goto B7295b1;
case 0x7295b3:c.instructions+=1;goto B7295b3;
case 0x7295b5:goto L7295b5;
case 0x7295b8:goto L7295b8;
case 0x7295bf:c.instructions+=3;goto B7295bf;
case 0x7295c1:c.instructions+=2;goto B7295c1;
case 0x7295c3:c.instructions+=1;goto B7295c3;
case 0x7295c5:goto L7295c5;
case 0x7295ca:c.instructions+=1;goto B7295ca;
case 0x7295cd:goto L7295cd;
case 0x7295d1:c.instructions+=4;goto B7295d1;
case 0x7295d2:c.instructions+=3;goto B7295d2;
case 0x7295d4:c.instructions+=2;goto B7295d4;
case 0x7295d6:c.instructions+=1;goto B7295d6;
case 0x7295d8:goto L7295d8;
case 0x7295db:c.instructions+=3;goto B7295db;
case 0x7295dc:c.instructions+=2;goto B7295dc;
case 0x7295dd:c.instructions+=1;goto B7295dd;
case 0x7295e2:goto L7295e2;
case 0x7295e7:c.instructions+=4;goto B7295e7;
case 0x7295e9:c.instructions+=3;goto B7295e9;
case 0x7295ea:c.instructions+=2;goto B7295ea;
case 0x7295eb:c.instructions+=1;goto B7295eb;
case 0x7295ed:goto L7295ed;
case 0x7295f1:c.instructions+=2;goto B7295f1;
case 0x7295f5:c.instructions+=1;goto B7295f5;
case 0x7295f7:goto L7295f7;
case 0x7295f9:c.instructions+=1;goto B7295f9;
case 0x7295fb:goto L7295fb;
case 0x7295ff:c.instructions+=4;goto B7295ff;
case 0x729603:c.instructions+=3;goto B729603;
case 0x729607:c.instructions+=2;goto B729607;
case 0x72960b:c.instructions+=1;goto B72960b;
case 0x72960d:goto L72960d;
case 0x72960f:c.instructions+=1;goto B72960f;
case 0x729611:goto L729611;
case 0x729615:c.instructions+=5;goto B729615;
case 0x729619:c.instructions+=4;goto B729619;
case 0x72961d:c.instructions+=3;goto B72961d;
case 0x729621:c.instructions+=2;goto B729621;
case 0x729625:c.instructions+=1;goto B729625;
case 0x729629:goto L729629;
case 0x72962c:c.instructions+=7;goto B72962c;
case 0x72962f:c.instructions+=6;goto B72962f;
case 0x729632:c.instructions+=5;goto B729632;
case 0x729635:c.instructions+=4;goto B729635;
case 0x729636:c.instructions+=3;goto B729636;
case 0x729637:c.instructions+=2;goto B729637;
case 0x729638:c.instructions+=1;goto B729638;
case 0x72963d:goto L72963d;
case 0x729644:c.instructions+=8;goto B729644;
case 0x729647:c.instructions+=7;goto B729647;
case 0x72964a:c.instructions+=6;goto B72964a;
case 0x72964d:c.instructions+=5;goto B72964d;
case 0x729650:c.instructions+=4;goto B729650;
case 0x729654:c.instructions+=3;goto B729654;
case 0x729657:c.instructions+=2;goto B729657;
case 0x72965a:c.instructions+=1;goto B72965a;
case 0x729660:goto L729660;
case 0x729661:c.instructions+=1;goto B729661;
case 0x729663:goto L729663;
case 0x72966a:c.instructions+=2;goto B72966a;
case 0x72966c:c.instructions+=1;goto B72966c;
case 0x72966e:goto L72966e;
case 0x729671:c.instructions+=1;goto B729671;
case 0x729674:goto L729674;
case 0x729676:goto L729676;
case 0x729679:c.instructions+=2;goto B729679;
case 0x72967b:c.instructions+=1;goto B72967b;
case 0x72967d:goto L72967d;
case 0x729682:goto L729682;
case 0x729684:c.instructions+=2;goto B729684;
case 0x729686:c.instructions+=1;goto B729686;
case 0x729688:goto L729688;
case 0x72968a:goto L72968a;
case 0x72968b:c.instructions+=3;goto B72968b;
case 0x72968e:c.instructions+=2;goto B72968e;
case 0x72968f:c.instructions+=1;goto B72968f;
case 0x729694:goto L729694;
case 0x729695:c.instructions+=5;goto B729695;
case 0x729696:c.instructions+=4;goto B729696;
case 0x72969d:c.instructions+=3;goto B72969d;
case 0x72969f:c.instructions+=2;goto B72969f;
case 0x7296a1:c.instructions+=1;goto B7296a1;
case 0x7296a3:goto L7296a3;
case 0x7296aa:goto L7296aa;
case 0x7296ae:c.instructions+=3;goto B7296ae;
case 0x7296af:c.instructions+=2;goto B7296af;
case 0x7296b1:c.instructions+=1;goto B7296b1;
case 0x7296b3:goto L7296b3;
case 0x7296b5:c.instructions+=2;goto B7296b5;
case 0x7296b7:c.instructions+=1;goto B7296b7;
case 0x7296b9:goto L7296b9;
case 0x7296ba:c.instructions+=3;goto B7296ba;
case 0x7296bb:c.instructions+=2;goto B7296bb;
case 0x7296bc:c.instructions+=1;goto B7296bc;
case 0x7296bd:goto L7296bd;
case 0x7296c2:goto L7296c2;
case 0x7296c3:c.instructions+=4;goto B7296c3;
case 0x7296c9:c.instructions+=3;goto B7296c9;
case 0x7296ca:c.instructions+=2;goto B7296ca;
case 0x7296d1:c.instructions+=1;goto B7296d1;
case 0x7296d4:goto L7296d4;
case 0x7296da:c.instructions+=1;goto B7296da;
case 0x7296dc:goto L7296dc;
case 0x7296e3:goto L7296e3;
case 0x7296e5:c.instructions+=1;goto B7296e5;
case 0x7296e7:goto L7296e7;
case 0x7296e9:c.instructions+=1;goto B7296e9;
case 0x7296eb:goto L7296eb;
case 0x7296ef:c.instructions+=1;goto B7296ef;
case 0x7296f1:goto L7296f1;
case 0x7296f7:c.instructions+=2;goto B7296f7;
case 0x7296f9:c.instructions+=1;goto B7296f9;
case 0x7296fb:goto L7296fb;
case 0x7296fc:c.instructions+=2;goto B7296fc;
case 0x729701:c.instructions+=1;goto B729701;
case 0x729703:goto L729703;
case 0x72970a:c.instructions+=3;goto B72970a;
case 0x72970b:c.instructions+=2;goto B72970b;
case 0x72970c:c.instructions+=1;goto B72970c;
case 0x72970d:goto L72970d;
case 0x72970e:c.instructions+=12;goto B72970e;
case 0x729710:c.instructions+=11;goto B729710;
case 0x729713:c.instructions+=10;goto B729713;
case 0x729716:c.instructions+=9;goto B729716;
case 0x72971a:c.instructions+=8;goto B72971a;
case 0x72971e:c.instructions+=7;goto B72971e;
case 0x729722:c.instructions+=6;goto B729722;
case 0x729723:c.instructions+=5;goto B729723;
case 0x729724:c.instructions+=4;goto B729724;
case 0x729725:c.instructions+=3;goto B729725;
case 0x729728:c.instructions+=2;goto B729728;
case 0x72972b:c.instructions+=1;goto B72972b;
case 0x72972e:goto L72972e;
case 0x729735:goto L729735;
case 0x729738:c.instructions+=3;goto B729738;
case 0x729739:c.instructions+=2;goto B729739;
case 0x72973a:c.instructions+=1;goto B72973a;
case 0x72973f:goto L72973f;
case 0x729741:c.instructions+=4;goto B729741;
case 0x729742:c.instructions+=3;goto B729742;
case 0x729743:c.instructions+=2;goto B729743;
case 0x729746:c.instructions+=1;goto B729746;
case 0x72974c:goto L72974c;
case 0x72974f:c.instructions+=5;goto B72974f;
case 0x729750:c.instructions+=4;goto B729750;
case 0x729753:c.instructions+=3;goto B729753;
case 0x729754:c.instructions+=2;goto B729754;
case 0x729755:c.instructions+=1;goto B729755;
case 0x72975a:goto L72975a;
case 0x72975d:c.instructions+=8;goto B72975d;
case 0x729760:c.instructions+=7;goto B729760;
case 0x729763:c.instructions+=6;goto B729763;
case 0x729764:c.instructions+=5;goto B729764;
case 0x729768:c.instructions+=4;goto B729768;
case 0x729769:c.instructions+=3;goto B729769;
case 0x72976d:c.instructions+=2;goto B72976d;
case 0x72976e:c.instructions+=1;goto B72976e;
case 0x729773:goto L729773;
case 0x729776:c.instructions+=3;goto B729776;
case 0x729778:c.instructions+=2;goto B729778;
case 0x72977b:c.instructions+=1;goto B72977b;
case 0x72977d:goto L72977d;
case 0x729781:c.instructions+=8;goto B729781;
case 0x729784:c.instructions+=7;goto B729784;
case 0x729789:c.instructions+=6;goto B729789;
case 0x72978c:c.instructions+=5;goto B72978c;
case 0x72978f:c.instructions+=4;goto B72978f;
case 0x729791:c.instructions+=3;goto B729791;
case 0x729794:c.instructions+=2;goto B729794;
case 0x729796:c.instructions+=1;goto B729796;
case 0x729798:goto L729798;
case 0x72979b:c.instructions+=2;goto B72979b;
case 0x72979c:c.instructions+=1;goto B72979c;
case 0x7297a1:goto L7297a1;
case 0x7297a3:c.instructions+=2;goto B7297a3;
case 0x7297a4:c.instructions+=1;goto B7297a4;
case 0x7297a6:goto L7297a6;
case 0x7297a8:c.instructions+=1;goto B7297a8;
case 0x7297aa:goto L7297aa;
case 0x7297ad:c.instructions+=1;goto B7297ad;
case 0x7297af:goto L7297af;
case 0x7297b1:c.instructions+=1;goto B7297b1;
case 0x7297b2:goto L7297b2;
case 0x7297b3:c.instructions+=1;goto B7297b3;
case 0x7297b8:goto L7297b8;
case 0x7297bb:c.instructions+=13;goto B7297bb;
case 0x7297bf:c.instructions+=12;goto B7297bf;
case 0x7297c1:c.instructions+=11;goto B7297c1;
case 0x7297c5:c.instructions+=10;goto B7297c5;
case 0x7297c6:c.instructions+=9;goto B7297c6;
case 0x7297cd:c.instructions+=8;goto B7297cd;
case 0x7297d2:c.instructions+=7;goto B7297d2;
case 0x7297d4:c.instructions+=6;goto B7297d4;
case 0x7297d7:c.instructions+=5;goto B7297d7;
case 0x7297da:c.instructions+=4;goto B7297da;
case 0x7297dc:c.instructions+=3;goto B7297dc;
case 0x7297de:c.instructions+=2;goto B7297de;
case 0x7297e5:c.instructions+=1;goto B7297e5;
case 0x7297e7:goto L7297e7;
case 0x7297e9:c.instructions+=1;goto B7297e9;
case 0x7297f0:goto L7297f0;
case 0x7297f4:c.instructions+=2;goto B7297f4;
case 0x7297f7:c.instructions+=1;goto B7297f7;
case 0x7297f9:goto L7297f9;
case 0x7297fc:c.instructions+=2;goto B7297fc;
case 0x7297fd:c.instructions+=1;goto B7297fd;
case 0x729802:goto L729802;
case 0x729809:c.instructions+=1;goto B729809;
case 0x72980a:goto L72980a;
case 0x72980d:c.instructions+=5;goto B72980d;
case 0x729810:c.instructions+=4;goto B729810;
case 0x729813:c.instructions+=3;goto B729813;
case 0x729815:c.instructions+=2;goto B729815;
case 0x729819:c.instructions+=1;goto B729819;
case 0x72981b:goto L72981b;
case 0x72981e:c.instructions+=2;goto B72981e;
case 0x72981f:c.instructions+=1;goto B72981f;
case 0x729824:goto L729824;
case 0x729825:c.instructions+=1;goto B729825;
case 0x729827:goto L729827;
case 0x72982a:c.instructions+=1;goto B72982a;
case 0x72982c:goto L72982c;
case 0x72982e:c.instructions+=1;goto B72982e;
case 0x72982f:goto L72982f;
case 0x729831:c.instructions+=1;goto B729831;
case 0x729833:goto L729833;
case 0x729835:goto L729835;
case 0x729837:c.instructions+=21;goto B729837;
case 0x72983b:c.instructions+=20;goto B72983b;
case 0x72983c:c.instructions+=19;goto B72983c;
case 0x72983e:c.instructions+=18;goto B72983e;
case 0x72983f:c.instructions+=17;goto B72983f;
case 0x729841:c.instructions+=16;goto B729841;
case 0x729844:c.instructions+=15;goto B729844;
case 0x729849:c.instructions+=14;goto B729849;
case 0x72984c:c.instructions+=13;goto B72984c;
case 0x729853:c.instructions+=12;goto B729853;
case 0x729856:c.instructions+=11;goto B729856;
case 0x729859:c.instructions+=10;goto B729859;
case 0x72985c:c.instructions+=9;goto B72985c;
case 0x72985f:c.instructions+=8;goto B72985f;
case 0x729863:c.instructions+=7;goto B729863;
case 0x729866:c.instructions+=6;goto B729866;
case 0x729869:c.instructions+=5;goto B729869;
case 0x72986c:c.instructions+=4;goto B72986c;
case 0x72986e:c.instructions+=3;goto B72986e;
case 0x729870:c.instructions+=2;goto B729870;
case 0x729873:c.instructions+=1;goto B729873;
case 0x729875:goto L729875;
case 0x72987c:goto L72987c;
case 0x72987f:c.instructions+=13;goto B72987f;
case 0x729882:c.instructions+=12;goto B729882;
case 0x729885:c.instructions+=11;goto B729885;
case 0x729886:c.instructions+=10;goto B729886;
case 0x729889:c.instructions+=9;goto B729889;
case 0x72988c:c.instructions+=8;goto B72988c;
case 0x72988f:c.instructions+=7;goto B72988f;
case 0x729895:c.instructions+=6;goto B729895;
case 0x729898:c.instructions+=5;goto B729898;
case 0x72989b:c.instructions+=4;goto B72989b;
case 0x72989f:c.instructions+=3;goto B72989f;
case 0x7298a6:c.instructions+=2;goto B7298a6;
case 0x7298aa:c.instructions+=1;goto B7298aa;
case 0x7298ac:goto L7298ac;
case 0x7298b1:goto L7298b1;
case 0x7298b5:c.instructions+=4;goto B7298b5;
case 0x7298b7:c.instructions+=3;goto B7298b7;
case 0x7298b9:c.instructions+=2;goto B7298b9;
case 0x7298bc:c.instructions+=1;goto B7298bc;
case 0x7298be:goto L7298be;
case 0x7298c2:goto L7298c2;
case 0x7298c6:c.instructions+=1;goto B7298c6;
case 0x7298c8:goto L7298c8;
case 0x7298cd:goto L7298cd;
case 0x7298d1:c.instructions+=4;goto B7298d1;
case 0x7298d3:c.instructions+=3;goto B7298d3;
case 0x7298d5:c.instructions+=2;goto B7298d5;
case 0x7298d8:c.instructions+=1;goto B7298d8;
case 0x7298da:goto L7298da;
case 0x7298de:goto L7298de;
case 0x7298e1:c.instructions+=7;goto B7298e1;
case 0x7298e5:c.instructions+=6;goto B7298e5;
case 0x7298e8:c.instructions+=5;goto B7298e8;
case 0x7298ec:c.instructions+=4;goto B7298ec;
case 0x7298f0:c.instructions+=3;goto B7298f0;
case 0x7298f8:c.instructions+=2;goto B7298f8;
case 0x7298ff:c.instructions+=1;goto B7298ff;
case 0x729904:goto L729904;
case 0x729908:c.instructions+=24;goto B729908;
case 0x72990c:c.instructions+=23;goto B72990c;
case 0x729910:c.instructions+=22;goto B729910;
case 0x729914:c.instructions+=21;goto B729914;
case 0x729917:c.instructions+=20;goto B729917;
case 0x72991a:c.instructions+=19;goto B72991a;
case 0x72991d:c.instructions+=18;goto B72991d;
case 0x729920:c.instructions+=17;goto B729920;
case 0x729924:c.instructions+=16;goto B729924;
case 0x729928:c.instructions+=15;goto B729928;
case 0x72992b:c.instructions+=14;goto B72992b;
case 0x72992e:c.instructions+=13;goto B72992e;
case 0x729931:c.instructions+=12;goto B729931;
case 0x729934:c.instructions+=11;goto B729934;
case 0x729937:c.instructions+=10;goto B729937;
case 0x72993a:c.instructions+=9;goto B72993a;
case 0x72993e:c.instructions+=8;goto B72993e;
case 0x729941:c.instructions+=7;goto B729941;
case 0x729942:c.instructions+=6;goto B729942;
case 0x729944:c.instructions+=5;goto B729944;
case 0x729946:c.instructions+=4;goto B729946;
case 0x72994c:c.instructions+=3;goto B72994c;
case 0x72994f:c.instructions+=2;goto B72994f;
case 0x729952:c.instructions+=1;goto B729952;
case 0x729958:goto L729958;
case 0x72995a:goto L72995a;
case 0x72995d:goto L72995d;
case 0x729965:c.instructions+=42;goto B729965;
case 0x729967:c.instructions+=41;goto B729967;
case 0x72996a:c.instructions+=40;goto B72996a;
case 0x72996d:c.instructions+=39;goto B72996d;
case 0x729975:c.instructions+=38;goto B729975;
case 0x72997a:c.instructions+=37;goto B72997a;
case 0x72997f:c.instructions+=36;goto B72997f;
case 0x729983:c.instructions+=35;goto B729983;
case 0x729986:c.instructions+=34;goto B729986;
case 0x729989:c.instructions+=33;goto B729989;
case 0x72998f:c.instructions+=32;goto B72998f;
case 0x729990:c.instructions+=31;goto B729990;
case 0x729994:c.instructions+=30;goto B729994;
case 0x729997:c.instructions+=29;goto B729997;
case 0x72999a:c.instructions+=28;goto B72999a;
case 0x72999d:c.instructions+=27;goto B72999d;
case 0x7299a0:c.instructions+=26;goto B7299a0;
case 0x7299a3:c.instructions+=25;goto B7299a3;
case 0x7299a6:c.instructions+=24;goto B7299a6;
case 0x7299a9:c.instructions+=23;goto B7299a9;
case 0x7299ac:c.instructions+=22;goto B7299ac;
case 0x7299af:c.instructions+=21;goto B7299af;
case 0x7299b2:c.instructions+=20;goto B7299b2;
case 0x7299b5:c.instructions+=19;goto B7299b5;
case 0x7299b8:c.instructions+=18;goto B7299b8;
case 0x7299bb:c.instructions+=17;goto B7299bb;
case 0x7299be:c.instructions+=16;goto B7299be;
case 0x7299c2:c.instructions+=15;goto B7299c2;
case 0x7299c5:c.instructions+=14;goto B7299c5;
case 0x7299c8:c.instructions+=13;goto B7299c8;
case 0x7299cb:c.instructions+=12;goto B7299cb;
case 0x7299ce:c.instructions+=11;goto B7299ce;
case 0x7299d1:c.instructions+=10;goto B7299d1;
case 0x7299d4:c.instructions+=9;goto B7299d4;
case 0x7299d7:c.instructions+=8;goto B7299d7;
case 0x7299da:c.instructions+=7;goto B7299da;
case 0x7299dd:c.instructions+=6;goto B7299dd;
case 0x7299e0:c.instructions+=5;goto B7299e0;
case 0x7299e3:c.instructions+=4;goto B7299e3;
case 0x7299e6:c.instructions+=3;goto B7299e6;
case 0x7299e9:c.instructions+=2;goto B7299e9;
case 0x7299ec:c.instructions+=1;goto B7299ec;
case 0x7299f1:goto L7299f1;
case 0x7299f5:c.instructions+=7;goto B7299f5;
case 0x7299f6:c.instructions+=6;goto B7299f6;
case 0x7299f9:c.instructions+=5;goto B7299f9;
case 0x7299fc:c.instructions+=4;goto B7299fc;
case 0x7299ff:c.instructions+=3;goto B7299ff;
case 0x729a03:c.instructions+=2;goto B729a03;
case 0x729a06:c.instructions+=1;goto B729a06;
case 0x729a0c:goto L729a0c;
case 0x729a0f:goto L729a0f;
case 0x729a12:c.instructions+=2;goto B729a12;
case 0x729a14:c.instructions+=1;goto B729a14;
case 0x729a16:goto L729a16;
case 0x729a1a:c.instructions+=6;goto B729a1a;
case 0x729a1e:c.instructions+=5;goto B729a1e;
case 0x729a22:c.instructions+=4;goto B729a22;
case 0x729a26:c.instructions+=3;goto B729a26;
case 0x729a2a:c.instructions+=2;goto B729a2a;
case 0x729a2e:c.instructions+=1;goto B729a2e;
case 0x729a30:goto L729a30;
case 0x729a34:c.instructions+=9;goto B729a34;
case 0x729a37:c.instructions+=8;goto B729a37;
case 0x729a39:c.instructions+=7;goto B729a39;
case 0x729a3e:c.instructions+=6;goto B729a3e;
case 0x729a41:c.instructions+=5;goto B729a41;
case 0x729a44:c.instructions+=4;goto B729a44;
case 0x729a47:c.instructions+=3;goto B729a47;
case 0x729a4e:c.instructions+=2;goto B729a4e;
case 0x729a51:c.instructions+=1;goto B729a51;
case 0x729a53:goto L729a53;
case 0x729a56:goto L729a56;
case 0x729a5a:c.instructions+=18;goto B729a5a;
case 0x729a5d:c.instructions+=17;goto B729a5d;
case 0x729a60:c.instructions+=16;goto B729a60;
case 0x729a65:c.instructions+=15;goto B729a65;
case 0x729a68:c.instructions+=14;goto B729a68;
case 0x729a6b:c.instructions+=13;goto B729a6b;
case 0x729a71:c.instructions+=12;goto B729a71;
case 0x729a74:c.instructions+=11;goto B729a74;
case 0x729a78:c.instructions+=10;goto B729a78;
case 0x729a7b:c.instructions+=9;goto B729a7b;
case 0x729a80:c.instructions+=8;goto B729a80;
case 0x729a83:c.instructions+=7;goto B729a83;
case 0x729a86:c.instructions+=6;goto B729a86;
case 0x729a8a:c.instructions+=5;goto B729a8a;
case 0x729a8e:c.instructions+=4;goto B729a8e;
case 0x729a8f:c.instructions+=3;goto B729a8f;
case 0x729a90:c.instructions+=2;goto B729a90;
case 0x729a93:c.instructions+=1;goto B729a93;
case 0x729a95:goto L729a95;
case 0x729a98:goto L729a98;
case 0x729a9b:c.instructions+=4;goto B729a9b;
case 0x729a9e:c.instructions+=3;goto B729a9e;
case 0x729aa0:c.instructions+=2;goto B729aa0;
case 0x729aa6:c.instructions+=1;goto B729aa6;
case 0x729aa8:goto L729aa8;
case 0x729aab:c.instructions+=1;goto B729aab;
case 0x729ab1:goto L729ab1;
case 0x729ab4:c.instructions+=4;goto B729ab4;
case 0x729ab7:c.instructions+=3;goto B729ab7;
case 0x729ab8:c.instructions+=2;goto B729ab8;
case 0x729abe:c.instructions+=1;goto B729abe;
case 0x729ac0:goto L729ac0;
case 0x729ac2:goto L729ac2;
case 0x729ac6:c.instructions+=9;goto B729ac6;
case 0x729ac7:c.instructions+=8;goto B729ac7;
case 0x729acb:c.instructions+=7;goto B729acb;
case 0x729acc:c.instructions+=6;goto B729acc;
case 0x729ad0:c.instructions+=5;goto B729ad0;
case 0x729ad1:c.instructions+=4;goto B729ad1;
case 0x729ad4:c.instructions+=3;goto B729ad4;
case 0x729ad7:c.instructions+=2;goto B729ad7;
case 0x729ad8:c.instructions+=1;goto B729ad8;
case 0x729add:goto L729add;
case 0x729ae0:c.instructions+=2;goto B729ae0;
case 0x729ae2:c.instructions+=1;goto B729ae2;
case 0x729ae4:goto L729ae4;
case 0x729ae6:c.instructions+=2;goto B729ae6;
case 0x729ae9:c.instructions+=1;goto B729ae9;
case 0x729aef:goto L729aef;
case 0x729af2:c.instructions+=1;goto B729af2;
case 0x729af5:goto L729af5;
case 0x729afa:c.instructions+=3;goto B729afa;
case 0x729afe:c.instructions+=2;goto B729afe;
case 0x729aff:c.instructions+=1;goto B729aff;
case 0x729b04:goto L729b04;
case 0x729b08:c.instructions+=6;goto B729b08;
case 0x729b09:c.instructions+=5;goto B729b09;
case 0x729b0a:c.instructions+=4;goto B729b0a;
case 0x729b0b:c.instructions+=3;goto B729b0b;
case 0x729b0d:c.instructions+=2;goto B729b0d;
case 0x729b0e:c.instructions+=1;goto B729b0e;
case 0x729b10:goto L729b10;
case 0x729b15:goto L729b15;
case 0x729b18:c.instructions+=5;goto B729b18;
case 0x729b19:c.instructions+=4;goto B729b19;
case 0x729b1a:c.instructions+=3;goto B729b1a;
case 0x729b1b:c.instructions+=2;goto B729b1b;
case 0x729b1c:c.instructions+=1;goto B729b1c;
case 0x729b1d:goto L729b1d;
case 0x729b1e:c.instructions+=10;goto B729b1e;
case 0x729b22:c.instructions+=9;goto B729b22;
case 0x729b28:c.instructions+=8;goto B729b28;
case 0x729b29:c.instructions+=7;goto B729b29;
case 0x729b2b:c.instructions+=6;goto B729b2b;
case 0x729b2e:c.instructions+=5;goto B729b2e;
case 0x729b31:c.instructions+=4;goto B729b31;
case 0x729b34:c.instructions+=3;goto B729b34;
case 0x729b37:c.instructions+=2;goto B729b37;
case 0x729b3e:c.instructions+=1;goto B729b3e;
case 0x729b40:goto L729b40;
case 0x729b42:c.instructions+=2;goto B729b42;
case 0x729b43:c.instructions+=1;goto B729b43;
case 0x729b48:goto L729b48;
case 0x729b4b:c.instructions+=1;goto B729b4b;
case 0x729b4d:goto L729b4d;
case 0x729b50:c.instructions+=1;goto B729b50;
case 0x729b53:goto L729b53;
case 0x729b57:c.instructions+=7;goto B729b57;
case 0x729b58:c.instructions+=6;goto B729b58;
case 0x729b59:c.instructions+=5;goto B729b59;
case 0x729b5c:c.instructions+=4;goto B729b5c;
case 0x729b60:c.instructions+=3;goto B729b60;
case 0x729b64:c.instructions+=2;goto B729b64;
case 0x729b67:c.instructions+=1;goto B729b67;
case 0x729b6c:goto L729b6c;
case 0x729b6f:goto L729b6f;
case 0x729b75:c.instructions+=4;goto B729b75;
case 0x729b76:c.instructions+=3;goto B729b76;
case 0x729b79:c.instructions+=2;goto B729b79;
case 0x729b7a:c.instructions+=1;goto B729b7a;
case 0x729b7f:goto L729b7f;
case 0x729b83:c.instructions+=4;goto B729b83;
case 0x729b84:c.instructions+=3;goto B729b84;
case 0x729b85:c.instructions+=2;goto B729b85;
case 0x729b88:c.instructions+=1;goto B729b88;
case 0x729b8a:goto L729b8a;
case 0x729b92:c.instructions+=1;goto B729b92;
case 0x729b94:goto L729b94;
case 0x729b9b:c.instructions+=2;goto B729b9b;
case 0x729b9c:c.instructions+=1;goto B729b9c;
case 0x729ba1:goto L729ba1;
case 0x729ba2:c.instructions+=1;goto B729ba2;
case 0x729ba5:goto L729ba5;
case 0x729bac:goto L729bac;
case 0x729bb3:c.instructions+=2;goto B729bb3;
case 0x729bb6:c.instructions+=1;goto B729bb6;
case 0x729bb8:goto L729bb8;
case 0x729bbf:c.instructions+=2;goto B729bbf;
case 0x729bc2:c.instructions+=1;goto B729bc2;
case 0x729bc4:goto L729bc4;
case 0x729bcb:c.instructions+=2;goto B729bcb;
case 0x729bcd:c.instructions+=1;goto B729bcd;
case 0x729bcf:goto L729bcf;
case 0x729bd6:c.instructions+=2;goto B729bd6;
case 0x729bd8:c.instructions+=1;goto B729bd8;
case 0x729bda:goto L729bda;
case 0x729bdd:c.instructions+=9;goto B729bdd;
case 0x729be3:c.instructions+=8;goto B729be3;
case 0x729be6:c.instructions+=7;goto B729be6;
case 0x729be7:c.instructions+=6;goto B729be7;
case 0x729be8:c.instructions+=5;goto B729be8;
case 0x729be9:c.instructions+=4;goto B729be9;
case 0x729bec:c.instructions+=3;goto B729bec;
case 0x729bef:c.instructions+=2;goto B729bef;
case 0x729bf2:c.instructions+=1;goto B729bf2;
case 0x729bf7:goto L729bf7;
case 0x729bfa:c.instructions+=3;goto B729bfa;
case 0x729bfc:c.instructions+=2;goto B729bfc;
case 0x729bff:c.instructions+=1;goto B729bff;
case 0x729c01:goto L729c01;
case 0x729c04:c.instructions+=6;goto B729c04;
case 0x729c07:c.instructions+=5;goto B729c07;
case 0x729c0b:c.instructions+=4;goto B729c0b;
case 0x729c11:c.instructions+=3;goto B729c11;
case 0x729c13:c.instructions+=2;goto B729c13;
case 0x729c14:c.instructions+=1;goto B729c14;
case 0x729c19:goto L729c19;
case 0x729c1a:c.instructions+=1;goto B729c1a;
case 0x729c1b:goto L729c1b;
case 0x729c1f:c.instructions+=1;goto B729c1f;
case 0x729c25:goto L729c25;
case 0x729c28:c.instructions+=5;goto B729c28;
case 0x729c2c:c.instructions+=4;goto B729c2c;
case 0x729c2e:c.instructions+=3;goto B729c2e;
case 0x729c30:c.instructions+=2;goto B729c30;
case 0x729c33:c.instructions+=1;goto B729c33;
case 0x729c35:goto L729c35;
case 0x729c39:c.instructions+=2;goto B729c39;
case 0x729c3a:c.instructions+=1;goto B729c3a;
case 0x729c3f:goto L729c3f;
case 0x729c41:c.instructions+=2;goto B729c41;
case 0x729c42:c.instructions+=1;goto B729c42;
case 0x729c44:goto L729c44;
case 0x729c47:c.instructions+=2;goto B729c47;
case 0x729c4a:c.instructions+=1;goto B729c4a;
case 0x729c4e:goto L729c4e;
case 0x729c4f:c.instructions+=2;goto B729c4f;
case 0x729c52:c.instructions+=1;goto B729c52;
case 0x729c54:goto L729c54;
case 0x729c58:c.instructions+=1;goto B729c58;
case 0x729c5a:goto L729c5a;
case 0x729c5c:c.instructions+=2;goto B729c5c;
case 0x729c5f:c.instructions+=1;goto B729c5f;
case 0x729c61:goto L729c61;
case 0x729c65:c.instructions+=1;goto B729c65;
case 0x729c6a:goto L729c6a;
case 0x729c6b:c.instructions+=3;goto B729c6b;
case 0x729c6e:c.instructions+=2;goto B729c6e;
case 0x729c6f:c.instructions+=1;goto B729c6f;
case 0x729c71:goto L729c71;
case 0x729c73:goto L729c73;
case 0x729c77:c.instructions+=1;goto B729c77;
case 0x729c79:goto L729c79;
case 0x729c7c:c.instructions+=1;goto B729c7c;
case 0x729c81:goto L729c81;
case 0x729c83:c.instructions+=2;goto B729c83;
case 0x729c84:c.instructions+=1;goto B729c84;
case 0x729c86:goto L729c86;
case 0x729c89:c.instructions+=5;goto B729c89;
case 0x729c8c:c.instructions+=4;goto B729c8c;
case 0x729c92:c.instructions+=3;goto B729c92;
case 0x729c96:c.instructions+=2;goto B729c96;
case 0x729c9a:c.instructions+=1;goto B729c9a;
case 0x729c9c:goto L729c9c;
case 0x729c9e:c.instructions+=2;goto B729c9e;
case 0x729ca1:c.instructions+=1;goto B729ca1;
case 0x729ca3:goto L729ca3;
case 0x729ca7:c.instructions+=1;goto B729ca7;
case 0x729cac:goto L729cac;
case 0x729cae:c.instructions+=2;goto B729cae;
case 0x729caf:c.instructions+=1;goto B729caf;
case 0x729cb1:goto L729cb1;
case 0x729cb4:c.instructions+=5;goto B729cb4;
case 0x729cb7:c.instructions+=4;goto B729cb7;
case 0x729cba:c.instructions+=3;goto B729cba;
case 0x729cc0:c.instructions+=2;goto B729cc0;
case 0x729cc3:c.instructions+=1;goto B729cc3;
case 0x729cc7:goto L729cc7;
case 0x729cc8:c.instructions+=2;goto B729cc8;
case 0x729ccb:c.instructions+=1;goto B729ccb;
case 0x729ccd:goto L729ccd;
case 0x729cd1:goto L729cd1;
case 0x729cd4:c.instructions+=2;goto B729cd4;
case 0x729cd5:c.instructions+=1;goto B729cd5;
case 0x729cd6:goto L729cd6;
case 0x729cd7:c.instructions+=3;goto B729cd7;
case 0x729cda:c.instructions+=2;goto B729cda;
case 0x729cdb:c.instructions+=1;goto B729cdb;
case 0x729cdc:goto L729cdc;
case 0x729cdd:c.instructions+=1;goto B729cdd;
case 0x729ce2:goto L729ce2;
case 0x729ce7:goto L729ce7;
case 0x729ce9:c.instructions+=1;goto B729ce9;
case 0x729cee:goto L729cee;
case 0x729cf0:c.instructions+=2;goto B729cf0;
case 0x729cf1:c.instructions+=1;goto B729cf1;
case 0x729cf2:goto L729cf2;
case 0x729cf9:c.instructions+=1;goto B729cf9;
case 0x729cfb:goto L729cfb;
case 0x729cfd:c.instructions+=2;goto B729cfd;
case 0x729cfe:c.instructions+=1;goto B729cfe;
case 0x729cff:goto L729cff;
case 0x729d05:c.instructions+=9;goto B729d05;
case 0x729d06:c.instructions+=8;goto B729d06;
case 0x729d09:c.instructions+=7;goto B729d09;
case 0x729d0b:c.instructions+=6;goto B729d0b;
case 0x729d0e:c.instructions+=5;goto B729d0e;
case 0x729d11:c.instructions+=4;goto B729d11;
case 0x729d12:c.instructions+=3;goto B729d12;
case 0x729d14:c.instructions+=2;goto B729d14;
case 0x729d15:c.instructions+=1;goto B729d15;
case 0x729d16:goto L729d16;
case 0x729d17:c.instructions+=9;goto B729d17;
case 0x729d19:c.instructions+=8;goto B729d19;
case 0x729d1f:c.instructions+=7;goto B729d1f;
case 0x729d20:c.instructions+=6;goto B729d20;
case 0x729d21:c.instructions+=5;goto B729d21;
case 0x729d27:c.instructions+=4;goto B729d27;
case 0x729d28:c.instructions+=3;goto B729d28;
case 0x729d2a:c.instructions+=2;goto B729d2a;
case 0x729d34:c.instructions+=1;goto B729d34;
case 0x729d3a:goto L729d3a;
case 0x729d3c:c.instructions+=3;goto B729d3c;
case 0x729d3d:c.instructions+=2;goto B729d3d;
case 0x729d43:c.instructions+=1;goto B729d43;
case 0x729d45:goto L729d45;
case 0x729d4b:c.instructions+=1;goto B729d4b;
case 0x729d4d:goto L729d4d;
case 0x729d4f:goto L729d4f;
case 0x729d54:goto L729d54;
case 0x729d56:c.instructions+=1;goto B729d56;
case 0x729d58:goto L729d58;
case 0x729d5b:c.instructions+=3;goto B729d5b;
case 0x729d5d:c.instructions+=2;goto B729d5d;
case 0x729d5e:c.instructions+=1;goto B729d5e;
case 0x729d63:goto L729d63;
case 0x729d66:c.instructions+=3;goto B729d66;
case 0x729d67:c.instructions+=2;goto B729d67;
case 0x729d68:c.instructions+=1;goto B729d68;
case 0x729d6a:goto L729d6a;
case 0x729d6d:c.instructions+=3;goto B729d6d;
case 0x729d6e:c.instructions+=2;goto B729d6e;
case 0x729d6f:c.instructions+=1;goto B729d6f;
case 0x729d74:goto L729d74;
case 0x729d78:c.instructions+=3;goto B729d78;
case 0x729d79:c.instructions+=2;goto B729d79;
case 0x729d7a:c.instructions+=1;goto B729d7a;
case 0x729d7c:goto L729d7c;
case 0x729d7e:c.instructions+=1;goto B729d7e;
case 0x729d80:goto L729d80;
case 0x729d82:c.instructions+=1;goto B729d82;
case 0x729d83:goto L729d83;
case 0x729d86:c.instructions+=3;goto B729d86;
case 0x729d8b:c.instructions+=2;goto B729d8b;
case 0x729d8c:c.instructions+=1;goto B729d8c;
case 0x729d91:goto L729d91;
case 0x729d95:c.instructions+=3;goto B729d95;
case 0x729d96:c.instructions+=2;goto B729d96;
case 0x729d97:c.instructions+=1;goto B729d97;
case 0x729d99:goto L729d99;
case 0x729d9c:goto L729d9c;
case 0x729d9d:c.instructions+=4;goto B729d9d;
case 0x729d9f:c.instructions+=3;goto B729d9f;
case 0x729da0:c.instructions+=2;goto B729da0;
case 0x729da1:c.instructions+=1;goto B729da1;
case 0x729da2:goto L729da2;
case 0x729da3:c.instructions+=8;goto B729da3;
case 0x729da7:c.instructions+=7;goto B729da7;
case 0x729daa:c.instructions+=6;goto B729daa;
case 0x729db0:c.instructions+=5;goto B729db0;
case 0x729db1:c.instructions+=4;goto B729db1;
case 0x729db6:c.instructions+=3;goto B729db6;
case 0x729db8:c.instructions+=2;goto B729db8;
case 0x729dbc:c.instructions+=1;goto B729dbc;
case 0x729dbe:goto L729dbe;
case 0x729dc2:goto L729dc2;
case 0x729dc6:c.instructions+=1;goto B729dc6;
case 0x729dc8:goto L729dc8;
case 0x729dca:c.instructions+=1;goto B729dca;
case 0x729dcf:goto L729dcf;
case 0x729dd2:c.instructions+=3;goto B729dd2;
case 0x729dd9:c.instructions+=2;goto B729dd9;
case 0x729dda:c.instructions+=1;goto B729dda;
case 0x729ddc:goto L729ddc;
case 0x729dde:c.instructions+=1;goto B729dde;
case 0x729ddf:goto L729ddf;
case 0x729de3:c.instructions+=9;goto B729de3;
case 0x729de6:c.instructions+=8;goto B729de6;
case 0x729dec:c.instructions+=7;goto B729dec;
case 0x729def:c.instructions+=6;goto B729def;
case 0x729df3:c.instructions+=5;goto B729df3;
case 0x729dfa:c.instructions+=4;goto B729dfa;
case 0x729dfb:c.instructions+=3;goto B729dfb;
case 0x729dfc:c.instructions+=2;goto B729dfc;
case 0x729dff:c.instructions+=1;goto B729dff;
case 0x729e04:goto L729e04;
case 0x729e07:c.instructions+=3;goto B729e07;
case 0x729e0a:c.instructions+=2;goto B729e0a;
case 0x729e0b:c.instructions+=1;goto B729e0b;
case 0x729e10:goto L729e10;
case 0x729e13:goto L729e13;
case 0x729e17:c.instructions+=2;goto B729e17;
case 0x729e1a:c.instructions+=1;goto B729e1a;
case 0x729e1f:goto L729e1f;
case 0x729e20:c.instructions+=4;goto B729e20;
case 0x729e21:c.instructions+=3;goto B729e21;
case 0x729e22:c.instructions+=2;goto B729e22;
case 0x729e23:c.instructions+=1;goto B729e23;
case 0x729e24:goto L729e24;
case 0x729e25:c.instructions+=14;goto B729e25;
case 0x729e27:c.instructions+=13;goto B729e27;
case 0x729e2a:c.instructions+=12;goto B729e2a;
case 0x729e2d:c.instructions+=11;goto B729e2d;
case 0x729e31:c.instructions+=10;goto B729e31;
case 0x729e32:c.instructions+=9;goto B729e32;
case 0x729e33:c.instructions+=8;goto B729e33;
case 0x729e36:c.instructions+=7;goto B729e36;
case 0x729e39:c.instructions+=6;goto B729e39;
case 0x729e3f:c.instructions+=5;goto B729e3f;
case 0x729e41:c.instructions+=4;goto B729e41;
case 0x729e44:c.instructions+=3;goto B729e44;
case 0x729e47:c.instructions+=2;goto B729e47;
case 0x729e4a:c.instructions+=1;goto B729e4a;
case 0x729e4c:goto L729e4c;
case 0x729e4d:c.instructions+=1;goto B729e4d;
case 0x729e50:goto L729e50;
case 0x729e53:c.instructions+=6;goto B729e53;
case 0x729e56:c.instructions+=5;goto B729e56;
case 0x729e57:c.instructions+=4;goto B729e57;
case 0x729e5a:c.instructions+=3;goto B729e5a;
case 0x729e5d:c.instructions+=2;goto B729e5d;
case 0x729e5e:c.instructions+=1;goto B729e5e;
case 0x729e63:goto L729e63;
case 0x729e67:c.instructions+=6;goto B729e67;
case 0x729e6a:c.instructions+=5;goto B729e6a;
case 0x729e6b:c.instructions+=4;goto B729e6b;
case 0x729e6c:c.instructions+=3;goto B729e6c;
case 0x729e6d:c.instructions+=2;goto B729e6d;
case 0x729e6f:c.instructions+=1;goto B729e6f;
case 0x729e71:goto L729e71;
case 0x729e72:goto L729e72;
case 0x729e73:c.instructions+=3;goto B729e73;
case 0x729e74:c.instructions+=2;goto B729e74;
case 0x729e75:c.instructions+=1;goto B729e75;
case 0x729e76:goto L729e76;
case 0x729e77:c.instructions+=5;goto B729e77;
case 0x729e78:c.instructions+=4;goto B729e78;
case 0x729e7c:c.instructions+=3;goto B729e7c;
case 0x729e7e:c.instructions+=2;goto B729e7e;
case 0x729e80:c.instructions+=1;goto B729e80;
case 0x729e82:goto L729e82;
case 0x729e83:c.instructions+=1;goto B729e83;
case 0x729e86:goto L729e86;
case 0x729e89:c.instructions+=3;goto B729e89;
case 0x729e8d:c.instructions+=2;goto B729e8d;
case 0x729e8e:c.instructions+=1;goto B729e8e;
case 0x729e93:goto L729e93;
case 0x729e96:c.instructions+=7;goto B729e96;
case 0x729e97:c.instructions+=6;goto B729e97;
case 0x729e98:c.instructions+=5;goto B729e98;
case 0x729e99:c.instructions+=4;goto B729e99;
case 0x729e9a:c.instructions+=3;goto B729e9a;
case 0x729e9c:c.instructions+=2;goto B729e9c;
case 0x729e9d:c.instructions+=1;goto B729e9d;
case 0x729e9f:goto L729e9f;
case 0x729ea0:goto L729ea0;
case 0x729ea1:c.instructions+=2;goto B729ea1;
case 0x729ea2:c.instructions+=1;goto B729ea2;
case 0x729ea3:goto L729ea3;
case 0x729ea4:c.instructions+=14;goto B729ea4;
case 0x729ea6:c.instructions+=13;goto B729ea6;
case 0x729ea9:c.instructions+=12;goto B729ea9;
case 0x729eb0:c.instructions+=11;goto B729eb0;
case 0x729eb3:c.instructions+=10;goto B729eb3;
case 0x729eb4:c.instructions+=9;goto B729eb4;
case 0x729eb5:c.instructions+=8;goto B729eb5;
case 0x729eb8:c.instructions+=7;goto B729eb8;
case 0x729ebb:c.instructions+=6;goto B729ebb;
case 0x729ebd:c.instructions+=5;goto B729ebd;
case 0x729ebf:c.instructions+=4;goto B729ebf;
case 0x729ec5:c.instructions+=3;goto B729ec5;
case 0x729ec7:c.instructions+=2;goto B729ec7;
case 0x729eca:c.instructions+=1;goto B729eca;
case 0x729ecc:goto L729ecc;
case 0x729ecd:c.instructions+=1;goto B729ecd;
case 0x729ed0:goto L729ed0;
case 0x729ed3:c.instructions+=5;goto B729ed3;
case 0x729ed6:c.instructions+=4;goto B729ed6;
case 0x729ed7:c.instructions+=3;goto B729ed7;
case 0x729eda:c.instructions+=2;goto B729eda;
case 0x729edb:c.instructions+=1;goto B729edb;
case 0x729ee0:goto L729ee0;
case 0x729ee3:c.instructions+=7;goto B729ee3;
case 0x729ee4:c.instructions+=6;goto B729ee4;
case 0x729ee5:c.instructions+=5;goto B729ee5;
case 0x729ee6:c.instructions+=4;goto B729ee6;
case 0x729ee7:c.instructions+=3;goto B729ee7;
case 0x729ee9:c.instructions+=2;goto B729ee9;
case 0x729eea:c.instructions+=1;goto B729eea;
case 0x729eec:goto L729eec;
case 0x729eed:goto L729eed;
case 0x729eee:c.instructions+=3;goto B729eee;
case 0x729eef:c.instructions+=2;goto B729eef;
case 0x729ef0:c.instructions+=1;goto B729ef0;
case 0x729ef1:goto L729ef1;
case 0x729ef2:c.instructions+=5;goto B729ef2;
case 0x729ef3:c.instructions+=4;goto B729ef3;
case 0x729ef7:c.instructions+=3;goto B729ef7;
case 0x729ef9:c.instructions+=2;goto B729ef9;
case 0x729efb:c.instructions+=1;goto B729efb;
case 0x729efd:goto L729efd;
case 0x729efe:c.instructions+=1;goto B729efe;
case 0x729f01:goto L729f01;
case 0x729f04:c.instructions+=3;goto B729f04;
case 0x729f08:c.instructions+=2;goto B729f08;
case 0x729f09:c.instructions+=1;goto B729f09;
case 0x729f0e:goto L729f0e;
case 0x729f11:c.instructions+=7;goto B729f11;
case 0x729f12:c.instructions+=6;goto B729f12;
case 0x729f13:c.instructions+=5;goto B729f13;
case 0x729f14:c.instructions+=4;goto B729f14;
case 0x729f15:c.instructions+=3;goto B729f15;
case 0x729f17:c.instructions+=2;goto B729f17;
case 0x729f18:c.instructions+=1;goto B729f18;
case 0x729f1a:goto L729f1a;
case 0x729f1b:goto L729f1b;
case 0x729f1c:c.instructions+=2;goto B729f1c;
case 0x729f1d:c.instructions+=1;goto B729f1d;
case 0x729f1e:goto L729f1e;
case 0x729f22:c.instructions+=3;goto B729f22;
case 0x729f26:c.instructions+=2;goto B729f26;
case 0x729f27:c.instructions+=1;goto B729f27;
case 0x729f2c:goto L729f2c;
case 0x729f2d:c.instructions+=1;goto B729f2d;
case 0x729f2e:goto L729f2e;
case 0x729f2f:c.instructions+=11;goto B729f2f;
case 0x729f31:c.instructions+=10;goto B729f31;
case 0x729f32:c.instructions+=9;goto B729f32;
case 0x729f33:c.instructions+=8;goto B729f33;
case 0x729f36:c.instructions+=7;goto B729f36;
case 0x729f37:c.instructions+=6;goto B729f37;
case 0x729f3a:c.instructions+=5;goto B729f3a;
case 0x729f3d:c.instructions+=4;goto B729f3d;
case 0x729f41:c.instructions+=3;goto B729f41;
case 0x729f43:c.instructions+=2;goto B729f43;
case 0x729f45:c.instructions+=1;goto B729f45;
case 0x729f4b:goto L729f4b;
case 0x729f4e:c.instructions+=4;goto B729f4e;
case 0x729f4f:c.instructions+=3;goto B729f4f;
case 0x729f52:c.instructions+=2;goto B729f52;
case 0x729f55:c.instructions+=1;goto B729f55;
case 0x729f58:goto L729f58;
case 0x729f5b:c.instructions+=32;goto B729f5b;
case 0x729f5e:c.instructions+=31;goto B729f5e;
case 0x729f61:c.instructions+=30;goto B729f61;
case 0x729f65:c.instructions+=29;goto B729f65;
case 0x729f69:c.instructions+=28;goto B729f69;
case 0x729f6f:c.instructions+=27;goto B729f6f;
case 0x729f70:c.instructions+=26;goto B729f70;
case 0x729f73:c.instructions+=25;goto B729f73;
case 0x729f76:c.instructions+=24;goto B729f76;
case 0x729f7b:c.instructions+=23;goto B729f7b;
case 0x729f7e:c.instructions+=22;goto B729f7e;
case 0x729f82:c.instructions+=21;goto B729f82;
case 0x729f85:c.instructions+=20;goto B729f85;
case 0x729f86:c.instructions+=19;goto B729f86;
case 0x729f8a:c.instructions+=18;goto B729f8a;
case 0x729f8c:c.instructions+=17;goto B729f8c;
case 0x729f8e:c.instructions+=16;goto B729f8e;
case 0x729f91:c.instructions+=15;goto B729f91;
case 0x729f94:c.instructions+=14;goto B729f94;
case 0x729f97:c.instructions+=13;goto B729f97;
case 0x729f98:c.instructions+=12;goto B729f98;
case 0x729f99:c.instructions+=11;goto B729f99;
case 0x729f9c:c.instructions+=10;goto B729f9c;
case 0x729f9e:c.instructions+=9;goto B729f9e;
case 0x729fa0:c.instructions+=8;goto B729fa0;
case 0x729fa2:c.instructions+=7;goto B729fa2;
case 0x729fa5:c.instructions+=6;goto B729fa5;
case 0x729fa9:c.instructions+=5;goto B729fa9;
case 0x729fac:c.instructions+=4;goto B729fac;
case 0x729fad:c.instructions+=3;goto B729fad;
case 0x729fae:c.instructions+=2;goto B729fae;
case 0x729faf:c.instructions+=1;goto B729faf;
case 0x729fb4:goto L729fb4;
case 0x729fb7:c.instructions+=9;goto B729fb7;
case 0x729fbb:c.instructions+=8;goto B729fbb;
case 0x729fbe:c.instructions+=7;goto B729fbe;
case 0x729fc1:c.instructions+=6;goto B729fc1;
case 0x729fc4:c.instructions+=5;goto B729fc4;
case 0x729fc5:c.instructions+=4;goto B729fc5;
case 0x729fc6:c.instructions+=3;goto B729fc6;
case 0x729fc9:c.instructions+=2;goto B729fc9;
case 0x729fcc:c.instructions+=1;goto B729fcc;
case 0x729fce:goto L729fce;
case 0x729fcf:goto L729fcf;
case 0x729fd1:c.instructions+=5;goto B729fd1;
case 0x729fd2:c.instructions+=4;goto B729fd2;
case 0x729fd3:c.instructions+=3;goto B729fd3;
case 0x729fd4:c.instructions+=2;goto B729fd4;
case 0x729fd5:c.instructions+=1;goto B729fd5;
case 0x729fd6:goto L729fd6;
case 0x729fd7:c.instructions+=5;goto B729fd7;
case 0x729fd8:c.instructions+=4;goto B729fd8;
case 0x729fdc:c.instructions+=3;goto B729fdc;
case 0x729fde:c.instructions+=2;goto B729fde;
case 0x729fe0:c.instructions+=1;goto B729fe0;
case 0x729fe2:goto L729fe2;
case 0x729fe3:c.instructions+=1;goto B729fe3;
case 0x729fe6:goto L729fe6;
case 0x729fe9:c.instructions+=2;goto B729fe9;
case 0x729fea:c.instructions+=1;goto B729fea;
case 0x729fef:goto L729fef;
case 0x729ff2:c.instructions+=6;goto B729ff2;
case 0x729ff3:c.instructions+=5;goto B729ff3;
case 0x729ff4:c.instructions+=4;goto B729ff4;
case 0x729ff5:c.instructions+=3;goto B729ff5;
case 0x729ff7:c.instructions+=2;goto B729ff7;
case 0x729ff8:c.instructions+=1;goto B729ff8;
case 0x729ffa:goto L729ffa;
case 0x729ffb:goto L729ffb;
case 0x729ffc:c.instructions+=3;goto B729ffc;
case 0x729ffe:c.instructions+=2;goto B729ffe;
case 0x729fff:c.instructions+=1;goto B729fff;
default:missing_instruction(c.pc);}
B729001:L729001:{c.instructions+=2;NFSU2_TR(0x729001);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B729007:{NFSU2_TR(0x729007);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x728febu,728);}
}
B729009:L729009:{c.instructions+=3;NFSU2_TR(0x729009);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72900b:{NFSU2_TR(0x72900b);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b47f9),1);
w1(R+512,u8((r1(U+0))<(r1(R+4))));
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+4))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B729011:{NFSU2_TR(0x729011);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L729035;}}
}
B729013:L729013:{c.instructions+=1;NFSU2_TR(0x729013);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B729016:L729016:{c.instructions+=10;NFSU2_TR(0x729016);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B729018:{NFSU2_TR(0x729018);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b490cull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72901f:{NFSU2_TR(0x72901f);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B729022:{NFSU2_TR(0x729022);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B729023:{NFSU2_TR(0x729023);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B729026:{NFSU2_TR(0x729026);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B729028:{NFSU2_TR(0x729028);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72902a:{NFSU2_TR(0x72902a);
w4(R+0,u32(m1(0x8b47f9)));
}
B729031:{NFSU2_TR(0x729031);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B729033:{NFSU2_TR(0x729033);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729016u);}goto L729016;}}
}
B729035:L729035:{c.instructions+=4;NFSU2_TR(0x729035);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B729038:{NFSU2_TR(0x729038);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72903b:{NFSU2_TR(0x72903b);
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
B72903d:{NFSU2_TR(0x72903d);
if(r1(R+518)){{goto L729043;}}
}
B72903f:L72903f:{c.instructions+=2;NFSU2_TR(0x72903f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729040:{NFSU2_TR(0x729040);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729042ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B729042:L729042:{c.instructions+=1;NFSU2_TR(0x729042);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729043:L729043:{c.instructions+=4;NFSU2_TR(0x729043);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B729046:{NFSU2_TR(0x729046);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B729049:{NFSU2_TR(0x729049);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72904a:{NFSU2_TR(0x72904a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72904full));
TAIL_STATIC(0x724894u,724);
}
B72904f:L72904f:{c.instructions+=4;NFSU2_TR(0x72904f);
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
B729051:{NFSU2_TR(0x729051);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729052:{NFSU2_TR(0x729052);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729055:{NFSU2_TR(0x729055);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729035u);}goto L729035;}}
}
B729057:L729057:{c.instructions+=4;NFSU2_TR(0x729057);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B729058:{NFSU2_TR(0x729058);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B72905b:{NFSU2_TR(0x72905b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72905c:{NFSU2_TR(0x72905c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72905d:L72905d:{c.instructions+=11;NFSU2_TR(0x72905d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B729061:{NFSU2_TR(0x729061);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B729065:{NFSU2_TR(0x729065);
__builtin_memmove((R+8),gp(0x8b4a00),4);
}
B72906b:{NFSU2_TR(0x72906b);
__builtin_memmove((R+4),(R+0),4);
}
B72906d:{NFSU2_TR(0x72906d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x5cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B729070:{NFSU2_TR(0x729070);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x17ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B729073:{NFSU2_TR(0x729073);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B729077:{NFSU2_TR(0x729077);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72907b:{NFSU2_TR(0x72907b);
__builtin_memmove((R+4),gp(0x8b4a00),4);
}
B729081:{NFSU2_TR(0x729081);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B729086:{NFSU2_TR(0x729086);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B729087:L729087:{c.instructions+=10;NFSU2_TR(0x729087);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72908b:{NFSU2_TR(0x72908b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72908f:{NFSU2_TR(0x72908f);
__builtin_memmove((R+4),gp(0x8b4a00),4);
}
B729095:{NFSU2_TR(0x729095);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x5cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B729098:{NFSU2_TR(0x729098);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B72909c:{NFSU2_TR(0x72909c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7290a0:{NFSU2_TR(0x7290a0);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7290a3:{NFSU2_TR(0x7290a3);
__builtin_memmove((R+4),gp(0x8b4a00),4);
}
B7290a9:{NFSU2_TR(0x7290a9);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B7290ae:{NFSU2_TR(0x7290ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7290af:L7290af:{c.instructions+=2;NFSU2_TR(0x7290af);
u8 U[4];
w4(U+0,u32(0x728ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7290b4:{NFSU2_TR(0x7290b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7290b9ull));
TAIL_STATIC(0x72cc78u,72c);
}
B7290b9:L7290b9:{c.instructions+=2;NFSU2_TR(0x7290b9);
u8 U[4];
w4(U+0,u32(0x728cf3ull));
s4(u32(r4(R+16)),r4(U+0));
}
B7290c0:{NFSU2_TR(0x7290c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7290c5ull));
TAIL_STATIC(0x72cc82u,72c);
}
B7290c5:L7290c5:{c.instructions+=2;NFSU2_TR(0x7290c5);
u8 U[4];
w4(U+0,u32(0x71feccull));
s4(u32(r4(R+16)),r4(U+0));
}
B7290cc:{NFSU2_TR(0x7290cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7290d1ull));
TAIL_STATIC(0x72cc6cu,72c);
}
B7290d1:L7290d1:{c.instructions+=3;NFSU2_TR(0x7290d1);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b46c9),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7290d8:{NFSU2_TR(0x7290d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7290d9:{NFSU2_TR(0x7290d9);
if(r1(R+518)){{goto L7290e1;}}
}
B7290db:L7290db:{c.instructions+=1;NFSU2_TR(0x7290db);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7290e1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7290e1:L7290e1:{c.instructions+=9;NFSU2_TR(0x7290e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7290e2:{NFSU2_TR(0x7290e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7290e3:{NFSU2_TR(0x7290e3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7290e7:{NFSU2_TR(0x7290e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7290e8:{NFSU2_TR(0x7290e8);
w4(R+28,u32(0x8b47f0ull));
}
B7290ed:{NFSU2_TR(0x7290ed);
u8 U[40];
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
}
B7290ee:{NFSU2_TR(0x7290ee);
u8 U[40];
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
}
B7290ef:{NFSU2_TR(0x7290ef);
u8 U[40];
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
}
B7290f0:{NFSU2_TR(0x7290f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7290f5ull));
TAIL_STATIC(0x721f99u,721);
}
B7290f5:L7290f5:{c.instructions+=1;NFSU2_TR(0x7290f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7290faull));
TAIL_STATIC(0x726ceeu,726);
}
B7290fa:L7290fa:{c.instructions+=4;NFSU2_TR(0x7290fa);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7290fc:{NFSU2_TR(0x7290fc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7290fe:{NFSU2_TR(0x7290fe);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B729104:{NFSU2_TR(0x729104);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L729118;}}
}
B729106:L729106:{c.instructions+=5;NFSU2_TR(0x729106);
__builtin_memmove((R+4),gp(0x8b4804),4);
}
B72910c:{NFSU2_TR(0x72910c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B72910f:{NFSU2_TR(0x72910f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B729110:{NFSU2_TR(0x729110);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B729116:{NFSU2_TR(0x729116);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729106u);}goto L729106;}}
}
B729118:L729118:{c.instructions+=1;NFSU2_TR(0x729118);
w4(R+24,u32(0x8b48d0ull));
}
B72911d:L72911d:{c.instructions+=2;NFSU2_TR(0x72911d);
u8 U[4];
w4(U+0,u32(0x10bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729122:{NFSU2_TR(0x729122);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729127ull));
TAIL_STATIC(0x724792u,724);
}
B729127:L729127:{c.instructions+=6;NFSU2_TR(0x729127);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72912a:{NFSU2_TR(0x72912a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B72912d:{NFSU2_TR(0x72912d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x3full))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72912f:{NFSU2_TR(0x72912f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729130:{NFSU2_TR(0x729130);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B729132:{NFSU2_TR(0x729132);
if(r1(R+518)){{goto L72913c;}}
}
B729134:L729134:{c.instructions+=3;NFSU2_TR(0x729134);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B729137:{NFSU2_TR(0x729137);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x3full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B72913a:{NFSU2_TR(0x72913a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729134u);}goto L729134;}}
}
B72913c:L72913c:{c.instructions+=3;NFSU2_TR(0x72913c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B72913f:{NFSU2_TR(0x72913f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8b48d8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8b48d8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B729145:{NFSU2_TR(0x729145);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72911du);}goto L72911d;}}
}
B729147:L729147:{c.instructions+=2;NFSU2_TR(0x729147);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b47fa),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B72914e:{NFSU2_TR(0x72914e);
if(r1(R+518)){{goto L729166;}}
}
B729150:L729150:{c.instructions+=4;NFSU2_TR(0x729150);
w4(R+0,u32(m1(0x8b47f9)));
}
B729157:{NFSU2_TR(0x729157);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72915a:{NFSU2_TR(0x72915a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72915b:{NFSU2_TR(0x72915b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729160ull));
TAIL_STATIC(0x724792u,724);
}
B729160:L729160:{c.instructions+=2;NFSU2_TR(0x729160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729161:{NFSU2_TR(0x729161);
__builtin_memmove(gp(0x8b4908),(R+0),4);
}
B729166:L729166:{c.instructions+=3;NFSU2_TR(0x729166);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B729168:{NFSU2_TR(0x729168);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b47f9),1);
w1(R+512,u8((r1(U+0))<(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B72916f:{NFSU2_TR(0x72916f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7291a1;}}
}
B729171:L729171:{c.instructions+=1;NFSU2_TR(0x729171);
w4(R+24,u32(0x8b48f0ull));
}
B729176:L729176:{c.instructions+=2;NFSU2_TR(0x729176);
u8 U[4];
w4(U+0,u32(0x440ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72917b:{NFSU2_TR(0x72917b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729180ull));
TAIL_STATIC(0x724792u,724);
}
B729180:L729180:{c.instructions+=5;NFSU2_TR(0x729180);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x3full))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B729182:{NFSU2_TR(0x729182);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729185:{NFSU2_TR(0x729185);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729186:{NFSU2_TR(0x729186);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B729188:{NFSU2_TR(0x729188);
if(r1(R+518)){{goto L729192;}}
}
B72918a:L72918a:{c.instructions+=3;NFSU2_TR(0x72918a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B72918d:{NFSU2_TR(0x72918d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x3full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B729190:{NFSU2_TR(0x729190);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72918au);}goto L72918a;}}
}
B729192:L729192:{c.instructions+=5;NFSU2_TR(0x729192);
w4(R+0,u32(m1(0x8b47f9)));
}
B729199:{NFSU2_TR(0x729199);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B72919a:{NFSU2_TR(0x72919a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B72919d:{NFSU2_TR(0x72919d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72919f:{NFSU2_TR(0x72919f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729176u);}goto L729176;}}
}
B7291a1:L7291a1:{c.instructions+=3;NFSU2_TR(0x7291a1);
__builtin_memmove((R+0),gp(0x8b47f8),1);
}
B7291a6:{NFSU2_TR(0x7291a6);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7291a8:{NFSU2_TR(0x7291a8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72923c;}}
}
B7291ae:L7291ae:{c.instructions+=6;NFSU2_TR(0x7291ae);
__builtin_memmove((R+4),gp(0x8180b8),4);
}
B7291b4:{NFSU2_TR(0x7291b4);
w4(R+0,u32(r1(R+0)));
}
B7291b7:{NFSU2_TR(0x7291b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x5cull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7291be:{NFSU2_TR(0x7291be);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B7291c1:{NFSU2_TR(0x7291c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7291c2:{NFSU2_TR(0x7291c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7291c7ull));
TAIL_STATIC(0x724792u,724);
}
B7291c7:L7291c7:{c.instructions+=8;NFSU2_TR(0x7291c7);
__builtin_memmove((R+4),gp(0x8180b8),4);
}
B7291cd:{NFSU2_TR(0x7291cd);
w4(R+8,u32(m1(0x8b47f8)));
}
B7291d4:{NFSU2_TR(0x7291d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x5cull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7291db:{NFSU2_TR(0x7291db);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B7291de:{NFSU2_TR(0x7291de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7291df:{NFSU2_TR(0x7291df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7291e0:{NFSU2_TR(0x7291e0);
__builtin_memmove(gp(0x8b4a00),(R+0),4);
}
B7291e5:{NFSU2_TR(0x7291e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7291eaull));
TAIL_STATIC(0x727030u,727);
}
B7291ea:L7291ea:{c.instructions+=8;NFSU2_TR(0x7291ea);
w4(R+4,u32(m1(0x8b47f8)));
}
B7291f1:{NFSU2_TR(0x7291f1);
__builtin_memmove((R+0),(R+4),4);
}
B7291f3:{NFSU2_TR(0x7291f3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x5cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7291f6:{NFSU2_TR(0x7291f6);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b4a00))));
}
B7291fc:{NFSU2_TR(0x7291fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7291ff:{NFSU2_TR(0x7291ff);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B729201:{NFSU2_TR(0x729201);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B729203:{NFSU2_TR(0x729203);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72923c;}}
}
B729205:L729205:{c.instructions+=1;NFSU2_TR(0x729205);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B729207:L729207:{c.instructions+=13;NFSU2_TR(0x729207);
__builtin_memmove((R+24),gp(0x8b4a00),4);
}
B72920d:{NFSU2_TR(0x72920d);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B729211:{NFSU2_TR(0x729211);
__builtin_memmove((R+24),gp(0x8180b8),4);
}
B729217:{NFSU2_TR(0x729217);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72921a:{NFSU2_TR(0x72921a);
__builtin_memmove((R+24),gp(0x8b4a00),4);
}
B729220:{NFSU2_TR(0x729220);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B729224:{NFSU2_TR(0x729224);
__builtin_memmove((R+24),gp(0x8180b8),4);
}
B72922a:{NFSU2_TR(0x72922a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72922d:{NFSU2_TR(0x72922d);
w4(R+24,u32(m1(0x8b47f8)));
}
B729234:{NFSU2_TR(0x729234);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B729235:{NFSU2_TR(0x729235);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5cull))));
}
B729238:{NFSU2_TR(0x729238);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72923a:{NFSU2_TR(0x72923a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729207u);}goto L729207;}}
}
B72923c:L72923c:{c.instructions+=1;NFSU2_TR(0x72923c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729241ull));
TAIL_STATIC(0x721fa7u,721);
}
B729241:L729241:{c.instructions+=1;NFSU2_TR(0x729241);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729246ull));
TAIL_STATIC(0x72cc2au,72c);
}
B729246:L729246:{c.instructions+=1;NFSU2_TR(0x729246);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72924bull));
TAIL_STATIC(0x72cbedu,72c);
}
B72924b:L72924b:{c.instructions+=1;NFSU2_TR(0x72924b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729250ull));
TAIL_STATIC(0x72cbb0u,72c);
}
B729250:L729250:{c.instructions+=1;NFSU2_TR(0x729250);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729255ull));
TAIL_STATIC(0x72cb4bu,72c);
}
B729255:L729255:{c.instructions+=1;NFSU2_TR(0x729255);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72925aull));
TAIL_STATIC(0x728da4u,728);
}
B72925a:L72925a:{c.instructions+=2;NFSU2_TR(0x72925a);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b47f9),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B729261:{NFSU2_TR(0x729261);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7292a8;}}
}
B729263:L729263:{c.instructions+=2;NFSU2_TR(0x729263);
w4(R+28,u32(0x8b4928ull));
}
B729268:{NFSU2_TR(0x729268);
w4(R+24,u32(0x8b4958ull));
}
B72926d:L72926d:{c.instructions+=3;NFSU2_TR(0x72926d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B729270:{NFSU2_TR(0x729270);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729271:{NFSU2_TR(0x729271);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729276ull));
TAIL_STATIC(0x72cb3cu,72c);
}
B729276:L729276:{c.instructions+=5;NFSU2_TR(0x729276);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B72927b:{NFSU2_TR(0x72927b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72927c:{NFSU2_TR(0x72927c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72927d:{NFSU2_TR(0x72927d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B729281:{NFSU2_TR(0x729281);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729286ull));
TAIL_STATIC(0x72a1e9u,72a);
}
B729286:L729286:{c.instructions+=3;NFSU2_TR(0x729286);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72928b:{NFSU2_TR(0x72928b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72928e:{NFSU2_TR(0x72928e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729293ull));
TAIL_STATIC(0x727030u,727);
}
B729293:L729293:{c.instructions+=7;NFSU2_TR(0x729293);
w4(R+0,u32(m1(0x8b47f9)));
}
B72929a:{NFSU2_TR(0x72929a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B72929d:{NFSU2_TR(0x72929d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B72929e:{NFSU2_TR(0x72929e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
}
B7292a1:{NFSU2_TR(0x7292a1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B7292a4:{NFSU2_TR(0x7292a4);
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
B7292a6:{NFSU2_TR(0x7292a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72926du);}goto L72926d;}}
}
B7292a8:L7292a8:{c.instructions+=4;NFSU2_TR(0x7292a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7292a9:{NFSU2_TR(0x7292a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7292aa:{NFSU2_TR(0x7292aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7292ab:{NFSU2_TR(0x7292ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7292ac:L7292ac:{c.instructions+=2;NFSU2_TR(0x7292ac);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7292b0:{NFSU2_TR(0x7292b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7292b5ull));
TAIL_STATIC(0x728fd2u,728);
}
B7292b5:L7292b5:{c.instructions+=2;NFSU2_TR(0x7292b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7292b6:{NFSU2_TR(0x7292b6);
{u32 t_=u32(m4(0x8b47f4));TAIL_DYNAMIC(t_);}
}
B7292bc:L7292bc:{c.instructions+=6;NFSU2_TR(0x7292bc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7292bd:{NFSU2_TR(0x7292bd);
__builtin_memmove((R+20),(R+16),4);
}
B7292bf:{NFSU2_TR(0x7292bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B7292c2:{NFSU2_TR(0x7292c2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7292c4:{NFSU2_TR(0x7292c4);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+8)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7292ca:{NFSU2_TR(0x7292ca);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L729309;}}
}
B7292cc:L7292cc:{c.instructions+=3;NFSU2_TR(0x7292cc);
__builtin_memmove((R+0),gp(0x8b4804),4);
}
B7292d1:{NFSU2_TR(0x7292d1);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B7292d5:{NFSU2_TR(0x7292d5);
if(r1(R+518)){{goto L729300;}}
}
B7292d7:L7292d7:{c.instructions+=8;NFSU2_TR(0x7292d7);
__builtin_memmove((R+0),gp(0x8b4924),4);
}
B7292dc:{NFSU2_TR(0x7292dc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7292e2:{NFSU2_TR(0x7292e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7292e5:{NFSU2_TR(0x7292e5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7292e7:{NFSU2_TR(0x7292e7);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B7292e9:{NFSU2_TR(0x7292e9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7292eb:{NFSU2_TR(0x7292eb);
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
B7292ee:{NFSU2_TR(0x7292ee);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L729300;}}
}
B7292f0:L7292f0:{c.instructions+=4;NFSU2_TR(0x7292f0);
__builtin_memmove((R+0),gp(0x8b47c4),4);
}
B7292f5:{NFSU2_TR(0x7292f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B7292f8:{NFSU2_TR(0x7292f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7292f9:{NFSU2_TR(0x7292f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7292feull));
TAIL_STATIC(0x72886cu,728);
}
B7292fe:L7292fe:{c.instructions+=2;NFSU2_TR(0x7292fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7292ff:{NFSU2_TR(0x7292ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729300:L729300:{c.instructions+=3;NFSU2_TR(0x729300);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B729301:{NFSU2_TR(0x729301);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B729307:{NFSU2_TR(0x729307);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7292ccu);}goto L7292cc;}}
}
B729309:L729309:{c.instructions+=6;NFSU2_TR(0x729309);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72930a:{NFSU2_TR(0x72930a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72930b:{NFSU2_TR(0x72930b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72930c:{NFSU2_TR(0x72930c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B72930e:{NFSU2_TR(0x72930e);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b47f9),1);
w1(R+512,u8((r1(U+0))<(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B729315:{NFSU2_TR(0x729315);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L729358;}}
}
B729317:L729317:{c.instructions+=3;NFSU2_TR(0x729317);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72931a:{NFSU2_TR(0x72931a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B72931d:{NFSU2_TR(0x72931d);
w4(R+24,u32(0x8b490cull));
}
B729322:L729322:{c.instructions+=3;NFSU2_TR(0x729322);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729323:{NFSU2_TR(0x729323);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729326:{NFSU2_TR(0x729326);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72932bull));
TAIL_STATIC(0x727030u,727);
}
B72932b:L72932b:{c.instructions+=8;NFSU2_TR(0x72932b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B729331:{NFSU2_TR(0x729331);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B729333:{NFSU2_TR(0x729333);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729334:{NFSU2_TR(0x729334);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B729336:{NFSU2_TR(0x729336);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729337:{NFSU2_TR(0x729337);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B729339:{NFSU2_TR(0x729339);
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
B72933c:{NFSU2_TR(0x72933c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L729349;}}
}
B72933e:L72933e:{c.instructions+=3;NFSU2_TR(0x72933e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729341:{NFSU2_TR(0x729341);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729342:{NFSU2_TR(0x729342);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729347ull));
TAIL_STATIC(0x72886cu,728);
}
B729347:L729347:{c.instructions+=2;NFSU2_TR(0x729347);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729348:{NFSU2_TR(0x729348);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729349:L729349:{c.instructions+=5;NFSU2_TR(0x729349);
w4(R+0,u32(m1(0x8b47f9)));
}
B729350:{NFSU2_TR(0x729350);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B729351:{NFSU2_TR(0x729351);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B729354:{NFSU2_TR(0x729354);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B729356:{NFSU2_TR(0x729356);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729322u);}goto L729322;}}
}
B729358:L729358:{c.instructions+=3;NFSU2_TR(0x729358);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72935c:{NFSU2_TR(0x72935c);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b47f8),1);
w1(R+512,u8((r1(U+0))<(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B729363:{NFSU2_TR(0x729363);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7294c0;}}
}
B729369:L729369:{c.instructions+=1;NFSU2_TR(0x729369);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72936d:L72936d:{c.instructions+=5;NFSU2_TR(0x72936d);
__builtin_memmove((R+0),gp(0x8b4a00),4);
}
B729372:{NFSU2_TR(0x729372);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B729375:{NFSU2_TR(0x729375);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B729378:{NFSU2_TR(0x729378);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B72937b:{NFSU2_TR(0x72937b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7294a9;}}
}
B729381:L729381:{c.instructions+=2;NFSU2_TR(0x729381);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B729385:{NFSU2_TR(0x729385);
if(r1(R+518)){{goto L72939b;}}
}
B729387:L729387:{c.instructions+=2;NFSU2_TR(0x729387);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729388:{NFSU2_TR(0x729388);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72938dull));
TAIL_STATIC(0x728b48u,728);
}
B72938d:L72938d:{c.instructions+=6;NFSU2_TR(0x72938d);
__builtin_memmove((R+12),(R+0),4);
}
B72938f:{NFSU2_TR(0x72938f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B729392:{NFSU2_TR(0x729392);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729393:{NFSU2_TR(0x729393);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B729395:{NFSU2_TR(0x729395);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B729399:{NFSU2_TR(0x729399);
{goto L7293a0;}
}
B72939b:L72939b:{c.instructions+=2;NFSU2_TR(0x72939b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72939e:{NFSU2_TR(0x72939e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7293a0:L7293a0:{c.instructions+=2;NFSU2_TR(0x7293a0);
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
B7293a2:{NFSU2_TR(0x7293a2);
if(r1(R+518)){{goto L7294a9;}}
}
B7293a8:L7293a8:{c.instructions+=7;NFSU2_TR(0x7293a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7293ab:{NFSU2_TR(0x7293ab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7293ad:{NFSU2_TR(0x7293ad);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b48d4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7293b3:{NFSU2_TR(0x7293b3);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b48d0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7293b9:{NFSU2_TR(0x7293b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7293ba:{NFSU2_TR(0x7293ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7293bb:{NFSU2_TR(0x7293bb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7293bdull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B7293bd:L7293bd:{c.instructions+=5;NFSU2_TR(0x7293bd);
__builtin_memmove((R+4),(R+0),4);
}
B7293bf:{NFSU2_TR(0x7293bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B7293c2:{NFSU2_TR(0x7293c2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7293c4:{NFSU2_TR(0x7293c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7293c7:{NFSU2_TR(0x7293c7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7293d7;}}
}
B7293c9:L7293c9:{c.instructions+=2;NFSU2_TR(0x7293c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7293cc:{NFSU2_TR(0x7293cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7293d1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7292acu);}goto L7292ac;}
}
B7293d1:L7293d1:{c.instructions+=2;NFSU2_TR(0x7293d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7293d2:{NFSU2_TR(0x7293d2);
{goto L7294a9;}
}
B7293d7:L7293d7:{c.instructions+=1;NFSU2_TR(0x7293d7);
if(r1(R+518)){{goto L7294a9;}}
}
B7293dd:L7293dd:{c.instructions+=6;NFSU2_TR(0x7293dd);
__builtin_memmove((R+0),gp(0x8b48d4),4);
}
B7293e2:{NFSU2_TR(0x7293e2);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7293e6:{NFSU2_TR(0x7293e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7293ea:{NFSU2_TR(0x7293ea);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7293ed:{NFSU2_TR(0x7293ed);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b47f9),1);
w1(R+512,u8((r1(U+0))<(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7293f4:{NFSU2_TR(0x7293f4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L729449;}}
}
B7293f6:L7293f6:{c.instructions+=3;NFSU2_TR(0x7293f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x8b48d4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7293fd:{NFSU2_TR(0x7293fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B729400:{NFSU2_TR(0x729400);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B729403:L729403:{c.instructions+=6;NFSU2_TR(0x729403);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B729409:{NFSU2_TR(0x729409);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72940b:{NFSU2_TR(0x72940b);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B72940d:{NFSU2_TR(0x72940d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72940f:{NFSU2_TR(0x72940f);
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
B729412:{NFSU2_TR(0x729412);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L729437;}}
}
B729414:L729414:{c.instructions+=10;NFSU2_TR(0x729414);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B729417:{NFSU2_TR(0x729417);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B729419:{NFSU2_TR(0x729419);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B72941c:{NFSU2_TR(0x72941c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72941f:{NFSU2_TR(0x72941f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729420:{NFSU2_TR(0x729420);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b48d4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729426:{NFSU2_TR(0x729426);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729427:{NFSU2_TR(0x729427);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72942a:{NFSU2_TR(0x72942a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72942b:{NFSU2_TR(0x72942b);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a04),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729431ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B729431:L729431:{c.instructions+=2;NFSU2_TR(0x729431);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B729434:{NFSU2_TR(0x729434);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B729437:L729437:{c.instructions+=5;NFSU2_TR(0x729437);
w4(R+0,u32(m1(0x8b47f9)));
}
B72943e:{NFSU2_TR(0x72943e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B729441:{NFSU2_TR(0x729441);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B729444:{NFSU2_TR(0x729444);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B729447:{NFSU2_TR(0x729447);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729403u);}goto L729403;}}
}
B729449:L729449:{c.instructions+=3;NFSU2_TR(0x729449);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B72944b:{NFSU2_TR(0x72944b);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+28)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B729451:{NFSU2_TR(0x729451);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7294a9;}}
}
B729453:L729453:{c.instructions+=3;NFSU2_TR(0x729453);
__builtin_memmove((R+0),gp(0x8b4804),4);
}
B729458:{NFSU2_TR(0x729458);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B72945c:{NFSU2_TR(0x72945c);
if(r1(R+518)){{goto L7294a0;}}
}
B72945e:L72945e:{c.instructions+=8;NFSU2_TR(0x72945e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B729461:{NFSU2_TR(0x729461);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B729467:{NFSU2_TR(0x729467);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B72946a:{NFSU2_TR(0x72946a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72946c:{NFSU2_TR(0x72946c);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B72946e:{NFSU2_TR(0x72946e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B729470:{NFSU2_TR(0x729470);
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
B729473:{NFSU2_TR(0x729473);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L7294a0;}}
}
B729475:L729475:{c.instructions+=10;NFSU2_TR(0x729475);
__builtin_memmove((R+0),gp(0x8b47c4),4);
}
B72947a:{NFSU2_TR(0x72947a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72947c:{NFSU2_TR(0x72947c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B72947f:{NFSU2_TR(0x72947f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B729482:{NFSU2_TR(0x729482);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729483:{NFSU2_TR(0x729483);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b48d4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729489:{NFSU2_TR(0x729489);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72948a:{NFSU2_TR(0x72948a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72948d:{NFSU2_TR(0x72948d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729490:{NFSU2_TR(0x729490);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a04),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729496ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B729496:L729496:{c.instructions+=2;NFSU2_TR(0x729496);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B729499:{NFSU2_TR(0x729499);
s4(0x8b47c8,u32(u32(m4(0x8b47c8))&u32(u32(0x0ull))));
}
B7294a0:L7294a0:{c.instructions+=3;NFSU2_TR(0x7294a0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7294a1:{NFSU2_TR(0x7294a1);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7294a7:{NFSU2_TR(0x7294a7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729453u);}goto L729453;}}
}
B7294a9:L7294a9:{c.instructions+=5;NFSU2_TR(0x7294a9);
w4(R+0,u32(m1(0x8b47f8)));
}
B7294b0:{NFSU2_TR(0x7294b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7294b3:{NFSU2_TR(0x7294b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x5cull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7294b7:{NFSU2_TR(0x7294b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7294ba:{NFSU2_TR(0x7294ba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72936du);}goto L72936d;}}
}
B7294c0:L7294c0:{c.instructions+=3;NFSU2_TR(0x7294c0);
__builtin_memmove((R+0),gp(0x8b4800),4);
}
B7294c5:{NFSU2_TR(0x7294c5);
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
B7294c7:{NFSU2_TR(0x7294c7);
if(r1(R+518)){{goto L7294cf;}}
}
B7294c9:L7294c9:{c.instructions+=2;NFSU2_TR(0x7294c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7294cc:{NFSU2_TR(0x7294cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7294ceull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7294ce:L7294ce:{c.instructions+=1;NFSU2_TR(0x7294ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7294cf:L7294cf:{c.instructions+=3;NFSU2_TR(0x7294cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7294d3:{NFSU2_TR(0x7294d3);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b47f9),1);
w1(R+512,u8((r1(U+0))<(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7294da:{NFSU2_TR(0x7294da);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72954f;}}
}
B7294dc:L7294dc:{c.instructions+=7;NFSU2_TR(0x7294dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7294df:{NFSU2_TR(0x7294df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x8b4940ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7294e6:{NFSU2_TR(0x7294e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B7294e9:{NFSU2_TR(0x7294e9);
w4(R+28,u32(0x8b48f0ull));
}
B7294ee:{NFSU2_TR(0x7294ee);
w4(R+12,u32(0x8b4928ull));
}
B7294f3:{NFSU2_TR(0x7294f3);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B7294f5:{NFSU2_TR(0x7294f5);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B7294f7:L7294f7:{c.instructions+=6;NFSU2_TR(0x7294f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7294fa:{NFSU2_TR(0x7294fa);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7294fc:{NFSU2_TR(0x7294fc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B7294fe:{NFSU2_TR(0x7294fe);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+4)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B729500:{NFSU2_TR(0x729500);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729501:{NFSU2_TR(0x729501);
if(r1(R+518)){{goto L72952c;}}
}
B729503:L729503:{c.instructions+=6;NFSU2_TR(0x729503);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b48d0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729509:{NFSU2_TR(0x729509);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72950b:{NFSU2_TR(0x72950b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B72950e:{NFSU2_TR(0x72950e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729511:{NFSU2_TR(0x729511);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729512:{NFSU2_TR(0x729512);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729514ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B729514:L729514:{c.instructions+=7;NFSU2_TR(0x729514);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B729517:{NFSU2_TR(0x729517);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729519:{NFSU2_TR(0x729519);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B72951b:{NFSU2_TR(0x72951b);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b48d0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729521:{NFSU2_TR(0x729521);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729524:{NFSU2_TR(0x729524);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729525:{NFSU2_TR(0x729525);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729527ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B729527:L729527:{c.instructions+=2;NFSU2_TR(0x729527);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B72952a:{NFSU2_TR(0x72952a);
{goto L72953d;}
}
B72952c:L72952c:{c.instructions+=6;NFSU2_TR(0x72952c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B72952e:{NFSU2_TR(0x72952e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B729531:{NFSU2_TR(0x729531);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B729534:{NFSU2_TR(0x729534);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729537:{NFSU2_TR(0x729537);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729538:{NFSU2_TR(0x729538);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72953aull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B72953a:L72953a:{c.instructions+=1;NFSU2_TR(0x72953a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B72953d:L72953d:{c.instructions+=5;NFSU2_TR(0x72953d);
w4(R+0,u32(m1(0x8b47f9)));
}
B729544:{NFSU2_TR(0x729544);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B729547:{NFSU2_TR(0x729547);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B72954a:{NFSU2_TR(0x72954a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72954d:{NFSU2_TR(0x72954d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7294f7u);}goto L7294f7;}}
}
B72954f:L72954f:{c.instructions+=5;NFSU2_TR(0x72954f);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b46c9),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B729556:{NFSU2_TR(0x729556);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B729557:{NFSU2_TR(0x729557);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B729558:{NFSU2_TR(0x729558);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B729559:{NFSU2_TR(0x729559);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L729564;}}
}
B72955b:L72955b:{c.instructions+=2;NFSU2_TR(0x72955b);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b46cc),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B729562:{NFSU2_TR(0x729562);
if(r1(R+518)){{goto L729572;}}
}
B729564:L729564:{c.instructions+=3;NFSU2_TR(0x729564);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729567:{NFSU2_TR(0x729567);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72956a:{NFSU2_TR(0x72956a);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a10),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729570ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B729570:L729570:{c.instructions+=2;NFSU2_TR(0x729570);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729571:{NFSU2_TR(0x729571);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729572:L729572:{c.instructions+=2;NFSU2_TR(0x729572);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B729573:{NFSU2_TR(0x729573);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B729574:L729574:{c.instructions+=13;NFSU2_TR(0x729574);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729575:{NFSU2_TR(0x729575);
__builtin_memmove((R+20),(R+16),4);
}
B729577:{NFSU2_TR(0x729577);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B72957a:{NFSU2_TR(0x72957a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72957b:{NFSU2_TR(0x72957b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72957c:{NFSU2_TR(0x72957c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72957e:{NFSU2_TR(0x72957e);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b47fa),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B729585:{NFSU2_TR(0x729585);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B729589:{NFSU2_TR(0x729589);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72958c:{NFSU2_TR(0x72958c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72958d:{NFSU2_TR(0x72958d);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B72958f:{NFSU2_TR(0x72958f);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B729590:{NFSU2_TR(0x729590);
if(r1(R+518)){{goto L729663;}}
}
B729596:L729596:{c.instructions+=5;NFSU2_TR(0x729596);
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
B72959a:{NFSU2_TR(0x72959a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72959d:{NFSU2_TR(0x72959d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72959f:{NFSU2_TR(0x72959f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7295a2:{NFSU2_TR(0x7295a2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7296b9;}}
}
B7295a8:L7295a8:{c.instructions+=2;NFSU2_TR(0x7295a8);
w4(R+24,u32(0x100ull));
}
B7295ad:{NFSU2_TR(0x7295ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7295ae:L7295ae:{c.instructions+=3;NFSU2_TR(0x7295ae);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7295b1:{NFSU2_TR(0x7295b1);
__builtin_memmove((R+12),(R+24),4);
}
B7295b3:{NFSU2_TR(0x7295b3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7295b8;}}
}
B7295b5:L7295b5:{c.instructions+=1;NFSU2_TR(0x7295b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7295b8:L7295b8:{c.instructions+=4;NFSU2_TR(0x7295b8);
w4(R+8,u32(m1(0x8b47f9)));
}
B7295bf:{NFSU2_TR(0x7295bf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7295c1:{NFSU2_TR(0x7295c1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7295c3:{NFSU2_TR(0x7295c3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7295d8;}}
}
B7295c5:L7295c5:{c.instructions+=2;NFSU2_TR(0x7295c5);
__builtin_memmove((R+0),gp(0x8b4908),4);
}
B7295ca:{NFSU2_TR(0x7295ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B7295cd:L7295cd:{c.instructions+=5;NFSU2_TR(0x7295cd);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B7295d1:{NFSU2_TR(0x7295d1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7295d2:{NFSU2_TR(0x7295d2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B7295d4:{NFSU2_TR(0x7295d4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7295d6:{NFSU2_TR(0x7295d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7295cdu);}goto L7295cd;}}
}
B7295d8:L7295d8:{c.instructions+=4;NFSU2_TR(0x7295d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7295db:{NFSU2_TR(0x7295db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7295dc:{NFSU2_TR(0x7295dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7295dd:{NFSU2_TR(0x7295dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7295e2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7292bcu);}goto L7292bc;}
}
B7295e2:L7295e2:{c.instructions+=5;NFSU2_TR(0x7295e2);
__builtin_memmove((R+0),gp(0x8b47f9),1);
}
B7295e7:{NFSU2_TR(0x7295e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7295e9:{NFSU2_TR(0x7295e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7295ea:{NFSU2_TR(0x7295ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7295eb:{NFSU2_TR(0x7295eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7295f7;}}
}
B7295ed:L7295ed:{c.instructions+=3;NFSU2_TR(0x7295ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7295f1:{NFSU2_TR(0x7295f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7295f5:{NFSU2_TR(0x7295f5);
{goto L729629;}
}
B7295f7:L7295f7:{c.instructions+=2;NFSU2_TR(0x7295f7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7295f9:{NFSU2_TR(0x7295f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72960d;}}
}
B7295fb:L7295fb:{c.instructions+=5;NFSU2_TR(0x7295fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7295ff:{NFSU2_TR(0x7295ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B729603:{NFSU2_TR(0x729603);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffaull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B729607:{NFSU2_TR(0x729607);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffbull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72960b:{NFSU2_TR(0x72960b);
{goto L729629;}
}
B72960d:L72960d:{c.instructions+=2;NFSU2_TR(0x72960d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x6ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72960f:{NFSU2_TR(0x72960f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L729629;}}
}
B729611:L729611:{c.instructions+=6;NFSU2_TR(0x729611);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B729615:{NFSU2_TR(0x729615);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B729619:{NFSU2_TR(0x729619);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffaull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72961d:{NFSU2_TR(0x72961d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffbull))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B729621:{NFSU2_TR(0x729621);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B729625:{NFSU2_TR(0x729625);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffdull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B729629:L729629:{c.instructions+=8;NFSU2_TR(0x729629);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72962c:{NFSU2_TR(0x72962c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72962f:{NFSU2_TR(0x72962f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729632:{NFSU2_TR(0x729632);
w4(R+0,u32(r1(R+0)));
}
B729635:{NFSU2_TR(0x729635);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729636:{NFSU2_TR(0x729636);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729637:{NFSU2_TR(0x729637);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729638:{NFSU2_TR(0x729638);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72963dull));
TAIL_STATIC(0x72cd6au,72c);
}
B72963d:L72963d:{c.instructions+=9;NFSU2_TR(0x72963d);
w4(R+0,u32(m1(0x8b47f9)));
}
B729644:{NFSU2_TR(0x729644);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B729647:{NFSU2_TR(0x729647);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72964a:{NFSU2_TR(0x72964a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B72964d:{NFSU2_TR(0x72964d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B729650:{NFSU2_TR(0x729650);
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
B729654:{NFSU2_TR(0x729654);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B729657:{NFSU2_TR(0x729657);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72965a:{NFSU2_TR(0x72965a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7295aeu);}goto L7295ae;}}
}
B729660:L729660:{c.instructions+=2;NFSU2_TR(0x729660);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B729661:{NFSU2_TR(0x729661);
{goto L7296b9;}
}
B729663:L729663:{c.instructions+=3;NFSU2_TR(0x729663);
w4(R+4,u32(m1(0x8b47f9)));
}
B72966a:{NFSU2_TR(0x72966a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72966c:{NFSU2_TR(0x72966c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L729676;}}
}
B72966e:L72966e:{c.instructions+=2;NFSU2_TR(0x72966e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B729671:{NFSU2_TR(0x729671);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B729674:L729674:{c.instructions+=1;NFSU2_TR(0x729674);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L729676;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729674u);}goto L729674;}
}
B729676:L729676:{c.instructions+=3;NFSU2_TR(0x729676);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B729679:{NFSU2_TR(0x729679);
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
B72967b:{NFSU2_TR(0x72967b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7296b9;}}
}
B72967d:L72967d:{c.instructions+=1;NFSU2_TR(0x72967d);
w4(R+24,u32(0x100ull));
}
B729682:L729682:{c.instructions+=3;NFSU2_TR(0x729682);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B729684:{NFSU2_TR(0x729684);
__builtin_memmove((R+0),(R+24),4);
}
B729686:{NFSU2_TR(0x729686);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L72968a;}}
}
B729688:L729688:{c.instructions+=1;NFSU2_TR(0x729688);
__builtin_memmove((R+0),(R+28),4);
}
B72968a:L72968a:{c.instructions+=4;NFSU2_TR(0x72968a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72968b:{NFSU2_TR(0x72968b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72968e:{NFSU2_TR(0x72968e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72968f:{NFSU2_TR(0x72968f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729694ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7292bcu);}goto L7292bc;}
}
B729694:L729694:{c.instructions+=6;NFSU2_TR(0x729694);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729695:{NFSU2_TR(0x729695);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729696:{NFSU2_TR(0x729696);
w4(R+4,u32(m1(0x8b47f9)));
}
B72969d:{NFSU2_TR(0x72969d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72969f:{NFSU2_TR(0x72969f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7296a1:{NFSU2_TR(0x7296a1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7296b3;}}
}
B7296a3:L7296a3:{c.instructions+=1;NFSU2_TR(0x7296a3);
w4(R+8,u32(m2(0x8b47fc)));
}
B7296aa:L7296aa:{c.instructions+=4;NFSU2_TR(0x7296aa);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))+u32(r4(R+8))));
s4(u32(r4(U+8)),r4(U+12));
}
B7296ae:{NFSU2_TR(0x7296ae);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7296af:{NFSU2_TR(0x7296af);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7296b1:{NFSU2_TR(0x7296b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7296aau);}goto L7296aa;}}
}
B7296b3:L7296b3:{c.instructions+=3;NFSU2_TR(0x7296b3);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B7296b5:{NFSU2_TR(0x7296b5);
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
B7296b7:{NFSU2_TR(0x7296b7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729682u);}goto L729682;}}
}
B7296b9:L7296b9:{c.instructions+=4;NFSU2_TR(0x7296b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7296ba:{NFSU2_TR(0x7296ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7296bb:{NFSU2_TR(0x7296bb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7296bc:{NFSU2_TR(0x7296bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7296bd:L7296bd:{c.instructions+=1;NFSU2_TR(0x7296bd);
TAIL_STATIC(0x72191fu,721);
}
B7296c2:L7296c2:{c.instructions+=5;NFSU2_TR(0x7296c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7296c3:{NFSU2_TR(0x7296c3);
__builtin_memmove((R+24),gp(0x8b466c),4);
}
B7296c9:{NFSU2_TR(0x7296c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7296ca:{NFSU2_TR(0x7296ca);
w4(R+28,u32(s32(s16(m2(0x8b460c)))));
}
B7296d1:{NFSU2_TR(0x7296d1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x26ull))));
}
B7296d4:L7296d4:{c.instructions+=2;NFSU2_TR(0x7296d4);
s1(0x8b4a18,u8(u32(m1(0x8b4a18))+u32(u8(0x1ull))));
w1(R+518,u8((m1(0x8b4a18))==(u8(0x0ull))));
}
B7296da:{NFSU2_TR(0x7296da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7296e3;}}
}
B7296dc:L7296dc:{c.instructions+=1;NFSU2_TR(0x7296dc);
s1(0x8b4a18,u8(0x1ull));
}
B7296e3:L7296e3:{c.instructions+=2;NFSU2_TR(0x7296e3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7296e5:{NFSU2_TR(0x7296e5);
__builtin_memmove((R+0),(R+24),4);
}
B7296e7:L7296e7:{c.instructions+=2;NFSU2_TR(0x7296e7);
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
B7296e9:{NFSU2_TR(0x7296e9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L729703;}}
}
B7296eb:L7296eb:{c.instructions+=2;NFSU2_TR(0x7296eb);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x47ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7296ef:{NFSU2_TR(0x7296ef);
if(r1(R+518)){{goto L7296fb;}}
}
B7296f1:L7296f1:{c.instructions+=3;NFSU2_TR(0x7296f1);
__builtin_memmove((R+8),gp(0x8b4a18),1);
}
B7296f7:{NFSU2_TR(0x7296f7);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+8))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7296f9:{NFSU2_TR(0x7296f9);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7296d4u);}goto L7296d4;}}
}
B7296fb:L7296fb:{c.instructions+=3;NFSU2_TR(0x7296fb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7296fc:{NFSU2_TR(0x7296fc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
}
B729701:{NFSU2_TR(0x729701);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7296e7u);}goto L7296e7;}
}
B729703:L729703:{c.instructions+=4;NFSU2_TR(0x729703);
w4(R+0,u32(m1(0x8b4a18)));
}
B72970a:{NFSU2_TR(0x72970a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72970b:{NFSU2_TR(0x72970b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72970c:{NFSU2_TR(0x72970c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72970d:L72970d:{c.instructions+=13;NFSU2_TR(0x72970d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72970e:{NFSU2_TR(0x72970e);
__builtin_memmove((R+20),(R+16),4);
}
B729710:{NFSU2_TR(0x729710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B729713:{NFSU2_TR(0x729713);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B729716:{NFSU2_TR(0x729716);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B72971a:{NFSU2_TR(0x72971a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B72971e:{NFSU2_TR(0x72971e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B729722:{NFSU2_TR(0x729722);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729723:{NFSU2_TR(0x729723);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729724:{NFSU2_TR(0x729724);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729725:{NFSU2_TR(0x729725);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B729728:{NFSU2_TR(0x729728);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72972b:{NFSU2_TR(0x72972b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72972e:L72972e:{c.instructions+=1;NFSU2_TR(0x72972e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0xfffffff7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B729735:L729735:{c.instructions+=4;NFSU2_TR(0x729735);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B729738:{NFSU2_TR(0x729738);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729739:{NFSU2_TR(0x729739);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72973a:{NFSU2_TR(0x72973a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72973full));
TAIL_STATIC(0x727ed8u,727);
}
B72973f:L72973f:{c.instructions+=5;NFSU2_TR(0x72973f);
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
B729741:{NFSU2_TR(0x729741);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729742:{NFSU2_TR(0x729742);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729743:{NFSU2_TR(0x729743);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729746:{NFSU2_TR(0x729746);
if(r1(R+518)){{goto L729b15;}}
}
B72974c:L72974c:{c.instructions+=6;NFSU2_TR(0x72974c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72974f:{NFSU2_TR(0x72974f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729750:{NFSU2_TR(0x729750);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729753:{NFSU2_TR(0x729753);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729754:{NFSU2_TR(0x729754);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729755:{NFSU2_TR(0x729755);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72975aull));
TAIL_STATIC(0x7249a4u,724);
}
B72975a:L72975a:{c.instructions+=9;NFSU2_TR(0x72975a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72975d:{NFSU2_TR(0x72975d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B729760:{NFSU2_TR(0x729760);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729763:{NFSU2_TR(0x729763);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729764:{NFSU2_TR(0x729764);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B729768:{NFSU2_TR(0x729768);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729769:{NFSU2_TR(0x729769);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B72976d:{NFSU2_TR(0x72976d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72976e:{NFSU2_TR(0x72976e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729773ull));
TAIL_STATIC(0x7250c8u,725);
}
B729773:L729773:{c.instructions+=4;NFSU2_TR(0x729773);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B729776:{NFSU2_TR(0x729776);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B729778:{NFSU2_TR(0x729778);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72977b:{NFSU2_TR(0x72977b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729735u);}goto L729735;}}
}
B72977d:L72977d:{c.instructions+=9;NFSU2_TR(0x72977d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(s32(s8(r1(U+4)))));
}
B729781:{NFSU2_TR(0x729781);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B729784:{NFSU2_TR(0x729784);
__builtin_memmove((R+0),gp(0x8b466c),4);
}
B729789:{NFSU2_TR(0x729789);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B72978c:{NFSU2_TR(0x72978c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72978f:{NFSU2_TR(0x72978f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B729791:{NFSU2_TR(0x729791);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B729794:{NFSU2_TR(0x729794);
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
B729796:{NFSU2_TR(0x729796);
if(r1(R+518)){{goto L7297b2;}}
}
B729798:L729798:{c.instructions+=3;NFSU2_TR(0x729798);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B72979b:{NFSU2_TR(0x72979b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72979c:{NFSU2_TR(0x72979c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7297a1ull));
TAIL_STATIC(0x72d0e3u,72d);
}
B7297a1:L7297a1:{c.instructions+=3;NFSU2_TR(0x7297a1);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B7297a3:{NFSU2_TR(0x7297a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7297a4:{NFSU2_TR(0x7297a4);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L7297aa;}}
}
B7297a6:L7297a6:{c.instructions+=2;NFSU2_TR(0x7297a6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7297a8:{NFSU2_TR(0x7297a8);
{goto L7297b2;}
}
B7297aa:L7297aa:{c.instructions+=2;NFSU2_TR(0x7297aa);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B7297ad:{NFSU2_TR(0x7297ad);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7297b2;}}
}
B7297af:L7297af:{c.instructions+=2;NFSU2_TR(0x7297af);
u8 U[4];
w4(U+0,u32(0x7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7297b1:{NFSU2_TR(0x7297b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7297b2:L7297b2:{c.instructions+=2;NFSU2_TR(0x7297b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7297b3:{NFSU2_TR(0x7297b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7297b8ull));
TAIL_STATIC(0x72d0d6u,72d);
}
B7297b8:L7297b8:{c.instructions+=14;NFSU2_TR(0x7297b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7297bb:{NFSU2_TR(0x7297bb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7297bf:{NFSU2_TR(0x7297bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7297c1:{NFSU2_TR(0x7297c1);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B7297c5:{NFSU2_TR(0x7297c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7297c6:{NFSU2_TR(0x7297c6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7297cd:{NFSU2_TR(0x7297cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+4,u16(s16(s8(r1(U+4)))));
}
B7297d2:{NFSU2_TR(0x7297d2);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B7297d4:{NFSU2_TR(0x7297d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7297d7:{NFSU2_TR(0x7297d7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B7297da:{NFSU2_TR(0x7297da);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B7297dc:{NFSU2_TR(0x7297dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7297de:{NFSU2_TR(0x7297de);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7297e5:{NFSU2_TR(0x7297e5);
if(r1(R+518)){{goto L7297f0;}}
}
B7297e7:L7297e7:{c.instructions+=2;NFSU2_TR(0x7297e7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7297e9:{NFSU2_TR(0x7297e9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7297f0:L7297f0:{c.instructions+=3;NFSU2_TR(0x7297f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B7297f4:{NFSU2_TR(0x7297f4);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B7297f7:{NFSU2_TR(0x7297f7);
if(r1(R+518)){{goto L72980a;}}
}
B7297f9:L7297f9:{c.instructions+=3;NFSU2_TR(0x7297f9);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B7297fc:{NFSU2_TR(0x7297fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7297fd:{NFSU2_TR(0x7297fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729802ull));
TAIL_STATIC(0x72d0e3u,72d);
}
B729802:L729802:{c.instructions+=2;NFSU2_TR(0x729802);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+0))));
s2(u32(r4(U+0)),r2(U+4));
}
B729809:{NFSU2_TR(0x729809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72980a:L72980a:{c.instructions+=6;NFSU2_TR(0x72980a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72980d:{NFSU2_TR(0x72980d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729810:{NFSU2_TR(0x729810);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B729813:{NFSU2_TR(0x729813);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B729815:{NFSU2_TR(0x729815);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(s32(s8(r1(U+4)))));
}
B729819:{NFSU2_TR(0x729819);
if(r1(R+518)){{goto L729827;}}
}
B72981b:L72981b:{c.instructions+=3;NFSU2_TR(0x72981b);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B72981e:{NFSU2_TR(0x72981e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72981f:{NFSU2_TR(0x72981f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729824ull));
TAIL_STATIC(0x72d0e3u,72d);
}
B729824:L729824:{c.instructions+=2;NFSU2_TR(0x729824);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729825:{NFSU2_TR(0x729825);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B729827:L729827:{c.instructions+=2;NFSU2_TR(0x729827);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72982a:{NFSU2_TR(0x72982a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72982f;}}
}
B72982c:L72982c:{c.instructions+=2;NFSU2_TR(0x72982c);
u8 U[4];
w4(U+0,u32(0x7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72982e:{NFSU2_TR(0x72982e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72982f:L72982f:{c.instructions+=2;NFSU2_TR(0x72982f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B729831:{NFSU2_TR(0x729831);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L729835;}}
}
B729833:L729833:{c.instructions+=1;NFSU2_TR(0x729833);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B729835:L729835:{c.instructions+=22;NFSU2_TR(0x729835);
__builtin_memmove((R+0),(R+12),4);
}
B729837:{NFSU2_TR(0x729837);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B72983b:{NFSU2_TR(0x72983b);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B72983c:{NFSU2_TR(0x72983c);
u8 U[4];
w4(U+0,u32(0x7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72983e:{NFSU2_TR(0x72983e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72983f:{NFSU2_TR(0x72983f);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x72983f);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x72983f);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B729841:{NFSU2_TR(0x729841);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729844:{NFSU2_TR(0x729844);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+0,u16(s16(s8(r1(U+4)))));
}
B729849:{NFSU2_TR(0x729849);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72984c:{NFSU2_TR(0x72984c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B729853:{NFSU2_TR(0x729853);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B729856:{NFSU2_TR(0x729856);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B729859:{NFSU2_TR(0x729859);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72985c:{NFSU2_TR(0x72985c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72985f:{NFSU2_TR(0x72985f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B729863:{NFSU2_TR(0x729863);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B729866:{NFSU2_TR(0x729866);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729869:{NFSU2_TR(0x729869);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72986c:{NFSU2_TR(0x72986c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B72986e:{NFSU2_TR(0x72986e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B729870:{NFSU2_TR(0x729870);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729873:{NFSU2_TR(0x729873);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72987c;}}
}
B729875:L729875:{c.instructions+=1;NFSU2_TR(0x729875);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x7fffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B72987c:L72987c:{c.instructions+=14;NFSU2_TR(0x72987c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72987f:{NFSU2_TR(0x72987f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B729882:{NFSU2_TR(0x729882);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B729885:{NFSU2_TR(0x729885);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B729886:{NFSU2_TR(0x729886);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x729886);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x729886);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B729889:{NFSU2_TR(0x729889);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72988c:{NFSU2_TR(0x72988c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72988f:{NFSU2_TR(0x72988f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729895:{NFSU2_TR(0x729895);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B729898:{NFSU2_TR(0x729898);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72989b:{NFSU2_TR(0x72989b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B72989f:{NFSU2_TR(0x72989f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7298a6:{NFSU2_TR(0x7298a6);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7298aa:{NFSU2_TR(0x7298aa);
if(r1(R+518)){{goto L7298be;}}
}
B7298ac:L7298ac:{c.instructions+=1;NFSU2_TR(0x7298ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7298b1ull));
TAIL_STATIC(0x724903u,724);
}
B7298b1:L7298b1:{c.instructions+=5;NFSU2_TR(0x7298b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B7298b5:{NFSU2_TR(0x7298b5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7298b7:{NFSU2_TR(0x7298b7);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7298b7);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7298b7);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B7298b9:{NFSU2_TR(0x7298b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6bull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7298bc:{NFSU2_TR(0x7298bc);
{goto L7298c2;}
}
B7298be:L7298be:{c.instructions+=1;NFSU2_TR(0x7298be);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7298c2:L7298c2:{c.instructions+=2;NFSU2_TR(0x7298c2);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7298c6:{NFSU2_TR(0x7298c6);
if(r1(R+518)){{goto L7298da;}}
}
B7298c8:L7298c8:{c.instructions+=1;NFSU2_TR(0x7298c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7298cdull));
TAIL_STATIC(0x724903u,724);
}
B7298cd:L7298cd:{c.instructions+=5;NFSU2_TR(0x7298cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B7298d1:{NFSU2_TR(0x7298d1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7298d3:{NFSU2_TR(0x7298d3);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7298d3);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7298d3);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B7298d5:{NFSU2_TR(0x7298d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7298d8:{NFSU2_TR(0x7298d8);
{goto L7298de;}
}
B7298da:L7298da:{c.instructions+=1;NFSU2_TR(0x7298da);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7298de:L7298de:{c.instructions+=8;NFSU2_TR(0x7298de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7298e1:{NFSU2_TR(0x7298e1);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B7298e5:{NFSU2_TR(0x7298e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7298e8:{NFSU2_TR(0x7298e8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7298ec:{NFSU2_TR(0x7298ec);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B7298f0:{NFSU2_TR(0x7298f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B7298f8:{NFSU2_TR(0x7298f8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7298ff:{NFSU2_TR(0x7298ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729904ull));
TAIL_STATIC(0x7277dau,727);
}
B729904:L729904:{c.instructions+=25;NFSU2_TR(0x729904);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B729908:{NFSU2_TR(0x729908);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72990c:{NFSU2_TR(0x72990c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B729910:{NFSU2_TR(0x729910);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B729914:{NFSU2_TR(0x729914);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B729917:{NFSU2_TR(0x729917);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72991a:{NFSU2_TR(0x72991a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72991d:{NFSU2_TR(0x72991d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729920:{NFSU2_TR(0x729920);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B729924:{NFSU2_TR(0x729924);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B729928:{NFSU2_TR(0x729928);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72992b:{NFSU2_TR(0x72992b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72992e:{NFSU2_TR(0x72992e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B729931:{NFSU2_TR(0x729931);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B729934:{NFSU2_TR(0x729934);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B729937:{NFSU2_TR(0x729937);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72993a:{NFSU2_TR(0x72993a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B72993e:{NFSU2_TR(0x72993e);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B729941:{NFSU2_TR(0x729941);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729942:{NFSU2_TR(0x729942);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B729944:{NFSU2_TR(0x729944);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B729946:{NFSU2_TR(0x729946);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72994c:{NFSU2_TR(0x72994c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72994f:{NFSU2_TR(0x72994f);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B729952:{NFSU2_TR(0x729952);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L729a0f;}}
}
B729958:L729958:{c.instructions+=1;NFSU2_TR(0x729958);
{goto L72995d;}
}
B72995a:L72995a:{c.instructions+=1;NFSU2_TR(0x72995a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72995d:L72995d:{c.instructions+=43;NFSU2_TR(0x72995d);
u8 U[14];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
}
B729965:{NFSU2_TR(0x729965);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B729967:{NFSU2_TR(0x729967);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72996a:{NFSU2_TR(0x72996a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72996d:{NFSU2_TR(0x72996d);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8b466cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w2(R+8,u16(u32(r2(R+8))-u32(r2(U+8))));
}
B729975:{NFSU2_TR(0x729975);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(s32(s16(r2(U+12)))));
}
B72997a:{NFSU2_TR(0x72997a);
u8 U[14];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B72997f:{NFSU2_TR(0x72997f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B729983:{NFSU2_TR(0x729983);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B729986:{NFSU2_TR(0x729986);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B729989:{NFSU2_TR(0x729989);
w4(R+12,u32(u32(r4(R+12))+u32(m4(0x8b466c))));
}
B72998f:{NFSU2_TR(0x72998f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729990:{NFSU2_TR(0x729990);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B729994:{NFSU2_TR(0x729994);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B729997:{NFSU2_TR(0x729997);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2bull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72999a:{NFSU2_TR(0x72999a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72999d:{NFSU2_TR(0x72999d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7299a0:{NFSU2_TR(0x7299a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5full))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7299a3:{NFSU2_TR(0x7299a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7299a6:{NFSU2_TR(0x7299a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7299a9:{NFSU2_TR(0x7299a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7299ac:{NFSU2_TR(0x7299ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7299af:{NFSU2_TR(0x7299af);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7299b2:{NFSU2_TR(0x7299b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7299b5:{NFSU2_TR(0x7299b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7299b8:{NFSU2_TR(0x7299b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7299bb:{NFSU2_TR(0x7299bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7299be:{NFSU2_TR(0x7299be);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7299c2:{NFSU2_TR(0x7299c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7299c5:{NFSU2_TR(0x7299c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7299c8:{NFSU2_TR(0x7299c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7299cb:{NFSU2_TR(0x7299cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7299ce:{NFSU2_TR(0x7299ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7299d1:{NFSU2_TR(0x7299d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7299d4:{NFSU2_TR(0x7299d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7299d7:{NFSU2_TR(0x7299d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7299da:{NFSU2_TR(0x7299da);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7299dd:{NFSU2_TR(0x7299dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x69ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7299e0:{NFSU2_TR(0x7299e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7299e3:{NFSU2_TR(0x7299e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6bull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7299e6:{NFSU2_TR(0x7299e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7299e9:{NFSU2_TR(0x7299e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7299ec:{NFSU2_TR(0x7299ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7299f1ull));
TAIL_STATIC(0x7276bfu,727);
}
B7299f1:L7299f1:{c.instructions+=8;NFSU2_TR(0x7299f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7299f5:{NFSU2_TR(0x7299f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7299f6:{NFSU2_TR(0x7299f6);
__builtin_memmove((R+0),(R+518),1);
}
B7299f9:{NFSU2_TR(0x7299f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7299fc:{NFSU2_TR(0x7299fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7299ff:{NFSU2_TR(0x7299ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B729a03:{NFSU2_TR(0x729a03);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B729a06:{NFSU2_TR(0x729a06);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72995au);}goto L72995a;}}
}
B729a0c:L729a0c:{c.instructions+=1;NFSU2_TR(0x729a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B729a0f:L729a0f:{c.instructions+=3;NFSU2_TR(0x729a0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B729a12:{NFSU2_TR(0x729a12);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B729a14:{NFSU2_TR(0x729a14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L729a30;}}
}
B729a16:L729a16:{c.instructions+=7;NFSU2_TR(0x729a16);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B729a1a:{NFSU2_TR(0x729a1a);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+0,u16(u32(r2(R+0))+u32(r2(U+4))));
}
B729a1e:{NFSU2_TR(0x729a1e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+0,u16(u32(r2(R+0))+u32(r2(U+4))));
}
B729a22:{NFSU2_TR(0x729a22);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B729a26:{NFSU2_TR(0x729a26);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B729a2a:{NFSU2_TR(0x729a2a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B729a2e:{NFSU2_TR(0x729a2e);
{goto L729a98;}
}
B729a30:L729a30:{c.instructions+=10;NFSU2_TR(0x729a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B729a34:{NFSU2_TR(0x729a34);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B729a37:{NFSU2_TR(0x729a37);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B729a39:{NFSU2_TR(0x729a39);
__builtin_memmove((R+0),gp(0x8b46ec),4);
}
B729a3e:{NFSU2_TR(0x729a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B729a41:{NFSU2_TR(0x729a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B729a44:{NFSU2_TR(0x729a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B729a47:{NFSU2_TR(0x729a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7c692aull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B729a4e:{NFSU2_TR(0x729a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729a51:{NFSU2_TR(0x729a51);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L729a98;}}
}
B729a53:L729a53:{c.instructions+=1;NFSU2_TR(0x729a53);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+8),(U+0),4);
}
B729a56:L729a56:{c.instructions+=19;NFSU2_TR(0x729a56);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B729a5a:{NFSU2_TR(0x729a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B729a5d:{NFSU2_TR(0x729a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B729a60:{NFSU2_TR(0x729a60);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w2(R+4,u16(r1(U+8)));
}
B729a65:{NFSU2_TR(0x729a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B729a68:{NFSU2_TR(0x729a68);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B729a6b:{NFSU2_TR(0x729a6b);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b466c))));
}
B729a71:{NFSU2_TR(0x729a71);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B729a74:{NFSU2_TR(0x729a74);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B729a78:{NFSU2_TR(0x729a78);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+12),(U+0),2);
}
B729a7b:{NFSU2_TR(0x729a7b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B729a80:{NFSU2_TR(0x729a80);
w2(R+12,u16(u32(r2(R+12))+u32(r2(R+4))));
}
B729a83:{NFSU2_TR(0x729a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B729a86:{NFSU2_TR(0x729a86);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B729a8a:{NFSU2_TR(0x729a8a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B729a8e:{NFSU2_TR(0x729a8e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B729a8f:{NFSU2_TR(0x729a8f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B729a90:{NFSU2_TR(0x729a90);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B729a93:{NFSU2_TR(0x729a93);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729a56u);}goto L729a56;}}
}
B729a95:L729a95:{c.instructions+=1;NFSU2_TR(0x729a95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B729a98:L729a98:{c.instructions+=5;NFSU2_TR(0x729a98);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B729a9b:{NFSU2_TR(0x729a9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B729a9e:{NFSU2_TR(0x729a9e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B729aa0:{NFSU2_TR(0x729aa0);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+0)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B729aa6:{NFSU2_TR(0x729aa6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L729ac2;}}
}
B729aa8:L729aa8:{c.instructions+=2;NFSU2_TR(0x729aa8);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B729aab:{NFSU2_TR(0x729aab);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B729ab1:L729ab1:{c.instructions+=5;NFSU2_TR(0x729ab1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B729ab4:{NFSU2_TR(0x729ab4);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B729ab7:{NFSU2_TR(0x729ab7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B729ab8:{NFSU2_TR(0x729ab8);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B729abe:{NFSU2_TR(0x729abe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729ab1u);}goto L729ab1;}}
}
B729ac0:L729ac0:{c.instructions+=1;NFSU2_TR(0x729ac0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B729ac2:L729ac2:{c.instructions+=10;NFSU2_TR(0x729ac2);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B729ac6:{NFSU2_TR(0x729ac6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729ac7:{NFSU2_TR(0x729ac7);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B729acb:{NFSU2_TR(0x729acb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729acc:{NFSU2_TR(0x729acc);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B729ad0:{NFSU2_TR(0x729ad0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729ad1:{NFSU2_TR(0x729ad1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729ad4:{NFSU2_TR(0x729ad4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729ad7:{NFSU2_TR(0x729ad7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729ad8:{NFSU2_TR(0x729ad8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729addull));
TAIL_STATIC(0x72d046u,72d);
}
B729add:L729add:{c.instructions+=3;NFSU2_TR(0x729add);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B729ae0:{NFSU2_TR(0x729ae0);
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
B729ae2:{NFSU2_TR(0x729ae2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L729b15;}}
}
B729ae4:L729ae4:{c.instructions+=3;NFSU2_TR(0x729ae4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B729ae6:{NFSU2_TR(0x729ae6);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+523,sborrow<u8>(r1(U+5),r1(R+12)));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+6))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B729ae9:{NFSU2_TR(0x729ae9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72972eu);}goto L72972e;}}
}
B729aef:L729aef:{c.instructions+=2;NFSU2_TR(0x729aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B729af2:{NFSU2_TR(0x729af2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B729af5:L729af5:{c.instructions+=4;NFSU2_TR(0x729af5);
__builtin_memmove((R+0),gp(0x8b466c),4);
}
B729afa:{NFSU2_TR(0x729afa);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B729afe:{NFSU2_TR(0x729afe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729aff:{NFSU2_TR(0x729aff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729b04ull));
TAIL_STATIC(0x725378u,725);
}
B729b04:L729b04:{c.instructions+=7;NFSU2_TR(0x729b04);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B729b08:{NFSU2_TR(0x729b08);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B729b09:{NFSU2_TR(0x729b09);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B729b0a:{NFSU2_TR(0x729b0a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B729b0b:{NFSU2_TR(0x729b0b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B729b0d:{NFSU2_TR(0x729b0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729b0e:{NFSU2_TR(0x729b0e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729af5u);}goto L729af5;}}
}
B729b10:L729b10:{c.instructions+=1;NFSU2_TR(0x729b10);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72972eu);}goto L72972e;}
}
B729b15:L729b15:{c.instructions+=6;NFSU2_TR(0x729b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B729b18:{NFSU2_TR(0x729b18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B729b19:{NFSU2_TR(0x729b19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B729b1a:{NFSU2_TR(0x729b1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B729b1b:{NFSU2_TR(0x729b1b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B729b1c:{NFSU2_TR(0x729b1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B729b1d:L729b1d:{c.instructions+=11;NFSU2_TR(0x729b1d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729b1e:{NFSU2_TR(0x729b1e);
u8 U[4];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B729b22:{NFSU2_TR(0x729b22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x118ull))));
}
B729b28:{NFSU2_TR(0x729b28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729b29:{NFSU2_TR(0x729b29);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B729b2b:{NFSU2_TR(0x729b2b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B729b2e:{NFSU2_TR(0x729b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729b31:{NFSU2_TR(0x729b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729b34:{NFSU2_TR(0x729b34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729b37:{NFSU2_TR(0x729b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
w4(U+4,u32(0xfffffff7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B729b3e:{NFSU2_TR(0x729b3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L729b48;}}
}
B729b40:L729b40:{c.instructions+=3;NFSU2_TR(0x729b40);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729b42:{NFSU2_TR(0x729b42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B729b43:{NFSU2_TR(0x729b43);
{goto L729cd6;}
}
B729b48:L729b48:{c.instructions+=2;NFSU2_TR(0x729b48);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B729b4b:{NFSU2_TR(0x729b4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L729b53;}}
}
B729b4d:L729b4d:{c.instructions+=2;NFSU2_TR(0x729b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B729b50:{NFSU2_TR(0x729b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729b53:L729b53:{c.instructions+=8;NFSU2_TR(0x729b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B729b57:{NFSU2_TR(0x729b57);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729b58:{NFSU2_TR(0x729b58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729b59:{NFSU2_TR(0x729b59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B729b5c:{NFSU2_TR(0x729b5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B729b60:{NFSU2_TR(0x729b60);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(s32(s8(r1(U+4)))));
}
B729b64:{NFSU2_TR(0x729b64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729b67:{NFSU2_TR(0x729b67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729b6cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7296c2u);}goto L7296c2;}
}
B729b6c:L729b6c:{c.instructions+=1;NFSU2_TR(0x729b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729b6f:L729b6f:{c.instructions+=5;NFSU2_TR(0x729b6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B729b75:{NFSU2_TR(0x729b75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729b76:{NFSU2_TR(0x729b76);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B729b79:{NFSU2_TR(0x729b79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729b7a:{NFSU2_TR(0x729b7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729b7full));
TAIL_STATIC(0x727181u,727);
}
B729b7f:L729b7f:{c.instructions+=5;NFSU2_TR(0x729b7f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B729b83:{NFSU2_TR(0x729b83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729b84:{NFSU2_TR(0x729b84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729b85:{NFSU2_TR(0x729b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729b88:{NFSU2_TR(0x729b88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L729bac;}}
}
B729b8a:L729b8a:{c.instructions+=2;NFSU2_TR(0x729b8a);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B729b92:{NFSU2_TR(0x729b92);
if(r1(R+518)){{goto L729ba5;}}
}
B729b94:L729b94:{c.instructions+=3;NFSU2_TR(0x729b94);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B729b9b:{NFSU2_TR(0x729b9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729b9c:{NFSU2_TR(0x729b9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729ba1ull));
TAIL_STATIC(0x72d0e3u,72d);
}
B729ba1:L729ba1:{c.instructions+=2;NFSU2_TR(0x729ba1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729ba2:{NFSU2_TR(0x729ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729ba5:L729ba5:{c.instructions+=1;NFSU2_TR(0x729ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B729bac:L729bac:{c.instructions+=3;NFSU2_TR(0x729bac);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B729bb3:{NFSU2_TR(0x729bb3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B729bb6:{NFSU2_TR(0x729bb6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L729c1b;}}
}
B729bb8:L729bb8:{c.instructions+=3;NFSU2_TR(0x729bb8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff55ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B729bbf:{NFSU2_TR(0x729bbf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B729bc2:{NFSU2_TR(0x729bc2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L729c1b;}}
}
B729bc4:L729bc4:{c.instructions+=3;NFSU2_TR(0x729bc4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B729bcb:{NFSU2_TR(0x729bcb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B729bcd:{NFSU2_TR(0x729bcd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L729c1b;}}
}
B729bcf:L729bcf:{c.instructions+=3;NFSU2_TR(0x729bcf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff57ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B729bd6:{NFSU2_TR(0x729bd6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B729bd8:{NFSU2_TR(0x729bd8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L729c1b;}}
}
B729bda:L729bda:{c.instructions+=10;NFSU2_TR(0x729bda);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729bdd:{NFSU2_TR(0x729bdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B729be3:{NFSU2_TR(0x729be3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729be6:{NFSU2_TR(0x729be6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729be7:{NFSU2_TR(0x729be7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729be8:{NFSU2_TR(0x729be8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729be9:{NFSU2_TR(0x729be9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729bec:{NFSU2_TR(0x729bec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729bef:{NFSU2_TR(0x729bef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729bf2:{NFSU2_TR(0x729bf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729bf7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72970du);}goto L72970d;}
}
B729bf7:L729bf7:{c.instructions+=4;NFSU2_TR(0x729bf7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B729bfa:{NFSU2_TR(0x729bfa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B729bfc:{NFSU2_TR(0x729bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729bff:{NFSU2_TR(0x729bff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L729c5a;}}
}
B729c01:L729c01:{c.instructions+=7;NFSU2_TR(0x729c01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B729c04:{NFSU2_TR(0x729c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B729c07:{NFSU2_TR(0x729c07);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B729c0b:{NFSU2_TR(0x729c0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B729c11:{NFSU2_TR(0x729c11);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729c13:{NFSU2_TR(0x729c13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729c14:{NFSU2_TR(0x729c14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729c19ull));
TAIL_STATIC(0x721b48u,721);
}
B729c19:L729c19:{c.instructions+=2;NFSU2_TR(0x729c19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729c1a:{NFSU2_TR(0x729c1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729c1b:L729c1b:{c.instructions+=2;NFSU2_TR(0x729c1b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B729c1f:{NFSU2_TR(0x729c1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729b6fu);}goto L729b6f;}}
}
B729c25:L729c25:{c.instructions+=6;NFSU2_TR(0x729c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B729c28:{NFSU2_TR(0x729c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B729c2c:{NFSU2_TR(0x729c2c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B729c2e:{NFSU2_TR(0x729c2e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B729c30:{NFSU2_TR(0x729c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729c33:{NFSU2_TR(0x729c33);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L729c5a;}}
}
B729c35:L729c35:{c.instructions+=3;NFSU2_TR(0x729c35);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B729c39:{NFSU2_TR(0x729c39);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729c3a:{NFSU2_TR(0x729c3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729c3full));
TAIL_STATIC(0x72d112u,72d);
}
B729c3f:L729c3f:{c.instructions+=3;NFSU2_TR(0x729c3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B729c41:{NFSU2_TR(0x729c41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729c42:{NFSU2_TR(0x729c42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L729c4e;}}
}
B729c44:L729c44:{c.instructions+=3;NFSU2_TR(0x729c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B729c47:{NFSU2_TR(0x729c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B729c4a:{NFSU2_TR(0x729c4a);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B729c4e:L729c4e:{c.instructions+=3;NFSU2_TR(0x729c4e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B729c4f:{NFSU2_TR(0x729c4f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B729c52:{NFSU2_TR(0x729c52);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729c35u);}goto L729c35;}}
}
B729c54:L729c54:{c.instructions+=2;NFSU2_TR(0x729c54);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B729c58:{NFSU2_TR(0x729c58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L729c73;}}
}
B729c5a:L729c5a:{c.instructions+=3;NFSU2_TR(0x729c5a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B729c5c:{NFSU2_TR(0x729c5c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B729c5f:{NFSU2_TR(0x729c5f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L729cd1;}}
}
B729c61:L729c61:{c.instructions+=2;NFSU2_TR(0x729c61);
u8 U[20];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B729c65:{NFSU2_TR(0x729c65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729c6aull));
TAIL_STATIC(0x723e1eu,723);
}
B729c6a:L729c6a:{c.instructions+=4;NFSU2_TR(0x729c6a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B729c6b:{NFSU2_TR(0x729c6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B729c6e:{NFSU2_TR(0x729c6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729c6f:{NFSU2_TR(0x729c6f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729c61u);}goto L729c61;}}
}
B729c71:L729c71:{c.instructions+=1;NFSU2_TR(0x729c71);
{goto L729cd1;}
}
B729c73:L729c73:{c.instructions+=2;NFSU2_TR(0x729c73);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B729c77:{NFSU2_TR(0x729c77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L729c9c;}}
}
B729c79:L729c79:{c.instructions+=2;NFSU2_TR(0x729c79);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729c7c:{NFSU2_TR(0x729c7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729c81ull));
TAIL_STATIC(0x725480u,725);
}
B729c81:L729c81:{c.instructions+=3;NFSU2_TR(0x729c81);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B729c83:{NFSU2_TR(0x729c83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729c84:{NFSU2_TR(0x729c84);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L729cd1;}}
}
B729c86:L729c86:{c.instructions+=6;NFSU2_TR(0x729c86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B729c89:{NFSU2_TR(0x729c89);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B729c8c:{NFSU2_TR(0x729c8c);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b466c))));
}
B729c92:{NFSU2_TR(0x729c92);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x26ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B729c96:{NFSU2_TR(0x729c96);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x27ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B729c9a:{NFSU2_TR(0x729c9a);
{goto L729cd1;}
}
B729c9c:L729c9c:{c.instructions+=3;NFSU2_TR(0x729c9c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B729c9e:{NFSU2_TR(0x729c9e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B729ca1:{NFSU2_TR(0x729ca1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L729ccd;}}
}
B729ca3:L729ca3:{c.instructions+=2;NFSU2_TR(0x729ca3);
u8 U[20];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B729ca7:{NFSU2_TR(0x729ca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729cacull));
TAIL_STATIC(0x725480u,725);
}
B729cac:L729cac:{c.instructions+=3;NFSU2_TR(0x729cac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B729cae:{NFSU2_TR(0x729cae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729caf:{NFSU2_TR(0x729caf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L729cc7;}}
}
B729cb1:L729cb1:{c.instructions+=6;NFSU2_TR(0x729cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B729cb4:{NFSU2_TR(0x729cb4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B729cb7:{NFSU2_TR(0x729cb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B729cba:{NFSU2_TR(0x729cba);
w4(R+28,u32(u32(r4(R+28))+u32(m4(0x8b466c))));
}
B729cc0:{NFSU2_TR(0x729cc0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x26ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B729cc3:{NFSU2_TR(0x729cc3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x27ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B729cc7:L729cc7:{c.instructions+=3;NFSU2_TR(0x729cc7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B729cc8:{NFSU2_TR(0x729cc8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B729ccb:{NFSU2_TR(0x729ccb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729ca3u);}goto L729ca3;}}
}
B729ccd:L729ccd:{c.instructions+=1;NFSU2_TR(0x729ccd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x27ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B729cd1:L729cd1:{c.instructions+=3;NFSU2_TR(0x729cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B729cd4:{NFSU2_TR(0x729cd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B729cd5:{NFSU2_TR(0x729cd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B729cd6:L729cd6:{c.instructions+=4;NFSU2_TR(0x729cd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B729cd7:{NFSU2_TR(0x729cd7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x64ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B729cda:{NFSU2_TR(0x729cda);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B729cdb:{NFSU2_TR(0x729cdb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B729cdc:L729cdc:{c.instructions+=2;NFSU2_TR(0x729cdc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729cdd:{NFSU2_TR(0x729cdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729ce2ull));
TAIL_STATIC(0x721f99u,721);
}
B729ce2:L729ce2:{c.instructions+=1;NFSU2_TR(0x729ce2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729ce7ull));
TAIL_STATIC(0x725c1bu,725);
}
B729ce7:L729ce7:{c.instructions+=2;NFSU2_TR(0x729ce7);
__builtin_memmove((R+24),(R+0),4);
}
B729ce9:{NFSU2_TR(0x729ce9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729ceeull));
TAIL_STATIC(0x721fa7u,721);
}
B729cee:L729cee:{c.instructions+=3;NFSU2_TR(0x729cee);
__builtin_memmove((R+0),(R+24),4);
}
B729cf0:{NFSU2_TR(0x729cf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B729cf1:{NFSU2_TR(0x729cf1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B729cf2:L729cf2:{c.instructions+=2;NFSU2_TR(0x729cf2);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B729cf9:{NFSU2_TR(0x729cf9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L729cff;}}
}
B729cfb:L729cfb:{c.instructions+=3;NFSU2_TR(0x729cfb);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729cfd:{NFSU2_TR(0x729cfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B729cfe:{NFSU2_TR(0x729cfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B729cff:L729cff:{c.instructions+=10;NFSU2_TR(0x729cff);
__builtin_memmove((R+4),gp(0x8b4674),4);
}
B729d05:{NFSU2_TR(0x729d05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729d06:{NFSU2_TR(0x729d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B729d09:{NFSU2_TR(0x729d09);
__builtin_memmove((R+0),(R+24),4);
}
B729d0b:{NFSU2_TR(0x729d0b);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B729d0e:{NFSU2_TR(0x729d0e);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x64ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B729d11:{NFSU2_TR(0x729d11);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B729d12:{NFSU2_TR(0x729d12);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x729d12);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x729d12);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B729d14:{NFSU2_TR(0x729d14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B729d15:{NFSU2_TR(0x729d15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B729d16:L729d16:{c.instructions+=10;NFSU2_TR(0x729d16);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729d17:{NFSU2_TR(0x729d17);
__builtin_memmove((R+20),(R+16),4);
}
B729d19:{NFSU2_TR(0x729d19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa4ull))));
}
B729d1f:{NFSU2_TR(0x729d1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729d20:{NFSU2_TR(0x729d20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729d21:{NFSU2_TR(0x729d21);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((R+0),(U+0),4);
}
B729d27:{NFSU2_TR(0x729d27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729d28:{NFSU2_TR(0x729d28);
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
B729d2a:{NFSU2_TR(0x729d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
w4(U+4,u32(0x94ull));
s4(u32(r4(U+0)),r4(U+4));
}
B729d34:{NFSU2_TR(0x729d34);
u8 U[4];
__builtin_memmove((U+0),gp(0x783168),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729d3aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B729d3a:L729d3a:{c.instructions+=4;NFSU2_TR(0x729d3a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B729d3c:{NFSU2_TR(0x729d3c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B729d3d:{NFSU2_TR(0x729d3d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
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
B729d43:{NFSU2_TR(0x729d43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L729d4f;}}
}
B729d45:L729d45:{c.instructions+=2;NFSU2_TR(0x729d45);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B729d4b:{NFSU2_TR(0x729d4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L729d4f;}}
}
B729d4d:L729d4d:{c.instructions+=1;NFSU2_TR(0x729d4d);
__builtin_memmove((R+28),(R+24),4);
}
B729d4f:L729d4f:{c.instructions+=1;NFSU2_TR(0x729d4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729d54ull));
TAIL_STATIC(0x72d140u,72d);
}
B729d54:L729d54:{c.instructions+=2;NFSU2_TR(0x729d54);
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
B729d56:{NFSU2_TR(0x729d56);
if(r1(R+518)){{goto L729d9c;}}
}
B729d58:L729d58:{c.instructions+=4;NFSU2_TR(0x729d58);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B729d5b:{NFSU2_TR(0x729d5b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729d5d:{NFSU2_TR(0x729d5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729d5e:{NFSU2_TR(0x729d5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729d63ull));
TAIL_STATIC(0x72d15du,72d);
}
B729d63:L729d63:{c.instructions+=4;NFSU2_TR(0x729d63);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
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
B729d66:{NFSU2_TR(0x729d66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729d67:{NFSU2_TR(0x729d67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729d68:{NFSU2_TR(0x729d68);
if(r1(R+512)){{goto L729d9c;}}
}
B729d6a:L729d6a:{c.instructions+=4;NFSU2_TR(0x729d6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B729d6d:{NFSU2_TR(0x729d6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729d6e:{NFSU2_TR(0x729d6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729d6f:{NFSU2_TR(0x729d6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729d74ull));
TAIL_STATIC(0x72d15du,72d);
}
B729d74:L729d74:{c.instructions+=4;NFSU2_TR(0x729d74);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B729d78:{NFSU2_TR(0x729d78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729d79:{NFSU2_TR(0x729d79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729d7a:{NFSU2_TR(0x729d7a);
if(r1(R+518)){{goto L729d83;}}
}
B729d7c:L729d7c:{c.instructions+=2;NFSU2_TR(0x729d7c);
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
B729d7e:{NFSU2_TR(0x729d7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L729d83;}}
}
B729d80:L729d80:{c.instructions+=2;NFSU2_TR(0x729d80);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729d82:{NFSU2_TR(0x729d82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B729d83:L729d83:{c.instructions+=4;NFSU2_TR(0x729d83);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B729d86:{NFSU2_TR(0x729d86);
u8 U[4];
w4(U+0,u32(0x80000001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729d8b:{NFSU2_TR(0x729d8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729d8c:{NFSU2_TR(0x729d8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729d91ull));
TAIL_STATIC(0x72d15du,72d);
}
B729d91:L729d91:{c.instructions+=4;NFSU2_TR(0x729d91);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B729d95:{NFSU2_TR(0x729d95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729d96:{NFSU2_TR(0x729d96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729d97:{NFSU2_TR(0x729d97);
if(r1(R+518)){{goto L729d9c;}}
}
B729d99:L729d99:{c.instructions+=1;NFSU2_TR(0x729d99);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B729d9c:L729d9c:{c.instructions+=5;NFSU2_TR(0x729d9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B729d9d:{NFSU2_TR(0x729d9d);
__builtin_memmove((R+0),(R+24),4);
}
B729d9f:{NFSU2_TR(0x729d9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B729da0:{NFSU2_TR(0x729da0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B729da1:{NFSU2_TR(0x729da1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B729da2:L729da2:{c.instructions+=9;NFSU2_TR(0x729da2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729da3:{NFSU2_TR(0x729da3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B729da7:{NFSU2_TR(0x729da7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x5cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B729daa:{NFSU2_TR(0x729daa);
w4(R+24,u32(u32(r4(R+24))+u32(m4(0x8b4a00))));
}
B729db0:{NFSU2_TR(0x729db0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729db1:{NFSU2_TR(0x729db1);
w4(R+0,u32(0x40000ull));
}
B729db6:{NFSU2_TR(0x729db6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B729db8:{NFSU2_TR(0x729db8);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B729dbc:{NFSU2_TR(0x729dbc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L729dc2;}}
}
B729dbe:L729dbe:{c.instructions+=1;NFSU2_TR(0x729dbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729dc2:L729dc2:{c.instructions+=2;NFSU2_TR(0x729dc2);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
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
B729dc6:{NFSU2_TR(0x729dc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L729e13;}}
}
B729dc8:L729dc8:{c.instructions+=2;NFSU2_TR(0x729dc8);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729dca:{NFSU2_TR(0x729dca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729dcfull));
TAIL_STATIC(0x724792u,724);
}
B729dcf:L729dcf:{c.instructions+=4;NFSU2_TR(0x729dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729dd2:{NFSU2_TR(0x729dd2);
u8 U[1];
__builtin_memmove((U+0),gp(0x8b47fe),1);
w1(R+512,u8((r1(U+0))<(u8(0x32ull))));
}
B729dd9:{NFSU2_TR(0x729dd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729dda:{NFSU2_TR(0x729dda);
if(r1(R+512)){{goto L729ddf;}}
}
B729ddc:L729ddc:{c.instructions+=2;NFSU2_TR(0x729ddc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B729dde:{NFSU2_TR(0x729dde);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B729ddf:L729ddf:{c.instructions+=10;NFSU2_TR(0x729ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B729de3:{NFSU2_TR(0x729de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B729de6:{NFSU2_TR(0x729de6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w2(U+4,u16(0xa0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B729dec:{NFSU2_TR(0x729dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B729def:{NFSU2_TR(0x729def);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B729df3:{NFSU2_TR(0x729df3);
w4(R+0,u32(m1(0x8b460f)));
}
B729dfa:{NFSU2_TR(0x729dfa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729dfb:{NFSU2_TR(0x729dfb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729dfc:{NFSU2_TR(0x729dfc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729dff:{NFSU2_TR(0x729dff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729e04ull));
TAIL_STATIC(0x72d369u,72d);
}
B729e04:L729e04:{c.instructions+=4;NFSU2_TR(0x729e04);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729e07:{NFSU2_TR(0x729e07);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B729e0a:{NFSU2_TR(0x729e0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729e0b:{NFSU2_TR(0x729e0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729e10ull));
TAIL_STATIC(0x72a1e9u,72a);
}
B729e10:L729e10:{c.instructions+=1;NFSU2_TR(0x729e10);
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
B729e13:L729e13:{c.instructions+=3;NFSU2_TR(0x729e13);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729e17:{NFSU2_TR(0x729e17);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729e1a:{NFSU2_TR(0x729e1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729e1full));
TAIL_STATIC(0x72d181u,72d);
}
B729e1f:L729e1f:{c.instructions+=5;NFSU2_TR(0x729e1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729e20:{NFSU2_TR(0x729e20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729e21:{NFSU2_TR(0x729e21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B729e22:{NFSU2_TR(0x729e22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B729e23:{NFSU2_TR(0x729e23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B729e24:L729e24:{c.instructions+=15;NFSU2_TR(0x729e24);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729e25:{NFSU2_TR(0x729e25);
__builtin_memmove((R+20),(R+16),4);
}
B729e27:{NFSU2_TR(0x729e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B729e2a:{NFSU2_TR(0x729e2a);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B729e2d:{NFSU2_TR(0x729e2d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B729e31:{NFSU2_TR(0x729e31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729e32:{NFSU2_TR(0x729e32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729e33:{NFSU2_TR(0x729e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B729e36:{NFSU2_TR(0x729e36);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B729e39:{NFSU2_TR(0x729e39);
w4(R+24,u32(u32(r4(R+24))+u32(m4(0x8b466c))));
}
B729e3f:{NFSU2_TR(0x729e3f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B729e41:{NFSU2_TR(0x729e41);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B729e44:{NFSU2_TR(0x729e44);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B729e47:{NFSU2_TR(0x729e47);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B729e4a:{NFSU2_TR(0x729e4a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L729e72;}}
}
B729e4c:L729e4c:{c.instructions+=2;NFSU2_TR(0x729e4c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729e4d:{NFSU2_TR(0x729e4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B729e50:L729e50:{c.instructions+=7;NFSU2_TR(0x729e50);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B729e53:{NFSU2_TR(0x729e53);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B729e56:{NFSU2_TR(0x729e56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729e57:{NFSU2_TR(0x729e57);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B729e5a:{NFSU2_TR(0x729e5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729e5d:{NFSU2_TR(0x729e5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729e5e:{NFSU2_TR(0x729e5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729e63ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729087u);}goto L729087;}
}
B729e63:L729e63:{c.instructions+=7;NFSU2_TR(0x729e63);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B729e67:{NFSU2_TR(0x729e67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B729e6a:{NFSU2_TR(0x729e6a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B729e6b:{NFSU2_TR(0x729e6b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B729e6c:{NFSU2_TR(0x729e6c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B729e6d:{NFSU2_TR(0x729e6d);
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
B729e6f:{NFSU2_TR(0x729e6f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729e50u);}goto L729e50;}}
}
B729e71:L729e71:{c.instructions+=1;NFSU2_TR(0x729e71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B729e72:L729e72:{c.instructions+=4;NFSU2_TR(0x729e72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B729e73:{NFSU2_TR(0x729e73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B729e74:{NFSU2_TR(0x729e74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B729e75:{NFSU2_TR(0x729e75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B729e76:L729e76:{c.instructions+=6;NFSU2_TR(0x729e76);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729e77:{NFSU2_TR(0x729e77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729e78:{NFSU2_TR(0x729e78);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B729e7c:{NFSU2_TR(0x729e7c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B729e7e:{NFSU2_TR(0x729e7e);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+4),r1(R+12)));
w1(U+5,u8(u32(r1(U+4))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B729e80:{NFSU2_TR(0x729e80);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L729ea0;}}
}
B729e82:L729e82:{c.instructions+=2;NFSU2_TR(0x729e82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729e83:{NFSU2_TR(0x729e83);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B729e86:L729e86:{c.instructions+=4;NFSU2_TR(0x729e86);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B729e89:{NFSU2_TR(0x729e89);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729e8d:{NFSU2_TR(0x729e8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729e8e:{NFSU2_TR(0x729e8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729e93ull));
TAIL_STATIC(0x72d3cbu,72d);
}
B729e93:L729e93:{c.instructions+=8;NFSU2_TR(0x729e93);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B729e96:{NFSU2_TR(0x729e96);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B729e97:{NFSU2_TR(0x729e97);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B729e98:{NFSU2_TR(0x729e98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729e99:{NFSU2_TR(0x729e99);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B729e9a:{NFSU2_TR(0x729e9a);
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
B729e9c:{NFSU2_TR(0x729e9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729e9d:{NFSU2_TR(0x729e9d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729e86u);}goto L729e86;}}
}
B729e9f:L729e9f:{c.instructions+=1;NFSU2_TR(0x729e9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B729ea0:L729ea0:{c.instructions+=3;NFSU2_TR(0x729ea0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B729ea1:{NFSU2_TR(0x729ea1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B729ea2:{NFSU2_TR(0x729ea2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B729ea3:L729ea3:{c.instructions+=15;NFSU2_TR(0x729ea3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729ea4:{NFSU2_TR(0x729ea4);
__builtin_memmove((R+20),(R+16),4);
}
B729ea6:{NFSU2_TR(0x729ea6);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B729ea9:{NFSU2_TR(0x729ea9);
w4(R+0,u32(m2(0x8b44c6)));
}
B729eb0:{NFSU2_TR(0x729eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729eb3:{NFSU2_TR(0x729eb3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729eb4:{NFSU2_TR(0x729eb4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729eb5:{NFSU2_TR(0x729eb5);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B729eb8:{NFSU2_TR(0x729eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B729ebb:{NFSU2_TR(0x729ebb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B729ebd:{NFSU2_TR(0x729ebd);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+4),r1(R+12)));
w1(U+5,u8(u32(r1(U+4))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B729ebf:{NFSU2_TR(0x729ebf);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B729ec5:{NFSU2_TR(0x729ec5);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B729ec7:{NFSU2_TR(0x729ec7);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B729eca:{NFSU2_TR(0x729eca);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L729eed;}}
}
B729ecc:L729ecc:{c.instructions+=2;NFSU2_TR(0x729ecc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729ecd:{NFSU2_TR(0x729ecd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B729ed0:L729ed0:{c.instructions+=6;NFSU2_TR(0x729ed0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B729ed3:{NFSU2_TR(0x729ed3);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B729ed6:{NFSU2_TR(0x729ed6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729ed7:{NFSU2_TR(0x729ed7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B729eda:{NFSU2_TR(0x729eda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729edb:{NFSU2_TR(0x729edb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729ee0ull));
TAIL_STATIC(0x72d3ecu,72d);
}
B729ee0:L729ee0:{c.instructions+=8;NFSU2_TR(0x729ee0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B729ee3:{NFSU2_TR(0x729ee3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B729ee4:{NFSU2_TR(0x729ee4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B729ee5:{NFSU2_TR(0x729ee5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729ee6:{NFSU2_TR(0x729ee6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B729ee7:{NFSU2_TR(0x729ee7);
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
B729ee9:{NFSU2_TR(0x729ee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729eea:{NFSU2_TR(0x729eea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729ed0u);}goto L729ed0;}}
}
B729eec:L729eec:{c.instructions+=1;NFSU2_TR(0x729eec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B729eed:L729eed:{c.instructions+=4;NFSU2_TR(0x729eed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B729eee:{NFSU2_TR(0x729eee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B729eef:{NFSU2_TR(0x729eef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B729ef0:{NFSU2_TR(0x729ef0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B729ef1:L729ef1:{c.instructions+=6;NFSU2_TR(0x729ef1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729ef2:{NFSU2_TR(0x729ef2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729ef3:{NFSU2_TR(0x729ef3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B729ef7:{NFSU2_TR(0x729ef7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B729ef9:{NFSU2_TR(0x729ef9);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+4),r1(R+12)));
w1(U+5,u8(u32(r1(U+4))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B729efb:{NFSU2_TR(0x729efb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L729f1b;}}
}
B729efd:L729efd:{c.instructions+=2;NFSU2_TR(0x729efd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729efe:{NFSU2_TR(0x729efe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B729f01:L729f01:{c.instructions+=4;NFSU2_TR(0x729f01);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B729f04:{NFSU2_TR(0x729f04);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729f08:{NFSU2_TR(0x729f08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729f09:{NFSU2_TR(0x729f09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729f0eull));
TAIL_STATIC(0x72d4acu,72d);
}
B729f0e:L729f0e:{c.instructions+=8;NFSU2_TR(0x729f0e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B729f11:{NFSU2_TR(0x729f11);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B729f12:{NFSU2_TR(0x729f12);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B729f13:{NFSU2_TR(0x729f13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729f14:{NFSU2_TR(0x729f14);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B729f15:{NFSU2_TR(0x729f15);
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
B729f17:{NFSU2_TR(0x729f17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729f18:{NFSU2_TR(0x729f18);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729f01u);}goto L729f01;}}
}
B729f1a:L729f1a:{c.instructions+=1;NFSU2_TR(0x729f1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B729f1b:L729f1b:{c.instructions+=3;NFSU2_TR(0x729f1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B729f1c:{NFSU2_TR(0x729f1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B729f1d:{NFSU2_TR(0x729f1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B729f1e:L729f1e:{c.instructions+=4;NFSU2_TR(0x729f1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B729f22:{NFSU2_TR(0x729f22);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B729f26:{NFSU2_TR(0x729f26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729f27:{NFSU2_TR(0x729f27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729f2cull));
TAIL_STATIC(0x72d548u,72d);
}
B729f2c:L729f2c:{c.instructions+=2;NFSU2_TR(0x729f2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729f2d:{NFSU2_TR(0x729f2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B729f2e:L729f2e:{c.instructions+=12;NFSU2_TR(0x729f2e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729f2f:{NFSU2_TR(0x729f2f);
__builtin_memmove((R+20),(R+16),4);
}
B729f31:{NFSU2_TR(0x729f31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729f32:{NFSU2_TR(0x729f32);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729f33:{NFSU2_TR(0x729f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B729f36:{NFSU2_TR(0x729f36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729f37:{NFSU2_TR(0x729f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B729f3a:{NFSU2_TR(0x729f3a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B729f3d:{NFSU2_TR(0x729f3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B729f41:{NFSU2_TR(0x729f41);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B729f43:{NFSU2_TR(0x729f43);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+12)),r1(U+0));
}
B729f45:{NFSU2_TR(0x729f45);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L729fcf;}}
}
B729f4b:L729f4b:{c.instructions+=5;NFSU2_TR(0x729f4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+0),(U+0),4);
}
B729f4e:{NFSU2_TR(0x729f4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729f4f:{NFSU2_TR(0x729f4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+28),(U+0),4);
}
B729f52:{NFSU2_TR(0x729f52);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B729f55:{NFSU2_TR(0x729f55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B729f58:L729f58:{c.instructions+=33;NFSU2_TR(0x729f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B729f5b:{NFSU2_TR(0x729f5b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+0),(U+0),2);
}
B729f5e:{NFSU2_TR(0x729f5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B729f61:{NFSU2_TR(0x729f61);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B729f65:{NFSU2_TR(0x729f65);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B729f69:{NFSU2_TR(0x729f69);
__builtin_memmove((R+4),gp(0x8b466c),4);
}
B729f6f:{NFSU2_TR(0x729f6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729f70:{NFSU2_TR(0x729f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B729f73:{NFSU2_TR(0x729f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B729f76:{NFSU2_TR(0x729f76);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B729f7b:{NFSU2_TR(0x729f7b);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+12)),r2(U+0));
}
B729f7e:{NFSU2_TR(0x729f7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B729f82:{NFSU2_TR(0x729f82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B729f85:{NFSU2_TR(0x729f85);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729f86:{NFSU2_TR(0x729f86);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B729f8a:{NFSU2_TR(0x729f8a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729f8c:{NFSU2_TR(0x729f8c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729f8e:{NFSU2_TR(0x729f8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729f91:{NFSU2_TR(0x729f91);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B729f94:{NFSU2_TR(0x729f94);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729f97:{NFSU2_TR(0x729f97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729f98:{NFSU2_TR(0x729f98);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729f99:{NFSU2_TR(0x729f99);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729f9c:{NFSU2_TR(0x729f9c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B729f9e:{NFSU2_TR(0x729f9e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B729fa0:{NFSU2_TR(0x729fa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B729fa2:{NFSU2_TR(0x729fa2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B729fa5:{NFSU2_TR(0x729fa5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B729fa9:{NFSU2_TR(0x729fa9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B729fac:{NFSU2_TR(0x729fac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729fad:{NFSU2_TR(0x729fad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729fae:{NFSU2_TR(0x729fae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729faf:{NFSU2_TR(0x729faf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729fb4ull));
TAIL_STATIC(0x728df9u,728);
}
B729fb4:L729fb4:{c.instructions+=10;NFSU2_TR(0x729fb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B729fb7:{NFSU2_TR(0x729fb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B729fbb:{NFSU2_TR(0x729fbb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(r1(U+0)));
}
B729fbe:{NFSU2_TR(0x729fbe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B729fc1:{NFSU2_TR(0x729fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B729fc4:{NFSU2_TR(0x729fc4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B729fc5:{NFSU2_TR(0x729fc5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B729fc6:{NFSU2_TR(0x729fc6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B729fc9:{NFSU2_TR(0x729fc9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B729fcc:{NFSU2_TR(0x729fcc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729f58u);}goto L729f58;}}
}
B729fce:L729fce:{c.instructions+=1;NFSU2_TR(0x729fce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B729fcf:L729fcf:{c.instructions+=6;NFSU2_TR(0x729fcf);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B729fd1:{NFSU2_TR(0x729fd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B729fd2:{NFSU2_TR(0x729fd2);
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
B729fd3:{NFSU2_TR(0x729fd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B729fd4:{NFSU2_TR(0x729fd4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B729fd5:{NFSU2_TR(0x729fd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B729fd6:L729fd6:{c.instructions+=6;NFSU2_TR(0x729fd6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729fd7:{NFSU2_TR(0x729fd7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729fd8:{NFSU2_TR(0x729fd8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B729fdc:{NFSU2_TR(0x729fdc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B729fde:{NFSU2_TR(0x729fde);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(U+1))<(r1(R+12))));
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B729fe0:{NFSU2_TR(0x729fe0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L729ffb;}}
}
B729fe2:L729fe2:{c.instructions+=2;NFSU2_TR(0x729fe2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729fe3:{NFSU2_TR(0x729fe3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B729fe6:L729fe6:{c.instructions+=3;NFSU2_TR(0x729fe6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B729fe9:{NFSU2_TR(0x729fe9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B729fea:{NFSU2_TR(0x729fea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x729fefull));
TAIL_STATIC(0x728f75u,728);
}
B729fef:L729fef:{c.instructions+=7;NFSU2_TR(0x729fef);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B729ff2:{NFSU2_TR(0x729ff2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B729ff3:{NFSU2_TR(0x729ff3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B729ff4:{NFSU2_TR(0x729ff4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B729ff5:{NFSU2_TR(0x729ff5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B729ff7:{NFSU2_TR(0x729ff7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B729ff8:{NFSU2_TR(0x729ff8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x729fe6u);}goto L729fe6;}}
}
B729ffa:L729ffa:{c.instructions+=1;NFSU2_TR(0x729ffa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B729ffb:L729ffb:{c.instructions+=4;NFSU2_TR(0x729ffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B729ffc:{NFSU2_TR(0x729ffc);
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
B729ffe:{NFSU2_TR(0x729ffe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B729fff:{NFSU2_TR(0x729fff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x729,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
