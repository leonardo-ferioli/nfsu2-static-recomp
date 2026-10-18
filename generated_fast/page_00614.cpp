#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_419(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_5aa(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5cc(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_613(u8* __restrict R,Cpu& c);
u32 body_615(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x614,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x614,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_614(u8* __restrict R,Cpu& c);
u32 page_614(Cpu& c){return body_614(c.regs.data(),c);}
__attribute__((noinline)) u32 body_614(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x614004:goto L614004;
case 0x61400b:c.instructions+=2;goto B61400b;
case 0x614012:c.instructions+=1;goto B614012;
case 0x614017:goto L614017;
case 0x61401b:c.instructions+=5;goto B61401b;
case 0x61401d:c.instructions+=4;goto B61401d;
case 0x61401e:c.instructions+=3;goto B61401e;
case 0x614022:c.instructions+=2;goto B614022;
case 0x614026:c.instructions+=1;goto B614026;
case 0x614028:goto L614028;
case 0x61402c:c.instructions+=9;goto B61402c;
case 0x614030:c.instructions+=8;goto B614030;
case 0x614034:c.instructions+=7;goto B614034;
case 0x614035:c.instructions+=6;goto B614035;
case 0x614038:c.instructions+=5;goto B614038;
case 0x61403b:c.instructions+=4;goto B61403b;
case 0x61403d:c.instructions+=3;goto B61403d;
case 0x614041:c.instructions+=2;goto B614041;
case 0x614045:c.instructions+=1;goto B614045;
case 0x61404b:goto L61404b;
case 0x61404f:c.instructions+=3;goto B61404f;
case 0x614053:c.instructions+=2;goto B614053;
case 0x61405a:c.instructions+=1;goto B61405a;
case 0x61405c:goto L61405c;
case 0x614061:c.instructions+=1;goto B614061;
case 0x614066:goto L614066;
case 0x61406a:c.instructions+=6;goto B61406a;
case 0x61406b:c.instructions+=5;goto B61406b;
case 0x61406e:c.instructions+=4;goto B61406e;
case 0x614071:c.instructions+=3;goto B614071;
case 0x614075:c.instructions+=2;goto B614075;
case 0x614079:c.instructions+=1;goto B614079;
case 0x61407f:goto L61407f;
case 0x614080:c.instructions+=5;goto B614080;
case 0x614081:c.instructions+=4;goto B614081;
case 0x614082:c.instructions+=3;goto B614082;
case 0x614084:c.instructions+=2;goto B614084;
case 0x614085:c.instructions+=1;goto B614085;
case 0x614090:goto L614090;
case 0x614091:c.instructions+=8;goto B614091;
case 0x614092:c.instructions+=7;goto B614092;
case 0x614093:c.instructions+=6;goto B614093;
case 0x614095:c.instructions+=5;goto B614095;
case 0x614097:c.instructions+=4;goto B614097;
case 0x614098:c.instructions+=3;goto B614098;
case 0x61409b:c.instructions+=2;goto B61409b;
case 0x61409e:c.instructions+=1;goto B61409e;
case 0x6140a3:goto L6140a3;
case 0x6140a8:c.instructions+=4;goto B6140a8;
case 0x6140ab:c.instructions+=3;goto B6140ab;
case 0x6140ad:c.instructions+=2;goto B6140ad;
case 0x6140b0:c.instructions+=1;goto B6140b0;
case 0x6140b5:goto L6140b5;
case 0x6140bb:c.instructions+=3;goto B6140bb;
case 0x6140c0:c.instructions+=2;goto B6140c0;
case 0x6140c3:c.instructions+=1;goto B6140c3;
case 0x6140c8:goto L6140c8;
case 0x6140ce:c.instructions+=3;goto B6140ce;
case 0x6140d3:c.instructions+=2;goto B6140d3;
case 0x6140d6:c.instructions+=1;goto B6140d6;
case 0x6140db:goto L6140db;
case 0x6140de:c.instructions+=4;goto B6140de;
case 0x6140e1:c.instructions+=3;goto B6140e1;
case 0x6140e4:c.instructions+=2;goto B6140e4;
case 0x6140e5:c.instructions+=1;goto B6140e5;
case 0x6140e7:goto L6140e7;
case 0x6140e8:c.instructions+=5;goto B6140e8;
case 0x6140e9:c.instructions+=4;goto B6140e9;
case 0x6140eb:c.instructions+=3;goto B6140eb;
case 0x6140ec:c.instructions+=2;goto B6140ec;
case 0x6140ed:c.instructions+=1;goto B6140ed;
case 0x6140f0:goto L6140f0;
case 0x6140f1:c.instructions+=33;goto B6140f1;
case 0x6140f3:c.instructions+=32;goto B6140f3;
case 0x6140f6:c.instructions+=31;goto B6140f6;
case 0x6140f9:c.instructions+=30;goto B6140f9;
case 0x6140fe:c.instructions+=29;goto B6140fe;
case 0x6140ff:c.instructions+=28;goto B6140ff;
case 0x614100:c.instructions+=27;goto B614100;
case 0x614103:c.instructions+=26;goto B614103;
case 0x614107:c.instructions+=25;goto B614107;
case 0x61410a:c.instructions+=24;goto B61410a;
case 0x614110:c.instructions+=23;goto B614110;
case 0x614115:c.instructions+=22;goto B614115;
case 0x614118:c.instructions+=21;goto B614118;
case 0x614119:c.instructions+=20;goto B614119;
case 0x61411c:c.instructions+=19;goto B61411c;
case 0x61411e:c.instructions+=18;goto B61411e;
case 0x614120:c.instructions+=17;goto B614120;
case 0x614123:c.instructions+=16;goto B614123;
case 0x614125:c.instructions+=15;goto B614125;
case 0x61412b:c.instructions+=14;goto B61412b;
case 0x61412d:c.instructions+=13;goto B61412d;
case 0x61412f:c.instructions+=12;goto B61412f;
case 0x614131:c.instructions+=11;goto B614131;
case 0x614133:c.instructions+=10;goto B614133;
case 0x614135:c.instructions+=9;goto B614135;
case 0x614137:c.instructions+=8;goto B614137;
case 0x614139:c.instructions+=7;goto B614139;
case 0x61413b:c.instructions+=6;goto B61413b;
case 0x61413d:c.instructions+=5;goto B61413d;
case 0x61413f:c.instructions+=4;goto B61413f;
case 0x614141:c.instructions+=3;goto B614141;
case 0x614147:c.instructions+=2;goto B614147;
case 0x61414b:c.instructions+=1;goto B61414b;
case 0x61414d:goto L61414d;
case 0x614153:c.instructions+=1;goto B614153;
case 0x614155:goto L614155;
case 0x61415a:goto L61415a;
case 0x61415d:c.instructions+=1;goto B61415d;
case 0x61415f:goto L61415f;
case 0x614162:c.instructions+=5;goto B614162;
case 0x614168:c.instructions+=4;goto B614168;
case 0x61416e:c.instructions+=3;goto B61416e;
case 0x614170:c.instructions+=2;goto B614170;
case 0x614173:c.instructions+=1;goto B614173;
case 0x614175:goto L614175;
case 0x614177:c.instructions+=1;goto B614177;
case 0x614179:goto L614179;
case 0x61417e:c.instructions+=1;goto B61417e;
case 0x614180:goto L614180;
case 0x614183:c.instructions+=5;goto B614183;
case 0x614189:c.instructions+=4;goto B614189;
case 0x61418f:c.instructions+=3;goto B61418f;
case 0x614191:c.instructions+=2;goto B614191;
case 0x614194:c.instructions+=1;goto B614194;
case 0x614196:goto L614196;
case 0x614198:c.instructions+=1;goto B614198;
case 0x61419a:goto L61419a;
case 0x61419f:goto L61419f;
case 0x6141a1:goto L6141a1;
case 0x6141a3:c.instructions+=3;goto B6141a3;
case 0x6141a5:c.instructions+=2;goto B6141a5;
case 0x6141a7:c.instructions+=1;goto B6141a7;
case 0x6141ad:goto L6141ad;
case 0x6141b0:goto L6141b0;
case 0x6141b5:c.instructions+=2;goto B6141b5;
case 0x6141b7:c.instructions+=1;goto B6141b7;
case 0x6141b9:goto L6141b9;
case 0x6141bb:c.instructions+=2;goto B6141bb;
case 0x6141bf:c.instructions+=1;goto B6141bf;
case 0x6141c1:goto L6141c1;
case 0x6141c3:c.instructions+=4;goto B6141c3;
case 0x6141c9:c.instructions+=3;goto B6141c9;
case 0x6141cb:c.instructions+=2;goto B6141cb;
case 0x6141ce:c.instructions+=1;goto B6141ce;
case 0x6141d0:goto L6141d0;
case 0x6141d3:c.instructions+=3;goto B6141d3;
case 0x6141d8:c.instructions+=2;goto B6141d8;
case 0x6141da:c.instructions+=1;goto B6141da;
case 0x6141df:goto L6141df;
case 0x6141e2:c.instructions+=2;goto B6141e2;
case 0x6141e7:c.instructions+=1;goto B6141e7;
case 0x6141ec:goto L6141ec;
case 0x6141ef:c.instructions+=2;goto B6141ef;
case 0x6141f2:c.instructions+=1;goto B6141f2;
case 0x6141f7:goto L6141f7;
case 0x6141fd:c.instructions+=10;goto B6141fd;
case 0x614200:c.instructions+=9;goto B614200;
case 0x614204:c.instructions+=8;goto B614204;
case 0x614207:c.instructions+=7;goto B614207;
case 0x61420b:c.instructions+=6;goto B61420b;
case 0x61420e:c.instructions+=5;goto B61420e;
case 0x614212:c.instructions+=4;goto B614212;
case 0x614218:c.instructions+=3;goto B614218;
case 0x61421a:c.instructions+=2;goto B61421a;
case 0x61421d:c.instructions+=1;goto B61421d;
case 0x614223:goto L614223;
case 0x614226:c.instructions+=4;goto B614226;
case 0x61422c:c.instructions+=3;goto B61422c;
case 0x61422e:c.instructions+=2;goto B61422e;
case 0x614231:c.instructions+=1;goto B614231;
case 0x614233:goto L614233;
case 0x614236:c.instructions+=4;goto B614236;
case 0x61423c:c.instructions+=3;goto B61423c;
case 0x61423e:c.instructions+=2;goto B61423e;
case 0x614241:c.instructions+=1;goto B614241;
case 0x614243:goto L614243;
case 0x614246:c.instructions+=11;goto B614246;
case 0x61424a:c.instructions+=10;goto B61424a;
case 0x614250:c.instructions+=9;goto B614250;
case 0x614251:c.instructions+=8;goto B614251;
case 0x614255:c.instructions+=7;goto B614255;
case 0x614256:c.instructions+=6;goto B614256;
case 0x61425a:c.instructions+=5;goto B61425a;
case 0x614262:c.instructions+=4;goto B614262;
case 0x614266:c.instructions+=3;goto B614266;
case 0x61426c:c.instructions+=2;goto B61426c;
case 0x614270:c.instructions+=1;goto B614270;
case 0x614275:goto L614275;
case 0x614279:c.instructions+=11;goto B614279;
case 0x61427d:c.instructions+=10;goto B61427d;
case 0x614280:c.instructions+=9;goto B614280;
case 0x614284:c.instructions+=8;goto B614284;
case 0x614288:c.instructions+=7;goto B614288;
case 0x61428c:c.instructions+=6;goto B61428c;
case 0x614290:c.instructions+=5;goto B614290;
case 0x614294:c.instructions+=4;goto B614294;
case 0x614298:c.instructions+=3;goto B614298;
case 0x61429b:c.instructions+=2;goto B61429b;
case 0x61429e:c.instructions+=1;goto B61429e;
case 0x6142a0:goto L6142a0;
case 0x6142a6:goto L6142a6;
case 0x6142a8:c.instructions+=4;goto B6142a8;
case 0x6142a9:c.instructions+=3;goto B6142a9;
case 0x6142ac:c.instructions+=2;goto B6142ac;
case 0x6142ae:c.instructions+=1;goto B6142ae;
case 0x6142b4:goto L6142b4;
case 0x6142b5:c.instructions+=5;goto B6142b5;
case 0x6142b6:c.instructions+=4;goto B6142b6;
case 0x6142b7:c.instructions+=3;goto B6142b7;
case 0x6142b9:c.instructions+=2;goto B6142b9;
case 0x6142ba:c.instructions+=1;goto B6142ba;
case 0x6142c0:goto L6142c0;
case 0x6142c4:c.instructions+=16;goto B6142c4;
case 0x6142c8:c.instructions+=15;goto B6142c8;
case 0x6142cb:c.instructions+=14;goto B6142cb;
case 0x6142ce:c.instructions+=13;goto B6142ce;
case 0x6142d1:c.instructions+=12;goto B6142d1;
case 0x6142d3:c.instructions+=11;goto B6142d3;
case 0x6142d6:c.instructions+=10;goto B6142d6;
case 0x6142da:c.instructions+=9;goto B6142da;
case 0x6142dc:c.instructions+=8;goto B6142dc;
case 0x6142df:c.instructions+=7;goto B6142df;
case 0x6142e2:c.instructions+=6;goto B6142e2;
case 0x6142e6:c.instructions+=5;goto B6142e6;
case 0x6142e8:c.instructions+=4;goto B6142e8;
case 0x6142eb:c.instructions+=3;goto B6142eb;
case 0x6142ef:c.instructions+=2;goto B6142ef;
case 0x6142f1:c.instructions+=1;goto B6142f1;
case 0x614300:goto L614300;
case 0x614305:c.instructions+=7;goto B614305;
case 0x614308:c.instructions+=6;goto B614308;
case 0x61430a:c.instructions+=5;goto B61430a;
case 0x61430b:c.instructions+=4;goto B61430b;
case 0x61430c:c.instructions+=3;goto B61430c;
case 0x61430d:c.instructions+=2;goto B61430d;
case 0x61430f:c.instructions+=1;goto B61430f;
case 0x614311:goto L614311;
case 0x614316:c.instructions+=27;goto B614316;
case 0x614318:c.instructions+=26;goto B614318;
case 0x61431e:c.instructions+=25;goto B61431e;
case 0x614321:c.instructions+=24;goto B614321;
case 0x614327:c.instructions+=23;goto B614327;
case 0x61432a:c.instructions+=22;goto B61432a;
case 0x61432f:c.instructions+=21;goto B61432f;
case 0x614332:c.instructions+=20;goto B614332;
case 0x614338:c.instructions+=19;goto B614338;
case 0x61433b:c.instructions+=18;goto B61433b;
case 0x614340:c.instructions+=17;goto B614340;
case 0x614346:c.instructions+=16;goto B614346;
case 0x61434c:c.instructions+=15;goto B61434c;
case 0x614352:c.instructions+=14;goto B614352;
case 0x614355:c.instructions+=13;goto B614355;
case 0x614357:c.instructions+=12;goto B614357;
case 0x61435a:c.instructions+=11;goto B61435a;
case 0x61435c:c.instructions+=10;goto B61435c;
case 0x614361:c.instructions+=9;goto B614361;
case 0x614366:c.instructions+=8;goto B614366;
case 0x614367:c.instructions+=7;goto B614367;
case 0x61436a:c.instructions+=6;goto B61436a;
case 0x61436d:c.instructions+=5;goto B61436d;
case 0x61436e:c.instructions+=4;goto B61436e;
case 0x614373:c.instructions+=3;goto B614373;
case 0x614374:c.instructions+=2;goto B614374;
case 0x614377:c.instructions+=1;goto B614377;
case 0x61437a:goto L61437a;
case 0x61437e:c.instructions+=8;goto B61437e;
case 0x614381:c.instructions+=7;goto B614381;
case 0x614382:c.instructions+=6;goto B614382;
case 0x614386:c.instructions+=5;goto B614386;
case 0x61438a:c.instructions+=4;goto B61438a;
case 0x61438d:c.instructions+=3;goto B61438d;
case 0x614393:c.instructions+=2;goto B614393;
case 0x614395:c.instructions+=1;goto B614395;
case 0x61439b:goto L61439b;
case 0x6143a1:c.instructions+=2;goto B6143a1;
case 0x6143a3:c.instructions+=1;goto B6143a3;
case 0x6143a9:goto L6143a9;
case 0x6143af:c.instructions+=5;goto B6143af;
case 0x6143b5:c.instructions+=4;goto B6143b5;
case 0x6143b7:c.instructions+=3;goto B6143b7;
case 0x6143bf:c.instructions+=2;goto B6143bf;
case 0x6143c7:c.instructions+=1;goto B6143c7;
case 0x6143c9:goto L6143c9;
case 0x6143cd:c.instructions+=1;goto B6143cd;
case 0x6143cf:goto L6143cf;
case 0x6143d5:c.instructions+=3;goto B6143d5;
case 0x6143d7:c.instructions+=2;goto B6143d7;
case 0x6143db:c.instructions+=1;goto B6143db;
case 0x6143dd:goto L6143dd;
case 0x6143e3:c.instructions+=9;goto B6143e3;
case 0x6143e4:c.instructions+=8;goto B6143e4;
case 0x6143e8:c.instructions+=7;goto B6143e8;
case 0x6143ec:c.instructions+=6;goto B6143ec;
case 0x6143ed:c.instructions+=5;goto B6143ed;
case 0x6143f1:c.instructions+=4;goto B6143f1;
case 0x6143f2:c.instructions+=3;goto B6143f2;
case 0x6143f6:c.instructions+=2;goto B6143f6;
case 0x6143f7:c.instructions+=1;goto B6143f7;
case 0x6143fc:goto L6143fc;
case 0x614400:c.instructions+=8;goto B614400;
case 0x614404:c.instructions+=7;goto B614404;
case 0x614407:c.instructions+=6;goto B614407;
case 0x61440c:c.instructions+=5;goto B61440c;
case 0x61440d:c.instructions+=4;goto B61440d;
case 0x614413:c.instructions+=3;goto B614413;
case 0x614414:c.instructions+=2;goto B614414;
case 0x614416:c.instructions+=1;goto B614416;
case 0x61441b:goto L61441b;
case 0x61441f:c.instructions+=7;goto B61441f;
case 0x614423:c.instructions+=6;goto B614423;
case 0x614428:c.instructions+=5;goto B614428;
case 0x614429:c.instructions+=4;goto B614429;
case 0x61442f:c.instructions+=3;goto B61442f;
case 0x614430:c.instructions+=2;goto B614430;
case 0x614432:c.instructions+=1;goto B614432;
case 0x614437:goto L614437;
case 0x614439:c.instructions+=2;goto B614439;
case 0x61443b:c.instructions+=1;goto B61443b;
case 0x614440:goto L614440;
case 0x614444:c.instructions+=4;goto B614444;
case 0x614446:c.instructions+=3;goto B614446;
case 0x614448:c.instructions+=2;goto B614448;
case 0x61444c:c.instructions+=1;goto B61444c;
case 0x614451:goto L614451;
case 0x614455:c.instructions+=5;goto B614455;
case 0x614457:c.instructions+=4;goto B614457;
case 0x614459:c.instructions+=3;goto B614459;
case 0x61445d:c.instructions+=2;goto B61445d;
case 0x614461:c.instructions+=1;goto B614461;
case 0x614466:goto L614466;
case 0x61446a:c.instructions+=4;goto B61446a;
case 0x61446c:c.instructions+=3;goto B61446c;
case 0x61446e:c.instructions+=2;goto B61446e;
case 0x614472:c.instructions+=1;goto B614472;
case 0x614477:goto L614477;
case 0x61447b:c.instructions+=5;goto B61447b;
case 0x61447d:c.instructions+=4;goto B61447d;
case 0x61447f:c.instructions+=3;goto B61447f;
case 0x614483:c.instructions+=2;goto B614483;
case 0x614487:c.instructions+=1;goto B614487;
case 0x61448c:goto L61448c;
case 0x614490:c.instructions+=4;goto B614490;
case 0x614492:c.instructions+=3;goto B614492;
case 0x614494:c.instructions+=2;goto B614494;
case 0x614498:c.instructions+=1;goto B614498;
case 0x61449d:goto L61449d;
case 0x6144a1:c.instructions+=5;goto B6144a1;
case 0x6144a3:c.instructions+=4;goto B6144a3;
case 0x6144a5:c.instructions+=3;goto B6144a5;
case 0x6144a9:c.instructions+=2;goto B6144a9;
case 0x6144ad:c.instructions+=1;goto B6144ad;
case 0x6144b2:goto L6144b2;
case 0x6144b6:c.instructions+=4;goto B6144b6;
case 0x6144b8:c.instructions+=3;goto B6144b8;
case 0x6144ba:c.instructions+=2;goto B6144ba;
case 0x6144be:c.instructions+=1;goto B6144be;
case 0x6144c3:goto L6144c3;
case 0x6144c7:c.instructions+=5;goto B6144c7;
case 0x6144c9:c.instructions+=4;goto B6144c9;
case 0x6144cb:c.instructions+=3;goto B6144cb;
case 0x6144cf:c.instructions+=2;goto B6144cf;
case 0x6144d3:c.instructions+=1;goto B6144d3;
case 0x6144d8:goto L6144d8;
case 0x6144dc:c.instructions+=4;goto B6144dc;
case 0x6144de:c.instructions+=3;goto B6144de;
case 0x6144e0:c.instructions+=2;goto B6144e0;
case 0x6144e4:c.instructions+=1;goto B6144e4;
case 0x6144e9:goto L6144e9;
case 0x6144ed:c.instructions+=5;goto B6144ed;
case 0x6144f1:c.instructions+=4;goto B6144f1;
case 0x6144f3:c.instructions+=3;goto B6144f3;
case 0x6144f7:c.instructions+=2;goto B6144f7;
case 0x6144f9:c.instructions+=1;goto B6144f9;
case 0x6144fe:goto L6144fe;
case 0x614502:c.instructions+=4;goto B614502;
case 0x614504:c.instructions+=3;goto B614504;
case 0x614506:c.instructions+=2;goto B614506;
case 0x61450a:c.instructions+=1;goto B61450a;
case 0x61450f:goto L61450f;
case 0x614513:c.instructions+=5;goto B614513;
case 0x614515:c.instructions+=4;goto B614515;
case 0x614517:c.instructions+=3;goto B614517;
case 0x61451b:c.instructions+=2;goto B61451b;
case 0x61451f:c.instructions+=1;goto B61451f;
case 0x614524:goto L614524;
case 0x614528:c.instructions+=4;goto B614528;
case 0x61452a:c.instructions+=3;goto B61452a;
case 0x61452c:c.instructions+=2;goto B61452c;
case 0x614530:c.instructions+=1;goto B614530;
case 0x614535:goto L614535;
case 0x614539:c.instructions+=5;goto B614539;
case 0x61453b:c.instructions+=4;goto B61453b;
case 0x61453d:c.instructions+=3;goto B61453d;
case 0x614541:c.instructions+=2;goto B614541;
case 0x614545:c.instructions+=1;goto B614545;
case 0x61454a:goto L61454a;
case 0x61454e:c.instructions+=4;goto B61454e;
case 0x614550:c.instructions+=3;goto B614550;
case 0x614552:c.instructions+=2;goto B614552;
case 0x614556:c.instructions+=1;goto B614556;
case 0x61455b:goto L61455b;
case 0x61455f:c.instructions+=12;goto B61455f;
case 0x614563:c.instructions+=11;goto B614563;
case 0x614567:c.instructions+=10;goto B614567;
case 0x61456b:c.instructions+=9;goto B61456b;
case 0x61456f:c.instructions+=8;goto B61456f;
case 0x614571:c.instructions+=7;goto B614571;
case 0x614575:c.instructions+=6;goto B614575;
case 0x614578:c.instructions+=5;goto B614578;
case 0x61457b:c.instructions+=4;goto B61457b;
case 0x61457e:c.instructions+=3;goto B61457e;
case 0x614582:c.instructions+=2;goto B614582;
case 0x614585:c.instructions+=1;goto B614585;
case 0x61458a:goto L61458a;
case 0x61458e:c.instructions+=4;goto B61458e;
case 0x614590:c.instructions+=3;goto B614590;
case 0x614596:c.instructions+=2;goto B614596;
case 0x614599:c.instructions+=1;goto B614599;
case 0x61459e:goto L61459e;
case 0x6145a2:c.instructions+=3;goto B6145a2;
case 0x6145a4:c.instructions+=2;goto B6145a4;
case 0x6145a7:c.instructions+=1;goto B6145a7;
case 0x6145ac:goto L6145ac;
case 0x6145b0:c.instructions+=10;goto B6145b0;
case 0x6145b2:c.instructions+=9;goto B6145b2;
case 0x6145b5:c.instructions+=8;goto B6145b5;
case 0x6145b8:c.instructions+=7;goto B6145b8;
case 0x6145be:c.instructions+=6;goto B6145be;
case 0x6145c2:c.instructions+=5;goto B6145c2;
case 0x6145c6:c.instructions+=4;goto B6145c6;
case 0x6145cc:c.instructions+=3;goto B6145cc;
case 0x6145ce:c.instructions+=2;goto B6145ce;
case 0x6145d1:c.instructions+=1;goto B6145d1;
case 0x6145d7:goto L6145d7;
case 0x6145db:c.instructions+=5;goto B6145db;
case 0x6145de:c.instructions+=4;goto B6145de;
case 0x6145e4:c.instructions+=3;goto B6145e4;
case 0x6145e6:c.instructions+=2;goto B6145e6;
case 0x6145ee:c.instructions+=1;goto B6145ee;
case 0x6145f0:goto L6145f0;
case 0x6145f4:c.instructions+=6;goto B6145f4;
case 0x6145fa:c.instructions+=5;goto B6145fa;
case 0x6145fe:c.instructions+=4;goto B6145fe;
case 0x6145ff:c.instructions+=3;goto B6145ff;
case 0x614600:c.instructions+=2;goto B614600;
case 0x614602:c.instructions+=1;goto B614602;
case 0x614607:goto L614607;
case 0x614609:c.instructions+=2;goto B614609;
case 0x61460b:c.instructions+=1;goto B61460b;
case 0x614610:goto L614610;
case 0x614614:goto L614614;
case 0x61461a:c.instructions+=2;goto B61461a;
case 0x61461c:c.instructions+=1;goto B61461c;
case 0x614622:goto L614622;
case 0x614626:c.instructions+=11;goto B614626;
case 0x61462c:c.instructions+=10;goto B61462c;
case 0x614630:c.instructions+=9;goto B614630;
case 0x614634:c.instructions+=8;goto B614634;
case 0x614638:c.instructions+=7;goto B614638;
case 0x614639:c.instructions+=6;goto B614639;
case 0x61463a:c.instructions+=5;goto B61463a;
case 0x61463e:c.instructions+=4;goto B61463e;
case 0x614644:c.instructions+=3;goto B614644;
case 0x614645:c.instructions+=2;goto B614645;
case 0x614647:c.instructions+=1;goto B614647;
case 0x61464c:goto L61464c;
case 0x61464e:c.instructions+=2;goto B61464e;
case 0x614650:c.instructions+=1;goto B614650;
case 0x614655:goto L614655;
case 0x614659:c.instructions+=3;goto B614659;
case 0x61465b:c.instructions+=2;goto B61465b;
case 0x61465d:c.instructions+=1;goto B61465d;
case 0x614662:goto L614662;
case 0x614666:c.instructions+=3;goto B614666;
case 0x614668:c.instructions+=2;goto B614668;
case 0x61466a:c.instructions+=1;goto B61466a;
case 0x61466f:goto L61466f;
case 0x614673:c.instructions+=3;goto B614673;
case 0x614675:c.instructions+=2;goto B614675;
case 0x614677:c.instructions+=1;goto B614677;
case 0x61467c:goto L61467c;
case 0x614680:c.instructions+=3;goto B614680;
case 0x614682:c.instructions+=2;goto B614682;
case 0x614684:c.instructions+=1;goto B614684;
case 0x614689:goto L614689;
case 0x61468d:c.instructions+=3;goto B61468d;
case 0x61468f:c.instructions+=2;goto B61468f;
case 0x614691:c.instructions+=1;goto B614691;
case 0x614696:goto L614696;
case 0x61469a:c.instructions+=3;goto B61469a;
case 0x61469c:c.instructions+=2;goto B61469c;
case 0x61469e:c.instructions+=1;goto B61469e;
case 0x6146a3:goto L6146a3;
case 0x6146a7:c.instructions+=3;goto B6146a7;
case 0x6146a9:c.instructions+=2;goto B6146a9;
case 0x6146ab:c.instructions+=1;goto B6146ab;
case 0x6146b0:goto L6146b0;
case 0x6146b4:c.instructions+=36;goto B6146b4;
case 0x6146b6:c.instructions+=35;goto B6146b6;
case 0x6146ba:c.instructions+=34;goto B6146ba;
case 0x6146be:c.instructions+=33;goto B6146be;
case 0x6146c0:c.instructions+=32;goto B6146c0;
case 0x6146c2:c.instructions+=31;goto B6146c2;
case 0x6146c6:c.instructions+=30;goto B6146c6;
case 0x6146c9:c.instructions+=29;goto B6146c9;
case 0x6146cd:c.instructions+=28;goto B6146cd;
case 0x6146d1:c.instructions+=27;goto B6146d1;
case 0x6146d3:c.instructions+=26;goto B6146d3;
case 0x6146d6:c.instructions+=25;goto B6146d6;
case 0x6146da:c.instructions+=24;goto B6146da;
case 0x6146dc:c.instructions+=23;goto B6146dc;
case 0x6146e0:c.instructions+=22;goto B6146e0;
case 0x6146e3:c.instructions+=21;goto B6146e3;
case 0x6146e5:c.instructions+=20;goto B6146e5;
case 0x6146e8:c.instructions+=19;goto B6146e8;
case 0x6146ea:c.instructions+=18;goto B6146ea;
case 0x6146ee:c.instructions+=17;goto B6146ee;
case 0x6146f1:c.instructions+=16;goto B6146f1;
case 0x6146f5:c.instructions+=15;goto B6146f5;
case 0x6146f9:c.instructions+=14;goto B6146f9;
case 0x6146fb:c.instructions+=13;goto B6146fb;
case 0x6146fe:c.instructions+=12;goto B6146fe;
case 0x614702:c.instructions+=11;goto B614702;
case 0x614706:c.instructions+=10;goto B614706;
case 0x61470a:c.instructions+=9;goto B61470a;
case 0x61470d:c.instructions+=8;goto B61470d;
case 0x61470f:c.instructions+=7;goto B61470f;
case 0x614712:c.instructions+=6;goto B614712;
case 0x614716:c.instructions+=5;goto B614716;
case 0x61471a:c.instructions+=4;goto B61471a;
case 0x61471e:c.instructions+=3;goto B61471e;
case 0x614722:c.instructions+=2;goto B614722;
case 0x614724:c.instructions+=1;goto B614724;
case 0x614729:goto L614729;
case 0x61472d:c.instructions+=6;goto B61472d;
case 0x614731:c.instructions+=5;goto B614731;
case 0x614733:c.instructions+=4;goto B614733;
case 0x614737:c.instructions+=3;goto B614737;
case 0x61473b:c.instructions+=2;goto B61473b;
case 0x61473d:c.instructions+=1;goto B61473d;
case 0x614742:goto L614742;
case 0x614746:c.instructions+=6;goto B614746;
case 0x61474a:c.instructions+=5;goto B61474a;
case 0x61474c:c.instructions+=4;goto B61474c;
case 0x614750:c.instructions+=3;goto B614750;
case 0x614754:c.instructions+=2;goto B614754;
case 0x614756:c.instructions+=1;goto B614756;
case 0x61475b:goto L61475b;
case 0x61475f:c.instructions+=6;goto B61475f;
case 0x614762:c.instructions+=5;goto B614762;
case 0x614764:c.instructions+=4;goto B614764;
case 0x614765:c.instructions+=3;goto B614765;
case 0x614766:c.instructions+=2;goto B614766;
case 0x614767:c.instructions+=1;goto B614767;
case 0x61476c:goto L61476c;
case 0x614772:c.instructions+=5;goto B614772;
case 0x614775:c.instructions+=4;goto B614775;
case 0x614777:c.instructions+=3;goto B614777;
case 0x61477a:c.instructions+=2;goto B61477a;
case 0x61477c:c.instructions+=1;goto B61477c;
case 0x61477f:goto L61477f;
case 0x614780:c.instructions+=6;goto B614780;
case 0x614781:c.instructions+=5;goto B614781;
case 0x614782:c.instructions+=4;goto B614782;
case 0x614787:c.instructions+=3;goto B614787;
case 0x614788:c.instructions+=2;goto B614788;
case 0x61478b:c.instructions+=1;goto B61478b;
case 0x61478e:goto L61478e;
case 0x61478f:c.instructions+=5;goto B61478f;
case 0x614790:c.instructions+=4;goto B614790;
case 0x614792:c.instructions+=3;goto B614792;
case 0x614793:c.instructions+=2;goto B614793;
case 0x614796:c.instructions+=1;goto B614796;
case 0x6147a0:goto L6147a0;
case 0x6147a1:c.instructions+=6;goto B6147a1;
case 0x6147a2:c.instructions+=5;goto B6147a2;
case 0x6147a4:c.instructions+=4;goto B6147a4;
case 0x6147a7:c.instructions+=3;goto B6147a7;
case 0x6147aa:c.instructions+=2;goto B6147aa;
case 0x6147ac:c.instructions+=1;goto B6147ac;
case 0x6147ae:goto L6147ae;
case 0x6147b0:goto L6147b0;
case 0x6147b2:c.instructions+=7;goto B6147b2;
case 0x6147b4:c.instructions+=6;goto B6147b4;
case 0x6147b7:c.instructions+=5;goto B6147b7;
case 0x6147b9:c.instructions+=4;goto B6147b9;
case 0x6147bc:c.instructions+=3;goto B6147bc;
case 0x6147be:c.instructions+=2;goto B6147be;
case 0x6147c8:c.instructions+=1;goto B6147c8;
case 0x6147cd:goto L6147cd;
case 0x6147cf:c.instructions+=1;goto B6147cf;
case 0x6147d1:goto L6147d1;
case 0x6147d2:c.instructions+=2;goto B6147d2;
case 0x6147d3:c.instructions+=1;goto B6147d3;
case 0x6147e0:goto L6147e0;
case 0x6147e1:c.instructions+=6;goto B6147e1;
case 0x6147e4:c.instructions+=5;goto B6147e4;
case 0x6147e5:c.instructions+=4;goto B6147e5;
case 0x6147e8:c.instructions+=3;goto B6147e8;
case 0x6147ea:c.instructions+=2;goto B6147ea;
case 0x6147f4:c.instructions+=1;goto B6147f4;
case 0x6147f6:goto L6147f6;
case 0x6147fc:c.instructions+=2;goto B6147fc;
case 0x6147fe:c.instructions+=1;goto B6147fe;
case 0x614800:goto L614800;
case 0x614802:c.instructions+=1;goto B614802;
case 0x614807:goto L614807;
case 0x614809:c.instructions+=2;goto B614809;
case 0x61480b:c.instructions+=1;goto B61480b;
case 0x61480d:goto L61480d;
case 0x61480e:c.instructions+=2;goto B61480e;
case 0x61480f:c.instructions+=1;goto B61480f;
case 0x614810:goto L614810;
case 0x614813:c.instructions+=2;goto B614813;
case 0x614816:c.instructions+=1;goto B614816;
case 0x614820:goto L614820;
case 0x614821:c.instructions+=3;goto B614821;
case 0x614827:c.instructions+=2;goto B614827;
case 0x61482c:c.instructions+=1;goto B61482c;
case 0x614831:goto L614831;
case 0x614833:c.instructions+=1;goto B614833;
case 0x614835:goto L614835;
case 0x614837:c.instructions+=2;goto B614837;
case 0x614839:c.instructions+=1;goto B614839;
case 0x61483b:goto L61483b;
case 0x61483c:c.instructions+=1;goto B61483c;
case 0x614840:goto L614840;
case 0x614843:c.instructions+=3;goto B614843;
case 0x614845:c.instructions+=2;goto B614845;
case 0x614847:c.instructions+=1;goto B614847;
case 0x614849:goto L614849;
case 0x61484c:c.instructions+=2;goto B61484c;
case 0x61484e:c.instructions+=1;goto B61484e;
case 0x614850:goto L614850;
case 0x614853:c.instructions+=1;goto B614853;
case 0x614858:goto L614858;
case 0x61485c:c.instructions+=8;goto B61485c;
case 0x61485e:c.instructions+=7;goto B61485e;
case 0x614861:c.instructions+=6;goto B614861;
case 0x614864:c.instructions+=5;goto B614864;
case 0x614868:c.instructions+=4;goto B614868;
case 0x61486a:c.instructions+=3;goto B61486a;
case 0x61486d:c.instructions+=2;goto B61486d;
case 0x614870:c.instructions+=1;goto B614870;
case 0x614880:goto L614880;
case 0x614883:c.instructions+=3;goto B614883;
case 0x614885:c.instructions+=2;goto B614885;
case 0x614887:c.instructions+=1;goto B614887;
case 0x614889:goto L614889;
case 0x61488c:c.instructions+=2;goto B61488c;
case 0x614890:c.instructions+=1;goto B614890;
case 0x614893:goto L614893;
case 0x6148a0:goto L6148a0;
case 0x6148a3:c.instructions+=3;goto B6148a3;
case 0x6148a5:c.instructions+=2;goto B6148a5;
case 0x6148a7:c.instructions+=1;goto B6148a7;
case 0x6148a9:goto L6148a9;
case 0x6148ac:c.instructions+=2;goto B6148ac;
case 0x6148b0:c.instructions+=1;goto B6148b0;
case 0x6148b3:goto L6148b3;
case 0x6148c0:goto L6148c0;
case 0x6148c3:c.instructions+=3;goto B6148c3;
case 0x6148c5:c.instructions+=2;goto B6148c5;
case 0x6148c7:c.instructions+=1;goto B6148c7;
case 0x6148c9:goto L6148c9;
case 0x6148cc:c.instructions+=2;goto B6148cc;
case 0x6148d0:c.instructions+=1;goto B6148d0;
case 0x6148d3:goto L6148d3;
case 0x6148e0:goto L6148e0;
case 0x6148e1:c.instructions+=19;goto B6148e1;
case 0x6148e3:c.instructions+=18;goto B6148e3;
case 0x6148e6:c.instructions+=17;goto B6148e6;
case 0x6148e8:c.instructions+=16;goto B6148e8;
case 0x6148ed:c.instructions+=15;goto B6148ed;
case 0x6148f3:c.instructions+=14;goto B6148f3;
case 0x6148f4:c.instructions+=13;goto B6148f4;
case 0x6148fb:c.instructions+=12;goto B6148fb;
case 0x614901:c.instructions+=11;goto B614901;
case 0x614902:c.instructions+=10;goto B614902;
case 0x614903:c.instructions+=9;goto B614903;
case 0x614906:c.instructions+=8;goto B614906;
case 0x614908:c.instructions+=7;goto B614908;
case 0x614909:c.instructions+=6;goto B614909;
case 0x61490b:c.instructions+=5;goto B61490b;
case 0x61490e:c.instructions+=4;goto B61490e;
case 0x614915:c.instructions+=3;goto B614915;
case 0x614918:c.instructions+=2;goto B614918;
case 0x61491c:c.instructions+=1;goto B61491c;
case 0x614922:goto L614922;
case 0x614924:c.instructions+=4;goto B614924;
case 0x61492a:c.instructions+=3;goto B61492a;
case 0x614931:c.instructions+=2;goto B614931;
case 0x614934:c.instructions+=1;goto B614934;
case 0x614939:goto L614939;
case 0x614940:c.instructions+=7;goto B614940;
case 0x614942:c.instructions+=6;goto B614942;
case 0x614948:c.instructions+=5;goto B614948;
case 0x61494a:c.instructions+=4;goto B61494a;
case 0x61494b:c.instructions+=3;goto B61494b;
case 0x61494c:c.instructions+=2;goto B61494c;
case 0x614950:c.instructions+=1;goto B614950;
case 0x614955:goto L614955;
case 0x61495c:c.instructions+=17;goto B61495c;
case 0x61495e:c.instructions+=16;goto B61495e;
case 0x614961:c.instructions+=15;goto B614961;
case 0x614964:c.instructions+=14;goto B614964;
case 0x614968:c.instructions+=13;goto B614968;
case 0x61496b:c.instructions+=12;goto B61496b;
case 0x61496f:c.instructions+=11;goto B61496f;
case 0x614972:c.instructions+=10;goto B614972;
case 0x614979:c.instructions+=9;goto B614979;
case 0x61497c:c.instructions+=8;goto B61497c;
case 0x614980:c.instructions+=7;goto B614980;
case 0x614983:c.instructions+=6;goto B614983;
case 0x614986:c.instructions+=5;goto B614986;
case 0x61498d:c.instructions+=4;goto B61498d;
case 0x614990:c.instructions+=3;goto B614990;
case 0x614993:c.instructions+=2;goto B614993;
case 0x61499a:c.instructions+=1;goto B61499a;
case 0x61499f:goto L61499f;
case 0x6149a2:c.instructions+=13;goto B6149a2;
case 0x6149a3:c.instructions+=12;goto B6149a3;
case 0x6149a5:c.instructions+=11;goto B6149a5;
case 0x6149ac:c.instructions+=10;goto B6149ac;
case 0x6149ad:c.instructions+=9;goto B6149ad;
case 0x6149b4:c.instructions+=8;goto B6149b4;
case 0x6149b5:c.instructions+=7;goto B6149b5;
case 0x6149b6:c.instructions+=6;goto B6149b6;
case 0x6149b8:c.instructions+=5;goto B6149b8;
case 0x6149bf:c.instructions+=4;goto B6149bf;
case 0x6149c6:c.instructions+=3;goto B6149c6;
case 0x6149d1:c.instructions+=2;goto B6149d1;
case 0x6149d5:c.instructions+=1;goto B6149d5;
case 0x6149da:goto L6149da;
case 0x6149de:c.instructions+=4;goto B6149de;
case 0x6149e5:c.instructions+=3;goto B6149e5;
case 0x6149e6:c.instructions+=2;goto B6149e6;
case 0x6149e8:c.instructions+=1;goto B6149e8;
case 0x6149ed:goto L6149ed;
case 0x6149f4:c.instructions+=4;goto B6149f4;
case 0x6149fb:c.instructions+=3;goto B6149fb;
case 0x6149fc:c.instructions+=2;goto B6149fc;
case 0x6149fd:c.instructions+=1;goto B6149fd;
case 0x614a02:goto L614a02;
case 0x614a07:c.instructions+=23;goto B614a07;
case 0x614a0b:c.instructions+=22;goto B614a0b;
case 0x614a13:c.instructions+=21;goto B614a13;
case 0x614a17:c.instructions+=20;goto B614a17;
case 0x614a1b:c.instructions+=19;goto B614a1b;
case 0x614a1d:c.instructions+=18;goto B614a1d;
case 0x614a1e:c.instructions+=17;goto B614a1e;
case 0x614a1f:c.instructions+=16;goto B614a1f;
case 0x614a23:c.instructions+=15;goto B614a23;
case 0x614a24:c.instructions+=14;goto B614a24;
case 0x614a28:c.instructions+=13;goto B614a28;
case 0x614a2c:c.instructions+=12;goto B614a2c;
case 0x614a34:c.instructions+=11;goto B614a34;
case 0x614a38:c.instructions+=10;goto B614a38;
case 0x614a3c:c.instructions+=9;goto B614a3c;
case 0x614a40:c.instructions+=8;goto B614a40;
case 0x614a44:c.instructions+=7;goto B614a44;
case 0x614a4c:c.instructions+=6;goto B614a4c;
case 0x614a53:c.instructions+=5;goto B614a53;
case 0x614a5a:c.instructions+=4;goto B614a5a;
case 0x614a61:c.instructions+=3;goto B614a61;
case 0x614a68:c.instructions+=2;goto B614a68;
case 0x614a73:c.instructions+=1;goto B614a73;
case 0x614a78:goto L614a78;
case 0x614a7c:c.instructions+=24;goto B614a7c;
case 0x614a7f:c.instructions+=23;goto B614a7f;
case 0x614a83:c.instructions+=22;goto B614a83;
case 0x614a89:c.instructions+=21;goto B614a89;
case 0x614a8d:c.instructions+=20;goto B614a8d;
case 0x614a92:c.instructions+=19;goto B614a92;
case 0x614a96:c.instructions+=18;goto B614a96;
case 0x614a98:c.instructions+=17;goto B614a98;
case 0x614a9c:c.instructions+=16;goto B614a9c;
case 0x614aa0:c.instructions+=15;goto B614aa0;
case 0x614aa2:c.instructions+=14;goto B614aa2;
case 0x614aa6:c.instructions+=13;goto B614aa6;
case 0x614aaa:c.instructions+=12;goto B614aaa;
case 0x614aae:c.instructions+=11;goto B614aae;
case 0x614ab2:c.instructions+=10;goto B614ab2;
case 0x614ab6:c.instructions+=9;goto B614ab6;
case 0x614ab8:c.instructions+=8;goto B614ab8;
case 0x614abc:c.instructions+=7;goto B614abc;
case 0x614ac0:c.instructions+=6;goto B614ac0;
case 0x614ac2:c.instructions+=5;goto B614ac2;
case 0x614ac6:c.instructions+=4;goto B614ac6;
case 0x614ac8:c.instructions+=3;goto B614ac8;
case 0x614acf:c.instructions+=2;goto B614acf;
case 0x614ad6:c.instructions+=1;goto B614ad6;
case 0x614adb:goto L614adb;
case 0x614add:c.instructions+=2;goto B614add;
case 0x614ae1:c.instructions+=1;goto B614ae1;
case 0x614ae7:goto L614ae7;
case 0x614aea:c.instructions+=2;goto B614aea;
case 0x614aed:c.instructions+=1;goto B614aed;
case 0x614af1:goto L614af1;
case 0x614af3:c.instructions+=2;goto B614af3;
case 0x614af5:c.instructions+=1;goto B614af5;
case 0x614afb:goto L614afb;
case 0x614afe:c.instructions+=1;goto B614afe;
case 0x614b04:goto L614b04;
case 0x614b09:c.instructions+=1;goto B614b09;
case 0x614b14:goto L614b14;
case 0x614b17:c.instructions+=3;goto B614b17;
case 0x614b19:c.instructions+=2;goto B614b19;
case 0x614b1d:c.instructions+=1;goto B614b1d;
case 0x614b1f:goto L614b1f;
case 0x614b24:goto L614b24;
case 0x614b26:c.instructions+=1;goto B614b26;
case 0x614b28:goto L614b28;
case 0x614b2c:c.instructions+=3;goto B614b2c;
case 0x614b32:c.instructions+=2;goto B614b32;
case 0x614b34:c.instructions+=1;goto B614b34;
case 0x614b36:goto L614b36;
case 0x614b3a:c.instructions+=2;goto B614b3a;
case 0x614b3c:c.instructions+=1;goto B614b3c;
case 0x614b42:goto L614b42;
case 0x614b49:c.instructions+=2;goto B614b49;
case 0x614b4d:c.instructions+=1;goto B614b4d;
case 0x614b53:goto L614b53;
case 0x614b56:c.instructions+=57;goto B614b56;
case 0x614b58:c.instructions+=56;goto B614b58;
case 0x614b5b:c.instructions+=55;goto B614b5b;
case 0x614b5e:c.instructions+=54;goto B614b5e;
case 0x614b61:c.instructions+=53;goto B614b61;
case 0x614b64:c.instructions+=52;goto B614b64;
case 0x614b66:c.instructions+=51;goto B614b66;
case 0x614b6d:c.instructions+=50;goto B614b6d;
case 0x614b74:c.instructions+=49;goto B614b74;
case 0x614b7b:c.instructions+=48;goto B614b7b;
case 0x614b7e:c.instructions+=47;goto B614b7e;
case 0x614b82:c.instructions+=46;goto B614b82;
case 0x614b89:c.instructions+=45;goto B614b89;
case 0x614b90:c.instructions+=44;goto B614b90;
case 0x614b97:c.instructions+=43;goto B614b97;
case 0x614b99:c.instructions+=42;goto B614b99;
case 0x614b9c:c.instructions+=41;goto B614b9c;
case 0x614b9e:c.instructions+=40;goto B614b9e;
case 0x614ba0:c.instructions+=39;goto B614ba0;
case 0x614ba5:c.instructions+=38;goto B614ba5;
case 0x614ba9:c.instructions+=37;goto B614ba9;
case 0x614bad:c.instructions+=36;goto B614bad;
case 0x614bb1:c.instructions+=35;goto B614bb1;
case 0x614bb5:c.instructions+=34;goto B614bb5;
case 0x614bbc:c.instructions+=33;goto B614bbc;
case 0x614bc0:c.instructions+=32;goto B614bc0;
case 0x614bc7:c.instructions+=31;goto B614bc7;
case 0x614bc9:c.instructions+=30;goto B614bc9;
case 0x614bcb:c.instructions+=29;goto B614bcb;
case 0x614bcd:c.instructions+=28;goto B614bcd;
case 0x614bcf:c.instructions+=27;goto B614bcf;
case 0x614bd1:c.instructions+=26;goto B614bd1;
case 0x614bd5:c.instructions+=25;goto B614bd5;
case 0x614bd9:c.instructions+=24;goto B614bd9;
case 0x614bdb:c.instructions+=23;goto B614bdb;
case 0x614bdd:c.instructions+=22;goto B614bdd;
case 0x614bdf:c.instructions+=21;goto B614bdf;
case 0x614be1:c.instructions+=20;goto B614be1;
case 0x614be5:c.instructions+=19;goto B614be5;
case 0x614bec:c.instructions+=18;goto B614bec;
case 0x614bf3:c.instructions+=17;goto B614bf3;
case 0x614bf7:c.instructions+=16;goto B614bf7;
case 0x614bfb:c.instructions+=15;goto B614bfb;
case 0x614bfd:c.instructions+=14;goto B614bfd;
case 0x614c01:c.instructions+=13;goto B614c01;
case 0x614c05:c.instructions+=12;goto B614c05;
case 0x614c07:c.instructions+=11;goto B614c07;
case 0x614c09:c.instructions+=10;goto B614c09;
case 0x614c0d:c.instructions+=9;goto B614c0d;
case 0x614c10:c.instructions+=8;goto B614c10;
case 0x614c13:c.instructions+=7;goto B614c13;
case 0x614c15:c.instructions+=6;goto B614c15;
case 0x614c17:c.instructions+=5;goto B614c17;
case 0x614c19:c.instructions+=4;goto B614c19;
case 0x614c1f:c.instructions+=3;goto B614c1f;
case 0x614c21:c.instructions+=2;goto B614c21;
case 0x614c24:c.instructions+=1;goto B614c24;
case 0x614c26:goto L614c26;
case 0x614c2a:c.instructions+=2;goto B614c2a;
case 0x614c2c:c.instructions+=1;goto B614c2c;
case 0x614c30:goto L614c30;
case 0x614c33:c.instructions+=2;goto B614c33;
case 0x614c35:c.instructions+=1;goto B614c35;
case 0x614c37:goto L614c37;
case 0x614c3d:c.instructions+=2;goto B614c3d;
case 0x614c44:c.instructions+=1;goto B614c44;
case 0x614c46:goto L614c46;
case 0x614c4b:c.instructions+=1;goto B614c4b;
case 0x614c50:goto L614c50;
case 0x614c5b:goto L614c5b;
case 0x614c62:c.instructions+=5;goto B614c62;
case 0x614c69:c.instructions+=4;goto B614c69;
case 0x614c6a:c.instructions+=3;goto B614c6a;
case 0x614c6b:c.instructions+=2;goto B614c6b;
case 0x614c70:c.instructions+=1;goto B614c70;
case 0x614c75:goto L614c75;
case 0x614c77:c.instructions+=6;goto B614c77;
case 0x614c7b:c.instructions+=5;goto B614c7b;
case 0x614c7f:c.instructions+=4;goto B614c7f;
case 0x614c86:c.instructions+=3;goto B614c86;
case 0x614c88:c.instructions+=2;goto B614c88;
case 0x614c8b:c.instructions+=1;goto B614c8b;
case 0x614c8d:goto L614c8d;
case 0x614c94:c.instructions+=10;goto B614c94;
case 0x614c98:c.instructions+=9;goto B614c98;
case 0x614c9c:c.instructions+=8;goto B614c9c;
case 0x614c9e:c.instructions+=7;goto B614c9e;
case 0x614c9f:c.instructions+=6;goto B614c9f;
case 0x614ca1:c.instructions+=5;goto B614ca1;
case 0x614ca2:c.instructions+=4;goto B614ca2;
case 0x614ca3:c.instructions+=3;goto B614ca3;
case 0x614ca4:c.instructions+=2;goto B614ca4;
case 0x614ca5:c.instructions+=1;goto B614ca5;
case 0x614caa:goto L614caa;
case 0x614cad:c.instructions+=2;goto B614cad;
case 0x614caf:c.instructions+=1;goto B614caf;
case 0x614cb5:goto L614cb5;
case 0x614cbc:c.instructions+=5;goto B614cbc;
case 0x614cc2:c.instructions+=4;goto B614cc2;
case 0x614cc6:c.instructions+=3;goto B614cc6;
case 0x614cc8:c.instructions+=2;goto B614cc8;
case 0x614ccb:c.instructions+=1;goto B614ccb;
case 0x614cd1:goto L614cd1;
case 0x614cd4:c.instructions+=10;goto B614cd4;
case 0x614cd6:c.instructions+=9;goto B614cd6;
case 0x614cdd:c.instructions+=8;goto B614cdd;
case 0x614cde:c.instructions+=7;goto B614cde;
case 0x614ce5:c.instructions+=6;goto B614ce5;
case 0x614ce6:c.instructions+=5;goto B614ce6;
case 0x614ce7:c.instructions+=4;goto B614ce7;
case 0x614ce9:c.instructions+=3;goto B614ce9;
case 0x614cf4:c.instructions+=2;goto B614cf4;
case 0x614cff:c.instructions+=1;goto B614cff;
case 0x614d04:goto L614d04;
case 0x614d08:c.instructions+=6;goto B614d08;
case 0x614d0c:c.instructions+=5;goto B614d0c;
case 0x614d0f:c.instructions+=4;goto B614d0f;
case 0x614d11:c.instructions+=3;goto B614d11;
case 0x614d12:c.instructions+=2;goto B614d12;
case 0x614d16:c.instructions+=1;goto B614d16;
case 0x614d1b:goto L614d1b;
case 0x614d1f:c.instructions+=3;goto B614d1f;
case 0x614d21:c.instructions+=2;goto B614d21;
case 0x614d23:c.instructions+=1;goto B614d23;
case 0x614d27:goto L614d27;
case 0x614d2a:c.instructions+=5;goto B614d2a;
case 0x614d2d:c.instructions+=4;goto B614d2d;
case 0x614d2e:c.instructions+=3;goto B614d2e;
case 0x614d32:c.instructions+=2;goto B614d32;
case 0x614d33:c.instructions+=1;goto B614d33;
case 0x614d38:goto L614d38;
case 0x614d3c:c.instructions+=6;goto B614d3c;
case 0x614d3e:c.instructions+=5;goto B614d3e;
case 0x614d3f:c.instructions+=4;goto B614d3f;
case 0x614d42:c.instructions+=3;goto B614d42;
case 0x614d45:c.instructions+=2;goto B614d45;
case 0x614d49:c.instructions+=1;goto B614d49;
case 0x614d4b:goto L614d4b;
case 0x614d52:c.instructions+=7;goto B614d52;
case 0x614d56:c.instructions+=6;goto B614d56;
case 0x614d5d:c.instructions+=5;goto B614d5d;
case 0x614d5e:c.instructions+=4;goto B614d5e;
case 0x614d62:c.instructions+=3;goto B614d62;
case 0x614d65:c.instructions+=2;goto B614d65;
case 0x614d68:c.instructions+=1;goto B614d68;
case 0x614d6d:goto L614d6d;
case 0x614d74:c.instructions+=4;goto B614d74;
case 0x614d7b:c.instructions+=3;goto B614d7b;
case 0x614d7c:c.instructions+=2;goto B614d7c;
case 0x614d7d:c.instructions+=1;goto B614d7d;
case 0x614d82:goto L614d82;
case 0x614d87:c.instructions+=23;goto B614d87;
case 0x614d8b:c.instructions+=22;goto B614d8b;
case 0x614d93:c.instructions+=21;goto B614d93;
case 0x614d9b:c.instructions+=20;goto B614d9b;
case 0x614da3:c.instructions+=19;goto B614da3;
case 0x614da5:c.instructions+=18;goto B614da5;
case 0x614da6:c.instructions+=17;goto B614da6;
case 0x614da7:c.instructions+=16;goto B614da7;
case 0x614dab:c.instructions+=15;goto B614dab;
case 0x614dac:c.instructions+=14;goto B614dac;
case 0x614db4:c.instructions+=13;goto B614db4;
case 0x614dbc:c.instructions+=12;goto B614dbc;
case 0x614dc4:c.instructions+=11;goto B614dc4;
case 0x614dcc:c.instructions+=10;goto B614dcc;
case 0x614dd4:c.instructions+=9;goto B614dd4;
case 0x614ddc:c.instructions+=8;goto B614ddc;
case 0x614de4:c.instructions+=7;goto B614de4;
case 0x614dec:c.instructions+=6;goto B614dec;
case 0x614df7:c.instructions+=5;goto B614df7;
case 0x614e02:c.instructions+=4;goto B614e02;
case 0x614e0d:c.instructions+=3;goto B614e0d;
case 0x614e18:c.instructions+=2;goto B614e18;
case 0x614e23:c.instructions+=1;goto B614e23;
case 0x614e28:goto L614e28;
case 0x614e2c:c.instructions+=32;goto B614e2c;
case 0x614e2f:c.instructions+=31;goto B614e2f;
case 0x614e32:c.instructions+=30;goto B614e32;
case 0x614e35:c.instructions+=29;goto B614e35;
case 0x614e39:c.instructions+=28;goto B614e39;
case 0x614e3c:c.instructions+=27;goto B614e3c;
case 0x614e3e:c.instructions+=26;goto B614e3e;
case 0x614e42:c.instructions+=25;goto B614e42;
case 0x614e44:c.instructions+=24;goto B614e44;
case 0x614e46:c.instructions+=23;goto B614e46;
case 0x614e4a:c.instructions+=22;goto B614e4a;
case 0x614e4e:c.instructions+=21;goto B614e4e;
case 0x614e51:c.instructions+=20;goto B614e51;
case 0x614e55:c.instructions+=19;goto B614e55;
case 0x614e58:c.instructions+=18;goto B614e58;
case 0x614e5a:c.instructions+=17;goto B614e5a;
case 0x614e5e:c.instructions+=16;goto B614e5e;
case 0x614e60:c.instructions+=15;goto B614e60;
case 0x614e62:c.instructions+=14;goto B614e62;
case 0x614e66:c.instructions+=13;goto B614e66;
case 0x614e68:c.instructions+=12;goto B614e68;
case 0x614e6f:c.instructions+=11;goto B614e6f;
case 0x614e76:c.instructions+=10;goto B614e76;
case 0x614e7d:c.instructions+=9;goto B614e7d;
case 0x614e84:c.instructions+=8;goto B614e84;
case 0x614e8b:c.instructions+=7;goto B614e8b;
case 0x614e92:c.instructions+=6;goto B614e92;
case 0x614e94:c.instructions+=5;goto B614e94;
case 0x614e97:c.instructions+=4;goto B614e97;
case 0x614e9a:c.instructions+=3;goto B614e9a;
case 0x614e9d:c.instructions+=2;goto B614e9d;
case 0x614e9f:c.instructions+=1;goto B614e9f;
case 0x614ea1:goto L614ea1;
case 0x614ea4:c.instructions+=2;goto B614ea4;
case 0x614ea6:c.instructions+=1;goto B614ea6;
case 0x614ea8:goto L614ea8;
case 0x614eaf:c.instructions+=5;goto B614eaf;
case 0x614eb0:c.instructions+=4;goto B614eb0;
case 0x614eb3:c.instructions+=3;goto B614eb3;
case 0x614eba:c.instructions+=2;goto B614eba;
case 0x614ebb:c.instructions+=1;goto B614ebb;
case 0x614ec0:goto L614ec0;
case 0x614ec2:goto L614ec2;
case 0x614ecd:c.instructions+=5;goto B614ecd;
case 0x614ed8:c.instructions+=4;goto B614ed8;
case 0x614ee3:c.instructions+=3;goto B614ee3;
case 0x614eee:c.instructions+=2;goto B614eee;
case 0x614ef9:c.instructions+=1;goto B614ef9;
case 0x614f04:goto L614f04;
case 0x614f0b:c.instructions+=16;goto B614f0b;
case 0x614f0f:c.instructions+=15;goto B614f0f;
case 0x614f16:c.instructions+=14;goto B614f16;
case 0x614f18:c.instructions+=13;goto B614f18;
case 0x614f1b:c.instructions+=12;goto B614f1b;
case 0x614f1e:c.instructions+=11;goto B614f1e;
case 0x614f20:c.instructions+=10;goto B614f20;
case 0x614f27:c.instructions+=9;goto B614f27;
case 0x614f2d:c.instructions+=8;goto B614f2d;
case 0x614f2e:c.instructions+=7;goto B614f2e;
case 0x614f2f:c.instructions+=6;goto B614f2f;
case 0x614f33:c.instructions+=5;goto B614f33;
case 0x614f3a:c.instructions+=4;goto B614f3a;
case 0x614f41:c.instructions+=3;goto B614f41;
case 0x614f47:c.instructions+=2;goto B614f47;
case 0x614f4b:c.instructions+=1;goto B614f4b;
case 0x614f50:goto L614f50;
case 0x614f52:c.instructions+=2;goto B614f52;
case 0x614f53:c.instructions+=1;goto B614f53;
case 0x614f58:goto L614f58;
case 0x614f5a:c.instructions+=26;goto B614f5a;
case 0x614f5c:c.instructions+=25;goto B614f5c;
case 0x614f60:c.instructions+=24;goto B614f60;
case 0x614f66:c.instructions+=23;goto B614f66;
case 0x614f6a:c.instructions+=22;goto B614f6a;
case 0x614f6c:c.instructions+=21;goto B614f6c;
case 0x614f70:c.instructions+=20;goto B614f70;
case 0x614f74:c.instructions+=19;goto B614f74;
case 0x614f77:c.instructions+=18;goto B614f77;
case 0x614f78:c.instructions+=17;goto B614f78;
case 0x614f7a:c.instructions+=16;goto B614f7a;
case 0x614f7d:c.instructions+=15;goto B614f7d;
case 0x614f7f:c.instructions+=14;goto B614f7f;
case 0x614f83:c.instructions+=13;goto B614f83;
case 0x614f87:c.instructions+=12;goto B614f87;
case 0x614f8b:c.instructions+=11;goto B614f8b;
case 0x614f8e:c.instructions+=10;goto B614f8e;
case 0x614f90:c.instructions+=9;goto B614f90;
case 0x614f93:c.instructions+=8;goto B614f93;
case 0x614f95:c.instructions+=7;goto B614f95;
case 0x614f99:c.instructions+=6;goto B614f99;
case 0x614f9b:c.instructions+=5;goto B614f9b;
case 0x614f9f:c.instructions+=4;goto B614f9f;
case 0x614fa1:c.instructions+=3;goto B614fa1;
case 0x614fa4:c.instructions+=2;goto B614fa4;
case 0x614fa7:c.instructions+=1;goto B614fa7;
case 0x614fab:goto L614fab;
case 0x614fad:c.instructions+=2;goto B614fad;
case 0x614fb1:c.instructions+=1;goto B614fb1;
case 0x614fb7:goto L614fb7;
case 0x614fb9:goto L614fb9;
case 0x614fbd:c.instructions+=8;goto B614fbd;
case 0x614fc2:c.instructions+=7;goto B614fc2;
case 0x614fc7:c.instructions+=6;goto B614fc7;
case 0x614fc9:c.instructions+=5;goto B614fc9;
case 0x614fcb:c.instructions+=4;goto B614fcb;
case 0x614fd2:c.instructions+=3;goto B614fd2;
case 0x614fd3:c.instructions+=2;goto B614fd3;
case 0x614fd6:c.instructions+=1;goto B614fd6;
case 0x614fdb:goto L614fdb;
case 0x614fde:c.instructions+=4;goto B614fde;
case 0x614fe5:c.instructions+=3;goto B614fe5;
case 0x614fe8:c.instructions+=2;goto B614fe8;
case 0x614fed:c.instructions+=1;goto B614fed;
case 0x614ff4:goto L614ff4;
case 0x614ff6:goto L614ff6;
case 0x614ff8:c.instructions+=2;goto B614ff8;
case 0x614ffa:c.instructions+=1;goto B614ffa;
default:missing_instruction(c.pc);}
B614004:L614004:{c.instructions+=3;NFSU2_TR(0x614004);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61400b:{NFSU2_TR(0x61400b);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614012:{NFSU2_TR(0x614012);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614017ull));
TAIL_STATIC(0x5bb430u,5bb);
}
B614017:L614017:{c.instructions+=6;NFSU2_TR(0x614017);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61401b:{NFSU2_TR(0x61401b);
__builtin_memmove((R+8),(R+0),4);
}
B61401d:{NFSU2_TR(0x61401d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B61401e:{NFSU2_TR(0x61401e);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614022:{NFSU2_TR(0x614022);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B614026:{NFSU2_TR(0x614026);
if(r1(R+518)){{goto L61404b;}}
}
B614028:L614028:{c.instructions+=10;NFSU2_TR(0x614028);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61402c:{NFSU2_TR(0x61402c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B614030:{NFSU2_TR(0x614030);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614034:{NFSU2_TR(0x614034);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B614035:{NFSU2_TR(0x614035);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B614038:{NFSU2_TR(0x614038);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x3ull))));
}
B61403b:{NFSU2_TR(0x61403b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B61403d:{NFSU2_TR(0x61403d);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614041:{NFSU2_TR(0x614041);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614045:{NFSU2_TR(0x614045);
if(r1(R+512)){TAIL_STATIC(0x613c10u,613);}
}
B61404b:L61404b:{c.instructions+=4;NFSU2_TR(0x61404b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61404f:{NFSU2_TR(0x61404f);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B614053:{NFSU2_TR(0x614053);
u8 U[8];
__builtin_memmove((U+0),gp(0x803abc),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61405a:{NFSU2_TR(0x61405a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L614066;}}
}
B61405c:L61405c:{c.instructions+=2;NFSU2_TR(0x61405c);
w4(R+4,u32(0x872b98ull));
}
B614061:{NFSU2_TR(0x614061);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614066ull));
TAIL_STATIC(0x5cc250u,5cc);
}
B614066:L614066:{c.instructions+=7;NFSU2_TR(0x614066);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61406a:{NFSU2_TR(0x61406a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B61406b:{NFSU2_TR(0x61406b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B61406e:{NFSU2_TR(0x61406e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B614071:{NFSU2_TR(0x614071);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614075:{NFSU2_TR(0x614075);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614079:{NFSU2_TR(0x614079);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x613ba0u,613);}
}
B61407f:L61407f:{c.instructions+=6;NFSU2_TR(0x61407f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B614080:{NFSU2_TR(0x614080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B614081:{NFSU2_TR(0x614081);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B614082:{NFSU2_TR(0x614082);
__builtin_memmove((R+16),(R+20),4);
}
B614084:{NFSU2_TR(0x614084);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B614085:{NFSU2_TR(0x614085);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B614090:L614090:{c.instructions+=9;NFSU2_TR(0x614090);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614091:{NFSU2_TR(0x614091);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614092:{NFSU2_TR(0x614092);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614093:{NFSU2_TR(0x614093);
__builtin_memmove((R+20),(R+4),4);
}
B614095:{NFSU2_TR(0x614095);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B614097:{NFSU2_TR(0x614097);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614098:{NFSU2_TR(0x614098);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+20)),r4(U+0));
}
B61409b:{NFSU2_TR(0x61409b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61409e:{NFSU2_TR(0x61409e);
w4(R+28,u32(0x14ull));
}
B6140a3:L6140a3:{c.instructions+=5;NFSU2_TR(0x6140a3);
u8 U[4];
w4(U+0,u32(0x3fc00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6140a8:{NFSU2_TR(0x6140a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6140ab:{NFSU2_TR(0x6140ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6140ad:{NFSU2_TR(0x6140ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6140b0:{NFSU2_TR(0x6140b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6140b5ull));
TAIL_STATIC(0x43c1f0u,43c);
}
B6140b5:L6140b5:{c.instructions+=4;NFSU2_TR(0x6140b5);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6140bb:{NFSU2_TR(0x6140bb);
u8 U[4];
w4(U+0,u32(0x3dcccccdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6140c0:{NFSU2_TR(0x6140c0);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6140c3:{NFSU2_TR(0x6140c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6140c8ull));
TAIL_STATIC(0x43c1f0u,43c);
}
B6140c8:L6140c8:{c.instructions+=4;NFSU2_TR(0x6140c8);
{u32 ea_=u32(u32(8029464u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B6140ce:{NFSU2_TR(0x6140ce);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6140d3:{NFSU2_TR(0x6140d3);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6140d6:{NFSU2_TR(0x6140d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6140dbull));
TAIL_STATIC(0x43c1f0u,43c);
}
B6140db:L6140db:{c.instructions+=5;NFSU2_TR(0x6140db);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6140de:{NFSU2_TR(0x6140de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6140e1:{NFSU2_TR(0x6140e1);
w1(R+512,carry<u32>(r4(R+24),u32(0x18ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B6140e4:{NFSU2_TR(0x6140e4);
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
B6140e5:{NFSU2_TR(0x6140e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6140a3u);}goto L6140a3;}}
}
B6140e7:L6140e7:{c.instructions+=6;NFSU2_TR(0x6140e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6140e8:{NFSU2_TR(0x6140e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6140e9:{NFSU2_TR(0x6140e9);
__builtin_memmove((R+0),(R+20),4);
}
B6140eb:{NFSU2_TR(0x6140eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6140ec:{NFSU2_TR(0x6140ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6140ed:{NFSU2_TR(0x6140ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6140f0:L6140f0:{c.instructions+=34;NFSU2_TR(0x6140f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6140f1:{NFSU2_TR(0x6140f1);
__builtin_memmove((R+20),(R+16),4);
}
B6140f3:{NFSU2_TR(0x6140f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B6140f6:{NFSU2_TR(0x6140f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B6140f9:{NFSU2_TR(0x6140f9);
__builtin_memmove((R+0),gp(0x865154),4);
}
B6140fe:{NFSU2_TR(0x6140fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6140ff:{NFSU2_TR(0x6140ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614100:{NFSU2_TR(0x614100);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B614103:{NFSU2_TR(0x614103);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614107:{NFSU2_TR(0x614107);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61410a:{NFSU2_TR(0x61410a);
{u32 ea_=u32(r4(R+0)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614110:{NFSU2_TR(0x614110);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
}
B614115:{NFSU2_TR(0x614115);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614118:{NFSU2_TR(0x614118);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614119:{NFSU2_TR(0x614119);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61411c:{NFSU2_TR(0x61411c);
__builtin_memmove((R+28),(R+4),4);
}
B61411e:{NFSU2_TR(0x61411e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B614120:{NFSU2_TR(0x614120);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614123:{NFSU2_TR(0x614123);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B614125:{NFSU2_TR(0x614125);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61412b:{NFSU2_TR(0x61412b);
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
B61412d:{NFSU2_TR(0x61412d);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B61412f:{NFSU2_TR(0x61412f);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B614131:{NFSU2_TR(0x614131);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B614133:{NFSU2_TR(0x614133);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B614135:{NFSU2_TR(0x614135);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B614137:{NFSU2_TR(0x614137);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B614139:{NFSU2_TR(0x614139);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B61413b:{NFSU2_TR(0x61413b);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B61413d:{NFSU2_TR(0x61413d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61413f:{NFSU2_TR(0x61413f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B614141:{NFSU2_TR(0x614141);
{u32 ea_=u32(u32(8403652u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614147:{NFSU2_TR(0x614147);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61414b:{NFSU2_TR(0x61414b);
if(r1(R+518)){{goto L614155;}}
}
B61414d:L61414d:{c.instructions+=2;NFSU2_TR(0x61414d);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B614153:{NFSU2_TR(0x614153);
{goto L6141a1;}
}
B614155:L614155:{c.instructions+=1;NFSU2_TR(0x614155);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61415aull));
TAIL_STATIC(0x5b98a0u,5b9);
}
B61415a:L61415a:{c.instructions+=2;NFSU2_TR(0x61415a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61415d:{NFSU2_TR(0x61415d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L614180;}}
}
B61415f:L61415f:{c.instructions+=6;NFSU2_TR(0x61415f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B614162:{NFSU2_TR(0x614162);
{u32 ea_=u32(r4(R+8)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614168:{NFSU2_TR(0x614168);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61416e:{NFSU2_TR(0x61416e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B614170:{NFSU2_TR(0x614170);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B614173:{NFSU2_TR(0x614173);
if(r1(R+514)){{goto L614179;}}
}
B614175:L614175:{c.instructions+=2;NFSU2_TR(0x614175);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B614177:{NFSU2_TR(0x614177);
{goto L61419f;}
}
B614179:L614179:{c.instructions+=2;NFSU2_TR(0x614179);
w4(R+0,u32(0xaull));
}
B61417e:{NFSU2_TR(0x61417e);
{goto L61419f;}
}
B614180:L614180:{c.instructions+=6;NFSU2_TR(0x614180);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614183:{NFSU2_TR(0x614183);
{u32 ea_=u32(r4(R+0)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614189:{NFSU2_TR(0x614189);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61418f:{NFSU2_TR(0x61418f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B614191:{NFSU2_TR(0x614191);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B614194:{NFSU2_TR(0x614194);
if(r1(R+514)){{goto L61419a;}}
}
B614196:L614196:{c.instructions+=2;NFSU2_TR(0x614196);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B614198:{NFSU2_TR(0x614198);
{goto L61419f;}
}
B61419a:L61419a:{c.instructions+=1;NFSU2_TR(0x61419a);
w4(R+0,u32(0x14ull));
}
B61419f:L61419f:{c.instructions+=1;NFSU2_TR(0x61419f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6141a1:L6141a1:{c.instructions+=4;NFSU2_TR(0x6141a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6141a3:{NFSU2_TR(0x6141a3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6141a5:{NFSU2_TR(0x6141a5);
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
B6141a7:{NFSU2_TR(0x6141a7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6142b4;}}
}
B6141ad:L6141ad:{c.instructions+=1;NFSU2_TR(0x6141ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6141b0:L6141b0:{c.instructions+=3;NFSU2_TR(0x6141b0);
__builtin_memmove((R+0),gp(0x8a1d58),4);
}
B6141b5:{NFSU2_TR(0x6141b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6141b7:{NFSU2_TR(0x6141b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6141c1;}}
}
B6141b9:L6141b9:{c.instructions+=3;NFSU2_TR(0x6141b9);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6141bb:{NFSU2_TR(0x6141bb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6141bf:{NFSU2_TR(0x6141bf);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6141c1:L6141c1:{c.instructions+=5;NFSU2_TR(0x6141c1);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6141c3:{NFSU2_TR(0x6141c3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6141c9:{NFSU2_TR(0x6141c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6141cb:{NFSU2_TR(0x6141cb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6141ce:{NFSU2_TR(0x6141ce);
if(r1(R+514)){{goto L6141f7;}}
}
B6141d0:L6141d0:{c.instructions+=4;NFSU2_TR(0x6141d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6141d3:{NFSU2_TR(0x6141d3);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6141d8:{NFSU2_TR(0x6141d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6141da:{NFSU2_TR(0x6141da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6141dfull));
TAIL_STATIC(0x43c1f0u,43c);
}
B6141df:L6141df:{c.instructions+=3;NFSU2_TR(0x6141df);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6141e2:{NFSU2_TR(0x6141e2);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6141e7:{NFSU2_TR(0x6141e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6141ecull));
TAIL_STATIC(0x43c1f0u,43c);
}
B6141ec:L6141ec:{c.instructions+=3;NFSU2_TR(0x6141ec);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6141ef:{NFSU2_TR(0x6141ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6141f2:{NFSU2_TR(0x6141f2);
{goto L6142a6;}
}
B6141f7:L6141f7:{c.instructions+=11;NFSU2_TR(0x6141f7);
{u32 ea_=u32(u32(8403648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6141fd:{NFSU2_TR(0x6141fd);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614200:{NFSU2_TR(0x614200);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614204:{NFSU2_TR(0x614204);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B614207:{NFSU2_TR(0x614207);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61420b:{NFSU2_TR(0x61420b);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61420e:{NFSU2_TR(0x61420e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614212:{NFSU2_TR(0x614212);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B614218:{NFSU2_TR(0x614218);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61421a:{NFSU2_TR(0x61421a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61421d:{NFSU2_TR(0x61421d);
if(r1(R+518)){{goto L6142a0;}}
}
B614223:L614223:{c.instructions+=5;NFSU2_TR(0x614223);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614226:{NFSU2_TR(0x614226);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61422c:{NFSU2_TR(0x61422c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61422e:{NFSU2_TR(0x61422e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B614231:{NFSU2_TR(0x614231);
if(r1(R+518)){{goto L6142a0;}}
}
B614233:L614233:{c.instructions+=5;NFSU2_TR(0x614233);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614236:{NFSU2_TR(0x614236);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61423c:{NFSU2_TR(0x61423c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61423e:{NFSU2_TR(0x61423e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B614241:{NFSU2_TR(0x614241);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6142a0;}}
}
B614243:L614243:{c.instructions+=12;NFSU2_TR(0x614243);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614246:{NFSU2_TR(0x614246);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61424a:{NFSU2_TR(0x61424a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B614250:{NFSU2_TR(0x614250);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614251:{NFSU2_TR(0x614251);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B614255:{NFSU2_TR(0x614255);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614256:{NFSU2_TR(0x614256);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61425a:{NFSU2_TR(0x61425a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614262:{NFSU2_TR(0x614262);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614266:{NFSU2_TR(0x614266);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61426c:{NFSU2_TR(0x61426c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614270:{NFSU2_TR(0x614270);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614275ull));
TAIL_STATIC(0x43cf10u,43c);
}
B614275:L614275:{c.instructions+=12;NFSU2_TR(0x614275);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614279:{NFSU2_TR(0x614279);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61427d:{NFSU2_TR(0x61427d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B614280:{NFSU2_TR(0x614280);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614284:{NFSU2_TR(0x614284);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614288:{NFSU2_TR(0x614288);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61428c:{NFSU2_TR(0x61428c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614290:{NFSU2_TR(0x614290);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614294:{NFSU2_TR(0x614294);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614298:{NFSU2_TR(0x614298);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61429b:{NFSU2_TR(0x61429b);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61429e:{NFSU2_TR(0x61429e);
{goto L6142a6;}
}
B6142a0:L6142a0:{c.instructions+=1;NFSU2_TR(0x6142a0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6142a6:L6142a6:{c.instructions+=5;NFSU2_TR(0x6142a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6142a8:{NFSU2_TR(0x6142a8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6142a9:{NFSU2_TR(0x6142a9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B6142ac:{NFSU2_TR(0x6142ac);
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
B6142ae:{NFSU2_TR(0x6142ae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6141b0u);}goto L6141b0;}}
}
B6142b4:L6142b4:{c.instructions+=6;NFSU2_TR(0x6142b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6142b5:{NFSU2_TR(0x6142b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6142b6:{NFSU2_TR(0x6142b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6142b7:{NFSU2_TR(0x6142b7);
__builtin_memmove((R+16),(R+20),4);
}
B6142b9:{NFSU2_TR(0x6142b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6142ba:{NFSU2_TR(0x6142ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6142c0:L6142c0:{c.instructions+=17;NFSU2_TR(0x6142c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6142c4:{NFSU2_TR(0x6142c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6142c8:{NFSU2_TR(0x6142c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6142cb:{NFSU2_TR(0x6142cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6142ce:{NFSU2_TR(0x6142ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6142d1:{NFSU2_TR(0x6142d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6142d3:{NFSU2_TR(0x6142d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6142d6:{NFSU2_TR(0x6142d6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6142da:{NFSU2_TR(0x6142da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6142dc:{NFSU2_TR(0x6142dc);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6142df:{NFSU2_TR(0x6142df);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6142e2:{NFSU2_TR(0x6142e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6142e6:{NFSU2_TR(0x6142e6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6142e8:{NFSU2_TR(0x6142e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6142eb:{NFSU2_TR(0x6142eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6142ef:{NFSU2_TR(0x6142ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6142f1:{NFSU2_TR(0x6142f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B614300:L614300:{c.instructions+=8;NFSU2_TR(0x614300);
__builtin_memmove((R+0),gp(0x8a1d70),4);
}
B614305:{NFSU2_TR(0x614305);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B614308:{NFSU2_TR(0x614308);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61430a:{NFSU2_TR(0x61430a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61430b:{NFSU2_TR(0x61430b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61430c:{NFSU2_TR(0x61430c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61430d:{NFSU2_TR(0x61430d);
__builtin_memmove((R+24),(R+4),4);
}
B61430f:{NFSU2_TR(0x61430f);
if(r1(R+518)){{goto L61437a;}}
}
B614311:L614311:{c.instructions+=28;NFSU2_TR(0x614311);
__builtin_memmove((R+0),gp(0x800e18),4);
}
B614316:{NFSU2_TR(0x614316);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B614318:{NFSU2_TR(0x614318);
__builtin_memmove((R+4),gp(0x800e1c),4);
}
B61431e:{NFSU2_TR(0x61431e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614321:{NFSU2_TR(0x614321);
__builtin_memmove((R+8),gp(0x800e20),4);
}
B614327:{NFSU2_TR(0x614327);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61432a:{NFSU2_TR(0x61432a);
__builtin_memmove((R+0),gp(0x800e28),4);
}
B61432f:{NFSU2_TR(0x61432f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614332:{NFSU2_TR(0x614332);
__builtin_memmove((R+4),gp(0x800e24),4);
}
B614338:{NFSU2_TR(0x614338);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61433b:{NFSU2_TR(0x61433b);
__builtin_memmove((R+0),gp(0x800e34),4);
}
B614340:{NFSU2_TR(0x614340);
__builtin_memmove((R+20),gp(0x800e30),4);
}
B614346:{NFSU2_TR(0x614346);
__builtin_memmove((R+28),gp(0x800e2c),4);
}
B61434c:{NFSU2_TR(0x61434c);
__builtin_memmove((R+8),gp(0x800e28),4);
}
B614352:{NFSU2_TR(0x614352);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B614355:{NFSU2_TR(0x614355);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+20))));
}
B614357:{NFSU2_TR(0x614357);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61435a:{NFSU2_TR(0x61435a);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B61435c:{NFSU2_TR(0x61435c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffull))));
}
B614361:{NFSU2_TR(0x614361);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x80000000ull))));
}
B614366:{NFSU2_TR(0x614366);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B614367:{NFSU2_TR(0x614367);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61436a:{NFSU2_TR(0x61436a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61436d:{NFSU2_TR(0x61436d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61436e:{NFSU2_TR(0x61436e);
w4(R+0,u32(0x1ull));
}
B614373:{NFSU2_TR(0x614373);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B614374:{NFSU2_TR(0x614374);
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
B614377:{NFSU2_TR(0x614377);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61437a:L61437a:{c.instructions+=9;NFSU2_TR(0x61437a);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61437e:{NFSU2_TR(0x61437e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B614381:{NFSU2_TR(0x614381);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B614382:{NFSU2_TR(0x614382);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614386:{NFSU2_TR(0x614386);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B61438a:{NFSU2_TR(0x61438a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B61438d:{NFSU2_TR(0x61438d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8a1e9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614393:{NFSU2_TR(0x614393);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B614395:{NFSU2_TR(0x614395);
if(r1(R+518)){{goto L61478e;}}
}
B61439b:L61439b:{c.instructions+=3;NFSU2_TR(0x61439b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8a31fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6143a1:{NFSU2_TR(0x6143a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6143a3:{NFSU2_TR(0x6143a3);
if(r1(R+518)){{goto L61478e;}}
}
B6143a9:L6143a9:{c.instructions+=6;NFSU2_TR(0x6143a9);
__builtin_memmove((R+4),gp(0x8a1c90),4);
}
B6143af:{NFSU2_TR(0x6143af);
{u32 ea_=u32(u32(9051272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6143b5:{NFSU2_TR(0x6143b5);
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
B6143b7:{NFSU2_TR(0x6143b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6143bf:{NFSU2_TR(0x6143bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6143c7:{NFSU2_TR(0x6143c7);
if(r1(R+518)){{goto L6143cf;}}
}
B6143c9:L6143c9:{c.instructions+=2;NFSU2_TR(0x6143c9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6143cd:{NFSU2_TR(0x6143cd);
{goto L6143dd;}
}
B6143cf:L6143cf:{c.instructions+=4;NFSU2_TR(0x6143cf);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6143d5:{NFSU2_TR(0x6143d5);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6143d7:{NFSU2_TR(0x6143d7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6143db:{NFSU2_TR(0x6143db);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6143dd:L6143dd:{c.instructions+=10;NFSU2_TR(0x6143dd);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6143e3:{NFSU2_TR(0x6143e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6143e4:{NFSU2_TR(0x6143e4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6143e8:{NFSU2_TR(0x6143e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6143ec:{NFSU2_TR(0x6143ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6143ed:{NFSU2_TR(0x6143ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6143f1:{NFSU2_TR(0x6143f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6143f2:{NFSU2_TR(0x6143f2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6143f6:{NFSU2_TR(0x6143f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6143f7:{NFSU2_TR(0x6143f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6143fcull));
TAIL_STATIC(0x5f0c50u,5f0);
}
B6143fc:L6143fc:{c.instructions+=9;NFSU2_TR(0x6143fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614400:{NFSU2_TR(0x614400);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614404:{NFSU2_TR(0x614404);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B614407:{NFSU2_TR(0x614407);
u8 U[4];
w4(U+0,u32(0x42480000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61440c:{NFSU2_TR(0x61440c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61440d:{NFSU2_TR(0x61440d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8a1e90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B614413:{NFSU2_TR(0x614413);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614414:{NFSU2_TR(0x614414);
__builtin_memmove((R+4),(R+28),4);
}
B614416:{NFSU2_TR(0x614416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61441bull));
TAIL_STATIC(0x5fa660u,5fa);
}
B61441b:L61441b:{c.instructions+=8;NFSU2_TR(0x61441b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61441f:{NFSU2_TR(0x61441f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614423:{NFSU2_TR(0x614423);
u8 U[4];
w4(U+0,u32(0x42480000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614428:{NFSU2_TR(0x614428);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614429:{NFSU2_TR(0x614429);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8a31f0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61442f:{NFSU2_TR(0x61442f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614430:{NFSU2_TR(0x614430);
__builtin_memmove((R+4),(R+12),4);
}
B614432:{NFSU2_TR(0x614432);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614437ull));
TAIL_STATIC(0x5fa660u,5fa);
}
B614437:L614437:{c.instructions+=3;NFSU2_TR(0x614437);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614439:{NFSU2_TR(0x614439);
__builtin_memmove((R+4),(R+12),4);
}
B61443b:{NFSU2_TR(0x61443b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614440ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B614440:L614440:{c.instructions+=5;NFSU2_TR(0x614440);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614444:{NFSU2_TR(0x614444);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614446:{NFSU2_TR(0x614446);
__builtin_memmove((R+4),(R+28),4);
}
B614448:{NFSU2_TR(0x614448);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61444c:{NFSU2_TR(0x61444c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614451ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B614451:L614451:{c.instructions+=6;NFSU2_TR(0x614451);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614455:{NFSU2_TR(0x614455);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614457:{NFSU2_TR(0x614457);
__builtin_memmove((R+4),(R+12),4);
}
B614459:{NFSU2_TR(0x614459);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61445d:{NFSU2_TR(0x61445d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614461:{NFSU2_TR(0x614461);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614466ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B614466:L614466:{c.instructions+=5;NFSU2_TR(0x614466);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61446a:{NFSU2_TR(0x61446a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61446c:{NFSU2_TR(0x61446c);
__builtin_memmove((R+4),(R+28),4);
}
B61446e:{NFSU2_TR(0x61446e);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614472:{NFSU2_TR(0x614472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614477ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B614477:L614477:{c.instructions+=6;NFSU2_TR(0x614477);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61447b:{NFSU2_TR(0x61447b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61447d:{NFSU2_TR(0x61447d);
__builtin_memmove((R+4),(R+12),4);
}
B61447f:{NFSU2_TR(0x61447f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B614483:{NFSU2_TR(0x614483);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614487:{NFSU2_TR(0x614487);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61448cull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B61448c:L61448c:{c.instructions+=5;NFSU2_TR(0x61448c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614490:{NFSU2_TR(0x614490);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614492:{NFSU2_TR(0x614492);
__builtin_memmove((R+4),(R+28),4);
}
B614494:{NFSU2_TR(0x614494);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614498:{NFSU2_TR(0x614498);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61449dull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B61449d:L61449d:{c.instructions+=6;NFSU2_TR(0x61449d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6144a1:{NFSU2_TR(0x6144a1);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6144a3:{NFSU2_TR(0x6144a3);
__builtin_memmove((R+4),(R+12),4);
}
B6144a5:{NFSU2_TR(0x6144a5);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6144a9:{NFSU2_TR(0x6144a9);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6144ad:{NFSU2_TR(0x6144ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6144b2ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B6144b2:L6144b2:{c.instructions+=5;NFSU2_TR(0x6144b2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6144b6:{NFSU2_TR(0x6144b6);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6144b8:{NFSU2_TR(0x6144b8);
__builtin_memmove((R+4),(R+28),4);
}
B6144ba:{NFSU2_TR(0x6144ba);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6144be:{NFSU2_TR(0x6144be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6144c3ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B6144c3:L6144c3:{c.instructions+=6;NFSU2_TR(0x6144c3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6144c7:{NFSU2_TR(0x6144c7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6144c9:{NFSU2_TR(0x6144c9);
__builtin_memmove((R+4),(R+12),4);
}
B6144cb:{NFSU2_TR(0x6144cb);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6144cf:{NFSU2_TR(0x6144cf);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6144d3:{NFSU2_TR(0x6144d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6144d8ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B6144d8:L6144d8:{c.instructions+=5;NFSU2_TR(0x6144d8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6144dc:{NFSU2_TR(0x6144dc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6144de:{NFSU2_TR(0x6144de);
__builtin_memmove((R+4),(R+28),4);
}
B6144e0:{NFSU2_TR(0x6144e0);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6144e4:{NFSU2_TR(0x6144e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6144e9ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B6144e9:L6144e9:{c.instructions+=6;NFSU2_TR(0x6144e9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6144ed:{NFSU2_TR(0x6144ed);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6144f1:{NFSU2_TR(0x6144f1);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6144f3:{NFSU2_TR(0x6144f3);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6144f7:{NFSU2_TR(0x6144f7);
__builtin_memmove((R+4),(R+12),4);
}
B6144f9:{NFSU2_TR(0x6144f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6144feull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B6144fe:L6144fe:{c.instructions+=5;NFSU2_TR(0x6144fe);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614502:{NFSU2_TR(0x614502);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614504:{NFSU2_TR(0x614504);
__builtin_memmove((R+4),(R+28),4);
}
B614506:{NFSU2_TR(0x614506);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61450a:{NFSU2_TR(0x61450a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61450full));
TAIL_STATIC(0x5f0b40u,5f0);
}
B61450f:L61450f:{c.instructions+=6;NFSU2_TR(0x61450f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614513:{NFSU2_TR(0x614513);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614515:{NFSU2_TR(0x614515);
__builtin_memmove((R+4),(R+12),4);
}
B614517:{NFSU2_TR(0x614517);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61451b:{NFSU2_TR(0x61451b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61451f:{NFSU2_TR(0x61451f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614524ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B614524:L614524:{c.instructions+=5;NFSU2_TR(0x614524);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614528:{NFSU2_TR(0x614528);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61452a:{NFSU2_TR(0x61452a);
__builtin_memmove((R+4),(R+28),4);
}
B61452c:{NFSU2_TR(0x61452c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614530:{NFSU2_TR(0x614530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614535ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B614535:L614535:{c.instructions+=6;NFSU2_TR(0x614535);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614539:{NFSU2_TR(0x614539);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61453b:{NFSU2_TR(0x61453b);
__builtin_memmove((R+4),(R+12),4);
}
B61453d:{NFSU2_TR(0x61453d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B614541:{NFSU2_TR(0x614541);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614545:{NFSU2_TR(0x614545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61454aull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B61454a:L61454a:{c.instructions+=5;NFSU2_TR(0x61454a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61454e:{NFSU2_TR(0x61454e);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614550:{NFSU2_TR(0x614550);
__builtin_memmove((R+4),(R+28),4);
}
B614552:{NFSU2_TR(0x614552);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614556:{NFSU2_TR(0x614556);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61455bull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B61455b:L61455b:{c.instructions+=13;NFSU2_TR(0x61455b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61455f:{NFSU2_TR(0x61455f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614563:{NFSU2_TR(0x614563);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B614567:{NFSU2_TR(0x614567);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61456b:{NFSU2_TR(0x61456b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61456f:{NFSU2_TR(0x61456f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B614571:{NFSU2_TR(0x614571);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614575:{NFSU2_TR(0x614575);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614578:{NFSU2_TR(0x614578);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61457b:{NFSU2_TR(0x61457b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61457e:{NFSU2_TR(0x61457e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614582:{NFSU2_TR(0x614582);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614585:{NFSU2_TR(0x614585);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61458aull));
TAIL_STATIC(0x75bed4u,75b);
}
B61458a:L61458a:{c.instructions+=5;NFSU2_TR(0x61458a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61458e:{NFSU2_TR(0x61458e);
__builtin_memmove((R+28),(R+0),4);
}
B614590:{NFSU2_TR(0x614590);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffff8000ull))));
}
B614596:{NFSU2_TR(0x614596);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B614599:{NFSU2_TR(0x614599);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61459eull));
TAIL_STATIC(0x75bed4u,75b);
}
B61459e:L61459e:{c.instructions+=4;NFSU2_TR(0x61459e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6145a2:{NFSU2_TR(0x6145a2);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B6145a4:{NFSU2_TR(0x6145a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6145a7:{NFSU2_TR(0x6145a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6145acull));
TAIL_STATIC(0x75bed4u,75b);
}
B6145ac:L6145ac:{c.instructions+=11;NFSU2_TR(0x6145ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6145b0:{NFSU2_TR(0x6145b0);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B6145b2:{NFSU2_TR(0x6145b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6145b5:{NFSU2_TR(0x6145b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6145b8:{NFSU2_TR(0x6145b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6145be:{NFSU2_TR(0x6145be);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6145c2:{NFSU2_TR(0x6145c2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6145c6:{NFSU2_TR(0x6145c6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6145cc:{NFSU2_TR(0x6145cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6145ce:{NFSU2_TR(0x6145ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6145d1:{NFSU2_TR(0x6145d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61477f;}}
}
B6145d7:L6145d7:{c.instructions+=6;NFSU2_TR(0x6145d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6145db:{NFSU2_TR(0x6145db);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6145de:{NFSU2_TR(0x6145de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8a325cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6145e4:{NFSU2_TR(0x6145e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6145e6:{NFSU2_TR(0x6145e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x42480000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6145ee:{NFSU2_TR(0x6145ee);
if(r1(R+518)){{goto L614614;}}
}
B6145f0:L6145f0:{c.instructions+=7;NFSU2_TR(0x6145f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6145f4:{NFSU2_TR(0x6145f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8a3250ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6145fa:{NFSU2_TR(0x6145fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6145fe:{NFSU2_TR(0x6145fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6145ff:{NFSU2_TR(0x6145ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614600:{NFSU2_TR(0x614600);
__builtin_memmove((R+4),(R+28),4);
}
B614602:{NFSU2_TR(0x614602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614607ull));
TAIL_STATIC(0x5fa540u,5fa);
}
B614607:L614607:{c.instructions+=3;NFSU2_TR(0x614607);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614609:{NFSU2_TR(0x614609);
__builtin_memmove((R+4),(R+28),4);
}
B61460b:{NFSU2_TR(0x61460b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614610ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B614610:L614610:{c.instructions+=1;NFSU2_TR(0x614610);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614614:L614614:{c.instructions+=3;NFSU2_TR(0x614614);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8a1e3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61461a:{NFSU2_TR(0x61461a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61461c:{NFSU2_TR(0x61461c);
if(r1(R+518)){{goto L61477f;}}
}
B614622:L614622:{c.instructions+=12;NFSU2_TR(0x614622);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614626:{NFSU2_TR(0x614626);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61462c:{NFSU2_TR(0x61462c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B614630:{NFSU2_TR(0x614630);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B614634:{NFSU2_TR(0x614634);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614638:{NFSU2_TR(0x614638);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614639:{NFSU2_TR(0x614639);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61463a:{NFSU2_TR(0x61463a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61463e:{NFSU2_TR(0x61463e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8a1e30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B614644:{NFSU2_TR(0x614644);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614645:{NFSU2_TR(0x614645);
__builtin_memmove((R+4),(R+28),4);
}
B614647:{NFSU2_TR(0x614647);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61464cull));
TAIL_STATIC(0x5fa660u,5fa);
}
B61464c:L61464c:{c.instructions+=3;NFSU2_TR(0x61464c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61464e:{NFSU2_TR(0x61464e);
__builtin_memmove((R+4),(R+28),4);
}
B614650:{NFSU2_TR(0x614650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614655ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B614655:L614655:{c.instructions+=4;NFSU2_TR(0x614655);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614659:{NFSU2_TR(0x614659);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61465b:{NFSU2_TR(0x61465b);
__builtin_memmove((R+4),(R+28),4);
}
B61465d:{NFSU2_TR(0x61465d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614662ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B614662:L614662:{c.instructions+=4;NFSU2_TR(0x614662);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614666:{NFSU2_TR(0x614666);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614668:{NFSU2_TR(0x614668);
__builtin_memmove((R+4),(R+28),4);
}
B61466a:{NFSU2_TR(0x61466a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61466full));
TAIL_STATIC(0x5f0b40u,5f0);
}
B61466f:L61466f:{c.instructions+=4;NFSU2_TR(0x61466f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614673:{NFSU2_TR(0x614673);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614675:{NFSU2_TR(0x614675);
__builtin_memmove((R+4),(R+28),4);
}
B614677:{NFSU2_TR(0x614677);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61467cull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B61467c:L61467c:{c.instructions+=4;NFSU2_TR(0x61467c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614680:{NFSU2_TR(0x614680);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614682:{NFSU2_TR(0x614682);
__builtin_memmove((R+4),(R+28),4);
}
B614684:{NFSU2_TR(0x614684);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614689ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B614689:L614689:{c.instructions+=4;NFSU2_TR(0x614689);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61468d:{NFSU2_TR(0x61468d);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61468f:{NFSU2_TR(0x61468f);
__builtin_memmove((R+4),(R+28),4);
}
B614691:{NFSU2_TR(0x614691);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614696ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B614696:L614696:{c.instructions+=4;NFSU2_TR(0x614696);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61469a:{NFSU2_TR(0x61469a);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61469c:{NFSU2_TR(0x61469c);
__builtin_memmove((R+4),(R+28),4);
}
B61469e:{NFSU2_TR(0x61469e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6146a3ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B6146a3:L6146a3:{c.instructions+=4;NFSU2_TR(0x6146a3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6146a7:{NFSU2_TR(0x6146a7);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6146a9:{NFSU2_TR(0x6146a9);
__builtin_memmove((R+4),(R+28),4);
}
B6146ab:{NFSU2_TR(0x6146ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6146b0ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B6146b0:L6146b0:{c.instructions+=37;NFSU2_TR(0x6146b0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6146b4:{NFSU2_TR(0x6146b4);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6146b6:{NFSU2_TR(0x6146b6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6146ba:{NFSU2_TR(0x6146ba);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6146be:{NFSU2_TR(0x6146be);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6146c0:{NFSU2_TR(0x6146c0);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6146c2:{NFSU2_TR(0x6146c2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6146c6:{NFSU2_TR(0x6146c6);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6146c9:{NFSU2_TR(0x6146c9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6146cd:{NFSU2_TR(0x6146cd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6146d1:{NFSU2_TR(0x6146d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6146d3:{NFSU2_TR(0x6146d3);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6146d6:{NFSU2_TR(0x6146d6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6146da:{NFSU2_TR(0x6146da);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6146dc:{NFSU2_TR(0x6146dc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6146e0:{NFSU2_TR(0x6146e0);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6146e3:{NFSU2_TR(0x6146e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6146e5:{NFSU2_TR(0x6146e5);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6146e8:{NFSU2_TR(0x6146e8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6146ea:{NFSU2_TR(0x6146ea);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6146ee:{NFSU2_TR(0x6146ee);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6146f1:{NFSU2_TR(0x6146f1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6146f5:{NFSU2_TR(0x6146f5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6146f9:{NFSU2_TR(0x6146f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6146fb:{NFSU2_TR(0x6146fb);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6146fe:{NFSU2_TR(0x6146fe);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614702:{NFSU2_TR(0x614702);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614706:{NFSU2_TR(0x614706);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61470a:{NFSU2_TR(0x61470a);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61470d:{NFSU2_TR(0x61470d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61470f:{NFSU2_TR(0x61470f);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614712:{NFSU2_TR(0x614712);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614716:{NFSU2_TR(0x614716);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61471a:{NFSU2_TR(0x61471a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61471e:{NFSU2_TR(0x61471e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614722:{NFSU2_TR(0x614722);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B614724:{NFSU2_TR(0x614724);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614729ull));
TAIL_STATIC(0x75bed4u,75b);
}
B614729:L614729:{c.instructions+=7;NFSU2_TR(0x614729);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61472d:{NFSU2_TR(0x61472d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614731:{NFSU2_TR(0x614731);
__builtin_memmove((R+20),(R+0),4);
}
B614733:{NFSU2_TR(0x614733);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614737:{NFSU2_TR(0x614737);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61473b:{NFSU2_TR(0x61473b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61473d:{NFSU2_TR(0x61473d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614742ull));
TAIL_STATIC(0x75bed4u,75b);
}
B614742:L614742:{c.instructions+=7;NFSU2_TR(0x614742);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614746:{NFSU2_TR(0x614746);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61474a:{NFSU2_TR(0x61474a);
__builtin_memmove((R+12),(R+0),4);
}
B61474c:{NFSU2_TR(0x61474c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614750:{NFSU2_TR(0x614750);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614754:{NFSU2_TR(0x614754);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B614756:{NFSU2_TR(0x614756);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61475bull));
TAIL_STATIC(0x75bed4u,75b);
}
B61475b:L61475b:{c.instructions+=7;NFSU2_TR(0x61475b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61475f:{NFSU2_TR(0x61475f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614762:{NFSU2_TR(0x614762);
__builtin_memmove((R+28),(R+0),4);
}
B614764:{NFSU2_TR(0x614764);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614765:{NFSU2_TR(0x614765);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614766:{NFSU2_TR(0x614766);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614767:{NFSU2_TR(0x614767);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61476cull));
TAIL_STATIC(0x613020u,613);
}
B61476c:L61476c:{c.instructions+=6;NFSU2_TR(0x61476c);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffff8000ull))));
}
B614772:{NFSU2_TR(0x614772);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B614775:{NFSU2_TR(0x614775);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+12))));
}
B614777:{NFSU2_TR(0x614777);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B61477a:{NFSU2_TR(0x61477a);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+20))));
}
B61477c:{NFSU2_TR(0x61477c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61477f:L61477f:{c.instructions+=7;NFSU2_TR(0x61477f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B614780:{NFSU2_TR(0x614780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B614781:{NFSU2_TR(0x614781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B614782:{NFSU2_TR(0x614782);
w4(R+0,u32(0x1ull));
}
B614787:{NFSU2_TR(0x614787);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B614788:{NFSU2_TR(0x614788);
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
B61478b:{NFSU2_TR(0x61478b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61478e:L61478e:{c.instructions+=6;NFSU2_TR(0x61478e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61478f:{NFSU2_TR(0x61478f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B614790:{NFSU2_TR(0x614790);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B614792:{NFSU2_TR(0x614792);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B614793:{NFSU2_TR(0x614793);
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
B614796:{NFSU2_TR(0x614796);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6147a0:L6147a0:{c.instructions+=7;NFSU2_TR(0x6147a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6147a1:{NFSU2_TR(0x6147a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6147a2:{NFSU2_TR(0x6147a2);
__builtin_memmove((R+28),(R+4),4);
}
B6147a4:{NFSU2_TR(0x6147a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6147a7:{NFSU2_TR(0x6147a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6147aa:{NFSU2_TR(0x6147aa);
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
B6147ac:{NFSU2_TR(0x6147ac);
if(r1(R+518)){{goto L6147d1;}}
}
B6147ae:L6147ae:{c.instructions+=1;NFSU2_TR(0x6147ae);
__builtin_memmove((R+28),(R+28),4);
}
B6147b0:L6147b0:{c.instructions+=8;NFSU2_TR(0x6147b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6147b2:{NFSU2_TR(0x6147b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6147b4:{NFSU2_TR(0x6147b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6147b7:{NFSU2_TR(0x6147b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6147b9:{NFSU2_TR(0x6147b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6147bc:{NFSU2_TR(0x6147bc);
__builtin_memmove((R+4),(R+28),4);
}
B6147be:{NFSU2_TR(0x6147be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6147c8:{NFSU2_TR(0x6147c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6147cdull));
TAIL_STATIC(0x61f4d0u,61f);
}
B6147cd:L6147cd:{c.instructions+=2;NFSU2_TR(0x6147cd);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+24)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6147cf:{NFSU2_TR(0x6147cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6147b0u);}goto L6147b0;}}
}
B6147d1:L6147d1:{c.instructions+=3;NFSU2_TR(0x6147d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6147d2:{NFSU2_TR(0x6147d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6147d3:{NFSU2_TR(0x6147d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6147e0:L6147e0:{c.instructions+=7;NFSU2_TR(0x6147e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6147e1:{NFSU2_TR(0x6147e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6147e4:{NFSU2_TR(0x6147e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6147e5:{NFSU2_TR(0x6147e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6147e8:{NFSU2_TR(0x6147e8);
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
B6147ea:{NFSU2_TR(0x6147ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6147f4:{NFSU2_TR(0x6147f4);
if(r1(R+518)){{goto L61480d;}}
}
B6147f6:L6147f6:{c.instructions+=3;NFSU2_TR(0x6147f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6147fc:{NFSU2_TR(0x6147fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6147fe:{NFSU2_TR(0x6147fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L614807;}}
}
B614800:L614800:{c.instructions+=2;NFSU2_TR(0x614800);
__builtin_memmove((R+4),(R+24),4);
}
B614802:{NFSU2_TR(0x614802);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614807ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6147e0u);}goto L6147e0;}
}
B614807:L614807:{c.instructions+=3;NFSU2_TR(0x614807);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B614809:{NFSU2_TR(0x614809);
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
B61480b:{NFSU2_TR(0x61480b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6147f6u);}goto L6147f6;}}
}
B61480d:L61480d:{c.instructions+=3;NFSU2_TR(0x61480d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61480e:{NFSU2_TR(0x61480e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61480f:{NFSU2_TR(0x61480f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B614810:L614810:{c.instructions+=3;NFSU2_TR(0x614810);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614813:{NFSU2_TR(0x614813);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x24ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B614816:{NFSU2_TR(0x614816);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B614820:L614820:{c.instructions+=4;NFSU2_TR(0x614820);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614821:{NFSU2_TR(0x614821);
__builtin_memmove((R+24),gp(0x8a2ca4),4);
}
B614827:{NFSU2_TR(0x614827);
w4(R+4,u32(0x8a2ca4ull));
}
B61482c:{NFSU2_TR(0x61482c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614831ull));
TAIL_STATIC(0x502fd0u,502);
}
B614831:L614831:{c.instructions+=2;NFSU2_TR(0x614831);
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
B614833:{NFSU2_TR(0x614833);
if(r1(R+518)){{goto L61483b;}}
}
B614835:L614835:{c.instructions+=3;NFSU2_TR(0x614835);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B614837:{NFSU2_TR(0x614837);
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
B614839:{NFSU2_TR(0x614839);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x614835u);}goto L614835;}}
}
B61483b:L61483b:{c.instructions+=2;NFSU2_TR(0x61483b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61483c:{NFSU2_TR(0x61483c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B614840:L614840:{c.instructions+=4;NFSU2_TR(0x614840);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614843:{NFSU2_TR(0x614843);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B614845:{NFSU2_TR(0x614845);
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
B614847:{NFSU2_TR(0x614847);
if(r1(R+518)){{goto L614858;}}
}
B614849:L614849:{c.instructions+=3;NFSU2_TR(0x614849);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61484c:{NFSU2_TR(0x61484c);
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
B61484e:{NFSU2_TR(0x61484e);
if(r1(R+518)){{goto L614858;}}
}
B614850:L614850:{c.instructions+=2;NFSU2_TR(0x614850);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614853:{NFSU2_TR(0x614853);
TAIL_STATIC(0x5aacd0u,5aa);
}
B614858:L614858:{c.instructions+=9;NFSU2_TR(0x614858);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61485c:{NFSU2_TR(0x61485c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B61485e:{NFSU2_TR(0x61485e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614861:{NFSU2_TR(0x614861);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614864:{NFSU2_TR(0x614864);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614868:{NFSU2_TR(0x614868);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B61486a:{NFSU2_TR(0x61486a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61486d:{NFSU2_TR(0x61486d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614870:{NFSU2_TR(0x614870);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B614880:L614880:{c.instructions+=4;NFSU2_TR(0x614880);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614883:{NFSU2_TR(0x614883);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B614885:{NFSU2_TR(0x614885);
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
B614887:{NFSU2_TR(0x614887);
if(r1(R+518)){{goto L614893;}}
}
B614889:L614889:{c.instructions+=3;NFSU2_TR(0x614889);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61488c:{NFSU2_TR(0x61488c);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B614890:{NFSU2_TR(0x614890);
__builtin_memmove((R+0),(R+518),1);
}
B614893:L614893:{c.instructions+=1;NFSU2_TR(0x614893);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6148a0:L6148a0:{c.instructions+=4;NFSU2_TR(0x6148a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6148a3:{NFSU2_TR(0x6148a3);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6148a5:{NFSU2_TR(0x6148a5);
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
B6148a7:{NFSU2_TR(0x6148a7);
if(r1(R+518)){{goto L6148b3;}}
}
B6148a9:L6148a9:{c.instructions+=3;NFSU2_TR(0x6148a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6148ac:{NFSU2_TR(0x6148ac);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B6148b0:{NFSU2_TR(0x6148b0);
__builtin_memmove((R+0),(R+518),1);
}
B6148b3:L6148b3:{c.instructions+=1;NFSU2_TR(0x6148b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6148c0:L6148c0:{c.instructions+=4;NFSU2_TR(0x6148c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6148c3:{NFSU2_TR(0x6148c3);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6148c5:{NFSU2_TR(0x6148c5);
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
B6148c7:{NFSU2_TR(0x6148c7);
if(r1(R+518)){{goto L6148d3;}}
}
B6148c9:L6148c9:{c.instructions+=3;NFSU2_TR(0x6148c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6148cc:{NFSU2_TR(0x6148cc);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6148d0:{NFSU2_TR(0x6148d0);
__builtin_memmove((R+0),(R+518),1);
}
B6148d3:L6148d3:{c.instructions+=1;NFSU2_TR(0x6148d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6148e0:L6148e0:{c.instructions+=20;NFSU2_TR(0x6148e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6148e1:{NFSU2_TR(0x6148e1);
__builtin_memmove((R+20),(R+16),4);
}
B6148e3:{NFSU2_TR(0x6148e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B6148e6:{NFSU2_TR(0x6148e6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6148e8:{NFSU2_TR(0x6148e8);
u8 U[4];
w4(U+0,u32(0x77a186ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6148ed:{NFSU2_TR(0x6148ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6148f3:{NFSU2_TR(0x6148f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6148f4:{NFSU2_TR(0x6148f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6148fb:{NFSU2_TR(0x6148fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x498ull))));
}
B614901:{NFSU2_TR(0x614901);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614902:{NFSU2_TR(0x614902);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614903:{NFSU2_TR(0x614903);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B614906:{NFSU2_TR(0x614906);
__builtin_memmove((R+12),(R+4),4);
}
B614908:{NFSU2_TR(0x614908);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614909:{NFSU2_TR(0x614909);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B61490b:{NFSU2_TR(0x61490b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61490e:{NFSU2_TR(0x61490e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x308ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B614915:{NFSU2_TR(0x614915);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B614918:{NFSU2_TR(0x614918);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61491c:{NFSU2_TR(0x61491c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6151acu,615);}
}
B614922:L614922:{c.instructions+=5;NFSU2_TR(0x614922);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B614924:{NFSU2_TR(0x614924);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61492a:{NFSU2_TR(0x61492a);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614931:{NFSU2_TR(0x614931);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614934:{NFSU2_TR(0x614934);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614939ull));
TAIL_STATIC(0x404910u,404);
}
B614939:L614939:{c.instructions+=8;NFSU2_TR(0x614939);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614940:{NFSU2_TR(0x614940);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B614942:{NFSU2_TR(0x614942);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B614948:{NFSU2_TR(0x614948);
__builtin_memmove((R+4),(R+8),4);
}
B61494a:{NFSU2_TR(0x61494a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61494b:{NFSU2_TR(0x61494b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61494c:{NFSU2_TR(0x61494c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614950:{NFSU2_TR(0x614950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614955ull));
TAIL_STATIC(0x4038d0u,403);
}
B614955:L614955:{c.instructions+=18;NFSU2_TR(0x614955);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61495c:{NFSU2_TR(0x61495c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61495e:{NFSU2_TR(0x61495e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B614961:{NFSU2_TR(0x614961);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614964:{NFSU2_TR(0x614964);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614968:{NFSU2_TR(0x614968);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61496b:{NFSU2_TR(0x61496b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61496f:{NFSU2_TR(0x61496f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B614972:{NFSU2_TR(0x614972);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614979:{NFSU2_TR(0x614979);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61497c:{NFSU2_TR(0x61497c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614980:{NFSU2_TR(0x614980);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B614983:{NFSU2_TR(0x614983);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614986:{NFSU2_TR(0x614986);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61498d:{NFSU2_TR(0x61498d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B614990:{NFSU2_TR(0x614990);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B614993:{NFSU2_TR(0x614993);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61499a:{NFSU2_TR(0x61499a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61499full));
TAIL_STATIC(0x5b5330u,5b5);
}
B61499f:L61499f:{c.instructions+=14;NFSU2_TR(0x61499f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6149a2:{NFSU2_TR(0x6149a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6149a3:{NFSU2_TR(0x6149a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6149a5:{NFSU2_TR(0x6149a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6149ac:{NFSU2_TR(0x6149ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6149ad:{NFSU2_TR(0x6149ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6149b4:{NFSU2_TR(0x6149b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6149b5:{NFSU2_TR(0x6149b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6149b6:{NFSU2_TR(0x6149b6);
__builtin_memmove((R+4),(R+24),4);
}
B6149b8:{NFSU2_TR(0x6149b8);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6149bf:{NFSU2_TR(0x6149bf);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6149c6:{NFSU2_TR(0x6149c6);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B6149d1:{NFSU2_TR(0x6149d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6149d5:{NFSU2_TR(0x6149d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6149daull));
TAIL_STATIC(0x419bc0u,419);
}
B6149da:L6149da:{c.instructions+=5;NFSU2_TR(0x6149da);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6149de:{NFSU2_TR(0x6149de);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6149e5:{NFSU2_TR(0x6149e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6149e6:{NFSU2_TR(0x6149e6);
__builtin_memmove((R+4),(R+0),4);
}
B6149e8:{NFSU2_TR(0x6149e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6149edull));
TAIL_STATIC(0x40add0u,40a);
}
B6149ed:L6149ed:{c.instructions+=5;NFSU2_TR(0x6149ed);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6149f4:{NFSU2_TR(0x6149f4);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6149fb:{NFSU2_TR(0x6149fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6149fc:{NFSU2_TR(0x6149fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6149fd:{NFSU2_TR(0x6149fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614a02ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B614a02:L614a02:{c.instructions+=24;NFSU2_TR(0x614a02);
w4(R+4,u32(0x4000ull));
}
B614a07:{NFSU2_TR(0x614a07);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B614a0b:{NFSU2_TR(0x614a0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614a13:{NFSU2_TR(0x614a13);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614a17:{NFSU2_TR(0x614a17);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614a1b:{NFSU2_TR(0x614a1b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B614a1d:{NFSU2_TR(0x614a1d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614a1e:{NFSU2_TR(0x614a1e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614a1f:{NFSU2_TR(0x614a1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B614a23:{NFSU2_TR(0x614a23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614a24:{NFSU2_TR(0x614a24);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614a28:{NFSU2_TR(0x614a28);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614a2c:{NFSU2_TR(0x614a2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614a34:{NFSU2_TR(0x614a34);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614a38:{NFSU2_TR(0x614a38);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614a3c:{NFSU2_TR(0x614a3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614a40:{NFSU2_TR(0x614a40);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614a44:{NFSU2_TR(0x614a44);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614a4c:{NFSU2_TR(0x614a4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614a53:{NFSU2_TR(0x614a53);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614a5a:{NFSU2_TR(0x614a5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614a61:{NFSU2_TR(0x614a61);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614a68:{NFSU2_TR(0x614a68);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614a73:{NFSU2_TR(0x614a73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614a78ull));
TAIL_STATIC(0x5bae60u,5ba);
}
B614a78:L614a78:{c.instructions+=25;NFSU2_TR(0x614a78);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614a7c:{NFSU2_TR(0x614a7c);
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
B614a7f:{NFSU2_TR(0x614a7f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614a83:{NFSU2_TR(0x614a83);
__builtin_memmove((R+24),gp(0x8a2ca4),4);
}
B614a89:{NFSU2_TR(0x614a89);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614a8d:{NFSU2_TR(0x614a8d);
w4(R+4,u32(0x8a2ca4ull));
}
B614a92:{NFSU2_TR(0x614a92);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614a96:{NFSU2_TR(0x614a96);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B614a98:{NFSU2_TR(0x614a98);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614a9c:{NFSU2_TR(0x614a9c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614aa0:{NFSU2_TR(0x614aa0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B614aa2:{NFSU2_TR(0x614aa2);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B614aa6:{NFSU2_TR(0x614aa6);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614aaa:{NFSU2_TR(0x614aaa);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614aae:{NFSU2_TR(0x614aae);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614ab2:{NFSU2_TR(0x614ab2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614ab6:{NFSU2_TR(0x614ab6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B614ab8:{NFSU2_TR(0x614ab8);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614abc:{NFSU2_TR(0x614abc);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614ac0:{NFSU2_TR(0x614ac0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B614ac2:{NFSU2_TR(0x614ac2);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B614ac6:{NFSU2_TR(0x614ac6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B614ac8:{NFSU2_TR(0x614ac8);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614acf:{NFSU2_TR(0x614acf);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614ad6:{NFSU2_TR(0x614ad6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614adbull));
TAIL_STATIC(0x502fd0u,502);
}
B614adb:L614adb:{c.instructions+=3;NFSU2_TR(0x614adb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B614add:{NFSU2_TR(0x614add);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614ae1:{NFSU2_TR(0x614ae1);
if(r1(R+518)){{goto L614fb9;}}
}
B614ae7:L614ae7:{c.instructions+=3;NFSU2_TR(0x614ae7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B614aea:{NFSU2_TR(0x614aea);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B614aed:{NFSU2_TR(0x614aed);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614af1:L614af1:{c.instructions+=3;NFSU2_TR(0x614af1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B614af3:{NFSU2_TR(0x614af3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B614af5:{NFSU2_TR(0x614af5);
if(r1(R+518)){{goto L614c46;}}
}
B614afb:L614afb:{c.instructions+=2;NFSU2_TR(0x614afb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B614afe:{NFSU2_TR(0x614afe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L614c46;}}
}
B614b04:L614b04:{c.instructions+=2;NFSU2_TR(0x614b04);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B614b09:{NFSU2_TR(0x614b09);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614b14:L614b14:{c.instructions+=4;NFSU2_TR(0x614b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614b17:{NFSU2_TR(0x614b17);
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
B614b19:{NFSU2_TR(0x614b19);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614b1d:{NFSU2_TR(0x614b1d);
if(r1(R+518)){{goto L614b42;}}
}
B614b1f:L614b1f:{c.instructions+=1;NFSU2_TR(0x614b1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614b24ull));
TAIL_STATIC(0x5ec060u,5ec);
}
B614b24:L614b24:{c.instructions+=2;NFSU2_TR(0x614b24);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B614b26:{NFSU2_TR(0x614b26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L614b36;}}
}
B614b28:L614b28:{c.instructions+=4;NFSU2_TR(0x614b28);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B614b2c:{NFSU2_TR(0x614b2c);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x550ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B614b32:{NFSU2_TR(0x614b32);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B614b34:{NFSU2_TR(0x614b34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L614b42;}}
}
B614b36:L614b36:{c.instructions+=3;NFSU2_TR(0x614b36);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B614b3a:{NFSU2_TR(0x614b3a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B614b3c:{NFSU2_TR(0x614b3c);
if(r1(R+518)){{goto L614fab;}}
}
B614b42:L614b42:{c.instructions+=3;NFSU2_TR(0x614b42);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614b49:{NFSU2_TR(0x614b49);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B614b4d:{NFSU2_TR(0x614b4d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L614fab;}}
}
B614b53:L614b53:{c.instructions+=58;NFSU2_TR(0x614b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614b56:{NFSU2_TR(0x614b56);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614b58:{NFSU2_TR(0x614b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614b5b:{NFSU2_TR(0x614b5b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614b5e:{NFSU2_TR(0x614b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614b61:{NFSU2_TR(0x614b61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B614b64:{NFSU2_TR(0x614b64);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B614b66:{NFSU2_TR(0x614b66);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B614b6d:{NFSU2_TR(0x614b6d);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614b74:{NFSU2_TR(0x614b74);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614b7b:{NFSU2_TR(0x614b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614b7e:{NFSU2_TR(0x614b7e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614b82:{NFSU2_TR(0x614b82);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B614b89:{NFSU2_TR(0x614b89);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614b90:{NFSU2_TR(0x614b90);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B614b97:{NFSU2_TR(0x614b97);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614b99:{NFSU2_TR(0x614b99);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614b9c:{NFSU2_TR(0x614b9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B614b9e:{NFSU2_TR(0x614b9e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B614ba0:{NFSU2_TR(0x614ba0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
}
B614ba5:{NFSU2_TR(0x614ba5);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B614ba9:{NFSU2_TR(0x614ba9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614bad:{NFSU2_TR(0x614bad);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B614bb1:{NFSU2_TR(0x614bb1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614bb5:{NFSU2_TR(0x614bb5);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614bbc:{NFSU2_TR(0x614bbc);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B614bc0:{NFSU2_TR(0x614bc0);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614bc7:{NFSU2_TR(0x614bc7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B614bc9:{NFSU2_TR(0x614bc9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B614bcb:{NFSU2_TR(0x614bcb);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B614bcd:{NFSU2_TR(0x614bcd);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B614bcf:{NFSU2_TR(0x614bcf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B614bd1:{NFSU2_TR(0x614bd1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614bd5:{NFSU2_TR(0x614bd5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614bd9:{NFSU2_TR(0x614bd9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B614bdb:{NFSU2_TR(0x614bdb);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B614bdd:{NFSU2_TR(0x614bdd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B614bdf:{NFSU2_TR(0x614bdf);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B614be1:{NFSU2_TR(0x614be1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614be5:{NFSU2_TR(0x614be5);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614bec:{NFSU2_TR(0x614bec);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614bf3:{NFSU2_TR(0x614bf3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614bf7:{NFSU2_TR(0x614bf7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614bfb:{NFSU2_TR(0x614bfb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B614bfd:{NFSU2_TR(0x614bfd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614c01:{NFSU2_TR(0x614c01);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614c05:{NFSU2_TR(0x614c05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B614c07:{NFSU2_TR(0x614c07);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B614c09:{NFSU2_TR(0x614c09);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614c0d:{NFSU2_TR(0x614c0d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614c10:{NFSU2_TR(0x614c10);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614c13:{NFSU2_TR(0x614c13);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614c15:{NFSU2_TR(0x614c15);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614c17:{NFSU2_TR(0x614c17);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B614c19:{NFSU2_TR(0x614c19);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B614c1f:{NFSU2_TR(0x614c1f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B614c21:{NFSU2_TR(0x614c21);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B614c24:{NFSU2_TR(0x614c24);
if(r1(R+514)){{goto L614c30;}}
}
B614c26:L614c26:{c.instructions+=3;NFSU2_TR(0x614c26);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614c2a:{NFSU2_TR(0x614c2a);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B614c2c:{NFSU2_TR(0x614c2c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614c30:L614c30:{c.instructions+=3;NFSU2_TR(0x614c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614c33:{NFSU2_TR(0x614c33);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B614c35:{NFSU2_TR(0x614c35);
if(r1(R+518)){{goto L614c50;}}
}
B614c37:L614c37:{c.instructions+=3;NFSU2_TR(0x614c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614c3d:{NFSU2_TR(0x614c3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614c44:{NFSU2_TR(0x614c44);
{goto L614c5b;}
}
B614c46:L614c46:{c.instructions+=2;NFSU2_TR(0x614c46);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B614c4b:{NFSU2_TR(0x614c4b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x614b14u);}goto L614b14;}
}
B614c50:L614c50:{c.instructions+=1;NFSU2_TR(0x614c50);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614c5b:L614c5b:{c.instructions+=6;NFSU2_TR(0x614c5b);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614c62:{NFSU2_TR(0x614c62);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B614c69:{NFSU2_TR(0x614c69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614c6a:{NFSU2_TR(0x614c6a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614c6b:{NFSU2_TR(0x614c6b);
w4(R+4,u32(0x88f298ull));
}
B614c70:{NFSU2_TR(0x614c70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614c75ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B614c75:L614c75:{c.instructions+=7;NFSU2_TR(0x614c75);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B614c77:{NFSU2_TR(0x614c77);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614c7b:{NFSU2_TR(0x614c7b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614c7f:{NFSU2_TR(0x614c7f);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B614c86:{NFSU2_TR(0x614c86);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B614c88:{NFSU2_TR(0x614c88);
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
B614c8b:{NFSU2_TR(0x614c8b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L614cb5;}}
}
B614c8d:L614c8d:{c.instructions+=11;NFSU2_TR(0x614c8d);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614c94:{NFSU2_TR(0x614c94);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614c98:{NFSU2_TR(0x614c98);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B614c9c:{NFSU2_TR(0x614c9c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614c9e:{NFSU2_TR(0x614c9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614c9f:{NFSU2_TR(0x614c9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B614ca1:{NFSU2_TR(0x614ca1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614ca2:{NFSU2_TR(0x614ca2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614ca3:{NFSU2_TR(0x614ca3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614ca4:{NFSU2_TR(0x614ca4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614ca5:{NFSU2_TR(0x614ca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614caaull));
TAIL_STATIC(0x403a40u,403);
}
B614caa:L614caa:{c.instructions+=3;NFSU2_TR(0x614caa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B614cad:{NFSU2_TR(0x614cad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B614caf:{NFSU2_TR(0x614caf);
if(r1(R+518)){{goto L614fab;}}
}
B614cb5:L614cb5:{c.instructions+=6;NFSU2_TR(0x614cb5);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614cbc:{NFSU2_TR(0x614cbc);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614cc2:{NFSU2_TR(0x614cc2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B614cc6:{NFSU2_TR(0x614cc6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B614cc8:{NFSU2_TR(0x614cc8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B614ccb:{NFSU2_TR(0x614ccb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L614fab;}}
}
B614cd1:L614cd1:{c.instructions+=11;NFSU2_TR(0x614cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B614cd4:{NFSU2_TR(0x614cd4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614cd6:{NFSU2_TR(0x614cd6);
u8 U[4];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B614cdd:{NFSU2_TR(0x614cdd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614cde:{NFSU2_TR(0x614cde);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B614ce5:{NFSU2_TR(0x614ce5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614ce6:{NFSU2_TR(0x614ce6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614ce7:{NFSU2_TR(0x614ce7);
__builtin_memmove((R+4),(R+12),4);
}
B614ce9:{NFSU2_TR(0x614ce9);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614cf4:{NFSU2_TR(0x614cf4);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614cff:{NFSU2_TR(0x614cff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614d04ull));
TAIL_STATIC(0x419c10u,419);
}
B614d04:L614d04:{c.instructions+=7;NFSU2_TR(0x614d04);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B614d08:{NFSU2_TR(0x614d08);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614d0c:{NFSU2_TR(0x614d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614d0f:{NFSU2_TR(0x614d0f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614d11:{NFSU2_TR(0x614d11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614d12:{NFSU2_TR(0x614d12);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614d16:{NFSU2_TR(0x614d16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614d1bull));
TAIL_STATIC(0x4123c0u,412);
}
B614d1b:L614d1b:{c.instructions+=4;NFSU2_TR(0x614d1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614d1f:{NFSU2_TR(0x614d1f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614d21:{NFSU2_TR(0x614d21);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B614d23:{NFSU2_TR(0x614d23);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614d27:L614d27:{c.instructions+=6;NFSU2_TR(0x614d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614d2a:{NFSU2_TR(0x614d2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B614d2d:{NFSU2_TR(0x614d2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614d2e:{NFSU2_TR(0x614d2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614d32:{NFSU2_TR(0x614d32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614d33:{NFSU2_TR(0x614d33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614d38ull));
TAIL_STATIC(0x4123c0u,412);
}
B614d38:L614d38:{c.instructions+=7;NFSU2_TR(0x614d38);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614d3c:{NFSU2_TR(0x614d3c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614d3e:{NFSU2_TR(0x614d3e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B614d3f:{NFSU2_TR(0x614d3f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B614d42:{NFSU2_TR(0x614d42);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B614d45:{NFSU2_TR(0x614d45);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614d49:{NFSU2_TR(0x614d49);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x614d27u);}goto L614d27;}}
}
B614d4b:L614d4b:{c.instructions+=8;NFSU2_TR(0x614d4b);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B614d52:{NFSU2_TR(0x614d52);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614d56:{NFSU2_TR(0x614d56);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B614d5d:{NFSU2_TR(0x614d5d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614d5e:{NFSU2_TR(0x614d5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614d62:{NFSU2_TR(0x614d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614d65:{NFSU2_TR(0x614d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614d68:{NFSU2_TR(0x614d68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614d6dull));
TAIL_STATIC(0x40add0u,40a);
}
B614d6d:L614d6d:{c.instructions+=5;NFSU2_TR(0x614d6d);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B614d74:{NFSU2_TR(0x614d74);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614d7b:{NFSU2_TR(0x614d7b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614d7c:{NFSU2_TR(0x614d7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614d7d:{NFSU2_TR(0x614d7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614d82ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B614d82:L614d82:{c.instructions+=24;NFSU2_TR(0x614d82);
w4(R+4,u32(0x4000ull));
}
B614d87:{NFSU2_TR(0x614d87);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B614d8b:{NFSU2_TR(0x614d8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614d93:{NFSU2_TR(0x614d93);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614d9b:{NFSU2_TR(0x614d9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614da3:{NFSU2_TR(0x614da3);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B614da5:{NFSU2_TR(0x614da5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614da6:{NFSU2_TR(0x614da6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614da7:{NFSU2_TR(0x614da7);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B614dab:{NFSU2_TR(0x614dab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614dac:{NFSU2_TR(0x614dac);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614db4:{NFSU2_TR(0x614db4);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614dbc:{NFSU2_TR(0x614dbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614dc4:{NFSU2_TR(0x614dc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614dcc:{NFSU2_TR(0x614dcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614dd4:{NFSU2_TR(0x614dd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614ddc:{NFSU2_TR(0x614ddc);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614de4:{NFSU2_TR(0x614de4);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614dec:{NFSU2_TR(0x614dec);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614df7:{NFSU2_TR(0x614df7);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614e02:{NFSU2_TR(0x614e02);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614e0d:{NFSU2_TR(0x614e0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614e18:{NFSU2_TR(0x614e18);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614e23:{NFSU2_TR(0x614e23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614e28ull));
TAIL_STATIC(0x5bae60u,5ba);
}
B614e28:L614e28:{c.instructions+=33;NFSU2_TR(0x614e28);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614e2c:{NFSU2_TR(0x614e2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614e2f:{NFSU2_TR(0x614e2f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614e32:{NFSU2_TR(0x614e32);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B614e35:{NFSU2_TR(0x614e35);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614e39:{NFSU2_TR(0x614e39);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614e3c:{NFSU2_TR(0x614e3c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B614e3e:{NFSU2_TR(0x614e3e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614e42:{NFSU2_TR(0x614e42);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614e44:{NFSU2_TR(0x614e44);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B614e46:{NFSU2_TR(0x614e46);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B614e4a:{NFSU2_TR(0x614e4a);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614e4e:{NFSU2_TR(0x614e4e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614e51:{NFSU2_TR(0x614e51);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614e55:{NFSU2_TR(0x614e55);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614e58:{NFSU2_TR(0x614e58);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B614e5a:{NFSU2_TR(0x614e5a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614e5e:{NFSU2_TR(0x614e5e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614e60:{NFSU2_TR(0x614e60);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B614e62:{NFSU2_TR(0x614e62);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B614e66:{NFSU2_TR(0x614e66);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B614e68:{NFSU2_TR(0x614e68);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614e6f:{NFSU2_TR(0x614e6f);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614e76:{NFSU2_TR(0x614e76);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614e7d:{NFSU2_TR(0x614e7d);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B614e84:{NFSU2_TR(0x614e84);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614e8b:{NFSU2_TR(0x614e8b);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B614e92:{NFSU2_TR(0x614e92);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B614e94:{NFSU2_TR(0x614e94);
{u32 ea_=u32(r4(R+28)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614e97:{NFSU2_TR(0x614e97);
{u32 ea_=u32(r4(R+28)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614e9a:{NFSU2_TR(0x614e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614e9d:{NFSU2_TR(0x614e9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B614e9f:{NFSU2_TR(0x614e9f);
if(r1(R+518)){{goto L614ec2;}}
}
B614ea1:L614ea1:{c.instructions+=3;NFSU2_TR(0x614ea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614ea4:{NFSU2_TR(0x614ea4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B614ea6:{NFSU2_TR(0x614ea6);
if(r1(R+518)){{goto L614ec2;}}
}
B614ea8:L614ea8:{c.instructions+=6;NFSU2_TR(0x614ea8);
u8 U[4];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B614eaf:{NFSU2_TR(0x614eaf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614eb0:{NFSU2_TR(0x614eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614eb3:{NFSU2_TR(0x614eb3);
u8 U[4];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B614eba:{NFSU2_TR(0x614eba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614ebb:{NFSU2_TR(0x614ebb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614ec0ull));
TAIL_STATIC(0x5aacd0u,5aa);
}
B614ec0:L614ec0:{c.instructions+=1;NFSU2_TR(0x614ec0);
{goto L614f04;}
}
B614ec2:L614ec2:{c.instructions+=6;NFSU2_TR(0x614ec2);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614ecd:{NFSU2_TR(0x614ecd);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614ed8:{NFSU2_TR(0x614ed8);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614ee3:{NFSU2_TR(0x614ee3);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614eee:{NFSU2_TR(0x614eee);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614ef9:{NFSU2_TR(0x614ef9);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B614f04:L614f04:{c.instructions+=17;NFSU2_TR(0x614f04);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614f0b:{NFSU2_TR(0x614f0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614f0f:{NFSU2_TR(0x614f0f);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B614f16:{NFSU2_TR(0x614f16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B614f18:{NFSU2_TR(0x614f18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614f1b:{NFSU2_TR(0x614f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B614f1e:{NFSU2_TR(0x614f1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B614f20:{NFSU2_TR(0x614f20);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B614f27:{NFSU2_TR(0x614f27);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614f2d:{NFSU2_TR(0x614f2d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614f2e:{NFSU2_TR(0x614f2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614f2f:{NFSU2_TR(0x614f2f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614f33:{NFSU2_TR(0x614f33);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614f3a:{NFSU2_TR(0x614f3a);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B614f41:{NFSU2_TR(0x614f41);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614f47:{NFSU2_TR(0x614f47);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614f4b:{NFSU2_TR(0x614f4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614f50ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B614f50:L614f50:{c.instructions+=3;NFSU2_TR(0x614f50);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B614f52:{NFSU2_TR(0x614f52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614f53:{NFSU2_TR(0x614f53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614f58ull));
TAIL_STATIC(0x43c370u,43c);
}
B614f58:L614f58:{c.instructions+=27;NFSU2_TR(0x614f58);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B614f5a:{NFSU2_TR(0x614f5a);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B614f5c:{NFSU2_TR(0x614f5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B614f60:{NFSU2_TR(0x614f60);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614f66:{NFSU2_TR(0x614f66);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614f6a:{NFSU2_TR(0x614f6a);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B614f6c:{NFSU2_TR(0x614f6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B614f70:{NFSU2_TR(0x614f70);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B614f74:{NFSU2_TR(0x614f74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B614f77:{NFSU2_TR(0x614f77);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B614f78:{NFSU2_TR(0x614f78);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B614f7a:{NFSU2_TR(0x614f7a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B614f7d:{NFSU2_TR(0x614f7d);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B614f7f:{NFSU2_TR(0x614f7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614f83:{NFSU2_TR(0x614f83);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614f87:{NFSU2_TR(0x614f87);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614f8b:{NFSU2_TR(0x614f8b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B614f8e:{NFSU2_TR(0x614f8e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B614f90:{NFSU2_TR(0x614f90);
{u32 ea_=u32(r4(R+28)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614f93:{NFSU2_TR(0x614f93);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B614f95:{NFSU2_TR(0x614f95);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614f99:{NFSU2_TR(0x614f99);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B614f9b:{NFSU2_TR(0x614f9b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B614f9f:{NFSU2_TR(0x614f9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B614fa1:{NFSU2_TR(0x614fa1);
{u32 ea_=u32(r4(R+28)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B614fa4:{NFSU2_TR(0x614fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614fa7:{NFSU2_TR(0x614fa7);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B614fab:L614fab:{c.instructions+=3;NFSU2_TR(0x614fab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B614fad:{NFSU2_TR(0x614fad);
u8 U[16];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B614fb1:{NFSU2_TR(0x614fb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x614af1u);}goto L614af1;}}
}
B614fb7:L614fb7:{c.instructions+=1;NFSU2_TR(0x614fb7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B614fb9:L614fb9:{c.instructions+=9;NFSU2_TR(0x614fb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B614fbd:{NFSU2_TR(0x614fbd);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614fc2:{NFSU2_TR(0x614fc2);
u8 U[4];
w4(U+0,u32(0x401f90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614fc7:{NFSU2_TR(0x614fc7);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614fc9:{NFSU2_TR(0x614fc9);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614fcb:{NFSU2_TR(0x614fcb);
u8 U[4];
w4(U+0,u32(u32(u32(0x1b0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B614fd2:{NFSU2_TR(0x614fd2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B614fd3:{NFSU2_TR(0x614fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614fd6:{NFSU2_TR(0x614fd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x614fdbull));
TAIL_STATIC(0x75c461u,75c);
}
B614fdb:L614fdb:{c.instructions+=5;NFSU2_TR(0x614fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B614fde:{NFSU2_TR(0x614fde);
u8 U[8];
w4(U+0,u32(u32(u32(0x4acull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B614fe5:{NFSU2_TR(0x614fe5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B614fe8:{NFSU2_TR(0x614fe8);
w4(R+4,u32(0xc0ull));
}
B614fed:{NFSU2_TR(0x614fed);
u8 U[4];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B614ff4:L614ff4:{c.instructions+=1;NFSU2_TR(0x614ff4);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L614ff6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x614ff4u);}goto L614ff4;}
}
B614ff6:L614ff6:{c.instructions+=3;NFSU2_TR(0x614ff6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B614ff8:{NFSU2_TR(0x614ff8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B614ffa:{NFSU2_TR(0x614ffa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6150bcu,615);}
TAIL_STATIC(0x615000u,615);
}
XIT:NFSU2_TR_EXIT(0x614,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
