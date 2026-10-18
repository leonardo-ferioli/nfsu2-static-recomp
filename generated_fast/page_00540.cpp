#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_526(u8* __restrict R,Cpu& c);
u32 body_528(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_535(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_53e(u8* __restrict R,Cpu& c);
u32 body_53f(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_5a6(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_639(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x540,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x540,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_540(u8* __restrict R,Cpu& c);
u32 page_540(Cpu& c){return body_540(c.regs.data(),c);}
__attribute__((noinline)) u32 body_540(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x540004:goto L540004;
case 0x540009:c.instructions+=34;goto B540009;
case 0x54000e:c.instructions+=33;goto B54000e;
case 0x540013:c.instructions+=32;goto B540013;
case 0x540018:c.instructions+=31;goto B540018;
case 0x54001e:c.instructions+=30;goto B54001e;
case 0x540024:c.instructions+=29;goto B540024;
case 0x540029:c.instructions+=28;goto B540029;
case 0x54002e:c.instructions+=27;goto B54002e;
case 0x540030:c.instructions+=26;goto B540030;
case 0x540033:c.instructions+=25;goto B540033;
case 0x540035:c.instructions+=24;goto B540035;
case 0x540038:c.instructions+=23;goto B540038;
case 0x54003a:c.instructions+=22;goto B54003a;
case 0x54003f:c.instructions+=21;goto B54003f;
case 0x540044:c.instructions+=20;goto B540044;
case 0x540049:c.instructions+=19;goto B540049;
case 0x54004e:c.instructions+=18;goto B54004e;
case 0x540054:c.instructions+=17;goto B540054;
case 0x54005a:c.instructions+=16;goto B54005a;
case 0x54005f:c.instructions+=15;goto B54005f;
case 0x540064:c.instructions+=14;goto B540064;
case 0x54006a:c.instructions+=13;goto B54006a;
case 0x540070:c.instructions+=12;goto B540070;
case 0x540075:c.instructions+=11;goto B540075;
case 0x54007a:c.instructions+=10;goto B54007a;
case 0x540080:c.instructions+=9;goto B540080;
case 0x540086:c.instructions+=8;goto B540086;
case 0x54008c:c.instructions+=7;goto B54008c;
case 0x540091:c.instructions+=6;goto B540091;
case 0x540096:c.instructions+=5;goto B540096;
case 0x540098:c.instructions+=4;goto B540098;
case 0x54009e:c.instructions+=3;goto B54009e;
case 0x5400a4:c.instructions+=2;goto B5400a4;
case 0x5400a9:c.instructions+=1;goto B5400a9;
case 0x5400ab:goto L5400ab;
case 0x5400ad:c.instructions+=1;goto B5400ad;
case 0x5400af:goto L5400af;
case 0x5400b0:c.instructions+=1;goto B5400b0;
case 0x5400b2:goto L5400b2;
case 0x5400b3:c.instructions+=1;goto B5400b3;
case 0x5400b5:goto L5400b5;
case 0x5400bf:c.instructions+=1;goto B5400bf;
case 0x5400c1:goto L5400c1;
case 0x5400cb:c.instructions+=1;goto B5400cb;
case 0x5400cd:goto L5400cd;
case 0x5400d3:c.instructions+=1;goto B5400d3;
case 0x5400d5:goto L5400d5;
case 0x5400df:goto L5400df;
case 0x5400e5:c.instructions+=2;goto B5400e5;
case 0x5400e8:c.instructions+=1;goto B5400e8;
case 0x5400ea:goto L5400ea;
case 0x5400f1:goto L5400f1;
case 0x5400f3:c.instructions+=1;goto B5400f3;
case 0x5400f5:goto L5400f5;
case 0x5400fa:c.instructions+=1;goto B5400fa;
case 0x5400fc:goto L5400fc;
case 0x540101:c.instructions+=1;goto B540101;
case 0x540103:goto L540103;
case 0x540108:c.instructions+=1;goto B540108;
case 0x54010a:goto L54010a;
case 0x54010f:goto L54010f;
case 0x540112:c.instructions+=2;goto B540112;
case 0x540117:c.instructions+=1;goto B540117;
case 0x540119:goto L540119;
case 0x540120:goto L540120;
case 0x540122:c.instructions+=1;goto B540122;
case 0x540124:goto L540124;
case 0x540129:c.instructions+=1;goto B540129;
case 0x54012b:goto L54012b;
case 0x540130:c.instructions+=1;goto B540130;
case 0x540132:goto L540132;
case 0x540137:c.instructions+=1;goto B540137;
case 0x540139:goto L540139;
case 0x54013e:goto L54013e;
case 0x540143:c.instructions+=3;goto B540143;
case 0x540145:c.instructions+=2;goto B540145;
case 0x540147:c.instructions+=1;goto B540147;
case 0x540149:goto L540149;
case 0x540150:goto L540150;
case 0x540157:c.instructions+=5;goto B540157;
case 0x54015e:c.instructions+=4;goto B54015e;
case 0x540164:c.instructions+=3;goto B540164;
case 0x540165:c.instructions+=2;goto B540165;
case 0x540167:c.instructions+=1;goto B540167;
case 0x540169:goto L540169;
case 0x54016b:c.instructions+=5;goto B54016b;
case 0x540175:c.instructions+=4;goto B540175;
case 0x54017f:c.instructions+=3;goto B54017f;
case 0x540185:c.instructions+=2;goto B540185;
case 0x540189:c.instructions+=1;goto B540189;
case 0x54018f:goto L54018f;
case 0x540197:goto L540197;
case 0x54019b:c.instructions+=1;goto B54019b;
case 0x5401a0:goto L5401a0;
case 0x5401a2:c.instructions+=6;goto B5401a2;
case 0x5401a4:c.instructions+=5;goto B5401a4;
case 0x5401a6:c.instructions+=4;goto B5401a6;
case 0x5401a8:c.instructions+=3;goto B5401a8;
case 0x5401ac:c.instructions+=2;goto B5401ac;
case 0x5401b7:c.instructions+=1;goto B5401b7;
case 0x5401bc:goto L5401bc;
case 0x5401c0:c.instructions+=4;goto B5401c0;
case 0x5401c6:c.instructions+=3;goto B5401c6;
case 0x5401cb:c.instructions+=2;goto B5401cb;
case 0x5401d2:c.instructions+=1;goto B5401d2;
case 0x5401d4:goto L5401d4;
case 0x5401da:c.instructions+=1;goto B5401da;
case 0x5401dc:goto L5401dc;
case 0x5401de:goto L5401de;
case 0x5401e4:c.instructions+=1;goto B5401e4;
case 0x5401e6:goto L5401e6;
case 0x5401ec:c.instructions+=1;goto B5401ec;
case 0x5401ee:goto L5401ee;
case 0x5401f2:c.instructions+=1;goto B5401f2;
case 0x5401f9:goto L5401f9;
case 0x5401fb:c.instructions+=1;goto B5401fb;
case 0x540201:goto L540201;
case 0x540203:c.instructions+=2;goto B540203;
case 0x540205:c.instructions+=1;goto B540205;
case 0x540207:goto L540207;
case 0x54020a:c.instructions+=1;goto B54020a;
case 0x54020c:goto L54020c;
case 0x54020d:c.instructions+=3;goto B54020d;
case 0x540210:c.instructions+=2;goto B540210;
case 0x540213:c.instructions+=1;goto B540213;
case 0x540215:goto L540215;
case 0x540217:goto L540217;
case 0x54021e:c.instructions+=2;goto B54021e;
case 0x540220:c.instructions+=1;goto B540220;
case 0x540222:goto L540222;
case 0x540224:c.instructions+=2;goto B540224;
case 0x540226:c.instructions+=1;goto B540226;
case 0x540229:goto L540229;
case 0x54022d:c.instructions+=7;goto B54022d;
case 0x54022f:c.instructions+=6;goto B54022f;
case 0x540231:c.instructions+=5;goto B540231;
case 0x540235:c.instructions+=4;goto B540235;
case 0x540236:c.instructions+=3;goto B540236;
case 0x540237:c.instructions+=2;goto B540237;
case 0x540239:c.instructions+=1;goto B540239;
case 0x54023c:goto L54023c;
case 0x540240:c.instructions+=9;goto B540240;
case 0x540242:c.instructions+=8;goto B540242;
case 0x540244:c.instructions+=7;goto B540244;
case 0x540249:c.instructions+=6;goto B540249;
case 0x54024d:c.instructions+=5;goto B54024d;
case 0x54024e:c.instructions+=4;goto B54024e;
case 0x540250:c.instructions+=3;goto B540250;
case 0x540251:c.instructions+=2;goto B540251;
case 0x540258:c.instructions+=1;goto B540258;
case 0x54025d:goto L54025d;
case 0x540262:c.instructions+=3;goto B540262;
case 0x54026a:c.instructions+=2;goto B54026a;
case 0x54026c:c.instructions+=1;goto B54026c;
case 0x540270:goto L540270;
case 0x540273:c.instructions+=1;goto B540273;
case 0x540275:goto L540275;
case 0x540278:c.instructions+=2;goto B540278;
case 0x54027a:c.instructions+=1;goto B54027a;
case 0x54027c:goto L54027c;
case 0x540283:goto L540283;
case 0x540288:c.instructions+=3;goto B540288;
case 0x54028a:c.instructions+=2;goto B54028a;
case 0x54028e:c.instructions+=1;goto B54028e;
case 0x540290:goto L540290;
case 0x540296:c.instructions+=3;goto B540296;
case 0x540298:c.instructions+=2;goto B540298;
case 0x54029a:c.instructions+=1;goto B54029a;
case 0x54029c:goto L54029c;
case 0x5402a2:c.instructions+=1;goto B5402a2;
case 0x5402a4:goto L5402a4;
case 0x5402a6:c.instructions+=1;goto B5402a6;
case 0x5402a8:goto L5402a8;
case 0x5402ab:c.instructions+=1;goto B5402ab;
case 0x5402b1:goto L5402b1;
case 0x5402b2:c.instructions+=3;goto B5402b2;
case 0x5402b8:c.instructions+=2;goto B5402b8;
case 0x5402ba:c.instructions+=1;goto B5402ba;
case 0x5402bc:goto L5402bc;
case 0x5402be:goto L5402be;
case 0x5402c0:c.instructions+=3;goto B5402c0;
case 0x5402c1:c.instructions+=2;goto B5402c1;
case 0x5402c8:c.instructions+=1;goto B5402c8;
case 0x5402cd:goto L5402cd;
case 0x5402d1:c.instructions+=3;goto B5402d1;
case 0x5402d2:c.instructions+=2;goto B5402d2;
case 0x5402d4:c.instructions+=1;goto B5402d4;
case 0x5402d6:goto L5402d6;
case 0x5402db:goto L5402db;
case 0x5402dc:c.instructions+=2;goto B5402dc;
case 0x5402df:c.instructions+=1;goto B5402df;
case 0x5402e1:goto L5402e1;
case 0x5402e3:c.instructions+=6;goto B5402e3;
case 0x5402e5:c.instructions+=5;goto B5402e5;
case 0x5402e7:c.instructions+=4;goto B5402e7;
case 0x5402e9:c.instructions+=3;goto B5402e9;
case 0x5402f0:c.instructions+=2;goto B5402f0;
case 0x5402fb:c.instructions+=1;goto B5402fb;
case 0x540300:goto L540300;
case 0x540307:c.instructions+=3;goto B540307;
case 0x540308:c.instructions+=2;goto B540308;
case 0x54030d:c.instructions+=1;goto B54030d;
case 0x540312:goto L540312;
case 0x540319:c.instructions+=2;goto B540319;
case 0x540321:c.instructions+=1;goto B540321;
case 0x540326:goto L540326;
case 0x54032d:c.instructions+=2;goto B54032d;
case 0x540338:c.instructions+=1;goto B540338;
case 0x54033d:goto L54033d;
case 0x540341:c.instructions+=8;goto B540341;
case 0x540345:c.instructions+=7;goto B540345;
case 0x54034b:c.instructions+=6;goto B54034b;
case 0x54034c:c.instructions+=5;goto B54034c;
case 0x540352:c.instructions+=4;goto B540352;
case 0x540354:c.instructions+=3;goto B540354;
case 0x540358:c.instructions+=2;goto B540358;
case 0x54035c:c.instructions+=1;goto B54035c;
case 0x540362:goto L540362;
case 0x540364:c.instructions+=2;goto B540364;
case 0x540369:c.instructions+=1;goto B540369;
case 0x54036e:goto L54036e;
case 0x540370:c.instructions+=3;goto B540370;
case 0x540375:c.instructions+=2;goto B540375;
case 0x540377:c.instructions+=1;goto B540377;
case 0x54037c:goto L54037c;
case 0x54037e:c.instructions+=2;goto B54037e;
case 0x540380:c.instructions+=1;goto B540380;
case 0x540382:goto L540382;
case 0x540385:c.instructions+=1;goto B540385;
case 0x54038a:goto L54038a;
case 0x54038d:c.instructions+=5;goto B54038d;
case 0x540392:c.instructions+=4;goto B540392;
case 0x540395:c.instructions+=3;goto B540395;
case 0x54039b:c.instructions+=2;goto B54039b;
case 0x5403a2:c.instructions+=1;goto B5403a2;
case 0x5403a8:goto L5403a8;
case 0x5403aa:c.instructions+=1;goto B5403aa;
case 0x5403ac:goto L5403ac;
case 0x5403af:c.instructions+=1;goto B5403af;
case 0x5403b4:goto L5403b4;
case 0x5403ba:c.instructions+=5;goto B5403ba;
case 0x5403bd:c.instructions+=4;goto B5403bd;
case 0x5403c0:c.instructions+=3;goto B5403c0;
case 0x5403c5:c.instructions+=2;goto B5403c5;
case 0x5403cc:c.instructions+=1;goto B5403cc;
case 0x5403d2:goto L5403d2;
case 0x5403d7:c.instructions+=2;goto B5403d7;
case 0x5403d9:c.instructions+=1;goto B5403d9;
case 0x5403db:goto L5403db;
case 0x5403e0:c.instructions+=1;goto B5403e0;
case 0x5403e5:goto L5403e5;
case 0x5403e7:goto L5403e7;
case 0x5403ed:c.instructions+=2;goto B5403ed;
case 0x5403ef:c.instructions+=1;goto B5403ef;
case 0x5403f4:goto L5403f4;
case 0x5403f9:c.instructions+=2;goto B5403f9;
case 0x5403fb:c.instructions+=1;goto B5403fb;
case 0x5403fd:goto L5403fd;
case 0x540403:c.instructions+=2;goto B540403;
case 0x540404:c.instructions+=1;goto B540404;
case 0x540409:goto L540409;
case 0x54040b:goto L54040b;
case 0x540411:c.instructions+=2;goto B540411;
case 0x540412:c.instructions+=1;goto B540412;
case 0x540417:goto L540417;
case 0x54041a:c.instructions+=2;goto B54041a;
case 0x54041c:c.instructions+=1;goto B54041c;
case 0x540421:goto L540421;
case 0x540424:c.instructions+=1;goto B540424;
case 0x540429:goto L540429;
case 0x540430:c.instructions+=2;goto B540430;
case 0x540435:c.instructions+=1;goto B540435;
case 0x540437:goto L540437;
case 0x54043c:goto L54043c;
case 0x54043e:goto L54043e;
case 0x540443:goto L540443;
case 0x54044a:c.instructions+=1;goto B54044a;
case 0x54044c:goto L54044c;
case 0x540456:goto L540456;
case 0x54045d:c.instructions+=7;goto B54045d;
case 0x54045e:c.instructions+=6;goto B54045e;
case 0x54045f:c.instructions+=5;goto B54045f;
case 0x540466:c.instructions+=4;goto B540466;
case 0x540467:c.instructions+=3;goto B540467;
case 0x540469:c.instructions+=2;goto B540469;
case 0x54046a:c.instructions+=1;goto B54046a;
case 0x5404a0:goto L5404a0;
case 0x5404a1:c.instructions+=10;goto B5404a1;
case 0x5404a3:c.instructions+=9;goto B5404a3;
case 0x5404a6:c.instructions+=8;goto B5404a6;
case 0x5404a8:c.instructions+=7;goto B5404a8;
case 0x5404ad:c.instructions+=6;goto B5404ad;
case 0x5404b3:c.instructions+=5;goto B5404b3;
case 0x5404b4:c.instructions+=4;goto B5404b4;
case 0x5404bb:c.instructions+=3;goto B5404bb;
case 0x5404bc:c.instructions+=2;goto B5404bc;
case 0x5404c1:c.instructions+=1;goto B5404c1;
case 0x5404c6:goto L5404c6;
case 0x5404cb:c.instructions+=6;goto B5404cb;
case 0x5404cc:c.instructions+=5;goto B5404cc;
case 0x5404ce:c.instructions+=4;goto B5404ce;
case 0x5404d0:c.instructions+=3;goto B5404d0;
case 0x5404d1:c.instructions+=2;goto B5404d1;
case 0x5404d2:c.instructions+=1;goto B5404d2;
case 0x5404d4:goto L5404d4;
case 0x5404da:c.instructions+=1;goto B5404da;
case 0x5404dc:goto L5404dc;
case 0x5404e1:c.instructions+=1;goto B5404e1;
case 0x5404e6:goto L5404e6;
case 0x5404e8:goto L5404e8;
case 0x5404ee:c.instructions+=2;goto B5404ee;
case 0x5404f8:c.instructions+=1;goto B5404f8;
case 0x5404fa:goto L5404fa;
case 0x540500:c.instructions+=1;goto B540500;
case 0x540502:goto L540502;
case 0x540507:c.instructions+=1;goto B540507;
case 0x54050c:goto L54050c;
case 0x54050e:c.instructions+=1;goto B54050e;
case 0x540510:goto L540510;
case 0x540515:c.instructions+=8;goto B540515;
case 0x54051b:c.instructions+=7;goto B54051b;
case 0x54051d:c.instructions+=6;goto B54051d;
case 0x54051f:c.instructions+=5;goto B54051f;
case 0x540521:c.instructions+=4;goto B540521;
case 0x540524:c.instructions+=3;goto B540524;
case 0x540525:c.instructions+=2;goto B540525;
case 0x54052a:c.instructions+=1;goto B54052a;
case 0x54052f:goto L54052f;
case 0x540535:c.instructions+=18;goto B540535;
case 0x54053a:c.instructions+=17;goto B54053a;
case 0x540540:c.instructions+=16;goto B540540;
case 0x540546:c.instructions+=15;goto B540546;
case 0x54054c:c.instructions+=14;goto B54054c;
case 0x540553:c.instructions+=13;goto B540553;
case 0x540559:c.instructions+=12;goto B540559;
case 0x54055f:c.instructions+=11;goto B54055f;
case 0x540565:c.instructions+=10;goto B540565;
case 0x54056a:c.instructions+=9;goto B54056a;
case 0x54056f:c.instructions+=8;goto B54056f;
case 0x540571:c.instructions+=7;goto B540571;
case 0x54057b:c.instructions+=6;goto B54057b;
case 0x540581:c.instructions+=5;goto B540581;
case 0x540586:c.instructions+=4;goto B540586;
case 0x54058c:c.instructions+=3;goto B54058c;
case 0x540592:c.instructions+=2;goto B540592;
case 0x540597:c.instructions+=1;goto B540597;
case 0x540599:goto L540599;
case 0x54059e:goto L54059e;
case 0x5405a4:c.instructions+=1;goto B5405a4;
case 0x5405a6:goto L5405a6;
case 0x5405ab:goto L5405ab;
case 0x5405b5:c.instructions+=4;goto B5405b5;
case 0x5405bf:c.instructions+=3;goto B5405bf;
case 0x5405c5:c.instructions+=2;goto B5405c5;
case 0x5405c7:c.instructions+=1;goto B5405c7;
case 0x5405d0:goto L5405d0;
case 0x5405d7:c.instructions+=5;goto B5405d7;
case 0x5405de:c.instructions+=4;goto B5405de;
case 0x5405e4:c.instructions+=3;goto B5405e4;
case 0x5405e5:c.instructions+=2;goto B5405e5;
case 0x5405e7:c.instructions+=1;goto B5405e7;
case 0x5405e9:goto L5405e9;
case 0x5405ee:c.instructions+=4;goto B5405ee;
case 0x5405f4:c.instructions+=3;goto B5405f4;
case 0x5405f5:c.instructions+=2;goto B5405f5;
case 0x5405f7:c.instructions+=1;goto B5405f7;
case 0x5405fc:goto L5405fc;
case 0x5405ff:c.instructions+=5;goto B5405ff;
case 0x540600:c.instructions+=4;goto B540600;
case 0x540604:c.instructions+=3;goto B540604;
case 0x540606:c.instructions+=2;goto B540606;
case 0x540607:c.instructions+=1;goto B540607;
case 0x54060c:goto L54060c;
case 0x540610:c.instructions+=3;goto B540610;
case 0x540611:c.instructions+=2;goto B540611;
case 0x540612:c.instructions+=1;goto B540612;
case 0x540617:goto L540617;
case 0x54061c:c.instructions+=3;goto B54061c;
case 0x54061f:c.instructions+=2;goto B54061f;
case 0x540621:c.instructions+=1;goto B540621;
case 0x540623:goto L540623;
case 0x540628:c.instructions+=1;goto B540628;
case 0x54062a:goto L54062a;
case 0x54062f:c.instructions+=1;goto B54062f;
case 0x540634:goto L540634;
case 0x540636:c.instructions+=1;goto B540636;
case 0x540638:goto L540638;
case 0x54063d:c.instructions+=1;goto B54063d;
case 0x540642:goto L540642;
case 0x540644:goto L540644;
case 0x54064b:c.instructions+=1;goto B54064b;
case 0x540650:goto L540650;
case 0x540651:c.instructions+=6;goto B540651;
case 0x540652:c.instructions+=5;goto B540652;
case 0x540653:c.instructions+=4;goto B540653;
case 0x540655:c.instructions+=3;goto B540655;
case 0x54065c:c.instructions+=2;goto B54065c;
case 0x540663:c.instructions+=1;goto B540663;
case 0x540668:goto L540668;
case 0x540669:c.instructions+=5;goto B540669;
case 0x540670:c.instructions+=4;goto B540670;
case 0x540671:c.instructions+=3;goto B540671;
case 0x540676:c.instructions+=2;goto B540676;
case 0x540681:c.instructions+=1;goto B540681;
case 0x540686:goto L540686;
case 0x540687:c.instructions+=8;goto B540687;
case 0x540689:c.instructions+=7;goto B540689;
case 0x54068a:c.instructions+=6;goto B54068a;
case 0x540691:c.instructions+=5;goto B540691;
case 0x540692:c.instructions+=4;goto B540692;
case 0x540694:c.instructions+=3;goto B540694;
case 0x540695:c.instructions+=2;goto B540695;
case 0x540699:c.instructions+=1;goto B540699;
case 0x54069e:goto L54069e;
case 0x5406a4:c.instructions+=2;goto B5406a4;
case 0x5406ac:c.instructions+=1;goto B5406ac;
case 0x5406ae:goto L5406ae;
case 0x5406b4:c.instructions+=11;goto B5406b4;
case 0x5406b9:c.instructions+=10;goto B5406b9;
case 0x5406bf:c.instructions+=9;goto B5406bf;
case 0x5406c6:c.instructions+=8;goto B5406c6;
case 0x5406c8:c.instructions+=7;goto B5406c8;
case 0x5406ca:c.instructions+=6;goto B5406ca;
case 0x5406d1:c.instructions+=5;goto B5406d1;
case 0x5406d9:c.instructions+=4;goto B5406d9;
case 0x5406dd:c.instructions+=3;goto B5406dd;
case 0x5406e4:c.instructions+=2;goto B5406e4;
case 0x5406eb:c.instructions+=1;goto B5406eb;
case 0x5406f3:goto L5406f3;
case 0x5406f7:c.instructions+=3;goto B5406f7;
case 0x5406f8:c.instructions+=2;goto B5406f8;
case 0x5406fd:c.instructions+=1;goto B5406fd;
case 0x540702:goto L540702;
case 0x540708:c.instructions+=2;goto B540708;
case 0x540709:c.instructions+=1;goto B540709;
case 0x54070e:goto L54070e;
case 0x540710:c.instructions+=1;goto B540710;
case 0x540715:goto L540715;
case 0x540718:c.instructions+=1;goto B540718;
case 0x54071d:goto L54071d;
case 0x540724:c.instructions+=2;goto B540724;
case 0x540729:c.instructions+=1;goto B540729;
case 0x54072b:goto L54072b;
case 0x540730:goto L540730;
case 0x540732:goto L540732;
case 0x540737:goto L540737;
case 0x54073e:c.instructions+=2;goto B54073e;
case 0x540746:c.instructions+=1;goto B540746;
case 0x54074b:goto L54074b;
case 0x540752:c.instructions+=2;goto B540752;
case 0x54075d:c.instructions+=1;goto B54075d;
case 0x540762:goto L540762;
case 0x540769:c.instructions+=7;goto B540769;
case 0x54076a:c.instructions+=6;goto B54076a;
case 0x54076b:c.instructions+=5;goto B54076b;
case 0x540772:c.instructions+=4;goto B540772;
case 0x540773:c.instructions+=3;goto B540773;
case 0x540775:c.instructions+=2;goto B540775;
case 0x540776:c.instructions+=1;goto B540776;
case 0x540780:goto L540780;
case 0x540781:c.instructions+=10;goto B540781;
case 0x540783:c.instructions+=9;goto B540783;
case 0x540786:c.instructions+=8;goto B540786;
case 0x540788:c.instructions+=7;goto B540788;
case 0x54078d:c.instructions+=6;goto B54078d;
case 0x540793:c.instructions+=5;goto B540793;
case 0x540794:c.instructions+=4;goto B540794;
case 0x54079b:c.instructions+=3;goto B54079b;
case 0x54079c:c.instructions+=2;goto B54079c;
case 0x5407a1:c.instructions+=1;goto B5407a1;
case 0x5407a6:goto L5407a6;
case 0x5407ad:c.instructions+=22;goto B5407ad;
case 0x5407b3:c.instructions+=21;goto B5407b3;
case 0x5407b4:c.instructions+=20;goto B5407b4;
case 0x5407b6:c.instructions+=19;goto B5407b6;
case 0x5407bc:c.instructions+=18;goto B5407bc;
case 0x5407c2:c.instructions+=17;goto B5407c2;
case 0x5407c8:c.instructions+=16;goto B5407c8;
case 0x5407cd:c.instructions+=15;goto B5407cd;
case 0x5407cf:c.instructions+=14;goto B5407cf;
case 0x5407d0:c.instructions+=13;goto B5407d0;
case 0x5407d5:c.instructions+=12;goto B5407d5;
case 0x5407d6:c.instructions+=11;goto B5407d6;
case 0x5407e0:c.instructions+=10;goto B5407e0;
case 0x5407e6:c.instructions+=9;goto B5407e6;
case 0x5407ec:c.instructions+=8;goto B5407ec;
case 0x5407f1:c.instructions+=7;goto B5407f1;
case 0x5407f7:c.instructions+=6;goto B5407f7;
case 0x5407fd:c.instructions+=5;goto B5407fd;
case 0x540803:c.instructions+=4;goto B540803;
case 0x540809:c.instructions+=3;goto B540809;
case 0x54080f:c.instructions+=2;goto B54080f;
case 0x540815:c.instructions+=1;goto B540815;
case 0x540817:goto L540817;
case 0x54081c:goto L54081c;
case 0x540822:c.instructions+=1;goto B540822;
case 0x540824:goto L540824;
case 0x540829:goto L540829;
case 0x54082f:c.instructions+=5;goto B54082f;
case 0x540834:c.instructions+=4;goto B540834;
case 0x540839:c.instructions+=3;goto B540839;
case 0x54083a:c.instructions+=2;goto B54083a;
case 0x54083c:c.instructions+=1;goto B54083c;
case 0x540841:goto L540841;
case 0x540844:c.instructions+=5;goto B540844;
case 0x540845:c.instructions+=4;goto B540845;
case 0x540849:c.instructions+=3;goto B540849;
case 0x54084b:c.instructions+=2;goto B54084b;
case 0x54084c:c.instructions+=1;goto B54084c;
case 0x540851:goto L540851;
case 0x540855:c.instructions+=3;goto B540855;
case 0x540856:c.instructions+=2;goto B540856;
case 0x540857:c.instructions+=1;goto B540857;
case 0x54085c:goto L54085c;
case 0x540861:c.instructions+=3;goto B540861;
case 0x540864:c.instructions+=2;goto B540864;
case 0x540866:c.instructions+=1;goto B540866;
case 0x540868:goto L540868;
case 0x54086d:c.instructions+=1;goto B54086d;
case 0x54086f:goto L54086f;
case 0x540874:c.instructions+=1;goto B540874;
case 0x540879:goto L540879;
case 0x54087b:c.instructions+=1;goto B54087b;
case 0x54087d:goto L54087d;
case 0x540882:c.instructions+=1;goto B540882;
case 0x540887:goto L540887;
case 0x540889:goto L540889;
case 0x54088c:c.instructions+=5;goto B54088c;
case 0x540890:c.instructions+=4;goto B540890;
case 0x540896:c.instructions+=3;goto B540896;
case 0x54089c:c.instructions+=2;goto B54089c;
case 0x5408a2:c.instructions+=1;goto B5408a2;
case 0x5408a7:goto L5408a7;
case 0x5408a8:c.instructions+=6;goto B5408a8;
case 0x5408a9:c.instructions+=5;goto B5408a9;
case 0x5408aa:c.instructions+=4;goto B5408aa;
case 0x5408ab:c.instructions+=3;goto B5408ab;
case 0x5408af:c.instructions+=2;goto B5408af;
case 0x5408b6:c.instructions+=1;goto B5408b6;
case 0x5408bb:goto L5408bb;
case 0x5408bc:c.instructions+=5;goto B5408bc;
case 0x5408c0:c.instructions+=4;goto B5408c0;
case 0x5408c1:c.instructions+=3;goto B5408c1;
case 0x5408c6:c.instructions+=2;goto B5408c6;
case 0x5408d1:c.instructions+=1;goto B5408d1;
case 0x5408d6:goto L5408d6;
case 0x5408d7:c.instructions+=8;goto B5408d7;
case 0x5408d9:c.instructions+=7;goto B5408d9;
case 0x5408da:c.instructions+=6;goto B5408da;
case 0x5408de:c.instructions+=5;goto B5408de;
case 0x5408df:c.instructions+=4;goto B5408df;
case 0x5408e1:c.instructions+=3;goto B5408e1;
case 0x5408e2:c.instructions+=2;goto B5408e2;
case 0x5408e9:c.instructions+=1;goto B5408e9;
case 0x5408ee:goto L5408ee;
case 0x5408f5:c.instructions+=4;goto B5408f5;
case 0x5408f6:c.instructions+=3;goto B5408f6;
case 0x5408fb:c.instructions+=2;goto B5408fb;
case 0x540903:c.instructions+=1;goto B540903;
case 0x540908:goto L540908;
case 0x540909:c.instructions+=2;goto B540909;
case 0x54090e:c.instructions+=1;goto B54090e;
case 0x540913:goto L540913;
case 0x540915:c.instructions+=1;goto B540915;
case 0x540917:goto L540917;
case 0x54091d:c.instructions+=1;goto B54091d;
case 0x54091f:goto L54091f;
case 0x540926:c.instructions+=11;goto B540926;
case 0x54092c:c.instructions+=10;goto B54092c;
case 0x540932:c.instructions+=9;goto B540932;
case 0x540938:c.instructions+=8;goto B540938;
case 0x54093a:c.instructions+=7;goto B54093a;
case 0x54093c:c.instructions+=6;goto B54093c;
case 0x540942:c.instructions+=5;goto B540942;
case 0x540948:c.instructions+=4;goto B540948;
case 0x54094c:c.instructions+=3;goto B54094c;
case 0x540952:c.instructions+=2;goto B540952;
case 0x540959:c.instructions+=1;goto B540959;
case 0x540960:goto L540960;
case 0x540965:c.instructions+=2;goto B540965;
case 0x540966:c.instructions+=1;goto B540966;
case 0x54096b:goto L54096b;
case 0x54096d:c.instructions+=1;goto B54096d;
case 0x540972:goto L540972;
case 0x540975:c.instructions+=1;goto B540975;
case 0x54097a:goto L54097a;
case 0x540981:c.instructions+=2;goto B540981;
case 0x540989:c.instructions+=1;goto B540989;
case 0x54098e:goto L54098e;
case 0x540995:c.instructions+=2;goto B540995;
case 0x54099c:c.instructions+=1;goto B54099c;
case 0x5409a1:goto L5409a1;
case 0x5409a8:c.instructions+=7;goto B5409a8;
case 0x5409a9:c.instructions+=6;goto B5409a9;
case 0x5409aa:c.instructions+=5;goto B5409aa;
case 0x5409b1:c.instructions+=4;goto B5409b1;
case 0x5409b2:c.instructions+=3;goto B5409b2;
case 0x5409b4:c.instructions+=2;goto B5409b4;
case 0x5409b5:c.instructions+=1;goto B5409b5;
case 0x5409c0:goto L5409c0;
case 0x5409c5:c.instructions+=5;goto B5409c5;
case 0x5409c8:c.instructions+=4;goto B5409c8;
case 0x5409c9:c.instructions+=3;goto B5409c9;
case 0x5409cb:c.instructions+=2;goto B5409cb;
case 0x5409cd:c.instructions+=1;goto B5409cd;
case 0x5409d3:goto L5409d3;
case 0x5409d8:c.instructions+=3;goto B5409d8;
case 0x5409d9:c.instructions+=2;goto B5409d9;
case 0x5409de:c.instructions+=1;goto B5409de;
case 0x5409e3:goto L5409e3;
case 0x5409e5:c.instructions+=1;goto B5409e5;
case 0x5409e7:goto L5409e7;
case 0x5409ea:c.instructions+=2;goto B5409ea;
case 0x5409ec:c.instructions+=1;goto B5409ec;
case 0x5409ee:goto L5409ee;
case 0x5409f5:c.instructions+=5;goto B5409f5;
case 0x5409fa:c.instructions+=4;goto B5409fa;
case 0x540a02:c.instructions+=3;goto B540a02;
case 0x540a0a:c.instructions+=2;goto B540a0a;
case 0x540a0e:c.instructions+=1;goto B540a0e;
case 0x540a10:goto L540a10;
case 0x540a14:goto L540a14;
case 0x540a18:c.instructions+=5;goto B540a18;
case 0x540a1c:c.instructions+=4;goto B540a1c;
case 0x540a1f:c.instructions+=3;goto B540a1f;
case 0x540a20:c.instructions+=2;goto B540a20;
case 0x540a21:c.instructions+=1;goto B540a21;
case 0x540a26:goto L540a26;
case 0x540a28:c.instructions+=3;goto B540a28;
case 0x540a2b:c.instructions+=2;goto B540a2b;
case 0x540a2d:c.instructions+=1;goto B540a2d;
case 0x540a2f:goto L540a2f;
case 0x540a33:c.instructions+=2;goto B540a33;
case 0x540a35:c.instructions+=1;goto B540a35;
case 0x540a37:goto L540a37;
case 0x540a3b:c.instructions+=2;goto B540a3b;
case 0x540a3c:c.instructions+=1;goto B540a3c;
case 0x540a41:goto L540a41;
case 0x540a43:c.instructions+=3;goto B540a43;
case 0x540a44:c.instructions+=2;goto B540a44;
case 0x540a47:c.instructions+=1;goto B540a47;
case 0x540a48:goto L540a48;
case 0x540a4c:c.instructions+=2;goto B540a4c;
case 0x540a4d:c.instructions+=1;goto B540a4d;
case 0x540a52:goto L540a52;
case 0x540a54:c.instructions+=3;goto B540a54;
case 0x540a55:c.instructions+=2;goto B540a55;
case 0x540a58:c.instructions+=1;goto B540a58;
case 0x540a59:goto L540a59;
case 0x540a5b:c.instructions+=3;goto B540a5b;
case 0x540a5c:c.instructions+=2;goto B540a5c;
case 0x540a5f:c.instructions+=1;goto B540a5f;
case 0x540a60:goto L540a60;
case 0x540a65:c.instructions+=5;goto B540a65;
case 0x540a69:c.instructions+=4;goto B540a69;
case 0x540a6a:c.instructions+=3;goto B540a6a;
case 0x540a6b:c.instructions+=2;goto B540a6b;
case 0x540a70:c.instructions+=1;goto B540a70;
case 0x540a75:goto L540a75;
case 0x540a7a:c.instructions+=3;goto B540a7a;
case 0x540a7d:c.instructions+=2;goto B540a7d;
case 0x540a7f:c.instructions+=1;goto B540a7f;
case 0x540a81:goto L540a81;
case 0x540a86:c.instructions+=1;goto B540a86;
case 0x540a8b:goto L540a8b;
case 0x540a91:c.instructions+=3;goto B540a91;
case 0x540a94:c.instructions+=2;goto B540a94;
case 0x540a96:c.instructions+=1;goto B540a96;
case 0x540a98:goto L540a98;
case 0x540a9e:c.instructions+=2;goto B540a9e;
case 0x540a9f:c.instructions+=1;goto B540a9f;
case 0x540aa4:goto L540aa4;
case 0x540aae:goto L540aae;
case 0x540ab0:goto L540ab0;
case 0x540ab6:c.instructions+=4;goto B540ab6;
case 0x540ab7:c.instructions+=3;goto B540ab7;
case 0x540ab9:c.instructions+=2;goto B540ab9;
case 0x540abc:c.instructions+=1;goto B540abc;
case 0x540ac2:goto L540ac2;
case 0x540ac9:c.instructions+=1;goto B540ac9;
case 0x540acb:goto L540acb;
case 0x540ad0:c.instructions+=1;goto B540ad0;
case 0x540ad5:goto L540ad5;
case 0x540ad8:c.instructions+=3;goto B540ad8;
case 0x540ada:c.instructions+=2;goto B540ada;
case 0x540adc:c.instructions+=1;goto B540adc;
case 0x540ade:goto L540ade;
case 0x540ae0:goto L540ae0;
case 0x540ae6:c.instructions+=1;goto B540ae6;
case 0x540ae8:goto L540ae8;
case 0x540aec:c.instructions+=3;goto B540aec;
case 0x540aed:c.instructions+=2;goto B540aed;
case 0x540aef:c.instructions+=1;goto B540aef;
case 0x540af1:goto L540af1;
case 0x540af6:c.instructions+=1;goto B540af6;
case 0x540af8:goto L540af8;
case 0x540afd:c.instructions+=4;goto B540afd;
case 0x540b01:c.instructions+=3;goto B540b01;
case 0x540b06:c.instructions+=2;goto B540b06;
case 0x540b07:c.instructions+=1;goto B540b07;
case 0x540b0c:goto L540b0c;
case 0x540b0f:goto L540b0f;
case 0x540b16:c.instructions+=2;goto B540b16;
case 0x540b18:c.instructions+=1;goto B540b18;
case 0x540b1a:goto L540b1a;
case 0x540b1d:c.instructions+=5;goto B540b1d;
case 0x540b1e:c.instructions+=4;goto B540b1e;
case 0x540b20:c.instructions+=3;goto B540b20;
case 0x540b23:c.instructions+=2;goto B540b23;
case 0x540b26:c.instructions+=1;goto B540b26;
case 0x540b28:goto L540b28;
case 0x540b2f:goto L540b2f;
case 0x540b33:c.instructions+=2;goto B540b33;
case 0x540b37:c.instructions+=1;goto B540b37;
case 0x540b39:goto L540b39;
case 0x540b3e:c.instructions+=4;goto B540b3e;
case 0x540b3f:c.instructions+=3;goto B540b3f;
case 0x540b43:c.instructions+=2;goto B540b43;
case 0x540b44:c.instructions+=1;goto B540b44;
case 0x540b46:goto L540b46;
case 0x540b4b:c.instructions+=3;goto B540b4b;
case 0x540b4f:c.instructions+=2;goto B540b4f;
case 0x540b50:c.instructions+=1;goto B540b50;
case 0x540b51:goto L540b51;
case 0x540b56:goto L540b56;
case 0x540b59:goto L540b59;
case 0x540b5a:c.instructions+=7;goto B540b5a;
case 0x540b5b:c.instructions+=6;goto B540b5b;
case 0x540b5c:c.instructions+=5;goto B540b5c;
case 0x540b60:c.instructions+=4;goto B540b60;
case 0x540b61:c.instructions+=3;goto B540b61;
case 0x540b68:c.instructions+=2;goto B540b68;
case 0x540b69:c.instructions+=1;goto B540b69;
case 0x540b6e:goto L540b6e;
case 0x540b70:c.instructions+=3;goto B540b70;
case 0x540b73:c.instructions+=2;goto B540b73;
case 0x540b74:c.instructions+=1;goto B540b74;
case 0x540b79:goto L540b79;
case 0x540b7c:c.instructions+=7;goto B540b7c;
case 0x540b7f:c.instructions+=6;goto B540b7f;
case 0x540b82:c.instructions+=5;goto B540b82;
case 0x540b8b:c.instructions+=4;goto B540b8b;
case 0x540b8d:c.instructions+=3;goto B540b8d;
case 0x540b91:c.instructions+=2;goto B540b91;
case 0x540b98:c.instructions+=1;goto B540b98;
case 0x540b9a:goto L540b9a;
case 0x540b9e:c.instructions+=1;goto B540b9e;
case 0x540ba2:goto L540ba2;
case 0x540ba4:c.instructions+=5;goto B540ba4;
case 0x540ba6:c.instructions+=4;goto B540ba6;
case 0x540ba7:c.instructions+=3;goto B540ba7;
case 0x540ba8:c.instructions+=2;goto B540ba8;
case 0x540baa:c.instructions+=1;goto B540baa;
case 0x540baf:goto L540baf;
case 0x540bb3:c.instructions+=3;goto B540bb3;
case 0x540bb5:c.instructions+=2;goto B540bb5;
case 0x540bb8:c.instructions+=1;goto B540bb8;
case 0x540bba:goto L540bba;
case 0x540bbd:c.instructions+=2;goto B540bbd;
case 0x540bc1:c.instructions+=1;goto B540bc1;
case 0x540bc3:goto L540bc3;
case 0x540bc5:c.instructions+=2;goto B540bc5;
case 0x540bc7:c.instructions+=1;goto B540bc7;
case 0x540bc9:goto L540bc9;
case 0x540bca:c.instructions+=2;goto B540bca;
case 0x540bcc:c.instructions+=1;goto B540bcc;
case 0x540bd1:goto L540bd1;
case 0x540bd5:goto L540bd5;
case 0x540bd6:c.instructions+=2;goto B540bd6;
case 0x540bd7:c.instructions+=1;goto B540bd7;
case 0x540bd8:goto L540bd8;
case 0x540bd9:c.instructions+=2;goto B540bd9;
case 0x540bdf:c.instructions+=1;goto B540bdf;
case 0x540bf0:goto L540bf0;
case 0x540bf8:c.instructions+=1;goto B540bf8;
case 0x540bfa:goto L540bfa;
case 0x540c02:c.instructions+=1;goto B540c02;
case 0x540c07:goto L540c07;
case 0x540c10:goto L540c10;
case 0x540c11:c.instructions+=7;goto B540c11;
case 0x540c12:c.instructions+=6;goto B540c12;
case 0x540c13:c.instructions+=5;goto B540c13;
case 0x540c17:c.instructions+=4;goto B540c17;
case 0x540c19:c.instructions+=3;goto B540c19;
case 0x540c1b:c.instructions+=2;goto B540c1b;
case 0x540c1d:c.instructions+=1;goto B540c1d;
case 0x540c1f:goto L540c1f;
case 0x540c22:goto L540c22;
case 0x540c25:c.instructions+=2;goto B540c25;
case 0x540c27:c.instructions+=1;goto B540c27;
case 0x540c29:goto L540c29;
case 0x540c2a:c.instructions+=1;goto B540c2a;
case 0x540c2f:goto L540c2f;
case 0x540c30:c.instructions+=3;goto B540c30;
case 0x540c33:c.instructions+=2;goto B540c33;
case 0x540c34:c.instructions+=1;goto B540c34;
case 0x540c39:goto L540c39;
case 0x540c3c:c.instructions+=1;goto B540c3c;
case 0x540c3f:goto L540c3f;
case 0x540c42:c.instructions+=2;goto B540c42;
case 0x540c44:c.instructions+=1;goto B540c44;
case 0x540c46:goto L540c46;
case 0x540c47:c.instructions+=1;goto B540c47;
case 0x540c4c:goto L540c4c;
case 0x540c4f:c.instructions+=3;goto B540c4f;
case 0x540c50:c.instructions+=2;goto B540c50;
case 0x540c51:c.instructions+=1;goto B540c51;
case 0x540c56:goto L540c56;
case 0x540c59:c.instructions+=1;goto B540c59;
case 0x540c5c:goto L540c5c;
case 0x540c5f:c.instructions+=2;goto B540c5f;
case 0x540c61:c.instructions+=1;goto B540c61;
case 0x540c63:goto L540c63;
case 0x540c64:c.instructions+=1;goto B540c64;
case 0x540c69:goto L540c69;
case 0x540c6c:c.instructions+=3;goto B540c6c;
case 0x540c6d:c.instructions+=2;goto B540c6d;
case 0x540c6e:c.instructions+=1;goto B540c6e;
case 0x540c73:goto L540c73;
case 0x540c76:c.instructions+=1;goto B540c76;
case 0x540c79:goto L540c79;
case 0x540c7c:c.instructions+=2;goto B540c7c;
case 0x540c7e:c.instructions+=1;goto B540c7e;
case 0x540c80:goto L540c80;
case 0x540c81:c.instructions+=1;goto B540c81;
case 0x540c86:goto L540c86;
case 0x540c87:c.instructions+=3;goto B540c87;
case 0x540c8a:c.instructions+=2;goto B540c8a;
case 0x540c8b:c.instructions+=1;goto B540c8b;
case 0x540c90:goto L540c90;
case 0x540c93:c.instructions+=1;goto B540c93;
case 0x540c96:goto L540c96;
case 0x540c99:c.instructions+=2;goto B540c99;
case 0x540c9b:c.instructions+=1;goto B540c9b;
case 0x540c9d:goto L540c9d;
case 0x540c9e:c.instructions+=1;goto B540c9e;
case 0x540ca3:goto L540ca3;
case 0x540ca6:c.instructions+=3;goto B540ca6;
case 0x540ca7:c.instructions+=2;goto B540ca7;
case 0x540ca8:c.instructions+=1;goto B540ca8;
case 0x540cad:goto L540cad;
case 0x540cb0:c.instructions+=1;goto B540cb0;
case 0x540cb3:goto L540cb3;
case 0x540cb6:c.instructions+=2;goto B540cb6;
case 0x540cb8:c.instructions+=1;goto B540cb8;
case 0x540cba:goto L540cba;
case 0x540cbb:c.instructions+=1;goto B540cbb;
case 0x540cc0:goto L540cc0;
case 0x540cc3:c.instructions+=3;goto B540cc3;
case 0x540cc4:c.instructions+=2;goto B540cc4;
case 0x540cc5:c.instructions+=1;goto B540cc5;
case 0x540cca:goto L540cca;
case 0x540ccd:c.instructions+=1;goto B540ccd;
case 0x540cd0:goto L540cd0;
case 0x540cd3:c.instructions+=17;goto B540cd3;
case 0x540cd6:c.instructions+=16;goto B540cd6;
case 0x540cd9:c.instructions+=15;goto B540cd9;
case 0x540cdc:c.instructions+=14;goto B540cdc;
case 0x540cdf:c.instructions+=13;goto B540cdf;
case 0x540ce2:c.instructions+=12;goto B540ce2;
case 0x540ce6:c.instructions+=11;goto B540ce6;
case 0x540ce9:c.instructions+=10;goto B540ce9;
case 0x540cec:c.instructions+=9;goto B540cec;
case 0x540cef:c.instructions+=8;goto B540cef;
case 0x540cf2:c.instructions+=7;goto B540cf2;
case 0x540cf3:c.instructions+=6;goto B540cf3;
case 0x540cf7:c.instructions+=5;goto B540cf7;
case 0x540cfa:c.instructions+=4;goto B540cfa;
case 0x540cfd:c.instructions+=3;goto B540cfd;
case 0x540cfe:c.instructions+=2;goto B540cfe;
case 0x540cff:c.instructions+=1;goto B540cff;
case 0x540d04:goto L540d04;
case 0x540d07:c.instructions+=10;goto B540d07;
case 0x540d0b:c.instructions+=9;goto B540d0b;
case 0x540d0d:c.instructions+=8;goto B540d0d;
case 0x540d10:c.instructions+=7;goto B540d10;
case 0x540d11:c.instructions+=6;goto B540d11;
case 0x540d15:c.instructions+=5;goto B540d15;
case 0x540d18:c.instructions+=4;goto B540d18;
case 0x540d1b:c.instructions+=3;goto B540d1b;
case 0x540d1c:c.instructions+=2;goto B540d1c;
case 0x540d1d:c.instructions+=1;goto B540d1d;
case 0x540d20:goto L540d20;
case 0x540d23:c.instructions+=10;goto B540d23;
case 0x540d24:c.instructions+=9;goto B540d24;
case 0x540d25:c.instructions+=8;goto B540d25;
case 0x540d27:c.instructions+=7;goto B540d27;
case 0x540d2a:c.instructions+=6;goto B540d2a;
case 0x540d2e:c.instructions+=5;goto B540d2e;
case 0x540d2f:c.instructions+=4;goto B540d2f;
case 0x540d33:c.instructions+=3;goto B540d33;
case 0x540d34:c.instructions+=2;goto B540d34;
case 0x540d35:c.instructions+=1;goto B540d35;
case 0x540d3a:goto L540d3a;
case 0x540d3d:c.instructions+=6;goto B540d3d;
case 0x540d41:c.instructions+=5;goto B540d41;
case 0x540d42:c.instructions+=4;goto B540d42;
case 0x540d46:c.instructions+=3;goto B540d46;
case 0x540d47:c.instructions+=2;goto B540d47;
case 0x540d48:c.instructions+=1;goto B540d48;
case 0x540d4d:goto L540d4d;
case 0x540d50:c.instructions+=3;goto B540d50;
case 0x540d53:c.instructions+=2;goto B540d53;
case 0x540d55:c.instructions+=1;goto B540d55;
case 0x540d57:goto L540d57;
case 0x540d5b:c.instructions+=3;goto B540d5b;
case 0x540d5f:c.instructions+=2;goto B540d5f;
case 0x540d63:c.instructions+=1;goto B540d63;
case 0x540d67:goto L540d67;
case 0x540d6a:c.instructions+=19;goto B540d6a;
case 0x540d6d:c.instructions+=18;goto B540d6d;
case 0x540d70:c.instructions+=17;goto B540d70;
case 0x540d74:c.instructions+=16;goto B540d74;
case 0x540d77:c.instructions+=15;goto B540d77;
case 0x540d78:c.instructions+=14;goto B540d78;
case 0x540d7b:c.instructions+=13;goto B540d7b;
case 0x540d7f:c.instructions+=12;goto B540d7f;
case 0x540d80:c.instructions+=11;goto B540d80;
case 0x540d82:c.instructions+=10;goto B540d82;
case 0x540d83:c.instructions+=9;goto B540d83;
case 0x540d87:c.instructions+=8;goto B540d87;
case 0x540d8a:c.instructions+=7;goto B540d8a;
case 0x540d8e:c.instructions+=6;goto B540d8e;
case 0x540d94:c.instructions+=5;goto B540d94;
case 0x540d96:c.instructions+=4;goto B540d96;
case 0x540d99:c.instructions+=3;goto B540d99;
case 0x540d9d:c.instructions+=2;goto B540d9d;
case 0x540da1:c.instructions+=1;goto B540da1;
case 0x540da6:goto L540da6;
case 0x540daa:c.instructions+=15;goto B540daa;
case 0x540dae:c.instructions+=14;goto B540dae;
case 0x540db4:c.instructions+=13;goto B540db4;
case 0x540db7:c.instructions+=12;goto B540db7;
case 0x540dba:c.instructions+=11;goto B540dba;
case 0x540dbe:c.instructions+=10;goto B540dbe;
case 0x540dc2:c.instructions+=9;goto B540dc2;
case 0x540dc8:c.instructions+=8;goto B540dc8;
case 0x540dca:c.instructions+=7;goto B540dca;
case 0x540dd0:c.instructions+=6;goto B540dd0;
case 0x540dd4:c.instructions+=5;goto B540dd4;
case 0x540dda:c.instructions+=4;goto B540dda;
case 0x540ddd:c.instructions+=3;goto B540ddd;
case 0x540dde:c.instructions+=2;goto B540dde;
case 0x540ddf:c.instructions+=1;goto B540ddf;
case 0x540de4:goto L540de4;
case 0x540de7:c.instructions+=6;goto B540de7;
case 0x540deb:c.instructions+=5;goto B540deb;
case 0x540dec:c.instructions+=4;goto B540dec;
case 0x540df0:c.instructions+=3;goto B540df0;
case 0x540df1:c.instructions+=2;goto B540df1;
case 0x540df2:c.instructions+=1;goto B540df2;
case 0x540df7:goto L540df7;
case 0x540dfa:c.instructions+=6;goto B540dfa;
case 0x540dfe:c.instructions+=5;goto B540dfe;
case 0x540dff:c.instructions+=4;goto B540dff;
case 0x540e03:c.instructions+=3;goto B540e03;
case 0x540e04:c.instructions+=2;goto B540e04;
case 0x540e05:c.instructions+=1;goto B540e05;
case 0x540e0a:goto L540e0a;
case 0x540e0d:c.instructions+=6;goto B540e0d;
case 0x540e11:c.instructions+=5;goto B540e11;
case 0x540e12:c.instructions+=4;goto B540e12;
case 0x540e16:c.instructions+=3;goto B540e16;
case 0x540e17:c.instructions+=2;goto B540e17;
case 0x540e18:c.instructions+=1;goto B540e18;
case 0x540e1d:goto L540e1d;
case 0x540e20:c.instructions+=6;goto B540e20;
case 0x540e24:c.instructions+=5;goto B540e24;
case 0x540e25:c.instructions+=4;goto B540e25;
case 0x540e29:c.instructions+=3;goto B540e29;
case 0x540e2a:c.instructions+=2;goto B540e2a;
case 0x540e2b:c.instructions+=1;goto B540e2b;
case 0x540e30:goto L540e30;
case 0x540e34:c.instructions+=6;goto B540e34;
case 0x540e37:c.instructions+=5;goto B540e37;
case 0x540e3a:c.instructions+=4;goto B540e3a;
case 0x540e3d:c.instructions+=3;goto B540e3d;
case 0x540e40:c.instructions+=2;goto B540e40;
case 0x540e41:c.instructions+=1;goto B540e41;
case 0x540e46:goto L540e46;
case 0x540e4a:c.instructions+=9;goto B540e4a;
case 0x540e4d:c.instructions+=8;goto B540e4d;
case 0x540e4e:c.instructions+=7;goto B540e4e;
case 0x540e52:c.instructions+=6;goto B540e52;
case 0x540e55:c.instructions+=5;goto B540e55;
case 0x540e58:c.instructions+=4;goto B540e58;
case 0x540e59:c.instructions+=3;goto B540e59;
case 0x540e5c:c.instructions+=2;goto B540e5c;
case 0x540e5d:c.instructions+=1;goto B540e5d;
case 0x540e62:goto L540e62;
case 0x540e65:c.instructions+=3;goto B540e65;
case 0x540e68:c.instructions+=2;goto B540e68;
case 0x540e6a:c.instructions+=1;goto B540e6a;
case 0x540e6c:goto L540e6c;
case 0x540e6f:c.instructions+=1;goto B540e6f;
case 0x540e74:goto L540e74;
case 0x540e75:c.instructions+=3;goto B540e75;
case 0x540e7a:c.instructions+=2;goto B540e7a;
case 0x540e7b:c.instructions+=1;goto B540e7b;
case 0x540e80:goto L540e80;
case 0x540e83:goto L540e83;
case 0x540e84:c.instructions+=3;goto B540e84;
case 0x540e85:c.instructions+=2;goto B540e85;
case 0x540e88:c.instructions+=1;goto B540e88;
case 0x540e90:goto L540e90;
case 0x540e93:c.instructions+=10;goto B540e93;
case 0x540e94:c.instructions+=9;goto B540e94;
case 0x540e95:c.instructions+=8;goto B540e95;
case 0x540e97:c.instructions+=7;goto B540e97;
case 0x540e9a:c.instructions+=6;goto B540e9a;
case 0x540e9e:c.instructions+=5;goto B540e9e;
case 0x540e9f:c.instructions+=4;goto B540e9f;
case 0x540ea3:c.instructions+=3;goto B540ea3;
case 0x540ea4:c.instructions+=2;goto B540ea4;
case 0x540ea5:c.instructions+=1;goto B540ea5;
case 0x540eaa:goto L540eaa;
case 0x540ead:c.instructions+=6;goto B540ead;
case 0x540eb1:c.instructions+=5;goto B540eb1;
case 0x540eb2:c.instructions+=4;goto B540eb2;
case 0x540eb6:c.instructions+=3;goto B540eb6;
case 0x540eb7:c.instructions+=2;goto B540eb7;
case 0x540eb8:c.instructions+=1;goto B540eb8;
case 0x540ebd:goto L540ebd;
case 0x540ec0:c.instructions+=6;goto B540ec0;
case 0x540ec4:c.instructions+=5;goto B540ec4;
case 0x540ec5:c.instructions+=4;goto B540ec5;
case 0x540ec9:c.instructions+=3;goto B540ec9;
case 0x540eca:c.instructions+=2;goto B540eca;
case 0x540ecb:c.instructions+=1;goto B540ecb;
case 0x540ed0:goto L540ed0;
case 0x540ed4:c.instructions+=25;goto B540ed4;
case 0x540eda:c.instructions+=24;goto B540eda;
case 0x540edd:c.instructions+=23;goto B540edd;
case 0x540ee1:c.instructions+=22;goto B540ee1;
case 0x540ee4:c.instructions+=21;goto B540ee4;
case 0x540eea:c.instructions+=20;goto B540eea;
case 0x540eee:c.instructions+=19;goto B540eee;
case 0x540ef2:c.instructions+=18;goto B540ef2;
case 0x540ef5:c.instructions+=17;goto B540ef5;
case 0x540ef8:c.instructions+=16;goto B540ef8;
case 0x540efb:c.instructions+=15;goto B540efb;
case 0x540efe:c.instructions+=14;goto B540efe;
case 0x540f00:c.instructions+=13;goto B540f00;
case 0x540f04:c.instructions+=12;goto B540f04;
case 0x540f08:c.instructions+=11;goto B540f08;
case 0x540f0e:c.instructions+=10;goto B540f0e;
case 0x540f12:c.instructions+=9;goto B540f12;
case 0x540f16:c.instructions+=8;goto B540f16;
case 0x540f1c:c.instructions+=7;goto B540f1c;
case 0x540f20:c.instructions+=6;goto B540f20;
case 0x540f23:c.instructions+=5;goto B540f23;
case 0x540f25:c.instructions+=4;goto B540f25;
case 0x540f2b:c.instructions+=3;goto B540f2b;
case 0x540f2e:c.instructions+=2;goto B540f2e;
case 0x540f32:c.instructions+=1;goto B540f32;
case 0x540f34:goto L540f34;
case 0x540f3a:goto L540f3a;
case 0x540f3e:c.instructions+=7;goto B540f3e;
case 0x540f42:c.instructions+=6;goto B540f42;
case 0x540f46:c.instructions+=5;goto B540f46;
case 0x540f49:c.instructions+=4;goto B540f49;
case 0x540f4a:c.instructions+=3;goto B540f4a;
case 0x540f4b:c.instructions+=2;goto B540f4b;
case 0x540f4c:c.instructions+=1;goto B540f4c;
case 0x540f51:goto L540f51;
case 0x540f55:c.instructions+=6;goto B540f55;
case 0x540f58:c.instructions+=5;goto B540f58;
case 0x540f5b:c.instructions+=4;goto B540f5b;
case 0x540f5c:c.instructions+=3;goto B540f5c;
case 0x540f62:c.instructions+=2;goto B540f62;
case 0x540f66:c.instructions+=1;goto B540f66;
case 0x540f6b:goto L540f6b;
case 0x540f6e:c.instructions+=2;goto B540f6e;
case 0x540f6f:c.instructions+=1;goto B540f6f;
case 0x540f74:goto L540f74;
case 0x540f78:c.instructions+=4;goto B540f78;
case 0x540f7b:c.instructions+=3;goto B540f7b;
case 0x540f7c:c.instructions+=2;goto B540f7c;
case 0x540f7d:c.instructions+=1;goto B540f7d;
case 0x540f82:goto L540f82;
case 0x540f86:c.instructions+=10;goto B540f86;
case 0x540f8c:c.instructions+=9;goto B540f8c;
case 0x540f90:c.instructions+=8;goto B540f90;
case 0x540f93:c.instructions+=7;goto B540f93;
case 0x540f96:c.instructions+=6;goto B540f96;
case 0x540f9a:c.instructions+=5;goto B540f9a;
case 0x540fa0:c.instructions+=4;goto B540fa0;
case 0x540fa3:c.instructions+=3;goto B540fa3;
case 0x540fa4:c.instructions+=2;goto B540fa4;
case 0x540fa5:c.instructions+=1;goto B540fa5;
case 0x540faa:goto L540faa;
case 0x540fad:c.instructions+=3;goto B540fad;
case 0x540fb0:c.instructions+=2;goto B540fb0;
case 0x540fb2:c.instructions+=1;goto B540fb2;
case 0x540fb4:goto L540fb4;
case 0x540fb7:c.instructions+=1;goto B540fb7;
case 0x540fbc:goto L540fbc;
case 0x540fbd:c.instructions+=3;goto B540fbd;
case 0x540fc2:c.instructions+=2;goto B540fc2;
case 0x540fc3:c.instructions+=1;goto B540fc3;
case 0x540fc8:goto L540fc8;
case 0x540fcb:goto L540fcb;
case 0x540fcc:c.instructions+=3;goto B540fcc;
case 0x540fcd:c.instructions+=2;goto B540fcd;
case 0x540fd0:c.instructions+=1;goto B540fd0;
case 0x540fe0:goto L540fe0;
case 0x540fe1:c.instructions+=9;goto B540fe1;
case 0x540fe2:c.instructions+=8;goto B540fe2;
case 0x540fe4:c.instructions+=7;goto B540fe4;
case 0x540fe7:c.instructions+=6;goto B540fe7;
case 0x540fe8:c.instructions+=5;goto B540fe8;
case 0x540fea:c.instructions+=4;goto B540fea;
case 0x540fec:c.instructions+=3;goto B540fec;
case 0x540fee:c.instructions+=2;goto B540fee;
case 0x540ff2:c.instructions+=1;goto B540ff2;
case 0x540ff4:goto L540ff4;
case 0x540ff5:c.instructions+=4;goto B540ff5;
case 0x540ff8:c.instructions+=3;goto B540ff8;
case 0x540ffa:c.instructions+=2;goto B540ffa;
case 0x540ffb:c.instructions+=1;goto B540ffb;
default:missing_instruction(c.pc);}
B540004:L540004:{c.instructions+=35;NFSU2_TR(0x540004);
__builtin_memmove(gp(0x89e7b4),(R+0),4);
}
B540009:{NFSU2_TR(0x540009);
__builtin_memmove((R+0),gp(0x7faa20),4);
}
B54000e:{NFSU2_TR(0x54000e);
__builtin_memmove(gp(0x89e7bc),(R+0),4);
}
B540013:{NFSU2_TR(0x540013);
__builtin_memmove((R+0),gp(0x864fb0),4);
}
B540018:{NFSU2_TR(0x540018);
__builtin_memmove(gp(0x89e7d8),(R+4),1);
}
B54001e:{NFSU2_TR(0x54001e);
__builtin_memmove((R+4),gp(0x864fd0),4);
}
B540024:{NFSU2_TR(0x540024);
__builtin_memmove(gp(0x89e7c4),(R+0),4);
}
B540029:{NFSU2_TR(0x540029);
__builtin_memmove((R+0),gp(0x7faa44),4);
}
B54002e:{NFSU2_TR(0x54002e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B540030:{NFSU2_TR(0x540030);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B540033:{NFSU2_TR(0x540033);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B540035:{NFSU2_TR(0x540035);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B540038:{NFSU2_TR(0x540038);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54003a:{NFSU2_TR(0x54003a);
__builtin_memmove(gp(0x89e7d2),(R+0),1);
}
B54003f:{NFSU2_TR(0x54003f);
__builtin_memmove((R+0),gp(0x864fd8),1);
}
B540044:{NFSU2_TR(0x540044);
__builtin_memmove(gp(0x83aa79),(R+0),1);
}
B540049:{NFSU2_TR(0x540049);
__builtin_memmove((R+0),gp(0x864fdc),1);
}
B54004e:{NFSU2_TR(0x54004e);
__builtin_memmove(gp(0x89e7e3),(R+4),1);
}
B540054:{NFSU2_TR(0x540054);
__builtin_memmove((R+4),gp(0x864fbc),4);
}
B54005a:{NFSU2_TR(0x54005a);
__builtin_memmove(gp(0x83aaa1),(R+0),1);
}
B54005f:{NFSU2_TR(0x54005f);
__builtin_memmove((R+0),gp(0x7faa3c),1);
}
B540064:{NFSU2_TR(0x540064);
__builtin_memmove(gp(0x89e7a8),(R+4),4);
}
B54006a:{NFSU2_TR(0x54006a);
__builtin_memmove((R+4),gp(0x864fe0),4);
}
B540070:{NFSU2_TR(0x540070);
__builtin_memmove(gp(0x83aa7a),(R+0),1);
}
B540075:{NFSU2_TR(0x540075);
__builtin_memmove((R+0),gp(0x7faa40),1);
}
B54007a:{NFSU2_TR(0x54007a);
__builtin_memmove(gp(0x89e7a0),(R+24),4);
}
B540080:{NFSU2_TR(0x540080);
__builtin_memmove((R+24),gp(0x7faa1c),4);
}
B540086:{NFSU2_TR(0x540086);
__builtin_memmove(gp(0x89e7b8),(R+4),4);
}
B54008c:{NFSU2_TR(0x54008c);
__builtin_memmove(gp(0x83aaa2),(R+0),1);
}
B540091:{NFSU2_TR(0x540091);
__builtin_memmove((R+0),gp(0x7faa30),4);
}
B540096:{NFSU2_TR(0x540096);
__builtin_memmove((R+4),(R+24),4);
}
B540098:{NFSU2_TR(0x540098);
__builtin_memmove(gp(0x89e7b0),(R+12),4);
}
B54009e:{NFSU2_TR(0x54009e);
__builtin_memmove(gp(0x89e7c0),(R+4),4);
}
B5400a4:{NFSU2_TR(0x5400a4);
__builtin_memmove(gp(0x89e7f4),(R+0),4);
}
B5400a9:{NFSU2_TR(0x5400a9);
if(r1(R+518)){{goto L5400d5;}}
}
B5400ab:L5400ab:{c.instructions+=2;NFSU2_TR(0x5400ab);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5400ad:{NFSU2_TR(0x5400ad);
if(r1(R+518)){{goto L5400cd;}}
}
B5400af:L5400af:{c.instructions+=2;NFSU2_TR(0x5400af);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5400b0:{NFSU2_TR(0x5400b0);
if(r1(R+518)){{goto L5400c1;}}
}
B5400b2:L5400b2:{c.instructions+=2;NFSU2_TR(0x5400b2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5400b3:{NFSU2_TR(0x5400b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5400d5;}}
}
B5400b5:L5400b5:{c.instructions+=2;NFSU2_TR(0x5400b5);
s4(0x89e804,u32(0x2ull));
}
B5400bf:{NFSU2_TR(0x5400bf);
{goto L5400df;}
}
B5400c1:L5400c1:{c.instructions+=2;NFSU2_TR(0x5400c1);
s4(0x89e804,u32(0x1ull));
}
B5400cb:{NFSU2_TR(0x5400cb);
{goto L5400df;}
}
B5400cd:L5400cd:{c.instructions+=2;NFSU2_TR(0x5400cd);
__builtin_memmove(gp(0x89e804),(R+28),4);
}
B5400d3:{NFSU2_TR(0x5400d3);
{goto L5400df;}
}
B5400d5:L5400d5:{c.instructions+=1;NFSU2_TR(0x5400d5);
s4(0x89e804,u32(0x3ull));
}
B5400df:L5400df:{c.instructions+=3;NFSU2_TR(0x5400df);
__builtin_memmove((R+8),gp(0x864fb8),4);
}
B5400e5:{NFSU2_TR(0x5400e5);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5400e8:{NFSU2_TR(0x5400e8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L54010a;}}
}
B5400ea:L5400ea:{c.instructions+=1;NFSU2_TR(0x5400ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x54046cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5400f1:L5400f1:{c.instructions+=2;NFSU2_TR(0x5400f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5400f3:{NFSU2_TR(0x5400f3);
{goto L54010f;}
}
B5400f5:L5400f5:{c.instructions+=2;NFSU2_TR(0x5400f5);
w4(R+0,u32(0x1ull));
}
B5400fa:{NFSU2_TR(0x5400fa);
{goto L54010f;}
}
B5400fc:L5400fc:{c.instructions+=2;NFSU2_TR(0x5400fc);
w4(R+0,u32(0x2ull));
}
B540101:{NFSU2_TR(0x540101);
{goto L54010f;}
}
B540103:L540103:{c.instructions+=2;NFSU2_TR(0x540103);
w4(R+0,u32(0x4ull));
}
B540108:{NFSU2_TR(0x540108);
{goto L54010f;}
}
B54010a:L54010a:{c.instructions+=1;NFSU2_TR(0x54010a);
w4(R+0,u32(0x3ull));
}
B54010f:L54010f:{c.instructions+=3;NFSU2_TR(0x54010f);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B540112:{NFSU2_TR(0x540112);
__builtin_memmove(gp(0x83aa74),(R+0),4);
}
B540117:{NFSU2_TR(0x540117);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L540139;}}
}
B540119:L540119:{c.instructions+=1;NFSU2_TR(0x540119);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x540484ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B540120:L540120:{c.instructions+=2;NFSU2_TR(0x540120);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B540122:{NFSU2_TR(0x540122);
{goto L54013e;}
}
B540124:L540124:{c.instructions+=2;NFSU2_TR(0x540124);
w4(R+0,u32(0x1ull));
}
B540129:{NFSU2_TR(0x540129);
{goto L54013e;}
}
B54012b:L54012b:{c.instructions+=2;NFSU2_TR(0x54012b);
w4(R+0,u32(0x2ull));
}
B540130:{NFSU2_TR(0x540130);
{goto L54013e;}
}
B540132:L540132:{c.instructions+=2;NFSU2_TR(0x540132);
w4(R+0,u32(0x4ull));
}
B540137:{NFSU2_TR(0x540137);
{goto L54013e;}
}
B540139:L540139:{c.instructions+=1;NFSU2_TR(0x540139);
w4(R+0,u32(0x3ull));
}
B54013e:L54013e:{c.instructions+=4;NFSU2_TR(0x54013e);
__builtin_memmove(gp(0x83aa9c),(R+0),4);
}
B540143:{NFSU2_TR(0x540143);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B540145:{NFSU2_TR(0x540145);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B540147:{NFSU2_TR(0x540147);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L540169;}}
}
B540149:L540149:{c.instructions+=1;NFSU2_TR(0x540149);
__builtin_memmove((R+16),(R+16),4);
}
B540150:L540150:{c.instructions+=6;NFSU2_TR(0x540150);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83a9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B540157:{NFSU2_TR(0x540157);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e7e8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B54015e:{NFSU2_TR(0x54015e);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B540164:{NFSU2_TR(0x540164);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B540165:{NFSU2_TR(0x540165);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B540167:{NFSU2_TR(0x540167);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x540150u);}goto L540150;}}
}
B540169:L540169:{c.instructions+=6;NFSU2_TR(0x540169);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54016b:{NFSU2_TR(0x54016b);
s4(0x89e7fc,u32(0x3f800000ull));
}
B540175:{NFSU2_TR(0x540175);
s4(0x89e800,u32(0x3f800000ull));
}
B54017f:{NFSU2_TR(0x54017f);
__builtin_memmove(gp(0x89e814),(R+28),4);
}
B540185:{NFSU2_TR(0x540185);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540189:{NFSU2_TR(0x540189);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L540362;}}
}
B54018f:L54018f:{c.instructions+=1;NFSU2_TR(0x54018f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x83ad90ull));
s4(u32(r4(U+0)),r4(U+4));
}
B540197:L540197:{c.instructions+=2;NFSU2_TR(0x540197);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54019b:{NFSU2_TR(0x54019b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5401a0ull));
TAIL_STATIC(0x5ac6e0u,5ac);
}
B5401a0:L5401a0:{c.instructions+=7;NFSU2_TR(0x5401a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5401a2:{NFSU2_TR(0x5401a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5401a4:{NFSU2_TR(0x5401a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5401a6:{NFSU2_TR(0x5401a6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5401a8:{NFSU2_TR(0x5401a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5401ac:{NFSU2_TR(0x5401ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x126cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5401b7:{NFSU2_TR(0x5401b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5401bcull));
TAIL_STATIC(0x610270u,610);
}
B5401bc:L5401bc:{c.instructions+=5;NFSU2_TR(0x5401bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5401c0:{NFSU2_TR(0x5401c0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x83ad90ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x83ad90ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5401c6:{NFSU2_TR(0x5401c6);
w4(R+0,u32(0x1ull));
}
B5401cb:{NFSU2_TR(0x5401cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x125cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5401d2:{NFSU2_TR(0x5401d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5401dc;}}
}
B5401d4:L5401d4:{c.instructions+=2;NFSU2_TR(0x5401d4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x850428ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x850428ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5401da:{NFSU2_TR(0x5401da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5401de;}}
}
B5401dc:L5401dc:{c.instructions+=1;NFSU2_TR(0x5401dc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5401de:L5401de:{c.instructions+=2;NFSU2_TR(0x5401de);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5401e4:{NFSU2_TR(0x5401e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5401ee;}}
}
B5401e6:L5401e6:{c.instructions+=2;NFSU2_TR(0x5401e6);
__builtin_memmove((R+24),gp(0x863480),4);
}
B5401ec:{NFSU2_TR(0x5401ec);
{goto L5401f9;}
}
B5401ee:L5401ee:{c.instructions+=2;NFSU2_TR(0x5401ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5401f2:{NFSU2_TR(0x5401f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aab8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B5401f9:L5401f9:{c.instructions+=2;NFSU2_TR(0x5401f9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5401fb:{NFSU2_TR(0x5401fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9bd8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B540201:L540201:{c.instructions+=3;NFSU2_TR(0x540201);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B540203:{NFSU2_TR(0x540203);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B540205:{NFSU2_TR(0x540205);
if(r1(R+518)){{goto L54020c;}}
}
B540207:L540207:{c.instructions+=2;NFSU2_TR(0x540207);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54020a:{NFSU2_TR(0x54020a);
if(r1(R+518)){{goto L540217;}}
}
B54020c:L54020c:{c.instructions+=4;NFSU2_TR(0x54020c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B54020d:{NFSU2_TR(0x54020d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B540210:{NFSU2_TR(0x540210);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B540213:{NFSU2_TR(0x540213);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x540201u);}goto L540201;}}
}
B540215:L540215:{c.instructions+=1;NFSU2_TR(0x540215);
{goto L54023c;}
}
B540217:L540217:{c.instructions+=3;NFSU2_TR(0x540217);
u8 U[16];
w4(U+0,u32(u32(u32(0x9bd8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B54021e:{NFSU2_TR(0x54021e);
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
B540220:{NFSU2_TR(0x540220);
if(r1(R+518)){{goto L54023c;}}
}
B540222:L540222:{c.instructions+=3;NFSU2_TR(0x540222);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B540224:{NFSU2_TR(0x540224);
__builtin_memmove((R+4),(R+24),4);
}
B540226:{NFSU2_TR(0x540226);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540229ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B540229:L540229:{c.instructions+=8;NFSU2_TR(0x540229);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54022d:{NFSU2_TR(0x54022d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54022f:{NFSU2_TR(0x54022f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540231:{NFSU2_TR(0x540231);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B540235:{NFSU2_TR(0x540235);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540236:{NFSU2_TR(0x540236);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540237:{NFSU2_TR(0x540237);
__builtin_memmove((R+4),(R+24),4);
}
B540239:{NFSU2_TR(0x540239);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54023cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54023c:L54023c:{c.instructions+=10;NFSU2_TR(0x54023c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540240:{NFSU2_TR(0x540240);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540242:{NFSU2_TR(0x540242);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540244:{NFSU2_TR(0x540244);
u8 U[4];
w4(U+0,u32(0x79bf58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540249:{NFSU2_TR(0x540249);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54024d:{NFSU2_TR(0x54024d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54024e:{NFSU2_TR(0x54024e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540250:{NFSU2_TR(0x540250);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540251:{NFSU2_TR(0x540251);
u8 U[4];
w4(U+0,u32(u32(u32(0x928ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540258:{NFSU2_TR(0x540258);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54025dull));
TAIL_STATIC(0x6373e0u,637);
}
B54025d:L54025d:{c.instructions+=4;NFSU2_TR(0x54025d);
__builtin_memmove((R+0),gp(0x7faac0),4);
}
B540262:{NFSU2_TR(0x540262);
u8 U[5];
w4(U+0,u32(u32(u32(0x125cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54026a:{NFSU2_TR(0x54026a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54026c:{NFSU2_TR(0x54026c);
__builtin_memmove((R+16),(R+16),4);
}
B540270:L540270:{c.instructions+=2;NFSU2_TR(0x540270);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B540273:{NFSU2_TR(0x540273);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54027c;}}
}
B540275:L540275:{c.instructions+=3;NFSU2_TR(0x540275);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B540278:{NFSU2_TR(0x540278);
__builtin_memmove((R+4),(R+0),4);
}
B54027a:{NFSU2_TR(0x54027a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L540283;}}
}
B54027c:L54027c:{c.instructions+=1;NFSU2_TR(0x54027c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x865058ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B540283:L540283:{c.instructions+=4;NFSU2_TR(0x540283);
w4(R+24,u32(0x1ull));
}
B540288:{NFSU2_TR(0x540288);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54028a:{NFSU2_TR(0x54028a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54028e:{NFSU2_TR(0x54028e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5402db;}}
}
B540290:L540290:{c.instructions+=4;NFSU2_TR(0x540290);
__builtin_memmove((R+8),gp(0x8383fc),4);
}
B540296:{NFSU2_TR(0x540296);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B540298:{NFSU2_TR(0x540298);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54029a:{NFSU2_TR(0x54029a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5402bc;}}
}
B54029c:L54029c:{c.instructions+=2;NFSU2_TR(0x54029c);
__builtin_memmove((R+12),gp(0x8383f8),4);
}
B5402a2:{NFSU2_TR(0x5402a2);
__builtin_memmove((R+4),(R+12),4);
}
B5402a4:L5402a4:{c.instructions+=2;NFSU2_TR(0x5402a4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5402a6:{NFSU2_TR(0x5402a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5402b1;}}
}
B5402a8:L5402a8:{c.instructions+=2;NFSU2_TR(0x5402a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5402ab:{NFSU2_TR(0x5402ab);
if(r1(R+518)){{goto L5403e7;}}
}
B5402b1:L5402b1:{c.instructions+=4;NFSU2_TR(0x5402b1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5402b2:{NFSU2_TR(0x5402b2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x17cull))));
}
B5402b8:{NFSU2_TR(0x5402b8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5402ba:{NFSU2_TR(0x5402ba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5402a4u);}goto L5402a4;}}
}
B5402bc:L5402bc:{c.instructions+=1;NFSU2_TR(0x5402bc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5402be:L5402be:{c.instructions+=4;NFSU2_TR(0x5402be);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5402c0:{NFSU2_TR(0x5402c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5402c1:{NFSU2_TR(0x5402c1);
u8 U[4];
w4(U+0,u32(u32(u32(0xc18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5402c8:{NFSU2_TR(0x5402c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5402cdull));
TAIL_STATIC(0x5a6400u,5a6);
}
B5402cd:L5402cd:{c.instructions+=4;NFSU2_TR(0x5402cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5402d1:{NFSU2_TR(0x5402d1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5402d2:{NFSU2_TR(0x5402d2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5402d4:{NFSU2_TR(0x5402d4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x540290u);}goto L540290;}}
}
B5402d6:L5402d6:{c.instructions+=1;NFSU2_TR(0x5402d6);
__builtin_memmove((R+0),gp(0x7faac0),4);
}
B5402db:L5402db:{c.instructions+=3;NFSU2_TR(0x5402db);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5402dc:{NFSU2_TR(0x5402dc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5402df:{NFSU2_TR(0x5402df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x540270u);}goto L540270;}}
}
B5402e1:L5402e1:{c.instructions+=7;NFSU2_TR(0x5402e1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5402e3:{NFSU2_TR(0x5402e3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5402e5:{NFSU2_TR(0x5402e5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5402e7:{NFSU2_TR(0x5402e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5402e9:{NFSU2_TR(0x5402e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x930ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5402f0:{NFSU2_TR(0x5402f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1224ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5402fb:{NFSU2_TR(0x5402fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540300ull));
TAIL_STATIC(0x639ce0u,639);
}
B540300:L540300:{c.instructions+=4;NFSU2_TR(0x540300);
u8 U[4];
w4(U+0,u32(u32(u32(0x910ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540307:{NFSU2_TR(0x540307);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540308:{NFSU2_TR(0x540308);
w4(R+4,u32(0x89e7a0ull));
}
B54030d:{NFSU2_TR(0x54030d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540312ull));
TAIL_STATIC(0x601600u,601);
}
B540312:L540312:{c.instructions+=3;NFSU2_TR(0x540312);
u8 U[4];
w4(U+0,u32(u32(u32(0xca4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540319:{NFSU2_TR(0x540319);
u8 U[5];
w4(U+0,u32(u32(u32(0x125cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B540321:{NFSU2_TR(0x540321);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540326ull));
TAIL_STATIC(0x4022c0u,402);
}
B540326:L540326:{c.instructions+=3;NFSU2_TR(0x540326);
u8 U[4];
w4(U+0,u32(u32(u32(0x3a4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54032d:{NFSU2_TR(0x54032d);
u8 U[8];
w4(U+0,u32(u32(u32(0x125cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B540338:{NFSU2_TR(0x540338);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54033dull));
TAIL_STATIC(0x4022c0u,402);
}
B54033d:L54033d:{c.instructions+=9;NFSU2_TR(0x54033d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540341:{NFSU2_TR(0x540341);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540345:{NFSU2_TR(0x540345);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B54034b:{NFSU2_TR(0x54034b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B54034c:{NFSU2_TR(0x54034c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xab4cull))));
}
B540352:{NFSU2_TR(0x540352);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B540354:{NFSU2_TR(0x540354);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540358:{NFSU2_TR(0x540358);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54035c:{NFSU2_TR(0x54035c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x540197u);}goto L540197;}}
}
B540362:L540362:{c.instructions+=3;NFSU2_TR(0x540362);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540364:{NFSU2_TR(0x540364);
w4(R+4,u32(0x89e7a0ull));
}
B540369:{NFSU2_TR(0x540369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54036eull));
TAIL_STATIC(0x5ed960u,5ed);
}
B54036e:L54036e:{c.instructions+=4;NFSU2_TR(0x54036e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540370:{NFSU2_TR(0x540370);
w4(R+4,u32(0x89e7a0ull));
}
B540375:{NFSU2_TR(0x540375);
__builtin_memmove((R+24),(R+0),4);
}
B540377:{NFSU2_TR(0x540377);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54037cull));
TAIL_STATIC(0x5ed960u,5ed);
}
B54037c:L54037c:{c.instructions+=3;NFSU2_TR(0x54037c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54037e:{NFSU2_TR(0x54037e);
__builtin_memmove((R+12),(R+0),4);
}
B540380:{NFSU2_TR(0x540380);
if(r1(R+518)){{goto L5403a8;}}
}
B540382:L540382:{c.instructions+=2;NFSU2_TR(0x540382);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B540385:{NFSU2_TR(0x540385);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54038aull));
TAIL_STATIC(0x5b5330u,5b5);
}
B54038a:L54038a:{c.instructions+=6;NFSU2_TR(0x54038a);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B54038d:{NFSU2_TR(0x54038d);
__builtin_memmove((R+0),gp(0x89e7f4),4);
}
B540392:{NFSU2_TR(0x540392);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B540395:{NFSU2_TR(0x540395);
__builtin_memmove((R+8),gp(0x81cb60),4);
}
B54039b:{NFSU2_TR(0x54039b);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(2380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5403a2:{NFSU2_TR(0x5403a2);
{u32 ea_=u32(u32(9037820u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5403a8:L5403a8:{c.instructions+=2;NFSU2_TR(0x5403a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5403aa:{NFSU2_TR(0x5403aa);
if(r1(R+518)){{goto L5403d2;}}
}
B5403ac:L5403ac:{c.instructions+=2;NFSU2_TR(0x5403ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5403af:{NFSU2_TR(0x5403af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5403b4ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B5403b4:L5403b4:{c.instructions+=6;NFSU2_TR(0x5403b4);
__builtin_memmove((R+4),gp(0x89e7f4),4);
}
B5403ba:{NFSU2_TR(0x5403ba);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B5403bd:{NFSU2_TR(0x5403bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5403c0:{NFSU2_TR(0x5403c0);
__builtin_memmove((R+0),gp(0x81cb60),4);
}
B5403c5:{NFSU2_TR(0x5403c5);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(2380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5403cc:{NFSU2_TR(0x5403cc);
{u32 ea_=u32(u32(9037824u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5403d2:L5403d2:{c.instructions+=3;NFSU2_TR(0x5403d2);
__builtin_memmove((R+0),gp(0x865084),4);
}
B5403d7:{NFSU2_TR(0x5403d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5403d9:{NFSU2_TR(0x5403d9);
if(r1(R+518)){{goto L5403f4;}}
}
B5403db:L5403db:{c.instructions+=2;NFSU2_TR(0x5403db);
w4(R+4,u32(0x89cf48ull));
}
B5403e0:{NFSU2_TR(0x5403e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5403e5ull));
TAIL_STATIC(0x5f0150u,5f0);
}
B5403e5:L5403e5:{c.instructions+=1;NFSU2_TR(0x5403e5);
{goto L540443;}
}
B5403e7:L5403e7:{c.instructions+=3;NFSU2_TR(0x5403e7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x17cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5403ed:{NFSU2_TR(0x5403ed);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B5403ef:{NFSU2_TR(0x5403ef);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5402beu);}goto L5402be;}
}
B5403f4:L5403f4:{c.instructions+=3;NFSU2_TR(0x5403f4);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B5403f9:{NFSU2_TR(0x5403f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5403fb:{NFSU2_TR(0x5403fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54040b;}}
}
B5403fd:L5403fd:{c.instructions+=3;NFSU2_TR(0x5403fd);
__builtin_memmove((R+4),gp(0x89e7c4),4);
}
B540403:{NFSU2_TR(0x540403);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540404:{NFSU2_TR(0x540404);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540409ull));
TAIL_STATIC(0x53f000u,53f);
}
B540409:L540409:{c.instructions+=1;NFSU2_TR(0x540409);
{goto L540417;}
}
B54040b:L54040b:{c.instructions+=3;NFSU2_TR(0x54040b);
__builtin_memmove((R+8),gp(0x89e7c4),4);
}
B540411:{NFSU2_TR(0x540411);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540412:{NFSU2_TR(0x540412);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540417ull));
TAIL_STATIC(0x53ee90u,53e);
}
B540417:L540417:{c.instructions+=3;NFSU2_TR(0x540417);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54041a:{NFSU2_TR(0x54041a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54041c:{NFSU2_TR(0x54041c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540421ull));
TAIL_STATIC(0x5264a0u,526);
}
B540421:L540421:{c.instructions+=2;NFSU2_TR(0x540421);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B540424:{NFSU2_TR(0x540424);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540429ull));
TAIL_STATIC(0x4fe9f0u,4fe);
}
B540429:L540429:{c.instructions+=3;NFSU2_TR(0x540429);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B540430:{NFSU2_TR(0x540430);
w4(R+4,u32(0x865480ull));
}
B540435:{NFSU2_TR(0x540435);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54043e;}}
}
B540437:L540437:{c.instructions+=1;NFSU2_TR(0x540437);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54043cull));
TAIL_STATIC(0x578320u,578);
}
B54043c:L54043c:{c.instructions+=1;NFSU2_TR(0x54043c);
{goto L540443;}
}
B54043e:L54043e:{c.instructions+=1;NFSU2_TR(0x54043e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540443ull));
TAIL_STATIC(0x581020u,581);
}
B540443:L540443:{c.instructions+=2;NFSU2_TR(0x540443);
u8 U[14];
__builtin_memmove((U+6),gp(0x7faa1c),4);
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
B54044a:{NFSU2_TR(0x54044a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L540456;}}
}
B54044c:L54044c:{c.instructions+=1;NFSU2_TR(0x54044c);
s4(0x850078,u32(0x4ull));
}
B540456:L540456:{c.instructions+=8;NFSU2_TR(0x540456);
u8 U[8];
w4(U+0,u32(u32(u32(0x1254ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54045d:{NFSU2_TR(0x54045d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54045e:{NFSU2_TR(0x54045e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54045f:{NFSU2_TR(0x54045f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540466:{NFSU2_TR(0x540466);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B540467:{NFSU2_TR(0x540467);
__builtin_memmove((R+16),(R+20),4);
}
B540469:{NFSU2_TR(0x540469);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54046a:{NFSU2_TR(0x54046a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5404a0:L5404a0:{c.instructions+=11;NFSU2_TR(0x5404a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5404a1:{NFSU2_TR(0x5404a1);
__builtin_memmove((R+20),(R+16),4);
}
B5404a3:{NFSU2_TR(0x5404a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5404a6:{NFSU2_TR(0x5404a6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5404a8:{NFSU2_TR(0x5404a8);
u8 U[4];
w4(U+0,u32(0x777961ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5404ad:{NFSU2_TR(0x5404ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5404b3:{NFSU2_TR(0x5404b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5404b4:{NFSU2_TR(0x5404b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5404bb:{NFSU2_TR(0x5404bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5404bc:{NFSU2_TR(0x5404bc);
w4(R+0,u32(0x1264ull));
}
B5404c1:{NFSU2_TR(0x5404c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5404c6ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B5404c6:L5404c6:{c.instructions+=7;NFSU2_TR(0x5404c6);
__builtin_memmove((R+0),gp(0x86347c),1);
}
B5404cb:{NFSU2_TR(0x5404cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5404cc:{NFSU2_TR(0x5404cc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5404ce:{NFSU2_TR(0x5404ce);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5404d0:{NFSU2_TR(0x5404d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5404d1:{NFSU2_TR(0x5404d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5404d2:{NFSU2_TR(0x5404d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5404e8;}}
}
B5404d4:L5404d4:{c.instructions+=2;NFSU2_TR(0x5404d4);
u8 U[14];
__builtin_memmove((U+6),gp(0x861e7c),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5404da:{NFSU2_TR(0x5404da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54052f;}}
}
B5404dc:L5404dc:{c.instructions+=2;NFSU2_TR(0x5404dc);
w4(R+4,u32(0x827e88ull));
}
B5404e1:{NFSU2_TR(0x5404e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5404e6ull));
TAIL_STATIC(0x4305d0u,430);
}
B5404e6:L5404e6:{c.instructions+=1;NFSU2_TR(0x5404e6);
{goto L54052f;}
}
B5404e8:L5404e8:{c.instructions+=3;NFSU2_TR(0x5404e8);
u8 U[8];
__builtin_memmove((U+0),gp(0x863444),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5404ee:{NFSU2_TR(0x5404ee);
s4(0x861e7c,u32(0x9ull));
}
B5404f8:{NFSU2_TR(0x5404f8);
if(r1(R+518)){{goto L54052f;}}
}
B5404fa:L5404fa:{c.instructions+=2;NFSU2_TR(0x5404fa);
u8 U[14];
__builtin_memmove((U+6),gp(0x86344c),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B540500:{NFSU2_TR(0x540500);
if(r1(R+518)){{goto L54052f;}}
}
B540502:L540502:{c.instructions+=2;NFSU2_TR(0x540502);
w4(R+4,u32(0x827e88ull));
}
B540507:{NFSU2_TR(0x540507);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54050cull));
TAIL_STATIC(0x570a60u,570);
}
B54050c:L54050c:{c.instructions+=2;NFSU2_TR(0x54050c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54050e:{NFSU2_TR(0x54050e);
if(r1(R+518)){{goto L54052f;}}
}
B540510:L540510:{c.instructions+=9;NFSU2_TR(0x540510);
__builtin_memmove((R+0),gp(0x863444),4);
}
B540515:{NFSU2_TR(0x540515);
__builtin_memmove((R+8),gp(0x86344c),4);
}
B54051b:{NFSU2_TR(0x54051b);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B54051d:{NFSU2_TR(0x54051d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B54051f:{NFSU2_TR(0x54051f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B540521:{NFSU2_TR(0x540521);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540524:{NFSU2_TR(0x540524);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540525:{NFSU2_TR(0x540525);
w4(R+4,u32(0x827e88ull));
}
B54052a:{NFSU2_TR(0x54052a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54052full));
TAIL_STATIC(0x430580u,430);
}
B54052f:L54052f:{c.instructions+=19;NFSU2_TR(0x54052f);
__builtin_memmove((R+8),gp(0x83ac30),4);
}
B540535:{NFSU2_TR(0x540535);
w4(R+4,u32(0x1ull));
}
B54053a:{NFSU2_TR(0x54053a);
__builtin_memmove(gp(0x89e7bc),(R+4),4);
}
B540540:{NFSU2_TR(0x540540);
__builtin_memmove(gp(0x89e7c0),(R+4),4);
}
B540546:{NFSU2_TR(0x540546);
__builtin_memmove(gp(0x89e7d2),(R+4),1);
}
B54054c:{NFSU2_TR(0x54054c);
w4(R+4,u32(m1(0x83aa1c)));
}
B540553:{NFSU2_TR(0x540553);
__builtin_memmove(gp(0x7f68b0),(R+4),4);
}
B540559:{NFSU2_TR(0x540559);
__builtin_memmove(gp(0x89e7f4),(R+8),4);
}
B54055f:{NFSU2_TR(0x54055f);
__builtin_memmove((R+8),gp(0x83aa74),4);
}
B540565:{NFSU2_TR(0x540565);
w4(R+0,u32(0x3ull));
}
B54056a:{NFSU2_TR(0x54056a);
w4(R+4,u32(0x4ull));
}
B54056f:{NFSU2_TR(0x54056f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B540571:{NFSU2_TR(0x540571);
s4(0x89e7a0,u32(0xfa0ull));
}
B54057b:{NFSU2_TR(0x54057b);
__builtin_memmove(gp(0x89e7a4),(R+12),4);
}
B540581:{NFSU2_TR(0x540581);
__builtin_memmove(gp(0x89e7a8),(R+0),4);
}
B540586:{NFSU2_TR(0x540586);
__builtin_memmove(gp(0x89e7b0),(R+12),4);
}
B54058c:{NFSU2_TR(0x54058c);
__builtin_memmove(gp(0x89e7b4),(R+12),4);
}
B540592:{NFSU2_TR(0x540592);
__builtin_memmove(gp(0x89e7c4),(R+0),4);
}
B540597:{NFSU2_TR(0x540597);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54059e;}}
}
B540599:L540599:{c.instructions+=1;NFSU2_TR(0x540599);
__builtin_memmove(gp(0x83aa74),(R+0),4);
}
B54059e:L54059e:{c.instructions+=2;NFSU2_TR(0x54059e);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aa9c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+4))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5405a4:{NFSU2_TR(0x5405a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5405ab;}}
}
B5405a6:L5405a6:{c.instructions+=1;NFSU2_TR(0x5405a6);
__builtin_memmove(gp(0x83aa9c),(R+0),4);
}
B5405ab:L5405ab:{c.instructions+=5;NFSU2_TR(0x5405ab);
s4(0x89e7fc,u32(0x3f800000ull));
}
B5405b5:{NFSU2_TR(0x5405b5);
s4(0x89e800,u32(0x3f800000ull));
}
B5405bf:{NFSU2_TR(0x5405bf);
__builtin_memmove(gp(0x89e814),(R+12),4);
}
B5405c5:{NFSU2_TR(0x5405c5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5405c7:{NFSU2_TR(0x5405c7);
{goto L5405d0;}
}
B5405d0:L5405d0:{c.instructions+=6;NFSU2_TR(0x5405d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83a9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5405d7:{NFSU2_TR(0x5405d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e7e8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5405de:{NFSU2_TR(0x5405de);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B5405e4:{NFSU2_TR(0x5405e4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5405e5:{NFSU2_TR(0x5405e5);
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
B5405e7:{NFSU2_TR(0x5405e7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5405d0u);}goto L5405d0;}}
}
B5405e9:L5405e9:{c.instructions+=5;NFSU2_TR(0x5405e9);
__builtin_memmove((R+0),gp(0x83a9d8),4);
}
B5405ee:{NFSU2_TR(0x5405ee);
__builtin_memmove((R+28),gp(0x83aa6c),4);
}
B5405f4:{NFSU2_TR(0x5405f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5405f5:{NFSU2_TR(0x5405f5);
__builtin_memmove((R+24),(R+0),4);
}
B5405f7:{NFSU2_TR(0x5405f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5405fcull));
TAIL_STATIC(0x571ac0u,571);
}
B5405fc:L5405fc:{c.instructions+=6;NFSU2_TR(0x5405fc);
w4(R+0,u32(r1(R+0)));
}
B5405ff:{NFSU2_TR(0x5405ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540600:{NFSU2_TR(0x540600);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B540604:{NFSU2_TR(0x540604);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540606:{NFSU2_TR(0x540606);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540607:{NFSU2_TR(0x540607);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54060cull));
TAIL_STATIC(0x571fd0u,571);
}
B54060c:L54060c:{c.instructions+=4;NFSU2_TR(0x54060c);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B540610:{NFSU2_TR(0x540610);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540611:{NFSU2_TR(0x540611);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540612:{NFSU2_TR(0x540612);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540617ull));
TAIL_STATIC(0x571fb0u,571);
}
B540617:L540617:{c.instructions+=4;NFSU2_TR(0x540617);
__builtin_memmove((R+0),gp(0x83aa00),1);
}
B54061c:{NFSU2_TR(0x54061c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B54061f:{NFSU2_TR(0x54061f);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B540621:{NFSU2_TR(0x540621);
if(r1(R+518)){{goto L54062a;}}
}
B540623:L540623:{c.instructions+=2;NFSU2_TR(0x540623);
w4(R+24,u32(0x83a9e0ull));
}
B540628:{NFSU2_TR(0x540628);
{goto L540644;}
}
B54062a:L54062a:{c.instructions+=2;NFSU2_TR(0x54062a);
w4(R+8,u32(0xcf4f80c2ull));
}
B54062f:{NFSU2_TR(0x54062f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540634ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B540634:L540634:{c.instructions+=2;NFSU2_TR(0x540634);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B540636:{NFSU2_TR(0x540636);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L540642;}}
}
B540638:L540638:{c.instructions+=2;NFSU2_TR(0x540638);
w4(R+8,u32(0xc01a6f63ull));
}
B54063d:{NFSU2_TR(0x54063d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540642ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B540642:L540642:{c.instructions+=1;NFSU2_TR(0x540642);
__builtin_memmove((R+24),(R+0),4);
}
B540644:L540644:{c.instructions+=2;NFSU2_TR(0x540644);
u8 U[4];
w4(U+0,u32(u32(u32(0x990ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54064b:{NFSU2_TR(0x54064b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540650ull));
TAIL_STATIC(0x5ac6e0u,5ac);
}
B540650:L540650:{c.instructions+=7;NFSU2_TR(0x540650);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540651:{NFSU2_TR(0x540651);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540652:{NFSU2_TR(0x540652);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540653:{NFSU2_TR(0x540653);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540655:{NFSU2_TR(0x540655);
u8 U[4];
w4(U+0,u32(u32(u32(0x990ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54065c:{NFSU2_TR(0x54065c);
u8 U[8];
w4(U+0,u32(u32(u32(0x128cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540663:{NFSU2_TR(0x540663);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540668ull));
TAIL_STATIC(0x610270u,610);
}
B540668:L540668:{c.instructions+=6;NFSU2_TR(0x540668);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540669:{NFSU2_TR(0x540669);
u8 U[4];
w4(U+0,u32(u32(u32(0x984ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540670:{NFSU2_TR(0x540670);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540671:{NFSU2_TR(0x540671);
w4(R+4,u32(0x85ad40ull));
}
B540676:{NFSU2_TR(0x540676);
u8 U[8];
w4(U+0,u32(u32(u32(0x1284ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B540681:{NFSU2_TR(0x540681);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540686ull));
TAIL_STATIC(0x528600u,528);
}
B540686:L540686:{c.instructions+=9;NFSU2_TR(0x540686);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540687:{NFSU2_TR(0x540687);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540689:{NFSU2_TR(0x540689);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54068a:{NFSU2_TR(0x54068a);
u8 U[4];
w4(U+0,u32(u32(u32(0x98cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B540691:{NFSU2_TR(0x540691);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540692:{NFSU2_TR(0x540692);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540694:{NFSU2_TR(0x540694);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540695:{NFSU2_TR(0x540695);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540699:{NFSU2_TR(0x540699);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54069eull));
TAIL_STATIC(0x6373e0u,637);
}
B54069e:L54069e:{c.instructions+=3;NFSU2_TR(0x54069e);
u8 U[2];
__builtin_memmove((U+0),gp(0x863484),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5406a4:{NFSU2_TR(0x5406a4);
u8 U[5];
w4(U+0,u32(u32(u32(0x127cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5406ac:{NFSU2_TR(0x5406ac);
if(r1(R+518)){{goto L5406f3;}}
}
B5406ae:L5406ae:{c.instructions+=12;NFSU2_TR(0x5406ae);
{u32 ea_=u32(u32(8795280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5406b4:{NFSU2_TR(0x5406b4);
__builtin_memmove((R+0),gp(0x863498),4);
}
B5406b9:{NFSU2_TR(0x5406b9);
{u32 ea_=u32(u32(8795284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5406bf:{NFSU2_TR(0x5406bf);
__builtin_memmove((R+8),gp(0x8634a0),2);
}
B5406c6:{NFSU2_TR(0x5406c6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5406c8:{NFSU2_TR(0x5406c8);
__builtin_memmove((R+4),(R+0),4);
}
B5406ca:{NFSU2_TR(0x5406ca);
{u32 ea_=u32(r4(R+16)+u32(2400u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5406d1:{NFSU2_TR(0x5406d1);
u8 U[5];
w4(U+0,u32(u32(u32(0x95cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5406d9:{NFSU2_TR(0x5406d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5406dd:{NFSU2_TR(0x5406dd);
{u32 ea_=u32(r4(R+16)+u32(2404u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5406e4:{NFSU2_TR(0x5406e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x968ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5406eb:{NFSU2_TR(0x5406eb);
u8 U[6];
w4(U+0,u32(u32(u32(0x970ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5406f3:L5406f3:{c.instructions+=4;NFSU2_TR(0x5406f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5406f7:{NFSU2_TR(0x5406f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5406f8:{NFSU2_TR(0x5406f8);
w4(R+4,u32(0x89e7a0ull));
}
B5406fd:{NFSU2_TR(0x5406fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540702ull));
TAIL_STATIC(0x601600u,601);
}
B540702:L540702:{c.instructions+=3;NFSU2_TR(0x540702);
__builtin_memmove((R+4),gp(0x89e7c4),4);
}
B540708:{NFSU2_TR(0x540708);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540709:{NFSU2_TR(0x540709);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54070eull));
TAIL_STATIC(0x53f000u,53f);
}
B54070e:L54070e:{c.instructions+=2;NFSU2_TR(0x54070e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540710:{NFSU2_TR(0x540710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540715ull));
TAIL_STATIC(0x5264a0u,526);
}
B540715:L540715:{c.instructions+=2;NFSU2_TR(0x540715);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B540718:{NFSU2_TR(0x540718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54071dull));
TAIL_STATIC(0x4fe9f0u,4fe);
}
B54071d:L54071d:{c.instructions+=3;NFSU2_TR(0x54071d);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B540724:{NFSU2_TR(0x540724);
w4(R+4,u32(0x865480ull));
}
B540729:{NFSU2_TR(0x540729);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L540732;}}
}
B54072b:L54072b:{c.instructions+=1;NFSU2_TR(0x54072b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540730ull));
TAIL_STATIC(0x578320u,578);
}
B540730:L540730:{c.instructions+=1;NFSU2_TR(0x540730);
{goto L540737;}
}
B540732:L540732:{c.instructions+=1;NFSU2_TR(0x540732);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540737ull));
TAIL_STATIC(0x581020u,581);
}
B540737:L540737:{c.instructions+=3;NFSU2_TR(0x540737);
u8 U[4];
w4(U+0,u32(u32(u32(0x3d4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54073e:{NFSU2_TR(0x54073e);
u8 U[5];
w4(U+0,u32(u32(u32(0x127cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B540746:{NFSU2_TR(0x540746);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54074bull));
TAIL_STATIC(0x4022c0u,402);
}
B54074b:L54074b:{c.instructions+=3;NFSU2_TR(0x54074b);
u8 U[4];
w4(U+0,u32(u32(u32(0xd04ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540752:{NFSU2_TR(0x540752);
u8 U[8];
w4(U+0,u32(u32(u32(0x127cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B54075d:{NFSU2_TR(0x54075d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540762ull));
TAIL_STATIC(0x4022c0u,402);
}
B540762:L540762:{c.instructions+=8;NFSU2_TR(0x540762);
u8 U[8];
w4(U+0,u32(u32(u32(0x1274ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B540769:{NFSU2_TR(0x540769);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54076a:{NFSU2_TR(0x54076a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54076b:{NFSU2_TR(0x54076b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540772:{NFSU2_TR(0x540772);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B540773:{NFSU2_TR(0x540773);
__builtin_memmove((R+16),(R+20),4);
}
B540775:{NFSU2_TR(0x540775);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B540776:{NFSU2_TR(0x540776);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B540780:L540780:{c.instructions+=11;NFSU2_TR(0x540780);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540781:{NFSU2_TR(0x540781);
__builtin_memmove((R+20),(R+16),4);
}
B540783:{NFSU2_TR(0x540783);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B540786:{NFSU2_TR(0x540786);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540788:{NFSU2_TR(0x540788);
u8 U[4];
w4(U+0,u32(0x777351ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54078d:{NFSU2_TR(0x54078d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540793:{NFSU2_TR(0x540793);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540794:{NFSU2_TR(0x540794);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54079b:{NFSU2_TR(0x54079b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54079c:{NFSU2_TR(0x54079c);
w4(R+0,u32(0x1264ull));
}
B5407a1:{NFSU2_TR(0x5407a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5407a6ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B5407a6:L5407a6:{c.instructions+=23;NFSU2_TR(0x5407a6);
w4(R+4,u32(m1(0x83aa1c)));
}
B5407ad:{NFSU2_TR(0x5407ad);
__builtin_memmove((R+8),gp(0x83ac30),4);
}
B5407b3:{NFSU2_TR(0x5407b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5407b4:{NFSU2_TR(0x5407b4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5407b6:{NFSU2_TR(0x5407b6);
__builtin_memmove(gp(0x7f68b0),(R+4),4);
}
B5407bc:{NFSU2_TR(0x5407bc);
__builtin_memmove(gp(0x89e7f4),(R+8),4);
}
B5407c2:{NFSU2_TR(0x5407c2);
__builtin_memmove((R+8),gp(0x83aa74),4);
}
B5407c8:{NFSU2_TR(0x5407c8);
w4(R+4,u32(0x4ull));
}
B5407cd:{NFSU2_TR(0x5407cd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5407cf:{NFSU2_TR(0x5407cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5407d0:{NFSU2_TR(0x5407d0);
w4(R+0,u32(0x3ull));
}
B5407d5:{NFSU2_TR(0x5407d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5407d6:{NFSU2_TR(0x5407d6);
s4(0x89e7a0,u32(0xfa0ull));
}
B5407e0:{NFSU2_TR(0x5407e0);
__builtin_memmove(gp(0x89e7b0),(R+12),4);
}
B5407e6:{NFSU2_TR(0x5407e6);
__builtin_memmove(gp(0x89e7a4),(R+12),4);
}
B5407ec:{NFSU2_TR(0x5407ec);
__builtin_memmove(gp(0x89e7a8),(R+0),4);
}
B5407f1:{NFSU2_TR(0x5407f1);
__builtin_memmove(gp(0x89e7d8),(R+12),1);
}
B5407f7:{NFSU2_TR(0x5407f7);
__builtin_memmove(gp(0x89e7d9),(R+12),1);
}
B5407fd:{NFSU2_TR(0x5407fd);
__builtin_memmove(gp(0x89e7e2),(R+12),1);
}
B540803:{NFSU2_TR(0x540803);
__builtin_memmove(gp(0x89e7e3),(R+12),1);
}
B540809:{NFSU2_TR(0x540809);
__builtin_memmove(gp(0x89e7e1),(R+12),1);
}
B54080f:{NFSU2_TR(0x54080f);
__builtin_memmove(gp(0x89e7e0),(R+12),1);
}
B540815:{NFSU2_TR(0x540815);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54081c;}}
}
B540817:L540817:{c.instructions+=1;NFSU2_TR(0x540817);
__builtin_memmove(gp(0x83aa74),(R+0),4);
}
B54081c:L54081c:{c.instructions+=2;NFSU2_TR(0x54081c);
u8 U[14];
__builtin_memmove((U+6),gp(0x83aa9c),4);
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
B540822:{NFSU2_TR(0x540822);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L540829;}}
}
B540824:L540824:{c.instructions+=1;NFSU2_TR(0x540824);
__builtin_memmove(gp(0x83aa9c),(R+0),4);
}
B540829:L540829:{c.instructions+=6;NFSU2_TR(0x540829);
__builtin_memmove((R+28),gp(0x83aa6c),4);
}
B54082f:{NFSU2_TR(0x54082f);
__builtin_memmove(gp(0x89e7c4),(R+0),4);
}
B540834:{NFSU2_TR(0x540834);
__builtin_memmove((R+0),gp(0x83a9d8),4);
}
B540839:{NFSU2_TR(0x540839);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54083a:{NFSU2_TR(0x54083a);
__builtin_memmove((R+24),(R+0),4);
}
B54083c:{NFSU2_TR(0x54083c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540841ull));
TAIL_STATIC(0x571ac0u,571);
}
B540841:L540841:{c.instructions+=6;NFSU2_TR(0x540841);
w4(R+0,u32(r1(R+0)));
}
B540844:{NFSU2_TR(0x540844);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540845:{NFSU2_TR(0x540845);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B540849:{NFSU2_TR(0x540849);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54084b:{NFSU2_TR(0x54084b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54084c:{NFSU2_TR(0x54084c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540851ull));
TAIL_STATIC(0x571fd0u,571);
}
B540851:L540851:{c.instructions+=4;NFSU2_TR(0x540851);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B540855:{NFSU2_TR(0x540855);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540856:{NFSU2_TR(0x540856);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540857:{NFSU2_TR(0x540857);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54085cull));
TAIL_STATIC(0x571fb0u,571);
}
B54085c:L54085c:{c.instructions+=4;NFSU2_TR(0x54085c);
__builtin_memmove((R+0),gp(0x83aa00),1);
}
B540861:{NFSU2_TR(0x540861);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B540864:{NFSU2_TR(0x540864);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B540866:{NFSU2_TR(0x540866);
if(r1(R+518)){{goto L54086f;}}
}
B540868:L540868:{c.instructions+=2;NFSU2_TR(0x540868);
w4(R+24,u32(0x83a9e0ull));
}
B54086d:{NFSU2_TR(0x54086d);
{goto L540889;}
}
B54086f:L54086f:{c.instructions+=2;NFSU2_TR(0x54086f);
w4(R+8,u32(0xcf4f80c2ull));
}
B540874:{NFSU2_TR(0x540874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540879ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B540879:L540879:{c.instructions+=2;NFSU2_TR(0x540879);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54087b:{NFSU2_TR(0x54087b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L540887;}}
}
B54087d:L54087d:{c.instructions+=2;NFSU2_TR(0x54087d);
w4(R+8,u32(0xc01a6f63ull));
}
B540882:{NFSU2_TR(0x540882);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540887ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B540887:L540887:{c.instructions+=1;NFSU2_TR(0x540887);
__builtin_memmove((R+24),(R+0),4);
}
B540889:L540889:{c.instructions+=6;NFSU2_TR(0x540889);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B54088c:{NFSU2_TR(0x54088c);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540890:{NFSU2_TR(0x540890);
__builtin_memmove(gp(0x89e808),(R+28),4);
}
B540896:{NFSU2_TR(0x540896);
__builtin_memmove(gp(0x89e80c),(R+28),4);
}
B54089c:{NFSU2_TR(0x54089c);
__builtin_memmove(gp(0x89e814),(R+12),4);
}
B5408a2:{NFSU2_TR(0x5408a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5408a7ull));
TAIL_STATIC(0x5ac6e0u,5ac);
}
B5408a7:L5408a7:{c.instructions+=7;NFSU2_TR(0x5408a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5408a8:{NFSU2_TR(0x5408a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5408a9:{NFSU2_TR(0x5408a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5408aa:{NFSU2_TR(0x5408aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5408ab:{NFSU2_TR(0x5408ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5408af:{NFSU2_TR(0x5408af);
u8 U[8];
w4(U+0,u32(u32(u32(0x128cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5408b6:{NFSU2_TR(0x5408b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5408bbull));
TAIL_STATIC(0x610270u,610);
}
B5408bb:L5408bb:{c.instructions+=6;NFSU2_TR(0x5408bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5408bc:{NFSU2_TR(0x5408bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5408c0:{NFSU2_TR(0x5408c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5408c1:{NFSU2_TR(0x5408c1);
w4(R+4,u32(0x85ad40ull));
}
B5408c6:{NFSU2_TR(0x5408c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1284ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5408d1:{NFSU2_TR(0x5408d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5408d6ull));
TAIL_STATIC(0x528600u,528);
}
B5408d6:L5408d6:{c.instructions+=9;NFSU2_TR(0x5408d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5408d7:{NFSU2_TR(0x5408d7);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5408d9:{NFSU2_TR(0x5408d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5408da:{NFSU2_TR(0x5408da);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5408de:{NFSU2_TR(0x5408de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5408df:{NFSU2_TR(0x5408df);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5408e1:{NFSU2_TR(0x5408e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5408e2:{NFSU2_TR(0x5408e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x948ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5408e9:{NFSU2_TR(0x5408e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5408eeull));
TAIL_STATIC(0x6373e0u,637);
}
B5408ee:L5408ee:{c.instructions+=5;NFSU2_TR(0x5408ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x930ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5408f5:{NFSU2_TR(0x5408f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5408f6:{NFSU2_TR(0x5408f6);
w4(R+4,u32(0x89e7a0ull));
}
B5408fb:{NFSU2_TR(0x5408fb);
u8 U[5];
w4(U+0,u32(u32(u32(0x1280ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B540903:{NFSU2_TR(0x540903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540908ull));
TAIL_STATIC(0x601600u,601);
}
B540908:L540908:{c.instructions+=3;NFSU2_TR(0x540908);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540909:{NFSU2_TR(0x540909);
w4(R+4,u32(0x89e7a0ull));
}
B54090e:{NFSU2_TR(0x54090e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540913ull));
TAIL_STATIC(0x5ed960u,5ed);
}
B540913:L540913:{c.instructions+=2;NFSU2_TR(0x540913);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B540915:{NFSU2_TR(0x540915);
if(r1(R+518)){{goto L540960;}}
}
B540917:L540917:{c.instructions+=2;NFSU2_TR(0x540917);
u8 U[2];
__builtin_memmove((U+0),gp(0x863484),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B54091d:{NFSU2_TR(0x54091d);
if(r1(R+518)){{goto L540960;}}
}
B54091f:L54091f:{c.instructions+=12;NFSU2_TR(0x54091f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x91cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B540926:{NFSU2_TR(0x540926);
{u32 ea_=u32(u32(8795280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54092c:{NFSU2_TR(0x54092c);
{u32 ea_=u32(u32(8795284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540932:{NFSU2_TR(0x540932);
__builtin_memmove((R+8),gp(0x863498),4);
}
B540938:{NFSU2_TR(0x540938);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B54093a:{NFSU2_TR(0x54093a);
__builtin_memmove((R+4),(R+8),4);
}
B54093c:{NFSU2_TR(0x54093c);
{u32 ea_=u32(r4(R+0)+u32(2336u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B540942:{NFSU2_TR(0x540942);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x928ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540948:{NFSU2_TR(0x540948);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54094c:{NFSU2_TR(0x54094c);
{u32 ea_=u32(r4(R+0)+u32(2340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B540952:{NFSU2_TR(0x540952);
__builtin_memmove((R+8),gp(0x8634a0),2);
}
B540959:{NFSU2_TR(0x540959);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x930ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B540960:L540960:{c.instructions+=3;NFSU2_TR(0x540960);
__builtin_memmove((R+0),gp(0x89e7c4),4);
}
B540965:{NFSU2_TR(0x540965);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540966:{NFSU2_TR(0x540966);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54096bull));
TAIL_STATIC(0x53f000u,53f);
}
B54096b:L54096b:{c.instructions+=2;NFSU2_TR(0x54096b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54096d:{NFSU2_TR(0x54096d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540972ull));
TAIL_STATIC(0x5264a0u,526);
}
B540972:L540972:{c.instructions+=2;NFSU2_TR(0x540972);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B540975:{NFSU2_TR(0x540975);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54097aull));
TAIL_STATIC(0x4fe9f0u,4fe);
}
B54097a:L54097a:{c.instructions+=3;NFSU2_TR(0x54097a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcc4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540981:{NFSU2_TR(0x540981);
u8 U[5];
w4(U+0,u32(u32(u32(0x127cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B540989:{NFSU2_TR(0x540989);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54098eull));
TAIL_STATIC(0x4022c0u,402);
}
B54098e:L54098e:{c.instructions+=3;NFSU2_TR(0x54098e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3c4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540995:{NFSU2_TR(0x540995);
u8 U[8];
w4(U+0,u32(u32(u32(0x127cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54099c:{NFSU2_TR(0x54099c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5409a1ull));
TAIL_STATIC(0x4022c0u,402);
}
B5409a1:L5409a1:{c.instructions+=8;NFSU2_TR(0x5409a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1274ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5409a8:{NFSU2_TR(0x5409a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5409a9:{NFSU2_TR(0x5409a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5409aa:{NFSU2_TR(0x5409aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5409b1:{NFSU2_TR(0x5409b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5409b2:{NFSU2_TR(0x5409b2);
__builtin_memmove((R+16),(R+20),4);
}
B5409b4:{NFSU2_TR(0x5409b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5409b5:{NFSU2_TR(0x5409b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5409c0:L5409c0:{c.instructions+=6;NFSU2_TR(0x5409c0);
__builtin_memmove((R+0),gp(0x838974),4);
}
B5409c5:{NFSU2_TR(0x5409c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5409c8:{NFSU2_TR(0x5409c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5409c9:{NFSU2_TR(0x5409c9);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5409cb:{NFSU2_TR(0x5409cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5409cd:{NFSU2_TR(0x5409cd);
if(r1(R+518)){{goto L540a59;}}
}
B5409d3:L5409d3:{c.instructions+=4;NFSU2_TR(0x5409d3);
__builtin_memmove((R+0),gp(0x838964),4);
}
B5409d8:{NFSU2_TR(0x5409d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5409d9:{NFSU2_TR(0x5409d9);
w4(R+4,u32(0x8637b0ull));
}
B5409de:{NFSU2_TR(0x5409de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5409e3ull));
TAIL_STATIC(0x51bb70u,51b);
}
B5409e3:L5409e3:{c.instructions+=2;NFSU2_TR(0x5409e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5409e5:{NFSU2_TR(0x5409e5);
if(r1(R+518)){{goto L540a59;}}
}
B5409e7:L5409e7:{c.instructions+=3;NFSU2_TR(0x5409e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5409ea:{NFSU2_TR(0x5409ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5409ec:{NFSU2_TR(0x5409ec);
if(r1(R+518)){{goto L540a59;}}
}
B5409ee:L5409ee:{c.instructions+=6;NFSU2_TR(0x5409ee);
u8 U[8];
__builtin_memmove((U+0),gp(0x838968),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5409f5:{NFSU2_TR(0x5409f5);
w4(R+4,u32(0xda473d31ull));
}
B5409fa:{NFSU2_TR(0x5409fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0xda473d2full));
s4(u32(r4(U+0)),r4(U+4));
}
B540a02:{NFSU2_TR(0x540a02);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0xda473d30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B540a0a:{NFSU2_TR(0x540a0a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540a0e:{NFSU2_TR(0x540a0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L540a14;}}
}
B540a10:L540a10:{c.instructions+=1;NFSU2_TR(0x540a10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540a14:L540a14:{c.instructions+=6;NFSU2_TR(0x540a14);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B540a18:{NFSU2_TR(0x540a18);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B540a1c:{NFSU2_TR(0x540a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540a1f:{NFSU2_TR(0x540a1f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540a20:{NFSU2_TR(0x540a20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540a21:{NFSU2_TR(0x540a21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540a26ull));
TAIL_STATIC(0x537a10u,537);
}
B540a26:L540a26:{c.instructions+=4;NFSU2_TR(0x540a26);
__builtin_memmove((R+4),(R+0),4);
}
B540a28:{NFSU2_TR(0x540a28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B540a2b:{NFSU2_TR(0x540a2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B540a2d:{NFSU2_TR(0x540a2d);
if(r1(R+518)){{goto L540a59;}}
}
B540a2f:L540a2f:{c.instructions+=3;NFSU2_TR(0x540a2f);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B540a33:{NFSU2_TR(0x540a33);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B540a35:{NFSU2_TR(0x540a35);
if(r1(R+518)){{goto L540a48;}}
}
B540a37:L540a37:{c.instructions+=3;NFSU2_TR(0x540a37);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540a3b:{NFSU2_TR(0x540a3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540a3c:{NFSU2_TR(0x540a3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540a41ull));
TAIL_STATIC(0x52c2f0u,52c);
}
B540a41:L540a41:{c.instructions+=4;NFSU2_TR(0x540a41);
w1(R+0,u8(0x1ull));
}
B540a43:{NFSU2_TR(0x540a43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B540a44:{NFSU2_TR(0x540a44);
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
B540a47:{NFSU2_TR(0x540a47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B540a48:L540a48:{c.instructions+=3;NFSU2_TR(0x540a48);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540a4c:{NFSU2_TR(0x540a4c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540a4d:{NFSU2_TR(0x540a4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540a52ull));
TAIL_STATIC(0x535fe0u,535);
}
B540a52:L540a52:{c.instructions+=4;NFSU2_TR(0x540a52);
w1(R+0,u8(0x1ull));
}
B540a54:{NFSU2_TR(0x540a54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B540a55:{NFSU2_TR(0x540a55);
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
B540a58:{NFSU2_TR(0x540a58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B540a59:L540a59:{c.instructions+=4;NFSU2_TR(0x540a59);
__builtin_memmove((R+0),(R+12),1);
}
B540a5b:{NFSU2_TR(0x540a5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B540a5c:{NFSU2_TR(0x540a5c);
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
B540a5f:{NFSU2_TR(0x540a5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B540a60:L540a60:{c.instructions+=6;NFSU2_TR(0x540a60);
__builtin_memmove((R+0),gp(0x838974),4);
}
B540a65:{NFSU2_TR(0x540a65);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B540a69:{NFSU2_TR(0x540a69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540a6a:{NFSU2_TR(0x540a6a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540a6b:{NFSU2_TR(0x540a6b);
u8 U[4];
w4(U+0,u32(0x79bf80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540a70:{NFSU2_TR(0x540a70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540a75ull));
TAIL_STATIC(0x50d510u,50d);
}
B540a75:L540a75:{c.instructions+=4;NFSU2_TR(0x540a75);
__builtin_memmove((R+0),gp(0x838974),4);
}
B540a7a:{NFSU2_TR(0x540a7a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B540a7d:{NFSU2_TR(0x540a7d);
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
B540a7f:{NFSU2_TR(0x540a7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L540aae;}}
}
B540a81:L540a81:{c.instructions+=2;NFSU2_TR(0x540a81);
u8 U[4];
w4(U+0,u32(0x79bf60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540a86:{NFSU2_TR(0x540a86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540a8bull));
TAIL_STATIC(0x50d510u,50d);
}
B540a8b:L540a8b:{c.instructions+=4;NFSU2_TR(0x540a8b);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B540a91:{NFSU2_TR(0x540a91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B540a94:{NFSU2_TR(0x540a94);
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
B540a96:{NFSU2_TR(0x540a96);
if(r1(R+518)){{goto L540aa4;}}
}
B540a98:L540a98:{c.instructions+=3;NFSU2_TR(0x540a98);
__builtin_memmove((R+8),gp(0x838964),4);
}
B540a9e:{NFSU2_TR(0x540a9e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540a9f:{NFSU2_TR(0x540a9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540aa4ull));
TAIL_STATIC(0x5376f0u,537);
}
B540aa4:L540aa4:{c.instructions+=1;NFSU2_TR(0x540aa4);
s4(0x838974,u32(0x0ull));
}
B540aae:L540aae:{c.instructions+=1;NFSU2_TR(0x540aae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B540ab0:L540ab0:{c.instructions+=5;NFSU2_TR(0x540ab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x304ull))));
}
B540ab6:{NFSU2_TR(0x540ab6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540ab7:{NFSU2_TR(0x540ab7);
__builtin_memmove((R+12),(R+4),4);
}
B540ab9:{NFSU2_TR(0x540ab9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B540abc:{NFSU2_TR(0x540abc);
if(r1(R+518)){{goto L540bd8;}}
}
B540ac2:L540ac2:{c.instructions+=2;NFSU2_TR(0x540ac2);
u8 U[8];
__builtin_memmove((U+0),gp(0x83a9b4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B540ac9:{NFSU2_TR(0x540ac9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L540af8;}}
}
B540acb:L540acb:{c.instructions+=2;NFSU2_TR(0x540acb);
u8 U[4];
w4(U+0,u32(0x83a8b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540ad0:{NFSU2_TR(0x540ad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540ad5ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B540ad5:L540ad5:{c.instructions+=4;NFSU2_TR(0x540ad5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B540ad8:{NFSU2_TR(0x540ad8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B540ada:{NFSU2_TR(0x540ada);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B540adc:{NFSU2_TR(0x540adc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L540af1;}}
}
B540ade:L540ade:{c.instructions+=1;NFSU2_TR(0x540ade);
w1(R+8,u8(0x2aull));
}
B540ae0:L540ae0:{c.instructions+=2;NFSU2_TR(0x540ae0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B540ae6:{NFSU2_TR(0x540ae6);
if(r1(R+518)){{goto L540af1;}}
}
B540ae8:L540ae8:{c.instructions+=4;NFSU2_TR(0x540ae8);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B540aec:{NFSU2_TR(0x540aec);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B540aed:{NFSU2_TR(0x540aed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B540aef:{NFSU2_TR(0x540aef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x540ae0u);}goto L540ae0;}}
}
B540af1:L540af1:{c.instructions+=2;NFSU2_TR(0x540af1);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B540af6:{NFSU2_TR(0x540af6);
{goto L540b0f;}
}
B540af8:L540af8:{c.instructions+=5;NFSU2_TR(0x540af8);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540afd:{NFSU2_TR(0x540afd);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B540b01:{NFSU2_TR(0x540b01);
u8 U[4];
w4(U+0,u32(0x83a8b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540b06:{NFSU2_TR(0x540b06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540b07:{NFSU2_TR(0x540b07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540b0cull));
TAIL_STATIC(0x43dc00u,43d);
}
B540b0c:L540b0c:{c.instructions+=1;NFSU2_TR(0x540b0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B540b0f:L540b0f:{c.instructions+=3;NFSU2_TR(0x540b0f);
u8 U[5];
w4(U+0,u32(u32(u32(0x30cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B540b16:{NFSU2_TR(0x540b16);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B540b18:{NFSU2_TR(0x540b18);
if(r1(R+518)){{goto L540b59;}}
}
B540b1a:L540b1a:{c.instructions+=6;NFSU2_TR(0x540b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B540b1d:{NFSU2_TR(0x540b1d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B540b1e:{NFSU2_TR(0x540b1e);
__builtin_memmove((R+0),(R+4),4);
}
B540b20:{NFSU2_TR(0x540b20);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5aull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5aull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B540b23:{NFSU2_TR(0x540b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540b26:{NFSU2_TR(0x540b26);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L540b2f;}}
}
B540b28:L540b28:{c.instructions+=1;NFSU2_TR(0x540b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B540b2f:L540b2f:{c.instructions+=3;NFSU2_TR(0x540b2f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2dull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2dull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B540b33:{NFSU2_TR(0x540b33);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540b37:{NFSU2_TR(0x540b37);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L540b46;}}
}
B540b39:L540b39:{c.instructions+=5;NFSU2_TR(0x540b39);
u8 U[4];
w4(U+0,u32(0x79bfbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540b3e:{NFSU2_TR(0x540b3e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540b3f:{NFSU2_TR(0x540b3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B540b43:{NFSU2_TR(0x540b43);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540b44:{NFSU2_TR(0x540b44);
{goto L540b51;}
}
B540b46:L540b46:{c.instructions+=4;NFSU2_TR(0x540b46);
u8 U[4];
w4(U+0,u32(0x7909a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540b4b:{NFSU2_TR(0x540b4b);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B540b4f:{NFSU2_TR(0x540b4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540b50:{NFSU2_TR(0x540b50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540b51:L540b51:{c.instructions+=1;NFSU2_TR(0x540b51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540b56ull));
TAIL_STATIC(0x43dda0u,43d);
}
B540b56:L540b56:{c.instructions+=1;NFSU2_TR(0x540b56);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B540b59:L540b59:{c.instructions+=8;NFSU2_TR(0x540b59);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540b5a:{NFSU2_TR(0x540b5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540b5b:{NFSU2_TR(0x540b5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540b5c:{NFSU2_TR(0x540b5c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B540b60:{NFSU2_TR(0x540b60);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540b61:{NFSU2_TR(0x540b61);
u8 U[4];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B540b68:{NFSU2_TR(0x540b68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540b69:{NFSU2_TR(0x540b69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540b6eull));
TAIL_STATIC(0x43e000u,43e);
}
B540b6e:L540b6e:{c.instructions+=4;NFSU2_TR(0x540b6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B540b70:{NFSU2_TR(0x540b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B540b73:{NFSU2_TR(0x540b73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540b74:{NFSU2_TR(0x540b74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540b79ull));
TAIL_STATIC(0x51bd70u,51b);
}
B540b79:L540b79:{c.instructions+=8;NFSU2_TR(0x540b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540b7c:{NFSU2_TR(0x540b7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B540b7f:{NFSU2_TR(0x540b7f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B540b82:{NFSU2_TR(0x540b82);
u8 U[10];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B540b8b:{NFSU2_TR(0x540b8b);
__builtin_memmove((R+28),(R+0),4);
}
B540b8d:{NFSU2_TR(0x540b8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540b91:{NFSU2_TR(0x540b91);
u8 U[4];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B540b98:{NFSU2_TR(0x540b98);
if(r1(R+518)){{goto L540bc3;}}
}
B540b9a:L540b9a:{c.instructions+=2;NFSU2_TR(0x540b9a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B540b9e:{NFSU2_TR(0x540b9e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B540ba2:L540ba2:{c.instructions+=6;NFSU2_TR(0x540ba2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540ba4:{NFSU2_TR(0x540ba4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540ba6:{NFSU2_TR(0x540ba6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540ba7:{NFSU2_TR(0x540ba7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540ba8:{NFSU2_TR(0x540ba8);
__builtin_memmove((R+4),(R+28),4);
}
B540baa:{NFSU2_TR(0x540baa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540bafull));
TAIL_STATIC(0x50bce0u,50b);
}
B540baf:L540baf:{c.instructions+=4;NFSU2_TR(0x540baf);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B540bb3:{NFSU2_TR(0x540bb3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B540bb5:{NFSU2_TR(0x540bb5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B540bb8:{NFSU2_TR(0x540bb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L540bc3;}}
}
B540bba:L540bba:{c.instructions+=3;NFSU2_TR(0x540bba);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B540bbd:{NFSU2_TR(0x540bbd);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B540bc1:{NFSU2_TR(0x540bc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x540ba2u);}goto L540ba2;}}
}
B540bc3:L540bc3:{c.instructions+=3;NFSU2_TR(0x540bc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B540bc5:{NFSU2_TR(0x540bc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B540bc7:{NFSU2_TR(0x540bc7);
if(r1(R+518)){{goto L540bd5;}}
}
B540bc9:L540bc9:{c.instructions+=3;NFSU2_TR(0x540bc9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540bca:{NFSU2_TR(0x540bca);
__builtin_memmove((R+4),(R+28),4);
}
B540bcc:{NFSU2_TR(0x540bcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540bd1ull));
TAIL_STATIC(0x535f40u,535);
}
B540bd1:L540bd1:{c.instructions+=1;NFSU2_TR(0x540bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B540bd5:L540bd5:{c.instructions+=3;NFSU2_TR(0x540bd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B540bd6:{NFSU2_TR(0x540bd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B540bd7:{NFSU2_TR(0x540bd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B540bd8:L540bd8:{c.instructions+=3;NFSU2_TR(0x540bd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B540bd9:{NFSU2_TR(0x540bd9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x304ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x304ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x304ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B540bdf:{NFSU2_TR(0x540bdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B540bf0:L540bf0:{c.instructions+=2;NFSU2_TR(0x540bf0);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc98356baull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B540bf8:{NFSU2_TR(0x540bf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L540c07;}}
}
B540bfa:L540bfa:{c.instructions+=2;NFSU2_TR(0x540bfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B540c02:{NFSU2_TR(0x540c02);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x540ab0u);}goto L540ab0;}
}
B540c07:L540c07:{c.instructions+=1;NFSU2_TR(0x540c07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B540c10:L540c10:{c.instructions+=8;NFSU2_TR(0x540c10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540c11:{NFSU2_TR(0x540c11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540c12:{NFSU2_TR(0x540c12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540c13:{NFSU2_TR(0x540c13);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B540c17:{NFSU2_TR(0x540c17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B540c19:{NFSU2_TR(0x540c19);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B540c1b:{NFSU2_TR(0x540c1b);
__builtin_memmove((R+24),(R+4),4);
}
B540c1d:{NFSU2_TR(0x540c1d);
if(r1(R+518)){{goto L540c22;}}
}
B540c1f:L540c1f:{c.instructions+=1;NFSU2_TR(0x540c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540c22:L540c22:{c.instructions+=3;NFSU2_TR(0x540c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540c25:{NFSU2_TR(0x540c25);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B540c27:{NFSU2_TR(0x540c27);
if(r1(R+518)){{goto L540c3f;}}
}
B540c29:L540c29:{c.instructions+=2;NFSU2_TR(0x540c29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540c2a:{NFSU2_TR(0x540c2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540c2full));
TAIL_STATIC(0x505450u,505);
}
B540c2f:L540c2f:{c.instructions+=4;NFSU2_TR(0x540c2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540c30:{NFSU2_TR(0x540c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540c33:{NFSU2_TR(0x540c33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540c34:{NFSU2_TR(0x540c34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540c39ull));
TAIL_STATIC(0x537a60u,537);
}
B540c39:L540c39:{c.instructions+=2;NFSU2_TR(0x540c39);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B540c3c:{NFSU2_TR(0x540c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540c3f:L540c3f:{c.instructions+=3;NFSU2_TR(0x540c3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540c42:{NFSU2_TR(0x540c42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B540c44:{NFSU2_TR(0x540c44);
if(r1(R+518)){{goto L540c5c;}}
}
B540c46:L540c46:{c.instructions+=2;NFSU2_TR(0x540c46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540c47:{NFSU2_TR(0x540c47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540c4cull));
TAIL_STATIC(0x505450u,505);
}
B540c4c:L540c4c:{c.instructions+=4;NFSU2_TR(0x540c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B540c4f:{NFSU2_TR(0x540c4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540c50:{NFSU2_TR(0x540c50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540c51:{NFSU2_TR(0x540c51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540c56ull));
TAIL_STATIC(0x537a60u,537);
}
B540c56:L540c56:{c.instructions+=2;NFSU2_TR(0x540c56);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B540c59:{NFSU2_TR(0x540c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540c5c:L540c5c:{c.instructions+=3;NFSU2_TR(0x540c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540c5f:{NFSU2_TR(0x540c5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B540c61:{NFSU2_TR(0x540c61);
if(r1(R+518)){{goto L540c79;}}
}
B540c63:L540c63:{c.instructions+=2;NFSU2_TR(0x540c63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540c64:{NFSU2_TR(0x540c64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540c69ull));
TAIL_STATIC(0x505450u,505);
}
B540c69:L540c69:{c.instructions+=4;NFSU2_TR(0x540c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540c6c:{NFSU2_TR(0x540c6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540c6d:{NFSU2_TR(0x540c6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540c6e:{NFSU2_TR(0x540c6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540c73ull));
TAIL_STATIC(0x537a10u,537);
}
B540c73:L540c73:{c.instructions+=2;NFSU2_TR(0x540c73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B540c76:{NFSU2_TR(0x540c76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540c79:L540c79:{c.instructions+=3;NFSU2_TR(0x540c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540c7c:{NFSU2_TR(0x540c7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B540c7e:{NFSU2_TR(0x540c7e);
if(r1(R+518)){{goto L540c96;}}
}
B540c80:L540c80:{c.instructions+=2;NFSU2_TR(0x540c80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540c81:{NFSU2_TR(0x540c81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540c86ull));
TAIL_STATIC(0x505450u,505);
}
B540c86:L540c86:{c.instructions+=4;NFSU2_TR(0x540c86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540c87:{NFSU2_TR(0x540c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540c8a:{NFSU2_TR(0x540c8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540c8b:{NFSU2_TR(0x540c8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540c90ull));
TAIL_STATIC(0x537a60u,537);
}
B540c90:L540c90:{c.instructions+=2;NFSU2_TR(0x540c90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B540c93:{NFSU2_TR(0x540c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540c96:L540c96:{c.instructions+=3;NFSU2_TR(0x540c96);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540c99:{NFSU2_TR(0x540c99);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B540c9b:{NFSU2_TR(0x540c9b);
if(r1(R+518)){{goto L540cb3;}}
}
B540c9d:L540c9d:{c.instructions+=2;NFSU2_TR(0x540c9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540c9e:{NFSU2_TR(0x540c9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540ca3ull));
TAIL_STATIC(0x505450u,505);
}
B540ca3:L540ca3:{c.instructions+=4;NFSU2_TR(0x540ca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B540ca6:{NFSU2_TR(0x540ca6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540ca7:{NFSU2_TR(0x540ca7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540ca8:{NFSU2_TR(0x540ca8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540cadull));
TAIL_STATIC(0x537a60u,537);
}
B540cad:L540cad:{c.instructions+=2;NFSU2_TR(0x540cad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B540cb0:{NFSU2_TR(0x540cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540cb3:L540cb3:{c.instructions+=3;NFSU2_TR(0x540cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540cb6:{NFSU2_TR(0x540cb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B540cb8:{NFSU2_TR(0x540cb8);
if(r1(R+518)){{goto L540cd0;}}
}
B540cba:L540cba:{c.instructions+=2;NFSU2_TR(0x540cba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540cbb:{NFSU2_TR(0x540cbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540cc0ull));
TAIL_STATIC(0x505450u,505);
}
B540cc0:L540cc0:{c.instructions+=4;NFSU2_TR(0x540cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540cc3:{NFSU2_TR(0x540cc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540cc4:{NFSU2_TR(0x540cc4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540cc5:{NFSU2_TR(0x540cc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540ccaull));
TAIL_STATIC(0x537a60u,537);
}
B540cca:L540cca:{c.instructions+=2;NFSU2_TR(0x540cca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B540ccd:{NFSU2_TR(0x540ccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540cd0:L540cd0:{c.instructions+=18;NFSU2_TR(0x540cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540cd3:{NFSU2_TR(0x540cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540cd6:{NFSU2_TR(0x540cd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B540cd9:{NFSU2_TR(0x540cd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540cdc:{NFSU2_TR(0x540cdc);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540cdf:{NFSU2_TR(0x540cdf);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B540ce2:{NFSU2_TR(0x540ce2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540ce6:{NFSU2_TR(0x540ce6);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B540ce9:{NFSU2_TR(0x540ce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540cec:{NFSU2_TR(0x540cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540cef:{NFSU2_TR(0x540cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540cf2:{NFSU2_TR(0x540cf2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540cf3:{NFSU2_TR(0x540cf3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B540cf7:{NFSU2_TR(0x540cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540cfa:{NFSU2_TR(0x540cfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540cfd:{NFSU2_TR(0x540cfd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540cfe:{NFSU2_TR(0x540cfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540cff:{NFSU2_TR(0x540cff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540d04ull));
TAIL_STATIC(0x51d730u,51d);
}
B540d04:L540d04:{c.instructions+=11;NFSU2_TR(0x540d04);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540d07:{NFSU2_TR(0x540d07);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B540d0b:{NFSU2_TR(0x540d0b);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B540d0d:{NFSU2_TR(0x540d0d);
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
B540d10:{NFSU2_TR(0x540d10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B540d11:{NFSU2_TR(0x540d11);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B540d15:{NFSU2_TR(0x540d15);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B540d18:{NFSU2_TR(0x540d18);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B540d1b:{NFSU2_TR(0x540d1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B540d1c:{NFSU2_TR(0x540d1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B540d1d:{NFSU2_TR(0x540d1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B540d20:L540d20:{c.instructions+=11;NFSU2_TR(0x540d20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B540d23:{NFSU2_TR(0x540d23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540d24:{NFSU2_TR(0x540d24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540d25:{NFSU2_TR(0x540d25);
__builtin_memmove((R+24),(R+4),4);
}
B540d27:{NFSU2_TR(0x540d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540d2a:{NFSU2_TR(0x540d2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B540d2e:{NFSU2_TR(0x540d2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540d2f:{NFSU2_TR(0x540d2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540d33:{NFSU2_TR(0x540d33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540d34:{NFSU2_TR(0x540d34);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540d35:{NFSU2_TR(0x540d35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540d3aull));
TAIL_STATIC(0x51d730u,51d);
}
B540d3a:L540d3a:{c.instructions+=7;NFSU2_TR(0x540d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540d3d:{NFSU2_TR(0x540d3d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B540d41:{NFSU2_TR(0x540d41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540d42:{NFSU2_TR(0x540d42);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540d46:{NFSU2_TR(0x540d46);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540d47:{NFSU2_TR(0x540d47);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540d48:{NFSU2_TR(0x540d48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540d4dull));
TAIL_STATIC(0x51d070u,51d);
}
B540d4d:L540d4d:{c.instructions+=4;NFSU2_TR(0x540d4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B540d50:{NFSU2_TR(0x540d50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B540d53:{NFSU2_TR(0x540d53);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B540d55:{NFSU2_TR(0x540d55);
if(r1(R+518)){{goto L540d67;}}
}
B540d57:L540d57:{c.instructions+=4;NFSU2_TR(0x540d57);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540d5b:{NFSU2_TR(0x540d5b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540d5f:{NFSU2_TR(0x540d5f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B540d63:{NFSU2_TR(0x540d63);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540d67:L540d67:{c.instructions+=20;NFSU2_TR(0x540d67);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540d6a:{NFSU2_TR(0x540d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540d6d:{NFSU2_TR(0x540d6d);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B540d70:{NFSU2_TR(0x540d70);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540d74:{NFSU2_TR(0x540d74);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540d77:{NFSU2_TR(0x540d77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540d78:{NFSU2_TR(0x540d78);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B540d7b:{NFSU2_TR(0x540d7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B540d7f:{NFSU2_TR(0x540d7f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540d80:{NFSU2_TR(0x540d80);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B540d82:{NFSU2_TR(0x540d82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540d83:{NFSU2_TR(0x540d83);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B540d87:{NFSU2_TR(0x540d87);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B540d8a:{NFSU2_TR(0x540d8a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540d8e:{NFSU2_TR(0x540d8e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B540d94:{NFSU2_TR(0x540d94);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B540d96:{NFSU2_TR(0x540d96);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B540d99:{NFSU2_TR(0x540d99);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B540d9d:{NFSU2_TR(0x540d9d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B540da1:{NFSU2_TR(0x540da1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540da6ull));
TAIL_STATIC(0x51d730u,51d);
}
B540da6:L540da6:{c.instructions+=16;NFSU2_TR(0x540da6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540daa:{NFSU2_TR(0x540daa);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B540dae:{NFSU2_TR(0x540dae);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B540db4:{NFSU2_TR(0x540db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540db7:{NFSU2_TR(0x540db7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B540dba:{NFSU2_TR(0x540dba);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B540dbe:{NFSU2_TR(0x540dbe);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540dc2:{NFSU2_TR(0x540dc2);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B540dc8:{NFSU2_TR(0x540dc8);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B540dca:{NFSU2_TR(0x540dca);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B540dd0:{NFSU2_TR(0x540dd0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B540dd4:{NFSU2_TR(0x540dd4);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B540dda:{NFSU2_TR(0x540dda);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B540ddd:{NFSU2_TR(0x540ddd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540dde:{NFSU2_TR(0x540dde);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540ddf:{NFSU2_TR(0x540ddf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540de4ull));
TAIL_STATIC(0x51d380u,51d);
}
B540de4:L540de4:{c.instructions+=7;NFSU2_TR(0x540de4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540de7:{NFSU2_TR(0x540de7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B540deb:{NFSU2_TR(0x540deb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540dec:{NFSU2_TR(0x540dec);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540df0:{NFSU2_TR(0x540df0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540df1:{NFSU2_TR(0x540df1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540df2:{NFSU2_TR(0x540df2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540df7ull));
TAIL_STATIC(0x51d730u,51d);
}
B540df7:L540df7:{c.instructions+=7;NFSU2_TR(0x540df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540dfa:{NFSU2_TR(0x540dfa);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B540dfe:{NFSU2_TR(0x540dfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540dff:{NFSU2_TR(0x540dff);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540e03:{NFSU2_TR(0x540e03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540e04:{NFSU2_TR(0x540e04);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540e05:{NFSU2_TR(0x540e05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540e0aull));
TAIL_STATIC(0x51d730u,51d);
}
B540e0a:L540e0a:{c.instructions+=7;NFSU2_TR(0x540e0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540e0d:{NFSU2_TR(0x540e0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B540e11:{NFSU2_TR(0x540e11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540e12:{NFSU2_TR(0x540e12);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540e16:{NFSU2_TR(0x540e16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540e17:{NFSU2_TR(0x540e17);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540e18:{NFSU2_TR(0x540e18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540e1dull));
TAIL_STATIC(0x51d620u,51d);
}
B540e1d:L540e1d:{c.instructions+=7;NFSU2_TR(0x540e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540e20:{NFSU2_TR(0x540e20);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B540e24:{NFSU2_TR(0x540e24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540e25:{NFSU2_TR(0x540e25);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540e29:{NFSU2_TR(0x540e29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540e2a:{NFSU2_TR(0x540e2a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540e2b:{NFSU2_TR(0x540e2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540e30ull));
TAIL_STATIC(0x51d730u,51d);
}
B540e30:L540e30:{c.instructions+=7;NFSU2_TR(0x540e30);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540e34:{NFSU2_TR(0x540e34);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B540e37:{NFSU2_TR(0x540e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540e3a:{NFSU2_TR(0x540e3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B540e3d:{NFSU2_TR(0x540e3d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B540e40:{NFSU2_TR(0x540e40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540e41:{NFSU2_TR(0x540e41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540e46ull));
TAIL_STATIC(0x495590u,495);
}
B540e46:L540e46:{c.instructions+=10;NFSU2_TR(0x540e46);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B540e4a:{NFSU2_TR(0x540e4a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B540e4d:{NFSU2_TR(0x540e4d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540e4e:{NFSU2_TR(0x540e4e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540e52:{NFSU2_TR(0x540e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540e55:{NFSU2_TR(0x540e55);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B540e58:{NFSU2_TR(0x540e58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540e59:{NFSU2_TR(0x540e59);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B540e5c:{NFSU2_TR(0x540e5c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540e5d:{NFSU2_TR(0x540e5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540e62ull));
TAIL_STATIC(0x51d380u,51d);
}
B540e62:L540e62:{c.instructions+=4;NFSU2_TR(0x540e62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B540e65:{NFSU2_TR(0x540e65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B540e68:{NFSU2_TR(0x540e68);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B540e6a:{NFSU2_TR(0x540e6a);
if(r1(R+518)){{goto L540e83;}}
}
B540e6c:L540e6c:{c.instructions+=2;NFSU2_TR(0x540e6c);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540e6f:{NFSU2_TR(0x540e6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540e74ull));
TAIL_STATIC(0x75bed4u,75b);
}
B540e74:L540e74:{c.instructions+=4;NFSU2_TR(0x540e74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540e75:{NFSU2_TR(0x540e75);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540e7a:{NFSU2_TR(0x540e7a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540e7b:{NFSU2_TR(0x540e7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540e80ull));
TAIL_STATIC(0x537be0u,537);
}
B540e80:L540e80:{c.instructions+=1;NFSU2_TR(0x540e80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B540e83:L540e83:{c.instructions+=4;NFSU2_TR(0x540e83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B540e84:{NFSU2_TR(0x540e84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B540e85:{NFSU2_TR(0x540e85);
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
B540e88:{NFSU2_TR(0x540e88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B540e90:L540e90:{c.instructions+=11;NFSU2_TR(0x540e90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B540e93:{NFSU2_TR(0x540e93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540e94:{NFSU2_TR(0x540e94);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540e95:{NFSU2_TR(0x540e95);
__builtin_memmove((R+24),(R+4),4);
}
B540e97:{NFSU2_TR(0x540e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540e9a:{NFSU2_TR(0x540e9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B540e9e:{NFSU2_TR(0x540e9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540e9f:{NFSU2_TR(0x540e9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540ea3:{NFSU2_TR(0x540ea3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540ea4:{NFSU2_TR(0x540ea4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540ea5:{NFSU2_TR(0x540ea5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540eaaull));
TAIL_STATIC(0x51d730u,51d);
}
B540eaa:L540eaa:{c.instructions+=7;NFSU2_TR(0x540eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540ead:{NFSU2_TR(0x540ead);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B540eb1:{NFSU2_TR(0x540eb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540eb2:{NFSU2_TR(0x540eb2);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540eb6:{NFSU2_TR(0x540eb6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540eb7:{NFSU2_TR(0x540eb7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540eb8:{NFSU2_TR(0x540eb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540ebdull));
TAIL_STATIC(0x51d730u,51d);
}
B540ebd:L540ebd:{c.instructions+=7;NFSU2_TR(0x540ebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540ec0:{NFSU2_TR(0x540ec0);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B540ec4:{NFSU2_TR(0x540ec4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540ec5:{NFSU2_TR(0x540ec5);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B540ec9:{NFSU2_TR(0x540ec9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540eca:{NFSU2_TR(0x540eca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540ecb:{NFSU2_TR(0x540ecb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540ed0ull));
TAIL_STATIC(0x51d620u,51d);
}
B540ed0:L540ed0:{c.instructions+=26;NFSU2_TR(0x540ed0);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540ed4:{NFSU2_TR(0x540ed4);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B540eda:{NFSU2_TR(0x540eda);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B540edd:{NFSU2_TR(0x540edd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B540ee1:{NFSU2_TR(0x540ee1);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540ee4:{NFSU2_TR(0x540ee4);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B540eea:{NFSU2_TR(0x540eea);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B540eee:{NFSU2_TR(0x540eee);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B540ef2:{NFSU2_TR(0x540ef2);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540ef5:{NFSU2_TR(0x540ef5);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B540ef8:{NFSU2_TR(0x540ef8);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540efb:{NFSU2_TR(0x540efb);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B540efe:{NFSU2_TR(0x540efe);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B540f00:{NFSU2_TR(0x540f00);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B540f04:{NFSU2_TR(0x540f04);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540f08:{NFSU2_TR(0x540f08);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B540f0e:{NFSU2_TR(0x540f0e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B540f12:{NFSU2_TR(0x540f12);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540f16:{NFSU2_TR(0x540f16);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B540f1c:{NFSU2_TR(0x540f1c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540f20:{NFSU2_TR(0x540f20);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B540f23:{NFSU2_TR(0x540f23);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B540f25:{NFSU2_TR(0x540f25);
{u32 ea_=u32(u32(7907292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B540f2b:{NFSU2_TR(0x540f2b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B540f2e:{NFSU2_TR(0x540f2e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B540f32:{NFSU2_TR(0x540f32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L540f3a;}}
}
B540f34:L540f34:{c.instructions+=1;NFSU2_TR(0x540f34);
{u32 ea_=u32(u32(7897632u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B540f3a:L540f3a:{c.instructions+=8;NFSU2_TR(0x540f3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B540f3e:{NFSU2_TR(0x540f3e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B540f42:{NFSU2_TR(0x540f42);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540f46:{NFSU2_TR(0x540f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540f49:{NFSU2_TR(0x540f49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540f4a:{NFSU2_TR(0x540f4a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540f4b:{NFSU2_TR(0x540f4b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540f4c:{NFSU2_TR(0x540f4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540f51ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B540f51:L540f51:{c.instructions+=7;NFSU2_TR(0x540f51);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540f55:{NFSU2_TR(0x540f55);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B540f58:{NFSU2_TR(0x540f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540f5b:{NFSU2_TR(0x540f5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540f5c:{NFSU2_TR(0x540f5c);
{u32 ea_=u32(u32(7907292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B540f62:{NFSU2_TR(0x540f62);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B540f66:{NFSU2_TR(0x540f66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540f6bull));
TAIL_STATIC(0x50ca00u,50c);
}
B540f6b:L540f6b:{c.instructions+=3;NFSU2_TR(0x540f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B540f6e:{NFSU2_TR(0x540f6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540f6f:{NFSU2_TR(0x540f6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540f74ull));
TAIL_STATIC(0x50ca00u,50c);
}
B540f74:L540f74:{c.instructions+=5;NFSU2_TR(0x540f74);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540f78:{NFSU2_TR(0x540f78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B540f7b:{NFSU2_TR(0x540f7b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540f7c:{NFSU2_TR(0x540f7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540f7d:{NFSU2_TR(0x540f7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540f82ull));
TAIL_STATIC(0x495590u,495);
}
B540f82:L540f82:{c.instructions+=11;NFSU2_TR(0x540f82);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540f86:{NFSU2_TR(0x540f86);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B540f8c:{NFSU2_TR(0x540f8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B540f90:{NFSU2_TR(0x540f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B540f93:{NFSU2_TR(0x540f93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B540f96:{NFSU2_TR(0x540f96);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B540f9a:{NFSU2_TR(0x540f9a);
{u32 ea_=u32(u32(7897632u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B540fa0:{NFSU2_TR(0x540fa0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B540fa3:{NFSU2_TR(0x540fa3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540fa4:{NFSU2_TR(0x540fa4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540fa5:{NFSU2_TR(0x540fa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540faaull));
TAIL_STATIC(0x51d4d0u,51d);
}
B540faa:L540faa:{c.instructions+=4;NFSU2_TR(0x540faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B540fad:{NFSU2_TR(0x540fad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B540fb0:{NFSU2_TR(0x540fb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B540fb2:{NFSU2_TR(0x540fb2);
if(r1(R+518)){{goto L540fcb;}}
}
B540fb4:L540fb4:{c.instructions+=2;NFSU2_TR(0x540fb4);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B540fb7:{NFSU2_TR(0x540fb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540fbcull));
TAIL_STATIC(0x75bed4u,75b);
}
B540fbc:L540fbc:{c.instructions+=4;NFSU2_TR(0x540fbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540fbd:{NFSU2_TR(0x540fbd);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540fc2:{NFSU2_TR(0x540fc2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540fc3:{NFSU2_TR(0x540fc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x540fc8ull));
TAIL_STATIC(0x537be0u,537);
}
B540fc8:L540fc8:{c.instructions+=1;NFSU2_TR(0x540fc8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B540fcb:L540fcb:{c.instructions+=4;NFSU2_TR(0x540fcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B540fcc:{NFSU2_TR(0x540fcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B540fcd:{NFSU2_TR(0x540fcd);
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
B540fd0:{NFSU2_TR(0x540fd0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B540fe0:L540fe0:{c.instructions+=10;NFSU2_TR(0x540fe0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540fe1:{NFSU2_TR(0x540fe1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540fe2:{NFSU2_TR(0x540fe2);
__builtin_memmove((R+12),(R+4),4);
}
B540fe4:{NFSU2_TR(0x540fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B540fe7:{NFSU2_TR(0x540fe7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540fe8:{NFSU2_TR(0x540fe8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B540fea:{NFSU2_TR(0x540fea);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B540fec:{NFSU2_TR(0x540fec);
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
B540fee:{NFSU2_TR(0x540fee);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B540ff2:{NFSU2_TR(0x540ff2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x541035u,541);}
}
B540ff4:L540ff4:{c.instructions+=5;NFSU2_TR(0x540ff4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540ff5:{NFSU2_TR(0x540ff5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B540ff8:{NFSU2_TR(0x540ff8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B540ffa:{NFSU2_TR(0x540ffa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B540ffb:{NFSU2_TR(0x540ffb);
w4(R+4,u32(0x8395b0ull));
TAIL_STATIC(0x541000u,541);
}
XIT:NFSU2_TR_EXIT(0x540,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
