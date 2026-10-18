#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_433(u8* __restrict R,Cpu& c);
u32 body_436(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48c(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_491(u8* __restrict R,Cpu& c);
u32 body_493(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5c0(u8* __restrict R,Cpu& c);
u32 body_5ca(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_611(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x494,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x494,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_494(u8* __restrict R,Cpu& c);
u32 page_494(Cpu& c){return body_494(c.regs.data(),c);}
__attribute__((noinline)) u32 body_494(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x494004:goto L494004;
case 0x494005:c.instructions+=7;goto B494005;
case 0x49400a:c.instructions+=6;goto B49400a;
case 0x49400f:c.instructions+=5;goto B49400f;
case 0x494015:c.instructions+=4;goto B494015;
case 0x494017:c.instructions+=3;goto B494017;
case 0x494018:c.instructions+=2;goto B494018;
case 0x49401e:c.instructions+=1;goto B49401e;
case 0x494023:goto L494023;
case 0x494026:c.instructions+=17;goto B494026;
case 0x494029:c.instructions+=16;goto B494029;
case 0x49402b:c.instructions+=15;goto B49402b;
case 0x49402e:c.instructions+=14;goto B49402e;
case 0x494034:c.instructions+=13;goto B494034;
case 0x494039:c.instructions+=12;goto B494039;
case 0x49403c:c.instructions+=11;goto B49403c;
case 0x49403d:c.instructions+=10;goto B49403d;
case 0x494047:c.instructions+=9;goto B494047;
case 0x49404d:c.instructions+=8;goto B49404d;
case 0x494050:c.instructions+=7;goto B494050;
case 0x494051:c.instructions+=6;goto B494051;
case 0x494053:c.instructions+=5;goto B494053;
case 0x494054:c.instructions+=4;goto B494054;
case 0x494059:c.instructions+=3;goto B494059;
case 0x49405a:c.instructions+=2;goto B49405a;
case 0x49405b:c.instructions+=1;goto B49405b;
case 0x494060:goto L494060;
case 0x494064:c.instructions+=2;goto B494064;
case 0x49406a:c.instructions+=1;goto B49406a;
case 0x49406c:goto L49406c;
case 0x49406e:c.instructions+=1;goto B49406e;
case 0x49406f:goto L49406f;
case 0x494072:c.instructions+=8;goto B494072;
case 0x494073:c.instructions+=7;goto B494073;
case 0x494074:c.instructions+=6;goto B494074;
case 0x494075:c.instructions+=5;goto B494075;
case 0x494078:c.instructions+=4;goto B494078;
case 0x49407c:c.instructions+=3;goto B49407c;
case 0x49407e:c.instructions+=2;goto B49407e;
case 0x494080:c.instructions+=1;goto B494080;
case 0x494082:goto L494082;
case 0x494084:c.instructions+=2;goto B494084;
case 0x494089:c.instructions+=1;goto B494089;
case 0x49408b:goto L49408b;
case 0x49408d:c.instructions+=1;goto B49408d;
case 0x49408f:goto L49408f;
case 0x494090:c.instructions+=1;goto B494090;
case 0x494095:goto L494095;
case 0x494098:goto L494098;
case 0x494099:c.instructions+=1;goto B494099;
case 0x49409e:goto L49409e;
case 0x4940a1:c.instructions+=2;goto B4940a1;
case 0x4940a3:c.instructions+=1;goto B4940a3;
case 0x4940a5:goto L4940a5;
case 0x4940aa:c.instructions+=1;goto B4940aa;
case 0x4940ac:goto L4940ac;
case 0x4940ad:c.instructions+=2;goto B4940ad;
case 0x4940ae:c.instructions+=1;goto B4940ae;
case 0x4940b3:goto L4940b3;
case 0x4940b6:goto L4940b6;
case 0x4940b9:c.instructions+=3;goto B4940b9;
case 0x4940bd:c.instructions+=2;goto B4940bd;
case 0x4940bf:c.instructions+=1;goto B4940bf;
case 0x4940c1:goto L4940c1;
case 0x4940c3:c.instructions+=1;goto B4940c3;
case 0x4940c5:goto L4940c5;
case 0x4940c6:c.instructions+=1;goto B4940c6;
case 0x4940cb:goto L4940cb;
case 0x4940ce:goto L4940ce;
case 0x4940cf:c.instructions+=4;goto B4940cf;
case 0x4940d0:c.instructions+=3;goto B4940d0;
case 0x4940d5:c.instructions+=2;goto B4940d5;
case 0x4940d6:c.instructions+=1;goto B4940d6;
case 0x4940e0:goto L4940e0;
case 0x4940e4:c.instructions+=2;goto B4940e4;
case 0x4940ea:c.instructions+=1;goto B4940ea;
case 0x4940ec:goto L4940ec;
case 0x4940ee:c.instructions+=1;goto B4940ee;
case 0x4940ef:goto L4940ef;
case 0x4940f2:c.instructions+=8;goto B4940f2;
case 0x4940f3:c.instructions+=7;goto B4940f3;
case 0x4940f4:c.instructions+=6;goto B4940f4;
case 0x4940f5:c.instructions+=5;goto B4940f5;
case 0x4940f8:c.instructions+=4;goto B4940f8;
case 0x4940fc:c.instructions+=3;goto B4940fc;
case 0x4940fe:c.instructions+=2;goto B4940fe;
case 0x494100:c.instructions+=1;goto B494100;
case 0x494102:goto L494102;
case 0x494104:c.instructions+=2;goto B494104;
case 0x494109:c.instructions+=1;goto B494109;
case 0x49410b:goto L49410b;
case 0x49410c:c.instructions+=1;goto B49410c;
case 0x494111:goto L494111;
case 0x494114:c.instructions+=2;goto B494114;
case 0x494116:c.instructions+=1;goto B494116;
case 0x494118:goto L494118;
case 0x49411d:c.instructions+=1;goto B49411d;
case 0x49411f:goto L49411f;
case 0x494120:c.instructions+=2;goto B494120;
case 0x494121:c.instructions+=1;goto B494121;
case 0x494126:goto L494126;
case 0x494129:goto L494129;
case 0x49412c:c.instructions+=3;goto B49412c;
case 0x494130:c.instructions+=2;goto B494130;
case 0x494132:c.instructions+=1;goto B494132;
case 0x494134:goto L494134;
case 0x494135:c.instructions+=4;goto B494135;
case 0x494136:c.instructions+=3;goto B494136;
case 0x49413b:c.instructions+=2;goto B49413b;
case 0x49413c:c.instructions+=1;goto B49413c;
case 0x494140:goto L494140;
case 0x494141:c.instructions+=4;goto B494141;
case 0x494145:c.instructions+=3;goto B494145;
case 0x49414b:c.instructions+=2;goto B49414b;
case 0x49414c:c.instructions+=1;goto B49414c;
case 0x49414e:goto L49414e;
case 0x49414f:c.instructions+=1;goto B49414f;
case 0x494154:goto L494154;
case 0x494157:c.instructions+=5;goto B494157;
case 0x49415b:c.instructions+=4;goto B49415b;
case 0x49415c:c.instructions+=3;goto B49415c;
case 0x49415f:c.instructions+=2;goto B49415f;
case 0x494160:c.instructions+=1;goto B494160;
case 0x494165:goto L494165;
case 0x494168:goto L494168;
case 0x49416c:c.instructions+=4;goto B49416c;
case 0x494172:c.instructions+=3;goto B494172;
case 0x494173:c.instructions+=2;goto B494173;
case 0x494174:c.instructions+=1;goto B494174;
case 0x494179:goto L494179;
case 0x49417f:c.instructions+=2;goto B49417f;
case 0x494180:c.instructions+=1;goto B494180;
case 0x494185:goto L494185;
case 0x494188:c.instructions+=3;goto B494188;
case 0x494189:c.instructions+=2;goto B494189;
case 0x49418a:c.instructions+=1;goto B49418a;
case 0x494190:goto L494190;
case 0x494194:c.instructions+=4;goto B494194;
case 0x494196:c.instructions+=3;goto B494196;
case 0x494198:c.instructions+=2;goto B494198;
case 0x494199:c.instructions+=1;goto B494199;
case 0x49419e:goto L49419e;
case 0x4941a1:c.instructions+=2;goto B4941a1;
case 0x4941a3:c.instructions+=1;goto B4941a3;
case 0x4941a5:goto L4941a5;
case 0x4941a9:c.instructions+=5;goto B4941a9;
case 0x4941af:c.instructions+=4;goto B4941af;
case 0x4941b3:c.instructions+=3;goto B4941b3;
case 0x4941b4:c.instructions+=2;goto B4941b4;
case 0x4941b5:c.instructions+=1;goto B4941b5;
case 0x4941ba:goto L4941ba;
case 0x4941bd:goto L4941bd;
case 0x4941c0:goto L4941c0;
case 0x4941c4:c.instructions+=9;goto B4941c4;
case 0x4941c8:c.instructions+=8;goto B4941c8;
case 0x4941cc:c.instructions+=7;goto B4941cc;
case 0x4941cd:c.instructions+=6;goto B4941cd;
case 0x4941d1:c.instructions+=5;goto B4941d1;
case 0x4941d2:c.instructions+=4;goto B4941d2;
case 0x4941d3:c.instructions+=3;goto B4941d3;
case 0x4941d4:c.instructions+=2;goto B4941d4;
case 0x4941d9:c.instructions+=1;goto B4941d9;
case 0x4941de:goto L4941de;
case 0x4941e0:c.instructions+=3;goto B4941e0;
case 0x4941e2:c.instructions+=2;goto B4941e2;
case 0x4941e4:c.instructions+=1;goto B4941e4;
case 0x4941f0:goto L4941f0;
case 0x4941f4:c.instructions+=7;goto B4941f4;
case 0x4941f8:c.instructions+=6;goto B4941f8;
case 0x4941fc:c.instructions+=5;goto B4941fc;
case 0x4941fd:c.instructions+=4;goto B4941fd;
case 0x4941fe:c.instructions+=3;goto B4941fe;
case 0x4941ff:c.instructions+=2;goto B4941ff;
case 0x494204:c.instructions+=1;goto B494204;
case 0x494209:goto L494209;
case 0x494210:goto L494210;
case 0x494214:c.instructions+=3;goto B494214;
case 0x49421a:c.instructions+=2;goto B49421a;
case 0x49421e:c.instructions+=1;goto B49421e;
case 0x494230:goto L494230;
case 0x494232:c.instructions+=4;goto B494232;
case 0x494235:c.instructions+=3;goto B494235;
case 0x494237:c.instructions+=2;goto B494237;
case 0x49423a:c.instructions+=1;goto B49423a;
case 0x494240:goto L494240;
case 0x494243:c.instructions+=4;goto B494243;
case 0x494244:c.instructions+=3;goto B494244;
case 0x494247:c.instructions+=2;goto B494247;
case 0x494249:c.instructions+=1;goto B494249;
case 0x49424b:goto L49424b;
case 0x494250:goto L494250;
case 0x494252:c.instructions+=5;goto B494252;
case 0x494255:c.instructions+=4;goto B494255;
case 0x494257:c.instructions+=3;goto B494257;
case 0x494258:c.instructions+=2;goto B494258;
case 0x49425b:c.instructions+=1;goto B49425b;
case 0x494260:goto L494260;
case 0x494262:c.instructions+=3;goto B494262;
case 0x494265:c.instructions+=2;goto B494265;
case 0x494267:c.instructions+=1;goto B494267;
case 0x494269:goto L494269;
case 0x49426a:c.instructions+=1;goto B49426a;
case 0x494270:goto L494270;
case 0x494271:c.instructions+=7;goto B494271;
case 0x494273:c.instructions+=6;goto B494273;
case 0x494276:c.instructions+=5;goto B494276;
case 0x494279:c.instructions+=4;goto B494279;
case 0x49427b:c.instructions+=3;goto B49427b;
case 0x49427e:c.instructions+=2;goto B49427e;
case 0x494281:c.instructions+=1;goto B494281;
case 0x494283:goto L494283;
case 0x494285:c.instructions+=1;goto B494285;
case 0x494287:goto L494287;
case 0x494289:c.instructions+=1;goto B494289;
case 0x49428b:goto L49428b;
case 0x494290:goto L494290;
case 0x494292:c.instructions+=14;goto B494292;
case 0x494293:c.instructions+=13;goto B494293;
case 0x494295:c.instructions+=12;goto B494295;
case 0x494296:c.instructions+=11;goto B494296;
case 0x494299:c.instructions+=10;goto B494299;
case 0x49429b:c.instructions+=9;goto B49429b;
case 0x49429e:c.instructions+=8;goto B49429e;
case 0x4942a0:c.instructions+=7;goto B4942a0;
case 0x4942a3:c.instructions+=6;goto B4942a3;
case 0x4942a6:c.instructions+=5;goto B4942a6;
case 0x4942a8:c.instructions+=4;goto B4942a8;
case 0x4942a9:c.instructions+=3;goto B4942a9;
case 0x4942ab:c.instructions+=2;goto B4942ab;
case 0x4942ae:c.instructions+=1;goto B4942ae;
case 0x4942b4:goto L4942b4;
case 0x4942b5:c.instructions+=2;goto B4942b5;
case 0x4942b8:c.instructions+=1;goto B4942b8;
case 0x4942c0:goto L4942c0;
case 0x4942c7:c.instructions+=3;goto B4942c7;
case 0x4942c9:c.instructions+=2;goto B4942c9;
case 0x4942cb:c.instructions+=1;goto B4942cb;
case 0x4942d1:goto L4942d1;
case 0x4942d3:c.instructions+=5;goto B4942d3;
case 0x4942d9:c.instructions+=4;goto B4942d9;
case 0x4942e0:c.instructions+=3;goto B4942e0;
case 0x4942e3:c.instructions+=2;goto B4942e3;
case 0x4942e6:c.instructions+=1;goto B4942e6;
case 0x4942e8:goto L4942e8;
case 0x4942eb:c.instructions+=1;goto B4942eb;
case 0x4942f0:goto L4942f0;
case 0x4942f3:c.instructions+=3;goto B4942f3;
case 0x4942f5:c.instructions+=2;goto B4942f5;
case 0x4942f9:c.instructions+=1;goto B4942f9;
case 0x4942fb:goto L4942fb;
case 0x4942fe:c.instructions+=1;goto B4942fe;
case 0x494300:goto L494300;
case 0x494306:c.instructions+=2;goto B494306;
case 0x494308:c.instructions+=1;goto B494308;
case 0x49430a:goto L49430a;
case 0x494312:c.instructions+=3;goto B494312;
case 0x494315:c.instructions+=2;goto B494315;
case 0x494317:c.instructions+=1;goto B494317;
case 0x494319:goto L494319;
case 0x49431c:c.instructions+=4;goto B49431c;
case 0x49431e:c.instructions+=3;goto B49431e;
case 0x494320:c.instructions+=2;goto B494320;
case 0x494322:c.instructions+=1;goto B494322;
case 0x494324:goto L494324;
case 0x494326:c.instructions+=2;goto B494326;
case 0x494328:c.instructions+=1;goto B494328;
case 0x49432a:goto L49432a;
case 0x49432d:c.instructions+=6;goto B49432d;
case 0x49432f:c.instructions+=5;goto B49432f;
case 0x494331:c.instructions+=4;goto B494331;
case 0x494334:c.instructions+=3;goto B494334;
case 0x494337:c.instructions+=2;goto B494337;
case 0x494338:c.instructions+=1;goto B494338;
case 0x49433a:goto L49433a;
case 0x49433f:c.instructions+=4;goto B49433f;
case 0x494344:c.instructions+=3;goto B494344;
case 0x494345:c.instructions+=2;goto B494345;
case 0x494346:c.instructions+=1;goto B494346;
case 0x49434b:goto L49434b;
case 0x49434e:goto L49434e;
case 0x494351:c.instructions+=6;goto B494351;
case 0x494358:c.instructions+=5;goto B494358;
case 0x494359:c.instructions+=4;goto B494359;
case 0x49435c:c.instructions+=3;goto B49435c;
case 0x49435e:c.instructions+=2;goto B49435e;
case 0x494361:c.instructions+=1;goto B494361;
case 0x494363:goto L494363;
case 0x494366:goto L494366;
case 0x494367:c.instructions+=2;goto B494367;
case 0x494369:c.instructions+=1;goto B494369;
case 0x49436f:goto L49436f;
case 0x494370:goto L494370;
case 0x494371:c.instructions+=4;goto B494371;
case 0x494372:c.instructions+=3;goto B494372;
case 0x494374:c.instructions+=2;goto B494374;
case 0x494375:c.instructions+=1;goto B494375;
case 0x494380:goto L494380;
case 0x494382:c.instructions+=22;goto B494382;
case 0x494387:c.instructions+=21;goto B494387;
case 0x49438d:c.instructions+=20;goto B49438d;
case 0x49438e:c.instructions+=19;goto B49438e;
case 0x494395:c.instructions+=18;goto B494395;
case 0x494398:c.instructions+=17;goto B494398;
case 0x49439c:c.instructions+=16;goto B49439c;
case 0x49439f:c.instructions+=15;goto B49439f;
case 0x4943a0:c.instructions+=14;goto B4943a0;
case 0x4943a1:c.instructions+=13;goto B4943a1;
case 0x4943a2:c.instructions+=12;goto B4943a2;
case 0x4943a6:c.instructions+=11;goto B4943a6;
case 0x4943a7:c.instructions+=10;goto B4943a7;
case 0x4943a9:c.instructions+=9;goto B4943a9;
case 0x4943ac:c.instructions+=8;goto B4943ac;
case 0x4943ae:c.instructions+=7;goto B4943ae;
case 0x4943b0:c.instructions+=6;goto B4943b0;
case 0x4943b2:c.instructions+=5;goto B4943b2;
case 0x4943b6:c.instructions+=4;goto B4943b6;
case 0x4943ba:c.instructions+=3;goto B4943ba;
case 0x4943be:c.instructions+=2;goto B4943be;
case 0x4943c2:c.instructions+=1;goto B4943c2;
case 0x4943c4:goto L4943c4;
case 0x4943c6:c.instructions+=2;goto B4943c6;
case 0x4943cb:c.instructions+=1;goto B4943cb;
case 0x4943cd:goto L4943cd;
case 0x4943d0:c.instructions+=1;goto B4943d0;
case 0x4943d2:goto L4943d2;
case 0x4943d7:c.instructions+=1;goto B4943d7;
case 0x4943d9:goto L4943d9;
case 0x4943dc:c.instructions+=5;goto B4943dc;
case 0x4943df:c.instructions+=4;goto B4943df;
case 0x4943e2:c.instructions+=3;goto B4943e2;
case 0x4943e5:c.instructions+=2;goto B4943e5;
case 0x4943e9:c.instructions+=1;goto B4943e9;
case 0x4943eb:goto L4943eb;
case 0x4943f0:c.instructions+=1;goto B4943f0;
case 0x4943f2:goto L4943f2;
case 0x4943f5:c.instructions+=2;goto B4943f5;
case 0x4943f8:c.instructions+=1;goto B4943f8;
case 0x4943fa:goto L4943fa;
case 0x4943ff:c.instructions+=1;goto B4943ff;
case 0x494401:goto L494401;
case 0x494404:c.instructions+=10;goto B494404;
case 0x494409:c.instructions+=9;goto B494409;
case 0x49440b:c.instructions+=8;goto B49440b;
case 0x49440d:c.instructions+=7;goto B49440d;
case 0x49440f:c.instructions+=6;goto B49440f;
case 0x494411:c.instructions+=5;goto B494411;
case 0x494414:c.instructions+=4;goto B494414;
case 0x494416:c.instructions+=3;goto B494416;
case 0x49441a:c.instructions+=2;goto B49441a;
case 0x49441d:c.instructions+=1;goto B49441d;
case 0x49441f:goto L49441f;
case 0x494424:c.instructions+=1;goto B494424;
case 0x494426:goto L494426;
case 0x494429:c.instructions+=4;goto B494429;
case 0x49442c:c.instructions+=3;goto B49442c;
case 0x49442f:c.instructions+=2;goto B49442f;
case 0x494433:c.instructions+=1;goto B494433;
case 0x494437:goto L494437;
case 0x49443a:c.instructions+=3;goto B49443a;
case 0x49443e:c.instructions+=2;goto B49443e;
case 0x494440:c.instructions+=1;goto B494440;
case 0x494442:goto L494442;
case 0x494446:c.instructions+=2;goto B494446;
case 0x49444d:c.instructions+=1;goto B49444d;
case 0x49444f:goto L49444f;
case 0x494450:c.instructions+=8;goto B494450;
case 0x494451:c.instructions+=7;goto B494451;
case 0x494452:c.instructions+=6;goto B494452;
case 0x494454:c.instructions+=5;goto B494454;
case 0x494455:c.instructions+=4;goto B494455;
case 0x494459:c.instructions+=3;goto B494459;
case 0x494460:c.instructions+=2;goto B494460;
case 0x494463:c.instructions+=1;goto B494463;
case 0x494464:goto L494464;
case 0x49446a:c.instructions+=2;goto B49446a;
case 0x49446b:c.instructions+=1;goto B49446b;
case 0x494470:goto L494470;
case 0x494473:c.instructions+=4;goto B494473;
case 0x494477:c.instructions+=3;goto B494477;
case 0x494479:c.instructions+=2;goto B494479;
case 0x494481:c.instructions+=1;goto B494481;
case 0x494483:goto L494483;
case 0x494487:c.instructions+=6;goto B494487;
case 0x494489:c.instructions+=5;goto B494489;
case 0x49448b:c.instructions+=4;goto B49448b;
case 0x49448c:c.instructions+=3;goto B49448c;
case 0x49448d:c.instructions+=2;goto B49448d;
case 0x49448f:c.instructions+=1;goto B49448f;
case 0x494494:goto L494494;
case 0x494496:goto L494496;
case 0x494498:goto L494498;
case 0x49449a:c.instructions+=3;goto B49449a;
case 0x4944a2:c.instructions+=2;goto B4944a2;
case 0x4944a5:c.instructions+=1;goto B4944a5;
case 0x4944a7:goto L4944a7;
case 0x4944ab:c.instructions+=5;goto B4944ab;
case 0x4944ac:c.instructions+=4;goto B4944ac;
case 0x4944ad:c.instructions+=3;goto B4944ad;
case 0x4944ae:c.instructions+=2;goto B4944ae;
case 0x4944b0:c.instructions+=1;goto B4944b0;
case 0x4944b5:goto L4944b5;
case 0x4944b9:c.instructions+=8;goto B4944b9;
case 0x4944bb:c.instructions+=7;goto B4944bb;
case 0x4944bc:c.instructions+=6;goto B4944bc;
case 0x4944bd:c.instructions+=5;goto B4944bd;
case 0x4944be:c.instructions+=4;goto B4944be;
case 0x4944bf:c.instructions+=3;goto B4944bf;
case 0x4944c6:c.instructions+=2;goto B4944c6;
case 0x4944c9:c.instructions+=1;goto B4944c9;
case 0x4944d0:goto L4944d0;
case 0x4944d4:c.instructions+=9;goto B4944d4;
case 0x4944d8:c.instructions+=8;goto B4944d8;
case 0x4944dc:c.instructions+=7;goto B4944dc;
case 0x4944dd:c.instructions+=6;goto B4944dd;
case 0x4944e1:c.instructions+=5;goto B4944e1;
case 0x4944e2:c.instructions+=4;goto B4944e2;
case 0x4944e3:c.instructions+=3;goto B4944e3;
case 0x4944e4:c.instructions+=2;goto B4944e4;
case 0x4944e9:c.instructions+=1;goto B4944e9;
case 0x4944ee:goto L4944ee;
case 0x4944f0:c.instructions+=3;goto B4944f0;
case 0x4944f2:c.instructions+=2;goto B4944f2;
case 0x4944f4:c.instructions+=1;goto B4944f4;
case 0x494500:goto L494500;
case 0x494501:c.instructions+=6;goto B494501;
case 0x494502:c.instructions+=5;goto B494502;
case 0x494506:c.instructions+=4;goto B494506;
case 0x494509:c.instructions+=3;goto B494509;
case 0x49450b:c.instructions+=2;goto B49450b;
case 0x49450e:c.instructions+=1;goto B49450e;
case 0x494510:goto L494510;
case 0x494511:c.instructions+=1;goto B494511;
case 0x494516:goto L494516;
case 0x494519:goto L494519;
case 0x49451c:c.instructions+=5;goto B49451c;
case 0x494520:c.instructions+=4;goto B494520;
case 0x494521:c.instructions+=3;goto B494521;
case 0x494524:c.instructions+=2;goto B494524;
case 0x494525:c.instructions+=1;goto B494525;
case 0x49452a:goto L49452a;
case 0x49452b:c.instructions+=1;goto B49452b;
case 0x494530:goto L494530;
case 0x494533:c.instructions+=9;goto B494533;
case 0x494536:c.instructions+=8;goto B494536;
case 0x494539:c.instructions+=7;goto B494539;
case 0x49453c:c.instructions+=6;goto B49453c;
case 0x49453f:c.instructions+=5;goto B49453f;
case 0x494542:c.instructions+=4;goto B494542;
case 0x494545:c.instructions+=3;goto B494545;
case 0x494546:c.instructions+=2;goto B494546;
case 0x494547:c.instructions+=1;goto B494547;
case 0x494550:goto L494550;
case 0x494554:c.instructions+=7;goto B494554;
case 0x494558:c.instructions+=6;goto B494558;
case 0x49455c:c.instructions+=5;goto B49455c;
case 0x49455d:c.instructions+=4;goto B49455d;
case 0x49455e:c.instructions+=3;goto B49455e;
case 0x49455f:c.instructions+=2;goto B49455f;
case 0x494564:c.instructions+=1;goto B494564;
case 0x494569:goto L494569;
case 0x494570:goto L494570;
case 0x494571:c.instructions+=5;goto B494571;
case 0x494572:c.instructions+=4;goto B494572;
case 0x494574:c.instructions+=3;goto B494574;
case 0x494576:c.instructions+=2;goto B494576;
case 0x494578:c.instructions+=1;goto B494578;
case 0x49457a:goto L49457a;
case 0x494580:goto L494580;
case 0x494583:c.instructions+=5;goto B494583;
case 0x494585:c.instructions+=4;goto B494585;
case 0x494587:c.instructions+=3;goto B494587;
case 0x49458a:c.instructions+=2;goto B49458a;
case 0x49458c:c.instructions+=1;goto B49458c;
case 0x494591:goto L494591;
case 0x494596:c.instructions+=3;goto B494596;
case 0x494597:c.instructions+=2;goto B494597;
case 0x494598:c.instructions+=1;goto B494598;
case 0x49459d:goto L49459d;
case 0x49459f:c.instructions+=3;goto B49459f;
case 0x4945a2:c.instructions+=2;goto B4945a2;
case 0x4945a4:c.instructions+=1;goto B4945a4;
case 0x4945a6:goto L4945a6;
case 0x4945a7:c.instructions+=2;goto B4945a7;
case 0x4945a8:c.instructions+=1;goto B4945a8;
case 0x4945b0:goto L4945b0;
case 0x4945b6:c.instructions+=1;goto B4945b6;
case 0x4945c0:goto L4945c0;
case 0x4945c2:c.instructions+=11;goto B4945c2;
case 0x4945c7:c.instructions+=10;goto B4945c7;
case 0x4945cd:c.instructions+=9;goto B4945cd;
case 0x4945ce:c.instructions+=8;goto B4945ce;
case 0x4945d5:c.instructions+=7;goto B4945d5;
case 0x4945d6:c.instructions+=6;goto B4945d6;
case 0x4945d7:c.instructions+=5;goto B4945d7;
case 0x4945d9:c.instructions+=4;goto B4945d9;
case 0x4945dd:c.instructions+=3;goto B4945dd;
case 0x4945e0:c.instructions+=2;goto B4945e0;
case 0x4945e8:c.instructions+=1;goto B4945e8;
case 0x4945ed:goto L4945ed;
case 0x4945ef:c.instructions+=2;goto B4945ef;
case 0x4945f7:c.instructions+=1;goto B4945f7;
case 0x4945fc:goto L4945fc;
case 0x494600:c.instructions+=4;goto B494600;
case 0x494601:c.instructions+=3;goto B494601;
case 0x494608:c.instructions+=2;goto B494608;
case 0x49460b:c.instructions+=1;goto B49460b;
case 0x494610:goto L494610;
case 0x494611:c.instructions+=5;goto B494611;
case 0x494612:c.instructions+=4;goto B494612;
case 0x494616:c.instructions+=3;goto B494616;
case 0x494618:c.instructions+=2;goto B494618;
case 0x49461a:c.instructions+=1;goto B49461a;
case 0x49461c:goto L49461c;
case 0x494620:goto L494620;
case 0x494623:c.instructions+=5;goto B494623;
case 0x494625:c.instructions+=4;goto B494625;
case 0x494627:c.instructions+=3;goto B494627;
case 0x49462a:c.instructions+=2;goto B49462a;
case 0x49462c:c.instructions+=1;goto B49462c;
case 0x494631:goto L494631;
case 0x494632:c.instructions+=1;goto B494632;
case 0x494637:goto L494637;
case 0x494639:c.instructions+=3;goto B494639;
case 0x49463c:c.instructions+=2;goto B49463c;
case 0x49463e:c.instructions+=1;goto B49463e;
case 0x494640:goto L494640;
case 0x494641:c.instructions+=2;goto B494641;
case 0x494642:c.instructions+=1;goto B494642;
case 0x494650:goto L494650;
case 0x494652:c.instructions+=19;goto B494652;
case 0x494655:c.instructions+=18;goto B494655;
case 0x494657:c.instructions+=17;goto B494657;
case 0x49465a:c.instructions+=16;goto B49465a;
case 0x49465c:c.instructions+=15;goto B49465c;
case 0x49465f:c.instructions+=14;goto B49465f;
case 0x494661:c.instructions+=13;goto B494661;
case 0x494664:c.instructions+=12;goto B494664;
case 0x494667:c.instructions+=11;goto B494667;
case 0x49466a:c.instructions+=10;goto B49466a;
case 0x49466d:c.instructions+=9;goto B49466d;
case 0x494670:c.instructions+=8;goto B494670;
case 0x494673:c.instructions+=7;goto B494673;
case 0x494676:c.instructions+=6;goto B494676;
case 0x494679:c.instructions+=5;goto B494679;
case 0x49467c:c.instructions+=4;goto B49467c;
case 0x49467f:c.instructions+=3;goto B49467f;
case 0x494682:c.instructions+=2;goto B494682;
case 0x494685:c.instructions+=1;goto B494685;
case 0x494690:goto L494690;
case 0x494693:c.instructions+=3;goto B494693;
case 0x494694:c.instructions+=2;goto B494694;
case 0x494696:c.instructions+=1;goto B494696;
case 0x49469b:goto L49469b;
case 0x49469d:c.instructions+=2;goto B49469d;
case 0x4946a1:c.instructions+=1;goto B4946a1;
case 0x4946a7:goto L4946a7;
case 0x4946a8:c.instructions+=3;goto B4946a8;
case 0x4946a9:c.instructions+=2;goto B4946a9;
case 0x4946aa:c.instructions+=1;goto B4946aa;
case 0x4946b0:goto L4946b0;
case 0x4946b4:c.instructions+=4;goto B4946b4;
case 0x4946b7:c.instructions+=3;goto B4946b7;
case 0x4946b9:c.instructions+=2;goto B4946b9;
case 0x4946bd:c.instructions+=1;goto B4946bd;
case 0x4946bf:goto L4946bf;
case 0x4946c2:c.instructions+=3;goto B4946c2;
case 0x4946c5:c.instructions+=2;goto B4946c5;
case 0x4946ca:c.instructions+=1;goto B4946ca;
case 0x4946d0:goto L4946d0;
case 0x4946d2:c.instructions+=1;goto B4946d2;
case 0x4946d4:goto L4946d4;
case 0x4946d6:c.instructions+=8;goto B4946d6;
case 0x4946d8:c.instructions+=7;goto B4946d8;
case 0x4946db:c.instructions+=6;goto B4946db;
case 0x4946dd:c.instructions+=5;goto B4946dd;
case 0x4946de:c.instructions+=4;goto B4946de;
case 0x4946e1:c.instructions+=3;goto B4946e1;
case 0x4946e6:c.instructions+=2;goto B4946e6;
case 0x4946e7:c.instructions+=1;goto B4946e7;
case 0x4946ec:goto L4946ec;
case 0x4946ee:c.instructions+=5;goto B4946ee;
case 0x4946f1:c.instructions+=4;goto B4946f1;
case 0x4946f2:c.instructions+=3;goto B4946f2;
case 0x4946f4:c.instructions+=2;goto B4946f4;
case 0x4946f6:c.instructions+=1;goto B4946f6;
case 0x4946f8:goto L4946f8;
case 0x4946fb:c.instructions+=3;goto B4946fb;
case 0x4946fe:c.instructions+=2;goto B4946fe;
case 0x4946ff:c.instructions+=1;goto B4946ff;
case 0x494701:goto L494701;
case 0x494704:c.instructions+=5;goto B494704;
case 0x494706:c.instructions+=4;goto B494706;
case 0x494708:c.instructions+=3;goto B494708;
case 0x49470b:c.instructions+=2;goto B49470b;
case 0x49470d:c.instructions+=1;goto B49470d;
case 0x494712:goto L494712;
case 0x494718:c.instructions+=3;goto B494718;
case 0x494719:c.instructions+=2;goto B494719;
case 0x49471a:c.instructions+=1;goto B49471a;
case 0x49471f:goto L49471f;
case 0x494723:c.instructions+=2;goto B494723;
case 0x494727:c.instructions+=1;goto B494727;
case 0x49472a:goto L49472a;
case 0x49472c:c.instructions+=2;goto B49472c;
case 0x49472e:c.instructions+=1;goto B49472e;
case 0x494730:goto L494730;
case 0x494731:c.instructions+=2;goto B494731;
case 0x494732:c.instructions+=1;goto B494732;
case 0x494733:goto L494733;
case 0x494734:c.instructions+=2;goto B494734;
case 0x494737:c.instructions+=1;goto B494737;
case 0x494740:goto L494740;
case 0x494742:c.instructions+=13;goto B494742;
case 0x494747:c.instructions+=12;goto B494747;
case 0x49474d:c.instructions+=11;goto B49474d;
case 0x49474e:c.instructions+=10;goto B49474e;
case 0x494755:c.instructions+=9;goto B494755;
case 0x494758:c.instructions+=8;goto B494758;
case 0x494759:c.instructions+=7;goto B494759;
case 0x49475b:c.instructions+=6;goto B49475b;
case 0x49475c:c.instructions+=5;goto B49475c;
case 0x49475e:c.instructions+=4;goto B49475e;
case 0x494762:c.instructions+=3;goto B494762;
case 0x494764:c.instructions+=2;goto B494764;
case 0x494769:c.instructions+=1;goto B494769;
case 0x494770:goto L494770;
case 0x494773:c.instructions+=1;goto B494773;
case 0x494775:goto L494775;
case 0x494778:c.instructions+=3;goto B494778;
case 0x494779:c.instructions+=2;goto B494779;
case 0x49477f:c.instructions+=1;goto B49477f;
case 0x494781:goto L494781;
case 0x494782:c.instructions+=5;goto B494782;
case 0x494783:c.instructions+=4;goto B494783;
case 0x494787:c.instructions+=3;goto B494787;
case 0x49478e:c.instructions+=2;goto B49478e;
case 0x494791:c.instructions+=1;goto B494791;
case 0x494794:goto L494794;
case 0x494797:c.instructions+=6;goto B494797;
case 0x494798:c.instructions+=5;goto B494798;
case 0x49479e:c.instructions+=4;goto B49479e;
case 0x4947a0:c.instructions+=3;goto B4947a0;
case 0x4947a6:c.instructions+=2;goto B4947a6;
case 0x4947ad:c.instructions+=1;goto B4947ad;
case 0x4947b3:goto L4947b3;
case 0x4947b7:c.instructions+=17;goto B4947b7;
case 0x4947bb:c.instructions+=16;goto B4947bb;
case 0x4947bf:c.instructions+=15;goto B4947bf;
case 0x4947c1:c.instructions+=14;goto B4947c1;
case 0x4947c4:c.instructions+=13;goto B4947c4;
case 0x4947c8:c.instructions+=12;goto B4947c8;
case 0x4947cc:c.instructions+=11;goto B4947cc;
case 0x4947cd:c.instructions+=10;goto B4947cd;
case 0x4947d0:c.instructions+=9;goto B4947d0;
case 0x4947d4:c.instructions+=8;goto B4947d4;
case 0x4947d8:c.instructions+=7;goto B4947d8;
case 0x4947dc:c.instructions+=6;goto B4947dc;
case 0x4947df:c.instructions+=5;goto B4947df;
case 0x4947e2:c.instructions+=4;goto B4947e2;
case 0x4947e4:c.instructions+=3;goto B4947e4;
case 0x4947e5:c.instructions+=2;goto B4947e5;
case 0x4947e9:c.instructions+=1;goto B4947e9;
case 0x4947ee:goto L4947ee;
case 0x4947f1:c.instructions+=5;goto B4947f1;
case 0x4947f3:c.instructions+=4;goto B4947f3;
case 0x4947f7:c.instructions+=3;goto B4947f7;
case 0x4947ff:c.instructions+=2;goto B4947ff;
case 0x494803:c.instructions+=1;goto B494803;
case 0x494809:goto L494809;
case 0x49480c:c.instructions+=1;goto B49480c;
case 0x494810:goto L494810;
case 0x494814:c.instructions+=5;goto B494814;
case 0x494818:c.instructions+=4;goto B494818;
case 0x49481b:c.instructions+=3;goto B49481b;
case 0x49481f:c.instructions+=2;goto B49481f;
case 0x494820:c.instructions+=1;goto B494820;
case 0x494825:goto L494825;
case 0x494827:c.instructions+=2;goto B494827;
case 0x494829:c.instructions+=1;goto B494829;
case 0x49482b:goto L49482b;
case 0x494831:c.instructions+=2;goto B494831;
case 0x494833:c.instructions+=1;goto B494833;
case 0x494835:goto L494835;
case 0x49483b:c.instructions+=3;goto B49483b;
case 0x49483d:c.instructions+=2;goto B49483d;
case 0x494843:c.instructions+=1;goto B494843;
case 0x494845:goto L494845;
case 0x494847:c.instructions+=5;goto B494847;
case 0x494849:c.instructions+=4;goto B494849;
case 0x49484a:c.instructions+=3;goto B49484a;
case 0x49484b:c.instructions+=2;goto B49484b;
case 0x49484c:c.instructions+=1;goto B49484c;
case 0x494851:goto L494851;
case 0x494854:c.instructions+=2;goto B494854;
case 0x494856:c.instructions+=1;goto B494856;
case 0x494858:goto L494858;
case 0x49485b:c.instructions+=5;goto B49485b;
case 0x49485e:c.instructions+=4;goto B49485e;
case 0x494862:c.instructions+=3;goto B494862;
case 0x494865:c.instructions+=2;goto B494865;
case 0x494867:c.instructions+=1;goto B494867;
case 0x494869:goto L494869;
case 0x49486d:goto L49486d;
case 0x494871:c.instructions+=7;goto B494871;
case 0x494874:c.instructions+=6;goto B494874;
case 0x494876:c.instructions+=5;goto B494876;
case 0x49487a:c.instructions+=4;goto B49487a;
case 0x49487e:c.instructions+=3;goto B49487e;
case 0x494881:c.instructions+=2;goto B494881;
case 0x494883:c.instructions+=1;goto B494883;
case 0x494886:goto L494886;
case 0x49488a:c.instructions+=5;goto B49488a;
case 0x49488e:c.instructions+=4;goto B49488e;
case 0x49488f:c.instructions+=3;goto B49488f;
case 0x494891:c.instructions+=2;goto B494891;
case 0x494895:c.instructions+=1;goto B494895;
case 0x49489b:goto L49489b;
case 0x49489f:goto L49489f;
case 0x4948a4:c.instructions+=2;goto B4948a4;
case 0x4948a8:c.instructions+=1;goto B4948a8;
case 0x4948ad:goto L4948ad;
case 0x4948b1:c.instructions+=2;goto B4948b1;
case 0x4948b5:c.instructions+=1;goto B4948b5;
case 0x4948ba:goto L4948ba;
case 0x4948bc:c.instructions+=2;goto B4948bc;
case 0x4948be:c.instructions+=1;goto B4948be;
case 0x4948c0:goto L4948c0;
case 0x4948c3:c.instructions+=6;goto B4948c3;
case 0x4948c6:c.instructions+=5;goto B4948c6;
case 0x4948c7:c.instructions+=4;goto B4948c7;
case 0x4948c8:c.instructions+=3;goto B4948c8;
case 0x4948c9:c.instructions+=2;goto B4948c9;
case 0x4948cb:c.instructions+=1;goto B4948cb;
case 0x4948d0:goto L4948d0;
case 0x4948d2:c.instructions+=2;goto B4948d2;
case 0x4948d4:c.instructions+=1;goto B4948d4;
case 0x4948d6:goto L4948d6;
case 0x4948da:c.instructions+=6;goto B4948da;
case 0x4948de:c.instructions+=5;goto B4948de;
case 0x4948e2:c.instructions+=4;goto B4948e2;
case 0x4948e3:c.instructions+=3;goto B4948e3;
case 0x4948e7:c.instructions+=2;goto B4948e7;
case 0x4948eb:c.instructions+=1;goto B4948eb;
case 0x4948f0:goto L4948f0;
case 0x4948f3:c.instructions+=3;goto B4948f3;
case 0x4948f8:c.instructions+=2;goto B4948f8;
case 0x4948f9:c.instructions+=1;goto B4948f9;
case 0x4948fb:goto L4948fb;
case 0x4948ff:c.instructions+=2;goto B4948ff;
case 0x494901:c.instructions+=1;goto B494901;
case 0x494903:goto L494903;
case 0x494907:c.instructions+=3;goto B494907;
case 0x494908:c.instructions+=2;goto B494908;
case 0x49490c:c.instructions+=1;goto B49490c;
case 0x49490e:goto L49490e;
case 0x494911:goto L494911;
case 0x494915:c.instructions+=4;goto B494915;
case 0x494919:c.instructions+=3;goto B494919;
case 0x49491b:c.instructions+=2;goto B49491b;
case 0x494923:c.instructions+=1;goto B494923;
case 0x494925:goto L494925;
case 0x494927:c.instructions+=6;goto B494927;
case 0x494929:c.instructions+=5;goto B494929;
case 0x49492c:c.instructions+=4;goto B49492c;
case 0x49492e:c.instructions+=3;goto B49492e;
case 0x49492f:c.instructions+=2;goto B49492f;
case 0x494932:c.instructions+=1;goto B494932;
case 0x494937:goto L494937;
case 0x49493b:c.instructions+=4;goto B49493b;
case 0x49493f:c.instructions+=3;goto B49493f;
case 0x494942:c.instructions+=2;goto B494942;
case 0x494944:c.instructions+=1;goto B494944;
case 0x494946:goto L494946;
case 0x49494a:c.instructions+=6;goto B49494a;
case 0x49494b:c.instructions+=5;goto B49494b;
case 0x49494c:c.instructions+=4;goto B49494c;
case 0x49494d:c.instructions+=3;goto B49494d;
case 0x494954:c.instructions+=2;goto B494954;
case 0x494957:c.instructions+=1;goto B494957;
case 0x494960:goto L494960;
case 0x494962:c.instructions+=7;goto B494962;
case 0x494968:c.instructions+=6;goto B494968;
case 0x49496a:c.instructions+=5;goto B49496a;
case 0x49496d:c.instructions+=4;goto B49496d;
case 0x494973:c.instructions+=3;goto B494973;
case 0x494975:c.instructions+=2;goto B494975;
case 0x494978:c.instructions+=1;goto B494978;
case 0x494980:goto L494980;
case 0x494982:c.instructions+=14;goto B494982;
case 0x494987:c.instructions+=13;goto B494987;
case 0x49498d:c.instructions+=12;goto B49498d;
case 0x49498e:c.instructions+=11;goto B49498e;
case 0x494995:c.instructions+=10;goto B494995;
case 0x494996:c.instructions+=9;goto B494996;
case 0x494997:c.instructions+=8;goto B494997;
case 0x494998:c.instructions+=7;goto B494998;
case 0x49499a:c.instructions+=6;goto B49499a;
case 0x49499e:c.instructions+=5;goto B49499e;
case 0x4949a4:c.instructions+=4;goto B4949a4;
case 0x4949aa:c.instructions+=3;goto B4949aa;
case 0x4949ac:c.instructions+=2;goto B4949ac;
case 0x4949b4:c.instructions+=1;goto B4949b4;
case 0x4949b6:goto L4949b6;
case 0x4949b8:c.instructions+=5;goto B4949b8;
case 0x4949bb:c.instructions+=4;goto B4949bb;
case 0x4949bd:c.instructions+=3;goto B4949bd;
case 0x4949be:c.instructions+=2;goto B4949be;
case 0x4949c1:c.instructions+=1;goto B4949c1;
case 0x4949c6:goto L4949c6;
case 0x4949c8:c.instructions+=3;goto B4949c8;
case 0x4949cb:c.instructions+=2;goto B4949cb;
case 0x4949cd:c.instructions+=1;goto B4949cd;
case 0x4949cf:goto L4949cf;
case 0x4949d5:c.instructions+=4;goto B4949d5;
case 0x4949db:c.instructions+=3;goto B4949db;
case 0x4949dd:c.instructions+=2;goto B4949dd;
case 0x4949e5:c.instructions+=1;goto B4949e5;
case 0x4949e7:goto L4949e7;
case 0x4949e9:c.instructions+=5;goto B4949e9;
case 0x4949ec:c.instructions+=4;goto B4949ec;
case 0x4949ee:c.instructions+=3;goto B4949ee;
case 0x4949ef:c.instructions+=2;goto B4949ef;
case 0x4949f2:c.instructions+=1;goto B4949f2;
case 0x4949f7:goto L4949f7;
case 0x4949f9:c.instructions+=3;goto B4949f9;
case 0x4949fc:c.instructions+=2;goto B4949fc;
case 0x4949fe:c.instructions+=1;goto B4949fe;
case 0x494a00:goto L494a00;
case 0x494a04:c.instructions+=5;goto B494a04;
case 0x494a05:c.instructions+=4;goto B494a05;
case 0x494a06:c.instructions+=3;goto B494a06;
case 0x494a0d:c.instructions+=2;goto B494a0d;
case 0x494a10:c.instructions+=1;goto B494a10;
case 0x494a20:goto L494a20;
case 0x494a24:c.instructions+=11;goto B494a24;
case 0x494a28:c.instructions+=10;goto B494a28;
case 0x494a2c:c.instructions+=9;goto B494a2c;
case 0x494a2d:c.instructions+=8;goto B494a2d;
case 0x494a31:c.instructions+=7;goto B494a31;
case 0x494a32:c.instructions+=6;goto B494a32;
case 0x494a36:c.instructions+=5;goto B494a36;
case 0x494a37:c.instructions+=4;goto B494a37;
case 0x494a38:c.instructions+=3;goto B494a38;
case 0x494a39:c.instructions+=2;goto B494a39;
case 0x494a3e:c.instructions+=1;goto B494a3e;
case 0x494a43:goto L494a43;
case 0x494a50:goto L494a50;
case 0x494a51:c.instructions+=7;goto B494a51;
case 0x494a52:c.instructions+=6;goto B494a52;
case 0x494a54:c.instructions+=5;goto B494a54;
case 0x494a57:c.instructions+=4;goto B494a57;
case 0x494a59:c.instructions+=3;goto B494a59;
case 0x494a5b:c.instructions+=2;goto B494a5b;
case 0x494a5f:c.instructions+=1;goto B494a5f;
case 0x494a65:goto L494a65;
case 0x494a66:c.instructions+=4;goto B494a66;
case 0x494a6a:c.instructions+=3;goto B494a6a;
case 0x494a6b:c.instructions+=2;goto B494a6b;
case 0x494a6c:c.instructions+=1;goto B494a6c;
case 0x494a70:goto L494a70;
case 0x494a73:c.instructions+=4;goto B494a73;
case 0x494a76:c.instructions+=3;goto B494a76;
case 0x494a7a:c.instructions+=2;goto B494a7a;
case 0x494a7c:c.instructions+=1;goto B494a7c;
case 0x494a7e:goto L494a7e;
case 0x494a81:c.instructions+=3;goto B494a81;
case 0x494a83:c.instructions+=2;goto B494a83;
case 0x494a85:c.instructions+=1;goto B494a85;
case 0x494a87:goto L494a87;
case 0x494a8a:c.instructions+=2;goto B494a8a;
case 0x494a8c:c.instructions+=1;goto B494a8c;
case 0x494a8e:goto L494a8e;
case 0x494a92:c.instructions+=3;goto B494a92;
case 0x494a94:c.instructions+=2;goto B494a94;
case 0x494a96:c.instructions+=1;goto B494a96;
case 0x494a98:goto L494a98;
case 0x494a9a:c.instructions+=3;goto B494a9a;
case 0x494a9c:c.instructions+=2;goto B494a9c;
case 0x494a9f:c.instructions+=1;goto B494a9f;
case 0x494aa1:goto L494aa1;
case 0x494aa4:c.instructions+=2;goto B494aa4;
case 0x494aa6:c.instructions+=1;goto B494aa6;
case 0x494aa8:goto L494aa8;
case 0x494aab:c.instructions+=2;goto B494aab;
case 0x494aad:c.instructions+=1;goto B494aad;
case 0x494aaf:goto L494aaf;
case 0x494ab3:c.instructions+=3;goto B494ab3;
case 0x494ab5:c.instructions+=2;goto B494ab5;
case 0x494ab7:c.instructions+=1;goto B494ab7;
case 0x494ab9:goto L494ab9;
case 0x494abb:c.instructions+=3;goto B494abb;
case 0x494abd:c.instructions+=2;goto B494abd;
case 0x494ac0:c.instructions+=1;goto B494ac0;
case 0x494ac2:goto L494ac2;
case 0x494ac4:c.instructions+=1;goto B494ac4;
case 0x494ac6:goto L494ac6;
case 0x494ac9:c.instructions+=2;goto B494ac9;
case 0x494acb:c.instructions+=1;goto B494acb;
case 0x494acd:goto L494acd;
case 0x494ad2:goto L494ad2;
case 0x494ad6:c.instructions+=5;goto B494ad6;
case 0x494ad9:c.instructions+=4;goto B494ad9;
case 0x494ada:c.instructions+=3;goto B494ada;
case 0x494adc:c.instructions+=2;goto B494adc;
case 0x494ae0:c.instructions+=1;goto B494ae0;
case 0x494ae2:goto L494ae2;
case 0x494ae3:c.instructions+=2;goto B494ae3;
case 0x494ae4:c.instructions+=1;goto B494ae4;
case 0x494ae5:goto L494ae5;
case 0x494ae7:c.instructions+=2;goto B494ae7;
case 0x494ae8:c.instructions+=1;goto B494ae8;
case 0x494aed:goto L494aed;
case 0x494aef:c.instructions+=2;goto B494aef;
case 0x494af0:c.instructions+=1;goto B494af0;
case 0x494af5:goto L494af5;
case 0x494af7:c.instructions+=2;goto B494af7;
case 0x494af8:c.instructions+=1;goto B494af8;
case 0x494afd:goto L494afd;
case 0x494b00:c.instructions+=4;goto B494b00;
case 0x494b0a:c.instructions+=3;goto B494b0a;
case 0x494b0b:c.instructions+=2;goto B494b0b;
case 0x494b0c:c.instructions+=1;goto B494b0c;
case 0x494b10:goto L494b10;
case 0x494b11:c.instructions+=9;goto B494b11;
case 0x494b12:c.instructions+=8;goto B494b12;
case 0x494b13:c.instructions+=7;goto B494b13;
case 0x494b15:c.instructions+=6;goto B494b15;
case 0x494b18:c.instructions+=5;goto B494b18;
case 0x494b1a:c.instructions+=4;goto B494b1a;
case 0x494b1c:c.instructions+=3;goto B494b1c;
case 0x494b1e:c.instructions+=2;goto B494b1e;
case 0x494b22:c.instructions+=1;goto B494b22;
case 0x494b28:goto L494b28;
case 0x494b29:c.instructions+=3;goto B494b29;
case 0x494b2a:c.instructions+=2;goto B494b2a;
case 0x494b2e:c.instructions+=1;goto B494b2e;
case 0x494b30:goto L494b30;
case 0x494b33:c.instructions+=4;goto B494b33;
case 0x494b36:c.instructions+=3;goto B494b36;
case 0x494b3a:c.instructions+=2;goto B494b3a;
case 0x494b3c:c.instructions+=1;goto B494b3c;
case 0x494b42:goto L494b42;
case 0x494b45:c.instructions+=3;goto B494b45;
case 0x494b47:c.instructions+=2;goto B494b47;
case 0x494b49:c.instructions+=1;goto B494b49;
case 0x494b4b:goto L494b4b;
case 0x494b4e:c.instructions+=2;goto B494b4e;
case 0x494b50:c.instructions+=1;goto B494b50;
case 0x494b52:goto L494b52;
case 0x494b56:c.instructions+=3;goto B494b56;
case 0x494b58:c.instructions+=2;goto B494b58;
case 0x494b5a:c.instructions+=1;goto B494b5a;
case 0x494b5c:goto L494b5c;
case 0x494b5e:c.instructions+=1;goto B494b5e;
case 0x494b61:goto L494b61;
case 0x494b64:c.instructions+=1;goto B494b64;
case 0x494b66:goto L494b66;
case 0x494b69:c.instructions+=2;goto B494b69;
case 0x494b6b:c.instructions+=1;goto B494b6b;
case 0x494b6d:goto L494b6d;
case 0x494b71:c.instructions+=3;goto B494b71;
case 0x494b73:c.instructions+=2;goto B494b73;
case 0x494b75:c.instructions+=1;goto B494b75;
case 0x494b77:goto L494b77;
case 0x494b79:c.instructions+=1;goto B494b79;
case 0x494b7c:goto L494b7c;
case 0x494b7f:c.instructions+=1;goto B494b7f;
case 0x494b81:goto L494b81;
case 0x494b83:c.instructions+=1;goto B494b83;
case 0x494b85:goto L494b85;
case 0x494b87:c.instructions+=1;goto B494b87;
case 0x494b8c:goto L494b8c;
case 0x494b8f:c.instructions+=2;goto B494b8f;
case 0x494b95:c.instructions+=1;goto B494b95;
case 0x494b97:goto L494b97;
case 0x494b9d:c.instructions+=1;goto B494b9d;
case 0x494b9f:goto L494b9f;
case 0x494ba5:c.instructions+=1;goto B494ba5;
case 0x494ba7:goto L494ba7;
case 0x494bad:c.instructions+=1;goto B494bad;
case 0x494baf:goto L494baf;
case 0x494bb5:c.instructions+=1;goto B494bb5;
case 0x494bb7:goto L494bb7;
case 0x494bbd:c.instructions+=1;goto B494bbd;
case 0x494bbf:goto L494bbf;
case 0x494bc0:c.instructions+=1;goto B494bc0;
case 0x494bc5:goto L494bc5;
case 0x494bc8:goto L494bc8;
case 0x494bcc:c.instructions+=5;goto B494bcc;
case 0x494bcf:c.instructions+=4;goto B494bcf;
case 0x494bd0:c.instructions+=3;goto B494bd0;
case 0x494bd2:c.instructions+=2;goto B494bd2;
case 0x494bd6:c.instructions+=1;goto B494bd6;
case 0x494bdc:goto L494bdc;
case 0x494bdd:c.instructions+=1;goto B494bdd;
case 0x494bde:goto L494bde;
case 0x494bdf:c.instructions+=2;goto B494bdf;
case 0x494be0:c.instructions+=1;goto B494be0;
case 0x494be5:goto L494be5;
case 0x494be6:c.instructions+=2;goto B494be6;
case 0x494be7:c.instructions+=1;goto B494be7;
case 0x494bec:goto L494bec;
case 0x494bed:c.instructions+=2;goto B494bed;
case 0x494bee:c.instructions+=1;goto B494bee;
case 0x494bf3:goto L494bf3;
case 0x494bf6:c.instructions+=5;goto B494bf6;
case 0x494bf7:c.instructions+=4;goto B494bf7;
case 0x494c01:c.instructions+=3;goto B494c01;
case 0x494c02:c.instructions+=2;goto B494c02;
case 0x494c03:c.instructions+=1;goto B494c03;
case 0x494c10:goto L494c10;
case 0x494c14:c.instructions+=16;goto B494c14;
case 0x494c1a:c.instructions+=15;goto B494c1a;
case 0x494c1e:c.instructions+=14;goto B494c1e;
case 0x494c21:c.instructions+=13;goto B494c21;
case 0x494c22:c.instructions+=12;goto B494c22;
case 0x494c26:c.instructions+=11;goto B494c26;
case 0x494c27:c.instructions+=10;goto B494c27;
case 0x494c28:c.instructions+=9;goto B494c28;
case 0x494c2b:c.instructions+=8;goto B494c2b;
case 0x494c2d:c.instructions+=7;goto B494c2d;
case 0x494c33:c.instructions+=6;goto B494c33;
case 0x494c35:c.instructions+=5;goto B494c35;
case 0x494c38:c.instructions+=4;goto B494c38;
case 0x494c39:c.instructions+=3;goto B494c39;
case 0x494c3a:c.instructions+=2;goto B494c3a;
case 0x494c3c:c.instructions+=1;goto B494c3c;
case 0x494c41:goto L494c41;
case 0x494c44:c.instructions+=3;goto B494c44;
case 0x494c47:c.instructions+=2;goto B494c47;
case 0x494c4a:c.instructions+=1;goto B494c4a;
case 0x494c4c:goto L494c4c;
case 0x494c4f:c.instructions+=7;goto B494c4f;
case 0x494c51:c.instructions+=6;goto B494c51;
case 0x494c53:c.instructions+=5;goto B494c53;
case 0x494c54:c.instructions+=4;goto B494c54;
case 0x494c55:c.instructions+=3;goto B494c55;
case 0x494c56:c.instructions+=2;goto B494c56;
case 0x494c58:c.instructions+=1;goto B494c58;
case 0x494c5d:goto L494c5d;
case 0x494c5e:c.instructions+=3;goto B494c5e;
case 0x494c5f:c.instructions+=2;goto B494c5f;
case 0x494c60:c.instructions+=1;goto B494c60;
case 0x494c61:goto L494c61;
case 0x494c64:c.instructions+=7;goto B494c64;
case 0x494c66:c.instructions+=6;goto B494c66;
case 0x494c68:c.instructions+=5;goto B494c68;
case 0x494c69:c.instructions+=4;goto B494c69;
case 0x494c6a:c.instructions+=3;goto B494c6a;
case 0x494c6b:c.instructions+=2;goto B494c6b;
case 0x494c6d:c.instructions+=1;goto B494c6d;
case 0x494c72:goto L494c72;
case 0x494c73:c.instructions+=3;goto B494c73;
case 0x494c74:c.instructions+=2;goto B494c74;
case 0x494c75:c.instructions+=1;goto B494c75;
case 0x494c80:goto L494c80;
case 0x494c84:c.instructions+=12;goto B494c84;
case 0x494c8a:c.instructions+=11;goto B494c8a;
case 0x494c8e:c.instructions+=10;goto B494c8e;
case 0x494c91:c.instructions+=9;goto B494c91;
case 0x494c92:c.instructions+=8;goto B494c92;
case 0x494c93:c.instructions+=7;goto B494c93;
case 0x494c96:c.instructions+=6;goto B494c96;
case 0x494c9a:c.instructions+=5;goto B494c9a;
case 0x494c9e:c.instructions+=4;goto B494c9e;
case 0x494ca1:c.instructions+=3;goto B494ca1;
case 0x494ca8:c.instructions+=2;goto B494ca8;
case 0x494cab:c.instructions+=1;goto B494cab;
case 0x494cad:goto L494cad;
case 0x494cb0:c.instructions+=2;goto B494cb0;
case 0x494cb2:c.instructions+=1;goto B494cb2;
case 0x494cb4:goto L494cb4;
case 0x494cb7:c.instructions+=1;goto B494cb7;
case 0x494cb9:goto L494cb9;
case 0x494cbb:c.instructions+=4;goto B494cbb;
case 0x494cbc:c.instructions+=3;goto B494cbc;
case 0x494cbd:c.instructions+=2;goto B494cbd;
case 0x494cbf:c.instructions+=1;goto B494cbf;
case 0x494cc4:goto L494cc4;
case 0x494cc7:c.instructions+=2;goto B494cc7;
case 0x494cc9:c.instructions+=1;goto B494cc9;
case 0x494ccb:goto L494ccb;
case 0x494cce:c.instructions+=2;goto B494cce;
case 0x494cd0:c.instructions+=1;goto B494cd0;
case 0x494cd2:goto L494cd2;
case 0x494cd5:c.instructions+=7;goto B494cd5;
case 0x494cd7:c.instructions+=6;goto B494cd7;
case 0x494cd9:c.instructions+=5;goto B494cd9;
case 0x494cda:c.instructions+=4;goto B494cda;
case 0x494cdb:c.instructions+=3;goto B494cdb;
case 0x494cde:c.instructions+=2;goto B494cde;
case 0x494cdf:c.instructions+=1;goto B494cdf;
case 0x494ce4:goto L494ce4;
case 0x494ce7:c.instructions+=2;goto B494ce7;
case 0x494ce9:c.instructions+=1;goto B494ce9;
case 0x494ceb:goto L494ceb;
case 0x494cf2:c.instructions+=7;goto B494cf2;
case 0x494cf5:c.instructions+=6;goto B494cf5;
case 0x494cfb:c.instructions+=5;goto B494cfb;
case 0x494cfc:c.instructions+=4;goto B494cfc;
case 0x494d01:c.instructions+=3;goto B494d01;
case 0x494d06:c.instructions+=2;goto B494d06;
case 0x494d0c:c.instructions+=1;goto B494d0c;
case 0x494d0e:goto L494d0e;
case 0x494d13:c.instructions+=4;goto B494d13;
case 0x494d14:c.instructions+=3;goto B494d14;
case 0x494d16:c.instructions+=2;goto B494d16;
case 0x494d17:c.instructions+=1;goto B494d17;
case 0x494d19:goto L494d19;
case 0x494d23:goto L494d23;
case 0x494d30:goto L494d30;
case 0x494d34:c.instructions+=12;goto B494d34;
case 0x494d38:c.instructions+=11;goto B494d38;
case 0x494d3c:c.instructions+=10;goto B494d3c;
case 0x494d3d:c.instructions+=9;goto B494d3d;
case 0x494d3e:c.instructions+=8;goto B494d3e;
case 0x494d42:c.instructions+=7;goto B494d42;
case 0x494d46:c.instructions+=6;goto B494d46;
case 0x494d47:c.instructions+=5;goto B494d47;
case 0x494d49:c.instructions+=4;goto B494d49;
case 0x494d4d:c.instructions+=3;goto B494d4d;
case 0x494d4e:c.instructions+=2;goto B494d4e;
case 0x494d53:c.instructions+=1;goto B494d53;
case 0x494d58:goto L494d58;
case 0x494d60:goto L494d60;
case 0x494d64:c.instructions+=11;goto B494d64;
case 0x494d68:c.instructions+=10;goto B494d68;
case 0x494d6c:c.instructions+=9;goto B494d6c;
case 0x494d6d:c.instructions+=8;goto B494d6d;
case 0x494d71:c.instructions+=7;goto B494d71;
case 0x494d72:c.instructions+=6;goto B494d72;
case 0x494d76:c.instructions+=5;goto B494d76;
case 0x494d77:c.instructions+=4;goto B494d77;
case 0x494d78:c.instructions+=3;goto B494d78;
case 0x494d79:c.instructions+=2;goto B494d79;
case 0x494d7e:c.instructions+=1;goto B494d7e;
case 0x494d83:goto L494d83;
case 0x494d90:goto L494d90;
case 0x494d91:c.instructions+=5;goto B494d91;
case 0x494d92:c.instructions+=4;goto B494d92;
case 0x494d94:c.instructions+=3;goto B494d94;
case 0x494d96:c.instructions+=2;goto B494d96;
case 0x494d98:c.instructions+=1;goto B494d98;
case 0x494d9a:goto L494d9a;
case 0x494da0:goto L494da0;
case 0x494da3:c.instructions+=5;goto B494da3;
case 0x494da5:c.instructions+=4;goto B494da5;
case 0x494da7:c.instructions+=3;goto B494da7;
case 0x494daa:c.instructions+=2;goto B494daa;
case 0x494dac:c.instructions+=1;goto B494dac;
case 0x494db1:goto L494db1;
case 0x494db2:c.instructions+=1;goto B494db2;
case 0x494db7:goto L494db7;
case 0x494db9:c.instructions+=3;goto B494db9;
case 0x494dbc:c.instructions+=2;goto B494dbc;
case 0x494dbe:c.instructions+=1;goto B494dbe;
case 0x494dc0:goto L494dc0;
case 0x494dc1:c.instructions+=2;goto B494dc1;
case 0x494dc2:c.instructions+=1;goto B494dc2;
case 0x494dd0:goto L494dd0;
case 0x494dd1:c.instructions+=15;goto B494dd1;
case 0x494dd5:c.instructions+=14;goto B494dd5;
case 0x494dd8:c.instructions+=13;goto B494dd8;
case 0x494dd9:c.instructions+=12;goto B494dd9;
case 0x494dda:c.instructions+=11;goto B494dda;
case 0x494ddb:c.instructions+=10;goto B494ddb;
case 0x494ddf:c.instructions+=9;goto B494ddf;
case 0x494de0:c.instructions+=8;goto B494de0;
case 0x494de2:c.instructions+=7;goto B494de2;
case 0x494de5:c.instructions+=6;goto B494de5;
case 0x494de7:c.instructions+=5;goto B494de7;
case 0x494de9:c.instructions+=4;goto B494de9;
case 0x494deb:c.instructions+=3;goto B494deb;
case 0x494def:c.instructions+=2;goto B494def;
case 0x494df3:c.instructions+=1;goto B494df3;
case 0x494df5:goto L494df5;
case 0x494df7:c.instructions+=2;goto B494df7;
case 0x494dfc:c.instructions+=1;goto B494dfc;
case 0x494dfe:goto L494dfe;
case 0x494e01:c.instructions+=1;goto B494e01;
case 0x494e03:goto L494e03;
case 0x494e08:c.instructions+=1;goto B494e08;
case 0x494e0a:goto L494e0a;
case 0x494e0f:c.instructions+=1;goto B494e0f;
case 0x494e11:goto L494e11;
case 0x494e16:c.instructions+=1;goto B494e16;
case 0x494e18:goto L494e18;
case 0x494e1b:c.instructions+=10;goto B494e1b;
case 0x494e20:c.instructions+=9;goto B494e20;
case 0x494e22:c.instructions+=8;goto B494e22;
case 0x494e24:c.instructions+=7;goto B494e24;
case 0x494e26:c.instructions+=6;goto B494e26;
case 0x494e28:c.instructions+=5;goto B494e28;
case 0x494e2b:c.instructions+=4;goto B494e2b;
case 0x494e2d:c.instructions+=3;goto B494e2d;
case 0x494e31:c.instructions+=2;goto B494e31;
case 0x494e34:c.instructions+=1;goto B494e34;
case 0x494e36:goto L494e36;
case 0x494e3b:c.instructions+=1;goto B494e3b;
case 0x494e3d:goto L494e3d;
case 0x494e40:c.instructions+=1;goto B494e40;
case 0x494e44:goto L494e44;
case 0x494e47:c.instructions+=3;goto B494e47;
case 0x494e4b:c.instructions+=2;goto B494e4b;
case 0x494e4d:c.instructions+=1;goto B494e4d;
case 0x494e4f:goto L494e4f;
case 0x494e52:c.instructions+=4;goto B494e52;
case 0x494e55:c.instructions+=3;goto B494e55;
case 0x494e56:c.instructions+=2;goto B494e56;
case 0x494e58:c.instructions+=1;goto B494e58;
case 0x494e5d:goto L494e5d;
case 0x494e5f:c.instructions+=1;goto B494e5f;
case 0x494e61:goto L494e61;
case 0x494e65:c.instructions+=5;goto B494e65;
case 0x494e68:c.instructions+=4;goto B494e68;
case 0x494e69:c.instructions+=3;goto B494e69;
case 0x494e6a:c.instructions+=2;goto B494e6a;
case 0x494e6b:c.instructions+=1;goto B494e6b;
case 0x494e70:goto L494e70;
case 0x494e73:c.instructions+=3;goto B494e73;
case 0x494e75:c.instructions+=2;goto B494e75;
case 0x494e77:c.instructions+=1;goto B494e77;
case 0x494e79:goto L494e79;
case 0x494e7b:c.instructions+=1;goto B494e7b;
case 0x494e80:goto L494e80;
case 0x494e86:c.instructions+=3;goto B494e86;
case 0x494e87:c.instructions+=2;goto B494e87;
case 0x494e88:c.instructions+=1;goto B494e88;
case 0x494e8d:goto L494e8d;
case 0x494e90:goto L494e90;
case 0x494e93:c.instructions+=6;goto B494e93;
case 0x494e94:c.instructions+=5;goto B494e94;
case 0x494e95:c.instructions+=4;goto B494e95;
case 0x494e96:c.instructions+=3;goto B494e96;
case 0x494e97:c.instructions+=2;goto B494e97;
case 0x494e98:c.instructions+=1;goto B494e98;
case 0x494ea0:goto L494ea0;
case 0x494ea1:c.instructions+=6;goto B494ea1;
case 0x494ea5:c.instructions+=5;goto B494ea5;
case 0x494ea7:c.instructions+=4;goto B494ea7;
case 0x494eac:c.instructions+=3;goto B494eac;
case 0x494ead:c.instructions+=2;goto B494ead;
case 0x494eae:c.instructions+=1;goto B494eae;
case 0x494eb4:goto L494eb4;
case 0x494eb7:c.instructions+=5;goto B494eb7;
case 0x494eba:c.instructions+=4;goto B494eba;
case 0x494ebe:c.instructions+=3;goto B494ebe;
case 0x494ec0:c.instructions+=2;goto B494ec0;
case 0x494ec2:c.instructions+=1;goto B494ec2;
case 0x494ec4:goto L494ec4;
case 0x494ec6:c.instructions+=2;goto B494ec6;
case 0x494ecb:c.instructions+=1;goto B494ecb;
case 0x494ecd:goto L494ecd;
case 0x494ece:c.instructions+=1;goto B494ece;
case 0x494ed3:goto L494ed3;
case 0x494ed5:c.instructions+=4;goto B494ed5;
case 0x494ed8:c.instructions+=3;goto B494ed8;
case 0x494edb:c.instructions+=2;goto B494edb;
case 0x494ee1:c.instructions+=1;goto B494ee1;
case 0x494ee3:goto L494ee3;
case 0x494ee8:c.instructions+=1;goto B494ee8;
case 0x494eea:goto L494eea;
case 0x494eed:c.instructions+=7;goto B494eed;
case 0x494ef1:c.instructions+=6;goto B494ef1;
case 0x494ef5:c.instructions+=5;goto B494ef5;
case 0x494ef8:c.instructions+=4;goto B494ef8;
case 0x494efa:c.instructions+=3;goto B494efa;
case 0x494efe:c.instructions+=2;goto B494efe;
case 0x494f01:c.instructions+=1;goto B494f01;
case 0x494f03:goto L494f03;
case 0x494f0a:goto L494f0a;
case 0x494f0d:c.instructions+=5;goto B494f0d;
case 0x494f13:c.instructions+=4;goto B494f13;
case 0x494f15:c.instructions+=3;goto B494f15;
case 0x494f1a:c.instructions+=2;goto B494f1a;
case 0x494f1d:c.instructions+=1;goto B494f1d;
case 0x494f23:goto L494f23;
case 0x494f26:c.instructions+=3;goto B494f26;
case 0x494f2a:c.instructions+=2;goto B494f2a;
case 0x494f2c:c.instructions+=1;goto B494f2c;
case 0x494f2e:goto L494f2e;
case 0x494f31:c.instructions+=2;goto B494f31;
case 0x494f32:c.instructions+=1;goto B494f32;
case 0x494f37:goto L494f37;
case 0x494f39:c.instructions+=3;goto B494f39;
case 0x494f3c:c.instructions+=2;goto B494f3c;
case 0x494f3e:c.instructions+=1;goto B494f3e;
case 0x494f40:goto L494f40;
case 0x494f43:c.instructions+=11;goto B494f43;
case 0x494f46:c.instructions+=10;goto B494f46;
case 0x494f49:c.instructions+=9;goto B494f49;
case 0x494f4f:c.instructions+=8;goto B494f4f;
case 0x494f52:c.instructions+=7;goto B494f52;
case 0x494f54:c.instructions+=6;goto B494f54;
case 0x494f58:c.instructions+=5;goto B494f58;
case 0x494f59:c.instructions+=4;goto B494f59;
case 0x494f5b:c.instructions+=3;goto B494f5b;
case 0x494f5c:c.instructions+=2;goto B494f5c;
case 0x494f5e:c.instructions+=1;goto B494f5e;
case 0x494f63:goto L494f63;
case 0x494f66:c.instructions+=4;goto B494f66;
case 0x494f68:c.instructions+=3;goto B494f68;
case 0x494f6b:c.instructions+=2;goto B494f6b;
case 0x494f6d:c.instructions+=1;goto B494f6d;
case 0x494f70:goto L494f70;
case 0x494f71:c.instructions+=4;goto B494f71;
case 0x494f72:c.instructions+=3;goto B494f72;
case 0x494f77:c.instructions+=2;goto B494f77;
case 0x494f78:c.instructions+=1;goto B494f78;
case 0x494f79:goto L494f79;
case 0x494f7e:c.instructions+=1;goto B494f7e;
case 0x494f80:goto L494f80;
case 0x494f81:c.instructions+=1;goto B494f81;
case 0x494f86:goto L494f86;
case 0x494f89:c.instructions+=5;goto B494f89;
case 0x494f8a:c.instructions+=4;goto B494f8a;
case 0x494f8b:c.instructions+=3;goto B494f8b;
case 0x494f90:c.instructions+=2;goto B494f90;
case 0x494f91:c.instructions+=1;goto B494f91;
case 0x494f92:goto L494f92;
case 0x494f97:c.instructions+=1;goto B494f97;
case 0x494f9d:goto L494f9d;
case 0x494fa0:c.instructions+=4;goto B494fa0;
case 0x494fa4:c.instructions+=3;goto B494fa4;
case 0x494fa8:c.instructions+=2;goto B494fa8;
case 0x494fac:c.instructions+=1;goto B494fac;
case 0x494fae:goto L494fae;
case 0x494fb2:c.instructions+=12;goto B494fb2;
case 0x494fb6:c.instructions+=11;goto B494fb6;
case 0x494fbb:c.instructions+=10;goto B494fbb;
case 0x494fbd:c.instructions+=9;goto B494fbd;
case 0x494fc2:c.instructions+=8;goto B494fc2;
case 0x494fc6:c.instructions+=7;goto B494fc6;
case 0x494fc7:c.instructions+=6;goto B494fc7;
case 0x494fc9:c.instructions+=5;goto B494fc9;
case 0x494fca:c.instructions+=4;goto B494fca;
case 0x494fcd:c.instructions+=3;goto B494fcd;
case 0x494fd0:c.instructions+=2;goto B494fd0;
case 0x494fd3:c.instructions+=1;goto B494fd3;
case 0x494fd8:goto L494fd8;
case 0x494fdb:c.instructions+=2;goto B494fdb;
case 0x494fdd:c.instructions+=1;goto B494fdd;
case 0x494fdf:goto L494fdf;
case 0x494fe3:c.instructions+=8;goto B494fe3;
case 0x494fe9:c.instructions+=7;goto B494fe9;
case 0x494fea:c.instructions+=6;goto B494fea;
case 0x494feb:c.instructions+=5;goto B494feb;
case 0x494fec:c.instructions+=4;goto B494fec;
case 0x494fed:c.instructions+=3;goto B494fed;
case 0x494fee:c.instructions+=2;goto B494fee;
case 0x494ff0:c.instructions+=1;goto B494ff0;
case 0x494ff5:goto L494ff5;
case 0x494ff7:c.instructions+=2;goto B494ff7;
case 0x494ffa:c.instructions+=1;goto B494ffa;
case 0x494fff:goto L494fff;
default:missing_instruction(c.pc);}
B494004:L494004:{c.instructions+=8;NFSU2_TR(0x494004);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B494005:{NFSU2_TR(0x494005);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1fffull))));
}
B49400a:{NFSU2_TR(0x49400a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x830da4ull))));
}
B49400f:{NFSU2_TR(0x49400f);
__builtin_memmove(gp(0x830da0),(R+4),4);
}
B494015:{NFSU2_TR(0x494015);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))-u32(u8(0x1ull))));
s1(u32(r4(R+0)),r1(U+0));
}
B494017:{NFSU2_TR(0x494017);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494018:{NFSU2_TR(0x494018);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w2(U+4,u16(0xffffull));
s2(u32(r4(U+0)),r2(U+4));
}
B49401e:{NFSU2_TR(0x49401e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494023ull));
TAIL_STATIC(0x493650u,493);
}
B494023:L494023:{c.instructions+=18;NFSU2_TR(0x494023);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494026:{NFSU2_TR(0x494026);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B494029:{NFSU2_TR(0x494029);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B49402b:{NFSU2_TR(0x49402b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49402e:{NFSU2_TR(0x49402e);
__builtin_memmove((R+4),gp(0x82d384),4);
}
B494034:{NFSU2_TR(0x494034);
__builtin_memmove((R+0),gp(0x82d388),4);
}
B494039:{NFSU2_TR(0x494039);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49403c:{NFSU2_TR(0x49403c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B49403d:{NFSU2_TR(0x49403d);
s4(0x82dab0,u32(0x1ull));
}
B494047:{NFSU2_TR(0x494047);
__builtin_memmove(gp(0x82d384),(R+4),4);
}
B49404d:{NFSU2_TR(0x49404d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494050:{NFSU2_TR(0x494050);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494051:{NFSU2_TR(0x494051);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B494053:{NFSU2_TR(0x494053);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494054:{NFSU2_TR(0x494054);
__builtin_memmove(gp(0x82d388),(R+0),4);
}
B494059:{NFSU2_TR(0x494059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49405a:{NFSU2_TR(0x49405a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49405b:{NFSU2_TR(0x49405b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494060:L494060:{c.instructions+=3;NFSU2_TR(0x494060);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494064:{NFSU2_TR(0x494064);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x80134000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B49406a:{NFSU2_TR(0x49406a);
if(r1(R+518)){{goto L49406f;}}
}
B49406c:L49406c:{c.instructions+=2;NFSU2_TR(0x49406c);
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
B49406e:{NFSU2_TR(0x49406e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49406f:L49406f:{c.instructions+=9;NFSU2_TR(0x49406f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494072:{NFSU2_TR(0x494072);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494073:{NFSU2_TR(0x494073);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494074:{NFSU2_TR(0x494074);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494075:{NFSU2_TR(0x494075);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494078:{NFSU2_TR(0x494078);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B49407c:{NFSU2_TR(0x49407c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B49407e:{NFSU2_TR(0x49407e);
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
B494080:{NFSU2_TR(0x494080);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L4940ce;}}
}
B494082:L494082:{c.instructions+=3;NFSU2_TR(0x494082);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B494084:{NFSU2_TR(0x494084);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80134001ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494089:{NFSU2_TR(0x494089);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4940a5;}}
}
B49408b:L49408b:{c.instructions+=2;NFSU2_TR(0x49408b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49408d:{NFSU2_TR(0x49408d);
if(r1(R+518)){{goto L494098;}}
}
B49408f:L49408f:{c.instructions+=2;NFSU2_TR(0x49408f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494090:{NFSU2_TR(0x494090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494095ull));
TAIL_STATIC(0x490650u,490);
}
B494095:L494095:{c.instructions+=1;NFSU2_TR(0x494095);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B494098:L494098:{c.instructions+=2;NFSU2_TR(0x494098);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494099:{NFSU2_TR(0x494099);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49409eull));
TAIL_STATIC(0x48d910u,48d);
}
B49409e:L49409e:{c.instructions+=3;NFSU2_TR(0x49409e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4940a1:{NFSU2_TR(0x4940a1);
__builtin_memmove((R+28),(R+0),4);
}
B4940a3:{NFSU2_TR(0x4940a3);
{goto L4940b6;}
}
B4940a5:L4940a5:{c.instructions+=2;NFSU2_TR(0x4940a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80134010ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4940aa:{NFSU2_TR(0x4940aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4940b6;}}
}
B4940ac:L4940ac:{c.instructions+=3;NFSU2_TR(0x4940ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4940ad:{NFSU2_TR(0x4940ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4940ae:{NFSU2_TR(0x4940ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4940b3ull));
TAIL_STATIC(0x493bb0u,493);
}
B4940b3:L4940b3:{c.instructions+=1;NFSU2_TR(0x4940b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4940b6:L4940b6:{c.instructions+=4;NFSU2_TR(0x4940b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4940b9:{NFSU2_TR(0x4940b9);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B4940bd:{NFSU2_TR(0x4940bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B4940bf:{NFSU2_TR(0x4940bf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494082u);}goto L494082;}}
}
B4940c1:L4940c1:{c.instructions+=2;NFSU2_TR(0x4940c1);
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
B4940c3:{NFSU2_TR(0x4940c3);
if(r1(R+518)){{goto L4940ce;}}
}
B4940c5:L4940c5:{c.instructions+=2;NFSU2_TR(0x4940c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4940c6:{NFSU2_TR(0x4940c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4940cbull));
TAIL_STATIC(0x490650u,490);
}
B4940cb:L4940cb:{c.instructions+=1;NFSU2_TR(0x4940cb);
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
B4940ce:L4940ce:{c.instructions+=5;NFSU2_TR(0x4940ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4940cf:{NFSU2_TR(0x4940cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4940d0:{NFSU2_TR(0x4940d0);
w4(R+0,u32(0x1ull));
}
B4940d5:{NFSU2_TR(0x4940d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4940d6:{NFSU2_TR(0x4940d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4940e0:L4940e0:{c.instructions+=3;NFSU2_TR(0x4940e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4940e4:{NFSU2_TR(0x4940e4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x80134000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4940ea:{NFSU2_TR(0x4940ea);
if(r1(R+518)){{goto L4940ef;}}
}
B4940ec:L4940ec:{c.instructions+=2;NFSU2_TR(0x4940ec);
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
B4940ee:{NFSU2_TR(0x4940ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4940ef:L4940ef:{c.instructions+=9;NFSU2_TR(0x4940ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4940f2:{NFSU2_TR(0x4940f2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4940f3:{NFSU2_TR(0x4940f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4940f4:{NFSU2_TR(0x4940f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4940f5:{NFSU2_TR(0x4940f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4940f8:{NFSU2_TR(0x4940f8);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B4940fc:{NFSU2_TR(0x4940fc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4940fe:{NFSU2_TR(0x4940fe);
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
B494100:{NFSU2_TR(0x494100);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L494134;}}
}
B494102:L494102:{c.instructions+=3;NFSU2_TR(0x494102);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B494104:{NFSU2_TR(0x494104);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80134001ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494109:{NFSU2_TR(0x494109);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L494118;}}
}
B49410b:L49410b:{c.instructions+=2;NFSU2_TR(0x49410b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49410c:{NFSU2_TR(0x49410c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494111ull));
TAIL_STATIC(0x493ea0u,493);
}
B494111:L494111:{c.instructions+=3;NFSU2_TR(0x494111);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B494114:{NFSU2_TR(0x494114);
__builtin_memmove((R+28),(R+0),4);
}
B494116:{NFSU2_TR(0x494116);
{goto L494129;}
}
B494118:L494118:{c.instructions+=2;NFSU2_TR(0x494118);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80134010ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49411d:{NFSU2_TR(0x49411d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L494129;}}
}
B49411f:L49411f:{c.instructions+=3;NFSU2_TR(0x49411f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494120:{NFSU2_TR(0x494120);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494121:{NFSU2_TR(0x494121);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494126ull));
TAIL_STATIC(0x493f20u,493);
}
B494126:L494126:{c.instructions+=1;NFSU2_TR(0x494126);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B494129:L494129:{c.instructions+=4;NFSU2_TR(0x494129);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49412c:{NFSU2_TR(0x49412c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B494130:{NFSU2_TR(0x494130);
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
B494132:{NFSU2_TR(0x494132);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494102u);}goto L494102;}}
}
B494134:L494134:{c.instructions+=5;NFSU2_TR(0x494134);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494135:{NFSU2_TR(0x494135);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494136:{NFSU2_TR(0x494136);
w4(R+0,u32(0x1ull));
}
B49413b:{NFSU2_TR(0x49413b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49413c:{NFSU2_TR(0x49413c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494140:L494140:{c.instructions+=5;NFSU2_TR(0x494140);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494141:{NFSU2_TR(0x494141);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B494145:{NFSU2_TR(0x494145);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x80134010ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x80134010ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x80134010ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B49414b:{NFSU2_TR(0x49414b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49414c:{NFSU2_TR(0x49414c);
if(r1(R+518)){{goto L494168;}}
}
B49414e:L49414e:{c.instructions+=2;NFSU2_TR(0x49414e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49414f:{NFSU2_TR(0x49414f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494154ull));
TAIL_STATIC(0x4022c0u,402);
}
B494154:L494154:{c.instructions+=6;NFSU2_TR(0x494154);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494157:{NFSU2_TR(0x494157);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B49415b:{NFSU2_TR(0x49415b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49415c:{NFSU2_TR(0x49415c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B49415f:{NFSU2_TR(0x49415f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494160:{NFSU2_TR(0x494160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494165ull));
TAIL_STATIC(0x4022c0u,402);
}
B494165:L494165:{c.instructions+=1;NFSU2_TR(0x494165);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B494168:L494168:{c.instructions+=5;NFSU2_TR(0x494168);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49416c:{NFSU2_TR(0x49416c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494172:{NFSU2_TR(0x494172);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494173:{NFSU2_TR(0x494173);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494174:{NFSU2_TR(0x494174);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494179ull));
TAIL_STATIC(0x493bb0u,493);
}
B494179:L494179:{c.instructions+=3;NFSU2_TR(0x494179);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49417f:{NFSU2_TR(0x49417f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494180:{NFSU2_TR(0x494180);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494185ull));
TAIL_STATIC(0x490650u,490);
}
B494185:L494185:{c.instructions+=4;NFSU2_TR(0x494185);
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
B494188:{NFSU2_TR(0x494188);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494189:{NFSU2_TR(0x494189);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49418a:{NFSU2_TR(0x49418a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494190:L494190:{c.instructions+=5;NFSU2_TR(0x494190);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494194:{NFSU2_TR(0x494194);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B494196:{NFSU2_TR(0x494196);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494198:{NFSU2_TR(0x494198);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494199:{NFSU2_TR(0x494199);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49419eull));
TAIL_STATIC(0x48df90u,48d);
}
B49419e:L49419e:{c.instructions+=3;NFSU2_TR(0x49419e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4941a1:{NFSU2_TR(0x4941a1);
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
B4941a3:{NFSU2_TR(0x4941a3);
if(r1(R+518)){{goto L4941bd;}}
}
B4941a5:L4941a5:{c.instructions+=6;NFSU2_TR(0x4941a5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4941a9:{NFSU2_TR(0x4941a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4941af:{NFSU2_TR(0x4941af);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4941b3:{NFSU2_TR(0x4941b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4941b4:{NFSU2_TR(0x4941b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4941b5:{NFSU2_TR(0x4941b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4941baull));
TAIL_STATIC(0x493f20u,493);
}
B4941ba:L4941ba:{c.instructions+=1;NFSU2_TR(0x4941ba);
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
B4941bd:L4941bd:{c.instructions+=1;NFSU2_TR(0x4941bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4941c0:L4941c0:{c.instructions+=10;NFSU2_TR(0x4941c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4941c4:{NFSU2_TR(0x4941c4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4941c8:{NFSU2_TR(0x4941c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4941cc:{NFSU2_TR(0x4941cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4941cd:{NFSU2_TR(0x4941cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4941d1:{NFSU2_TR(0x4941d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4941d2:{NFSU2_TR(0x4941d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4941d3:{NFSU2_TR(0x4941d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4941d4:{NFSU2_TR(0x4941d4);
w4(R+4,u32(0x82dbc8ull));
}
B4941d9:{NFSU2_TR(0x4941d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4941deull));
TAIL_STATIC(0x4933f0u,493);
}
B4941de:L4941de:{c.instructions+=4;NFSU2_TR(0x4941de);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4941e0:{NFSU2_TR(0x4941e0);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4941e2:{NFSU2_TR(0x4941e2);
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
B4941e4:{NFSU2_TR(0x4941e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4941f0:L4941f0:{c.instructions+=8;NFSU2_TR(0x4941f0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4941f4:{NFSU2_TR(0x4941f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4941f8:{NFSU2_TR(0x4941f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4941fc:{NFSU2_TR(0x4941fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4941fd:{NFSU2_TR(0x4941fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4941fe:{NFSU2_TR(0x4941fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4941ff:{NFSU2_TR(0x4941ff);
w4(R+4,u32(0x82dbc8ull));
}
B494204:{NFSU2_TR(0x494204);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494209ull));
TAIL_STATIC(0x493560u,493);
}
B494209:L494209:{c.instructions+=1;NFSU2_TR(0x494209);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494210:L494210:{c.instructions+=4;NFSU2_TR(0x494210);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494214:{NFSU2_TR(0x494214);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49421a:{NFSU2_TR(0x49421a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49421e:{NFSU2_TR(0x49421e);
TAIL_STATIC(0x493ea0u,493);
}
B494230:L494230:{c.instructions+=5;NFSU2_TR(0x494230);
__builtin_memmove((R+0),(R+4),4);
}
B494232:{NFSU2_TR(0x494232);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((R+8),(U+0),4);
}
B494235:{NFSU2_TR(0x494235);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+8)),r4(U+0));
}
B494237:{NFSU2_TR(0x494237);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49423a:{NFSU2_TR(0x49423a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494240:L494240:{c.instructions+=5;NFSU2_TR(0x494240);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494243:{NFSU2_TR(0x494243);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494244:{NFSU2_TR(0x494244);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494247:{NFSU2_TR(0x494247);
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
B494249:{NFSU2_TR(0x494249);
if(r1(R+518)){{goto L494269;}}
}
B49424b:L49424b:{c.instructions+=1;NFSU2_TR(0x49424b);
{goto L494250;}
}
B494250:L494250:{c.instructions+=6;NFSU2_TR(0x494250);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B494252:{NFSU2_TR(0x494252);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494255:{NFSU2_TR(0x494255);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B494257:{NFSU2_TR(0x494257);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494258:{NFSU2_TR(0x494258);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49425b:{NFSU2_TR(0x49425b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494260ull));
TAIL_STATIC(0x575630u,575);
}
B494260:L494260:{c.instructions+=4;NFSU2_TR(0x494260);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B494262:{NFSU2_TR(0x494262);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B494265:{NFSU2_TR(0x494265);
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
B494267:{NFSU2_TR(0x494267);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494250u);}goto L494250;}}
}
B494269:L494269:{c.instructions+=2;NFSU2_TR(0x494269);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49426a:{NFSU2_TR(0x49426a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494270:L494270:{c.instructions+=8;NFSU2_TR(0x494270);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494271:{NFSU2_TR(0x494271);
__builtin_memmove((R+20),(R+16),4);
}
B494273:{NFSU2_TR(0x494273);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B494276:{NFSU2_TR(0x494276);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494279:{NFSU2_TR(0x494279);
__builtin_memmove((R+4),(R+0),4);
}
B49427b:{NFSU2_TR(0x49427b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B49427e:{NFSU2_TR(0x49427e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494281:{NFSU2_TR(0x494281);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49428b;}}
}
B494283:L494283:{c.instructions+=2;NFSU2_TR(0x494283);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B494285:{NFSU2_TR(0x494285);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49428b;}}
}
B494287:L494287:{c.instructions+=2;NFSU2_TR(0x494287);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B494289:{NFSU2_TR(0x494289);
{goto L494290;}
}
B49428b:L49428b:{c.instructions+=1;NFSU2_TR(0x49428b);
w4(R+4,u32(0x1ull));
}
B494290:L494290:{c.instructions+=15;NFSU2_TR(0x494290);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B494292:{NFSU2_TR(0x494292);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494293:{NFSU2_TR(0x494293);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B494295:{NFSU2_TR(0x494295);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494296:{NFSU2_TR(0x494296);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B494299:{NFSU2_TR(0x494299);
w4(R+0,u32(~u32(r4(R+0))));
}
B49429b:{NFSU2_TR(0x49429b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B49429e:{NFSU2_TR(0x49429e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4942a0:{NFSU2_TR(0x4942a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B4942a3:{NFSU2_TR(0x4942a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4942a6:{NFSU2_TR(0x4942a6);
__builtin_memmove((R+12),(R+4),4);
}
B4942a8:{NFSU2_TR(0x4942a8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4942a9:{NFSU2_TR(0x4942a9);
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
B4942ab:{NFSU2_TR(0x4942ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4942ae:{NFSU2_TR(0x4942ae);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L494370;}}
}
B4942b4:L4942b4:{c.instructions+=3;NFSU2_TR(0x4942b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4942b5:{NFSU2_TR(0x4942b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4942b8:{NFSU2_TR(0x4942b8);
{goto L4942c0;}
}
B4942c0:L4942c0:{c.instructions+=4;NFSU2_TR(0x4942c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82dae8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4942c7:{NFSU2_TR(0x4942c7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4942c9:{NFSU2_TR(0x4942c9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4942cb:{NFSU2_TR(0x4942cb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L494366;}}
}
B4942d1:L4942d1:{c.instructions+=6;NFSU2_TR(0x4942d1);
__builtin_memmove((R+4),(R+12),4);
}
B4942d3:{NFSU2_TR(0x4942d3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xc8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4942d9:{NFSU2_TR(0x4942d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82cc30ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4942e0:{NFSU2_TR(0x4942e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4942e3:{NFSU2_TR(0x4942e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4942e6:{NFSU2_TR(0x4942e6);
{goto L4942f0;}
}
B4942e8:L4942e8:{c.instructions+=2;NFSU2_TR(0x4942e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4942eb:{NFSU2_TR(0x4942eb);
{goto L4942f0;}
}
B4942f0:L4942f0:{c.instructions+=4;NFSU2_TR(0x4942f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4942f3:{NFSU2_TR(0x4942f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4942f5:{NFSU2_TR(0x4942f5);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xdull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4942f9:{NFSU2_TR(0x4942f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49430a;}}
}
B4942fb:L4942fb:{c.instructions+=2;NFSU2_TR(0x4942fb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4942fe:{NFSU2_TR(0x4942fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49430a;}}
}
B494300:L494300:{c.instructions+=3;NFSU2_TR(0x494300);
__builtin_memmove((R+8),gp(0x82daf0),4);
}
B494306:{NFSU2_TR(0x494306);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494308:{NFSU2_TR(0x494308);
if(r1(R+518)){{goto L49434e;}}
}
B49430a:L49430a:{c.instructions+=4;NFSU2_TR(0x49430a);
u8 U[13];
w4(U+0,u32(u32(u32(0x82d398ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(s32(s8(r1(U+12)))));
}
B494312:{NFSU2_TR(0x494312);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494315:{NFSU2_TR(0x494315);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494317:{NFSU2_TR(0x494317);
if(r1(R+518)){{goto L49434e;}}
}
B494319:L494319:{c.instructions+=5;NFSU2_TR(0x494319);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49431c:{NFSU2_TR(0x49431c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49431e:{NFSU2_TR(0x49431e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494320:{NFSU2_TR(0x494320);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494322:{NFSU2_TR(0x494322);
if(r1(R+518)){{goto L49432a;}}
}
B494324:L494324:{c.instructions+=3;NFSU2_TR(0x494324);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494326:{NFSU2_TR(0x494326);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494328:{NFSU2_TR(0x494328);
{goto L49433a;}
}
B49432a:L49432a:{c.instructions+=7;NFSU2_TR(0x49432a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49432d:{NFSU2_TR(0x49432d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B49432f:{NFSU2_TR(0x49432f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494331:{NFSU2_TR(0x494331);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B494334:{NFSU2_TR(0x494334);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B494337:{NFSU2_TR(0x494337);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494338:{NFSU2_TR(0x494338);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49433a:L49433a:{c.instructions+=5;NFSU2_TR(0x49433a);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49433f:{NFSU2_TR(0x49433f);
u8 U[4];
w4(U+0,u32(0x872e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494344:{NFSU2_TR(0x494344);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494345:{NFSU2_TR(0x494345);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494346:{NFSU2_TR(0x494346);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49434bull));
TAIL_STATIC(0x490920u,490);
}
B49434b:L49434b:{c.instructions+=1;NFSU2_TR(0x49434b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B49434e:L49434e:{c.instructions+=7;NFSU2_TR(0x49434e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494351:{NFSU2_TR(0x494351);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82dae8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B494358:{NFSU2_TR(0x494358);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B494359:{NFSU2_TR(0x494359);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B49435c:{NFSU2_TR(0x49435c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49435e:{NFSU2_TR(0x49435e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494361:{NFSU2_TR(0x494361);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4942e8u);}goto L4942e8;}}
}
B494363:L494363:{c.instructions+=1;NFSU2_TR(0x494363);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494366:L494366:{c.instructions+=3;NFSU2_TR(0x494366);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B494367:{NFSU2_TR(0x494367);
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
B494369:{NFSU2_TR(0x494369);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4942c0u);}goto L4942c0;}}
}
B49436f:L49436f:{c.instructions+=1;NFSU2_TR(0x49436f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494370:L494370:{c.instructions+=5;NFSU2_TR(0x494370);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494371:{NFSU2_TR(0x494371);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B494372:{NFSU2_TR(0x494372);
__builtin_memmove((R+16),(R+20),4);
}
B494374:{NFSU2_TR(0x494374);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B494375:{NFSU2_TR(0x494375);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494380:L494380:{c.instructions+=23;NFSU2_TR(0x494380);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494382:{NFSU2_TR(0x494382);
u8 U[4];
w4(U+0,u32(0x77280bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494387:{NFSU2_TR(0x494387);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49438d:{NFSU2_TR(0x49438d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49438e:{NFSU2_TR(0x49438e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494395:{NFSU2_TR(0x494395);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B494398:{NFSU2_TR(0x494398);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49439c:{NFSU2_TR(0x49439c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49439f:{NFSU2_TR(0x49439f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4943a0:{NFSU2_TR(0x4943a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4943a1:{NFSU2_TR(0x4943a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4943a2:{NFSU2_TR(0x4943a2);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B4943a6:{NFSU2_TR(0x4943a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4943a7:{NFSU2_TR(0x4943a7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4943a9:{NFSU2_TR(0x4943a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4943ac:{NFSU2_TR(0x4943ac);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4943ae:{NFSU2_TR(0x4943ae);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4943b0:{NFSU2_TR(0x4943b0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4943b2:{NFSU2_TR(0x4943b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4943b6:{NFSU2_TR(0x4943b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4943ba:{NFSU2_TR(0x4943ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4943be:{NFSU2_TR(0x4943be);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4943c2:{NFSU2_TR(0x4943c2);
if(r1(R+518)){{goto L494442;}}
}
B4943c4:L4943c4:{c.instructions+=3;NFSU2_TR(0x4943c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4943c6:{NFSU2_TR(0x4943c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x33310001ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4943cb:{NFSU2_TR(0x4943cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4943d2;}}
}
B4943cd:L4943cd:{c.instructions+=2;NFSU2_TR(0x4943cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4943d0:{NFSU2_TR(0x4943d0);
{goto L494437;}
}
B4943d2:L4943d2:{c.instructions+=2;NFSU2_TR(0x4943d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x33310002ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4943d7:{NFSU2_TR(0x4943d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4943eb;}}
}
B4943d9:L4943d9:{c.instructions+=6;NFSU2_TR(0x4943d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4943dc:{NFSU2_TR(0x4943dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4943df:{NFSU2_TR(0x4943df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4943e2:{NFSU2_TR(0x4943e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B4943e5:{NFSU2_TR(0x4943e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4943e9:{NFSU2_TR(0x4943e9);
{goto L494437;}
}
B4943eb:L4943eb:{c.instructions+=2;NFSU2_TR(0x4943eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x33310003ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4943f0:{NFSU2_TR(0x4943f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4943fa;}}
}
B4943f2:L4943f2:{c.instructions+=3;NFSU2_TR(0x4943f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4943f5:{NFSU2_TR(0x4943f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4943f8:{NFSU2_TR(0x4943f8);
{goto L494437;}
}
B4943fa:L4943fa:{c.instructions+=2;NFSU2_TR(0x4943fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x33310004ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4943ff:{NFSU2_TR(0x4943ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49441f;}}
}
B494401:L494401:{c.instructions+=11;NFSU2_TR(0x494401);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494404:{NFSU2_TR(0x494404);
w4(R+0,u32(0x8421085ull));
}
B494409:{NFSU2_TR(0x494409);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B49440b:{NFSU2_TR(0x49440b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B49440d:{NFSU2_TR(0x49440d);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B49440f:{NFSU2_TR(0x49440f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B494411:{NFSU2_TR(0x494411);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B494414:{NFSU2_TR(0x494414);
__builtin_memmove((R+20),(R+4),4);
}
B494416:{NFSU2_TR(0x494416);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49441a:{NFSU2_TR(0x49441a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49441d:{NFSU2_TR(0x49441d);
{goto L494437;}
}
B49441f:L49441f:{c.instructions+=2;NFSU2_TR(0x49441f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x33310005ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494424:{NFSU2_TR(0x494424);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L494437;}}
}
B494426:L494426:{c.instructions+=5;NFSU2_TR(0x494426);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494429:{NFSU2_TR(0x494429);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B49442c:{NFSU2_TR(0x49442c);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B49442f:{NFSU2_TR(0x49442f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494433:{NFSU2_TR(0x494433);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494437:L494437:{c.instructions+=4;NFSU2_TR(0x494437);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49443a:{NFSU2_TR(0x49443a);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B49443e:{NFSU2_TR(0x49443e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B494440:{NFSU2_TR(0x494440);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4943c4u);}goto L4943c4;}}
}
B494442:L494442:{c.instructions+=3;NFSU2_TR(0x494442);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B494446:{NFSU2_TR(0x494446);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49444d:{NFSU2_TR(0x49444d);
if(r1(R+518)){{goto L494464;}}
}
B49444f:L49444f:{c.instructions+=9;NFSU2_TR(0x49444f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494450:{NFSU2_TR(0x494450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494451:{NFSU2_TR(0x494451);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B494452:{NFSU2_TR(0x494452);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B494454:{NFSU2_TR(0x494454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B494455:{NFSU2_TR(0x494455);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494459:{NFSU2_TR(0x494459);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494460:{NFSU2_TR(0x494460);
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
B494463:{NFSU2_TR(0x494463);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494464:L494464:{c.instructions+=3;NFSU2_TR(0x494464);
__builtin_memmove((R+4),gp(0x82db0c),4);
}
B49446a:{NFSU2_TR(0x49446a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49446b:{NFSU2_TR(0x49446b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494470ull));
TAIL_STATIC(0x43f8f0u,43f);
}
B494470:L494470:{c.instructions+=5;NFSU2_TR(0x494470);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B494473:{NFSU2_TR(0x494473);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494477:{NFSU2_TR(0x494477);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494479:{NFSU2_TR(0x494479);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B494481:{NFSU2_TR(0x494481);
if(r1(R+518)){{goto L494496;}}
}
B494483:L494483:{c.instructions+=7;NFSU2_TR(0x494483);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494487:{NFSU2_TR(0x494487);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494489:{NFSU2_TR(0x494489);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49448b:{NFSU2_TR(0x49448b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49448c:{NFSU2_TR(0x49448c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49448d:{NFSU2_TR(0x49448d);
__builtin_memmove((R+4),(R+0),4);
}
B49448f:{NFSU2_TR(0x49448f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494494ull));
TAIL_STATIC(0x48fc40u,48f);
}
B494494:L494494:{c.instructions+=1;NFSU2_TR(0x494494);
{goto L494498;}
}
B494496:L494496:{c.instructions+=1;NFSU2_TR(0x494496);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B494498:L494498:{c.instructions+=4;NFSU2_TR(0x494498);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49449a:{NFSU2_TR(0x49449a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4944a2:{NFSU2_TR(0x4944a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4944a5:{NFSU2_TR(0x4944a5);
if(r1(R+518)){{goto L4944b5;}}
}
B4944a7:L4944a7:{c.instructions+=6;NFSU2_TR(0x4944a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4944ab:{NFSU2_TR(0x4944ab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4944ac:{NFSU2_TR(0x4944ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4944ad:{NFSU2_TR(0x4944ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4944ae:{NFSU2_TR(0x4944ae);
__builtin_memmove((R+4),(R+0),4);
}
B4944b0:{NFSU2_TR(0x4944b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4944b5ull));
TAIL_STATIC(0x4919e0u,491);
}
B4944b5:L4944b5:{c.instructions+=9;NFSU2_TR(0x4944b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4944b9:{NFSU2_TR(0x4944b9);
__builtin_memmove((R+0),(R+28),4);
}
B4944bb:{NFSU2_TR(0x4944bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4944bc:{NFSU2_TR(0x4944bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4944bd:{NFSU2_TR(0x4944bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4944be:{NFSU2_TR(0x4944be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4944bf:{NFSU2_TR(0x4944bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4944c6:{NFSU2_TR(0x4944c6);
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
B4944c9:{NFSU2_TR(0x4944c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4944d0:L4944d0:{c.instructions+=10;NFSU2_TR(0x4944d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4944d4:{NFSU2_TR(0x4944d4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4944d8:{NFSU2_TR(0x4944d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4944dc:{NFSU2_TR(0x4944dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4944dd:{NFSU2_TR(0x4944dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4944e1:{NFSU2_TR(0x4944e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4944e2:{NFSU2_TR(0x4944e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4944e3:{NFSU2_TR(0x4944e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4944e4:{NFSU2_TR(0x4944e4);
w4(R+4,u32(0x83579cull));
}
B4944e9:{NFSU2_TR(0x4944e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4944eeull));
TAIL_STATIC(0x4933f0u,493);
}
B4944ee:L4944ee:{c.instructions+=4;NFSU2_TR(0x4944ee);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4944f0:{NFSU2_TR(0x4944f0);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4944f2:{NFSU2_TR(0x4944f2);
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
B4944f4:{NFSU2_TR(0x4944f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494500:L494500:{c.instructions+=7;NFSU2_TR(0x494500);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494501:{NFSU2_TR(0x494501);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494502:{NFSU2_TR(0x494502);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B494506:{NFSU2_TR(0x494506);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494509:{NFSU2_TR(0x494509);
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
B49450b:{NFSU2_TR(0x49450b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49450e:{NFSU2_TR(0x49450e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L494519;}}
}
B494510:L494510:{c.instructions+=2;NFSU2_TR(0x494510);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494511:{NFSU2_TR(0x494511);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494516ull));
TAIL_STATIC(0x4022c0u,402);
}
B494516:L494516:{c.instructions+=1;NFSU2_TR(0x494516);
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
B494519:L494519:{c.instructions+=6;NFSU2_TR(0x494519);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49451c:{NFSU2_TR(0x49451c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B494520:{NFSU2_TR(0x494520);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494521:{NFSU2_TR(0x494521);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B494524:{NFSU2_TR(0x494524);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494525:{NFSU2_TR(0x494525);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49452aull));
TAIL_STATIC(0x4022c0u,402);
}
B49452a:L49452a:{c.instructions+=2;NFSU2_TR(0x49452a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49452b:{NFSU2_TR(0x49452b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494530ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494380u);}goto L494380;}
}
B494530:L494530:{c.instructions+=10;NFSU2_TR(0x494530);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494533:{NFSU2_TR(0x494533);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494536:{NFSU2_TR(0x494536);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494539:{NFSU2_TR(0x494539);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49453c:{NFSU2_TR(0x49453c);
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
B49453f:{NFSU2_TR(0x49453f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494542:{NFSU2_TR(0x494542);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494545:{NFSU2_TR(0x494545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494546:{NFSU2_TR(0x494546);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494547:{NFSU2_TR(0x494547);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494550:L494550:{c.instructions+=8;NFSU2_TR(0x494550);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494554:{NFSU2_TR(0x494554);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494558:{NFSU2_TR(0x494558);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49455c:{NFSU2_TR(0x49455c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49455d:{NFSU2_TR(0x49455d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49455e:{NFSU2_TR(0x49455e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49455f:{NFSU2_TR(0x49455f);
w4(R+4,u32(0x83579cull));
}
B494564:{NFSU2_TR(0x494564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494569ull));
TAIL_STATIC(0x493560u,493);
}
B494569:L494569:{c.instructions+=1;NFSU2_TR(0x494569);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494570:L494570:{c.instructions+=6;NFSU2_TR(0x494570);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494571:{NFSU2_TR(0x494571);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494572:{NFSU2_TR(0x494572);
__builtin_memmove((R+28),(R+4),4);
}
B494574:{NFSU2_TR(0x494574);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B494576:{NFSU2_TR(0x494576);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B494578:{NFSU2_TR(0x494578);
if(r1(R+518)){{goto L4945a6;}}
}
B49457a:L49457a:{c.instructions+=1;NFSU2_TR(0x49457a);
__builtin_memmove((R+12),(R+12),4);
}
B494580:L494580:{c.instructions+=6;NFSU2_TR(0x494580);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494583:{NFSU2_TR(0x494583);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B494585:{NFSU2_TR(0x494585);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B494587:{NFSU2_TR(0x494587);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49458a:{NFSU2_TR(0x49458a);
__builtin_memmove((R+4),(R+24),4);
}
B49458c:{NFSU2_TR(0x49458c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494591ull));
TAIL_STATIC(0x4903b0u,490);
}
B494591:L494591:{c.instructions+=4;NFSU2_TR(0x494591);
__builtin_memmove((R+0),gp(0x82da88),4);
}
B494596:{NFSU2_TR(0x494596);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494597:{NFSU2_TR(0x494597);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494598:{NFSU2_TR(0x494598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49459dull));
TAIL_STATIC(0x43f920u,43f);
}
B49459d:L49459d:{c.instructions+=4;NFSU2_TR(0x49459d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B49459f:{NFSU2_TR(0x49459f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4945a2:{NFSU2_TR(0x4945a2);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4945a4:{NFSU2_TR(0x4945a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494580u);}goto L494580;}}
}
B4945a6:L4945a6:{c.instructions+=3;NFSU2_TR(0x4945a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4945a7:{NFSU2_TR(0x4945a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4945a8:{NFSU2_TR(0x4945a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4945b0:L4945b0:{c.instructions+=2;NFSU2_TR(0x4945b0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x88ull))));
}
B4945b6:{NFSU2_TR(0x4945b6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494570u);}goto L494570;}
}
B4945c0:L4945c0:{c.instructions+=12;NFSU2_TR(0x4945c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4945c2:{NFSU2_TR(0x4945c2);
u8 U[4];
w4(U+0,u32(0x772828ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4945c7:{NFSU2_TR(0x4945c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4945cd:{NFSU2_TR(0x4945cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4945ce:{NFSU2_TR(0x4945ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4945d5:{NFSU2_TR(0x4945d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4945d6:{NFSU2_TR(0x4945d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4945d7:{NFSU2_TR(0x4945d7);
__builtin_memmove((R+24),(R+4),4);
}
B4945d9:{NFSU2_TR(0x4945d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4945dd:{NFSU2_TR(0x4945dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4945e0:{NFSU2_TR(0x4945e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4945e8:{NFSU2_TR(0x4945e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4945edull));
TAIL_STATIC(0x4367c0u,436);
}
B4945ed:L4945ed:{c.instructions+=3;NFSU2_TR(0x4945ed);
__builtin_memmove((R+4),(R+24),4);
}
B4945ef:{NFSU2_TR(0x4945ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4945f7:{NFSU2_TR(0x4945f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4945fcull));
TAIL_STATIC(0x491e10u,491);
}
B4945fc:L4945fc:{c.instructions+=5;NFSU2_TR(0x4945fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494600:{NFSU2_TR(0x494600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494601:{NFSU2_TR(0x494601);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494608:{NFSU2_TR(0x494608);
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
B49460b:{NFSU2_TR(0x49460b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494610:L494610:{c.instructions+=6;NFSU2_TR(0x494610);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494611:{NFSU2_TR(0x494611);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494612:{NFSU2_TR(0x494612);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B494616:{NFSU2_TR(0x494616);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B494618:{NFSU2_TR(0x494618);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B49461a:{NFSU2_TR(0x49461a);
if(r1(R+518)){{goto L494640;}}
}
B49461c:L49461c:{c.instructions+=1;NFSU2_TR(0x49461c);
__builtin_memmove((R+16),(R+16),4);
}
B494620:L494620:{c.instructions+=6;NFSU2_TR(0x494620);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494623:{NFSU2_TR(0x494623);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B494625:{NFSU2_TR(0x494625);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B494627:{NFSU2_TR(0x494627);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49462a:{NFSU2_TR(0x49462a);
__builtin_memmove((R+4),(R+24),4);
}
B49462c:{NFSU2_TR(0x49462c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494631ull));
TAIL_STATIC(0x433070u,433);
}
B494631:L494631:{c.instructions+=2;NFSU2_TR(0x494631);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494632:{NFSU2_TR(0x494632);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494637ull));
TAIL_STATIC(0x575630u,575);
}
B494637:L494637:{c.instructions+=4;NFSU2_TR(0x494637);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B494639:{NFSU2_TR(0x494639);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49463c:{NFSU2_TR(0x49463c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B49463e:{NFSU2_TR(0x49463e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494620u);}goto L494620;}}
}
B494640:L494640:{c.instructions+=3;NFSU2_TR(0x494640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494641:{NFSU2_TR(0x494641);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494642:{NFSU2_TR(0x494642);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494650:L494650:{c.instructions+=20;NFSU2_TR(0x494650);
__builtin_memmove((R+0),(R+4),4);
}
B494652:{NFSU2_TR(0x494652);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B494655:{NFSU2_TR(0x494655);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B494657:{NFSU2_TR(0x494657);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49465a:{NFSU2_TR(0x49465a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B49465c:{NFSU2_TR(0x49465c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49465f:{NFSU2_TR(0x49465f);
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
B494661:{NFSU2_TR(0x494661);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494664:{NFSU2_TR(0x494664);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494667:{NFSU2_TR(0x494667);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B49466a:{NFSU2_TR(0x49466a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x49ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B49466d:{NFSU2_TR(0x49466d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4aull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B494670:{NFSU2_TR(0x494670);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4bull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B494673:{NFSU2_TR(0x494673);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B494676:{NFSU2_TR(0x494676);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4dull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B494679:{NFSU2_TR(0x494679);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49467c:{NFSU2_TR(0x49467c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49467f:{NFSU2_TR(0x49467f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494682:{NFSU2_TR(0x494682);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494685:{NFSU2_TR(0x494685);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494690:L494690:{c.instructions+=4;NFSU2_TR(0x494690);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B494693:{NFSU2_TR(0x494693);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494694:{NFSU2_TR(0x494694);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B494696:{NFSU2_TR(0x494696);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49469bull));
TAIL_STATIC(0x502fd0u,502);
}
B49469b:L49469b:{c.instructions+=3;NFSU2_TR(0x49469b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49469d:{NFSU2_TR(0x49469d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4946a1:{NFSU2_TR(0x4946a1);
if(r1(R+518)){{goto L494733;}}
}
B4946a7:L4946a7:{c.instructions+=4;NFSU2_TR(0x4946a7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4946a8:{NFSU2_TR(0x4946a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4946a9:{NFSU2_TR(0x4946a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4946aa:{NFSU2_TR(0x4946aa);
__builtin_memmove((R+12),(R+12),4);
}
B4946b0:L4946b0:{c.instructions+=5;NFSU2_TR(0x4946b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4946b4:{NFSU2_TR(0x4946b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4946b7:{NFSU2_TR(0x4946b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4946b9:{NFSU2_TR(0x4946b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4946bd:{NFSU2_TR(0x4946bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49472a;}}
}
B4946bf:L4946bf:{c.instructions+=4;NFSU2_TR(0x4946bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4946c2:{NFSU2_TR(0x4946c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4946c5:{NFSU2_TR(0x4946c5);
w4(R+20,u32(0x2ull));
}
B4946ca:{NFSU2_TR(0x4946ca);
__builtin_memmove((R+12),(R+12),4);
}
B4946d0:L4946d0:{c.instructions+=2;NFSU2_TR(0x4946d0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+24))));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4946d2:{NFSU2_TR(0x4946d2);
if(r1(R+518)){{goto L4946f8;}}
}
B4946d4:L4946d4:{c.instructions+=9;NFSU2_TR(0x4946d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4946d6:{NFSU2_TR(0x4946d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4946d8:{NFSU2_TR(0x4946d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4946db:{NFSU2_TR(0x4946db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4946dd:{NFSU2_TR(0x4946dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4946de:{NFSU2_TR(0x4946de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4946e1:{NFSU2_TR(0x4946e1);
__builtin_memmove((R+0),gp(0x82da38),4);
}
B4946e6:{NFSU2_TR(0x4946e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4946e7:{NFSU2_TR(0x4946e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4946ecull));
TAIL_STATIC(0x43f920u,43f);
}
B4946ec:L4946ec:{c.instructions+=6;NFSU2_TR(0x4946ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4946ee:{NFSU2_TR(0x4946ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4946f1:{NFSU2_TR(0x4946f1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4946f2:{NFSU2_TR(0x4946f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4946f4:{NFSU2_TR(0x4946f4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+24))));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4946f6:{NFSU2_TR(0x4946f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4946d4u);}goto L4946d4;}}
}
B4946f8:L4946f8:{c.instructions+=4;NFSU2_TR(0x4946f8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4946fb:{NFSU2_TR(0x4946fb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B4946fe:{NFSU2_TR(0x4946fe);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B4946ff:{NFSU2_TR(0x4946ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4946d0u);}goto L4946d0;}}
}
B494701:L494701:{c.instructions+=6;NFSU2_TR(0x494701);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494704:{NFSU2_TR(0x494704);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B494706:{NFSU2_TR(0x494706);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B494708:{NFSU2_TR(0x494708);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49470b:{NFSU2_TR(0x49470b);
__builtin_memmove((R+4),(R+12),4);
}
B49470d:{NFSU2_TR(0x49470d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494712ull));
TAIL_STATIC(0x491c50u,491);
}
B494712:L494712:{c.instructions+=4;NFSU2_TR(0x494712);
__builtin_memmove((R+4),gp(0x82da3c),4);
}
B494718:{NFSU2_TR(0x494718);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494719:{NFSU2_TR(0x494719);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49471a:{NFSU2_TR(0x49471a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49471full));
TAIL_STATIC(0x43f920u,43f);
}
B49471f:L49471f:{c.instructions+=3;NFSU2_TR(0x49471f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494723:{NFSU2_TR(0x494723);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494727:{NFSU2_TR(0x494727);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49472a:L49472a:{c.instructions+=3;NFSU2_TR(0x49472a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49472c:{NFSU2_TR(0x49472c);
__builtin_memmove((R+12),(R+4),4);
}
B49472e:{NFSU2_TR(0x49472e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4946b0u);}goto L4946b0;}}
}
B494730:L494730:{c.instructions+=3;NFSU2_TR(0x494730);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494731:{NFSU2_TR(0x494731);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494732:{NFSU2_TR(0x494732);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B494733:L494733:{c.instructions+=3;NFSU2_TR(0x494733);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B494734:{NFSU2_TR(0x494734);
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
B494737:{NFSU2_TR(0x494737);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494740:L494740:{c.instructions+=14;NFSU2_TR(0x494740);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494742:{NFSU2_TR(0x494742);
u8 U[4];
w4(U+0,u32(0x772848ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494747:{NFSU2_TR(0x494747);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49474d:{NFSU2_TR(0x49474d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49474e:{NFSU2_TR(0x49474e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494755:{NFSU2_TR(0x494755);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B494758:{NFSU2_TR(0x494758);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494759:{NFSU2_TR(0x494759);
__builtin_memmove((R+20),(R+4),4);
}
B49475b:{NFSU2_TR(0x49475b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49475c:{NFSU2_TR(0x49475c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B49475e:{NFSU2_TR(0x49475e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494762:{NFSU2_TR(0x494762);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B494764:{NFSU2_TR(0x494764);
w4(R+4,u32(0x82d639ull));
}
B494769:{NFSU2_TR(0x494769);
__builtin_memmove((R+16),(R+16),4);
}
B494770:L494770:{c.instructions+=2;NFSU2_TR(0x494770);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B494773:{NFSU2_TR(0x494773);
if(r1(R+518)){{goto L494794;}}
}
B494775:L494775:{c.instructions+=4;NFSU2_TR(0x494775);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B494778:{NFSU2_TR(0x494778);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B494779:{NFSU2_TR(0x494779);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x82da39ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x82da39ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49477f:{NFSU2_TR(0x49477f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494770u);}goto L494770;}}
}
B494781:L494781:{c.instructions+=6;NFSU2_TR(0x494781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494782:{NFSU2_TR(0x494782);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B494783:{NFSU2_TR(0x494783);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494787:{NFSU2_TR(0x494787);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49478e:{NFSU2_TR(0x49478e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B494791:{NFSU2_TR(0x494791);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494794:L494794:{c.instructions+=7;NFSU2_TR(0x494794);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B494797:{NFSU2_TR(0x494797);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494798:{NFSU2_TR(0x494798);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82d638ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49479e:{NFSU2_TR(0x49479e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4947a0:{NFSU2_TR(0x4947a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82d644ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4947a6:{NFSU2_TR(0x4947a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82d639ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4947ad:{NFSU2_TR(0x4947ad);
if(r1(R+518)){{goto L494946;}}
}
B4947b3:L4947b3:{c.instructions+=18;NFSU2_TR(0x4947b3);
u8 U[5];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4947b7:{NFSU2_TR(0x4947b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4947bb:{NFSU2_TR(0x4947bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4947bf:{NFSU2_TR(0x4947bf);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+12)),r1(U+0));
}
B4947c1:{NFSU2_TR(0x4947c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4947c4:{NFSU2_TR(0x4947c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4947c8:{NFSU2_TR(0x4947c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4947cc:{NFSU2_TR(0x4947cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4947cd:{NFSU2_TR(0x4947cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4947d0:{NFSU2_TR(0x4947d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4947d4:{NFSU2_TR(0x4947d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4947d8:{NFSU2_TR(0x4947d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4947dc:{NFSU2_TR(0x4947dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4947df:{NFSU2_TR(0x4947df);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4947e2:{NFSU2_TR(0x4947e2);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4947e4:{NFSU2_TR(0x4947e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4947e5:{NFSU2_TR(0x4947e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4947e9:{NFSU2_TR(0x4947e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4947eeull));
TAIL_STATIC(0x440820u,440);
}
B4947ee:L4947ee:{c.instructions+=6;NFSU2_TR(0x4947ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4947f1:{NFSU2_TR(0x4947f1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4947f3:{NFSU2_TR(0x4947f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4947f7:{NFSU2_TR(0x4947f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x7fffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4947ff:{NFSU2_TR(0x4947ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494803:{NFSU2_TR(0x494803);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49489f;}}
}
B494809:L494809:{c.instructions+=2;NFSU2_TR(0x494809);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49480c:{NFSU2_TR(0x49480c);
__builtin_memmove((R+16),(R+16),4);
}
B494810:L494810:{c.instructions+=6;NFSU2_TR(0x494810);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494814:{NFSU2_TR(0x494814);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494818:{NFSU2_TR(0x494818);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+20),(U+8),4);
}
B49481b:{NFSU2_TR(0x49481b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49481f:{NFSU2_TR(0x49481f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494820:{NFSU2_TR(0x494820);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494825ull));
TAIL_STATIC(0x48ced0u,48c);
}
B494825:L494825:{c.instructions+=3;NFSU2_TR(0x494825);
__builtin_memmove((R+24),(R+0),4);
}
B494827:{NFSU2_TR(0x494827);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494829:{NFSU2_TR(0x494829);
if(r1(R+518)){{goto L494886;}}
}
B49482b:L49482b:{c.instructions+=3;NFSU2_TR(0x49482b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B494831:{NFSU2_TR(0x494831);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B494833:{NFSU2_TR(0x494833);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L494886;}}
}
B494835:L494835:{c.instructions+=4;NFSU2_TR(0x494835);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49483b:{NFSU2_TR(0x49483b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49483d:{NFSU2_TR(0x49483d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494843:{NFSU2_TR(0x494843);
if(r1(R+518)){{goto L494886;}}
}
B494845:L494845:{c.instructions+=6;NFSU2_TR(0x494845);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494847:{NFSU2_TR(0x494847);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494849:{NFSU2_TR(0x494849);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49484a:{NFSU2_TR(0x49484a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49484b:{NFSU2_TR(0x49484b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49484c:{NFSU2_TR(0x49484c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494851ull));
TAIL_STATIC(0x488bc0u,488);
}
B494851:L494851:{c.instructions+=3;NFSU2_TR(0x494851);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B494854:{NFSU2_TR(0x494854);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494856:{NFSU2_TR(0x494856);
if(r1(R+518)){{goto L494886;}}
}
B494858:L494858:{c.instructions+=6;NFSU2_TR(0x494858);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49485b:{NFSU2_TR(0x49485b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49485e:{NFSU2_TR(0x49485e);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B494862:{NFSU2_TR(0x494862);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494865:{NFSU2_TR(0x494865);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B494867:{NFSU2_TR(0x494867);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L49486d;}}
}
B494869:L494869:{c.instructions+=1;NFSU2_TR(0x494869);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49486d:L49486d:{c.instructions+=8;NFSU2_TR(0x49486d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494871:{NFSU2_TR(0x494871);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B494874:{NFSU2_TR(0x494874);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B494876:{NFSU2_TR(0x494876);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49487a:{NFSU2_TR(0x49487a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B49487e:{NFSU2_TR(0x49487e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494881:{NFSU2_TR(0x494881);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B494883:{NFSU2_TR(0x494883);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B494886:L494886:{c.instructions+=6;NFSU2_TR(0x494886);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49488a:{NFSU2_TR(0x49488a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49488e:{NFSU2_TR(0x49488e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B49488f:{NFSU2_TR(0x49488f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B494891:{NFSU2_TR(0x494891);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494895:{NFSU2_TR(0x494895);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494810u);}goto L494810;}}
}
B49489b:L49489b:{c.instructions+=1;NFSU2_TR(0x49489b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B49489f:L49489f:{c.instructions+=3;NFSU2_TR(0x49489f);
u8 U[4];
w4(U+0,u32(0x488d30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4948a4:{NFSU2_TR(0x4948a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4948a8:{NFSU2_TR(0x4948a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4948adull));
TAIL_STATIC(0x43e650u,43e);
}
B4948ad:L4948ad:{c.instructions+=3;NFSU2_TR(0x4948ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4948b1:{NFSU2_TR(0x4948b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4948b5:{NFSU2_TR(0x4948b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4948baull));
TAIL_STATIC(0x502fd0u,502);
}
B4948ba:L4948ba:{c.instructions+=3;NFSU2_TR(0x4948ba);
__builtin_memmove((R+28),(R+0),4);
}
B4948bc:{NFSU2_TR(0x4948bc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4948be:{NFSU2_TR(0x4948be);
if(r1(R+518)){{goto L4948d6;}}
}
B4948c0:L4948c0:{c.instructions+=7;NFSU2_TR(0x4948c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4948c3:{NFSU2_TR(0x4948c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4948c6:{NFSU2_TR(0x4948c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4948c7:{NFSU2_TR(0x4948c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4948c8:{NFSU2_TR(0x4948c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4948c9:{NFSU2_TR(0x4948c9);
__builtin_memmove((R+4),(R+20),4);
}
B4948cb:{NFSU2_TR(0x4948cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4948d0ull));
TAIL_STATIC(0x48d100u,48d);
}
B4948d0:L4948d0:{c.instructions+=3;NFSU2_TR(0x4948d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4948d2:{NFSU2_TR(0x4948d2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4948d4:{NFSU2_TR(0x4948d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4948c0u);}goto L4948c0;}}
}
B4948d6:L4948d6:{c.instructions+=7;NFSU2_TR(0x4948d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4948da:{NFSU2_TR(0x4948da);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4948de:{NFSU2_TR(0x4948de);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4948e2:{NFSU2_TR(0x4948e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4948e3:{NFSU2_TR(0x4948e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4948e7:{NFSU2_TR(0x4948e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4948eb:{NFSU2_TR(0x4948eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4948f0ull));
TAIL_STATIC(0x440540u,440);
}
B4948f0:L4948f0:{c.instructions+=4;NFSU2_TR(0x4948f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4948f3:{NFSU2_TR(0x4948f3);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B4948f8:{NFSU2_TR(0x4948f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4948f9:{NFSU2_TR(0x4948f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L494911;}}
}
B4948fb:L4948fb:{c.instructions+=3;NFSU2_TR(0x4948fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4948ff:{NFSU2_TR(0x4948ff);
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
B494901:{NFSU2_TR(0x494901);
if(r1(R+518)){{goto L494911;}}
}
B494903:L494903:{c.instructions+=4;NFSU2_TR(0x494903);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494907:{NFSU2_TR(0x494907);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494908:{NFSU2_TR(0x494908);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49490c:{NFSU2_TR(0x49490c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49490eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B49490e:L49490e:{c.instructions+=1;NFSU2_TR(0x49490e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B494911:L494911:{c.instructions+=5;NFSU2_TR(0x494911);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494915:{NFSU2_TR(0x494915);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B494919:{NFSU2_TR(0x494919);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49491b:{NFSU2_TR(0x49491b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B494923:{NFSU2_TR(0x494923);
if(r1(R+518)){{goto L494946;}}
}
B494925:L494925:{c.instructions+=7;NFSU2_TR(0x494925);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B494927:{NFSU2_TR(0x494927);
__builtin_memmove((R+8),(R+0),4);
}
B494929:{NFSU2_TR(0x494929);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49492c:{NFSU2_TR(0x49492c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B49492e:{NFSU2_TR(0x49492e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49492f:{NFSU2_TR(0x49492f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494932:{NFSU2_TR(0x494932);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494937ull));
TAIL_STATIC(0x575630u,575);
}
B494937:L494937:{c.instructions+=5;NFSU2_TR(0x494937);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49493b:{NFSU2_TR(0x49493b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B49493f:{NFSU2_TR(0x49493f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B494942:{NFSU2_TR(0x494942);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B494944:{NFSU2_TR(0x494944);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494925u);}goto L494925;}}
}
B494946:L494946:{c.instructions+=7;NFSU2_TR(0x494946);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49494a:{NFSU2_TR(0x49494a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49494b:{NFSU2_TR(0x49494b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49494c:{NFSU2_TR(0x49494c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49494d:{NFSU2_TR(0x49494d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494954:{NFSU2_TR(0x494954);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B494957:{NFSU2_TR(0x494957);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494960:L494960:{c.instructions+=8;NFSU2_TR(0x494960);
__builtin_memmove((R+0),(R+4),4);
}
B494962:{NFSU2_TR(0x494962);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((R+8),(U+0),4);
}
B494968:{NFSU2_TR(0x494968);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+8)),r4(U+0));
}
B49496a:{NFSU2_TR(0x49496a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49496d:{NFSU2_TR(0x49496d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((R+8),(U+0),4);
}
B494973:{NFSU2_TR(0x494973);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+8)),r4(U+0));
}
B494975:{NFSU2_TR(0x494975);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494978:{NFSU2_TR(0x494978);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494980:L494980:{c.instructions+=15;NFSU2_TR(0x494980);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494982:{NFSU2_TR(0x494982);
u8 U[4];
w4(U+0,u32(0x77286eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494987:{NFSU2_TR(0x494987);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49498d:{NFSU2_TR(0x49498d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49498e:{NFSU2_TR(0x49498e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494995:{NFSU2_TR(0x494995);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494996:{NFSU2_TR(0x494996);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494997:{NFSU2_TR(0x494997);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494998:{NFSU2_TR(0x494998);
__builtin_memmove((R+28),(R+4),4);
}
B49499a:{NFSU2_TR(0x49499a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49499e:{NFSU2_TR(0x49499e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4949a4:{NFSU2_TR(0x4949a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4949aa:{NFSU2_TR(0x4949aa);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4949ac:{NFSU2_TR(0x4949ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4949b4:{NFSU2_TR(0x4949b4);
if(r1(R+518)){{goto L4949cf;}}
}
B4949b6:L4949b6:{c.instructions+=6;NFSU2_TR(0x4949b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4949b8:{NFSU2_TR(0x4949b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4949bb:{NFSU2_TR(0x4949bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4949bd:{NFSU2_TR(0x4949bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4949be:{NFSU2_TR(0x4949be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4949c1:{NFSU2_TR(0x4949c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4949c6ull));
TAIL_STATIC(0x440ef0u,440);
}
B4949c6:L4949c6:{c.instructions+=4;NFSU2_TR(0x4949c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4949c8:{NFSU2_TR(0x4949c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4949cb:{NFSU2_TR(0x4949cb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4949cd:{NFSU2_TR(0x4949cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4949b6u);}goto L4949b6;}}
}
B4949cf:L4949cf:{c.instructions+=5;NFSU2_TR(0x4949cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4949d5:{NFSU2_TR(0x4949d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4949db:{NFSU2_TR(0x4949db);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4949dd:{NFSU2_TR(0x4949dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4949e5:{NFSU2_TR(0x4949e5);
if(r1(R+518)){{goto L494a00;}}
}
B4949e7:L4949e7:{c.instructions+=6;NFSU2_TR(0x4949e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4949e9:{NFSU2_TR(0x4949e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4949ec:{NFSU2_TR(0x4949ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4949ee:{NFSU2_TR(0x4949ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4949ef:{NFSU2_TR(0x4949ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4949f2:{NFSU2_TR(0x4949f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4949f7ull));
TAIL_STATIC(0x440ef0u,440);
}
B4949f7:L4949f7:{c.instructions+=4;NFSU2_TR(0x4949f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4949f9:{NFSU2_TR(0x4949f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4949fc:{NFSU2_TR(0x4949fc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4949fe:{NFSU2_TR(0x4949fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4949e7u);}goto L4949e7;}}
}
B494a00:L494a00:{c.instructions+=6;NFSU2_TR(0x494a00);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494a04:{NFSU2_TR(0x494a04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494a05:{NFSU2_TR(0x494a05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494a06:{NFSU2_TR(0x494a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494a0d:{NFSU2_TR(0x494a0d);
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
B494a10:{NFSU2_TR(0x494a10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494a20:L494a20:{c.instructions+=12;NFSU2_TR(0x494a20);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494a24:{NFSU2_TR(0x494a24);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494a28:{NFSU2_TR(0x494a28);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494a2c:{NFSU2_TR(0x494a2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494a2d:{NFSU2_TR(0x494a2d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494a31:{NFSU2_TR(0x494a31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494a32:{NFSU2_TR(0x494a32);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494a36:{NFSU2_TR(0x494a36);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494a37:{NFSU2_TR(0x494a37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494a38:{NFSU2_TR(0x494a38);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494a39:{NFSU2_TR(0x494a39);
w4(R+4,u32(0x82dbc8ull));
}
B494a3e:{NFSU2_TR(0x494a3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494a43ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494740u);}goto L494740;}
}
B494a43:L494a43:{c.instructions+=1;NFSU2_TR(0x494a43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494a50:L494a50:{c.instructions+=8;NFSU2_TR(0x494a50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494a51:{NFSU2_TR(0x494a51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494a52:{NFSU2_TR(0x494a52);
__builtin_memmove((R+28),(R+4),4);
}
B494a54:{NFSU2_TR(0x494a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494a57:{NFSU2_TR(0x494a57);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B494a59:{NFSU2_TR(0x494a59);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494a5b:{NFSU2_TR(0x494a5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494a5f:{NFSU2_TR(0x494a5f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L494ae5;}}
}
B494a65:L494a65:{c.instructions+=5;NFSU2_TR(0x494a65);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494a66:{NFSU2_TR(0x494a66);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B494a6a:{NFSU2_TR(0x494a6a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494a6b:{NFSU2_TR(0x494a6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494a6c:{NFSU2_TR(0x494a6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B494a70:L494a70:{c.instructions+=5;NFSU2_TR(0x494a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494a73:{NFSU2_TR(0x494a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494a76:{NFSU2_TR(0x494a76);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B494a7a:{NFSU2_TR(0x494a7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494a7c:{NFSU2_TR(0x494a7c);
if(r1(R+518)){{goto L494ad2;}}
}
B494a7e:L494a7e:{c.instructions+=4;NFSU2_TR(0x494a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494a81:{NFSU2_TR(0x494a81);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B494a83:{NFSU2_TR(0x494a83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494a85:{NFSU2_TR(0x494a85);
if(r1(R+518)){{goto L494aa1;}}
}
B494a87:L494a87:{c.instructions+=3;NFSU2_TR(0x494a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494a8a:{NFSU2_TR(0x494a8a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B494a8c:{NFSU2_TR(0x494a8c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L494aa1;}}
}
B494a8e:L494a8e:{c.instructions+=4;NFSU2_TR(0x494a8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B494a92:{NFSU2_TR(0x494a92);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+24))));
}
B494a94:{NFSU2_TR(0x494a94);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B494a96:{NFSU2_TR(0x494a96);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L494aa1;}}
}
B494a98:L494a98:{c.instructions+=4;NFSU2_TR(0x494a98);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B494a9a:{NFSU2_TR(0x494a9a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B494a9c:{NFSU2_TR(0x494a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494a9f:{NFSU2_TR(0x494a9f);
w1(R+8,u8(0x1ull));
}
B494aa1:L494aa1:{c.instructions+=3;NFSU2_TR(0x494aa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494aa4:{NFSU2_TR(0x494aa4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494aa6:{NFSU2_TR(0x494aa6);
if(r1(R+518)){{goto L494ac2;}}
}
B494aa8:L494aa8:{c.instructions+=3;NFSU2_TR(0x494aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494aab:{NFSU2_TR(0x494aab);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B494aad:{NFSU2_TR(0x494aad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L494ac2;}}
}
B494aaf:L494aaf:{c.instructions+=4;NFSU2_TR(0x494aaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B494ab3:{NFSU2_TR(0x494ab3);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+24))));
}
B494ab5:{NFSU2_TR(0x494ab5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B494ab7:{NFSU2_TR(0x494ab7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L494ac2;}}
}
B494ab9:L494ab9:{c.instructions+=4;NFSU2_TR(0x494ab9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B494abb:{NFSU2_TR(0x494abb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B494abd:{NFSU2_TR(0x494abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494ac0:{NFSU2_TR(0x494ac0);
{goto L494ac6;}
}
B494ac2:L494ac2:{c.instructions+=2;NFSU2_TR(0x494ac2);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B494ac4:{NFSU2_TR(0x494ac4);
if(r1(R+518)){{goto L494ad2;}}
}
B494ac6:L494ac6:{c.instructions+=3;NFSU2_TR(0x494ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494ac9:{NFSU2_TR(0x494ac9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494acb:{NFSU2_TR(0x494acb);
if(r1(R+518)){{goto L494ad2;}}
}
B494acd:L494acd:{c.instructions+=1;NFSU2_TR(0x494acd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494ad2ull));
TAIL_STATIC(0x5ce170u,5ce);
}
B494ad2:L494ad2:{c.instructions+=6;NFSU2_TR(0x494ad2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494ad6:{NFSU2_TR(0x494ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494ad9:{NFSU2_TR(0x494ad9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B494ada:{NFSU2_TR(0x494ada);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B494adc:{NFSU2_TR(0x494adc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494ae0:{NFSU2_TR(0x494ae0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494a70u);}goto L494a70;}}
}
B494ae2:L494ae2:{c.instructions+=3;NFSU2_TR(0x494ae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494ae3:{NFSU2_TR(0x494ae3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B494ae4:{NFSU2_TR(0x494ae4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B494ae5:L494ae5:{c.instructions+=3;NFSU2_TR(0x494ae5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494ae7:{NFSU2_TR(0x494ae7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494ae8:{NFSU2_TR(0x494ae8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494aedull));
TAIL_STATIC(0x4939b0u,493);
}
B494aed:L494aed:{c.instructions+=3;NFSU2_TR(0x494aed);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494aef:{NFSU2_TR(0x494aef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494af0:{NFSU2_TR(0x494af0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494af5ull));
TAIL_STATIC(0x5c0dc0u,5c0);
}
B494af5:L494af5:{c.instructions+=3;NFSU2_TR(0x494af5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494af7:{NFSU2_TR(0x494af7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494af8:{NFSU2_TR(0x494af8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494afdull));
TAIL_STATIC(0x51bf70u,51b);
}
B494afd:L494afd:{c.instructions+=5;NFSU2_TR(0x494afd);
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
B494b00:{NFSU2_TR(0x494b00);
s4(0x82dab4,u32(0x1ull));
}
B494b0a:{NFSU2_TR(0x494b0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494b0b:{NFSU2_TR(0x494b0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B494b0c:{NFSU2_TR(0x494b0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494b10:L494b10:{c.instructions+=10;NFSU2_TR(0x494b10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494b11:{NFSU2_TR(0x494b11);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494b12:{NFSU2_TR(0x494b12);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494b13:{NFSU2_TR(0x494b13);
__builtin_memmove((R+20),(R+4),4);
}
B494b15:{NFSU2_TR(0x494b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494b18:{NFSU2_TR(0x494b18);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B494b1a:{NFSU2_TR(0x494b1a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B494b1c:{NFSU2_TR(0x494b1c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B494b1e:{NFSU2_TR(0x494b1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494b22:{NFSU2_TR(0x494b22);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L494bde;}}
}
B494b28:L494b28:{c.instructions+=4;NFSU2_TR(0x494b28);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494b29:{NFSU2_TR(0x494b29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494b2a:{NFSU2_TR(0x494b2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B494b2e:{NFSU2_TR(0x494b2e);
__builtin_memmove((R+28),(R+28),4);
}
B494b30:L494b30:{c.instructions+=5;NFSU2_TR(0x494b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494b33:{NFSU2_TR(0x494b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494b36:{NFSU2_TR(0x494b36);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B494b3a:{NFSU2_TR(0x494b3a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B494b3c:{NFSU2_TR(0x494b3c);
if(r1(R+518)){{goto L494bc8;}}
}
B494b42:L494b42:{c.instructions+=4;NFSU2_TR(0x494b42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494b45:{NFSU2_TR(0x494b45);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B494b47:{NFSU2_TR(0x494b47);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B494b49:{NFSU2_TR(0x494b49);
if(r1(R+518)){{goto L494b61;}}
}
B494b4b:L494b4b:{c.instructions+=3;NFSU2_TR(0x494b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494b4e:{NFSU2_TR(0x494b4e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B494b50:{NFSU2_TR(0x494b50);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L494b61;}}
}
B494b52:L494b52:{c.instructions+=4;NFSU2_TR(0x494b52);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494b56:{NFSU2_TR(0x494b56);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B494b58:{NFSU2_TR(0x494b58);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B494b5a:{NFSU2_TR(0x494b5a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L494b61;}}
}
B494b5c:L494b5c:{c.instructions+=2;NFSU2_TR(0x494b5c);
w1(R+4,u8(0x1ull));
}
B494b5e:{NFSU2_TR(0x494b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494b61:L494b61:{c.instructions+=2;NFSU2_TR(0x494b61);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B494b64:{NFSU2_TR(0x494b64);
if(r1(R+518)){{goto L494b7c;}}
}
B494b66:L494b66:{c.instructions+=3;NFSU2_TR(0x494b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494b69:{NFSU2_TR(0x494b69);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B494b6b:{NFSU2_TR(0x494b6b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L494b7c;}}
}
B494b6d:L494b6d:{c.instructions+=4;NFSU2_TR(0x494b6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494b71:{NFSU2_TR(0x494b71);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B494b73:{NFSU2_TR(0x494b73);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B494b75:{NFSU2_TR(0x494b75);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L494b7c;}}
}
B494b77:L494b77:{c.instructions+=2;NFSU2_TR(0x494b77);
w1(R+4,u8(0x1ull));
}
B494b79:{NFSU2_TR(0x494b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494b7c:L494b7c:{c.instructions+=2;NFSU2_TR(0x494b7c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B494b7f:{NFSU2_TR(0x494b7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L494bc8;}}
}
B494b81:L494b81:{c.instructions+=2;NFSU2_TR(0x494b81);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B494b83:{NFSU2_TR(0x494b83);
if(r1(R+518)){{goto L494bc8;}}
}
B494b85:L494b85:{c.instructions+=2;NFSU2_TR(0x494b85);
__builtin_memmove((R+4),(R+24),4);
}
B494b87:{NFSU2_TR(0x494b87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494b8cull));
TAIL_STATIC(0x5caaa0u,5ca);
}
B494b8c:L494b8c:{c.instructions+=3;NFSU2_TR(0x494b8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B494b8f:{NFSU2_TR(0x494b8f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x530b82b0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B494b95:{NFSU2_TR(0x494b95);
if(r1(R+518)){{goto L494bbf;}}
}
B494b97:L494b97:{c.instructions+=2;NFSU2_TR(0x494b97);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x530b82b1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B494b9d:{NFSU2_TR(0x494b9d);
if(r1(R+518)){{goto L494bbf;}}
}
B494b9f:L494b9f:{c.instructions+=2;NFSU2_TR(0x494b9f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x530b82b2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B494ba5:{NFSU2_TR(0x494ba5);
if(r1(R+518)){{goto L494bbf;}}
}
B494ba7:L494ba7:{c.instructions+=2;NFSU2_TR(0x494ba7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x530b82b3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B494bad:{NFSU2_TR(0x494bad);
if(r1(R+518)){{goto L494bbf;}}
}
B494baf:L494baf:{c.instructions+=2;NFSU2_TR(0x494baf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x530b82b4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B494bb5:{NFSU2_TR(0x494bb5);
if(r1(R+518)){{goto L494bbf;}}
}
B494bb7:L494bb7:{c.instructions+=2;NFSU2_TR(0x494bb7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x530b82b5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B494bbd:{NFSU2_TR(0x494bbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L494bc8;}}
}
B494bbf:L494bbf:{c.instructions+=2;NFSU2_TR(0x494bbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494bc0:{NFSU2_TR(0x494bc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494bc5ull));
TAIL_STATIC(0x611a10u,611);
}
B494bc5:L494bc5:{c.instructions+=1;NFSU2_TR(0x494bc5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B494bc8:L494bc8:{c.instructions+=6;NFSU2_TR(0x494bc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494bcc:{NFSU2_TR(0x494bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494bcf:{NFSU2_TR(0x494bcf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B494bd0:{NFSU2_TR(0x494bd0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B494bd2:{NFSU2_TR(0x494bd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494bd6:{NFSU2_TR(0x494bd6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494b30u);}goto L494b30;}}
}
B494bdc:L494bdc:{c.instructions+=2;NFSU2_TR(0x494bdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494bdd:{NFSU2_TR(0x494bdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494bde:L494bde:{c.instructions+=3;NFSU2_TR(0x494bde);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494bdf:{NFSU2_TR(0x494bdf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494be0:{NFSU2_TR(0x494be0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494be5ull));
TAIL_STATIC(0x4939b0u,493);
}
B494be5:L494be5:{c.instructions+=3;NFSU2_TR(0x494be5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494be6:{NFSU2_TR(0x494be6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494be7:{NFSU2_TR(0x494be7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494becull));
TAIL_STATIC(0x5c0dc0u,5c0);
}
B494bec:L494bec:{c.instructions+=3;NFSU2_TR(0x494bec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494bed:{NFSU2_TR(0x494bed);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494bee:{NFSU2_TR(0x494bee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494bf3ull));
TAIL_STATIC(0x51bf70u,51b);
}
B494bf3:L494bf3:{c.instructions+=6;NFSU2_TR(0x494bf3);
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
B494bf6:{NFSU2_TR(0x494bf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B494bf7:{NFSU2_TR(0x494bf7);
s4(0x82dab4,u32(0x1ull));
}
B494c01:{NFSU2_TR(0x494c01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B494c02:{NFSU2_TR(0x494c02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B494c03:{NFSU2_TR(0x494c03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494c10:L494c10:{c.instructions+=17;NFSU2_TR(0x494c10);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494c14:{NFSU2_TR(0x494c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494c1a:{NFSU2_TR(0x494c1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494c1e:{NFSU2_TR(0x494c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494c21:{NFSU2_TR(0x494c21);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494c22:{NFSU2_TR(0x494c22);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B494c26:{NFSU2_TR(0x494c26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494c27:{NFSU2_TR(0x494c27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494c28:{NFSU2_TR(0x494c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B494c2b:{NFSU2_TR(0x494c2b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B494c2d:{NFSU2_TR(0x494c2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffff64ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494c33:{NFSU2_TR(0x494c33);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494c35:{NFSU2_TR(0x494c35);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffe0ull))));
}
B494c38:{NFSU2_TR(0x494c38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494c39:{NFSU2_TR(0x494c39);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494c3a:{NFSU2_TR(0x494c3a);
__builtin_memmove((R+4),(R+28),4);
}
B494c3c:{NFSU2_TR(0x494c3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494c41ull));
TAIL_STATIC(0x48fd30u,48f);
}
B494c41:L494c41:{c.instructions+=4;NFSU2_TR(0x494c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494c44:{NFSU2_TR(0x494c44);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B494c47:{NFSU2_TR(0x494c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494c4a:{NFSU2_TR(0x494c4a);
if(r1(R+518)){{goto L494c61;}}
}
B494c4c:L494c4c:{c.instructions+=8;NFSU2_TR(0x494c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494c4f:{NFSU2_TR(0x494c4f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B494c51:{NFSU2_TR(0x494c51);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B494c53:{NFSU2_TR(0x494c53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494c54:{NFSU2_TR(0x494c54);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494c55:{NFSU2_TR(0x494c55);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494c56:{NFSU2_TR(0x494c56);
__builtin_memmove((R+4),(R+28),4);
}
B494c58:{NFSU2_TR(0x494c58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494c5dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494a50u);}goto L494a50;}
}
B494c5d:L494c5d:{c.instructions+=4;NFSU2_TR(0x494c5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494c5e:{NFSU2_TR(0x494c5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494c5f:{NFSU2_TR(0x494c5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B494c60:{NFSU2_TR(0x494c60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494c61:L494c61:{c.instructions+=8;NFSU2_TR(0x494c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494c64:{NFSU2_TR(0x494c64);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B494c66:{NFSU2_TR(0x494c66);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B494c68:{NFSU2_TR(0x494c68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494c69:{NFSU2_TR(0x494c69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494c6a:{NFSU2_TR(0x494c6a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494c6b:{NFSU2_TR(0x494c6b);
__builtin_memmove((R+4),(R+28),4);
}
B494c6d:{NFSU2_TR(0x494c6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494c72ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494a50u);}goto L494a50;}
}
B494c72:L494c72:{c.instructions+=4;NFSU2_TR(0x494c72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494c73:{NFSU2_TR(0x494c73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494c74:{NFSU2_TR(0x494c74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B494c75:{NFSU2_TR(0x494c75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494c80:L494c80:{c.instructions+=13;NFSU2_TR(0x494c80);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494c84:{NFSU2_TR(0x494c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494c8a:{NFSU2_TR(0x494c8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494c8e:{NFSU2_TR(0x494c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494c91:{NFSU2_TR(0x494c91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494c92:{NFSU2_TR(0x494c92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494c93:{NFSU2_TR(0x494c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B494c96:{NFSU2_TR(0x494c96);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494c9a:{NFSU2_TR(0x494c9a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B494c9e:{NFSU2_TR(0x494c9e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B494ca1:{NFSU2_TR(0x494ca1);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff64ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B494ca8:{NFSU2_TR(0x494ca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494cab:{NFSU2_TR(0x494cab);
if(r1(R+518)){{goto L494cb4;}}
}
B494cad:L494cad:{c.instructions+=3;NFSU2_TR(0x494cad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494cb0:{NFSU2_TR(0x494cb0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B494cb2:{NFSU2_TR(0x494cb2);
{goto L494cb9;}
}
B494cb4:L494cb4:{c.instructions+=2;NFSU2_TR(0x494cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494cb7:{NFSU2_TR(0x494cb7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B494cb9:L494cb9:{c.instructions+=5;NFSU2_TR(0x494cb9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B494cbb:{NFSU2_TR(0x494cbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494cbc:{NFSU2_TR(0x494cbc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494cbd:{NFSU2_TR(0x494cbd);
__builtin_memmove((R+4),(R+28),4);
}
B494cbf:{NFSU2_TR(0x494cbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494cc4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494b10u);}goto L494b10;}
}
B494cc4:L494cc4:{c.instructions+=3;NFSU2_TR(0x494cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494cc7:{NFSU2_TR(0x494cc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494cc9:{NFSU2_TR(0x494cc9);
if(r1(R+518)){{goto L494d0e;}}
}
B494ccb:L494ccb:{c.instructions+=3;NFSU2_TR(0x494ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494cce:{NFSU2_TR(0x494cce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494cd0:{NFSU2_TR(0x494cd0);
if(r1(R+518)){{goto L494d0e;}}
}
B494cd2:L494cd2:{c.instructions+=8;NFSU2_TR(0x494cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494cd5:{NFSU2_TR(0x494cd5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494cd7:{NFSU2_TR(0x494cd7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494cd9:{NFSU2_TR(0x494cd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494cda:{NFSU2_TR(0x494cda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494cdb:{NFSU2_TR(0x494cdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494cde:{NFSU2_TR(0x494cde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494cdf:{NFSU2_TR(0x494cdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494ce4ull));
TAIL_STATIC(0x488bc0u,488);
}
B494ce4:L494ce4:{c.instructions+=3;NFSU2_TR(0x494ce4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B494ce7:{NFSU2_TR(0x494ce7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494ce9:{NFSU2_TR(0x494ce9);
if(r1(R+518)){{goto L494d0e;}}
}
B494ceb:L494ceb:{c.instructions+=8;NFSU2_TR(0x494ceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B494cf2:{NFSU2_TR(0x494cf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494cf5:{NFSU2_TR(0x494cf5);
__builtin_memmove((R+4),gp(0x833780),4);
}
B494cfb:{NFSU2_TR(0x494cfb);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B494cfc:{NFSU2_TR(0x494cfc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1fffull))));
}
B494d01:{NFSU2_TR(0x494d01);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x833784ull))));
}
B494d06:{NFSU2_TR(0x494d06);
__builtin_memmove(gp(0x833780),(R+4),4);
}
B494d0c:{NFSU2_TR(0x494d0c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))-u32(u8(0x1ull))));
s1(u32(r4(R+0)),r1(U+0));
}
B494d0e:L494d0e:{c.instructions+=5;NFSU2_TR(0x494d0e);
__builtin_memmove((R+0),gp(0x82db08),4);
}
B494d13:{NFSU2_TR(0x494d13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494d14:{NFSU2_TR(0x494d14);
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
B494d16:{NFSU2_TR(0x494d16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494d17:{NFSU2_TR(0x494d17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L494d23;}}
}
B494d19:L494d19:{c.instructions+=1;NFSU2_TR(0x494d19);
s4(0x82db08,u32(0x0ull));
}
B494d23:L494d23:{c.instructions+=1;NFSU2_TR(0x494d23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494d30:L494d30:{c.instructions+=13;NFSU2_TR(0x494d30);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494d34:{NFSU2_TR(0x494d34);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494d38:{NFSU2_TR(0x494d38);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494d3c:{NFSU2_TR(0x494d3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494d3d:{NFSU2_TR(0x494d3d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494d3e:{NFSU2_TR(0x494d3e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494d42:{NFSU2_TR(0x494d42);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494d46:{NFSU2_TR(0x494d46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494d47:{NFSU2_TR(0x494d47);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494d49:{NFSU2_TR(0x494d49);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B494d4d:{NFSU2_TR(0x494d4d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494d4e:{NFSU2_TR(0x494d4e);
w4(R+4,u32(0x83579cull));
}
B494d53:{NFSU2_TR(0x494d53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494d58ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494740u);}goto L494740;}
}
B494d58:L494d58:{c.instructions+=1;NFSU2_TR(0x494d58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494d60:L494d60:{c.instructions+=12;NFSU2_TR(0x494d60);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494d64:{NFSU2_TR(0x494d64);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494d68:{NFSU2_TR(0x494d68);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494d6c:{NFSU2_TR(0x494d6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494d6d:{NFSU2_TR(0x494d6d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494d71:{NFSU2_TR(0x494d71);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494d72:{NFSU2_TR(0x494d72);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494d76:{NFSU2_TR(0x494d76);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494d77:{NFSU2_TR(0x494d77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494d78:{NFSU2_TR(0x494d78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494d79:{NFSU2_TR(0x494d79);
w4(R+4,u32(0x83579cull));
}
B494d7e:{NFSU2_TR(0x494d7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494d83ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494740u);}goto L494740;}
}
B494d83:L494d83:{c.instructions+=1;NFSU2_TR(0x494d83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494d90:L494d90:{c.instructions+=6;NFSU2_TR(0x494d90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494d91:{NFSU2_TR(0x494d91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494d92:{NFSU2_TR(0x494d92);
__builtin_memmove((R+28),(R+4),4);
}
B494d94:{NFSU2_TR(0x494d94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B494d96:{NFSU2_TR(0x494d96);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B494d98:{NFSU2_TR(0x494d98);
if(r1(R+518)){{goto L494dc0;}}
}
B494d9a:L494d9a:{c.instructions+=1;NFSU2_TR(0x494d9a);
__builtin_memmove((R+12),(R+12),4);
}
B494da0:L494da0:{c.instructions+=6;NFSU2_TR(0x494da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494da3:{NFSU2_TR(0x494da3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B494da5:{NFSU2_TR(0x494da5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B494da7:{NFSU2_TR(0x494da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494daa:{NFSU2_TR(0x494daa);
__builtin_memmove((R+4),(R+24),4);
}
B494dac:{NFSU2_TR(0x494dac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494db1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494240u);}goto L494240;}
}
B494db1:L494db1:{c.instructions+=2;NFSU2_TR(0x494db1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494db2:{NFSU2_TR(0x494db2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494db7ull));
TAIL_STATIC(0x575630u,575);
}
B494db7:L494db7:{c.instructions+=4;NFSU2_TR(0x494db7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B494db9:{NFSU2_TR(0x494db9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B494dbc:{NFSU2_TR(0x494dbc);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B494dbe:{NFSU2_TR(0x494dbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494da0u);}goto L494da0;}}
}
B494dc0:L494dc0:{c.instructions+=3;NFSU2_TR(0x494dc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494dc1:{NFSU2_TR(0x494dc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494dc2:{NFSU2_TR(0x494dc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494dd0:L494dd0:{c.instructions+=16;NFSU2_TR(0x494dd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494dd1:{NFSU2_TR(0x494dd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494dd5:{NFSU2_TR(0x494dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494dd8:{NFSU2_TR(0x494dd8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494dd9:{NFSU2_TR(0x494dd9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494dda:{NFSU2_TR(0x494dda);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494ddb:{NFSU2_TR(0x494ddb);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B494ddf:{NFSU2_TR(0x494ddf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494de0:{NFSU2_TR(0x494de0);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B494de2:{NFSU2_TR(0x494de2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494de5:{NFSU2_TR(0x494de5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B494de7:{NFSU2_TR(0x494de7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B494de9:{NFSU2_TR(0x494de9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B494deb:{NFSU2_TR(0x494deb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494def:{NFSU2_TR(0x494def);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494df3:{NFSU2_TR(0x494df3);
if(r1(R+518)){{goto L494e4f;}}
}
B494df5:L494df5:{c.instructions+=3;NFSU2_TR(0x494df5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B494df7:{NFSU2_TR(0x494df7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x33310001ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494dfc:{NFSU2_TR(0x494dfc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L494e03;}}
}
B494dfe:L494dfe:{c.instructions+=2;NFSU2_TR(0x494dfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B494e01:{NFSU2_TR(0x494e01);
{goto L494e44;}
}
B494e03:L494e03:{c.instructions+=2;NFSU2_TR(0x494e03);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x33310002ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494e08:{NFSU2_TR(0x494e08);
if(r1(R+518)){{goto L494e44;}}
}
B494e0a:L494e0a:{c.instructions+=2;NFSU2_TR(0x494e0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x33310003ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494e0f:{NFSU2_TR(0x494e0f);
if(r1(R+518)){{goto L494e44;}}
}
B494e11:L494e11:{c.instructions+=2;NFSU2_TR(0x494e11);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x33310004ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494e16:{NFSU2_TR(0x494e16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L494e36;}}
}
B494e18:L494e18:{c.instructions+=11;NFSU2_TR(0x494e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494e1b:{NFSU2_TR(0x494e1b);
w4(R+0,u32(0x8421085ull));
}
B494e20:{NFSU2_TR(0x494e20);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B494e22:{NFSU2_TR(0x494e22);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B494e24:{NFSU2_TR(0x494e24);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B494e26:{NFSU2_TR(0x494e26);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B494e28:{NFSU2_TR(0x494e28);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B494e2b:{NFSU2_TR(0x494e2b);
__builtin_memmove((R+20),(R+4),4);
}
B494e2d:{NFSU2_TR(0x494e2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494e31:{NFSU2_TR(0x494e31);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494e34:{NFSU2_TR(0x494e34);
{goto L494e44;}
}
B494e36:L494e36:{c.instructions+=2;NFSU2_TR(0x494e36);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x33310005ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494e3b:{NFSU2_TR(0x494e3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L494e44;}}
}
B494e3d:L494e3d:{c.instructions+=2;NFSU2_TR(0x494e3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B494e40:{NFSU2_TR(0x494e40);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494e44:L494e44:{c.instructions+=4;NFSU2_TR(0x494e44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494e47:{NFSU2_TR(0x494e47);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B494e4b:{NFSU2_TR(0x494e4b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B494e4d:{NFSU2_TR(0x494e4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494df5u);}goto L494df5;}}
}
B494e4f:L494e4f:{c.instructions+=5;NFSU2_TR(0x494e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494e52:{NFSU2_TR(0x494e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494e55:{NFSU2_TR(0x494e55);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494e56:{NFSU2_TR(0x494e56);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494e58:{NFSU2_TR(0x494e58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494e5dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494b10u);}goto L494b10;}
}
B494e5d:L494e5d:{c.instructions+=2;NFSU2_TR(0x494e5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494e5f:{NFSU2_TR(0x494e5f);
if(r1(R+518)){{goto L494e70;}}
}
B494e61:L494e61:{c.instructions+=6;NFSU2_TR(0x494e61);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494e65:{NFSU2_TR(0x494e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494e68:{NFSU2_TR(0x494e68);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494e69:{NFSU2_TR(0x494e69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494e6a:{NFSU2_TR(0x494e6a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494e6b:{NFSU2_TR(0x494e6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494e70ull));
TAIL_STATIC(0x491a30u,491);
}
B494e70:L494e70:{c.instructions+=4;NFSU2_TR(0x494e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B494e73:{NFSU2_TR(0x494e73);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B494e75:{NFSU2_TR(0x494e75);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B494e77:{NFSU2_TR(0x494e77);
if(r1(R+518)){{goto L494e90;}}
}
B494e79:L494e79:{c.instructions+=2;NFSU2_TR(0x494e79);
__builtin_memmove((R+4),(R+24),4);
}
B494e7b:{NFSU2_TR(0x494e7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494e80ull));
TAIL_STATIC(0x48fd10u,48f);
}
B494e80:L494e80:{c.instructions+=4;NFSU2_TR(0x494e80);
__builtin_memmove((R+4),gp(0x82db0c),4);
}
B494e86:{NFSU2_TR(0x494e86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494e87:{NFSU2_TR(0x494e87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494e88:{NFSU2_TR(0x494e88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494e8dull));
TAIL_STATIC(0x43f920u,43f);
}
B494e8d:L494e8d:{c.instructions+=1;NFSU2_TR(0x494e8d);
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
B494e90:L494e90:{c.instructions+=7;NFSU2_TR(0x494e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494e93:{NFSU2_TR(0x494e93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494e94:{NFSU2_TR(0x494e94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494e95:{NFSU2_TR(0x494e95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B494e96:{NFSU2_TR(0x494e96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B494e97:{NFSU2_TR(0x494e97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B494e98:{NFSU2_TR(0x494e98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494ea0:L494ea0:{c.instructions+=7;NFSU2_TR(0x494ea0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494ea1:{NFSU2_TR(0x494ea1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B494ea5:{NFSU2_TR(0x494ea5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B494ea7:{NFSU2_TR(0x494ea7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb3300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494eac:{NFSU2_TR(0x494eac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494ead:{NFSU2_TR(0x494ead);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494eae:{NFSU2_TR(0x494eae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L494f79;}}
}
B494eb4:L494eb4:{c.instructions+=6;NFSU2_TR(0x494eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494eb7:{NFSU2_TR(0x494eb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494eba:{NFSU2_TR(0x494eba);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B494ebe:{NFSU2_TR(0x494ebe);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B494ec0:{NFSU2_TR(0x494ec0);
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
B494ec2:{NFSU2_TR(0x494ec2);
if(r1(R+518)){{goto L494f2e;}}
}
B494ec4:L494ec4:{c.instructions+=3;NFSU2_TR(0x494ec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B494ec6:{NFSU2_TR(0x494ec6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb3310000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494ecb:{NFSU2_TR(0x494ecb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L494ee3;}}
}
B494ecd:L494ecd:{c.instructions+=2;NFSU2_TR(0x494ecd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494ece:{NFSU2_TR(0x494ece);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494ed3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494380u);}goto L494380;}
}
B494ed3:L494ed3:{c.instructions+=5;NFSU2_TR(0x494ed3);
__builtin_memmove((R+28),(R+0),4);
}
B494ed5:{NFSU2_TR(0x494ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494ed8:{NFSU2_TR(0x494ed8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B494edb:{NFSU2_TR(0x494edb);
__builtin_memmove(gp(0x82db10),(R+4),4);
}
B494ee1:{NFSU2_TR(0x494ee1);
{goto L494f23;}
}
B494ee3:L494ee3:{c.instructions+=2;NFSU2_TR(0x494ee3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb3320000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494ee8:{NFSU2_TR(0x494ee8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L494f23;}}
}
B494eea:L494eea:{c.instructions+=8;NFSU2_TR(0x494eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494eed:{NFSU2_TR(0x494eed);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B494ef1:{NFSU2_TR(0x494ef1);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B494ef5:{NFSU2_TR(0x494ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494ef8:{NFSU2_TR(0x494ef8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494efa:{NFSU2_TR(0x494efa);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B494efe:{NFSU2_TR(0x494efe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B494f01:{NFSU2_TR(0x494f01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L494f0a;}}
}
B494f03:L494f03:{c.instructions+=1;NFSU2_TR(0x494f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B494f0a:L494f0a:{c.instructions+=6;NFSU2_TR(0x494f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494f0d:{NFSU2_TR(0x494f0d);
__builtin_memmove((R+4),gp(0x8358cc),4);
}
B494f13:{NFSU2_TR(0x494f13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B494f15:{NFSU2_TR(0x494f15);
__builtin_memmove(gp(0x8358cc),(R+0),4);
}
B494f1a:{NFSU2_TR(0x494f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494f1d:{NFSU2_TR(0x494f1d);
u8 U[4];
w4(U+0,u32(0x8358c8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B494f23:L494f23:{c.instructions+=4;NFSU2_TR(0x494f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494f26:{NFSU2_TR(0x494f26);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B494f2a:{NFSU2_TR(0x494f2a);
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
B494f2c:{NFSU2_TR(0x494f2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494ec4u);}goto L494ec4;}}
}
B494f2e:L494f2e:{c.instructions+=3;NFSU2_TR(0x494f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494f31:{NFSU2_TR(0x494f31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494f32:{NFSU2_TR(0x494f32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494f37ull));
TAIL_STATIC(0x48fbc0u,48f);
}
B494f37:L494f37:{c.instructions+=4;NFSU2_TR(0x494f37);
__builtin_memmove((R+24),(R+0),4);
}
B494f39:{NFSU2_TR(0x494f39);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B494f3c:{NFSU2_TR(0x494f3c);
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
B494f3e:{NFSU2_TR(0x494f3e);
if(r1(R+518)){{goto L494f70;}}
}
B494f40:L494f40:{c.instructions+=12;NFSU2_TR(0x494f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494f43:{NFSU2_TR(0x494f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B494f46:{NFSU2_TR(0x494f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B494f49:{NFSU2_TR(0x494f49);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x87ull))));
__builtin_memmove((R+4),(U+0),4);
}
B494f4f:{NFSU2_TR(0x494f4f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffff80ull))));
}
B494f52:{NFSU2_TR(0x494f52);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B494f54:{NFSU2_TR(0x494f54);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B494f58:{NFSU2_TR(0x494f58);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494f59:{NFSU2_TR(0x494f59);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494f5b:{NFSU2_TR(0x494f5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494f5c:{NFSU2_TR(0x494f5c);
__builtin_memmove((R+4),(R+28),4);
}
B494f5e:{NFSU2_TR(0x494f5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494f63ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x494a50u);}goto L494a50;}
}
B494f63:L494f63:{c.instructions+=5;NFSU2_TR(0x494f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494f66:{NFSU2_TR(0x494f66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B494f68:{NFSU2_TR(0x494f68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B494f6b:{NFSU2_TR(0x494f6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B494f6d:{NFSU2_TR(0x494f6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494f70:L494f70:{c.instructions+=5;NFSU2_TR(0x494f70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494f71:{NFSU2_TR(0x494f71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494f72:{NFSU2_TR(0x494f72);
w4(R+0,u32(0x1ull));
}
B494f77:{NFSU2_TR(0x494f77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B494f78:{NFSU2_TR(0x494f78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494f79:L494f79:{c.instructions+=2;NFSU2_TR(0x494f79);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb3320000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494f7e:{NFSU2_TR(0x494f7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L494f92;}}
}
B494f80:L494f80:{c.instructions+=2;NFSU2_TR(0x494f80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494f81:{NFSU2_TR(0x494f81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494f86ull));
TAIL_STATIC(0x48fc00u,48f);
}
B494f86:L494f86:{c.instructions+=6;NFSU2_TR(0x494f86);
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
B494f89:{NFSU2_TR(0x494f89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B494f8a:{NFSU2_TR(0x494f8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B494f8b:{NFSU2_TR(0x494f8b);
w4(R+0,u32(0x1ull));
}
B494f90:{NFSU2_TR(0x494f90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B494f91:{NFSU2_TR(0x494f91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B494f92:L494f92:{c.instructions+=2;NFSU2_TR(0x494f92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb0300100ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494f97:{NFSU2_TR(0x494f97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x495038u,495);}
}
B494f9d:L494f9d:{c.instructions+=5;NFSU2_TR(0x494f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B494fa0:{NFSU2_TR(0x494fa0);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B494fa4:{NFSU2_TR(0x494fa4);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B494fa8:{NFSU2_TR(0x494fa8);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
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
B494fac:{NFSU2_TR(0x494fac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x495025u,495);}
}
B494fae:L494fae:{c.instructions+=13;NFSU2_TR(0x494fae);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B494fb2:{NFSU2_TR(0x494fb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494fb6:{NFSU2_TR(0x494fb6);
w4(R+0,u32(0x4ec4ec4full));
}
B494fbb:{NFSU2_TR(0x494fbb);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+28)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B494fbd:{NFSU2_TR(0x494fbd);
__builtin_memmove((R+0),gp(0x82db0c),4);
}
B494fc2:{NFSU2_TR(0x494fc2);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B494fc6:{NFSU2_TR(0x494fc6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494fc7:{NFSU2_TR(0x494fc7);
__builtin_memmove((R+24),(R+8),4);
}
B494fc9:{NFSU2_TR(0x494fc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494fca:{NFSU2_TR(0x494fca);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B494fcd:{NFSU2_TR(0x494fcd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B494fd0:{NFSU2_TR(0x494fd0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B494fd3:{NFSU2_TR(0x494fd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494fd8ull));
TAIL_STATIC(0x43f8f0u,43f);
}
B494fd8:L494fd8:{c.instructions+=3;NFSU2_TR(0x494fd8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B494fdb:{NFSU2_TR(0x494fdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B494fdd:{NFSU2_TR(0x494fdd);
if(r1(R+518)){TAIL_STATIC(0x49500cu,495);}
}
B494fdf:L494fdf:{c.instructions+=9;NFSU2_TR(0x494fdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B494fe3:{NFSU2_TR(0x494fe3);
__builtin_memmove((R+8),gp(0x82db10),4);
}
B494fe9:{NFSU2_TR(0x494fe9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494fea:{NFSU2_TR(0x494fea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494feb:{NFSU2_TR(0x494feb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494fec:{NFSU2_TR(0x494fec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494fed:{NFSU2_TR(0x494fed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B494fee:{NFSU2_TR(0x494fee);
__builtin_memmove((R+4),(R+0),4);
}
B494ff0:{NFSU2_TR(0x494ff0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494ff5ull));
TAIL_STATIC(0x48fe60u,48f);
}
B494ff5:L494ff5:{c.instructions+=3;NFSU2_TR(0x494ff5);
__builtin_memmove((R+4),(R+0),4);
}
B494ff7:{NFSU2_TR(0x494ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B494ffa:{NFSU2_TR(0x494ffa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x494fffull));
TAIL_STATIC(0x48ff40u,48f);
}
B494fff:L494fff:{c.instructions+=1;NFSU2_TR(0x494fff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
TAIL_STATIC(0x495000u,495);
}
XIT:NFSU2_TR_EXIT(0x494,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
