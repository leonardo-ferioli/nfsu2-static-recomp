#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_724(u8* __restrict R,Cpu& c);
u32 body_726(u8* __restrict R,Cpu& c);
u32 body_727(u8* __restrict R,Cpu& c);
u32 body_728(u8* __restrict R,Cpu& c);
u32 body_729(u8* __restrict R,Cpu& c);
u32 body_72a(u8* __restrict R,Cpu& c);
u32 body_770(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x725,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x725,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_725(u8* __restrict R,Cpu& c);
u32 page_725(Cpu& c){return body_725(c.regs.data(),c);}
__attribute__((noinline)) u32 body_725(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x725000:goto L725000;
case 0x725001:c.instructions+=2;goto B725001;
case 0x725003:c.instructions+=1;goto B725003;
case 0x725005:goto L725005;
case 0x725007:c.instructions+=2;goto B725007;
case 0x72500a:c.instructions+=1;goto B72500a;
case 0x72500c:goto L72500c;
case 0x72500d:c.instructions+=3;goto B72500d;
case 0x725011:c.instructions+=2;goto B725011;
case 0x725012:c.instructions+=1;goto B725012;
case 0x725017:goto L725017;
case 0x725018:c.instructions+=1;goto B725018;
case 0x725019:goto L725019;
case 0x72501a:c.instructions+=1;goto B72501a;
case 0x72501f:goto L72501f;
case 0x725020:c.instructions+=2;goto B725020;
case 0x725021:c.instructions+=1;goto B725021;
case 0x725022:goto L725022;
case 0x725026:c.instructions+=15;goto B725026;
case 0x72502a:c.instructions+=14;goto B72502a;
case 0x72502c:c.instructions+=13;goto B72502c;
case 0x725032:c.instructions+=12;goto B725032;
case 0x725038:c.instructions+=11;goto B725038;
case 0x725039:c.instructions+=10;goto B725039;
case 0x72503f:c.instructions+=9;goto B72503f;
case 0x725042:c.instructions+=8;goto B725042;
case 0x725045:c.instructions+=7;goto B725045;
case 0x725049:c.instructions+=6;goto B725049;
case 0x72504a:c.instructions+=5;goto B72504a;
case 0x72504b:c.instructions+=4;goto B72504b;
case 0x72504e:c.instructions+=3;goto B72504e;
case 0x725051:c.instructions+=2;goto B725051;
case 0x725054:c.instructions+=1;goto B725054;
case 0x725057:goto L725057;
case 0x72505a:c.instructions+=3;goto B72505a;
case 0x72505c:c.instructions+=2;goto B72505c;
case 0x72505d:c.instructions+=1;goto B72505d;
case 0x72505e:goto L72505e;
case 0x725062:c.instructions+=5;goto B725062;
case 0x725068:c.instructions+=4;goto B725068;
case 0x72506e:c.instructions+=3;goto B72506e;
case 0x725071:c.instructions+=2;goto B725071;
case 0x725073:c.instructions+=1;goto B725073;
case 0x725075:goto L725075;
case 0x725079:c.instructions+=2;goto B725079;
case 0x72507c:c.instructions+=1;goto B72507c;
case 0x72507e:goto L72507e;
case 0x72507f:c.instructions+=1;goto B72507f;
case 0x725080:goto L725080;
case 0x725081:goto L725081;
case 0x725085:c.instructions+=5;goto B725085;
case 0x72508b:c.instructions+=4;goto B72508b;
case 0x725091:c.instructions+=3;goto B725091;
case 0x725094:c.instructions+=2;goto B725094;
case 0x725096:c.instructions+=1;goto B725096;
case 0x725098:goto L725098;
case 0x72509c:c.instructions+=2;goto B72509c;
case 0x72509f:c.instructions+=1;goto B72509f;
case 0x7250a1:goto L7250a1;
case 0x7250a2:c.instructions+=1;goto B7250a2;
case 0x7250a3:goto L7250a3;
case 0x7250a4:goto L7250a4;
case 0x7250a6:c.instructions+=2;goto B7250a6;
case 0x7250aa:c.instructions+=1;goto B7250aa;
case 0x7250ac:goto L7250ac;
case 0x7250b4:c.instructions+=2;goto B7250b4;
case 0x7250b8:c.instructions+=1;goto B7250b8;
case 0x7250ba:goto L7250ba;
case 0x7250bb:c.instructions+=2;goto B7250bb;
case 0x7250bf:c.instructions+=1;goto B7250bf;
case 0x7250c1:goto L7250c1;
case 0x7250c3:c.instructions+=1;goto B7250c3;
case 0x7250c4:goto L7250c4;
case 0x7250c6:c.instructions+=2;goto B7250c6;
case 0x7250c7:c.instructions+=1;goto B7250c7;
case 0x7250c8:goto L7250c8;
case 0x7250c9:c.instructions+=10;goto B7250c9;
case 0x7250cb:c.instructions+=9;goto B7250cb;
case 0x7250ce:c.instructions+=8;goto B7250ce;
case 0x7250d1:c.instructions+=7;goto B7250d1;
case 0x7250d5:c.instructions+=6;goto B7250d5;
case 0x7250d7:c.instructions+=5;goto B7250d7;
case 0x7250d8:c.instructions+=4;goto B7250d8;
case 0x7250d9:c.instructions+=3;goto B7250d9;
case 0x7250da:c.instructions+=2;goto B7250da;
case 0x7250e1:c.instructions+=1;goto B7250e1;
case 0x7250e3:goto L7250e3;
case 0x7250e6:c.instructions+=3;goto B7250e6;
case 0x7250e8:c.instructions+=2;goto B7250e8;
case 0x7250ea:c.instructions+=1;goto B7250ea;
case 0x7250ef:goto L7250ef;
case 0x7250f1:goto L7250f1;
case 0x7250f3:goto L7250f3;
case 0x7250f6:goto L7250f6;
case 0x725100:c.instructions+=1;goto B725100;
case 0x725102:goto L725102;
case 0x725109:goto L725109;
case 0x72510b:c.instructions+=1;goto B72510b;
case 0x72510d:goto L72510d;
case 0x725110:goto L725110;
case 0x725113:c.instructions+=4;goto B725113;
case 0x725116:c.instructions+=3;goto B725116;
case 0x725119:c.instructions+=2;goto B725119;
case 0x72511b:c.instructions+=1;goto B72511b;
case 0x72511d:goto L72511d;
case 0x725123:c.instructions+=3;goto B725123;
case 0x725126:c.instructions+=2;goto B725126;
case 0x725129:c.instructions+=1;goto B725129;
case 0x72512d:goto L72512d;
case 0x725131:c.instructions+=1;goto B725131;
case 0x725133:goto L725133;
case 0x725136:c.instructions+=2;goto B725136;
case 0x725137:c.instructions+=1;goto B725137;
case 0x72513c:goto L72513c;
case 0x72513e:c.instructions+=3;goto B72513e;
case 0x72513f:c.instructions+=2;goto B72513f;
case 0x725140:c.instructions+=1;goto B725140;
case 0x725142:goto L725142;
case 0x725144:c.instructions+=2;goto B725144;
case 0x725146:c.instructions+=1;goto B725146;
case 0x725148:goto L725148;
case 0x72514a:c.instructions+=1;goto B72514a;
case 0x72514c:goto L72514c;
case 0x72514d:c.instructions+=3;goto B72514d;
case 0x725153:c.instructions+=2;goto B725153;
case 0x725156:c.instructions+=1;goto B725156;
case 0x725158:goto L725158;
case 0x72515a:c.instructions+=1;goto B72515a;
case 0x72515c:goto L72515c;
case 0x72515f:c.instructions+=2;goto B72515f;
case 0x725162:c.instructions+=1;goto B725162;
case 0x72516a:goto L72516a;
case 0x72516d:c.instructions+=1;goto B72516d;
case 0x72516f:goto L72516f;
case 0x725172:c.instructions+=2;goto B725172;
case 0x725175:c.instructions+=1;goto B725175;
case 0x72517a:goto L72517a;
case 0x725181:c.instructions+=2;goto B725181;
case 0x725184:c.instructions+=1;goto B725184;
case 0x725186:goto L725186;
case 0x725187:goto L725187;
case 0x72518a:c.instructions+=6;goto B72518a;
case 0x72518d:c.instructions+=5;goto B72518d;
case 0x72518f:c.instructions+=4;goto B72518f;
case 0x725192:c.instructions+=3;goto B725192;
case 0x725195:c.instructions+=2;goto B725195;
case 0x725198:c.instructions+=1;goto B725198;
case 0x72519a:goto L72519a;
case 0x7251a0:c.instructions+=3;goto B7251a0;
case 0x7251a3:c.instructions+=2;goto B7251a3;
case 0x7251a6:c.instructions+=1;goto B7251a6;
case 0x7251aa:goto L7251aa;
case 0x7251ad:c.instructions+=2;goto B7251ad;
case 0x7251ae:c.instructions+=1;goto B7251ae;
case 0x7251b3:goto L7251b3;
case 0x7251b5:c.instructions+=3;goto B7251b5;
case 0x7251b6:c.instructions+=2;goto B7251b6;
case 0x7251b7:c.instructions+=1;goto B7251b7;
case 0x7251b9:goto L7251b9;
case 0x7251bb:c.instructions+=2;goto B7251bb;
case 0x7251bd:c.instructions+=1;goto B7251bd;
case 0x7251bf:goto L7251bf;
case 0x7251c2:c.instructions+=2;goto B7251c2;
case 0x7251c5:c.instructions+=1;goto B7251c5;
case 0x7251c7:goto L7251c7;
case 0x7251ca:c.instructions+=2;goto B7251ca;
case 0x7251cd:c.instructions+=1;goto B7251cd;
case 0x7251cf:goto L7251cf;
case 0x7251d1:goto L7251d1;
case 0x7251d4:c.instructions+=2;goto B7251d4;
case 0x7251d6:c.instructions+=1;goto B7251d6;
case 0x7251d8:goto L7251d8;
case 0x7251da:goto L7251da;
case 0x7251dc:goto L7251dc;
case 0x7251dd:c.instructions+=3;goto B7251dd;
case 0x7251e3:c.instructions+=2;goto B7251e3;
case 0x7251e6:c.instructions+=1;goto B7251e6;
case 0x7251e8:goto L7251e8;
case 0x7251ea:c.instructions+=1;goto B7251ea;
case 0x7251ec:goto L7251ec;
case 0x7251ef:c.instructions+=5;goto B7251ef;
case 0x7251f7:c.instructions+=4;goto B7251f7;
case 0x7251f8:c.instructions+=3;goto B7251f8;
case 0x7251fb:c.instructions+=2;goto B7251fb;
case 0x7251fe:c.instructions+=1;goto B7251fe;
case 0x725200:goto L725200;
case 0x725203:c.instructions+=1;goto B725203;
case 0x725206:goto L725206;
case 0x725209:c.instructions+=1;goto B725209;
case 0x72520f:goto L72520f;
case 0x725212:c.instructions+=2;goto B725212;
case 0x725215:c.instructions+=1;goto B725215;
case 0x72521b:goto L72521b;
case 0x72521c:c.instructions+=1;goto B72521c;
case 0x72521f:goto L72521f;
case 0x725221:c.instructions+=4;goto B725221;
case 0x725223:c.instructions+=3;goto B725223;
case 0x725224:c.instructions+=2;goto B725224;
case 0x725227:c.instructions+=1;goto B725227;
case 0x725229:goto L725229;
case 0x725230:c.instructions+=5;goto B725230;
case 0x725233:c.instructions+=4;goto B725233;
case 0x72523a:c.instructions+=3;goto B72523a;
case 0x72523d:c.instructions+=2;goto B72523d;
case 0x725240:c.instructions+=1;goto B725240;
case 0x725242:goto L725242;
case 0x725245:c.instructions+=3;goto B725245;
case 0x725248:c.instructions+=2;goto B725248;
case 0x72524b:c.instructions+=1;goto B72524b;
case 0x72524d:goto L72524d;
case 0x72524e:c.instructions+=2;goto B72524e;
case 0x725251:c.instructions+=1;goto B725251;
case 0x725253:goto L725253;
case 0x725255:c.instructions+=1;goto B725255;
case 0x725257:goto L725257;
case 0x72525e:c.instructions+=8;goto B72525e;
case 0x725264:c.instructions+=7;goto B725264;
case 0x725267:c.instructions+=6;goto B725267;
case 0x725269:c.instructions+=5;goto B725269;
case 0x725270:c.instructions+=4;goto B725270;
case 0x725272:c.instructions+=3;goto B725272;
case 0x725275:c.instructions+=2;goto B725275;
case 0x725278:c.instructions+=1;goto B725278;
case 0x72527a:goto L72527a;
case 0x725282:c.instructions+=7;goto B725282;
case 0x725285:c.instructions+=6;goto B725285;
case 0x72528a:c.instructions+=5;goto B72528a;
case 0x72528d:c.instructions+=4;goto B72528d;
case 0x72528f:c.instructions+=3;goto B72528f;
case 0x725293:c.instructions+=2;goto B725293;
case 0x725295:c.instructions+=1;goto B725295;
case 0x725297:goto L725297;
case 0x725299:c.instructions+=1;goto B725299;
case 0x72529b:goto L72529b;
case 0x72529f:c.instructions+=3;goto B72529f;
case 0x7252a2:c.instructions+=2;goto B7252a2;
case 0x7252a5:c.instructions+=1;goto B7252a5;
case 0x7252a8:goto L7252a8;
case 0x7252a9:c.instructions+=1;goto B7252a9;
case 0x7252ae:goto L7252ae;
case 0x7252af:goto L7252af;
case 0x7252b3:c.instructions+=7;goto B7252b3;
case 0x7252b8:c.instructions+=6;goto B7252b8;
case 0x7252bb:c.instructions+=5;goto B7252bb;
case 0x7252be:c.instructions+=4;goto B7252be;
case 0x7252bf:c.instructions+=3;goto B7252bf;
case 0x7252c2:c.instructions+=2;goto B7252c2;
case 0x7252c5:c.instructions+=1;goto B7252c5;
case 0x7252c7:goto L7252c7;
case 0x7252ce:c.instructions+=20;goto B7252ce;
case 0x7252d0:c.instructions+=19;goto B7252d0;
case 0x7252d6:c.instructions+=18;goto B7252d6;
case 0x7252d9:c.instructions+=17;goto B7252d9;
case 0x7252dc:c.instructions+=16;goto B7252dc;
case 0x7252df:c.instructions+=15;goto B7252df;
case 0x7252e5:c.instructions+=14;goto B7252e5;
case 0x7252eb:c.instructions+=13;goto B7252eb;
case 0x7252ee:c.instructions+=12;goto B7252ee;
case 0x7252f1:c.instructions+=11;goto B7252f1;
case 0x7252f4:c.instructions+=10;goto B7252f4;
case 0x7252f9:c.instructions+=9;goto B7252f9;
case 0x725300:c.instructions+=8;goto B725300;
case 0x725306:c.instructions+=7;goto B725306;
case 0x725309:c.instructions+=6;goto B725309;
case 0x72530c:c.instructions+=5;goto B72530c;
case 0x725312:c.instructions+=4;goto B725312;
case 0x725314:c.instructions+=3;goto B725314;
case 0x725315:c.instructions+=2;goto B725315;
case 0x725318:c.instructions+=1;goto B725318;
case 0x72531a:goto L72531a;
case 0x725321:c.instructions+=20;goto B725321;
case 0x725327:c.instructions+=19;goto B725327;
case 0x72532a:c.instructions+=18;goto B72532a;
case 0x725331:c.instructions+=17;goto B725331;
case 0x725334:c.instructions+=16;goto B725334;
case 0x725337:c.instructions+=15;goto B725337;
case 0x72533c:c.instructions+=14;goto B72533c;
case 0x72533f:c.instructions+=13;goto B72533f;
case 0x725345:c.instructions+=12;goto B725345;
case 0x725348:c.instructions+=11;goto B725348;
case 0x72534b:c.instructions+=10;goto B72534b;
case 0x72534f:c.instructions+=9;goto B72534f;
case 0x725352:c.instructions+=8;goto B725352;
case 0x725359:c.instructions+=7;goto B725359;
case 0x72535f:c.instructions+=6;goto B72535f;
case 0x725362:c.instructions+=5;goto B725362;
case 0x725365:c.instructions+=4;goto B725365;
case 0x725366:c.instructions+=3;goto B725366;
case 0x725369:c.instructions+=2;goto B725369;
case 0x72536e:c.instructions+=1;goto B72536e;
case 0x725370:goto L725370;
case 0x725373:c.instructions+=5;goto B725373;
case 0x725374:c.instructions+=4;goto B725374;
case 0x725375:c.instructions+=3;goto B725375;
case 0x725376:c.instructions+=2;goto B725376;
case 0x725377:c.instructions+=1;goto B725377;
case 0x725378:goto L725378;
case 0x725379:c.instructions+=17;goto B725379;
case 0x72537b:c.instructions+=16;goto B72537b;
case 0x72537e:c.instructions+=15;goto B72537e;
case 0x725384:c.instructions+=14;goto B725384;
case 0x725388:c.instructions+=13;goto B725388;
case 0x725389:c.instructions+=12;goto B725389;
case 0x72538c:c.instructions+=11;goto B72538c;
case 0x72538f:c.instructions+=10;goto B72538f;
case 0x725392:c.instructions+=9;goto B725392;
case 0x725394:c.instructions+=8;goto B725394;
case 0x725397:c.instructions+=7;goto B725397;
case 0x725398:c.instructions+=6;goto B725398;
case 0x72539b:c.instructions+=5;goto B72539b;
case 0x72539c:c.instructions+=4;goto B72539c;
case 0x72539f:c.instructions+=3;goto B72539f;
case 0x7253a1:c.instructions+=2;goto B7253a1;
case 0x7253a4:c.instructions+=1;goto B7253a4;
case 0x7253aa:goto L7253aa;
case 0x7253b1:c.instructions+=3;goto B7253b1;
case 0x7253b5:c.instructions+=2;goto B7253b5;
case 0x7253b7:c.instructions+=1;goto B7253b7;
case 0x7253b9:goto L7253b9;
case 0x7253bc:goto L7253bc;
case 0x7253c0:c.instructions+=2;goto B7253c0;
case 0x7253c3:c.instructions+=1;goto B7253c3;
case 0x7253c5:goto L7253c5;
case 0x7253c7:c.instructions+=2;goto B7253c7;
case 0x7253ca:c.instructions+=1;goto B7253ca;
case 0x7253cc:goto L7253cc;
case 0x7253ce:c.instructions+=1;goto B7253ce;
case 0x7253d0:goto L7253d0;
case 0x7253d3:c.instructions+=2;goto B7253d3;
case 0x7253d6:c.instructions+=1;goto B7253d6;
case 0x7253d8:goto L7253d8;
case 0x7253db:goto L7253db;
case 0x7253e2:c.instructions+=4;goto B7253e2;
case 0x7253e5:c.instructions+=3;goto B7253e5;
case 0x7253eb:c.instructions+=2;goto B7253eb;
case 0x7253ee:c.instructions+=1;goto B7253ee;
case 0x7253f0:goto L7253f0;
case 0x7253f3:goto L7253f3;
case 0x7253f7:c.instructions+=1;goto B7253f7;
case 0x7253f9:goto L7253f9;
case 0x7253fc:c.instructions+=5;goto B7253fc;
case 0x7253ff:c.instructions+=4;goto B7253ff;
case 0x725403:c.instructions+=3;goto B725403;
case 0x725405:c.instructions+=2;goto B725405;
case 0x725408:c.instructions+=1;goto B725408;
case 0x72540a:goto L72540a;
case 0x72540c:c.instructions+=1;goto B72540c;
case 0x72540e:goto L72540e;
case 0x725412:c.instructions+=1;goto B725412;
case 0x725414:goto L725414;
case 0x725418:c.instructions+=14;goto B725418;
case 0x72541c:c.instructions+=13;goto B72541c;
case 0x725420:c.instructions+=12;goto B725420;
case 0x725426:c.instructions+=11;goto B725426;
case 0x725429:c.instructions+=10;goto B725429;
case 0x72542e:c.instructions+=9;goto B72542e;
case 0x725433:c.instructions+=8;goto B725433;
case 0x725438:c.instructions+=7;goto B725438;
case 0x72543d:c.instructions+=6;goto B72543d;
case 0x725442:c.instructions+=5;goto B725442;
case 0x725447:c.instructions+=4;goto B725447;
case 0x72544c:c.instructions+=3;goto B72544c;
case 0x725452:c.instructions+=2;goto B725452;
case 0x725456:c.instructions+=1;goto B725456;
case 0x725458:goto L725458;
case 0x72545b:c.instructions+=1;goto B72545b;
case 0x72545d:goto L72545d;
case 0x72545f:c.instructions+=1;goto B72545f;
case 0x725461:goto L725461;
case 0x725464:c.instructions+=1;goto B725464;
case 0x725466:goto L725466;
case 0x72546a:c.instructions+=4;goto B72546a;
case 0x72546e:c.instructions+=3;goto B72546e;
case 0x725472:c.instructions+=2;goto B725472;
case 0x725478:c.instructions+=1;goto B725478;
case 0x72547b:goto L72547b;
case 0x72547c:c.instructions+=4;goto B72547c;
case 0x72547d:c.instructions+=3;goto B72547d;
case 0x72547e:c.instructions+=2;goto B72547e;
case 0x72547f:c.instructions+=1;goto B72547f;
case 0x725480:goto L725480;
case 0x725484:c.instructions+=2;goto B725484;
case 0x725486:c.instructions+=1;goto B725486;
case 0x725488:goto L725488;
case 0x72548f:c.instructions+=4;goto B72548f;
case 0x725491:c.instructions+=3;goto B725491;
case 0x725496:c.instructions+=2;goto B725496;
case 0x725498:c.instructions+=1;goto B725498;
case 0x72549a:goto L72549a;
case 0x72549d:c.instructions+=4;goto B72549d;
case 0x7254a0:c.instructions+=3;goto B7254a0;
case 0x7254a6:c.instructions+=2;goto B7254a6;
case 0x7254aa:c.instructions+=1;goto B7254aa;
case 0x7254ac:goto L7254ac;
case 0x7254ae:c.instructions+=1;goto B7254ae;
case 0x7254b0:goto L7254b0;
case 0x7254b2:c.instructions+=1;goto B7254b2;
case 0x7254b3:goto L7254b3;
case 0x7254b4:goto L7254b4;
case 0x7254b8:c.instructions+=4;goto B7254b8;
case 0x7254be:c.instructions+=3;goto B7254be;
case 0x7254c4:c.instructions+=2;goto B7254c4;
case 0x7254c7:c.instructions+=1;goto B7254c7;
case 0x7254cd:goto L7254cd;
case 0x7254ce:c.instructions+=1;goto B7254ce;
case 0x7254cf:goto L7254cf;
case 0x7254d3:c.instructions+=6;goto B7254d3;
case 0x7254d5:c.instructions+=5;goto B7254d5;
case 0x7254d8:c.instructions+=4;goto B7254d8;
case 0x7254db:c.instructions+=3;goto B7254db;
case 0x7254e1:c.instructions+=2;goto B7254e1;
case 0x7254e3:c.instructions+=1;goto B7254e3;
case 0x7254e5:goto L7254e5;
case 0x7254ed:c.instructions+=1;goto B7254ed;
case 0x7254ee:goto L7254ee;
case 0x7254f1:c.instructions+=1;goto B7254f1;
case 0x7254f3:goto L7254f3;
case 0x7254f6:c.instructions+=4;goto B7254f6;
case 0x7254fb:c.instructions+=3;goto B7254fb;
case 0x7254fd:c.instructions+=2;goto B7254fd;
case 0x725500:c.instructions+=1;goto B725500;
case 0x725501:goto L725501;
case 0x725504:c.instructions+=1;goto B725504;
case 0x725506:goto L725506;
case 0x72550e:c.instructions+=1;goto B72550e;
case 0x725510:goto L725510;
case 0x725513:c.instructions+=3;goto B725513;
case 0x725518:c.instructions+=2;goto B725518;
case 0x72551a:c.instructions+=1;goto B72551a;
case 0x72551d:goto L72551d;
case 0x72551f:c.instructions+=1;goto B72551f;
case 0x725520:goto L725520;
case 0x725527:c.instructions+=1;goto B725527;
case 0x725529:goto L725529;
case 0x725530:c.instructions+=1;goto B725530;
case 0x725531:goto L725531;
case 0x725536:c.instructions+=2;goto B725536;
case 0x725538:c.instructions+=1;goto B725538;
case 0x72553a:goto L72553a;
case 0x72553b:goto L72553b;
case 0x72553e:c.instructions+=2;goto B72553e;
case 0x725540:c.instructions+=1;goto B725540;
case 0x725543:goto L725543;
case 0x725545:c.instructions+=3;goto B725545;
case 0x725546:c.instructions+=2;goto B725546;
case 0x725548:c.instructions+=1;goto B725548;
case 0x72554a:goto L72554a;
case 0x72554b:goto L72554b;
case 0x72554c:goto L72554c;
case 0x72554d:c.instructions+=20;goto B72554d;
case 0x72554f:c.instructions+=19;goto B72554f;
case 0x725555:c.instructions+=18;goto B725555;
case 0x725556:c.instructions+=17;goto B725556;
case 0x725559:c.instructions+=16;goto B725559;
case 0x72555a:c.instructions+=15;goto B72555a;
case 0x72555c:c.instructions+=14;goto B72555c;
case 0x72555f:c.instructions+=13;goto B72555f;
case 0x725561:c.instructions+=12;goto B725561;
case 0x725563:c.instructions+=11;goto B725563;
case 0x725566:c.instructions+=10;goto B725566;
case 0x725568:c.instructions+=9;goto B725568;
case 0x72556a:c.instructions+=8;goto B72556a;
case 0x72556c:c.instructions+=7;goto B72556c;
case 0x725572:c.instructions+=6;goto B725572;
case 0x725575:c.instructions+=5;goto B725575;
case 0x725577:c.instructions+=4;goto B725577;
case 0x725579:c.instructions+=3;goto B725579;
case 0x72557c:c.instructions+=2;goto B72557c;
case 0x72557f:c.instructions+=1;goto B72557f;
case 0x725584:goto L725584;
case 0x725587:c.instructions+=4;goto B725587;
case 0x725589:c.instructions+=3;goto B725589;
case 0x72558c:c.instructions+=2;goto B72558c;
case 0x72558f:c.instructions+=1;goto B72558f;
case 0x725594:goto L725594;
case 0x725595:c.instructions+=4;goto B725595;
case 0x725598:c.instructions+=3;goto B725598;
case 0x725599:c.instructions+=2;goto B725599;
case 0x72559a:c.instructions+=1;goto B72559a;
case 0x72559b:goto L72559b;
case 0x72559c:c.instructions+=6;goto B72559c;
case 0x72559e:c.instructions+=5;goto B72559e;
case 0x7255a1:c.instructions+=4;goto B7255a1;
case 0x7255a2:c.instructions+=3;goto B7255a2;
case 0x7255a3:c.instructions+=2;goto B7255a3;
case 0x7255a4:c.instructions+=1;goto B7255a4;
case 0x7255a9:goto L7255a9;
case 0x7255b0:c.instructions+=3;goto B7255b0;
case 0x7255b3:c.instructions+=2;goto B7255b3;
case 0x7255b4:c.instructions+=1;goto B7255b4;
case 0x7255b9:goto L7255b9;
case 0x7255ba:c.instructions+=2;goto B7255ba;
case 0x7255bf:c.instructions+=1;goto B7255bf;
case 0x7255c4:goto L7255c4;
case 0x7255ca:c.instructions+=4;goto B7255ca;
case 0x7255cd:c.instructions+=3;goto B7255cd;
case 0x7255cf:c.instructions+=2;goto B7255cf;
case 0x7255d1:c.instructions+=1;goto B7255d1;
case 0x7255d3:goto L7255d3;
case 0x7255d9:goto L7255d9;
case 0x7255e0:c.instructions+=4;goto B7255e0;
case 0x7255e1:c.instructions+=3;goto B7255e1;
case 0x7255e7:c.instructions+=2;goto B7255e7;
case 0x7255e9:c.instructions+=1;goto B7255e9;
case 0x7255eb:goto L7255eb;
case 0x7255ed:c.instructions+=1;goto B7255ed;
case 0x7255ef:goto L7255ef;
case 0x7255f5:goto L7255f5;
case 0x7255f7:c.instructions+=8;goto B7255f7;
case 0x7255fa:c.instructions+=7;goto B7255fa;
case 0x7255fc:c.instructions+=6;goto B7255fc;
case 0x7255ff:c.instructions+=5;goto B7255ff;
case 0x725602:c.instructions+=4;goto B725602;
case 0x725605:c.instructions+=3;goto B725605;
case 0x72560b:c.instructions+=2;goto B72560b;
case 0x72560e:c.instructions+=1;goto B72560e;
case 0x725610:goto L725610;
case 0x725615:c.instructions+=2;goto B725615;
case 0x725619:c.instructions+=1;goto B725619;
case 0x72561e:goto L72561e;
case 0x725620:c.instructions+=2;goto B725620;
case 0x725622:c.instructions+=1;goto B725622;
case 0x725624:goto L725624;
case 0x72562b:c.instructions+=5;goto B72562b;
case 0x72562f:c.instructions+=4;goto B72562f;
case 0x725636:c.instructions+=3;goto B725636;
case 0x725637:c.instructions+=2;goto B725637;
case 0x725639:c.instructions+=1;goto B725639;
case 0x72563b:goto L72563b;
case 0x725641:goto L725641;
case 0x725644:c.instructions+=5;goto B725644;
case 0x72564a:c.instructions+=4;goto B72564a;
case 0x72564d:c.instructions+=3;goto B72564d;
case 0x72564f:c.instructions+=2;goto B72564f;
case 0x725652:c.instructions+=1;goto B725652;
case 0x725658:goto L725658;
case 0x72565b:c.instructions+=3;goto B72565b;
case 0x72565e:c.instructions+=2;goto B72565e;
case 0x725662:c.instructions+=1;goto B725662;
case 0x725664:goto L725664;
case 0x72566a:c.instructions+=6;goto B72566a;
case 0x72566d:c.instructions+=5;goto B72566d;
case 0x725671:c.instructions+=4;goto B725671;
case 0x725677:c.instructions+=3;goto B725677;
case 0x72567a:c.instructions+=2;goto B72567a;
case 0x72567b:c.instructions+=1;goto B72567b;
case 0x725680:goto L725680;
case 0x725683:c.instructions+=17;goto B725683;
case 0x725689:c.instructions+=16;goto B725689;
case 0x72568c:c.instructions+=15;goto B72568c;
case 0x72568f:c.instructions+=14;goto B72568f;
case 0x725692:c.instructions+=13;goto B725692;
case 0x725695:c.instructions+=12;goto B725695;
case 0x725698:c.instructions+=11;goto B725698;
case 0x72569b:c.instructions+=10;goto B72569b;
case 0x7256a1:c.instructions+=9;goto B7256a1;
case 0x7256a7:c.instructions+=8;goto B7256a7;
case 0x7256aa:c.instructions+=7;goto B7256aa;
case 0x7256ad:c.instructions+=6;goto B7256ad;
case 0x7256b0:c.instructions+=5;goto B7256b0;
case 0x7256b3:c.instructions+=4;goto B7256b3;
case 0x7256b6:c.instructions+=3;goto B7256b6;
case 0x7256bc:c.instructions+=2;goto B7256bc;
case 0x7256bf:c.instructions+=1;goto B7256bf;
case 0x7256c4:goto L7256c4;
case 0x7256ca:c.instructions+=9;goto B7256ca;
case 0x7256cd:c.instructions+=8;goto B7256cd;
case 0x7256d4:c.instructions+=7;goto B7256d4;
case 0x7256d7:c.instructions+=6;goto B7256d7;
case 0x7256dd:c.instructions+=5;goto B7256dd;
case 0x7256e1:c.instructions+=4;goto B7256e1;
case 0x7256e7:c.instructions+=3;goto B7256e7;
case 0x7256ea:c.instructions+=2;goto B7256ea;
case 0x7256eb:c.instructions+=1;goto B7256eb;
case 0x7256f0:goto L7256f0;
case 0x7256f3:c.instructions+=14;goto B7256f3;
case 0x7256f9:c.instructions+=13;goto B7256f9;
case 0x7256fc:c.instructions+=12;goto B7256fc;
case 0x7256ff:c.instructions+=11;goto B7256ff;
case 0x725702:c.instructions+=10;goto B725702;
case 0x725705:c.instructions+=9;goto B725705;
case 0x725708:c.instructions+=8;goto B725708;
case 0x72570b:c.instructions+=7;goto B72570b;
case 0x725711:c.instructions+=6;goto B725711;
case 0x725717:c.instructions+=5;goto B725717;
case 0x72571a:c.instructions+=4;goto B72571a;
case 0x72571d:c.instructions+=3;goto B72571d;
case 0x725720:c.instructions+=2;goto B725720;
case 0x725723:c.instructions+=1;goto B725723;
case 0x725726:goto L725726;
case 0x72572d:c.instructions+=3;goto B72572d;
case 0x725734:c.instructions+=2;goto B725734;
case 0x725737:c.instructions+=1;goto B725737;
case 0x72573c:goto L72573c;
case 0x72573f:c.instructions+=5;goto B72573f;
case 0x725746:c.instructions+=4;goto B725746;
case 0x725748:c.instructions+=3;goto B725748;
case 0x72574a:c.instructions+=2;goto B72574a;
case 0x72574d:c.instructions+=1;goto B72574d;
case 0x72574f:goto L72574f;
case 0x725755:c.instructions+=13;goto B725755;
case 0x725758:c.instructions+=12;goto B725758;
case 0x72575b:c.instructions+=11;goto B72575b;
case 0x72575e:c.instructions+=10;goto B72575e;
case 0x725764:c.instructions+=9;goto B725764;
case 0x725768:c.instructions+=8;goto B725768;
case 0x72576e:c.instructions+=7;goto B72576e;
case 0x725770:c.instructions+=6;goto B725770;
case 0x725776:c.instructions+=5;goto B725776;
case 0x72577a:c.instructions+=4;goto B72577a;
case 0x725780:c.instructions+=3;goto B725780;
case 0x725783:c.instructions+=2;goto B725783;
case 0x725784:c.instructions+=1;goto B725784;
case 0x725789:goto L725789;
case 0x72578c:c.instructions+=15;goto B72578c;
case 0x725792:c.instructions+=14;goto B725792;
case 0x725795:c.instructions+=13;goto B725795;
case 0x725798:c.instructions+=12;goto B725798;
case 0x72579b:c.instructions+=11;goto B72579b;
case 0x72579e:c.instructions+=10;goto B72579e;
case 0x7257a1:c.instructions+=9;goto B7257a1;
case 0x7257a4:c.instructions+=8;goto B7257a4;
case 0x7257aa:c.instructions+=7;goto B7257aa;
case 0x7257b0:c.instructions+=6;goto B7257b0;
case 0x7257b3:c.instructions+=5;goto B7257b3;
case 0x7257b6:c.instructions+=4;goto B7257b6;
case 0x7257b9:c.instructions+=3;goto B7257b9;
case 0x7257bc:c.instructions+=2;goto B7257bc;
case 0x7257bf:c.instructions+=1;goto B7257bf;
case 0x7257c4:goto L7257c4;
case 0x7257c6:c.instructions+=2;goto B7257c6;
case 0x7257c8:c.instructions+=1;goto B7257c8;
case 0x7257ce:goto L7257ce;
case 0x7257d1:c.instructions+=6;goto B7257d1;
case 0x7257d3:c.instructions+=5;goto B7257d3;
case 0x7257d6:c.instructions+=4;goto B7257d6;
case 0x7257dc:c.instructions+=3;goto B7257dc;
case 0x7257de:c.instructions+=2;goto B7257de;
case 0x7257e1:c.instructions+=1;goto B7257e1;
case 0x7257e3:goto L7257e3;
case 0x7257e6:c.instructions+=5;goto B7257e6;
case 0x7257ec:c.instructions+=4;goto B7257ec;
case 0x7257ee:c.instructions+=3;goto B7257ee;
case 0x7257f0:c.instructions+=2;goto B7257f0;
case 0x7257f3:c.instructions+=1;goto B7257f3;
case 0x7257f5:goto L7257f5;
case 0x7257f8:c.instructions+=9;goto B7257f8;
case 0x7257fb:c.instructions+=8;goto B7257fb;
case 0x7257ff:c.instructions+=7;goto B7257ff;
case 0x725802:c.instructions+=6;goto B725802;
case 0x725804:c.instructions+=5;goto B725804;
case 0x725808:c.instructions+=4;goto B725808;
case 0x72580e:c.instructions+=3;goto B72580e;
case 0x725811:c.instructions+=2;goto B725811;
case 0x725812:c.instructions+=1;goto B725812;
case 0x725817:goto L725817;
case 0x72581a:c.instructions+=16;goto B72581a;
case 0x725820:c.instructions+=15;goto B725820;
case 0x725823:c.instructions+=14;goto B725823;
case 0x725826:c.instructions+=13;goto B725826;
case 0x725829:c.instructions+=12;goto B725829;
case 0x72582c:c.instructions+=11;goto B72582c;
case 0x72582f:c.instructions+=10;goto B72582f;
case 0x725835:c.instructions+=9;goto B725835;
case 0x72583b:c.instructions+=8;goto B72583b;
case 0x72583e:c.instructions+=7;goto B72583e;
case 0x725841:c.instructions+=6;goto B725841;
case 0x725844:c.instructions+=5;goto B725844;
case 0x725847:c.instructions+=4;goto B725847;
case 0x72584a:c.instructions+=3;goto B72584a;
case 0x725850:c.instructions+=2;goto B725850;
case 0x725853:c.instructions+=1;goto B725853;
case 0x725856:goto L725856;
case 0x72585d:c.instructions+=3;goto B72585d;
case 0x72585e:c.instructions+=2;goto B72585e;
case 0x725860:c.instructions+=1;goto B725860;
case 0x725866:goto L725866;
case 0x725867:c.instructions+=2;goto B725867;
case 0x72586d:c.instructions+=1;goto B72586d;
case 0x725873:goto L725873;
case 0x725874:c.instructions+=4;goto B725874;
case 0x725875:c.instructions+=3;goto B725875;
case 0x725876:c.instructions+=2;goto B725876;
case 0x725877:c.instructions+=1;goto B725877;
case 0x725878:goto L725878;
case 0x725879:c.instructions+=8;goto B725879;
case 0x72587b:c.instructions+=7;goto B72587b;
case 0x72587f:c.instructions+=6;goto B72587f;
case 0x725880:c.instructions+=5;goto B725880;
case 0x725882:c.instructions+=4;goto B725882;
case 0x725889:c.instructions+=3;goto B725889;
case 0x72588a:c.instructions+=2;goto B72588a;
case 0x72588d:c.instructions+=1;goto B72588d;
case 0x72588f:goto L72588f;
case 0x725894:c.instructions+=3;goto B725894;
case 0x725896:c.instructions+=2;goto B725896;
case 0x725898:c.instructions+=1;goto B725898;
case 0x725899:goto L725899;
case 0x72589c:c.instructions+=10;goto B72589c;
case 0x7258a0:c.instructions+=9;goto B7258a0;
case 0x7258a3:c.instructions+=8;goto B7258a3;
case 0x7258a4:c.instructions+=7;goto B7258a4;
case 0x7258a7:c.instructions+=6;goto B7258a7;
case 0x7258ad:c.instructions+=5;goto B7258ad;
case 0x7258af:c.instructions+=4;goto B7258af;
case 0x7258b6:c.instructions+=3;goto B7258b6;
case 0x7258b9:c.instructions+=2;goto B7258b9;
case 0x7258bb:c.instructions+=1;goto B7258bb;
case 0x7258bd:goto L7258bd;
case 0x7258be:goto L7258be;
case 0x7258c5:c.instructions+=1;goto B7258c5;
case 0x7258c7:goto L7258c7;
case 0x7258c9:c.instructions+=1;goto B7258c9;
case 0x7258cc:goto L7258cc;
case 0x7258cd:c.instructions+=3;goto B7258cd;
case 0x7258ce:c.instructions+=2;goto B7258ce;
case 0x7258cf:c.instructions+=1;goto B7258cf;
case 0x7258d0:goto L7258d0;
case 0x7258d5:goto L7258d5;
case 0x7258db:c.instructions+=1;goto B7258db;
case 0x7258e0:goto L7258e0;
case 0x7258e1:c.instructions+=1;goto B7258e1;
case 0x7258e6:goto L7258e6;
case 0x7258eb:c.instructions+=5;goto B7258eb;
case 0x7258ed:c.instructions+=4;goto B7258ed;
case 0x7258ee:c.instructions+=3;goto B7258ee;
case 0x7258f0:c.instructions+=2;goto B7258f0;
case 0x7258f2:c.instructions+=1;goto B7258f2;
case 0x7258f4:goto L7258f4;
case 0x7258fa:c.instructions+=1;goto B7258fa;
case 0x7258ff:goto L7258ff;
case 0x725901:c.instructions+=1;goto B725901;
case 0x725903:goto L725903;
case 0x725909:c.instructions+=3;goto B725909;
case 0x725913:c.instructions+=2;goto B725913;
case 0x72591d:c.instructions+=1;goto B72591d;
case 0x72591f:goto L72591f;
case 0x725921:c.instructions+=1;goto B725921;
case 0x725923:goto L725923;
case 0x72592d:c.instructions+=5;goto B72592d;
case 0x725937:c.instructions+=4;goto B725937;
case 0x725941:c.instructions+=3;goto B725941;
case 0x72594b:c.instructions+=2;goto B72594b;
case 0x725955:c.instructions+=1;goto B725955;
case 0x725957:goto L725957;
case 0x725959:c.instructions+=1;goto B725959;
case 0x72595b:goto L72595b;
case 0x725965:c.instructions+=4;goto B725965;
case 0x72596f:c.instructions+=3;goto B72596f;
case 0x725979:c.instructions+=2;goto B725979;
case 0x725983:c.instructions+=1;goto B725983;
case 0x72598d:goto L72598d;
case 0x72598f:c.instructions+=1;goto B72598f;
case 0x725995:goto L725995;
case 0x72599c:c.instructions+=1;goto B72599c;
case 0x72599e:goto L72599e;
case 0x7259a7:c.instructions+=2;goto B7259a7;
case 0x7259b0:c.instructions+=1;goto B7259b0;
case 0x7259b2:goto L7259b2;
case 0x7259bb:c.instructions+=1;goto B7259bb;
case 0x7259c4:goto L7259c4;
case 0x7259ca:c.instructions+=21;goto B7259ca;
case 0x7259d0:c.instructions+=20;goto B7259d0;
case 0x7259d6:c.instructions+=19;goto B7259d6;
case 0x7259dc:c.instructions+=18;goto B7259dc;
case 0x7259e2:c.instructions+=17;goto B7259e2;
case 0x7259e8:c.instructions+=16;goto B7259e8;
case 0x7259f1:c.instructions+=15;goto B7259f1;
case 0x7259fa:c.instructions+=14;goto B7259fa;
case 0x725a03:c.instructions+=13;goto B725a03;
case 0x725a0c:c.instructions+=12;goto B725a0c;
case 0x725a15:c.instructions+=11;goto B725a15;
case 0x725a1c:c.instructions+=10;goto B725a1c;
case 0x725a25:c.instructions+=9;goto B725a25;
case 0x725a2e:c.instructions+=8;goto B725a2e;
case 0x725a37:c.instructions+=7;goto B725a37;
case 0x725a40:c.instructions+=6;goto B725a40;
case 0x725a47:c.instructions+=5;goto B725a47;
case 0x725a50:c.instructions+=4;goto B725a50;
case 0x725a59:c.instructions+=3;goto B725a59;
case 0x725a62:c.instructions+=2;goto B725a62;
case 0x725a69:c.instructions+=1;goto B725a69;
case 0x725a6a:goto L725a6a;
case 0x725a71:c.instructions+=1;goto B725a71;
case 0x725a73:goto L725a73;
case 0x725a75:c.instructions+=1;goto B725a75;
case 0x725a7b:goto L725a7b;
case 0x725a82:c.instructions+=1;goto B725a82;
case 0x725a84:goto L725a84;
case 0x725a85:goto L725a85;
case 0x725a86:c.instructions+=28;goto B725a86;
case 0x725a88:c.instructions+=27;goto B725a88;
case 0x725a8b:c.instructions+=26;goto B725a8b;
case 0x725a8e:c.instructions+=25;goto B725a8e;
case 0x725a91:c.instructions+=24;goto B725a91;
case 0x725a92:c.instructions+=23;goto B725a92;
case 0x725a95:c.instructions+=22;goto B725a95;
case 0x725a99:c.instructions+=21;goto B725a99;
case 0x725a9c:c.instructions+=20;goto B725a9c;
case 0x725aa2:c.instructions+=19;goto B725aa2;
case 0x725aa5:c.instructions+=18;goto B725aa5;
case 0x725aa8:c.instructions+=17;goto B725aa8;
case 0x725aa9:c.instructions+=16;goto B725aa9;
case 0x725aaf:c.instructions+=15;goto B725aaf;
case 0x725ab3:c.instructions+=14;goto B725ab3;
case 0x725ab9:c.instructions+=13;goto B725ab9;
case 0x725abc:c.instructions+=12;goto B725abc;
case 0x725abf:c.instructions+=11;goto B725abf;
case 0x725ac5:c.instructions+=10;goto B725ac5;
case 0x725acb:c.instructions+=9;goto B725acb;
case 0x725ad0:c.instructions+=8;goto B725ad0;
case 0x725ad3:c.instructions+=7;goto B725ad3;
case 0x725ad4:c.instructions+=6;goto B725ad4;
case 0x725ad5:c.instructions+=5;goto B725ad5;
case 0x725ad6:c.instructions+=4;goto B725ad6;
case 0x725ad7:c.instructions+=3;goto B725ad7;
case 0x725ad9:c.instructions+=2;goto B725ad9;
case 0x725add:c.instructions+=1;goto B725add;
case 0x725adf:goto L725adf;
case 0x725ae6:c.instructions+=1;goto B725ae6;
case 0x725ae8:goto L725ae8;
case 0x725aec:c.instructions+=1;goto B725aec;
case 0x725aee:goto L725aee;
case 0x725af5:c.instructions+=1;goto B725af5;
case 0x725af7:goto L725af7;
case 0x725afb:c.instructions+=1;goto B725afb;
case 0x725afd:goto L725afd;
case 0x725b03:c.instructions+=1;goto B725b03;
case 0x725b07:goto L725b07;
case 0x725b0c:c.instructions+=5;goto B725b0c;
case 0x725b0e:c.instructions+=4;goto B725b0e;
case 0x725b11:c.instructions+=3;goto B725b11;
case 0x725b12:c.instructions+=2;goto B725b12;
case 0x725b13:c.instructions+=1;goto B725b13;
case 0x725b16:goto L725b16;
case 0x725b18:c.instructions+=1;goto B725b18;
case 0x725b1e:goto L725b1e;
case 0x725b23:c.instructions+=2;goto B725b23;
case 0x725b25:c.instructions+=1;goto B725b25;
case 0x725b27:goto L725b27;
case 0x725b29:c.instructions+=2;goto B725b29;
case 0x725b2a:c.instructions+=1;goto B725b2a;
case 0x725b2d:goto L725b2d;
case 0x725b33:goto L725b33;
case 0x725b35:c.instructions+=5;goto B725b35;
case 0x725b36:c.instructions+=4;goto B725b36;
case 0x725b39:c.instructions+=3;goto B725b39;
case 0x725b3a:c.instructions+=2;goto B725b3a;
case 0x725b3b:c.instructions+=1;goto B725b3b;
case 0x725b40:goto L725b40;
case 0x725b43:c.instructions+=33;goto B725b43;
case 0x725b46:c.instructions+=32;goto B725b46;
case 0x725b49:c.instructions+=31;goto B725b49;
case 0x725b4f:c.instructions+=30;goto B725b4f;
case 0x725b50:c.instructions+=29;goto B725b50;
case 0x725b51:c.instructions+=28;goto B725b51;
case 0x725b53:c.instructions+=27;goto B725b53;
case 0x725b58:c.instructions+=26;goto B725b58;
case 0x725b5a:c.instructions+=25;goto B725b5a;
case 0x725b5b:c.instructions+=24;goto B725b5b;
case 0x725b60:c.instructions+=23;goto B725b60;
case 0x725b63:c.instructions+=22;goto B725b63;
case 0x725b6a:c.instructions+=21;goto B725b6a;
case 0x725b70:c.instructions+=20;goto B725b70;
case 0x725b76:c.instructions+=19;goto B725b76;
case 0x725b7c:c.instructions+=18;goto B725b7c;
case 0x725b7e:c.instructions+=17;goto B725b7e;
case 0x725b81:c.instructions+=16;goto B725b81;
case 0x725b83:c.instructions+=15;goto B725b83;
case 0x725b84:c.instructions+=14;goto B725b84;
case 0x725b86:c.instructions+=13;goto B725b86;
case 0x725b88:c.instructions+=12;goto B725b88;
case 0x725b8d:c.instructions+=11;goto B725b8d;
case 0x725b91:c.instructions+=10;goto B725b91;
case 0x725b94:c.instructions+=9;goto B725b94;
case 0x725b99:c.instructions+=8;goto B725b99;
case 0x725b9c:c.instructions+=7;goto B725b9c;
case 0x725ba1:c.instructions+=6;goto B725ba1;
case 0x725ba4:c.instructions+=5;goto B725ba4;
case 0x725ba5:c.instructions+=4;goto B725ba5;
case 0x725bab:c.instructions+=3;goto B725bab;
case 0x725bad:c.instructions+=2;goto B725bad;
case 0x725bae:c.instructions+=1;goto B725bae;
case 0x725bb1:goto L725bb1;
case 0x725bb2:c.instructions+=3;goto B725bb2;
case 0x725bb3:c.instructions+=2;goto B725bb3;
case 0x725bb4:c.instructions+=1;goto B725bb4;
case 0x725bb5:goto L725bb5;
case 0x725bba:c.instructions+=2;goto B725bba;
case 0x725bbc:c.instructions+=1;goto B725bbc;
case 0x725bbe:goto L725bbe;
case 0x725bc0:c.instructions+=2;goto B725bc0;
case 0x725bc1:c.instructions+=1;goto B725bc1;
case 0x725bc4:goto L725bc4;
case 0x725bcb:goto L725bcb;
case 0x725bd0:c.instructions+=2;goto B725bd0;
case 0x725bd2:c.instructions+=1;goto B725bd2;
case 0x725bd4:goto L725bd4;
case 0x725bd6:c.instructions+=2;goto B725bd6;
case 0x725bd7:c.instructions+=1;goto B725bd7;
case 0x725bda:goto L725bda;
case 0x725be1:goto L725be1;
case 0x725be6:c.instructions+=2;goto B725be6;
case 0x725be8:c.instructions+=1;goto B725be8;
case 0x725bea:goto L725bea;
case 0x725bec:c.instructions+=2;goto B725bec;
case 0x725bed:c.instructions+=1;goto B725bed;
case 0x725bf0:goto L725bf0;
case 0x725bf7:goto L725bf7;
case 0x725bfc:c.instructions+=1;goto B725bfc;
case 0x725bfe:goto L725bfe;
case 0x725c03:goto L725c03;
case 0x725c05:c.instructions+=1;goto B725c05;
case 0x725c06:goto L725c06;
case 0x725c0b:goto L725c0b;
case 0x725c0d:c.instructions+=2;goto B725c0d;
case 0x725c11:c.instructions+=1;goto B725c11;
case 0x725c16:goto L725c16;
case 0x725c17:c.instructions+=3;goto B725c17;
case 0x725c18:c.instructions+=2;goto B725c18;
case 0x725c1a:c.instructions+=1;goto B725c1a;
case 0x725c1b:goto L725c1b;
case 0x725c1c:c.instructions+=4;goto B725c1c;
case 0x725c1e:c.instructions+=3;goto B725c1e;
case 0x725c1f:c.instructions+=2;goto B725c1f;
case 0x725c26:c.instructions+=1;goto B725c26;
case 0x725c28:goto L725c28;
case 0x725c2d:c.instructions+=6;goto B725c2d;
case 0x725c2f:c.instructions+=5;goto B725c2f;
case 0x725c31:c.instructions+=4;goto B725c31;
case 0x725c34:c.instructions+=3;goto B725c34;
case 0x725c35:c.instructions+=2;goto B725c35;
case 0x725c36:c.instructions+=1;goto B725c36;
case 0x725c39:goto L725c39;
case 0x725c3b:c.instructions+=1;goto B725c3b;
case 0x725c3d:goto L725c3d;
case 0x725c3f:c.instructions+=2;goto B725c3f;
case 0x725c40:c.instructions+=1;goto B725c40;
case 0x725c41:goto L725c41;
case 0x725c48:c.instructions+=10;goto B725c48;
case 0x725c4f:c.instructions+=9;goto B725c4f;
case 0x725c51:c.instructions+=8;goto B725c51;
case 0x725c54:c.instructions+=7;goto B725c54;
case 0x725c56:c.instructions+=6;goto B725c56;
case 0x725c58:c.instructions+=5;goto B725c58;
case 0x725c5a:c.instructions+=4;goto B725c5a;
case 0x725c5c:c.instructions+=3;goto B725c5c;
case 0x725c61:c.instructions+=2;goto B725c61;
case 0x725c63:c.instructions+=1;goto B725c63;
case 0x725c65:goto L725c65;
case 0x725c6b:goto L725c6b;
case 0x725c72:c.instructions+=5;goto B725c72;
case 0x725c78:c.instructions+=4;goto B725c78;
case 0x725c79:c.instructions+=3;goto B725c79;
case 0x725c7b:c.instructions+=2;goto B725c7b;
case 0x725c7c:c.instructions+=1;goto B725c7c;
case 0x725c7d:goto L725c7d;
case 0x725c83:goto L725c83;
case 0x725c85:c.instructions+=1;goto B725c85;
case 0x725c87:goto L725c87;
case 0x725c8d:goto L725c8d;
case 0x725c8e:goto L725c8e;
case 0x725c8f:c.instructions+=8;goto B725c8f;
case 0x725c91:c.instructions+=7;goto B725c91;
case 0x725c94:c.instructions+=6;goto B725c94;
case 0x725c96:c.instructions+=5;goto B725c96;
case 0x725c97:c.instructions+=4;goto B725c97;
case 0x725c9a:c.instructions+=3;goto B725c9a;
case 0x725c9c:c.instructions+=2;goto B725c9c;
case 0x725c9f:c.instructions+=1;goto B725c9f;
case 0x725ca5:goto L725ca5;
case 0x725ca6:goto L725ca6;
case 0x725cab:c.instructions+=2;goto B725cab;
case 0x725cad:c.instructions+=1;goto B725cad;
case 0x725cb3:goto L725cb3;
case 0x725cb9:c.instructions+=1;goto B725cb9;
case 0x725cbe:goto L725cbe;
case 0x725cc4:c.instructions+=12;goto B725cc4;
case 0x725cca:c.instructions+=11;goto B725cca;
case 0x725cd0:c.instructions+=10;goto B725cd0;
case 0x725cd6:c.instructions+=9;goto B725cd6;
case 0x725cd9:c.instructions+=8;goto B725cd9;
case 0x725cdf:c.instructions+=7;goto B725cdf;
case 0x725ce2:c.instructions+=6;goto B725ce2;
case 0x725ce8:c.instructions+=5;goto B725ce8;
case 0x725ced:c.instructions+=4;goto B725ced;
case 0x725cef:c.instructions+=3;goto B725cef;
case 0x725cf1:c.instructions+=2;goto B725cf1;
case 0x725cf4:c.instructions+=1;goto B725cf4;
case 0x725cf6:goto L725cf6;
case 0x725cfc:c.instructions+=2;goto B725cfc;
case 0x725cfe:c.instructions+=1;goto B725cfe;
case 0x725d04:goto L725d04;
case 0x725d06:c.instructions+=1;goto B725d06;
case 0x725d0b:goto L725d0b;
case 0x725d12:c.instructions+=11;goto B725d12;
case 0x725d18:c.instructions+=10;goto B725d18;
case 0x725d1b:c.instructions+=9;goto B725d1b;
case 0x725d1c:c.instructions+=8;goto B725d1c;
case 0x725d1e:c.instructions+=7;goto B725d1e;
case 0x725d1f:c.instructions+=6;goto B725d1f;
case 0x725d21:c.instructions+=5;goto B725d21;
case 0x725d27:c.instructions+=4;goto B725d27;
case 0x725d2c:c.instructions+=3;goto B725d2c;
case 0x725d32:c.instructions+=2;goto B725d32;
case 0x725d38:c.instructions+=1;goto B725d38;
case 0x725d3a:goto L725d3a;
case 0x725d41:c.instructions+=1;goto B725d41;
case 0x725d48:goto L725d48;
case 0x725d4a:c.instructions+=2;goto B725d4a;
case 0x725d4c:c.instructions+=1;goto B725d4c;
case 0x725d4e:goto L725d4e;
case 0x725d50:goto L725d50;
case 0x725d52:c.instructions+=6;goto B725d52;
case 0x725d57:c.instructions+=5;goto B725d57;
case 0x725d5a:c.instructions+=4;goto B725d5a;
case 0x725d5b:c.instructions+=3;goto B725d5b;
case 0x725d5c:c.instructions+=2;goto B725d5c;
case 0x725d5e:c.instructions+=1;goto B725d5e;
case 0x725d63:goto L725d63;
case 0x725d64:c.instructions+=2;goto B725d64;
case 0x725d65:c.instructions+=1;goto B725d65;
case 0x725d6a:goto L725d6a;
case 0x725d71:c.instructions+=8;goto B725d71;
case 0x725d78:c.instructions+=7;goto B725d78;
case 0x725d7a:c.instructions+=6;goto B725d7a;
case 0x725d7d:c.instructions+=5;goto B725d7d;
case 0x725d80:c.instructions+=4;goto B725d80;
case 0x725d82:c.instructions+=3;goto B725d82;
case 0x725d85:c.instructions+=2;goto B725d85;
case 0x725d88:c.instructions+=1;goto B725d88;
case 0x725d8e:goto L725d8e;
case 0x725d8f:goto L725d8f;
case 0x725d90:c.instructions+=2;goto B725d90;
case 0x725d91:c.instructions+=1;goto B725d91;
case 0x725d92:goto L725d92;
case 0x725d96:c.instructions+=1;goto B725d96;
case 0x725d9b:goto L725d9b;
case 0x725da0:goto L725da0;
case 0x725da6:c.instructions+=1;goto B725da6;
case 0x725dab:goto L725dab;
case 0x725dac:c.instructions+=2;goto B725dac;
case 0x725dad:c.instructions+=1;goto B725dad;
case 0x725db2:goto L725db2;
case 0x725db4:c.instructions+=1;goto B725db4;
case 0x725db5:goto L725db5;
case 0x725db6:c.instructions+=10;goto B725db6;
case 0x725db8:c.instructions+=9;goto B725db8;
case 0x725dbe:c.instructions+=8;goto B725dbe;
case 0x725dbf:c.instructions+=7;goto B725dbf;
case 0x725dc1:c.instructions+=6;goto B725dc1;
case 0x725dc2:c.instructions+=5;goto B725dc2;
case 0x725dc7:c.instructions+=4;goto B725dc7;
case 0x725dc8:c.instructions+=3;goto B725dc8;
case 0x725dce:c.instructions+=2;goto B725dce;
case 0x725dd4:c.instructions+=1;goto B725dd4;
case 0x725dd9:goto L725dd9;
case 0x725ddb:c.instructions+=1;goto B725ddb;
case 0x725ddd:goto L725ddd;
case 0x725de2:c.instructions+=1;goto B725de2;
case 0x725de4:goto L725de4;
case 0x725deb:c.instructions+=1;goto B725deb;
case 0x725ded:goto L725ded;
case 0x725def:c.instructions+=6;goto B725def;
case 0x725df4:c.instructions+=5;goto B725df4;
case 0x725df7:c.instructions+=4;goto B725df7;
case 0x725df8:c.instructions+=3;goto B725df8;
case 0x725dfb:c.instructions+=2;goto B725dfb;
case 0x725dfc:c.instructions+=1;goto B725dfc;
case 0x725dff:goto L725dff;
case 0x725e05:c.instructions+=1;goto B725e05;
case 0x725e0a:goto L725e0a;
case 0x725e0f:c.instructions+=4;goto B725e0f;
case 0x725e10:c.instructions+=3;goto B725e10;
case 0x725e12:c.instructions+=2;goto B725e12;
case 0x725e14:c.instructions+=1;goto B725e14;
case 0x725e19:goto L725e19;
case 0x725e1a:c.instructions+=2;goto B725e1a;
case 0x725e20:c.instructions+=1;goto B725e20;
case 0x725e23:goto L725e23;
case 0x725e28:c.instructions+=6;goto B725e28;
case 0x725e2e:c.instructions+=5;goto B725e2e;
case 0x725e2f:c.instructions+=4;goto B725e2f;
case 0x725e39:c.instructions+=3;goto B725e39;
case 0x725e3b:c.instructions+=2;goto B725e3b;
case 0x725e3c:c.instructions+=1;goto B725e3c;
case 0x725e3f:goto L725e3f;
case 0x725e41:c.instructions+=1;goto B725e41;
case 0x725e43:goto L725e43;
case 0x725e47:c.instructions+=1;goto B725e47;
case 0x725e4c:goto L725e4c;
case 0x725e4e:c.instructions+=5;goto B725e4e;
case 0x725e4f:c.instructions+=4;goto B725e4f;
case 0x725e52:c.instructions+=3;goto B725e52;
case 0x725e53:c.instructions+=2;goto B725e53;
case 0x725e54:c.instructions+=1;goto B725e54;
case 0x725e59:goto L725e59;
case 0x725e5e:c.instructions+=13;goto B725e5e;
case 0x725e5f:c.instructions+=12;goto B725e5f;
case 0x725e60:c.instructions+=11;goto B725e60;
case 0x725e63:c.instructions+=10;goto B725e63;
case 0x725e64:c.instructions+=9;goto B725e64;
case 0x725e69:c.instructions+=8;goto B725e69;
case 0x725e6b:c.instructions+=7;goto B725e6b;
case 0x725e6e:c.instructions+=6;goto B725e6e;
case 0x725e6f:c.instructions+=5;goto B725e6f;
case 0x725e70:c.instructions+=4;goto B725e70;
case 0x725e73:c.instructions+=3;goto B725e73;
case 0x725e75:c.instructions+=2;goto B725e75;
case 0x725e76:c.instructions+=1;goto B725e76;
case 0x725e79:goto L725e79;
case 0x725e7b:c.instructions+=2;goto B725e7b;
case 0x725e7e:c.instructions+=1;goto B725e7e;
case 0x725e84:goto L725e84;
case 0x725e85:c.instructions+=4;goto B725e85;
case 0x725e88:c.instructions+=3;goto B725e88;
case 0x725e8d:c.instructions+=2;goto B725e8d;
case 0x725e8f:c.instructions+=1;goto B725e8f;
case 0x725e91:goto L725e91;
case 0x725e93:c.instructions+=1;goto B725e93;
case 0x725e95:goto L725e95;
case 0x725e97:c.instructions+=1;goto B725e97;
case 0x725e99:goto L725e99;
case 0x725e9e:goto L725e9e;
case 0x725ea1:c.instructions+=4;goto B725ea1;
case 0x725ea2:c.instructions+=3;goto B725ea2;
case 0x725ea3:c.instructions+=2;goto B725ea3;
case 0x725ea6:c.instructions+=1;goto B725ea6;
case 0x725eab:goto L725eab;
case 0x725ead:c.instructions+=4;goto B725ead;
case 0x725eb0:c.instructions+=3;goto B725eb0;
case 0x725eb1:c.instructions+=2;goto B725eb1;
case 0x725eb2:c.instructions+=1;goto B725eb2;
case 0x725eb4:goto L725eb4;
case 0x725eb6:c.instructions+=1;goto B725eb6;
case 0x725eb8:goto L725eb8;
case 0x725ebb:goto L725ebb;
case 0x725ebe:goto L725ebe;
case 0x725ebf:c.instructions+=2;goto B725ebf;
case 0x725ec1:c.instructions+=1;goto B725ec1;
case 0x725ec6:goto L725ec6;
case 0x725ec8:c.instructions+=3;goto B725ec8;
case 0x725ec9:c.instructions+=2;goto B725ec9;
case 0x725eca:c.instructions+=1;goto B725eca;
case 0x725ecc:goto L725ecc;
case 0x725ece:c.instructions+=1;goto B725ece;
case 0x725ed0:goto L725ed0;
case 0x725ed4:goto L725ed4;
case 0x725ed7:goto L725ed7;
case 0x725ed8:c.instructions+=2;goto B725ed8;
case 0x725eda:c.instructions+=1;goto B725eda;
case 0x725edf:goto L725edf;
case 0x725ee1:c.instructions+=3;goto B725ee1;
case 0x725ee2:c.instructions+=2;goto B725ee2;
case 0x725ee3:c.instructions+=1;goto B725ee3;
case 0x725ee5:goto L725ee5;
case 0x725ee7:c.instructions+=1;goto B725ee7;
case 0x725ee9:goto L725ee9;
case 0x725eed:goto L725eed;
case 0x725ef0:goto L725ef0;
case 0x725ef1:c.instructions+=2;goto B725ef1;
case 0x725ef3:c.instructions+=1;goto B725ef3;
case 0x725ef8:goto L725ef8;
case 0x725efa:c.instructions+=4;goto B725efa;
case 0x725efb:c.instructions+=3;goto B725efb;
case 0x725efc:c.instructions+=2;goto B725efc;
case 0x725efd:c.instructions+=1;goto B725efd;
case 0x725eff:goto L725eff;
case 0x725f01:c.instructions+=1;goto B725f01;
case 0x725f03:goto L725f03;
case 0x725f07:goto L725f07;
case 0x725f0a:goto L725f0a;
case 0x725f0c:goto L725f0c;
case 0x725f0d:goto L725f0d;
case 0x725f12:c.instructions+=2;goto B725f12;
case 0x725f14:c.instructions+=1;goto B725f14;
case 0x725f16:goto L725f16;
case 0x725f18:c.instructions+=2;goto B725f18;
case 0x725f19:c.instructions+=1;goto B725f19;
case 0x725f1c:goto L725f1c;
case 0x725f22:goto L725f22;
case 0x725f27:c.instructions+=2;goto B725f27;
case 0x725f29:c.instructions+=1;goto B725f29;
case 0x725f2b:goto L725f2b;
case 0x725f2d:c.instructions+=2;goto B725f2d;
case 0x725f2e:c.instructions+=1;goto B725f2e;
case 0x725f31:goto L725f31;
case 0x725f37:goto L725f37;
case 0x725f3c:c.instructions+=2;goto B725f3c;
case 0x725f3e:c.instructions+=1;goto B725f3e;
case 0x725f40:goto L725f40;
case 0x725f42:c.instructions+=2;goto B725f42;
case 0x725f43:c.instructions+=1;goto B725f43;
case 0x725f46:goto L725f46;
case 0x725f49:c.instructions+=4;goto B725f49;
case 0x725f4f:c.instructions+=3;goto B725f4f;
case 0x725f50:c.instructions+=2;goto B725f50;
case 0x725f51:c.instructions+=1;goto B725f51;
case 0x725f52:goto L725f52;
case 0x725f53:c.instructions+=16;goto B725f53;
case 0x725f55:c.instructions+=15;goto B725f55;
case 0x725f58:c.instructions+=14;goto B725f58;
case 0x725f59:c.instructions+=13;goto B725f59;
case 0x725f5b:c.instructions+=12;goto B725f5b;
case 0x725f5c:c.instructions+=11;goto B725f5c;
case 0x725f5d:c.instructions+=10;goto B725f5d;
case 0x725f60:c.instructions+=9;goto B725f60;
case 0x725f63:c.instructions+=8;goto B725f63;
case 0x725f6d:c.instructions+=7;goto B725f6d;
case 0x725f73:c.instructions+=6;goto B725f73;
case 0x725f79:c.instructions+=5;goto B725f79;
case 0x725f83:c.instructions+=4;goto B725f83;
case 0x725f89:c.instructions+=3;goto B725f89;
case 0x725f92:c.instructions+=2;goto B725f92;
case 0x725f9b:c.instructions+=1;goto B725f9b;
case 0x725f9d:goto L725f9d;
case 0x725fa2:c.instructions+=13;goto B725fa2;
case 0x725fa9:c.instructions+=12;goto B725fa9;
case 0x725fac:c.instructions+=11;goto B725fac;
case 0x725fb1:c.instructions+=10;goto B725fb1;
case 0x725fb7:c.instructions+=9;goto B725fb7;
case 0x725fba:c.instructions+=8;goto B725fba;
case 0x725fbc:c.instructions+=7;goto B725fbc;
case 0x725fbf:c.instructions+=6;goto B725fbf;
case 0x725fc2:c.instructions+=5;goto B725fc2;
case 0x725fc5:c.instructions+=4;goto B725fc5;
case 0x725fc8:c.instructions+=3;goto B725fc8;
case 0x725fc9:c.instructions+=2;goto B725fc9;
case 0x725fd0:c.instructions+=1;goto B725fd0;
case 0x725fd5:goto L725fd5;
case 0x725fd6:goto L725fd6;
case 0x725fd7:c.instructions+=5;goto B725fd7;
case 0x725fdc:c.instructions+=4;goto B725fdc;
case 0x725fdd:c.instructions+=3;goto B725fdd;
case 0x725fe3:c.instructions+=2;goto B725fe3;
case 0x725fe9:c.instructions+=1;goto B725fe9;
case 0x725fee:goto L725fee;
case 0x725ff0:c.instructions+=1;goto B725ff0;
case 0x725ff2:goto L725ff2;
case 0x725ff7:c.instructions+=1;goto B725ff7;
case 0x725ff9:goto L725ff9;
case 0x725ffb:c.instructions+=2;goto B725ffb;
case 0x725ffc:c.instructions+=1;goto B725ffc;
case 0x725ffe:goto L725ffe;
default:missing_instruction(c.pc);}
B725000:L725000:{c.instructions+=3;NFSU2_TR(0x725000);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B725001:{NFSU2_TR(0x725001);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B725003:{NFSU2_TR(0x725003);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x724ff4u,724);}
}
B725005:L725005:{c.instructions+=3;NFSU2_TR(0x725005);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B725007:{NFSU2_TR(0x725007);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72500a:{NFSU2_TR(0x72500a);
{goto L725019;}
}
B72500c:L72500c:{c.instructions+=4;NFSU2_TR(0x72500c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72500d:{NFSU2_TR(0x72500d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B725011:{NFSU2_TR(0x725011);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725012:{NFSU2_TR(0x725012);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725017ull));
{goto L725878;}
}
B725017:L725017:{c.instructions+=2;NFSU2_TR(0x725017);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725018:{NFSU2_TR(0x725018);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725019:L725019:{c.instructions+=2;NFSU2_TR(0x725019);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72501a:{NFSU2_TR(0x72501a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72501full));
TAIL_STATIC(0x724f5du,724);
}
B72501f:L72501f:{c.instructions+=3;NFSU2_TR(0x72501f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725020:{NFSU2_TR(0x725020);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B725021:{NFSU2_TR(0x725021);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B725022:L725022:{c.instructions+=16;NFSU2_TR(0x725022);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B725026:{NFSU2_TR(0x725026);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72502a:{NFSU2_TR(0x72502a);
__builtin_memmove((R+0),(R+4),4);
}
B72502c:{NFSU2_TR(0x72502c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B725032:{NFSU2_TR(0x725032);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),m4(0x8b4724)));
w1(R+523,scarry<u32>(r4(R+0),m4(0x8b4724)));
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b4724))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B725038:{NFSU2_TR(0x725038);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725039:{NFSU2_TR(0x725039);
__builtin_memmove((R+24),gp(0x8b466c),4);
}
B72503f:{NFSU2_TR(0x72503f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B725042:{NFSU2_TR(0x725042);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B725045:{NFSU2_TR(0x725045);
u8 U[16];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B725049:{NFSU2_TR(0x725049);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72504a:{NFSU2_TR(0x72504a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72504b:{NFSU2_TR(0x72504b);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72504e:{NFSU2_TR(0x72504e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B725051:{NFSU2_TR(0x725051);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B725054:{NFSU2_TR(0x725054);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725057ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B725057:L725057:{c.instructions+=4;NFSU2_TR(0x725057);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B72505a:{NFSU2_TR(0x72505a);
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
B72505c:{NFSU2_TR(0x72505c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72505d:{NFSU2_TR(0x72505d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72505e:L72505e:{c.instructions+=6;NFSU2_TR(0x72505e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B725062:{NFSU2_TR(0x725062);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B725068:{NFSU2_TR(0x725068);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b4724))));
}
B72506e:{NFSU2_TR(0x72506e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B725071:{NFSU2_TR(0x725071);
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
B725073:{NFSU2_TR(0x725073);
if(r1(R+518)){{goto L725080;}}
}
B725075:L725075:{c.instructions+=3;NFSU2_TR(0x725075);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B725079:{NFSU2_TR(0x725079);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72507c:{NFSU2_TR(0x72507c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72507eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B72507e:L72507e:{c.instructions+=2;NFSU2_TR(0x72507e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72507f:{NFSU2_TR(0x72507f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725080:L725080:{c.instructions+=1;NFSU2_TR(0x725080);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B725081:L725081:{c.instructions+=6;NFSU2_TR(0x725081);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B725085:{NFSU2_TR(0x725085);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72508b:{NFSU2_TR(0x72508b);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b4724))));
}
B725091:{NFSU2_TR(0x725091);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B725094:{NFSU2_TR(0x725094);
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
B725096:{NFSU2_TR(0x725096);
if(r1(R+518)){{goto L7250a3;}}
}
B725098:L725098:{c.instructions+=3;NFSU2_TR(0x725098);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72509c:{NFSU2_TR(0x72509c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72509f:{NFSU2_TR(0x72509f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7250a1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7250a1:L7250a1:{c.instructions+=2;NFSU2_TR(0x7250a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7250a2:{NFSU2_TR(0x7250a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7250a3:L7250a3:{c.instructions+=1;NFSU2_TR(0x7250a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7250a4:L7250a4:{c.instructions+=3;NFSU2_TR(0x7250a4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7250a6:{NFSU2_TR(0x7250a6);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7250aa:{NFSU2_TR(0x7250aa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7250c1;}}
}
B7250ac:L7250ac:{c.instructions+=3;NFSU2_TR(0x7250ac);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8b472cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B7250b4:{NFSU2_TR(0x7250b4);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7250b8:{NFSU2_TR(0x7250b8);
if(r1(R+518)){{goto L7250c4;}}
}
B7250ba:L7250ba:{c.instructions+=3;NFSU2_TR(0x7250ba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7250bb:{NFSU2_TR(0x7250bb);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7250bf:{NFSU2_TR(0x7250bf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7250acu);}goto L7250ac;}}
}
B7250c1:L7250c1:{c.instructions+=2;NFSU2_TR(0x7250c1);
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
B7250c3:{NFSU2_TR(0x7250c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7250c4:L7250c4:{c.instructions+=3;NFSU2_TR(0x7250c4);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7250c6:{NFSU2_TR(0x7250c6);
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
B7250c7:{NFSU2_TR(0x7250c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7250c8:L7250c8:{c.instructions+=11;NFSU2_TR(0x7250c8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7250c9:{NFSU2_TR(0x7250c9);
__builtin_memmove((R+20),(R+16),4);
}
B7250cb:{NFSU2_TR(0x7250cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B7250ce:{NFSU2_TR(0x7250ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7250d1:{NFSU2_TR(0x7250d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7250d5:{NFSU2_TR(0x7250d5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7250d7:{NFSU2_TR(0x7250d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7250d8:{NFSU2_TR(0x7250d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7250d9:{NFSU2_TR(0x7250d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7250da:{NFSU2_TR(0x7250da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0xfffffff7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7250e1:{NFSU2_TR(0x7250e1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7250f6;}}
}
B7250e3:L7250e3:{c.instructions+=4;NFSU2_TR(0x7250e3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B7250e6:{NFSU2_TR(0x7250e6);
__builtin_memmove((R+4),(R+8),4);
}
B7250e8:{NFSU2_TR(0x7250e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+0))!=(u32(0x0ull))));
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B7250ea:{NFSU2_TR(0x7250ea);
w4(R+28,u32(0x8b472cull));
}
B7250ef:L7250ef:{c.instructions+=1;NFSU2_TR(0x7250ef);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7250f1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7250efu);}goto L7250ef;}
}
B7250f1:L7250f1:{c.instructions+=1;NFSU2_TR(0x7250f1);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))+u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B7250f3:L7250f3:{c.instructions+=1;NFSU2_TR(0x7250f3);
u8 U[19];
w1(U+18,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+18)){{goto L7250f6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7250f3u);}goto L7250f3;}
}
B7250f6:L7250f6:{c.instructions+=2;NFSU2_TR(0x7250f6);
s4(0x8b4738,u32(u32(m4(0x8b4738))+u32(u32(0x100ull))));
w1(R+519,u8(s32(m4(0x8b4738))<s32(u32(0x0ull))));
}
B725100:{NFSU2_TR(0x725100);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L725109;}}
}
B725102:L725102:{c.instructions+=1;NFSU2_TR(0x725102);
s4(0x8b4738,u32(u32(m4(0x8b4738))&u32(u32(0x0ull))));
}
B725109:L725109:{c.instructions+=2;NFSU2_TR(0x725109);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72510b:{NFSU2_TR(0x72510b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72516f;}}
}
B72510d:L72510d:{c.instructions+=1;NFSU2_TR(0x72510d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B725110:L725110:{c.instructions+=5;NFSU2_TR(0x725110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B725113:{NFSU2_TR(0x725113);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B725116:{NFSU2_TR(0x725116);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B725119:{NFSU2_TR(0x725119);
__builtin_memmove((R+28),(R+12),4);
}
B72511b:{NFSU2_TR(0x72511b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72516a;}}
}
B72511d:L72511d:{c.instructions+=4;NFSU2_TR(0x72511d);
__builtin_memmove((R+4),gp(0x8b466c),4);
}
B725123:{NFSU2_TR(0x725123);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B725126:{NFSU2_TR(0x725126);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B725129:{NFSU2_TR(0x725129);
u8 U[12];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B72512d:L72512d:{c.instructions+=2;NFSU2_TR(0x72512d);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B725131:{NFSU2_TR(0x725131);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72514c;}}
}
B725133:L725133:{c.instructions+=3;NFSU2_TR(0x725133);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B725136:{NFSU2_TR(0x725136);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725137:{NFSU2_TR(0x725137);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72513cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7250a4u);}goto L7250a4;}
}
B72513c:L72513c:{c.instructions+=4;NFSU2_TR(0x72513c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72513e:{NFSU2_TR(0x72513e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72513f:{NFSU2_TR(0x72513f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725140:{NFSU2_TR(0x725140);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72514c;}}
}
B725142:L725142:{c.instructions+=3;NFSU2_TR(0x725142);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B725144:{NFSU2_TR(0x725144);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B725146:{NFSU2_TR(0x725146);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L72514c;}}
}
B725148:L725148:{c.instructions+=2;NFSU2_TR(0x725148);
__builtin_memmove((R+12),(R+0),4);
}
B72514a:{NFSU2_TR(0x72514a);
__builtin_memmove((R+28),(R+24),4);
}
B72514c:L72514c:{c.instructions+=4;NFSU2_TR(0x72514c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B72514d:{NFSU2_TR(0x72514d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x90ull))));
}
B725153:{NFSU2_TR(0x725153);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B725156:{NFSU2_TR(0x725156);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72512du);}goto L72512d;}}
}
B725158:L725158:{c.instructions+=2;NFSU2_TR(0x725158);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B72515a:{NFSU2_TR(0x72515a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72516a;}}
}
B72515c:L72515c:{c.instructions+=3;NFSU2_TR(0x72515c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72515f:{NFSU2_TR(0x72515f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B725162:{NFSU2_TR(0x725162);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8b472cull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),2);
s2(u32(r4(U+4)),r2(U+8));
}
B72516a:L72516a:{c.instructions+=2;NFSU2_TR(0x72516a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72516d:{NFSU2_TR(0x72516d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x725110u);}goto L725110;}}
}
B72516f:L72516f:{c.instructions+=3;NFSU2_TR(0x72516f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B725172:{NFSU2_TR(0x725172);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B725175:{NFSU2_TR(0x725175);
{goto L725206;}
}
B72517a:L72517a:{c.instructions+=3;NFSU2_TR(0x72517a);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b44d4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B725181:{NFSU2_TR(0x725181);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B725184:{NFSU2_TR(0x725184);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L725187;}}
}
B725186:L725186:{c.instructions+=1;NFSU2_TR(0x725186);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B725187:L725187:{c.instructions+=7;NFSU2_TR(0x725187);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72518a:{NFSU2_TR(0x72518a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72518d:{NFSU2_TR(0x72518d);
__builtin_memmove((R+0),(R+28),4);
}
B72518f:{NFSU2_TR(0x72518f);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B725192:{NFSU2_TR(0x725192);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B725195:{NFSU2_TR(0x725195);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B725198:{NFSU2_TR(0x725198);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L725200;}}
}
B72519a:L72519a:{c.instructions+=4;NFSU2_TR(0x72519a);
__builtin_memmove((R+4),gp(0x8b466c),4);
}
B7251a0:{NFSU2_TR(0x7251a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7251a3:{NFSU2_TR(0x7251a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7251a6:{NFSU2_TR(0x7251a6);
u8 U[12];
w4(U+0,u32(u32(u32(0x2aull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B7251aa:L7251aa:{c.instructions+=3;NFSU2_TR(0x7251aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7251ad:{NFSU2_TR(0x7251ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7251ae:{NFSU2_TR(0x7251ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7251b3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7250a4u);}goto L7250a4;}
}
B7251b3:L7251b3:{c.instructions+=4;NFSU2_TR(0x7251b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7251b5:{NFSU2_TR(0x7251b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7251b6:{NFSU2_TR(0x7251b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7251b7:{NFSU2_TR(0x7251b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7251dc;}}
}
B7251b9:L7251b9:{c.instructions+=3;NFSU2_TR(0x7251b9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7251bb:{NFSU2_TR(0x7251bb);
w1(R+512,u8((r1(R+0))<(u8(0x65ull))));
}
B7251bd:{NFSU2_TR(0x7251bd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7251dc;}}
}
B7251bf:L7251bf:{c.instructions+=3;NFSU2_TR(0x7251bf);
w4(R+0,u32(r1(R+0)));
}
B7251c2:{NFSU2_TR(0x7251c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7251c5:{NFSU2_TR(0x7251c5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7251cf;}}
}
B7251c7:L7251c7:{c.instructions+=3;NFSU2_TR(0x7251c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7251ca:{NFSU2_TR(0x7251ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7251cd:{NFSU2_TR(0x7251cd);
{goto L7251da;}
}
B7251cf:L7251cf:{c.instructions+=1;NFSU2_TR(0x7251cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7251dc;}}
}
B7251d1:L7251d1:{c.instructions+=3;NFSU2_TR(0x7251d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7251d4:{NFSU2_TR(0x7251d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B7251d6:{NFSU2_TR(0x7251d6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7251dc;}}
}
B7251d8:L7251d8:{c.instructions+=1;NFSU2_TR(0x7251d8);
__builtin_memmove((R+24),(R+0),4);
}
B7251da:L7251da:{c.instructions+=1;NFSU2_TR(0x7251da);
__builtin_memmove((R+12),(R+28),4);
}
B7251dc:L7251dc:{c.instructions+=4;NFSU2_TR(0x7251dc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7251dd:{NFSU2_TR(0x7251dd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x90ull))));
}
B7251e3:{NFSU2_TR(0x7251e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7251e6:{NFSU2_TR(0x7251e6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7251aau);}goto L7251aa;}}
}
B7251e8:L7251e8:{c.instructions+=2;NFSU2_TR(0x7251e8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7251ea:{NFSU2_TR(0x7251ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L725200;}}
}
B7251ec:L7251ec:{c.instructions+=6;NFSU2_TR(0x7251ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7251ef:{NFSU2_TR(0x7251ef);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8b472cull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),2);
s2(u32(r4(U+4)),r2(U+8));
}
B7251f7:{NFSU2_TR(0x7251f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7251f8:{NFSU2_TR(0x7251f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7251fb:{NFSU2_TR(0x7251fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7251fe:{NFSU2_TR(0x7251fe);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72520f;}}
}
B725200:L725200:{c.instructions+=2;NFSU2_TR(0x725200);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B725203:{NFSU2_TR(0x725203);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B725206:L725206:{c.instructions+=2;NFSU2_TR(0x725206);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B725209:{NFSU2_TR(0x725209);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72517au);}goto L72517a;}}
}
B72520f:L72520f:{c.instructions+=3;NFSU2_TR(0x72520f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B725212:{NFSU2_TR(0x725212);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B725215:{NFSU2_TR(0x725215);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L725370;}}
}
B72521b:L72521b:{c.instructions+=2;NFSU2_TR(0x72521b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B72521c:{NFSU2_TR(0x72521c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72521f:L72521f:{c.instructions+=5;NFSU2_TR(0x72521f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B725221:{NFSU2_TR(0x725221);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B725223:{NFSU2_TR(0x725223);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B725224:{NFSU2_TR(0x725224);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B725227:{NFSU2_TR(0x725227);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L725257;}}
}
B725229:L725229:{c.instructions+=6;NFSU2_TR(0x725229);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8b472cull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B725230:{NFSU2_TR(0x725230);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+24),(U+0),2);
}
B725233:{NFSU2_TR(0x725233);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8b472eull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B72523a:{NFSU2_TR(0x72523a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+8),(U+0),2);
}
B72523d:{NFSU2_TR(0x72523d);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w1(R+523,sborrow<u16>(r2(R+24),r2(U+0)));
w2(U+2,u16(u32(r2(R+24))-u32(r2(U+0))));
w1(R+519,u8(s16(r2(U+2))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B725240:{NFSU2_TR(0x725240);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72524d;}}
}
B725242:L725242:{c.instructions+=4;NFSU2_TR(0x725242);
w4(R+24,u32(s32(s16(r2(R+24)))));
}
B725245:{NFSU2_TR(0x725245);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B725248:{NFSU2_TR(0x725248);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+4)),r2(U+0));
}
B72524b:{NFSU2_TR(0x72524b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72524d:L72524d:{c.instructions+=3;NFSU2_TR(0x72524d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B72524e:{NFSU2_TR(0x72524e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B725251:{NFSU2_TR(0x725251);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x725229u);}goto L725229;}}
}
B725253:L725253:{c.instructions+=2;NFSU2_TR(0x725253);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B725255:{NFSU2_TR(0x725255);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72521fu);}goto L72521f;}}
}
B725257:L725257:{c.instructions+=9;NFSU2_TR(0x725257);
w4(R+0,u32(s32(s16(m2(0x8b472c)))));
}
B72525e:{NFSU2_TR(0x72525e);
w4(R+0,u32(u32(r4(R+0))|u32(m4(0x8b4738))));
}
B725264:{NFSU2_TR(0x725264);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B725267:{NFSU2_TR(0x725267);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B725269:{NFSU2_TR(0x725269);
w4(R+0,u32(s32(s16(m2(0x8b472c)))));
}
B725270:{NFSU2_TR(0x725270);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B725272:{NFSU2_TR(0x725272);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B725275:{NFSU2_TR(0x725275);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B725278:{NFSU2_TR(0x725278);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7252c7;}}
}
B72527a:L72527a:{c.instructions+=8;NFSU2_TR(0x72527a);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8b472cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B725282:{NFSU2_TR(0x725282);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B725285:{NFSU2_TR(0x725285);
__builtin_memmove((R+0),gp(0x8b466c),4);
}
B72528a:{NFSU2_TR(0x72528a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B72528d:{NFSU2_TR(0x72528d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B72528f:{NFSU2_TR(0x72528f);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B725293:{NFSU2_TR(0x725293);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B725295:{NFSU2_TR(0x725295);
if(r1(R+518)){{goto L7252af;}}
}
B725297:L725297:{c.instructions+=2;NFSU2_TR(0x725297);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B725299:{NFSU2_TR(0x725299);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7252a8;}}
}
B72529b:L72529b:{c.instructions+=4;NFSU2_TR(0x72529b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B72529f:{NFSU2_TR(0x72529f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7252a2:{NFSU2_TR(0x7252a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7252a5:{NFSU2_TR(0x7252a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B7252a8:L7252a8:{c.instructions+=2;NFSU2_TR(0x7252a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7252a9:{NFSU2_TR(0x7252a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7252aeull));
TAIL_STATIC(0x723e1eu,723);
}
B7252ae:L7252ae:{c.instructions+=1;NFSU2_TR(0x7252ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7252af:L7252af:{c.instructions+=8;NFSU2_TR(0x7252af);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7252b3:{NFSU2_TR(0x7252b3);
__builtin_memmove((R+0),gp(0x8b4610),4);
}
B7252b8:{NFSU2_TR(0x7252b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7252bb:{NFSU2_TR(0x7252bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7252be:{NFSU2_TR(0x7252be);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7252bf:{NFSU2_TR(0x7252bf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7252c2:{NFSU2_TR(0x7252c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7252c5:{NFSU2_TR(0x7252c5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72527au);}goto L72527a;}}
}
B7252c7:L7252c7:{c.instructions+=21;NFSU2_TR(0x7252c7);
w4(R+0,u32(s32(s16(m2(0x8b472c)))));
}
B7252ce:{NFSU2_TR(0x7252ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7252d0:{NFSU2_TR(0x7252d0);
__builtin_memmove((R+8),gp(0x8b466c),4);
}
B7252d6:{NFSU2_TR(0x7252d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7252d9:{NFSU2_TR(0x7252d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7252dc:{NFSU2_TR(0x7252dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B7252df:{NFSU2_TR(0x7252df);
__builtin_memmove((R+0),gp(0x8b472c),2);
}
B7252e5:{NFSU2_TR(0x7252e5);
__builtin_memmove((R+8),gp(0x8b466c),4);
}
B7252eb:{NFSU2_TR(0x7252eb);
w4(R+4,u32(s32(s16(r2(R+0)))));
}
B7252ee:{NFSU2_TR(0x7252ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7252f1:{NFSU2_TR(0x7252f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7252f4:{NFSU2_TR(0x7252f4);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7252f9:{NFSU2_TR(0x7252f9);
w4(R+0,u32(s32(s16(m2(0x8b472c)))));
}
B725300:{NFSU2_TR(0x725300);
__builtin_memmove((R+4),gp(0x8b466c),4);
}
B725306:{NFSU2_TR(0x725306);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B725309:{NFSU2_TR(0x725309);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72530c:{NFSU2_TR(0x72530c);
u8 U[14];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w2(U+12,u16(u32(r2(U+12))|u32(u16(0xffffull))));
s2(u32(r4(U+8)),r2(U+12));
}
B725312:{NFSU2_TR(0x725312);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B725314:{NFSU2_TR(0x725314);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B725315:{NFSU2_TR(0x725315);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B725318:{NFSU2_TR(0x725318);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L725370;}}
}
B72531a:L72531a:{c.instructions+=21;NFSU2_TR(0x72531a);
w4(R+8,u32(s32(s16(m2(0x8b472c)))));
}
B725321:{NFSU2_TR(0x725321);
__builtin_memmove((R+28),gp(0x8b466c),4);
}
B725327:{NFSU2_TR(0x725327);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72532a:{NFSU2_TR(0x72532a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8b472cull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B725331:{NFSU2_TR(0x725331);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+24),(U+0),2);
}
B725334:{NFSU2_TR(0x725334);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B725337:{NFSU2_TR(0x725337);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),2);
s2(u32(r4(U+8)),r2(U+12));
}
B72533c:{NFSU2_TR(0x72533c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B72533f:{NFSU2_TR(0x72533f);
__builtin_memmove((R+24),gp(0x8b466c),4);
}
B725345:{NFSU2_TR(0x725345);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B725348:{NFSU2_TR(0x725348);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B72534b:{NFSU2_TR(0x72534b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))|u32(u32(0xffffffffull))));
s4(u32(r4(U+4)),r4(U+8));
}
B72534f:{NFSU2_TR(0x72534f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B725352:{NFSU2_TR(0x725352);
__builtin_memmove((R+8),gp(0x8b472c),2);
}
B725359:{NFSU2_TR(0x725359);
__builtin_memmove((R+24),gp(0x8b466c),4);
}
B72535f:{NFSU2_TR(0x72535f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B725362:{NFSU2_TR(0x725362);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B725365:{NFSU2_TR(0x725365);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B725366:{NFSU2_TR(0x725366);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B725369:{NFSU2_TR(0x725369);
u8 U[14];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B72536e:{NFSU2_TR(0x72536e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72531au);}goto L72531a;}}
}
B725370:L725370:{c.instructions+=6;NFSU2_TR(0x725370);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B725373:{NFSU2_TR(0x725373);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B725374:{NFSU2_TR(0x725374);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B725375:{NFSU2_TR(0x725375);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B725376:{NFSU2_TR(0x725376);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B725377:{NFSU2_TR(0x725377);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B725378:L725378:{c.instructions+=18;NFSU2_TR(0x725378);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725379:{NFSU2_TR(0x725379);
__builtin_memmove((R+20),(R+16),4);
}
B72537b:{NFSU2_TR(0x72537b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B72537e:{NFSU2_TR(0x72537e);
__builtin_memmove((R+8),gp(0x8b466c),4);
}
B725384:{NFSU2_TR(0x725384);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B725388:{NFSU2_TR(0x725388);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725389:{NFSU2_TR(0x725389);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72538c:{NFSU2_TR(0x72538c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72538f:{NFSU2_TR(0x72538f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B725392:{NFSU2_TR(0x725392);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B725394:{NFSU2_TR(0x725394);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B725397:{NFSU2_TR(0x725397);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725398:{NFSU2_TR(0x725398);
w4(R+24,u32(r1(R+4)));
}
B72539b:{NFSU2_TR(0x72539b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72539c:{NFSU2_TR(0x72539c);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B72539f:{NFSU2_TR(0x72539f);
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
B7253a1:{NFSU2_TR(0x7253a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7253a4:{NFSU2_TR(0x7253a4);
if(r1(R+518)){{goto L725466;}}
}
B7253aa:L7253aa:{c.instructions+=4;NFSU2_TR(0x7253aa);
w4(R+4,u32(s32(s16(m2(0x8b460c)))));
}
B7253b1:{NFSU2_TR(0x7253b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7253b5:{NFSU2_TR(0x7253b5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7253b7:{NFSU2_TR(0x7253b7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7253f3;}}
}
B7253b9:L7253b9:{c.instructions+=1;NFSU2_TR(0x7253b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6dull))));
__builtin_memmove((R+4),(U+0),4);
}
B7253bc:L7253bc:{c.instructions+=3;NFSU2_TR(0x7253bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffb9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B7253c0:{NFSU2_TR(0x7253c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7253c3:{NFSU2_TR(0x7253c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7253db;}}
}
B7253c5:L7253c5:{c.instructions+=3;NFSU2_TR(0x7253c5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7253c7:{NFSU2_TR(0x7253c7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffff93ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7253ca:{NFSU2_TR(0x7253ca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7253db;}}
}
B7253cc:L7253cc:{c.instructions+=2;NFSU2_TR(0x7253cc);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7253ce:{NFSU2_TR(0x7253ce);
if(r1(R+518)){{goto L7253db;}}
}
B7253d0:L7253d0:{c.instructions+=3;NFSU2_TR(0x7253d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7253d3:{NFSU2_TR(0x7253d3);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffbaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7253d6:{NFSU2_TR(0x7253d6);
if(r1(R+518)){{goto L7253db;}}
}
B7253d8:L7253d8:{c.instructions+=1;NFSU2_TR(0x7253d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7253db:L7253db:{c.instructions+=5;NFSU2_TR(0x7253db);
w4(R+24,u32(s32(s16(m2(0x8b460c)))));
}
B7253e2:{NFSU2_TR(0x7253e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7253e5:{NFSU2_TR(0x7253e5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x90ull))));
}
B7253eb:{NFSU2_TR(0x7253eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7253ee:{NFSU2_TR(0x7253ee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7253bcu);}goto L7253bc;}}
}
B7253f0:L7253f0:{c.instructions+=1;NFSU2_TR(0x7253f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7253f3:L7253f3:{c.instructions+=2;NFSU2_TR(0x7253f3);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7253f7:{NFSU2_TR(0x7253f7);
if(r1(R+518)){{goto L725466;}}
}
B7253f9:L7253f9:{c.instructions+=6;NFSU2_TR(0x7253f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7253fc:{NFSU2_TR(0x7253fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7253ff:{NFSU2_TR(0x7253ff);
u8 U[12];
w4(U+0,u32(u32(u32(0x6dull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B725403:{NFSU2_TR(0x725403);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B725405:{NFSU2_TR(0x725405);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B725408:{NFSU2_TR(0x725408);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L725458;}}
}
B72540a:L72540a:{c.instructions+=2;NFSU2_TR(0x72540a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72540c:{NFSU2_TR(0x72540c);
if(r1(R+518)){{goto L725458;}}
}
B72540e:L72540e:{c.instructions+=2;NFSU2_TR(0x72540e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B725412:{NFSU2_TR(0x725412);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L725458;}}
}
B725414:L725414:{c.instructions+=15;NFSU2_TR(0x725414);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B725418:{NFSU2_TR(0x725418);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x26ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72541c:{NFSU2_TR(0x72541c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x27ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B725420:{NFSU2_TR(0x725420);
__builtin_memmove((R+8),gp(0x8b4610),4);
}
B725426:{NFSU2_TR(0x725426);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B725429:{NFSU2_TR(0x725429);
__builtin_memmove((R+0),gp(0x8b466c),4);
}
B72542e:{NFSU2_TR(0x72542e);
u8 U[13];
w4(U+0,u32(u32(u32(0x6dull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B725433:{NFSU2_TR(0x725433);
__builtin_memmove((R+0),gp(0x8b466c),4);
}
B725438:{NFSU2_TR(0x725438);
u8 U[13];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B72543d:{NFSU2_TR(0x72543d);
__builtin_memmove((R+0),gp(0x8b466c),4);
}
B725442:{NFSU2_TR(0x725442);
u8 U[13];
w4(U+0,u32(u32(u32(0x27ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B725447:{NFSU2_TR(0x725447);
__builtin_memmove((R+0),gp(0x8b4610),4);
}
B72544c:{NFSU2_TR(0x72544c);
__builtin_memmove((R+8),gp(0x8b466c),4);
}
B725452:{NFSU2_TR(0x725452);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B725456:{NFSU2_TR(0x725456);
{goto L72547b;}
}
B725458:L725458:{c.instructions+=2;NFSU2_TR(0x725458);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x1ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72545b:{NFSU2_TR(0x72545b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L725466;}}
}
B72545d:L72545d:{c.instructions+=2;NFSU2_TR(0x72545d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B72545f:{NFSU2_TR(0x72545f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L725466;}}
}
B725461:L725461:{c.instructions+=2;NFSU2_TR(0x725461);
u8 U[1];
w1(U+0,u8(0x2ull));
s1(u32(r4(R+24)),r1(U+0));
}
B725464:{NFSU2_TR(0x725464);
{goto L72547b;}
}
B725466:L725466:{c.instructions+=5;NFSU2_TR(0x725466);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x27ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72546a:{NFSU2_TR(0x72546a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x26ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72546e:{NFSU2_TR(0x72546e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B725472:{NFSU2_TR(0x725472);
__builtin_memmove((R+4),gp(0x8b4610),4);
}
B725478:{NFSU2_TR(0x725478);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72547b:L72547b:{c.instructions+=5;NFSU2_TR(0x72547b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72547c:{NFSU2_TR(0x72547c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72547d:{NFSU2_TR(0x72547d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72547e:{NFSU2_TR(0x72547e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72547f:{NFSU2_TR(0x72547f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B725480:L725480:{c.instructions+=3;NFSU2_TR(0x725480);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B725484:{NFSU2_TR(0x725484);
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
B725486:{NFSU2_TR(0x725486);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7254b0;}}
}
B725488:L725488:{c.instructions+=5;NFSU2_TR(0x725488);
w4(R+4,u32(s32(s16(m2(0x8b460c)))));
}
B72548f:{NFSU2_TR(0x72548f);
__builtin_memmove((R+0),(R+8),4);
}
B725491:{NFSU2_TR(0x725491);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B725496:{NFSU2_TR(0x725496);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B725498:{NFSU2_TR(0x725498);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7254b0;}}
}
B72549a:L72549a:{c.instructions+=5;NFSU2_TR(0x72549a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B72549d:{NFSU2_TR(0x72549d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7254a0:{NFSU2_TR(0x7254a0);
w4(R+4,u32(u32(r4(R+4))+u32(m4(0x8b466c))));
}
B7254a6:{NFSU2_TR(0x7254a6);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6dull))));
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
B7254aa:{NFSU2_TR(0x7254aa);
if(r1(R+518)){{goto L7254b0;}}
}
B7254ac:L7254ac:{c.instructions+=2;NFSU2_TR(0x7254ac);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+8)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B7254ae:{NFSU2_TR(0x7254ae);
if(r1(R+518)){{goto L7254b3;}}
}
B7254b0:L7254b0:{c.instructions+=2;NFSU2_TR(0x7254b0);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7254b2:{NFSU2_TR(0x7254b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7254b3:L7254b3:{c.instructions+=1;NFSU2_TR(0x7254b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7254b4:L7254b4:{c.instructions+=5;NFSU2_TR(0x7254b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7254b8:{NFSU2_TR(0x7254b8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7254be:{NFSU2_TR(0x7254be);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),m4(0x8b4724)));
w1(R+523,scarry<u32>(r4(R+0),m4(0x8b4724)));
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b4724))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7254c4:{NFSU2_TR(0x7254c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7254c7:{NFSU2_TR(0x7254c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7254cdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7254cd:L7254cd:{c.instructions+=2;NFSU2_TR(0x7254cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7254ce:{NFSU2_TR(0x7254ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7254cf:L7254cf:{c.instructions+=7;NFSU2_TR(0x7254cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7254d3:{NFSU2_TR(0x7254d3);
__builtin_memmove((R+0),(R+4),4);
}
B7254d5:{NFSU2_TR(0x7254d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B7254d8:{NFSU2_TR(0x7254d8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B7254db:{NFSU2_TR(0x7254db);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B7254e1:{NFSU2_TR(0x7254e1);
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
B7254e3:{NFSU2_TR(0x7254e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7254ee;}}
}
B7254e5:L7254e5:{c.instructions+=2;NFSU2_TR(0x7254e5);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8181d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B7254ed:{NFSU2_TR(0x7254ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7254ee:L7254ee:{c.instructions+=2;NFSU2_TR(0x7254ee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7254f1:{NFSU2_TR(0x7254f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L725501;}}
}
B7254f3:L7254f3:{c.instructions+=5;NFSU2_TR(0x7254f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7254f6:{NFSU2_TR(0x7254f6);
w4(R+4,u32(0x8183d8ull));
}
B7254fb:{NFSU2_TR(0x7254fb);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7254fd:{NFSU2_TR(0x7254fd);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B725500:{NFSU2_TR(0x725500);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B725501:L725501:{c.instructions+=2;NFSU2_TR(0x725501);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B725504:{NFSU2_TR(0x725504);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L725510;}}
}
B725506:L725506:{c.instructions+=2;NFSU2_TR(0x725506);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8181d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B72550e:{NFSU2_TR(0x72550e);
{goto L72551d;}
}
B725510:L725510:{c.instructions+=4;NFSU2_TR(0x725510);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B725513:{NFSU2_TR(0x725513);
w4(R+4,u32(0x8183d8ull));
}
B725518:{NFSU2_TR(0x725518);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B72551a:{NFSU2_TR(0x72551a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B72551d:L72551d:{c.instructions+=2;NFSU2_TR(0x72551d);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72551f:{NFSU2_TR(0x72551f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B725520:L725520:{c.instructions+=2;NFSU2_TR(0x725520);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b4476),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B725527:{NFSU2_TR(0x725527);
if(r1(R+518)){{goto L725531;}}
}
B725529:L725529:{c.instructions+=2;NFSU2_TR(0x725529);
u8 U[3];
w1(R+512,carry<u8>(m1(0x8b4475),u8(0x1ull)));
w1(R+523,scarry<u8>(m1(0x8b4475),u8(0x1ull)));
s1(0x8b4475,u8(u32(m1(0x8b4475))+u32(u8(0x1ull))));
w1(R+519,u8(s8(m1(0x8b4475))<s8(u8(0x0ull))));
w1(R+518,u8((m1(0x8b4475))==(u8(0x0ull))));
w1(U+0,u8(u32(m1(0x8b4475))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B725530:{NFSU2_TR(0x725530);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B725531:L725531:{c.instructions+=3;NFSU2_TR(0x725531);
__builtin_memmove((R+0),gp(0x8b446c),4);
}
B725536:{NFSU2_TR(0x725536);
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
B725538:{NFSU2_TR(0x725538);
if(r1(R+518)){{goto L72554b;}}
}
B72553a:L72553a:{c.instructions+=1;NFSU2_TR(0x72553a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72553b:L72553b:{c.instructions+=3;NFSU2_TR(0x72553b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72553e:{NFSU2_TR(0x72553e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B725540:{NFSU2_TR(0x725540);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725543ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B725543:L725543:{c.instructions+=4;NFSU2_TR(0x725543);
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
B725545:{NFSU2_TR(0x725545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725546:{NFSU2_TR(0x725546);
__builtin_memmove((R+0),(R+24),4);
}
B725548:{NFSU2_TR(0x725548);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72553bu);}goto L72553b;}}
}
B72554a:L72554a:{c.instructions+=1;NFSU2_TR(0x72554a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72554b:L72554b:{c.instructions+=1;NFSU2_TR(0x72554b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72554c:L72554c:{c.instructions+=21;NFSU2_TR(0x72554c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72554d:{NFSU2_TR(0x72554d);
__builtin_memmove((R+20),(R+16),4);
}
B72554f:{NFSU2_TR(0x72554f);
{u32 ea_=u32(u32(8153368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725555:{NFSU2_TR(0x725555);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725556:{NFSU2_TR(0x725556);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725559:{NFSU2_TR(0x725559);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72555a:{NFSU2_TR(0x72555a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72555c:{NFSU2_TR(0x72555c);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72555f:{NFSU2_TR(0x72555f);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B725561:{NFSU2_TR(0x725561);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B725563:{NFSU2_TR(0x725563);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725566:{NFSU2_TR(0x725566);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B725568:{NFSU2_TR(0x725568);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B72556a:{NFSU2_TR(0x72556a);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B72556c:{NFSU2_TR(0x72556c);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B725572:{NFSU2_TR(0x725572);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B725575:{NFSU2_TR(0x725575);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B725577:{NFSU2_TR(0x725577);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B725579:{NFSU2_TR(0x725579);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72557c:{NFSU2_TR(0x72557c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72557f:{NFSU2_TR(0x72557f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725584ull));
TAIL_STATIC(0x72a0aeu,72a);
}
B725584:L725584:{c.instructions+=5;NFSU2_TR(0x725584);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B725587:{NFSU2_TR(0x725587);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B725589:{NFSU2_TR(0x725589);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72558c:{NFSU2_TR(0x72558c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72558f:{NFSU2_TR(0x72558f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725594ull));
TAIL_STATIC(0x72a032u,72a);
}
B725594:L725594:{c.instructions+=5;NFSU2_TR(0x725594);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725595:{NFSU2_TR(0x725595);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B725598:{NFSU2_TR(0x725598);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B725599:{NFSU2_TR(0x725599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72559a:{NFSU2_TR(0x72559a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72559b:L72559b:{c.instructions+=7;NFSU2_TR(0x72559b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72559c:{NFSU2_TR(0x72559c);
__builtin_memmove((R+20),(R+16),4);
}
B72559e:{NFSU2_TR(0x72559e);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x30ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7255a1:{NFSU2_TR(0x7255a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7255a2:{NFSU2_TR(0x7255a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7255a3:{NFSU2_TR(0x7255a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7255a4:{NFSU2_TR(0x7255a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7255a9ull));
TAIL_STATIC(0x721f99u,721);
}
B7255a9:L7255a9:{c.instructions+=4;NFSU2_TR(0x7255a9);
w4(R+0,u32(m1(0x8b44df)));
}
B7255b0:{NFSU2_TR(0x7255b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7255b3:{NFSU2_TR(0x7255b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7255b4:{NFSU2_TR(0x7255b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7255b9ull));
TAIL_STATIC(0x724792u,724);
}
B7255b9:L7255b9:{c.instructions+=3;NFSU2_TR(0x7255b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7255ba:{NFSU2_TR(0x7255ba);
__builtin_memmove(gp(0x8b4754),(R+0),4);
}
B7255bf:{NFSU2_TR(0x7255bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7255c4ull));
TAIL_STATIC(0x721fa7u,721);
}
B7255c4:L7255c4:{c.instructions+=5;NFSU2_TR(0x7255c4);
__builtin_memmove((R+8),gp(0x8b44df),1);
}
B7255ca:{NFSU2_TR(0x7255ca);
w4(R+4,u32(r1(R+8)));
}
B7255cd:{NFSU2_TR(0x7255cd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7255cf:{NFSU2_TR(0x7255cf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7255d1:{NFSU2_TR(0x7255d1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7255eb;}}
}
B7255d3:L7255d3:{c.instructions+=1;NFSU2_TR(0x7255d3);
__builtin_memmove((R+24),gp(0x8b4754),4);
}
B7255d9:L7255d9:{c.instructions+=5;NFSU2_TR(0x7255d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b473cull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B7255e0:{NFSU2_TR(0x7255e0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7255e1:{NFSU2_TR(0x7255e1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x100ull))));
}
B7255e7:{NFSU2_TR(0x7255e7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7255e9:{NFSU2_TR(0x7255e9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7255d9u);}goto L7255d9;}}
}
B7255eb:L7255eb:{c.instructions+=2;NFSU2_TR(0x7255eb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7255ed:{NFSU2_TR(0x7255ed);
{goto L7255f5;}
}
B7255ef:L7255ef:{c.instructions+=1;NFSU2_TR(0x7255ef);
__builtin_memmove((R+8),gp(0x8b44df),1);
}
B7255f5:L7255f5:{c.instructions+=9;NFSU2_TR(0x7255f5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7255f7:{NFSU2_TR(0x7255f7);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7255fa:{NFSU2_TR(0x7255fa);
__builtin_memmove((R+1),(R+12),1);
}
B7255fc:{NFSU2_TR(0x7255fc);
w4(R+0,u32(r2(R+0)));
}
B7255ff:{NFSU2_TR(0x7255ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B725602:{NFSU2_TR(0x725602);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B725605:{NFSU2_TR(0x725605);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72560b:{NFSU2_TR(0x72560b);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72560e:{NFSU2_TR(0x72560e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72561e;}}
}
B725610:L725610:{c.instructions+=3;NFSU2_TR(0x725610);
__builtin_memmove((R+0),gp(0x8b473c),4);
}
B725615:{NFSU2_TR(0x725615);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w1(U+8,u8(0x7full));
s1(u32(r4(U+4)),r1(U+8));
}
B725619:{NFSU2_TR(0x725619);
{goto L725866;}
}
B72561e:L72561e:{c.instructions+=3;NFSU2_TR(0x72561e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B725620:{NFSU2_TR(0x725620);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B725622:{NFSU2_TR(0x725622);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L725641;}}
}
B725624:L725624:{c.instructions+=6;NFSU2_TR(0x725624);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b473cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B72562b:{NFSU2_TR(0x72562b);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B72562f:{NFSU2_TR(0x72562f);
w4(R+4,u32(m1(0x8b44df)));
}
B725636:{NFSU2_TR(0x725636);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B725637:{NFSU2_TR(0x725637);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B725639:{NFSU2_TR(0x725639);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x725624u);}goto L725624;}}
}
B72563b:L72563b:{c.instructions+=1;NFSU2_TR(0x72563b);
__builtin_memmove((R+8),gp(0x8b44df),1);
}
B725641:L725641:{c.instructions+=6;NFSU2_TR(0x725641);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725644:{NFSU2_TR(0x725644);
{u32 ea_=u32(u32(9127636u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B72564a:{NFSU2_TR(0x72564a);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72564d:{NFSU2_TR(0x72564d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72564f:{NFSU2_TR(0x72564f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B725652:{NFSU2_TR(0x725652);
if(r1(R+514)){{goto L72573c;}}
}
B725658:L725658:{c.instructions+=4;NFSU2_TR(0x725658);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B72565b:{NFSU2_TR(0x72565b);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(U+0))<(u8(0x5ull))));
}
B72565e:{NFSU2_TR(0x72565e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B725662:{NFSU2_TR(0x725662);
if(r1(R+512)){{goto L7256c4;}}
}
B725664:L725664:{c.instructions+=7;NFSU2_TR(0x725664);
{u32 ea_=u32(u32(9127640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72566a:{NFSU2_TR(0x72566a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72566d:{NFSU2_TR(0x72566d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B725671:{NFSU2_TR(0x725671);
{u32 ea_=u32(u32(9127636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725677:{NFSU2_TR(0x725677);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72567a:{NFSU2_TR(0x72567a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72567b:{NFSU2_TR(0x72567b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725680ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72554cu);}goto L72554c;}
}
B725680:L725680:{c.instructions+=18;NFSU2_TR(0x725680);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725683:{NFSU2_TR(0x725683);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B725689:{NFSU2_TR(0x725689);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B72568c:{NFSU2_TR(0x72568c);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72568f:{NFSU2_TR(0x72568f);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725692:{NFSU2_TR(0x725692);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B725695:{NFSU2_TR(0x725695);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725698:{NFSU2_TR(0x725698);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72569b:{NFSU2_TR(0x72569b);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7256a1:{NFSU2_TR(0x7256a1);
__builtin_memmove((R+4),gp(0x8b473c),4);
}
B7256a7:{NFSU2_TR(0x7256a7);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7256aa:{NFSU2_TR(0x7256aa);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7256ad:{NFSU2_TR(0x7256ad);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7256b0:{NFSU2_TR(0x7256b0);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B7256b3:{NFSU2_TR(0x7256b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7256b6:{NFSU2_TR(0x7256b6);
__builtin_memmove((R+4),gp(0x8b4740),4);
}
B7256bc:{NFSU2_TR(0x7256bc);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7256bf:{NFSU2_TR(0x7256bf);
{goto L725866;}
}
B7256c4:L7256c4:{c.instructions+=10;NFSU2_TR(0x7256c4);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7256ca:{NFSU2_TR(0x7256ca);
w4(R+0,u32(r1(R+8)));
}
B7256cd:{NFSU2_TR(0x7256cd);
{u32 ea_=u32((r4(R+0)*4u)+u32(9127632u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7256d4:{NFSU2_TR(0x7256d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7256d7:{NFSU2_TR(0x7256d7);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7256dd:{NFSU2_TR(0x7256dd);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7256e1:{NFSU2_TR(0x7256e1);
{u32 ea_=u32(u32(9127636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7256e7:{NFSU2_TR(0x7256e7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7256ea:{NFSU2_TR(0x7256ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7256eb:{NFSU2_TR(0x7256eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7256f0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72554cu);}goto L72554c;}
}
B7256f0:L7256f0:{c.instructions+=15;NFSU2_TR(0x7256f0);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7256f3:{NFSU2_TR(0x7256f3);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7256f9:{NFSU2_TR(0x7256f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7256fc:{NFSU2_TR(0x7256fc);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7256ff:{NFSU2_TR(0x7256ff);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725702:{NFSU2_TR(0x725702);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B725705:{NFSU2_TR(0x725705);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725708:{NFSU2_TR(0x725708);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72570b:{NFSU2_TR(0x72570b);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B725711:{NFSU2_TR(0x725711);
__builtin_memmove((R+4),gp(0x8b473c),4);
}
B725717:{NFSU2_TR(0x725717);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B72571a:{NFSU2_TR(0x72571a);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72571d:{NFSU2_TR(0x72571d);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725720:{NFSU2_TR(0x725720);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B725723:{NFSU2_TR(0x725723);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B725726:L725726:{c.instructions+=4;NFSU2_TR(0x725726);
w4(R+0,u32(m1(0x8b44df)));
}
B72572d:{NFSU2_TR(0x72572d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4738ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B725734:{NFSU2_TR(0x725734);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B725737:{NFSU2_TR(0x725737);
{goto L725866;}
}
B72573c:L72573c:{c.instructions+=6;NFSU2_TR(0x72573c);
w4(R+8,u32(r1(R+8)));
}
B72573f:{NFSU2_TR(0x72573f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b46d0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B725746:{NFSU2_TR(0x725746);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B725748:{NFSU2_TR(0x725748);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72574a:{NFSU2_TR(0x72574a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72574d:{NFSU2_TR(0x72574d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7257c4;}}
}
B72574f:L72574f:{c.instructions+=14;NFSU2_TR(0x72574f);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725755:{NFSU2_TR(0x725755);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B725758:{NFSU2_TR(0x725758);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72575b:{NFSU2_TR(0x72575b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72575e:{NFSU2_TR(0x72575e);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B725764:{NFSU2_TR(0x725764);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B725768:{NFSU2_TR(0x725768);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72576e:{NFSU2_TR(0x72576e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B725770:{NFSU2_TR(0x725770);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B725776:{NFSU2_TR(0x725776);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72577a:{NFSU2_TR(0x72577a);
{u32 ea_=u32(u32(9127636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725780:{NFSU2_TR(0x725780);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B725783:{NFSU2_TR(0x725783);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725784:{NFSU2_TR(0x725784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725789ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72554cu);}goto L72554c;}
}
B725789:L725789:{c.instructions+=16;NFSU2_TR(0x725789);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72578c:{NFSU2_TR(0x72578c);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B725792:{NFSU2_TR(0x725792);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B725795:{NFSU2_TR(0x725795);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B725798:{NFSU2_TR(0x725798);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72579b:{NFSU2_TR(0x72579b);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72579e:{NFSU2_TR(0x72579e);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7257a1:{NFSU2_TR(0x7257a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7257a4:{NFSU2_TR(0x7257a4);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7257aa:{NFSU2_TR(0x7257aa);
__builtin_memmove((R+4),gp(0x8b473c),4);
}
B7257b0:{NFSU2_TR(0x7257b0);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7257b3:{NFSU2_TR(0x7257b3);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7257b6:{NFSU2_TR(0x7257b6);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7257b9:{NFSU2_TR(0x7257b9);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B7257bc:{NFSU2_TR(0x7257bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7257bf:{NFSU2_TR(0x7257bf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x725726u);}goto L725726;}
}
B7257c4:L7257c4:{c.instructions+=3;NFSU2_TR(0x7257c4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7257c6:{NFSU2_TR(0x7257c6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7257c8:{NFSU2_TR(0x7257c8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L725866;}}
}
B7257ce:L7257ce:{c.instructions+=7;NFSU2_TR(0x7257ce);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7257d1:{NFSU2_TR(0x7257d1);
__builtin_memmove((R+24),(R+28),4);
}
B7257d3:{NFSU2_TR(0x7257d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B7257d6:{NFSU2_TR(0x7257d6);
{u32 ea_=u32(r4(R+24)+u32(9127636u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B7257dc:{NFSU2_TR(0x7257dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7257de:{NFSU2_TR(0x7257de);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7257e1:{NFSU2_TR(0x7257e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L725856;}}
}
B7257e3:L7257e3:{c.instructions+=6;NFSU2_TR(0x7257e3);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7257e6:{NFSU2_TR(0x7257e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b46d8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7257ec:{NFSU2_TR(0x7257ec);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B7257ee:{NFSU2_TR(0x7257ee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7257f0:{NFSU2_TR(0x7257f0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7257f3:{NFSU2_TR(0x7257f3);
if(r1(R+514)){{goto L725856;}}
}
B7257f5:L7257f5:{c.instructions+=10;NFSU2_TR(0x7257f5);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7257f8:{NFSU2_TR(0x7257f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B7257fb:{NFSU2_TR(0x7257fb);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7257ff:{NFSU2_TR(0x7257ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B725802:{NFSU2_TR(0x725802);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725804:{NFSU2_TR(0x725804);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B725808:{NFSU2_TR(0x725808);
{u32 ea_=u32(r4(R+24)+u32(9127636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72580e:{NFSU2_TR(0x72580e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B725811:{NFSU2_TR(0x725811);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725812:{NFSU2_TR(0x725812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725817ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72554cu);}goto L72554c;}
}
B725817:L725817:{c.instructions+=17;NFSU2_TR(0x725817);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72581a:{NFSU2_TR(0x72581a);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B725820:{NFSU2_TR(0x725820);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B725823:{NFSU2_TR(0x725823);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B725826:{NFSU2_TR(0x725826);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725829:{NFSU2_TR(0x725829);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72582c:{NFSU2_TR(0x72582c);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72582f:{NFSU2_TR(0x72582f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b473cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B725835:{NFSU2_TR(0x725835);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72583b:{NFSU2_TR(0x72583b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B72583e:{NFSU2_TR(0x72583e);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B725841:{NFSU2_TR(0x725841);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B725844:{NFSU2_TR(0x725844);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725847:{NFSU2_TR(0x725847);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72584a:{NFSU2_TR(0x72584a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b4740ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B725850:{NFSU2_TR(0x725850);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B725853:{NFSU2_TR(0x725853);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B725856:L725856:{c.instructions+=4;NFSU2_TR(0x725856);
w4(R+0,u32(m1(0x8b44df)));
}
B72585d:{NFSU2_TR(0x72585d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B72585e:{NFSU2_TR(0x72585e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B725860:{NFSU2_TR(0x725860);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7257ceu);}goto L7257ce;}}
}
B725866:L725866:{c.instructions+=3;NFSU2_TR(0x725866);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B725867:{NFSU2_TR(0x725867);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x100ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72586d:{NFSU2_TR(0x72586d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7255efu);}goto L7255ef;}}
}
B725873:L725873:{c.instructions+=5;NFSU2_TR(0x725873);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B725874:{NFSU2_TR(0x725874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B725875:{NFSU2_TR(0x725875);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B725876:{NFSU2_TR(0x725876);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B725877:{NFSU2_TR(0x725877);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B725878:L725878:{c.instructions+=9;NFSU2_TR(0x725878);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725879:{NFSU2_TR(0x725879);
__builtin_memmove((R+20),(R+16),4);
}
B72587b:{NFSU2_TR(0x72587b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72587f:{NFSU2_TR(0x72587f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725880:{NFSU2_TR(0x725880);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B725882:{NFSU2_TR(0x725882);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b44df),1);
w1(R+512,u8((r1(U+0))<(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B725889:{NFSU2_TR(0x725889);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72588a:{NFSU2_TR(0x72588a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72588d:{NFSU2_TR(0x72588d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7258be;}}
}
B72588f:L72588f:{c.instructions+=4;NFSU2_TR(0x72588f);
w4(R+8,u32(0x8b473cull));
}
B725894:{NFSU2_TR(0x725894);
__builtin_memmove((R+0),(R+28),4);
}
B725896:{NFSU2_TR(0x725896);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B725898:{NFSU2_TR(0x725898);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725899:L725899:{c.instructions+=11;NFSU2_TR(0x725899);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B72589c:{NFSU2_TR(0x72589c);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+12,u32(r1(U+8)));
}
B7258a0:{NFSU2_TR(0x7258a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7258a3:{NFSU2_TR(0x7258a3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7258a4:{NFSU2_TR(0x7258a4);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7258a7:{NFSU2_TR(0x7258a7);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7258ad:{NFSU2_TR(0x7258ad);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7258af:{NFSU2_TR(0x7258af);
w4(R+12,u32(m1(0x8b44df)));
}
B7258b6:{NFSU2_TR(0x7258b6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B7258b9:{NFSU2_TR(0x7258b9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7258bb:{NFSU2_TR(0x7258bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x725899u);}goto L725899;}}
}
B7258bd:L7258bd:{c.instructions+=1;NFSU2_TR(0x7258bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7258be:L7258be:{c.instructions+=2;NFSU2_TR(0x7258be);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b46ec),4);
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
B7258c5:{NFSU2_TR(0x7258c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7258cc;}}
}
B7258c7:L7258c7:{c.instructions+=2;NFSU2_TR(0x7258c7);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B7258c9:{NFSU2_TR(0x7258c9);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7258cc:L7258cc:{c.instructions+=4;NFSU2_TR(0x7258cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7258cd:{NFSU2_TR(0x7258cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7258ce:{NFSU2_TR(0x7258ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7258cf:{NFSU2_TR(0x7258cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7258d0:L7258d0:{c.instructions+=1;NFSU2_TR(0x7258d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7258d5ull));
TAIL_STATIC(0x721f99u,721);
}
B7258d5:L7258d5:{c.instructions+=2;NFSU2_TR(0x7258d5);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4754),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7258db:{NFSU2_TR(0x7258db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7258e0ull));
TAIL_STATIC(0x724894u,724);
}
B7258e0:L7258e0:{c.instructions+=2;NFSU2_TR(0x7258e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7258e1:{NFSU2_TR(0x7258e1);
TAIL_STATIC(0x721fa7u,721);
}
B7258e6:L7258e6:{c.instructions+=6;NFSU2_TR(0x7258e6);
__builtin_memmove((R+0),gp(0x8b46e8),1);
}
B7258eb:{NFSU2_TR(0x7258eb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7258ed:{NFSU2_TR(0x7258ed);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7258ee:{NFSU2_TR(0x7258ee);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7258f0:{NFSU2_TR(0x7258f0);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7258f2:{NFSU2_TR(0x7258f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7258ff;}}
}
B7258f4:L7258f4:{c.instructions+=2;NFSU2_TR(0x7258f4);
__builtin_memmove(gp(0x8b46ec),(R+4),4);
}
B7258fa:{NFSU2_TR(0x7258fa);
{goto L72598d;}
}
B7258ff:L7258ff:{c.instructions+=2;NFSU2_TR(0x7258ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B725901:{NFSU2_TR(0x725901);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72591f;}}
}
B725903:L725903:{c.instructions+=4;NFSU2_TR(0x725903);
__builtin_memmove(gp(0x8b46ec),(R+8),4);
}
B725909:{NFSU2_TR(0x725909);
s4(0x8b46d4,u32(0x42b40000ull));
}
B725913:{NFSU2_TR(0x725913);
s4(0x8b46d8,u32(0x43870000ull));
}
B72591d:{NFSU2_TR(0x72591d);
{goto L725995;}
}
B72591f:L72591f:{c.instructions+=2;NFSU2_TR(0x72591f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B725921:{NFSU2_TR(0x725921);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L725957;}}
}
B725923:L725923:{c.instructions+=6;NFSU2_TR(0x725923);
s4(0x8b46ec,u32(0x2ull));
}
B72592d:{NFSU2_TR(0x72592d);
s4(0x8b46d4,u32(0x42340000ull));
}
B725937:{NFSU2_TR(0x725937);
s4(0x8b46d8,u32(0x43070000ull));
}
B725941:{NFSU2_TR(0x725941);
s4(0x8b46dc,u32(0x43610000ull));
}
B72594b:{NFSU2_TR(0x72594b);
s4(0x8b46e0,u32(0x439d8000ull));
}
B725955:{NFSU2_TR(0x725955);
{goto L725995;}
}
B725957:L725957:{c.instructions+=2;NFSU2_TR(0x725957);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x6ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B725959:{NFSU2_TR(0x725959);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L725995;}}
}
B72595b:L72595b:{c.instructions+=5;NFSU2_TR(0x72595b);
s4(0x8b46ec,u32(0x3ull));
}
B725965:{NFSU2_TR(0x725965);
s4(0x8b46d8,u32(0x42340000ull));
}
B72596f:{NFSU2_TR(0x72596f);
s4(0x8b46dc,u32(0x43070000ull));
}
B725979:{NFSU2_TR(0x725979);
s4(0x8b46e0,u32(0x43610000ull));
}
B725983:{NFSU2_TR(0x725983);
s4(0x8b46e4,u32(0x439d8000ull));
}
B72598d:L72598d:{c.instructions+=2;NFSU2_TR(0x72598d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72598f:{NFSU2_TR(0x72598f);
{u32 ea_=u32(u32(9127636u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B725995:L725995:{c.instructions+=2;NFSU2_TR(0x725995);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b44df),1);
w1(R+512,u8((r1(U+3))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x2ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72599c:{NFSU2_TR(0x72599c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7259b2;}}
}
B72599e:L72599e:{c.instructions+=3;NFSU2_TR(0x72599e);
s2(0x8b4684,u16(0xc000ull));
}
B7259a7:{NFSU2_TR(0x7259a7);
s2(0x8b4686,u16(0x4000ull));
}
B7259b0:{NFSU2_TR(0x7259b0);
{goto L7259c4;}
}
B7259b2:L7259b2:{c.instructions+=2;NFSU2_TR(0x7259b2);
s2(0x8b4684,u16(0xe000ull));
}
B7259bb:{NFSU2_TR(0x7259bb);
s2(0x8b4686,u16(0x2000ull));
}
B7259c4:L7259c4:{c.instructions+=22;NFSU2_TR(0x7259c4);
__builtin_memmove((R+0),gp(0x8b452c),2);
}
B7259ca:{NFSU2_TR(0x7259ca);
__builtin_memmove(gp(0x8b4690),(R+0),2);
}
B7259d0:{NFSU2_TR(0x7259d0);
__builtin_memmove((R+0),gp(0x8b4528),2);
}
B7259d6:{NFSU2_TR(0x7259d6);
__builtin_memmove(gp(0x8b4692),(R+0),2);
}
B7259dc:{NFSU2_TR(0x7259dc);
__builtin_memmove((R+0),gp(0x8b452a),2);
}
B7259e2:{NFSU2_TR(0x7259e2);
__builtin_memmove(gp(0x8b4694),(R+0),2);
}
B7259e8:{NFSU2_TR(0x7259e8);
s2(0x8b469c,u16(0xe000ull));
}
B7259f1:{NFSU2_TR(0x7259f1);
s2(0x8b469e,u16(0x2000ull));
}
B7259fa:{NFSU2_TR(0x7259fa);
s2(0x8b46a0,u16(0xa000ull));
}
B725a03:{NFSU2_TR(0x725a03);
s2(0x8b46a2,u16(0x6000ull));
}
B725a0c:{NFSU2_TR(0x725a0c);
s2(0x8b46a8,u16(0xe000ull));
}
B725a15:{NFSU2_TR(0x725a15);
__builtin_memmove(gp(0x8b46aa),(R+4),2);
}
B725a1c:{NFSU2_TR(0x725a1c);
s2(0x8b46ac,u16(0x2000ull));
}
B725a25:{NFSU2_TR(0x725a25);
s2(0x8b46ae,u16(0xa000ull));
}
B725a2e:{NFSU2_TR(0x725a2e);
s2(0x8b46b0,u16(0x6000ull));
}
B725a37:{NFSU2_TR(0x725a37);
s2(0x8b46b4,u16(0xe000ull));
}
B725a40:{NFSU2_TR(0x725a40);
__builtin_memmove(gp(0x8b46b6),(R+4),2);
}
B725a47:{NFSU2_TR(0x725a47);
s2(0x8b46b8,u16(0x2000ull));
}
B725a50:{NFSU2_TR(0x725a50);
s2(0x8b46ba,u16(0xa000ull));
}
B725a59:{NFSU2_TR(0x725a59);
s2(0x8b46bc,u16(0x6000ull));
}
B725a62:{NFSU2_TR(0x725a62);
__builtin_memmove(gp(0x8b46be),(R+4),2);
}
B725a69:{NFSU2_TR(0x725a69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B725a6a:L725a6a:{c.instructions+=2;NFSU2_TR(0x725a6a);
s1(0x8b4721,u8(0x0ull));
}
B725a71:{NFSU2_TR(0x725a71);
{goto L725a7b;}
}
B725a73:L725a73:{c.instructions+=2;NFSU2_TR(0x725a73);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725a75:{NFSU2_TR(0x725a75);
u8 U[4];
__builtin_memmove((U+0),gp(0x783150),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725a7bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B725a7b:L725a7b:{c.instructions+=2;NFSU2_TR(0x725a7b);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4720),1);
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
B725a82:{NFSU2_TR(0x725a82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x725a73u);}goto L725a73;}}
}
B725a84:L725a84:{c.instructions+=1;NFSU2_TR(0x725a84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B725a85:L725a85:{c.instructions+=29;NFSU2_TR(0x725a85);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725a86:{NFSU2_TR(0x725a86);
__builtin_memmove((R+20),(R+16),4);
}
B725a88:{NFSU2_TR(0x725a88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4cull))));
}
B725a8b:{NFSU2_TR(0x725a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B725a8e:{NFSU2_TR(0x725a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B725a91:{NFSU2_TR(0x725a91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725a92:{NFSU2_TR(0x725a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B725a95:{NFSU2_TR(0x725a95);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B725a99:{NFSU2_TR(0x725a99);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B725a9c:{NFSU2_TR(0x725a9c);
__builtin_memmove(gp(0x8b475c),(R+8),1);
}
B725aa2:{NFSU2_TR(0x725aa2);
w4(R+8,u32(r2(R+24)));
}
B725aa5:{NFSU2_TR(0x725aa5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B725aa8:{NFSU2_TR(0x725aa8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725aa9:{NFSU2_TR(0x725aa9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
w2(U+4,u16(0xfffeull));
s2(u32(r4(U+0)),r2(U+4));
}
B725aaf:{NFSU2_TR(0x725aaf);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B725ab3:{NFSU2_TR(0x725ab3);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w2(U+4,u16(0x16ull));
s2(u32(r4(U+0)),r2(U+4));
}
B725ab9:{NFSU2_TR(0x725ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B725abc:{NFSU2_TR(0x725abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B725abf:{NFSU2_TR(0x725abf);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc2ull))));
w2(U+4,u16(0x10ull));
s2(u32(r4(U+0)),r2(U+4));
}
B725ac5:{NFSU2_TR(0x725ac5);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc6ull))));
w2(U+4,u16(0x10ull));
s2(u32(r4(U+0)),r2(U+4));
}
B725acb:{NFSU2_TR(0x725acb);
w4(R+24,u32(0x7c691cull));
}
B725ad0:{NFSU2_TR(0x725ad0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+28),(U+0),4);
}
B725ad3:{NFSU2_TR(0x725ad3);
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
B725ad4:{NFSU2_TR(0x725ad4);
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
B725ad5:{NFSU2_TR(0x725ad5);
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
B725ad6:{NFSU2_TR(0x725ad6);
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
B725ad7:{NFSU2_TR(0x725ad7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B725ad9:{NFSU2_TR(0x725ad9);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0x6ull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0x6ull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0x6ull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B725add:{NFSU2_TR(0x725add);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L725ae8;}}
}
B725adf:L725adf:{c.instructions+=2;NFSU2_TR(0x725adf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
w4(U+4,u32(0x3full));
s4(u32(r4(U+0)),r4(U+4));
}
B725ae6:{NFSU2_TR(0x725ae6);
{goto L725b07;}
}
B725ae8:L725ae8:{c.instructions+=2;NFSU2_TR(0x725ae8);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0x4ull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0x4ull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0x4ull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B725aec:{NFSU2_TR(0x725aec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L725af7;}}
}
B725aee:L725aee:{c.instructions+=2;NFSU2_TR(0x725aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
w4(U+4,u32(0x33ull));
s4(u32(r4(U+0)),r4(U+4));
}
B725af5:{NFSU2_TR(0x725af5);
{goto L725b07;}
}
B725af7:L725af7:{c.instructions+=2;NFSU2_TR(0x725af7);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0x2ull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0x2ull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0x2ull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B725afb:{NFSU2_TR(0x725afb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L725b07;}}
}
B725afd:L725afd:{c.instructions+=2;NFSU2_TR(0x725afd);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B725b03:{NFSU2_TR(0x725b03);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B725b07:L725b07:{c.instructions+=6;NFSU2_TR(0x725b07);
__builtin_memmove((R+0),gp(0x8b477c),4);
}
B725b0c:{NFSU2_TR(0x725b0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B725b0e:{NFSU2_TR(0x725b0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B725b11:{NFSU2_TR(0x725b11);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725b12:{NFSU2_TR(0x725b12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725b13:{NFSU2_TR(0x725b13);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725b16ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B725b16:L725b16:{c.instructions+=2;NFSU2_TR(0x725b16);
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
B725b18:{NFSU2_TR(0x725b18);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L725bb1;}}
}
B725b1e:L725b1e:{c.instructions+=3;NFSU2_TR(0x725b1e);
__builtin_memmove((R+0),gp(0x8b4780),4);
}
B725b23:{NFSU2_TR(0x725b23);
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
B725b25:{NFSU2_TR(0x725b25);
if(r1(R+518)){{goto L725b33;}}
}
B725b27:L725b27:{c.instructions+=3;NFSU2_TR(0x725b27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B725b29:{NFSU2_TR(0x725b29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725b2a:{NFSU2_TR(0x725b2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725b2dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B725b2d:L725b2d:{c.instructions+=1;NFSU2_TR(0x725b2d);
__builtin_memmove(gp(0x8b4780),(R+24),4);
}
B725b33:L725b33:{c.instructions+=6;NFSU2_TR(0x725b33);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725b35:{NFSU2_TR(0x725b35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B725b36:{NFSU2_TR(0x725b36);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B725b39:{NFSU2_TR(0x725b39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725b3a:{NFSU2_TR(0x725b3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725b3b:{NFSU2_TR(0x725b3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725b40ull));
TAIL_STATIC(0x727030u,727);
}
B725b40:L725b40:{c.instructions+=34;NFSU2_TR(0x725b40);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B725b43:{NFSU2_TR(0x725b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B725b46:{NFSU2_TR(0x725b46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B725b49:{NFSU2_TR(0x725b49);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1f4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B725b4f:{NFSU2_TR(0x725b4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725b50:{NFSU2_TR(0x725b50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725b51:{NFSU2_TR(0x725b51);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B725b53:{NFSU2_TR(0x725b53);
w4(R+4,u32(0x3e8ull));
}
B725b58:{NFSU2_TR(0x725b58);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x725b58);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x725b58);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B725b5a:{NFSU2_TR(0x725b5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725b5b:{NFSU2_TR(0x725b5b);
u8 U[4];
w4(U+0,u32(0x8b4780ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725b60:{NFSU2_TR(0x725b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B725b63:{NFSU2_TR(0x725b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x18000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B725b6a:{NFSU2_TR(0x725b6a);
__builtin_memmove(gp(0x8b4790),(R+24),4);
}
B725b70:{NFSU2_TR(0x725b70);
__builtin_memmove(gp(0x8b4794),(R+24),4);
}
B725b76:{NFSU2_TR(0x725b76);
__builtin_memmove(gp(0x8b478c),(R+24),4);
}
B725b7c:{NFSU2_TR(0x725b7c);
__builtin_memmove((R+4),(R+0),4);
}
B725b7e:{NFSU2_TR(0x725b7e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff0ull))));
}
B725b81:{NFSU2_TR(0x725b81);
__builtin_memmove((R+0),(R+4),4);
}
B725b83:{NFSU2_TR(0x725b83);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B725b84:{NFSU2_TR(0x725b84);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B725b86:{NFSU2_TR(0x725b86);
u8 U[6];
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B725b88:{NFSU2_TR(0x725b88);
__builtin_memmove(gp(0x8b4758),(R+0),4);
}
B725b8d:{NFSU2_TR(0x725b8d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B725b91:{NFSU2_TR(0x725b91);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(r4(R+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B725b94:{NFSU2_TR(0x725b94);
__builtin_memmove(gp(0x8b4784),(R+0),4);
}
B725b99:{NFSU2_TR(0x725b99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B725b9c:{NFSU2_TR(0x725b9c);
__builtin_memmove((R+0),gp(0x8b4778),4);
}
B725ba1:{NFSU2_TR(0x725ba1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+8),(U+0),4);
}
B725ba4:{NFSU2_TR(0x725ba4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725ba5:{NFSU2_TR(0x725ba5);
__builtin_memmove(gp(0x8b4788),(R+4),4);
}
B725bab:{NFSU2_TR(0x725bab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B725bad:{NFSU2_TR(0x725bad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725bae:{NFSU2_TR(0x725bae);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725bb1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B725bb1:L725bb1:{c.instructions+=4;NFSU2_TR(0x725bb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B725bb2:{NFSU2_TR(0x725bb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B725bb3:{NFSU2_TR(0x725bb3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B725bb4:{NFSU2_TR(0x725bb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B725bb5:L725bb5:{c.instructions+=3;NFSU2_TR(0x725bb5);
__builtin_memmove((R+0),gp(0x8b4780),4);
}
B725bba:{NFSU2_TR(0x725bba);
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
B725bbc:{NFSU2_TR(0x725bbc);
if(r1(R+518)){{goto L725bcb;}}
}
B725bbe:L725bbe:{c.instructions+=3;NFSU2_TR(0x725bbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B725bc0:{NFSU2_TR(0x725bc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725bc1:{NFSU2_TR(0x725bc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725bc4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B725bc4:L725bc4:{c.instructions+=1;NFSU2_TR(0x725bc4);
s4(0x8b4780,u32(u32(m4(0x8b4780))&u32(u32(0x0ull))));
}
B725bcb:L725bcb:{c.instructions+=3;NFSU2_TR(0x725bcb);
__builtin_memmove((R+0),gp(0x8b477c),4);
}
B725bd0:{NFSU2_TR(0x725bd0);
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
B725bd2:{NFSU2_TR(0x725bd2);
if(r1(R+518)){{goto L725be1;}}
}
B725bd4:L725bd4:{c.instructions+=3;NFSU2_TR(0x725bd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B725bd6:{NFSU2_TR(0x725bd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725bd7:{NFSU2_TR(0x725bd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725bdaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B725bda:L725bda:{c.instructions+=1;NFSU2_TR(0x725bda);
s4(0x8b477c,u32(u32(m4(0x8b477c))&u32(u32(0x0ull))));
}
B725be1:L725be1:{c.instructions+=3;NFSU2_TR(0x725be1);
__builtin_memmove((R+0),gp(0x8b4778),4);
}
B725be6:{NFSU2_TR(0x725be6);
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
B725be8:{NFSU2_TR(0x725be8);
if(r1(R+518)){{goto L725bf7;}}
}
B725bea:L725bea:{c.instructions+=3;NFSU2_TR(0x725bea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B725bec:{NFSU2_TR(0x725bec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725bed:{NFSU2_TR(0x725bed);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725bf0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B725bf0:L725bf0:{c.instructions+=1;NFSU2_TR(0x725bf0);
s4(0x8b4778,u32(u32(m4(0x8b4778))&u32(u32(0x0ull))));
}
B725bf7:L725bf7:{c.instructions+=2;NFSU2_TR(0x725bf7);
u8 U[10];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B725bfc:{NFSU2_TR(0x725bfc);
if(r1(R+518)){{goto L725c03;}}
}
B725bfe:L725bfe:{c.instructions+=1;NFSU2_TR(0x725bfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725c03ull));
TAIL_STATIC(0x728cf8u,728);
}
B725c03:L725c03:{c.instructions+=2;NFSU2_TR(0x725c03);
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
B725c05:{NFSU2_TR(0x725c05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B725c06:L725c06:{c.instructions+=1;NFSU2_TR(0x725c06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725c0bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x725a6au);}goto L725a6a;}
}
B725c0b:L725c0b:{c.instructions+=3;NFSU2_TR(0x725c0b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725c0d:{NFSU2_TR(0x725c0d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B725c11:{NFSU2_TR(0x725c11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725c16ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x725bb5u);}goto L725bb5;}
}
B725c16:L725c16:{c.instructions+=4;NFSU2_TR(0x725c16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725c17:{NFSU2_TR(0x725c17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725c18:{NFSU2_TR(0x725c18);
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
B725c1a:{NFSU2_TR(0x725c1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B725c1b:L725c1b:{c.instructions+=5;NFSU2_TR(0x725c1b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725c1c:{NFSU2_TR(0x725c1c);
__builtin_memmove((R+20),(R+16),4);
}
B725c1e:{NFSU2_TR(0x725c1e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725c1f:{NFSU2_TR(0x725c1f);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b4778),4);
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
B725c26:{NFSU2_TR(0x725c26);
if(r1(R+518)){{goto L725c3d;}}
}
B725c28:L725c28:{c.instructions+=7;NFSU2_TR(0x725c28);
__builtin_memmove((R+0),gp(0x8b4780),4);
}
B725c2d:{NFSU2_TR(0x725c2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B725c2f:{NFSU2_TR(0x725c2f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725c31:{NFSU2_TR(0x725c31);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B725c34:{NFSU2_TR(0x725c34);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725c35:{NFSU2_TR(0x725c35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725c36:{NFSU2_TR(0x725c36);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725c39ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B725c39:L725c39:{c.instructions+=2;NFSU2_TR(0x725c39);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B725c3b:{NFSU2_TR(0x725c3b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L725c41;}}
}
B725c3d:L725c3d:{c.instructions+=3;NFSU2_TR(0x725c3d);
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
B725c3f:{NFSU2_TR(0x725c3f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B725c40:{NFSU2_TR(0x725c40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B725c41:L725c41:{c.instructions+=11;NFSU2_TR(0x725c41);
w4(R+0,u32(m1(0x8b44df)));
}
B725c48:{NFSU2_TR(0x725c48);
w4(R+4,u32(m1(0x8b44e0)));
}
B725c4f:{NFSU2_TR(0x725c4f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B725c51:{NFSU2_TR(0x725c51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B725c54:{NFSU2_TR(0x725c54);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B725c56:{NFSU2_TR(0x725c56);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B725c58:{NFSU2_TR(0x725c58);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x725c58);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x725c58);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B725c5a:{NFSU2_TR(0x725c5a);
__builtin_memmove((R+4),(R+0),4);
}
B725c5c:{NFSU2_TR(0x725c5c);
__builtin_memmove((R+0),gp(0x8b4768),4);
}
B725c61:{NFSU2_TR(0x725c61);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B725c63:{NFSU2_TR(0x725c63);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L725c6b;}}
}
B725c65:L725c65:{c.instructions+=1;NFSU2_TR(0x725c65);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b4788))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B725c6b:L725c6b:{c.instructions+=6;NFSU2_TR(0x725c6b);
w4(R+4,u32(m2(0x8b44c6)));
}
B725c72:{NFSU2_TR(0x725c72);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x3e8ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B725c78:{NFSU2_TR(0x725c78);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B725c79:{NFSU2_TR(0x725c79);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x725c79);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x725c79);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B725c7b:{NFSU2_TR(0x725c7b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B725c7c:{NFSU2_TR(0x725c7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B725c7d:L725c7d:{c.instructions+=1;NFSU2_TR(0x725c7d);
u8 U[4];
__builtin_memmove((U+0),gp(0x783398),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725c83ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B725c83:L725c83:{c.instructions+=2;NFSU2_TR(0x725c83);
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
B725c85:{NFSU2_TR(0x725c85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L725c8d;}}
}
B725c87:L725c87:{c.instructions+=1;NFSU2_TR(0x725c87);
{u32 t_=u32(m4(0x783348));TAIL_DYNAMIC(t_);}
}
B725c8d:L725c8d:{c.instructions+=1;NFSU2_TR(0x725c8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B725c8e:L725c8e:{c.instructions+=9;NFSU2_TR(0x725c8e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725c8f:{NFSU2_TR(0x725c8f);
__builtin_memmove((R+20),(R+16),4);
}
B725c91:{NFSU2_TR(0x725c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B725c94:{NFSU2_TR(0x725c94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B725c96:{NFSU2_TR(0x725c96);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725c97:{NFSU2_TR(0x725c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B725c9a:{NFSU2_TR(0x725c9a);
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
B725c9c:{NFSU2_TR(0x725c9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B725c9f:{NFSU2_TR(0x725c9f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L725d8f;}}
}
B725ca5:L725ca5:{c.instructions+=1;NFSU2_TR(0x725ca5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725ca6:L725ca6:{c.instructions+=3;NFSU2_TR(0x725ca6);
__builtin_memmove((R+0),gp(0x8b478c),4);
}
B725cab:{NFSU2_TR(0x725cab);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B725cad:{NFSU2_TR(0x725cad);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L725d48;}}
}
B725cb3:L725cb3:{c.instructions+=2;NFSU2_TR(0x725cb3);
s4(0x8b4790,u32(u32(m4(0x8b4790))+u32(u32(0x1ull))));
}
B725cb9:{NFSU2_TR(0x725cb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725cbeull));
TAIL_STATIC(0x721e13u,721);
}
B725cbe:L725cbe:{c.instructions+=13;NFSU2_TR(0x725cbe);
{u32 ea_=u32(u32(9127708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725cc4:{NFSU2_TR(0x725cc4);
{u32 ea_=u32(u32(8487920u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B725cca:{NFSU2_TR(0x725cca);
{u32 ea_=u32(u32(8487920u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B725cd0:{NFSU2_TR(0x725cd0);
{u32 ea_=u32(u32(8487920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725cd6:{NFSU2_TR(0x725cd6);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B725cd9:{NFSU2_TR(0x725cd9);
{u32 ea_=u32(u32(7881848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725cdf:{NFSU2_TR(0x725cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B725ce2:{NFSU2_TR(0x725ce2);
{u32 ea_=u32(u32(8487920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725ce8:{NFSU2_TR(0x725ce8);
__builtin_memmove(gp(0x8b4058),(R+0),4);
}
B725ced:{NFSU2_TR(0x725ced);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B725cef:{NFSU2_TR(0x725cef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B725cf1:{NFSU2_TR(0x725cf1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B725cf4:{NFSU2_TR(0x725cf4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L725d04;}}
}
B725cf6:L725cf6:{c.instructions+=3;NFSU2_TR(0x725cf6);
{u32 ea_=u32(u32(8487920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B725cfc:{NFSU2_TR(0x725cfc);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B725cfe:{NFSU2_TR(0x725cfe);
{u32 ea_=u32(u32(8487920u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B725d04:L725d04:{c.instructions+=2;NFSU2_TR(0x725d04);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B725d06:{NFSU2_TR(0x725d06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725d0bull));
TAIL_STATIC(0x721de6u,721);
}
B725d0b:L725d0b:{c.instructions+=12;NFSU2_TR(0x725d0b);
w4(R+0,u32(m2(0x8b44c6)));
}
B725d12:{NFSU2_TR(0x725d12);
__builtin_memmove((R+4),gp(0x8b4790),4);
}
B725d18:{NFSU2_TR(0x725d18);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B725d1b:{NFSU2_TR(0x725d1b);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B725d1c:{NFSU2_TR(0x725d1c);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725d1e:{NFSU2_TR(0x725d1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B725d1f:{NFSU2_TR(0x725d1f);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x725d1f);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x725d1f);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B725d21:{NFSU2_TR(0x725d21);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x8b4794))));
}
B725d27:{NFSU2_TR(0x725d27);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff0ull))));
}
B725d2c:{NFSU2_TR(0x725d2c);
s4(0x8b4794,u32(u32(m4(0x8b4794))+u32(r4(R+0))));
}
B725d32:{NFSU2_TR(0x725d32);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7530ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7530ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B725d38:{NFSU2_TR(0x725d38);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L725d48;}}
}
B725d3a:L725d3a:{c.instructions+=2;NFSU2_TR(0x725d3a);
s4(0x8b4790,u32(u32(m4(0x8b4790))&u32(u32(0x0ull))));
}
B725d41:{NFSU2_TR(0x725d41);
s4(0x8b4794,u32(u32(m4(0x8b4794))&u32(u32(0x0ull))));
}
B725d48:L725d48:{c.instructions+=3;NFSU2_TR(0x725d48);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B725d4a:{NFSU2_TR(0x725d4a);
__builtin_memmove((R+24),(R+0),4);
}
B725d4c:{NFSU2_TR(0x725d4c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L725d50;}}
}
B725d4e:L725d4e:{c.instructions+=1;NFSU2_TR(0x725d4e);
__builtin_memmove((R+24),(R+28),4);
}
B725d50:L725d50:{c.instructions+=7;NFSU2_TR(0x725d50);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B725d52:{NFSU2_TR(0x725d52);
__builtin_memmove(gp(0x8b478c),(R+0),4);
}
B725d57:{NFSU2_TR(0x725d57);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B725d5a:{NFSU2_TR(0x725d5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725d5b:{NFSU2_TR(0x725d5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725d5c:{NFSU2_TR(0x725d5c);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B725d5e:{NFSU2_TR(0x725d5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725d63ull));
TAIL_STATIC(0x729574u,729);
}
B725d63:L725d63:{c.instructions+=3;NFSU2_TR(0x725d63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725d64:{NFSU2_TR(0x725d64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725d65:{NFSU2_TR(0x725d65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725d6aull));
TAIL_STATIC(0x72382fu,723);
}
B725d6a:L725d6a:{c.instructions+=9;NFSU2_TR(0x725d6a);
w4(R+4,u32(m1(0x8b44df)));
}
B725d71:{NFSU2_TR(0x725d71);
w4(R+0,u32(m1(0x8b44e0)));
}
B725d78:{NFSU2_TR(0x725d78);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B725d7a:{NFSU2_TR(0x725d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B725d7d:{NFSU2_TR(0x725d7d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B725d80:{NFSU2_TR(0x725d80);
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
B725d82:{NFSU2_TR(0x725d82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B725d85:{NFSU2_TR(0x725d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B725d88:{NFSU2_TR(0x725d88);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x725ca6u);}goto L725ca6;}}
}
B725d8e:L725d8e:{c.instructions+=1;NFSU2_TR(0x725d8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B725d8f:L725d8f:{c.instructions+=3;NFSU2_TR(0x725d8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B725d90:{NFSU2_TR(0x725d90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B725d91:{NFSU2_TR(0x725d91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B725d92:L725d92:{c.instructions+=2;NFSU2_TR(0x725d92);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B725d96:{NFSU2_TR(0x725d96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725d9bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x725c06u);}goto L725c06;}
}
B725d9b:L725d9b:{c.instructions+=1;NFSU2_TR(0x725d9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725da0ull));
TAIL_STATIC(0x721f99u,721);
}
B725da0:L725da0:{c.instructions+=2;NFSU2_TR(0x725da0);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4724),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725da6:{NFSU2_TR(0x725da6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725dabull));
TAIL_STATIC(0x724894u,724);
}
B725dab:L725dab:{c.instructions+=3;NFSU2_TR(0x725dab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725dac:{NFSU2_TR(0x725dac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725dad:{NFSU2_TR(0x725dad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725db2ull));
TAIL_STATIC(0x721fa7u,721);
}
B725db2:L725db2:{c.instructions+=2;NFSU2_TR(0x725db2);
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
B725db4:{NFSU2_TR(0x725db4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B725db5:L725db5:{c.instructions+=11;NFSU2_TR(0x725db5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725db6:{NFSU2_TR(0x725db6);
__builtin_memmove((R+20),(R+16),4);
}
B725db8:{NFSU2_TR(0x725db8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x88ull))));
}
B725dbe:{NFSU2_TR(0x725dbe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725dbf:{NFSU2_TR(0x725dbf);
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
B725dc1:{NFSU2_TR(0x725dc1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725dc2:{NFSU2_TR(0x725dc2);
u8 U[4];
w4(U+0,u32(0x8b4778ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725dc7:{NFSU2_TR(0x725dc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725dc8:{NFSU2_TR(0x725dc8);
__builtin_memmove(gp(0x8b477c),(R+28),4);
}
B725dce:{NFSU2_TR(0x725dce);
__builtin_memmove(gp(0x8b4780),(R+28),4);
}
B725dd4:{NFSU2_TR(0x725dd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725dd9ull));
TAIL_STATIC(0x770d16u,770);
}
B725dd9:L725dd9:{c.instructions+=2;NFSU2_TR(0x725dd9);
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
B725ddb:{NFSU2_TR(0x725ddb);
if(r1(R+518)){{goto L725e0a;}}
}
B725ddd:L725ddd:{c.instructions+=2;NFSU2_TR(0x725ddd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8878000aull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B725de2:{NFSU2_TR(0x725de2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L725ded;}}
}
B725de4:L725de4:{c.instructions+=2;NFSU2_TR(0x725de4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffeeull));
s4(u32(r4(U+0)),r4(U+4));
}
B725deb:{NFSU2_TR(0x725deb);
{goto L725dff;}
}
B725ded:L725ded:{c.instructions+=7;NFSU2_TR(0x725ded);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B725def:{NFSU2_TR(0x725def);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x88780078ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B725df4:{NFSU2_TR(0x725df4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B725df7:{NFSU2_TR(0x725df7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B725df8:{NFSU2_TR(0x725df8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff7ull))));
}
B725dfb:{NFSU2_TR(0x725dfb);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B725dfc:{NFSU2_TR(0x725dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B725dff:L725dff:{c.instructions+=2;NFSU2_TR(0x725dff);
__builtin_memmove(gp(0x8b4778),(R+28),4);
}
B725e05:{NFSU2_TR(0x725e05);
{goto L725f0d;}
}
B725e0a:L725e0a:{c.instructions+=5;NFSU2_TR(0x725e0a);
__builtin_memmove((R+0),gp(0x8b4778),4);
}
B725e0f:{NFSU2_TR(0x725e0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725e10:{NFSU2_TR(0x725e10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B725e12:{NFSU2_TR(0x725e12);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725e14:{NFSU2_TR(0x725e14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725e19ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x725c7du);}goto L725c7d;}
}
B725e19:L725e19:{c.instructions+=3;NFSU2_TR(0x725e19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725e1a:{NFSU2_TR(0x725e1a);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4778),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725e20:{NFSU2_TR(0x725e20);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725e23ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B725e23:L725e23:{c.instructions+=7;NFSU2_TR(0x725e23);
__builtin_memmove((R+0),gp(0x8b4778),4);
}
B725e28:{NFSU2_TR(0x725e28);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+8),(U+0),4);
}
B725e2e:{NFSU2_TR(0x725e2e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725e2f:{NFSU2_TR(0x725e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
w4(U+4,u32(0x60ull));
s4(u32(r4(U+0)),r4(U+4));
}
B725e39:{NFSU2_TR(0x725e39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B725e3b:{NFSU2_TR(0x725e3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725e3c:{NFSU2_TR(0x725e3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725e3full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B725e3f:L725e3f:{c.instructions+=2;NFSU2_TR(0x725e3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B725e41:{NFSU2_TR(0x725e41);
if(r1(R+518)){{goto L725e4c;}}
}
B725e43:L725e43:{c.instructions+=2;NFSU2_TR(0x725e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B725e47:{NFSU2_TR(0x725e47);
{goto L725f0c;}
}
B725e4c:L725e4c:{c.instructions+=6;NFSU2_TR(0x725e4c);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725e4e:{NFSU2_TR(0x725e4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B725e4f:{NFSU2_TR(0x725e4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B725e52:{NFSU2_TR(0x725e52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725e53:{NFSU2_TR(0x725e53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725e54:{NFSU2_TR(0x725e54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725e59ull));
TAIL_STATIC(0x727030u,727);
}
B725e59:L725e59:{c.instructions+=14;NFSU2_TR(0x725e59);
__builtin_memmove((R+0),gp(0x8b4778),4);
}
B725e5e:{NFSU2_TR(0x725e5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725e5f:{NFSU2_TR(0x725e5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725e60:{NFSU2_TR(0x725e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B725e63:{NFSU2_TR(0x725e63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725e64:{NFSU2_TR(0x725e64);
u8 U[4];
w4(U+0,u32(0x8b477cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725e69:{NFSU2_TR(0x725e69);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B725e6b:{NFSU2_TR(0x725e6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B725e6e:{NFSU2_TR(0x725e6e);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B725e6f:{NFSU2_TR(0x725e6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725e70:{NFSU2_TR(0x725e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B725e73:{NFSU2_TR(0x725e73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B725e75:{NFSU2_TR(0x725e75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725e76:{NFSU2_TR(0x725e76);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725e79ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B725e79:L725e79:{c.instructions+=3;NFSU2_TR(0x725e79);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B725e7b:{NFSU2_TR(0x725e7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B725e7e:{NFSU2_TR(0x725e7e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L725f0c;}}
}
B725e84:L725e84:{c.instructions+=5;NFSU2_TR(0x725e84);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725e85:{NFSU2_TR(0x725e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B725e88:{NFSU2_TR(0x725e88);
w4(R+0,u32(0xac44ull));
}
B725e8d:{NFSU2_TR(0x725e8d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B725e8f:{NFSU2_TR(0x725e8f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L725e95;}}
}
B725e91:L725e91:{c.instructions+=2;NFSU2_TR(0x725e91);
__builtin_memmove((R+12),(R+0),4);
}
B725e93:{NFSU2_TR(0x725e93);
{goto L725e9e;}
}
B725e95:L725e95:{c.instructions+=2;NFSU2_TR(0x725e95);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B725e97:{NFSU2_TR(0x725e97);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L725e9e;}}
}
B725e99:L725e99:{c.instructions+=1;NFSU2_TR(0x725e99);
w4(R+12,u32(0x2b11ull));
}
B725e9e:L725e9e:{c.instructions+=5;NFSU2_TR(0x725e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B725ea1:{NFSU2_TR(0x725ea1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725ea2:{NFSU2_TR(0x725ea2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725ea3:{NFSU2_TR(0x725ea3);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B725ea6:{NFSU2_TR(0x725ea6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725eabull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x725a85u);}goto L725a85;}
}
B725eab:L725eab:{c.instructions+=5;NFSU2_TR(0x725eab);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B725ead:{NFSU2_TR(0x725ead);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B725eb0:{NFSU2_TR(0x725eb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725eb1:{NFSU2_TR(0x725eb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725eb2:{NFSU2_TR(0x725eb2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L725ebe;}}
}
B725eb4:L725eb4:{c.instructions+=2;NFSU2_TR(0x725eb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B725eb6:{NFSU2_TR(0x725eb6);
if(r1(R+518)){{goto L725ebb;}}
}
B725eb8:L725eb8:{c.instructions+=1;NFSU2_TR(0x725eb8);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+24)),r1(U+0));
}
B725ebb:L725ebb:{c.instructions+=1;NFSU2_TR(0x725ebb);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+28)),r1(U+0));
}
B725ebe:L725ebe:{c.instructions+=3;NFSU2_TR(0x725ebe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725ebf:{NFSU2_TR(0x725ebf);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725ec1:{NFSU2_TR(0x725ec1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725ec6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x725a85u);}goto L725a85;}
}
B725ec6:L725ec6:{c.instructions+=4;NFSU2_TR(0x725ec6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B725ec8:{NFSU2_TR(0x725ec8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725ec9:{NFSU2_TR(0x725ec9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725eca:{NFSU2_TR(0x725eca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L725ed7;}}
}
B725ecc:L725ecc:{c.instructions+=2;NFSU2_TR(0x725ecc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B725ece:{NFSU2_TR(0x725ece);
if(r1(R+518)){{goto L725ed4;}}
}
B725ed0:L725ed0:{c.instructions+=1;NFSU2_TR(0x725ed0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B725ed4:L725ed4:{c.instructions+=1;NFSU2_TR(0x725ed4);
u8 U[1];
w1(U+0,u8(0x2ull));
s1(u32(r4(R+28)),r1(U+0));
}
B725ed7:L725ed7:{c.instructions+=3;NFSU2_TR(0x725ed7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725ed8:{NFSU2_TR(0x725ed8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725eda:{NFSU2_TR(0x725eda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725edfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x725a85u);}goto L725a85;}
}
B725edf:L725edf:{c.instructions+=4;NFSU2_TR(0x725edf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B725ee1:{NFSU2_TR(0x725ee1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725ee2:{NFSU2_TR(0x725ee2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725ee3:{NFSU2_TR(0x725ee3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L725ef0;}}
}
B725ee5:L725ee5:{c.instructions+=2;NFSU2_TR(0x725ee5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B725ee7:{NFSU2_TR(0x725ee7);
if(r1(R+518)){{goto L725eed;}}
}
B725ee9:L725ee9:{c.instructions+=1;NFSU2_TR(0x725ee9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B725eed:L725eed:{c.instructions+=1;NFSU2_TR(0x725eed);
u8 U[1];
w1(U+0,u8(0x4ull));
s1(u32(r4(R+28)),r1(U+0));
}
B725ef0:L725ef0:{c.instructions+=3;NFSU2_TR(0x725ef0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725ef1:{NFSU2_TR(0x725ef1);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725ef3:{NFSU2_TR(0x725ef3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725ef8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x725a85u);}goto L725a85;}
}
B725ef8:L725ef8:{c.instructions+=5;NFSU2_TR(0x725ef8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B725efa:{NFSU2_TR(0x725efa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725efb:{NFSU2_TR(0x725efb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725efc:{NFSU2_TR(0x725efc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B725efd:{NFSU2_TR(0x725efd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L725f0a;}}
}
B725eff:L725eff:{c.instructions+=2;NFSU2_TR(0x725eff);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B725f01:{NFSU2_TR(0x725f01);
if(r1(R+518)){{goto L725f07;}}
}
B725f03:L725f03:{c.instructions+=1;NFSU2_TR(0x725f03);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B725f07:L725f07:{c.instructions+=1;NFSU2_TR(0x725f07);
u8 U[1];
w1(U+0,u8(0x5ull));
s1(u32(r4(R+28)),r1(U+0));
}
B725f0a:L725f0a:{c.instructions+=1;NFSU2_TR(0x725f0a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B725f0c:L725f0c:{c.instructions+=1;NFSU2_TR(0x725f0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B725f0d:L725f0d:{c.instructions+=3;NFSU2_TR(0x725f0d);
__builtin_memmove((R+0),gp(0x8b4780),4);
}
B725f12:{NFSU2_TR(0x725f12);
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
B725f14:{NFSU2_TR(0x725f14);
if(r1(R+518)){{goto L725f22;}}
}
B725f16:L725f16:{c.instructions+=3;NFSU2_TR(0x725f16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B725f18:{NFSU2_TR(0x725f18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725f19:{NFSU2_TR(0x725f19);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725f1cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B725f1c:L725f1c:{c.instructions+=1;NFSU2_TR(0x725f1c);
__builtin_memmove(gp(0x8b4780),(R+28),4);
}
B725f22:L725f22:{c.instructions+=3;NFSU2_TR(0x725f22);
__builtin_memmove((R+0),gp(0x8b477c),4);
}
B725f27:{NFSU2_TR(0x725f27);
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
B725f29:{NFSU2_TR(0x725f29);
if(r1(R+518)){{goto L725f37;}}
}
B725f2b:L725f2b:{c.instructions+=3;NFSU2_TR(0x725f2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B725f2d:{NFSU2_TR(0x725f2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725f2e:{NFSU2_TR(0x725f2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725f31ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B725f31:L725f31:{c.instructions+=1;NFSU2_TR(0x725f31);
__builtin_memmove(gp(0x8b477c),(R+28),4);
}
B725f37:L725f37:{c.instructions+=3;NFSU2_TR(0x725f37);
__builtin_memmove((R+0),gp(0x8b4778),4);
}
B725f3c:{NFSU2_TR(0x725f3c);
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
B725f3e:{NFSU2_TR(0x725f3e);
if(r1(R+518)){{goto L725f46;}}
}
B725f40:L725f40:{c.instructions+=3;NFSU2_TR(0x725f40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B725f42:{NFSU2_TR(0x725f42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725f43:{NFSU2_TR(0x725f43);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725f46ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B725f46:L725f46:{c.instructions+=5;NFSU2_TR(0x725f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B725f49:{NFSU2_TR(0x725f49);
__builtin_memmove(gp(0x8b4778),(R+28),4);
}
B725f4f:{NFSU2_TR(0x725f4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B725f50:{NFSU2_TR(0x725f50);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B725f51:{NFSU2_TR(0x725f51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B725f52:L725f52:{c.instructions+=17;NFSU2_TR(0x725f52);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725f53:{NFSU2_TR(0x725f53);
__builtin_memmove((R+20),(R+16),4);
}
B725f55:{NFSU2_TR(0x725f55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B725f58:{NFSU2_TR(0x725f58);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725f59:{NFSU2_TR(0x725f59);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B725f5b:{NFSU2_TR(0x725f5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725f5c:{NFSU2_TR(0x725f5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725f5d:{NFSU2_TR(0x725f5d);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B725f60:{NFSU2_TR(0x725f60);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B725f63:{NFSU2_TR(0x725f63);
s4(0x8183dc,u32(0x41f00000ull));
}
B725f6d:{NFSU2_TR(0x725f6d);
__builtin_memmove(gp(0x8b4760),(R+12),4);
}
B725f73:{NFSU2_TR(0x725f73);
__builtin_memmove(gp(0x8b4764),(R+12),4);
}
B725f79:{NFSU2_TR(0x725f79);
s4(0x8183ec,u32(0x41700000ull));
}
B725f83:{NFSU2_TR(0x725f83);
__builtin_memmove(gp(0x8b4768),(R+12),4);
}
B725f89:{NFSU2_TR(0x725f89);
s2(0x8183e0,u16(0xfull));
}
B725f92:{NFSU2_TR(0x725f92);
s2(0x8183e4,u16(0x3e8ull));
}
B725f9b:{NFSU2_TR(0x725f9b);
if(r1(R+518)){{goto L725fd6;}}
}
B725f9d:L725f9d:{c.instructions+=14;NFSU2_TR(0x725f9d);
__builtin_memmove((R+0),gp(0x8b44ca),1);
}
B725fa2:{NFSU2_TR(0x725fa2);
w4(R+4,u32(m2(0x8b44c6)));
}
B725fa9:{NFSU2_TR(0x725fa9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B725fac:{NFSU2_TR(0x725fac);
__builtin_memmove((R+0),gp(0x8b44e0),1);
}
B725fb1:{NFSU2_TR(0x725fb1);
w1(R+0,u8(u32(r1(R+0))+u32(m1(0x8b44df))));
}
B725fb7:{NFSU2_TR(0x725fb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B725fba:{NFSU2_TR(0x725fba);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B725fbc:{NFSU2_TR(0x725fbc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B725fbf:{NFSU2_TR(0x725fbf);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B725fc2:{NFSU2_TR(0x725fc2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B725fc5:{NFSU2_TR(0x725fc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B725fc8:{NFSU2_TR(0x725fc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725fc9:{NFSU2_TR(0x725fc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x725378ull));
s4(u32(r4(U+0)),r4(U+4));
}
B725fd0:{NFSU2_TR(0x725fd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725fd5ull));
TAIL_STATIC(0x7290afu,729);
}
B725fd5:L725fd5:{c.instructions+=1;NFSU2_TR(0x725fd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B725fd6:L725fd6:{c.instructions+=6;NFSU2_TR(0x725fd6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725fd7:{NFSU2_TR(0x725fd7);
u8 U[4];
w4(U+0,u32(0x8b4778ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725fdc:{NFSU2_TR(0x725fdc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725fdd:{NFSU2_TR(0x725fdd);
__builtin_memmove(gp(0x8b477c),(R+12),4);
}
B725fe3:{NFSU2_TR(0x725fe3);
__builtin_memmove(gp(0x8b4780),(R+12),4);
}
B725fe9:{NFSU2_TR(0x725fe9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x725feeull));
TAIL_STATIC(0x770d16u,770);
}
B725fee:L725fee:{c.instructions+=2;NFSU2_TR(0x725fee);
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
B725ff0:{NFSU2_TR(0x725ff0);
if(r1(R+518)){TAIL_STATIC(0x72601au,726);}
}
B725ff2:L725ff2:{c.instructions+=2;NFSU2_TR(0x725ff2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8878000aull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B725ff7:{NFSU2_TR(0x725ff7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L725ffe;}}
}
B725ff9:L725ff9:{c.instructions+=3;NFSU2_TR(0x725ff9);
u8 U[4];
w4(U+0,u32(0xffffffeeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B725ffb:{NFSU2_TR(0x725ffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B725ffc:{NFSU2_TR(0x725ffc);
TAIL_STATIC(0x72600fu,726);
}
B725ffe:L725ffe:{c.instructions+=1;NFSU2_TR(0x725ffe);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
TAIL_STATIC(0x726000u,726);
}
XIT:NFSU2_TR_EXIT(0x725,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
