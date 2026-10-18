#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x514,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x514,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_514(u8* __restrict R,Cpu& c);
u32 page_514(Cpu& c){return body_514(c.regs.data(),c);}
__attribute__((noinline)) u32 body_514(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x514003:goto L514003;
case 0x514008:c.instructions+=2;goto B514008;
case 0x51400d:c.instructions+=1;goto B51400d;
case 0x51400f:goto L51400f;
case 0x514012:c.instructions+=4;goto B514012;
case 0x514014:c.instructions+=3;goto B514014;
case 0x514016:c.instructions+=2;goto B514016;
case 0x51401a:c.instructions+=1;goto B51401a;
case 0x514020:goto L514020;
case 0x514021:c.instructions+=2;goto B514021;
case 0x514023:c.instructions+=1;goto B514023;
case 0x514028:goto L514028;
case 0x51402c:c.instructions+=6;goto B51402c;
case 0x514030:c.instructions+=5;goto B514030;
case 0x514034:c.instructions+=4;goto B514034;
case 0x514036:c.instructions+=3;goto B514036;
case 0x514038:c.instructions+=2;goto B514038;
case 0x51403b:c.instructions+=1;goto B51403b;
case 0x51403d:goto L51403d;
case 0x514041:c.instructions+=2;goto B514041;
case 0x514045:c.instructions+=1;goto B514045;
case 0x514047:goto L514047;
case 0x51404b:c.instructions+=4;goto B51404b;
case 0x51404f:c.instructions+=3;goto B51404f;
case 0x514051:c.instructions+=2;goto B514051;
case 0x514054:c.instructions+=1;goto B514054;
case 0x514056:goto L514056;
case 0x51405a:c.instructions+=1;goto B51405a;
case 0x51405e:goto L51405e;
case 0x51405f:c.instructions+=2;goto B51405f;
case 0x514061:c.instructions+=1;goto B514061;
case 0x514063:goto L514063;
case 0x514065:goto L514065;
case 0x51406b:c.instructions+=2;goto B51406b;
case 0x51406d:c.instructions+=1;goto B51406d;
case 0x51406f:goto L51406f;
case 0x514072:c.instructions+=2;goto B514072;
case 0x514074:c.instructions+=1;goto B514074;
case 0x514076:goto L514076;
case 0x51407c:c.instructions+=2;goto B51407c;
case 0x51407e:c.instructions+=1;goto B51407e;
case 0x514080:goto L514080;
case 0x514086:c.instructions+=1;goto B514086;
case 0x514088:goto L514088;
case 0x51408a:goto L51408a;
case 0x51408c:c.instructions+=1;goto B51408c;
case 0x51408e:goto L51408e;
case 0x514094:c.instructions+=1;goto B514094;
case 0x514096:goto L514096;
case 0x514098:goto L514098;
case 0x51409e:c.instructions+=2;goto B51409e;
case 0x5140a0:c.instructions+=1;goto B5140a0;
case 0x5140a2:goto L5140a2;
case 0x5140a4:c.instructions+=1;goto B5140a4;
case 0x5140a6:goto L5140a6;
case 0x5140a8:c.instructions+=1;goto B5140a8;
case 0x5140aa:goto L5140aa;
case 0x5140ae:c.instructions+=2;goto B5140ae;
case 0x5140b0:c.instructions+=1;goto B5140b0;
case 0x5140b2:goto L5140b2;
case 0x5140b7:c.instructions+=6;goto B5140b7;
case 0x5140b9:c.instructions+=5;goto B5140b9;
case 0x5140bc:c.instructions+=4;goto B5140bc;
case 0x5140bf:c.instructions+=3;goto B5140bf;
case 0x5140c3:c.instructions+=2;goto B5140c3;
case 0x5140c7:c.instructions+=1;goto B5140c7;
case 0x5140c9:goto L5140c9;
case 0x5140cc:c.instructions+=4;goto B5140cc;
case 0x5140d2:c.instructions+=3;goto B5140d2;
case 0x5140d5:c.instructions+=2;goto B5140d5;
case 0x5140db:c.instructions+=1;goto B5140db;
case 0x5140df:goto L5140df;
case 0x5140e3:c.instructions+=5;goto B5140e3;
case 0x5140eb:c.instructions+=4;goto B5140eb;
case 0x5140f1:c.instructions+=3;goto B5140f1;
case 0x5140f3:c.instructions+=2;goto B5140f3;
case 0x5140f6:c.instructions+=1;goto B5140f6;
case 0x5140f8:goto L5140f8;
case 0x5140fc:c.instructions+=2;goto B5140fc;
case 0x5140fe:c.instructions+=1;goto B5140fe;
case 0x514100:goto L514100;
case 0x514104:c.instructions+=2;goto B514104;
case 0x514106:c.instructions+=1;goto B514106;
case 0x514108:goto L514108;
case 0x51410c:c.instructions+=3;goto B51410c;
case 0x514112:c.instructions+=2;goto B514112;
case 0x514116:c.instructions+=1;goto B514116;
case 0x514118:goto L514118;
case 0x51411c:c.instructions+=3;goto B51411c;
case 0x514122:c.instructions+=2;goto B514122;
case 0x514126:c.instructions+=1;goto B514126;
case 0x514128:goto L514128;
case 0x51412a:goto L51412a;
case 0x51412e:c.instructions+=4;goto B51412e;
case 0x514134:c.instructions+=3;goto B514134;
case 0x514136:c.instructions+=2;goto B514136;
case 0x514139:c.instructions+=1;goto B514139;
case 0x51413b:goto L51413b;
case 0x51413e:c.instructions+=1;goto B51413e;
case 0x514140:goto L514140;
case 0x514146:c.instructions+=5;goto B514146;
case 0x514147:c.instructions+=4;goto B514147;
case 0x514148:c.instructions+=3;goto B514148;
case 0x514149:c.instructions+=2;goto B514149;
case 0x51414c:c.instructions+=1;goto B51414c;
case 0x51414d:goto L51414d;
case 0x514151:c.instructions+=6;goto B514151;
case 0x514152:c.instructions+=5;goto B514152;
case 0x514158:c.instructions+=4;goto B514158;
case 0x514159:c.instructions+=3;goto B514159;
case 0x51415a:c.instructions+=2;goto B51415a;
case 0x51415d:c.instructions+=1;goto B51415d;
case 0x514160:goto L514160;
case 0x514163:c.instructions+=1;goto B514163;
case 0x514165:goto L514165;
case 0x514168:c.instructions+=2;goto B514168;
case 0x51416a:c.instructions+=1;goto B51416a;
case 0x51416c:goto L51416c;
case 0x51416f:c.instructions+=1;goto B51416f;
case 0x514170:goto L514170;
case 0x514173:c.instructions+=2;goto B514173;
case 0x514175:c.instructions+=1;goto B514175;
case 0x514177:goto L514177;
case 0x51417a:c.instructions+=1;goto B51417a;
case 0x51417b:goto L51417b;
case 0x51417e:c.instructions+=2;goto B51417e;
case 0x514180:c.instructions+=1;goto B514180;
case 0x514182:goto L514182;
case 0x514185:c.instructions+=1;goto B514185;
case 0x514186:goto L514186;
case 0x514189:c.instructions+=2;goto B514189;
case 0x51418b:c.instructions+=1;goto B51418b;
case 0x51418d:goto L51418d;
case 0x514190:c.instructions+=3;goto B514190;
case 0x514196:c.instructions+=2;goto B514196;
case 0x514197:c.instructions+=1;goto B514197;
case 0x51419c:goto L51419c;
case 0x51419f:c.instructions+=1;goto B51419f;
case 0x5141a0:goto L5141a0;
case 0x5141a2:c.instructions+=1;goto B5141a2;
case 0x5141b0:goto L5141b0;
case 0x5141b1:c.instructions+=10;goto B5141b1;
case 0x5141b2:c.instructions+=9;goto B5141b2;
case 0x5141b3:c.instructions+=8;goto B5141b3;
case 0x5141b4:c.instructions+=7;goto B5141b4;
case 0x5141ba:c.instructions+=6;goto B5141ba;
case 0x5141bc:c.instructions+=5;goto B5141bc;
case 0x5141bd:c.instructions+=4;goto B5141bd;
case 0x5141bf:c.instructions+=3;goto B5141bf;
case 0x5141c4:c.instructions+=2;goto B5141c4;
case 0x5141c6:c.instructions+=1;goto B5141c6;
case 0x5141c8:goto L5141c8;
case 0x5141ca:goto L5141ca;
case 0x5141cb:c.instructions+=2;goto B5141cb;
case 0x5141d0:c.instructions+=1;goto B5141d0;
case 0x5141d5:goto L5141d5;
case 0x5141d7:c.instructions+=2;goto B5141d7;
case 0x5141d9:c.instructions+=1;goto B5141d9;
case 0x5141df:goto L5141df;
case 0x5141e3:goto L5141e3;
case 0x5141e9:c.instructions+=1;goto B5141e9;
case 0x5141eb:goto L5141eb;
case 0x5141ed:c.instructions+=1;goto B5141ed;
case 0x5141ef:goto L5141ef;
case 0x5141f5:c.instructions+=4;goto B5141f5;
case 0x5141f8:c.instructions+=3;goto B5141f8;
case 0x5141fa:c.instructions+=2;goto B5141fa;
case 0x5141fc:c.instructions+=1;goto B5141fc;
case 0x5141fe:goto L5141fe;
case 0x514204:goto L514204;
case 0x514207:c.instructions+=1;goto B514207;
case 0x514209:goto L514209;
case 0x51420a:c.instructions+=3;goto B51420a;
case 0x51420d:c.instructions+=2;goto B51420d;
case 0x51420f:c.instructions+=1;goto B51420f;
case 0x514211:goto L514211;
case 0x514213:goto L514213;
case 0x514217:c.instructions+=2;goto B514217;
case 0x514218:c.instructions+=1;goto B514218;
case 0x51421a:goto L51421a;
case 0x51421b:c.instructions+=1;goto B51421b;
case 0x51421d:goto L51421d;
case 0x514220:c.instructions+=3;goto B514220;
case 0x514221:c.instructions+=2;goto B514221;
case 0x514226:c.instructions+=1;goto B514226;
case 0x51422b:goto L51422b;
case 0x51422d:c.instructions+=1;goto B51422d;
case 0x51422f:goto L51422f;
case 0x514231:goto L514231;
case 0x514237:c.instructions+=2;goto B514237;
case 0x51423a:c.instructions+=1;goto B51423a;
case 0x51423c:goto L51423c;
case 0x514240:c.instructions+=3;goto B514240;
case 0x514246:c.instructions+=2;goto B514246;
case 0x514248:c.instructions+=1;goto B514248;
case 0x51424a:goto L51424a;
case 0x51424e:c.instructions+=4;goto B51424e;
case 0x514250:c.instructions+=3;goto B514250;
case 0x514251:c.instructions+=2;goto B514251;
case 0x514254:c.instructions+=1;goto B514254;
case 0x514258:goto L514258;
case 0x514259:c.instructions+=4;goto B514259;
case 0x51425b:c.instructions+=3;goto B51425b;
case 0x51425d:c.instructions+=2;goto B51425d;
case 0x514262:c.instructions+=1;goto B514262;
case 0x514267:goto L514267;
case 0x514269:c.instructions+=2;goto B514269;
case 0x51426b:c.instructions+=1;goto B51426b;
case 0x514271:goto L514271;
case 0x514272:c.instructions+=4;goto B514272;
case 0x514273:c.instructions+=3;goto B514273;
case 0x514274:c.instructions+=2;goto B514274;
case 0x514275:c.instructions+=1;goto B514275;
case 0x514280:goto L514280;
case 0x514284:c.instructions+=5;goto B514284;
case 0x514285:c.instructions+=4;goto B514285;
case 0x514289:c.instructions+=3;goto B514289;
case 0x51428a:c.instructions+=2;goto B51428a;
case 0x51428b:c.instructions+=1;goto B51428b;
case 0x514290:goto L514290;
case 0x514293:c.instructions+=6;goto B514293;
case 0x514296:c.instructions+=5;goto B514296;
case 0x514299:c.instructions+=4;goto B514299;
case 0x51429c:c.instructions+=3;goto B51429c;
case 0x51429f:c.instructions+=2;goto B51429f;
case 0x5142a0:c.instructions+=1;goto B5142a0;
case 0x5142a2:goto L5142a2;
case 0x5142a4:c.instructions+=1;goto B5142a4;
case 0x5142a6:goto L5142a6;
case 0x5142a9:c.instructions+=1;goto B5142a9;
case 0x5142ab:goto L5142ab;
case 0x5142b0:c.instructions+=1;goto B5142b0;
case 0x5142b2:goto L5142b2;
case 0x5142b4:c.instructions+=1;goto B5142b4;
case 0x5142b6:goto L5142b6;
case 0x5142b9:c.instructions+=1;goto B5142b9;
case 0x5142bb:goto L5142bb;
case 0x5142c1:c.instructions+=4;goto B5142c1;
case 0x5142c4:c.instructions+=3;goto B5142c4;
case 0x5142c8:c.instructions+=2;goto B5142c8;
case 0x5142ca:c.instructions+=1;goto B5142ca;
case 0x5142cc:goto L5142cc;
case 0x5142cd:c.instructions+=1;goto B5142cd;
case 0x5142d2:goto L5142d2;
case 0x5142d6:c.instructions+=2;goto B5142d6;
case 0x5142d9:c.instructions+=1;goto B5142d9;
case 0x5142db:goto L5142db;
case 0x5142dd:goto L5142dd;
case 0x5142e0:goto L5142e0;
case 0x5142e1:c.instructions+=6;goto B5142e1;
case 0x5142e5:c.instructions+=5;goto B5142e5;
case 0x5142e6:c.instructions+=4;goto B5142e6;
case 0x5142ea:c.instructions+=3;goto B5142ea;
case 0x5142eb:c.instructions+=2;goto B5142eb;
case 0x5142ec:c.instructions+=1;goto B5142ec;
case 0x5142f1:goto L5142f1;
case 0x5142f4:c.instructions+=5;goto B5142f4;
case 0x5142f7:c.instructions+=4;goto B5142f7;
case 0x5142fa:c.instructions+=3;goto B5142fa;
case 0x5142fb:c.instructions+=2;goto B5142fb;
case 0x5142fc:c.instructions+=1;goto B5142fc;
case 0x514301:goto L514301;
case 0x514304:c.instructions+=2;goto B514304;
case 0x514307:c.instructions+=1;goto B514307;
case 0x514309:goto L514309;
case 0x51430d:c.instructions+=8;goto B51430d;
case 0x514310:c.instructions+=7;goto B514310;
case 0x514316:c.instructions+=6;goto B514316;
case 0x514319:c.instructions+=5;goto B514319;
case 0x51431b:c.instructions+=4;goto B51431b;
case 0x51431f:c.instructions+=3;goto B51431f;
case 0x514325:c.instructions+=2;goto B514325;
case 0x51432c:c.instructions+=1;goto B51432c;
case 0x51432e:goto L51432e;
case 0x514331:c.instructions+=1;goto B514331;
case 0x514333:goto L514333;
case 0x514335:goto L514335;
case 0x514336:c.instructions+=2;goto B514336;
case 0x514337:c.instructions+=1;goto B514337;
case 0x514340:goto L514340;
case 0x514342:c.instructions+=3;goto B514342;
case 0x514343:c.instructions+=2;goto B514343;
case 0x514344:c.instructions+=1;goto B514344;
case 0x514346:goto L514346;
case 0x51434a:c.instructions+=3;goto B51434a;
case 0x51434c:c.instructions+=2;goto B51434c;
case 0x51434e:c.instructions+=1;goto B51434e;
case 0x514350:goto L514350;
case 0x514353:goto L514353;
case 0x514356:c.instructions+=2;goto B514356;
case 0x514358:c.instructions+=1;goto B514358;
case 0x51435a:goto L51435a;
case 0x51435b:c.instructions+=3;goto B51435b;
case 0x51435e:c.instructions+=2;goto B51435e;
case 0x514360:c.instructions+=1;goto B514360;
case 0x514362:goto L514362;
case 0x514364:goto L514364;
case 0x514368:c.instructions+=6;goto B514368;
case 0x51436a:c.instructions+=5;goto B51436a;
case 0x51436c:c.instructions+=4;goto B51436c;
case 0x51436f:c.instructions+=3;goto B51436f;
case 0x514372:c.instructions+=2;goto B514372;
case 0x514374:c.instructions+=1;goto B514374;
case 0x514376:goto L514376;
case 0x51437c:c.instructions+=4;goto B51437c;
case 0x51437f:c.instructions+=3;goto B51437f;
case 0x514381:c.instructions+=2;goto B514381;
case 0x514383:c.instructions+=1;goto B514383;
case 0x514385:goto L514385;
case 0x51438c:c.instructions+=1;goto B51438c;
case 0x51438e:goto L51438e;
case 0x51438f:c.instructions+=2;goto B51438f;
case 0x514391:c.instructions+=1;goto B514391;
case 0x514393:goto L514393;
case 0x514394:c.instructions+=3;goto B514394;
case 0x514396:c.instructions+=2;goto B514396;
case 0x514397:c.instructions+=1;goto B514397;
case 0x514398:goto L514398;
case 0x51439f:c.instructions+=2;goto B51439f;
case 0x5143a1:c.instructions+=1;goto B5143a1;
case 0x5143a3:goto L5143a3;
case 0x5143a7:c.instructions+=4;goto B5143a7;
case 0x5143a8:c.instructions+=3;goto B5143a8;
case 0x5143ab:c.instructions+=2;goto B5143ab;
case 0x5143ac:c.instructions+=1;goto B5143ac;
case 0x5143ad:goto L5143ad;
case 0x5143ae:c.instructions+=3;goto B5143ae;
case 0x5143b0:c.instructions+=2;goto B5143b0;
case 0x5143b1:c.instructions+=1;goto B5143b1;
case 0x5143c0:goto L5143c0;
case 0x5143c1:c.instructions+=5;goto B5143c1;
case 0x5143c2:c.instructions+=4;goto B5143c2;
case 0x5143c6:c.instructions+=3;goto B5143c6;
case 0x5143c8:c.instructions+=2;goto B5143c8;
case 0x5143c9:c.instructions+=1;goto B5143c9;
case 0x5143ce:goto L5143ce;
case 0x5143d0:c.instructions+=3;goto B5143d0;
case 0x5143d3:c.instructions+=2;goto B5143d3;
case 0x5143d5:c.instructions+=1;goto B5143d5;
case 0x5143d7:goto L5143d7;
case 0x5143d9:c.instructions+=1;goto B5143d9;
case 0x5143de:goto L5143de;
case 0x5143e0:c.instructions+=1;goto B5143e0;
case 0x5143e2:goto L5143e2;
case 0x5143e3:c.instructions+=2;goto B5143e3;
case 0x5143e4:c.instructions+=1;goto B5143e4;
case 0x5143e9:goto L5143e9;
case 0x5143eb:c.instructions+=3;goto B5143eb;
case 0x5143ee:c.instructions+=2;goto B5143ee;
case 0x5143f0:c.instructions+=1;goto B5143f0;
case 0x5143f2:goto L5143f2;
case 0x5143f3:c.instructions+=3;goto B5143f3;
case 0x5143f5:c.instructions+=2;goto B5143f5;
case 0x5143f6:c.instructions+=1;goto B5143f6;
case 0x5143f9:goto L5143f9;
case 0x5143fa:c.instructions+=3;goto B5143fa;
case 0x5143fc:c.instructions+=2;goto B5143fc;
case 0x5143fd:c.instructions+=1;goto B5143fd;
case 0x514400:goto L514400;
case 0x514403:c.instructions+=11;goto B514403;
case 0x514404:c.instructions+=10;goto B514404;
case 0x514408:c.instructions+=9;goto B514408;
case 0x514409:c.instructions+=8;goto B514409;
case 0x51440b:c.instructions+=7;goto B51440b;
case 0x51440c:c.instructions+=6;goto B51440c;
case 0x51440e:c.instructions+=5;goto B51440e;
case 0x51440f:c.instructions+=4;goto B51440f;
case 0x514415:c.instructions+=3;goto B514415;
case 0x514417:c.instructions+=2;goto B514417;
case 0x51441c:c.instructions+=1;goto B51441c;
case 0x51441e:goto L51441e;
case 0x514420:goto L514420;
case 0x514422:c.instructions+=13;goto B514422;
case 0x514428:c.instructions+=12;goto B514428;
case 0x51442a:c.instructions+=11;goto B51442a;
case 0x51442d:c.instructions+=10;goto B51442d;
case 0x514430:c.instructions+=9;goto B514430;
case 0x514433:c.instructions+=8;goto B514433;
case 0x514436:c.instructions+=7;goto B514436;
case 0x514439:c.instructions+=6;goto B514439;
case 0x51443c:c.instructions+=5;goto B51443c;
case 0x51443f:c.instructions+=4;goto B51443f;
case 0x514441:c.instructions+=3;goto B514441;
case 0x514444:c.instructions+=2;goto B514444;
case 0x514449:c.instructions+=1;goto B514449;
case 0x51444f:goto L51444f;
case 0x514451:goto L514451;
case 0x514453:c.instructions+=3;goto B514453;
case 0x514456:c.instructions+=2;goto B514456;
case 0x51445b:c.instructions+=1;goto B51445b;
case 0x514461:goto L514461;
case 0x514463:goto L514463;
case 0x514465:c.instructions+=14;goto B514465;
case 0x51446b:c.instructions+=13;goto B51446b;
case 0x51446e:c.instructions+=12;goto B51446e;
case 0x514474:c.instructions+=11;goto B514474;
case 0x514476:c.instructions+=10;goto B514476;
case 0x514479:c.instructions+=9;goto B514479;
case 0x51447f:c.instructions+=8;goto B51447f;
case 0x514481:c.instructions+=7;goto B514481;
case 0x514483:c.instructions+=6;goto B514483;
case 0x514486:c.instructions+=5;goto B514486;
case 0x51448c:c.instructions+=4;goto B51448c;
case 0x51448e:c.instructions+=3;goto B51448e;
case 0x514493:c.instructions+=2;goto B514493;
case 0x514497:c.instructions+=1;goto B514497;
case 0x514499:goto L514499;
case 0x51449b:goto L51449b;
case 0x51449e:c.instructions+=2;goto B51449e;
case 0x5144a0:c.instructions+=1;goto B5144a0;
case 0x5144a6:goto L5144a6;
case 0x5144aa:c.instructions+=2;goto B5144aa;
case 0x5144ab:c.instructions+=1;goto B5144ab;
case 0x5144b0:goto L5144b0;
case 0x5144b3:c.instructions+=5;goto B5144b3;
case 0x5144b5:c.instructions+=4;goto B5144b5;
case 0x5144b6:c.instructions+=3;goto B5144b6;
case 0x5144b9:c.instructions+=2;goto B5144b9;
case 0x5144bc:c.instructions+=1;goto B5144bc;
case 0x5144be:goto L5144be;
case 0x5144c0:c.instructions+=10;goto B5144c0;
case 0x5144c6:c.instructions+=9;goto B5144c6;
case 0x5144c7:c.instructions+=8;goto B5144c7;
case 0x5144c9:c.instructions+=7;goto B5144c9;
case 0x5144cb:c.instructions+=6;goto B5144cb;
case 0x5144d1:c.instructions+=5;goto B5144d1;
case 0x5144d4:c.instructions+=4;goto B5144d4;
case 0x5144d6:c.instructions+=3;goto B5144d6;
case 0x5144d8:c.instructions+=2;goto B5144d8;
case 0x5144dc:c.instructions+=1;goto B5144dc;
case 0x5144de:goto L5144de;
case 0x5144e4:c.instructions+=1;goto B5144e4;
case 0x5144e6:goto L5144e6;
case 0x5144e9:c.instructions+=2;goto B5144e9;
case 0x5144ed:c.instructions+=1;goto B5144ed;
case 0x5144ef:goto L5144ef;
case 0x5144f0:c.instructions+=3;goto B5144f0;
case 0x5144f3:c.instructions+=2;goto B5144f3;
case 0x5144f5:c.instructions+=1;goto B5144f5;
case 0x5144f7:goto L5144f7;
case 0x5144f8:c.instructions+=8;goto B5144f8;
case 0x5144fa:c.instructions+=7;goto B5144fa;
case 0x5144fb:c.instructions+=6;goto B5144fb;
case 0x514501:c.instructions+=5;goto B514501;
case 0x514502:c.instructions+=4;goto B514502;
case 0x514504:c.instructions+=3;goto B514504;
case 0x514505:c.instructions+=2;goto B514505;
case 0x514508:c.instructions+=1;goto B514508;
case 0x51450b:goto L51450b;
case 0x51450e:c.instructions+=10;goto B51450e;
case 0x514511:c.instructions+=9;goto B514511;
case 0x514512:c.instructions+=8;goto B514512;
case 0x514514:c.instructions+=7;goto B514514;
case 0x514515:c.instructions+=6;goto B514515;
case 0x51451b:c.instructions+=5;goto B51451b;
case 0x51451c:c.instructions+=4;goto B51451c;
case 0x51451e:c.instructions+=3;goto B51451e;
case 0x51451f:c.instructions+=2;goto B51451f;
case 0x514522:c.instructions+=1;goto B514522;
case 0x514530:goto L514530;
case 0x514534:c.instructions+=9;goto B514534;
case 0x514535:c.instructions+=8;goto B514535;
case 0x514536:c.instructions+=7;goto B514536;
case 0x51453a:c.instructions+=6;goto B51453a;
case 0x51453b:c.instructions+=5;goto B51453b;
case 0x51453d:c.instructions+=4;goto B51453d;
case 0x51453e:c.instructions+=3;goto B51453e;
case 0x514544:c.instructions+=2;goto B514544;
case 0x514549:c.instructions+=1;goto B514549;
case 0x514550:goto L514550;
case 0x514551:c.instructions+=3;goto B514551;
case 0x514552:c.instructions+=2;goto B514552;
case 0x514554:c.instructions+=1;goto B514554;
case 0x514559:goto L514559;
case 0x51455f:c.instructions+=3;goto B51455f;
case 0x514565:c.instructions+=2;goto B514565;
case 0x514566:c.instructions+=1;goto B514566;
case 0x514568:goto L514568;
case 0x51456e:c.instructions+=31;goto B51456e;
case 0x514570:c.instructions+=30;goto B514570;
case 0x514576:c.instructions+=29;goto B514576;
case 0x514579:c.instructions+=28;goto B514579;
case 0x51457f:c.instructions+=27;goto B51457f;
case 0x514582:c.instructions+=26;goto B514582;
case 0x514585:c.instructions+=25;goto B514585;
case 0x51458b:c.instructions+=24;goto B51458b;
case 0x51458c:c.instructions+=23;goto B51458c;
case 0x51458f:c.instructions+=22;goto B51458f;
case 0x514595:c.instructions+=21;goto B514595;
case 0x514598:c.instructions+=20;goto B514598;
case 0x51459b:c.instructions+=19;goto B51459b;
case 0x5145a1:c.instructions+=18;goto B5145a1;
case 0x5145a7:c.instructions+=17;goto B5145a7;
case 0x5145a8:c.instructions+=16;goto B5145a8;
case 0x5145ab:c.instructions+=15;goto B5145ab;
case 0x5145b1:c.instructions+=14;goto B5145b1;
case 0x5145b7:c.instructions+=13;goto B5145b7;
case 0x5145bd:c.instructions+=12;goto B5145bd;
case 0x5145be:c.instructions+=11;goto B5145be;
case 0x5145c1:c.instructions+=10;goto B5145c1;
case 0x5145c7:c.instructions+=9;goto B5145c7;
case 0x5145ca:c.instructions+=8;goto B5145ca;
case 0x5145d0:c.instructions+=7;goto B5145d0;
case 0x5145d3:c.instructions+=6;goto B5145d3;
case 0x5145d9:c.instructions+=5;goto B5145d9;
case 0x5145db:c.instructions+=4;goto B5145db;
case 0x5145e1:c.instructions+=3;goto B5145e1;
case 0x5145e6:c.instructions+=2;goto B5145e6;
case 0x5145eb:c.instructions+=1;goto B5145eb;
case 0x5145f1:goto L5145f1;
case 0x5145f3:goto L5145f3;
case 0x5145f9:c.instructions+=40;goto B5145f9;
case 0x5145fb:c.instructions+=39;goto B5145fb;
case 0x514601:c.instructions+=38;goto B514601;
case 0x514604:c.instructions+=37;goto B514604;
case 0x51460a:c.instructions+=36;goto B51460a;
case 0x51460b:c.instructions+=35;goto B51460b;
case 0x51460e:c.instructions+=34;goto B51460e;
case 0x514614:c.instructions+=33;goto B514614;
case 0x51461a:c.instructions+=32;goto B51461a;
case 0x51461b:c.instructions+=31;goto B51461b;
case 0x51461e:c.instructions+=30;goto B51461e;
case 0x514624:c.instructions+=29;goto B514624;
case 0x51462a:c.instructions+=28;goto B51462a;
case 0x51462d:c.instructions+=27;goto B51462d;
case 0x514633:c.instructions+=26;goto B514633;
case 0x514634:c.instructions+=25;goto B514634;
case 0x514636:c.instructions+=24;goto B514636;
case 0x51463c:c.instructions+=23;goto B51463c;
case 0x51463e:c.instructions+=22;goto B51463e;
case 0x514640:c.instructions+=21;goto B514640;
case 0x514643:c.instructions+=20;goto B514643;
case 0x514646:c.instructions+=19;goto B514646;
case 0x514649:c.instructions+=18;goto B514649;
case 0x51464c:c.instructions+=17;goto B51464c;
case 0x51464f:c.instructions+=16;goto B51464f;
case 0x514652:c.instructions+=15;goto B514652;
case 0x514659:c.instructions+=14;goto B514659;
case 0x51465d:c.instructions+=13;goto B51465d;
case 0x514663:c.instructions+=12;goto B514663;
case 0x514666:c.instructions+=11;goto B514666;
case 0x51466c:c.instructions+=10;goto B51466c;
case 0x51466f:c.instructions+=9;goto B51466f;
case 0x514675:c.instructions+=8;goto B514675;
case 0x514677:c.instructions+=7;goto B514677;
case 0x51467a:c.instructions+=6;goto B51467a;
case 0x51467c:c.instructions+=5;goto B51467c;
case 0x514680:c.instructions+=4;goto B514680;
case 0x514685:c.instructions+=3;goto B514685;
case 0x51468b:c.instructions+=2;goto B51468b;
case 0x51468c:c.instructions+=1;goto B51468c;
case 0x514691:goto L514691;
case 0x514693:goto L514693;
case 0x514699:c.instructions+=4;goto B514699;
case 0x51469a:c.instructions+=3;goto B51469a;
case 0x5146a0:c.instructions+=2;goto B5146a0;
case 0x5146a4:c.instructions+=1;goto B5146a4;
case 0x5146a9:goto L5146a9;
case 0x5146af:c.instructions+=13;goto B5146af;
case 0x5146b1:c.instructions+=12;goto B5146b1;
case 0x5146b3:c.instructions+=11;goto B5146b3;
case 0x5146b5:c.instructions+=10;goto B5146b5;
case 0x5146b8:c.instructions+=9;goto B5146b8;
case 0x5146bb:c.instructions+=8;goto B5146bb;
case 0x5146be:c.instructions+=7;goto B5146be;
case 0x5146c1:c.instructions+=6;goto B5146c1;
case 0x5146c4:c.instructions+=5;goto B5146c4;
case 0x5146c7:c.instructions+=4;goto B5146c7;
case 0x5146ca:c.instructions+=3;goto B5146ca;
case 0x5146d0:c.instructions+=2;goto B5146d0;
case 0x5146d2:c.instructions+=1;goto B5146d2;
case 0x5146d7:goto L5146d7;
case 0x5146d9:goto L5146d9;
case 0x5146df:c.instructions+=4;goto B5146df;
case 0x5146e5:c.instructions+=3;goto B5146e5;
case 0x5146e7:c.instructions+=2;goto B5146e7;
case 0x5146e9:c.instructions+=1;goto B5146e9;
case 0x5146eb:goto L5146eb;
case 0x5146ee:goto L5146ee;
case 0x5146ef:c.instructions+=6;goto B5146ef;
case 0x5146f0:c.instructions+=5;goto B5146f0;
case 0x5146f1:c.instructions+=4;goto B5146f1;
case 0x5146f3:c.instructions+=3;goto B5146f3;
case 0x5146f6:c.instructions+=2;goto B5146f6;
case 0x5146f7:c.instructions+=1;goto B5146f7;
case 0x514700:goto L514700;
case 0x514701:c.instructions+=2;goto B514701;
case 0x514703:c.instructions+=1;goto B514703;
case 0x514708:goto L514708;
case 0x51470d:c.instructions+=1;goto B51470d;
case 0x51470f:goto L51470f;
case 0x514710:c.instructions+=1;goto B514710;
case 0x514715:goto L514715;
case 0x514718:goto L514718;
case 0x51471a:c.instructions+=2;goto B51471a;
case 0x51471b:c.instructions+=1;goto B51471b;
case 0x514720:goto L514720;
case 0x514722:c.instructions+=13;goto B514722;
case 0x514727:c.instructions+=12;goto B514727;
case 0x51472d:c.instructions+=11;goto B51472d;
case 0x51472e:c.instructions+=10;goto B51472e;
case 0x514735:c.instructions+=9;goto B514735;
case 0x514736:c.instructions+=8;goto B514736;
case 0x514737:c.instructions+=7;goto B514737;
case 0x514739:c.instructions+=6;goto B514739;
case 0x51473d:c.instructions+=5;goto B51473d;
case 0x514743:c.instructions+=4;goto B514743;
case 0x514746:c.instructions+=3;goto B514746;
case 0x514747:c.instructions+=2;goto B514747;
case 0x51474f:c.instructions+=1;goto B51474f;
case 0x514754:goto L514754;
case 0x514757:c.instructions+=3;goto B514757;
case 0x514759:c.instructions+=2;goto B514759;
case 0x514761:c.instructions+=1;goto B514761;
case 0x514766:goto L514766;
case 0x51476a:c.instructions+=4;goto B51476a;
case 0x51476b:c.instructions+=3;goto B51476b;
case 0x514772:c.instructions+=2;goto B514772;
case 0x514775:c.instructions+=1;goto B514775;
case 0x514780:goto L514780;
case 0x514784:c.instructions+=4;goto B514784;
case 0x514786:c.instructions+=3;goto B514786;
case 0x514787:c.instructions+=2;goto B514787;
case 0x51478a:c.instructions+=1;goto B51478a;
case 0x51478c:goto L51478c;
case 0x51478e:c.instructions+=1;goto B51478e;
case 0x514790:goto L514790;
case 0x514793:c.instructions+=3;goto B514793;
case 0x514795:c.instructions+=2;goto B514795;
case 0x514798:c.instructions+=1;goto B514798;
case 0x51479a:goto L51479a;
case 0x51479d:goto L51479d;
case 0x5147a0:c.instructions+=2;goto B5147a0;
case 0x5147a3:c.instructions+=1;goto B5147a3;
case 0x5147a5:goto L5147a5;
case 0x5147a8:c.instructions+=3;goto B5147a8;
case 0x5147aa:c.instructions+=2;goto B5147aa;
case 0x5147ad:c.instructions+=1;goto B5147ad;
case 0x5147af:goto L5147af;
case 0x5147b2:goto L5147b2;
case 0x5147b9:c.instructions+=1;goto B5147b9;
case 0x5147bc:goto L5147bc;
case 0x5147bf:c.instructions+=1;goto B5147bf;
case 0x5147c1:goto L5147c1;
case 0x5147c4:goto L5147c4;
case 0x5147c7:goto L5147c7;
case 0x5147ca:c.instructions+=3;goto B5147ca;
case 0x5147cc:c.instructions+=2;goto B5147cc;
case 0x5147ce:c.instructions+=1;goto B5147ce;
case 0x5147d0:goto L5147d0;
case 0x5147d3:c.instructions+=5;goto B5147d3;
case 0x5147d6:c.instructions+=4;goto B5147d6;
case 0x5147d9:c.instructions+=3;goto B5147d9;
case 0x5147db:c.instructions+=2;goto B5147db;
case 0x5147dd:c.instructions+=1;goto B5147dd;
case 0x5147df:goto L5147df;
case 0x5147e0:c.instructions+=1;goto B5147e0;
case 0x5147f0:goto L5147f0;
case 0x5147f3:c.instructions+=3;goto B5147f3;
case 0x5147f5:c.instructions+=2;goto B5147f5;
case 0x5147f7:c.instructions+=1;goto B5147f7;
case 0x5147f9:goto L5147f9;
case 0x5147fd:c.instructions+=1;goto B5147fd;
case 0x514800:goto L514800;
case 0x514802:c.instructions+=1;goto B514802;
case 0x514804:goto L514804;
case 0x514807:c.instructions+=3;goto B514807;
case 0x514808:c.instructions+=2;goto B514808;
case 0x51480a:c.instructions+=1;goto B51480a;
case 0x51480c:goto L51480c;
case 0x514810:goto L514810;
case 0x514817:c.instructions+=1;goto B514817;
case 0x514819:goto L514819;
case 0x51481e:c.instructions+=2;goto B51481e;
case 0x514820:c.instructions+=1;goto B514820;
case 0x514822:goto L514822;
case 0x514825:c.instructions+=2;goto B514825;
case 0x514827:c.instructions+=1;goto B514827;
case 0x514829:goto L514829;
case 0x51482c:c.instructions+=2;goto B51482c;
case 0x51482e:c.instructions+=1;goto B51482e;
case 0x514830:goto L514830;
case 0x514833:c.instructions+=6;goto B514833;
case 0x514839:c.instructions+=5;goto B514839;
case 0x51483c:c.instructions+=4;goto B51483c;
case 0x514842:c.instructions+=3;goto B514842;
case 0x514844:c.instructions+=2;goto B514844;
case 0x514847:c.instructions+=1;goto B514847;
case 0x514849:goto L514849;
case 0x514850:goto L514850;
case 0x514860:goto L514860;
case 0x514861:c.instructions+=7;goto B514861;
case 0x514862:c.instructions+=6;goto B514862;
case 0x514868:c.instructions+=5;goto B514868;
case 0x51486a:c.instructions+=4;goto B51486a;
case 0x51486c:c.instructions+=3;goto B51486c;
case 0x51486e:c.instructions+=2;goto B51486e;
case 0x51486f:c.instructions+=1;goto B51486f;
case 0x514871:goto L514871;
case 0x514877:c.instructions+=3;goto B514877;
case 0x51487a:c.instructions+=2;goto B51487a;
case 0x51487d:c.instructions+=1;goto B51487d;
case 0x514880:goto L514880;
case 0x514882:c.instructions+=1;goto B514882;
case 0x514884:goto L514884;
case 0x514885:c.instructions+=3;goto B514885;
case 0x514888:c.instructions+=2;goto B514888;
case 0x51488a:c.instructions+=1;goto B51488a;
case 0x51488c:goto L51488c;
case 0x51488e:goto L51488e;
case 0x514892:c.instructions+=6;goto B514892;
case 0x514893:c.instructions+=5;goto B514893;
case 0x514894:c.instructions+=4;goto B514894;
case 0x514895:c.instructions+=3;goto B514895;
case 0x514898:c.instructions+=2;goto B514898;
case 0x514899:c.instructions+=1;goto B514899;
case 0x51489b:goto L51489b;
case 0x5148a2:goto L5148a2;
case 0x5148a5:c.instructions+=2;goto B5148a5;
case 0x5148a7:c.instructions+=1;goto B5148a7;
case 0x5148a9:goto L5148a9;
case 0x5148ae:c.instructions+=1;goto B5148ae;
case 0x5148b0:goto L5148b0;
case 0x5148b5:c.instructions+=1;goto B5148b5;
case 0x5148b7:goto L5148b7;
case 0x5148bc:c.instructions+=1;goto B5148bc;
case 0x5148be:goto L5148be;
case 0x5148c3:goto L5148c3;
case 0x5148c8:goto L5148c8;
case 0x5148ca:c.instructions+=1;goto B5148ca;
case 0x5148cc:goto L5148cc;
case 0x5148d1:c.instructions+=1;goto B5148d1;
case 0x5148d6:goto L5148d6;
case 0x5148da:c.instructions+=6;goto B5148da;
case 0x5148db:c.instructions+=5;goto B5148db;
case 0x5148df:c.instructions+=4;goto B5148df;
case 0x5148e4:c.instructions+=3;goto B5148e4;
case 0x5148e5:c.instructions+=2;goto B5148e5;
case 0x5148e6:c.instructions+=1;goto B5148e6;
case 0x5148eb:goto L5148eb;
case 0x5148ee:c.instructions+=1;goto B5148ee;
case 0x514910:goto L514910;
case 0x514911:c.instructions+=7;goto B514911;
case 0x514912:c.instructions+=6;goto B514912;
case 0x514918:c.instructions+=5;goto B514918;
case 0x51491a:c.instructions+=4;goto B51491a;
case 0x51491c:c.instructions+=3;goto B51491c;
case 0x51491e:c.instructions+=2;goto B51491e;
case 0x51491f:c.instructions+=1;goto B51491f;
case 0x514921:goto L514921;
case 0x514927:c.instructions+=3;goto B514927;
case 0x51492a:c.instructions+=2;goto B51492a;
case 0x51492d:c.instructions+=1;goto B51492d;
case 0x514930:goto L514930;
case 0x514932:c.instructions+=1;goto B514932;
case 0x514934:goto L514934;
case 0x514935:c.instructions+=3;goto B514935;
case 0x514938:c.instructions+=2;goto B514938;
case 0x51493a:c.instructions+=1;goto B51493a;
case 0x51493c:goto L51493c;
case 0x51493e:goto L51493e;
case 0x514942:c.instructions+=6;goto B514942;
case 0x514943:c.instructions+=5;goto B514943;
case 0x514944:c.instructions+=4;goto B514944;
case 0x514945:c.instructions+=3;goto B514945;
case 0x514948:c.instructions+=2;goto B514948;
case 0x514949:c.instructions+=1;goto B514949;
case 0x51494b:goto L51494b;
case 0x514952:goto L514952;
case 0x514955:c.instructions+=2;goto B514955;
case 0x514957:c.instructions+=1;goto B514957;
case 0x514959:goto L514959;
case 0x51495e:c.instructions+=1;goto B51495e;
case 0x514960:goto L514960;
case 0x514965:c.instructions+=1;goto B514965;
case 0x514967:goto L514967;
case 0x51496c:c.instructions+=1;goto B51496c;
case 0x51496e:goto L51496e;
case 0x514973:goto L514973;
case 0x514978:goto L514978;
case 0x51497a:c.instructions+=1;goto B51497a;
case 0x51497c:goto L51497c;
case 0x514981:c.instructions+=1;goto B514981;
case 0x514986:goto L514986;
case 0x51498a:c.instructions+=6;goto B51498a;
case 0x51498b:c.instructions+=5;goto B51498b;
case 0x51498f:c.instructions+=4;goto B51498f;
case 0x514994:c.instructions+=3;goto B514994;
case 0x514995:c.instructions+=2;goto B514995;
case 0x514996:c.instructions+=1;goto B514996;
case 0x51499b:goto L51499b;
case 0x51499e:c.instructions+=1;goto B51499e;
case 0x5149c0:goto L5149c0;
case 0x5149c6:c.instructions+=6;goto B5149c6;
case 0x5149c7:c.instructions+=5;goto B5149c7;
case 0x5149c9:c.instructions+=4;goto B5149c9;
case 0x5149cc:c.instructions+=3;goto B5149cc;
case 0x5149ce:c.instructions+=2;goto B5149ce;
case 0x5149cf:c.instructions+=1;goto B5149cf;
case 0x5149d1:goto L5149d1;
case 0x5149d6:goto L5149d6;
case 0x5149d8:c.instructions+=2;goto B5149d8;
case 0x5149da:c.instructions+=1;goto B5149da;
case 0x5149dc:goto L5149dc;
case 0x5149e1:c.instructions+=1;goto B5149e1;
case 0x5149e6:goto L5149e6;
case 0x5149e8:goto L5149e8;
case 0x5149eb:c.instructions+=1;goto B5149eb;
case 0x5149f0:goto L5149f0;
case 0x5149f2:c.instructions+=1;goto B5149f2;
case 0x5149f4:goto L5149f4;
case 0x5149f9:c.instructions+=1;goto B5149f9;
case 0x5149fe:goto L5149fe;
case 0x514a03:c.instructions+=4;goto B514a03;
case 0x514a04:c.instructions+=3;goto B514a04;
case 0x514a08:c.instructions+=2;goto B514a08;
case 0x514a09:c.instructions+=1;goto B514a09;
case 0x514a0e:goto L514a0e;
case 0x514a15:c.instructions+=7;goto B514a15;
case 0x514a1c:c.instructions+=6;goto B514a1c;
case 0x514a20:c.instructions+=5;goto B514a20;
case 0x514a21:c.instructions+=4;goto B514a21;
case 0x514a22:c.instructions+=3;goto B514a22;
case 0x514a23:c.instructions+=2;goto B514a23;
case 0x514a24:c.instructions+=1;goto B514a24;
case 0x514a29:goto L514a29;
case 0x514a2c:c.instructions+=4;goto B514a2c;
case 0x514a2d:c.instructions+=3;goto B514a2d;
case 0x514a2e:c.instructions+=2;goto B514a2e;
case 0x514a34:c.instructions+=1;goto B514a34;
case 0x514a37:goto L514a37;
case 0x514a39:c.instructions+=5;goto B514a39;
case 0x514a3c:c.instructions+=4;goto B514a3c;
case 0x514a42:c.instructions+=3;goto B514a42;
case 0x514a47:c.instructions+=2;goto B514a47;
case 0x514a49:c.instructions+=1;goto B514a49;
case 0x514a4e:goto L514a4e;
case 0x514a4f:c.instructions+=4;goto B514a4f;
case 0x514a50:c.instructions+=3;goto B514a50;
case 0x514a55:c.instructions+=2;goto B514a55;
case 0x514a56:c.instructions+=1;goto B514a56;
case 0x514a5b:goto L514a5b;
case 0x514a5e:c.instructions+=2;goto B514a5e;
case 0x514a60:c.instructions+=1;goto B514a60;
case 0x514a62:goto L514a62;
case 0x514a67:c.instructions+=1;goto B514a67;
case 0x514a6c:goto L514a6c;
case 0x514a6f:c.instructions+=2;goto B514a6f;
case 0x514a71:c.instructions+=1;goto B514a71;
case 0x514a76:goto L514a76;
case 0x514a78:c.instructions+=1;goto B514a78;
case 0x514a7a:goto L514a7a;
case 0x514a7f:c.instructions+=1;goto B514a7f;
case 0x514a84:goto L514a84;
case 0x514a8b:c.instructions+=5;goto B514a8b;
case 0x514a8c:c.instructions+=4;goto B514a8c;
case 0x514a8d:c.instructions+=3;goto B514a8d;
case 0x514a94:c.instructions+=2;goto B514a94;
case 0x514a95:c.instructions+=1;goto B514a95;
case 0x514a9a:goto L514a9a;
case 0x514a9d:c.instructions+=4;goto B514a9d;
case 0x514a9e:c.instructions+=3;goto B514a9e;
case 0x514a9f:c.instructions+=2;goto B514a9f;
case 0x514aa5:c.instructions+=1;goto B514aa5;
case 0x514aa8:goto L514aa8;
case 0x514aaa:c.instructions+=5;goto B514aaa;
case 0x514aad:c.instructions+=4;goto B514aad;
case 0x514ab3:c.instructions+=3;goto B514ab3;
case 0x514ab4:c.instructions+=2;goto B514ab4;
case 0x514ab9:c.instructions+=1;goto B514ab9;
case 0x514abe:goto L514abe;
case 0x514ac1:c.instructions+=2;goto B514ac1;
case 0x514ac3:c.instructions+=1;goto B514ac3;
case 0x514ac8:goto L514ac8;
case 0x514aca:c.instructions+=1;goto B514aca;
case 0x514acc:goto L514acc;
case 0x514ad1:c.instructions+=1;goto B514ad1;
case 0x514ad6:goto L514ad6;
case 0x514add:c.instructions+=5;goto B514add;
case 0x514ae4:c.instructions+=4;goto B514ae4;
case 0x514ae5:c.instructions+=3;goto B514ae5;
case 0x514ae6:c.instructions+=2;goto B514ae6;
case 0x514ae7:c.instructions+=1;goto B514ae7;
case 0x514aec:goto L514aec;
case 0x514aef:c.instructions+=4;goto B514aef;
case 0x514af0:c.instructions+=3;goto B514af0;
case 0x514af1:c.instructions+=2;goto B514af1;
case 0x514af7:c.instructions+=1;goto B514af7;
case 0x514b00:goto L514b00;
case 0x514b06:c.instructions+=6;goto B514b06;
case 0x514b07:c.instructions+=5;goto B514b07;
case 0x514b09:c.instructions+=4;goto B514b09;
case 0x514b0c:c.instructions+=3;goto B514b0c;
case 0x514b0e:c.instructions+=2;goto B514b0e;
case 0x514b0f:c.instructions+=1;goto B514b0f;
case 0x514b11:goto L514b11;
case 0x514b16:goto L514b16;
case 0x514b18:c.instructions+=2;goto B514b18;
case 0x514b1a:c.instructions+=1;goto B514b1a;
case 0x514b1c:goto L514b1c;
case 0x514b21:c.instructions+=1;goto B514b21;
case 0x514b26:goto L514b26;
case 0x514b28:goto L514b28;
case 0x514b2b:c.instructions+=1;goto B514b2b;
case 0x514b30:goto L514b30;
case 0x514b32:c.instructions+=1;goto B514b32;
case 0x514b34:goto L514b34;
case 0x514b39:c.instructions+=1;goto B514b39;
case 0x514b3e:goto L514b3e;
case 0x514b43:c.instructions+=4;goto B514b43;
case 0x514b44:c.instructions+=3;goto B514b44;
case 0x514b48:c.instructions+=2;goto B514b48;
case 0x514b49:c.instructions+=1;goto B514b49;
case 0x514b4e:goto L514b4e;
case 0x514b55:c.instructions+=7;goto B514b55;
case 0x514b5c:c.instructions+=6;goto B514b5c;
case 0x514b60:c.instructions+=5;goto B514b60;
case 0x514b61:c.instructions+=4;goto B514b61;
case 0x514b62:c.instructions+=3;goto B514b62;
case 0x514b63:c.instructions+=2;goto B514b63;
case 0x514b64:c.instructions+=1;goto B514b64;
case 0x514b69:goto L514b69;
case 0x514b6c:c.instructions+=4;goto B514b6c;
case 0x514b6d:c.instructions+=3;goto B514b6d;
case 0x514b6e:c.instructions+=2;goto B514b6e;
case 0x514b74:c.instructions+=1;goto B514b74;
case 0x514b77:goto L514b77;
case 0x514b79:c.instructions+=5;goto B514b79;
case 0x514b7c:c.instructions+=4;goto B514b7c;
case 0x514b82:c.instructions+=3;goto B514b82;
case 0x514b87:c.instructions+=2;goto B514b87;
case 0x514b89:c.instructions+=1;goto B514b89;
case 0x514b8e:goto L514b8e;
case 0x514b8f:c.instructions+=4;goto B514b8f;
case 0x514b90:c.instructions+=3;goto B514b90;
case 0x514b95:c.instructions+=2;goto B514b95;
case 0x514b96:c.instructions+=1;goto B514b96;
case 0x514b9b:goto L514b9b;
case 0x514b9e:c.instructions+=2;goto B514b9e;
case 0x514ba0:c.instructions+=1;goto B514ba0;
case 0x514ba2:goto L514ba2;
case 0x514ba7:c.instructions+=1;goto B514ba7;
case 0x514ba9:goto L514ba9;
case 0x514bab:c.instructions+=5;goto B514bab;
case 0x514bae:c.instructions+=4;goto B514bae;
case 0x514bb4:c.instructions+=3;goto B514bb4;
case 0x514bb9:c.instructions+=2;goto B514bb9;
case 0x514bbb:c.instructions+=1;goto B514bbb;
case 0x514bc0:goto L514bc0;
case 0x514bc1:c.instructions+=4;goto B514bc1;
case 0x514bc2:c.instructions+=3;goto B514bc2;
case 0x514bc7:c.instructions+=2;goto B514bc7;
case 0x514bc8:c.instructions+=1;goto B514bc8;
case 0x514bcd:goto L514bcd;
case 0x514bd0:c.instructions+=2;goto B514bd0;
case 0x514bd2:c.instructions+=1;goto B514bd2;
case 0x514bd4:goto L514bd4;
case 0x514bd9:goto L514bd9;
case 0x514bde:goto L514bde;
case 0x514be1:c.instructions+=2;goto B514be1;
case 0x514be3:c.instructions+=1;goto B514be3;
case 0x514be8:goto L514be8;
case 0x514bea:c.instructions+=1;goto B514bea;
case 0x514bec:goto L514bec;
case 0x514bf1:c.instructions+=1;goto B514bf1;
case 0x514bf6:goto L514bf6;
case 0x514bfd:c.instructions+=5;goto B514bfd;
case 0x514bfe:c.instructions+=4;goto B514bfe;
case 0x514bff:c.instructions+=3;goto B514bff;
case 0x514c06:c.instructions+=2;goto B514c06;
case 0x514c07:c.instructions+=1;goto B514c07;
case 0x514c0c:goto L514c0c;
case 0x514c0f:c.instructions+=4;goto B514c0f;
case 0x514c10:c.instructions+=3;goto B514c10;
case 0x514c11:c.instructions+=2;goto B514c11;
case 0x514c17:c.instructions+=1;goto B514c17;
case 0x514c1a:goto L514c1a;
case 0x514c1c:c.instructions+=5;goto B514c1c;
case 0x514c1f:c.instructions+=4;goto B514c1f;
case 0x514c25:c.instructions+=3;goto B514c25;
case 0x514c26:c.instructions+=2;goto B514c26;
case 0x514c2b:c.instructions+=1;goto B514c2b;
case 0x514c30:goto L514c30;
case 0x514c33:c.instructions+=2;goto B514c33;
case 0x514c35:c.instructions+=1;goto B514c35;
case 0x514c3a:goto L514c3a;
case 0x514c3c:c.instructions+=1;goto B514c3c;
case 0x514c3e:goto L514c3e;
case 0x514c43:c.instructions+=1;goto B514c43;
case 0x514c48:goto L514c48;
case 0x514c4f:c.instructions+=5;goto B514c4f;
case 0x514c56:c.instructions+=4;goto B514c56;
case 0x514c57:c.instructions+=3;goto B514c57;
case 0x514c58:c.instructions+=2;goto B514c58;
case 0x514c59:c.instructions+=1;goto B514c59;
case 0x514c5e:goto L514c5e;
case 0x514c61:c.instructions+=4;goto B514c61;
case 0x514c62:c.instructions+=3;goto B514c62;
case 0x514c63:c.instructions+=2;goto B514c63;
case 0x514c69:c.instructions+=1;goto B514c69;
case 0x514c70:goto L514c70;
case 0x514c76:c.instructions+=3;goto B514c76;
case 0x514c78:c.instructions+=2;goto B514c78;
case 0x514c7a:c.instructions+=1;goto B514c7a;
case 0x514c7c:goto L514c7c;
case 0x514c7d:c.instructions+=4;goto B514c7d;
case 0x514c7e:c.instructions+=3;goto B514c7e;
case 0x514c7f:c.instructions+=2;goto B514c7f;
case 0x514c81:c.instructions+=1;goto B514c81;
case 0x514c83:goto L514c83;
case 0x514c85:c.instructions+=1;goto B514c85;
case 0x514c87:goto L514c87;
case 0x514c89:c.instructions+=1;goto B514c89;
case 0x514c8b:goto L514c8b;
case 0x514c8d:c.instructions+=1;goto B514c8d;
case 0x514c8f:goto L514c8f;
case 0x514c91:goto L514c91;
case 0x514c93:c.instructions+=2;goto B514c93;
case 0x514c96:c.instructions+=1;goto B514c96;
case 0x514c98:goto L514c98;
case 0x514c9b:goto L514c9b;
case 0x514ca1:c.instructions+=4;goto B514ca1;
case 0x514ca2:c.instructions+=3;goto B514ca2;
case 0x514ca5:c.instructions+=2;goto B514ca5;
case 0x514ca7:c.instructions+=1;goto B514ca7;
case 0x514ca9:goto L514ca9;
case 0x514caa:c.instructions+=2;goto B514caa;
case 0x514cab:c.instructions+=1;goto B514cab;
case 0x514cac:goto L514cac;
case 0x514cb0:goto L514cb0;
case 0x514cb6:c.instructions+=5;goto B514cb6;
case 0x514cb7:c.instructions+=4;goto B514cb7;
case 0x514cb9:c.instructions+=3;goto B514cb9;
case 0x514cbb:c.instructions+=2;goto B514cbb;
case 0x514cbc:c.instructions+=1;goto B514cbc;
case 0x514cbe:goto L514cbe;
case 0x514cc2:c.instructions+=1;goto B514cc2;
case 0x514cc4:goto L514cc4;
case 0x514cc6:c.instructions+=1;goto B514cc6;
case 0x514cc8:goto L514cc8;
case 0x514cca:c.instructions+=1;goto B514cca;
case 0x514ccc:goto L514ccc;
case 0x514cce:c.instructions+=1;goto B514cce;
case 0x514cd0:goto L514cd0;
case 0x514cd2:goto L514cd2;
case 0x514cd4:c.instructions+=1;goto B514cd4;
case 0x514cd6:goto L514cd6;
case 0x514cd7:c.instructions+=3;goto B514cd7;
case 0x514cda:c.instructions+=2;goto B514cda;
case 0x514cdc:c.instructions+=1;goto B514cdc;
case 0x514cde:goto L514cde;
case 0x514cdf:c.instructions+=3;goto B514cdf;
case 0x514ce0:c.instructions+=2;goto B514ce0;
case 0x514ce2:c.instructions+=1;goto B514ce2;
case 0x514ce5:goto L514ce5;
case 0x514ce6:c.instructions+=3;goto B514ce6;
case 0x514ce7:c.instructions+=2;goto B514ce7;
case 0x514ce9:c.instructions+=1;goto B514ce9;
case 0x514cf0:goto L514cf0;
case 0x514cf1:c.instructions+=4;goto B514cf1;
case 0x514cf7:c.instructions+=3;goto B514cf7;
case 0x514cf9:c.instructions+=2;goto B514cf9;
case 0x514cfb:c.instructions+=1;goto B514cfb;
case 0x514cfd:goto L514cfd;
case 0x514d00:goto L514d00;
case 0x514d02:c.instructions+=1;goto B514d02;
case 0x514d04:goto L514d04;
case 0x514d06:c.instructions+=1;goto B514d06;
case 0x514d08:goto L514d08;
case 0x514d0a:c.instructions+=1;goto B514d0a;
case 0x514d0c:goto L514d0c;
case 0x514d0e:goto L514d0e;
case 0x514d12:c.instructions+=1;goto B514d12;
case 0x514d14:goto L514d14;
case 0x514d18:c.instructions+=1;goto B514d18;
case 0x514d1a:goto L514d1a;
case 0x514d1b:c.instructions+=3;goto B514d1b;
case 0x514d1e:c.instructions+=2;goto B514d1e;
case 0x514d20:c.instructions+=1;goto B514d20;
case 0x514d22:goto L514d22;
case 0x514d24:goto L514d24;
case 0x514d25:c.instructions+=1;goto B514d25;
case 0x514d30:goto L514d30;
case 0x514d34:c.instructions+=2;goto B514d34;
case 0x514d36:c.instructions+=1;goto B514d36;
case 0x514d38:goto L514d38;
case 0x514d3e:c.instructions+=1;goto B514d3e;
case 0x514d41:goto L514d41;
case 0x514d42:c.instructions+=5;goto B514d42;
case 0x514d48:c.instructions+=4;goto B514d48;
case 0x514d4a:c.instructions+=3;goto B514d4a;
case 0x514d4c:c.instructions+=2;goto B514d4c;
case 0x514d4e:c.instructions+=1;goto B514d4e;
case 0x514d50:goto L514d50;
case 0x514d51:c.instructions+=1;goto B514d51;
case 0x514d53:goto L514d53;
case 0x514d55:c.instructions+=1;goto B514d55;
case 0x514d57:goto L514d57;
case 0x514d59:c.instructions+=1;goto B514d59;
case 0x514d5b:goto L514d5b;
case 0x514d5d:c.instructions+=1;goto B514d5d;
case 0x514d5f:goto L514d5f;
case 0x514d61:goto L514d61;
case 0x514d65:c.instructions+=1;goto B514d65;
case 0x514d67:goto L514d67;
case 0x514d6b:c.instructions+=1;goto B514d6b;
case 0x514d6d:goto L514d6d;
case 0x514d6e:goto L514d6e;
case 0x514d6f:c.instructions+=3;goto B514d6f;
case 0x514d72:c.instructions+=2;goto B514d72;
case 0x514d74:c.instructions+=1;goto B514d74;
case 0x514d76:goto L514d76;
case 0x514d77:goto L514d77;
case 0x514d78:c.instructions+=1;goto B514d78;
case 0x514d80:goto L514d80;
case 0x514d86:c.instructions+=3;goto B514d86;
case 0x514d88:c.instructions+=2;goto B514d88;
case 0x514d8a:c.instructions+=1;goto B514d8a;
case 0x514d8c:goto L514d8c;
case 0x514d8d:c.instructions+=3;goto B514d8d;
case 0x514d8e:c.instructions+=2;goto B514d8e;
case 0x514d90:c.instructions+=1;goto B514d90;
case 0x514d92:goto L514d92;
case 0x514d94:c.instructions+=1;goto B514d94;
case 0x514d96:goto L514d96;
case 0x514d98:c.instructions+=1;goto B514d98;
case 0x514d9a:goto L514d9a;
case 0x514d9c:c.instructions+=1;goto B514d9c;
case 0x514d9e:goto L514d9e;
case 0x514da0:goto L514da0;
case 0x514da3:c.instructions+=1;goto B514da3;
case 0x514da5:goto L514da5;
case 0x514da8:goto L514da8;
case 0x514dae:c.instructions+=4;goto B514dae;
case 0x514daf:c.instructions+=3;goto B514daf;
case 0x514db2:c.instructions+=2;goto B514db2;
case 0x514db4:c.instructions+=1;goto B514db4;
case 0x514db6:goto L514db6;
case 0x514db7:c.instructions+=1;goto B514db7;
case 0x514db8:goto L514db8;
case 0x514dc0:goto L514dc0;
case 0x514dc1:c.instructions+=4;goto B514dc1;
case 0x514dc3:c.instructions+=3;goto B514dc3;
case 0x514dc6:c.instructions+=2;goto B514dc6;
case 0x514dca:c.instructions+=1;goto B514dca;
case 0x514dcc:goto L514dcc;
case 0x514dd2:c.instructions+=4;goto B514dd2;
case 0x514dd6:c.instructions+=3;goto B514dd6;
case 0x514ddc:c.instructions+=2;goto B514ddc;
case 0x514dde:c.instructions+=1;goto B514dde;
case 0x514de0:goto L514de0;
case 0x514de3:c.instructions+=1;goto B514de3;
case 0x514de5:goto L514de5;
case 0x514de7:c.instructions+=4;goto B514de7;
case 0x514dea:c.instructions+=3;goto B514dea;
case 0x514df0:c.instructions+=2;goto B514df0;
case 0x514df1:c.instructions+=1;goto B514df1;
case 0x514df6:goto L514df6;
case 0x514df9:c.instructions+=1;goto B514df9;
case 0x514e00:goto L514e00;
case 0x514e01:c.instructions+=1;goto B514e01;
case 0x514e10:goto L514e10;
case 0x514e11:c.instructions+=8;goto B514e11;
case 0x514e12:c.instructions+=7;goto B514e12;
case 0x514e13:c.instructions+=6;goto B514e13;
case 0x514e19:c.instructions+=5;goto B514e19;
case 0x514e1b:c.instructions+=4;goto B514e1b;
case 0x514e1d:c.instructions+=3;goto B514e1d;
case 0x514e1e:c.instructions+=2;goto B514e1e;
case 0x514e20:c.instructions+=1;goto B514e20;
case 0x514e22:goto L514e22;
case 0x514e28:c.instructions+=2;goto B514e28;
case 0x514e2c:c.instructions+=1;goto B514e2c;
case 0x514e30:goto L514e30;
case 0x514e32:c.instructions+=1;goto B514e32;
case 0x514e34:goto L514e34;
case 0x514e36:c.instructions+=1;goto B514e36;
case 0x514e38:goto L514e38;
case 0x514e3a:c.instructions+=1;goto B514e3a;
case 0x514e3c:goto L514e3c;
case 0x514e3e:goto L514e3e;
case 0x514e42:c.instructions+=1;goto B514e42;
case 0x514e44:goto L514e44;
case 0x514e47:c.instructions+=2;goto B514e47;
case 0x514e4a:c.instructions+=1;goto B514e4a;
case 0x514e4c:goto L514e4c;
case 0x514e4d:c.instructions+=3;goto B514e4d;
case 0x514e50:c.instructions+=2;goto B514e50;
case 0x514e52:c.instructions+=1;goto B514e52;
case 0x514e54:goto L514e54;
case 0x514e55:c.instructions+=5;goto B514e55;
case 0x514e56:c.instructions+=4;goto B514e56;
case 0x514e57:c.instructions+=3;goto B514e57;
case 0x514e59:c.instructions+=2;goto B514e59;
case 0x514e5a:c.instructions+=1;goto B514e5a;
case 0x514e5d:goto L514e5d;
case 0x514e5e:c.instructions+=2;goto B514e5e;
case 0x514e60:c.instructions+=1;goto B514e60;
case 0x514e65:goto L514e65;
case 0x514e66:c.instructions+=7;goto B514e66;
case 0x514e68:c.instructions+=6;goto B514e68;
case 0x514e69:c.instructions+=5;goto B514e69;
case 0x514e6b:c.instructions+=4;goto B514e6b;
case 0x514e6c:c.instructions+=3;goto B514e6c;
case 0x514e6e:c.instructions+=2;goto B514e6e;
case 0x514e6f:c.instructions+=1;goto B514e6f;
case 0x514e80:goto L514e80;
case 0x514e83:c.instructions+=7;goto B514e83;
case 0x514e84:c.instructions+=6;goto B514e84;
case 0x514e85:c.instructions+=5;goto B514e85;
case 0x514e86:c.instructions+=4;goto B514e86;
case 0x514e87:c.instructions+=3;goto B514e87;
case 0x514e8c:c.instructions+=2;goto B514e8c;
case 0x514e8e:c.instructions+=1;goto B514e8e;
case 0x514e93:goto L514e93;
case 0x514e97:c.instructions+=4;goto B514e97;
case 0x514e9a:c.instructions+=3;goto B514e9a;
case 0x514e9e:c.instructions+=2;goto B514e9e;
case 0x514ea1:c.instructions+=1;goto B514ea1;
case 0x514ea6:goto L514ea6;
case 0x514ea8:c.instructions+=3;goto B514ea8;
case 0x514ea9:c.instructions+=2;goto B514ea9;
case 0x514eac:c.instructions+=1;goto B514eac;
case 0x514eb1:goto L514eb1;
case 0x514eb4:c.instructions+=31;goto B514eb4;
case 0x514eb6:c.instructions+=30;goto B514eb6;
case 0x514eb9:c.instructions+=29;goto B514eb9;
case 0x514ebc:c.instructions+=28;goto B514ebc;
case 0x514ebe:c.instructions+=27;goto B514ebe;
case 0x514ec1:c.instructions+=26;goto B514ec1;
case 0x514ec2:c.instructions+=25;goto B514ec2;
case 0x514ec5:c.instructions+=24;goto B514ec5;
case 0x514ec8:c.instructions+=23;goto B514ec8;
case 0x514ec9:c.instructions+=22;goto B514ec9;
case 0x514ecc:c.instructions+=21;goto B514ecc;
case 0x514ecd:c.instructions+=20;goto B514ecd;
case 0x514ed0:c.instructions+=19;goto B514ed0;
case 0x514ed2:c.instructions+=18;goto B514ed2;
case 0x514ed5:c.instructions+=17;goto B514ed5;
case 0x514ed6:c.instructions+=16;goto B514ed6;
case 0x514ed9:c.instructions+=15;goto B514ed9;
case 0x514edb:c.instructions+=14;goto B514edb;
case 0x514ede:c.instructions+=13;goto B514ede;
case 0x514ee0:c.instructions+=12;goto B514ee0;
case 0x514ee3:c.instructions+=11;goto B514ee3;
case 0x514ee6:c.instructions+=10;goto B514ee6;
case 0x514ee9:c.instructions+=9;goto B514ee9;
case 0x514eec:c.instructions+=8;goto B514eec;
case 0x514eee:c.instructions+=7;goto B514eee;
case 0x514ef0:c.instructions+=6;goto B514ef0;
case 0x514ef3:c.instructions+=5;goto B514ef3;
case 0x514ef6:c.instructions+=4;goto B514ef6;
case 0x514ef9:c.instructions+=3;goto B514ef9;
case 0x514efa:c.instructions+=2;goto B514efa;
case 0x514efc:c.instructions+=1;goto B514efc;
case 0x514efe:goto L514efe;
case 0x514f00:c.instructions+=17;goto B514f00;
case 0x514f03:c.instructions+=16;goto B514f03;
case 0x514f09:c.instructions+=15;goto B514f09;
case 0x514f0b:c.instructions+=14;goto B514f0b;
case 0x514f11:c.instructions+=13;goto B514f11;
case 0x514f13:c.instructions+=12;goto B514f13;
case 0x514f16:c.instructions+=11;goto B514f16;
case 0x514f19:c.instructions+=10;goto B514f19;
case 0x514f1d:c.instructions+=9;goto B514f1d;
case 0x514f23:c.instructions+=8;goto B514f23;
case 0x514f24:c.instructions+=7;goto B514f24;
case 0x514f26:c.instructions+=6;goto B514f26;
case 0x514f28:c.instructions+=5;goto B514f28;
case 0x514f2c:c.instructions+=4;goto B514f2c;
case 0x514f30:c.instructions+=3;goto B514f30;
case 0x514f32:c.instructions+=2;goto B514f32;
case 0x514f3a:c.instructions+=1;goto B514f3a;
case 0x514f40:goto L514f40;
case 0x514f43:c.instructions+=1;goto B514f43;
case 0x514f45:goto L514f45;
case 0x514f47:c.instructions+=2;goto B514f47;
case 0x514f4c:c.instructions+=1;goto B514f4c;
case 0x514f4e:goto L514f4e;
case 0x514f50:goto L514f50;
case 0x514f54:c.instructions+=3;goto B514f54;
case 0x514f55:c.instructions+=2;goto B514f55;
case 0x514f59:c.instructions+=1;goto B514f59;
case 0x514f5c:goto L514f5c;
case 0x514f60:c.instructions+=4;goto B514f60;
case 0x514f63:c.instructions+=3;goto B514f63;
case 0x514f64:c.instructions+=2;goto B514f64;
case 0x514f68:c.instructions+=1;goto B514f68;
case 0x514f6a:goto L514f6a;
case 0x514f6c:c.instructions+=4;goto B514f6c;
case 0x514f6e:c.instructions+=3;goto B514f6e;
case 0x514f70:c.instructions+=2;goto B514f70;
case 0x514f76:c.instructions+=1;goto B514f76;
case 0x514f78:goto L514f78;
case 0x514f7a:c.instructions+=1;goto B514f7a;
case 0x514f80:goto L514f80;
case 0x514f82:c.instructions+=1;goto B514f82;
case 0x514f84:goto L514f84;
case 0x514f86:c.instructions+=1;goto B514f86;
case 0x514f88:goto L514f88;
case 0x514f8a:c.instructions+=1;goto B514f8a;
case 0x514f8c:goto L514f8c;
case 0x514f8e:goto L514f8e;
case 0x514f92:c.instructions+=1;goto B514f92;
case 0x514f94:goto L514f94;
case 0x514f98:c.instructions+=1;goto B514f98;
case 0x514f9a:goto L514f9a;
case 0x514f9b:goto L514f9b;
case 0x514f9c:c.instructions+=3;goto B514f9c;
case 0x514f9f:c.instructions+=2;goto B514f9f;
case 0x514fa1:c.instructions+=1;goto B514fa1;
case 0x514fa3:goto L514fa3;
case 0x514fa7:c.instructions+=4;goto B514fa7;
case 0x514fab:c.instructions+=3;goto B514fab;
case 0x514fac:c.instructions+=2;goto B514fac;
case 0x514fae:c.instructions+=1;goto B514fae;
case 0x514fb3:goto L514fb3;
case 0x514fb6:c.instructions+=7;goto B514fb6;
case 0x514fb7:c.instructions+=6;goto B514fb7;
case 0x514fb8:c.instructions+=5;goto B514fb8;
case 0x514fb9:c.instructions+=4;goto B514fb9;
case 0x514fbb:c.instructions+=3;goto B514fbb;
case 0x514fbc:c.instructions+=2;goto B514fbc;
case 0x514fbf:c.instructions+=1;goto B514fbf;
case 0x514fd0:goto L514fd0;
case 0x514fd1:c.instructions+=4;goto B514fd1;
case 0x514fd3:c.instructions+=3;goto B514fd3;
case 0x514fd6:c.instructions+=2;goto B514fd6;
case 0x514fd8:c.instructions+=1;goto B514fd8;
case 0x514fda:goto L514fda;
case 0x514fdd:c.instructions+=5;goto B514fdd;
case 0x514fe0:c.instructions+=4;goto B514fe0;
case 0x514fe3:c.instructions+=3;goto B514fe3;
case 0x514fe6:c.instructions+=2;goto B514fe6;
case 0x514fe8:c.instructions+=1;goto B514fe8;
case 0x514fea:goto L514fea;
case 0x514ff4:c.instructions+=3;goto B514ff4;
case 0x514ff9:c.instructions+=2;goto B514ff9;
case 0x514ffb:c.instructions+=1;goto B514ffb;
case 0x514ffd:goto L514ffd;
default:missing_instruction(c.pc);}
B514003:L514003:{c.instructions+=3;NFSU2_TR(0x514003);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B514008:{NFSU2_TR(0x514008);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51400d:{NFSU2_TR(0x51400d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L514065;}}
}
B51400f:L51400f:{c.instructions+=5;NFSU2_TR(0x51400f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B514012:{NFSU2_TR(0x514012);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B514014:{NFSU2_TR(0x514014);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B514016:{NFSU2_TR(0x514016);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51401a:{NFSU2_TR(0x51401a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5140df;}}
}
B514020:L514020:{c.instructions+=3;NFSU2_TR(0x514020);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514021:{NFSU2_TR(0x514021);
__builtin_memmove((R+4),(R+12),4);
}
B514023:{NFSU2_TR(0x514023);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514028ull));
TAIL_STATIC(0x513eb0u,513);
}
B514028:L514028:{c.instructions+=7;NFSU2_TR(0x514028);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51402c:{NFSU2_TR(0x51402c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B514030:{NFSU2_TR(0x514030);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B514034:{NFSU2_TR(0x514034);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B514036:{NFSU2_TR(0x514036);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B514038:{NFSU2_TR(0x514038);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51403b:{NFSU2_TR(0x51403b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514047;}}
}
B51403d:L51403d:{c.instructions+=3;NFSU2_TR(0x51403d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B514041:{NFSU2_TR(0x514041);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B514045:{NFSU2_TR(0x514045);
{goto L51405e;}
}
B514047:L514047:{c.instructions+=5;NFSU2_TR(0x514047);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51404b:{NFSU2_TR(0x51404b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51404f:{NFSU2_TR(0x51404f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B514051:{NFSU2_TR(0x514051);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B514054:{NFSU2_TR(0x514054);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51405e;}}
}
B514056:L514056:{c.instructions+=2;NFSU2_TR(0x514056);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51405a:{NFSU2_TR(0x51405a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51405e:L51405e:{c.instructions+=3;NFSU2_TR(0x51405e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B51405f:{NFSU2_TR(0x51405f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B514061:{NFSU2_TR(0x514061);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514020u);}goto L514020;}}
}
B514063:L514063:{c.instructions+=1;NFSU2_TR(0x514063);
{goto L5140df;}
}
B514065:L514065:{c.instructions+=3;NFSU2_TR(0x514065);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51406b:{NFSU2_TR(0x51406b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51406d:{NFSU2_TR(0x51406d);
if(r1(R+518)){{goto L5140df;}}
}
B51406f:L51406f:{c.instructions+=3;NFSU2_TR(0x51406f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B514072:{NFSU2_TR(0x514072);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B514074:{NFSU2_TR(0x514074);
if(r1(R+518)){{goto L5140df;}}
}
B514076:L514076:{c.instructions+=3;NFSU2_TR(0x514076);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51407c:{NFSU2_TR(0x51407c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51407e:{NFSU2_TR(0x51407e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L514088;}}
}
B514080:L514080:{c.instructions+=2;NFSU2_TR(0x514080);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B514086:{NFSU2_TR(0x514086);
{goto L51408a;}
}
B514088:L514088:{c.instructions+=1;NFSU2_TR(0x514088);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51408a:L51408a:{c.instructions+=2;NFSU2_TR(0x51408a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51408c:{NFSU2_TR(0x51408c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L514096;}}
}
B51408e:L51408e:{c.instructions+=2;NFSU2_TR(0x51408e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514094:{NFSU2_TR(0x514094);
{goto L514098;}
}
B514096:L514096:{c.instructions+=1;NFSU2_TR(0x514096);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B514098:L514098:{c.instructions+=3;NFSU2_TR(0x514098);
__builtin_memmove((R+4),gp(0x863470),4);
}
B51409e:{NFSU2_TR(0x51409e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5140a0:{NFSU2_TR(0x5140a0);
if(r1(R+518)){{goto L5140df;}}
}
B5140a2:L5140a2:{c.instructions+=2;NFSU2_TR(0x5140a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5140a4:{NFSU2_TR(0x5140a4);
if(r1(R+518)){{goto L5140df;}}
}
B5140a6:L5140a6:{c.instructions+=2;NFSU2_TR(0x5140a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5140a8:{NFSU2_TR(0x5140a8);
if(r1(R+518)){{goto L5140df;}}
}
B5140aa:L5140aa:{c.instructions+=3;NFSU2_TR(0x5140aa);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5140ae:{NFSU2_TR(0x5140ae);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5140b0:{NFSU2_TR(0x5140b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5140c9;}}
}
B5140b2:L5140b2:{c.instructions+=7;NFSU2_TR(0x5140b2);
__builtin_memmove((R+0),gp(0x864630),4);
}
B5140b7:{NFSU2_TR(0x5140b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5140b9:{NFSU2_TR(0x5140b9);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5140bc:{NFSU2_TR(0x5140bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5140bf:{NFSU2_TR(0x5140bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5140c3:{NFSU2_TR(0x5140c3);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5140c7:{NFSU2_TR(0x5140c7);
{goto L5140df;}
}
B5140c9:L5140c9:{c.instructions+=5;NFSU2_TR(0x5140c9);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5140cc:{NFSU2_TR(0x5140cc);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5140d2:{NFSU2_TR(0x5140d2);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5140d5:{NFSU2_TR(0x5140d5);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5140db:{NFSU2_TR(0x5140db);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5140df:L5140df:{c.instructions+=6;NFSU2_TR(0x5140df);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5140e3:{NFSU2_TR(0x5140e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5140eb:{NFSU2_TR(0x5140eb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5140f1:{NFSU2_TR(0x5140f1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5140f3:{NFSU2_TR(0x5140f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5140f6:{NFSU2_TR(0x5140f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514128;}}
}
B5140f8:L5140f8:{c.instructions+=3;NFSU2_TR(0x5140f8);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5140fc:{NFSU2_TR(0x5140fc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5140fe:{NFSU2_TR(0x5140fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514118;}}
}
B514100:L514100:{c.instructions+=3;NFSU2_TR(0x514100);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B514104:{NFSU2_TR(0x514104);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B514106:{NFSU2_TR(0x514106);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514118;}}
}
B514108:L514108:{c.instructions+=4;NFSU2_TR(0x514108);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B51410c:{NFSU2_TR(0x51410c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B514112:{NFSU2_TR(0x514112);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B514116:{NFSU2_TR(0x514116);
{goto L51412a;}
}
B514118:L514118:{c.instructions+=4;NFSU2_TR(0x514118);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B51411c:{NFSU2_TR(0x51411c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B514122:{NFSU2_TR(0x514122);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B514126:{NFSU2_TR(0x514126);
{goto L51412a;}
}
B514128:L514128:{c.instructions+=1;NFSU2_TR(0x514128);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51412a:L51412a:{c.instructions+=5;NFSU2_TR(0x51412a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51412e:{NFSU2_TR(0x51412e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B514134:{NFSU2_TR(0x514134);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B514136:{NFSU2_TR(0x514136);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B514139:{NFSU2_TR(0x514139);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L514140;}}
}
B51413b:L51413b:{c.instructions+=2;NFSU2_TR(0x51413b);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B51413e:{NFSU2_TR(0x51413e);
if(r1(R+518)){{goto L51414d;}}
}
B514140:L514140:{c.instructions+=6;NFSU2_TR(0x514140);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B514146:{NFSU2_TR(0x514146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514147:{NFSU2_TR(0x514147);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514148:{NFSU2_TR(0x514148);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B514149:{NFSU2_TR(0x514149);
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
B51414c:{NFSU2_TR(0x51414c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51414d:L51414d:{c.instructions+=7;NFSU2_TR(0x51414d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B514151:{NFSU2_TR(0x514151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514152:{NFSU2_TR(0x514152);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B514158:{NFSU2_TR(0x514158);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514159:{NFSU2_TR(0x514159);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51415a:{NFSU2_TR(0x51415a);
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
B51415d:{NFSU2_TR(0x51415d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514160:L514160:{c.instructions+=2;NFSU2_TR(0x514160);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B514163:{NFSU2_TR(0x514163);
if(r1(R+518)){{goto L5141a0;}}
}
B514165:L514165:{c.instructions+=3;NFSU2_TR(0x514165);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514168:{NFSU2_TR(0x514168);
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
B51416a:{NFSU2_TR(0x51416a);
if(r1(R+518)){{goto L514170;}}
}
B51416c:L51416c:{c.instructions+=2;NFSU2_TR(0x51416c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51416f:{NFSU2_TR(0x51416f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514170:L514170:{c.instructions+=3;NFSU2_TR(0x514170);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514173:{NFSU2_TR(0x514173);
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
B514175:{NFSU2_TR(0x514175);
if(r1(R+518)){{goto L51417b;}}
}
B514177:L514177:{c.instructions+=2;NFSU2_TR(0x514177);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51417a:{NFSU2_TR(0x51417a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51417b:L51417b:{c.instructions+=3;NFSU2_TR(0x51417b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51417e:{NFSU2_TR(0x51417e);
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
B514180:{NFSU2_TR(0x514180);
if(r1(R+518)){{goto L514186;}}
}
B514182:L514182:{c.instructions+=2;NFSU2_TR(0x514182);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514185:{NFSU2_TR(0x514185);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514186:L514186:{c.instructions+=3;NFSU2_TR(0x514186);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B514189:{NFSU2_TR(0x514189);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51418b:{NFSU2_TR(0x51418b);
if(r1(R+518)){{goto L5141a0;}}
}
B51418d:L51418d:{c.instructions+=4;NFSU2_TR(0x51418d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B514190:{NFSU2_TR(0x514190);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x838428))));
}
B514196:{NFSU2_TR(0x514196);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514197:{NFSU2_TR(0x514197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51419cull));
TAIL_STATIC(0x43db50u,43d);
}
B51419c:L51419c:{c.instructions+=2;NFSU2_TR(0x51419c);
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
B51419f:{NFSU2_TR(0x51419f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5141a0:L5141a0:{c.instructions+=2;NFSU2_TR(0x5141a0);
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
B5141a2:{NFSU2_TR(0x5141a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5141b0:L5141b0:{c.instructions+=11;NFSU2_TR(0x5141b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5141b1:{NFSU2_TR(0x5141b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5141b2:{NFSU2_TR(0x5141b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5141b3:{NFSU2_TR(0x5141b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5141b4:{NFSU2_TR(0x5141b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x800ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5141ba:{NFSU2_TR(0x5141ba);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5141bc:{NFSU2_TR(0x5141bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5141bd:{NFSU2_TR(0x5141bd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5141bf:{NFSU2_TR(0x5141bf);
w4(R+4,u32(0x100ull));
}
B5141c4:{NFSU2_TR(0x5141c4);
__builtin_memmove((R+28),(R+24),4);
}
B5141c6:{NFSU2_TR(0x5141c6);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5141c8:L5141c8:{c.instructions+=1;NFSU2_TR(0x5141c8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5141ca;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5141c8u);}goto L5141c8;}
}
B5141ca:L5141ca:{c.instructions+=3;NFSU2_TR(0x5141ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5141cb:{NFSU2_TR(0x5141cb);
w4(R+4,u32(0x88f298ull));
}
B5141d0:{NFSU2_TR(0x5141d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5141d5ull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B5141d5:L5141d5:{c.instructions+=3;NFSU2_TR(0x5141d5);
__builtin_memmove((R+28),(R+0),4);
}
B5141d7:{NFSU2_TR(0x5141d7);
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
B5141d9:{NFSU2_TR(0x5141d9);
if(r1(R+518)){{goto L514271;}}
}
B5141df:L5141df:{c.instructions+=1;NFSU2_TR(0x5141df);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5141e3:L5141e3:{c.instructions+=2;NFSU2_TR(0x5141e3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x100ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5141e9:{NFSU2_TR(0x5141e9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L514258;}}
}
B5141eb:L5141eb:{c.instructions+=2;NFSU2_TR(0x5141eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5141ed:{NFSU2_TR(0x5141ed);
if(r1(R+518)){{goto L514258;}}
}
B5141ef:L5141ef:{c.instructions+=5;NFSU2_TR(0x5141ef);
__builtin_memmove((R+4),gp(0x838434),4);
}
B5141f5:{NFSU2_TR(0x5141f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5141f8:{NFSU2_TR(0x5141f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5141fa:{NFSU2_TR(0x5141fa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5141fc:{NFSU2_TR(0x5141fc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L514258;}}
}
B5141fe:L5141fe:{c.instructions+=1;NFSU2_TR(0x5141fe);
__builtin_memmove((R+24),gp(0x838430),4);
}
B514204:L514204:{c.instructions+=2;NFSU2_TR(0x514204);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B514207:{NFSU2_TR(0x514207);
if(r1(R+518)){{goto L514213;}}
}
B514209:L514209:{c.instructions+=4;NFSU2_TR(0x514209);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51420a:{NFSU2_TR(0x51420a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B51420d:{NFSU2_TR(0x51420d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B51420f:{NFSU2_TR(0x51420f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514204u);}goto L514204;}}
}
B514211:L514211:{c.instructions+=1;NFSU2_TR(0x514211);
{goto L514258;}
}
B514213:L514213:{c.instructions+=3;NFSU2_TR(0x514213);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B514217:{NFSU2_TR(0x514217);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B514218:{NFSU2_TR(0x514218);
if(r1(R+518)){{goto L514231;}}
}
B51421a:L51421a:{c.instructions+=2;NFSU2_TR(0x51421a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B51421b:{NFSU2_TR(0x51421b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51423c;}}
}
B51421d:L51421d:{c.instructions+=4;NFSU2_TR(0x51421d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514220:{NFSU2_TR(0x514220);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514221:{NFSU2_TR(0x514221);
w4(R+4,u32(0x85ad40ull));
}
B514226:{NFSU2_TR(0x514226);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51422bull));
TAIL_STATIC(0x500b80u,500);
}
B51422b:L51422b:{c.instructions+=2;NFSU2_TR(0x51422b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51422d:{NFSU2_TR(0x51422d);
if(r1(R+518)){{goto L514258;}}
}
B51422f:L51422f:{c.instructions+=1;NFSU2_TR(0x51422f);
{goto L51423c;}
}
B514231:L514231:{c.instructions+=3;NFSU2_TR(0x514231);
__builtin_memmove((R+4),gp(0x862838),4);
}
B514237:{NFSU2_TR(0x514237);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51423a:{NFSU2_TR(0x51423a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L514258;}}
}
B51423c:L51423c:{c.instructions+=4;NFSU2_TR(0x51423c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B514240:{NFSU2_TR(0x514240);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8634a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B514246:{NFSU2_TR(0x514246);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B514248:{NFSU2_TR(0x514248);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514258;}}
}
B51424a:L51424a:{c.instructions+=5;NFSU2_TR(0x51424a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51424e:{NFSU2_TR(0x51424e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B514250:{NFSU2_TR(0x514250);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B514251:{NFSU2_TR(0x514251);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B514254:{NFSU2_TR(0x514254);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B514258:L514258:{c.instructions+=5;NFSU2_TR(0x514258);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514259:{NFSU2_TR(0x514259);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51425b:{NFSU2_TR(0x51425b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51425d:{NFSU2_TR(0x51425d);
w4(R+4,u32(0x88f298ull));
}
B514262:{NFSU2_TR(0x514262);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514267ull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B514267:L514267:{c.instructions+=3;NFSU2_TR(0x514267);
__builtin_memmove((R+28),(R+0),4);
}
B514269:{NFSU2_TR(0x514269);
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
B51426b:{NFSU2_TR(0x51426b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5141e3u);}goto L5141e3;}}
}
B514271:L514271:{c.instructions+=5;NFSU2_TR(0x514271);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514272:{NFSU2_TR(0x514272);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514273:{NFSU2_TR(0x514273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B514274:{NFSU2_TR(0x514274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B514275:{NFSU2_TR(0x514275);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514280:L514280:{c.instructions+=6;NFSU2_TR(0x514280);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514284:{NFSU2_TR(0x514284);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514285:{NFSU2_TR(0x514285);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B514289:{NFSU2_TR(0x514289);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51428a:{NFSU2_TR(0x51428a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51428b:{NFSU2_TR(0x51428b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514290ull));
TAIL_STATIC(0x501d70u,501);
}
B514290:L514290:{c.instructions+=7;NFSU2_TR(0x514290);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B514293:{NFSU2_TR(0x514293);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B514296:{NFSU2_TR(0x514296);
w4(R+8,u32(s32(s8(r1(R+4)))));
}
B514299:{NFSU2_TR(0x514299);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51429c:{NFSU2_TR(0x51429c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51429f:{NFSU2_TR(0x51429f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5142a0:{NFSU2_TR(0x5142a0);
if(r1(R+518)){{goto L5142db;}}
}
B5142a2:L5142a2:{c.instructions+=2;NFSU2_TR(0x5142a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5142a4:{NFSU2_TR(0x5142a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5142b2;}}
}
B5142a6:L5142a6:{c.instructions+=2;NFSU2_TR(0x5142a6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5142a9:{NFSU2_TR(0x5142a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5142db;}}
}
B5142ab:L5142ab:{c.instructions+=2;NFSU2_TR(0x5142ab);
w4(R+8,u32(0x1ull));
}
B5142b0:{NFSU2_TR(0x5142b0);
{goto L5142bb;}
}
B5142b2:L5142b2:{c.instructions+=2;NFSU2_TR(0x5142b2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5142b4:{NFSU2_TR(0x5142b4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5142db;}}
}
B5142b6:L5142b6:{c.instructions+=2;NFSU2_TR(0x5142b6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x57ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x57ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5142b9:{NFSU2_TR(0x5142b9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5142db;}}
}
B5142bb:L5142bb:{c.instructions+=5;NFSU2_TR(0x5142bb);
__builtin_memmove((R+4),gp(0x83845c),4);
}
B5142c1:{NFSU2_TR(0x5142c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5142c4:{NFSU2_TR(0x5142c4);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5142c8:{NFSU2_TR(0x5142c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5142ca:{NFSU2_TR(0x5142ca);
if(r1(R+518)){{goto L5142db;}}
}
B5142cc:L5142cc:{c.instructions+=2;NFSU2_TR(0x5142cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5142cd:{NFSU2_TR(0x5142cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5142d2ull));
TAIL_STATIC(0x501750u,501);
}
B5142d2:L5142d2:{c.instructions+=3;NFSU2_TR(0x5142d2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5142d6:{NFSU2_TR(0x5142d6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5142d9:{NFSU2_TR(0x5142d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5142dd;}}
}
B5142db:L5142db:{c.instructions+=1;NFSU2_TR(0x5142db);
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
B5142dd:L5142dd:{c.instructions+=1;NFSU2_TR(0x5142dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5142e0:L5142e0:{c.instructions+=7;NFSU2_TR(0x5142e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5142e1:{NFSU2_TR(0x5142e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5142e5:{NFSU2_TR(0x5142e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5142e6:{NFSU2_TR(0x5142e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5142ea:{NFSU2_TR(0x5142ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5142eb:{NFSU2_TR(0x5142eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5142ec:{NFSU2_TR(0x5142ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5142f1ull));
TAIL_STATIC(0x501d70u,501);
}
B5142f1:L5142f1:{c.instructions+=6;NFSU2_TR(0x5142f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5142f4:{NFSU2_TR(0x5142f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B5142f7:{NFSU2_TR(0x5142f7);
w4(R+8,u32(s32(s8(r1(R+4)))));
}
B5142fa:{NFSU2_TR(0x5142fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5142fb:{NFSU2_TR(0x5142fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5142fc:{NFSU2_TR(0x5142fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514301ull));
TAIL_STATIC(0x501860u,501);
}
B514301:L514301:{c.instructions+=3;NFSU2_TR(0x514301);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B514304:{NFSU2_TR(0x514304);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B514307:{NFSU2_TR(0x514307);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51432e;}}
}
B514309:L514309:{c.instructions+=9;NFSU2_TR(0x514309);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B51430d:{NFSU2_TR(0x51430d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+8,u32(r2(U+0)));
}
B514310:{NFSU2_TR(0x514310);
__builtin_memmove((R+24),gp(0x8a1ccc),4);
}
B514316:{NFSU2_TR(0x514316);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B514319:{NFSU2_TR(0x514319);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B51431b:{NFSU2_TR(0x51431b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51431f:{NFSU2_TR(0x51431f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B514325:{NFSU2_TR(0x514325);
u8 U[24];
w4(U+0,u32(u32(u32(0x84cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B51432c:{NFSU2_TR(0x51432c);
if(r1(R+518)){{goto L514333;}}
}
B51432e:L51432e:{c.instructions+=2;NFSU2_TR(0x51432e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B514331:{NFSU2_TR(0x514331);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514335;}}
}
B514333:L514333:{c.instructions+=1;NFSU2_TR(0x514333);
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
B514335:L514335:{c.instructions+=3;NFSU2_TR(0x514335);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514336:{NFSU2_TR(0x514336);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514337:{NFSU2_TR(0x514337);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514340:L514340:{c.instructions+=4;NFSU2_TR(0x514340);
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
B514342:{NFSU2_TR(0x514342);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514343:{NFSU2_TR(0x514343);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514344:{NFSU2_TR(0x514344);
if(r1(R+518)){{goto L5143ad;}}
}
B514346:L514346:{c.instructions+=4;NFSU2_TR(0x514346);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B51434a:{NFSU2_TR(0x51434a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51434c:{NFSU2_TR(0x51434c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51434e:{NFSU2_TR(0x51434e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L514376;}}
}
B514350:L514350:{c.instructions+=1;NFSU2_TR(0x514350);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B514353:L514353:{c.instructions+=3;NFSU2_TR(0x514353);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+12,u32(s32(s16(r2(U+0)))));
}
B514356:{NFSU2_TR(0x514356);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B514358:{NFSU2_TR(0x514358);
if(r1(R+518)){{goto L514364;}}
}
B51435a:L51435a:{c.instructions+=4;NFSU2_TR(0x51435a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51435b:{NFSU2_TR(0x51435b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B51435e:{NFSU2_TR(0x51435e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B514360:{NFSU2_TR(0x514360);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514353u);}goto L514353;}}
}
B514362:L514362:{c.instructions+=1;NFSU2_TR(0x514362);
{goto L514376;}
}
B514364:L514364:{c.instructions+=7;NFSU2_TR(0x514364);
u8 U[13];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B514368:{NFSU2_TR(0x514368);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
}
B51436a:{NFSU2_TR(0x51436a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51436c:{NFSU2_TR(0x51436c);
__builtin_memmove((R+0),(R+518),1);
}
B51436f:{NFSU2_TR(0x51436f);
w4(R+0,u32(r1(R+0)));
}
B514372:{NFSU2_TR(0x514372);
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
B514374:{NFSU2_TR(0x514374);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5143ad;}}
}
B514376:L514376:{c.instructions+=5;NFSU2_TR(0x514376);
__builtin_memmove((R+4),gp(0x86283c),4);
}
B51437c:{NFSU2_TR(0x51437c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51437f:{NFSU2_TR(0x51437f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B514381:{NFSU2_TR(0x514381);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B514383:{NFSU2_TR(0x514383);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L514393;}}
}
B514385:L514385:{c.instructions+=2;NFSU2_TR(0x514385);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B51438c:{NFSU2_TR(0x51438c);
if(r1(R+518)){{goto L514398;}}
}
B51438e:L51438e:{c.instructions+=3;NFSU2_TR(0x51438e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51438f:{NFSU2_TR(0x51438f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B514391:{NFSU2_TR(0x514391);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514385u);}goto L514385;}}
}
B514393:L514393:{c.instructions+=4;NFSU2_TR(0x514393);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514394:{NFSU2_TR(0x514394);
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
B514396:{NFSU2_TR(0x514396);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B514397:{NFSU2_TR(0x514397);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514398:L514398:{c.instructions+=3;NFSU2_TR(0x514398);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B51439f:{NFSU2_TR(0x51439f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5143a1:{NFSU2_TR(0x5143a1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514393u);}goto L514393;}}
}
B5143a3:L5143a3:{c.instructions+=5;NFSU2_TR(0x5143a3);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5143a7:{NFSU2_TR(0x5143a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5143a8:{NFSU2_TR(0x5143a8);
__builtin_memmove((R+0),(R+518),1);
}
B5143ab:{NFSU2_TR(0x5143ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5143ac:{NFSU2_TR(0x5143ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5143ad:L5143ad:{c.instructions+=4;NFSU2_TR(0x5143ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5143ae:{NFSU2_TR(0x5143ae);
w1(R+0,u8(0x1ull));
}
B5143b0:{NFSU2_TR(0x5143b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5143b1:{NFSU2_TR(0x5143b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5143c0:L5143c0:{c.instructions+=6;NFSU2_TR(0x5143c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5143c1:{NFSU2_TR(0x5143c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5143c2:{NFSU2_TR(0x5143c2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5143c6:{NFSU2_TR(0x5143c6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5143c8:{NFSU2_TR(0x5143c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5143c9:{NFSU2_TR(0x5143c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5143ceull));
TAIL_STATIC(0x4ffcf0u,4ff);
}
B5143ce:L5143ce:{c.instructions+=4;NFSU2_TR(0x5143ce);
__builtin_memmove((R+24),(R+0),4);
}
B5143d0:{NFSU2_TR(0x5143d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5143d3:{NFSU2_TR(0x5143d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5143d5:{NFSU2_TR(0x5143d5);
if(r1(R+518)){{goto L5143f2;}}
}
B5143d7:L5143d7:{c.instructions+=2;NFSU2_TR(0x5143d7);
__builtin_memmove((R+8),(R+24),4);
}
B5143d9:{NFSU2_TR(0x5143d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5143deull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514340u);}goto L514340;}
}
B5143de:L5143de:{c.instructions+=2;NFSU2_TR(0x5143de);
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
B5143e0:{NFSU2_TR(0x5143e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5143f9;}}
}
B5143e2:L5143e2:{c.instructions+=3;NFSU2_TR(0x5143e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5143e3:{NFSU2_TR(0x5143e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5143e4:{NFSU2_TR(0x5143e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5143e9ull));
TAIL_STATIC(0x4ffcf0u,4ff);
}
B5143e9:L5143e9:{c.instructions+=4;NFSU2_TR(0x5143e9);
__builtin_memmove((R+24),(R+0),4);
}
B5143eb:{NFSU2_TR(0x5143eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5143ee:{NFSU2_TR(0x5143ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5143f0:{NFSU2_TR(0x5143f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5143d7u);}goto L5143d7;}}
}
B5143f2:L5143f2:{c.instructions+=4;NFSU2_TR(0x5143f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5143f3:{NFSU2_TR(0x5143f3);
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
B5143f5:{NFSU2_TR(0x5143f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5143f6:{NFSU2_TR(0x5143f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5143f9:L5143f9:{c.instructions+=4;NFSU2_TR(0x5143f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5143fa:{NFSU2_TR(0x5143fa);
w1(R+0,u8(0x1ull));
}
B5143fc:{NFSU2_TR(0x5143fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5143fd:{NFSU2_TR(0x5143fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514400:L514400:{c.instructions+=12;NFSU2_TR(0x514400);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B514403:{NFSU2_TR(0x514403);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514404:{NFSU2_TR(0x514404);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B514408:{NFSU2_TR(0x514408);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514409:{NFSU2_TR(0x514409);
__builtin_memmove((R+20),(R+4),4);
}
B51440b:{NFSU2_TR(0x51440b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51440c:{NFSU2_TR(0x51440c);
__builtin_memmove((R+24),(R+12),4);
}
B51440e:{NFSU2_TR(0x51440e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51440f:{NFSU2_TR(0x51440f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8cull))));
}
B514415:{NFSU2_TR(0x514415);
__builtin_memmove((R+0),(R+12),4);
}
B514417:{NFSU2_TR(0x514417);
w4(R+4,u32(0x23ull));
}
B51441c:{NFSU2_TR(0x51441c);
__builtin_memmove((R+28),(R+20),4);
}
B51441e:L51441e:{c.instructions+=1;NFSU2_TR(0x51441e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L514420;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51441eu);}goto L51441e;}
}
B514420:L514420:{c.instructions+=14;NFSU2_TR(0x514420);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B514422:{NFSU2_TR(0x514422);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8cull))));
__builtin_memmove((R+4),(U+0),4);
}
B514428:{NFSU2_TR(0x514428);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B51442a:{NFSU2_TR(0x51442a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51442d:{NFSU2_TR(0x51442d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B514430:{NFSU2_TR(0x514430);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B514433:{NFSU2_TR(0x514433);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B514436:{NFSU2_TR(0x514436);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514439:{NFSU2_TR(0x514439);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51443c:{NFSU2_TR(0x51443c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B51443f:{NFSU2_TR(0x51443f);
__builtin_memmove((R+24),(R+12),4);
}
B514441:{NFSU2_TR(0x514441);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x28ull))));
}
B514444:{NFSU2_TR(0x514444);
w4(R+4,u32(0xaull));
}
B514449:{NFSU2_TR(0x514449);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9cull))));
__builtin_memmove((R+28),(U+0),4);
}
B51444f:L51444f:{c.instructions+=1;NFSU2_TR(0x51444f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L514451;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51444fu);}goto L51444f;}
}
B514451:L514451:{c.instructions+=4;NFSU2_TR(0x514451);
__builtin_memmove((R+24),(R+12),4);
}
B514453:{NFSU2_TR(0x514453);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
}
B514456:{NFSU2_TR(0x514456);
w4(R+4,u32(0x6ull));
}
B51445b:{NFSU2_TR(0x51445b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514461:L514461:{c.instructions+=1;NFSU2_TR(0x514461);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L514463;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514461u);}goto L514461;}
}
B514463:L514463:{c.instructions+=15;NFSU2_TR(0x514463);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B514465:{NFSU2_TR(0x514465);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51446b:{NFSU2_TR(0x51446b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B51446e:{NFSU2_TR(0x51446e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B514474:{NFSU2_TR(0x514474);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B514476:{NFSU2_TR(0x514476);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B514479:{NFSU2_TR(0x514479);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B51447f:{NFSU2_TR(0x51447f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B514481:{NFSU2_TR(0x514481);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B514483:{NFSU2_TR(0x514483);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B514486:{NFSU2_TR(0x514486);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B51448c:{NFSU2_TR(0x51448c);
__builtin_memmove((R+24),(R+12),4);
}
B51448e:{NFSU2_TR(0x51448e);
w4(R+4,u32(0x5ull));
}
B514493:{NFSU2_TR(0x514493);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B514497:{NFSU2_TR(0x514497);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B514499:L514499:{c.instructions+=1;NFSU2_TR(0x514499);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L51449b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514499u);}goto L514499;}
}
B51449b:L51449b:{c.instructions+=3;NFSU2_TR(0x51449b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x14ull))));
}
B51449e:{NFSU2_TR(0x51449e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5144a0:{NFSU2_TR(0x5144a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5144a6:L5144a6:{c.instructions+=3;NFSU2_TR(0x5144a6);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5144aa:{NFSU2_TR(0x5144aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5144ab:{NFSU2_TR(0x5144ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5144b0ull));
TAIL_STATIC(0x512990u,512);
}
B5144b0:L5144b0:{c.instructions+=6;NFSU2_TR(0x5144b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5144b3:{NFSU2_TR(0x5144b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5144b5:{NFSU2_TR(0x5144b5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5144b6:{NFSU2_TR(0x5144b6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5144b9:{NFSU2_TR(0x5144b9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5144bc:{NFSU2_TR(0x5144bc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5144a6u);}goto L5144a6;}}
}
B5144be:L5144be:{c.instructions+=11;NFSU2_TR(0x5144be);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B5144c0:{NFSU2_TR(0x5144c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5144c6:{NFSU2_TR(0x5144c6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5144c7:{NFSU2_TR(0x5144c7);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B5144c9:{NFSU2_TR(0x5144c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5144cb:{NFSU2_TR(0x5144cb);
__builtin_memmove((R+8),gp(0x838418),4);
}
B5144d1:{NFSU2_TR(0x5144d1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5144d4:{NFSU2_TR(0x5144d4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5144d6:{NFSU2_TR(0x5144d6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5144d8:{NFSU2_TR(0x5144d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5144dc:{NFSU2_TR(0x5144dc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5144f7;}}
}
B5144de:L5144de:{c.instructions+=2;NFSU2_TR(0x5144de);
__builtin_memmove((R+24),gp(0x83841c),4);
}
B5144e4:{NFSU2_TR(0x5144e4);
__builtin_memmove((R+4),(R+24),4);
}
B5144e6:L5144e6:{c.instructions+=3;NFSU2_TR(0x5144e6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+28,u32(s32(s8(r1(U+0)))));
}
B5144e9:{NFSU2_TR(0x5144e9);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5144ed:{NFSU2_TR(0x5144ed);
if(r1(R+518)){{goto L51450b;}}
}
B5144ef:L5144ef:{c.instructions+=4;NFSU2_TR(0x5144ef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5144f0:{NFSU2_TR(0x5144f0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x50ull))));
}
B5144f3:{NFSU2_TR(0x5144f3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5144f5:{NFSU2_TR(0x5144f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5144e6u);}goto L5144e6;}}
}
B5144f7:L5144f7:{c.instructions+=9;NFSU2_TR(0x5144f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5144f8:{NFSU2_TR(0x5144f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5144fa:{NFSU2_TR(0x5144fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5144fb:{NFSU2_TR(0x5144fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B514501:{NFSU2_TR(0x514501);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B514502:{NFSU2_TR(0x514502);
__builtin_memmove((R+0),(R+12),4);
}
B514504:{NFSU2_TR(0x514504);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B514505:{NFSU2_TR(0x514505);
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
B514508:{NFSU2_TR(0x514508);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51450b:L51450b:{c.instructions+=11;NFSU2_TR(0x51450b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B51450e:{NFSU2_TR(0x51450e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B514511:{NFSU2_TR(0x514511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514512:{NFSU2_TR(0x514512);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B514514:{NFSU2_TR(0x514514);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514515:{NFSU2_TR(0x514515);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51451b:{NFSU2_TR(0x51451b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51451c:{NFSU2_TR(0x51451c);
__builtin_memmove((R+0),(R+12),4);
}
B51451e:{NFSU2_TR(0x51451e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51451f:{NFSU2_TR(0x51451f);
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
B514522:{NFSU2_TR(0x514522);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514530:L514530:{c.instructions+=10;NFSU2_TR(0x514530);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514534:{NFSU2_TR(0x514534);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514535:{NFSU2_TR(0x514535);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514536:{NFSU2_TR(0x514536);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B51453a:{NFSU2_TR(0x51453a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51453b:{NFSU2_TR(0x51453b);
__builtin_memmove((R+12),(R+4),4);
}
B51453d:{NFSU2_TR(0x51453d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51453e:{NFSU2_TR(0x51453e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x72d8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514544:{NFSU2_TR(0x514544);
w4(R+28,u32(0x8ull));
}
B514549:{NFSU2_TR(0x514549);
__builtin_memmove((R+16),(R+16),4);
}
B514550:L514550:{c.instructions+=4;NFSU2_TR(0x514550);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514551:{NFSU2_TR(0x514551);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514552:{NFSU2_TR(0x514552);
__builtin_memmove((R+4),(R+24),4);
}
B514554:{NFSU2_TR(0x514554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514559ull));
TAIL_STATIC(0x500fa0u,500);
}
B514559:L514559:{c.instructions+=4;NFSU2_TR(0x514559);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x101ull))));
}
B51455f:{NFSU2_TR(0x51455f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x104ull))));
}
B514565:{NFSU2_TR(0x514565);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B514566:{NFSU2_TR(0x514566);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514550u);}goto L514550;}}
}
B514568:L514568:{c.instructions+=32;NFSU2_TR(0x514568);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51456e:{NFSU2_TR(0x51456e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B514570:{NFSU2_TR(0x514570);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8868ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B514576:{NFSU2_TR(0x514576);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B514579:{NFSU2_TR(0x514579);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x872cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51457f:{NFSU2_TR(0x51457f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B514582:{NFSU2_TR(0x514582);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B514585:{NFSU2_TR(0x514585);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x873eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B51458b:{NFSU2_TR(0x51458b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51458c:{NFSU2_TR(0x51458c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51458f:{NFSU2_TR(0x51458f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x873full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B514595:{NFSU2_TR(0x514595);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B514598:{NFSU2_TR(0x514598);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51459b:{NFSU2_TR(0x51459b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5145a1:{NFSU2_TR(0x5145a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7134ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5145a7:{NFSU2_TR(0x5145a7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5145a8:{NFSU2_TR(0x5145a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5145ab:{NFSU2_TR(0x5145ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7afcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5145b1:{NFSU2_TR(0x5145b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8868ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5145b7:{NFSU2_TR(0x5145b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x872cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5145bd:{NFSU2_TR(0x5145bd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5145be:{NFSU2_TR(0x5145be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5145c1:{NFSU2_TR(0x5145c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x873eull))));
__builtin_memmove((R+4),(U+0),4);
}
B5145c7:{NFSU2_TR(0x5145c7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5145ca:{NFSU2_TR(0x5145ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x873full))));
__builtin_memmove((R+4),(U+0),4);
}
B5145d0:{NFSU2_TR(0x5145d0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5145d3:{NFSU2_TR(0x5145d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7af8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5145d9:{NFSU2_TR(0x5145d9);
__builtin_memmove((R+28),(R+0),4);
}
B5145db:{NFSU2_TR(0x5145db);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7afcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5145e1:{NFSU2_TR(0x5145e1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc00ull))));
}
B5145e6:{NFSU2_TR(0x5145e6);
w4(R+4,u32(0x300ull));
}
B5145eb:{NFSU2_TR(0x5145eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7b00ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5145f1:L5145f1:{c.instructions+=1;NFSU2_TR(0x5145f1);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5145f3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5145f1u);}goto L5145f1;}
}
B5145f3:L5145f3:{c.instructions+=41;NFSU2_TR(0x5145f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x873cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5145f9:{NFSU2_TR(0x5145f9);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B5145fb:{NFSU2_TR(0x5145fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x873dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B514601:{NFSU2_TR(0x514601);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B514604:{NFSU2_TR(0x514604);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8740ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51460a:{NFSU2_TR(0x51460a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51460b:{NFSU2_TR(0x51460b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51460e:{NFSU2_TR(0x51460e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8744ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B514614:{NFSU2_TR(0x514614);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x873cull))));
__builtin_memmove((R+4),(U+0),4);
}
B51461a:{NFSU2_TR(0x51461a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51461b:{NFSU2_TR(0x51461b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51461e:{NFSU2_TR(0x51461e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x873dull))));
__builtin_memmove((R+4),(U+0),4);
}
B514624:{NFSU2_TR(0x514624);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8740ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51462a:{NFSU2_TR(0x51462a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B51462d:{NFSU2_TR(0x51462d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8744ull))));
__builtin_memmove((R+4),(U+0),4);
}
B514633:{NFSU2_TR(0x514633);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B514634:{NFSU2_TR(0x514634);
__builtin_memmove((R+8),(R+0),4);
}
B514636:{NFSU2_TR(0x514636);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8750ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51463c:{NFSU2_TR(0x51463c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B51463e:{NFSU2_TR(0x51463e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B514640:{NFSU2_TR(0x514640);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B514643:{NFSU2_TR(0x514643);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B514646:{NFSU2_TR(0x514646);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B514649:{NFSU2_TR(0x514649);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51464c:{NFSU2_TR(0x51464c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51464f:{NFSU2_TR(0x51464f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B514652:{NFSU2_TR(0x514652);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8760ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B514659:{NFSU2_TR(0x514659);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B51465d:{NFSU2_TR(0x51465d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8764ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B514663:{NFSU2_TR(0x514663);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B514666:{NFSU2_TR(0x514666);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8760ull))));
__builtin_memmove((R+8),(U+0),4);
}
B51466c:{NFSU2_TR(0x51466c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B51466f:{NFSU2_TR(0x51466f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8764ull))));
__builtin_memmove((R+8),(U+0),4);
}
B514675:{NFSU2_TR(0x514675);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B514677:{NFSU2_TR(0x514677);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B51467a:{NFSU2_TR(0x51467a);
__builtin_memmove((R+28),(R+0),4);
}
B51467c:{NFSU2_TR(0x51467c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B514680:{NFSU2_TR(0x514680);
w4(R+4,u32(0x40ull));
}
B514685:{NFSU2_TR(0x514685);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8768ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51468b:{NFSU2_TR(0x51468b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51468c:{NFSU2_TR(0x51468c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
}
B514691:L514691:{c.instructions+=1;NFSU2_TR(0x514691);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L514693;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514691u);}goto L514691;}
}
B514693:L514693:{c.instructions+=5;NFSU2_TR(0x514693);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0xd30ull))));
}
B514699:{NFSU2_TR(0x514699);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51469a:{NFSU2_TR(0x51469a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5d20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5146a0:{NFSU2_TR(0x5146a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5146a4:{NFSU2_TR(0x5146a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5146a9ull));
TAIL_STATIC(0x5014f0u,501);
}
B5146a9:L5146a9:{c.instructions+=14;NFSU2_TR(0x5146a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8869ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5146af:{NFSU2_TR(0x5146af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5146b1:{NFSU2_TR(0x5146b1);
__builtin_memmove((R+8),(R+0),4);
}
B5146b3:{NFSU2_TR(0x5146b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5146b5:{NFSU2_TR(0x5146b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5146b8:{NFSU2_TR(0x5146b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5146bb:{NFSU2_TR(0x5146bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5146be:{NFSU2_TR(0x5146be);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5146c1:{NFSU2_TR(0x5146c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5146c4:{NFSU2_TR(0x5146c4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5146c7:{NFSU2_TR(0x5146c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5146ca:{NFSU2_TR(0x5146ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x887cull))));
__builtin_memmove((R+24),(U+0),4);
}
B5146d0:{NFSU2_TR(0x5146d0);
__builtin_memmove((R+28),(R+0),4);
}
B5146d2:{NFSU2_TR(0x5146d2);
w4(R+4,u32(0x64ull));
}
B5146d7:L5146d7:{c.instructions+=1;NFSU2_TR(0x5146d7);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5146d9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5146d7u);}goto L5146d7;}
}
B5146d9:L5146d9:{c.instructions+=5;NFSU2_TR(0x5146d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8738ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5146df:{NFSU2_TR(0x5146df);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x190ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5146e5:{NFSU2_TR(0x5146e5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5146e7:{NFSU2_TR(0x5146e7);
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
B5146e9:{NFSU2_TR(0x5146e9);
if(r1(R+518)){{goto L5146ee;}}
}
B5146eb:L5146eb:{c.instructions+=1;NFSU2_TR(0x5146eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5146ee:L5146ee:{c.instructions+=7;NFSU2_TR(0x5146ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5146ef:{NFSU2_TR(0x5146ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5146f0:{NFSU2_TR(0x5146f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5146f1:{NFSU2_TR(0x5146f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5146f3:{NFSU2_TR(0x5146f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5146f6:{NFSU2_TR(0x5146f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5146f7:{NFSU2_TR(0x5146f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514700:L514700:{c.instructions+=3;NFSU2_TR(0x514700);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514701:{NFSU2_TR(0x514701);
__builtin_memmove((R+24),(R+4),4);
}
B514703:{NFSU2_TR(0x514703);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514708ull));
{goto L514720;}
}
B514708:L514708:{c.instructions+=2;NFSU2_TR(0x514708);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B51470d:{NFSU2_TR(0x51470d);
if(r1(R+518)){{goto L514718;}}
}
B51470f:L51470f:{c.instructions+=2;NFSU2_TR(0x51470f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514710:{NFSU2_TR(0x514710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514715ull));
TAIL_STATIC(0x575630u,575);
}
B514715:L514715:{c.instructions+=1;NFSU2_TR(0x514715);
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
B514718:L514718:{c.instructions+=3;NFSU2_TR(0x514718);
__builtin_memmove((R+0),(R+24),4);
}
B51471a:{NFSU2_TR(0x51471a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51471b:{NFSU2_TR(0x51471b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514720:L514720:{c.instructions+=14;NFSU2_TR(0x514720);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514722:{NFSU2_TR(0x514722);
u8 U[4];
w4(U+0,u32(0x777028ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514727:{NFSU2_TR(0x514727);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51472d:{NFSU2_TR(0x51472d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51472e:{NFSU2_TR(0x51472e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B514735:{NFSU2_TR(0x514735);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514736:{NFSU2_TR(0x514736);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514737:{NFSU2_TR(0x514737);
__builtin_memmove((R+24),(R+4),4);
}
B514739:{NFSU2_TR(0x514739);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51473d:{NFSU2_TR(0x51473d);
u8 U[4];
w4(U+0,u32(0x79b018ull));
s4(u32(r4(R+24)),r4(U+0));
}
B514743:{NFSU2_TR(0x514743);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514746:{NFSU2_TR(0x514746);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514747:{NFSU2_TR(0x514747);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51474f:{NFSU2_TR(0x51474f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514754ull));
TAIL_STATIC(0x575630u,575);
}
B514754:L514754:{c.instructions+=4;NFSU2_TR(0x514754);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B514757:{NFSU2_TR(0x514757);
__builtin_memmove((R+4),(R+24),4);
}
B514759:{NFSU2_TR(0x514759);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B514761:{NFSU2_TR(0x514761);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514766ull));
TAIL_STATIC(0x505350u,505);
}
B514766:L514766:{c.instructions+=5;NFSU2_TR(0x514766);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51476a:{NFSU2_TR(0x51476a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51476b:{NFSU2_TR(0x51476b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B514772:{NFSU2_TR(0x514772);
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
B514775:{NFSU2_TR(0x514775);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514780:L514780:{c.instructions+=5;NFSU2_TR(0x514780);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514784:{NFSU2_TR(0x514784);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B514786:{NFSU2_TR(0x514786);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514787:{NFSU2_TR(0x514787);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51478a:{NFSU2_TR(0x51478a);
if(r1(R+518)){{goto L5147c7;}}
}
B51478c:L51478c:{c.instructions+=2;NFSU2_TR(0x51478c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51478e:{NFSU2_TR(0x51478e);
if(r1(R+518)){{goto L5147a5;}}
}
B514790:L514790:{c.instructions+=4;NFSU2_TR(0x514790);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B514793:{NFSU2_TR(0x514793);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B514795:{NFSU2_TR(0x514795);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B514798:{NFSU2_TR(0x514798);
if(r1(R+518)){{goto L51479d;}}
}
B51479a:L51479a:{c.instructions+=1;NFSU2_TR(0x51479a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51479d:L51479d:{c.instructions+=3;NFSU2_TR(0x51479d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5147a0:{NFSU2_TR(0x5147a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5147a3:{NFSU2_TR(0x5147a3);
{goto L5147bc;}
}
B5147a5:L5147a5:{c.instructions+=4;NFSU2_TR(0x5147a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5147a8:{NFSU2_TR(0x5147a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5147aa:{NFSU2_TR(0x5147aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5147ad:{NFSU2_TR(0x5147ad);
if(r1(R+518)){{goto L5147b2;}}
}
B5147af:L5147af:{c.instructions+=1;NFSU2_TR(0x5147af);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5147b2:L5147b2:{c.instructions+=2;NFSU2_TR(0x5147b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5147b9:{NFSU2_TR(0x5147b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5147bc:L5147bc:{c.instructions+=2;NFSU2_TR(0x5147bc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5147bf:{NFSU2_TR(0x5147bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5147c4;}}
}
B5147c1:L5147c1:{c.instructions+=1;NFSU2_TR(0x5147c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5147c4:L5147c4:{c.instructions+=1;NFSU2_TR(0x5147c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5147c7:L5147c7:{c.instructions+=4;NFSU2_TR(0x5147c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5147ca:{NFSU2_TR(0x5147ca);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5147cc:{NFSU2_TR(0x5147cc);
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
B5147ce:{NFSU2_TR(0x5147ce);
if(r1(R+518)){{goto L5147df;}}
}
B5147d0:L5147d0:{c.instructions+=6;NFSU2_TR(0x5147d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5147d3:{NFSU2_TR(0x5147d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5147d6:{NFSU2_TR(0x5147d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5147d9:{NFSU2_TR(0x5147d9);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5147db:{NFSU2_TR(0x5147db);
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
B5147dd:{NFSU2_TR(0x5147dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5147d0u);}goto L5147d0;}}
}
B5147df:L5147df:{c.instructions+=2;NFSU2_TR(0x5147df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5147e0:{NFSU2_TR(0x5147e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5147f0:L5147f0:{c.instructions+=4;NFSU2_TR(0x5147f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5147f3:{NFSU2_TR(0x5147f3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5147f5:{NFSU2_TR(0x5147f5);
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
B5147f7:{NFSU2_TR(0x5147f7);
if(r1(R+518)){{goto L51480c;}}
}
B5147f9:L5147f9:{c.instructions+=2;NFSU2_TR(0x5147f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5147fd:{NFSU2_TR(0x5147fd);
__builtin_memmove((R+4),(R+4),4);
}
B514800:L514800:{c.instructions+=2;NFSU2_TR(0x514800);
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
B514802:{NFSU2_TR(0x514802);
if(r1(R+518)){{goto L51480c;}}
}
B514804:L514804:{c.instructions+=4;NFSU2_TR(0x514804);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514807:{NFSU2_TR(0x514807);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B514808:{NFSU2_TR(0x514808);
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
B51480a:{NFSU2_TR(0x51480a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514800u);}goto L514800;}}
}
B51480c:L51480c:{c.instructions+=1;NFSU2_TR(0x51480c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514810:L514810:{c.instructions+=2;NFSU2_TR(0x514810);
u8 U[14];
__builtin_memmove((U+6),gp(0x8654a4),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B514817:{NFSU2_TR(0x514817);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514850;}}
}
B514819:L514819:{c.instructions+=3;NFSU2_TR(0x514819);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B51481e:{NFSU2_TR(0x51481e);
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
B514820:{NFSU2_TR(0x514820);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514850;}}
}
B514822:L514822:{c.instructions+=3;NFSU2_TR(0x514822);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B514825:{NFSU2_TR(0x514825);
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
B514827:{NFSU2_TR(0x514827);
if(r1(R+518)){{goto L514850;}}
}
B514829:L514829:{c.instructions+=3;NFSU2_TR(0x514829);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B51482c:{NFSU2_TR(0x51482c);
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
B51482e:{NFSU2_TR(0x51482e);
if(r1(R+518)){{goto L514850;}}
}
B514830:L514830:{c.instructions+=7;NFSU2_TR(0x514830);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B514833:{NFSU2_TR(0x514833);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B514839:{NFSU2_TR(0x514839);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B51483c:{NFSU2_TR(0x51483c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B514842:{NFSU2_TR(0x514842);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B514844:{NFSU2_TR(0x514844);
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
B514847:{NFSU2_TR(0x514847);
if(r1(R+514)){{goto L514850;}}
}
B514849:L514849:{c.instructions+=1;NFSU2_TR(0x514849);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B514850:L514850:{c.instructions+=1;NFSU2_TR(0x514850);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514860:L514860:{c.instructions+=8;NFSU2_TR(0x514860);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514861:{NFSU2_TR(0x514861);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514862:{NFSU2_TR(0x514862);
__builtin_memmove((R+24),gp(0x838408),4);
}
B514868:{NFSU2_TR(0x514868);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51486a:{NFSU2_TR(0x51486a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51486c:{NFSU2_TR(0x51486c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51486e:{NFSU2_TR(0x51486e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51486f:{NFSU2_TR(0x51486f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L51488c;}}
}
B514871:L514871:{c.instructions+=4;NFSU2_TR(0x514871);
__builtin_memmove((R+12),gp(0x83840c),4);
}
B514877:{NFSU2_TR(0x514877);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51487a:{NFSU2_TR(0x51487a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51487d:{NFSU2_TR(0x51487d);
__builtin_memmove((R+4),(R+4),4);
}
B514880:L514880:{c.instructions+=2;NFSU2_TR(0x514880);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B514882:{NFSU2_TR(0x514882);
if(r1(R+518)){{goto L5148a2;}}
}
B514884:L514884:{c.instructions+=4;NFSU2_TR(0x514884);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B514885:{NFSU2_TR(0x514885);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B514888:{NFSU2_TR(0x514888);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B51488a:{NFSU2_TR(0x51488a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514880u);}goto L514880;}}
}
B51488c:L51488c:{c.instructions+=1;NFSU2_TR(0x51488c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51488e:L51488e:{c.instructions+=7;NFSU2_TR(0x51488e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B514892:{NFSU2_TR(0x514892);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514893:{NFSU2_TR(0x514893);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514894:{NFSU2_TR(0x514894);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B514895:{NFSU2_TR(0x514895);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B514898:{NFSU2_TR(0x514898);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B514899:{NFSU2_TR(0x514899);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5148c3;}}
}
B51489b:L51489b:{c.instructions+=1;NFSU2_TR(0x51489b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5148f4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5148a2:L5148a2:{c.instructions+=3;NFSU2_TR(0x5148a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5148a5:{NFSU2_TR(0x5148a5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B5148a7:{NFSU2_TR(0x5148a7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51488eu);}goto L51488e;}
}
B5148a9:L5148a9:{c.instructions+=2;NFSU2_TR(0x5148a9);
w4(R+8,u32(0x8ff3f225ull));
}
B5148ae:{NFSU2_TR(0x5148ae);
{goto L5148c3;}
}
B5148b0:L5148b0:{c.instructions+=2;NFSU2_TR(0x5148b0);
w4(R+8,u32(0x1defb577ull));
}
B5148b5:{NFSU2_TR(0x5148b5);
{goto L5148c3;}
}
B5148b7:L5148b7:{c.instructions+=2;NFSU2_TR(0x5148b7);
w4(R+8,u32(0x74b2a894ull));
}
B5148bc:{NFSU2_TR(0x5148bc);
{goto L5148c3;}
}
B5148be:L5148be:{c.instructions+=1;NFSU2_TR(0x5148be);
w4(R+8,u32(0xa747ea86ull));
}
B5148c3:L5148c3:{c.instructions+=1;NFSU2_TR(0x5148c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5148c8ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5148c8:L5148c8:{c.instructions+=2;NFSU2_TR(0x5148c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5148ca:{NFSU2_TR(0x5148ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5148d6;}}
}
B5148cc:L5148cc:{c.instructions+=2;NFSU2_TR(0x5148cc);
w4(R+8,u32(0xc01a6f63ull));
}
B5148d1:{NFSU2_TR(0x5148d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5148d6ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5148d6:L5148d6:{c.instructions+=7;NFSU2_TR(0x5148d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5148da:{NFSU2_TR(0x5148da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5148db:{NFSU2_TR(0x5148db);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5148df:{NFSU2_TR(0x5148df);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5148e4:{NFSU2_TR(0x5148e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5148e5:{NFSU2_TR(0x5148e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5148e6:{NFSU2_TR(0x5148e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5148ebull));
TAIL_STATIC(0x50c960u,50c);
}
B5148eb:L5148eb:{c.instructions+=2;NFSU2_TR(0x5148eb);
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
B5148ee:{NFSU2_TR(0x5148ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514910:L514910:{c.instructions+=8;NFSU2_TR(0x514910);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514911:{NFSU2_TR(0x514911);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514912:{NFSU2_TR(0x514912);
__builtin_memmove((R+24),gp(0x838408),4);
}
B514918:{NFSU2_TR(0x514918);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51491a:{NFSU2_TR(0x51491a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51491c:{NFSU2_TR(0x51491c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51491e:{NFSU2_TR(0x51491e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51491f:{NFSU2_TR(0x51491f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L51493c;}}
}
B514921:L514921:{c.instructions+=4;NFSU2_TR(0x514921);
__builtin_memmove((R+12),gp(0x83840c),4);
}
B514927:{NFSU2_TR(0x514927);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51492a:{NFSU2_TR(0x51492a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51492d:{NFSU2_TR(0x51492d);
__builtin_memmove((R+4),(R+4),4);
}
B514930:L514930:{c.instructions+=2;NFSU2_TR(0x514930);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B514932:{NFSU2_TR(0x514932);
if(r1(R+518)){{goto L514952;}}
}
B514934:L514934:{c.instructions+=4;NFSU2_TR(0x514934);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B514935:{NFSU2_TR(0x514935);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B514938:{NFSU2_TR(0x514938);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B51493a:{NFSU2_TR(0x51493a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514930u);}goto L514930;}}
}
B51493c:L51493c:{c.instructions+=1;NFSU2_TR(0x51493c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51493e:L51493e:{c.instructions+=7;NFSU2_TR(0x51493e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B514942:{NFSU2_TR(0x514942);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514943:{NFSU2_TR(0x514943);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514944:{NFSU2_TR(0x514944);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B514945:{NFSU2_TR(0x514945);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B514948:{NFSU2_TR(0x514948);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B514949:{NFSU2_TR(0x514949);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L514973;}}
}
B51494b:L51494b:{c.instructions+=1;NFSU2_TR(0x51494b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5149a4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B514952:L514952:{c.instructions+=3;NFSU2_TR(0x514952);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B514955:{NFSU2_TR(0x514955);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B514957:{NFSU2_TR(0x514957);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51493eu);}goto L51493e;}
}
B514959:L514959:{c.instructions+=2;NFSU2_TR(0x514959);
w4(R+8,u32(0x1e4cbc67ull));
}
B51495e:{NFSU2_TR(0x51495e);
{goto L514973;}
}
B514960:L514960:{c.instructions+=2;NFSU2_TR(0x514960);
w4(R+8,u32(0x99829679ull));
}
B514965:{NFSU2_TR(0x514965);
{goto L514973;}
}
B514967:L514967:{c.instructions+=2;NFSU2_TR(0x514967);
w4(R+8,u32(0x16549076ull));
}
B51496c:{NFSU2_TR(0x51496c);
{goto L514973;}
}
B51496e:L51496e:{c.instructions+=1;NFSU2_TR(0x51496e);
w4(R+8,u32(0xe0f2e528ull));
}
B514973:L514973:{c.instructions+=1;NFSU2_TR(0x514973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514978ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B514978:L514978:{c.instructions+=2;NFSU2_TR(0x514978);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51497a:{NFSU2_TR(0x51497a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514986;}}
}
B51497c:L51497c:{c.instructions+=2;NFSU2_TR(0x51497c);
w4(R+8,u32(0xc01a6f63ull));
}
B514981:{NFSU2_TR(0x514981);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514986ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B514986:L514986:{c.instructions+=7;NFSU2_TR(0x514986);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51498a:{NFSU2_TR(0x51498a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51498b:{NFSU2_TR(0x51498b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51498f:{NFSU2_TR(0x51498f);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514994:{NFSU2_TR(0x514994);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514995:{NFSU2_TR(0x514995);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514996:{NFSU2_TR(0x514996);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51499bull));
TAIL_STATIC(0x50c960u,50c);
}
B51499b:L51499b:{c.instructions+=2;NFSU2_TR(0x51499b);
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
B51499e:{NFSU2_TR(0x51499e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5149c0:L5149c0:{c.instructions+=7;NFSU2_TR(0x5149c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B5149c6:{NFSU2_TR(0x5149c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5149c7:{NFSU2_TR(0x5149c7);
__builtin_memmove((R+24),(R+4),4);
}
B5149c9:{NFSU2_TR(0x5149c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5149cc:{NFSU2_TR(0x5149cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5149ce:{NFSU2_TR(0x5149ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5149cf:{NFSU2_TR(0x5149cf);
if(r1(R+518)){{goto L514a37;}}
}
B5149d1:L5149d1:{c.instructions+=1;NFSU2_TR(0x5149d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5149d6ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5149d6:L5149d6:{c.instructions+=3;NFSU2_TR(0x5149d6);
__builtin_memmove((R+28),(R+0),4);
}
B5149d8:{NFSU2_TR(0x5149d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5149da:{NFSU2_TR(0x5149da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5149e8;}}
}
B5149dc:L5149dc:{c.instructions+=2;NFSU2_TR(0x5149dc);
w4(R+8,u32(0xc01a6f63ull));
}
B5149e1:{NFSU2_TR(0x5149e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5149e6ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5149e6:L5149e6:{c.instructions+=1;NFSU2_TR(0x5149e6);
__builtin_memmove((R+28),(R+0),4);
}
B5149e8:L5149e8:{c.instructions+=2;NFSU2_TR(0x5149e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5149eb:{NFSU2_TR(0x5149eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5149f0ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5149f0:L5149f0:{c.instructions+=2;NFSU2_TR(0x5149f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5149f2:{NFSU2_TR(0x5149f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5149fe;}}
}
B5149f4:L5149f4:{c.instructions+=2;NFSU2_TR(0x5149f4);
w4(R+8,u32(0xc01a6f63ull));
}
B5149f9:{NFSU2_TR(0x5149f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5149feull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5149fe:L5149fe:{c.instructions+=5;NFSU2_TR(0x5149fe);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514a03:{NFSU2_TR(0x514a03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514a04:{NFSU2_TR(0x514a04);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B514a08:{NFSU2_TR(0x514a08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514a09:{NFSU2_TR(0x514a09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514a0eull));
TAIL_STATIC(0x43dc00u,43d);
}
B514a0e:L514a0e:{c.instructions+=8;NFSU2_TR(0x514a0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B514a15:{NFSU2_TR(0x514a15);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514a1c:{NFSU2_TR(0x514a1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B514a20:{NFSU2_TR(0x514a20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514a21:{NFSU2_TR(0x514a21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514a22:{NFSU2_TR(0x514a22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514a23:{NFSU2_TR(0x514a23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514a24:{NFSU2_TR(0x514a24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514a29ull));
TAIL_STATIC(0x50c960u,50c);
}
B514a29:L514a29:{c.instructions+=5;NFSU2_TR(0x514a29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B514a2c:{NFSU2_TR(0x514a2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514a2d:{NFSU2_TR(0x514a2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514a2e:{NFSU2_TR(0x514a2e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B514a34:{NFSU2_TR(0x514a34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514a37:L514a37:{c.instructions+=6;NFSU2_TR(0x514a37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B514a39:{NFSU2_TR(0x514a39);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+28,u32(r2(U+0)));
}
B514a3c:{NFSU2_TR(0x514a3c);
__builtin_memmove((R+4),gp(0x838428),4);
}
B514a42:{NFSU2_TR(0x514a42);
u8 U[4];
w4(U+0,u32(0x79b044ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514a47:{NFSU2_TR(0x514a47);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B514a49:{NFSU2_TR(0x514a49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514a4eull));
TAIL_STATIC(0x43dbb0u,43d);
}
B514a4e:L514a4e:{c.instructions+=5;NFSU2_TR(0x514a4e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B514a4f:{NFSU2_TR(0x514a4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514a50:{NFSU2_TR(0x514a50);
u8 U[4];
w4(U+0,u32(0x79b044ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514a55:{NFSU2_TR(0x514a55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514a56:{NFSU2_TR(0x514a56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514a5bull));
TAIL_STATIC(0x43dc60u,43d);
}
B514a5b:L514a5b:{c.instructions+=3;NFSU2_TR(0x514a5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B514a5e:{NFSU2_TR(0x514a5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B514a60:{NFSU2_TR(0x514a60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514aa8;}}
}
B514a62:L514a62:{c.instructions+=2;NFSU2_TR(0x514a62);
u8 U[4];
w4(U+0,u32(0x79b028ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514a67:{NFSU2_TR(0x514a67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514a6cull));
TAIL_STATIC(0x50b990u,50b);
}
B514a6c:L514a6c:{c.instructions+=3;NFSU2_TR(0x514a6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B514a6f:{NFSU2_TR(0x514a6f);
__builtin_memmove((R+8),(R+0),4);
}
B514a71:{NFSU2_TR(0x514a71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514a76ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B514a76:L514a76:{c.instructions+=2;NFSU2_TR(0x514a76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B514a78:{NFSU2_TR(0x514a78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514a84;}}
}
B514a7a:L514a7a:{c.instructions+=2;NFSU2_TR(0x514a7a);
w4(R+8,u32(0xc01a6f63ull));
}
B514a7f:{NFSU2_TR(0x514a7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514a84ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B514a84:L514a84:{c.instructions+=6;NFSU2_TR(0x514a84);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B514a8b:{NFSU2_TR(0x514a8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514a8c:{NFSU2_TR(0x514a8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514a8d:{NFSU2_TR(0x514a8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514a94:{NFSU2_TR(0x514a94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514a95:{NFSU2_TR(0x514a95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514a9aull));
TAIL_STATIC(0x43dc00u,43d);
}
B514a9a:L514a9a:{c.instructions+=5;NFSU2_TR(0x514a9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B514a9d:{NFSU2_TR(0x514a9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514a9e:{NFSU2_TR(0x514a9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514a9f:{NFSU2_TR(0x514a9f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B514aa5:{NFSU2_TR(0x514aa5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514aa8:L514aa8:{c.instructions+=6;NFSU2_TR(0x514aa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B514aaa:{NFSU2_TR(0x514aaa);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(r2(U+0)));
}
B514aad:{NFSU2_TR(0x514aad);
w4(R+8,u32(u32(r4(R+8))+u32(m4(0x838428))));
}
B514ab3:{NFSU2_TR(0x514ab3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514ab4:{NFSU2_TR(0x514ab4);
u8 U[4];
w4(U+0,u32(0x79b01cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514ab9:{NFSU2_TR(0x514ab9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514abeull));
TAIL_STATIC(0x50b990u,50b);
}
B514abe:L514abe:{c.instructions+=3;NFSU2_TR(0x514abe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B514ac1:{NFSU2_TR(0x514ac1);
__builtin_memmove((R+8),(R+0),4);
}
B514ac3:{NFSU2_TR(0x514ac3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514ac8ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B514ac8:L514ac8:{c.instructions+=2;NFSU2_TR(0x514ac8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B514aca:{NFSU2_TR(0x514aca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514ad6;}}
}
B514acc:L514acc:{c.instructions+=2;NFSU2_TR(0x514acc);
w4(R+8,u32(0xc01a6f63ull));
}
B514ad1:{NFSU2_TR(0x514ad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514ad6ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B514ad6:L514ad6:{c.instructions+=6;NFSU2_TR(0x514ad6);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B514add:{NFSU2_TR(0x514add);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B514ae4:{NFSU2_TR(0x514ae4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514ae5:{NFSU2_TR(0x514ae5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514ae6:{NFSU2_TR(0x514ae6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514ae7:{NFSU2_TR(0x514ae7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514aecull));
TAIL_STATIC(0x43dc00u,43d);
}
B514aec:L514aec:{c.instructions+=5;NFSU2_TR(0x514aec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B514aef:{NFSU2_TR(0x514aef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514af0:{NFSU2_TR(0x514af0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514af1:{NFSU2_TR(0x514af1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B514af7:{NFSU2_TR(0x514af7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514b00:L514b00:{c.instructions+=7;NFSU2_TR(0x514b00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B514b06:{NFSU2_TR(0x514b06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514b07:{NFSU2_TR(0x514b07);
__builtin_memmove((R+24),(R+4),4);
}
B514b09:{NFSU2_TR(0x514b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B514b0c:{NFSU2_TR(0x514b0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B514b0e:{NFSU2_TR(0x514b0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514b0f:{NFSU2_TR(0x514b0f);
if(r1(R+518)){{goto L514b77;}}
}
B514b11:L514b11:{c.instructions+=1;NFSU2_TR(0x514b11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514b16ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B514b16:L514b16:{c.instructions+=3;NFSU2_TR(0x514b16);
__builtin_memmove((R+28),(R+0),4);
}
B514b18:{NFSU2_TR(0x514b18);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B514b1a:{NFSU2_TR(0x514b1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514b28;}}
}
B514b1c:L514b1c:{c.instructions+=2;NFSU2_TR(0x514b1c);
w4(R+8,u32(0xc01a6f63ull));
}
B514b21:{NFSU2_TR(0x514b21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514b26ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B514b26:L514b26:{c.instructions+=1;NFSU2_TR(0x514b26);
__builtin_memmove((R+28),(R+0),4);
}
B514b28:L514b28:{c.instructions+=2;NFSU2_TR(0x514b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B514b2b:{NFSU2_TR(0x514b2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514b30ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B514b30:L514b30:{c.instructions+=2;NFSU2_TR(0x514b30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B514b32:{NFSU2_TR(0x514b32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514b3e;}}
}
B514b34:L514b34:{c.instructions+=2;NFSU2_TR(0x514b34);
w4(R+8,u32(0xc01a6f63ull));
}
B514b39:{NFSU2_TR(0x514b39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514b3eull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B514b3e:L514b3e:{c.instructions+=5;NFSU2_TR(0x514b3e);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514b43:{NFSU2_TR(0x514b43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514b44:{NFSU2_TR(0x514b44);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B514b48:{NFSU2_TR(0x514b48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514b49:{NFSU2_TR(0x514b49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514b4eull));
TAIL_STATIC(0x43dc00u,43d);
}
B514b4e:L514b4e:{c.instructions+=8;NFSU2_TR(0x514b4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B514b55:{NFSU2_TR(0x514b55);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514b5c:{NFSU2_TR(0x514b5c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B514b60:{NFSU2_TR(0x514b60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514b61:{NFSU2_TR(0x514b61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514b62:{NFSU2_TR(0x514b62);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514b63:{NFSU2_TR(0x514b63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514b64:{NFSU2_TR(0x514b64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514b69ull));
TAIL_STATIC(0x50c960u,50c);
}
B514b69:L514b69:{c.instructions+=5;NFSU2_TR(0x514b69);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B514b6c:{NFSU2_TR(0x514b6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514b6d:{NFSU2_TR(0x514b6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514b6e:{NFSU2_TR(0x514b6e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B514b74:{NFSU2_TR(0x514b74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514b77:L514b77:{c.instructions+=6;NFSU2_TR(0x514b77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B514b79:{NFSU2_TR(0x514b79);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+28,u32(r2(U+0)));
}
B514b7c:{NFSU2_TR(0x514b7c);
__builtin_memmove((R+4),gp(0x838428),4);
}
B514b82:{NFSU2_TR(0x514b82);
u8 U[4];
w4(U+0,u32(0x79b044ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514b87:{NFSU2_TR(0x514b87);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B514b89:{NFSU2_TR(0x514b89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514b8eull));
TAIL_STATIC(0x43dbb0u,43d);
}
B514b8e:L514b8e:{c.instructions+=5;NFSU2_TR(0x514b8e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B514b8f:{NFSU2_TR(0x514b8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514b90:{NFSU2_TR(0x514b90);
u8 U[4];
w4(U+0,u32(0x79b044ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514b95:{NFSU2_TR(0x514b95);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514b96:{NFSU2_TR(0x514b96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514b9bull));
TAIL_STATIC(0x43dc60u,43d);
}
B514b9b:L514b9b:{c.instructions+=3;NFSU2_TR(0x514b9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B514b9e:{NFSU2_TR(0x514b9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B514ba0:{NFSU2_TR(0x514ba0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514ba9;}}
}
B514ba2:L514ba2:{c.instructions+=2;NFSU2_TR(0x514ba2);
u8 U[4];
w4(U+0,u32(0x79b080ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514ba7:{NFSU2_TR(0x514ba7);
{goto L514bd9;}
}
B514ba9:L514ba9:{c.instructions+=6;NFSU2_TR(0x514ba9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B514bab:{NFSU2_TR(0x514bab);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+28,u32(r2(U+0)));
}
B514bae:{NFSU2_TR(0x514bae);
__builtin_memmove((R+4),gp(0x838428),4);
}
B514bb4:{NFSU2_TR(0x514bb4);
u8 U[4];
w4(U+0,u32(0x79b06cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514bb9:{NFSU2_TR(0x514bb9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B514bbb:{NFSU2_TR(0x514bbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514bc0ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B514bc0:L514bc0:{c.instructions+=5;NFSU2_TR(0x514bc0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B514bc1:{NFSU2_TR(0x514bc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514bc2:{NFSU2_TR(0x514bc2);
u8 U[4];
w4(U+0,u32(0x79b06cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514bc7:{NFSU2_TR(0x514bc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514bc8:{NFSU2_TR(0x514bc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514bcdull));
TAIL_STATIC(0x43dc60u,43d);
}
B514bcd:L514bcd:{c.instructions+=3;NFSU2_TR(0x514bcd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B514bd0:{NFSU2_TR(0x514bd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B514bd2:{NFSU2_TR(0x514bd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514c1a;}}
}
B514bd4:L514bd4:{c.instructions+=1;NFSU2_TR(0x514bd4);
u8 U[4];
w4(U+0,u32(0x79b054ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514bd9:L514bd9:{c.instructions+=1;NFSU2_TR(0x514bd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514bdeull));
TAIL_STATIC(0x50b990u,50b);
}
B514bde:L514bde:{c.instructions+=3;NFSU2_TR(0x514bde);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B514be1:{NFSU2_TR(0x514be1);
__builtin_memmove((R+8),(R+0),4);
}
B514be3:{NFSU2_TR(0x514be3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514be8ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B514be8:L514be8:{c.instructions+=2;NFSU2_TR(0x514be8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B514bea:{NFSU2_TR(0x514bea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514bf6;}}
}
B514bec:L514bec:{c.instructions+=2;NFSU2_TR(0x514bec);
w4(R+8,u32(0xc01a6f63ull));
}
B514bf1:{NFSU2_TR(0x514bf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514bf6ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B514bf6:L514bf6:{c.instructions+=6;NFSU2_TR(0x514bf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B514bfd:{NFSU2_TR(0x514bfd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514bfe:{NFSU2_TR(0x514bfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514bff:{NFSU2_TR(0x514bff);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514c06:{NFSU2_TR(0x514c06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514c07:{NFSU2_TR(0x514c07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514c0cull));
TAIL_STATIC(0x43dc00u,43d);
}
B514c0c:L514c0c:{c.instructions+=5;NFSU2_TR(0x514c0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B514c0f:{NFSU2_TR(0x514c0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514c10:{NFSU2_TR(0x514c10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514c11:{NFSU2_TR(0x514c11);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B514c17:{NFSU2_TR(0x514c17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514c1a:L514c1a:{c.instructions+=6;NFSU2_TR(0x514c1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B514c1c:{NFSU2_TR(0x514c1c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(r2(U+0)));
}
B514c1f:{NFSU2_TR(0x514c1f);
w4(R+8,u32(u32(r4(R+8))+u32(m4(0x838428))));
}
B514c25:{NFSU2_TR(0x514c25);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514c26:{NFSU2_TR(0x514c26);
u8 U[4];
w4(U+0,u32(0x79afc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514c2b:{NFSU2_TR(0x514c2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514c30ull));
TAIL_STATIC(0x50b990u,50b);
}
B514c30:L514c30:{c.instructions+=3;NFSU2_TR(0x514c30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B514c33:{NFSU2_TR(0x514c33);
__builtin_memmove((R+8),(R+0),4);
}
B514c35:{NFSU2_TR(0x514c35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514c3aull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B514c3a:L514c3a:{c.instructions+=2;NFSU2_TR(0x514c3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B514c3c:{NFSU2_TR(0x514c3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514c48;}}
}
B514c3e:L514c3e:{c.instructions+=2;NFSU2_TR(0x514c3e);
w4(R+8,u32(0xc01a6f63ull));
}
B514c43:{NFSU2_TR(0x514c43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514c48ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B514c48:L514c48:{c.instructions+=6;NFSU2_TR(0x514c48);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B514c4f:{NFSU2_TR(0x514c4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B514c56:{NFSU2_TR(0x514c56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514c57:{NFSU2_TR(0x514c57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514c58:{NFSU2_TR(0x514c58);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514c59:{NFSU2_TR(0x514c59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514c5eull));
TAIL_STATIC(0x43dc00u,43d);
}
B514c5e:L514c5e:{c.instructions+=5;NFSU2_TR(0x514c5e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B514c61:{NFSU2_TR(0x514c61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514c62:{NFSU2_TR(0x514c62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514c63:{NFSU2_TR(0x514c63);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B514c69:{NFSU2_TR(0x514c69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514c70:L514c70:{c.instructions+=4;NFSU2_TR(0x514c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514c76:{NFSU2_TR(0x514c76);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B514c78:{NFSU2_TR(0x514c78);
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
B514c7a:{NFSU2_TR(0x514c7a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L514cac;}}
}
B514c7c:L514c7c:{c.instructions+=5;NFSU2_TR(0x514c7c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514c7d:{NFSU2_TR(0x514c7d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514c7e:{NFSU2_TR(0x514c7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514c7f:{NFSU2_TR(0x514c7f);
__builtin_memmove((R+24),(R+4),4);
}
B514c81:{NFSU2_TR(0x514c81);
w1(R+12,u8(0x1ull));
}
B514c83:L514c83:{c.instructions+=2;NFSU2_TR(0x514c83);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B514c85:{NFSU2_TR(0x514c85);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L514c8f;}}
}
B514c87:L514c87:{c.instructions+=2;NFSU2_TR(0x514c87);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B514c89:{NFSU2_TR(0x514c89);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L514c8f;}}
}
B514c8b:L514c8b:{c.instructions+=2;NFSU2_TR(0x514c8b);
__builtin_memmove((R+0),(R+24),4);
}
B514c8d:{NFSU2_TR(0x514c8d);
{goto L514c91;}
}
B514c8f:L514c8f:{c.instructions+=1;NFSU2_TR(0x514c8f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B514c91:L514c91:{c.instructions+=3;NFSU2_TR(0x514c91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B514c93:{NFSU2_TR(0x514c93);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B514c96:{NFSU2_TR(0x514c96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514c9b;}}
}
B514c98:L514c98:{c.instructions+=1;NFSU2_TR(0x514c98);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B514c9b:L514c9b:{c.instructions+=5;NFSU2_TR(0x514c9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514ca1:{NFSU2_TR(0x514ca1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B514ca2:{NFSU2_TR(0x514ca2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B514ca5:{NFSU2_TR(0x514ca5);
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
B514ca7:{NFSU2_TR(0x514ca7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514c83u);}goto L514c83;}}
}
B514ca9:L514ca9:{c.instructions+=3;NFSU2_TR(0x514ca9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514caa:{NFSU2_TR(0x514caa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514cab:{NFSU2_TR(0x514cab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B514cac:L514cac:{c.instructions+=1;NFSU2_TR(0x514cac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514cb0:L514cb0:{c.instructions+=6;NFSU2_TR(0x514cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B514cb6:{NFSU2_TR(0x514cb6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514cb7:{NFSU2_TR(0x514cb7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B514cb9:{NFSU2_TR(0x514cb9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B514cbb:{NFSU2_TR(0x514cbb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514cbc:{NFSU2_TR(0x514cbc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L514cde;}}
}
B514cbe:L514cbe:{c.instructions+=2;NFSU2_TR(0x514cbe);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B514cc2:{NFSU2_TR(0x514cc2);
__builtin_memmove((R+24),(R+4),4);
}
B514cc4:L514cc4:{c.instructions+=2;NFSU2_TR(0x514cc4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B514cc6:{NFSU2_TR(0x514cc6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L514cd0;}}
}
B514cc8:L514cc8:{c.instructions+=2;NFSU2_TR(0x514cc8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B514cca:{NFSU2_TR(0x514cca);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L514cd0;}}
}
B514ccc:L514ccc:{c.instructions+=2;NFSU2_TR(0x514ccc);
__builtin_memmove((R+4),(R+24),4);
}
B514cce:{NFSU2_TR(0x514cce);
{goto L514cd2;}
}
B514cd0:L514cd0:{c.instructions+=1;NFSU2_TR(0x514cd0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B514cd2:L514cd2:{c.instructions+=2;NFSU2_TR(0x514cd2);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B514cd4:{NFSU2_TR(0x514cd4);
if(r1(R+518)){{goto L514ce5;}}
}
B514cd6:L514cd6:{c.instructions+=4;NFSU2_TR(0x514cd6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B514cd7:{NFSU2_TR(0x514cd7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B514cda:{NFSU2_TR(0x514cda);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B514cdc:{NFSU2_TR(0x514cdc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514cc4u);}goto L514cc4;}}
}
B514cde:L514cde:{c.instructions+=4;NFSU2_TR(0x514cde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514cdf:{NFSU2_TR(0x514cdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514ce0:{NFSU2_TR(0x514ce0);
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
B514ce2:{NFSU2_TR(0x514ce2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514ce5:L514ce5:{c.instructions+=4;NFSU2_TR(0x514ce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514ce6:{NFSU2_TR(0x514ce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514ce7:{NFSU2_TR(0x514ce7);
w1(R+0,u8(0x1ull));
}
B514ce9:{NFSU2_TR(0x514ce9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514cf0:L514cf0:{c.instructions+=5;NFSU2_TR(0x514cf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514cf1:{NFSU2_TR(0x514cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B514cf7:{NFSU2_TR(0x514cf7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B514cf9:{NFSU2_TR(0x514cf9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B514cfb:{NFSU2_TR(0x514cfb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L514d22;}}
}
B514cfd:L514cfd:{c.instructions+=1;NFSU2_TR(0x514cfd);
__builtin_memmove((R+4),(R+4),4);
}
B514d00:L514d00:{c.instructions+=2;NFSU2_TR(0x514d00);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B514d02:{NFSU2_TR(0x514d02);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L514d0c;}}
}
B514d04:L514d04:{c.instructions+=2;NFSU2_TR(0x514d04);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B514d06:{NFSU2_TR(0x514d06);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L514d0c;}}
}
B514d08:L514d08:{c.instructions+=2;NFSU2_TR(0x514d08);
__builtin_memmove((R+0),(R+4),4);
}
B514d0a:{NFSU2_TR(0x514d0a);
{goto L514d0e;}
}
B514d0c:L514d0c:{c.instructions+=1;NFSU2_TR(0x514d0c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B514d0e:L514d0e:{c.instructions+=2;NFSU2_TR(0x514d0e);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B514d12:{NFSU2_TR(0x514d12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514d1a;}}
}
B514d14:L514d14:{c.instructions+=2;NFSU2_TR(0x514d14);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B514d18:{NFSU2_TR(0x514d18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514d24;}}
}
B514d1a:L514d1a:{c.instructions+=4;NFSU2_TR(0x514d1a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B514d1b:{NFSU2_TR(0x514d1b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B514d1e:{NFSU2_TR(0x514d1e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B514d20:{NFSU2_TR(0x514d20);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514d00u);}goto L514d00;}}
}
B514d22:L514d22:{c.instructions+=1;NFSU2_TR(0x514d22);
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
B514d24:L514d24:{c.instructions+=2;NFSU2_TR(0x514d24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514d25:{NFSU2_TR(0x514d25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514d30:L514d30:{c.instructions+=3;NFSU2_TR(0x514d30);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B514d34:{NFSU2_TR(0x514d34);
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
B514d36:{NFSU2_TR(0x514d36);
if(r1(R+518)){{goto L514d41;}}
}
B514d38:L514d38:{c.instructions+=2;NFSU2_TR(0x514d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1404ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514d3e:{NFSU2_TR(0x514d3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514d41:L514d41:{c.instructions+=6;NFSU2_TR(0x514d41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514d42:{NFSU2_TR(0x514d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B514d48:{NFSU2_TR(0x514d48);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B514d4a:{NFSU2_TR(0x514d4a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B514d4c:{NFSU2_TR(0x514d4c);
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
B514d4e:{NFSU2_TR(0x514d4e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L514d77;}}
}
B514d50:L514d50:{c.instructions+=2;NFSU2_TR(0x514d50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514d51:{NFSU2_TR(0x514d51);
__builtin_memmove((R+28),(R+4),4);
}
B514d53:L514d53:{c.instructions+=2;NFSU2_TR(0x514d53);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B514d55:{NFSU2_TR(0x514d55);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L514d5f;}}
}
B514d57:L514d57:{c.instructions+=2;NFSU2_TR(0x514d57);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B514d59:{NFSU2_TR(0x514d59);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L514d5f;}}
}
B514d5b:L514d5b:{c.instructions+=2;NFSU2_TR(0x514d5b);
__builtin_memmove((R+4),(R+28),4);
}
B514d5d:{NFSU2_TR(0x514d5d);
{goto L514d61;}
}
B514d5f:L514d5f:{c.instructions+=1;NFSU2_TR(0x514d5f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B514d61:L514d61:{c.instructions+=2;NFSU2_TR(0x514d61);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B514d65:{NFSU2_TR(0x514d65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514d6e;}}
}
B514d67:L514d67:{c.instructions+=2;NFSU2_TR(0x514d67);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B514d6b:{NFSU2_TR(0x514d6b);
if(r1(R+518)){{goto L514d6e;}}
}
B514d6d:L514d6d:{c.instructions+=1;NFSU2_TR(0x514d6d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B514d6e:L514d6e:{c.instructions+=4;NFSU2_TR(0x514d6e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B514d6f:{NFSU2_TR(0x514d6f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B514d72:{NFSU2_TR(0x514d72);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B514d74:{NFSU2_TR(0x514d74);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514d53u);}goto L514d53;}}
}
B514d76:L514d76:{c.instructions+=1;NFSU2_TR(0x514d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514d77:L514d77:{c.instructions+=2;NFSU2_TR(0x514d77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514d78:{NFSU2_TR(0x514d78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514d80:L514d80:{c.instructions+=4;NFSU2_TR(0x514d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514d86:{NFSU2_TR(0x514d86);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B514d88:{NFSU2_TR(0x514d88);
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
B514d8a:{NFSU2_TR(0x514d8a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L514db8;}}
}
B514d8c:L514d8c:{c.instructions+=4;NFSU2_TR(0x514d8c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514d8d:{NFSU2_TR(0x514d8d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514d8e:{NFSU2_TR(0x514d8e);
__builtin_memmove((R+24),(R+4),4);
}
B514d90:{NFSU2_TR(0x514d90);
w1(R+12,u8(0x1ull));
}
B514d92:L514d92:{c.instructions+=2;NFSU2_TR(0x514d92);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B514d94:{NFSU2_TR(0x514d94);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L514d9e;}}
}
B514d96:L514d96:{c.instructions+=2;NFSU2_TR(0x514d96);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B514d98:{NFSU2_TR(0x514d98);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L514d9e;}}
}
B514d9a:L514d9a:{c.instructions+=2;NFSU2_TR(0x514d9a);
__builtin_memmove((R+0),(R+24),4);
}
B514d9c:{NFSU2_TR(0x514d9c);
{goto L514da0;}
}
B514d9e:L514d9e:{c.instructions+=1;NFSU2_TR(0x514d9e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B514da0:L514da0:{c.instructions+=2;NFSU2_TR(0x514da0);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B514da3:{NFSU2_TR(0x514da3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514da8;}}
}
B514da5:L514da5:{c.instructions+=1;NFSU2_TR(0x514da5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B514da8:L514da8:{c.instructions+=5;NFSU2_TR(0x514da8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514dae:{NFSU2_TR(0x514dae);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B514daf:{NFSU2_TR(0x514daf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B514db2:{NFSU2_TR(0x514db2);
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
B514db4:{NFSU2_TR(0x514db4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514d92u);}goto L514d92;}}
}
B514db6:L514db6:{c.instructions+=2;NFSU2_TR(0x514db6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514db7:{NFSU2_TR(0x514db7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B514db8:L514db8:{c.instructions+=1;NFSU2_TR(0x514db8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514dc0:L514dc0:{c.instructions+=5;NFSU2_TR(0x514dc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514dc1:{NFSU2_TR(0x514dc1);
__builtin_memmove((R+20),(R+16),4);
}
B514dc3:{NFSU2_TR(0x514dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514dc6:{NFSU2_TR(0x514dc6);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B514dca:{NFSU2_TR(0x514dca);
if(r1(R+518)){{goto L514e00;}}
}
B514dcc:L514dcc:{c.instructions+=5;NFSU2_TR(0x514dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1404ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B514dd2:{NFSU2_TR(0x514dd2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B514dd6:{NFSU2_TR(0x514dd6);
__builtin_memmove((R+4),gp(0x861e7c),4);
}
B514ddc:{NFSU2_TR(0x514ddc);
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
B514dde:{NFSU2_TR(0x514dde);
if(r1(R+518)){{goto L514e00;}}
}
B514de0:L514de0:{c.instructions+=2;NFSU2_TR(0x514de0);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B514de3:{NFSU2_TR(0x514de3);
if(r1(R+518)){{goto L514e00;}}
}
B514de5:L514de5:{c.instructions+=5;NFSU2_TR(0x514de5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B514de7:{NFSU2_TR(0x514de7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B514dea:{NFSU2_TR(0x514dea);
w4(R+4,u32(u32(r4(R+4))+u32(m4(0x838428))));
}
B514df0:{NFSU2_TR(0x514df0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514df1:{NFSU2_TR(0x514df1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514df6ull));
TAIL_STATIC(0x43db50u,43d);
}
B514df6:L514df6:{c.instructions+=2;NFSU2_TR(0x514df6);
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
B514df9:{NFSU2_TR(0x514df9);
s1(0x861e84,u8(0x1ull));
}
B514e00:L514e00:{c.instructions+=2;NFSU2_TR(0x514e00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B514e01:{NFSU2_TR(0x514e01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514e10:L514e10:{c.instructions+=9;NFSU2_TR(0x514e10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514e11:{NFSU2_TR(0x514e11);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514e12:{NFSU2_TR(0x514e12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514e13:{NFSU2_TR(0x514e13);
__builtin_memmove((R+24),gp(0x838450),4);
}
B514e19:{NFSU2_TR(0x514e19);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B514e1b:{NFSU2_TR(0x514e1b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B514e1d:{NFSU2_TR(0x514e1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514e1e:{NFSU2_TR(0x514e1e);
__builtin_memmove((R+20),(R+4),4);
}
B514e20:{NFSU2_TR(0x514e20);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L514e54;}}
}
B514e22:L514e22:{c.instructions+=3;NFSU2_TR(0x514e22);
__builtin_memmove((R+28),gp(0x838454),4);
}
B514e28:{NFSU2_TR(0x514e28);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B514e2c:{NFSU2_TR(0x514e2c);
__builtin_memmove((R+16),(R+16),4);
}
B514e30:L514e30:{c.instructions+=2;NFSU2_TR(0x514e30);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B514e32:{NFSU2_TR(0x514e32);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L514e3c;}}
}
B514e34:L514e34:{c.instructions+=2;NFSU2_TR(0x514e34);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B514e36:{NFSU2_TR(0x514e36);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L514e3c;}}
}
B514e38:L514e38:{c.instructions+=2;NFSU2_TR(0x514e38);
__builtin_memmove((R+8),(R+28),4);
}
B514e3a:{NFSU2_TR(0x514e3a);
{goto L514e3e;}
}
B514e3c:L514e3c:{c.instructions+=1;NFSU2_TR(0x514e3c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B514e3e:L514e3e:{c.instructions+=2;NFSU2_TR(0x514e3e);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xfull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B514e42:{NFSU2_TR(0x514e42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514e4c;}}
}
B514e44:L514e44:{c.instructions+=3;NFSU2_TR(0x514e44);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B514e47:{NFSU2_TR(0x514e47);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B514e4a:{NFSU2_TR(0x514e4a);
if(r1(R+518)){{goto L514e5d;}}
}
B514e4c:L514e4c:{c.instructions+=4;NFSU2_TR(0x514e4c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B514e4d:{NFSU2_TR(0x514e4d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B514e50:{NFSU2_TR(0x514e50);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B514e52:{NFSU2_TR(0x514e52);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514e30u);}goto L514e30;}}
}
B514e54:L514e54:{c.instructions+=6;NFSU2_TR(0x514e54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514e55:{NFSU2_TR(0x514e55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514e56:{NFSU2_TR(0x514e56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B514e57:{NFSU2_TR(0x514e57);
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
B514e59:{NFSU2_TR(0x514e59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B514e5a:{NFSU2_TR(0x514e5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514e5d:L514e5d:{c.instructions+=3;NFSU2_TR(0x514e5d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514e5e:{NFSU2_TR(0x514e5e);
__builtin_memmove((R+4),(R+20),4);
}
B514e60:{NFSU2_TR(0x514e60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514e65ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514cb0u);}goto L514cb0;}
}
B514e65:L514e65:{c.instructions+=8;NFSU2_TR(0x514e65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514e66:{NFSU2_TR(0x514e66);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B514e68:{NFSU2_TR(0x514e68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514e69:{NFSU2_TR(0x514e69);
u8 U[3];
__builtin_memmove((U+0),(R+512),1);
w1(R+512,u8((r1(R+0))<(r1(R+0))));
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(U+2,u8((r1(U+1))<(r1(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+2))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B514e6b:{NFSU2_TR(0x514e6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B514e6c:{NFSU2_TR(0x514e6c);
u8 U[3];
w1(R+523,scarry<u8>(r1(R+0),u8(0x1ull)));
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B514e6e:{NFSU2_TR(0x514e6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B514e6f:{NFSU2_TR(0x514e6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514e80:L514e80:{c.instructions+=8;NFSU2_TR(0x514e80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B514e83:{NFSU2_TR(0x514e83);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514e84:{NFSU2_TR(0x514e84);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514e85:{NFSU2_TR(0x514e85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514e86:{NFSU2_TR(0x514e86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514e87:{NFSU2_TR(0x514e87);
u8 U[4];
w4(U+0,u32(0x1400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514e8c:{NFSU2_TR(0x514e8c);
__builtin_memmove((R+20),(R+4),4);
}
B514e8e:{NFSU2_TR(0x514e8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514e93ull));
TAIL_STATIC(0x575620u,575);
}
B514e93:L514e93:{c.instructions+=5;NFSU2_TR(0x514e93);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B514e97:{NFSU2_TR(0x514e97);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B514e9a:{NFSU2_TR(0x514e9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B514e9e:{NFSU2_TR(0x514e9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514ea1:{NFSU2_TR(0x514ea1);
w4(R+28,u32(0x100ull));
}
B514ea6:L514ea6:{c.instructions+=4;NFSU2_TR(0x514ea6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B514ea8:{NFSU2_TR(0x514ea8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514ea9:{NFSU2_TR(0x514ea9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B514eac:{NFSU2_TR(0x514eac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514eb1ull));
TAIL_STATIC(0x501310u,501);
}
B514eb1:L514eb1:{c.instructions+=32;NFSU2_TR(0x514eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffbull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B514eb4:{NFSU2_TR(0x514eb4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+4),(U+0),1);
}
B514eb6:{NFSU2_TR(0x514eb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B514eb9:{NFSU2_TR(0x514eb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B514ebc:{NFSU2_TR(0x514ebc);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B514ebe:{NFSU2_TR(0x514ebe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B514ec1:{NFSU2_TR(0x514ec1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B514ec2:{NFSU2_TR(0x514ec2);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B514ec5:{NFSU2_TR(0x514ec5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B514ec8:{NFSU2_TR(0x514ec8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B514ec9:{NFSU2_TR(0x514ec9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B514ecc:{NFSU2_TR(0x514ecc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B514ecd:{NFSU2_TR(0x514ecd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B514ed0:{NFSU2_TR(0x514ed0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B514ed2:{NFSU2_TR(0x514ed2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B514ed5:{NFSU2_TR(0x514ed5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B514ed6:{NFSU2_TR(0x514ed6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B514ed9:{NFSU2_TR(0x514ed9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B514edb:{NFSU2_TR(0x514edb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B514ede:{NFSU2_TR(0x514ede);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B514ee0:{NFSU2_TR(0x514ee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B514ee3:{NFSU2_TR(0x514ee3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B514ee6:{NFSU2_TR(0x514ee6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((R+0),(U+0),4);
}
B514ee9:{NFSU2_TR(0x514ee9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B514eec:{NFSU2_TR(0x514eec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B514eee:{NFSU2_TR(0x514eee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B514ef0:{NFSU2_TR(0x514ef0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((R+8),(U+0),4);
}
B514ef3:{NFSU2_TR(0x514ef3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B514ef6:{NFSU2_TR(0x514ef6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B514ef9:{NFSU2_TR(0x514ef9);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B514efa:{NFSU2_TR(0x514efa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B514efc:{NFSU2_TR(0x514efc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514ea6u);}goto L514ea6;}}
}
B514efe:L514efe:{c.instructions+=18;NFSU2_TR(0x514efe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B514f00:{NFSU2_TR(0x514f00);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B514f03:{NFSU2_TR(0x514f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B514f09:{NFSU2_TR(0x514f09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B514f0b:{NFSU2_TR(0x514f0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1404ull))));
__builtin_memmove((R+0),(U+0),4);
}
B514f11:{NFSU2_TR(0x514f11);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B514f13:{NFSU2_TR(0x514f13);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B514f16:{NFSU2_TR(0x514f16);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B514f19:{NFSU2_TR(0x514f19);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B514f1d:{NFSU2_TR(0x514f1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x140cull))));
__builtin_memmove((R+0),(U+0),4);
}
B514f23:{NFSU2_TR(0x514f23);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B514f24:{NFSU2_TR(0x514f24);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B514f26:{NFSU2_TR(0x514f26);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B514f28:{NFSU2_TR(0x514f28);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514f2c:{NFSU2_TR(0x514f2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B514f30:{NFSU2_TR(0x514f30);
__builtin_memmove((R+8),(R+20),4);
}
B514f32:{NFSU2_TR(0x514f32);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x100ull));
s4(u32(r4(U+0)),r4(U+4));
}
B514f3a:{NFSU2_TR(0x514f3a);
__builtin_memmove((R+12),(R+12),4);
}
B514f40:L514f40:{c.instructions+=2;NFSU2_TR(0x514f40);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B514f43:{NFSU2_TR(0x514f43);
if(r1(R+518)){{goto L514f5c;}}
}
B514f45:L514f45:{c.instructions+=3;NFSU2_TR(0x514f45);
__builtin_memmove((R+28),(R+8),4);
}
B514f47:{NFSU2_TR(0x514f47);
w4(R+4,u32(0x5ull));
}
B514f4c:{NFSU2_TR(0x514f4c);
__builtin_memmove((R+24),(R+0),4);
}
B514f4e:L514f4e:{c.instructions+=1;NFSU2_TR(0x514f4e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L514f50;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514f4eu);}goto L514f4e;}
}
B514f50:L514f50:{c.instructions+=4;NFSU2_TR(0x514f50);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B514f54:{NFSU2_TR(0x514f54);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B514f55:{NFSU2_TR(0x514f55);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B514f59:{NFSU2_TR(0x514f59);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B514f5c:L514f5c:{c.instructions+=5;NFSU2_TR(0x514f5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B514f60:{NFSU2_TR(0x514f60);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B514f63:{NFSU2_TR(0x514f63);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B514f64:{NFSU2_TR(0x514f64);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B514f68:{NFSU2_TR(0x514f68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514f40u);}goto L514f40;}}
}
B514f6a:L514f6a:{c.instructions+=5;NFSU2_TR(0x514f6a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B514f6c:{NFSU2_TR(0x514f6c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B514f6e:{NFSU2_TR(0x514f6e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B514f70:{NFSU2_TR(0x514f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B514f76:{NFSU2_TR(0x514f76);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L514fa3;}}
}
B514f78:L514f78:{c.instructions+=2;NFSU2_TR(0x514f78);
__builtin_memmove((R+28),(R+24),4);
}
B514f7a:{NFSU2_TR(0x514f7a);
__builtin_memmove((R+12),(R+12),4);
}
B514f80:L514f80:{c.instructions+=2;NFSU2_TR(0x514f80);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B514f82:{NFSU2_TR(0x514f82);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L514f8c;}}
}
B514f84:L514f84:{c.instructions+=2;NFSU2_TR(0x514f84);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B514f86:{NFSU2_TR(0x514f86);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L514f8c;}}
}
B514f88:L514f88:{c.instructions+=2;NFSU2_TR(0x514f88);
__builtin_memmove((R+4),(R+20),4);
}
B514f8a:{NFSU2_TR(0x514f8a);
{goto L514f8e;}
}
B514f8c:L514f8c:{c.instructions+=1;NFSU2_TR(0x514f8c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B514f8e:L514f8e:{c.instructions+=2;NFSU2_TR(0x514f8e);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B514f92:{NFSU2_TR(0x514f92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L514f9b;}}
}
B514f94:L514f94:{c.instructions+=2;NFSU2_TR(0x514f94);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B514f98:{NFSU2_TR(0x514f98);
if(r1(R+518)){{goto L514f9b;}}
}
B514f9a:L514f9a:{c.instructions+=1;NFSU2_TR(0x514f9a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B514f9b:L514f9b:{c.instructions+=4;NFSU2_TR(0x514f9b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B514f9c:{NFSU2_TR(0x514f9c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x14ull))));
}
B514f9f:{NFSU2_TR(0x514f9f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B514fa1:{NFSU2_TR(0x514fa1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x514f80u);}goto L514f80;}}
}
B514fa3:L514fa3:{c.instructions+=5;NFSU2_TR(0x514fa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B514fa7:{NFSU2_TR(0x514fa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514fab:{NFSU2_TR(0x514fab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514fac:{NFSU2_TR(0x514fac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B514fae:{NFSU2_TR(0x514fae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x514fb3ull));
TAIL_STATIC(0x575630u,575);
}
B514fb3:L514fb3:{c.instructions+=8;NFSU2_TR(0x514fb3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B514fb6:{NFSU2_TR(0x514fb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B514fb7:{NFSU2_TR(0x514fb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B514fb8:{NFSU2_TR(0x514fb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B514fb9:{NFSU2_TR(0x514fb9);
__builtin_memmove((R+0),(R+12),4);
}
B514fbb:{NFSU2_TR(0x514fbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B514fbc:{NFSU2_TR(0x514fbc);
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
B514fbf:{NFSU2_TR(0x514fbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B514fd0:L514fd0:{c.instructions+=5;NFSU2_TR(0x514fd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B514fd1:{NFSU2_TR(0x514fd1);
__builtin_memmove((R+20),(R+16),4);
}
B514fd3:{NFSU2_TR(0x514fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B514fd6:{NFSU2_TR(0x514fd6);
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
B514fd8:{NFSU2_TR(0x514fd8);
if(r1(R+518)){TAIL_STATIC(0x515056u,515);}
}
B514fda:L514fda:{c.instructions+=6;NFSU2_TR(0x514fda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B514fdd:{NFSU2_TR(0x514fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B514fe0:{NFSU2_TR(0x514fe0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B514fe3:{NFSU2_TR(0x514fe3);
__builtin_memmove((R+0),(R+518),1);
}
B514fe6:{NFSU2_TR(0x514fe6);
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
B514fe8:{NFSU2_TR(0x514fe8);
if(r1(R+518)){TAIL_STATIC(0x515056u,515);}
}
B514fea:L514fea:{c.instructions+=4;NFSU2_TR(0x514fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B514ff4:{NFSU2_TR(0x514ff4);
__builtin_memmove((R+0),gp(0x85b948),4);
}
B514ff9:{NFSU2_TR(0x514ff9);
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
B514ffb:{NFSU2_TR(0x514ffb);
if(r1(R+518)){TAIL_STATIC(0x515056u,515);}
}
B514ffd:L514ffd:{c.instructions+=1;NFSU2_TR(0x514ffd);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+4)),r1(U+0));
TAIL_STATIC(0x515000u,515);
}
XIT:NFSU2_TR_EXIT(0x514,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
