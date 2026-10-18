#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48a(u8* __restrict R,Cpu& c);
u32 body_48e(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_491(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_615(u8* __restrict R,Cpu& c);
u32 body_617(u8* __restrict R,Cpu& c);
u32 body_61a(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x616,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x616,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_616(u8* __restrict R,Cpu& c);
u32 page_616(Cpu& c){return body_616(c.regs.data(),c);}
__attribute__((noinline)) u32 body_616(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x616003:goto L616003;
case 0x616007:c.instructions+=131;goto B616007;
case 0x616009:c.instructions+=130;goto B616009;
case 0x61600d:c.instructions+=129;goto B61600d;
case 0x616011:c.instructions+=128;goto B616011;
case 0x616013:c.instructions+=127;goto B616013;
case 0x61601a:c.instructions+=126;goto B61601a;
case 0x61601e:c.instructions+=125;goto B61601e;
case 0x616025:c.instructions+=124;goto B616025;
case 0x61602c:c.instructions+=123;goto B61602c;
case 0x616030:c.instructions+=122;goto B616030;
case 0x616032:c.instructions+=121;goto B616032;
case 0x616036:c.instructions+=120;goto B616036;
case 0x61603a:c.instructions+=119;goto B61603a;
case 0x61603c:c.instructions+=118;goto B61603c;
case 0x616040:c.instructions+=117;goto B616040;
case 0x616044:c.instructions+=116;goto B616044;
case 0x616046:c.instructions+=115;goto B616046;
case 0x61604d:c.instructions+=114;goto B61604d;
case 0x616054:c.instructions+=113;goto B616054;
case 0x616058:c.instructions+=112;goto B616058;
case 0x61605c:c.instructions+=111;goto B61605c;
case 0x616060:c.instructions+=110;goto B616060;
case 0x616062:c.instructions+=109;goto B616062;
case 0x616066:c.instructions+=108;goto B616066;
case 0x61606a:c.instructions+=107;goto B61606a;
case 0x61606c:c.instructions+=106;goto B61606c;
case 0x616070:c.instructions+=105;goto B616070;
case 0x616077:c.instructions+=104;goto B616077;
case 0x616079:c.instructions+=103;goto B616079;
case 0x616080:c.instructions+=102;goto B616080;
case 0x616087:c.instructions+=101;goto B616087;
case 0x61608b:c.instructions+=100;goto B61608b;
case 0x61608f:c.instructions+=99;goto B61608f;
case 0x616093:c.instructions+=98;goto B616093;
case 0x616095:c.instructions+=97;goto B616095;
case 0x616099:c.instructions+=96;goto B616099;
case 0x61609d:c.instructions+=95;goto B61609d;
case 0x61609f:c.instructions+=94;goto B61609f;
case 0x6160a3:c.instructions+=93;goto B6160a3;
case 0x6160aa:c.instructions+=92;goto B6160aa;
case 0x6160ae:c.instructions+=91;goto B6160ae;
case 0x6160b5:c.instructions+=90;goto B6160b5;
case 0x6160bc:c.instructions+=89;goto B6160bc;
case 0x6160c0:c.instructions+=88;goto B6160c0;
case 0x6160c2:c.instructions+=87;goto B6160c2;
case 0x6160c6:c.instructions+=86;goto B6160c6;
case 0x6160ca:c.instructions+=85;goto B6160ca;
case 0x6160cc:c.instructions+=84;goto B6160cc;
case 0x6160d0:c.instructions+=83;goto B6160d0;
case 0x6160d4:c.instructions+=82;goto B6160d4;
case 0x6160d6:c.instructions+=81;goto B6160d6;
case 0x6160dd:c.instructions+=80;goto B6160dd;
case 0x6160e1:c.instructions+=79;goto B6160e1;
case 0x6160e8:c.instructions+=78;goto B6160e8;
case 0x6160ef:c.instructions+=77;goto B6160ef;
case 0x6160f3:c.instructions+=76;goto B6160f3;
case 0x6160f5:c.instructions+=75;goto B6160f5;
case 0x6160f9:c.instructions+=74;goto B6160f9;
case 0x6160fd:c.instructions+=73;goto B6160fd;
case 0x6160ff:c.instructions+=72;goto B6160ff;
case 0x616103:c.instructions+=71;goto B616103;
case 0x616107:c.instructions+=70;goto B616107;
case 0x616109:c.instructions+=69;goto B616109;
case 0x616110:c.instructions+=68;goto B616110;
case 0x616117:c.instructions+=67;goto B616117;
case 0x61611b:c.instructions+=66;goto B61611b;
case 0x61611f:c.instructions+=65;goto B61611f;
case 0x616123:c.instructions+=64;goto B616123;
case 0x616125:c.instructions+=63;goto B616125;
case 0x61612c:c.instructions+=62;goto B61612c;
case 0x616130:c.instructions+=61;goto B616130;
case 0x616131:c.instructions+=60;goto B616131;
case 0x616135:c.instructions+=59;goto B616135;
case 0x61613c:c.instructions+=58;goto B61613c;
case 0x61613d:c.instructions+=57;goto B61613d;
case 0x61613f:c.instructions+=56;goto B61613f;
case 0x616143:c.instructions+=55;goto B616143;
case 0x61614a:c.instructions+=54;goto B61614a;
case 0x61614c:c.instructions+=53;goto B61614c;
case 0x616153:c.instructions+=52;goto B616153;
case 0x61615a:c.instructions+=51;goto B61615a;
case 0x61615e:c.instructions+=50;goto B61615e;
case 0x616165:c.instructions+=49;goto B616165;
case 0x616169:c.instructions+=48;goto B616169;
case 0x61616b:c.instructions+=47;goto B61616b;
case 0x61616f:c.instructions+=46;goto B61616f;
case 0x616173:c.instructions+=45;goto B616173;
case 0x616175:c.instructions+=44;goto B616175;
case 0x616179:c.instructions+=43;goto B616179;
case 0x616180:c.instructions+=42;goto B616180;
case 0x616187:c.instructions+=41;goto B616187;
case 0x61618b:c.instructions+=40;goto B61618b;
case 0x61618f:c.instructions+=39;goto B61618f;
case 0x616193:c.instructions+=38;goto B616193;
case 0x616195:c.instructions+=37;goto B616195;
case 0x616199:c.instructions+=36;goto B616199;
case 0x61619b:c.instructions+=35;goto B61619b;
case 0x61619d:c.instructions+=34;goto B61619d;
case 0x6161a4:c.instructions+=33;goto B6161a4;
case 0x6161ab:c.instructions+=32;goto B6161ab;
case 0x6161b2:c.instructions+=31;goto B6161b2;
case 0x6161b6:c.instructions+=30;goto B6161b6;
case 0x6161ba:c.instructions+=29;goto B6161ba;
case 0x6161be:c.instructions+=28;goto B6161be;
case 0x6161c0:c.instructions+=27;goto B6161c0;
case 0x6161c4:c.instructions+=26;goto B6161c4;
case 0x6161c6:c.instructions+=25;goto B6161c6;
case 0x6161c8:c.instructions+=24;goto B6161c8;
case 0x6161cf:c.instructions+=23;goto B6161cf;
case 0x6161d6:c.instructions+=22;goto B6161d6;
case 0x6161dd:c.instructions+=21;goto B6161dd;
case 0x6161e1:c.instructions+=20;goto B6161e1;
case 0x6161e8:c.instructions+=19;goto B6161e8;
case 0x6161ec:c.instructions+=18;goto B6161ec;
case 0x6161ee:c.instructions+=17;goto B6161ee;
case 0x6161f2:c.instructions+=16;goto B6161f2;
case 0x6161f4:c.instructions+=15;goto B6161f4;
case 0x6161f6:c.instructions+=14;goto B6161f6;
case 0x6161fd:c.instructions+=13;goto B6161fd;
case 0x616204:c.instructions+=12;goto B616204;
case 0x61620b:c.instructions+=11;goto B61620b;
case 0x61620f:c.instructions+=10;goto B61620f;
case 0x616216:c.instructions+=9;goto B616216;
case 0x61621a:c.instructions+=8;goto B61621a;
case 0x61621c:c.instructions+=7;goto B61621c;
case 0x616220:c.instructions+=6;goto B616220;
case 0x616222:c.instructions+=5;goto B616222;
case 0x616224:c.instructions+=4;goto B616224;
case 0x61622a:c.instructions+=3;goto B61622a;
case 0x616231:c.instructions+=2;goto B616231;
case 0x616233:c.instructions+=1;goto B616233;
case 0x616238:goto L616238;
case 0x61623f:c.instructions+=4;goto B61623f;
case 0x616240:c.instructions+=3;goto B616240;
case 0x616243:c.instructions+=2;goto B616243;
case 0x616244:c.instructions+=1;goto B616244;
case 0x616249:goto L616249;
case 0x61624c:c.instructions+=15;goto B61624c;
case 0x61624f:c.instructions+=14;goto B61624f;
case 0x616251:c.instructions+=13;goto B616251;
case 0x616258:c.instructions+=12;goto B616258;
case 0x61625e:c.instructions+=11;goto B61625e;
case 0x616261:c.instructions+=10;goto B616261;
case 0x616267:c.instructions+=9;goto B616267;
case 0x61626d:c.instructions+=8;goto B61626d;
case 0x616274:c.instructions+=7;goto B616274;
case 0x61627e:c.instructions+=6;goto B61627e;
case 0x616280:c.instructions+=5;goto B616280;
case 0x616281:c.instructions+=4;goto B616281;
case 0x616282:c.instructions+=3;goto B616282;
case 0x616283:c.instructions+=2;goto B616283;
case 0x616288:c.instructions+=1;goto B616288;
case 0x61628d:goto L61628d;
case 0x61628f:c.instructions+=2;goto B61628f;
case 0x616296:c.instructions+=1;goto B616296;
case 0x61629c:goto L61629c;
case 0x6162a3:c.instructions+=4;goto B6162a3;
case 0x6162a4:c.instructions+=3;goto B6162a4;
case 0x6162a7:c.instructions+=2;goto B6162a7;
case 0x6162a8:c.instructions+=1;goto B6162a8;
case 0x6162ad:goto L6162ad;
case 0x6162af:c.instructions+=4;goto B6162af;
case 0x6162b6:c.instructions+=3;goto B6162b6;
case 0x6162b9:c.instructions+=2;goto B6162b9;
case 0x6162bb:c.instructions+=1;goto B6162bb;
case 0x6162c1:goto L6162c1;
case 0x6162c5:c.instructions+=1;goto B6162c5;
case 0x6162c7:goto L6162c7;
case 0x6162ce:c.instructions+=1;goto B6162ce;
case 0x6162d3:goto L6162d3;
case 0x6162d4:c.instructions+=5;goto B6162d4;
case 0x6162d5:c.instructions+=4;goto B6162d5;
case 0x6162d6:c.instructions+=3;goto B6162d6;
case 0x6162d8:c.instructions+=2;goto B6162d8;
case 0x6162d9:c.instructions+=1;goto B6162d9;
case 0x6162e0:goto L6162e0;
case 0x6162e1:c.instructions+=14;goto B6162e1;
case 0x6162e3:c.instructions+=13;goto B6162e3;
case 0x6162e6:c.instructions+=12;goto B6162e6;
case 0x6162ec:c.instructions+=11;goto B6162ec;
case 0x6162ef:c.instructions+=10;goto B6162ef;
case 0x6162f0:c.instructions+=9;goto B6162f0;
case 0x6162f3:c.instructions+=8;goto B6162f3;
case 0x6162f4:c.instructions+=7;goto B6162f4;
case 0x6162f5:c.instructions+=6;goto B6162f5;
case 0x6162f7:c.instructions+=5;goto B6162f7;
case 0x6162fc:c.instructions+=4;goto B6162fc;
case 0x6162fd:c.instructions+=3;goto B6162fd;
case 0x6162ff:c.instructions+=2;goto B6162ff;
case 0x616303:c.instructions+=1;goto B616303;
case 0x616308:goto L616308;
case 0x61630a:c.instructions+=2;goto B61630a;
case 0x61630e:c.instructions+=1;goto B61630e;
case 0x616313:goto L616313;
case 0x616316:c.instructions+=1;goto B616316;
case 0x616318:goto L616318;
case 0x61631f:c.instructions+=1;goto B61631f;
case 0x616321:goto L616321;
case 0x616325:c.instructions+=2;goto B616325;
case 0x61632b:c.instructions+=1;goto B61632b;
case 0x616330:goto L616330;
case 0x616332:c.instructions+=4;goto B616332;
case 0x616337:c.instructions+=3;goto B616337;
case 0x61633b:c.instructions+=2;goto B61633b;
case 0x61633e:c.instructions+=1;goto B61633e;
case 0x616341:goto L616341;
case 0x616344:c.instructions+=1;goto B616344;
case 0x61634a:goto L61634a;
case 0x61634c:c.instructions+=4;goto B61634c;
case 0x61634e:c.instructions+=3;goto B61634e;
case 0x616350:c.instructions+=2;goto B616350;
case 0x616354:c.instructions+=1;goto B616354;
case 0x616356:goto L616356;
case 0x616359:c.instructions+=2;goto B616359;
case 0x61635d:c.instructions+=1;goto B61635d;
case 0x61635f:goto L61635f;
case 0x616363:goto L616363;
case 0x616369:c.instructions+=11;goto B616369;
case 0x61636c:c.instructions+=10;goto B61636c;
case 0x616372:c.instructions+=9;goto B616372;
case 0x616375:c.instructions+=8;goto B616375;
case 0x616378:c.instructions+=7;goto B616378;
case 0x61637b:c.instructions+=6;goto B61637b;
case 0x616380:c.instructions+=5;goto B616380;
case 0x616387:c.instructions+=4;goto B616387;
case 0x61638d:c.instructions+=3;goto B61638d;
case 0x61638f:c.instructions+=2;goto B61638f;
case 0x616396:c.instructions+=1;goto B616396;
case 0x616398:goto L616398;
case 0x61639e:c.instructions+=6;goto B61639e;
case 0x6163a3:c.instructions+=5;goto B6163a3;
case 0x6163a9:c.instructions+=4;goto B6163a9;
case 0x6163af:c.instructions+=3;goto B6163af;
case 0x6163b5:c.instructions+=2;goto B6163b5;
case 0x6163bc:c.instructions+=1;goto B6163bc;
case 0x6163be:goto L6163be;
case 0x6163c0:c.instructions+=4;goto B6163c0;
case 0x6163c2:c.instructions+=3;goto B6163c2;
case 0x6163c9:c.instructions+=2;goto B6163c9;
case 0x6163ce:c.instructions+=1;goto B6163ce;
case 0x6163d3:goto L6163d3;
case 0x6163d6:c.instructions+=2;goto B6163d6;
case 0x6163d8:c.instructions+=1;goto B6163d8;
case 0x6163da:goto L6163da;
case 0x6163e0:c.instructions+=5;goto B6163e0;
case 0x6163e3:c.instructions+=4;goto B6163e3;
case 0x6163e9:c.instructions+=3;goto B6163e9;
case 0x6163ef:c.instructions+=2;goto B6163ef;
case 0x6163f1:c.instructions+=1;goto B6163f1;
case 0x6163f3:goto L6163f3;
case 0x6163f5:c.instructions+=2;goto B6163f5;
case 0x6163f7:c.instructions+=1;goto B6163f7;
case 0x6163fc:goto L6163fc;
case 0x6163ff:c.instructions+=2;goto B6163ff;
case 0x616401:c.instructions+=1;goto B616401;
case 0x616403:goto L616403;
case 0x616409:c.instructions+=5;goto B616409;
case 0x61640c:c.instructions+=4;goto B61640c;
case 0x616412:c.instructions+=3;goto B616412;
case 0x616418:c.instructions+=2;goto B616418;
case 0x61641f:c.instructions+=1;goto B61641f;
case 0x616421:goto L616421;
case 0x616423:c.instructions+=4;goto B616423;
case 0x616425:c.instructions+=3;goto B616425;
case 0x61642c:c.instructions+=2;goto B61642c;
case 0x616431:c.instructions+=1;goto B616431;
case 0x616436:goto L616436;
case 0x616439:c.instructions+=2;goto B616439;
case 0x61643b:c.instructions+=1;goto B61643b;
case 0x61643d:goto L61643d;
case 0x616443:c.instructions+=4;goto B616443;
case 0x616446:c.instructions+=3;goto B616446;
case 0x61644c:c.instructions+=2;goto B61644c;
case 0x616452:c.instructions+=1;goto B616452;
case 0x616454:goto L616454;
case 0x616456:c.instructions+=2;goto B616456;
case 0x616458:c.instructions+=1;goto B616458;
case 0x61645d:goto L61645d;
case 0x616460:c.instructions+=2;goto B616460;
case 0x616462:c.instructions+=1;goto B616462;
case 0x616464:goto L616464;
case 0x616469:c.instructions+=5;goto B616469;
case 0x61646c:c.instructions+=4;goto B61646c;
case 0x616476:c.instructions+=3;goto B616476;
case 0x61647b:c.instructions+=2;goto B61647b;
case 0x61647d:c.instructions+=1;goto B61647d;
case 0x61647f:goto L61647f;
case 0x616485:c.instructions+=1;goto B616485;
case 0x616487:goto L616487;
case 0x61648e:c.instructions+=3;goto B61648e;
case 0x616490:c.instructions+=2;goto B616490;
case 0x616497:c.instructions+=1;goto B616497;
case 0x61649d:goto L61649d;
case 0x61649f:c.instructions+=1;goto B61649f;
case 0x6164a5:goto L6164a5;
case 0x6164a7:c.instructions+=1;goto B6164a7;
case 0x6164ad:goto L6164ad;
case 0x6164af:c.instructions+=1;goto B6164af;
case 0x6164b5:goto L6164b5;
case 0x6164b8:c.instructions+=3;goto B6164b8;
case 0x6164b9:c.instructions+=2;goto B6164b9;
case 0x6164ba:c.instructions+=1;goto B6164ba;
case 0x6164bf:goto L6164bf;
case 0x6164c2:c.instructions+=18;goto B6164c2;
case 0x6164c4:c.instructions+=17;goto B6164c4;
case 0x6164c7:c.instructions+=16;goto B6164c7;
case 0x6164ca:c.instructions+=15;goto B6164ca;
case 0x6164ce:c.instructions+=14;goto B6164ce;
case 0x6164d1:c.instructions+=13;goto B6164d1;
case 0x6164d4:c.instructions+=12;goto B6164d4;
case 0x6164d7:c.instructions+=11;goto B6164d7;
case 0x6164da:c.instructions+=10;goto B6164da;
case 0x6164dd:c.instructions+=9;goto B6164dd;
case 0x6164de:c.instructions+=8;goto B6164de;
case 0x6164e1:c.instructions+=7;goto B6164e1;
case 0x6164e2:c.instructions+=6;goto B6164e2;
case 0x6164e9:c.instructions+=5;goto B6164e9;
case 0x6164ea:c.instructions+=4;goto B6164ea;
case 0x6164ed:c.instructions+=3;goto B6164ed;
case 0x6164f4:c.instructions+=2;goto B6164f4;
case 0x6164fb:c.instructions+=1;goto B6164fb;
case 0x616500:goto L616500;
case 0x616502:c.instructions+=1;goto B616502;
case 0x616508:goto L616508;
case 0x61650f:c.instructions+=12;goto B61650f;
case 0x616512:c.instructions+=11;goto B616512;
case 0x616515:c.instructions+=10;goto B616515;
case 0x61651c:c.instructions+=9;goto B61651c;
case 0x61651f:c.instructions+=8;goto B61651f;
case 0x616523:c.instructions+=7;goto B616523;
case 0x61652a:c.instructions+=6;goto B61652a;
case 0x61652d:c.instructions+=5;goto B61652d;
case 0x616534:c.instructions+=4;goto B616534;
case 0x616539:c.instructions+=3;goto B616539;
case 0x61653b:c.instructions+=2;goto B61653b;
case 0x616546:c.instructions+=1;goto B616546;
case 0x616548:goto L616548;
case 0x616552:goto L616552;
case 0x616556:c.instructions+=2;goto B616556;
case 0x616558:c.instructions+=1;goto B616558;
case 0x61655a:goto L61655a;
case 0x61655d:c.instructions+=4;goto B61655d;
case 0x616560:c.instructions+=3;goto B616560;
case 0x616561:c.instructions+=2;goto B616561;
case 0x616563:c.instructions+=1;goto B616563;
case 0x616568:goto L616568;
case 0x61656f:c.instructions+=2;goto B61656f;
case 0x616570:c.instructions+=1;goto B616570;
case 0x616575:goto L616575;
case 0x616577:goto L616577;
case 0x61657a:c.instructions+=4;goto B61657a;
case 0x616581:c.instructions+=3;goto B616581;
case 0x616582:c.instructions+=2;goto B616582;
case 0x616583:c.instructions+=1;goto B616583;
case 0x616588:goto L616588;
case 0x61658b:goto L61658b;
case 0x61658e:c.instructions+=10;goto B61658e;
case 0x616590:c.instructions+=9;goto B616590;
case 0x616597:c.instructions+=8;goto B616597;
case 0x61659a:c.instructions+=7;goto B61659a;
case 0x61659d:c.instructions+=6;goto B61659d;
case 0x6165a0:c.instructions+=5;goto B6165a0;
case 0x6165a3:c.instructions+=4;goto B6165a3;
case 0x6165a6:c.instructions+=3;goto B6165a6;
case 0x6165ad:c.instructions+=2;goto B6165ad;
case 0x6165b4:c.instructions+=1;goto B6165b4;
case 0x6165b6:goto L6165b6;
case 0x6165ba:c.instructions+=3;goto B6165ba;
case 0x6165c0:c.instructions+=2;goto B6165c0;
case 0x6165c1:c.instructions+=1;goto B6165c1;
case 0x6165c6:goto L6165c6;
case 0x6165c9:goto L6165c9;
case 0x6165d0:c.instructions+=2;goto B6165d0;
case 0x6165d1:c.instructions+=1;goto B6165d1;
case 0x6165d6:goto L6165d6;
case 0x6165d9:c.instructions+=10;goto B6165d9;
case 0x6165dc:c.instructions+=9;goto B6165dc;
case 0x6165df:c.instructions+=8;goto B6165df;
case 0x6165e0:c.instructions+=7;goto B6165e0;
case 0x6165e5:c.instructions+=6;goto B6165e5;
case 0x6165e7:c.instructions+=5;goto B6165e7;
case 0x6165e8:c.instructions+=4;goto B6165e8;
case 0x6165e9:c.instructions+=3;goto B6165e9;
case 0x6165f0:c.instructions+=2;goto B6165f0;
case 0x6165f1:c.instructions+=1;goto B6165f1;
case 0x6165f6:goto L6165f6;
case 0x6165f9:c.instructions+=11;goto B6165f9;
case 0x616600:c.instructions+=10;goto B616600;
case 0x616601:c.instructions+=9;goto B616601;
case 0x616608:c.instructions+=8;goto B616608;
case 0x616609:c.instructions+=7;goto B616609;
case 0x616610:c.instructions+=6;goto B616610;
case 0x616617:c.instructions+=5;goto B616617;
case 0x616618:c.instructions+=4;goto B616618;
case 0x61661d:c.instructions+=3;goto B61661d;
case 0x61661e:c.instructions+=2;goto B61661e;
case 0x61661f:c.instructions+=1;goto B61661f;
case 0x616624:goto L616624;
case 0x61662b:c.instructions+=6;goto B61662b;
case 0x616631:c.instructions+=5;goto B616631;
case 0x616634:c.instructions+=4;goto B616634;
case 0x616635:c.instructions+=3;goto B616635;
case 0x616639:c.instructions+=2;goto B616639;
case 0x61663f:c.instructions+=1;goto B61663f;
case 0x616644:goto L616644;
case 0x61664b:c.instructions+=1;goto B61664b;
case 0x61664d:goto L61664d;
case 0x616651:c.instructions+=3;goto B616651;
case 0x616657:c.instructions+=2;goto B616657;
case 0x616658:c.instructions+=1;goto B616658;
case 0x61665d:goto L61665d;
case 0x616660:goto L616660;
case 0x616666:c.instructions+=3;goto B616666;
case 0x616668:c.instructions+=2;goto B616668;
case 0x61666a:c.instructions+=1;goto B61666a;
case 0x61666c:goto L61666c;
case 0x616671:goto L616671;
case 0x616675:c.instructions+=7;goto B616675;
case 0x616678:c.instructions+=6;goto B616678;
case 0x61667e:c.instructions+=5;goto B61667e;
case 0x616685:c.instructions+=4;goto B616685;
case 0x61668b:c.instructions+=3;goto B61668b;
case 0x61668d:c.instructions+=2;goto B61668d;
case 0x616691:c.instructions+=1;goto B616691;
case 0x616693:goto L616693;
case 0x616698:c.instructions+=1;goto B616698;
case 0x6166a0:goto L6166a0;
case 0x6166a7:c.instructions+=2;goto B6166a7;
case 0x6166a9:c.instructions+=1;goto B6166a9;
case 0x6166ab:goto L6166ab;
case 0x6166af:c.instructions+=4;goto B6166af;
case 0x6166b2:c.instructions+=3;goto B6166b2;
case 0x6166b6:c.instructions+=2;goto B6166b6;
case 0x6166b9:c.instructions+=1;goto B6166b9;
case 0x6166bb:goto L6166bb;
case 0x6166bf:c.instructions+=5;goto B6166bf;
case 0x6166c0:c.instructions+=4;goto B6166c0;
case 0x6166c3:c.instructions+=3;goto B6166c3;
case 0x6166c5:c.instructions+=2;goto B6166c5;
case 0x6166c9:c.instructions+=1;goto B6166c9;
case 0x6166cb:goto L6166cb;
case 0x6166cd:goto L6166cd;
case 0x6166d3:c.instructions+=3;goto B6166d3;
case 0x6166da:c.instructions+=2;goto B6166da;
case 0x6166e1:c.instructions+=1;goto B6166e1;
case 0x6166e3:goto L6166e3;
case 0x6166e7:c.instructions+=4;goto B6166e7;
case 0x6166ed:c.instructions+=3;goto B6166ed;
case 0x6166ef:c.instructions+=2;goto B6166ef;
case 0x6166f2:c.instructions+=1;goto B6166f2;
case 0x6166f4:goto L6166f4;
case 0x6166f9:c.instructions+=2;goto B6166f9;
case 0x616700:c.instructions+=1;goto B616700;
case 0x616707:goto L616707;
case 0x61670b:c.instructions+=9;goto B61670b;
case 0x61670e:c.instructions+=8;goto B61670e;
case 0x616711:c.instructions+=7;goto B616711;
case 0x616718:c.instructions+=6;goto B616718;
case 0x61671c:c.instructions+=5;goto B61671c;
case 0x616723:c.instructions+=4;goto B616723;
case 0x61672a:c.instructions+=3;goto B61672a;
case 0x61672c:c.instructions+=2;goto B61672c;
case 0x61672f:c.instructions+=1;goto B61672f;
case 0x616731:goto L616731;
case 0x616735:c.instructions+=6;goto B616735;
case 0x616736:c.instructions+=5;goto B616736;
case 0x61673d:c.instructions+=4;goto B61673d;
case 0x61673e:c.instructions+=3;goto B61673e;
case 0x616740:c.instructions+=2;goto B616740;
case 0x616743:c.instructions+=1;goto B616743;
case 0x616745:goto L616745;
case 0x61674c:c.instructions+=1;goto B61674c;
case 0x616753:goto L616753;
case 0x616756:c.instructions+=1;goto B616756;
case 0x616758:goto L616758;
case 0x61675d:c.instructions+=2;goto B61675d;
case 0x616764:c.instructions+=1;goto B616764;
case 0x616766:goto L616766;
case 0x616769:c.instructions+=1;goto B616769;
case 0x61676b:goto L61676b;
case 0x61676f:c.instructions+=2;goto B61676f;
case 0x616771:c.instructions+=1;goto B616771;
case 0x616773:goto L616773;
case 0x61677a:c.instructions+=1;goto B61677a;
case 0x61677c:goto L61677c;
case 0x616780:c.instructions+=2;goto B616780;
case 0x616787:c.instructions+=1;goto B616787;
case 0x616789:goto L616789;
case 0x61678e:c.instructions+=1;goto B61678e;
case 0x616795:goto L616795;
case 0x61679a:c.instructions+=2;goto B61679a;
case 0x61679d:c.instructions+=1;goto B61679d;
case 0x61679f:goto L61679f;
case 0x6167a1:c.instructions+=1;goto B6167a1;
case 0x6167a8:goto L6167a8;
case 0x6167ad:c.instructions+=2;goto B6167ad;
case 0x6167b0:c.instructions+=1;goto B6167b0;
case 0x6167b2:goto L6167b2;
case 0x6167b4:c.instructions+=1;goto B6167b4;
case 0x6167bb:goto L6167bb;
case 0x6167be:c.instructions+=1;goto B6167be;
case 0x6167c0:goto L6167c0;
case 0x6167c2:c.instructions+=1;goto B6167c2;
case 0x6167c8:goto L6167c8;
case 0x6167cf:c.instructions+=4;goto B6167cf;
case 0x6167d6:c.instructions+=3;goto B6167d6;
case 0x6167d7:c.instructions+=2;goto B6167d7;
case 0x6167d8:c.instructions+=1;goto B6167d8;
case 0x6167dd:goto L6167dd;
case 0x6167e1:c.instructions+=6;goto B6167e1;
case 0x6167e2:c.instructions+=5;goto B6167e2;
case 0x6167e9:c.instructions+=4;goto B6167e9;
case 0x6167ea:c.instructions+=3;goto B6167ea;
case 0x6167f1:c.instructions+=2;goto B6167f1;
case 0x6167f2:c.instructions+=1;goto B6167f2;
case 0x6167f7:goto L6167f7;
case 0x6167fb:c.instructions+=4;goto B6167fb;
case 0x6167fe:c.instructions+=3;goto B6167fe;
case 0x6167ff:c.instructions+=2;goto B6167ff;
case 0x616800:c.instructions+=1;goto B616800;
case 0x616805:goto L616805;
case 0x616807:c.instructions+=5;goto B616807;
case 0x61680b:c.instructions+=4;goto B61680b;
case 0x61680e:c.instructions+=3;goto B61680e;
case 0x616810:c.instructions+=2;goto B616810;
case 0x616812:c.instructions+=1;goto B616812;
case 0x616814:goto L616814;
case 0x616816:c.instructions+=1;goto B616816;
case 0x61681d:goto L61681d;
case 0x61681e:c.instructions+=5;goto B61681e;
case 0x616825:c.instructions+=4;goto B616825;
case 0x616826:c.instructions+=3;goto B616826;
case 0x61682a:c.instructions+=2;goto B61682a;
case 0x616830:c.instructions+=1;goto B616830;
case 0x616835:goto L616835;
case 0x616836:c.instructions+=2;goto B616836;
case 0x616837:c.instructions+=1;goto B616837;
case 0x61683c:goto L61683c;
case 0x616842:c.instructions+=6;goto B616842;
case 0x616845:c.instructions+=5;goto B616845;
case 0x616848:c.instructions+=4;goto B616848;
case 0x61684b:c.instructions+=3;goto B61684b;
case 0x61684d:c.instructions+=2;goto B61684d;
case 0x616850:c.instructions+=1;goto B616850;
case 0x616856:goto L616856;
case 0x616859:c.instructions+=4;goto B616859;
case 0x61685a:c.instructions+=3;goto B61685a;
case 0x61685f:c.instructions+=2;goto B61685f;
case 0x616860:c.instructions+=1;goto B616860;
case 0x616865:goto L616865;
case 0x61686c:c.instructions+=2;goto B61686c;
case 0x61686d:c.instructions+=1;goto B61686d;
case 0x616872:goto L616872;
case 0x616875:c.instructions+=205;goto B616875;
case 0x616877:c.instructions+=204;goto B616877;
case 0x616879:c.instructions+=203;goto B616879;
case 0x616880:c.instructions+=202;goto B616880;
case 0x616883:c.instructions+=201;goto B616883;
case 0x616885:c.instructions+=200;goto B616885;
case 0x61688c:c.instructions+=199;goto B61688c;
case 0x61688f:c.instructions+=198;goto B61688f;
case 0x616891:c.instructions+=197;goto B616891;
case 0x616898:c.instructions+=196;goto B616898;
case 0x61689f:c.instructions+=195;goto B61689f;
case 0x6168a2:c.instructions+=194;goto B6168a2;
case 0x6168a9:c.instructions+=193;goto B6168a9;
case 0x6168ab:c.instructions+=192;goto B6168ab;
case 0x6168ad:c.instructions+=191;goto B6168ad;
case 0x6168b4:c.instructions+=190;goto B6168b4;
case 0x6168b7:c.instructions+=189;goto B6168b7;
case 0x6168b9:c.instructions+=188;goto B6168b9;
case 0x6168c0:c.instructions+=187;goto B6168c0;
case 0x6168c3:c.instructions+=186;goto B6168c3;
case 0x6168c5:c.instructions+=185;goto B6168c5;
case 0x6168c9:c.instructions+=184;goto B6168c9;
case 0x6168d0:c.instructions+=183;goto B6168d0;
case 0x6168d3:c.instructions+=182;goto B6168d3;
case 0x6168da:c.instructions+=181;goto B6168da;
case 0x6168dd:c.instructions+=180;goto B6168dd;
case 0x6168df:c.instructions+=179;goto B6168df;
case 0x6168e6:c.instructions+=178;goto B6168e6;
case 0x6168e9:c.instructions+=177;goto B6168e9;
case 0x6168eb:c.instructions+=176;goto B6168eb;
case 0x6168f2:c.instructions+=175;goto B6168f2;
case 0x6168f5:c.instructions+=174;goto B6168f5;
case 0x6168f7:c.instructions+=173;goto B6168f7;
case 0x6168fb:c.instructions+=172;goto B6168fb;
case 0x616902:c.instructions+=171;goto B616902;
case 0x616905:c.instructions+=170;goto B616905;
case 0x61690c:c.instructions+=169;goto B61690c;
case 0x61690f:c.instructions+=168;goto B61690f;
case 0x616911:c.instructions+=167;goto B616911;
case 0x616918:c.instructions+=166;goto B616918;
case 0x61691b:c.instructions+=165;goto B61691b;
case 0x61691d:c.instructions+=164;goto B61691d;
case 0x616924:c.instructions+=163;goto B616924;
case 0x616927:c.instructions+=162;goto B616927;
case 0x616929:c.instructions+=161;goto B616929;
case 0x61692d:c.instructions+=160;goto B61692d;
case 0x616934:c.instructions+=159;goto B616934;
case 0x616937:c.instructions+=158;goto B616937;
case 0x61693e:c.instructions+=157;goto B61693e;
case 0x616941:c.instructions+=156;goto B616941;
case 0x616943:c.instructions+=155;goto B616943;
case 0x61694a:c.instructions+=154;goto B61694a;
case 0x61694d:c.instructions+=153;goto B61694d;
case 0x61694f:c.instructions+=152;goto B61694f;
case 0x616956:c.instructions+=151;goto B616956;
case 0x616959:c.instructions+=150;goto B616959;
case 0x61695b:c.instructions+=149;goto B61695b;
case 0x61695f:c.instructions+=148;goto B61695f;
case 0x616966:c.instructions+=147;goto B616966;
case 0x616969:c.instructions+=146;goto B616969;
case 0x616970:c.instructions+=145;goto B616970;
case 0x616972:c.instructions+=144;goto B616972;
case 0x616974:c.instructions+=143;goto B616974;
case 0x61697b:c.instructions+=142;goto B61697b;
case 0x61697e:c.instructions+=141;goto B61697e;
case 0x616980:c.instructions+=140;goto B616980;
case 0x616987:c.instructions+=139;goto B616987;
case 0x61698a:c.instructions+=138;goto B61698a;
case 0x61698c:c.instructions+=137;goto B61698c;
case 0x616990:c.instructions+=136;goto B616990;
case 0x616997:c.instructions+=135;goto B616997;
case 0x61699a:c.instructions+=134;goto B61699a;
case 0x6169a1:c.instructions+=133;goto B6169a1;
case 0x6169a4:c.instructions+=132;goto B6169a4;
case 0x6169a6:c.instructions+=131;goto B6169a6;
case 0x6169ad:c.instructions+=130;goto B6169ad;
case 0x6169b0:c.instructions+=129;goto B6169b0;
case 0x6169b2:c.instructions+=128;goto B6169b2;
case 0x6169b9:c.instructions+=127;goto B6169b9;
case 0x6169bc:c.instructions+=126;goto B6169bc;
case 0x6169be:c.instructions+=125;goto B6169be;
case 0x6169c2:c.instructions+=124;goto B6169c2;
case 0x6169c9:c.instructions+=123;goto B6169c9;
case 0x6169cc:c.instructions+=122;goto B6169cc;
case 0x6169d3:c.instructions+=121;goto B6169d3;
case 0x6169d6:c.instructions+=120;goto B6169d6;
case 0x6169d8:c.instructions+=119;goto B6169d8;
case 0x6169df:c.instructions+=118;goto B6169df;
case 0x6169e2:c.instructions+=117;goto B6169e2;
case 0x6169e4:c.instructions+=116;goto B6169e4;
case 0x6169eb:c.instructions+=115;goto B6169eb;
case 0x6169ee:c.instructions+=114;goto B6169ee;
case 0x6169f0:c.instructions+=113;goto B6169f0;
case 0x6169f4:c.instructions+=112;goto B6169f4;
case 0x6169fb:c.instructions+=111;goto B6169fb;
case 0x6169fe:c.instructions+=110;goto B6169fe;
case 0x616a05:c.instructions+=109;goto B616a05;
case 0x616a08:c.instructions+=108;goto B616a08;
case 0x616a0a:c.instructions+=107;goto B616a0a;
case 0x616a11:c.instructions+=106;goto B616a11;
case 0x616a14:c.instructions+=105;goto B616a14;
case 0x616a16:c.instructions+=104;goto B616a16;
case 0x616a1d:c.instructions+=103;goto B616a1d;
case 0x616a20:c.instructions+=102;goto B616a20;
case 0x616a22:c.instructions+=101;goto B616a22;
case 0x616a26:c.instructions+=100;goto B616a26;
case 0x616a2d:c.instructions+=99;goto B616a2d;
case 0x616a30:c.instructions+=98;goto B616a30;
case 0x616a37:c.instructions+=97;goto B616a37;
case 0x616a39:c.instructions+=96;goto B616a39;
case 0x616a3b:c.instructions+=95;goto B616a3b;
case 0x616a42:c.instructions+=94;goto B616a42;
case 0x616a45:c.instructions+=93;goto B616a45;
case 0x616a47:c.instructions+=92;goto B616a47;
case 0x616a4e:c.instructions+=91;goto B616a4e;
case 0x616a51:c.instructions+=90;goto B616a51;
case 0x616a53:c.instructions+=89;goto B616a53;
case 0x616a57:c.instructions+=88;goto B616a57;
case 0x616a5e:c.instructions+=87;goto B616a5e;
case 0x616a61:c.instructions+=86;goto B616a61;
case 0x616a68:c.instructions+=85;goto B616a68;
case 0x616a6b:c.instructions+=84;goto B616a6b;
case 0x616a6d:c.instructions+=83;goto B616a6d;
case 0x616a74:c.instructions+=82;goto B616a74;
case 0x616a77:c.instructions+=81;goto B616a77;
case 0x616a79:c.instructions+=80;goto B616a79;
case 0x616a80:c.instructions+=79;goto B616a80;
case 0x616a83:c.instructions+=78;goto B616a83;
case 0x616a85:c.instructions+=77;goto B616a85;
case 0x616a89:c.instructions+=76;goto B616a89;
case 0x616a90:c.instructions+=75;goto B616a90;
case 0x616a93:c.instructions+=74;goto B616a93;
case 0x616a9a:c.instructions+=73;goto B616a9a;
case 0x616a9d:c.instructions+=72;goto B616a9d;
case 0x616a9f:c.instructions+=71;goto B616a9f;
case 0x616aa6:c.instructions+=70;goto B616aa6;
case 0x616aa9:c.instructions+=69;goto B616aa9;
case 0x616aab:c.instructions+=68;goto B616aab;
case 0x616ab2:c.instructions+=67;goto B616ab2;
case 0x616ab5:c.instructions+=66;goto B616ab5;
case 0x616ab7:c.instructions+=65;goto B616ab7;
case 0x616abb:c.instructions+=64;goto B616abb;
case 0x616ac2:c.instructions+=63;goto B616ac2;
case 0x616ac5:c.instructions+=62;goto B616ac5;
case 0x616acc:c.instructions+=61;goto B616acc;
case 0x616acf:c.instructions+=60;goto B616acf;
case 0x616ad1:c.instructions+=59;goto B616ad1;
case 0x616ad8:c.instructions+=58;goto B616ad8;
case 0x616adb:c.instructions+=57;goto B616adb;
case 0x616add:c.instructions+=56;goto B616add;
case 0x616ae4:c.instructions+=55;goto B616ae4;
case 0x616ae7:c.instructions+=54;goto B616ae7;
case 0x616ae9:c.instructions+=53;goto B616ae9;
case 0x616aed:c.instructions+=52;goto B616aed;
case 0x616af4:c.instructions+=51;goto B616af4;
case 0x616af7:c.instructions+=50;goto B616af7;
case 0x616afe:c.instructions+=49;goto B616afe;
case 0x616b01:c.instructions+=48;goto B616b01;
case 0x616b03:c.instructions+=47;goto B616b03;
case 0x616b0a:c.instructions+=46;goto B616b0a;
case 0x616b0d:c.instructions+=45;goto B616b0d;
case 0x616b0f:c.instructions+=44;goto B616b0f;
case 0x616b16:c.instructions+=43;goto B616b16;
case 0x616b18:c.instructions+=42;goto B616b18;
case 0x616b1a:c.instructions+=41;goto B616b1a;
case 0x616b1e:c.instructions+=40;goto B616b1e;
case 0x616b25:c.instructions+=39;goto B616b25;
case 0x616b28:c.instructions+=38;goto B616b28;
case 0x616b2f:c.instructions+=37;goto B616b2f;
case 0x616b32:c.instructions+=36;goto B616b32;
case 0x616b34:c.instructions+=35;goto B616b34;
case 0x616b3b:c.instructions+=34;goto B616b3b;
case 0x616b3e:c.instructions+=33;goto B616b3e;
case 0x616b40:c.instructions+=32;goto B616b40;
case 0x616b47:c.instructions+=31;goto B616b47;
case 0x616b4a:c.instructions+=30;goto B616b4a;
case 0x616b4c:c.instructions+=29;goto B616b4c;
case 0x616b50:c.instructions+=28;goto B616b50;
case 0x616b57:c.instructions+=27;goto B616b57;
case 0x616b5a:c.instructions+=26;goto B616b5a;
case 0x616b5e:c.instructions+=25;goto B616b5e;
case 0x616b65:c.instructions+=24;goto B616b65;
case 0x616b66:c.instructions+=23;goto B616b66;
case 0x616b69:c.instructions+=22;goto B616b69;
case 0x616b6a:c.instructions+=21;goto B616b6a;
case 0x616b6c:c.instructions+=20;goto B616b6c;
case 0x616b73:c.instructions+=19;goto B616b73;
case 0x616b76:c.instructions+=18;goto B616b76;
case 0x616b78:c.instructions+=17;goto B616b78;
case 0x616b7f:c.instructions+=16;goto B616b7f;
case 0x616b82:c.instructions+=15;goto B616b82;
case 0x616b84:c.instructions+=14;goto B616b84;
case 0x616b88:c.instructions+=13;goto B616b88;
case 0x616b8f:c.instructions+=12;goto B616b8f;
case 0x616b92:c.instructions+=11;goto B616b92;
case 0x616b99:c.instructions+=10;goto B616b99;
case 0x616b9c:c.instructions+=9;goto B616b9c;
case 0x616b9e:c.instructions+=8;goto B616b9e;
case 0x616ba5:c.instructions+=7;goto B616ba5;
case 0x616ba8:c.instructions+=6;goto B616ba8;
case 0x616baa:c.instructions+=5;goto B616baa;
case 0x616bb1:c.instructions+=4;goto B616bb1;
case 0x616bb4:c.instructions+=3;goto B616bb4;
case 0x616bb6:c.instructions+=2;goto B616bb6;
case 0x616bba:c.instructions+=1;goto B616bba;
case 0x616bbf:goto L616bbf;
case 0x616bc2:c.instructions+=11;goto B616bc2;
case 0x616bc5:c.instructions+=10;goto B616bc5;
case 0x616bc7:c.instructions+=9;goto B616bc7;
case 0x616bca:c.instructions+=8;goto B616bca;
case 0x616bce:c.instructions+=7;goto B616bce;
case 0x616bd0:c.instructions+=6;goto B616bd0;
case 0x616bd3:c.instructions+=5;goto B616bd3;
case 0x616bd5:c.instructions+=4;goto B616bd5;
case 0x616bdb:c.instructions+=3;goto B616bdb;
case 0x616be1:c.instructions+=2;goto B616be1;
case 0x616be7:c.instructions+=1;goto B616be7;
case 0x616bed:goto L616bed;
case 0x616bf2:c.instructions+=4;goto B616bf2;
case 0x616bf4:c.instructions+=3;goto B616bf4;
case 0x616bf6:c.instructions+=2;goto B616bf6;
case 0x616bfa:c.instructions+=1;goto B616bfa;
case 0x616bfc:goto L616bfc;
case 0x616bfd:c.instructions+=5;goto B616bfd;
case 0x616c02:c.instructions+=4;goto B616c02;
case 0x616c03:c.instructions+=3;goto B616c03;
case 0x616c08:c.instructions+=2;goto B616c08;
case 0x616c0a:c.instructions+=1;goto B616c0a;
case 0x616c0f:goto L616c0f;
case 0x616c15:goto L616c15;
case 0x616c18:c.instructions+=24;goto B616c18;
case 0x616c1b:c.instructions+=23;goto B616c1b;
case 0x616c1d:c.instructions+=22;goto B616c1d;
case 0x616c23:c.instructions+=21;goto B616c23;
case 0x616c26:c.instructions+=20;goto B616c26;
case 0x616c29:c.instructions+=19;goto B616c29;
case 0x616c2c:c.instructions+=18;goto B616c2c;
case 0x616c2f:c.instructions+=17;goto B616c2f;
case 0x616c35:c.instructions+=16;goto B616c35;
case 0x616c38:c.instructions+=15;goto B616c38;
case 0x616c3b:c.instructions+=14;goto B616c3b;
case 0x616c3e:c.instructions+=13;goto B616c3e;
case 0x616c41:c.instructions+=12;goto B616c41;
case 0x616c47:c.instructions+=11;goto B616c47;
case 0x616c4a:c.instructions+=10;goto B616c4a;
case 0x616c51:c.instructions+=9;goto B616c51;
case 0x616c58:c.instructions+=8;goto B616c58;
case 0x616c5a:c.instructions+=7;goto B616c5a;
case 0x616c61:c.instructions+=6;goto B616c61;
case 0x616c68:c.instructions+=5;goto B616c68;
case 0x616c6f:c.instructions+=4;goto B616c6f;
case 0x616c71:c.instructions+=3;goto B616c71;
case 0x616c78:c.instructions+=2;goto B616c78;
case 0x616c7e:c.instructions+=1;goto B616c7e;
case 0x616c80:goto L616c80;
case 0x616c81:c.instructions+=7;goto B616c81;
case 0x616c83:c.instructions+=6;goto B616c83;
case 0x616c84:c.instructions+=5;goto B616c84;
case 0x616c85:c.instructions+=4;goto B616c85;
case 0x616c8c:c.instructions+=3;goto B616c8c;
case 0x616c8d:c.instructions+=2;goto B616c8d;
case 0x616c91:c.instructions+=1;goto B616c91;
case 0x616c96:goto L616c96;
case 0x616c9d:goto L616c9d;
case 0x616ca3:c.instructions+=4;goto B616ca3;
case 0x616cab:c.instructions+=3;goto B616cab;
case 0x616cad:c.instructions+=2;goto B616cad;
case 0x616cb0:c.instructions+=1;goto B616cb0;
case 0x616cb2:goto L616cb2;
case 0x616cb8:c.instructions+=3;goto B616cb8;
case 0x616cba:c.instructions+=2;goto B616cba;
case 0x616cbd:c.instructions+=1;goto B616cbd;
case 0x616cbf:goto L616cbf;
case 0x616cc5:c.instructions+=5;goto B616cc5;
case 0x616ccb:c.instructions+=4;goto B616ccb;
case 0x616cd1:c.instructions+=3;goto B616cd1;
case 0x616cd3:c.instructions+=2;goto B616cd3;
case 0x616cd7:c.instructions+=1;goto B616cd7;
case 0x616cd9:goto L616cd9;
case 0x616ce1:c.instructions+=2;goto B616ce1;
case 0x616ce3:c.instructions+=1;goto B616ce3;
case 0x616ce8:goto L616ce8;
case 0x616cee:c.instructions+=3;goto B616cee;
case 0x616cf0:c.instructions+=2;goto B616cf0;
case 0x616cf3:c.instructions+=1;goto B616cf3;
case 0x616cf5:goto L616cf5;
case 0x616cfd:goto L616cfd;
case 0x616d01:c.instructions+=4;goto B616d01;
case 0x616d06:c.instructions+=3;goto B616d06;
case 0x616d07:c.instructions+=2;goto B616d07;
case 0x616d08:c.instructions+=1;goto B616d08;
case 0x616d0d:goto L616d0d;
case 0x616d11:c.instructions+=6;goto B616d11;
case 0x616d17:c.instructions+=5;goto B616d17;
case 0x616d1a:c.instructions+=4;goto B616d1a;
case 0x616d20:c.instructions+=3;goto B616d20;
case 0x616d22:c.instructions+=2;goto B616d22;
case 0x616d25:c.instructions+=1;goto B616d25;
case 0x616d27:goto L616d27;
case 0x616d2c:c.instructions+=1;goto B616d2c;
case 0x616d30:goto L616d30;
case 0x616d36:c.instructions+=1;goto B616d36;
case 0x616d3c:goto L616d3c;
case 0x616d43:c.instructions+=1;goto B616d43;
case 0x616d45:goto L616d45;
case 0x616d4b:c.instructions+=4;goto B616d4b;
case 0x616d51:c.instructions+=3;goto B616d51;
case 0x616d57:c.instructions+=2;goto B616d57;
case 0x616d5b:c.instructions+=1;goto B616d5b;
case 0x616d5d:goto L616d5d;
case 0x616d63:c.instructions+=3;goto B616d63;
case 0x616d69:c.instructions+=2;goto B616d69;
case 0x616d6f:c.instructions+=1;goto B616d6f;
case 0x616d73:goto L616d73;
case 0x616d7a:c.instructions+=31;goto B616d7a;
case 0x616d7c:c.instructions+=30;goto B616d7c;
case 0x616d83:c.instructions+=29;goto B616d83;
case 0x616d89:c.instructions+=28;goto B616d89;
case 0x616d8b:c.instructions+=27;goto B616d8b;
case 0x616d8f:c.instructions+=26;goto B616d8f;
case 0x616d96:c.instructions+=25;goto B616d96;
case 0x616d9b:c.instructions+=24;goto B616d9b;
case 0x616d9d:c.instructions+=23;goto B616d9d;
case 0x616da3:c.instructions+=22;goto B616da3;
case 0x616da5:c.instructions+=21;goto B616da5;
case 0x616da9:c.instructions+=20;goto B616da9;
case 0x616dac:c.instructions+=19;goto B616dac;
case 0x616db0:c.instructions+=18;goto B616db0;
case 0x616db2:c.instructions+=17;goto B616db2;
case 0x616db9:c.instructions+=16;goto B616db9;
case 0x616dbc:c.instructions+=15;goto B616dbc;
case 0x616dc3:c.instructions+=14;goto B616dc3;
case 0x616dc7:c.instructions+=13;goto B616dc7;
case 0x616dc8:c.instructions+=12;goto B616dc8;
case 0x616dca:c.instructions+=11;goto B616dca;
case 0x616dd1:c.instructions+=10;goto B616dd1;
case 0x616dd5:c.instructions+=9;goto B616dd5;
case 0x616dd7:c.instructions+=8;goto B616dd7;
case 0x616dde:c.instructions+=7;goto B616dde;
case 0x616de5:c.instructions+=6;goto B616de5;
case 0x616de9:c.instructions+=5;goto B616de9;
case 0x616deb:c.instructions+=4;goto B616deb;
case 0x616df2:c.instructions+=3;goto B616df2;
case 0x616df4:c.instructions+=2;goto B616df4;
case 0x616df6:c.instructions+=1;goto B616df6;
case 0x616dfb:goto L616dfb;
case 0x616e00:c.instructions+=5;goto B616e00;
case 0x616e02:c.instructions+=4;goto B616e02;
case 0x616e04:c.instructions+=3;goto B616e04;
case 0x616e0b:c.instructions+=2;goto B616e0b;
case 0x616e0c:c.instructions+=1;goto B616e0c;
case 0x616e11:goto L616e11;
case 0x616e18:c.instructions+=42;goto B616e18;
case 0x616e1f:c.instructions+=41;goto B616e1f;
case 0x616e24:c.instructions+=40;goto B616e24;
case 0x616e26:c.instructions+=39;goto B616e26;
case 0x616e2b:c.instructions+=38;goto B616e2b;
case 0x616e31:c.instructions+=37;goto B616e31;
case 0x616e35:c.instructions+=36;goto B616e35;
case 0x616e39:c.instructions+=35;goto B616e39;
case 0x616e40:c.instructions+=34;goto B616e40;
case 0x616e44:c.instructions+=33;goto B616e44;
case 0x616e4b:c.instructions+=32;goto B616e4b;
case 0x616e4f:c.instructions+=31;goto B616e4f;
case 0x616e56:c.instructions+=30;goto B616e56;
case 0x616e5b:c.instructions+=29;goto B616e5b;
case 0x616e62:c.instructions+=28;goto B616e62;
case 0x616e69:c.instructions+=27;goto B616e69;
case 0x616e6f:c.instructions+=26;goto B616e6f;
case 0x616e73:c.instructions+=25;goto B616e73;
case 0x616e77:c.instructions+=24;goto B616e77;
case 0x616e7b:c.instructions+=23;goto B616e7b;
case 0x616e7f:c.instructions+=22;goto B616e7f;
case 0x616e86:c.instructions+=21;goto B616e86;
case 0x616e8a:c.instructions+=20;goto B616e8a;
case 0x616e90:c.instructions+=19;goto B616e90;
case 0x616e94:c.instructions+=18;goto B616e94;
case 0x616e97:c.instructions+=17;goto B616e97;
case 0x616e9b:c.instructions+=16;goto B616e9b;
case 0x616e9f:c.instructions+=15;goto B616e9f;
case 0x616ea3:c.instructions+=14;goto B616ea3;
case 0x616eaa:c.instructions+=13;goto B616eaa;
case 0x616eb1:c.instructions+=12;goto B616eb1;
case 0x616eb5:c.instructions+=11;goto B616eb5;
case 0x616eb9:c.instructions+=10;goto B616eb9;
case 0x616ebd:c.instructions+=9;goto B616ebd;
case 0x616ec1:c.instructions+=8;goto B616ec1;
case 0x616ec8:c.instructions+=7;goto B616ec8;
case 0x616ecf:c.instructions+=6;goto B616ecf;
case 0x616ed5:c.instructions+=5;goto B616ed5;
case 0x616edd:c.instructions+=4;goto B616edd;
case 0x616ee4:c.instructions+=3;goto B616ee4;
case 0x616ee7:c.instructions+=2;goto B616ee7;
case 0x616eed:c.instructions+=1;goto B616eed;
case 0x616ef4:goto L616ef4;
case 0x616efb:c.instructions+=9;goto B616efb;
case 0x616f00:c.instructions+=8;goto B616f00;
case 0x616f06:c.instructions+=7;goto B616f06;
case 0x616f08:c.instructions+=6;goto B616f08;
case 0x616f0b:c.instructions+=5;goto B616f0b;
case 0x616f12:c.instructions+=4;goto B616f12;
case 0x616f14:c.instructions+=3;goto B616f14;
case 0x616f17:c.instructions+=2;goto B616f17;
case 0x616f1e:c.instructions+=1;goto B616f1e;
case 0x616f22:goto L616f22;
case 0x616f24:c.instructions+=27;goto B616f24;
case 0x616f27:c.instructions+=26;goto B616f27;
case 0x616f29:c.instructions+=25;goto B616f29;
case 0x616f2c:c.instructions+=24;goto B616f2c;
case 0x616f2e:c.instructions+=23;goto B616f2e;
case 0x616f31:c.instructions+=22;goto B616f31;
case 0x616f34:c.instructions+=21;goto B616f34;
case 0x616f37:c.instructions+=20;goto B616f37;
case 0x616f39:c.instructions+=19;goto B616f39;
case 0x616f3c:c.instructions+=18;goto B616f3c;
case 0x616f3d:c.instructions+=17;goto B616f3d;
case 0x616f3f:c.instructions+=16;goto B616f3f;
case 0x616f42:c.instructions+=15;goto B616f42;
case 0x616f44:c.instructions+=14;goto B616f44;
case 0x616f46:c.instructions+=13;goto B616f46;
case 0x616f49:c.instructions+=12;goto B616f49;
case 0x616f4d:c.instructions+=11;goto B616f4d;
case 0x616f50:c.instructions+=10;goto B616f50;
case 0x616f52:c.instructions+=9;goto B616f52;
case 0x616f55:c.instructions+=8;goto B616f55;
case 0x616f58:c.instructions+=7;goto B616f58;
case 0x616f5a:c.instructions+=6;goto B616f5a;
case 0x616f5e:c.instructions+=5;goto B616f5e;
case 0x616f60:c.instructions+=4;goto B616f60;
case 0x616f62:c.instructions+=3;goto B616f62;
case 0x616f68:c.instructions+=2;goto B616f68;
case 0x616f6a:c.instructions+=1;goto B616f6a;
case 0x616f6c:goto L616f6c;
case 0x616f70:c.instructions+=10;goto B616f70;
case 0x616f72:c.instructions+=9;goto B616f72;
case 0x616f74:c.instructions+=8;goto B616f74;
case 0x616f75:c.instructions+=7;goto B616f75;
case 0x616f77:c.instructions+=6;goto B616f77;
case 0x616f7b:c.instructions+=5;goto B616f7b;
case 0x616f7d:c.instructions+=4;goto B616f7d;
case 0x616f84:c.instructions+=3;goto B616f84;
case 0x616f86:c.instructions+=2;goto B616f86;
case 0x616f8c:c.instructions+=1;goto B616f8c;
case 0x616f92:goto L616f92;
case 0x616f96:c.instructions+=11;goto B616f96;
case 0x616f98:c.instructions+=10;goto B616f98;
case 0x616f9a:c.instructions+=9;goto B616f9a;
case 0x616f9c:c.instructions+=8;goto B616f9c;
case 0x616f9e:c.instructions+=7;goto B616f9e;
case 0x616fa1:c.instructions+=6;goto B616fa1;
case 0x616fa4:c.instructions+=5;goto B616fa4;
case 0x616fa7:c.instructions+=4;goto B616fa7;
case 0x616fad:c.instructions+=3;goto B616fad;
case 0x616fb0:c.instructions+=2;goto B616fb0;
case 0x616fb7:c.instructions+=1;goto B616fb7;
case 0x616fb9:goto L616fb9;
case 0x616fbb:c.instructions+=1;goto B616fbb;
case 0x616fbd:goto L616fbd;
case 0x616fc2:goto L616fc2;
case 0x616fc9:c.instructions+=3;goto B616fc9;
case 0x616fcb:c.instructions+=2;goto B616fcb;
case 0x616fcf:c.instructions+=1;goto B616fcf;
case 0x616fd5:goto L616fd5;
case 0x616fd7:c.instructions+=1;goto B616fd7;
case 0x616fdd:goto L616fdd;
case 0x616fe2:c.instructions+=5;goto B616fe2;
case 0x616fe4:c.instructions+=4;goto B616fe4;
case 0x616fe6:c.instructions+=3;goto B616fe6;
case 0x616fed:c.instructions+=2;goto B616fed;
case 0x616fee:c.instructions+=1;goto B616fee;
case 0x616ff3:goto L616ff3;
case 0x616ff8:c.instructions+=3;goto B616ff8;
case 0x616ffa:c.instructions+=2;goto B616ffa;
case 0x616ffc:c.instructions+=1;goto B616ffc;
default:missing_instruction(c.pc);}
B616003:L616003:{c.instructions+=132;NFSU2_TR(0x616003);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616007:{NFSU2_TR(0x616007);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616009:{NFSU2_TR(0x616009);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61600d:{NFSU2_TR(0x61600d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616011:{NFSU2_TR(0x616011);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616013:{NFSU2_TR(0x616013);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61601a:{NFSU2_TR(0x61601a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61601e:{NFSU2_TR(0x61601e);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616025:{NFSU2_TR(0x616025);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61602c:{NFSU2_TR(0x61602c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616030:{NFSU2_TR(0x616030);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616032:{NFSU2_TR(0x616032);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616036:{NFSU2_TR(0x616036);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61603a:{NFSU2_TR(0x61603a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61603c:{NFSU2_TR(0x61603c);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616040:{NFSU2_TR(0x616040);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616044:{NFSU2_TR(0x616044);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616046:{NFSU2_TR(0x616046);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61604d:{NFSU2_TR(0x61604d);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616054:{NFSU2_TR(0x616054);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616058:{NFSU2_TR(0x616058);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61605c:{NFSU2_TR(0x61605c);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616060:{NFSU2_TR(0x616060);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616062:{NFSU2_TR(0x616062);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616066:{NFSU2_TR(0x616066);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61606a:{NFSU2_TR(0x61606a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61606c:{NFSU2_TR(0x61606c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616070:{NFSU2_TR(0x616070);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616077:{NFSU2_TR(0x616077);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616079:{NFSU2_TR(0x616079);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616080:{NFSU2_TR(0x616080);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616087:{NFSU2_TR(0x616087);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61608b:{NFSU2_TR(0x61608b);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61608f:{NFSU2_TR(0x61608f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616093:{NFSU2_TR(0x616093);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616095:{NFSU2_TR(0x616095);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616099:{NFSU2_TR(0x616099);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61609d:{NFSU2_TR(0x61609d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61609f:{NFSU2_TR(0x61609f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6160a3:{NFSU2_TR(0x6160a3);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6160aa:{NFSU2_TR(0x6160aa);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6160ae:{NFSU2_TR(0x6160ae);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6160b5:{NFSU2_TR(0x6160b5);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6160bc:{NFSU2_TR(0x6160bc);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6160c0:{NFSU2_TR(0x6160c0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6160c2:{NFSU2_TR(0x6160c2);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6160c6:{NFSU2_TR(0x6160c6);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6160ca:{NFSU2_TR(0x6160ca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6160cc:{NFSU2_TR(0x6160cc);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6160d0:{NFSU2_TR(0x6160d0);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6160d4:{NFSU2_TR(0x6160d4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6160d6:{NFSU2_TR(0x6160d6);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6160dd:{NFSU2_TR(0x6160dd);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6160e1:{NFSU2_TR(0x6160e1);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6160e8:{NFSU2_TR(0x6160e8);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6160ef:{NFSU2_TR(0x6160ef);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6160f3:{NFSU2_TR(0x6160f3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6160f5:{NFSU2_TR(0x6160f5);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6160f9:{NFSU2_TR(0x6160f9);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6160fd:{NFSU2_TR(0x6160fd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6160ff:{NFSU2_TR(0x6160ff);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616103:{NFSU2_TR(0x616103);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616107:{NFSU2_TR(0x616107);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616109:{NFSU2_TR(0x616109);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616110:{NFSU2_TR(0x616110);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616117:{NFSU2_TR(0x616117);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61611b:{NFSU2_TR(0x61611b);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61611f:{NFSU2_TR(0x61611f);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616123:{NFSU2_TR(0x616123);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616125:{NFSU2_TR(0x616125);
u8 U[4];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61612c:{NFSU2_TR(0x61612c);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616130:{NFSU2_TR(0x616130);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616131:{NFSU2_TR(0x616131);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616135:{NFSU2_TR(0x616135);
u8 U[4];
w4(U+0,u32(u32(u32(0x154ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61613c:{NFSU2_TR(0x61613c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61613d:{NFSU2_TR(0x61613d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61613f:{NFSU2_TR(0x61613f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616143:{NFSU2_TR(0x616143);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61614a:{NFSU2_TR(0x61614a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61614c:{NFSU2_TR(0x61614c);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616153:{NFSU2_TR(0x616153);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61615a:{NFSU2_TR(0x61615a);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61615e:{NFSU2_TR(0x61615e);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616165:{NFSU2_TR(0x616165);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616169:{NFSU2_TR(0x616169);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61616b:{NFSU2_TR(0x61616b);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61616f:{NFSU2_TR(0x61616f);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616173:{NFSU2_TR(0x616173);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616175:{NFSU2_TR(0x616175);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616179:{NFSU2_TR(0x616179);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616180:{NFSU2_TR(0x616180);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616187:{NFSU2_TR(0x616187);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61618b:{NFSU2_TR(0x61618b);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61618f:{NFSU2_TR(0x61618f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616193:{NFSU2_TR(0x616193);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616195:{NFSU2_TR(0x616195);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616199:{NFSU2_TR(0x616199);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B61619b:{NFSU2_TR(0x61619b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61619d:{NFSU2_TR(0x61619d);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6161a4:{NFSU2_TR(0x6161a4);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6161ab:{NFSU2_TR(0x6161ab);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6161b2:{NFSU2_TR(0x6161b2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6161b6:{NFSU2_TR(0x6161b6);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6161ba:{NFSU2_TR(0x6161ba);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6161be:{NFSU2_TR(0x6161be);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6161c0:{NFSU2_TR(0x6161c0);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6161c4:{NFSU2_TR(0x6161c4);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6161c6:{NFSU2_TR(0x6161c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6161c8:{NFSU2_TR(0x6161c8);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6161cf:{NFSU2_TR(0x6161cf);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6161d6:{NFSU2_TR(0x6161d6);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6161dd:{NFSU2_TR(0x6161dd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6161e1:{NFSU2_TR(0x6161e1);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6161e8:{NFSU2_TR(0x6161e8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6161ec:{NFSU2_TR(0x6161ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6161ee:{NFSU2_TR(0x6161ee);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6161f2:{NFSU2_TR(0x6161f2);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6161f4:{NFSU2_TR(0x6161f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6161f6:{NFSU2_TR(0x6161f6);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6161fd:{NFSU2_TR(0x6161fd);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616204:{NFSU2_TR(0x616204);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61620b:{NFSU2_TR(0x61620b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61620f:{NFSU2_TR(0x61620f);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616216:{NFSU2_TR(0x616216);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61621a:{NFSU2_TR(0x61621a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61621c:{NFSU2_TR(0x61621c);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616220:{NFSU2_TR(0x616220);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B616222:{NFSU2_TR(0x616222);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616224:{NFSU2_TR(0x616224);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61622a:{NFSU2_TR(0x61622a);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616231:{NFSU2_TR(0x616231);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B616233:{NFSU2_TR(0x616233);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616238ull));
TAIL_STATIC(0x4012b0u,401);
}
B616238:L616238:{c.instructions+=5;NFSU2_TR(0x616238);
u8 U[4];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61623f:{NFSU2_TR(0x61623f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616240:{NFSU2_TR(0x616240);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B616243:{NFSU2_TR(0x616243);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616244:{NFSU2_TR(0x616244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616249ull));
TAIL_STATIC(0x4012b0u,401);
}
B616249:L616249:{c.instructions+=16;NFSU2_TR(0x616249);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61624c:{NFSU2_TR(0x61624c);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61624f:{NFSU2_TR(0x61624f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B616251:{NFSU2_TR(0x616251);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B616258:{NFSU2_TR(0x616258);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61625e:{NFSU2_TR(0x61625e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B616261:{NFSU2_TR(0x616261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616267:{NFSU2_TR(0x616267);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61626d:{NFSU2_TR(0x61626d);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B616274:{NFSU2_TR(0x616274);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61627e:{NFSU2_TR(0x61627e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B616280:{NFSU2_TR(0x616280);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616281:{NFSU2_TR(0x616281);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616282:{NFSU2_TR(0x616282);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616283:{NFSU2_TR(0x616283);
w4(R+4,u32(0x8357e0ull));
}
B616288:{NFSU2_TR(0x616288);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61628dull));
TAIL_STATIC(0x491e50u,491);
}
B61628d:L61628d:{c.instructions+=3;NFSU2_TR(0x61628d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B61628f:{NFSU2_TR(0x61628f);
u8 U[22];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B616296:{NFSU2_TR(0x616296);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x615df0u,615);}
}
B61629c:L61629c:{c.instructions+=5;NFSU2_TR(0x61629c);
u8 U[4];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6162a3:{NFSU2_TR(0x6162a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6162a4:{NFSU2_TR(0x6162a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6162a7:{NFSU2_TR(0x6162a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6162a8:{NFSU2_TR(0x6162a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6162adull));
TAIL_STATIC(0x4012b0u,401);
}
B6162ad:L6162ad:{c.instructions+=5;NFSU2_TR(0x6162ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6162af:{NFSU2_TR(0x6162af);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6162b6:{NFSU2_TR(0x6162b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6162b9:{NFSU2_TR(0x6162b9);
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
B6162bb:{NFSU2_TR(0x6162bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x615d90u,615);}
}
B6162c1:L6162c1:{c.instructions+=2;NFSU2_TR(0x6162c1);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xdull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6162c5:{NFSU2_TR(0x6162c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6162d3;}}
}
B6162c7:L6162c7:{c.instructions+=2;NFSU2_TR(0x6162c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xeull));
s4(u32(r4(U+0)),r4(U+4));
}
B6162ce:{NFSU2_TR(0x6162ce);
TAIL_STATIC(0x615cf0u,615);
}
B6162d3:L6162d3:{c.instructions+=6;NFSU2_TR(0x6162d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6162d4:{NFSU2_TR(0x6162d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6162d5:{NFSU2_TR(0x6162d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6162d6:{NFSU2_TR(0x6162d6);
__builtin_memmove((R+16),(R+20),4);
}
B6162d8:{NFSU2_TR(0x6162d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6162d9:{NFSU2_TR(0x6162d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6162e0:L6162e0:{c.instructions+=15;NFSU2_TR(0x6162e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6162e1:{NFSU2_TR(0x6162e1);
__builtin_memmove((R+20),(R+16),4);
}
B6162e3:{NFSU2_TR(0x6162e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B6162e6:{NFSU2_TR(0x6162e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x5c4ull))));
}
B6162ec:{NFSU2_TR(0x6162ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6162ef:{NFSU2_TR(0x6162ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6162f0:{NFSU2_TR(0x6162f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6162f3:{NFSU2_TR(0x6162f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6162f4:{NFSU2_TR(0x6162f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6162f5:{NFSU2_TR(0x6162f5);
__builtin_memmove((R+28),(R+4),4);
}
B6162f7:{NFSU2_TR(0x6162f7);
u8 U[4];
w4(U+0,u32(0x40400000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6162fc:{NFSU2_TR(0x6162fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6162fd:{NFSU2_TR(0x6162fd);
__builtin_memmove((R+4),(R+12),4);
}
B6162ff:{NFSU2_TR(0x6162ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616303:{NFSU2_TR(0x616303);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616308ull));
TAIL_STATIC(0x48acb0u,48a);
}
B616308:L616308:{c.instructions+=3;NFSU2_TR(0x616308);
__builtin_memmove((R+24),(R+0),4);
}
B61630a:{NFSU2_TR(0x61630a);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61630e:{NFSU2_TR(0x61630e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616313ull));
TAIL_STATIC(0x5b98a0u,5b9);
}
B616313:L616313:{c.instructions+=2;NFSU2_TR(0x616313);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B616316:{NFSU2_TR(0x616316);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L616341;}}
}
B616318:L616318:{c.instructions+=2;NFSU2_TR(0x616318);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61631f:{NFSU2_TR(0x61631f);
if(r1(R+518)){{goto L616341;}}
}
B616321:L616321:{c.instructions+=3;NFSU2_TR(0x616321);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B616325:{NFSU2_TR(0x616325);
{u32 ea_=u32(u32(8021760u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61632b:{NFSU2_TR(0x61632b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616330ull));
TAIL_STATIC(0x75bed4u,75b);
}
B616330:L616330:{c.instructions+=5;NFSU2_TR(0x616330);
__builtin_memmove((R+24),(R+0),4);
}
B616332:{NFSU2_TR(0x616332);
w4(R+0,u32(0x1ull));
}
B616337:{NFSU2_TR(0x616337);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61633b:{NFSU2_TR(0x61633b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61633e:{NFSU2_TR(0x61633e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616341:L616341:{c.instructions+=2;NFSU2_TR(0x616341);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B616344:{NFSU2_TR(0x616344);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x61ab25u,61a);}
}
B61634a:L61634a:{c.instructions+=5;NFSU2_TR(0x61634a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61634c:{NFSU2_TR(0x61634c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B61634e:{NFSU2_TR(0x61634e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B616350:{NFSU2_TR(0x616350);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616354:{NFSU2_TR(0x616354);
if(r1(R+518)){{goto L61635f;}}
}
B616356:L616356:{c.instructions+=3;NFSU2_TR(0x616356);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B616359:{NFSU2_TR(0x616359);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61635d:{NFSU2_TR(0x61635d);
{goto L616363;}
}
B61635f:L61635f:{c.instructions+=1;NFSU2_TR(0x61635f);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616363:L616363:{c.instructions+=12;NFSU2_TR(0x616363);
__builtin_memmove((R+24),gp(0x8654a4),4);
}
B616369:{NFSU2_TR(0x616369);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61636c:{NFSU2_TR(0x61636c);
__builtin_memmove((R+12),gp(0x82da60),4);
}
B616372:{NFSU2_TR(0x616372);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B616375:{NFSU2_TR(0x616375);
__builtin_memmove((R+0),(R+518),1);
}
B616378:{NFSU2_TR(0x616378);
w4(R+4,u32(r1(R+0)));
}
B61637b:{NFSU2_TR(0x61637b);
__builtin_memmove((R+0),gp(0x82da5c),4);
}
B616380:{NFSU2_TR(0x616380);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616387:{NFSU2_TR(0x616387);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61638d:{NFSU2_TR(0x61638d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B61638f:{NFSU2_TR(0x61638f);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616396:{NFSU2_TR(0x616396);
if(r1(R+512)){{goto L6163be;}}
}
B616398:L616398:{c.instructions+=7;NFSU2_TR(0x616398);
__builtin_memmove((R+4),gp(0x82da70),4);
}
B61639e:{NFSU2_TR(0x61639e);
w4(R+8,u32(0x1ull));
}
B6163a3:{NFSU2_TR(0x6163a3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1c0ull))));
}
B6163a9:{NFSU2_TR(0x6163a9);
__builtin_memmove(gp(0x82da6c),(R+8),4);
}
B6163af:{NFSU2_TR(0x6163af);
__builtin_memmove(gp(0x82da70),(R+4),4);
}
B6163b5:{NFSU2_TR(0x6163b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6163bc:{NFSU2_TR(0x6163bc);
{goto L6163d3;}
}
B6163be:L6163be:{c.instructions+=5;NFSU2_TR(0x6163be);
__builtin_memmove((R+8),(R+0),4);
}
B6163c0:{NFSU2_TR(0x6163c0);
__builtin_memmove((R+0),(R+4),4);
}
B6163c2:{NFSU2_TR(0x6163c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6163c9:{NFSU2_TR(0x6163c9);
__builtin_memmove(gp(0x82da5c),(R+0),4);
}
B6163ce:{NFSU2_TR(0x6163ce);
w4(R+8,u32(0x1ull));
}
B6163d3:L6163d3:{c.instructions+=3;NFSU2_TR(0x6163d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6163d6:{NFSU2_TR(0x6163d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6163d8:{NFSU2_TR(0x6163d8);
if(r1(R+512)){{goto L6163f3;}}
}
B6163da:L6163da:{c.instructions+=6;NFSU2_TR(0x6163da);
__builtin_memmove((R+4),gp(0x82da70),4);
}
B6163e0:{NFSU2_TR(0x6163e0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B6163e3:{NFSU2_TR(0x6163e3);
__builtin_memmove(gp(0x82da6c),(R+8),4);
}
B6163e9:{NFSU2_TR(0x6163e9);
__builtin_memmove(gp(0x82da70),(R+4),4);
}
B6163ef:{NFSU2_TR(0x6163ef);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6163f1:{NFSU2_TR(0x6163f1);
{goto L6163fc;}
}
B6163f3:L6163f3:{c.instructions+=3;NFSU2_TR(0x6163f3);
__builtin_memmove((R+24),(R+0),4);
}
B6163f5:{NFSU2_TR(0x6163f5);
__builtin_memmove((R+0),(R+4),4);
}
B6163f7:{NFSU2_TR(0x6163f7);
__builtin_memmove(gp(0x82da5c),(R+0),4);
}
B6163fc:L6163fc:{c.instructions+=3;NFSU2_TR(0x6163fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6163ff:{NFSU2_TR(0x6163ff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B616401:{NFSU2_TR(0x616401);
if(r1(R+512)){{goto L616421;}}
}
B616403:L616403:{c.instructions+=6;NFSU2_TR(0x616403);
__builtin_memmove((R+4),gp(0x82da70),4);
}
B616409:{NFSU2_TR(0x616409);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B61640c:{NFSU2_TR(0x61640c);
__builtin_memmove(gp(0x82da6c),(R+8),4);
}
B616412:{NFSU2_TR(0x616412);
__builtin_memmove(gp(0x82da70),(R+4),4);
}
B616418:{NFSU2_TR(0x616418);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61641f:{NFSU2_TR(0x61641f);
{goto L616436;}
}
B616421:L616421:{c.instructions+=5;NFSU2_TR(0x616421);
__builtin_memmove((R+8),(R+0),4);
}
B616423:{NFSU2_TR(0x616423);
__builtin_memmove((R+0),(R+4),4);
}
B616425:{NFSU2_TR(0x616425);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61642c:{NFSU2_TR(0x61642c);
__builtin_memmove(gp(0x82da5c),(R+0),4);
}
B616431:{NFSU2_TR(0x616431);
w4(R+8,u32(0x1ull));
}
B616436:L616436:{c.instructions+=3;NFSU2_TR(0x616436);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B616439:{NFSU2_TR(0x616439);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B61643b:{NFSU2_TR(0x61643b);
if(r1(R+512)){{goto L616454;}}
}
B61643d:L61643d:{c.instructions+=5;NFSU2_TR(0x61643d);
__builtin_memmove((R+4),gp(0x82da70),4);
}
B616443:{NFSU2_TR(0x616443);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B616446:{NFSU2_TR(0x616446);
__builtin_memmove(gp(0x82da6c),(R+8),4);
}
B61644c:{NFSU2_TR(0x61644c);
__builtin_memmove(gp(0x82da70),(R+4),4);
}
B616452:{NFSU2_TR(0x616452);
{goto L61645d;}
}
B616454:L616454:{c.instructions+=3;NFSU2_TR(0x616454);
__builtin_memmove((R+28),(R+0),4);
}
B616456:{NFSU2_TR(0x616456);
__builtin_memmove((R+0),(R+4),4);
}
B616458:{NFSU2_TR(0x616458);
__builtin_memmove(gp(0x82da5c),(R+0),4);
}
B61645d:L61645d:{c.instructions+=3;NFSU2_TR(0x61645d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B616460:{NFSU2_TR(0x616460);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B616462:{NFSU2_TR(0x616462);
if(r1(R+512)){{goto L61647f;}}
}
B616464:L616464:{c.instructions+=6;NFSU2_TR(0x616464);
__builtin_memmove((R+0),gp(0x82da70),4);
}
B616469:{NFSU2_TR(0x616469);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B61646c:{NFSU2_TR(0x61646c);
s4(0x82da6c,u32(0x1ull));
}
B616476:{NFSU2_TR(0x616476);
__builtin_memmove(gp(0x82da70),(R+0),4);
}
B61647b:{NFSU2_TR(0x61647b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B61647d:{NFSU2_TR(0x61647d);
{goto L616487;}
}
B61647f:L61647f:{c.instructions+=2;NFSU2_TR(0x61647f);
__builtin_memmove(gp(0x82da5c),(R+4),4);
}
B616485:{NFSU2_TR(0x616485);
__builtin_memmove((R+12),(R+0),4);
}
B616487:L616487:{c.instructions+=4;NFSU2_TR(0x616487);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61648e:{NFSU2_TR(0x61648e);
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
B616490:{NFSU2_TR(0x616490);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616497:{NFSU2_TR(0x616497);
if(r1(R+518)){TAIL_STATIC(0x61ab25u,61a);}
}
B61649d:L61649d:{c.instructions+=2;NFSU2_TR(0x61649d);
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
B61649f:{NFSU2_TR(0x61649f);
if(r1(R+518)){TAIL_STATIC(0x61ab25u,61a);}
}
B6164a5:L6164a5:{c.instructions+=2;NFSU2_TR(0x6164a5);
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
B6164a7:{NFSU2_TR(0x6164a7);
if(r1(R+518)){TAIL_STATIC(0x61ab25u,61a);}
}
B6164ad:L6164ad:{c.instructions+=2;NFSU2_TR(0x6164ad);
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
B6164af:{NFSU2_TR(0x6164af);
if(r1(R+518)){TAIL_STATIC(0x61ab25u,61a);}
}
B6164b5:L6164b5:{c.instructions+=4;NFSU2_TR(0x6164b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6164b8:{NFSU2_TR(0x6164b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6164b9:{NFSU2_TR(0x6164b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6164ba:{NFSU2_TR(0x6164ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6164bfull));
TAIL_STATIC(0x4012b0u,401);
}
B6164bf:L6164bf:{c.instructions+=19;NFSU2_TR(0x6164bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6164c2:{NFSU2_TR(0x6164c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6164c4:{NFSU2_TR(0x6164c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6164c7:{NFSU2_TR(0x6164c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6164ca:{NFSU2_TR(0x6164ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6164ce:{NFSU2_TR(0x6164ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6164d1:{NFSU2_TR(0x6164d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6164d4:{NFSU2_TR(0x6164d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6164d7:{NFSU2_TR(0x6164d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6164da:{NFSU2_TR(0x6164da);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6164dd:{NFSU2_TR(0x6164dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6164de:{NFSU2_TR(0x6164de);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6164e1:{NFSU2_TR(0x6164e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6164e2:{NFSU2_TR(0x6164e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x32cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6164e9:{NFSU2_TR(0x6164e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6164ea:{NFSU2_TR(0x6164ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6164ed:{NFSU2_TR(0x6164ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6164f4:{NFSU2_TR(0x6164f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x334ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6164fb:{NFSU2_TR(0x6164fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616500ull));
TAIL_STATIC(0x48ac60u,48a);
}
B616500:L616500:{c.instructions+=2;NFSU2_TR(0x616500);
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
B616502:{NFSU2_TR(0x616502);
if(r1(R+518)){TAIL_STATIC(0x61ab25u,61a);}
}
B616508:L616508:{c.instructions+=13;NFSU2_TR(0x616508);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61650f:{NFSU2_TR(0x61650f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B616512:{NFSU2_TR(0x616512);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B616515:{NFSU2_TR(0x616515);
u8 U[8];
w4(U+0,u32(u32(u32(0x340ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61651c:{NFSU2_TR(0x61651c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61651f:{NFSU2_TR(0x61651f);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616523:{NFSU2_TR(0x616523);
u8 U[8];
w4(U+0,u32(u32(u32(0x344ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61652a:{NFSU2_TR(0x61652a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61652d:{NFSU2_TR(0x61652d);
u8 U[8];
w4(U+0,u32(u32(u32(0x348ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616534:{NFSU2_TR(0x616534);
__builtin_memmove((R+0),gp(0x8a1c04),4);
}
B616539:{NFSU2_TR(0x616539);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61653b:{NFSU2_TR(0x61653b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B616546:{NFSU2_TR(0x616546);
if(r1(R+518)){{goto L616552;}}
}
B616548:L616548:{c.instructions+=1;NFSU2_TR(0x616548);
s4(0x82dad8,u32(0x1ull));
}
B616552:L616552:{c.instructions+=3;NFSU2_TR(0x616552);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B616556:{NFSU2_TR(0x616556);
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
B616558:{NFSU2_TR(0x616558);
if(r1(R+518)){{goto L616577;}}
}
B61655a:L61655a:{c.instructions+=5;NFSU2_TR(0x61655a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61655d:{NFSU2_TR(0x61655d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B616560:{NFSU2_TR(0x616560);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616561:{NFSU2_TR(0x616561);
__builtin_memmove((R+4),(R+0),4);
}
B616563:{NFSU2_TR(0x616563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616568ull));
TAIL_STATIC(0x60bcc0u,60b);
}
B616568:L616568:{c.instructions+=3;NFSU2_TR(0x616568);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61656f:{NFSU2_TR(0x61656f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616570:{NFSU2_TR(0x616570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616575ull));
TAIL_STATIC(0x4013d0u,401);
}
B616575:L616575:{c.instructions+=1;NFSU2_TR(0x616575);
{goto L61658b;}
}
B616577:L616577:{c.instructions+=5;NFSU2_TR(0x616577);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61657a:{NFSU2_TR(0x61657a);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B616581:{NFSU2_TR(0x616581);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616582:{NFSU2_TR(0x616582);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616583:{NFSU2_TR(0x616583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616588ull));
TAIL_STATIC(0x4012b0u,401);
}
B616588:L616588:{c.instructions+=1;NFSU2_TR(0x616588);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61658b:L61658b:{c.instructions+=11;NFSU2_TR(0x61658b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61658e:{NFSU2_TR(0x61658e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B616590:{NFSU2_TR(0x616590);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B616597:{NFSU2_TR(0x616597);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61659a:{NFSU2_TR(0x61659a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61659d:{NFSU2_TR(0x61659d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6165a0:{NFSU2_TR(0x6165a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6165a3:{NFSU2_TR(0x6165a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6165a6:{NFSU2_TR(0x6165a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6165ad:{NFSU2_TR(0x6165ad);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6165b4:{NFSU2_TR(0x6165b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6165c9;}}
}
B6165b6:L6165b6:{c.instructions+=4;NFSU2_TR(0x6165b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6165ba:{NFSU2_TR(0x6165ba);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1f88ull))));
}
B6165c0:{NFSU2_TR(0x6165c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6165c1:{NFSU2_TR(0x6165c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6165c6ull));
TAIL_STATIC(0x48e3b0u,48e);
}
B6165c6:L6165c6:{c.instructions+=1;NFSU2_TR(0x6165c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6165c9:L6165c9:{c.instructions+=3;NFSU2_TR(0x6165c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6165d0:{NFSU2_TR(0x6165d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6165d1:{NFSU2_TR(0x6165d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6165d6ull));
TAIL_STATIC(0x48ab10u,48a);
}
B6165d6:L6165d6:{c.instructions+=11;NFSU2_TR(0x6165d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6165d9:{NFSU2_TR(0x6165d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6165dc:{NFSU2_TR(0x6165dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6165df:{NFSU2_TR(0x6165df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6165e0:{NFSU2_TR(0x6165e0);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6165e5:{NFSU2_TR(0x6165e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6165e7:{NFSU2_TR(0x6165e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6165e8:{NFSU2_TR(0x6165e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6165e9:{NFSU2_TR(0x6165e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6165f0:{NFSU2_TR(0x6165f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6165f1:{NFSU2_TR(0x6165f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6165f6ull));
TAIL_STATIC(0x48ed60u,48e);
}
B6165f6:L6165f6:{c.instructions+=12;NFSU2_TR(0x6165f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6165f9:{NFSU2_TR(0x6165f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B616600:{NFSU2_TR(0x616600);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616601:{NFSU2_TR(0x616601);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B616608:{NFSU2_TR(0x616608);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616609:{NFSU2_TR(0x616609);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B616610:{NFSU2_TR(0x616610);
u8 U[4];
w4(U+0,u32(u32(u32(0x364ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B616617:{NFSU2_TR(0x616617);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616618:{NFSU2_TR(0x616618);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61661d:{NFSU2_TR(0x61661d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61661e:{NFSU2_TR(0x61661e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61661f:{NFSU2_TR(0x61661f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616624ull));
TAIL_STATIC(0x48f660u,48f);
}
B616624:L616624:{c.instructions+=7;NFSU2_TR(0x616624);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61662b:{NFSU2_TR(0x61662b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x120ull))));
}
B616631:{NFSU2_TR(0x616631);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B616634:{NFSU2_TR(0x616634);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616635:{NFSU2_TR(0x616635);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B616639:{NFSU2_TR(0x616639);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x3e0ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x3e0ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3e0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61663f:{NFSU2_TR(0x61663f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616644ull));
TAIL_STATIC(0x440fd0u,440);
}
B616644:L616644:{c.instructions+=2;NFSU2_TR(0x616644);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61664b:{NFSU2_TR(0x61664b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L616660;}}
}
B61664d:L61664d:{c.instructions+=4;NFSU2_TR(0x61664d);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B616651:{NFSU2_TR(0x616651);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1f88ull))));
}
B616657:{NFSU2_TR(0x616657);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616658:{NFSU2_TR(0x616658);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61665dull));
TAIL_STATIC(0x48e380u,48e);
}
B61665d:L61665d:{c.instructions+=1;NFSU2_TR(0x61665d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B616660:L616660:{c.instructions+=4;NFSU2_TR(0x616660);
__builtin_memmove((R+4),gp(0x8a1c04),4);
}
B616666:{NFSU2_TR(0x616666);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B616668:{NFSU2_TR(0x616668);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61666a:{NFSU2_TR(0x61666a);
if(r1(R+518)){{goto L616671;}}
}
B61666c:L61666c:{c.instructions+=1;NFSU2_TR(0x61666c);
__builtin_memmove(gp(0x82dad8),(R+0),4);
}
B616671:L616671:{c.instructions+=8;NFSU2_TR(0x616671);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B616675:{NFSU2_TR(0x616675);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B616678:{NFSU2_TR(0x616678);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61667e:{NFSU2_TR(0x61667e);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616685:{NFSU2_TR(0x616685);
__builtin_memmove((R+4),gp(0x8a1cd8),4);
}
B61668b:{NFSU2_TR(0x61668b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61668d:{NFSU2_TR(0x61668d);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616691:{NFSU2_TR(0x616691);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6166cd;}}
}
B616693:L616693:{c.instructions+=2;NFSU2_TR(0x616693);
__builtin_memmove((R+0),gp(0x8a1cd4),4);
}
B616698:{NFSU2_TR(0x616698);
{goto L6166a0;}
}
B6166a0:L6166a0:{c.instructions+=3;NFSU2_TR(0x6166a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6166a7:{NFSU2_TR(0x6166a7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6166a9:{NFSU2_TR(0x6166a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6166bb;}}
}
B6166ab:L6166ab:{c.instructions+=5;NFSU2_TR(0x6166ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6166af:{NFSU2_TR(0x6166af);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6166b2:{NFSU2_TR(0x6166b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B6166b6:{NFSU2_TR(0x6166b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6166b9:{NFSU2_TR(0x6166b9);
if(r1(R+518)){{goto L6166cb;}}
}
B6166bb:L6166bb:{c.instructions+=6;NFSU2_TR(0x6166bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6166bf:{NFSU2_TR(0x6166bf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6166c0:{NFSU2_TR(0x6166c0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B6166c3:{NFSU2_TR(0x6166c3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6166c5:{NFSU2_TR(0x6166c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6166c9:{NFSU2_TR(0x6166c9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6166a0u);}goto L6166a0;}}
}
B6166cb:L6166cb:{c.instructions+=1;NFSU2_TR(0x6166cb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6166cd:L6166cd:{c.instructions+=4;NFSU2_TR(0x6166cd);
u8 U[8];
__builtin_memmove((U+0),gp(0x7fee4c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6166d3:{NFSU2_TR(0x6166d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6166da:{NFSU2_TR(0x6166da);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6166e1:{NFSU2_TR(0x6166e1);
if(r1(R+518)){{goto L6166f4;}}
}
B6166e3:L6166e3:{c.instructions+=5;NFSU2_TR(0x6166e3);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6166e7:{NFSU2_TR(0x6166e7);
{u32 ea_=u32(u32(8021756u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6166ed:{NFSU2_TR(0x6166ed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6166ef:{NFSU2_TR(0x6166ef);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6166f2:{NFSU2_TR(0x6166f2);
if(r1(R+514)){{goto L616707;}}
}
B6166f4:L6166f4:{c.instructions+=3;NFSU2_TR(0x6166f4);
w4(R+0,u32(0x1ull));
}
B6166f9:{NFSU2_TR(0x6166f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616700:{NFSU2_TR(0x616700);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616707:L616707:{c.instructions+=10;NFSU2_TR(0x616707);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61670b:{NFSU2_TR(0x61670b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61670e:{NFSU2_TR(0x61670e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B616711:{NFSU2_TR(0x616711);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616718:{NFSU2_TR(0x616718);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61671c:{NFSU2_TR(0x61671c);
u8 U[8];
w4(U+0,u32(u32(u32(0x32cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616723:{NFSU2_TR(0x616723);
{u32 ea_=u32((r4(R+4)*4u)+u32(8021740u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61672a:{NFSU2_TR(0x61672a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61672c:{NFSU2_TR(0x61672c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B61672f:{NFSU2_TR(0x61672f);
if(r1(R+514)){{goto L616753;}}
}
B616731:L616731:{c.instructions+=7;NFSU2_TR(0x616731);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616735:{NFSU2_TR(0x616735);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B616736:{NFSU2_TR(0x616736);
{u32 ea_=u32((r4(R+4)*4u)+u32(8021740u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61673d:{NFSU2_TR(0x61673d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B61673e:{NFSU2_TR(0x61673e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B616740:{NFSU2_TR(0x616740);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B616743:{NFSU2_TR(0x616743);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x616731u);}goto L616731;}}
}
B616745:L616745:{c.instructions+=2;NFSU2_TR(0x616745);
u8 U[8];
w4(U+0,u32(u32(u32(0x32cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61674c:{NFSU2_TR(0x61674c);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616753:L616753:{c.instructions+=2;NFSU2_TR(0x616753);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B616756:{NFSU2_TR(0x616756);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L616766;}}
}
B616758:L616758:{c.instructions+=3;NFSU2_TR(0x616758);
w4(R+4,u32(0x3ull));
}
B61675d:{NFSU2_TR(0x61675d);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616764:{NFSU2_TR(0x616764);
{goto L61676b;}
}
B616766:L616766:{c.instructions+=2;NFSU2_TR(0x616766);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B616769:{NFSU2_TR(0x616769);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L616795;}}
}
B61676b:L61676b:{c.instructions+=3;NFSU2_TR(0x61676b);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61676f:{NFSU2_TR(0x61676f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B616771:{NFSU2_TR(0x616771);
if(r1(R+518)){{goto L616795;}}
}
B616773:L616773:{c.instructions+=2;NFSU2_TR(0x616773);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61677a:{NFSU2_TR(0x61677a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L616795;}}
}
B61677c:L61677c:{c.instructions+=3;NFSU2_TR(0x61677c);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B616780:{NFSU2_TR(0x616780);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2eb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B616787:{NFSU2_TR(0x616787);
if(r1(R+518)){{goto L616795;}}
}
B616789:L616789:{c.instructions+=2;NFSU2_TR(0x616789);
w4(R+4,u32(0x2ull));
}
B61678e:{NFSU2_TR(0x61678e);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616795:L616795:{c.instructions+=3;NFSU2_TR(0x616795);
__builtin_memmove((R+0),gp(0x802728),4);
}
B61679a:{NFSU2_TR(0x61679a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61679d:{NFSU2_TR(0x61679d);
if(r1(R+518)){{goto L6167a8;}}
}
B61679f:L61679f:{c.instructions+=2;NFSU2_TR(0x61679f);
__builtin_memmove((R+4),(R+0),4);
}
B6167a1:{NFSU2_TR(0x6167a1);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6167a8:L6167a8:{c.instructions+=3;NFSU2_TR(0x6167a8);
__builtin_memmove((R+0),gp(0x80272c),4);
}
B6167ad:{NFSU2_TR(0x6167ad);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6167b0:{NFSU2_TR(0x6167b0);
if(r1(R+518)){{goto L6167bb;}}
}
B6167b2:L6167b2:{c.instructions+=2;NFSU2_TR(0x6167b2);
__builtin_memmove((R+8),(R+0),4);
}
B6167b4:{NFSU2_TR(0x6167b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x32cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6167bb:L6167bb:{c.instructions+=2;NFSU2_TR(0x6167bb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6167be:{NFSU2_TR(0x6167be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6167c8;}}
}
B6167c0:L6167c0:{c.instructions+=2;NFSU2_TR(0x6167c0);
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
B6167c2:{NFSU2_TR(0x6167c2);
if(r1(R+518)){TAIL_STATIC(0x61ab25u,61a);}
}
B6167c8:L6167c8:{c.instructions+=5;NFSU2_TR(0x6167c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x800ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6167cf:{NFSU2_TR(0x6167cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x3d0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6167d6:{NFSU2_TR(0x6167d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6167d7:{NFSU2_TR(0x6167d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6167d8:{NFSU2_TR(0x6167d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6167ddull));
TAIL_STATIC(0x43c7c0u,43c);
}
B6167dd:L6167dd:{c.instructions+=7;NFSU2_TR(0x6167dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6167e1:{NFSU2_TR(0x6167e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6167e2:{NFSU2_TR(0x6167e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3dcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6167e9:{NFSU2_TR(0x6167e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6167ea:{NFSU2_TR(0x6167ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x390ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6167f1:{NFSU2_TR(0x6167f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6167f2:{NFSU2_TR(0x6167f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6167f7ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B6167f7:L6167f7:{c.instructions+=5;NFSU2_TR(0x6167f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6167fb:{NFSU2_TR(0x6167fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6167fe:{NFSU2_TR(0x6167fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6167ff:{NFSU2_TR(0x6167ff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616800:{NFSU2_TR(0x616800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616805ull));
TAIL_STATIC(0x43ce10u,43c);
}
B616805:L616805:{c.instructions+=6;NFSU2_TR(0x616805);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B616807:{NFSU2_TR(0x616807);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61680b:{NFSU2_TR(0x61680b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B61680e:{NFSU2_TR(0x61680e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B616810:{NFSU2_TR(0x616810);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B616812:{NFSU2_TR(0x616812);
if(r1(R+518)){{goto L61681d;}}
}
B616814:L616814:{c.instructions+=2;NFSU2_TR(0x616814);
__builtin_memmove((R+0),(R+4),4);
}
B616816:{NFSU2_TR(0x616816);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B61681d:L61681d:{c.instructions+=6;NFSU2_TR(0x61681d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61681e:{NFSU2_TR(0x61681e);
u8 U[4];
w4(U+0,u32(u32(u32(0x384ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B616825:{NFSU2_TR(0x616825);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616826:{NFSU2_TR(0x616826);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61682a:{NFSU2_TR(0x61682a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2d60ull))));
}
B616830:{NFSU2_TR(0x616830);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616835ull));
TAIL_STATIC(0x60c320u,60c);
}
B616835:L616835:{c.instructions+=3;NFSU2_TR(0x616835);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616836:{NFSU2_TR(0x616836);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616837:{NFSU2_TR(0x616837);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61683cull));
TAIL_STATIC(0x4012b0u,401);
}
B61683c:L61683c:{c.instructions+=7;NFSU2_TR(0x61683c);
{u32 ea_=u32(u32(8021696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616842:{NFSU2_TR(0x616842);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616845:{NFSU2_TR(0x616845);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B616848:{NFSU2_TR(0x616848);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61684b:{NFSU2_TR(0x61684b);
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
B61684d:{NFSU2_TR(0x61684d);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616850:{NFSU2_TR(0x616850);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x617407u,617);}
}
B616856:L616856:{c.instructions+=5;NFSU2_TR(0x616856);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B616859:{NFSU2_TR(0x616859);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61685a:{NFSU2_TR(0x61685a);
u8 U[4];
w4(U+0,u32(0x872e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61685f:{NFSU2_TR(0x61685f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616860:{NFSU2_TR(0x616860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616865ull));
TAIL_STATIC(0x401340u,401);
}
B616865:L616865:{c.instructions+=3;NFSU2_TR(0x616865);
u8 U[4];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61686c:{NFSU2_TR(0x61686c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61686d:{NFSU2_TR(0x61686d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616872ull));
TAIL_STATIC(0x43c780u,43c);
}
B616872:L616872:{c.instructions+=206;NFSU2_TR(0x616872);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B616875:{NFSU2_TR(0x616875);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616877:{NFSU2_TR(0x616877);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B616879:{NFSU2_TR(0x616879);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616880:{NFSU2_TR(0x616880);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616883:{NFSU2_TR(0x616883);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B616885:{NFSU2_TR(0x616885);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61688c:{NFSU2_TR(0x61688c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61688f:{NFSU2_TR(0x61688f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B616891:{NFSU2_TR(0x616891);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616898:{NFSU2_TR(0x616898);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61689f:{NFSU2_TR(0x61689f);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6168a2:{NFSU2_TR(0x6168a2);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6168a9:{NFSU2_TR(0x6168a9);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6168ab:{NFSU2_TR(0x6168ab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6168ad:{NFSU2_TR(0x6168ad);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6168b4:{NFSU2_TR(0x6168b4);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6168b7:{NFSU2_TR(0x6168b7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6168b9:{NFSU2_TR(0x6168b9);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6168c0:{NFSU2_TR(0x6168c0);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6168c3:{NFSU2_TR(0x6168c3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6168c5:{NFSU2_TR(0x6168c5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6168c9:{NFSU2_TR(0x6168c9);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6168d0:{NFSU2_TR(0x6168d0);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6168d3:{NFSU2_TR(0x6168d3);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6168da:{NFSU2_TR(0x6168da);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6168dd:{NFSU2_TR(0x6168dd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6168df:{NFSU2_TR(0x6168df);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6168e6:{NFSU2_TR(0x6168e6);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6168e9:{NFSU2_TR(0x6168e9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6168eb:{NFSU2_TR(0x6168eb);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6168f2:{NFSU2_TR(0x6168f2);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6168f5:{NFSU2_TR(0x6168f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6168f7:{NFSU2_TR(0x6168f7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6168fb:{NFSU2_TR(0x6168fb);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616902:{NFSU2_TR(0x616902);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616905:{NFSU2_TR(0x616905);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61690c:{NFSU2_TR(0x61690c);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61690f:{NFSU2_TR(0x61690f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616911:{NFSU2_TR(0x616911);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616918:{NFSU2_TR(0x616918);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61691b:{NFSU2_TR(0x61691b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61691d:{NFSU2_TR(0x61691d);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616924:{NFSU2_TR(0x616924);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616927:{NFSU2_TR(0x616927);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616929:{NFSU2_TR(0x616929);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61692d:{NFSU2_TR(0x61692d);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616934:{NFSU2_TR(0x616934);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616937:{NFSU2_TR(0x616937);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61693e:{NFSU2_TR(0x61693e);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616941:{NFSU2_TR(0x616941);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616943:{NFSU2_TR(0x616943);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61694a:{NFSU2_TR(0x61694a);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61694d:{NFSU2_TR(0x61694d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61694f:{NFSU2_TR(0x61694f);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616956:{NFSU2_TR(0x616956);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616959:{NFSU2_TR(0x616959);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61695b:{NFSU2_TR(0x61695b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61695f:{NFSU2_TR(0x61695f);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616966:{NFSU2_TR(0x616966);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616969:{NFSU2_TR(0x616969);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616970:{NFSU2_TR(0x616970);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616972:{NFSU2_TR(0x616972);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616974:{NFSU2_TR(0x616974);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61697b:{NFSU2_TR(0x61697b);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61697e:{NFSU2_TR(0x61697e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616980:{NFSU2_TR(0x616980);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616987:{NFSU2_TR(0x616987);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61698a:{NFSU2_TR(0x61698a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61698c:{NFSU2_TR(0x61698c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616990:{NFSU2_TR(0x616990);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616997:{NFSU2_TR(0x616997);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61699a:{NFSU2_TR(0x61699a);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6169a1:{NFSU2_TR(0x6169a1);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6169a4:{NFSU2_TR(0x6169a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6169a6:{NFSU2_TR(0x6169a6);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6169ad:{NFSU2_TR(0x6169ad);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6169b0:{NFSU2_TR(0x6169b0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6169b2:{NFSU2_TR(0x6169b2);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6169b9:{NFSU2_TR(0x6169b9);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6169bc:{NFSU2_TR(0x6169bc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6169be:{NFSU2_TR(0x6169be);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6169c2:{NFSU2_TR(0x6169c2);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6169c9:{NFSU2_TR(0x6169c9);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6169cc:{NFSU2_TR(0x6169cc);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6169d3:{NFSU2_TR(0x6169d3);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6169d6:{NFSU2_TR(0x6169d6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6169d8:{NFSU2_TR(0x6169d8);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6169df:{NFSU2_TR(0x6169df);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6169e2:{NFSU2_TR(0x6169e2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6169e4:{NFSU2_TR(0x6169e4);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6169eb:{NFSU2_TR(0x6169eb);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6169ee:{NFSU2_TR(0x6169ee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6169f0:{NFSU2_TR(0x6169f0);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6169f4:{NFSU2_TR(0x6169f4);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6169fb:{NFSU2_TR(0x6169fb);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6169fe:{NFSU2_TR(0x6169fe);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616a05:{NFSU2_TR(0x616a05);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616a08:{NFSU2_TR(0x616a08);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616a0a:{NFSU2_TR(0x616a0a);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616a11:{NFSU2_TR(0x616a11);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616a14:{NFSU2_TR(0x616a14);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616a16:{NFSU2_TR(0x616a16);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616a1d:{NFSU2_TR(0x616a1d);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616a20:{NFSU2_TR(0x616a20);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616a22:{NFSU2_TR(0x616a22);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616a26:{NFSU2_TR(0x616a26);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616a2d:{NFSU2_TR(0x616a2d);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616a30:{NFSU2_TR(0x616a30);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616a37:{NFSU2_TR(0x616a37);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616a39:{NFSU2_TR(0x616a39);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616a3b:{NFSU2_TR(0x616a3b);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616a42:{NFSU2_TR(0x616a42);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616a45:{NFSU2_TR(0x616a45);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616a47:{NFSU2_TR(0x616a47);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616a4e:{NFSU2_TR(0x616a4e);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616a51:{NFSU2_TR(0x616a51);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616a53:{NFSU2_TR(0x616a53);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616a57:{NFSU2_TR(0x616a57);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616a5e:{NFSU2_TR(0x616a5e);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616a61:{NFSU2_TR(0x616a61);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616a68:{NFSU2_TR(0x616a68);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616a6b:{NFSU2_TR(0x616a6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616a6d:{NFSU2_TR(0x616a6d);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616a74:{NFSU2_TR(0x616a74);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616a77:{NFSU2_TR(0x616a77);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616a79:{NFSU2_TR(0x616a79);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616a80:{NFSU2_TR(0x616a80);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616a83:{NFSU2_TR(0x616a83);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616a85:{NFSU2_TR(0x616a85);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616a89:{NFSU2_TR(0x616a89);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616a90:{NFSU2_TR(0x616a90);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616a93:{NFSU2_TR(0x616a93);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616a9a:{NFSU2_TR(0x616a9a);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616a9d:{NFSU2_TR(0x616a9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616a9f:{NFSU2_TR(0x616a9f);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616aa6:{NFSU2_TR(0x616aa6);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616aa9:{NFSU2_TR(0x616aa9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616aab:{NFSU2_TR(0x616aab);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616ab2:{NFSU2_TR(0x616ab2);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616ab5:{NFSU2_TR(0x616ab5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616ab7:{NFSU2_TR(0x616ab7);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616abb:{NFSU2_TR(0x616abb);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616ac2:{NFSU2_TR(0x616ac2);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616ac5:{NFSU2_TR(0x616ac5);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616acc:{NFSU2_TR(0x616acc);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616acf:{NFSU2_TR(0x616acf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616ad1:{NFSU2_TR(0x616ad1);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616ad8:{NFSU2_TR(0x616ad8);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616adb:{NFSU2_TR(0x616adb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616add:{NFSU2_TR(0x616add);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616ae4:{NFSU2_TR(0x616ae4);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616ae7:{NFSU2_TR(0x616ae7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616ae9:{NFSU2_TR(0x616ae9);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616aed:{NFSU2_TR(0x616aed);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616af4:{NFSU2_TR(0x616af4);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616af7:{NFSU2_TR(0x616af7);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616afe:{NFSU2_TR(0x616afe);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616b01:{NFSU2_TR(0x616b01);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616b03:{NFSU2_TR(0x616b03);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616b0a:{NFSU2_TR(0x616b0a);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616b0d:{NFSU2_TR(0x616b0d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616b0f:{NFSU2_TR(0x616b0f);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616b16:{NFSU2_TR(0x616b16);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616b18:{NFSU2_TR(0x616b18);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616b1a:{NFSU2_TR(0x616b1a);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616b1e:{NFSU2_TR(0x616b1e);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616b25:{NFSU2_TR(0x616b25);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616b28:{NFSU2_TR(0x616b28);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616b2f:{NFSU2_TR(0x616b2f);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616b32:{NFSU2_TR(0x616b32);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616b34:{NFSU2_TR(0x616b34);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616b3b:{NFSU2_TR(0x616b3b);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616b3e:{NFSU2_TR(0x616b3e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616b40:{NFSU2_TR(0x616b40);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616b47:{NFSU2_TR(0x616b47);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616b4a:{NFSU2_TR(0x616b4a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616b4c:{NFSU2_TR(0x616b4c);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616b50:{NFSU2_TR(0x616b50);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616b57:{NFSU2_TR(0x616b57);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616b5a:{NFSU2_TR(0x616b5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B616b5e:{NFSU2_TR(0x616b5e);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616b65:{NFSU2_TR(0x616b65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616b66:{NFSU2_TR(0x616b66);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616b69:{NFSU2_TR(0x616b69);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616b6a:{NFSU2_TR(0x616b6a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616b6c:{NFSU2_TR(0x616b6c);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616b73:{NFSU2_TR(0x616b73);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616b76:{NFSU2_TR(0x616b76);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616b78:{NFSU2_TR(0x616b78);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616b7f:{NFSU2_TR(0x616b7f);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616b82:{NFSU2_TR(0x616b82);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616b84:{NFSU2_TR(0x616b84);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616b88:{NFSU2_TR(0x616b88);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616b8f:{NFSU2_TR(0x616b8f);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616b92:{NFSU2_TR(0x616b92);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616b99:{NFSU2_TR(0x616b99);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616b9c:{NFSU2_TR(0x616b9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616b9e:{NFSU2_TR(0x616b9e);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616ba5:{NFSU2_TR(0x616ba5);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616ba8:{NFSU2_TR(0x616ba8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616baa:{NFSU2_TR(0x616baa);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616bb1:{NFSU2_TR(0x616bb1);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616bb4:{NFSU2_TR(0x616bb4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B616bb6:{NFSU2_TR(0x616bb6);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616bba:{NFSU2_TR(0x616bba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616bbfull));
TAIL_STATIC(0x4012b0u,401);
}
B616bbf:L616bbf:{c.instructions+=12;NFSU2_TR(0x616bbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B616bc2:{NFSU2_TR(0x616bc2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616bc5:{NFSU2_TR(0x616bc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B616bc7:{NFSU2_TR(0x616bc7);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616bca:{NFSU2_TR(0x616bca);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B616bce:{NFSU2_TR(0x616bce);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B616bd0:{NFSU2_TR(0x616bd0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B616bd3:{NFSU2_TR(0x616bd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B616bd5:{NFSU2_TR(0x616bd5);
{u32 ea_=u32(u32(9051908u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616bdb:{NFSU2_TR(0x616bdb);
__builtin_memmove(gp(0x8a1f00),(R+8),4);
}
B616be1:{NFSU2_TR(0x616be1);
{u32 ea_=u32(u32(9051912u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616be7:{NFSU2_TR(0x616be7);
if(r1(R+518)){{goto L616cd9;}}
}
B616bed:L616bed:{c.instructions+=5;NFSU2_TR(0x616bed);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5c4ull))));
}
B616bf2:{NFSU2_TR(0x616bf2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B616bf4:{NFSU2_TR(0x616bf4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B616bf6:{NFSU2_TR(0x616bf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616bfa:{NFSU2_TR(0x616bfa);
if(r1(R+518)){{goto L616c15;}}
}
B616bfc:L616bfc:{c.instructions+=6;NFSU2_TR(0x616bfc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616bfd:{NFSU2_TR(0x616bfd);
u8 U[4];
w4(U+0,u32(0x8a2cd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616c02:{NFSU2_TR(0x616c02);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616c03:{NFSU2_TR(0x616c03);
u8 U[4];
w4(U+0,u32(0x8a1f00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616c08:{NFSU2_TR(0x616c08);
__builtin_memmove((R+4),(R+0),4);
}
B616c0a:{NFSU2_TR(0x616c0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616c0full));
TAIL_STATIC(0x5e7e70u,5e7);
}
B616c0f:L616c0f:{c.instructions+=1;NFSU2_TR(0x616c0f);
{u32 ea_=u32(u32(9051912u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616c15:L616c15:{c.instructions+=25;NFSU2_TR(0x616c15);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616c18:{NFSU2_TR(0x616c18);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616c1b:{NFSU2_TR(0x616c1b);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616c1d:{NFSU2_TR(0x616c1d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616c23:{NFSU2_TR(0x616c23);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616c26:{NFSU2_TR(0x616c26);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616c29:{NFSU2_TR(0x616c29);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616c2c:{NFSU2_TR(0x616c2c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616c2f:{NFSU2_TR(0x616c2f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616c35:{NFSU2_TR(0x616c35);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616c38:{NFSU2_TR(0x616c38);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616c3b:{NFSU2_TR(0x616c3b);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616c3e:{NFSU2_TR(0x616c3e);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616c41:{NFSU2_TR(0x616c41);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616c47:{NFSU2_TR(0x616c47);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616c4a:{NFSU2_TR(0x616c4a);
{u32 ea_=u32(r4(R+16)+u32(824u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616c51:{NFSU2_TR(0x616c51);
u8 U[8];
w4(U+0,u32(u32(u32(0x338ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B616c58:{NFSU2_TR(0x616c58);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B616c5a:{NFSU2_TR(0x616c5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x378ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616c61:{NFSU2_TR(0x616c61);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B616c68:{NFSU2_TR(0x616c68);
{u32 ea_=u32(r4(R+16)+u32(880u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616c6f:{NFSU2_TR(0x616c6f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B616c71:{NFSU2_TR(0x616c71);
{u32 ea_=u32(r4(R+16)+u32(884u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616c78:{NFSU2_TR(0x616c78);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616c7e:{NFSU2_TR(0x616c7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L616c9d;}}
}
B616c80:L616c80:{c.instructions+=8;NFSU2_TR(0x616c80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616c81:{NFSU2_TR(0x616c81);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B616c83:{NFSU2_TR(0x616c83);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616c84:{NFSU2_TR(0x616c84);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616c85:{NFSU2_TR(0x616c85);
u8 U[4];
w4(U+0,u32(u32(u32(0x37cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B616c8c:{NFSU2_TR(0x616c8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616c8d:{NFSU2_TR(0x616c8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B616c91:{NFSU2_TR(0x616c91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616c96ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B616c96:L616c96:{c.instructions+=1;NFSU2_TR(0x616c96);
{u32 ea_=u32(r4(R+16)+u32(888u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B616c9d:L616c9d:{c.instructions+=5;NFSU2_TR(0x616c9d);
{u32 ea_=u32(u32(8021600u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B616ca3:{NFSU2_TR(0x616ca3);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B616cab:{NFSU2_TR(0x616cab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B616cad:{NFSU2_TR(0x616cad);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B616cb0:{NFSU2_TR(0x616cb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L616ce8;}}
}
B616cb2:L616cb2:{c.instructions+=4;NFSU2_TR(0x616cb2);
{u32 ea_=u32(u32(8021604u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B616cb8:{NFSU2_TR(0x616cb8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B616cba:{NFSU2_TR(0x616cba);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B616cbd:{NFSU2_TR(0x616cbd);
if(r1(R+514)){{goto L616ce8;}}
}
B616cbf:L616cbf:{c.instructions+=6;NFSU2_TR(0x616cbf);
{u32 ea_=u32(u32(8021600u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B616cc5:{NFSU2_TR(0x616cc5);
{u32 ea_=u32(u32(8021604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616ccb:{NFSU2_TR(0x616ccb);
{u32 ea_=u32(u32(8021600u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B616cd1:{NFSU2_TR(0x616cd1);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B616cd3:{NFSU2_TR(0x616cd3);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616cd7:{NFSU2_TR(0x616cd7);
{goto L616cfd;}
}
B616cd9:L616cd9:{c.instructions+=3;NFSU2_TR(0x616cd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B616ce1:{NFSU2_TR(0x616ce1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B616ce3:{NFSU2_TR(0x616ce3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x616c15u);}goto L616c15;}
}
B616ce8:L616ce8:{c.instructions+=4;NFSU2_TR(0x616ce8);
{u32 ea_=u32(u32(8021604u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B616cee:{NFSU2_TR(0x616cee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B616cf0:{NFSU2_TR(0x616cf0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B616cf3:{NFSU2_TR(0x616cf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L616cfd;}}
}
B616cf5:L616cf5:{c.instructions+=1;NFSU2_TR(0x616cf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B616cfd:L616cfd:{c.instructions+=5;NFSU2_TR(0x616cfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B616d01:{NFSU2_TR(0x616d01);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616d06:{NFSU2_TR(0x616d06);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616d07:{NFSU2_TR(0x616d07);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616d08:{NFSU2_TR(0x616d08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616d0dull));
TAIL_STATIC(0x401090u,401);
}
B616d0d:L616d0d:{c.instructions+=7;NFSU2_TR(0x616d0d);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616d11:{NFSU2_TR(0x616d11);
{u32 ea_=u32(u32(9051112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616d17:{NFSU2_TR(0x616d17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B616d1a:{NFSU2_TR(0x616d1a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B616d20:{NFSU2_TR(0x616d20);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B616d22:{NFSU2_TR(0x616d22);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B616d25:{NFSU2_TR(0x616d25);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L616d30;}}
}
B616d27:L616d27:{c.instructions+=2;NFSU2_TR(0x616d27);
__builtin_memmove((R+0),gp(0x8a1be8),4);
}
B616d2c:{NFSU2_TR(0x616d2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616d30:L616d30:{c.instructions+=2;NFSU2_TR(0x616d30);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cc0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B616d36:{NFSU2_TR(0x616d36);
if(r1(R+518)){TAIL_STATIC(0x617407u,617);}
}
B616d3c:L616d3c:{c.instructions+=2;NFSU2_TR(0x616d3c);
u8 U[16];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B616d43:{NFSU2_TR(0x616d43);
if(r1(R+518)){{goto L616d5d;}}
}
B616d45:L616d45:{c.instructions+=5;NFSU2_TR(0x616d45);
__builtin_memmove((R+4),gp(0x7a66b0),4);
}
B616d4b:{NFSU2_TR(0x616d4b);
{u32 ea_=u32(u32(8021664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616d51:{NFSU2_TR(0x616d51);
{u32 ea_=u32(u32(8021668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616d57:{NFSU2_TR(0x616d57);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616d5b:{NFSU2_TR(0x616d5b);
{goto L616d73;}
}
B616d5d:L616d5d:{c.instructions+=4;NFSU2_TR(0x616d5d);
__builtin_memmove((R+8),gp(0x7a66ac),4);
}
B616d63:{NFSU2_TR(0x616d63);
{u32 ea_=u32(u32(8021656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616d69:{NFSU2_TR(0x616d69);
{u32 ea_=u32(u32(8021660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616d6f:{NFSU2_TR(0x616d6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616d73:L616d73:{c.instructions+=32;NFSU2_TR(0x616d73);
u8 U[8];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B616d7a:{NFSU2_TR(0x616d7a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616d7c:{NFSU2_TR(0x616d7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x328ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B616d83:{NFSU2_TR(0x616d83);
{u32 ea_=u32(u32(8021608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616d89:{NFSU2_TR(0x616d89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B616d8b:{NFSU2_TR(0x616d8b);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616d8f:{NFSU2_TR(0x616d8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x350ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616d96:{NFSU2_TR(0x616d96);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616d9b:{NFSU2_TR(0x616d9b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616d9d:{NFSU2_TR(0x616d9d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616da3:{NFSU2_TR(0x616da3);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616da5:{NFSU2_TR(0x616da5);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616da9:{NFSU2_TR(0x616da9);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616dac:{NFSU2_TR(0x616dac);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616db0:{NFSU2_TR(0x616db0);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B616db2:{NFSU2_TR(0x616db2);
{u32 ea_=u32(r4(R+16)+u32(832u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616db9:{NFSU2_TR(0x616db9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616dbc:{NFSU2_TR(0x616dbc);
u8 U[4];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B616dc3:{NFSU2_TR(0x616dc3);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616dc7:{NFSU2_TR(0x616dc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616dc8:{NFSU2_TR(0x616dc8);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B616dca:{NFSU2_TR(0x616dca);
{u32 ea_=u32(r4(R+16)+u32(868u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616dd1:{NFSU2_TR(0x616dd1);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616dd5:{NFSU2_TR(0x616dd5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B616dd7:{NFSU2_TR(0x616dd7);
{u32 ea_=u32(r4(R+16)+u32(832u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616dde:{NFSU2_TR(0x616dde);
{u32 ea_=u32(r4(R+16)+u32(864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616de5:{NFSU2_TR(0x616de5);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616de9:{NFSU2_TR(0x616de9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B616deb:{NFSU2_TR(0x616deb);
{u32 ea_=u32(r4(R+16)+u32(864u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616df2:{NFSU2_TR(0x616df2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B616df4:{NFSU2_TR(0x616df4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B616df6:{NFSU2_TR(0x616df6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616dfbull));
TAIL_STATIC(0x401650u,401);
}
B616dfb:L616dfb:{c.instructions+=6;NFSU2_TR(0x616dfb);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616e00:{NFSU2_TR(0x616e00);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616e02:{NFSU2_TR(0x616e02);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616e04:{NFSU2_TR(0x616e04);
u8 U[4];
w4(U+0,u32(u32(u32(0x22cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B616e0b:{NFSU2_TR(0x616e0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616e0c:{NFSU2_TR(0x616e0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616e11ull));
TAIL_STATIC(0x401650u,401);
}
B616e11:L616e11:{c.instructions+=43;NFSU2_TR(0x616e11);
{u32 ea_=u32(r4(R+16)+u32(852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616e18:{NFSU2_TR(0x616e18);
{u32 ea_=u32(r4(R+16)+u32(820u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B616e1f:{NFSU2_TR(0x616e1f);
w4(R+0,u32(0x1ull));
}
B616e24:{NFSU2_TR(0x616e24);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B616e26:{NFSU2_TR(0x616e26);
w4(R+4,u32(0x2ull));
}
B616e2b:{NFSU2_TR(0x616e2b);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616e31:{NFSU2_TR(0x616e31);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616e35:{NFSU2_TR(0x616e35);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616e39:{NFSU2_TR(0x616e39);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616e40:{NFSU2_TR(0x616e40);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616e44:{NFSU2_TR(0x616e44);
{u32 ea_=u32(r4(R+16)+u32(848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616e4b:{NFSU2_TR(0x616e4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616e4f:{NFSU2_TR(0x616e4f);
{u32 ea_=u32(r4(R+16)+u32(816u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B616e56:{NFSU2_TR(0x616e56);
w4(R+0,u32(0x3ull));
}
B616e5b:{NFSU2_TR(0x616e5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x364ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616e62:{NFSU2_TR(0x616e62);
u8 U[8];
w4(U+0,u32(u32(u32(0x368ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616e69:{NFSU2_TR(0x616e69);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616e6f:{NFSU2_TR(0x616e6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616e73:{NFSU2_TR(0x616e73);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616e77:{NFSU2_TR(0x616e77);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616e7b:{NFSU2_TR(0x616e7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616e7f:{NFSU2_TR(0x616e7f);
{u32 ea_=u32(r4(R+16)+u32(820u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616e86:{NFSU2_TR(0x616e86);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616e8a:{NFSU2_TR(0x616e8a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616e90:{NFSU2_TR(0x616e90);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616e94:{NFSU2_TR(0x616e94);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616e97:{NFSU2_TR(0x616e97);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616e9b:{NFSU2_TR(0x616e9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616e9f:{NFSU2_TR(0x616e9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616ea3:{NFSU2_TR(0x616ea3);
u8 U[8];
w4(U+0,u32(u32(u32(0x360ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616eaa:{NFSU2_TR(0x616eaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x36cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616eb1:{NFSU2_TR(0x616eb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616eb5:{NFSU2_TR(0x616eb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616eb9:{NFSU2_TR(0x616eb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616ebd:{NFSU2_TR(0x616ebd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616ec1:{NFSU2_TR(0x616ec1);
u8 U[4];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B616ec8:{NFSU2_TR(0x616ec8);
u8 U[4];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B616ecf:{NFSU2_TR(0x616ecf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616ed5:{NFSU2_TR(0x616ed5);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B616edd:{NFSU2_TR(0x616edd);
{u32 ea_=u32(r4(R+16)+u32(808u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616ee4:{NFSU2_TR(0x616ee4);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616ee7:{NFSU2_TR(0x616ee7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616eed:{NFSU2_TR(0x616eed);
{u32 ea_=u32(r4(R+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616ef4:L616ef4:{c.instructions+=10;NFSU2_TR(0x616ef4);
{u32 ea_=u32(r4(R+16)+u32(816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616efb:{NFSU2_TR(0x616efb);
w4(R+8,u32(0x4ull));
}
B616f00:{NFSU2_TR(0x616f00);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616f06:{NFSU2_TR(0x616f06);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B616f08:{NFSU2_TR(0x616f08);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616f0b:{NFSU2_TR(0x616f0b);
{u32 ea_=u32(r4(R+16)+u32(808u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616f12:{NFSU2_TR(0x616f12);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B616f14:{NFSU2_TR(0x616f14);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616f17:{NFSU2_TR(0x616f17);
{u32 ea_=u32(r4(R+16)+u32(804u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616f1e:{NFSU2_TR(0x616f1e);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616f22:L616f22:{c.instructions+=28;NFSU2_TR(0x616f22);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B616f24:{NFSU2_TR(0x616f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B616f27:{NFSU2_TR(0x616f27);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616f29:{NFSU2_TR(0x616f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B616f2c:{NFSU2_TR(0x616f2c);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B616f2e:{NFSU2_TR(0x616f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616f31:{NFSU2_TR(0x616f31);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616f34:{NFSU2_TR(0x616f34);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B616f37:{NFSU2_TR(0x616f37);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B616f39:{NFSU2_TR(0x616f39);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B616f3c:{NFSU2_TR(0x616f3c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B616f3d:{NFSU2_TR(0x616f3d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616f3f:{NFSU2_TR(0x616f3f);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616f42:{NFSU2_TR(0x616f42);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B616f44:{NFSU2_TR(0x616f44);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B616f46:{NFSU2_TR(0x616f46);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616f49:{NFSU2_TR(0x616f49);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616f4d:{NFSU2_TR(0x616f4d);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616f50:{NFSU2_TR(0x616f50);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B616f52:{NFSU2_TR(0x616f52);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616f55:{NFSU2_TR(0x616f55);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616f58:{NFSU2_TR(0x616f58);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B616f5a:{NFSU2_TR(0x616f5a);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616f5e:{NFSU2_TR(0x616f5e);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B616f60:{NFSU2_TR(0x616f60);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B616f62:{NFSU2_TR(0x616f62);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616f68:{NFSU2_TR(0x616f68);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B616f6a:{NFSU2_TR(0x616f6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x616f22u);}goto L616f22;}}
}
B616f6c:L616f6c:{c.instructions+=11;NFSU2_TR(0x616f6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B616f70:{NFSU2_TR(0x616f70);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B616f72:{NFSU2_TR(0x616f72);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B616f74:{NFSU2_TR(0x616f74);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B616f75:{NFSU2_TR(0x616f75);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B616f77:{NFSU2_TR(0x616f77);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616f7b:{NFSU2_TR(0x616f7b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B616f7d:{NFSU2_TR(0x616f7d);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616f84:{NFSU2_TR(0x616f84);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B616f86:{NFSU2_TR(0x616f86);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616f8c:{NFSU2_TR(0x616f8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x616ef4u);}goto L616ef4;}}
}
B616f92:L616f92:{c.instructions+=12;NFSU2_TR(0x616f92);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B616f96:{NFSU2_TR(0x616f96);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B616f98:{NFSU2_TR(0x616f98);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B616f9a:{NFSU2_TR(0x616f9a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B616f9c:{NFSU2_TR(0x616f9c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B616f9e:{NFSU2_TR(0x616f9e);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B616fa1:{NFSU2_TR(0x616fa1);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616fa4:{NFSU2_TR(0x616fa4);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616fa7:{NFSU2_TR(0x616fa7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B616fad:{NFSU2_TR(0x616fad);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B616fb0:{NFSU2_TR(0x616fb0);
{u32 ea_=u32(r4(R+16)+u32(824u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B616fb7:{NFSU2_TR(0x616fb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L616fbd;}}
}
B616fb9:L616fb9:{c.instructions+=2;NFSU2_TR(0x616fb9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B616fbb:{NFSU2_TR(0x616fbb);
{goto L616fc2;}
}
B616fbd:L616fbd:{c.instructions+=1;NFSU2_TR(0x616fbd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5c4ull))));
}
B616fc2:L616fc2:{c.instructions+=4;NFSU2_TR(0x616fc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B616fc9:{NFSU2_TR(0x616fc9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B616fcb:{NFSU2_TR(0x616fcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B616fcf:{NFSU2_TR(0x616fcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x617219u,617);}
}
B616fd5:L616fd5:{c.instructions+=2;NFSU2_TR(0x616fd5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B616fd7:{NFSU2_TR(0x616fd7);
if(r1(R+518)){TAIL_STATIC(0x617219u,617);}
}
B616fdd:L616fdd:{c.instructions+=6;NFSU2_TR(0x616fdd);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616fe2:{NFSU2_TR(0x616fe2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616fe4:{NFSU2_TR(0x616fe4);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616fe6:{NFSU2_TR(0x616fe6);
u8 U[4];
w4(U+0,u32(u32(u32(0x39cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B616fed:{NFSU2_TR(0x616fed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616fee:{NFSU2_TR(0x616fee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x616ff3ull));
TAIL_STATIC(0x401650u,401);
}
B616ff3:L616ff3:{c.instructions+=4;NFSU2_TR(0x616ff3);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616ff8:{NFSU2_TR(0x616ff8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616ffa:{NFSU2_TR(0x616ffa);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B616ffc:{NFSU2_TR(0x616ffc);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
TAIL_STATIC(0x617000u,617);
}
XIT:NFSU2_TR_EXIT(0x616,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
