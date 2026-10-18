#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_615(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_620(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_634(u8* __restrict R,Cpu& c);
u32 body_636(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_639(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x638,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x638,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_638(u8* __restrict R,Cpu& c);
u32 page_638(Cpu& c){return body_638(c.regs.data(),c);}
__attribute__((noinline)) u32 body_638(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x638010:goto L638010;
case 0x638012:c.instructions+=8;goto B638012;
case 0x638017:c.instructions+=7;goto B638017;
case 0x63801d:c.instructions+=6;goto B63801d;
case 0x63801e:c.instructions+=5;goto B63801e;
case 0x638025:c.instructions+=4;goto B638025;
case 0x638026:c.instructions+=3;goto B638026;
case 0x63802b:c.instructions+=2;goto B63802b;
case 0x63802c:c.instructions+=1;goto B63802c;
case 0x638031:goto L638031;
case 0x638034:c.instructions+=4;goto B638034;
case 0x638038:c.instructions+=3;goto B638038;
case 0x63803a:c.instructions+=2;goto B63803a;
case 0x638042:c.instructions+=1;goto B638042;
case 0x638044:goto L638044;
case 0x638048:c.instructions+=3;goto B638048;
case 0x638049:c.instructions+=2;goto B638049;
case 0x63804b:c.instructions+=1;goto B63804b;
case 0x638050:goto L638050;
case 0x638052:goto L638052;
case 0x638054:goto L638054;
case 0x63805a:c.instructions+=4;goto B63805a;
case 0x63805e:c.instructions+=3;goto B63805e;
case 0x638065:c.instructions+=2;goto B638065;
case 0x638068:c.instructions+=1;goto B638068;
case 0x638070:goto L638070;
case 0x638071:c.instructions+=4;goto B638071;
case 0x638072:c.instructions+=3;goto B638072;
case 0x638078:c.instructions+=2;goto B638078;
case 0x63807d:c.instructions+=1;goto B63807d;
case 0x638082:goto L638082;
case 0x638084:c.instructions+=2;goto B638084;
case 0x638086:c.instructions+=1;goto B638086;
case 0x638088:goto L638088;
case 0x638089:c.instructions+=1;goto B638089;
case 0x638090:goto L638090;
case 0x638092:c.instructions+=5;goto B638092;
case 0x638095:c.instructions+=4;goto B638095;
case 0x638097:c.instructions+=3;goto B638097;
case 0x638099:c.instructions+=2;goto B638099;
case 0x63809c:c.instructions+=1;goto B63809c;
case 0x6380a1:goto L6380a1;
case 0x6380a6:c.instructions+=3;goto B6380a6;
case 0x6380a7:c.instructions+=2;goto B6380a7;
case 0x6380a8:c.instructions+=1;goto B6380a8;
case 0x6380ad:goto L6380ad;
case 0x6380b0:c.instructions+=3;goto B6380b0;
case 0x6380b2:c.instructions+=2;goto B6380b2;
case 0x6380b4:c.instructions+=1;goto B6380b4;
case 0x6380b6:goto L6380b6;
case 0x6380b7:goto L6380b7;
case 0x6380b8:c.instructions+=2;goto B6380b8;
case 0x6380b9:c.instructions+=1;goto B6380b9;
case 0x6380c0:goto L6380c0;
case 0x6380c3:c.instructions+=6;goto B6380c3;
case 0x6380c7:c.instructions+=5;goto B6380c7;
case 0x6380ca:c.instructions+=4;goto B6380ca;
case 0x6380cd:c.instructions+=3;goto B6380cd;
case 0x6380d3:c.instructions+=2;goto B6380d3;
case 0x6380d7:c.instructions+=1;goto B6380d7;
case 0x6380e0:goto L6380e0;
case 0x6380e2:c.instructions+=11;goto B6380e2;
case 0x6380e7:c.instructions+=10;goto B6380e7;
case 0x6380ed:c.instructions+=9;goto B6380ed;
case 0x6380ee:c.instructions+=8;goto B6380ee;
case 0x6380f5:c.instructions+=7;goto B6380f5;
case 0x6380f6:c.instructions+=6;goto B6380f6;
case 0x6380f7:c.instructions+=5;goto B6380f7;
case 0x6380f9:c.instructions+=4;goto B6380f9;
case 0x6380fa:c.instructions+=3;goto B6380fa;
case 0x6380fe:c.instructions+=2;goto B6380fe;
case 0x638106:c.instructions+=1;goto B638106;
case 0x63810b:goto L63810b;
case 0x63810e:c.instructions+=2;goto B63810e;
case 0x638110:c.instructions+=1;goto B638110;
case 0x638112:goto L638112;
case 0x638114:c.instructions+=1;goto B638114;
case 0x638119:goto L638119;
case 0x63811a:c.instructions+=1;goto B63811a;
case 0x63811f:goto L63811f;
case 0x638122:c.instructions+=1;goto B638122;
case 0x638129:goto L638129;
case 0x63812f:c.instructions+=2;goto B63812f;
case 0x638131:c.instructions+=1;goto B638131;
case 0x638133:goto L638133;
case 0x638135:c.instructions+=1;goto B638135;
case 0x63813a:goto L63813a;
case 0x63813f:c.instructions+=3;goto B63813f;
case 0x638140:c.instructions+=2;goto B638140;
case 0x638141:c.instructions+=1;goto B638141;
case 0x638146:goto L638146;
case 0x638149:c.instructions+=1;goto B638149;
case 0x638153:goto L638153;
case 0x638156:c.instructions+=6;goto B638156;
case 0x638158:c.instructions+=5;goto B638158;
case 0x63815a:c.instructions+=4;goto B63815a;
case 0x63815d:c.instructions+=3;goto B63815d;
case 0x638163:c.instructions+=2;goto B638163;
case 0x63816b:c.instructions+=1;goto B63816b;
case 0x638170:goto L638170;
case 0x638174:c.instructions+=5;goto B638174;
case 0x638175:c.instructions+=4;goto B638175;
case 0x638176:c.instructions+=3;goto B638176;
case 0x63817d:c.instructions+=2;goto B63817d;
case 0x638180:c.instructions+=1;goto B638180;
case 0x638190:goto L638190;
case 0x638191:c.instructions+=25;goto B638191;
case 0x638193:c.instructions+=24;goto B638193;
case 0x638196:c.instructions+=23;goto B638196;
case 0x638198:c.instructions+=22;goto B638198;
case 0x63819d:c.instructions+=21;goto B63819d;
case 0x6381a3:c.instructions+=20;goto B6381a3;
case 0x6381a4:c.instructions+=19;goto B6381a4;
case 0x6381ab:c.instructions+=18;goto B6381ab;
case 0x6381b1:c.instructions+=17;goto B6381b1;
case 0x6381b2:c.instructions+=16;goto B6381b2;
case 0x6381b3:c.instructions+=15;goto B6381b3;
case 0x6381b5:c.instructions+=14;goto B6381b5;
case 0x6381bb:c.instructions+=13;goto B6381bb;
case 0x6381bc:c.instructions+=12;goto B6381bc;
case 0x6381c3:c.instructions+=11;goto B6381c3;
case 0x6381c5:c.instructions+=10;goto B6381c5;
case 0x6381c8:c.instructions+=9;goto B6381c8;
case 0x6381cd:c.instructions+=8;goto B6381cd;
case 0x6381d2:c.instructions+=7;goto B6381d2;
case 0x6381d4:c.instructions+=6;goto B6381d4;
case 0x6381da:c.instructions+=5;goto B6381da;
case 0x6381dc:c.instructions+=4;goto B6381dc;
case 0x6381de:c.instructions+=3;goto B6381de;
case 0x6381df:c.instructions+=2;goto B6381df;
case 0x6381e6:c.instructions+=1;goto B6381e6;
case 0x6381eb:goto L6381eb;
case 0x6381f0:c.instructions+=7;goto B6381f0;
case 0x6381f5:c.instructions+=6;goto B6381f5;
case 0x6381f7:c.instructions+=5;goto B6381f7;
case 0x6381fd:c.instructions+=4;goto B6381fd;
case 0x6381ff:c.instructions+=3;goto B6381ff;
case 0x638200:c.instructions+=2;goto B638200;
case 0x638208:c.instructions+=1;goto B638208;
case 0x63820d:goto L63820d;
case 0x638213:c.instructions+=1;goto B638213;
case 0x638218:goto L638218;
case 0x63821a:c.instructions+=6;goto B63821a;
case 0x63821d:c.instructions+=5;goto B63821d;
case 0x638220:c.instructions+=4;goto B638220;
case 0x638223:c.instructions+=3;goto B638223;
case 0x638226:c.instructions+=2;goto B638226;
case 0x638227:c.instructions+=1;goto B638227;
case 0x638229:goto L638229;
case 0x63822f:c.instructions+=1;goto B63822f;
case 0x638234:goto L638234;
case 0x638236:c.instructions+=6;goto B638236;
case 0x638239:c.instructions+=5;goto B638239;
case 0x63823c:c.instructions+=4;goto B63823c;
case 0x63823f:c.instructions+=3;goto B63823f;
case 0x638242:c.instructions+=2;goto B638242;
case 0x638243:c.instructions+=1;goto B638243;
case 0x638245:goto L638245;
case 0x63824b:c.instructions+=1;goto B63824b;
case 0x638250:goto L638250;
case 0x638252:c.instructions+=6;goto B638252;
case 0x638255:c.instructions+=5;goto B638255;
case 0x638258:c.instructions+=4;goto B638258;
case 0x63825b:c.instructions+=3;goto B63825b;
case 0x63825e:c.instructions+=2;goto B63825e;
case 0x63825f:c.instructions+=1;goto B63825f;
case 0x638261:goto L638261;
case 0x638267:c.instructions+=2;goto B638267;
case 0x63826c:c.instructions+=1;goto B63826c;
case 0x638270:goto L638270;
case 0x638272:c.instructions+=6;goto B638272;
case 0x638275:c.instructions+=5;goto B638275;
case 0x638278:c.instructions+=4;goto B638278;
case 0x63827b:c.instructions+=3;goto B63827b;
case 0x63827e:c.instructions+=2;goto B63827e;
case 0x63827f:c.instructions+=1;goto B63827f;
case 0x638281:goto L638281;
case 0x638287:c.instructions+=2;goto B638287;
case 0x63828c:c.instructions+=1;goto B63828c;
case 0x638290:goto L638290;
case 0x638292:c.instructions+=6;goto B638292;
case 0x638295:c.instructions+=5;goto B638295;
case 0x638298:c.instructions+=4;goto B638298;
case 0x63829b:c.instructions+=3;goto B63829b;
case 0x63829e:c.instructions+=2;goto B63829e;
case 0x63829f:c.instructions+=1;goto B63829f;
case 0x6382a1:goto L6382a1;
case 0x6382a7:c.instructions+=2;goto B6382a7;
case 0x6382ac:c.instructions+=1;goto B6382ac;
case 0x6382b0:goto L6382b0;
case 0x6382b2:c.instructions+=6;goto B6382b2;
case 0x6382b5:c.instructions+=5;goto B6382b5;
case 0x6382b8:c.instructions+=4;goto B6382b8;
case 0x6382bb:c.instructions+=3;goto B6382bb;
case 0x6382be:c.instructions+=2;goto B6382be;
case 0x6382bf:c.instructions+=1;goto B6382bf;
case 0x6382c1:goto L6382c1;
case 0x6382c7:c.instructions+=12;goto B6382c7;
case 0x6382c9:c.instructions+=11;goto B6382c9;
case 0x6382cc:c.instructions+=10;goto B6382cc;
case 0x6382d6:c.instructions+=9;goto B6382d6;
case 0x6382dd:c.instructions+=8;goto B6382dd;
case 0x6382e2:c.instructions+=7;goto B6382e2;
case 0x6382e7:c.instructions+=6;goto B6382e7;
case 0x6382e9:c.instructions+=5;goto B6382e9;
case 0x6382eb:c.instructions+=4;goto B6382eb;
case 0x6382f1:c.instructions+=3;goto B6382f1;
case 0x6382f2:c.instructions+=2;goto B6382f2;
case 0x6382fa:c.instructions+=1;goto B6382fa;
case 0x6382ff:goto L6382ff;
case 0x638304:c.instructions+=7;goto B638304;
case 0x638309:c.instructions+=6;goto B638309;
case 0x63830b:c.instructions+=5;goto B63830b;
case 0x63830d:c.instructions+=4;goto B63830d;
case 0x638313:c.instructions+=3;goto B638313;
case 0x638314:c.instructions+=2;goto B638314;
case 0x63831c:c.instructions+=1;goto B63831c;
case 0x638321:goto L638321;
case 0x638326:c.instructions+=7;goto B638326;
case 0x63832b:c.instructions+=6;goto B63832b;
case 0x63832d:c.instructions+=5;goto B63832d;
case 0x63832f:c.instructions+=4;goto B63832f;
case 0x638335:c.instructions+=3;goto B638335;
case 0x638336:c.instructions+=2;goto B638336;
case 0x63833e:c.instructions+=1;goto B63833e;
case 0x638343:goto L638343;
case 0x638348:c.instructions+=7;goto B638348;
case 0x63834d:c.instructions+=6;goto B63834d;
case 0x63834f:c.instructions+=5;goto B63834f;
case 0x638351:c.instructions+=4;goto B638351;
case 0x638357:c.instructions+=3;goto B638357;
case 0x638358:c.instructions+=2;goto B638358;
case 0x638360:c.instructions+=1;goto B638360;
case 0x638365:goto L638365;
case 0x638368:c.instructions+=4;goto B638368;
case 0x63836e:c.instructions+=3;goto B63836e;
case 0x638370:c.instructions+=2;goto B638370;
case 0x638376:c.instructions+=1;goto B638376;
case 0x63837b:goto L63837b;
case 0x63837d:goto L63837d;
case 0x638380:c.instructions+=6;goto B638380;
case 0x638382:c.instructions+=5;goto B638382;
case 0x63838a:c.instructions+=4;goto B63838a;
case 0x638390:c.instructions+=3;goto B638390;
case 0x638392:c.instructions+=2;goto B638392;
case 0x638395:c.instructions+=1;goto B638395;
case 0x63839a:goto L63839a;
case 0x6383a0:c.instructions+=12;goto B6383a0;
case 0x6383a3:c.instructions+=11;goto B6383a3;
case 0x6383a5:c.instructions+=10;goto B6383a5;
case 0x6383ab:c.instructions+=9;goto B6383ab;
case 0x6383ad:c.instructions+=8;goto B6383ad;
case 0x6383b3:c.instructions+=7;goto B6383b3;
case 0x6383b5:c.instructions+=6;goto B6383b5;
case 0x6383bb:c.instructions+=5;goto B6383bb;
case 0x6383be:c.instructions+=4;goto B6383be;
case 0x6383c0:c.instructions+=3;goto B6383c0;
case 0x6383c4:c.instructions+=2;goto B6383c4;
case 0x6383c8:c.instructions+=1;goto B6383c8;
case 0x6383ca:goto L6383ca;
case 0x6383d0:c.instructions+=1;goto B6383d0;
case 0x6383d2:goto L6383d2;
case 0x6383d6:c.instructions+=2;goto B6383d6;
case 0x6383da:c.instructions+=1;goto B6383da;
case 0x6383e0:goto L6383e0;
case 0x6383e2:c.instructions+=1;goto B6383e2;
case 0x6383e4:goto L6383e4;
case 0x6383e8:c.instructions+=2;goto B6383e8;
case 0x6383eb:c.instructions+=1;goto B6383eb;
case 0x6383ed:goto L6383ed;
case 0x6383f1:c.instructions+=6;goto B6383f1;
case 0x6383f4:c.instructions+=5;goto B6383f4;
case 0x6383f5:c.instructions+=4;goto B6383f5;
case 0x6383f9:c.instructions+=3;goto B6383f9;
case 0x6383ff:c.instructions+=2;goto B6383ff;
case 0x638403:c.instructions+=1;goto B638403;
case 0x638405:goto L638405;
case 0x63840b:c.instructions+=11;goto B63840b;
case 0x63840d:c.instructions+=10;goto B63840d;
case 0x638410:c.instructions+=9;goto B638410;
case 0x638413:c.instructions+=8;goto B638413;
case 0x638416:c.instructions+=7;goto B638416;
case 0x63841a:c.instructions+=6;goto B63841a;
case 0x63841c:c.instructions+=5;goto B63841c;
case 0x638422:c.instructions+=4;goto B638422;
case 0x638423:c.instructions+=3;goto B638423;
case 0x638424:c.instructions+=2;goto B638424;
case 0x638428:c.instructions+=1;goto B638428;
case 0x63842d:goto L63842d;
case 0x63842f:goto L63842f;
case 0x638432:c.instructions+=14;goto B638432;
case 0x638435:c.instructions+=13;goto B638435;
case 0x638436:c.instructions+=12;goto B638436;
case 0x638439:c.instructions+=11;goto B638439;
case 0x63843a:c.instructions+=10;goto B63843a;
case 0x638440:c.instructions+=9;goto B638440;
case 0x638446:c.instructions+=8;goto B638446;
case 0x63844c:c.instructions+=7;goto B63844c;
case 0x638452:c.instructions+=6;goto B638452;
case 0x638458:c.instructions+=5;goto B638458;
case 0x63845e:c.instructions+=4;goto B63845e;
case 0x638464:c.instructions+=3;goto B638464;
case 0x63846b:c.instructions+=2;goto B63846b;
case 0x638472:c.instructions+=1;goto B638472;
case 0x638477:goto L638477;
case 0x63847d:c.instructions+=72;goto B63847d;
case 0x638483:c.instructions+=71;goto B638483;
case 0x638489:c.instructions+=70;goto B638489;
case 0x63848f:c.instructions+=69;goto B63848f;
case 0x638495:c.instructions+=68;goto B638495;
case 0x63849b:c.instructions+=67;goto B63849b;
case 0x6384a1:c.instructions+=66;goto B6384a1;
case 0x6384a7:c.instructions+=65;goto B6384a7;
case 0x6384ad:c.instructions+=64;goto B6384ad;
case 0x6384b3:c.instructions+=63;goto B6384b3;
case 0x6384b9:c.instructions+=62;goto B6384b9;
case 0x6384bf:c.instructions+=61;goto B6384bf;
case 0x6384c5:c.instructions+=60;goto B6384c5;
case 0x6384cb:c.instructions+=59;goto B6384cb;
case 0x6384d1:c.instructions+=58;goto B6384d1;
case 0x6384d7:c.instructions+=57;goto B6384d7;
case 0x6384dd:c.instructions+=56;goto B6384dd;
case 0x6384e3:c.instructions+=55;goto B6384e3;
case 0x6384e9:c.instructions+=54;goto B6384e9;
case 0x6384ef:c.instructions+=53;goto B6384ef;
case 0x6384f5:c.instructions+=52;goto B6384f5;
case 0x6384fb:c.instructions+=51;goto B6384fb;
case 0x638501:c.instructions+=50;goto B638501;
case 0x638504:c.instructions+=49;goto B638504;
case 0x63850e:c.instructions+=48;goto B63850e;
case 0x638518:c.instructions+=47;goto B638518;
case 0x638522:c.instructions+=46;goto B638522;
case 0x63852c:c.instructions+=45;goto B63852c;
case 0x638536:c.instructions+=44;goto B638536;
case 0x638540:c.instructions+=43;goto B638540;
case 0x63854a:c.instructions+=42;goto B63854a;
case 0x638554:c.instructions+=41;goto B638554;
case 0x63855e:c.instructions+=40;goto B63855e;
case 0x638568:c.instructions+=39;goto B638568;
case 0x638572:c.instructions+=38;goto B638572;
case 0x63857c:c.instructions+=37;goto B63857c;
case 0x638586:c.instructions+=36;goto B638586;
case 0x638590:c.instructions+=35;goto B638590;
case 0x63859a:c.instructions+=34;goto B63859a;
case 0x6385a4:c.instructions+=33;goto B6385a4;
case 0x6385ae:c.instructions+=32;goto B6385ae;
case 0x6385b8:c.instructions+=31;goto B6385b8;
case 0x6385c2:c.instructions+=30;goto B6385c2;
case 0x6385cc:c.instructions+=29;goto B6385cc;
case 0x6385d6:c.instructions+=28;goto B6385d6;
case 0x6385e0:c.instructions+=27;goto B6385e0;
case 0x6385ea:c.instructions+=26;goto B6385ea;
case 0x6385f4:c.instructions+=25;goto B6385f4;
case 0x6385fe:c.instructions+=24;goto B6385fe;
case 0x638608:c.instructions+=23;goto B638608;
case 0x63860e:c.instructions+=22;goto B63860e;
case 0x638614:c.instructions+=21;goto B638614;
case 0x63861a:c.instructions+=20;goto B63861a;
case 0x638620:c.instructions+=19;goto B638620;
case 0x638626:c.instructions+=18;goto B638626;
case 0x63862c:c.instructions+=17;goto B63862c;
case 0x638632:c.instructions+=16;goto B638632;
case 0x638638:c.instructions+=15;goto B638638;
case 0x63863e:c.instructions+=14;goto B63863e;
case 0x638644:c.instructions+=13;goto B638644;
case 0x63864a:c.instructions+=12;goto B63864a;
case 0x638650:c.instructions+=11;goto B638650;
case 0x638656:c.instructions+=10;goto B638656;
case 0x63865c:c.instructions+=9;goto B63865c;
case 0x638662:c.instructions+=8;goto B638662;
case 0x638667:c.instructions+=7;goto B638667;
case 0x63866d:c.instructions+=6;goto B63866d;
case 0x638673:c.instructions+=5;goto B638673;
case 0x638679:c.instructions+=4;goto B638679;
case 0x63867f:c.instructions+=3;goto B63867f;
case 0x638684:c.instructions+=2;goto B638684;
case 0x638686:c.instructions+=1;goto B638686;
case 0x638688:goto L638688;
case 0x63868e:c.instructions+=1;goto B63868e;
case 0x638698:goto L638698;
case 0x63869e:c.instructions+=4;goto B63869e;
case 0x6386a4:c.instructions+=3;goto B6386a4;
case 0x6386aa:c.instructions+=2;goto B6386aa;
case 0x6386b0:c.instructions+=1;goto B6386b0;
case 0x6386b2:goto L6386b2;
case 0x6386b8:c.instructions+=1;goto B6386b8;
case 0x6386c2:goto L6386c2;
case 0x6386c8:c.instructions+=5;goto B6386c8;
case 0x6386cb:c.instructions+=4;goto B6386cb;
case 0x6386d1:c.instructions+=3;goto B6386d1;
case 0x6386d2:c.instructions+=2;goto B6386d2;
case 0x6386d4:c.instructions+=1;goto B6386d4;
case 0x6386d9:goto L6386d9;
case 0x6386df:c.instructions+=1;goto B6386df;
case 0x6386e4:goto L6386e4;
case 0x6386e7:c.instructions+=3;goto B6386e7;
case 0x6386ee:c.instructions+=2;goto B6386ee;
case 0x6386f0:c.instructions+=1;goto B6386f0;
case 0x6386f2:goto L6386f2;
case 0x6386f3:c.instructions+=2;goto B6386f3;
case 0x6386f4:c.instructions+=1;goto B6386f4;
case 0x6386f9:goto L6386f9;
case 0x6386fa:c.instructions+=4;goto B6386fa;
case 0x6386fb:c.instructions+=3;goto B6386fb;
case 0x6386fc:c.instructions+=2;goto B6386fc;
case 0x638700:c.instructions+=1;goto B638700;
case 0x638705:goto L638705;
case 0x638708:c.instructions+=2;goto B638708;
case 0x63870a:c.instructions+=1;goto B63870a;
case 0x63870c:goto L63870c;
case 0x638710:goto L638710;
case 0x638711:c.instructions+=3;goto B638711;
case 0x638712:c.instructions+=2;goto B638712;
case 0x638713:c.instructions+=1;goto B638713;
case 0x638718:goto L638718;
case 0x63871b:c.instructions+=2;goto B63871b;
case 0x63871d:c.instructions+=1;goto B63871d;
case 0x63871f:goto L63871f;
case 0x638723:goto L638723;
case 0x638729:c.instructions+=1;goto B638729;
case 0x63872b:goto L63872b;
case 0x638731:c.instructions+=1;goto B638731;
case 0x63873b:goto L63873b;
case 0x63873d:c.instructions+=1;goto B63873d;
case 0x638742:goto L638742;
case 0x638745:c.instructions+=3;goto B638745;
case 0x638746:c.instructions+=2;goto B638746;
case 0x638748:c.instructions+=1;goto B638748;
case 0x63874d:goto L63874d;
case 0x638753:c.instructions+=10;goto B638753;
case 0x638755:c.instructions+=9;goto B638755;
case 0x63875a:c.instructions+=8;goto B63875a;
case 0x63875c:c.instructions+=7;goto B63875c;
case 0x638762:c.instructions+=6;goto B638762;
case 0x638765:c.instructions+=5;goto B638765;
case 0x638766:c.instructions+=4;goto B638766;
case 0x63876b:c.instructions+=3;goto B63876b;
case 0x638770:c.instructions+=2;goto B638770;
case 0x638772:c.instructions+=1;goto B638772;
case 0x638774:goto L638774;
case 0x63877a:c.instructions+=1;goto B63877a;
case 0x638784:goto L638784;
case 0x63878a:c.instructions+=2;goto B63878a;
case 0x638790:c.instructions+=1;goto B638790;
case 0x638795:goto L638795;
case 0x638798:c.instructions+=6;goto B638798;
case 0x63879a:c.instructions+=5;goto B63879a;
case 0x63879d:c.instructions+=4;goto B63879d;
case 0x6387a3:c.instructions+=3;goto B6387a3;
case 0x6387a6:c.instructions+=2;goto B6387a6;
case 0x6387a7:c.instructions+=1;goto B6387a7;
case 0x6387a9:goto L6387a9;
case 0x6387ab:c.instructions+=6;goto B6387ab;
case 0x6387b1:c.instructions+=5;goto B6387b1;
case 0x6387b7:c.instructions+=4;goto B6387b7;
case 0x6387bd:c.instructions+=3;goto B6387bd;
case 0x6387c3:c.instructions+=2;goto B6387c3;
case 0x6387c9:c.instructions+=1;goto B6387c9;
case 0x6387ce:goto L6387ce;
case 0x6387d4:c.instructions+=1;goto B6387d4;
case 0x6387d6:goto L6387d6;
case 0x6387db:goto L6387db;
case 0x6387dd:c.instructions+=1;goto B6387dd;
case 0x6387df:goto L6387df;
case 0x6387e3:c.instructions+=5;goto B6387e3;
case 0x6387e4:c.instructions+=4;goto B6387e4;
case 0x6387eb:c.instructions+=3;goto B6387eb;
case 0x6387f0:c.instructions+=2;goto B6387f0;
case 0x6387f1:c.instructions+=1;goto B6387f1;
case 0x6387f6:goto L6387f6;
case 0x6387fd:c.instructions+=2;goto B6387fd;
case 0x6387fe:c.instructions+=1;goto B6387fe;
case 0x638800:goto L638800;
case 0x638804:c.instructions+=5;goto B638804;
case 0x638805:c.instructions+=4;goto B638805;
case 0x63880c:c.instructions+=3;goto B63880c;
case 0x638811:c.instructions+=2;goto B638811;
case 0x638812:c.instructions+=1;goto B638812;
case 0x638817:goto L638817;
case 0x63881e:c.instructions+=1;goto B63881e;
case 0x63881f:goto L63881f;
case 0x638824:goto L638824;
case 0x638825:c.instructions+=3;goto B638825;
case 0x638826:c.instructions+=2;goto B638826;
case 0x638827:c.instructions+=1;goto B638827;
case 0x63882c:goto L63882c;
case 0x63882f:c.instructions+=6;goto B63882f;
case 0x638830:c.instructions+=5;goto B638830;
case 0x638836:c.instructions+=4;goto B638836;
case 0x63883d:c.instructions+=3;goto B63883d;
case 0x638842:c.instructions+=2;goto B638842;
case 0x638843:c.instructions+=1;goto B638843;
case 0x638848:goto L638848;
case 0x63884f:c.instructions+=2;goto B63884f;
case 0x638850:c.instructions+=1;goto B638850;
case 0x638855:goto L638855;
case 0x638856:c.instructions+=3;goto B638856;
case 0x638857:c.instructions+=2;goto B638857;
case 0x638858:c.instructions+=1;goto B638858;
case 0x63885d:goto L63885d;
case 0x638860:c.instructions+=5;goto B638860;
case 0x638861:c.instructions+=4;goto B638861;
case 0x638863:c.instructions+=3;goto B638863;
case 0x638868:c.instructions+=2;goto B638868;
case 0x63886e:c.instructions+=1;goto B63886e;
case 0x638873:goto L638873;
case 0x638876:c.instructions+=2;goto B638876;
case 0x638877:c.instructions+=1;goto B638877;
case 0x63887c:goto L63887c;
case 0x63887d:c.instructions+=4;goto B63887d;
case 0x63887e:c.instructions+=3;goto B63887e;
case 0x638883:c.instructions+=2;goto B638883;
case 0x638889:c.instructions+=1;goto B638889;
case 0x63888e:goto L63888e;
case 0x638894:c.instructions+=4;goto B638894;
case 0x63889a:c.instructions+=3;goto B63889a;
case 0x63889d:c.instructions+=2;goto B63889d;
case 0x63889f:c.instructions+=1;goto B63889f;
case 0x6388a1:goto L6388a1;
case 0x6388a5:c.instructions+=2;goto B6388a5;
case 0x6388ab:c.instructions+=1;goto B6388ab;
case 0x6388af:goto L6388af;
case 0x6388b5:c.instructions+=2;goto B6388b5;
case 0x6388b7:c.instructions+=1;goto B6388b7;
case 0x6388b9:goto L6388b9;
case 0x6388bd:c.instructions+=2;goto B6388bd;
case 0x6388c3:c.instructions+=1;goto B6388c3;
case 0x6388c7:goto L6388c7;
case 0x6388cd:c.instructions+=2;goto B6388cd;
case 0x6388cf:c.instructions+=1;goto B6388cf;
case 0x6388d1:goto L6388d1;
case 0x6388d5:c.instructions+=2;goto B6388d5;
case 0x6388db:c.instructions+=1;goto B6388db;
case 0x6388df:goto L6388df;
case 0x6388e1:c.instructions+=2;goto B6388e1;
case 0x6388e3:c.instructions+=1;goto B6388e3;
case 0x6388e5:goto L6388e5;
case 0x6388eb:c.instructions+=1;goto B6388eb;
case 0x6388ed:goto L6388ed;
case 0x6388ef:goto L6388ef;
case 0x6388f1:c.instructions+=1;goto B6388f1;
case 0x6388f7:goto L6388f7;
case 0x6388fa:c.instructions+=10;goto B6388fa;
case 0x6388fd:c.instructions+=9;goto B6388fd;
case 0x638900:c.instructions+=8;goto B638900;
case 0x638906:c.instructions+=7;goto B638906;
case 0x638909:c.instructions+=6;goto B638909;
case 0x63890c:c.instructions+=5;goto B63890c;
case 0x63890f:c.instructions+=4;goto B63890f;
case 0x638913:c.instructions+=3;goto B638913;
case 0x63891b:c.instructions+=2;goto B63891b;
case 0x63891e:c.instructions+=1;goto B63891e;
case 0x638921:goto L638921;
case 0x638925:c.instructions+=4;goto B638925;
case 0x638927:c.instructions+=3;goto B638927;
case 0x638928:c.instructions+=2;goto B638928;
case 0x63892a:c.instructions+=1;goto B63892a;
case 0x63892f:goto L63892f;
case 0x638933:c.instructions+=6;goto B638933;
case 0x638937:c.instructions+=5;goto B638937;
case 0x63893a:c.instructions+=4;goto B63893a;
case 0x63893b:c.instructions+=3;goto B63893b;
case 0x63893f:c.instructions+=2;goto B63893f;
case 0x638943:c.instructions+=1;goto B638943;
case 0x638945:goto L638945;
case 0x638948:c.instructions+=17;goto B638948;
case 0x63894b:c.instructions+=16;goto B63894b;
case 0x63894e:c.instructions+=15;goto B63894e;
case 0x638954:c.instructions+=14;goto B638954;
case 0x638956:c.instructions+=13;goto B638956;
case 0x63895c:c.instructions+=12;goto B63895c;
case 0x638962:c.instructions+=11;goto B638962;
case 0x638965:c.instructions+=10;goto B638965;
case 0x638968:c.instructions+=9;goto B638968;
case 0x63896b:c.instructions+=8;goto B63896b;
case 0x638971:c.instructions+=7;goto B638971;
case 0x638973:c.instructions+=6;goto B638973;
case 0x638979:c.instructions+=5;goto B638979;
case 0x63897f:c.instructions+=4;goto B63897f;
case 0x638981:c.instructions+=3;goto B638981;
case 0x638987:c.instructions+=2;goto B638987;
case 0x63898a:c.instructions+=1;goto B63898a;
case 0x638990:goto L638990;
case 0x638996:c.instructions+=2;goto B638996;
case 0x638998:c.instructions+=1;goto B638998;
case 0x63899a:goto L63899a;
case 0x63899f:goto L63899f;
case 0x6389a1:c.instructions+=1;goto B6389a1;
case 0x6389a3:goto L6389a3;
case 0x6389a5:c.instructions+=1;goto B6389a5;
case 0x6389a7:goto L6389a7;
case 0x6389ad:goto L6389ad;
case 0x6389af:c.instructions+=2;goto B6389af;
case 0x6389b2:c.instructions+=1;goto B6389b2;
case 0x6389b4:goto L6389b4;
case 0x6389b7:c.instructions+=1;goto B6389b7;
case 0x6389b9:goto L6389b9;
case 0x6389bf:goto L6389bf;
case 0x6389c1:c.instructions+=2;goto B6389c1;
case 0x6389c4:c.instructions+=1;goto B6389c4;
case 0x6389c6:goto L6389c6;
case 0x6389c9:c.instructions+=1;goto B6389c9;
case 0x6389cb:goto L6389cb;
case 0x6389d1:goto L6389d1;
case 0x6389d3:c.instructions+=2;goto B6389d3;
case 0x6389d6:c.instructions+=1;goto B6389d6;
case 0x6389db:goto L6389db;
case 0x6389de:c.instructions+=3;goto B6389de;
case 0x6389e0:c.instructions+=2;goto B6389e0;
case 0x6389e3:c.instructions+=1;goto B6389e3;
case 0x6389e8:goto L6389e8;
case 0x6389ea:c.instructions+=6;goto B6389ea;
case 0x6389ed:c.instructions+=5;goto B6389ed;
case 0x6389ee:c.instructions+=4;goto B6389ee;
case 0x6389f0:c.instructions+=3;goto B6389f0;
case 0x6389f6:c.instructions+=2;goto B6389f6;
case 0x6389fa:c.instructions+=1;goto B6389fa;
case 0x6389ff:goto L6389ff;
case 0x638a02:c.instructions+=4;goto B638a02;
case 0x638a03:c.instructions+=3;goto B638a03;
case 0x638a05:c.instructions+=2;goto B638a05;
case 0x638a0b:c.instructions+=1;goto B638a0b;
case 0x638a10:goto L638a10;
case 0x638a14:c.instructions+=5;goto B638a14;
case 0x638a17:c.instructions+=4;goto B638a17;
case 0x638a18:c.instructions+=3;goto B638a18;
case 0x638a1a:c.instructions+=2;goto B638a1a;
case 0x638a20:c.instructions+=1;goto B638a20;
case 0x638a25:goto L638a25;
case 0x638a29:c.instructions+=5;goto B638a29;
case 0x638a2e:c.instructions+=4;goto B638a2e;
case 0x638a2f:c.instructions+=3;goto B638a2f;
case 0x638a31:c.instructions+=2;goto B638a31;
case 0x638a37:c.instructions+=1;goto B638a37;
case 0x638a3c:goto L638a3c;
case 0x638a3e:c.instructions+=35;goto B638a3e;
case 0x638a42:c.instructions+=34;goto B638a42;
case 0x638a48:c.instructions+=33;goto B638a48;
case 0x638a4b:c.instructions+=32;goto B638a4b;
case 0x638a4e:c.instructions+=31;goto B638a4e;
case 0x638a4f:c.instructions+=30;goto B638a4f;
case 0x638a52:c.instructions+=29;goto B638a52;
case 0x638a55:c.instructions+=28;goto B638a55;
case 0x638a57:c.instructions+=27;goto B638a57;
case 0x638a5a:c.instructions+=26;goto B638a5a;
case 0x638a60:c.instructions+=25;goto B638a60;
case 0x638a64:c.instructions+=24;goto B638a64;
case 0x638a66:c.instructions+=23;goto B638a66;
case 0x638a6c:c.instructions+=22;goto B638a6c;
case 0x638a70:c.instructions+=21;goto B638a70;
case 0x638a76:c.instructions+=20;goto B638a76;
case 0x638a7a:c.instructions+=19;goto B638a7a;
case 0x638a7e:c.instructions+=18;goto B638a7e;
case 0x638a84:c.instructions+=17;goto B638a84;
case 0x638a88:c.instructions+=16;goto B638a88;
case 0x638a8a:c.instructions+=15;goto B638a8a;
case 0x638a8c:c.instructions+=14;goto B638a8c;
case 0x638a8f:c.instructions+=13;goto B638a8f;
case 0x638a92:c.instructions+=12;goto B638a92;
case 0x638a95:c.instructions+=11;goto B638a95;
case 0x638a98:c.instructions+=10;goto B638a98;
case 0x638a9f:c.instructions+=9;goto B638a9f;
case 0x638aa1:c.instructions+=8;goto B638aa1;
case 0x638aa7:c.instructions+=7;goto B638aa7;
case 0x638aab:c.instructions+=6;goto B638aab;
case 0x638ab1:c.instructions+=5;goto B638ab1;
case 0x638ab5:c.instructions+=4;goto B638ab5;
case 0x638abc:c.instructions+=3;goto B638abc;
case 0x638ac2:c.instructions+=2;goto B638ac2;
case 0x638ac9:c.instructions+=1;goto B638ac9;
case 0x638ace:goto L638ace;
case 0x638acf:c.instructions+=3;goto B638acf;
case 0x638ad1:c.instructions+=2;goto B638ad1;
case 0x638ad7:c.instructions+=1;goto B638ad7;
case 0x638adc:goto L638adc;
case 0x638ae0:c.instructions+=5;goto B638ae0;
case 0x638ae3:c.instructions+=4;goto B638ae3;
case 0x638ae4:c.instructions+=3;goto B638ae4;
case 0x638ae6:c.instructions+=2;goto B638ae6;
case 0x638aec:c.instructions+=1;goto B638aec;
case 0x638af1:goto L638af1;
case 0x638af5:c.instructions+=5;goto B638af5;
case 0x638afa:c.instructions+=4;goto B638afa;
case 0x638afb:c.instructions+=3;goto B638afb;
case 0x638afd:c.instructions+=2;goto B638afd;
case 0x638b03:c.instructions+=1;goto B638b03;
case 0x638b08:goto L638b08;
case 0x638b09:c.instructions+=3;goto B638b09;
case 0x638b0b:c.instructions+=2;goto B638b0b;
case 0x638b11:c.instructions+=1;goto B638b11;
case 0x638b16:goto L638b16;
case 0x638b1a:c.instructions+=5;goto B638b1a;
case 0x638b1d:c.instructions+=4;goto B638b1d;
case 0x638b1e:c.instructions+=3;goto B638b1e;
case 0x638b20:c.instructions+=2;goto B638b20;
case 0x638b26:c.instructions+=1;goto B638b26;
case 0x638b2b:goto L638b2b;
case 0x638b2f:c.instructions+=19;goto B638b2f;
case 0x638b33:c.instructions+=18;goto B638b33;
case 0x638b37:c.instructions+=17;goto B638b37;
case 0x638b3b:c.instructions+=16;goto B638b3b;
case 0x638b3c:c.instructions+=15;goto B638b3c;
case 0x638b40:c.instructions+=14;goto B638b40;
case 0x638b42:c.instructions+=13;goto B638b42;
case 0x638b49:c.instructions+=12;goto B638b49;
case 0x638b4f:c.instructions+=11;goto B638b4f;
case 0x638b53:c.instructions+=10;goto B638b53;
case 0x638b57:c.instructions+=9;goto B638b57;
case 0x638b59:c.instructions+=8;goto B638b59;
case 0x638b5f:c.instructions+=7;goto B638b5f;
case 0x638b63:c.instructions+=6;goto B638b63;
case 0x638b69:c.instructions+=5;goto B638b69;
case 0x638b6d:c.instructions+=4;goto B638b6d;
case 0x638b71:c.instructions+=3;goto B638b71;
case 0x638b77:c.instructions+=2;goto B638b77;
case 0x638b7b:c.instructions+=1;goto B638b7b;
case 0x638b80:goto L638b80;
case 0x638b83:c.instructions+=28;goto B638b83;
case 0x638b87:c.instructions+=27;goto B638b87;
case 0x638b8a:c.instructions+=26;goto B638b8a;
case 0x638b8d:c.instructions+=25;goto B638b8d;
case 0x638b90:c.instructions+=24;goto B638b90;
case 0x638b93:c.instructions+=23;goto B638b93;
case 0x638b95:c.instructions+=22;goto B638b95;
case 0x638b9c:c.instructions+=21;goto B638b9c;
case 0x638b9e:c.instructions+=20;goto B638b9e;
case 0x638b9f:c.instructions+=19;goto B638b9f;
case 0x638ba6:c.instructions+=18;goto B638ba6;
case 0x638ba8:c.instructions+=17;goto B638ba8;
case 0x638baf:c.instructions+=16;goto B638baf;
case 0x638bb6:c.instructions+=15;goto B638bb6;
case 0x638bbd:c.instructions+=14;goto B638bbd;
case 0x638bc0:c.instructions+=13;goto B638bc0;
case 0x638bc3:c.instructions+=12;goto B638bc3;
case 0x638bc6:c.instructions+=11;goto B638bc6;
case 0x638bc9:c.instructions+=10;goto B638bc9;
case 0x638bcb:c.instructions+=9;goto B638bcb;
case 0x638bcd:c.instructions+=8;goto B638bcd;
case 0x638bd4:c.instructions+=7;goto B638bd4;
case 0x638bd6:c.instructions+=6;goto B638bd6;
case 0x638bdd:c.instructions+=5;goto B638bdd;
case 0x638be4:c.instructions+=4;goto B638be4;
case 0x638be5:c.instructions+=3;goto B638be5;
case 0x638be9:c.instructions+=2;goto B638be9;
case 0x638bea:c.instructions+=1;goto B638bea;
case 0x638bef:goto L638bef;
case 0x638bf3:c.instructions+=4;goto B638bf3;
case 0x638bf4:c.instructions+=3;goto B638bf4;
case 0x638bf8:c.instructions+=2;goto B638bf8;
case 0x638bf9:c.instructions+=1;goto B638bf9;
case 0x638bfe:goto L638bfe;
case 0x638c02:c.instructions+=7;goto B638c02;
case 0x638c05:c.instructions+=6;goto B638c05;
case 0x638c09:c.instructions+=5;goto B638c09;
case 0x638c0c:c.instructions+=4;goto B638c0c;
case 0x638c0f:c.instructions+=3;goto B638c0f;
case 0x638c11:c.instructions+=2;goto B638c11;
case 0x638c14:c.instructions+=1;goto B638c14;
case 0x638c16:goto L638c16;
case 0x638c18:c.instructions+=1;goto B638c18;
case 0x638c1b:goto L638c1b;
case 0x638c21:c.instructions+=3;goto B638c21;
case 0x638c23:c.instructions+=2;goto B638c23;
case 0x638c26:c.instructions+=1;goto B638c26;
case 0x638c28:goto L638c28;
case 0x638c2a:c.instructions+=1;goto B638c2a;
case 0x638c30:goto L638c30;
case 0x638c36:c.instructions+=3;goto B638c36;
case 0x638c38:c.instructions+=2;goto B638c38;
case 0x638c3b:c.instructions+=1;goto B638c3b;
case 0x638c3d:goto L638c3d;
case 0x638c3f:c.instructions+=1;goto B638c3f;
case 0x638c45:goto L638c45;
case 0x638c49:c.instructions+=14;goto B638c49;
case 0x638c4b:c.instructions+=13;goto B638c4b;
case 0x638c4d:c.instructions+=12;goto B638c4d;
case 0x638c53:c.instructions+=11;goto B638c53;
case 0x638c57:c.instructions+=10;goto B638c57;
case 0x638c5b:c.instructions+=9;goto B638c5b;
case 0x638c5f:c.instructions+=8;goto B638c5f;
case 0x638c63:c.instructions+=7;goto B638c63;
case 0x638c65:c.instructions+=6;goto B638c65;
case 0x638c69:c.instructions+=5;goto B638c69;
case 0x638c6d:c.instructions+=4;goto B638c6d;
case 0x638c6f:c.instructions+=3;goto B638c6f;
case 0x638c73:c.instructions+=2;goto B638c73;
case 0x638c75:c.instructions+=1;goto B638c75;
case 0x638c80:goto L638c80;
case 0x638c82:c.instructions+=2;goto B638c82;
case 0x638c87:c.instructions+=1;goto B638c87;
case 0x638c8e:goto L638c8e;
case 0x638c90:goto L638c90;
case 0x638c97:c.instructions+=4;goto B638c97;
case 0x638c9b:c.instructions+=3;goto B638c9b;
case 0x638c9f:c.instructions+=2;goto B638c9f;
case 0x638ca7:c.instructions+=1;goto B638ca7;
case 0x638cb0:goto L638cb0;
case 0x638cb4:c.instructions+=3;goto B638cb4;
case 0x638cb6:c.instructions+=2;goto B638cb6;
case 0x638cba:c.instructions+=1;goto B638cba;
case 0x638cc0:goto L638cc0;
case 0x638cc3:c.instructions+=3;goto B638cc3;
case 0x638cc5:c.instructions+=2;goto B638cc5;
case 0x638cc7:c.instructions+=1;goto B638cc7;
case 0x638cc9:goto L638cc9;
case 0x638ccb:goto L638ccb;
case 0x638ccd:c.instructions+=1;goto B638ccd;
case 0x638ccf:goto L638ccf;
case 0x638cd2:c.instructions+=1;goto B638cd2;
case 0x638cd4:goto L638cd4;
case 0x638cdb:c.instructions+=1;goto B638cdb;
case 0x638ce2:goto L638ce2;
case 0x638ce6:c.instructions+=2;goto B638ce6;
case 0x638ce8:c.instructions+=1;goto B638ce8;
case 0x638cea:goto L638cea;
case 0x638cec:goto L638cec;
case 0x638cee:c.instructions+=1;goto B638cee;
case 0x638cf0:goto L638cf0;
case 0x638cf3:c.instructions+=2;goto B638cf3;
case 0x638cf6:c.instructions+=1;goto B638cf6;
case 0x638cf8:goto L638cf8;
case 0x638cfb:c.instructions+=2;goto B638cfb;
case 0x638d03:c.instructions+=1;goto B638d03;
case 0x638d05:goto L638d05;
case 0x638d09:c.instructions+=2;goto B638d09;
case 0x638d0b:c.instructions+=1;goto B638d0b;
case 0x638d0d:goto L638d0d;
case 0x638d11:goto L638d11;
case 0x638d15:c.instructions+=1;goto B638d15;
case 0x638d1b:goto L638d1b;
case 0x638d1f:c.instructions+=6;goto B638d1f;
case 0x638d20:c.instructions+=5;goto B638d20;
case 0x638d23:c.instructions+=4;goto B638d23;
case 0x638d26:c.instructions+=3;goto B638d26;
case 0x638d29:c.instructions+=2;goto B638d29;
case 0x638d2d:c.instructions+=1;goto B638d2d;
case 0x638d2f:goto L638d2f;
case 0x638d33:c.instructions+=9;goto B638d33;
case 0x638d37:c.instructions+=8;goto B638d37;
case 0x638d3b:c.instructions+=7;goto B638d3b;
case 0x638d3e:c.instructions+=6;goto B638d3e;
case 0x638d41:c.instructions+=5;goto B638d41;
case 0x638d42:c.instructions+=4;goto B638d42;
case 0x638d46:c.instructions+=3;goto B638d46;
case 0x638d4a:c.instructions+=2;goto B638d4a;
case 0x638d4e:c.instructions+=1;goto B638d4e;
case 0x638d54:goto L638d54;
case 0x638d5b:c.instructions+=3;goto B638d5b;
case 0x638d5d:c.instructions+=2;goto B638d5d;
case 0x638d5e:c.instructions+=1;goto B638d5e;
case 0x638d63:goto L638d63;
case 0x638d67:c.instructions+=7;goto B638d67;
case 0x638d6a:c.instructions+=6;goto B638d6a;
case 0x638d6b:c.instructions+=5;goto B638d6b;
case 0x638d6e:c.instructions+=4;goto B638d6e;
case 0x638d71:c.instructions+=3;goto B638d71;
case 0x638d75:c.instructions+=2;goto B638d75;
case 0x638d79:c.instructions+=1;goto B638d79;
case 0x638d7f:goto L638d7f;
case 0x638d82:c.instructions+=4;goto B638d82;
case 0x638d88:c.instructions+=3;goto B638d88;
case 0x638d8a:c.instructions+=2;goto B638d8a;
case 0x638d8c:c.instructions+=1;goto B638d8c;
case 0x638d8e:goto L638d8e;
case 0x638d93:goto L638d93;
case 0x638d94:c.instructions+=1;goto B638d94;
case 0x638d99:goto L638d99;
case 0x638d9e:c.instructions+=2;goto B638d9e;
case 0x638da4:c.instructions+=1;goto B638da4;
case 0x638da9:goto L638da9;
case 0x638daa:c.instructions+=1;goto B638daa;
case 0x638daf:goto L638daf;
case 0x638db5:c.instructions+=5;goto B638db5;
case 0x638dbb:c.instructions+=4;goto B638dbb;
case 0x638dbe:c.instructions+=3;goto B638dbe;
case 0x638dc0:c.instructions+=2;goto B638dc0;
case 0x638dc5:c.instructions+=1;goto B638dc5;
case 0x638dc7:goto L638dc7;
case 0x638dcc:goto L638dcc;
case 0x638dcd:c.instructions+=1;goto B638dcd;
case 0x638dd2:goto L638dd2;
case 0x638dd8:c.instructions+=26;goto B638dd8;
case 0x638dde:c.instructions+=25;goto B638dde;
case 0x638de4:c.instructions+=24;goto B638de4;
case 0x638dea:c.instructions+=23;goto B638dea;
case 0x638df0:c.instructions+=22;goto B638df0;
case 0x638df4:c.instructions+=21;goto B638df4;
case 0x638dfa:c.instructions+=20;goto B638dfa;
case 0x638dfe:c.instructions+=19;goto B638dfe;
case 0x638e04:c.instructions+=18;goto B638e04;
case 0x638e08:c.instructions+=17;goto B638e08;
case 0x638e0e:c.instructions+=16;goto B638e0e;
case 0x638e12:c.instructions+=15;goto B638e12;
case 0x638e18:c.instructions+=14;goto B638e18;
case 0x638e1c:c.instructions+=13;goto B638e1c;
case 0x638e22:c.instructions+=12;goto B638e22;
case 0x638e26:c.instructions+=11;goto B638e26;
case 0x638e2c:c.instructions+=10;goto B638e2c;
case 0x638e2f:c.instructions+=9;goto B638e2f;
case 0x638e31:c.instructions+=8;goto B638e31;
case 0x638e35:c.instructions+=7;goto B638e35;
case 0x638e3b:c.instructions+=6;goto B638e3b;
case 0x638e3f:c.instructions+=5;goto B638e3f;
case 0x638e45:c.instructions+=4;goto B638e45;
case 0x638e49:c.instructions+=3;goto B638e49;
case 0x638e4f:c.instructions+=2;goto B638e4f;
case 0x638e55:c.instructions+=1;goto B638e55;
case 0x638e57:goto L638e57;
case 0x638e5a:c.instructions+=3;goto B638e5a;
case 0x638e5d:c.instructions+=2;goto B638e5d;
case 0x638e5f:c.instructions+=1;goto B638e5f;
case 0x638e61:goto L638e61;
case 0x638e63:c.instructions+=1;goto B638e63;
case 0x638e65:goto L638e65;
case 0x638e69:goto L638e69;
case 0x638e6b:c.instructions+=1;goto B638e6b;
case 0x638e6d:goto L638e6d;
case 0x638e70:c.instructions+=3;goto B638e70;
case 0x638e73:c.instructions+=2;goto B638e73;
case 0x638e76:c.instructions+=1;goto B638e76;
case 0x638e78:goto L638e78;
case 0x638e80:goto L638e80;
case 0x638e82:c.instructions+=2;goto B638e82;
case 0x638e84:c.instructions+=1;goto B638e84;
case 0x638e86:goto L638e86;
case 0x638e89:c.instructions+=3;goto B638e89;
case 0x638e8c:c.instructions+=2;goto B638e8c;
case 0x638e8f:c.instructions+=1;goto B638e8f;
case 0x638e91:goto L638e91;
case 0x638e95:goto L638e95;
case 0x638e99:c.instructions+=2;goto B638e99;
case 0x638e9b:c.instructions+=1;goto B638e9b;
case 0x638e9d:goto L638e9d;
case 0x638ea0:c.instructions+=3;goto B638ea0;
case 0x638ea3:c.instructions+=2;goto B638ea3;
case 0x638ea6:c.instructions+=1;goto B638ea6;
case 0x638ea8:goto L638ea8;
case 0x638eac:goto L638eac;
case 0x638eb0:c.instructions+=2;goto B638eb0;
case 0x638eb2:c.instructions+=1;goto B638eb2;
case 0x638eb4:goto L638eb4;
case 0x638eb7:c.instructions+=3;goto B638eb7;
case 0x638eba:c.instructions+=2;goto B638eba;
case 0x638ebd:c.instructions+=1;goto B638ebd;
case 0x638ebf:goto L638ebf;
case 0x638ec3:goto L638ec3;
case 0x638ec5:c.instructions+=1;goto B638ec5;
case 0x638ec7:goto L638ec7;
case 0x638eca:c.instructions+=3;goto B638eca;
case 0x638ecd:c.instructions+=2;goto B638ecd;
case 0x638ed0:c.instructions+=1;goto B638ed0;
case 0x638ed2:goto L638ed2;
case 0x638ed6:goto L638ed6;
case 0x638ed8:c.instructions+=1;goto B638ed8;
case 0x638eda:goto L638eda;
case 0x638edd:c.instructions+=3;goto B638edd;
case 0x638ee0:c.instructions+=2;goto B638ee0;
case 0x638ee3:c.instructions+=1;goto B638ee3;
case 0x638ee5:goto L638ee5;
case 0x638ee9:goto L638ee9;
case 0x638eeb:c.instructions+=8;goto B638eeb;
case 0x638eed:c.instructions+=7;goto B638eed;
case 0x638eef:c.instructions+=6;goto B638eef;
case 0x638ef3:c.instructions+=5;goto B638ef3;
case 0x638ef7:c.instructions+=4;goto B638ef7;
case 0x638efb:c.instructions+=3;goto B638efb;
case 0x638eff:c.instructions+=2;goto B638eff;
case 0x638f03:c.instructions+=1;goto B638f03;
case 0x638f05:goto L638f05;
case 0x638f07:c.instructions+=1;goto B638f07;
case 0x638f0c:goto L638f0c;
case 0x638f0e:c.instructions+=1;goto B638f0e;
case 0x638f10:goto L638f10;
case 0x638f14:c.instructions+=2;goto B638f14;
case 0x638f16:c.instructions+=1;goto B638f16;
case 0x638f18:goto L638f18;
case 0x638f1a:c.instructions+=1;goto B638f1a;
case 0x638f1f:goto L638f1f;
case 0x638f21:c.instructions+=1;goto B638f21;
case 0x638f23:goto L638f23;
case 0x638f27:c.instructions+=2;goto B638f27;
case 0x638f29:c.instructions+=1;goto B638f29;
case 0x638f2b:goto L638f2b;
case 0x638f2d:c.instructions+=1;goto B638f2d;
case 0x638f32:goto L638f32;
case 0x638f36:c.instructions+=1;goto B638f36;
case 0x638f38:goto L638f38;
case 0x638f3c:c.instructions+=2;goto B638f3c;
case 0x638f3e:c.instructions+=1;goto B638f3e;
case 0x638f40:goto L638f40;
case 0x638f42:c.instructions+=1;goto B638f42;
case 0x638f47:goto L638f47;
case 0x638f4b:c.instructions+=1;goto B638f4b;
case 0x638f4d:goto L638f4d;
case 0x638f51:c.instructions+=2;goto B638f51;
case 0x638f53:c.instructions+=1;goto B638f53;
case 0x638f55:goto L638f55;
case 0x638f57:c.instructions+=1;goto B638f57;
case 0x638f5c:goto L638f5c;
case 0x638f60:c.instructions+=1;goto B638f60;
case 0x638f62:goto L638f62;
case 0x638f66:c.instructions+=2;goto B638f66;
case 0x638f68:c.instructions+=1;goto B638f68;
case 0x638f6a:goto L638f6a;
case 0x638f6f:goto L638f6f;
case 0x638f73:c.instructions+=1;goto B638f73;
case 0x638f75:goto L638f75;
case 0x638f79:c.instructions+=2;goto B638f79;
case 0x638f7b:c.instructions+=1;goto B638f7b;
case 0x638f7d:goto L638f7d;
case 0x638f7f:c.instructions+=1;goto B638f7f;
case 0x638f84:goto L638f84;
case 0x638f88:c.instructions+=1;goto B638f88;
case 0x638f8a:goto L638f8a;
case 0x638f8c:c.instructions+=1;goto B638f8c;
case 0x638f8e:goto L638f8e;
case 0x638f92:c.instructions+=1;goto B638f92;
case 0x638f94:goto L638f94;
case 0x638f95:c.instructions+=1;goto B638f95;
case 0x638f9a:goto L638f9a;
case 0x638f9d:c.instructions+=2;goto B638f9d;
case 0x638fa1:c.instructions+=1;goto B638fa1;
case 0x638fa3:goto L638fa3;
case 0x638fa5:c.instructions+=1;goto B638fa5;
case 0x638fa7:goto L638fa7;
case 0x638fab:c.instructions+=1;goto B638fab;
case 0x638fad:goto L638fad;
case 0x638fae:c.instructions+=1;goto B638fae;
case 0x638fb3:goto L638fb3;
case 0x638fb6:c.instructions+=2;goto B638fb6;
case 0x638fba:c.instructions+=1;goto B638fba;
case 0x638fbc:goto L638fbc;
case 0x638fc0:c.instructions+=1;goto B638fc0;
case 0x638fc2:goto L638fc2;
case 0x638fc6:c.instructions+=1;goto B638fc6;
case 0x638fc8:goto L638fc8;
case 0x638fcc:c.instructions+=2;goto B638fcc;
case 0x638fcd:c.instructions+=1;goto B638fcd;
case 0x638fd2:goto L638fd2;
case 0x638fd5:c.instructions+=2;goto B638fd5;
case 0x638fd9:c.instructions+=1;goto B638fd9;
case 0x638fdb:goto L638fdb;
case 0x638fdf:c.instructions+=1;goto B638fdf;
case 0x638fe1:goto L638fe1;
case 0x638fe5:c.instructions+=1;goto B638fe5;
case 0x638fe7:goto L638fe7;
case 0x638feb:c.instructions+=2;goto B638feb;
case 0x638fec:c.instructions+=1;goto B638fec;
case 0x638ff1:goto L638ff1;
case 0x638ff4:c.instructions+=2;goto B638ff4;
case 0x638ff8:c.instructions+=1;goto B638ff8;
case 0x638ffa:goto L638ffa;
case 0x638ffe:c.instructions+=1;goto B638ffe;
default:missing_instruction(c.pc);}
B638010:L638010:{c.instructions+=9;NFSU2_TR(0x638010);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638012:{NFSU2_TR(0x638012);
u8 U[4];
w4(U+0,u32(0x77a3dbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638017:{NFSU2_TR(0x638017);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63801d:{NFSU2_TR(0x63801d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63801e:{NFSU2_TR(0x63801e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638025:{NFSU2_TR(0x638025);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638026:{NFSU2_TR(0x638026);
__builtin_memmove((R+0),gp(0x8a1bcc),4);
}
B63802b:{NFSU2_TR(0x63802b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63802c:{NFSU2_TR(0x63802c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638031ull));
TAIL_STATIC(0x440e50u,440);
}
B638031:L638031:{c.instructions+=5;NFSU2_TR(0x638031);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B638034:{NFSU2_TR(0x638034);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B638038:{NFSU2_TR(0x638038);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63803a:{NFSU2_TR(0x63803a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B638042:{NFSU2_TR(0x638042);
if(r1(R+518)){{goto L638052;}}
}
B638044:L638044:{c.instructions+=4;NFSU2_TR(0x638044);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638048:{NFSU2_TR(0x638048);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638049:{NFSU2_TR(0x638049);
__builtin_memmove((R+4),(R+0),4);
}
B63804b:{NFSU2_TR(0x63804b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638050ull));
TAIL_STATIC(0x637f50u,637);
}
B638050:L638050:{c.instructions+=1;NFSU2_TR(0x638050);
{goto L638054;}
}
B638052:L638052:{c.instructions+=1;NFSU2_TR(0x638052);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B638054:L638054:{c.instructions+=5;NFSU2_TR(0x638054);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B63805a:{NFSU2_TR(0x63805a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63805e:{NFSU2_TR(0x63805e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638065:{NFSU2_TR(0x638065);
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
B638068:{NFSU2_TR(0x638068);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B638070:L638070:{c.instructions+=5;NFSU2_TR(0x638070);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638071:{NFSU2_TR(0x638071);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638072:{NFSU2_TR(0x638072);
__builtin_memmove((R+24),gp(0x8a2b50),4);
}
B638078:{NFSU2_TR(0x638078);
w4(R+4,u32(0x8a2b50ull));
}
B63807d:{NFSU2_TR(0x63807d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638082ull));
TAIL_STATIC(0x502fd0u,502);
}
B638082:L638082:{c.instructions+=3;NFSU2_TR(0x638082);
__builtin_memmove((R+12),(R+0),4);
}
B638084:{NFSU2_TR(0x638084);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B638086:{NFSU2_TR(0x638086);
if(r1(R+518)){{goto L6380b7;}}
}
B638088:L638088:{c.instructions+=2;NFSU2_TR(0x638088);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638089:{NFSU2_TR(0x638089);
__builtin_memmove((R+16),(R+16),4);
}
B638090:L638090:{c.instructions+=6;NFSU2_TR(0x638090);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B638092:{NFSU2_TR(0x638092);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638095:{NFSU2_TR(0x638095);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B638097:{NFSU2_TR(0x638097);
__builtin_memmove((R+4),(R+24),4);
}
B638099:{NFSU2_TR(0x638099);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63809c:{NFSU2_TR(0x63809c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6380a1ull));
TAIL_STATIC(0x634520u,634);
}
B6380a1:L6380a1:{c.instructions+=4;NFSU2_TR(0x6380a1);
__builtin_memmove((R+0),gp(0x8a1bcc),4);
}
B6380a6:{NFSU2_TR(0x6380a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6380a7:{NFSU2_TR(0x6380a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6380a8:{NFSU2_TR(0x6380a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6380adull));
TAIL_STATIC(0x43f920u,43f);
}
B6380ad:L6380ad:{c.instructions+=4;NFSU2_TR(0x6380ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6380b0:{NFSU2_TR(0x6380b0);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6380b2:{NFSU2_TR(0x6380b2);
__builtin_memmove((R+24),(R+28),4);
}
B6380b4:{NFSU2_TR(0x6380b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x638090u);}goto L638090;}}
}
B6380b6:L6380b6:{c.instructions+=1;NFSU2_TR(0x6380b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6380b7:L6380b7:{c.instructions+=3;NFSU2_TR(0x6380b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6380b8:{NFSU2_TR(0x6380b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6380b9:{NFSU2_TR(0x6380b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6380c0:L6380c0:{c.instructions+=7;NFSU2_TR(0x6380c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6380c3:{NFSU2_TR(0x6380c3);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6380c7:{NFSU2_TR(0x6380c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6380ca:{NFSU2_TR(0x6380ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6380cd:{NFSU2_TR(0x6380cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6380d3:{NFSU2_TR(0x6380d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6380d7:{NFSU2_TR(0x6380d7);
TAIL_STATIC(0x636840u,636);
}
B6380e0:L6380e0:{c.instructions+=12;NFSU2_TR(0x6380e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6380e2:{NFSU2_TR(0x6380e2);
u8 U[4];
w4(U+0,u32(0x77a5ebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6380e7:{NFSU2_TR(0x6380e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6380ed:{NFSU2_TR(0x6380ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6380ee:{NFSU2_TR(0x6380ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6380f5:{NFSU2_TR(0x6380f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6380f6:{NFSU2_TR(0x6380f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6380f7:{NFSU2_TR(0x6380f7);
__builtin_memmove((R+24),(R+4),4);
}
B6380f9:{NFSU2_TR(0x6380f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6380fa:{NFSU2_TR(0x6380fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6380fe:{NFSU2_TR(0x6380fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B638106:{NFSU2_TR(0x638106);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63810bull));
TAIL_STATIC(0x4022c0u,402);
}
B63810b:L63810b:{c.instructions+=3;NFSU2_TR(0x63810b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63810e:{NFSU2_TR(0x63810e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B638110:{NFSU2_TR(0x638110);
if(r1(R+518)){{goto L638129;}}
}
B638112:L638112:{c.instructions+=2;NFSU2_TR(0x638112);
__builtin_memmove((R+4),(R+28),4);
}
B638114:{NFSU2_TR(0x638114);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638119ull));
TAIL_STATIC(0x634630u,634);
}
B638119:L638119:{c.instructions+=2;NFSU2_TR(0x638119);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63811a:{NFSU2_TR(0x63811a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63811full));
TAIL_STATIC(0x575630u,575);
}
B63811f:L63811f:{c.instructions+=2;NFSU2_TR(0x63811f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B638122:{NFSU2_TR(0x638122);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B638129:L638129:{c.instructions+=3;NFSU2_TR(0x638129);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63812f:{NFSU2_TR(0x63812f);
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
B638131:{NFSU2_TR(0x638131);
if(r1(R+518)){{goto L638153;}}
}
B638133:L638133:{c.instructions+=2;NFSU2_TR(0x638133);
__builtin_memmove((R+4),(R+28),4);
}
B638135:{NFSU2_TR(0x638135);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63813aull));
TAIL_STATIC(0x4903b0u,490);
}
B63813a:L63813a:{c.instructions+=4;NFSU2_TR(0x63813a);
__builtin_memmove((R+0),gp(0x82da88),4);
}
B63813f:{NFSU2_TR(0x63813f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638140:{NFSU2_TR(0x638140);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638141:{NFSU2_TR(0x638141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638146ull));
TAIL_STATIC(0x43f920u,43f);
}
B638146:L638146:{c.instructions+=2;NFSU2_TR(0x638146);
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
B638149:{NFSU2_TR(0x638149);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb60ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B638153:L638153:{c.instructions+=7;NFSU2_TR(0x638153);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638156:{NFSU2_TR(0x638156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B638158:{NFSU2_TR(0x638158);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63815a:{NFSU2_TR(0x63815a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63815d:{NFSU2_TR(0x63815d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x394ull))));
__builtin_memmove((R+4),(U+0),4);
}
B638163:{NFSU2_TR(0x638163);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B63816b:{NFSU2_TR(0x63816b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638170ull));
TAIL_STATIC(0x4022c0u,402);
}
B638170:L638170:{c.instructions+=6;NFSU2_TR(0x638170);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638174:{NFSU2_TR(0x638174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B638175:{NFSU2_TR(0x638175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B638176:{NFSU2_TR(0x638176);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63817d:{NFSU2_TR(0x63817d);
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
B638180:{NFSU2_TR(0x638180);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B638190:L638190:{c.instructions+=26;NFSU2_TR(0x638190);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638191:{NFSU2_TR(0x638191);
__builtin_memmove((R+20),(R+16),4);
}
B638193:{NFSU2_TR(0x638193);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B638196:{NFSU2_TR(0x638196);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638198:{NFSU2_TR(0x638198);
u8 U[4];
w4(U+0,u32(0x77a4b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63819d:{NFSU2_TR(0x63819d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6381a3:{NFSU2_TR(0x6381a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6381a4:{NFSU2_TR(0x6381a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6381ab:{NFSU2_TR(0x6381ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2d8ull))));
}
B6381b1:{NFSU2_TR(0x6381b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6381b2:{NFSU2_TR(0x6381b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6381b3:{NFSU2_TR(0x6381b3);
__builtin_memmove((R+24),(R+4),4);
}
B6381b5:{NFSU2_TR(0x6381b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3f0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6381bb:{NFSU2_TR(0x6381bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6381bc:{NFSU2_TR(0x6381bc);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6381c3:{NFSU2_TR(0x6381c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6381c5:{NFSU2_TR(0x6381c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6381c8:{NFSU2_TR(0x6381c8);
u8 U[4];
w4(U+0,u32(0x4367c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6381cd:{NFSU2_TR(0x6381cd);
u8 U[4];
w4(U+0,u32(0x598750ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6381d2:{NFSU2_TR(0x6381d2);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6381d4:{NFSU2_TR(0x6381d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x458ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6381da:{NFSU2_TR(0x6381da);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6381dc:{NFSU2_TR(0x6381dc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6381de:{NFSU2_TR(0x6381de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6381df:{NFSU2_TR(0x6381df);
u8 U[8];
w4(U+0,u32(u32(u32(0x300ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6381e6:{NFSU2_TR(0x6381e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6381ebull));
TAIL_STATIC(0x75c461u,75c);
}
B6381eb:L6381eb:{c.instructions+=8;NFSU2_TR(0x6381eb);
u8 U[4];
w4(U+0,u32(0x61f470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6381f0:{NFSU2_TR(0x6381f0);
u8 U[4];
w4(U+0,u32(0x57bcd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6381f5:{NFSU2_TR(0x6381f5);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6381f7:{NFSU2_TR(0x6381f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x548ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6381fd:{NFSU2_TR(0x6381fd);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6381ff:{NFSU2_TR(0x6381ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638200:{NFSU2_TR(0x638200);
u8 U[5];
w4(U+0,u32(u32(u32(0x300ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B638208:{NFSU2_TR(0x638208);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63820dull));
TAIL_STATIC(0x75c461u,75c);
}
B63820d:L63820d:{c.instructions+=2;NFSU2_TR(0x63820d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x638ull))));
__builtin_memmove((R+0),(U+0),4);
}
B638213:{NFSU2_TR(0x638213);
w4(R+4,u32(0x49ull));
}
B638218:L638218:{c.instructions+=7;NFSU2_TR(0x638218);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63821a:{NFSU2_TR(0x63821a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63821d:{NFSU2_TR(0x63821d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638220:{NFSU2_TR(0x638220);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638223:{NFSU2_TR(0x638223);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B638226:{NFSU2_TR(0x638226);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B638227:{NFSU2_TR(0x638227);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x638218u);}goto L638218;}}
}
B638229:L638229:{c.instructions+=2;NFSU2_TR(0x638229);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xac8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63822f:{NFSU2_TR(0x63822f);
w4(R+4,u32(0x49ull));
}
B638234:L638234:{c.instructions+=7;NFSU2_TR(0x638234);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B638236:{NFSU2_TR(0x638236);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638239:{NFSU2_TR(0x638239);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63823c:{NFSU2_TR(0x63823c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63823f:{NFSU2_TR(0x63823f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B638242:{NFSU2_TR(0x638242);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B638243:{NFSU2_TR(0x638243);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x638234u);}goto L638234;}}
}
B638245:L638245:{c.instructions+=2;NFSU2_TR(0x638245);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63824b:{NFSU2_TR(0x63824b);
w4(R+4,u32(0x49ull));
}
B638250:L638250:{c.instructions+=7;NFSU2_TR(0x638250);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B638252:{NFSU2_TR(0x638252);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638255:{NFSU2_TR(0x638255);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638258:{NFSU2_TR(0x638258);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63825b:{NFSU2_TR(0x63825b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B63825e:{NFSU2_TR(0x63825e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B63825f:{NFSU2_TR(0x63825f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x638250u);}goto L638250;}}
}
B638261:L638261:{c.instructions+=3;NFSU2_TR(0x638261);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13e8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B638267:{NFSU2_TR(0x638267);
w4(R+4,u32(0x38ull));
}
B63826c:{NFSU2_TR(0x63826c);
__builtin_memmove((R+16),(R+16),4);
}
B638270:L638270:{c.instructions+=7;NFSU2_TR(0x638270);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B638272:{NFSU2_TR(0x638272);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638275:{NFSU2_TR(0x638275);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638278:{NFSU2_TR(0x638278);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63827b:{NFSU2_TR(0x63827b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B63827e:{NFSU2_TR(0x63827e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B63827f:{NFSU2_TR(0x63827f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x638270u);}goto L638270;}}
}
B638281:L638281:{c.instructions+=3;NFSU2_TR(0x638281);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1768ull))));
__builtin_memmove((R+0),(U+0),4);
}
B638287:{NFSU2_TR(0x638287);
w4(R+4,u32(0x2ull));
}
B63828c:{NFSU2_TR(0x63828c);
__builtin_memmove((R+16),(R+16),4);
}
B638290:L638290:{c.instructions+=7;NFSU2_TR(0x638290);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B638292:{NFSU2_TR(0x638292);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638295:{NFSU2_TR(0x638295);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638298:{NFSU2_TR(0x638298);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63829b:{NFSU2_TR(0x63829b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B63829e:{NFSU2_TR(0x63829e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B63829f:{NFSU2_TR(0x63829f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x638290u);}goto L638290;}}
}
B6382a1:L6382a1:{c.instructions+=3;NFSU2_TR(0x6382a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1788ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6382a7:{NFSU2_TR(0x6382a7);
w4(R+4,u32(0x2ull));
}
B6382ac:{NFSU2_TR(0x6382ac);
__builtin_memmove((R+16),(R+16),4);
}
B6382b0:L6382b0:{c.instructions+=7;NFSU2_TR(0x6382b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6382b2:{NFSU2_TR(0x6382b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6382b5:{NFSU2_TR(0x6382b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6382b8:{NFSU2_TR(0x6382b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6382bb:{NFSU2_TR(0x6382bb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6382be:{NFSU2_TR(0x6382be);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6382bf:{NFSU2_TR(0x6382bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6382b0u);}goto L6382b0;}}
}
B6382c1:L6382c1:{c.instructions+=13;NFSU2_TR(0x6382c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6382c7:{NFSU2_TR(0x6382c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6382c9:{NFSU2_TR(0x6382c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6382cc:{NFSU2_TR(0x6382cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fb0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6382d6:{NFSU2_TR(0x6382d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f90ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6382dd:{NFSU2_TR(0x6382dd);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6382e2:{NFSU2_TR(0x6382e2);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6382e7:{NFSU2_TR(0x6382e7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6382e9:{NFSU2_TR(0x6382e9);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6382eb:{NFSU2_TR(0x6382eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6382f1:{NFSU2_TR(0x6382f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6382f2:{NFSU2_TR(0x6382f2);
u8 U[5];
w4(U+0,u32(u32(u32(0x300ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6382fa:{NFSU2_TR(0x6382fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6382ffull));
TAIL_STATIC(0x75c461u,75c);
}
B6382ff:L6382ff:{c.instructions+=8;NFSU2_TR(0x6382ff);
u8 U[4];
w4(U+0,u32(0x4903b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638304:{NFSU2_TR(0x638304);
u8 U[4];
w4(U+0,u32(0x4afaf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638309:{NFSU2_TR(0x638309);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63830b:{NFSU2_TR(0x63830b);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63830d:{NFSU2_TR(0x63830d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B638313:{NFSU2_TR(0x638313);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638314:{NFSU2_TR(0x638314);
u8 U[5];
w4(U+0,u32(u32(u32(0x300ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B63831c:{NFSU2_TR(0x63831c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638321ull));
TAIL_STATIC(0x75c461u,75c);
}
B638321:L638321:{c.instructions+=8;NFSU2_TR(0x638321);
u8 U[4];
w4(U+0,u32(0x4903b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638326:{NFSU2_TR(0x638326);
u8 U[4];
w4(U+0,u32(0x4afaf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63832b:{NFSU2_TR(0x63832b);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63832d:{NFSU2_TR(0x63832d);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63832f:{NFSU2_TR(0x63832f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2274ull))));
__builtin_memmove((R+8),(U+0),4);
}
B638335:{NFSU2_TR(0x638335);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638336:{NFSU2_TR(0x638336);
u8 U[5];
w4(U+0,u32(u32(u32(0x300ull))+u32(r4(R+16))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B63833e:{NFSU2_TR(0x63833e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638343ull));
TAIL_STATIC(0x75c461u,75c);
}
B638343:L638343:{c.instructions+=8;NFSU2_TR(0x638343);
u8 U[4];
w4(U+0,u32(0x4903b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638348:{NFSU2_TR(0x638348);
u8 U[4];
w4(U+0,u32(0x4afaf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63834d:{NFSU2_TR(0x63834d);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63834f:{NFSU2_TR(0x63834f);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638351:{NFSU2_TR(0x638351);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b74ull))));
__builtin_memmove((R+0),(U+0),4);
}
B638357:{NFSU2_TR(0x638357);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638358:{NFSU2_TR(0x638358);
u8 U[5];
w4(U+0,u32(u32(u32(0x300ull))+u32(r4(R+16))));
w1(U+4,u8(0x6ull));
s1(u32(r4(U+0)),r1(U+4));
}
B638360:{NFSU2_TR(0x638360);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638365ull));
TAIL_STATIC(0x75c461u,75c);
}
B638365:L638365:{c.instructions+=5;NFSU2_TR(0x638365);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B638368:{NFSU2_TR(0x638368);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d44ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63836e:{NFSU2_TR(0x63836e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B638370:{NFSU2_TR(0x638370);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d60ull))));
__builtin_memmove((R+28),(U+0),4);
}
B638376:{NFSU2_TR(0x638376);
w4(R+4,u32(0x58ull));
}
B63837b:L63837b:{c.instructions+=1;NFSU2_TR(0x63837b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L63837d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63837bu);}goto L63837b;}
}
B63837d:L63837d:{c.instructions+=7;NFSU2_TR(0x63837d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638380:{NFSU2_TR(0x638380);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638382:{NFSU2_TR(0x638382);
u8 U[5];
w4(U+0,u32(u32(u32(0x2f0ull))+u32(r4(R+16))));
w1(U+4,u8(0x7ull));
s1(u32(r4(U+0)),r1(U+4));
}
B63838a:{NFSU2_TR(0x63838a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w2(U+4,u16(0xffffull));
s2(u32(r4(U+0)),r2(U+4));
}
B638390:{NFSU2_TR(0x638390);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B638392:{NFSU2_TR(0x638392);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638395:{NFSU2_TR(0x638395);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63839aull));
TAIL_STATIC(0x43c1c0u,43c);
}
B63839a:L63839a:{c.instructions+=13;NFSU2_TR(0x63839a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6383a0:{NFSU2_TR(0x6383a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6383a3:{NFSU2_TR(0x6383a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6383a5:{NFSU2_TR(0x6383a5);
__builtin_memmove((R+28),gp(0x8a1ccc),4);
}
B6383ab:{NFSU2_TR(0x6383ab);
__builtin_memmove((R+8),(R+4),4);
}
B6383ad:{NFSU2_TR(0x6383ad);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6383b3:{NFSU2_TR(0x6383b3);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6383b5:{NFSU2_TR(0x6383b5);
__builtin_memmove((R+28),gp(0x8a1cd8),4);
}
B6383bb:{NFSU2_TR(0x6383bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6383be:{NFSU2_TR(0x6383be);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6383c0:{NFSU2_TR(0x6383c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6383c4:{NFSU2_TR(0x6383c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6383c8:{NFSU2_TR(0x6383c8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L638405;}}
}
B6383ca:L6383ca:{c.instructions+=2;NFSU2_TR(0x6383ca);
__builtin_memmove((R+28),gp(0x8a1cd4),4);
}
B6383d0:{NFSU2_TR(0x6383d0);
{goto L6383e0;}
}
B6383d2:L6383d2:{c.instructions+=3;NFSU2_TR(0x6383d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6383d6:{NFSU2_TR(0x6383d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6383da:{NFSU2_TR(0x6383da);
__builtin_memmove((R+12),(R+12),4);
}
B6383e0:L6383e0:{c.instructions+=2;NFSU2_TR(0x6383e0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6383e2:{NFSU2_TR(0x6383e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6383ed;}}
}
B6383e4:L6383e4:{c.instructions+=3;NFSU2_TR(0x6383e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B6383e8:{NFSU2_TR(0x6383e8);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6383eb:{NFSU2_TR(0x6383eb);
if(r1(R+518)){{goto L638405;}}
}
B6383ed:L6383ed:{c.instructions+=7;NFSU2_TR(0x6383ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6383f1:{NFSU2_TR(0x6383f1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B6383f4:{NFSU2_TR(0x6383f4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6383f5:{NFSU2_TR(0x6383f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6383f9:{NFSU2_TR(0x6383f9);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a1cd8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6383ff:{NFSU2_TR(0x6383ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638403:{NFSU2_TR(0x638403);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6383d2u);}goto L6383d2;}}
}
B638405:L638405:{c.instructions+=12;NFSU2_TR(0x638405);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x844ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63840b:{NFSU2_TR(0x63840b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B63840d:{NFSU2_TR(0x63840d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B638410:{NFSU2_TR(0x638410);
__builtin_memmove((R+4),(R+518),1);
}
B638413:{NFSU2_TR(0x638413);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B638416:{NFSU2_TR(0x638416);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63841a:{NFSU2_TR(0x63841a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63841c:{NFSU2_TR(0x63841c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17a8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B638422:{NFSU2_TR(0x638422);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638423:{NFSU2_TR(0x638423);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638424:{NFSU2_TR(0x638424);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638428:{NFSU2_TR(0x638428);
w4(R+4,u32(0x1f8ull));
}
B63842d:L63842d:{c.instructions+=1;NFSU2_TR(0x63842d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L63842f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63842du);}goto L63842d;}
}
B63842f:L63842f:{c.instructions+=15;NFSU2_TR(0x63842f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638432:{NFSU2_TR(0x638432);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B638435:{NFSU2_TR(0x638435);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638436:{NFSU2_TR(0x638436);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B638439:{NFSU2_TR(0x638439);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63843a:{NFSU2_TR(0x63843a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638440:{NFSU2_TR(0x638440);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638446:{NFSU2_TR(0x638446);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63844c:{NFSU2_TR(0x63844c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3bcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638452:{NFSU2_TR(0x638452);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3c0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638458:{NFSU2_TR(0x638458);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3c4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63845e:{NFSU2_TR(0x63845e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3c8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638464:{NFSU2_TR(0x638464);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d49ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B63846b:{NFSU2_TR(0x63846b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d4aull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B638472:{NFSU2_TR(0x638472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638477ull));
TAIL_STATIC(0x631e20u,631);
}
B638477:L638477:{c.instructions+=73;NFSU2_TR(0x638477);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63847d:{NFSU2_TR(0x63847d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B638483:{NFSU2_TR(0x638483);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638489:{NFSU2_TR(0x638489);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x638ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63848f:{NFSU2_TR(0x63848f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638495:{NFSU2_TR(0x638495);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x648ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63849b:{NFSU2_TR(0x63849b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x27cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6384a1:{NFSU2_TR(0x6384a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x658ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6384a7:{NFSU2_TR(0x6384a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6384ad:{NFSU2_TR(0x6384ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x688ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6384b3:{NFSU2_TR(0x6384b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x288ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6384b9:{NFSU2_TR(0x6384b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x698ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6384bf:{NFSU2_TR(0x6384bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6384c5:{NFSU2_TR(0x6384c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6384cb:{NFSU2_TR(0x6384cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x290ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6384d1:{NFSU2_TR(0x6384d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6384d7:{NFSU2_TR(0x6384d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6384dd:{NFSU2_TR(0x6384dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6c8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6384e3:{NFSU2_TR(0x6384e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x294ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6384e9:{NFSU2_TR(0x6384e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6d8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6384ef:{NFSU2_TR(0x6384ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6384f5:{NFSU2_TR(0x6384f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6384fb:{NFSU2_TR(0x6384fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638501:{NFSU2_TR(0x638501);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B638504:{NFSU2_TR(0x638504);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x668ull))));
w4(U+4,u32(0xa7366ae6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63850e:{NFSU2_TR(0x63850e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x678ull))));
w4(U+4,u32(0x3c84d757ull));
s4(u32(r4(U+0)),r4(U+4));
}
B638518:{NFSU2_TR(0x638518);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
w4(U+4,u32(0x5799e60bull));
s4(u32(r4(U+0)),r4(U+4));
}
B638522:{NFSU2_TR(0x638522);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x708ull))));
w4(U+4,u32(0x7b220ddfull));
s4(u32(r4(U+0)),r4(U+4));
}
B63852c:{NFSU2_TR(0x63852c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x718ull))));
w4(U+4,u32(0x1b0763a0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B638536:{NFSU2_TR(0x638536);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x728ull))));
w4(U+4,u32(0xe7e4ef49ull));
s4(u32(r4(U+0)),r4(U+4));
}
B638540:{NFSU2_TR(0x638540);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x738ull))));
w4(U+4,u32(0x4cdebfcaull));
s4(u32(r4(U+0)),r4(U+4));
}
B63854a:{NFSU2_TR(0x63854a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x748ull))));
w4(U+4,u32(0x60f8b13cull));
s4(u32(r4(U+0)),r4(U+4));
}
B638554:{NFSU2_TR(0x638554);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x758ull))));
w4(U+4,u32(0xab88f5dull));
s4(u32(r4(U+0)),r4(U+4));
}
B63855e:{NFSU2_TR(0x63855e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x768ull))));
w4(U+4,u32(0xd195be56ull));
s4(u32(r4(U+0)),r4(U+4));
}
B638568:{NFSU2_TR(0x638568);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x778ull))));
w4(U+4,u32(0x90e09671ull));
s4(u32(r4(U+0)),r4(U+4));
}
B638572:{NFSU2_TR(0x638572);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x788ull))));
w4(U+4,u32(0x13ee21f2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63857c:{NFSU2_TR(0x63857c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x798ull))));
w4(U+4,u32(0xd689a31bull));
s4(u32(r4(U+0)),r4(U+4));
}
B638586:{NFSU2_TR(0x638586);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a8ull))));
w4(U+4,u32(0xb8f3415cull));
s4(u32(r4(U+0)),r4(U+4));
}
B638590:{NFSU2_TR(0x638590);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7b8ull))));
w4(U+4,u32(0x2433df4eull));
s4(u32(r4(U+0)),r4(U+4));
}
B63859a:{NFSU2_TR(0x63859a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7c8ull))));
w4(U+4,u32(0xf95d432full));
s4(u32(r4(U+0)),r4(U+4));
}
B6385a4:{NFSU2_TR(0x6385a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7d8ull))));
w4(U+4,u32(0xa7e6ea53ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6385ae:{NFSU2_TR(0x6385ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7e8ull))));
w4(U+4,u32(0xa532fc46ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6385b8:{NFSU2_TR(0x6385b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7f8ull))));
w4(U+4,u32(0xd947f346ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6385c2:{NFSU2_TR(0x6385c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x808ull))));
w4(U+4,u32(0x2b52399ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6385cc:{NFSU2_TR(0x6385cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x818ull))));
w4(U+4,u32(0x3617dcfcull));
s4(u32(r4(U+0)),r4(U+4));
}
B6385d6:{NFSU2_TR(0x6385d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x828ull))));
w4(U+4,u32(0x267d188cull));
s4(u32(r4(U+0)),r4(U+4));
}
B6385e0:{NFSU2_TR(0x6385e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x838ull))));
w4(U+4,u32(0xf68ef19full));
s4(u32(r4(U+0)),r4(U+4));
}
B6385ea:{NFSU2_TR(0x6385ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x848ull))));
w4(U+4,u32(0xbcbbfull));
s4(u32(r4(U+0)),r4(U+4));
}
B6385f4:{NFSU2_TR(0x6385f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x858ull))));
w4(U+4,u32(0x1f40b32ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6385fe:{NFSU2_TR(0x6385fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x868ull))));
w4(U+4,u32(0x1d33b7b5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B638608:{NFSU2_TR(0x638608);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x878ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63860e:{NFSU2_TR(0x63860e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x888ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638614:{NFSU2_TR(0x638614);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x898ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63861a:{NFSU2_TR(0x63861a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B638620:{NFSU2_TR(0x638620);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638626:{NFSU2_TR(0x638626);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63862c:{NFSU2_TR(0x63862c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8a8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638632:{NFSU2_TR(0x638632);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B638638:{NFSU2_TR(0x638638);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63863e:{NFSU2_TR(0x63863e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638644:{NFSU2_TR(0x638644);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63864a:{NFSU2_TR(0x63864a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638650:{NFSU2_TR(0x638650);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8d8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638656:{NFSU2_TR(0x638656);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63865c:{NFSU2_TR(0x63865c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638662:{NFSU2_TR(0x638662);
w4(R+4,u32(0x17f9f794ull));
}
B638667:{NFSU2_TR(0x638667);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8e8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63866d:{NFSU2_TR(0x63866d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x908ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638673:{NFSU2_TR(0x638673);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1768ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638679:{NFSU2_TR(0x638679);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x176cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63867f:{NFSU2_TR(0x63867f);
w4(R+0,u32(0x85e9c79eull));
}
B638684:{NFSU2_TR(0x638684);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B638686:{NFSU2_TR(0x638686);
if(r1(R+518)){{goto L638698;}}
}
B638688:L638688:{c.instructions+=2;NFSU2_TR(0x638688);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x176cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63868e:{NFSU2_TR(0x63868e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1770ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B638698:L638698:{c.instructions+=5;NFSU2_TR(0x638698);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63869e:{NFSU2_TR(0x63869e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1778ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6386a4:{NFSU2_TR(0x6386a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1788ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6386aa:{NFSU2_TR(0x6386aa);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6386b0:{NFSU2_TR(0x6386b0);
if(r1(R+518)){{goto L6386c2;}}
}
B6386b2:L6386b2:{c.instructions+=2;NFSU2_TR(0x6386b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6386b8:{NFSU2_TR(0x6386b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1790ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6386c2:L6386c2:{c.instructions+=6;NFSU2_TR(0x6386c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6386c8:{NFSU2_TR(0x6386c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6386cb:{NFSU2_TR(0x6386cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1798ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6386d1:{NFSU2_TR(0x6386d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6386d2:{NFSU2_TR(0x6386d2);
__builtin_memmove((R+4),(R+24),4);
}
B6386d4:{NFSU2_TR(0x6386d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6386d9ull));
TAIL_STATIC(0x636840u,636);
}
B6386d9:L6386d9:{c.instructions+=2;NFSU2_TR(0x6386d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6386df:{NFSU2_TR(0x6386df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6386e4ull));
TAIL_STATIC(0x570a30u,570);
}
B6386e4:L6386e4:{c.instructions+=4;NFSU2_TR(0x6386e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6386e7:{NFSU2_TR(0x6386e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fa74cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6386ee:{NFSU2_TR(0x6386ee);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6386f0:{NFSU2_TR(0x6386f0);
if(r1(R+518)){{goto L638710;}}
}
B6386f2:L6386f2:{c.instructions+=3;NFSU2_TR(0x6386f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6386f3:{NFSU2_TR(0x6386f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6386f4:{NFSU2_TR(0x6386f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6386f9ull));
TAIL_STATIC(0x43db80u,43d);
}
B6386f9:L6386f9:{c.instructions+=5;NFSU2_TR(0x6386f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6386fa:{NFSU2_TR(0x6386fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6386fb:{NFSU2_TR(0x6386fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6386fc:{NFSU2_TR(0x6386fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638700:{NFSU2_TR(0x638700);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638705ull));
TAIL_STATIC(0x4901d0u,490);
}
B638705:L638705:{c.instructions+=3;NFSU2_TR(0x638705);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B638708:{NFSU2_TR(0x638708);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63870a:{NFSU2_TR(0x63870a);
if(r1(R+518)){{goto L638710;}}
}
B63870c:L63870c:{c.instructions+=1;NFSU2_TR(0x63870c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B638710:L638710:{c.instructions+=4;NFSU2_TR(0x638710);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638711:{NFSU2_TR(0x638711);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638712:{NFSU2_TR(0x638712);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638713:{NFSU2_TR(0x638713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638718ull));
TAIL_STATIC(0x4901d0u,490);
}
B638718:L638718:{c.instructions+=3;NFSU2_TR(0x638718);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B63871b:{NFSU2_TR(0x63871b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63871d:{NFSU2_TR(0x63871d);
if(r1(R+518)){{goto L638723;}}
}
B63871f:L63871f:{c.instructions+=1;NFSU2_TR(0x63871f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B638723:L638723:{c.instructions+=2;NFSU2_TR(0x638723);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B638729:{NFSU2_TR(0x638729);
if(r1(R+518)){{goto L63873b;}}
}
B63872b:L63872b:{c.instructions+=2;NFSU2_TR(0x63872b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638731:{NFSU2_TR(0x638731);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x690ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B63873b:L63873b:{c.instructions+=2;NFSU2_TR(0x63873b);
__builtin_memmove((R+4),(R+24),4);
}
B63873d:{NFSU2_TR(0x63873d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638742ull));
TAIL_STATIC(0x615280u,615);
}
B638742:L638742:{c.instructions+=4;NFSU2_TR(0x638742);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638745:{NFSU2_TR(0x638745);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638746:{NFSU2_TR(0x638746);
__builtin_memmove((R+4),(R+24),4);
}
B638748:{NFSU2_TR(0x638748);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63874dull));
TAIL_STATIC(0x61ff40u,61f);
}
B63874d:L63874d:{c.instructions+=11;NFSU2_TR(0x63874d);
__builtin_memmove((R+4),gp(0x8654a4),4);
}
B638753:{NFSU2_TR(0x638753);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B638755:{NFSU2_TR(0x638755);
w4(R+28,u32(0x3ull));
}
B63875a:{NFSU2_TR(0x63875a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63875c:{NFSU2_TR(0x63875c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638762:{NFSU2_TR(0x638762);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B638765:{NFSU2_TR(0x638765);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B638766:{NFSU2_TR(0x638766);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xc4547ac1ull))));
}
B63876b:{NFSU2_TR(0x63876b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa244d489ull))));
}
B638770:{NFSU2_TR(0x638770);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B638772:{NFSU2_TR(0x638772);
if(r1(R+518)){{goto L638784;}}
}
B638774:L638774:{c.instructions+=2;NFSU2_TR(0x638774);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63877a:{NFSU2_TR(0x63877a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f0ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B638784:L638784:{c.instructions+=3;NFSU2_TR(0x638784);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63878a:{NFSU2_TR(0x63878a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c64ull))));
__builtin_memmove((R+0),(U+0),4);
}
B638790:{NFSU2_TR(0x638790);
w4(R+4,u32(0x12ull));
}
B638795:L638795:{c.instructions+=7;NFSU2_TR(0x638795);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638798:{NFSU2_TR(0x638798);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63879a:{NFSU2_TR(0x63879a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63879d:{NFSU2_TR(0x63879d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6387a3:{NFSU2_TR(0x6387a3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6387a6:{NFSU2_TR(0x6387a6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6387a7:{NFSU2_TR(0x6387a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x638795u);}goto L638795;}}
}
B6387a9:L6387a9:{c.instructions+=7;NFSU2_TR(0x6387a9);
__builtin_memmove((R+4),(R+24),4);
}
B6387ab:{NFSU2_TR(0x6387ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x354ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6387b1:{NFSU2_TR(0x6387b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x358ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6387b7:{NFSU2_TR(0x6387b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x364ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6387bd:{NFSU2_TR(0x6387bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x370ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6387c3:{NFSU2_TR(0x6387c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x37cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6387c9:{NFSU2_TR(0x6387c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6387ceull));
TAIL_STATIC(0x634800u,634);
}
B6387ce:L6387ce:{c.instructions+=2;NFSU2_TR(0x6387ce);
u8 U[14];
__builtin_memmove((U+6),gp(0x8654a4),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6387d4:{NFSU2_TR(0x6387d4);
if(r1(R+518)){{goto L638800;}}
}
B6387d6:L6387d6:{c.instructions+=1;NFSU2_TR(0x6387d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6387dbull));
TAIL_STATIC(0x510c30u,510);
}
B6387db:L6387db:{c.instructions+=2;NFSU2_TR(0x6387db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6387dd:{NFSU2_TR(0x6387dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L638800;}}
}
B6387df:L6387df:{c.instructions+=6;NFSU2_TR(0x6387df);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6387e3:{NFSU2_TR(0x6387e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6387e4:{NFSU2_TR(0x6387e4);
u8 U[4];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6387eb:{NFSU2_TR(0x6387eb);
u8 U[4];
w4(U+0,u32(0x7a8d48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6387f0:{NFSU2_TR(0x6387f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6387f1:{NFSU2_TR(0x6387f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6387f6ull));
TAIL_STATIC(0x4400d0u,440);
}
B6387f6:L6387f6:{c.instructions+=3;NFSU2_TR(0x6387f6);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6387fd:{NFSU2_TR(0x6387fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6387fe:{NFSU2_TR(0x6387fe);
{goto L63881f;}
}
B638800:L638800:{c.instructions+=6;NFSU2_TR(0x638800);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B638804:{NFSU2_TR(0x638804);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638805:{NFSU2_TR(0x638805);
u8 U[4];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B63880c:{NFSU2_TR(0x63880c);
u8 U[4];
w4(U+0,u32(0x7a8d3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638811:{NFSU2_TR(0x638811);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638812:{NFSU2_TR(0x638812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638817ull));
TAIL_STATIC(0x4400d0u,440);
}
B638817:L638817:{c.instructions+=2;NFSU2_TR(0x638817);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63881e:{NFSU2_TR(0x63881e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63881f:L63881f:{c.instructions+=1;NFSU2_TR(0x63881f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638824ull));
TAIL_STATIC(0x43db50u,43d);
}
B638824:L638824:{c.instructions+=4;NFSU2_TR(0x638824);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638825:{NFSU2_TR(0x638825);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638826:{NFSU2_TR(0x638826);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638827:{NFSU2_TR(0x638827);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63882cull));
TAIL_STATIC(0x4901d0u,490);
}
B63882c:L63882c:{c.instructions+=7;NFSU2_TR(0x63882c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B63882f:{NFSU2_TR(0x63882f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638830:{NFSU2_TR(0x638830);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638836:{NFSU2_TR(0x638836);
u8 U[4];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63883d:{NFSU2_TR(0x63883d);
u8 U[4];
w4(U+0,u32(0x7a88f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638842:{NFSU2_TR(0x638842);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638843:{NFSU2_TR(0x638843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638848ull));
TAIL_STATIC(0x4400d0u,440);
}
B638848:L638848:{c.instructions+=3;NFSU2_TR(0x638848);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B63884f:{NFSU2_TR(0x63884f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638850:{NFSU2_TR(0x638850);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638855ull));
TAIL_STATIC(0x43db50u,43d);
}
B638855:L638855:{c.instructions+=4;NFSU2_TR(0x638855);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638856:{NFSU2_TR(0x638856);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638857:{NFSU2_TR(0x638857);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638858:{NFSU2_TR(0x638858);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63885dull));
TAIL_STATIC(0x4901d0u,490);
}
B63885d:L63885d:{c.instructions+=6;NFSU2_TR(0x63885d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B638860:{NFSU2_TR(0x638860);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638861:{NFSU2_TR(0x638861);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638863:{NFSU2_TR(0x638863);
u8 U[4];
w4(U+0,u32(0x7a8d30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638868:{NFSU2_TR(0x638868);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63886e:{NFSU2_TR(0x63886e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638873ull));
TAIL_STATIC(0x43db50u,43d);
}
B638873:L638873:{c.instructions+=3;NFSU2_TR(0x638873);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B638876:{NFSU2_TR(0x638876);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638877:{NFSU2_TR(0x638877);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63887cull));
TAIL_STATIC(0x4901d0u,490);
}
B63887c:L63887c:{c.instructions+=5;NFSU2_TR(0x63887c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63887d:{NFSU2_TR(0x63887d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63887e:{NFSU2_TR(0x63887e);
u8 U[4];
w4(U+0,u32(0xbadb4475ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638883:{NFSU2_TR(0x638883);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x348ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638889:{NFSU2_TR(0x638889);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63888eull));
TAIL_STATIC(0x4901d0u,490);
}
B63888e:L63888e:{c.instructions+=5;NFSU2_TR(0x63888e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x340ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638894:{NFSU2_TR(0x638894);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63889a:{NFSU2_TR(0x63889a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B63889d:{NFSU2_TR(0x63889d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63889f:{NFSU2_TR(0x63889f);
if(r1(R+518)){{goto L6388af;}}
}
B6388a1:L6388a1:{c.instructions+=3;NFSU2_TR(0x6388a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6388a5:{NFSU2_TR(0x6388a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6388ab:{NFSU2_TR(0x6388ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x51ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6388af:L6388af:{c.instructions+=3;NFSU2_TR(0x6388af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x340ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6388b5:{NFSU2_TR(0x6388b5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6388b7:{NFSU2_TR(0x6388b7);
if(r1(R+518)){{goto L6388c7;}}
}
B6388b9:L6388b9:{c.instructions+=3;NFSU2_TR(0x6388b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6388bd:{NFSU2_TR(0x6388bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x340ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6388c3:{NFSU2_TR(0x6388c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x51ull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6388c7:L6388c7:{c.instructions+=3;NFSU2_TR(0x6388c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6388cd:{NFSU2_TR(0x6388cd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6388cf:{NFSU2_TR(0x6388cf);
if(r1(R+518)){{goto L6388df;}}
}
B6388d1:L6388d1:{c.instructions+=3;NFSU2_TR(0x6388d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6388d5:{NFSU2_TR(0x6388d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6388db:{NFSU2_TR(0x6388db);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x51ull))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6388df:L6388df:{c.instructions+=3;NFSU2_TR(0x6388df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6388e1:{NFSU2_TR(0x6388e1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6388e3:{NFSU2_TR(0x6388e3);
if(r1(R+518)){{goto L6388ed;}}
}
B6388e5:L6388e5:{c.instructions+=2;NFSU2_TR(0x6388e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6388eb:{NFSU2_TR(0x6388eb);
{goto L6388ef;}
}
B6388ed:L6388ed:{c.instructions+=1;NFSU2_TR(0x6388ed);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6388ef:L6388ef:{c.instructions+=2;NFSU2_TR(0x6388ef);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6388f1:{NFSU2_TR(0x6388f1);
if(r1(R+518)){{goto L638990;}}
}
B6388f7:L6388f7:{c.instructions+=11;NFSU2_TR(0x6388f7);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6388fa:{NFSU2_TR(0x6388fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6388fd:{NFSU2_TR(0x6388fd);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638900:{NFSU2_TR(0x638900);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17a8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B638906:{NFSU2_TR(0x638906);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638909:{NFSU2_TR(0x638909);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63890c:{NFSU2_TR(0x63890c);
{u32 ea_=u32(r4(R+28)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63890f:{NFSU2_TR(0x63890f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638913:{NFSU2_TR(0x638913);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3full));
s4(u32(r4(U+0)),r4(U+4));
}
B63891b:{NFSU2_TR(0x63891b);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63891e:{NFSU2_TR(0x63891e);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638921:L638921:{c.instructions+=5;NFSU2_TR(0x638921);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638925:{NFSU2_TR(0x638925);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B638927:{NFSU2_TR(0x638927);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638928:{NFSU2_TR(0x638928);
__builtin_memmove((R+4),(R+28),4);
}
B63892a:{NFSU2_TR(0x63892a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63892full));
TAIL_STATIC(0x610e00u,610);
}
B63892f:L63892f:{c.instructions+=7;NFSU2_TR(0x63892f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638933:{NFSU2_TR(0x638933);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638937:{NFSU2_TR(0x638937);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B63893a:{NFSU2_TR(0x63893a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B63893b:{NFSU2_TR(0x63893b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63893f:{NFSU2_TR(0x63893f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638943:{NFSU2_TR(0x638943);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x638921u);}goto L638921;}}
}
B638945:L638945:{c.instructions+=18;NFSU2_TR(0x638945);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638948:{NFSU2_TR(0x638948);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63894b:{NFSU2_TR(0x63894b);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63894e:{NFSU2_TR(0x63894e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638954:{NFSU2_TR(0x638954);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B638956:{NFSU2_TR(0x638956);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63895c:{NFSU2_TR(0x63895c);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638962:{NFSU2_TR(0x638962);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638965:{NFSU2_TR(0x638965);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638968:{NFSU2_TR(0x638968);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63896b:{NFSU2_TR(0x63896b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638971:{NFSU2_TR(0x638971);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B638973:{NFSU2_TR(0x638973);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638979:{NFSU2_TR(0x638979);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63897f:{NFSU2_TR(0x63897f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B638981:{NFSU2_TR(0x638981);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638987:{NFSU2_TR(0x638987);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63898a:{NFSU2_TR(0x63898a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638990:L638990:{c.instructions+=3;NFSU2_TR(0x638990);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1848ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638996:{NFSU2_TR(0x638996);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B638998:{NFSU2_TR(0x638998);
if(r1(R+518)){{goto L6389db;}}
}
B63899a:L63899a:{c.instructions+=1;NFSU2_TR(0x63899a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63899full));
TAIL_STATIC(0x488eb0u,488);
}
B63899f:L63899f:{c.instructions+=2;NFSU2_TR(0x63899f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6389a1:{NFSU2_TR(0x6389a1);
if(r1(R+518)){{goto L6389a7;}}
}
B6389a3:L6389a3:{c.instructions+=2;NFSU2_TR(0x6389a3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6389a5:{NFSU2_TR(0x6389a5);
{goto L6389ad;}
}
B6389a7:L6389a7:{c.instructions+=1;NFSU2_TR(0x6389a7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6389ad:L6389ad:{c.instructions+=3;NFSU2_TR(0x6389ad);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6389af:{NFSU2_TR(0x6389af);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6389b2:{NFSU2_TR(0x6389b2);
if(r1(R+518)){{goto L6389b9;}}
}
B6389b4:L6389b4:{c.instructions+=2;NFSU2_TR(0x6389b4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6389b7:{NFSU2_TR(0x6389b7);
{goto L6389bf;}
}
B6389b9:L6389b9:{c.instructions+=1;NFSU2_TR(0x6389b9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6389bf:L6389bf:{c.instructions+=3;NFSU2_TR(0x6389bf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6389c1:{NFSU2_TR(0x6389c1);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6389c4:{NFSU2_TR(0x6389c4);
if(r1(R+518)){{goto L6389cb;}}
}
B6389c6:L6389c6:{c.instructions+=2;NFSU2_TR(0x6389c6);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6389c9:{NFSU2_TR(0x6389c9);
{goto L6389d1;}
}
B6389cb:L6389cb:{c.instructions+=1;NFSU2_TR(0x6389cb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6389d1:L6389d1:{c.instructions+=3;NFSU2_TR(0x6389d1);
__builtin_memmove((R+4),(R+24),4);
}
B6389d3:{NFSU2_TR(0x6389d3);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6389d6:{NFSU2_TR(0x6389d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6389dbull));
TAIL_STATIC(0x6204d0u,620);
}
B6389db:L6389db:{c.instructions+=4;NFSU2_TR(0x6389db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6389de:{NFSU2_TR(0x6389de);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6389e0:{NFSU2_TR(0x6389e0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6389e3:{NFSU2_TR(0x6389e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6389e8ull));
TAIL_STATIC(0x5b5350u,5b5);
}
B6389e8:L6389e8:{c.instructions+=7;NFSU2_TR(0x6389e8);
__builtin_memmove((R+28),(R+0),4);
}
B6389ea:{NFSU2_TR(0x6389ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6389ed:{NFSU2_TR(0x6389ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6389ee:{NFSU2_TR(0x6389ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6389f0:{NFSU2_TR(0x6389f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6389f6:{NFSU2_TR(0x6389f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6389fa:{NFSU2_TR(0x6389fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6389ffull));
TAIL_STATIC(0x60c280u,60c);
}
B6389ff:L6389ff:{c.instructions+=5;NFSU2_TR(0x6389ff);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B638a02:{NFSU2_TR(0x638a02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638a03:{NFSU2_TR(0x638a03);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638a05:{NFSU2_TR(0x638a05);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B638a0b:{NFSU2_TR(0x638a0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638a10ull));
TAIL_STATIC(0x60c280u,60c);
}
B638a10:L638a10:{c.instructions+=6;NFSU2_TR(0x638a10);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638a14:{NFSU2_TR(0x638a14);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
}
B638a17:{NFSU2_TR(0x638a17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638a18:{NFSU2_TR(0x638a18);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638a1a:{NFSU2_TR(0x638a1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B638a20:{NFSU2_TR(0x638a20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638a25ull));
TAIL_STATIC(0x60c280u,60c);
}
B638a25:L638a25:{c.instructions+=6;NFSU2_TR(0x638a25);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638a29:{NFSU2_TR(0x638a29);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
}
B638a2e:{NFSU2_TR(0x638a2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638a2f:{NFSU2_TR(0x638a2f);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638a31:{NFSU2_TR(0x638a31);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B638a37:{NFSU2_TR(0x638a37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638a3cull));
TAIL_STATIC(0x60c280u,60c);
}
B638a3c:L638a3c:{c.instructions+=36;NFSU2_TR(0x638a3c);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638a3e:{NFSU2_TR(0x638a3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638a42:{NFSU2_TR(0x638a42);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B638a48:{NFSU2_TR(0x638a48);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
}
B638a4b:{NFSU2_TR(0x638a4b);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638a4e:{NFSU2_TR(0x638a4e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638a4f:{NFSU2_TR(0x638a4f);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B638a52:{NFSU2_TR(0x638a52);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638a55:{NFSU2_TR(0x638a55);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638a57:{NFSU2_TR(0x638a57);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B638a5a:{NFSU2_TR(0x638a5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B638a60:{NFSU2_TR(0x638a60);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638a64:{NFSU2_TR(0x638a64);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B638a66:{NFSU2_TR(0x638a66);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B638a6c:{NFSU2_TR(0x638a6c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638a70:{NFSU2_TR(0x638a70);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B638a76:{NFSU2_TR(0x638a76);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638a7a:{NFSU2_TR(0x638a7a);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638a7e:{NFSU2_TR(0x638a7e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B638a84:{NFSU2_TR(0x638a84);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638a88:{NFSU2_TR(0x638a88);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638a8a:{NFSU2_TR(0x638a8a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B638a8c:{NFSU2_TR(0x638a8c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638a8f:{NFSU2_TR(0x638a8f);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B638a92:{NFSU2_TR(0x638a92);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638a95:{NFSU2_TR(0x638a95);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B638a98:{NFSU2_TR(0x638a98);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638a9f:{NFSU2_TR(0x638a9f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B638aa1:{NFSU2_TR(0x638aa1);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B638aa7:{NFSU2_TR(0x638aa7);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638aab:{NFSU2_TR(0x638aab);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B638ab1:{NFSU2_TR(0x638ab1);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638ab5:{NFSU2_TR(0x638ab5);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638abc:{NFSU2_TR(0x638abc);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B638ac2:{NFSU2_TR(0x638ac2);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638ac9:{NFSU2_TR(0x638ac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638aceull));
TAIL_STATIC(0x60c280u,60c);
}
B638ace:L638ace:{c.instructions+=4;NFSU2_TR(0x638ace);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638acf:{NFSU2_TR(0x638acf);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638ad1:{NFSU2_TR(0x638ad1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B638ad7:{NFSU2_TR(0x638ad7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638adcull));
TAIL_STATIC(0x60c280u,60c);
}
B638adc:L638adc:{c.instructions+=6;NFSU2_TR(0x638adc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638ae0:{NFSU2_TR(0x638ae0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
}
B638ae3:{NFSU2_TR(0x638ae3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638ae4:{NFSU2_TR(0x638ae4);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638ae6:{NFSU2_TR(0x638ae6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B638aec:{NFSU2_TR(0x638aec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638af1ull));
TAIL_STATIC(0x60c280u,60c);
}
B638af1:L638af1:{c.instructions+=6;NFSU2_TR(0x638af1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638af5:{NFSU2_TR(0x638af5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
}
B638afa:{NFSU2_TR(0x638afa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638afb:{NFSU2_TR(0x638afb);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638afd:{NFSU2_TR(0x638afd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B638b03:{NFSU2_TR(0x638b03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638b08ull));
TAIL_STATIC(0x60c280u,60c);
}
B638b08:L638b08:{c.instructions+=4;NFSU2_TR(0x638b08);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638b09:{NFSU2_TR(0x638b09);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638b0b:{NFSU2_TR(0x638b0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B638b11:{NFSU2_TR(0x638b11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638b16ull));
TAIL_STATIC(0x60c280u,60c);
}
B638b16:L638b16:{c.instructions+=6;NFSU2_TR(0x638b16);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638b1a:{NFSU2_TR(0x638b1a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
}
B638b1d:{NFSU2_TR(0x638b1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638b1e:{NFSU2_TR(0x638b1e);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638b20:{NFSU2_TR(0x638b20);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B638b26:{NFSU2_TR(0x638b26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638b2bull));
TAIL_STATIC(0x60c280u,60c);
}
B638b2b:L638b2b:{c.instructions+=20;NFSU2_TR(0x638b2b);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638b2f:{NFSU2_TR(0x638b2f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B638b33:{NFSU2_TR(0x638b33);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B638b37:{NFSU2_TR(0x638b37);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638b3b:{NFSU2_TR(0x638b3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638b3c:{NFSU2_TR(0x638b3c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B638b40:{NFSU2_TR(0x638b40);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638b42:{NFSU2_TR(0x638b42);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638b49:{NFSU2_TR(0x638b49);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B638b4f:{NFSU2_TR(0x638b4f);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B638b53:{NFSU2_TR(0x638b53);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638b57:{NFSU2_TR(0x638b57);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B638b59:{NFSU2_TR(0x638b59);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B638b5f:{NFSU2_TR(0x638b5f);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638b63:{NFSU2_TR(0x638b63);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B638b69:{NFSU2_TR(0x638b69);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638b6d:{NFSU2_TR(0x638b6d);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638b71:{NFSU2_TR(0x638b71);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B638b77:{NFSU2_TR(0x638b77);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638b7b:{NFSU2_TR(0x638b7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638b80ull));
TAIL_STATIC(0x60c280u,60c);
}
B638b80:L638b80:{c.instructions+=29;NFSU2_TR(0x638b80);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638b83:{NFSU2_TR(0x638b83);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638b87:{NFSU2_TR(0x638b87);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B638b8a:{NFSU2_TR(0x638b8a);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638b8d:{NFSU2_TR(0x638b8d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x70ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x70ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B638b90:{NFSU2_TR(0x638b90);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B638b93:{NFSU2_TR(0x638b93);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638b95:{NFSU2_TR(0x638b95);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B638b9c:{NFSU2_TR(0x638b9c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B638b9e:{NFSU2_TR(0x638b9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638b9f:{NFSU2_TR(0x638b9f);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638ba6:{NFSU2_TR(0x638ba6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B638ba8:{NFSU2_TR(0x638ba8);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B638baf:{NFSU2_TR(0x638baf);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638bb6:{NFSU2_TR(0x638bb6);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638bbd:{NFSU2_TR(0x638bbd);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638bc0:{NFSU2_TR(0x638bc0);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B638bc3:{NFSU2_TR(0x638bc3);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638bc6:{NFSU2_TR(0x638bc6);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B638bc9:{NFSU2_TR(0x638bc9);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638bcb:{NFSU2_TR(0x638bcb);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B638bcd:{NFSU2_TR(0x638bcd);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638bd4:{NFSU2_TR(0x638bd4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B638bd6:{NFSU2_TR(0x638bd6);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638bdd:{NFSU2_TR(0x638bdd);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638be4:{NFSU2_TR(0x638be4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638be5:{NFSU2_TR(0x638be5);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B638be9:{NFSU2_TR(0x638be9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638bea:{NFSU2_TR(0x638bea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638befull));
TAIL_STATIC(0x43d1e0u,43d);
}
B638bef:L638bef:{c.instructions+=5;NFSU2_TR(0x638bef);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B638bf3:{NFSU2_TR(0x638bf3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638bf4:{NFSU2_TR(0x638bf4);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B638bf8:{NFSU2_TR(0x638bf8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638bf9:{NFSU2_TR(0x638bf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638bfeull));
TAIL_STATIC(0x43cf10u,43c);
}
B638bfe:L638bfe:{c.instructions+=8;NFSU2_TR(0x638bfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638c02:{NFSU2_TR(0x638c02);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638c05:{NFSU2_TR(0x638c05);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638c09:{NFSU2_TR(0x638c09);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B638c0c:{NFSU2_TR(0x638c0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B638c0f:{NFSU2_TR(0x638c0f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B638c11:{NFSU2_TR(0x638c11);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B638c14:{NFSU2_TR(0x638c14);
if(r1(R+514)){{goto L638c1b;}}
}
B638c16:L638c16:{c.instructions+=2;NFSU2_TR(0x638c16);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B638c18:{NFSU2_TR(0x638c18);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638c1b:L638c1b:{c.instructions+=4;NFSU2_TR(0x638c1b);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B638c21:{NFSU2_TR(0x638c21);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B638c23:{NFSU2_TR(0x638c23);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B638c26:{NFSU2_TR(0x638c26);
if(r1(R+514)){{goto L638c30;}}
}
B638c28:L638c28:{c.instructions+=2;NFSU2_TR(0x638c28);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B638c2a:{NFSU2_TR(0x638c2a);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638c30:L638c30:{c.instructions+=4;NFSU2_TR(0x638c30);
{u32 ea_=u32(r4(R+4)+u32(176u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B638c36:{NFSU2_TR(0x638c36);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B638c38:{NFSU2_TR(0x638c38);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B638c3b:{NFSU2_TR(0x638c3b);
if(r1(R+514)){{goto L638c45;}}
}
B638c3d:L638c3d:{c.instructions+=2;NFSU2_TR(0x638c3d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B638c3f:{NFSU2_TR(0x638c3f);
{u32 ea_=u32(r4(R+4)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638c45:L638c45:{c.instructions+=15;NFSU2_TR(0x638c45);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638c49:{NFSU2_TR(0x638c49);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B638c4b:{NFSU2_TR(0x638c4b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B638c4d:{NFSU2_TR(0x638c4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17a4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B638c53:{NFSU2_TR(0x638c53);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638c57:{NFSU2_TR(0x638c57);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638c5b:{NFSU2_TR(0x638c5b);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638c5f:{NFSU2_TR(0x638c5f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638c63:{NFSU2_TR(0x638c63);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B638c65:{NFSU2_TR(0x638c65);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638c69:{NFSU2_TR(0x638c69);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B638c6d:{NFSU2_TR(0x638c6d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B638c6f:{NFSU2_TR(0x638c6f);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B638c73:{NFSU2_TR(0x638c73);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B638c75:{NFSU2_TR(0x638c75);
{goto L638c80;}
}
B638c80:L638c80:{c.instructions+=3;NFSU2_TR(0x638c80);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B638c82:{NFSU2_TR(0x638c82);
w4(R+4,u32(0x7eull));
}
B638c87:{NFSU2_TR(0x638c87);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B638c8e:L638c8e:{c.instructions+=1;NFSU2_TR(0x638c8e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L638c90;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x638c8eu);}goto L638c8e;}
}
B638c90:L638c90:{c.instructions+=5;NFSU2_TR(0x638c90);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B638c97:{NFSU2_TR(0x638c97);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638c9b:{NFSU2_TR(0x638c9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638c9f:{NFSU2_TR(0x638c9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B638ca7:{NFSU2_TR(0x638ca7);
{goto L638cb0;}
}
B638cb0:L638cb0:{c.instructions+=4;NFSU2_TR(0x638cb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638cb4:{NFSU2_TR(0x638cb4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B638cb6:{NFSU2_TR(0x638cb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638cba:{NFSU2_TR(0x638cba);
__builtin_memmove((R+12),(R+12),4);
}
B638cc0:L638cc0:{c.instructions+=4;NFSU2_TR(0x638cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B638cc3:{NFSU2_TR(0x638cc3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B638cc5:{NFSU2_TR(0x638cc5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B638cc7:{NFSU2_TR(0x638cc7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L638ccb;}}
}
B638cc9:L638cc9:{c.instructions+=1;NFSU2_TR(0x638cc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B638ccb:L638ccb:{c.instructions+=2;NFSU2_TR(0x638ccb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B638ccd:{NFSU2_TR(0x638ccd);
if(r1(R+518)){{goto L638d11;}}
}
B638ccf:L638ccf:{c.instructions+=2;NFSU2_TR(0x638ccf);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x18ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B638cd2:{NFSU2_TR(0x638cd2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L638d11;}}
}
B638cd4:L638cd4:{c.instructions+=2;NFSU2_TR(0x638cd4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6399a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B638cdb:{NFSU2_TR(0x638cdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6399a0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B638ce2:L638ce2:{c.instructions+=3;NFSU2_TR(0x638ce2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B638ce6:{NFSU2_TR(0x638ce6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B638ce8:{NFSU2_TR(0x638ce8);
if(r1(R+518)){{goto L638cf8;}}
}
B638cea:L638cea:{c.instructions+=1;NFSU2_TR(0x638cea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L638d1b;}}
}
B638cec:L638cec:{c.instructions+=2;NFSU2_TR(0x638cec);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B638cee:{NFSU2_TR(0x638cee);
if(r1(R+518)){{goto L638d1b;}}
}
B638cf0:L638cf0:{c.instructions+=3;NFSU2_TR(0x638cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638cf3:{NFSU2_TR(0x638cf3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B638cf6:{NFSU2_TR(0x638cf6);
if(r1(R+518)){{goto L638d1b;}}
}
B638cf8:L638cf8:{c.instructions+=3;NFSU2_TR(0x638cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638cfb:{NFSU2_TR(0x638cfb);
u8 U[15];
w4(U+0,u32(u32(u32(0x838ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B638d03:{NFSU2_TR(0x638d03);
if(r1(R+518)){{goto L638d1b;}}
}
B638d05:L638d05:{c.instructions+=3;NFSU2_TR(0x638d05);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638d09:{NFSU2_TR(0x638d09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B638d0b:{NFSU2_TR(0x638d0b);
{goto L638d1b;}
}
B638d0d:L638d0d:{c.instructions+=1;NFSU2_TR(0x638d0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B638d11:L638d11:{c.instructions+=2;NFSU2_TR(0x638d11);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638d15:{NFSU2_TR(0x638d15);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B638d1b:L638d1b:{c.instructions+=7;NFSU2_TR(0x638d1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B638d1f:{NFSU2_TR(0x638d1f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B638d20:{NFSU2_TR(0x638d20);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B638d23:{NFSU2_TR(0x638d23);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B638d26:{NFSU2_TR(0x638d26);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B638d29:{NFSU2_TR(0x638d29);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638d2d:{NFSU2_TR(0x638d2d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x638cc0u);}goto L638cc0;}}
}
B638d2f:L638d2f:{c.instructions+=10;NFSU2_TR(0x638d2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B638d33:{NFSU2_TR(0x638d33);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638d37:{NFSU2_TR(0x638d37);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638d3b:{NFSU2_TR(0x638d3b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B638d3e:{NFSU2_TR(0x638d3e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B638d41:{NFSU2_TR(0x638d41);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B638d42:{NFSU2_TR(0x638d42);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638d46:{NFSU2_TR(0x638d46);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638d4a:{NFSU2_TR(0x638d4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638d4e:{NFSU2_TR(0x638d4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x638cb0u);}goto L638cb0;}}
}
B638d54:L638d54:{c.instructions+=4;NFSU2_TR(0x638d54);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B638d5b:{NFSU2_TR(0x638d5b);
u8 U[4];
w4(U+0,u32(0x7eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638d5d:{NFSU2_TR(0x638d5d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638d5e:{NFSU2_TR(0x638d5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638d63ull));
TAIL_STATIC(0x488f10u,488);
}
B638d63:L638d63:{c.instructions+=8;NFSU2_TR(0x638d63);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B638d67:{NFSU2_TR(0x638d67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B638d6a:{NFSU2_TR(0x638d6a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B638d6b:{NFSU2_TR(0x638d6b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B638d6e:{NFSU2_TR(0x638d6e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B638d71:{NFSU2_TR(0x638d71);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638d75:{NFSU2_TR(0x638d75);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638d79:{NFSU2_TR(0x638d79);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x638c80u);}goto L638c80;}}
}
B638d7f:L638d7f:{c.instructions+=5;NFSU2_TR(0x638d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B638d82:{NFSU2_TR(0x638d82);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638d88:{NFSU2_TR(0x638d88);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B638d8a:{NFSU2_TR(0x638d8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B638d8c:{NFSU2_TR(0x638d8c);
if(r1(R+518)){{goto L638d93;}}
}
B638d8e:L638d8e:{c.instructions+=1;NFSU2_TR(0x638d8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638d93ull));
TAIL_STATIC(0x61f700u,61f);
}
B638d93:L638d93:{c.instructions+=2;NFSU2_TR(0x638d93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638d94:{NFSU2_TR(0x638d94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638d99ull));
TAIL_STATIC(0x48f6a0u,48f);
}
B638d99:L638d99:{c.instructions+=3;NFSU2_TR(0x638d99);
u8 U[4];
w4(U+0,u32(0x7a8d24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638d9e:{NFSU2_TR(0x638d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x384ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638da4:{NFSU2_TR(0x638da4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638da9ull));
TAIL_STATIC(0x43db50u,43d);
}
B638da9:L638da9:{c.instructions+=2;NFSU2_TR(0x638da9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638daa:{NFSU2_TR(0x638daa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638dafull));
TAIL_STATIC(0x48f6a0u,48f);
}
B638daf:L638daf:{c.instructions+=6;NFSU2_TR(0x638daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x388ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638db5:{NFSU2_TR(0x638db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638dbb:{NFSU2_TR(0x638dbb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B638dbe:{NFSU2_TR(0x638dbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B638dc0:{NFSU2_TR(0x638dc0);
w4(R+0,u32(0x471a1dcaull));
}
B638dc5:{NFSU2_TR(0x638dc5);
if(r1(R+518)){{goto L638dcc;}}
}
B638dc7:L638dc7:{c.instructions+=1;NFSU2_TR(0x638dc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638dccull));
TAIL_STATIC(0x61f700u,61f);
}
B638dcc:L638dcc:{c.instructions+=2;NFSU2_TR(0x638dcc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638dcd:{NFSU2_TR(0x638dcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638dd2ull));
TAIL_STATIC(0x48f6a0u,48f);
}
B638dd2:L638dd2:{c.instructions+=27;NFSU2_TR(0x638dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638dd8:{NFSU2_TR(0x638dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638dde:{NFSU2_TR(0x638dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638de4:{NFSU2_TR(0x638de4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B638dea:{NFSU2_TR(0x638dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B638df0:{NFSU2_TR(0x638df0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638df4:{NFSU2_TR(0x638df4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638dfa:{NFSU2_TR(0x638dfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638dfe:{NFSU2_TR(0x638dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638e04:{NFSU2_TR(0x638e04);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638e08:{NFSU2_TR(0x638e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638e0e:{NFSU2_TR(0x638e0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638e12:{NFSU2_TR(0x638e12);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B638e18:{NFSU2_TR(0x638e18);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638e1c:{NFSU2_TR(0x638e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B638e22:{NFSU2_TR(0x638e22);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638e26:{NFSU2_TR(0x638e26);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x604ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638e2c:{NFSU2_TR(0x638e2c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B638e2f:{NFSU2_TR(0x638e2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B638e31:{NFSU2_TR(0x638e31);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638e35:{NFSU2_TR(0x638e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638e3b:{NFSU2_TR(0x638e3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638e3f:{NFSU2_TR(0x638e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B638e45:{NFSU2_TR(0x638e45);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638e49:{NFSU2_TR(0x638e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x610ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B638e4f:{NFSU2_TR(0x638e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B638e55:{NFSU2_TR(0x638e55);
if(r1(R+518)){{goto L638e61;}}
}
B638e57:L638e57:{c.instructions+=4;NFSU2_TR(0x638e57);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B638e5a:{NFSU2_TR(0x638e5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B638e5d:{NFSU2_TR(0x638e5d);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B638e5f:{NFSU2_TR(0x638e5f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L638e65;}}
}
B638e61:L638e61:{c.instructions+=2;NFSU2_TR(0x638e61);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B638e63:{NFSU2_TR(0x638e63);
{goto L638e69;}
}
B638e65:L638e65:{c.instructions+=1;NFSU2_TR(0x638e65);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638e69:L638e69:{c.instructions+=2;NFSU2_TR(0x638e69);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B638e6b:{NFSU2_TR(0x638e6b);
if(r1(R+518)){{goto L638e78;}}
}
B638e6d:L638e6d:{c.instructions+=4;NFSU2_TR(0x638e6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B638e70:{NFSU2_TR(0x638e70);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B638e73:{NFSU2_TR(0x638e73);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x1ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B638e76:{NFSU2_TR(0x638e76);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L638e80;}}
}
B638e78:L638e78:{c.instructions+=1;NFSU2_TR(0x638e78);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B638e80:L638e80:{c.instructions+=3;NFSU2_TR(0x638e80);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B638e82:{NFSU2_TR(0x638e82);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B638e84:{NFSU2_TR(0x638e84);
if(r1(R+518)){{goto L638e91;}}
}
B638e86:L638e86:{c.instructions+=4;NFSU2_TR(0x638e86);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B638e89:{NFSU2_TR(0x638e89);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B638e8c:{NFSU2_TR(0x638e8c);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x1ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B638e8f:{NFSU2_TR(0x638e8f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L638e95;}}
}
B638e91:L638e91:{c.instructions+=1;NFSU2_TR(0x638e91);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638e95:L638e95:{c.instructions+=3;NFSU2_TR(0x638e95);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638e99:{NFSU2_TR(0x638e99);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B638e9b:{NFSU2_TR(0x638e9b);
if(r1(R+518)){{goto L638ea8;}}
}
B638e9d:L638e9d:{c.instructions+=4;NFSU2_TR(0x638e9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B638ea0:{NFSU2_TR(0x638ea0);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B638ea3:{NFSU2_TR(0x638ea3);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x1ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B638ea6:{NFSU2_TR(0x638ea6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L638eac;}}
}
B638ea8:L638ea8:{c.instructions+=1;NFSU2_TR(0x638ea8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638eac:L638eac:{c.instructions+=3;NFSU2_TR(0x638eac);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638eb0:{NFSU2_TR(0x638eb0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B638eb2:{NFSU2_TR(0x638eb2);
if(r1(R+518)){{goto L638ebf;}}
}
B638eb4:L638eb4:{c.instructions+=4;NFSU2_TR(0x638eb4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B638eb7:{NFSU2_TR(0x638eb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B638eba:{NFSU2_TR(0x638eba);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x1ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B638ebd:{NFSU2_TR(0x638ebd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L638ec3;}}
}
B638ebf:L638ebf:{c.instructions+=1;NFSU2_TR(0x638ebf);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638ec3:L638ec3:{c.instructions+=2;NFSU2_TR(0x638ec3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B638ec5:{NFSU2_TR(0x638ec5);
if(r1(R+518)){{goto L638ed2;}}
}
B638ec7:L638ec7:{c.instructions+=4;NFSU2_TR(0x638ec7);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B638eca:{NFSU2_TR(0x638eca);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B638ecd:{NFSU2_TR(0x638ecd);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x1ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B638ed0:{NFSU2_TR(0x638ed0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L638ed6;}}
}
B638ed2:L638ed2:{c.instructions+=1;NFSU2_TR(0x638ed2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638ed6:L638ed6:{c.instructions+=2;NFSU2_TR(0x638ed6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B638ed8:{NFSU2_TR(0x638ed8);
if(r1(R+518)){{goto L638ee5;}}
}
B638eda:L638eda:{c.instructions+=4;NFSU2_TR(0x638eda);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B638edd:{NFSU2_TR(0x638edd);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B638ee0:{NFSU2_TR(0x638ee0);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x3ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B638ee3:{NFSU2_TR(0x638ee3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L638ee9;}}
}
B638ee5:L638ee5:{c.instructions+=1;NFSU2_TR(0x638ee5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638ee9:L638ee9:{c.instructions+=9;NFSU2_TR(0x638ee9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B638eeb:{NFSU2_TR(0x638eeb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B638eed:{NFSU2_TR(0x638eed);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B638eef:{NFSU2_TR(0x638eef);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638ef3:{NFSU2_TR(0x638ef3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638ef7:{NFSU2_TR(0x638ef7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638efb:{NFSU2_TR(0x638efb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638eff:{NFSU2_TR(0x638eff);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638f03:{NFSU2_TR(0x638f03);
if(r1(R+518)){{goto L638f10;}}
}
B638f05:L638f05:{c.instructions+=2;NFSU2_TR(0x638f05);
__builtin_memmove((R+4),(R+0),4);
}
B638f07:{NFSU2_TR(0x638f07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638f0cull));
TAIL_STATIC(0x61f700u,61f);
}
B638f0c:L638f0c:{c.instructions+=2;NFSU2_TR(0x638f0c);
__builtin_memmove((R+12),(R+0),4);
}
B638f0e:{NFSU2_TR(0x638f0e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B638f10:L638f10:{c.instructions+=3;NFSU2_TR(0x638f10);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638f14:{NFSU2_TR(0x638f14);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B638f16:{NFSU2_TR(0x638f16);
if(r1(R+518)){{goto L638f23;}}
}
B638f18:L638f18:{c.instructions+=2;NFSU2_TR(0x638f18);
__builtin_memmove((R+4),(R+0),4);
}
B638f1a:{NFSU2_TR(0x638f1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638f1full));
TAIL_STATIC(0x61f700u,61f);
}
B638f1f:L638f1f:{c.instructions+=2;NFSU2_TR(0x638f1f);
__builtin_memmove((R+28),(R+0),4);
}
B638f21:{NFSU2_TR(0x638f21);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B638f23:L638f23:{c.instructions+=3;NFSU2_TR(0x638f23);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638f27:{NFSU2_TR(0x638f27);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B638f29:{NFSU2_TR(0x638f29);
if(r1(R+518)){{goto L638f38;}}
}
B638f2b:L638f2b:{c.instructions+=2;NFSU2_TR(0x638f2b);
__builtin_memmove((R+4),(R+0),4);
}
B638f2d:{NFSU2_TR(0x638f2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638f32ull));
TAIL_STATIC(0x61f700u,61f);
}
B638f32:L638f32:{c.instructions+=2;NFSU2_TR(0x638f32);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638f36:{NFSU2_TR(0x638f36);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B638f38:L638f38:{c.instructions+=3;NFSU2_TR(0x638f38);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638f3c:{NFSU2_TR(0x638f3c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B638f3e:{NFSU2_TR(0x638f3e);
if(r1(R+518)){{goto L638f4d;}}
}
B638f40:L638f40:{c.instructions+=2;NFSU2_TR(0x638f40);
__builtin_memmove((R+4),(R+0),4);
}
B638f42:{NFSU2_TR(0x638f42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638f47ull));
TAIL_STATIC(0x61f700u,61f);
}
B638f47:L638f47:{c.instructions+=2;NFSU2_TR(0x638f47);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638f4b:{NFSU2_TR(0x638f4b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B638f4d:L638f4d:{c.instructions+=3;NFSU2_TR(0x638f4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638f51:{NFSU2_TR(0x638f51);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B638f53:{NFSU2_TR(0x638f53);
if(r1(R+518)){{goto L638f62;}}
}
B638f55:L638f55:{c.instructions+=2;NFSU2_TR(0x638f55);
__builtin_memmove((R+4),(R+0),4);
}
B638f57:{NFSU2_TR(0x638f57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638f5cull));
TAIL_STATIC(0x61f700u,61f);
}
B638f5c:L638f5c:{c.instructions+=2;NFSU2_TR(0x638f5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638f60:{NFSU2_TR(0x638f60);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B638f62:L638f62:{c.instructions+=3;NFSU2_TR(0x638f62);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B638f66:{NFSU2_TR(0x638f66);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B638f68:{NFSU2_TR(0x638f68);
if(r1(R+518)){{goto L638f75;}}
}
B638f6a:L638f6a:{c.instructions+=1;NFSU2_TR(0x638f6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638f6full));
TAIL_STATIC(0x61f700u,61f);
}
B638f6f:L638f6f:{c.instructions+=2;NFSU2_TR(0x638f6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638f73:{NFSU2_TR(0x638f73);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B638f75:L638f75:{c.instructions+=3;NFSU2_TR(0x638f75);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638f79:{NFSU2_TR(0x638f79);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B638f7b:{NFSU2_TR(0x638f7b);
if(r1(R+518)){{goto L638f8a;}}
}
B638f7d:L638f7d:{c.instructions+=2;NFSU2_TR(0x638f7d);
__builtin_memmove((R+4),(R+0),4);
}
B638f7f:{NFSU2_TR(0x638f7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638f84ull));
TAIL_STATIC(0x61f700u,61f);
}
B638f84:L638f84:{c.instructions+=2;NFSU2_TR(0x638f84);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638f88:{NFSU2_TR(0x638f88);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B638f8a:L638f8a:{c.instructions+=2;NFSU2_TR(0x638f8a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B638f8c:{NFSU2_TR(0x638f8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L638f94;}}
}
B638f8e:L638f8e:{c.instructions+=2;NFSU2_TR(0x638f8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638f92:{NFSU2_TR(0x638f92);
{goto L638fa3;}
}
B638f94:L638f94:{c.instructions+=2;NFSU2_TR(0x638f94);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638f95:{NFSU2_TR(0x638f95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638f9aull));
TAIL_STATIC(0x48f6a0u,48f);
}
B638f9a:L638f9a:{c.instructions+=3;NFSU2_TR(0x638f9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B638f9d:{NFSU2_TR(0x638f9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638fa1:{NFSU2_TR(0x638fa1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B638fa3:L638fa3:{c.instructions+=2;NFSU2_TR(0x638fa3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B638fa5:{NFSU2_TR(0x638fa5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L638fad;}}
}
B638fa7:L638fa7:{c.instructions+=2;NFSU2_TR(0x638fa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638fab:{NFSU2_TR(0x638fab);
{goto L638fbc;}
}
B638fad:L638fad:{c.instructions+=2;NFSU2_TR(0x638fad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638fae:{NFSU2_TR(0x638fae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638fb3ull));
TAIL_STATIC(0x48f6a0u,48f);
}
B638fb3:L638fb3:{c.instructions+=3;NFSU2_TR(0x638fb3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B638fb6:{NFSU2_TR(0x638fb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638fba:{NFSU2_TR(0x638fba);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B638fbc:L638fbc:{c.instructions+=2;NFSU2_TR(0x638fbc);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B638fc0:{NFSU2_TR(0x638fc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L638fc8;}}
}
B638fc2:L638fc2:{c.instructions+=2;NFSU2_TR(0x638fc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638fc6:{NFSU2_TR(0x638fc6);
{goto L638fdb;}
}
B638fc8:L638fc8:{c.instructions+=3;NFSU2_TR(0x638fc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B638fcc:{NFSU2_TR(0x638fcc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638fcd:{NFSU2_TR(0x638fcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638fd2ull));
TAIL_STATIC(0x48f6a0u,48f);
}
B638fd2:L638fd2:{c.instructions+=3;NFSU2_TR(0x638fd2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B638fd5:{NFSU2_TR(0x638fd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638fd9:{NFSU2_TR(0x638fd9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B638fdb:L638fdb:{c.instructions+=2;NFSU2_TR(0x638fdb);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B638fdf:{NFSU2_TR(0x638fdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L638fe7;}}
}
B638fe1:L638fe1:{c.instructions+=2;NFSU2_TR(0x638fe1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638fe5:{NFSU2_TR(0x638fe5);
{goto L638ffa;}
}
B638fe7:L638fe7:{c.instructions+=3;NFSU2_TR(0x638fe7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B638feb:{NFSU2_TR(0x638feb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B638fec:{NFSU2_TR(0x638fec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x638ff1ull));
TAIL_STATIC(0x48f6a0u,48f);
}
B638ff1:L638ff1:{c.instructions+=3;NFSU2_TR(0x638ff1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B638ff4:{NFSU2_TR(0x638ff4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B638ff8:{NFSU2_TR(0x638ff8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B638ffa:L638ffa:{c.instructions+=2;NFSU2_TR(0x638ffa);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B638ffe:{NFSU2_TR(0x638ffe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x639004u,639);}
TAIL_STATIC(0x639000u,639);
}
XIT:NFSU2_TR_EXIT(0x638,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
