#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_519(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x518,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x518,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_518(u8* __restrict R,Cpu& c);
u32 page_518(Cpu& c){return body_518(c.regs.data(),c);}
__attribute__((noinline)) u32 body_518(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x518000:goto L518000;
case 0x518004:c.instructions+=7;goto B518004;
case 0x518006:c.instructions+=6;goto B518006;
case 0x51800a:c.instructions+=5;goto B51800a;
case 0x51800e:c.instructions+=4;goto B51800e;
case 0x518012:c.instructions+=3;goto B518012;
case 0x518013:c.instructions+=2;goto B518013;
case 0x518017:c.instructions+=1;goto B518017;
case 0x51801c:goto L51801c;
case 0x518020:c.instructions+=4;goto B518020;
case 0x518024:c.instructions+=3;goto B518024;
case 0x51802b:c.instructions+=2;goto B51802b;
case 0x51802e:c.instructions+=1;goto B51802e;
case 0x518040:goto L518040;
case 0x518043:c.instructions+=16;goto B518043;
case 0x518047:c.instructions+=15;goto B518047;
case 0x518048:c.instructions+=14;goto B518048;
case 0x518049:c.instructions+=13;goto B518049;
case 0x51804c:c.instructions+=12;goto B51804c;
case 0x51804e:c.instructions+=11;goto B51804e;
case 0x51804f:c.instructions+=10;goto B51804f;
case 0x518051:c.instructions+=9;goto B518051;
case 0x518057:c.instructions+=8;goto B518057;
case 0x51805a:c.instructions+=7;goto B51805a;
case 0x51805c:c.instructions+=6;goto B51805c;
case 0x51805e:c.instructions+=5;goto B51805e;
case 0x518064:c.instructions+=4;goto B518064;
case 0x518066:c.instructions+=3;goto B518066;
case 0x51806a:c.instructions+=2;goto B51806a;
case 0x51806e:c.instructions+=1;goto B51806e;
case 0x518074:goto L518074;
case 0x518078:c.instructions+=3;goto B518078;
case 0x51807b:c.instructions+=2;goto B51807b;
case 0x51807c:c.instructions+=1;goto B51807c;
case 0x518080:goto L518080;
case 0x518082:c.instructions+=1;goto B518082;
case 0x518088:goto L518088;
case 0x51808c:c.instructions+=1;goto B51808c;
case 0x518090:goto L518090;
case 0x518096:c.instructions+=9;goto B518096;
case 0x518099:c.instructions+=8;goto B518099;
case 0x51809f:c.instructions+=7;goto B51809f;
case 0x5180a5:c.instructions+=6;goto B5180a5;
case 0x5180a8:c.instructions+=5;goto B5180a8;
case 0x5180ab:c.instructions+=4;goto B5180ab;
case 0x5180ad:c.instructions+=3;goto B5180ad;
case 0x5180b0:c.instructions+=2;goto B5180b0;
case 0x5180b2:c.instructions+=1;goto B5180b2;
case 0x5180b4:goto L5180b4;
case 0x5180b8:c.instructions+=10;goto B5180b8;
case 0x5180bb:c.instructions+=9;goto B5180bb;
case 0x5180bd:c.instructions+=8;goto B5180bd;
case 0x5180c0:c.instructions+=7;goto B5180c0;
case 0x5180c3:c.instructions+=6;goto B5180c3;
case 0x5180c6:c.instructions+=5;goto B5180c6;
case 0x5180c9:c.instructions+=4;goto B5180c9;
case 0x5180cc:c.instructions+=3;goto B5180cc;
case 0x5180cf:c.instructions+=2;goto B5180cf;
case 0x5180d2:c.instructions+=1;goto B5180d2;
case 0x5180d4:goto L5180d4;
case 0x5180d7:c.instructions+=2;goto B5180d7;
case 0x5180da:c.instructions+=1;goto B5180da;
case 0x5180dd:goto L5180dd;
case 0x5180e3:c.instructions+=6;goto B5180e3;
case 0x5180e6:c.instructions+=5;goto B5180e6;
case 0x5180e7:c.instructions+=4;goto B5180e7;
case 0x5180e9:c.instructions+=3;goto B5180e9;
case 0x5180eb:c.instructions+=2;goto B5180eb;
case 0x5180f1:c.instructions+=1;goto B5180f1;
case 0x5180f3:goto L5180f3;
case 0x5180f9:c.instructions+=7;goto B5180f9;
case 0x5180fc:c.instructions+=6;goto B5180fc;
case 0x5180fd:c.instructions+=5;goto B5180fd;
case 0x5180ff:c.instructions+=4;goto B5180ff;
case 0x518101:c.instructions+=3;goto B518101;
case 0x518107:c.instructions+=2;goto B518107;
case 0x51810d:c.instructions+=1;goto B51810d;
case 0x51810f:goto L51810f;
case 0x518115:goto L518115;
case 0x518119:c.instructions+=1;goto B518119;
case 0x51811f:goto L51811f;
case 0x518123:goto L518123;
case 0x518127:c.instructions+=1;goto B518127;
case 0x51812d:goto L51812d;
case 0x51812e:goto L51812e;
case 0x51812f:c.instructions+=4;goto B51812f;
case 0x518130:c.instructions+=3;goto B518130;
case 0x518131:c.instructions+=2;goto B518131;
case 0x518134:c.instructions+=1;goto B518134;
case 0x518140:goto L518140;
case 0x518142:c.instructions+=13;goto B518142;
case 0x518147:c.instructions+=12;goto B518147;
case 0x51814d:c.instructions+=11;goto B51814d;
case 0x51814e:c.instructions+=10;goto B51814e;
case 0x518155:c.instructions+=9;goto B518155;
case 0x518158:c.instructions+=8;goto B518158;
case 0x518160:c.instructions+=7;goto B518160;
case 0x518164:c.instructions+=6;goto B518164;
case 0x518167:c.instructions+=5;goto B518167;
case 0x518168:c.instructions+=4;goto B518168;
case 0x518170:c.instructions+=3;goto B518170;
case 0x518174:c.instructions+=2;goto B518174;
case 0x518178:c.instructions+=1;goto B518178;
case 0x51817d:goto L51817d;
case 0x518181:c.instructions+=3;goto B518181;
case 0x518188:c.instructions+=2;goto B518188;
case 0x51818b:c.instructions+=1;goto B51818b;
case 0x518190:goto L518190;
case 0x518196:c.instructions+=13;goto B518196;
case 0x518198:c.instructions+=12;goto B518198;
case 0x51819d:c.instructions+=11;goto B51819d;
case 0x51819e:c.instructions+=10;goto B51819e;
case 0x5181a5:c.instructions+=9;goto B5181a5;
case 0x5181a6:c.instructions+=8;goto B5181a6;
case 0x5181a7:c.instructions+=7;goto B5181a7;
case 0x5181ab:c.instructions+=6;goto B5181ab;
case 0x5181ac:c.instructions+=5;goto B5181ac;
case 0x5181ad:c.instructions+=4;goto B5181ad;
case 0x5181af:c.instructions+=3;goto B5181af;
case 0x5181b1:c.instructions+=2;goto B5181b1;
case 0x5181b3:c.instructions+=1;goto B5181b3;
case 0x5181b5:goto L5181b5;
case 0x5181bb:c.instructions+=2;goto B5181bb;
case 0x5181bd:c.instructions+=1;goto B5181bd;
case 0x5181bf:goto L5181bf;
case 0x5181c0:c.instructions+=1;goto B5181c0;
case 0x5181c5:goto L5181c5;
case 0x5181c8:goto L5181c8;
case 0x5181ce:c.instructions+=1;goto B5181ce;
case 0x5181d3:goto L5181d3;
case 0x5181d7:c.instructions+=3;goto B5181d7;
case 0x5181da:c.instructions+=2;goto B5181da;
case 0x5181db:c.instructions+=1;goto B5181db;
case 0x5181e0:goto L5181e0;
case 0x5181e2:c.instructions+=5;goto B5181e2;
case 0x5181e5:c.instructions+=4;goto B5181e5;
case 0x5181e9:c.instructions+=3;goto B5181e9;
case 0x5181eb:c.instructions+=2;goto B5181eb;
case 0x5181ef:c.instructions+=1;goto B5181ef;
case 0x5181f1:goto L5181f1;
case 0x5181f6:c.instructions+=4;goto B5181f6;
case 0x5181f7:c.instructions+=3;goto B5181f7;
case 0x5181f9:c.instructions+=2;goto B5181f9;
case 0x5181fa:c.instructions+=1;goto B5181fa;
case 0x5181ff:goto L5181ff;
case 0x518203:c.instructions+=1;goto B518203;
case 0x518205:goto L518205;
case 0x518209:goto L518209;
case 0x51820f:c.instructions+=4;goto B51820f;
case 0x518211:c.instructions+=3;goto B518211;
case 0x518219:c.instructions+=2;goto B518219;
case 0x51821b:c.instructions+=1;goto B51821b;
case 0x51821d:goto L51821d;
case 0x51821f:goto L51821f;
case 0x518221:c.instructions+=1;goto B518221;
case 0x518223:goto L518223;
case 0x518229:c.instructions+=5;goto B518229;
case 0x51822d:c.instructions+=4;goto B51822d;
case 0x518230:c.instructions+=3;goto B518230;
case 0x518233:c.instructions+=2;goto B518233;
case 0x518235:c.instructions+=1;goto B518235;
case 0x518238:goto L518238;
case 0x51823a:goto L51823a;
case 0x51823c:c.instructions+=1;goto B51823c;
case 0x51823f:goto L51823f;
case 0x518241:goto L518241;
case 0x518243:goto L518243;
case 0x518249:c.instructions+=2;goto B518249;
case 0x51824b:c.instructions+=1;goto B51824b;
case 0x51824d:goto L51824d;
case 0x51824e:c.instructions+=1;goto B51824e;
case 0x518253:goto L518253;
case 0x518256:goto L518256;
case 0x51825a:c.instructions+=2;goto B51825a;
case 0x518260:c.instructions+=1;goto B518260;
case 0x518266:goto L518266;
case 0x51826a:c.instructions+=7;goto B51826a;
case 0x51826b:c.instructions+=6;goto B51826b;
case 0x51826c:c.instructions+=5;goto B51826c;
case 0x51826d:c.instructions+=4;goto B51826d;
case 0x518274:c.instructions+=3;goto B518274;
case 0x518275:c.instructions+=2;goto B518275;
case 0x518278:c.instructions+=1;goto B518278;
case 0x518280:goto L518280;
case 0x518283:c.instructions+=4;goto B518283;
case 0x518285:c.instructions+=3;goto B518285;
case 0x518289:c.instructions+=2;goto B518289;
case 0x51828a:c.instructions+=1;goto B51828a;
case 0x51828c:goto L51828c;
case 0x51828f:c.instructions+=1;goto B51828f;
case 0x518290:goto L518290;
case 0x518293:c.instructions+=1;goto B518293;
case 0x518295:goto L518295;
case 0x518298:c.instructions+=2;goto B518298;
case 0x51829a:c.instructions+=1;goto B51829a;
case 0x51829c:goto L51829c;
case 0x51829e:c.instructions+=1;goto B51829e;
case 0x5182a0:goto L5182a0;
case 0x5182a2:c.instructions+=1;goto B5182a2;
case 0x5182a4:goto L5182a4;
case 0x5182a7:c.instructions+=3;goto B5182a7;
case 0x5182a9:c.instructions+=2;goto B5182a9;
case 0x5182ac:c.instructions+=1;goto B5182ac;
case 0x5182ae:goto L5182ae;
case 0x5182b1:goto L5182b1;
case 0x5182b4:c.instructions+=2;goto B5182b4;
case 0x5182b7:c.instructions+=1;goto B5182b7;
case 0x5182b9:goto L5182b9;
case 0x5182bc:c.instructions+=3;goto B5182bc;
case 0x5182be:c.instructions+=2;goto B5182be;
case 0x5182c1:c.instructions+=1;goto B5182c1;
case 0x5182c3:goto L5182c3;
case 0x5182c6:goto L5182c6;
case 0x5182cd:c.instructions+=1;goto B5182cd;
case 0x5182d0:goto L5182d0;
case 0x5182d3:c.instructions+=1;goto B5182d3;
case 0x5182d5:goto L5182d5;
case 0x5182d8:goto L5182d8;
case 0x5182db:goto L5182db;
case 0x5182dc:c.instructions+=1;goto B5182dc;
case 0x5182e0:goto L5182e0;
case 0x5182e1:c.instructions+=7;goto B5182e1;
case 0x5182e3:c.instructions+=6;goto B5182e3;
case 0x5182e6:c.instructions+=5;goto B5182e6;
case 0x5182e9:c.instructions+=4;goto B5182e9;
case 0x5182ed:c.instructions+=3;goto B5182ed;
case 0x5182f0:c.instructions+=2;goto B5182f0;
case 0x5182f6:c.instructions+=1;goto B5182f6;
case 0x5182f8:goto L5182f8;
case 0x5182fa:c.instructions+=1;goto B5182fa;
case 0x5182fc:goto L5182fc;
case 0x5182ff:c.instructions+=3;goto B5182ff;
case 0x518303:c.instructions+=2;goto B518303;
case 0x518309:c.instructions+=1;goto B518309;
case 0x51830b:goto L51830b;
case 0x51830e:c.instructions+=8;goto B51830e;
case 0x51830f:c.instructions+=7;goto B51830f;
case 0x518311:c.instructions+=6;goto B518311;
case 0x518316:c.instructions+=5;goto B518316;
case 0x518318:c.instructions+=4;goto B518318;
case 0x518319:c.instructions+=3;goto B518319;
case 0x51831b:c.instructions+=2;goto B51831b;
case 0x51831d:c.instructions+=1;goto B51831d;
case 0x51831f:goto L51831f;
case 0x518320:c.instructions+=4;goto B518320;
case 0x518321:c.instructions+=3;goto B518321;
case 0x518323:c.instructions+=2;goto B518323;
case 0x518324:c.instructions+=1;goto B518324;
case 0x518325:goto L518325;
case 0x51832b:c.instructions+=1;goto B51832b;
case 0x51832d:goto L51832d;
case 0x51832f:c.instructions+=6;goto B51832f;
case 0x518332:c.instructions+=5;goto B518332;
case 0x518334:c.instructions+=4;goto B518334;
case 0x518336:c.instructions+=3;goto B518336;
case 0x518339:c.instructions+=2;goto B518339;
case 0x51833a:c.instructions+=1;goto B51833a;
case 0x51833b:goto L51833b;
case 0x51833e:c.instructions+=3;goto B51833e;
case 0x518340:c.instructions+=2;goto B518340;
case 0x518341:c.instructions+=1;goto B518341;
case 0x518346:goto L518346;
case 0x518348:c.instructions+=3;goto B518348;
case 0x51834a:c.instructions+=2;goto B51834a;
case 0x518350:c.instructions+=1;goto B518350;
case 0x518352:goto L518352;
case 0x518355:goto L518355;
case 0x518357:c.instructions+=9;goto B518357;
case 0x51835a:c.instructions+=8;goto B51835a;
case 0x51835d:c.instructions+=7;goto B51835d;
case 0x518360:c.instructions+=6;goto B518360;
case 0x518363:c.instructions+=5;goto B518363;
case 0x518365:c.instructions+=4;goto B518365;
case 0x518368:c.instructions+=3;goto B518368;
case 0x51836b:c.instructions+=2;goto B51836b;
case 0x51836c:c.instructions+=1;goto B51836c;
case 0x51836e:goto L51836e;
case 0x51836f:c.instructions+=4;goto B51836f;
case 0x518370:c.instructions+=3;goto B518370;
case 0x518372:c.instructions+=2;goto B518372;
case 0x518373:c.instructions+=1;goto B518373;
case 0x518380:goto L518380;
case 0x518381:c.instructions+=9;goto B518381;
case 0x518382:c.instructions+=8;goto B518382;
case 0x518384:c.instructions+=7;goto B518384;
case 0x518387:c.instructions+=6;goto B518387;
case 0x51838a:c.instructions+=5;goto B51838a;
case 0x51838b:c.instructions+=4;goto B51838b;
case 0x51838e:c.instructions+=3;goto B51838e;
case 0x518392:c.instructions+=2;goto B518392;
case 0x518398:c.instructions+=1;goto B518398;
case 0x51839a:goto L51839a;
case 0x5183a0:goto L5183a0;
case 0x5183a2:c.instructions+=1;goto B5183a2;
case 0x5183a4:goto L5183a4;
case 0x5183a7:c.instructions+=4;goto B5183a7;
case 0x5183ab:c.instructions+=3;goto B5183ab;
case 0x5183b0:c.instructions+=2;goto B5183b0;
case 0x5183b4:c.instructions+=1;goto B5183b4;
case 0x5183b6:goto L5183b6;
case 0x5183b8:goto L5183b8;
case 0x5183be:c.instructions+=1;goto B5183be;
case 0x5183c0:goto L5183c0;
case 0x5183c7:c.instructions+=1;goto B5183c7;
case 0x5183c9:goto L5183c9;
case 0x5183ca:c.instructions+=4;goto B5183ca;
case 0x5183cc:c.instructions+=3;goto B5183cc;
case 0x5183cd:c.instructions+=2;goto B5183cd;
case 0x5183ce:c.instructions+=1;goto B5183ce;
case 0x5183cf:goto L5183cf;
case 0x5183d2:c.instructions+=4;goto B5183d2;
case 0x5183d3:c.instructions+=3;goto B5183d3;
case 0x5183d7:c.instructions+=2;goto B5183d7;
case 0x5183dd:c.instructions+=1;goto B5183dd;
case 0x5183df:goto L5183df;
case 0x5183e0:c.instructions+=5;goto B5183e0;
case 0x5183e1:c.instructions+=4;goto B5183e1;
case 0x5183e3:c.instructions+=3;goto B5183e3;
case 0x5183e4:c.instructions+=2;goto B5183e4;
case 0x5183e5:c.instructions+=1;goto B5183e5;
case 0x5183e6:goto L5183e6;
case 0x5183e8:c.instructions+=7;goto B5183e8;
case 0x5183eb:c.instructions+=6;goto B5183eb;
case 0x5183ec:c.instructions+=5;goto B5183ec;
case 0x5183ee:c.instructions+=4;goto B5183ee;
case 0x5183f1:c.instructions+=3;goto B5183f1;
case 0x5183f3:c.instructions+=2;goto B5183f3;
case 0x5183f6:c.instructions+=1;goto B5183f6;
case 0x5183fc:goto L5183fc;
case 0x518400:c.instructions+=3;goto B518400;
case 0x518403:c.instructions+=2;goto B518403;
case 0x518404:c.instructions+=1;goto B518404;
case 0x518409:goto L518409;
case 0x51840b:c.instructions+=4;goto B51840b;
case 0x51840e:c.instructions+=3;goto B51840e;
case 0x518411:c.instructions+=2;goto B518411;
case 0x518412:c.instructions+=1;goto B518412;
case 0x518417:goto L518417;
case 0x518419:c.instructions+=4;goto B518419;
case 0x51841c:c.instructions+=3;goto B51841c;
case 0x51841e:c.instructions+=2;goto B51841e;
case 0x518424:c.instructions+=1;goto B518424;
case 0x518426:goto L518426;
case 0x518428:c.instructions+=2;goto B518428;
case 0x51842c:c.instructions+=1;goto B51842c;
case 0x518430:goto L518430;
case 0x518432:c.instructions+=29;goto B518432;
case 0x518435:c.instructions+=28;goto B518435;
case 0x518437:c.instructions+=27;goto B518437;
case 0x51843a:c.instructions+=26;goto B51843a;
case 0x51843c:c.instructions+=25;goto B51843c;
case 0x51843f:c.instructions+=24;goto B51843f;
case 0x518442:c.instructions+=23;goto B518442;
case 0x518446:c.instructions+=22;goto B518446;
case 0x518448:c.instructions+=21;goto B518448;
case 0x51844b:c.instructions+=20;goto B51844b;
case 0x51844e:c.instructions+=19;goto B51844e;
case 0x518452:c.instructions+=18;goto B518452;
case 0x518454:c.instructions+=17;goto B518454;
case 0x518457:c.instructions+=16;goto B518457;
case 0x51845a:c.instructions+=15;goto B51845a;
case 0x51845e:c.instructions+=14;goto B51845e;
case 0x518460:c.instructions+=13;goto B518460;
case 0x518463:c.instructions+=12;goto B518463;
case 0x518466:c.instructions+=11;goto B518466;
case 0x51846a:c.instructions+=10;goto B51846a;
case 0x51846c:c.instructions+=9;goto B51846c;
case 0x51846f:c.instructions+=8;goto B51846f;
case 0x518472:c.instructions+=7;goto B518472;
case 0x518476:c.instructions+=6;goto B518476;
case 0x51847a:c.instructions+=5;goto B51847a;
case 0x51847d:c.instructions+=4;goto B51847d;
case 0x518480:c.instructions+=3;goto B518480;
case 0x518481:c.instructions+=2;goto B518481;
case 0x518485:c.instructions+=1;goto B518485;
case 0x518487:goto L518487;
case 0x51848a:c.instructions+=5;goto B51848a;
case 0x51848c:c.instructions+=4;goto B51848c;
case 0x51848e:c.instructions+=3;goto B51848e;
case 0x518491:c.instructions+=2;goto B518491;
case 0x518494:c.instructions+=1;goto B518494;
case 0x51849a:goto L51849a;
case 0x51849c:goto L51849c;
case 0x51849e:c.instructions+=2;goto B51849e;
case 0x5184a1:c.instructions+=1;goto B5184a1;
case 0x5184a3:goto L5184a3;
case 0x5184a5:goto L5184a5;
case 0x5184a7:goto L5184a7;
case 0x5184a9:c.instructions+=1;goto B5184a9;
case 0x5184b0:goto L5184b0;
case 0x5184b2:c.instructions+=9;goto B5184b2;
case 0x5184b5:c.instructions+=8;goto B5184b5;
case 0x5184bb:c.instructions+=7;goto B5184bb;
case 0x5184bf:c.instructions+=6;goto B5184bf;
case 0x5184c3:c.instructions+=5;goto B5184c3;
case 0x5184c5:c.instructions+=4;goto B5184c5;
case 0x5184c8:c.instructions+=3;goto B5184c8;
case 0x5184c9:c.instructions+=2;goto B5184c9;
case 0x5184cb:c.instructions+=1;goto B5184cb;
case 0x5184cd:goto L5184cd;
case 0x5184ce:c.instructions+=6;goto B5184ce;
case 0x5184cf:c.instructions+=5;goto B5184cf;
case 0x5184d0:c.instructions+=4;goto B5184d0;
case 0x5184d2:c.instructions+=3;goto B5184d2;
case 0x5184d3:c.instructions+=2;goto B5184d3;
case 0x5184d4:c.instructions+=1;goto B5184d4;
case 0x5184e0:goto L5184e0;
case 0x5184e6:c.instructions+=14;goto B5184e6;
case 0x5184e8:c.instructions+=13;goto B5184e8;
case 0x5184ed:c.instructions+=12;goto B5184ed;
case 0x5184ee:c.instructions+=11;goto B5184ee;
case 0x5184f5:c.instructions+=10;goto B5184f5;
case 0x5184f8:c.instructions+=9;goto B5184f8;
case 0x5184f9:c.instructions+=8;goto B5184f9;
case 0x5184fb:c.instructions+=7;goto B5184fb;
case 0x5184fe:c.instructions+=6;goto B5184fe;
case 0x518501:c.instructions+=5;goto B518501;
case 0x518505:c.instructions+=4;goto B518505;
case 0x518508:c.instructions+=3;goto B518508;
case 0x51850b:c.instructions+=2;goto B51850b;
case 0x518511:c.instructions+=1;goto B518511;
case 0x518513:goto L518513;
case 0x518515:c.instructions+=1;goto B518515;
case 0x518517:goto L518517;
case 0x51851a:c.instructions+=3;goto B51851a;
case 0x51851e:c.instructions+=2;goto B51851e;
case 0x518524:c.instructions+=1;goto B518524;
case 0x518526:goto L518526;
case 0x51852c:c.instructions+=1;goto B51852c;
case 0x518532:goto L518532;
case 0x518533:c.instructions+=7;goto B518533;
case 0x518536:c.instructions+=6;goto B518536;
case 0x518539:c.instructions+=5;goto B518539;
case 0x51853b:c.instructions+=4;goto B51853b;
case 0x51853d:c.instructions+=3;goto B51853d;
case 0x518541:c.instructions+=2;goto B518541;
case 0x518545:c.instructions+=1;goto B518545;
case 0x51854b:goto L51854b;
case 0x51854c:c.instructions+=3;goto B51854c;
case 0x51854d:c.instructions+=2;goto B51854d;
case 0x518555:c.instructions+=1;goto B518555;
case 0x518557:goto L518557;
case 0x51855b:c.instructions+=1;goto B51855b;
case 0x518560:goto L518560;
case 0x518563:c.instructions+=2;goto B518563;
case 0x518568:c.instructions+=1;goto B518568;
case 0x51856e:goto L51856e;
case 0x518573:c.instructions+=1;goto B518573;
case 0x518579:goto L518579;
case 0x51857b:c.instructions+=15;goto B51857b;
case 0x51857e:c.instructions+=14;goto B51857e;
case 0x518582:c.instructions+=13;goto B518582;
case 0x518586:c.instructions+=12;goto B518586;
case 0x518589:c.instructions+=11;goto B518589;
case 0x51858c:c.instructions+=10;goto B51858c;
case 0x51858e:c.instructions+=9;goto B51858e;
case 0x518590:c.instructions+=8;goto B518590;
case 0x518592:c.instructions+=7;goto B518592;
case 0x518595:c.instructions+=6;goto B518595;
case 0x518598:c.instructions+=5;goto B518598;
case 0x518599:c.instructions+=4;goto B518599;
case 0x51859a:c.instructions+=3;goto B51859a;
case 0x51859c:c.instructions+=2;goto B51859c;
case 0x51859f:c.instructions+=1;goto B51859f;
case 0x5185a4:goto L5185a4;
case 0x5185a6:c.instructions+=2;goto B5185a6;
case 0x5185ae:c.instructions+=1;goto B5185ae;
case 0x5185b4:goto L5185b4;
case 0x5185b8:c.instructions+=9;goto B5185b8;
case 0x5185bb:c.instructions+=8;goto B5185bb;
case 0x5185bd:c.instructions+=7;goto B5185bd;
case 0x5185c5:c.instructions+=6;goto B5185c5;
case 0x5185c9:c.instructions+=5;goto B5185c9;
case 0x5185cd:c.instructions+=4;goto B5185cd;
case 0x5185ce:c.instructions+=3;goto B5185ce;
case 0x5185d6:c.instructions+=2;goto B5185d6;
case 0x5185de:c.instructions+=1;goto B5185de;
case 0x5185e3:goto L5185e3;
case 0x5185e5:c.instructions+=9;goto B5185e5;
case 0x5185e8:c.instructions+=8;goto B5185e8;
case 0x5185ec:c.instructions+=7;goto B5185ec;
case 0x5185f0:c.instructions+=6;goto B5185f0;
case 0x5185f4:c.instructions+=5;goto B5185f4;
case 0x5185f6:c.instructions+=4;goto B5185f6;
case 0x5185f8:c.instructions+=3;goto B5185f8;
case 0x518600:c.instructions+=2;goto B518600;
case 0x518608:c.instructions+=1;goto B518608;
case 0x51860a:goto L51860a;
case 0x51860b:c.instructions+=3;goto B51860b;
case 0x51860c:c.instructions+=2;goto B51860c;
case 0x51860e:c.instructions+=1;goto B51860e;
case 0x518613:goto L518613;
case 0x518616:c.instructions+=9;goto B518616;
case 0x518619:c.instructions+=8;goto B518619;
case 0x51861d:c.instructions+=7;goto B51861d;
case 0x518620:c.instructions+=6;goto B518620;
case 0x518623:c.instructions+=5;goto B518623;
case 0x518627:c.instructions+=4;goto B518627;
case 0x518628:c.instructions+=3;goto B518628;
case 0x51862a:c.instructions+=2;goto B51862a;
case 0x51862e:c.instructions+=1;goto B51862e;
case 0x518630:goto L518630;
case 0x518634:goto L518634;
case 0x518639:c.instructions+=1;goto B518639;
case 0x51863b:goto L51863b;
case 0x51863e:c.instructions+=7;goto B51863e;
case 0x518640:c.instructions+=6;goto B518640;
case 0x518642:c.instructions+=5;goto B518642;
case 0x518645:c.instructions+=4;goto B518645;
case 0x518648:c.instructions+=3;goto B518648;
case 0x518649:c.instructions+=2;goto B518649;
case 0x51864c:c.instructions+=1;goto B51864c;
case 0x518651:goto L518651;
case 0x518654:c.instructions+=5;goto B518654;
case 0x518658:c.instructions+=4;goto B518658;
case 0x51865a:c.instructions+=3;goto B51865a;
case 0x51865c:c.instructions+=2;goto B51865c;
case 0x518660:c.instructions+=1;goto B518660;
case 0x518662:goto L518662;
case 0x518667:c.instructions+=7;goto B518667;
case 0x51866c:c.instructions+=6;goto B51866c;
case 0x51866d:c.instructions+=5;goto B51866d;
case 0x518670:c.instructions+=4;goto B518670;
case 0x518672:c.instructions+=3;goto B518672;
case 0x518673:c.instructions+=2;goto B518673;
case 0x518675:c.instructions+=1;goto B518675;
case 0x51867a:goto L51867a;
case 0x51867c:c.instructions+=2;goto B51867c;
case 0x518684:c.instructions+=1;goto B518684;
case 0x518687:goto L518687;
case 0x51868b:c.instructions+=5;goto B51868b;
case 0x51868f:c.instructions+=4;goto B51868f;
case 0x518693:c.instructions+=3;goto B518693;
case 0x518695:c.instructions+=2;goto B518695;
case 0x518699:c.instructions+=1;goto B518699;
case 0x51869f:goto L51869f;
case 0x5186a0:c.instructions+=1;goto B5186a0;
case 0x5186a1:goto L5186a1;
case 0x5186a2:goto L5186a2;
case 0x5186a6:c.instructions+=5;goto B5186a6;
case 0x5186a8:c.instructions+=4;goto B5186a8;
case 0x5186a9:c.instructions+=3;goto B5186a9;
case 0x5186b0:c.instructions+=2;goto B5186b0;
case 0x5186b3:c.instructions+=1;goto B5186b3;
case 0x5186c0:goto L5186c0;
case 0x5186c4:c.instructions+=12;goto B5186c4;
case 0x5186c5:c.instructions+=11;goto B5186c5;
case 0x5186c9:c.instructions+=10;goto B5186c9;
case 0x5186ca:c.instructions+=9;goto B5186ca;
case 0x5186ce:c.instructions+=8;goto B5186ce;
case 0x5186cf:c.instructions+=7;goto B5186cf;
case 0x5186d0:c.instructions+=6;goto B5186d0;
case 0x5186d7:c.instructions+=5;goto B5186d7;
case 0x5186d9:c.instructions+=4;goto B5186d9;
case 0x5186df:c.instructions+=3;goto B5186df;
case 0x5186e1:c.instructions+=2;goto B5186e1;
case 0x5186e2:c.instructions+=1;goto B5186e2;
case 0x5186e7:goto L5186e7;
case 0x5186e9:c.instructions+=2;goto B5186e9;
case 0x5186eb:c.instructions+=1;goto B5186eb;
case 0x5186ed:goto L5186ed;
case 0x5186f0:c.instructions+=3;goto B5186f0;
case 0x5186f1:c.instructions+=2;goto B5186f1;
case 0x5186f4:c.instructions+=1;goto B5186f4;
case 0x5186f9:goto L5186f9;
case 0x5186fb:c.instructions+=2;goto B5186fb;
case 0x5186fd:c.instructions+=1;goto B5186fd;
case 0x5186ff:goto L5186ff;
case 0x518700:c.instructions+=5;goto B518700;
case 0x518701:c.instructions+=4;goto B518701;
case 0x518702:c.instructions+=3;goto B518702;
case 0x518704:c.instructions+=2;goto B518704;
case 0x518705:c.instructions+=1;goto B518705;
case 0x518708:goto L518708;
case 0x51870b:c.instructions+=3;goto B51870b;
case 0x51870c:c.instructions+=2;goto B51870c;
case 0x51870e:c.instructions+=1;goto B51870e;
case 0x518713:goto L518713;
case 0x518714:c.instructions+=9;goto B518714;
case 0x518716:c.instructions+=8;goto B518716;
case 0x518718:c.instructions+=7;goto B518718;
case 0x518719:c.instructions+=6;goto B518719;
case 0x51871c:c.instructions+=5;goto B51871c;
case 0x51871f:c.instructions+=4;goto B51871f;
case 0x518720:c.instructions+=3;goto B518720;
case 0x518722:c.instructions+=2;goto B518722;
case 0x518723:c.instructions+=1;goto B518723;
case 0x518730:goto L518730;
case 0x518731:c.instructions+=5;goto B518731;
case 0x518733:c.instructions+=4;goto B518733;
case 0x518736:c.instructions+=3;goto B518736;
case 0x518738:c.instructions+=2;goto B518738;
case 0x518739:c.instructions+=1;goto B518739;
case 0x51873b:goto L51873b;
case 0x51873c:c.instructions+=1;goto B51873c;
case 0x518741:goto L518741;
case 0x518744:c.instructions+=1;goto B518744;
case 0x51874b:goto L51874b;
case 0x51874f:c.instructions+=3;goto B51874f;
case 0x518751:c.instructions+=2;goto B518751;
case 0x518758:c.instructions+=1;goto B518758;
case 0x51875a:goto L51875a;
case 0x51875c:c.instructions+=2;goto B51875c;
case 0x51875f:c.instructions+=1;goto B51875f;
case 0x518760:goto L518760;
case 0x518762:c.instructions+=3;goto B518762;
case 0x518763:c.instructions+=2;goto B518763;
case 0x518765:c.instructions+=1;goto B518765;
case 0x518767:goto L518767;
case 0x518769:c.instructions+=3;goto B518769;
case 0x51876a:c.instructions+=2;goto B51876a;
case 0x51876b:c.instructions+=1;goto B51876b;
case 0x518770:goto L518770;
case 0x518773:c.instructions+=4;goto B518773;
case 0x518776:c.instructions+=3;goto B518776;
case 0x518778:c.instructions+=2;goto B518778;
case 0x51877a:c.instructions+=1;goto B51877a;
case 0x518780:goto L518780;
case 0x518782:c.instructions+=5;goto B518782;
case 0x518783:c.instructions+=4;goto B518783;
case 0x518785:c.instructions+=3;goto B518785;
case 0x518786:c.instructions+=2;goto B518786;
case 0x518788:c.instructions+=1;goto B518788;
case 0x51878a:goto L51878a;
case 0x51878d:c.instructions+=2;goto B51878d;
case 0x51878e:c.instructions+=1;goto B51878e;
case 0x518793:goto L518793;
case 0x518796:c.instructions+=1;goto B518796;
case 0x518799:goto L518799;
case 0x51879a:c.instructions+=2;goto B51879a;
case 0x51879b:c.instructions+=1;goto B51879b;
case 0x5187a0:goto L5187a0;
case 0x5187a3:c.instructions+=199;goto B5187a3;
case 0x5187a7:c.instructions+=198;goto B5187a7;
case 0x5187ab:c.instructions+=197;goto B5187ab;
case 0x5187ad:c.instructions+=196;goto B5187ad;
case 0x5187af:c.instructions+=195;goto B5187af;
case 0x5187b0:c.instructions+=194;goto B5187b0;
case 0x5187b3:c.instructions+=193;goto B5187b3;
case 0x5187b4:c.instructions+=192;goto B5187b4;
case 0x5187b7:c.instructions+=191;goto B5187b7;
case 0x5187b9:c.instructions+=190;goto B5187b9;
case 0x5187bc:c.instructions+=189;goto B5187bc;
case 0x5187bf:c.instructions+=188;goto B5187bf;
case 0x5187c1:c.instructions+=187;goto B5187c1;
case 0x5187c4:c.instructions+=186;goto B5187c4;
case 0x5187c7:c.instructions+=185;goto B5187c7;
case 0x5187c9:c.instructions+=184;goto B5187c9;
case 0x5187cd:c.instructions+=183;goto B5187cd;
case 0x5187d0:c.instructions+=182;goto B5187d0;
case 0x5187d3:c.instructions+=181;goto B5187d3;
case 0x5187d6:c.instructions+=180;goto B5187d6;
case 0x5187d8:c.instructions+=179;goto B5187d8;
case 0x5187da:c.instructions+=178;goto B5187da;
case 0x5187dd:c.instructions+=177;goto B5187dd;
case 0x5187e0:c.instructions+=176;goto B5187e0;
case 0x5187e2:c.instructions+=175;goto B5187e2;
case 0x5187e5:c.instructions+=174;goto B5187e5;
case 0x5187e8:c.instructions+=173;goto B5187e8;
case 0x5187ea:c.instructions+=172;goto B5187ea;
case 0x5187ee:c.instructions+=171;goto B5187ee;
case 0x5187f1:c.instructions+=170;goto B5187f1;
case 0x5187f4:c.instructions+=169;goto B5187f4;
case 0x5187f7:c.instructions+=168;goto B5187f7;
case 0x5187fa:c.instructions+=167;goto B5187fa;
case 0x5187fc:c.instructions+=166;goto B5187fc;
case 0x5187ff:c.instructions+=165;goto B5187ff;
case 0x518801:c.instructions+=164;goto B518801;
case 0x518803:c.instructions+=163;goto B518803;
case 0x518806:c.instructions+=162;goto B518806;
case 0x518809:c.instructions+=161;goto B518809;
case 0x51880b:c.instructions+=160;goto B51880b;
case 0x51880f:c.instructions+=159;goto B51880f;
case 0x518812:c.instructions+=158;goto B518812;
case 0x518815:c.instructions+=157;goto B518815;
case 0x518818:c.instructions+=156;goto B518818;
case 0x51881b:c.instructions+=155;goto B51881b;
case 0x51881d:c.instructions+=154;goto B51881d;
case 0x518820:c.instructions+=153;goto B518820;
case 0x518823:c.instructions+=152;goto B518823;
case 0x518825:c.instructions+=151;goto B518825;
case 0x518827:c.instructions+=150;goto B518827;
case 0x51882a:c.instructions+=149;goto B51882a;
case 0x51882c:c.instructions+=148;goto B51882c;
case 0x518830:c.instructions+=147;goto B518830;
case 0x518833:c.instructions+=146;goto B518833;
case 0x518836:c.instructions+=145;goto B518836;
case 0x518839:c.instructions+=144;goto B518839;
case 0x51883c:c.instructions+=143;goto B51883c;
case 0x51883e:c.instructions+=142;goto B51883e;
case 0x518841:c.instructions+=141;goto B518841;
case 0x518844:c.instructions+=140;goto B518844;
case 0x518846:c.instructions+=139;goto B518846;
case 0x518849:c.instructions+=138;goto B518849;
case 0x51884b:c.instructions+=137;goto B51884b;
case 0x51884d:c.instructions+=136;goto B51884d;
case 0x518851:c.instructions+=135;goto B518851;
case 0x518854:c.instructions+=134;goto B518854;
case 0x518857:c.instructions+=133;goto B518857;
case 0x51885a:c.instructions+=132;goto B51885a;
case 0x51885d:c.instructions+=131;goto B51885d;
case 0x51885f:c.instructions+=130;goto B51885f;
case 0x518862:c.instructions+=129;goto B518862;
case 0x518865:c.instructions+=128;goto B518865;
case 0x518867:c.instructions+=127;goto B518867;
case 0x51886a:c.instructions+=126;goto B51886a;
case 0x51886d:c.instructions+=125;goto B51886d;
case 0x51886f:c.instructions+=124;goto B51886f;
case 0x518873:c.instructions+=123;goto B518873;
case 0x518876:c.instructions+=122;goto B518876;
case 0x518879:c.instructions+=121;goto B518879;
case 0x51887c:c.instructions+=120;goto B51887c;
case 0x51887f:c.instructions+=119;goto B51887f;
case 0x518881:c.instructions+=118;goto B518881;
case 0x518884:c.instructions+=117;goto B518884;
case 0x518887:c.instructions+=116;goto B518887;
case 0x518889:c.instructions+=115;goto B518889;
case 0x51888c:c.instructions+=114;goto B51888c;
case 0x51888f:c.instructions+=113;goto B51888f;
case 0x518891:c.instructions+=112;goto B518891;
case 0x518895:c.instructions+=111;goto B518895;
case 0x518898:c.instructions+=110;goto B518898;
case 0x51889b:c.instructions+=109;goto B51889b;
case 0x51889e:c.instructions+=108;goto B51889e;
case 0x5188a1:c.instructions+=107;goto B5188a1;
case 0x5188a3:c.instructions+=106;goto B5188a3;
case 0x5188a6:c.instructions+=105;goto B5188a6;
case 0x5188a9:c.instructions+=104;goto B5188a9;
case 0x5188ab:c.instructions+=103;goto B5188ab;
case 0x5188ae:c.instructions+=102;goto B5188ae;
case 0x5188b1:c.instructions+=101;goto B5188b1;
case 0x5188b3:c.instructions+=100;goto B5188b3;
case 0x5188b7:c.instructions+=99;goto B5188b7;
case 0x5188ba:c.instructions+=98;goto B5188ba;
case 0x5188bd:c.instructions+=97;goto B5188bd;
case 0x5188c0:c.instructions+=96;goto B5188c0;
case 0x5188c3:c.instructions+=95;goto B5188c3;
case 0x5188c5:c.instructions+=94;goto B5188c5;
case 0x5188c8:c.instructions+=93;goto B5188c8;
case 0x5188cb:c.instructions+=92;goto B5188cb;
case 0x5188cd:c.instructions+=91;goto B5188cd;
case 0x5188d0:c.instructions+=90;goto B5188d0;
case 0x5188d2:c.instructions+=89;goto B5188d2;
case 0x5188d4:c.instructions+=88;goto B5188d4;
case 0x5188d8:c.instructions+=87;goto B5188d8;
case 0x5188db:c.instructions+=86;goto B5188db;
case 0x5188de:c.instructions+=85;goto B5188de;
case 0x5188e1:c.instructions+=84;goto B5188e1;
case 0x5188e4:c.instructions+=83;goto B5188e4;
case 0x5188e6:c.instructions+=82;goto B5188e6;
case 0x5188e9:c.instructions+=81;goto B5188e9;
case 0x5188ec:c.instructions+=80;goto B5188ec;
case 0x5188ee:c.instructions+=79;goto B5188ee;
case 0x5188f1:c.instructions+=78;goto B5188f1;
case 0x5188f4:c.instructions+=77;goto B5188f4;
case 0x5188f6:c.instructions+=76;goto B5188f6;
case 0x5188fa:c.instructions+=75;goto B5188fa;
case 0x5188fd:c.instructions+=74;goto B5188fd;
case 0x518900:c.instructions+=73;goto B518900;
case 0x518903:c.instructions+=72;goto B518903;
case 0x518906:c.instructions+=71;goto B518906;
case 0x518908:c.instructions+=70;goto B518908;
case 0x51890b:c.instructions+=69;goto B51890b;
case 0x51890e:c.instructions+=68;goto B51890e;
case 0x518910:c.instructions+=67;goto B518910;
case 0x518913:c.instructions+=66;goto B518913;
case 0x518916:c.instructions+=65;goto B518916;
case 0x518918:c.instructions+=64;goto B518918;
case 0x51891c:c.instructions+=63;goto B51891c;
case 0x51891f:c.instructions+=62;goto B51891f;
case 0x518922:c.instructions+=61;goto B518922;
case 0x518925:c.instructions+=60;goto B518925;
case 0x518928:c.instructions+=59;goto B518928;
case 0x51892a:c.instructions+=58;goto B51892a;
case 0x51892d:c.instructions+=57;goto B51892d;
case 0x518930:c.instructions+=56;goto B518930;
case 0x518932:c.instructions+=55;goto B518932;
case 0x518935:c.instructions+=54;goto B518935;
case 0x518938:c.instructions+=53;goto B518938;
case 0x51893a:c.instructions+=52;goto B51893a;
case 0x51893e:c.instructions+=51;goto B51893e;
case 0x518941:c.instructions+=50;goto B518941;
case 0x518944:c.instructions+=49;goto B518944;
case 0x518947:c.instructions+=48;goto B518947;
case 0x51894a:c.instructions+=47;goto B51894a;
case 0x51894c:c.instructions+=46;goto B51894c;
case 0x51894f:c.instructions+=45;goto B51894f;
case 0x518952:c.instructions+=44;goto B518952;
case 0x518954:c.instructions+=43;goto B518954;
case 0x518957:c.instructions+=42;goto B518957;
case 0x518959:c.instructions+=41;goto B518959;
case 0x51895b:c.instructions+=40;goto B51895b;
case 0x51895f:c.instructions+=39;goto B51895f;
case 0x518962:c.instructions+=38;goto B518962;
case 0x518965:c.instructions+=37;goto B518965;
case 0x518968:c.instructions+=36;goto B518968;
case 0x51896b:c.instructions+=35;goto B51896b;
case 0x51896d:c.instructions+=34;goto B51896d;
case 0x518970:c.instructions+=33;goto B518970;
case 0x518973:c.instructions+=32;goto B518973;
case 0x518975:c.instructions+=31;goto B518975;
case 0x518978:c.instructions+=30;goto B518978;
case 0x51897b:c.instructions+=29;goto B51897b;
case 0x51897d:c.instructions+=28;goto B51897d;
case 0x518981:c.instructions+=27;goto B518981;
case 0x518984:c.instructions+=26;goto B518984;
case 0x518987:c.instructions+=25;goto B518987;
case 0x51898a:c.instructions+=24;goto B51898a;
case 0x51898d:c.instructions+=23;goto B51898d;
case 0x51898f:c.instructions+=22;goto B51898f;
case 0x518992:c.instructions+=21;goto B518992;
case 0x518995:c.instructions+=20;goto B518995;
case 0x518997:c.instructions+=19;goto B518997;
case 0x51899a:c.instructions+=18;goto B51899a;
case 0x51899d:c.instructions+=17;goto B51899d;
case 0x51899f:c.instructions+=16;goto B51899f;
case 0x5189a3:c.instructions+=15;goto B5189a3;
case 0x5189a7:c.instructions+=14;goto B5189a7;
case 0x5189aa:c.instructions+=13;goto B5189aa;
case 0x5189ae:c.instructions+=12;goto B5189ae;
case 0x5189b1:c.instructions+=11;goto B5189b1;
case 0x5189b4:c.instructions+=10;goto B5189b4;
case 0x5189b7:c.instructions+=9;goto B5189b7;
case 0x5189b9:c.instructions+=8;goto B5189b9;
case 0x5189bc:c.instructions+=7;goto B5189bc;
case 0x5189bf:c.instructions+=6;goto B5189bf;
case 0x5189c1:c.instructions+=5;goto B5189c1;
case 0x5189c4:c.instructions+=4;goto B5189c4;
case 0x5189c7:c.instructions+=3;goto B5189c7;
case 0x5189cc:c.instructions+=2;goto B5189cc;
case 0x5189ce:c.instructions+=1;goto B5189ce;
case 0x5189d2:goto L5189d2;
case 0x5189d4:goto L5189d4;
case 0x5189d5:c.instructions+=3;goto B5189d5;
case 0x5189d6:c.instructions+=2;goto B5189d6;
case 0x5189d9:c.instructions+=1;goto B5189d9;
case 0x5189e0:goto L5189e0;
case 0x5189e1:c.instructions+=22;goto B5189e1;
case 0x5189e3:c.instructions+=21;goto B5189e3;
case 0x5189e6:c.instructions+=20;goto B5189e6;
case 0x5189e9:c.instructions+=19;goto B5189e9;
case 0x5189ec:c.instructions+=18;goto B5189ec;
case 0x5189ed:c.instructions+=17;goto B5189ed;
case 0x5189ee:c.instructions+=16;goto B5189ee;
case 0x5189ef:c.instructions+=15;goto B5189ef;
case 0x5189f1:c.instructions+=14;goto B5189f1;
case 0x5189f4:c.instructions+=13;goto B5189f4;
case 0x5189f8:c.instructions+=12;goto B5189f8;
case 0x5189f9:c.instructions+=11;goto B5189f9;
case 0x5189fa:c.instructions+=10;goto B5189fa;
case 0x5189fc:c.instructions+=9;goto B5189fc;
case 0x5189fd:c.instructions+=8;goto B5189fd;
case 0x5189ff:c.instructions+=7;goto B5189ff;
case 0x518a07:c.instructions+=6;goto B518a07;
case 0x518a0f:c.instructions+=5;goto B518a0f;
case 0x518a17:c.instructions+=4;goto B518a17;
case 0x518a1f:c.instructions+=3;goto B518a1f;
case 0x518a27:c.instructions+=2;goto B518a27;
case 0x518a2b:c.instructions+=1;goto B518a2b;
case 0x518a30:goto L518a30;
case 0x518a35:c.instructions+=2;goto B518a35;
case 0x518a39:c.instructions+=1;goto B518a39;
case 0x518a40:goto L518a40;
case 0x518a42:c.instructions+=1;goto B518a42;
case 0x518a44:goto L518a44;
case 0x518a47:c.instructions+=2;goto B518a47;
case 0x518a4d:c.instructions+=1;goto B518a4d;
case 0x518a53:goto L518a53;
case 0x518a57:c.instructions+=9;goto B518a57;
case 0x518a5a:c.instructions+=8;goto B518a5a;
case 0x518a5c:c.instructions+=7;goto B518a5c;
case 0x518a5e:c.instructions+=6;goto B518a5e;
case 0x518a60:c.instructions+=5;goto B518a60;
case 0x518a64:c.instructions+=4;goto B518a64;
case 0x518a68:c.instructions+=3;goto B518a68;
case 0x518a6b:c.instructions+=2;goto B518a6b;
case 0x518a6f:c.instructions+=1;goto B518a6f;
case 0x518a75:goto L518a75;
case 0x518a80:goto L518a80;
case 0x518a82:c.instructions+=3;goto B518a82;
case 0x518a85:c.instructions+=2;goto B518a85;
case 0x518a8c:c.instructions+=1;goto B518a8c;
case 0x518a92:goto L518a92;
case 0x518a95:c.instructions+=1;goto B518a95;
case 0x518a9b:goto L518a9b;
case 0x518a9e:c.instructions+=6;goto B518a9e;
case 0x518aa2:c.instructions+=5;goto B518aa2;
case 0x518aa3:c.instructions+=4;goto B518aa3;
case 0x518aa4:c.instructions+=3;goto B518aa4;
case 0x518aa5:c.instructions+=2;goto B518aa5;
case 0x518aa7:c.instructions+=1;goto B518aa7;
case 0x518aac:goto L518aac;
case 0x518ab0:c.instructions+=14;goto B518ab0;
case 0x518ab4:c.instructions+=13;goto B518ab4;
case 0x518ab8:c.instructions+=12;goto B518ab8;
case 0x518abc:c.instructions+=11;goto B518abc;
case 0x518abe:c.instructions+=10;goto B518abe;
case 0x518ac0:c.instructions+=9;goto B518ac0;
case 0x518ac2:c.instructions+=8;goto B518ac2;
case 0x518ac4:c.instructions+=7;goto B518ac4;
case 0x518ac6:c.instructions+=6;goto B518ac6;
case 0x518ac8:c.instructions+=5;goto B518ac8;
case 0x518acc:c.instructions+=4;goto B518acc;
case 0x518ad2:c.instructions+=3;goto B518ad2;
case 0x518ad4:c.instructions+=2;goto B518ad4;
case 0x518ad7:c.instructions+=1;goto B518ad7;
case 0x518ad9:goto L518ad9;
case 0x518adf:c.instructions+=14;goto B518adf;
case 0x518ae2:c.instructions+=13;goto B518ae2;
case 0x518ae6:c.instructions+=12;goto B518ae6;
case 0x518ae8:c.instructions+=11;goto B518ae8;
case 0x518aea:c.instructions+=10;goto B518aea;
case 0x518aee:c.instructions+=9;goto B518aee;
case 0x518af0:c.instructions+=8;goto B518af0;
case 0x518af7:c.instructions+=7;goto B518af7;
case 0x518afb:c.instructions+=6;goto B518afb;
case 0x518b02:c.instructions+=5;goto B518b02;
case 0x518b04:c.instructions+=4;goto B518b04;
case 0x518b0a:c.instructions+=3;goto B518b0a;
case 0x518b0c:c.instructions+=2;goto B518b0c;
case 0x518b0f:c.instructions+=1;goto B518b0f;
case 0x518b11:goto L518b11;
case 0x518b13:c.instructions+=1;goto B518b13;
case 0x518b15:goto L518b15;
case 0x518b1b:c.instructions+=3;goto B518b1b;
case 0x518b1d:c.instructions+=2;goto B518b1d;
case 0x518b20:c.instructions+=1;goto B518b20;
case 0x518b22:goto L518b22;
case 0x518b28:c.instructions+=3;goto B518b28;
case 0x518b2e:c.instructions+=2;goto B518b2e;
case 0x518b32:c.instructions+=1;goto B518b32;
case 0x518b34:goto L518b34;
case 0x518b36:c.instructions+=1;goto B518b36;
case 0x518b3c:goto L518b3c;
case 0x518b40:c.instructions+=3;goto B518b40;
case 0x518b42:c.instructions+=2;goto B518b42;
case 0x518b45:c.instructions+=1;goto B518b45;
case 0x518b47:goto L518b47;
case 0x518b4b:c.instructions+=2;goto B518b4b;
case 0x518b4f:c.instructions+=1;goto B518b4f;
case 0x518b51:goto L518b51;
case 0x518b53:goto L518b53;
case 0x518b55:goto L518b55;
case 0x518b58:c.instructions+=3;goto B518b58;
case 0x518b59:c.instructions+=2;goto B518b59;
case 0x518b5b:c.instructions+=1;goto B518b5b;
case 0x518b61:goto L518b61;
case 0x518b65:goto L518b65;
case 0x518b68:c.instructions+=4;goto B518b68;
case 0x518b6b:c.instructions+=3;goto B518b6b;
case 0x518b6e:c.instructions+=2;goto B518b6e;
case 0x518b72:c.instructions+=1;goto B518b72;
case 0x518b78:goto L518b78;
case 0x518b7c:c.instructions+=4;goto B518b7c;
case 0x518b82:c.instructions+=3;goto B518b82;
case 0x518b84:c.instructions+=2;goto B518b84;
case 0x518b87:c.instructions+=1;goto B518b87;
case 0x518b89:goto L518b89;
case 0x518b8b:c.instructions+=8;goto B518b8b;
case 0x518b8f:c.instructions+=7;goto B518b8f;
case 0x518b92:c.instructions+=6;goto B518b92;
case 0x518b93:c.instructions+=5;goto B518b93;
case 0x518b94:c.instructions+=4;goto B518b94;
case 0x518b95:c.instructions+=3;goto B518b95;
case 0x518b97:c.instructions+=2;goto B518b97;
case 0x518b98:c.instructions+=1;goto B518b98;
case 0x518b9b:goto L518b9b;
case 0x518b9c:c.instructions+=6;goto B518b9c;
case 0x518b9d:c.instructions+=5;goto B518b9d;
case 0x518b9f:c.instructions+=4;goto B518b9f;
case 0x518ba0:c.instructions+=3;goto B518ba0;
case 0x518ba2:c.instructions+=2;goto B518ba2;
case 0x518ba3:c.instructions+=1;goto B518ba3;
case 0x518bb0:goto L518bb0;
case 0x518bb3:c.instructions+=5;goto B518bb3;
case 0x518bb4:c.instructions+=4;goto B518bb4;
case 0x518bb8:c.instructions+=3;goto B518bb8;
case 0x518bba:c.instructions+=2;goto B518bba;
case 0x518bbd:c.instructions+=1;goto B518bbd;
case 0x518bbf:goto L518bbf;
case 0x518bc1:c.instructions+=1;goto B518bc1;
case 0x518bc3:goto L518bc3;
case 0x518bc6:c.instructions+=1;goto B518bc6;
case 0x518bc8:goto L518bc8;
case 0x518bca:goto L518bca;
case 0x518bce:c.instructions+=1;goto B518bce;
case 0x518bd0:goto L518bd0;
case 0x518bd3:c.instructions+=3;goto B518bd3;
case 0x518bd5:c.instructions+=2;goto B518bd5;
case 0x518bd7:c.instructions+=1;goto B518bd7;
case 0x518bd9:goto L518bd9;
case 0x518bda:c.instructions+=4;goto B518bda;
case 0x518bdc:c.instructions+=3;goto B518bdc;
case 0x518bdd:c.instructions+=2;goto B518bdd;
case 0x518be0:c.instructions+=1;goto B518be0;
case 0x518be3:goto L518be3;
case 0x518be6:c.instructions+=1;goto B518be6;
case 0x518be8:goto L518be8;
case 0x518bea:c.instructions+=6;goto B518bea;
case 0x518beb:c.instructions+=5;goto B518beb;
case 0x518bed:c.instructions+=4;goto B518bed;
case 0x518bef:c.instructions+=3;goto B518bef;
case 0x518bf2:c.instructions+=2;goto B518bf2;
case 0x518bf3:c.instructions+=1;goto B518bf3;
case 0x518bf6:goto L518bf6;
case 0x518bf8:goto L518bf8;
case 0x518bfb:c.instructions+=2;goto B518bfb;
case 0x518bfc:c.instructions+=1;goto B518bfc;
case 0x518c00:goto L518c00;
case 0x518c06:c.instructions+=5;goto B518c06;
case 0x518c07:c.instructions+=4;goto B518c07;
case 0x518c0b:c.instructions+=3;goto B518c0b;
case 0x518c0d:c.instructions+=2;goto B518c0d;
case 0x518c10:c.instructions+=1;goto B518c10;
case 0x518c12:goto L518c12;
case 0x518c14:c.instructions+=1;goto B518c14;
case 0x518c16:goto L518c16;
case 0x518c19:c.instructions+=1;goto B518c19;
case 0x518c1b:goto L518c1b;
case 0x518c1d:goto L518c1d;
case 0x518c21:c.instructions+=1;goto B518c21;
case 0x518c23:goto L518c23;
case 0x518c26:c.instructions+=3;goto B518c26;
case 0x518c28:c.instructions+=2;goto B518c28;
case 0x518c2a:c.instructions+=1;goto B518c2a;
case 0x518c2c:goto L518c2c;
case 0x518c2d:c.instructions+=4;goto B518c2d;
case 0x518c2f:c.instructions+=3;goto B518c2f;
case 0x518c30:c.instructions+=2;goto B518c30;
case 0x518c33:c.instructions+=1;goto B518c33;
case 0x518c36:goto L518c36;
case 0x518c39:c.instructions+=1;goto B518c39;
case 0x518c3b:goto L518c3b;
case 0x518c3d:c.instructions+=6;goto B518c3d;
case 0x518c3e:c.instructions+=5;goto B518c3e;
case 0x518c40:c.instructions+=4;goto B518c40;
case 0x518c42:c.instructions+=3;goto B518c42;
case 0x518c45:c.instructions+=2;goto B518c45;
case 0x518c46:c.instructions+=1;goto B518c46;
case 0x518c49:goto L518c49;
case 0x518c4b:goto L518c4b;
case 0x518c4e:c.instructions+=2;goto B518c4e;
case 0x518c4f:c.instructions+=1;goto B518c4f;
case 0x518c60:goto L518c60;
case 0x518c63:c.instructions+=18;goto B518c63;
case 0x518c64:c.instructions+=17;goto B518c64;
case 0x518c68:c.instructions+=16;goto B518c68;
case 0x518c69:c.instructions+=15;goto B518c69;
case 0x518c6a:c.instructions+=14;goto B518c6a;
case 0x518c6c:c.instructions+=13;goto B518c6c;
case 0x518c72:c.instructions+=12;goto B518c72;
case 0x518c78:c.instructions+=11;goto B518c78;
case 0x518c79:c.instructions+=10;goto B518c79;
case 0x518c7b:c.instructions+=9;goto B518c7b;
case 0x518c7d:c.instructions+=8;goto B518c7d;
case 0x518c81:c.instructions+=7;goto B518c81;
case 0x518c85:c.instructions+=6;goto B518c85;
case 0x518c8b:c.instructions+=5;goto B518c8b;
case 0x518c91:c.instructions+=4;goto B518c91;
case 0x518c97:c.instructions+=3;goto B518c97;
case 0x518c9d:c.instructions+=2;goto B518c9d;
case 0x518ca3:c.instructions+=1;goto B518ca3;
case 0x518ca9:goto L518ca9;
case 0x518cad:c.instructions+=2;goto B518cad;
case 0x518caf:c.instructions+=1;goto B518caf;
case 0x518cb5:goto L518cb5;
case 0x518cb7:c.instructions+=4;goto B518cb7;
case 0x518cba:c.instructions+=3;goto B518cba;
case 0x518cbc:c.instructions+=2;goto B518cbc;
case 0x518cbd:c.instructions+=1;goto B518cbd;
case 0x518cc2:goto L518cc2;
case 0x518cc9:c.instructions+=3;goto B518cc9;
case 0x518cca:c.instructions+=2;goto B518cca;
case 0x518cd0:c.instructions+=1;goto B518cd0;
case 0x518cd5:goto L518cd5;
case 0x518cd7:c.instructions+=5;goto B518cd7;
case 0x518cdd:c.instructions+=4;goto B518cdd;
case 0x518cdf:c.instructions+=3;goto B518cdf;
case 0x518ce5:c.instructions+=2;goto B518ce5;
case 0x518ce8:c.instructions+=1;goto B518ce8;
case 0x518cea:goto L518cea;
case 0x518cec:goto L518cec;
case 0x518cee:c.instructions+=1;goto B518cee;
case 0x518cf1:goto L518cf1;
case 0x518cf3:goto L518cf3;
case 0x518cf6:c.instructions+=3;goto B518cf6;
case 0x518cf8:c.instructions+=2;goto B518cf8;
case 0x518cfa:c.instructions+=1;goto B518cfa;
case 0x518cfc:goto L518cfc;
case 0x518cfe:c.instructions+=1;goto B518cfe;
case 0x518d02:goto L518d02;
case 0x518d08:c.instructions+=7;goto B518d08;
case 0x518d0e:c.instructions+=6;goto B518d0e;
case 0x518d10:c.instructions+=5;goto B518d10;
case 0x518d14:c.instructions+=4;goto B518d14;
case 0x518d15:c.instructions+=3;goto B518d15;
case 0x518d17:c.instructions+=2;goto B518d17;
case 0x518d19:c.instructions+=1;goto B518d19;
case 0x518d1b:goto L518d1b;
case 0x518d1f:goto L518d1f;
case 0x518d23:c.instructions+=4;goto B518d23;
case 0x518d25:c.instructions+=3;goto B518d25;
case 0x518d2b:c.instructions+=2;goto B518d2b;
case 0x518d31:c.instructions+=1;goto B518d31;
case 0x518d37:goto L518d37;
case 0x518d3b:c.instructions+=2;goto B518d3b;
case 0x518d3d:c.instructions+=1;goto B518d3d;
case 0x518d43:goto L518d43;
case 0x518d46:c.instructions+=4;goto B518d46;
case 0x518d48:c.instructions+=3;goto B518d48;
case 0x518d4a:c.instructions+=2;goto B518d4a;
case 0x518d4e:c.instructions+=1;goto B518d4e;
case 0x518d54:goto L518d54;
case 0x518d57:c.instructions+=3;goto B518d57;
case 0x518d59:c.instructions+=2;goto B518d59;
case 0x518d5b:c.instructions+=1;goto B518d5b;
case 0x518d61:goto L518d61;
case 0x518d64:c.instructions+=9;goto B518d64;
case 0x518d6a:c.instructions+=8;goto B518d6a;
case 0x518d6d:c.instructions+=7;goto B518d6d;
case 0x518d6f:c.instructions+=6;goto B518d6f;
case 0x518d72:c.instructions+=5;goto B518d72;
case 0x518d75:c.instructions+=4;goto B518d75;
case 0x518d79:c.instructions+=3;goto B518d79;
case 0x518d7b:c.instructions+=2;goto B518d7b;
case 0x518d7e:c.instructions+=1;goto B518d7e;
case 0x518d80:goto L518d80;
case 0x518d86:c.instructions+=10;goto B518d86;
case 0x518d8c:c.instructions+=9;goto B518d8c;
case 0x518d8f:c.instructions+=8;goto B518d8f;
case 0x518d92:c.instructions+=7;goto B518d92;
case 0x518d93:c.instructions+=6;goto B518d93;
case 0x518d95:c.instructions+=5;goto B518d95;
case 0x518d9b:c.instructions+=4;goto B518d9b;
case 0x518da0:c.instructions+=3;goto B518da0;
case 0x518da3:c.instructions+=2;goto B518da3;
case 0x518da5:c.instructions+=1;goto B518da5;
case 0x518da7:goto L518da7;
case 0x518dab:c.instructions+=4;goto B518dab;
case 0x518dad:c.instructions+=3;goto B518dad;
case 0x518dae:c.instructions+=2;goto B518dae;
case 0x518db1:c.instructions+=1;goto B518db1;
case 0x518db3:goto L518db3;
case 0x518db5:goto L518db5;
case 0x518db7:c.instructions+=1;goto B518db7;
case 0x518db9:goto L518db9;
case 0x518dbd:c.instructions+=5;goto B518dbd;
case 0x518dc0:c.instructions+=4;goto B518dc0;
case 0x518dc3:c.instructions+=3;goto B518dc3;
case 0x518dc4:c.instructions+=2;goto B518dc4;
case 0x518dc9:c.instructions+=1;goto B518dc9;
case 0x518dcb:goto L518dcb;
case 0x518dcf:goto L518dcf;
case 0x518dd4:goto L518dd4;
case 0x518dd7:c.instructions+=3;goto B518dd7;
case 0x518dd8:c.instructions+=2;goto B518dd8;
case 0x518dda:c.instructions+=1;goto B518dda;
case 0x518ddc:goto L518ddc;
case 0x518ddf:c.instructions+=4;goto B518ddf;
case 0x518de0:c.instructions+=3;goto B518de0;
case 0x518de2:c.instructions+=2;goto B518de2;
case 0x518de6:c.instructions+=1;goto B518de6;
case 0x518dec:goto L518dec;
case 0x518dee:goto L518dee;
case 0x518df2:c.instructions+=2;goto B518df2;
case 0x518df4:c.instructions+=1;goto B518df4;
case 0x518df6:goto L518df6;
case 0x518df7:c.instructions+=1;goto B518df7;
case 0x518dfc:goto L518dfc;
case 0x518dff:c.instructions+=1;goto B518dff;
case 0x518e01:goto L518e01;
case 0x518e03:goto L518e03;
case 0x518e07:c.instructions+=6;goto B518e07;
case 0x518e09:c.instructions+=5;goto B518e09;
case 0x518e0a:c.instructions+=4;goto B518e0a;
case 0x518e0b:c.instructions+=3;goto B518e0b;
case 0x518e0c:c.instructions+=2;goto B518e0c;
case 0x518e0d:c.instructions+=1;goto B518e0d;
case 0x518e0f:goto L518e0f;
case 0x518e10:c.instructions+=1;goto B518e10;
case 0x518e15:goto L518e15;
case 0x518e18:goto L518e18;
case 0x518e1b:c.instructions+=1;goto B518e1b;
case 0x518e20:goto L518e20;
case 0x518e23:c.instructions+=15;goto B518e23;
case 0x518e27:c.instructions+=14;goto B518e27;
case 0x518e2d:c.instructions+=13;goto B518e2d;
case 0x518e2e:c.instructions+=12;goto B518e2e;
case 0x518e2f:c.instructions+=11;goto B518e2f;
case 0x518e30:c.instructions+=10;goto B518e30;
case 0x518e36:c.instructions+=9;goto B518e36;
case 0x518e38:c.instructions+=8;goto B518e38;
case 0x518e39:c.instructions+=7;goto B518e39;
case 0x518e3b:c.instructions+=6;goto B518e3b;
case 0x518e3e:c.instructions+=5;goto B518e3e;
case 0x518e41:c.instructions+=4;goto B518e41;
case 0x518e44:c.instructions+=3;goto B518e44;
case 0x518e4a:c.instructions+=2;goto B518e4a;
case 0x518e4e:c.instructions+=1;goto B518e4e;
case 0x518e53:goto L518e53;
case 0x518e55:c.instructions+=9;goto B518e55;
case 0x518e56:c.instructions+=8;goto B518e56;
case 0x518e59:c.instructions+=7;goto B518e59;
case 0x518e5c:c.instructions+=6;goto B518e5c;
case 0x518e5f:c.instructions+=5;goto B518e5f;
case 0x518e60:c.instructions+=4;goto B518e60;
case 0x518e61:c.instructions+=3;goto B518e61;
case 0x518e62:c.instructions+=2;goto B518e62;
case 0x518e65:c.instructions+=1;goto B518e65;
case 0x518e70:goto L518e70;
case 0x518e74:c.instructions+=9;goto B518e74;
case 0x518e75:c.instructions+=8;goto B518e75;
case 0x518e76:c.instructions+=7;goto B518e76;
case 0x518e78:c.instructions+=6;goto B518e78;
case 0x518e7b:c.instructions+=5;goto B518e7b;
case 0x518e7d:c.instructions+=4;goto B518e7d;
case 0x518e80:c.instructions+=3;goto B518e80;
case 0x518e81:c.instructions+=2;goto B518e81;
case 0x518e85:c.instructions+=1;goto B518e85;
case 0x518e87:goto L518e87;
case 0x518e89:c.instructions+=1;goto B518e89;
case 0x518e8b:goto L518e8b;
case 0x518e8e:c.instructions+=6;goto B518e8e;
case 0x518e90:c.instructions+=5;goto B518e90;
case 0x518e92:c.instructions+=4;goto B518e92;
case 0x518e97:c.instructions+=3;goto B518e97;
case 0x518e98:c.instructions+=2;goto B518e98;
case 0x518e9d:c.instructions+=1;goto B518e9d;
case 0x518ea2:goto L518ea2;
case 0x518ea5:c.instructions+=3;goto B518ea5;
case 0x518ea6:c.instructions+=2;goto B518ea6;
case 0x518ea8:c.instructions+=1;goto B518ea8;
case 0x518eab:goto L518eab;
case 0x518ead:goto L518ead;
case 0x518eb0:c.instructions+=1;goto B518eb0;
case 0x518eb2:goto L518eb2;
case 0x518eb4:c.instructions+=2;goto B518eb4;
case 0x518eb8:c.instructions+=1;goto B518eb8;
case 0x518eba:goto L518eba;
case 0x518ebe:c.instructions+=3;goto B518ebe;
case 0x518ec0:c.instructions+=2;goto B518ec0;
case 0x518ec2:c.instructions+=1;goto B518ec2;
case 0x518ec4:goto L518ec4;
case 0x518ec6:goto L518ec6;
case 0x518ec8:c.instructions+=1;goto B518ec8;
case 0x518eca:goto L518eca;
case 0x518ecc:c.instructions+=3;goto B518ecc;
case 0x518ed1:c.instructions+=2;goto B518ed1;
case 0x518ed2:c.instructions+=1;goto B518ed2;
case 0x518ed7:goto L518ed7;
case 0x518eda:c.instructions+=2;goto B518eda;
case 0x518edc:c.instructions+=1;goto B518edc;
case 0x518ee1:goto L518ee1;
case 0x518ee4:c.instructions+=3;goto B518ee4;
case 0x518ee5:c.instructions+=2;goto B518ee5;
case 0x518ee7:c.instructions+=1;goto B518ee7;
case 0x518eea:goto L518eea;
case 0x518eeb:c.instructions+=4;goto B518eeb;
case 0x518eec:c.instructions+=3;goto B518eec;
case 0x518eee:c.instructions+=2;goto B518eee;
case 0x518eef:c.instructions+=1;goto B518eef;
case 0x518ef2:goto L518ef2;
case 0x518ef6:c.instructions+=3;goto B518ef6;
case 0x518ef8:c.instructions+=2;goto B518ef8;
case 0x518efa:c.instructions+=1;goto B518efa;
case 0x518efc:goto L518efc;
case 0x518efe:c.instructions+=4;goto B518efe;
case 0x518f03:c.instructions+=3;goto B518f03;
case 0x518f04:c.instructions+=2;goto B518f04;
case 0x518f09:c.instructions+=1;goto B518f09;
case 0x518f0b:goto L518f0b;
case 0x518f0c:c.instructions+=4;goto B518f0c;
case 0x518f0d:c.instructions+=3;goto B518f0d;
case 0x518f0f:c.instructions+=2;goto B518f0f;
case 0x518f10:c.instructions+=1;goto B518f10;
case 0x518f20:goto L518f20;
case 0x518f21:c.instructions+=5;goto B518f21;
case 0x518f22:c.instructions+=4;goto B518f22;
case 0x518f26:c.instructions+=3;goto B518f26;
case 0x518f28:c.instructions+=2;goto B518f28;
case 0x518f2a:c.instructions+=1;goto B518f2a;
case 0x518f2c:goto L518f2c;
case 0x518f2d:c.instructions+=3;goto B518f2d;
case 0x518f2f:c.instructions+=2;goto B518f2f;
case 0x518f30:c.instructions+=1;goto B518f30;
case 0x518f33:goto L518f33;
case 0x518f37:c.instructions+=14;goto B518f37;
case 0x518f39:c.instructions+=13;goto B518f39;
case 0x518f3d:c.instructions+=12;goto B518f3d;
case 0x518f3f:c.instructions+=11;goto B518f3f;
case 0x518f40:c.instructions+=10;goto B518f40;
case 0x518f44:c.instructions+=9;goto B518f44;
case 0x518f45:c.instructions+=8;goto B518f45;
case 0x518f49:c.instructions+=7;goto B518f49;
case 0x518f4a:c.instructions+=6;goto B518f4a;
case 0x518f4b:c.instructions+=5;goto B518f4b;
case 0x518f4c:c.instructions+=4;goto B518f4c;
case 0x518f4d:c.instructions+=3;goto B518f4d;
case 0x518f4e:c.instructions+=2;goto B518f4e;
case 0x518f50:c.instructions+=1;goto B518f50;
case 0x518f55:goto L518f55;
case 0x518f57:c.instructions+=1;goto B518f57;
case 0x518f59:goto L518f59;
case 0x518f5a:c.instructions+=5;goto B518f5a;
case 0x518f5b:c.instructions+=4;goto B518f5b;
case 0x518f5c:c.instructions+=3;goto B518f5c;
case 0x518f5e:c.instructions+=2;goto B518f5e;
case 0x518f5f:c.instructions+=1;goto B518f5f;
case 0x518f62:goto L518f62;
case 0x518f66:c.instructions+=8;goto B518f66;
case 0x518f6a:c.instructions+=7;goto B518f6a;
case 0x518f6b:c.instructions+=6;goto B518f6b;
case 0x518f6c:c.instructions+=5;goto B518f6c;
case 0x518f6d:c.instructions+=4;goto B518f6d;
case 0x518f6e:c.instructions+=3;goto B518f6e;
case 0x518f6f:c.instructions+=2;goto B518f6f;
case 0x518f71:c.instructions+=1;goto B518f71;
case 0x518f76:goto L518f76;
case 0x518f78:c.instructions+=1;goto B518f78;
case 0x518f7a:goto L518f7a;
case 0x518f7c:c.instructions+=2;goto B518f7c;
case 0x518f7e:c.instructions+=1;goto B518f7e;
case 0x518f84:goto L518f84;
case 0x518f88:c.instructions+=2;goto B518f88;
case 0x518f8a:c.instructions+=1;goto B518f8a;
case 0x518f90:goto L518f90;
case 0x518f92:c.instructions+=1;goto B518f92;
case 0x518f98:goto L518f98;
case 0x518f9b:c.instructions+=8;goto B518f9b;
case 0x518f9e:c.instructions+=7;goto B518f9e;
case 0x518fa1:c.instructions+=6;goto B518fa1;
case 0x518fa5:c.instructions+=5;goto B518fa5;
case 0x518fa8:c.instructions+=4;goto B518fa8;
case 0x518fa9:c.instructions+=3;goto B518fa9;
case 0x518fad:c.instructions+=2;goto B518fad;
case 0x518fae:c.instructions+=1;goto B518fae;
case 0x518fb3:goto L518fb3;
case 0x518fb7:c.instructions+=4;goto B518fb7;
case 0x518fbd:c.instructions+=3;goto B518fbd;
case 0x518fc0:c.instructions+=2;goto B518fc0;
case 0x518fc2:c.instructions+=1;goto B518fc2;
case 0x518fc8:goto L518fc8;
case 0x518fcb:c.instructions+=3;goto B518fcb;
case 0x518fcd:c.instructions+=2;goto B518fcd;
case 0x518fcf:c.instructions+=1;goto B518fcf;
case 0x518fd5:goto L518fd5;
case 0x518fe0:goto L518fe0;
case 0x518fe3:c.instructions+=8;goto B518fe3;
case 0x518fe9:c.instructions+=7;goto B518fe9;
case 0x518fec:c.instructions+=6;goto B518fec;
case 0x518fef:c.instructions+=5;goto B518fef;
case 0x518ff2:c.instructions+=4;goto B518ff2;
case 0x518ff6:c.instructions+=3;goto B518ff6;
case 0x518ffa:c.instructions+=2;goto B518ffa;
case 0x518ffe:c.instructions+=1;goto B518ffe;
default:missing_instruction(c.pc);}
B518000:L518000:{c.instructions+=8;NFSU2_TR(0x518000);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518004:{NFSU2_TR(0x518004);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B518006:{NFSU2_TR(0x518006);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51800a:{NFSU2_TR(0x51800a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51800e:{NFSU2_TR(0x51800e);
__builtin_memmove((R+0),(R+16),4);
}
B518012:{NFSU2_TR(0x518012);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518013:{NFSU2_TR(0x518013);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518017:{NFSU2_TR(0x518017);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51801cull));
TAIL_STATIC(0x504880u,504);
}
B51801c:L51801c:{c.instructions+=5;NFSU2_TR(0x51801c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B518020:{NFSU2_TR(0x518020);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518024:{NFSU2_TR(0x518024);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51802b:{NFSU2_TR(0x51802b);
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
B51802e:{NFSU2_TR(0x51802e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518040:L518040:{c.instructions+=17;NFSU2_TR(0x518040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B518043:{NFSU2_TR(0x518043);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518047:{NFSU2_TR(0x518047);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518048:{NFSU2_TR(0x518048);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518049:{NFSU2_TR(0x518049);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51804c:{NFSU2_TR(0x51804c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51804e:{NFSU2_TR(0x51804e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51804f:{NFSU2_TR(0x51804f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B518051:{NFSU2_TR(0x518051);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518057:{NFSU2_TR(0x518057);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51805a:{NFSU2_TR(0x51805a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B51805c:{NFSU2_TR(0x51805c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51805e:{NFSU2_TR(0x51805e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518064:{NFSU2_TR(0x518064);
__builtin_memmove((R+28),(R+24),4);
}
B518066:{NFSU2_TR(0x518066);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51806a:{NFSU2_TR(0x51806a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51806e:{NFSU2_TR(0x51806e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L51812e;}}
}
B518074:L518074:{c.instructions+=4;NFSU2_TR(0x518074);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518078:{NFSU2_TR(0x518078);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B51807b:{NFSU2_TR(0x51807b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51807c:{NFSU2_TR(0x51807c);
__builtin_memmove((R+16),(R+16),4);
}
B518080:L518080:{c.instructions+=2;NFSU2_TR(0x518080);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B518082:{NFSU2_TR(0x518082);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L518123;}}
}
B518088:L518088:{c.instructions+=2;NFSU2_TR(0x518088);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51808c:{NFSU2_TR(0x51808c);
__builtin_memmove((R+16),(R+16),4);
}
B518090:L518090:{c.instructions+=10;NFSU2_TR(0x518090);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518096:{NFSU2_TR(0x518096);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B518099:{NFSU2_TR(0x518099);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B51809f:{NFSU2_TR(0x51809f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5180a5:{NFSU2_TR(0x5180a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5180a8:{NFSU2_TR(0x5180a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5180ab:{NFSU2_TR(0x5180ab);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5180ad:{NFSU2_TR(0x5180ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5180b0:{NFSU2_TR(0x5180b0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5180b2:{NFSU2_TR(0x5180b2);
if(r1(R+518)){{goto L5180d4;}}
}
B5180b4:L5180b4:{c.instructions+=11;NFSU2_TR(0x5180b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5180b8:{NFSU2_TR(0x5180b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5180bb:{NFSU2_TR(0x5180bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5180bd:{NFSU2_TR(0x5180bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B5180c0:{NFSU2_TR(0x5180c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B5180c3:{NFSU2_TR(0x5180c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5180c6:{NFSU2_TR(0x5180c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5180c9:{NFSU2_TR(0x5180c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5180cc:{NFSU2_TR(0x5180cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5180cf:{NFSU2_TR(0x5180cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5180d2:{NFSU2_TR(0x5180d2);
{goto L5180dd;}
}
B5180d4:L5180d4:{c.instructions+=3;NFSU2_TR(0x5180d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5180d7:{NFSU2_TR(0x5180d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5180da:{NFSU2_TR(0x5180da);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5180dd:L5180dd:{c.instructions+=7;NFSU2_TR(0x5180dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5180e3:{NFSU2_TR(0x5180e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5180e6:{NFSU2_TR(0x5180e6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5180e7:{NFSU2_TR(0x5180e7);
__builtin_memmove((R+8),(R+12),4);
}
B5180e9:{NFSU2_TR(0x5180e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B5180eb:{NFSU2_TR(0x5180eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5180f1:{NFSU2_TR(0x5180f1);
if(r1(R+512)){{goto L518115;}}
}
B5180f3:L5180f3:{c.instructions+=8;NFSU2_TR(0x5180f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5180f9:{NFSU2_TR(0x5180f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5180fc:{NFSU2_TR(0x5180fc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5180fd:{NFSU2_TR(0x5180fd);
__builtin_memmove((R+8),(R+12),4);
}
B5180ff:{NFSU2_TR(0x5180ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B518101:{NFSU2_TR(0x518101);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518107:{NFSU2_TR(0x518107);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51810d:{NFSU2_TR(0x51810d);
if(r1(R+512)){{goto L518115;}}
}
B51810f:L51810f:{c.instructions+=1;NFSU2_TR(0x51810f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518115:L518115:{c.instructions+=2;NFSU2_TR(0x518115);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B518119:{NFSU2_TR(0x518119);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518090u);}goto L518090;}}
}
B51811f:L51811f:{c.instructions+=1;NFSU2_TR(0x51811f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B518123:L518123:{c.instructions+=2;NFSU2_TR(0x518123);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B518127:{NFSU2_TR(0x518127);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518080u);}goto L518080;}}
}
B51812d:L51812d:{c.instructions+=1;NFSU2_TR(0x51812d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51812e:L51812e:{c.instructions+=5;NFSU2_TR(0x51812e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51812f:{NFSU2_TR(0x51812f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518130:{NFSU2_TR(0x518130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B518131:{NFSU2_TR(0x518131);
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
B518134:{NFSU2_TR(0x518134);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518140:L518140:{c.instructions+=14;NFSU2_TR(0x518140);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518142:{NFSU2_TR(0x518142);
u8 U[4];
w4(U+0,u32(0x776f88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518147:{NFSU2_TR(0x518147);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51814d:{NFSU2_TR(0x51814d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51814e:{NFSU2_TR(0x51814e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518155:{NFSU2_TR(0x518155);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B518158:{NFSU2_TR(0x518158);
u8 U[4];
w4(U+0,u32(0x79ab04ull));
s4(u32(r4(R+16)),r4(U+0));
}
B518160:{NFSU2_TR(0x518160);
__builtin_memmove((R+8),(R+16),4);
}
B518164:{NFSU2_TR(0x518164);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B518167:{NFSU2_TR(0x518167);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518168:{NFSU2_TR(0x518168);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B518170:{NFSU2_TR(0x518170);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518174:{NFSU2_TR(0x518174);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518178:{NFSU2_TR(0x518178);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51817dull));
TAIL_STATIC(0x504880u,504);
}
B51817d:L51817d:{c.instructions+=4;NFSU2_TR(0x51817d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B518181:{NFSU2_TR(0x518181);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518188:{NFSU2_TR(0x518188);
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
B51818b:{NFSU2_TR(0x51818b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518190:L518190:{c.instructions+=14;NFSU2_TR(0x518190);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518196:{NFSU2_TR(0x518196);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518198:{NFSU2_TR(0x518198);
u8 U[4];
w4(U+0,u32(0x77708bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51819d:{NFSU2_TR(0x51819d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51819e:{NFSU2_TR(0x51819e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5181a5:{NFSU2_TR(0x5181a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5181a6:{NFSU2_TR(0x5181a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5181a7:{NFSU2_TR(0x5181a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5181ab:{NFSU2_TR(0x5181ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5181ac:{NFSU2_TR(0x5181ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5181ad:{NFSU2_TR(0x5181ad);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5181af:{NFSU2_TR(0x5181af);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5181b1:{NFSU2_TR(0x5181b1);
__builtin_memmove((R+12),(R+4),4);
}
B5181b3:{NFSU2_TR(0x5181b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5181d3;}}
}
B5181b5:L5181b5:{c.instructions+=3;NFSU2_TR(0x5181b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5181bb:{NFSU2_TR(0x5181bb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5181bd:{NFSU2_TR(0x5181bd);
if(r1(R+518)){{goto L5181c8;}}
}
B5181bf:L5181bf:{c.instructions+=2;NFSU2_TR(0x5181bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5181c0:{NFSU2_TR(0x5181c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5181c5ull));
TAIL_STATIC(0x575630u,575);
}
B5181c5:L5181c5:{c.instructions+=1;NFSU2_TR(0x5181c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5181c8:L5181c8:{c.instructions+=2;NFSU2_TR(0x5181c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5181ce:{NFSU2_TR(0x5181ce);
{goto L518266;}
}
B5181d3:L5181d3:{c.instructions+=4;NFSU2_TR(0x5181d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5181d7:{NFSU2_TR(0x5181d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5181da:{NFSU2_TR(0x5181da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5181db:{NFSU2_TR(0x5181db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5181e0ull));
TAIL_STATIC(0x575620u,575);
}
B5181e0:L5181e0:{c.instructions+=6;NFSU2_TR(0x5181e0);
__builtin_memmove((R+24),(R+0),4);
}
B5181e2:{NFSU2_TR(0x5181e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5181e5:{NFSU2_TR(0x5181e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5181e9:{NFSU2_TR(0x5181e9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5181eb:{NFSU2_TR(0x5181eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5181ef:{NFSU2_TR(0x5181ef);
if(r1(R+518)){{goto L518205;}}
}
B5181f1:L5181f1:{c.instructions+=5;NFSU2_TR(0x5181f1);
u8 U[4];
w4(U+0,u32(0x4ff230ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5181f6:{NFSU2_TR(0x5181f6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5181f7:{NFSU2_TR(0x5181f7);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5181f9:{NFSU2_TR(0x5181f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5181fa:{NFSU2_TR(0x5181fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5181ffull));
TAIL_STATIC(0x401650u,401);
}
B5181ff:L5181ff:{c.instructions+=2;NFSU2_TR(0x5181ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518203:{NFSU2_TR(0x518203);
{goto L518209;}
}
B518205:L518205:{c.instructions+=1;NFSU2_TR(0x518205);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518209:L518209:{c.instructions+=5;NFSU2_TR(0x518209);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51820f:{NFSU2_TR(0x51820f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B518211:{NFSU2_TR(0x518211);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B518219:{NFSU2_TR(0x518219);
__builtin_memmove((R+0),(R+20),4);
}
B51821b:{NFSU2_TR(0x51821b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L51821f;}}
}
B51821d:L51821d:{c.instructions+=1;NFSU2_TR(0x51821d);
__builtin_memmove((R+0),(R+4),4);
}
B51821f:L51821f:{c.instructions+=2;NFSU2_TR(0x51821f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B518221:{NFSU2_TR(0x518221);
if(r1(R+518)){{goto L518243;}}
}
B518223:L518223:{c.instructions+=6;NFSU2_TR(0x518223);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B518229:{NFSU2_TR(0x518229);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51822d:{NFSU2_TR(0x51822d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B518230:{NFSU2_TR(0x518230);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B518233:{NFSU2_TR(0x518233);
__builtin_memmove((R+8),(R+4),4);
}
B518235:{NFSU2_TR(0x518235);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B518238:L518238:{c.instructions+=1;NFSU2_TR(0x518238);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L51823a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518238u);}goto L518238;}
}
B51823a:L51823a:{c.instructions+=2;NFSU2_TR(0x51823a);
__builtin_memmove((R+4),(R+8),4);
}
B51823c:{NFSU2_TR(0x51823c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B51823f:L51823f:{c.instructions+=1;NFSU2_TR(0x51823f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L518241;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51823fu);}goto L51823f;}
}
B518241:L518241:{c.instructions+=1;NFSU2_TR(0x518241);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B518243:L518243:{c.instructions+=3;NFSU2_TR(0x518243);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518249:{NFSU2_TR(0x518249);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51824b:{NFSU2_TR(0x51824b);
if(r1(R+518)){{goto L518256;}}
}
B51824d:L51824d:{c.instructions+=2;NFSU2_TR(0x51824d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51824e:{NFSU2_TR(0x51824e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518253ull));
TAIL_STATIC(0x575630u,575);
}
B518253:L518253:{c.instructions+=1;NFSU2_TR(0x518253);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B518256:L518256:{c.instructions+=3;NFSU2_TR(0x518256);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51825a:{NFSU2_TR(0x51825a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518260:{NFSU2_TR(0x518260);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518266:L518266:{c.instructions+=8;NFSU2_TR(0x518266);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51826a:{NFSU2_TR(0x51826a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51826b:{NFSU2_TR(0x51826b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51826c:{NFSU2_TR(0x51826c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51826d:{NFSU2_TR(0x51826d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518274:{NFSU2_TR(0x518274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B518275:{NFSU2_TR(0x518275);
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
B518278:{NFSU2_TR(0x518278);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518280:L518280:{c.instructions+=5;NFSU2_TR(0x518280);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518283:{NFSU2_TR(0x518283);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B518285:{NFSU2_TR(0x518285);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518289:{NFSU2_TR(0x518289);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51828a:{NFSU2_TR(0x51828a);
if(r1(R+518)){{goto L51829c;}}
}
B51828c:L51828c:{c.instructions+=2;NFSU2_TR(0x51828c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51828f:{NFSU2_TR(0x51828f);
}
B518290:L518290:{c.instructions+=2;NFSU2_TR(0x518290);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B518293:{NFSU2_TR(0x518293);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L51829c;}}
}
B518295:L518295:{c.instructions+=3;NFSU2_TR(0x518295);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518298:{NFSU2_TR(0x518298);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51829a:{NFSU2_TR(0x51829a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518290u);}goto L518290;}}
}
B51829c:L51829c:{c.instructions+=2;NFSU2_TR(0x51829c);
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
B51829e:{NFSU2_TR(0x51829e);
if(r1(R+518)){{goto L5182db;}}
}
B5182a0:L5182a0:{c.instructions+=2;NFSU2_TR(0x5182a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5182a2:{NFSU2_TR(0x5182a2);
if(r1(R+518)){{goto L5182b9;}}
}
B5182a4:L5182a4:{c.instructions+=4;NFSU2_TR(0x5182a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5182a7:{NFSU2_TR(0x5182a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5182a9:{NFSU2_TR(0x5182a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5182ac:{NFSU2_TR(0x5182ac);
if(r1(R+518)){{goto L5182b1;}}
}
B5182ae:L5182ae:{c.instructions+=1;NFSU2_TR(0x5182ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5182b1:L5182b1:{c.instructions+=3;NFSU2_TR(0x5182b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5182b4:{NFSU2_TR(0x5182b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5182b7:{NFSU2_TR(0x5182b7);
{goto L5182d0;}
}
B5182b9:L5182b9:{c.instructions+=4;NFSU2_TR(0x5182b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5182bc:{NFSU2_TR(0x5182bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5182be:{NFSU2_TR(0x5182be);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5182c1:{NFSU2_TR(0x5182c1);
if(r1(R+518)){{goto L5182c6;}}
}
B5182c3:L5182c3:{c.instructions+=1;NFSU2_TR(0x5182c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5182c6:L5182c6:{c.instructions+=2;NFSU2_TR(0x5182c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5182cd:{NFSU2_TR(0x5182cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5182d0:L5182d0:{c.instructions+=2;NFSU2_TR(0x5182d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5182d3:{NFSU2_TR(0x5182d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5182d8;}}
}
B5182d5:L5182d5:{c.instructions+=1;NFSU2_TR(0x5182d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5182d8:L5182d8:{c.instructions+=1;NFSU2_TR(0x5182d8);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B5182db:L5182db:{c.instructions+=2;NFSU2_TR(0x5182db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5182dc:{NFSU2_TR(0x5182dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5182e0:L5182e0:{c.instructions+=8;NFSU2_TR(0x5182e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5182e1:{NFSU2_TR(0x5182e1);
__builtin_memmove((R+12),(R+4),4);
}
B5182e3:{NFSU2_TR(0x5182e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5182e6:{NFSU2_TR(0x5182e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5182e9:{NFSU2_TR(0x5182e9);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5182ed:{NFSU2_TR(0x5182ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5182f0:{NFSU2_TR(0x5182f0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5262694cull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5182f6:{NFSU2_TR(0x5182f6);
if(r1(R+518)){{goto L51830b;}}
}
B5182f8:L5182f8:{c.instructions+=2;NFSU2_TR(0x5182f8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5182fa:{NFSU2_TR(0x5182fa);
if(r1(R+518)){{goto L518325;}}
}
B5182fc:L5182fc:{c.instructions+=4;NFSU2_TR(0x5182fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5182ff:{NFSU2_TR(0x5182ff);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B518303:{NFSU2_TR(0x518303);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5262694cull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B518309:{NFSU2_TR(0x518309);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5182f8u);}goto L5182f8;}}
}
B51830b:L51830b:{c.instructions+=9;NFSU2_TR(0x51830b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51830e:{NFSU2_TR(0x51830e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51830f:{NFSU2_TR(0x51830f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B518311:{NFSU2_TR(0x518311);
w4(R+24,u32(0xcull));
}
B518316:{NFSU2_TR(0x518316);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x518316);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x518316);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B518318:{NFSU2_TR(0x518318);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518319:{NFSU2_TR(0x518319);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51831b:{NFSU2_TR(0x51831b);
__builtin_memmove((R+28),(R+0),4);
}
B51831d:{NFSU2_TR(0x51831d);
if(r1(R+518)){{goto L51833b;}}
}
B51831f:L51831f:{c.instructions+=5;NFSU2_TR(0x51831f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B518320:{NFSU2_TR(0x518320);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518321:{NFSU2_TR(0x518321);
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
B518323:{NFSU2_TR(0x518323);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B518324:{NFSU2_TR(0x518324);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518325:L518325:{c.instructions+=2;NFSU2_TR(0x518325);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5262694cull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B51832b:{NFSU2_TR(0x51832b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51830bu);}goto L51830b;}}
}
B51832d:L51832d:{c.instructions+=7;NFSU2_TR(0x51832d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51832f:{NFSU2_TR(0x51832f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518332:{NFSU2_TR(0x518332);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B518334:{NFSU2_TR(0x518334);
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
B518336:{NFSU2_TR(0x518336);
__builtin_memmove((R+0),(R+518),1);
}
B518339:{NFSU2_TR(0x518339);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51833a:{NFSU2_TR(0x51833a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51833b:L51833b:{c.instructions+=4;NFSU2_TR(0x51833b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51833e:{NFSU2_TR(0x51833e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B518340:{NFSU2_TR(0x518340);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518341:{NFSU2_TR(0x518341);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518346ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518190u);}goto L518190;}
}
B518346:L518346:{c.instructions+=4;NFSU2_TR(0x518346);
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
B518348:{NFSU2_TR(0x518348);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51834a:{NFSU2_TR(0x51834a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518350:{NFSU2_TR(0x518350);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L51836e;}}
}
B518352:L518352:{c.instructions+=1;NFSU2_TR(0x518352);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B518355:L518355:{c.instructions+=10;NFSU2_TR(0x518355);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B518357:{NFSU2_TR(0x518357);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51835a:{NFSU2_TR(0x51835a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51835d:{NFSU2_TR(0x51835d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518360:{NFSU2_TR(0x518360);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B518363:{NFSU2_TR(0x518363);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B518365:{NFSU2_TR(0x518365);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B518368:{NFSU2_TR(0x518368);
w1(R+512,carry<u32>(r4(R+0),u32(0xcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B51836b:{NFSU2_TR(0x51836b);
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
B51836c:{NFSU2_TR(0x51836c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518355u);}goto L518355;}}
}
B51836e:L51836e:{c.instructions+=5;NFSU2_TR(0x51836e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51836f:{NFSU2_TR(0x51836f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518370:{NFSU2_TR(0x518370);
w1(R+0,u8(0x1ull));
}
B518372:{NFSU2_TR(0x518372);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B518373:{NFSU2_TR(0x518373);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518380:L518380:{c.instructions+=10;NFSU2_TR(0x518380);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518381:{NFSU2_TR(0x518381);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518382:{NFSU2_TR(0x518382);
__builtin_memmove((R+12),(R+4),4);
}
B518384:{NFSU2_TR(0x518384);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518387:{NFSU2_TR(0x518387);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51838a:{NFSU2_TR(0x51838a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51838b:{NFSU2_TR(0x51838b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51838e:{NFSU2_TR(0x51838e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B518392:{NFSU2_TR(0x518392);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xcc736552ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B518398:{NFSU2_TR(0x518398);
if(r1(R+518)){{goto L5183c0;}}
}
B51839a:L51839a:{c.instructions+=1;NFSU2_TR(0x51839a);
__builtin_memmove((R+12),(R+12),4);
}
B5183a0:L5183a0:{c.instructions+=2;NFSU2_TR(0x5183a0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5183a2:{NFSU2_TR(0x5183a2);
if(r1(R+518)){{goto L5183b8;}}
}
B5183a4:L5183a4:{c.instructions+=5;NFSU2_TR(0x5183a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5183a7:{NFSU2_TR(0x5183a7);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5183ab:{NFSU2_TR(0x5183ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xcc736552ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5183b0:{NFSU2_TR(0x5183b0);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5183b4:{NFSU2_TR(0x5183b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5183a0u);}goto L5183a0;}}
}
B5183b6:L5183b6:{c.instructions+=1;NFSU2_TR(0x5183b6);
{goto L5183c0;}
}
B5183b8:L5183b8:{c.instructions+=2;NFSU2_TR(0x5183b8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xcc736552ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5183be:{NFSU2_TR(0x5183be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5183c9;}}
}
B5183c0:L5183c0:{c.instructions+=2;NFSU2_TR(0x5183c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6d4e7352ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5183c7:{NFSU2_TR(0x5183c7);
if(r1(R+518)){{goto L5183cf;}}
}
B5183c9:L5183c9:{c.instructions+=5;NFSU2_TR(0x5183c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5183ca:{NFSU2_TR(0x5183ca);
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
B5183cc:{NFSU2_TR(0x5183cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5183cd:{NFSU2_TR(0x5183cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5183ce:{NFSU2_TR(0x5183ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5183cf:L5183cf:{c.instructions+=5;NFSU2_TR(0x5183cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5183d2:{NFSU2_TR(0x5183d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5183d3:{NFSU2_TR(0x5183d3);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5183d7:{NFSU2_TR(0x5183d7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x71527352ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5183dd:{NFSU2_TR(0x5183dd);
if(r1(R+518)){{goto L5183e6;}}
}
B5183df:L5183df:{c.instructions+=6;NFSU2_TR(0x5183df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5183e0:{NFSU2_TR(0x5183e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5183e1:{NFSU2_TR(0x5183e1);
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
B5183e3:{NFSU2_TR(0x5183e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5183e4:{NFSU2_TR(0x5183e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5183e5:{NFSU2_TR(0x5183e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5183e6:L5183e6:{c.instructions+=8;NFSU2_TR(0x5183e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5183e8:{NFSU2_TR(0x5183e8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B5183eb:{NFSU2_TR(0x5183eb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5183ec:{NFSU2_TR(0x5183ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5183ee:{NFSU2_TR(0x5183ee);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5183f1:{NFSU2_TR(0x5183f1);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5183f3:{NFSU2_TR(0x5183f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5183f6:{NFSU2_TR(0x5183f6);
if(r1(R+518)){{goto L5184cd;}}
}
B5183fc:L5183fc:{c.instructions+=4;NFSU2_TR(0x5183fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B518400:{NFSU2_TR(0x518400);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B518403:{NFSU2_TR(0x518403);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518404:{NFSU2_TR(0x518404);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518409ull));
TAIL_STATIC(0x575620u,575);
}
B518409:L518409:{c.instructions+=5;NFSU2_TR(0x518409);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51840b:{NFSU2_TR(0x51840b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51840e:{NFSU2_TR(0x51840e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518411:{NFSU2_TR(0x518411);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518412:{NFSU2_TR(0x518412);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518417ull));
TAIL_STATIC(0x575620u,575);
}
B518417:L518417:{c.instructions+=5;NFSU2_TR(0x518417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B518419:{NFSU2_TR(0x518419);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51841c:{NFSU2_TR(0x51841c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51841e:{NFSU2_TR(0x51841e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518424:{NFSU2_TR(0x518424);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L518487;}}
}
B518426:L518426:{c.instructions+=3;NFSU2_TR(0x518426);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B518428:{NFSU2_TR(0x518428);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51842c:{NFSU2_TR(0x51842c);
__builtin_memmove((R+16),(R+16),4);
}
B518430:L518430:{c.instructions+=30;NFSU2_TR(0x518430);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B518432:{NFSU2_TR(0x518432);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518435:{NFSU2_TR(0x518435);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B518437:{NFSU2_TR(0x518437);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B51843a:{NFSU2_TR(0x51843a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51843c:{NFSU2_TR(0x51843c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51843f:{NFSU2_TR(0x51843f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518442:{NFSU2_TR(0x518442);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B518446:{NFSU2_TR(0x518446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B518448:{NFSU2_TR(0x518448);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51844b:{NFSU2_TR(0x51844b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51844e:{NFSU2_TR(0x51844e);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B518452:{NFSU2_TR(0x518452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B518454:{NFSU2_TR(0x518454);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B518457:{NFSU2_TR(0x518457);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51845a:{NFSU2_TR(0x51845a);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B51845e:{NFSU2_TR(0x51845e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B518460:{NFSU2_TR(0x518460);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518463:{NFSU2_TR(0x518463);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B518466:{NFSU2_TR(0x518466);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B51846a:{NFSU2_TR(0x51846a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51846c:{NFSU2_TR(0x51846c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51846f:{NFSU2_TR(0x51846f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518472:{NFSU2_TR(0x518472);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B518476:{NFSU2_TR(0x518476);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51847a:{NFSU2_TR(0x51847a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B51847d:{NFSU2_TR(0x51847d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B518480:{NFSU2_TR(0x518480);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B518481:{NFSU2_TR(0x518481);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518485:{NFSU2_TR(0x518485);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518430u);}goto L518430;}}
}
B518487:L518487:{c.instructions+=6;NFSU2_TR(0x518487);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51848a:{NFSU2_TR(0x51848a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51848c:{NFSU2_TR(0x51848c);
__builtin_memmove((R+8),(R+4),4);
}
B51848e:{NFSU2_TR(0x51848e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B518491:{NFSU2_TR(0x518491);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518494:{NFSU2_TR(0x518494);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51849a:L51849a:{c.instructions+=1;NFSU2_TR(0x51849a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L51849c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51849au);}goto L51849a;}
}
B51849c:L51849c:{c.instructions+=3;NFSU2_TR(0x51849c);
__builtin_memmove((R+4),(R+8),4);
}
B51849e:{NFSU2_TR(0x51849e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5184a1:{NFSU2_TR(0x5184a1);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5184a3:L5184a3:{c.instructions+=1;NFSU2_TR(0x5184a3);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5184a5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5184a3u);}goto L5184a3;}
}
B5184a5:L5184a5:{c.instructions+=1;NFSU2_TR(0x5184a5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5184cd;}}
}
B5184a7:L5184a7:{c.instructions+=2;NFSU2_TR(0x5184a7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5184a9:{NFSU2_TR(0x5184a9);
__builtin_memmove((R+16),(R+16),4);
}
B5184b0:L5184b0:{c.instructions+=10;NFSU2_TR(0x5184b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5184b2:{NFSU2_TR(0x5184b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5184b5:{NFSU2_TR(0x5184b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5184bb:{NFSU2_TR(0x5184bb);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B5184bf:{NFSU2_TR(0x5184bf);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5184c3:{NFSU2_TR(0x5184c3);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5184c5:{NFSU2_TR(0x5184c5);
w1(R+512,carry<u32>(r4(R+8),u32(0x18ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B5184c8:{NFSU2_TR(0x5184c8);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5184c9:{NFSU2_TR(0x5184c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5184cb:{NFSU2_TR(0x5184cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5184b0u);}goto L5184b0;}}
}
B5184cd:L5184cd:{c.instructions+=7;NFSU2_TR(0x5184cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5184ce:{NFSU2_TR(0x5184ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5184cf:{NFSU2_TR(0x5184cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5184d0:{NFSU2_TR(0x5184d0);
w1(R+0,u8(0x1ull));
}
B5184d2:{NFSU2_TR(0x5184d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5184d3:{NFSU2_TR(0x5184d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5184d4:{NFSU2_TR(0x5184d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5184e0:L5184e0:{c.instructions+=15;NFSU2_TR(0x5184e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5184e6:{NFSU2_TR(0x5184e6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5184e8:{NFSU2_TR(0x5184e8);
u8 U[4];
w4(U+0,u32(0x7770b3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5184ed:{NFSU2_TR(0x5184ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5184ee:{NFSU2_TR(0x5184ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5184f5:{NFSU2_TR(0x5184f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B5184f8:{NFSU2_TR(0x5184f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5184f9:{NFSU2_TR(0x5184f9);
__builtin_memmove((R+28),(R+4),4);
}
B5184fb:{NFSU2_TR(0x5184fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5184fe:{NFSU2_TR(0x5184fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B518501:{NFSU2_TR(0x518501);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B518505:{NFSU2_TR(0x518505);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B518508:{NFSU2_TR(0x518508);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B51850b:{NFSU2_TR(0x51850b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x67726154ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B518511:{NFSU2_TR(0x518511);
if(r1(R+518)){{goto L518526;}}
}
B518513:L518513:{c.instructions+=2;NFSU2_TR(0x518513);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B518515:{NFSU2_TR(0x518515);
if(r1(R+518)){{goto L518526;}}
}
B518517:L518517:{c.instructions+=4;NFSU2_TR(0x518517);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51851a:{NFSU2_TR(0x51851a);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B51851e:{NFSU2_TR(0x51851e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x67726154ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B518524:{NFSU2_TR(0x518524);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518513u);}goto L518513;}}
}
B518526:L518526:{c.instructions+=2;NFSU2_TR(0x518526);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x67726154ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B51852c:{NFSU2_TR(0x51852c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5186a2;}}
}
B518532:L518532:{c.instructions+=8;NFSU2_TR(0x518532);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518533:{NFSU2_TR(0x518533);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518536:{NFSU2_TR(0x518536);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518539:{NFSU2_TR(0x518539);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B51853b:{NFSU2_TR(0x51853b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B51853d:{NFSU2_TR(0x51853d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518541:{NFSU2_TR(0x518541);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518545:{NFSU2_TR(0x518545);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5186a1;}}
}
B51854b:L51854b:{c.instructions+=4;NFSU2_TR(0x51854b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51854c:{NFSU2_TR(0x51854c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51854d:{NFSU2_TR(0x51854d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B518555:{NFSU2_TR(0x518555);
{goto L518560;}
}
B518557:L518557:{c.instructions+=2;NFSU2_TR(0x518557);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51855b:{NFSU2_TR(0x51855b);
{goto L518560;}
}
B518560:L518560:{c.instructions+=3;NFSU2_TR(0x518560);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B518563:{NFSU2_TR(0x518563);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6354ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B518568:{NFSU2_TR(0x518568);
if(r1(R+518)){{goto L51863b;}}
}
B51856e:L51856e:{c.instructions+=2;NFSU2_TR(0x51856e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x744dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B518573:{NFSU2_TR(0x518573);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L518687;}}
}
B518579:L518579:{c.instructions+=16;NFSU2_TR(0x518579);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51857b:{NFSU2_TR(0x51857b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51857e:{NFSU2_TR(0x51857e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518582:{NFSU2_TR(0x518582);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(r2(U+4)));
}
B518586:{NFSU2_TR(0x518586);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B518589:{NFSU2_TR(0x518589);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51858c:{NFSU2_TR(0x51858c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B51858e:{NFSU2_TR(0x51858e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B518590:{NFSU2_TR(0x518590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B518592:{NFSU2_TR(0x518592);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B518595:{NFSU2_TR(0x518595);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+20,shr<u32>(r4(R+20),u64(r4(U+0))));
}
B518598:{NFSU2_TR(0x518598);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B518599:{NFSU2_TR(0x518599);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51859a:{NFSU2_TR(0x51859a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B51859c:{NFSU2_TR(0x51859c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B51859f:{NFSU2_TR(0x51859f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5185a4ull));
TAIL_STATIC(0x517570u,517);
}
B5185a4:L5185a4:{c.instructions+=3;NFSU2_TR(0x5185a4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5185a6:{NFSU2_TR(0x5185a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5185ae:{NFSU2_TR(0x5185ae);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L518634;}}
}
B5185b4:L5185b4:{c.instructions+=10;NFSU2_TR(0x5185b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5185b8:{NFSU2_TR(0x5185b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5185bb:{NFSU2_TR(0x5185bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5185bd:{NFSU2_TR(0x5185bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aafcull));
s4(u32(r4(U+0)),r4(U+4));
}
B5185c5:{NFSU2_TR(0x5185c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5185c9:{NFSU2_TR(0x5185c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5185cd:{NFSU2_TR(0x5185cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5185ce:{NFSU2_TR(0x5185ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5185d6:{NFSU2_TR(0x5185d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5185de:{NFSU2_TR(0x5185de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5185e3ull));
TAIL_STATIC(0x504880u,504);
}
B5185e3:L5185e3:{c.instructions+=10;NFSU2_TR(0x5185e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5185e5:{NFSU2_TR(0x5185e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5185e8:{NFSU2_TR(0x5185e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5185ec:{NFSU2_TR(0x5185ec);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5185f0:{NFSU2_TR(0x5185f0);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5185f4:{NFSU2_TR(0x5185f4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B5185f6:{NFSU2_TR(0x5185f6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5185f8:{NFSU2_TR(0x5185f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B518600:{NFSU2_TR(0x518600);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B518608:{NFSU2_TR(0x518608);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L518613;}}
}
B51860a:L51860a:{c.instructions+=4;NFSU2_TR(0x51860a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51860b:{NFSU2_TR(0x51860b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51860c:{NFSU2_TR(0x51860c);
__builtin_memmove((R+4),(R+24),4);
}
B51860e:{NFSU2_TR(0x51860e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518613ull));
TAIL_STATIC(0x517570u,517);
}
B518613:L518613:{c.instructions+=10;NFSU2_TR(0x518613);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518616:{NFSU2_TR(0x518616);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518619:{NFSU2_TR(0x518619);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51861d:{NFSU2_TR(0x51861d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B518620:{NFSU2_TR(0x518620);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B518623:{NFSU2_TR(0x518623);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518627:{NFSU2_TR(0x518627);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B518628:{NFSU2_TR(0x518628);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B51862a:{NFSU2_TR(0x51862a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51862e:{NFSU2_TR(0x51862e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5185b4u);}goto L5185b4;}}
}
B518630:L518630:{c.instructions+=1;NFSU2_TR(0x518630);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B518634:L518634:{c.instructions+=2;NFSU2_TR(0x518634);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B518639:{NFSU2_TR(0x518639);
{goto L518687;}
}
B51863b:L51863b:{c.instructions+=8;NFSU2_TR(0x51863b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51863e:{NFSU2_TR(0x51863e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B518640:{NFSU2_TR(0x518640);
__builtin_memmove((R+0),(R+12),4);
}
B518642:{NFSU2_TR(0x518642);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B518645:{NFSU2_TR(0x518645);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B518648:{NFSU2_TR(0x518648);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518649:{NFSU2_TR(0x518649);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51864c:{NFSU2_TR(0x51864c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518651ull));
TAIL_STATIC(0x575620u,575);
}
B518651:L518651:{c.instructions+=6;NFSU2_TR(0x518651);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B518654:{NFSU2_TR(0x518654);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518658:{NFSU2_TR(0x518658);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B51865a:{NFSU2_TR(0x51865a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51865c:{NFSU2_TR(0x51865c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518660:{NFSU2_TR(0x518660);
if(r1(R+518)){{goto L51867a;}}
}
B518662:L518662:{c.instructions+=8;NFSU2_TR(0x518662);
u8 U[4];
w4(U+0,u32(0x4ff200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518667:{NFSU2_TR(0x518667);
u8 U[4];
w4(U+0,u32(0x4ff1f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51866c:{NFSU2_TR(0x51866c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51866d:{NFSU2_TR(0x51866d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B518670:{NFSU2_TR(0x518670);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518672:{NFSU2_TR(0x518672);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518673:{NFSU2_TR(0x518673);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B518675:{NFSU2_TR(0x518675);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51867aull));
TAIL_STATIC(0x75c461u,75c);
}
B51867a:L51867a:{c.instructions+=3;NFSU2_TR(0x51867a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51867c:{NFSU2_TR(0x51867c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B518684:{NFSU2_TR(0x518684);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518687:L518687:{c.instructions+=6;NFSU2_TR(0x518687);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B51868b:{NFSU2_TR(0x51868b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51868f:{NFSU2_TR(0x51868f);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B518693:{NFSU2_TR(0x518693);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B518695:{NFSU2_TR(0x518695);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518699:{NFSU2_TR(0x518699);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518557u);}goto L518557;}}
}
B51869f:L51869f:{c.instructions+=2;NFSU2_TR(0x51869f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5186a0:{NFSU2_TR(0x5186a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5186a1:L5186a1:{c.instructions+=1;NFSU2_TR(0x5186a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5186a2:L5186a2:{c.instructions+=6;NFSU2_TR(0x5186a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5186a6:{NFSU2_TR(0x5186a6);
w1(R+0,u8(0x1ull));
}
B5186a8:{NFSU2_TR(0x5186a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5186a9:{NFSU2_TR(0x5186a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5186b0:{NFSU2_TR(0x5186b0);
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
B5186b3:{NFSU2_TR(0x5186b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5186c0:L5186c0:{c.instructions+=13;NFSU2_TR(0x5186c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5186c4:{NFSU2_TR(0x5186c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5186c5:{NFSU2_TR(0x5186c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5186c9:{NFSU2_TR(0x5186c9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5186ca:{NFSU2_TR(0x5186ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5186ce:{NFSU2_TR(0x5186ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5186cf:{NFSU2_TR(0x5186cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5186d0:{NFSU2_TR(0x5186d0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+20)),r4(U+0));
}
B5186d7:{NFSU2_TR(0x5186d7);
__builtin_memmove((R+28),(R+4),4);
}
B5186d9:{NFSU2_TR(0x5186d9);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B5186df:{NFSU2_TR(0x5186df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5186e1:{NFSU2_TR(0x5186e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5186e2:{NFSU2_TR(0x5186e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5186e7ull));
TAIL_STATIC(0x504960u,504);
}
B5186e7:L5186e7:{c.instructions+=3;NFSU2_TR(0x5186e7);
__builtin_memmove((R+24),(R+0),4);
}
B5186e9:{NFSU2_TR(0x5186e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5186eb:{NFSU2_TR(0x5186eb);
if(r1(R+518)){{goto L5186ff;}}
}
B5186ed:L5186ed:{c.instructions+=4;NFSU2_TR(0x5186ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5186f0:{NFSU2_TR(0x5186f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5186f1:{NFSU2_TR(0x5186f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5186f4:{NFSU2_TR(0x5186f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5186f9ull));
TAIL_STATIC(0x50b240u,50b);
}
B5186f9:L5186f9:{c.instructions+=3;NFSU2_TR(0x5186f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5186fb:{NFSU2_TR(0x5186fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5186fd:{NFSU2_TR(0x5186fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L518708;}}
}
B5186ff:L5186ff:{c.instructions+=6;NFSU2_TR(0x5186ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B518700:{NFSU2_TR(0x518700);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518701:{NFSU2_TR(0x518701);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B518702:{NFSU2_TR(0x518702);
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
B518704:{NFSU2_TR(0x518704);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B518705:{NFSU2_TR(0x518705);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518708:L518708:{c.instructions+=4;NFSU2_TR(0x518708);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51870b:{NFSU2_TR(0x51870b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51870c:{NFSU2_TR(0x51870c);
__builtin_memmove((R+4),(R+0),4);
}
B51870e:{NFSU2_TR(0x51870e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518713ull));
TAIL_STATIC(0x517fe0u,517);
}
B518713:L518713:{c.instructions+=10;NFSU2_TR(0x518713);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B518714:{NFSU2_TR(0x518714);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B518716:{NFSU2_TR(0x518716);
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
B518718:{NFSU2_TR(0x518718);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518719:{NFSU2_TR(0x518719);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B51871c:{NFSU2_TR(0x51871c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B51871f:{NFSU2_TR(0x51871f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B518720:{NFSU2_TR(0x518720);
__builtin_memmove((R+0),(R+4),1);
}
B518722:{NFSU2_TR(0x518722);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B518723:{NFSU2_TR(0x518723);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518730:L518730:{c.instructions+=6;NFSU2_TR(0x518730);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518731:{NFSU2_TR(0x518731);
__builtin_memmove((R+24),(R+4),4);
}
B518733:{NFSU2_TR(0x518733);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518736:{NFSU2_TR(0x518736);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B518738:{NFSU2_TR(0x518738);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518739:{NFSU2_TR(0x518739);
if(r1(R+518)){{goto L51874b;}}
}
B51873b:L51873b:{c.instructions+=2;NFSU2_TR(0x51873b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51873c:{NFSU2_TR(0x51873c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518741ull));
TAIL_STATIC(0x575630u,575);
}
B518741:L518741:{c.instructions+=2;NFSU2_TR(0x518741);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B518744:{NFSU2_TR(0x518744);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51874b:L51874b:{c.instructions+=4;NFSU2_TR(0x51874b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51874f:{NFSU2_TR(0x51874f);
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
B518751:{NFSU2_TR(0x518751);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B518758:{NFSU2_TR(0x518758);
if(r1(R+518)){{goto L518799;}}
}
B51875a:L51875a:{c.instructions+=3;NFSU2_TR(0x51875a);
__builtin_memmove((R+0),(R+28),4);
}
B51875c:{NFSU2_TR(0x51875c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B51875f:{NFSU2_TR(0x51875f);
}
B518760:L518760:{c.instructions+=4;NFSU2_TR(0x518760);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B518762:{NFSU2_TR(0x518762);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B518763:{NFSU2_TR(0x518763);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B518765:{NFSU2_TR(0x518765);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518760u);}goto L518760;}}
}
B518767:L518767:{c.instructions+=4;NFSU2_TR(0x518767);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B518769:{NFSU2_TR(0x518769);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51876a:{NFSU2_TR(0x51876a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51876b:{NFSU2_TR(0x51876b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518770ull));
TAIL_STATIC(0x575620u,575);
}
B518770:L518770:{c.instructions+=5;NFSU2_TR(0x518770);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B518773:{NFSU2_TR(0x518773);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518776:{NFSU2_TR(0x518776);
__builtin_memmove((R+4),(R+28),4);
}
B518778:{NFSU2_TR(0x518778);
__builtin_memmove((R+8),(R+0),4);
}
B51877a:{NFSU2_TR(0x51877a);
__builtin_memmove((R+12),(R+12),4);
}
B518780:L518780:{c.instructions+=6;NFSU2_TR(0x518780);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B518782:{NFSU2_TR(0x518782);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B518783:{NFSU2_TR(0x518783);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B518785:{NFSU2_TR(0x518785);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B518786:{NFSU2_TR(0x518786);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B518788:{NFSU2_TR(0x518788);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518780u);}goto L518780;}}
}
B51878a:L51878a:{c.instructions+=3;NFSU2_TR(0x51878a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51878d:{NFSU2_TR(0x51878d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51878e:{NFSU2_TR(0x51878e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518793ull));
TAIL_STATIC(0x505450u,505);
}
B518793:L518793:{c.instructions+=2;NFSU2_TR(0x518793);
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
B518796:{NFSU2_TR(0x518796);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518799:L518799:{c.instructions+=3;NFSU2_TR(0x518799);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51879a:{NFSU2_TR(0x51879a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51879b:{NFSU2_TR(0x51879b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5187a0:L5187a0:{c.instructions+=200;NFSU2_TR(0x5187a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B5187a3:{NFSU2_TR(0x5187a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5187a7:{NFSU2_TR(0x5187a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5187ab:{NFSU2_TR(0x5187ab);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5187ad:{NFSU2_TR(0x5187ad);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5187af:{NFSU2_TR(0x5187af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5187b0:{NFSU2_TR(0x5187b0);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5187b3:{NFSU2_TR(0x5187b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5187b4:{NFSU2_TR(0x5187b4);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5187b7:{NFSU2_TR(0x5187b7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5187b9:{NFSU2_TR(0x5187b9);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5187bc:{NFSU2_TR(0x5187bc);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5187bf:{NFSU2_TR(0x5187bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5187c1:{NFSU2_TR(0x5187c1);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5187c4:{NFSU2_TR(0x5187c4);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5187c7:{NFSU2_TR(0x5187c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5187c9:{NFSU2_TR(0x5187c9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5187cd:{NFSU2_TR(0x5187cd);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5187d0:{NFSU2_TR(0x5187d0);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5187d3:{NFSU2_TR(0x5187d3);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5187d6:{NFSU2_TR(0x5187d6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5187d8:{NFSU2_TR(0x5187d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5187da:{NFSU2_TR(0x5187da);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5187dd:{NFSU2_TR(0x5187dd);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5187e0:{NFSU2_TR(0x5187e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5187e2:{NFSU2_TR(0x5187e2);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5187e5:{NFSU2_TR(0x5187e5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5187e8:{NFSU2_TR(0x5187e8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5187ea:{NFSU2_TR(0x5187ea);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5187ee:{NFSU2_TR(0x5187ee);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5187f1:{NFSU2_TR(0x5187f1);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5187f4:{NFSU2_TR(0x5187f4);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5187f7:{NFSU2_TR(0x5187f7);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5187fa:{NFSU2_TR(0x5187fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5187fc:{NFSU2_TR(0x5187fc);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5187ff:{NFSU2_TR(0x5187ff);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518801:{NFSU2_TR(0x518801);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B518803:{NFSU2_TR(0x518803);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518806:{NFSU2_TR(0x518806);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518809:{NFSU2_TR(0x518809);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51880b:{NFSU2_TR(0x51880b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51880f:{NFSU2_TR(0x51880f);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518812:{NFSU2_TR(0x518812);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518815:{NFSU2_TR(0x518815);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518818:{NFSU2_TR(0x518818);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51881b:{NFSU2_TR(0x51881b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51881d:{NFSU2_TR(0x51881d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518820:{NFSU2_TR(0x518820);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518823:{NFSU2_TR(0x518823);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B518825:{NFSU2_TR(0x518825);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518827:{NFSU2_TR(0x518827);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51882a:{NFSU2_TR(0x51882a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51882c:{NFSU2_TR(0x51882c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B518830:{NFSU2_TR(0x518830);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518833:{NFSU2_TR(0x518833);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518836:{NFSU2_TR(0x518836);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518839:{NFSU2_TR(0x518839);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51883c:{NFSU2_TR(0x51883c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51883e:{NFSU2_TR(0x51883e);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518841:{NFSU2_TR(0x518841);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518844:{NFSU2_TR(0x518844);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B518846:{NFSU2_TR(0x518846);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518849:{NFSU2_TR(0x518849);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51884b:{NFSU2_TR(0x51884b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51884d:{NFSU2_TR(0x51884d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B518851:{NFSU2_TR(0x518851);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518854:{NFSU2_TR(0x518854);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518857:{NFSU2_TR(0x518857);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51885a:{NFSU2_TR(0x51885a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51885d:{NFSU2_TR(0x51885d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51885f:{NFSU2_TR(0x51885f);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518862:{NFSU2_TR(0x518862);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518865:{NFSU2_TR(0x518865);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B518867:{NFSU2_TR(0x518867);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51886a:{NFSU2_TR(0x51886a);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51886d:{NFSU2_TR(0x51886d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51886f:{NFSU2_TR(0x51886f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B518873:{NFSU2_TR(0x518873);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518876:{NFSU2_TR(0x518876);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518879:{NFSU2_TR(0x518879);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51887c:{NFSU2_TR(0x51887c);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51887f:{NFSU2_TR(0x51887f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B518881:{NFSU2_TR(0x518881);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518884:{NFSU2_TR(0x518884);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518887:{NFSU2_TR(0x518887);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B518889:{NFSU2_TR(0x518889);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51888c:{NFSU2_TR(0x51888c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51888f:{NFSU2_TR(0x51888f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B518891:{NFSU2_TR(0x518891);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B518895:{NFSU2_TR(0x518895);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518898:{NFSU2_TR(0x518898);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51889b:{NFSU2_TR(0x51889b);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51889e:{NFSU2_TR(0x51889e);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5188a1:{NFSU2_TR(0x5188a1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5188a3:{NFSU2_TR(0x5188a3);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5188a6:{NFSU2_TR(0x5188a6);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5188a9:{NFSU2_TR(0x5188a9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5188ab:{NFSU2_TR(0x5188ab);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5188ae:{NFSU2_TR(0x5188ae);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5188b1:{NFSU2_TR(0x5188b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5188b3:{NFSU2_TR(0x5188b3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5188b7:{NFSU2_TR(0x5188b7);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5188ba:{NFSU2_TR(0x5188ba);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5188bd:{NFSU2_TR(0x5188bd);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5188c0:{NFSU2_TR(0x5188c0);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5188c3:{NFSU2_TR(0x5188c3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5188c5:{NFSU2_TR(0x5188c5);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5188c8:{NFSU2_TR(0x5188c8);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5188cb:{NFSU2_TR(0x5188cb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5188cd:{NFSU2_TR(0x5188cd);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5188d0:{NFSU2_TR(0x5188d0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5188d2:{NFSU2_TR(0x5188d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5188d4:{NFSU2_TR(0x5188d4);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5188d8:{NFSU2_TR(0x5188d8);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5188db:{NFSU2_TR(0x5188db);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5188de:{NFSU2_TR(0x5188de);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5188e1:{NFSU2_TR(0x5188e1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5188e4:{NFSU2_TR(0x5188e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5188e6:{NFSU2_TR(0x5188e6);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5188e9:{NFSU2_TR(0x5188e9);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5188ec:{NFSU2_TR(0x5188ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5188ee:{NFSU2_TR(0x5188ee);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5188f1:{NFSU2_TR(0x5188f1);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5188f4:{NFSU2_TR(0x5188f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5188f6:{NFSU2_TR(0x5188f6);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5188fa:{NFSU2_TR(0x5188fa);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5188fd:{NFSU2_TR(0x5188fd);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518900:{NFSU2_TR(0x518900);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518903:{NFSU2_TR(0x518903);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518906:{NFSU2_TR(0x518906);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B518908:{NFSU2_TR(0x518908);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51890b:{NFSU2_TR(0x51890b);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51890e:{NFSU2_TR(0x51890e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B518910:{NFSU2_TR(0x518910);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518913:{NFSU2_TR(0x518913);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518916:{NFSU2_TR(0x518916);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B518918:{NFSU2_TR(0x518918);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51891c:{NFSU2_TR(0x51891c);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51891f:{NFSU2_TR(0x51891f);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518922:{NFSU2_TR(0x518922);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518925:{NFSU2_TR(0x518925);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518928:{NFSU2_TR(0x518928);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51892a:{NFSU2_TR(0x51892a);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51892d:{NFSU2_TR(0x51892d);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518930:{NFSU2_TR(0x518930);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B518932:{NFSU2_TR(0x518932);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518935:{NFSU2_TR(0x518935);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518938:{NFSU2_TR(0x518938);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51893a:{NFSU2_TR(0x51893a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51893e:{NFSU2_TR(0x51893e);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518941:{NFSU2_TR(0x518941);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518944:{NFSU2_TR(0x518944);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518947:{NFSU2_TR(0x518947);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51894a:{NFSU2_TR(0x51894a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51894c:{NFSU2_TR(0x51894c);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51894f:{NFSU2_TR(0x51894f);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518952:{NFSU2_TR(0x518952);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B518954:{NFSU2_TR(0x518954);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518957:{NFSU2_TR(0x518957);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518959:{NFSU2_TR(0x518959);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51895b:{NFSU2_TR(0x51895b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51895f:{NFSU2_TR(0x51895f);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518962:{NFSU2_TR(0x518962);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518965:{NFSU2_TR(0x518965);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518968:{NFSU2_TR(0x518968);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51896b:{NFSU2_TR(0x51896b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51896d:{NFSU2_TR(0x51896d);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518970:{NFSU2_TR(0x518970);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518973:{NFSU2_TR(0x518973);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B518975:{NFSU2_TR(0x518975);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518978:{NFSU2_TR(0x518978);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51897b:{NFSU2_TR(0x51897b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51897d:{NFSU2_TR(0x51897d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B518981:{NFSU2_TR(0x518981);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518984:{NFSU2_TR(0x518984);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518987:{NFSU2_TR(0x518987);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51898a:{NFSU2_TR(0x51898a);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51898d:{NFSU2_TR(0x51898d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51898f:{NFSU2_TR(0x51898f);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518992:{NFSU2_TR(0x518992);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518995:{NFSU2_TR(0x518995);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B518997:{NFSU2_TR(0x518997);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51899a:{NFSU2_TR(0x51899a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51899d:{NFSU2_TR(0x51899d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51899f:{NFSU2_TR(0x51899f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5189a3:{NFSU2_TR(0x5189a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5189a7:{NFSU2_TR(0x5189a7);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5189aa:{NFSU2_TR(0x5189aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5189ae:{NFSU2_TR(0x5189ae);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5189b1:{NFSU2_TR(0x5189b1);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5189b4:{NFSU2_TR(0x5189b4);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5189b7:{NFSU2_TR(0x5189b7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5189b9:{NFSU2_TR(0x5189b9);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5189bc:{NFSU2_TR(0x5189bc);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5189bf:{NFSU2_TR(0x5189bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5189c1:{NFSU2_TR(0x5189c1);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5189c4:{NFSU2_TR(0x5189c4);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5189c7:{NFSU2_TR(0x5189c7);
w4(R+4,u32(0x10ull));
}
B5189cc:{NFSU2_TR(0x5189cc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5189ce:{NFSU2_TR(0x5189ce);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5189d2:L5189d2:{c.instructions+=1;NFSU2_TR(0x5189d2);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5189d4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5189d2u);}goto L5189d2;}
}
B5189d4:L5189d4:{c.instructions+=4;NFSU2_TR(0x5189d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5189d5:{NFSU2_TR(0x5189d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5189d6:{NFSU2_TR(0x5189d6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5189d9:{NFSU2_TR(0x5189d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5189e0:L5189e0:{c.instructions+=23;NFSU2_TR(0x5189e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5189e1:{NFSU2_TR(0x5189e1);
__builtin_memmove((R+20),(R+16),4);
}
B5189e3:{NFSU2_TR(0x5189e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5189e6:{NFSU2_TR(0x5189e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B5189e9:{NFSU2_TR(0x5189e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5189ec:{NFSU2_TR(0x5189ec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5189ed:{NFSU2_TR(0x5189ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5189ee:{NFSU2_TR(0x5189ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5189ef:{NFSU2_TR(0x5189ef);
__builtin_memmove((R+24),(R+4),4);
}
B5189f1:{NFSU2_TR(0x5189f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5189f4:{NFSU2_TR(0x5189f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5189f8:{NFSU2_TR(0x5189f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5189f9:{NFSU2_TR(0x5189f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5189fa:{NFSU2_TR(0x5189fa);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5189fc:{NFSU2_TR(0x5189fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5189fd:{NFSU2_TR(0x5189fd);
__builtin_memmove((R+4),(R+24),4);
}
B5189ff:{NFSU2_TR(0x5189ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B518a07:{NFSU2_TR(0x518a07);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B518a0f:{NFSU2_TR(0x518a0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B518a17:{NFSU2_TR(0x518a17);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B518a1f:{NFSU2_TR(0x518a1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x7149f2caull));
s4(u32(r4(U+0)),r4(U+4));
}
B518a27:{NFSU2_TR(0x518a27);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518a2b:{NFSU2_TR(0x518a2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518a30ull));
TAIL_STATIC(0x504bb0u,504);
}
B518a30:L518a30:{c.instructions+=3;NFSU2_TR(0x518a30);
w4(R+0,u32(0x7fa398ull));
}
B518a35:{NFSU2_TR(0x518a35);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518a39:{NFSU2_TR(0x518a39);
__builtin_memmove((R+16),(R+16),4);
}
B518a40:L518a40:{c.instructions+=2;NFSU2_TR(0x518a40);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B518a42:{NFSU2_TR(0x518a42);
if(r1(R+518)){{goto L518a53;}}
}
B518a44:L518a44:{c.instructions+=3;NFSU2_TR(0x518a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B518a47:{NFSU2_TR(0x518a47);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7f7cb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B518a4d:{NFSU2_TR(0x518a4d);
if(r1(R+518)){{goto L518b65;}}
}
B518a53:L518a53:{c.instructions+=10;NFSU2_TR(0x518a53);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518a57:{NFSU2_TR(0x518a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B518a5a:{NFSU2_TR(0x518a5a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B518a5c:{NFSU2_TR(0x518a5c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B518a5e:{NFSU2_TR(0x518a5e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B518a60:{NFSU2_TR(0x518a60);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B518a64:{NFSU2_TR(0x518a64);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518a68:{NFSU2_TR(0x518a68);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B518a6b:{NFSU2_TR(0x518a6b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B518a6f:{NFSU2_TR(0x518a6f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L518b65;}}
}
B518a75:L518a75:{c.instructions+=1;NFSU2_TR(0x518a75);
{goto L518a80;}
}
B518a80:L518a80:{c.instructions+=4;NFSU2_TR(0x518a80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B518a82:{NFSU2_TR(0x518a82);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B518a85:{NFSU2_TR(0x518a85);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x4000000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B518a8c:{NFSU2_TR(0x518a8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L518b55;}}
}
B518a92:L518a92:{c.instructions+=2;NFSU2_TR(0x518a92);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B518a95:{NFSU2_TR(0x518a95);
if(r1(R+518)){{goto L518b55;}}
}
B518a9b:L518a9b:{c.instructions+=7;NFSU2_TR(0x518a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518a9e:{NFSU2_TR(0x518a9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B518aa2:{NFSU2_TR(0x518aa2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518aa3:{NFSU2_TR(0x518aa3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518aa4:{NFSU2_TR(0x518aa4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518aa5:{NFSU2_TR(0x518aa5);
__builtin_memmove((R+4),(R+24),4);
}
B518aa7:{NFSU2_TR(0x518aa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518aacull));
TAIL_STATIC(0x504bb0u,504);
}
B518aac:L518aac:{c.instructions+=15;NFSU2_TR(0x518aac);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518ab0:{NFSU2_TR(0x518ab0);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B518ab4:{NFSU2_TR(0x518ab4);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518ab8:{NFSU2_TR(0x518ab8);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B518abc:{NFSU2_TR(0x518abc);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B518abe:{NFSU2_TR(0x518abe);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B518ac0:{NFSU2_TR(0x518ac0);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B518ac2:{NFSU2_TR(0x518ac2);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B518ac4:{NFSU2_TR(0x518ac4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B518ac6:{NFSU2_TR(0x518ac6);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B518ac8:{NFSU2_TR(0x518ac8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B518acc:{NFSU2_TR(0x518acc);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B518ad2:{NFSU2_TR(0x518ad2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B518ad4:{NFSU2_TR(0x518ad4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B518ad7:{NFSU2_TR(0x518ad7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L518b51;}}
}
B518ad9:L518ad9:{c.instructions+=15;NFSU2_TR(0x518ad9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518adf:{NFSU2_TR(0x518adf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518ae2:{NFSU2_TR(0x518ae2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B518ae6:{NFSU2_TR(0x518ae6);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B518ae8:{NFSU2_TR(0x518ae8);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B518aea:{NFSU2_TR(0x518aea);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B518aee:{NFSU2_TR(0x518aee);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B518af0:{NFSU2_TR(0x518af0);
{u32 ea_=u32((r4(R+0)*8u)+u32(8364892u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518af7:{NFSU2_TR(0x518af7);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518afb:{NFSU2_TR(0x518afb);
{u32 ea_=u32((r4(R+0)*8u)+u32(8364888u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518b02:{NFSU2_TR(0x518b02);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B518b04:{NFSU2_TR(0x518b04);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B518b0a:{NFSU2_TR(0x518b0a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B518b0c:{NFSU2_TR(0x518b0c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B518b0f:{NFSU2_TR(0x518b0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L518b15;}}
}
B518b11:L518b11:{c.instructions+=2;NFSU2_TR(0x518b11);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B518b13:{NFSU2_TR(0x518b13);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B518b15:L518b15:{c.instructions+=4;NFSU2_TR(0x518b15);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B518b1b:{NFSU2_TR(0x518b1b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B518b1d:{NFSU2_TR(0x518b1d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B518b20:{NFSU2_TR(0x518b20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L518b34;}}
}
B518b22:L518b22:{c.instructions+=4;NFSU2_TR(0x518b22);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B518b28:{NFSU2_TR(0x518b28);
{u32 ea_=u32(u32(7908012u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518b2e:{NFSU2_TR(0x518b2e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B518b32:{NFSU2_TR(0x518b32);
{goto L518b3c;}
}
B518b34:L518b34:{c.instructions+=2;NFSU2_TR(0x518b34);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B518b36:{NFSU2_TR(0x518b36);
{u32 ea_=u32(u32(7905244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518b3c:L518b3c:{c.instructions+=4;NFSU2_TR(0x518b3c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B518b40:{NFSU2_TR(0x518b40);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B518b42:{NFSU2_TR(0x518b42);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B518b45:{NFSU2_TR(0x518b45);
if(r1(R+514)){{goto L518b53;}}
}
B518b47:L518b47:{c.instructions+=3;NFSU2_TR(0x518b47);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B518b4b:{NFSU2_TR(0x518b4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518b4f:{NFSU2_TR(0x518b4f);
{goto L518b55;}
}
B518b51:L518b51:{c.instructions+=1;NFSU2_TR(0x518b51);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B518b53:L518b53:{c.instructions+=1;NFSU2_TR(0x518b53);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B518b55:L518b55:{c.instructions+=4;NFSU2_TR(0x518b55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518b58:{NFSU2_TR(0x518b58);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B518b59:{NFSU2_TR(0x518b59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B518b5b:{NFSU2_TR(0x518b5b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518a80u);}goto L518a80;}}
}
B518b61:L518b61:{c.instructions+=1;NFSU2_TR(0x518b61);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518b65:L518b65:{c.instructions+=5;NFSU2_TR(0x518b65);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B518b68:{NFSU2_TR(0x518b68);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B518b6b:{NFSU2_TR(0x518b6b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x14ull))));
}
B518b6e:{NFSU2_TR(0x518b6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518b72:{NFSU2_TR(0x518b72);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518a40u);}goto L518a40;}}
}
B518b78:L518b78:{c.instructions+=5;NFSU2_TR(0x518b78);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518b7c:{NFSU2_TR(0x518b7c);
{u32 ea_=u32(u32(7905244u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B518b82:{NFSU2_TR(0x518b82);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B518b84:{NFSU2_TR(0x518b84);
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
B518b87:{NFSU2_TR(0x518b87);
if(r1(R+514)){{goto L518b9b;}}
}
B518b89:L518b89:{c.instructions+=9;NFSU2_TR(0x518b89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B518b8b:{NFSU2_TR(0x518b8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B518b8f:{NFSU2_TR(0x518b8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B518b92:{NFSU2_TR(0x518b92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B518b93:{NFSU2_TR(0x518b93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518b94:{NFSU2_TR(0x518b94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B518b95:{NFSU2_TR(0x518b95);
__builtin_memmove((R+16),(R+20),4);
}
B518b97:{NFSU2_TR(0x518b97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B518b98:{NFSU2_TR(0x518b98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518b9b:L518b9b:{c.instructions+=7;NFSU2_TR(0x518b9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B518b9c:{NFSU2_TR(0x518b9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518b9d:{NFSU2_TR(0x518b9d);
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
B518b9f:{NFSU2_TR(0x518b9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B518ba0:{NFSU2_TR(0x518ba0);
__builtin_memmove((R+16),(R+20),4);
}
B518ba2:{NFSU2_TR(0x518ba2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B518ba3:{NFSU2_TR(0x518ba3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518bb0:L518bb0:{c.instructions+=6;NFSU2_TR(0x518bb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518bb3:{NFSU2_TR(0x518bb3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518bb4:{NFSU2_TR(0x518bb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B518bb8:{NFSU2_TR(0x518bb8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B518bba:{NFSU2_TR(0x518bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518bbd:{NFSU2_TR(0x518bbd);
if(r1(R+512)){{goto L518bca;}}
}
B518bbf:L518bbf:{c.instructions+=2;NFSU2_TR(0x518bbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B518bc1:{NFSU2_TR(0x518bc1);
if(r1(R+518)){{goto L518bc8;}}
}
B518bc3:L518bc3:{c.instructions+=2;NFSU2_TR(0x518bc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B518bc6:{NFSU2_TR(0x518bc6);
{goto L518bca;}
}
B518bc8:L518bc8:{c.instructions+=1;NFSU2_TR(0x518bc8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B518bca:L518bca:{c.instructions+=2;NFSU2_TR(0x518bca);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B518bce:{NFSU2_TR(0x518bce);
if(r1(R+518)){{goto L518bf8;}}
}
B518bd0:L518bd0:{c.instructions+=4;NFSU2_TR(0x518bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518bd3:{NFSU2_TR(0x518bd3);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B518bd5:{NFSU2_TR(0x518bd5);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B518bd7:{NFSU2_TR(0x518bd7);
if(r1(R+519)){{goto L518be3;}}
}
B518bd9:L518bd9:{c.instructions+=5;NFSU2_TR(0x518bd9);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B518bda:{NFSU2_TR(0x518bda);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x518bda);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x518bda);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B518bdc:{NFSU2_TR(0x518bdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518bdd:{NFSU2_TR(0x518bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518be0:{NFSU2_TR(0x518be0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518be3:L518be3:{c.instructions+=2;NFSU2_TR(0x518be3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B518be6:{NFSU2_TR(0x518be6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L518bf6;}}
}
B518be8:L518be8:{c.instructions+=7;NFSU2_TR(0x518be8);
w4(R+0,u32(0-u32(r4(R+0))));
}
B518bea:{NFSU2_TR(0x518bea);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B518beb:{NFSU2_TR(0x518beb);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x518beb);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x518beb);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B518bed:{NFSU2_TR(0x518bed);
u8 U[6];
w1(R+512,u8((r4(R+24))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+24),r4(R+8)));
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B518bef:{NFSU2_TR(0x518bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518bf2:{NFSU2_TR(0x518bf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518bf3:{NFSU2_TR(0x518bf3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518bf6:L518bf6:{c.instructions+=1;NFSU2_TR(0x518bf6);
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
B518bf8:L518bf8:{c.instructions+=3;NFSU2_TR(0x518bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518bfb:{NFSU2_TR(0x518bfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518bfc:{NFSU2_TR(0x518bfc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518c00:L518c00:{c.instructions+=6;NFSU2_TR(0x518c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518c06:{NFSU2_TR(0x518c06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518c07:{NFSU2_TR(0x518c07);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B518c0b:{NFSU2_TR(0x518c0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B518c0d:{NFSU2_TR(0x518c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518c10:{NFSU2_TR(0x518c10);
if(r1(R+512)){{goto L518c1d;}}
}
B518c12:L518c12:{c.instructions+=2;NFSU2_TR(0x518c12);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B518c14:{NFSU2_TR(0x518c14);
if(r1(R+518)){{goto L518c1b;}}
}
B518c16:L518c16:{c.instructions+=2;NFSU2_TR(0x518c16);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B518c19:{NFSU2_TR(0x518c19);
{goto L518c1d;}
}
B518c1b:L518c1b:{c.instructions+=1;NFSU2_TR(0x518c1b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B518c1d:L518c1d:{c.instructions+=2;NFSU2_TR(0x518c1d);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B518c21:{NFSU2_TR(0x518c21);
if(r1(R+518)){{goto L518c4b;}}
}
B518c23:L518c23:{c.instructions+=4;NFSU2_TR(0x518c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518c26:{NFSU2_TR(0x518c26);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B518c28:{NFSU2_TR(0x518c28);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B518c2a:{NFSU2_TR(0x518c2a);
if(r1(R+519)){{goto L518c36;}}
}
B518c2c:L518c2c:{c.instructions+=5;NFSU2_TR(0x518c2c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B518c2d:{NFSU2_TR(0x518c2d);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x518c2d);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x518c2d);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B518c2f:{NFSU2_TR(0x518c2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518c30:{NFSU2_TR(0x518c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518c33:{NFSU2_TR(0x518c33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518c36:L518c36:{c.instructions+=2;NFSU2_TR(0x518c36);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B518c39:{NFSU2_TR(0x518c39);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L518c49;}}
}
B518c3b:L518c3b:{c.instructions+=7;NFSU2_TR(0x518c3b);
w4(R+0,u32(0-u32(r4(R+0))));
}
B518c3d:{NFSU2_TR(0x518c3d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B518c3e:{NFSU2_TR(0x518c3e);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x518c3e);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x518c3e);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B518c40:{NFSU2_TR(0x518c40);
u8 U[6];
w1(R+512,u8((r4(R+24))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+24),r4(R+8)));
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B518c42:{NFSU2_TR(0x518c42);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518c45:{NFSU2_TR(0x518c45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518c46:{NFSU2_TR(0x518c46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518c49:L518c49:{c.instructions+=1;NFSU2_TR(0x518c49);
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
B518c4b:L518c4b:{c.instructions+=3;NFSU2_TR(0x518c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518c4e:{NFSU2_TR(0x518c4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518c4f:{NFSU2_TR(0x518c4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518c60:L518c60:{c.instructions+=19;NFSU2_TR(0x518c60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B518c63:{NFSU2_TR(0x518c63);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518c64:{NFSU2_TR(0x518c64);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B518c68:{NFSU2_TR(0x518c68);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518c69:{NFSU2_TR(0x518c69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518c6a:{NFSU2_TR(0x518c6a);
__builtin_memmove((R+24),(R+4),4);
}
B518c6c:{NFSU2_TR(0x518c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518c72:{NFSU2_TR(0x518c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B518c78:{NFSU2_TR(0x518c78);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518c79:{NFSU2_TR(0x518c79);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B518c7b:{NFSU2_TR(0x518c7b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B518c7d:{NFSU2_TR(0x518c7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518c81:{NFSU2_TR(0x518c81);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518c85:{NFSU2_TR(0x518c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518c8b:{NFSU2_TR(0x518c8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518c91:{NFSU2_TR(0x518c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518c97:{NFSU2_TR(0x518c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518c9d:{NFSU2_TR(0x518c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518ca3:{NFSU2_TR(0x518ca3);
if(r1(R+518)){{goto L518dee;}}
}
B518ca9:L518ca9:{c.instructions+=3;NFSU2_TR(0x518ca9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B518cad:{NFSU2_TR(0x518cad);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B518caf:{NFSU2_TR(0x518caf);
if(r1(R+518)){{goto L518dee;}}
}
B518cb5:L518cb5:{c.instructions+=5;NFSU2_TR(0x518cb5);
__builtin_memmove((R+28),(R+12),4);
}
B518cb7:{NFSU2_TR(0x518cb7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B518cba:{NFSU2_TR(0x518cba);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B518cbc:{NFSU2_TR(0x518cbc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518cbd:{NFSU2_TR(0x518cbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518cc2ull));
TAIL_STATIC(0x575620u,575);
}
B518cc2:L518cc2:{c.instructions+=4;NFSU2_TR(0x518cc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B518cc9:{NFSU2_TR(0x518cc9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518cca:{NFSU2_TR(0x518cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518cd0:{NFSU2_TR(0x518cd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518cd5ull));
TAIL_STATIC(0x575620u,575);
}
B518cd5:L518cd5:{c.instructions+=6;NFSU2_TR(0x518cd5);
__builtin_memmove((R+4),(R+28),4);
}
B518cd7:{NFSU2_TR(0x518cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B518cdd:{NFSU2_TR(0x518cdd);
__builtin_memmove((R+8),(R+4),4);
}
B518cdf:{NFSU2_TR(0x518cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518ce5:{NFSU2_TR(0x518ce5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B518ce8:{NFSU2_TR(0x518ce8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B518cea:L518cea:{c.instructions+=1;NFSU2_TR(0x518cea);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L518cec;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518ceau);}goto L518cea;}
}
B518cec:L518cec:{c.instructions+=2;NFSU2_TR(0x518cec);
__builtin_memmove((R+4),(R+8),4);
}
B518cee:{NFSU2_TR(0x518cee);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B518cf1:L518cf1:{c.instructions+=1;NFSU2_TR(0x518cf1);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L518cf3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518cf1u);}goto L518cf1;}
}
B518cf3:L518cf3:{c.instructions+=4;NFSU2_TR(0x518cf3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B518cf6:{NFSU2_TR(0x518cf6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B518cf8:{NFSU2_TR(0x518cf8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B518cfa:{NFSU2_TR(0x518cfa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L518d1f;}}
}
B518cfc:L518cfc:{c.instructions+=2;NFSU2_TR(0x518cfc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B518cfe:{NFSU2_TR(0x518cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B518d02:L518d02:{c.instructions+=8;NFSU2_TR(0x518d02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B518d08:{NFSU2_TR(0x518d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B518d0e:{NFSU2_TR(0x518d0e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B518d10:{NFSU2_TR(0x518d10);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B518d14:{NFSU2_TR(0x518d14);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B518d15:{NFSU2_TR(0x518d15);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B518d17:{NFSU2_TR(0x518d17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B518d19:{NFSU2_TR(0x518d19);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518d02u);}goto L518d02;}}
}
B518d1b:L518d1b:{c.instructions+=1;NFSU2_TR(0x518d1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B518d1f:L518d1f:{c.instructions+=5;NFSU2_TR(0x518d1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518d23:{NFSU2_TR(0x518d23);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B518d25:{NFSU2_TR(0x518d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518d2b:{NFSU2_TR(0x518d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518d31:{NFSU2_TR(0x518d31);
if(r1(R+518)){{goto L518e01;}}
}
B518d37:L518d37:{c.instructions+=3;NFSU2_TR(0x518d37);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518d3b:{NFSU2_TR(0x518d3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B518d3d:{NFSU2_TR(0x518d3d);
if(r1(R+518)){{goto L518dec;}}
}
B518d43:L518d43:{c.instructions+=5;NFSU2_TR(0x518d43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518d46:{NFSU2_TR(0x518d46);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B518d48:{NFSU2_TR(0x518d48);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B518d4a:{NFSU2_TR(0x518d4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518d4e:{NFSU2_TR(0x518d4e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L518dec;}}
}
B518d54:L518d54:{c.instructions+=4;NFSU2_TR(0x518d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518d57:{NFSU2_TR(0x518d57);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B518d59:{NFSU2_TR(0x518d59);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B518d5b:{NFSU2_TR(0x518d5b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L518ddc;}}
}
B518d61:L518d61:{c.instructions+=10;NFSU2_TR(0x518d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518d64:{NFSU2_TR(0x518d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518d6a:{NFSU2_TR(0x518d6a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B518d6d:{NFSU2_TR(0x518d6d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B518d6f:{NFSU2_TR(0x518d6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B518d72:{NFSU2_TR(0x518d72);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B518d75:{NFSU2_TR(0x518d75);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B518d79:{NFSU2_TR(0x518d79);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B518d7b:{NFSU2_TR(0x518d7b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B518d7e:{NFSU2_TR(0x518d7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L518dd4;}}
}
B518d80:L518d80:{c.instructions+=11;NFSU2_TR(0x518d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B518d86:{NFSU2_TR(0x518d86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B518d8c:{NFSU2_TR(0x518d8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B518d8f:{NFSU2_TR(0x518d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518d92:{NFSU2_TR(0x518d92);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B518d93:{NFSU2_TR(0x518d93);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B518d95:{NFSU2_TR(0x518d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518d9b:{NFSU2_TR(0x518d9b);
u8 U[2];
w2(U+0,u16(0x0ull));
s2(u32(r4(R+4)),r2(U+0));
}
B518da0:{NFSU2_TR(0x518da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518da3:{NFSU2_TR(0x518da3);
__builtin_memmove((R+0),(R+4),4);
}
B518da5:{NFSU2_TR(0x518da5);
if(r1(R+518)){{goto L518dcf;}}
}
B518da7:L518da7:{c.instructions+=5;NFSU2_TR(0x518da7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B518dab:{NFSU2_TR(0x518dab);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B518dad:{NFSU2_TR(0x518dad);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B518dae:{NFSU2_TR(0x518dae);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+28))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B518db1:{NFSU2_TR(0x518db1);
if(r1(R+518)){{goto L518dcb;}}
}
B518db3:L518db3:{c.instructions+=1;NFSU2_TR(0x518db3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B518db5:L518db5:{c.instructions+=2;NFSU2_TR(0x518db5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B518db7:{NFSU2_TR(0x518db7);
if(r1(R+518)){{goto L518dcb;}}
}
B518db9:L518db9:{c.instructions+=6;NFSU2_TR(0x518db9);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+4),(U+8),2);
}
B518dbd:{NFSU2_TR(0x518dbd);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B518dc0:{NFSU2_TR(0x518dc0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B518dc3:{NFSU2_TR(0x518dc3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B518dc4:{NFSU2_TR(0x518dc4);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B518dc9:{NFSU2_TR(0x518dc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518db5u);}goto L518db5;}}
}
B518dcb:L518dcb:{c.instructions+=1;NFSU2_TR(0x518dcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B518dcf:L518dcf:{c.instructions+=1;NFSU2_TR(0x518dcf);
u8 U[2];
w2(U+0,u16(0x0ull));
s2(u32(r4(R+0)),r2(U+0));
}
B518dd4:L518dd4:{c.instructions+=4;NFSU2_TR(0x518dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518dd7:{NFSU2_TR(0x518dd7);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B518dd8:{NFSU2_TR(0x518dd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
}
B518dda:{NFSU2_TR(0x518dda);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518d61u);}goto L518d61;}}
}
B518ddc:L518ddc:{c.instructions+=5;NFSU2_TR(0x518ddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518ddf:{NFSU2_TR(0x518ddf);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B518de0:{NFSU2_TR(0x518de0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B518de2:{NFSU2_TR(0x518de2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518de6:{NFSU2_TR(0x518de6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518d54u);}goto L518d54;}}
}
B518dec:L518dec:{c.instructions+=1;NFSU2_TR(0x518dec);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B518dee:L518dee:{c.instructions+=3;NFSU2_TR(0x518dee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518df2:{NFSU2_TR(0x518df2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B518df4:{NFSU2_TR(0x518df4);
if(r1(R+518)){{goto L518e03;}}
}
B518df6:L518df6:{c.instructions+=2;NFSU2_TR(0x518df6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518df7:{NFSU2_TR(0x518df7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518dfcull));
TAIL_STATIC(0x575630u,575);
}
B518dfc:L518dfc:{c.instructions+=2;NFSU2_TR(0x518dfc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B518dff:{NFSU2_TR(0x518dff);
{goto L518e03;}
}
B518e01:L518e01:{c.instructions+=1;NFSU2_TR(0x518e01);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B518e03:L518e03:{c.instructions+=7;NFSU2_TR(0x518e03);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518e07:{NFSU2_TR(0x518e07);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B518e09:{NFSU2_TR(0x518e09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B518e0a:{NFSU2_TR(0x518e0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518e0b:{NFSU2_TR(0x518e0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B518e0c:{NFSU2_TR(0x518e0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B518e0d:{NFSU2_TR(0x518e0d);
if(r1(R+518)){{goto L518e18;}}
}
B518e0f:L518e0f:{c.instructions+=2;NFSU2_TR(0x518e0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518e10:{NFSU2_TR(0x518e10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518e15ull));
TAIL_STATIC(0x575630u,575);
}
B518e15:L518e15:{c.instructions+=1;NFSU2_TR(0x518e15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B518e18:L518e18:{c.instructions+=2;NFSU2_TR(0x518e18);
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
B518e1b:{NFSU2_TR(0x518e1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518e20:L518e20:{c.instructions+=16;NFSU2_TR(0x518e20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B518e23:{NFSU2_TR(0x518e23);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518e27:{NFSU2_TR(0x518e27);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B518e2d:{NFSU2_TR(0x518e2d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518e2e:{NFSU2_TR(0x518e2e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518e2f:{NFSU2_TR(0x518e2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518e30:{NFSU2_TR(0x518e30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((R+24),(U+0),4);
}
B518e36:{NFSU2_TR(0x518e36);
__builtin_memmove((R+4),(R+24),4);
}
B518e38:{NFSU2_TR(0x518e38);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518e39:{NFSU2_TR(0x518e39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B518e3b:{NFSU2_TR(0x518e3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B518e3e:{NFSU2_TR(0x518e3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B518e41:{NFSU2_TR(0x518e41);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518e44:{NFSU2_TR(0x518e44);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B518e4a:{NFSU2_TR(0x518e4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518e4e:{NFSU2_TR(0x518e4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518e53ull));
TAIL_STATIC(0x75bed4u,75b);
}
B518e53:L518e53:{c.instructions+=10;NFSU2_TR(0x518e53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B518e55:{NFSU2_TR(0x518e55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B518e56:{NFSU2_TR(0x518e56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518e59:{NFSU2_TR(0x518e59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518e5c:{NFSU2_TR(0x518e5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518e5f:{NFSU2_TR(0x518e5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518e60:{NFSU2_TR(0x518e60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B518e61:{NFSU2_TR(0x518e61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B518e62:{NFSU2_TR(0x518e62);
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
B518e65:{NFSU2_TR(0x518e65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518e70:L518e70:{c.instructions+=10;NFSU2_TR(0x518e70);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518e74:{NFSU2_TR(0x518e74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518e75:{NFSU2_TR(0x518e75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518e76:{NFSU2_TR(0x518e76);
__builtin_memmove((R+24),(R+4),4);
}
B518e78:{NFSU2_TR(0x518e78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B518e7b:{NFSU2_TR(0x518e7b);
__builtin_memmove((R+0),(R+4),4);
}
B518e7d:{NFSU2_TR(0x518e7d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B518e80:{NFSU2_TR(0x518e80);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518e81:{NFSU2_TR(0x518e81);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B518e85:{NFSU2_TR(0x518e85);
if(r1(R+518)){{goto L518ead;}}
}
B518e87:L518e87:{c.instructions+=2;NFSU2_TR(0x518e87);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B518e89:{NFSU2_TR(0x518e89);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L518ead;}}
}
B518e8b:L518e8b:{c.instructions+=7;NFSU2_TR(0x518e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B518e8e:{NFSU2_TR(0x518e8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B518e90:{NFSU2_TR(0x518e90);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518e92:{NFSU2_TR(0x518e92);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518e97:{NFSU2_TR(0x518e97);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518e98:{NFSU2_TR(0x518e98);
u8 U[4];
w4(U+0,u32(0x79b14cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518e9d:{NFSU2_TR(0x518e9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518ea2ull));
TAIL_STATIC(0x505450u,505);
}
B518ea2:L518ea2:{c.instructions+=4;NFSU2_TR(0x518ea2);
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
B518ea5:{NFSU2_TR(0x518ea5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518ea6:{NFSU2_TR(0x518ea6);
__builtin_memmove((R+4),(R+28),4);
}
B518ea8:{NFSU2_TR(0x518ea8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518eabull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B518eab:L518eab:{c.instructions+=1;NFSU2_TR(0x518eab);
{goto L518eca;}
}
B518ead:L518ead:{c.instructions+=2;NFSU2_TR(0x518ead);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B518eb0:{NFSU2_TR(0x518eb0);
if(r1(R+518)){{goto L518f0b;}}
}
B518eb2:L518eb2:{c.instructions+=3;NFSU2_TR(0x518eb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B518eb4:{NFSU2_TR(0x518eb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B518eb8:{NFSU2_TR(0x518eb8);
if(r1(R+518)){{goto L518ef2;}}
}
B518eba:L518eba:{c.instructions+=4;NFSU2_TR(0x518eba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518ebe:{NFSU2_TR(0x518ebe);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B518ec0:{NFSU2_TR(0x518ec0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B518ec2:{NFSU2_TR(0x518ec2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L518efc;}}
}
B518ec4:L518ec4:{c.instructions+=1;NFSU2_TR(0x518ec4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B518ec6:L518ec6:{c.instructions+=2;NFSU2_TR(0x518ec6);
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
B518ec8:{NFSU2_TR(0x518ec8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L518f0b;}}
}
B518eca:L518eca:{c.instructions+=4;NFSU2_TR(0x518eca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518ecc:{NFSU2_TR(0x518ecc);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518ed1:{NFSU2_TR(0x518ed1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518ed2:{NFSU2_TR(0x518ed2);
u8 U[4];
w4(U+0,u32(0x79b140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518ed7:L518ed7:{c.instructions+=3;NFSU2_TR(0x518ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B518eda:{NFSU2_TR(0x518eda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B518edc:{NFSU2_TR(0x518edc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518ee1ull));
TAIL_STATIC(0x505450u,505);
}
B518ee1:L518ee1:{c.instructions+=4;NFSU2_TR(0x518ee1);
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
B518ee4:{NFSU2_TR(0x518ee4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518ee5:{NFSU2_TR(0x518ee5);
__builtin_memmove((R+4),(R+28),4);
}
B518ee7:{NFSU2_TR(0x518ee7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518eeaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B518eea:L518eea:{c.instructions+=5;NFSU2_TR(0x518eea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B518eeb:{NFSU2_TR(0x518eeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518eec:{NFSU2_TR(0x518eec);
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
B518eee:{NFSU2_TR(0x518eee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B518eef:{NFSU2_TR(0x518eef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518ef2:L518ef2:{c.instructions+=4;NFSU2_TR(0x518ef2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518ef6:{NFSU2_TR(0x518ef6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B518ef8:{NFSU2_TR(0x518ef8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B518efa:{NFSU2_TR(0x518efa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518ec6u);}goto L518ec6;}}
}
B518efc:L518efc:{c.instructions+=5;NFSU2_TR(0x518efc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518efe:{NFSU2_TR(0x518efe);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518f03:{NFSU2_TR(0x518f03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518f04:{NFSU2_TR(0x518f04);
u8 U[4];
w4(U+0,u32(0x79b14cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518f09:{NFSU2_TR(0x518f09);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518ed7u);}goto L518ed7;}
}
B518f0b:L518f0b:{c.instructions+=5;NFSU2_TR(0x518f0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B518f0c:{NFSU2_TR(0x518f0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518f0d:{NFSU2_TR(0x518f0d);
w1(R+0,u8(0x1ull));
}
B518f0f:{NFSU2_TR(0x518f0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B518f10:{NFSU2_TR(0x518f10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518f20:L518f20:{c.instructions+=6;NFSU2_TR(0x518f20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518f21:{NFSU2_TR(0x518f21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518f22:{NFSU2_TR(0x518f22);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B518f26:{NFSU2_TR(0x518f26);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B518f28:{NFSU2_TR(0x518f28);
__builtin_memmove((R+12),(R+4),4);
}
B518f2a:{NFSU2_TR(0x518f2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L518f33;}}
}
B518f2c:L518f2c:{c.instructions+=4;NFSU2_TR(0x518f2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518f2d:{NFSU2_TR(0x518f2d);
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
B518f2f:{NFSU2_TR(0x518f2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B518f30:{NFSU2_TR(0x518f30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518f33:L518f33:{c.instructions+=15;NFSU2_TR(0x518f33);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518f37:{NFSU2_TR(0x518f37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B518f39:{NFSU2_TR(0x518f39);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518f3d:{NFSU2_TR(0x518f3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B518f3f:{NFSU2_TR(0x518f3f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518f40:{NFSU2_TR(0x518f40);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B518f44:{NFSU2_TR(0x518f44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518f45:{NFSU2_TR(0x518f45);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B518f49:{NFSU2_TR(0x518f49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518f4a:{NFSU2_TR(0x518f4a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518f4b:{NFSU2_TR(0x518f4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518f4c:{NFSU2_TR(0x518f4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518f4d:{NFSU2_TR(0x518f4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518f4e:{NFSU2_TR(0x518f4e);
__builtin_memmove((R+4),(R+12),4);
}
B518f50:{NFSU2_TR(0x518f50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518f55ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518e70u);}goto L518e70;}
}
B518f55:L518f55:{c.instructions+=2;NFSU2_TR(0x518f55);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B518f57:{NFSU2_TR(0x518f57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L518f62;}}
}
B518f59:L518f59:{c.instructions+=6;NFSU2_TR(0x518f59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B518f5a:{NFSU2_TR(0x518f5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B518f5b:{NFSU2_TR(0x518f5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B518f5c:{NFSU2_TR(0x518f5c);
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
B518f5e:{NFSU2_TR(0x518f5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B518f5f:{NFSU2_TR(0x518f5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B518f62:L518f62:{c.instructions+=9;NFSU2_TR(0x518f62);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B518f66:{NFSU2_TR(0x518f66);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518f6a:{NFSU2_TR(0x518f6a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518f6b:{NFSU2_TR(0x518f6b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518f6c:{NFSU2_TR(0x518f6c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518f6d:{NFSU2_TR(0x518f6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518f6e:{NFSU2_TR(0x518f6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518f6f:{NFSU2_TR(0x518f6f);
__builtin_memmove((R+4),(R+12),4);
}
B518f71:{NFSU2_TR(0x518f71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518f76ull));
TAIL_STATIC(0x504e40u,504);
}
B518f76:L518f76:{c.instructions+=2;NFSU2_TR(0x518f76);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B518f78:{NFSU2_TR(0x518f78);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x518f59u);}goto L518f59;}}
}
B518f7a:L518f7a:{c.instructions+=3;NFSU2_TR(0x518f7a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B518f7c:{NFSU2_TR(0x518f7c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B518f7e:{NFSU2_TR(0x518f7e);
if(r1(R+518)){TAIL_STATIC(0x5196a4u,519);}
}
B518f84:L518f84:{c.instructions+=3;NFSU2_TR(0x518f84);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B518f88:{NFSU2_TR(0x518f88);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B518f8a:{NFSU2_TR(0x518f8a);
if(r1(R+518)){TAIL_STATIC(0x5192e4u,519);}
}
B518f90:L518f90:{c.instructions+=2;NFSU2_TR(0x518f90);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B518f92:{NFSU2_TR(0x518f92);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x519152u,519);}
}
B518f98:L518f98:{c.instructions+=9;NFSU2_TR(0x518f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518f9b:{NFSU2_TR(0x518f9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B518f9e:{NFSU2_TR(0x518f9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B518fa1:{NFSU2_TR(0x518fa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518fa5:{NFSU2_TR(0x518fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B518fa8:{NFSU2_TR(0x518fa8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518fa9:{NFSU2_TR(0x518fa9);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B518fad:{NFSU2_TR(0x518fad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B518fae:{NFSU2_TR(0x518fae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x518fb3ull));
TAIL_STATIC(0x504790u,504);
}
B518fb3:L518fb3:{c.instructions+=5;NFSU2_TR(0x518fb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518fb7:{NFSU2_TR(0x518fb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518fbd:{NFSU2_TR(0x518fbd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B518fc0:{NFSU2_TR(0x518fc0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B518fc2:{NFSU2_TR(0x518fc2);
if(r1(R+518)){TAIL_STATIC(0x519097u,519);}
}
B518fc8:L518fc8:{c.instructions+=4;NFSU2_TR(0x518fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518fcb:{NFSU2_TR(0x518fcb);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B518fcd:{NFSU2_TR(0x518fcd);
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
B518fcf:{NFSU2_TR(0x518fcf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5196a4u,519);}
}
B518fd5:L518fd5:{c.instructions+=1;NFSU2_TR(0x518fd5);
{goto L518fe0;}
}
B518fe0:L518fe0:{c.instructions+=9;NFSU2_TR(0x518fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518fe3:{NFSU2_TR(0x518fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B518fe9:{NFSU2_TR(0x518fe9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B518fec:{NFSU2_TR(0x518fec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B518fef:{NFSU2_TR(0x518fef);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B518ff2:{NFSU2_TR(0x518ff2);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B518ff6:{NFSU2_TR(0x518ff6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B518ffa:{NFSU2_TR(0x518ffa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B518ffe:{NFSU2_TR(0x518ffe);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
TAIL_STATIC(0x519000u,519);
}
XIT:NFSU2_TR_EXIT(0x518,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
