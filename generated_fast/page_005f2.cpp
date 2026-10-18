#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_41c(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_441(u8* __restrict R,Cpu& c);
u32 body_44b(u8* __restrict R,Cpu& c);
u32 body_44d(u8* __restrict R,Cpu& c);
u32 body_44e(u8* __restrict R,Cpu& c);
u32 body_451(u8* __restrict R,Cpu& c);
u32 body_452(u8* __restrict R,Cpu& c);
u32 body_453(u8* __restrict R,Cpu& c);
u32 body_455(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5de(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5f2,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5f2,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5f2(u8* __restrict R,Cpu& c);
u32 page_5f2(Cpu& c){return body_5f2(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5f2(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5f2000:goto L5f2000;
case 0x5f2002:c.instructions+=2;goto B5f2002;
case 0x5f2005:c.instructions+=1;goto B5f2005;
case 0x5f2007:goto L5f2007;
case 0x5f200a:c.instructions+=1;goto B5f200a;
case 0x5f2010:goto L5f2010;
case 0x5f2016:c.instructions+=3;goto B5f2016;
case 0x5f2018:c.instructions+=2;goto B5f2018;
case 0x5f201a:c.instructions+=1;goto B5f201a;
case 0x5f201c:goto L5f201c;
case 0x5f201f:c.instructions+=2;goto B5f201f;
case 0x5f2021:c.instructions+=1;goto B5f2021;
case 0x5f2023:goto L5f2023;
case 0x5f2026:c.instructions+=1;goto B5f2026;
case 0x5f2028:goto L5f2028;
case 0x5f202e:c.instructions+=1;goto B5f202e;
case 0x5f2034:goto L5f2034;
case 0x5f2039:c.instructions+=2;goto B5f2039;
case 0x5f203c:c.instructions+=1;goto B5f203c;
case 0x5f203e:goto L5f203e;
case 0x5f2041:c.instructions+=1;goto B5f2041;
case 0x5f2047:goto L5f2047;
case 0x5f204a:c.instructions+=3;goto B5f204a;
case 0x5f204c:c.instructions+=2;goto B5f204c;
case 0x5f2050:c.instructions+=1;goto B5f2050;
case 0x5f2052:goto L5f2052;
case 0x5f2058:c.instructions+=2;goto B5f2058;
case 0x5f205a:c.instructions+=1;goto B5f205a;
case 0x5f205e:goto L5f205e;
case 0x5f2060:c.instructions+=1;goto B5f2060;
case 0x5f2062:goto L5f2062;
case 0x5f2065:c.instructions+=1;goto B5f2065;
case 0x5f2067:goto L5f2067;
case 0x5f206d:c.instructions+=4;goto B5f206d;
case 0x5f2073:c.instructions+=3;goto B5f2073;
case 0x5f2079:c.instructions+=2;goto B5f2079;
case 0x5f207b:c.instructions+=1;goto B5f207b;
case 0x5f207e:goto L5f207e;
case 0x5f2080:goto L5f2080;
case 0x5f2082:c.instructions+=2;goto B5f2082;
case 0x5f2084:c.instructions+=1;goto B5f2084;
case 0x5f2086:goto L5f2086;
case 0x5f208c:goto L5f208c;
case 0x5f2091:c.instructions+=8;goto B5f2091;
case 0x5f2097:c.instructions+=7;goto B5f2097;
case 0x5f209d:c.instructions+=6;goto B5f209d;
case 0x5f20a3:c.instructions+=5;goto B5f20a3;
case 0x5f20a6:c.instructions+=4;goto B5f20a6;
case 0x5f20ac:c.instructions+=3;goto B5f20ac;
case 0x5f20ae:c.instructions+=2;goto B5f20ae;
case 0x5f20b2:c.instructions+=1;goto B5f20b2;
case 0x5f20b4:goto L5f20b4;
case 0x5f20ba:c.instructions+=3;goto B5f20ba;
case 0x5f20c0:c.instructions+=2;goto B5f20c0;
case 0x5f20c2:c.instructions+=1;goto B5f20c2;
case 0x5f20c4:goto L5f20c4;
case 0x5f20c6:c.instructions+=2;goto B5f20c6;
case 0x5f20ca:c.instructions+=1;goto B5f20ca;
case 0x5f20cc:goto L5f20cc;
case 0x5f20cf:c.instructions+=2;goto B5f20cf;
case 0x5f20d2:c.instructions+=1;goto B5f20d2;
case 0x5f20d8:goto L5f20d8;
case 0x5f20df:c.instructions+=1;goto B5f20df;
case 0x5f20e6:goto L5f20e6;
case 0x5f20ea:c.instructions+=15;goto B5f20ea;
case 0x5f20ed:c.instructions+=14;goto B5f20ed;
case 0x5f20ef:c.instructions+=13;goto B5f20ef;
case 0x5f20f2:c.instructions+=12;goto B5f20f2;
case 0x5f20f5:c.instructions+=11;goto B5f20f5;
case 0x5f20f7:c.instructions+=10;goto B5f20f7;
case 0x5f20fb:c.instructions+=9;goto B5f20fb;
case 0x5f2102:c.instructions+=8;goto B5f2102;
case 0x5f210a:c.instructions+=7;goto B5f210a;
case 0x5f2112:c.instructions+=6;goto B5f2112;
case 0x5f2119:c.instructions+=5;goto B5f2119;
case 0x5f2121:c.instructions+=4;goto B5f2121;
case 0x5f2125:c.instructions+=3;goto B5f2125;
case 0x5f212b:c.instructions+=2;goto B5f212b;
case 0x5f2132:c.instructions+=1;goto B5f2132;
case 0x5f2137:goto L5f2137;
case 0x5f213a:c.instructions+=4;goto B5f213a;
case 0x5f213e:c.instructions+=3;goto B5f213e;
case 0x5f2140:c.instructions+=2;goto B5f2140;
case 0x5f2147:c.instructions+=1;goto B5f2147;
case 0x5f214d:goto L5f214d;
case 0x5f214f:c.instructions+=8;goto B5f214f;
case 0x5f2153:c.instructions+=7;goto B5f2153;
case 0x5f2154:c.instructions+=6;goto B5f2154;
case 0x5f2157:c.instructions+=5;goto B5f2157;
case 0x5f215e:c.instructions+=4;goto B5f215e;
case 0x5f215f:c.instructions+=3;goto B5f215f;
case 0x5f2160:c.instructions+=2;goto B5f2160;
case 0x5f2162:c.instructions+=1;goto B5f2162;
case 0x5f2167:goto L5f2167;
case 0x5f216c:goto L5f216c;
case 0x5f216e:c.instructions+=1;goto B5f216e;
case 0x5f2173:goto L5f2173;
case 0x5f2176:c.instructions+=4;goto B5f2176;
case 0x5f217a:c.instructions+=3;goto B5f217a;
case 0x5f217c:c.instructions+=2;goto B5f217c;
case 0x5f2187:c.instructions+=1;goto B5f2187;
case 0x5f218d:goto L5f218d;
case 0x5f2190:c.instructions+=4;goto B5f2190;
case 0x5f2192:c.instructions+=3;goto B5f2192;
case 0x5f2193:c.instructions+=2;goto B5f2193;
case 0x5f2195:c.instructions+=1;goto B5f2195;
case 0x5f219a:goto L5f219a;
case 0x5f219f:goto L5f219f;
case 0x5f21a4:c.instructions+=1;goto B5f21a4;
case 0x5f21a9:goto L5f21a9;
case 0x5f21ac:c.instructions+=4;goto B5f21ac;
case 0x5f21b0:c.instructions+=3;goto B5f21b0;
case 0x5f21b2:c.instructions+=2;goto B5f21b2;
case 0x5f21bd:c.instructions+=1;goto B5f21bd;
case 0x5f21c3:goto L5f21c3;
case 0x5f21c9:c.instructions+=6;goto B5f21c9;
case 0x5f21cc:c.instructions+=5;goto B5f21cc;
case 0x5f21cd:c.instructions+=4;goto B5f21cd;
case 0x5f21ce:c.instructions+=3;goto B5f21ce;
case 0x5f21cf:c.instructions+=2;goto B5f21cf;
case 0x5f21d1:c.instructions+=1;goto B5f21d1;
case 0x5f21d6:goto L5f21d6;
case 0x5f21db:goto L5f21db;
case 0x5f21dd:c.instructions+=1;goto B5f21dd;
case 0x5f21e2:goto L5f21e2;
case 0x5f21e5:c.instructions+=4;goto B5f21e5;
case 0x5f21e9:c.instructions+=3;goto B5f21e9;
case 0x5f21eb:c.instructions+=2;goto B5f21eb;
case 0x5f21f6:c.instructions+=1;goto B5f21f6;
case 0x5f21fc:goto L5f21fc;
case 0x5f21ff:c.instructions+=3;goto B5f21ff;
case 0x5f2200:c.instructions+=2;goto B5f2200;
case 0x5f2202:c.instructions+=1;goto B5f2202;
case 0x5f2207:goto L5f2207;
case 0x5f220c:goto L5f220c;
case 0x5f220e:c.instructions+=1;goto B5f220e;
case 0x5f2213:goto L5f2213;
case 0x5f2216:c.instructions+=4;goto B5f2216;
case 0x5f221a:c.instructions+=3;goto B5f221a;
case 0x5f221c:c.instructions+=2;goto B5f221c;
case 0x5f2227:c.instructions+=1;goto B5f2227;
case 0x5f222d:goto L5f222d;
case 0x5f2230:c.instructions+=10;goto B5f2230;
case 0x5f2236:c.instructions+=9;goto B5f2236;
case 0x5f2238:c.instructions+=8;goto B5f2238;
case 0x5f223b:c.instructions+=7;goto B5f223b;
case 0x5f223f:c.instructions+=6;goto B5f223f;
case 0x5f2243:c.instructions+=5;goto B5f2243;
case 0x5f2245:c.instructions+=4;goto B5f2245;
case 0x5f2246:c.instructions+=3;goto B5f2246;
case 0x5f2247:c.instructions+=2;goto B5f2247;
case 0x5f2249:c.instructions+=1;goto B5f2249;
case 0x5f224e:goto L5f224e;
case 0x5f2251:c.instructions+=5;goto B5f2251;
case 0x5f2255:c.instructions+=4;goto B5f2255;
case 0x5f2256:c.instructions+=3;goto B5f2256;
case 0x5f2257:c.instructions+=2;goto B5f2257;
case 0x5f2258:c.instructions+=1;goto B5f2258;
case 0x5f225d:goto L5f225d;
case 0x5f2262:goto L5f2262;
case 0x5f2264:c.instructions+=1;goto B5f2264;
case 0x5f2269:goto L5f2269;
case 0x5f226c:c.instructions+=4;goto B5f226c;
case 0x5f2270:c.instructions+=3;goto B5f2270;
case 0x5f2272:c.instructions+=2;goto B5f2272;
case 0x5f227d:c.instructions+=1;goto B5f227d;
case 0x5f2283:goto L5f2283;
case 0x5f2287:c.instructions+=7;goto B5f2287;
case 0x5f228d:c.instructions+=6;goto B5f228d;
case 0x5f228e:c.instructions+=5;goto B5f228e;
case 0x5f2291:c.instructions+=4;goto B5f2291;
case 0x5f2292:c.instructions+=3;goto B5f2292;
case 0x5f2293:c.instructions+=2;goto B5f2293;
case 0x5f2295:c.instructions+=1;goto B5f2295;
case 0x5f229a:goto L5f229a;
case 0x5f229f:goto L5f229f;
case 0x5f22a4:c.instructions+=1;goto B5f22a4;
case 0x5f22a9:goto L5f22a9;
case 0x5f22ac:c.instructions+=4;goto B5f22ac;
case 0x5f22b0:c.instructions+=3;goto B5f22b0;
case 0x5f22b2:c.instructions+=2;goto B5f22b2;
case 0x5f22bd:c.instructions+=1;goto B5f22bd;
case 0x5f22c3:goto L5f22c3;
case 0x5f22c6:c.instructions+=4;goto B5f22c6;
case 0x5f22c7:c.instructions+=3;goto B5f22c7;
case 0x5f22c8:c.instructions+=2;goto B5f22c8;
case 0x5f22ca:c.instructions+=1;goto B5f22ca;
case 0x5f22cf:goto L5f22cf;
case 0x5f22d4:goto L5f22d4;
case 0x5f22da:c.instructions+=6;goto B5f22da;
case 0x5f22e0:c.instructions+=5;goto B5f22e0;
case 0x5f22e2:c.instructions+=4;goto B5f22e2;
case 0x5f22e4:c.instructions+=3;goto B5f22e4;
case 0x5f22e7:c.instructions+=2;goto B5f22e7;
case 0x5f22eb:c.instructions+=1;goto B5f22eb;
case 0x5f22ed:goto L5f22ed;
case 0x5f22f0:c.instructions+=1;goto B5f22f0;
case 0x5f22f4:goto L5f22f4;
case 0x5f22fa:c.instructions+=11;goto B5f22fa;
case 0x5f22fc:c.instructions+=10;goto B5f22fc;
case 0x5f2302:c.instructions+=9;goto B5f2302;
case 0x5f2305:c.instructions+=8;goto B5f2305;
case 0x5f230b:c.instructions+=7;goto B5f230b;
case 0x5f230e:c.instructions+=6;goto B5f230e;
case 0x5f2315:c.instructions+=5;goto B5f2315;
case 0x5f2319:c.instructions+=4;goto B5f2319;
case 0x5f231d:c.instructions+=3;goto B5f231d;
case 0x5f2320:c.instructions+=2;goto B5f2320;
case 0x5f2322:c.instructions+=1;goto B5f2322;
case 0x5f2325:goto L5f2325;
case 0x5f2328:c.instructions+=11;goto B5f2328;
case 0x5f232a:c.instructions+=10;goto B5f232a;
case 0x5f232c:c.instructions+=9;goto B5f232c;
case 0x5f232f:c.instructions+=8;goto B5f232f;
case 0x5f2333:c.instructions+=7;goto B5f2333;
case 0x5f2334:c.instructions+=6;goto B5f2334;
case 0x5f2336:c.instructions+=5;goto B5f2336;
case 0x5f2337:c.instructions+=4;goto B5f2337;
case 0x5f2338:c.instructions+=3;goto B5f2338;
case 0x5f233a:c.instructions+=2;goto B5f233a;
case 0x5f233e:c.instructions+=1;goto B5f233e;
case 0x5f2343:goto L5f2343;
case 0x5f2347:c.instructions+=7;goto B5f2347;
case 0x5f2348:c.instructions+=6;goto B5f2348;
case 0x5f234b:c.instructions+=5;goto B5f234b;
case 0x5f234c:c.instructions+=4;goto B5f234c;
case 0x5f2350:c.instructions+=3;goto B5f2350;
case 0x5f2351:c.instructions+=2;goto B5f2351;
case 0x5f2353:c.instructions+=1;goto B5f2353;
case 0x5f2358:goto L5f2358;
case 0x5f235c:c.instructions+=3;goto B5f235c;
case 0x5f235d:c.instructions+=2;goto B5f235d;
case 0x5f2364:c.instructions+=1;goto B5f2364;
case 0x5f2369:goto L5f2369;
case 0x5f236f:c.instructions+=4;goto B5f236f;
case 0x5f2372:c.instructions+=3;goto B5f2372;
case 0x5f2374:c.instructions+=2;goto B5f2374;
case 0x5f237f:c.instructions+=1;goto B5f237f;
case 0x5f2381:goto L5f2381;
case 0x5f2387:c.instructions+=1;goto B5f2387;
case 0x5f2389:goto L5f2389;
case 0x5f238c:c.instructions+=1;goto B5f238c;
case 0x5f2392:goto L5f2392;
case 0x5f2394:c.instructions+=5;goto B5f2394;
case 0x5f239a:c.instructions+=4;goto B5f239a;
case 0x5f239d:c.instructions+=3;goto B5f239d;
case 0x5f23a3:c.instructions+=2;goto B5f23a3;
case 0x5f23a6:c.instructions+=1;goto B5f23a6;
case 0x5f23a8:goto L5f23a8;
case 0x5f23ae:c.instructions+=1;goto B5f23ae;
case 0x5f23b0:goto L5f23b0;
case 0x5f23b7:goto L5f23b7;
case 0x5f23bd:c.instructions+=23;goto B5f23bd;
case 0x5f23c0:c.instructions+=22;goto B5f23c0;
case 0x5f23c6:c.instructions+=21;goto B5f23c6;
case 0x5f23c9:c.instructions+=20;goto B5f23c9;
case 0x5f23cf:c.instructions+=19;goto B5f23cf;
case 0x5f23d2:c.instructions+=18;goto B5f23d2;
case 0x5f23d8:c.instructions+=17;goto B5f23d8;
case 0x5f23db:c.instructions+=16;goto B5f23db;
case 0x5f23e1:c.instructions+=15;goto B5f23e1;
case 0x5f23e4:c.instructions+=14;goto B5f23e4;
case 0x5f23ea:c.instructions+=13;goto B5f23ea;
case 0x5f23f1:c.instructions+=12;goto B5f23f1;
case 0x5f23f7:c.instructions+=11;goto B5f23f7;
case 0x5f23fa:c.instructions+=10;goto B5f23fa;
case 0x5f2400:c.instructions+=9;goto B5f2400;
case 0x5f2407:c.instructions+=8;goto B5f2407;
case 0x5f240d:c.instructions+=7;goto B5f240d;
case 0x5f2414:c.instructions+=6;goto B5f2414;
case 0x5f241a:c.instructions+=5;goto B5f241a;
case 0x5f241d:c.instructions+=4;goto B5f241d;
case 0x5f2423:c.instructions+=3;goto B5f2423;
case 0x5f2429:c.instructions+=2;goto B5f2429;
case 0x5f242c:c.instructions+=1;goto B5f242c;
case 0x5f2431:goto L5f2431;
case 0x5f2437:c.instructions+=51;goto B5f2437;
case 0x5f243d:c.instructions+=50;goto B5f243d;
case 0x5f2440:c.instructions+=49;goto B5f2440;
case 0x5f2443:c.instructions+=48;goto B5f2443;
case 0x5f2447:c.instructions+=47;goto B5f2447;
case 0x5f244b:c.instructions+=46;goto B5f244b;
case 0x5f244d:c.instructions+=45;goto B5f244d;
case 0x5f2453:c.instructions+=44;goto B5f2453;
case 0x5f2457:c.instructions+=43;goto B5f2457;
case 0x5f245d:c.instructions+=42;goto B5f245d;
case 0x5f245f:c.instructions+=41;goto B5f245f;
case 0x5f2462:c.instructions+=40;goto B5f2462;
case 0x5f2465:c.instructions+=39;goto B5f2465;
case 0x5f246b:c.instructions+=38;goto B5f246b;
case 0x5f2471:c.instructions+=37;goto B5f2471;
case 0x5f2475:c.instructions+=36;goto B5f2475;
case 0x5f2479:c.instructions+=35;goto B5f2479;
case 0x5f247d:c.instructions+=34;goto B5f247d;
case 0x5f2483:c.instructions+=33;goto B5f2483;
case 0x5f2487:c.instructions+=32;goto B5f2487;
case 0x5f248d:c.instructions+=31;goto B5f248d;
case 0x5f2490:c.instructions+=30;goto B5f2490;
case 0x5f2494:c.instructions+=29;goto B5f2494;
case 0x5f2498:c.instructions+=28;goto B5f2498;
case 0x5f249e:c.instructions+=27;goto B5f249e;
case 0x5f24a0:c.instructions+=26;goto B5f24a0;
case 0x5f24a6:c.instructions+=25;goto B5f24a6;
case 0x5f24aa:c.instructions+=24;goto B5f24aa;
case 0x5f24ac:c.instructions+=23;goto B5f24ac;
case 0x5f24af:c.instructions+=22;goto B5f24af;
case 0x5f24b2:c.instructions+=21;goto B5f24b2;
case 0x5f24b8:c.instructions+=20;goto B5f24b8;
case 0x5f24be:c.instructions+=19;goto B5f24be;
case 0x5f24c2:c.instructions+=18;goto B5f24c2;
case 0x5f24c4:c.instructions+=17;goto B5f24c4;
case 0x5f24c7:c.instructions+=16;goto B5f24c7;
case 0x5f24ca:c.instructions+=15;goto B5f24ca;
case 0x5f24d0:c.instructions+=14;goto B5f24d0;
case 0x5f24d6:c.instructions+=13;goto B5f24d6;
case 0x5f24da:c.instructions+=12;goto B5f24da;
case 0x5f24dc:c.instructions+=11;goto B5f24dc;
case 0x5f24df:c.instructions+=10;goto B5f24df;
case 0x5f24e2:c.instructions+=9;goto B5f24e2;
case 0x5f24e8:c.instructions+=8;goto B5f24e8;
case 0x5f24ee:c.instructions+=7;goto B5f24ee;
case 0x5f24f2:c.instructions+=6;goto B5f24f2;
case 0x5f24f7:c.instructions+=5;goto B5f24f7;
case 0x5f24fc:c.instructions+=4;goto B5f24fc;
case 0x5f24fe:c.instructions+=3;goto B5f24fe;
case 0x5f2501:c.instructions+=2;goto B5f2501;
case 0x5f2504:c.instructions+=1;goto B5f2504;
case 0x5f250a:goto L5f250a;
case 0x5f2510:c.instructions+=70;goto B5f2510;
case 0x5f2517:c.instructions+=69;goto B5f2517;
case 0x5f251d:c.instructions+=68;goto B5f251d;
case 0x5f2523:c.instructions+=67;goto B5f2523;
case 0x5f2526:c.instructions+=66;goto B5f2526;
case 0x5f252c:c.instructions+=65;goto B5f252c;
case 0x5f2532:c.instructions+=64;goto B5f2532;
case 0x5f2535:c.instructions+=63;goto B5f2535;
case 0x5f2537:c.instructions+=62;goto B5f2537;
case 0x5f253a:c.instructions+=61;goto B5f253a;
case 0x5f253d:c.instructions+=60;goto B5f253d;
case 0x5f2543:c.instructions+=59;goto B5f2543;
case 0x5f2549:c.instructions+=58;goto B5f2549;
case 0x5f254f:c.instructions+=57;goto B5f254f;
case 0x5f2555:c.instructions+=56;goto B5f2555;
case 0x5f255b:c.instructions+=55;goto B5f255b;
case 0x5f2561:c.instructions+=54;goto B5f2561;
case 0x5f2567:c.instructions+=53;goto B5f2567;
case 0x5f256a:c.instructions+=52;goto B5f256a;
case 0x5f2570:c.instructions+=51;goto B5f2570;
case 0x5f2573:c.instructions+=50;goto B5f2573;
case 0x5f2579:c.instructions+=49;goto B5f2579;
case 0x5f257c:c.instructions+=48;goto B5f257c;
case 0x5f2582:c.instructions+=47;goto B5f2582;
case 0x5f2585:c.instructions+=46;goto B5f2585;
case 0x5f258b:c.instructions+=45;goto B5f258b;
case 0x5f258e:c.instructions+=44;goto B5f258e;
case 0x5f2594:c.instructions+=43;goto B5f2594;
case 0x5f2597:c.instructions+=42;goto B5f2597;
case 0x5f259d:c.instructions+=41;goto B5f259d;
case 0x5f25a0:c.instructions+=40;goto B5f25a0;
case 0x5f25a6:c.instructions+=39;goto B5f25a6;
case 0x5f25a9:c.instructions+=38;goto B5f25a9;
case 0x5f25af:c.instructions+=37;goto B5f25af;
case 0x5f25b2:c.instructions+=36;goto B5f25b2;
case 0x5f25b8:c.instructions+=35;goto B5f25b8;
case 0x5f25be:c.instructions+=34;goto B5f25be;
case 0x5f25c4:c.instructions+=33;goto B5f25c4;
case 0x5f25ce:c.instructions+=32;goto B5f25ce;
case 0x5f25d4:c.instructions+=31;goto B5f25d4;
case 0x5f25da:c.instructions+=30;goto B5f25da;
case 0x5f25e0:c.instructions+=29;goto B5f25e0;
case 0x5f25e6:c.instructions+=28;goto B5f25e6;
case 0x5f25ec:c.instructions+=27;goto B5f25ec;
case 0x5f25f2:c.instructions+=26;goto B5f25f2;
case 0x5f25f8:c.instructions+=25;goto B5f25f8;
case 0x5f25fe:c.instructions+=24;goto B5f25fe;
case 0x5f2604:c.instructions+=23;goto B5f2604;
case 0x5f260a:c.instructions+=22;goto B5f260a;
case 0x5f260e:c.instructions+=21;goto B5f260e;
case 0x5f2611:c.instructions+=20;goto B5f2611;
case 0x5f2614:c.instructions+=19;goto B5f2614;
case 0x5f2617:c.instructions+=18;goto B5f2617;
case 0x5f261a:c.instructions+=17;goto B5f261a;
case 0x5f261c:c.instructions+=16;goto B5f261c;
case 0x5f261e:c.instructions+=15;goto B5f261e;
case 0x5f2622:c.instructions+=14;goto B5f2622;
case 0x5f2626:c.instructions+=13;goto B5f2626;
case 0x5f262a:c.instructions+=12;goto B5f262a;
case 0x5f262e:c.instructions+=11;goto B5f262e;
case 0x5f2632:c.instructions+=10;goto B5f2632;
case 0x5f2639:c.instructions+=9;goto B5f2639;
case 0x5f263d:c.instructions+=8;goto B5f263d;
case 0x5f263f:c.instructions+=7;goto B5f263f;
case 0x5f2643:c.instructions+=6;goto B5f2643;
case 0x5f2646:c.instructions+=5;goto B5f2646;
case 0x5f2647:c.instructions+=4;goto B5f2647;
case 0x5f264b:c.instructions+=3;goto B5f264b;
case 0x5f264c:c.instructions+=2;goto B5f264c;
case 0x5f264e:c.instructions+=1;goto B5f264e;
case 0x5f2651:goto L5f2651;
case 0x5f2657:c.instructions+=8;goto B5f2657;
case 0x5f265b:c.instructions+=7;goto B5f265b;
case 0x5f265c:c.instructions+=6;goto B5f265c;
case 0x5f265f:c.instructions+=5;goto B5f265f;
case 0x5f2660:c.instructions+=4;goto B5f2660;
case 0x5f2664:c.instructions+=3;goto B5f2664;
case 0x5f2665:c.instructions+=2;goto B5f2665;
case 0x5f2667:c.instructions+=1;goto B5f2667;
case 0x5f266c:goto L5f266c;
case 0x5f266f:c.instructions+=7;goto B5f266f;
case 0x5f2673:c.instructions+=6;goto B5f2673;
case 0x5f2674:c.instructions+=5;goto B5f2674;
case 0x5f2678:c.instructions+=4;goto B5f2678;
case 0x5f267a:c.instructions+=3;goto B5f267a;
case 0x5f267b:c.instructions+=2;goto B5f267b;
case 0x5f267d:c.instructions+=1;goto B5f267d;
case 0x5f2680:goto L5f2680;
case 0x5f2686:c.instructions+=8;goto B5f2686;
case 0x5f268a:c.instructions+=7;goto B5f268a;
case 0x5f268b:c.instructions+=6;goto B5f268b;
case 0x5f268e:c.instructions+=5;goto B5f268e;
case 0x5f268f:c.instructions+=4;goto B5f268f;
case 0x5f2696:c.instructions+=3;goto B5f2696;
case 0x5f2697:c.instructions+=2;goto B5f2697;
case 0x5f2699:c.instructions+=1;goto B5f2699;
case 0x5f269e:goto L5f269e;
case 0x5f26a5:c.instructions+=54;goto B5f26a5;
case 0x5f26a9:c.instructions+=53;goto B5f26a9;
case 0x5f26ad:c.instructions+=52;goto B5f26ad;
case 0x5f26b1:c.instructions+=51;goto B5f26b1;
case 0x5f26b5:c.instructions+=50;goto B5f26b5;
case 0x5f26bc:c.instructions+=49;goto B5f26bc;
case 0x5f26c0:c.instructions+=48;goto B5f26c0;
case 0x5f26c4:c.instructions+=47;goto B5f26c4;
case 0x5f26c8:c.instructions+=46;goto B5f26c8;
case 0x5f26cc:c.instructions+=45;goto B5f26cc;
case 0x5f26d0:c.instructions+=44;goto B5f26d0;
case 0x5f26d7:c.instructions+=43;goto B5f26d7;
case 0x5f26db:c.instructions+=42;goto B5f26db;
case 0x5f26df:c.instructions+=41;goto B5f26df;
case 0x5f26e3:c.instructions+=40;goto B5f26e3;
case 0x5f26e7:c.instructions+=39;goto B5f26e7;
case 0x5f26eb:c.instructions+=38;goto B5f26eb;
case 0x5f26ef:c.instructions+=37;goto B5f26ef;
case 0x5f26f3:c.instructions+=36;goto B5f26f3;
case 0x5f26f5:c.instructions+=35;goto B5f26f5;
case 0x5f26fc:c.instructions+=34;goto B5f26fc;
case 0x5f2700:c.instructions+=33;goto B5f2700;
case 0x5f2703:c.instructions+=32;goto B5f2703;
case 0x5f2705:c.instructions+=31;goto B5f2705;
case 0x5f2708:c.instructions+=30;goto B5f2708;
case 0x5f270a:c.instructions+=29;goto B5f270a;
case 0x5f2711:c.instructions+=28;goto B5f2711;
case 0x5f2714:c.instructions+=27;goto B5f2714;
case 0x5f2716:c.instructions+=26;goto B5f2716;
case 0x5f2718:c.instructions+=25;goto B5f2718;
case 0x5f271c:c.instructions+=24;goto B5f271c;
case 0x5f2720:c.instructions+=23;goto B5f2720;
case 0x5f2724:c.instructions+=22;goto B5f2724;
case 0x5f2728:c.instructions+=21;goto B5f2728;
case 0x5f272c:c.instructions+=20;goto B5f272c;
case 0x5f2730:c.instructions+=19;goto B5f2730;
case 0x5f2732:c.instructions+=18;goto B5f2732;
case 0x5f2739:c.instructions+=17;goto B5f2739;
case 0x5f273d:c.instructions+=16;goto B5f273d;
case 0x5f2740:c.instructions+=15;goto B5f2740;
case 0x5f2742:c.instructions+=14;goto B5f2742;
case 0x5f2745:c.instructions+=13;goto B5f2745;
case 0x5f2747:c.instructions+=12;goto B5f2747;
case 0x5f274e:c.instructions+=11;goto B5f274e;
case 0x5f2751:c.instructions+=10;goto B5f2751;
case 0x5f2757:c.instructions+=9;goto B5f2757;
case 0x5f275e:c.instructions+=8;goto B5f275e;
case 0x5f2761:c.instructions+=7;goto B5f2761;
case 0x5f2763:c.instructions+=6;goto B5f2763;
case 0x5f2765:c.instructions+=5;goto B5f2765;
case 0x5f2767:c.instructions+=4;goto B5f2767;
case 0x5f2769:c.instructions+=3;goto B5f2769;
case 0x5f276b:c.instructions+=2;goto B5f276b;
case 0x5f276e:c.instructions+=1;goto B5f276e;
case 0x5f2770:goto L5f2770;
case 0x5f2772:c.instructions+=12;goto B5f2772;
case 0x5f2776:c.instructions+=11;goto B5f2776;
case 0x5f277a:c.instructions+=10;goto B5f277a;
case 0x5f277e:c.instructions+=9;goto B5f277e;
case 0x5f2782:c.instructions+=8;goto B5f2782;
case 0x5f2785:c.instructions+=7;goto B5f2785;
case 0x5f2787:c.instructions+=6;goto B5f2787;
case 0x5f278b:c.instructions+=5;goto B5f278b;
case 0x5f278f:c.instructions+=4;goto B5f278f;
case 0x5f2790:c.instructions+=3;goto B5f2790;
case 0x5f2791:c.instructions+=2;goto B5f2791;
case 0x5f2793:c.instructions+=1;goto B5f2793;
case 0x5f2796:goto L5f2796;
case 0x5f279c:c.instructions+=8;goto B5f279c;
case 0x5f27a0:c.instructions+=7;goto B5f27a0;
case 0x5f27a1:c.instructions+=6;goto B5f27a1;
case 0x5f27a4:c.instructions+=5;goto B5f27a4;
case 0x5f27a5:c.instructions+=4;goto B5f27a5;
case 0x5f27a9:c.instructions+=3;goto B5f27a9;
case 0x5f27aa:c.instructions+=2;goto B5f27aa;
case 0x5f27ac:c.instructions+=1;goto B5f27ac;
case 0x5f27b1:goto L5f27b1;
case 0x5f27b7:c.instructions+=3;goto B5f27b7;
case 0x5f27c1:c.instructions+=2;goto B5f27c1;
case 0x5f27c5:c.instructions+=1;goto B5f27c5;
case 0x5f27c7:goto L5f27c7;
case 0x5f27cb:c.instructions+=14;goto B5f27cb;
case 0x5f27cd:c.instructions+=13;goto B5f27cd;
case 0x5f27d1:c.instructions+=12;goto B5f27d1;
case 0x5f27d5:c.instructions+=11;goto B5f27d5;
case 0x5f27d9:c.instructions+=10;goto B5f27d9;
case 0x5f27dd:c.instructions+=9;goto B5f27dd;
case 0x5f27e1:c.instructions+=8;goto B5f27e1;
case 0x5f27e4:c.instructions+=7;goto B5f27e4;
case 0x5f27e6:c.instructions+=6;goto B5f27e6;
case 0x5f27ea:c.instructions+=5;goto B5f27ea;
case 0x5f27ee:c.instructions+=4;goto B5f27ee;
case 0x5f27ef:c.instructions+=3;goto B5f27ef;
case 0x5f27f0:c.instructions+=2;goto B5f27f0;
case 0x5f27f2:c.instructions+=1;goto B5f27f2;
case 0x5f27f5:goto L5f27f5;
case 0x5f27fb:c.instructions+=8;goto B5f27fb;
case 0x5f27ff:c.instructions+=7;goto B5f27ff;
case 0x5f2800:c.instructions+=6;goto B5f2800;
case 0x5f2803:c.instructions+=5;goto B5f2803;
case 0x5f2804:c.instructions+=4;goto B5f2804;
case 0x5f2808:c.instructions+=3;goto B5f2808;
case 0x5f2809:c.instructions+=2;goto B5f2809;
case 0x5f280b:c.instructions+=1;goto B5f280b;
case 0x5f2810:goto L5f2810;
case 0x5f2816:c.instructions+=2;goto B5f2816;
case 0x5f2820:c.instructions+=1;goto B5f2820;
case 0x5f2825:goto L5f2825;
case 0x5f2829:c.instructions+=11;goto B5f2829;
case 0x5f282f:c.instructions+=10;goto B5f282f;
case 0x5f2830:c.instructions+=9;goto B5f2830;
case 0x5f2831:c.instructions+=8;goto B5f2831;
case 0x5f2832:c.instructions+=7;goto B5f2832;
case 0x5f2836:c.instructions+=6;goto B5f2836;
case 0x5f283c:c.instructions+=5;goto B5f283c;
case 0x5f283d:c.instructions+=4;goto B5f283d;
case 0x5f2841:c.instructions+=3;goto B5f2841;
case 0x5f2842:c.instructions+=2;goto B5f2842;
case 0x5f2843:c.instructions+=1;goto B5f2843;
case 0x5f2848:goto L5f2848;
case 0x5f284b:c.instructions+=2;goto B5f284b;
case 0x5f284d:c.instructions+=1;goto B5f284d;
case 0x5f2853:goto L5f2853;
case 0x5f2857:c.instructions+=1;goto B5f2857;
case 0x5f2859:goto L5f2859;
case 0x5f2860:c.instructions+=13;goto B5f2860;
case 0x5f2867:c.instructions+=12;goto B5f2867;
case 0x5f286e:c.instructions+=11;goto B5f286e;
case 0x5f2872:c.instructions+=10;goto B5f2872;
case 0x5f2876:c.instructions+=9;goto B5f2876;
case 0x5f287a:c.instructions+=8;goto B5f287a;
case 0x5f287e:c.instructions+=7;goto B5f287e;
case 0x5f2881:c.instructions+=6;goto B5f2881;
case 0x5f2882:c.instructions+=5;goto B5f2882;
case 0x5f2886:c.instructions+=4;goto B5f2886;
case 0x5f2888:c.instructions+=3;goto B5f2888;
case 0x5f2889:c.instructions+=2;goto B5f2889;
case 0x5f288b:c.instructions+=1;goto B5f288b;
case 0x5f288e:goto L5f288e;
case 0x5f2894:c.instructions+=8;goto B5f2894;
case 0x5f2898:c.instructions+=7;goto B5f2898;
case 0x5f2899:c.instructions+=6;goto B5f2899;
case 0x5f289c:c.instructions+=5;goto B5f289c;
case 0x5f289d:c.instructions+=4;goto B5f289d;
case 0x5f28a1:c.instructions+=3;goto B5f28a1;
case 0x5f28a2:c.instructions+=2;goto B5f28a2;
case 0x5f28a4:c.instructions+=1;goto B5f28a4;
case 0x5f28a9:goto L5f28a9;
case 0x5f28af:c.instructions+=2;goto B5f28af;
case 0x5f28b9:c.instructions+=1;goto B5f28b9;
case 0x5f28bb:goto L5f28bb;
case 0x5f28bf:c.instructions+=13;goto B5f28bf;
case 0x5f28c3:c.instructions+=12;goto B5f28c3;
case 0x5f28c7:c.instructions+=11;goto B5f28c7;
case 0x5f28cb:c.instructions+=10;goto B5f28cb;
case 0x5f28cf:c.instructions+=9;goto B5f28cf;
case 0x5f28d3:c.instructions+=8;goto B5f28d3;
case 0x5f28d6:c.instructions+=7;goto B5f28d6;
case 0x5f28d8:c.instructions+=6;goto B5f28d8;
case 0x5f28dc:c.instructions+=5;goto B5f28dc;
case 0x5f28e0:c.instructions+=4;goto B5f28e0;
case 0x5f28e1:c.instructions+=3;goto B5f28e1;
case 0x5f28e2:c.instructions+=2;goto B5f28e2;
case 0x5f28e4:c.instructions+=1;goto B5f28e4;
case 0x5f28e7:goto L5f28e7;
case 0x5f28ed:c.instructions+=8;goto B5f28ed;
case 0x5f28f1:c.instructions+=7;goto B5f28f1;
case 0x5f28f2:c.instructions+=6;goto B5f28f2;
case 0x5f28f5:c.instructions+=5;goto B5f28f5;
case 0x5f28f6:c.instructions+=4;goto B5f28f6;
case 0x5f28fa:c.instructions+=3;goto B5f28fa;
case 0x5f28fb:c.instructions+=2;goto B5f28fb;
case 0x5f28fd:c.instructions+=1;goto B5f28fd;
case 0x5f2902:goto L5f2902;
case 0x5f2908:c.instructions+=1;goto B5f2908;
case 0x5f2912:goto L5f2912;
case 0x5f2916:c.instructions+=7;goto B5f2916;
case 0x5f291d:c.instructions+=6;goto B5f291d;
case 0x5f2923:c.instructions+=5;goto B5f2923;
case 0x5f2927:c.instructions+=4;goto B5f2927;
case 0x5f292b:c.instructions+=3;goto B5f292b;
case 0x5f2931:c.instructions+=2;goto B5f2931;
case 0x5f2935:c.instructions+=1;goto B5f2935;
case 0x5f293a:goto L5f293a;
case 0x5f293b:c.instructions+=7;goto B5f293b;
case 0x5f293c:c.instructions+=6;goto B5f293c;
case 0x5f293d:c.instructions+=5;goto B5f293d;
case 0x5f2941:c.instructions+=4;goto B5f2941;
case 0x5f2942:c.instructions+=3;goto B5f2942;
case 0x5f2949:c.instructions+=2;goto B5f2949;
case 0x5f2951:c.instructions+=1;goto B5f2951;
case 0x5f2956:goto L5f2956;
case 0x5f295a:c.instructions+=4;goto B5f295a;
case 0x5f295c:c.instructions+=3;goto B5f295c;
case 0x5f295e:c.instructions+=2;goto B5f295e;
case 0x5f2961:c.instructions+=1;goto B5f2961;
case 0x5f2963:goto L5f2963;
case 0x5f2969:c.instructions+=2;goto B5f2969;
case 0x5f296d:c.instructions+=1;goto B5f296d;
case 0x5f296f:goto L5f296f;
case 0x5f2971:goto L5f2971;
case 0x5f2975:c.instructions+=17;goto B5f2975;
case 0x5f2979:c.instructions+=16;goto B5f2979;
case 0x5f297d:c.instructions+=15;goto B5f297d;
case 0x5f2983:c.instructions+=14;goto B5f2983;
case 0x5f2989:c.instructions+=13;goto B5f2989;
case 0x5f298f:c.instructions+=12;goto B5f298f;
case 0x5f2995:c.instructions+=11;goto B5f2995;
case 0x5f2999:c.instructions+=10;goto B5f2999;
case 0x5f299f:c.instructions+=9;goto B5f299f;
case 0x5f29a3:c.instructions+=8;goto B5f29a3;
case 0x5f29a9:c.instructions+=7;goto B5f29a9;
case 0x5f29ad:c.instructions+=6;goto B5f29ad;
case 0x5f29b3:c.instructions+=5;goto B5f29b3;
case 0x5f29b9:c.instructions+=4;goto B5f29b9;
case 0x5f29bb:c.instructions+=3;goto B5f29bb;
case 0x5f29c1:c.instructions+=2;goto B5f29c1;
case 0x5f29c6:c.instructions+=1;goto B5f29c6;
case 0x5f29cd:goto L5f29cd;
case 0x5f29cf:goto L5f29cf;
case 0x5f29d3:c.instructions+=14;goto B5f29d3;
case 0x5f29d6:c.instructions+=13;goto B5f29d6;
case 0x5f29da:c.instructions+=12;goto B5f29da;
case 0x5f29dd:c.instructions+=11;goto B5f29dd;
case 0x5f29df:c.instructions+=10;goto B5f29df;
case 0x5f29e2:c.instructions+=9;goto B5f29e2;
case 0x5f29e5:c.instructions+=8;goto B5f29e5;
case 0x5f29e7:c.instructions+=7;goto B5f29e7;
case 0x5f29e9:c.instructions+=6;goto B5f29e9;
case 0x5f29ed:c.instructions+=5;goto B5f29ed;
case 0x5f29f8:c.instructions+=4;goto B5f29f8;
case 0x5f29fc:c.instructions+=3;goto B5f29fc;
case 0x5f2a00:c.instructions+=2;goto B5f2a00;
case 0x5f2a04:c.instructions+=1;goto B5f2a04;
case 0x5f2a06:goto L5f2a06;
case 0x5f2a0b:c.instructions+=6;goto B5f2a0b;
case 0x5f2a0c:c.instructions+=5;goto B5f2a0c;
case 0x5f2a12:c.instructions+=4;goto B5f2a12;
case 0x5f2a13:c.instructions+=3;goto B5f2a13;
case 0x5f2a17:c.instructions+=2;goto B5f2a17;
case 0x5f2a18:c.instructions+=1;goto B5f2a18;
case 0x5f2a1d:goto L5f2a1d;
case 0x5f2a20:c.instructions+=14;goto B5f2a20;
case 0x5f2a23:c.instructions+=13;goto B5f2a23;
case 0x5f2a26:c.instructions+=12;goto B5f2a26;
case 0x5f2a28:c.instructions+=11;goto B5f2a28;
case 0x5f2a2c:c.instructions+=10;goto B5f2a2c;
case 0x5f2a30:c.instructions+=9;goto B5f2a30;
case 0x5f2a33:c.instructions+=8;goto B5f2a33;
case 0x5f2a37:c.instructions+=7;goto B5f2a37;
case 0x5f2a3b:c.instructions+=6;goto B5f2a3b;
case 0x5f2a3d:c.instructions+=5;goto B5f2a3d;
case 0x5f2a41:c.instructions+=4;goto B5f2a41;
case 0x5f2a43:c.instructions+=3;goto B5f2a43;
case 0x5f2a47:c.instructions+=2;goto B5f2a47;
case 0x5f2a4b:c.instructions+=1;goto B5f2a4b;
case 0x5f2a4f:goto L5f2a4f;
case 0x5f2a51:c.instructions+=8;goto B5f2a51;
case 0x5f2a52:c.instructions+=7;goto B5f2a52;
case 0x5f2a53:c.instructions+=6;goto B5f2a53;
case 0x5f2a57:c.instructions+=5;goto B5f2a57;
case 0x5f2a58:c.instructions+=4;goto B5f2a58;
case 0x5f2a5c:c.instructions+=3;goto B5f2a5c;
case 0x5f2a5d:c.instructions+=2;goto B5f2a5d;
case 0x5f2a64:c.instructions+=1;goto B5f2a64;
case 0x5f2a69:goto L5f2a69;
case 0x5f2a6b:c.instructions+=1;goto B5f2a6b;
case 0x5f2a6d:goto L5f2a6d;
case 0x5f2a6f:c.instructions+=1;goto B5f2a6f;
case 0x5f2a74:goto L5f2a74;
case 0x5f2a77:c.instructions+=4;goto B5f2a77;
case 0x5f2a7b:c.instructions+=3;goto B5f2a7b;
case 0x5f2a7d:c.instructions+=2;goto B5f2a7d;
case 0x5f2a85:c.instructions+=1;goto B5f2a85;
case 0x5f2a87:goto L5f2a87;
case 0x5f2a8a:c.instructions+=6;goto B5f2a8a;
case 0x5f2a90:c.instructions+=5;goto B5f2a90;
case 0x5f2a93:c.instructions+=4;goto B5f2a93;
case 0x5f2a9a:c.instructions+=3;goto B5f2a9a;
case 0x5f2a9b:c.instructions+=2;goto B5f2a9b;
case 0x5f2a9f:c.instructions+=1;goto B5f2a9f;
case 0x5f2aa4:goto L5f2aa4;
case 0x5f2aa7:c.instructions+=13;goto B5f2aa7;
case 0x5f2aab:c.instructions+=12;goto B5f2aab;
case 0x5f2aae:c.instructions+=11;goto B5f2aae;
case 0x5f2ab0:c.instructions+=10;goto B5f2ab0;
case 0x5f2ab3:c.instructions+=9;goto B5f2ab3;
case 0x5f2ab5:c.instructions+=8;goto B5f2ab5;
case 0x5f2ab6:c.instructions+=7;goto B5f2ab6;
case 0x5f2ab9:c.instructions+=6;goto B5f2ab9;
case 0x5f2aba:c.instructions+=5;goto B5f2aba;
case 0x5f2abe:c.instructions+=4;goto B5f2abe;
case 0x5f2abf:c.instructions+=3;goto B5f2abf;
case 0x5f2ac0:c.instructions+=2;goto B5f2ac0;
case 0x5f2ac1:c.instructions+=1;goto B5f2ac1;
case 0x5f2ac6:goto L5f2ac6;
case 0x5f2ac8:goto L5f2ac8;
case 0x5f2acd:c.instructions+=1;goto B5f2acd;
case 0x5f2ad2:goto L5f2ad2;
case 0x5f2ad5:c.instructions+=4;goto B5f2ad5;
case 0x5f2ad9:c.instructions+=3;goto B5f2ad9;
case 0x5f2adb:c.instructions+=2;goto B5f2adb;
case 0x5f2ae3:c.instructions+=1;goto B5f2ae3;
case 0x5f2ae5:goto L5f2ae5;
case 0x5f2aeb:c.instructions+=9;goto B5f2aeb;
case 0x5f2aec:c.instructions+=8;goto B5f2aec;
case 0x5f2af3:c.instructions+=7;goto B5f2af3;
case 0x5f2af4:c.instructions+=6;goto B5f2af4;
case 0x5f2af7:c.instructions+=5;goto B5f2af7;
case 0x5f2af8:c.instructions+=4;goto B5f2af8;
case 0x5f2af9:c.instructions+=3;goto B5f2af9;
case 0x5f2afa:c.instructions+=2;goto B5f2afa;
case 0x5f2afc:c.instructions+=1;goto B5f2afc;
case 0x5f2b01:goto L5f2b01;
case 0x5f2b03:goto L5f2b03;
case 0x5f2b05:goto L5f2b05;
case 0x5f2b0c:c.instructions+=3;goto B5f2b0c;
case 0x5f2b12:c.instructions+=2;goto B5f2b12;
case 0x5f2b1a:c.instructions+=1;goto B5f2b1a;
case 0x5f2b1f:goto L5f2b1f;
case 0x5f2b26:c.instructions+=2;goto B5f2b26;
case 0x5f2b31:c.instructions+=1;goto B5f2b31;
case 0x5f2b36:goto L5f2b36;
case 0x5f2b3b:goto L5f2b3b;
case 0x5f2b41:c.instructions+=1;goto B5f2b41;
case 0x5f2b43:goto L5f2b43;
case 0x5f2b49:c.instructions+=5;goto B5f2b49;
case 0x5f2b4f:c.instructions+=4;goto B5f2b4f;
case 0x5f2b52:c.instructions+=3;goto B5f2b52;
case 0x5f2b58:c.instructions+=2;goto B5f2b58;
case 0x5f2b5b:c.instructions+=1;goto B5f2b5b;
case 0x5f2b5e:goto L5f2b5e;
case 0x5f2b61:c.instructions+=5;goto B5f2b61;
case 0x5f2b64:c.instructions+=4;goto B5f2b64;
case 0x5f2b6a:c.instructions+=3;goto B5f2b6a;
case 0x5f2b6c:c.instructions+=2;goto B5f2b6c;
case 0x5f2b6f:c.instructions+=1;goto B5f2b6f;
case 0x5f2b71:goto L5f2b71;
case 0x5f2b77:c.instructions+=1;goto B5f2b77;
case 0x5f2b79:goto L5f2b79;
case 0x5f2b7b:goto L5f2b7b;
case 0x5f2b82:c.instructions+=1;goto B5f2b82;
case 0x5f2b87:goto L5f2b87;
case 0x5f2b88:c.instructions+=7;goto B5f2b88;
case 0x5f2b89:c.instructions+=6;goto B5f2b89;
case 0x5f2b8a:c.instructions+=5;goto B5f2b8a;
case 0x5f2b90:c.instructions+=4;goto B5f2b90;
case 0x5f2b91:c.instructions+=3;goto B5f2b91;
case 0x5f2b98:c.instructions+=2;goto B5f2b98;
case 0x5f2ba3:c.instructions+=1;goto B5f2ba3;
case 0x5f2ba8:goto L5f2ba8;
case 0x5f2bae:c.instructions+=3;goto B5f2bae;
case 0x5f2bb0:c.instructions+=2;goto B5f2bb0;
case 0x5f2bb3:c.instructions+=1;goto B5f2bb3;
case 0x5f2bb5:goto L5f2bb5;
case 0x5f2bbb:c.instructions+=2;goto B5f2bbb;
case 0x5f2bc1:c.instructions+=1;goto B5f2bc1;
case 0x5f2bc3:goto L5f2bc3;
case 0x5f2bc5:goto L5f2bc5;
case 0x5f2bc7:c.instructions+=24;goto B5f2bc7;
case 0x5f2bca:c.instructions+=23;goto B5f2bca;
case 0x5f2bcd:c.instructions+=22;goto B5f2bcd;
case 0x5f2bcf:c.instructions+=21;goto B5f2bcf;
case 0x5f2bd5:c.instructions+=20;goto B5f2bd5;
case 0x5f2bd7:c.instructions+=19;goto B5f2bd7;
case 0x5f2bdd:c.instructions+=18;goto B5f2bdd;
case 0x5f2be1:c.instructions+=17;goto B5f2be1;
case 0x5f2be7:c.instructions+=16;goto B5f2be7;
case 0x5f2bea:c.instructions+=15;goto B5f2bea;
case 0x5f2bec:c.instructions+=14;goto B5f2bec;
case 0x5f2bee:c.instructions+=13;goto B5f2bee;
case 0x5f2bf1:c.instructions+=12;goto B5f2bf1;
case 0x5f2bf7:c.instructions+=11;goto B5f2bf7;
case 0x5f2bf9:c.instructions+=10;goto B5f2bf9;
case 0x5f2bfd:c.instructions+=9;goto B5f2bfd;
case 0x5f2c03:c.instructions+=8;goto B5f2c03;
case 0x5f2c09:c.instructions+=7;goto B5f2c09;
case 0x5f2c0f:c.instructions+=6;goto B5f2c0f;
case 0x5f2c15:c.instructions+=5;goto B5f2c15;
case 0x5f2c17:c.instructions+=4;goto B5f2c17;
case 0x5f2c1d:c.instructions+=3;goto B5f2c1d;
case 0x5f2c22:c.instructions+=2;goto B5f2c22;
case 0x5f2c28:c.instructions+=1;goto B5f2c28;
case 0x5f2c30:goto L5f2c30;
case 0x5f2c36:c.instructions+=75;goto B5f2c36;
case 0x5f2c3c:c.instructions+=74;goto B5f2c3c;
case 0x5f2c3e:c.instructions+=73;goto B5f2c3e;
case 0x5f2c41:c.instructions+=72;goto B5f2c41;
case 0x5f2c43:c.instructions+=71;goto B5f2c43;
case 0x5f2c49:c.instructions+=70;goto B5f2c49;
case 0x5f2c4c:c.instructions+=69;goto B5f2c4c;
case 0x5f2c4f:c.instructions+=68;goto B5f2c4f;
case 0x5f2c51:c.instructions+=67;goto B5f2c51;
case 0x5f2c57:c.instructions+=66;goto B5f2c57;
case 0x5f2c5b:c.instructions+=65;goto B5f2c5b;
case 0x5f2c61:c.instructions+=64;goto B5f2c61;
case 0x5f2c67:c.instructions+=63;goto B5f2c67;
case 0x5f2c69:c.instructions+=62;goto B5f2c69;
case 0x5f2c6f:c.instructions+=61;goto B5f2c6f;
case 0x5f2c72:c.instructions+=60;goto B5f2c72;
case 0x5f2c75:c.instructions+=59;goto B5f2c75;
case 0x5f2c77:c.instructions+=58;goto B5f2c77;
case 0x5f2c7d:c.instructions+=57;goto B5f2c7d;
case 0x5f2c81:c.instructions+=56;goto B5f2c81;
case 0x5f2c87:c.instructions+=55;goto B5f2c87;
case 0x5f2c8d:c.instructions+=54;goto B5f2c8d;
case 0x5f2c8f:c.instructions+=53;goto B5f2c8f;
case 0x5f2c95:c.instructions+=52;goto B5f2c95;
case 0x5f2c98:c.instructions+=51;goto B5f2c98;
case 0x5f2c9b:c.instructions+=50;goto B5f2c9b;
case 0x5f2c9d:c.instructions+=49;goto B5f2c9d;
case 0x5f2ca3:c.instructions+=48;goto B5f2ca3;
case 0x5f2ca5:c.instructions+=47;goto B5f2ca5;
case 0x5f2cab:c.instructions+=46;goto B5f2cab;
case 0x5f2cb1:c.instructions+=45;goto B5f2cb1;
case 0x5f2cb3:c.instructions+=44;goto B5f2cb3;
case 0x5f2cb9:c.instructions+=43;goto B5f2cb9;
case 0x5f2cbc:c.instructions+=42;goto B5f2cbc;
case 0x5f2cbf:c.instructions+=41;goto B5f2cbf;
case 0x5f2cc1:c.instructions+=40;goto B5f2cc1;
case 0x5f2cc7:c.instructions+=39;goto B5f2cc7;
case 0x5f2ccb:c.instructions+=38;goto B5f2ccb;
case 0x5f2cd1:c.instructions+=37;goto B5f2cd1;
case 0x5f2cd7:c.instructions+=36;goto B5f2cd7;
case 0x5f2cd9:c.instructions+=35;goto B5f2cd9;
case 0x5f2cdf:c.instructions+=34;goto B5f2cdf;
case 0x5f2ce2:c.instructions+=33;goto B5f2ce2;
case 0x5f2ce5:c.instructions+=32;goto B5f2ce5;
case 0x5f2ce7:c.instructions+=31;goto B5f2ce7;
case 0x5f2ced:c.instructions+=30;goto B5f2ced;
case 0x5f2cf1:c.instructions+=29;goto B5f2cf1;
case 0x5f2cf7:c.instructions+=28;goto B5f2cf7;
case 0x5f2cfd:c.instructions+=27;goto B5f2cfd;
case 0x5f2cff:c.instructions+=26;goto B5f2cff;
case 0x5f2d05:c.instructions+=25;goto B5f2d05;
case 0x5f2d08:c.instructions+=24;goto B5f2d08;
case 0x5f2d0b:c.instructions+=23;goto B5f2d0b;
case 0x5f2d0d:c.instructions+=22;goto B5f2d0d;
case 0x5f2d13:c.instructions+=21;goto B5f2d13;
case 0x5f2d17:c.instructions+=20;goto B5f2d17;
case 0x5f2d1d:c.instructions+=19;goto B5f2d1d;
case 0x5f2d23:c.instructions+=18;goto B5f2d23;
case 0x5f2d25:c.instructions+=17;goto B5f2d25;
case 0x5f2d2b:c.instructions+=16;goto B5f2d2b;
case 0x5f2d2e:c.instructions+=15;goto B5f2d2e;
case 0x5f2d31:c.instructions+=14;goto B5f2d31;
case 0x5f2d33:c.instructions+=13;goto B5f2d33;
case 0x5f2d39:c.instructions+=12;goto B5f2d39;
case 0x5f2d3d:c.instructions+=11;goto B5f2d3d;
case 0x5f2d43:c.instructions+=10;goto B5f2d43;
case 0x5f2d48:c.instructions+=9;goto B5f2d48;
case 0x5f2d4d:c.instructions+=8;goto B5f2d4d;
case 0x5f2d53:c.instructions+=7;goto B5f2d53;
case 0x5f2d55:c.instructions+=6;goto B5f2d55;
case 0x5f2d5b:c.instructions+=5;goto B5f2d5b;
case 0x5f2d5e:c.instructions+=4;goto B5f2d5e;
case 0x5f2d61:c.instructions+=3;goto B5f2d61;
case 0x5f2d63:c.instructions+=2;goto B5f2d63;
case 0x5f2d69:c.instructions+=1;goto B5f2d69;
case 0x5f2d6f:goto L5f2d6f;
case 0x5f2d71:c.instructions+=3;goto B5f2d71;
case 0x5f2d73:c.instructions+=2;goto B5f2d73;
case 0x5f2d78:c.instructions+=1;goto B5f2d78;
case 0x5f2d7f:goto L5f2d7f;
case 0x5f2d81:goto L5f2d81;
case 0x5f2d85:c.instructions+=14;goto B5f2d85;
case 0x5f2d88:c.instructions+=13;goto B5f2d88;
case 0x5f2d8c:c.instructions+=12;goto B5f2d8c;
case 0x5f2d8f:c.instructions+=11;goto B5f2d8f;
case 0x5f2d91:c.instructions+=10;goto B5f2d91;
case 0x5f2d94:c.instructions+=9;goto B5f2d94;
case 0x5f2d97:c.instructions+=8;goto B5f2d97;
case 0x5f2d99:c.instructions+=7;goto B5f2d99;
case 0x5f2d9b:c.instructions+=6;goto B5f2d9b;
case 0x5f2d9f:c.instructions+=5;goto B5f2d9f;
case 0x5f2daa:c.instructions+=4;goto B5f2daa;
case 0x5f2dae:c.instructions+=3;goto B5f2dae;
case 0x5f2db2:c.instructions+=2;goto B5f2db2;
case 0x5f2db6:c.instructions+=1;goto B5f2db6;
case 0x5f2db8:goto L5f2db8;
case 0x5f2dbd:c.instructions+=6;goto B5f2dbd;
case 0x5f2dbe:c.instructions+=5;goto B5f2dbe;
case 0x5f2dc4:c.instructions+=4;goto B5f2dc4;
case 0x5f2dc5:c.instructions+=3;goto B5f2dc5;
case 0x5f2dc9:c.instructions+=2;goto B5f2dc9;
case 0x5f2dca:c.instructions+=1;goto B5f2dca;
case 0x5f2dcf:goto L5f2dcf;
case 0x5f2dd2:c.instructions+=14;goto B5f2dd2;
case 0x5f2dd5:c.instructions+=13;goto B5f2dd5;
case 0x5f2dd8:c.instructions+=12;goto B5f2dd8;
case 0x5f2dda:c.instructions+=11;goto B5f2dda;
case 0x5f2dde:c.instructions+=10;goto B5f2dde;
case 0x5f2de2:c.instructions+=9;goto B5f2de2;
case 0x5f2de5:c.instructions+=8;goto B5f2de5;
case 0x5f2de9:c.instructions+=7;goto B5f2de9;
case 0x5f2ded:c.instructions+=6;goto B5f2ded;
case 0x5f2def:c.instructions+=5;goto B5f2def;
case 0x5f2df3:c.instructions+=4;goto B5f2df3;
case 0x5f2df5:c.instructions+=3;goto B5f2df5;
case 0x5f2df9:c.instructions+=2;goto B5f2df9;
case 0x5f2dfd:c.instructions+=1;goto B5f2dfd;
case 0x5f2e01:goto L5f2e01;
case 0x5f2e03:c.instructions+=8;goto B5f2e03;
case 0x5f2e04:c.instructions+=7;goto B5f2e04;
case 0x5f2e05:c.instructions+=6;goto B5f2e05;
case 0x5f2e0b:c.instructions+=5;goto B5f2e0b;
case 0x5f2e0c:c.instructions+=4;goto B5f2e0c;
case 0x5f2e10:c.instructions+=3;goto B5f2e10;
case 0x5f2e11:c.instructions+=2;goto B5f2e11;
case 0x5f2e18:c.instructions+=1;goto B5f2e18;
case 0x5f2e1d:goto L5f2e1d;
case 0x5f2e1f:c.instructions+=1;goto B5f2e1f;
case 0x5f2e21:goto L5f2e21;
case 0x5f2e23:c.instructions+=1;goto B5f2e23;
case 0x5f2e28:goto L5f2e28;
case 0x5f2e2b:c.instructions+=4;goto B5f2e2b;
case 0x5f2e2f:c.instructions+=3;goto B5f2e2f;
case 0x5f2e31:c.instructions+=2;goto B5f2e31;
case 0x5f2e39:c.instructions+=1;goto B5f2e39;
case 0x5f2e3b:goto L5f2e3b;
case 0x5f2e41:c.instructions+=9;goto B5f2e41;
case 0x5f2e45:c.instructions+=8;goto B5f2e45;
case 0x5f2e49:c.instructions+=7;goto B5f2e49;
case 0x5f2e4b:c.instructions+=6;goto B5f2e4b;
case 0x5f2e4c:c.instructions+=5;goto B5f2e4c;
case 0x5f2e4f:c.instructions+=4;goto B5f2e4f;
case 0x5f2e52:c.instructions+=3;goto B5f2e52;
case 0x5f2e54:c.instructions+=2;goto B5f2e54;
case 0x5f2e55:c.instructions+=1;goto B5f2e55;
case 0x5f2e5a:goto L5f2e5a;
case 0x5f2e5d:c.instructions+=5;goto B5f2e5d;
case 0x5f2e5e:c.instructions+=4;goto B5f2e5e;
case 0x5f2e5f:c.instructions+=3;goto B5f2e5f;
case 0x5f2e60:c.instructions+=2;goto B5f2e60;
case 0x5f2e64:c.instructions+=1;goto B5f2e64;
case 0x5f2e69:goto L5f2e69;
case 0x5f2e6b:goto L5f2e6b;
case 0x5f2e70:c.instructions+=1;goto B5f2e70;
case 0x5f2e75:goto L5f2e75;
case 0x5f2e78:c.instructions+=4;goto B5f2e78;
case 0x5f2e7c:c.instructions+=3;goto B5f2e7c;
case 0x5f2e7e:c.instructions+=2;goto B5f2e7e;
case 0x5f2e86:c.instructions+=1;goto B5f2e86;
case 0x5f2e88:goto L5f2e88;
case 0x5f2e8e:c.instructions+=9;goto B5f2e8e;
case 0x5f2e8f:c.instructions+=8;goto B5f2e8f;
case 0x5f2e96:c.instructions+=7;goto B5f2e96;
case 0x5f2e97:c.instructions+=6;goto B5f2e97;
case 0x5f2e9a:c.instructions+=5;goto B5f2e9a;
case 0x5f2e9b:c.instructions+=4;goto B5f2e9b;
case 0x5f2e9c:c.instructions+=3;goto B5f2e9c;
case 0x5f2e9d:c.instructions+=2;goto B5f2e9d;
case 0x5f2e9f:c.instructions+=1;goto B5f2e9f;
case 0x5f2ea4:goto L5f2ea4;
case 0x5f2ea6:goto L5f2ea6;
case 0x5f2ea8:goto L5f2ea8;
case 0x5f2eaf:c.instructions+=3;goto B5f2eaf;
case 0x5f2eb5:c.instructions+=2;goto B5f2eb5;
case 0x5f2ec0:c.instructions+=1;goto B5f2ec0;
case 0x5f2ec5:goto L5f2ec5;
case 0x5f2ec7:goto L5f2ec7;
case 0x5f2ecc:c.instructions+=1;goto B5f2ecc;
case 0x5f2ed1:goto L5f2ed1;
case 0x5f2ed4:c.instructions+=4;goto B5f2ed4;
case 0x5f2ed8:c.instructions+=3;goto B5f2ed8;
case 0x5f2eda:c.instructions+=2;goto B5f2eda;
case 0x5f2ee5:c.instructions+=1;goto B5f2ee5;
case 0x5f2ee7:goto L5f2ee7;
case 0x5f2eea:c.instructions+=5;goto B5f2eea;
case 0x5f2eeb:c.instructions+=4;goto B5f2eeb;
case 0x5f2eec:c.instructions+=3;goto B5f2eec;
case 0x5f2eed:c.instructions+=2;goto B5f2eed;
case 0x5f2eef:c.instructions+=1;goto B5f2eef;
case 0x5f2ef4:goto L5f2ef4;
case 0x5f2ef6:goto L5f2ef6;
case 0x5f2efb:c.instructions+=1;goto B5f2efb;
case 0x5f2f00:goto L5f2f00;
case 0x5f2f03:c.instructions+=4;goto B5f2f03;
case 0x5f2f07:c.instructions+=3;goto B5f2f07;
case 0x5f2f09:c.instructions+=2;goto B5f2f09;
case 0x5f2f14:c.instructions+=1;goto B5f2f14;
case 0x5f2f16:goto L5f2f16;
case 0x5f2f19:c.instructions+=5;goto B5f2f19;
case 0x5f2f1b:c.instructions+=4;goto B5f2f1b;
case 0x5f2f1c:c.instructions+=3;goto B5f2f1c;
case 0x5f2f1d:c.instructions+=2;goto B5f2f1d;
case 0x5f2f1f:c.instructions+=1;goto B5f2f1f;
case 0x5f2f24:goto L5f2f24;
case 0x5f2f26:goto L5f2f26;
case 0x5f2f28:goto L5f2f28;
case 0x5f2f2e:goto L5f2f2e;
case 0x5f2f34:c.instructions+=2;goto B5f2f34;
case 0x5f2f36:c.instructions+=1;goto B5f2f36;
case 0x5f2f38:goto L5f2f38;
case 0x5f2f3b:goto L5f2f3b;
case 0x5f2f42:c.instructions+=7;goto B5f2f42;
case 0x5f2f43:c.instructions+=6;goto B5f2f43;
case 0x5f2f44:c.instructions+=5;goto B5f2f44;
case 0x5f2f4b:c.instructions+=4;goto B5f2f4b;
case 0x5f2f4c:c.instructions+=3;goto B5f2f4c;
case 0x5f2f4e:c.instructions+=2;goto B5f2f4e;
case 0x5f2f4f:c.instructions+=1;goto B5f2f4f;
case 0x5f2fa0:goto L5f2fa0;
case 0x5f2fa1:c.instructions+=11;goto B5f2fa1;
case 0x5f2fa2:c.instructions+=10;goto B5f2fa2;
case 0x5f2fa4:c.instructions+=9;goto B5f2fa4;
case 0x5f2fa7:c.instructions+=8;goto B5f2fa7;
case 0x5f2faa:c.instructions+=7;goto B5f2faa;
case 0x5f2fae:c.instructions+=6;goto B5f2fae;
case 0x5f2fb1:c.instructions+=5;goto B5f2fb1;
case 0x5f2fb2:c.instructions+=4;goto B5f2fb2;
case 0x5f2fb3:c.instructions+=3;goto B5f2fb3;
case 0x5f2fb6:c.instructions+=2;goto B5f2fb6;
case 0x5f2fbd:c.instructions+=1;goto B5f2fbd;
case 0x5f2fc2:goto L5f2fc2;
case 0x5f2fc5:c.instructions+=4;goto B5f2fc5;
case 0x5f2fc8:c.instructions+=3;goto B5f2fc8;
case 0x5f2fcf:c.instructions+=2;goto B5f2fcf;
case 0x5f2fd0:c.instructions+=1;goto B5f2fd0;
case 0x5f2fd5:goto L5f2fd5;
case 0x5f2fd8:c.instructions+=4;goto B5f2fd8;
case 0x5f2fda:c.instructions+=3;goto B5f2fda;
case 0x5f2fdb:c.instructions+=2;goto B5f2fdb;
case 0x5f2fe1:c.instructions+=1;goto B5f2fe1;
case 0x5f2fe6:goto L5f2fe6;
case 0x5f2fe8:c.instructions+=1;goto B5f2fe8;
case 0x5f2fea:goto L5f2fea;
case 0x5f2ff0:c.instructions+=2;goto B5f2ff0;
case 0x5f2ff2:c.instructions+=1;goto B5f2ff2;
case 0x5f2ff4:goto L5f2ff4;
case 0x5f2ff6:c.instructions+=2;goto B5f2ff6;
case 0x5f2ff7:c.instructions+=1;goto B5f2ff7;
case 0x5f2ffa:goto L5f2ffa;
case 0x5f2ffc:c.instructions+=4;goto B5f2ffc;
case 0x5f2ffd:c.instructions+=3;goto B5f2ffd;
case 0x5f2ffe:c.instructions+=2;goto B5f2ffe;
case 0x5f2fff:c.instructions+=1;goto B5f2fff;
default:missing_instruction(c.pc);}
B5f2000:L5f2000:{c.instructions+=3;NFSU2_TR(0x5f2000);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f2002:{NFSU2_TR(0x5f2002);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2005:{NFSU2_TR(0x5f2005);
if(r1(R+518)){{goto L5f2010;}}
}
B5f2007:L5f2007:{c.instructions+=2;NFSU2_TR(0x5f2007);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f200a:{NFSU2_TR(0x5f200a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f2f3b;}}
}
B5f2010:L5f2010:{c.instructions+=4;NFSU2_TR(0x5f2010);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2016:{NFSU2_TR(0x5f2016);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5f2018:{NFSU2_TR(0x5f2018);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f201a:{NFSU2_TR(0x5f201a);
if(r1(R+518)){{goto L5f2034;}}
}
B5f201c:L5f201c:{c.instructions+=3;NFSU2_TR(0x5f201c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f201f:{NFSU2_TR(0x5f201f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f2021:{NFSU2_TR(0x5f2021);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f2034;}}
}
B5f2023:L5f2023:{c.instructions+=2;NFSU2_TR(0x5f2023);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f2026:{NFSU2_TR(0x5f2026);
if(r1(R+518)){{goto L5f2034;}}
}
B5f2028:L5f2028:{c.instructions+=2;NFSU2_TR(0x5f2028);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24aull))));
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
B5f202e:{NFSU2_TR(0x5f202e);
if(r1(R+518)){{goto L5f2f3b;}}
}
B5f2034:L5f2034:{c.instructions+=3;NFSU2_TR(0x5f2034);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B5f2039:{NFSU2_TR(0x5f2039);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5f203c:{NFSU2_TR(0x5f203c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f2047;}}
}
B5f203e:L5f203e:{c.instructions+=2;NFSU2_TR(0x5f203e);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x11ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x11ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x11ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f2041:{NFSU2_TR(0x5f2041);
if(r1(R+518)){{goto L5f2f3b;}}
}
B5f2047:L5f2047:{c.instructions+=4;NFSU2_TR(0x5f2047);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f204a:{NFSU2_TR(0x5f204a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f204c:{NFSU2_TR(0x5f204c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2050:{NFSU2_TR(0x5f2050);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f205e;}}
}
B5f2052:L5f2052:{c.instructions+=3;NFSU2_TR(0x5f2052);
__builtin_memmove((R+8),gp(0x890080),4);
}
B5f2058:{NFSU2_TR(0x5f2058);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f205a:{NFSU2_TR(0x5f205a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f205e:L5f205e:{c.instructions+=2;NFSU2_TR(0x5f205e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f2060:{NFSU2_TR(0x5f2060);
if(r1(R+518)){{goto L5f208c;}}
}
B5f2062:L5f2062:{c.instructions+=2;NFSU2_TR(0x5f2062);
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
B5f2065:{NFSU2_TR(0x5f2065);
if(r1(R+518)){{goto L5f2080;}}
}
B5f2067:L5f2067:{c.instructions+=5;NFSU2_TR(0x5f2067);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f206d:{NFSU2_TR(0x5f206d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2073:{NFSU2_TR(0x5f2073);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2079:{NFSU2_TR(0x5f2079);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f207b:{NFSU2_TR(0x5f207b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f207eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f207e:L5f207e:{c.instructions+=1;NFSU2_TR(0x5f207e);
{goto L5f2086;}
}
B5f2080:L5f2080:{c.instructions+=3;NFSU2_TR(0x5f2080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f2082:{NFSU2_TR(0x5f2082);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2084:{NFSU2_TR(0x5f2084);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2086ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5f2086:L5f2086:{c.instructions+=1;NFSU2_TR(0x5f2086);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f208c:L5f208c:{c.instructions+=9;NFSU2_TR(0x5f208c);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B5f2091:{NFSU2_TR(0x5f2091);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2097:{NFSU2_TR(0x5f2097);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5f209d:{NFSU2_TR(0x5f209d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f20a3:{NFSU2_TR(0x5f20a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f20a6:{NFSU2_TR(0x5f20a6);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5f20ac:{NFSU2_TR(0x5f20ac);
__builtin_memmove((R+28),(R+0),4);
}
B5f20ae:{NFSU2_TR(0x5f20ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f20b2:{NFSU2_TR(0x5f20b2);
if(r1(R+518)){{goto L5f20cc;}}
}
B5f20b4:L5f20b4:{c.instructions+=4;NFSU2_TR(0x5f20b4);
__builtin_memmove((R+8),gp(0x890118),4);
}
B5f20ba:{NFSU2_TR(0x5f20ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f20c0:{NFSU2_TR(0x5f20c0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f20c2:{NFSU2_TR(0x5f20c2);
if(r1(R+518)){{goto L5f20cc;}}
}
B5f20c4:L5f20c4:{c.instructions+=3;NFSU2_TR(0x5f20c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5f20c6:{NFSU2_TR(0x5f20c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f20ca:{NFSU2_TR(0x5f20ca);
__builtin_memmove((R+28),(R+4),4);
}
B5f20cc:L5f20cc:{c.instructions+=3;NFSU2_TR(0x5f20cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f20cf:{NFSU2_TR(0x5f20cf);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x15ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x15ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f20d2:{NFSU2_TR(0x5f20d2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5f2ef6;}}
}
B5f20d8:L5f20d8:{c.instructions+=2;NFSU2_TR(0x5f20d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5f2f84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5f20df:{NFSU2_TR(0x5f20df);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5f2f54ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f20e6:L5f20e6:{c.instructions+=16;NFSU2_TR(0x5f20e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f20ea:{NFSU2_TR(0x5f20ea);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f20ed:{NFSU2_TR(0x5f20ed);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f20ef:{NFSU2_TR(0x5f20ef);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f20f2:{NFSU2_TR(0x5f20f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f20f5:{NFSU2_TR(0x5f20f5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f20f7:{NFSU2_TR(0x5f20f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f20fb:{NFSU2_TR(0x5f20fb);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2102:{NFSU2_TR(0x5f2102);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f210a:{NFSU2_TR(0x5f210a);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f2112:{NFSU2_TR(0x5f2112);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2119:{NFSU2_TR(0x5f2119);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f2121:{NFSU2_TR(0x5f2121);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2125:{NFSU2_TR(0x5f2125);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f212b:{NFSU2_TR(0x5f212b);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2132:{NFSU2_TR(0x5f2132);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2137ull));
TAIL_STATIC(0x575620u,575);
}
B5f2137:L5f2137:{c.instructions+=5;NFSU2_TR(0x5f2137);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f213a:{NFSU2_TR(0x5f213a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f213e:{NFSU2_TR(0x5f213e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f2140:{NFSU2_TR(0x5f2140);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2147:{NFSU2_TR(0x5f2147);
if(r1(R+518)){{goto L5f2f26;}}
}
B5f214d:L5f214d:{c.instructions+=9;NFSU2_TR(0x5f214d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f214f:{NFSU2_TR(0x5f214f);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f2153:{NFSU2_TR(0x5f2153);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2154:{NFSU2_TR(0x5f2154);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2157:{NFSU2_TR(0x5f2157);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f215e:{NFSU2_TR(0x5f215e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f215f:{NFSU2_TR(0x5f215f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2160:{NFSU2_TR(0x5f2160);
__builtin_memmove((R+4),(R+0),4);
}
B5f2162:{NFSU2_TR(0x5f2162);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2167ull));
TAIL_STATIC(0x455b10u,455);
}
B5f2167:L5f2167:{c.instructions+=1;NFSU2_TR(0x5f2167);
{goto L5f2f28;}
}
B5f216c:L5f216c:{c.instructions+=2;NFSU2_TR(0x5f216c);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f216e:{NFSU2_TR(0x5f216e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2173ull));
TAIL_STATIC(0x575620u,575);
}
B5f2173:L5f2173:{c.instructions+=5;NFSU2_TR(0x5f2173);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f2176:{NFSU2_TR(0x5f2176);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f217a:{NFSU2_TR(0x5f217a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f217c:{NFSU2_TR(0x5f217c);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f2187:{NFSU2_TR(0x5f2187);
if(r1(R+518)){{goto L5f2f26;}}
}
B5f218d:L5f218d:{c.instructions+=5;NFSU2_TR(0x5f218d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2190:{NFSU2_TR(0x5f2190);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2192:{NFSU2_TR(0x5f2192);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2193:{NFSU2_TR(0x5f2193);
__builtin_memmove((R+4),(R+0),4);
}
B5f2195:{NFSU2_TR(0x5f2195);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f219aull));
TAIL_STATIC(0x44dbf0u,44d);
}
B5f219a:L5f219a:{c.instructions+=1;NFSU2_TR(0x5f219a);
{goto L5f2f28;}
}
B5f219f:L5f219f:{c.instructions+=2;NFSU2_TR(0x5f219f);
u8 U[4];
w4(U+0,u32(0xd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f21a4:{NFSU2_TR(0x5f21a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f21a9ull));
TAIL_STATIC(0x575620u,575);
}
B5f21a9:L5f21a9:{c.instructions+=5;NFSU2_TR(0x5f21a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f21ac:{NFSU2_TR(0x5f21ac);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f21b0:{NFSU2_TR(0x5f21b0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f21b2:{NFSU2_TR(0x5f21b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f21bd:{NFSU2_TR(0x5f21bd);
if(r1(R+518)){{goto L5f2f26;}}
}
B5f21c3:L5f21c3:{c.instructions+=7;NFSU2_TR(0x5f21c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f21c9:{NFSU2_TR(0x5f21c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f21cc:{NFSU2_TR(0x5f21cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f21cd:{NFSU2_TR(0x5f21cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f21ce:{NFSU2_TR(0x5f21ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f21cf:{NFSU2_TR(0x5f21cf);
__builtin_memmove((R+4),(R+0),4);
}
B5f21d1:{NFSU2_TR(0x5f21d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f21d6ull));
TAIL_STATIC(0x453c00u,453);
}
B5f21d6:L5f21d6:{c.instructions+=1;NFSU2_TR(0x5f21d6);
{goto L5f2f28;}
}
B5f21db:L5f21db:{c.instructions+=2;NFSU2_TR(0x5f21db);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f21dd:{NFSU2_TR(0x5f21dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f21e2ull));
TAIL_STATIC(0x575620u,575);
}
B5f21e2:L5f21e2:{c.instructions+=5;NFSU2_TR(0x5f21e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f21e5:{NFSU2_TR(0x5f21e5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f21e9:{NFSU2_TR(0x5f21e9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f21eb:{NFSU2_TR(0x5f21eb);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8cull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f21f6:{NFSU2_TR(0x5f21f6);
if(r1(R+518)){{goto L5f2f26;}}
}
B5f21fc:L5f21fc:{c.instructions+=4;NFSU2_TR(0x5f21fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f21ff:{NFSU2_TR(0x5f21ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2200:{NFSU2_TR(0x5f2200);
__builtin_memmove((R+4),(R+0),4);
}
B5f2202:{NFSU2_TR(0x5f2202);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2207ull));
TAIL_STATIC(0x44ed50u,44e);
}
B5f2207:L5f2207:{c.instructions+=1;NFSU2_TR(0x5f2207);
{goto L5f2f28;}
}
B5f220c:L5f220c:{c.instructions+=2;NFSU2_TR(0x5f220c);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f220e:{NFSU2_TR(0x5f220e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2213ull));
TAIL_STATIC(0x575620u,575);
}
B5f2213:L5f2213:{c.instructions+=5;NFSU2_TR(0x5f2213);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f2216:{NFSU2_TR(0x5f2216);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f221a:{NFSU2_TR(0x5f221a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f221c:{NFSU2_TR(0x5f221c);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8cull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f2227:{NFSU2_TR(0x5f2227);
if(r1(R+518)){{goto L5f2f26;}}
}
B5f222d:L5f222d:{c.instructions+=11;NFSU2_TR(0x5f222d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f2230:{NFSU2_TR(0x5f2230);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x249ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5f2236:{NFSU2_TR(0x5f2236);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f2238:{NFSU2_TR(0x5f2238);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B5f223b:{NFSU2_TR(0x5f223b);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f223f:{NFSU2_TR(0x5f223f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2243:{NFSU2_TR(0x5f2243);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2245:{NFSU2_TR(0x5f2245);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2246:{NFSU2_TR(0x5f2246);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2247:{NFSU2_TR(0x5f2247);
__builtin_memmove((R+4),(R+24),4);
}
B5f2249:{NFSU2_TR(0x5f2249);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f224eull));
TAIL_STATIC(0x5eb400u,5eb);
}
B5f224e:L5f224e:{c.instructions+=6;NFSU2_TR(0x5f224e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2251:{NFSU2_TR(0x5f2251);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2255:{NFSU2_TR(0x5f2255);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2256:{NFSU2_TR(0x5f2256);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2257:{NFSU2_TR(0x5f2257);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2258:{NFSU2_TR(0x5f2258);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f225dull));
TAIL_STATIC(0x451660u,451);
}
B5f225d:L5f225d:{c.instructions+=1;NFSU2_TR(0x5f225d);
{goto L5f2f28;}
}
B5f2262:L5f2262:{c.instructions+=2;NFSU2_TR(0x5f2262);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2264:{NFSU2_TR(0x5f2264);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2269ull));
TAIL_STATIC(0x575620u,575);
}
B5f2269:L5f2269:{c.instructions+=5;NFSU2_TR(0x5f2269);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f226c:{NFSU2_TR(0x5f226c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2270:{NFSU2_TR(0x5f2270);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f2272:{NFSU2_TR(0x5f2272);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8cull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f227d:{NFSU2_TR(0x5f227d);
if(r1(R+518)){{goto L5f2f26;}}
}
B5f2283:L5f2283:{c.instructions+=8;NFSU2_TR(0x5f2283);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2287:{NFSU2_TR(0x5f2287);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f228d:{NFSU2_TR(0x5f228d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f228e:{NFSU2_TR(0x5f228e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2291:{NFSU2_TR(0x5f2291);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2292:{NFSU2_TR(0x5f2292);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2293:{NFSU2_TR(0x5f2293);
__builtin_memmove((R+4),(R+0),4);
}
B5f2295:{NFSU2_TR(0x5f2295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f229aull));
TAIL_STATIC(0x4519e0u,451);
}
B5f229a:L5f229a:{c.instructions+=1;NFSU2_TR(0x5f229a);
{goto L5f2f28;}
}
B5f229f:L5f229f:{c.instructions+=2;NFSU2_TR(0x5f229f);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f22a4:{NFSU2_TR(0x5f22a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f22a9ull));
TAIL_STATIC(0x575620u,575);
}
B5f22a9:L5f22a9:{c.instructions+=5;NFSU2_TR(0x5f22a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f22ac:{NFSU2_TR(0x5f22ac);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f22b0:{NFSU2_TR(0x5f22b0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f22b2:{NFSU2_TR(0x5f22b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8cull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f22bd:{NFSU2_TR(0x5f22bd);
if(r1(R+518)){{goto L5f2f26;}}
}
B5f22c3:L5f22c3:{c.instructions+=5;NFSU2_TR(0x5f22c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f22c6:{NFSU2_TR(0x5f22c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f22c7:{NFSU2_TR(0x5f22c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f22c8:{NFSU2_TR(0x5f22c8);
__builtin_memmove((R+4),(R+0),4);
}
B5f22ca:{NFSU2_TR(0x5f22ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f22cfull));
TAIL_STATIC(0x452520u,452);
}
B5f22cf:L5f22cf:{c.instructions+=1;NFSU2_TR(0x5f22cf);
{goto L5f2f28;}
}
B5f22d4:L5f22d4:{c.instructions+=7;NFSU2_TR(0x5f22d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x648ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f22da:{NFSU2_TR(0x5f22da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x644ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f22e0:{NFSU2_TR(0x5f22e0);
__builtin_memmove((R+4),(R+0),4);
}
B5f22e2:{NFSU2_TR(0x5f22e2);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B5f22e4:{NFSU2_TR(0x5f22e4);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5f22e7:{NFSU2_TR(0x5f22e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f22eb:{NFSU2_TR(0x5f22eb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5f22f4;}}
}
B5f22ed:L5f22ed:{c.instructions+=2;NFSU2_TR(0x5f22ed);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f22f0:{NFSU2_TR(0x5f22f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f22f4:L5f22f4:{c.instructions+=12;NFSU2_TR(0x5f22f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f22fa:{NFSU2_TR(0x5f22fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5f22fc:{NFSU2_TR(0x5f22fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2302:{NFSU2_TR(0x5f2302);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2305:{NFSU2_TR(0x5f2305);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f230b:{NFSU2_TR(0x5f230b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f230e:{NFSU2_TR(0x5f230e);
u8 U[16];
w4(U+0,u32(u32(u32(0x2dcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B5f2315:{NFSU2_TR(0x5f2315);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2319:{NFSU2_TR(0x5f2319);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f231d:{NFSU2_TR(0x5f231d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2320:{NFSU2_TR(0x5f2320);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f2322:{NFSU2_TR(0x5f2322);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2325ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f2325:L5f2325:{c.instructions+=12;NFSU2_TR(0x5f2325);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2328:{NFSU2_TR(0x5f2328);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5f232a:{NFSU2_TR(0x5f232a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f232c:{NFSU2_TR(0x5f232c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B5f232f:{NFSU2_TR(0x5f232f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2333:{NFSU2_TR(0x5f2333);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5f2334:{NFSU2_TR(0x5f2334);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B5f2336:{NFSU2_TR(0x5f2336);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2337:{NFSU2_TR(0x5f2337);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2338:{NFSU2_TR(0x5f2338);
__builtin_memmove((R+4),(R+28),4);
}
B5f233a:{NFSU2_TR(0x5f233a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f233e:{NFSU2_TR(0x5f233e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2343ull));
TAIL_STATIC(0x412470u,412);
}
B5f2343:L5f2343:{c.instructions+=8;NFSU2_TR(0x5f2343);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2347:{NFSU2_TR(0x5f2347);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2348:{NFSU2_TR(0x5f2348);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f234b:{NFSU2_TR(0x5f234b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f234c:{NFSU2_TR(0x5f234c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f2350:{NFSU2_TR(0x5f2350);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2351:{NFSU2_TR(0x5f2351);
__builtin_memmove((R+4),(R+28),4);
}
B5f2353:{NFSU2_TR(0x5f2353);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2358ull));
TAIL_STATIC(0x4122c0u,412);
}
B5f2358:L5f2358:{c.instructions+=4;NFSU2_TR(0x5f2358);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f235c:{NFSU2_TR(0x5f235c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f235d:{NFSU2_TR(0x5f235d);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f2364:{NFSU2_TR(0x5f2364);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2369ull));
TAIL_STATIC(0x5ded90u,5de);
}
B5f2369:L5f2369:{c.instructions+=5;NFSU2_TR(0x5f2369);
u8 U[2];
__builtin_memmove((U+0),gp(0x88f2be),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f236f:{NFSU2_TR(0x5f236f);
__builtin_memmove((R+0),(R+518),1);
}
B5f2372:{NFSU2_TR(0x5f2372);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f2374:{NFSU2_TR(0x5f2374);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8cull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f237f:{NFSU2_TR(0x5f237f);
if(r1(R+518)){{goto L5f2389;}}
}
B5f2381:L5f2381:{c.instructions+=2;NFSU2_TR(0x5f2381);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2387:{NFSU2_TR(0x5f2387);
{goto L5f2392;}
}
B5f2389:L5f2389:{c.instructions+=2;NFSU2_TR(0x5f2389);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f238c:{NFSU2_TR(0x5f238c);
{u32 ea_=u32(r4(R+4)+u32(2296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2392:L5f2392:{c.instructions+=6;NFSU2_TR(0x5f2392);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f2394:{NFSU2_TR(0x5f2394);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f239a:{NFSU2_TR(0x5f239a);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f239d:{NFSU2_TR(0x5f239d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f23a3:{NFSU2_TR(0x5f23a3);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f23a6:{NFSU2_TR(0x5f23a6);
if(r1(R+518)){{goto L5f23b0;}}
}
B5f23a8:L5f23a8:{c.instructions+=2;NFSU2_TR(0x5f23a8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f23ae:{NFSU2_TR(0x5f23ae);
{goto L5f23b7;}
}
B5f23b0:L5f23b0:{c.instructions+=1;NFSU2_TR(0x5f23b0);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f23b7:L5f23b7:{c.instructions+=24;NFSU2_TR(0x5f23b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f23bd:{NFSU2_TR(0x5f23bd);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f23c0:{NFSU2_TR(0x5f23c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f23c6:{NFSU2_TR(0x5f23c6);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f23c9:{NFSU2_TR(0x5f23c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f23cf:{NFSU2_TR(0x5f23cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f23d2:{NFSU2_TR(0x5f23d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f23d8:{NFSU2_TR(0x5f23d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f23db:{NFSU2_TR(0x5f23db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f23e1:{NFSU2_TR(0x5f23e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f23e4:{NFSU2_TR(0x5f23e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f23ea:{NFSU2_TR(0x5f23ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f23f1:{NFSU2_TR(0x5f23f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f23f7:{NFSU2_TR(0x5f23f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f23fa:{NFSU2_TR(0x5f23fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2400:{NFSU2_TR(0x5f2400);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f2407:{NFSU2_TR(0x5f2407);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f240d:{NFSU2_TR(0x5f240d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
w4(U+4,u32(0x461c4000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f2414:{NFSU2_TR(0x5f2414);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f241a:{NFSU2_TR(0x5f241a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f241d:{NFSU2_TR(0x5f241d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2423:{NFSU2_TR(0x5f2423);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2429:{NFSU2_TR(0x5f2429);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f242c:{NFSU2_TR(0x5f242c);
w4(R+0,u32(0x30ull));
}
B5f2431:L5f2431:{c.instructions+=52;NFSU2_TR(0x5f2431);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2437:{NFSU2_TR(0x5f2437);
__builtin_memmove((R+28),gp(0x8020b8),4);
}
B5f243d:{NFSU2_TR(0x5f243d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5f2440:{NFSU2_TR(0x5f2440);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f2443:{NFSU2_TR(0x5f2443);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5f2447:{NFSU2_TR(0x5f2447);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5f244b:{NFSU2_TR(0x5f244b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5f244d:{NFSU2_TR(0x5f244d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2453:{NFSU2_TR(0x5f2453);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5f2457:{NFSU2_TR(0x5f2457);
__builtin_memmove((R+8),gp(0x8020b8),4);
}
B5f245d:{NFSU2_TR(0x5f245d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5f245f:{NFSU2_TR(0x5f245f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2462:{NFSU2_TR(0x5f2462);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2465:{NFSU2_TR(0x5f2465);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f246b:{NFSU2_TR(0x5f246b);
__builtin_memmove((R+8),gp(0x8020b8),4);
}
B5f2471:{NFSU2_TR(0x5f2471);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5f2475:{NFSU2_TR(0x5f2475);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5f2479:{NFSU2_TR(0x5f2479);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5f247d:{NFSU2_TR(0x5f247d);
__builtin_memmove((R+8),gp(0x8020b8),4);
}
B5f2483:{NFSU2_TR(0x5f2483);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5f2487:{NFSU2_TR(0x5f2487);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f248d:{NFSU2_TR(0x5f248d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f2490:{NFSU2_TR(0x5f2490);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5f2494:{NFSU2_TR(0x5f2494);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5f2498:{NFSU2_TR(0x5f2498);
__builtin_memmove((R+8),gp(0x8020b8),4);
}
B5f249e:{NFSU2_TR(0x5f249e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5f24a0:{NFSU2_TR(0x5f24a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f24a6:{NFSU2_TR(0x5f24a6);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5f24aa:{NFSU2_TR(0x5f24aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5f24ac:{NFSU2_TR(0x5f24ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f24af:{NFSU2_TR(0x5f24af);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f24b2:{NFSU2_TR(0x5f24b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f24b8:{NFSU2_TR(0x5f24b8);
__builtin_memmove((R+8),gp(0x8020b8),4);
}
B5f24be:{NFSU2_TR(0x5f24be);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5f24c2:{NFSU2_TR(0x5f24c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5f24c4:{NFSU2_TR(0x5f24c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f24c7:{NFSU2_TR(0x5f24c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f24ca:{NFSU2_TR(0x5f24ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f24d0:{NFSU2_TR(0x5f24d0);
__builtin_memmove((R+8),gp(0x8020b8),4);
}
B5f24d6:{NFSU2_TR(0x5f24d6);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5f24da:{NFSU2_TR(0x5f24da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5f24dc:{NFSU2_TR(0x5f24dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f24df:{NFSU2_TR(0x5f24df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f24e2:{NFSU2_TR(0x5f24e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f24e8:{NFSU2_TR(0x5f24e8);
__builtin_memmove((R+8),gp(0x8020b8),4);
}
B5f24ee:{NFSU2_TR(0x5f24ee);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5f24f2:{NFSU2_TR(0x5f24f2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B5f24f7:{NFSU2_TR(0x5f24f7);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x230ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x230ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5f24fc:{NFSU2_TR(0x5f24fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5f24fe:{NFSU2_TR(0x5f24fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2501:{NFSU2_TR(0x5f2501);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2504:{NFSU2_TR(0x5f2504);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f2431u);}goto L5f2431;}}
}
B5f250a:L5f250a:{c.instructions+=71;NFSU2_TR(0x5f250a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2510:{NFSU2_TR(0x5f2510);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f2517:{NFSU2_TR(0x5f2517);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f251d:{NFSU2_TR(0x5f251d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f2523:{NFSU2_TR(0x5f2523);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2526:{NFSU2_TR(0x5f2526);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f252c:{NFSU2_TR(0x5f252c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f2532:{NFSU2_TR(0x5f2532);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2535:{NFSU2_TR(0x5f2535);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5f2537:{NFSU2_TR(0x5f2537);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f253a:{NFSU2_TR(0x5f253a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f253d:{NFSU2_TR(0x5f253d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2543:{NFSU2_TR(0x5f2543);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2549:{NFSU2_TR(0x5f2549);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f254f:{NFSU2_TR(0x5f254f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2555:{NFSU2_TR(0x5f2555);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f255b:{NFSU2_TR(0x5f255b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2561:{NFSU2_TR(0x5f2561);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2567:{NFSU2_TR(0x5f2567);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f256a:{NFSU2_TR(0x5f256a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2570:{NFSU2_TR(0x5f2570);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2573:{NFSU2_TR(0x5f2573);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2579:{NFSU2_TR(0x5f2579);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f257c:{NFSU2_TR(0x5f257c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2582:{NFSU2_TR(0x5f2582);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2585:{NFSU2_TR(0x5f2585);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f258b:{NFSU2_TR(0x5f258b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f258e:{NFSU2_TR(0x5f258e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2594:{NFSU2_TR(0x5f2594);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2597:{NFSU2_TR(0x5f2597);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f259d:{NFSU2_TR(0x5f259d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f25a0:{NFSU2_TR(0x5f25a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f25a6:{NFSU2_TR(0x5f25a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f25a9:{NFSU2_TR(0x5f25a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f25af:{NFSU2_TR(0x5f25af);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f25b2:{NFSU2_TR(0x5f25b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f25b8:{NFSU2_TR(0x5f25b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f25be:{NFSU2_TR(0x5f25be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f25c4:{NFSU2_TR(0x5f25c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
w4(U+4,u32(0x3e4ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f25ce:{NFSU2_TR(0x5f25ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f25d4:{NFSU2_TR(0x5f25d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f25da:{NFSU2_TR(0x5f25da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f25e0:{NFSU2_TR(0x5f25e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f25e6:{NFSU2_TR(0x5f25e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f25ec:{NFSU2_TR(0x5f25ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f25f2:{NFSU2_TR(0x5f25f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f25f8:{NFSU2_TR(0x5f25f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f25fe:{NFSU2_TR(0x5f25fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2604:{NFSU2_TR(0x5f2604);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f260a:{NFSU2_TR(0x5f260a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f260e:{NFSU2_TR(0x5f260e);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2611:{NFSU2_TR(0x5f2611);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2614:{NFSU2_TR(0x5f2614);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2617:{NFSU2_TR(0x5f2617);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f261a:{NFSU2_TR(0x5f261a);
__builtin_memmove((R+8),(R+4),4);
}
B5f261c:{NFSU2_TR(0x5f261c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f261e:{NFSU2_TR(0x5f261e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2622:{NFSU2_TR(0x5f2622);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2626:{NFSU2_TR(0x5f2626);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f262a:{NFSU2_TR(0x5f262a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f262e:{NFSU2_TR(0x5f262e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2632:{NFSU2_TR(0x5f2632);
u8 U[16];
w4(U+0,u32(u32(u32(0x2dcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B5f2639:{NFSU2_TR(0x5f2639);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f263d:{NFSU2_TR(0x5f263d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f263f:{NFSU2_TR(0x5f263f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2643:{NFSU2_TR(0x5f2643);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2646:{NFSU2_TR(0x5f2646);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2647:{NFSU2_TR(0x5f2647);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f264b:{NFSU2_TR(0x5f264b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f264c:{NFSU2_TR(0x5f264c);
__builtin_memmove((R+4),(R+28),4);
}
B5f264e:{NFSU2_TR(0x5f264e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2651ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f2651:L5f2651:{c.instructions+=9;NFSU2_TR(0x5f2651);
{u32 ea_=u32(u32(8017184u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f2657:{NFSU2_TR(0x5f2657);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f265b:{NFSU2_TR(0x5f265b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f265c:{NFSU2_TR(0x5f265c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f265f:{NFSU2_TR(0x5f265f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2660:{NFSU2_TR(0x5f2660);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f2664:{NFSU2_TR(0x5f2664);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2665:{NFSU2_TR(0x5f2665);
__builtin_memmove((R+4),(R+28),4);
}
B5f2667:{NFSU2_TR(0x5f2667);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f266cull));
TAIL_STATIC(0x4122c0u,412);
}
B5f266c:L5f266c:{c.instructions+=8;NFSU2_TR(0x5f266c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f266f:{NFSU2_TR(0x5f266f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2673:{NFSU2_TR(0x5f2673);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2674:{NFSU2_TR(0x5f2674);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2678:{NFSU2_TR(0x5f2678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f267a:{NFSU2_TR(0x5f267a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f267b:{NFSU2_TR(0x5f267b);
__builtin_memmove((R+4),(R+28),4);
}
B5f267d:{NFSU2_TR(0x5f267d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2680ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f2680:L5f2680:{c.instructions+=9;NFSU2_TR(0x5f2680);
{u32 ea_=u32(u32(8017184u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f2686:{NFSU2_TR(0x5f2686);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f268a:{NFSU2_TR(0x5f268a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f268b:{NFSU2_TR(0x5f268b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f268e:{NFSU2_TR(0x5f268e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f268f:{NFSU2_TR(0x5f268f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f2696:{NFSU2_TR(0x5f2696);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2697:{NFSU2_TR(0x5f2697);
__builtin_memmove((R+4),(R+28),4);
}
B5f2699:{NFSU2_TR(0x5f2699);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f269eull));
TAIL_STATIC(0x4122c0u,412);
}
B5f269e:L5f269e:{c.instructions+=55;NFSU2_TR(0x5f269e);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f26a5:{NFSU2_TR(0x5f26a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f26a9:{NFSU2_TR(0x5f26a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f26ad:{NFSU2_TR(0x5f26ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f26b1:{NFSU2_TR(0x5f26b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f26b5:{NFSU2_TR(0x5f26b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f26bc:{NFSU2_TR(0x5f26bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f26c0:{NFSU2_TR(0x5f26c0);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f26c4:{NFSU2_TR(0x5f26c4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f26c8:{NFSU2_TR(0x5f26c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f26cc:{NFSU2_TR(0x5f26cc);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f26d0:{NFSU2_TR(0x5f26d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f26d7:{NFSU2_TR(0x5f26d7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f26db:{NFSU2_TR(0x5f26db);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f26df:{NFSU2_TR(0x5f26df);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f26e3:{NFSU2_TR(0x5f26e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f26e7:{NFSU2_TR(0x5f26e7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f26eb:{NFSU2_TR(0x5f26eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f26ef:{NFSU2_TR(0x5f26ef);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f26f3:{NFSU2_TR(0x5f26f3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f26f5:{NFSU2_TR(0x5f26f5);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f26fc:{NFSU2_TR(0x5f26fc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2700:{NFSU2_TR(0x5f2700);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f2703:{NFSU2_TR(0x5f2703);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f2705:{NFSU2_TR(0x5f2705);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f2708:{NFSU2_TR(0x5f2708);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f270a:{NFSU2_TR(0x5f270a);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2711:{NFSU2_TR(0x5f2711);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f2714:{NFSU2_TR(0x5f2714);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f2716:{NFSU2_TR(0x5f2716);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5f2718:{NFSU2_TR(0x5f2718);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f271c:{NFSU2_TR(0x5f271c);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2720:{NFSU2_TR(0x5f2720);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f2724:{NFSU2_TR(0x5f2724);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2728:{NFSU2_TR(0x5f2728);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f272c:{NFSU2_TR(0x5f272c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2730:{NFSU2_TR(0x5f2730);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f2732:{NFSU2_TR(0x5f2732);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2739:{NFSU2_TR(0x5f2739);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f273d:{NFSU2_TR(0x5f273d);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f2740:{NFSU2_TR(0x5f2740);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f2742:{NFSU2_TR(0x5f2742);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f2745:{NFSU2_TR(0x5f2745);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f2747:{NFSU2_TR(0x5f2747);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f274e:{NFSU2_TR(0x5f274e);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f2751:{NFSU2_TR(0x5f2751);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x644ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2757:{NFSU2_TR(0x5f2757);
u8 U[16];
w4(U+0,u32(u32(u32(0x2e4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B5f275e:{NFSU2_TR(0x5f275e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B5f2761:{NFSU2_TR(0x5f2761);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f2763:{NFSU2_TR(0x5f2763);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f2765:{NFSU2_TR(0x5f2765);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f2767:{NFSU2_TR(0x5f2767);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f2769:{NFSU2_TR(0x5f2769);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f276b:{NFSU2_TR(0x5f276b);
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
B5f276e:{NFSU2_TR(0x5f276e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f27c7;}}
}
B5f2770:L5f2770:{c.instructions+=13;NFSU2_TR(0x5f2770);
__builtin_memmove((R+4),(R+8),4);
}
B5f2772:{NFSU2_TR(0x5f2772);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2776:{NFSU2_TR(0x5f2776);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f277a:{NFSU2_TR(0x5f277a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f277e:{NFSU2_TR(0x5f277e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2782:{NFSU2_TR(0x5f2782);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2785:{NFSU2_TR(0x5f2785);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f2787:{NFSU2_TR(0x5f2787);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f278b:{NFSU2_TR(0x5f278b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f278f:{NFSU2_TR(0x5f278f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2790:{NFSU2_TR(0x5f2790);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2791:{NFSU2_TR(0x5f2791);
__builtin_memmove((R+4),(R+28),4);
}
B5f2793:{NFSU2_TR(0x5f2793);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2796ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f2796:L5f2796:{c.instructions+=9;NFSU2_TR(0x5f2796);
{u32 ea_=u32(u32(8017184u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f279c:{NFSU2_TR(0x5f279c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f27a0:{NFSU2_TR(0x5f27a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f27a1:{NFSU2_TR(0x5f27a1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f27a4:{NFSU2_TR(0x5f27a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f27a5:{NFSU2_TR(0x5f27a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f27a9:{NFSU2_TR(0x5f27a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f27aa:{NFSU2_TR(0x5f27aa);
__builtin_memmove((R+4),(R+28),4);
}
B5f27ac:{NFSU2_TR(0x5f27ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f27b1ull));
TAIL_STATIC(0x4122c0u,412);
}
B5f27b1:L5f27b1:{c.instructions+=4;NFSU2_TR(0x5f27b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f27b7:{NFSU2_TR(0x5f27b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
w4(U+4,u32(0x3ecccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f27c1:{NFSU2_TR(0x5f27c1);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f27c5:{NFSU2_TR(0x5f27c5);
{goto L5f2825;}
}
B5f27c7:L5f27c7:{c.instructions+=15;NFSU2_TR(0x5f27c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f27cb:{NFSU2_TR(0x5f27cb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f27cd:{NFSU2_TR(0x5f27cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f27d1:{NFSU2_TR(0x5f27d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f27d5:{NFSU2_TR(0x5f27d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f27d9:{NFSU2_TR(0x5f27d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f27dd:{NFSU2_TR(0x5f27dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f27e1:{NFSU2_TR(0x5f27e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f27e4:{NFSU2_TR(0x5f27e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f27e6:{NFSU2_TR(0x5f27e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f27ea:{NFSU2_TR(0x5f27ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f27ee:{NFSU2_TR(0x5f27ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f27ef:{NFSU2_TR(0x5f27ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f27f0:{NFSU2_TR(0x5f27f0);
__builtin_memmove((R+4),(R+28),4);
}
B5f27f2:{NFSU2_TR(0x5f27f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f27f5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f27f5:L5f27f5:{c.instructions+=9;NFSU2_TR(0x5f27f5);
{u32 ea_=u32(u32(8017184u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f27fb:{NFSU2_TR(0x5f27fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f27ff:{NFSU2_TR(0x5f27ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2800:{NFSU2_TR(0x5f2800);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2803:{NFSU2_TR(0x5f2803);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2804:{NFSU2_TR(0x5f2804);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f2808:{NFSU2_TR(0x5f2808);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2809:{NFSU2_TR(0x5f2809);
__builtin_memmove((R+4),(R+28),4);
}
B5f280b:{NFSU2_TR(0x5f280b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2810ull));
TAIL_STATIC(0x4122c0u,412);
}
B5f2810:L5f2810:{c.instructions+=3;NFSU2_TR(0x5f2810);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2816:{NFSU2_TR(0x5f2816);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
w4(U+4,u32(0xbecccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f2820:{NFSU2_TR(0x5f2820);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f2825:L5f2825:{c.instructions+=12;NFSU2_TR(0x5f2825);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2829:{NFSU2_TR(0x5f2829);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x644ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f282f:{NFSU2_TR(0x5f282f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5f2830:{NFSU2_TR(0x5f2830);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2831:{NFSU2_TR(0x5f2831);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2832:{NFSU2_TR(0x5f2832);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2836:{NFSU2_TR(0x5f2836);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5f283c:{NFSU2_TR(0x5f283c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f283d:{NFSU2_TR(0x5f283d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f2841:{NFSU2_TR(0x5f2841);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2842:{NFSU2_TR(0x5f2842);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2843:{NFSU2_TR(0x5f2843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2848ull));
TAIL_STATIC(0x41ce90u,41c);
}
B5f2848:L5f2848:{c.instructions+=3;NFSU2_TR(0x5f2848);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5f284b:{NFSU2_TR(0x5f284b);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f284d:{NFSU2_TR(0x5f284d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f2912;}}
}
B5f2853:L5f2853:{c.instructions+=2;NFSU2_TR(0x5f2853);
u8 U[10];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
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
B5f2857:{NFSU2_TR(0x5f2857);
if(r1(R+518)){{goto L5f28bb;}}
}
B5f2859:L5f2859:{c.instructions+=14;NFSU2_TR(0x5f2859);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2860:{NFSU2_TR(0x5f2860);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2867:{NFSU2_TR(0x5f2867);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f286e:{NFSU2_TR(0x5f286e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2872:{NFSU2_TR(0x5f2872);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2876:{NFSU2_TR(0x5f2876);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f287a:{NFSU2_TR(0x5f287a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f287e:{NFSU2_TR(0x5f287e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2881:{NFSU2_TR(0x5f2881);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2882:{NFSU2_TR(0x5f2882);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2886:{NFSU2_TR(0x5f2886);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f2888:{NFSU2_TR(0x5f2888);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2889:{NFSU2_TR(0x5f2889);
__builtin_memmove((R+4),(R+28),4);
}
B5f288b:{NFSU2_TR(0x5f288b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f288eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f288e:L5f288e:{c.instructions+=9;NFSU2_TR(0x5f288e);
{u32 ea_=u32(u32(8017184u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f2894:{NFSU2_TR(0x5f2894);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2898:{NFSU2_TR(0x5f2898);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2899:{NFSU2_TR(0x5f2899);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f289c:{NFSU2_TR(0x5f289c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f289d:{NFSU2_TR(0x5f289d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f28a1:{NFSU2_TR(0x5f28a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f28a2:{NFSU2_TR(0x5f28a2);
__builtin_memmove((R+4),(R+28),4);
}
B5f28a4:{NFSU2_TR(0x5f28a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f28a9ull));
TAIL_STATIC(0x4122c0u,412);
}
B5f28a9:L5f28a9:{c.instructions+=3;NFSU2_TR(0x5f28a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f28af:{NFSU2_TR(0x5f28af);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
w4(U+4,u32(0x3ecccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f28b9:{NFSU2_TR(0x5f28b9);
{goto L5f2912;}
}
B5f28bb:L5f28bb:{c.instructions+=14;NFSU2_TR(0x5f28bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f28bf:{NFSU2_TR(0x5f28bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f28c3:{NFSU2_TR(0x5f28c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f28c7:{NFSU2_TR(0x5f28c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f28cb:{NFSU2_TR(0x5f28cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f28cf:{NFSU2_TR(0x5f28cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f28d3:{NFSU2_TR(0x5f28d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f28d6:{NFSU2_TR(0x5f28d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f28d8:{NFSU2_TR(0x5f28d8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f28dc:{NFSU2_TR(0x5f28dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f28e0:{NFSU2_TR(0x5f28e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f28e1:{NFSU2_TR(0x5f28e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f28e2:{NFSU2_TR(0x5f28e2);
__builtin_memmove((R+4),(R+28),4);
}
B5f28e4:{NFSU2_TR(0x5f28e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f28e7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f28e7:L5f28e7:{c.instructions+=9;NFSU2_TR(0x5f28e7);
{u32 ea_=u32(u32(8017184u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f28ed:{NFSU2_TR(0x5f28ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f28f1:{NFSU2_TR(0x5f28f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f28f2:{NFSU2_TR(0x5f28f2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f28f5:{NFSU2_TR(0x5f28f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f28f6:{NFSU2_TR(0x5f28f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f28fa:{NFSU2_TR(0x5f28fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f28fb:{NFSU2_TR(0x5f28fb);
__builtin_memmove((R+4),(R+28),4);
}
B5f28fd:{NFSU2_TR(0x5f28fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2902ull));
TAIL_STATIC(0x4122c0u,412);
}
B5f2902:L5f2902:{c.instructions+=2;NFSU2_TR(0x5f2902);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2908:{NFSU2_TR(0x5f2908);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
w4(U+4,u32(0xbecccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f2912:L5f2912:{c.instructions+=8;NFSU2_TR(0x5f2912);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2916:{NFSU2_TR(0x5f2916);
u8 U[4];
w4(U+0,u32(u32(u32(0x318ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f291d:{NFSU2_TR(0x5f291d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f2923:{NFSU2_TR(0x5f2923);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2927:{NFSU2_TR(0x5f2927);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f292b:{NFSU2_TR(0x5f292b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f2931:{NFSU2_TR(0x5f2931);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2935:{NFSU2_TR(0x5f2935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f293aull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B5f293a:L5f293a:{c.instructions+=8;NFSU2_TR(0x5f293a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f293b:{NFSU2_TR(0x5f293b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f293c:{NFSU2_TR(0x5f293c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f293d:{NFSU2_TR(0x5f293d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f2941:{NFSU2_TR(0x5f2941);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2942:{NFSU2_TR(0x5f2942);
u8 U[4];
w4(U+0,u32(u32(u32(0x328ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f2949:{NFSU2_TR(0x5f2949);
u8 U[5];
w4(U+0,u32(u32(u32(0xb9cull))+u32(r4(R+16))));
w1(U+4,u8(0x8ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f2951:{NFSU2_TR(0x5f2951);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2956ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B5f2956:L5f2956:{c.instructions+=5;NFSU2_TR(0x5f2956);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f295a:{NFSU2_TR(0x5f295a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f295c:{NFSU2_TR(0x5f295c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f295e:{NFSU2_TR(0x5f295e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f2961:{NFSU2_TR(0x5f2961);
if(r1(R+514)){{goto L5f296f;}}
}
B5f2963:L5f2963:{c.instructions+=3;NFSU2_TR(0x5f2963);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f2969:{NFSU2_TR(0x5f2969);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f296d:{NFSU2_TR(0x5f296d);
{goto L5f2971;}
}
B5f296f:L5f296f:{c.instructions+=1;NFSU2_TR(0x5f296f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f2971:L5f2971:{c.instructions+=18;NFSU2_TR(0x5f2971);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2975:{NFSU2_TR(0x5f2975);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2979:{NFSU2_TR(0x5f2979);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f297d:{NFSU2_TR(0x5f297d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2983:{NFSU2_TR(0x5f2983);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2989:{NFSU2_TR(0x5f2989);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f298f:{NFSU2_TR(0x5f298f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2995:{NFSU2_TR(0x5f2995);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2999:{NFSU2_TR(0x5f2999);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x288ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f299f:{NFSU2_TR(0x5f299f);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f29a3:{NFSU2_TR(0x5f29a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f29a9:{NFSU2_TR(0x5f29a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f29ad:{NFSU2_TR(0x5f29ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x290ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f29b3:{NFSU2_TR(0x5f29b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f29b9:{NFSU2_TR(0x5f29b9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f29bb:{NFSU2_TR(0x5f29bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x294ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f29c1:{NFSU2_TR(0x5f29c1);
w4(R+4,u32(0x8cull));
}
B5f29c6:{NFSU2_TR(0x5f29c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x630ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5f29cd:L5f29cd:{c.instructions+=1;NFSU2_TR(0x5f29cd);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5f29cf;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f29cdu);}goto L5f29cd;}
}
B5f29cf:L5f29cf:{c.instructions+=15;NFSU2_TR(0x5f29cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f29d3:{NFSU2_TR(0x5f29d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f29d6:{NFSU2_TR(0x5f29d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f29da:{NFSU2_TR(0x5f29da);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f29dd:{NFSU2_TR(0x5f29dd);
__builtin_memmove((R+8),(R+4),4);
}
B5f29df:{NFSU2_TR(0x5f29df);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f29e2:{NFSU2_TR(0x5f29e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f29e5:{NFSU2_TR(0x5f29e5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f29e7:{NFSU2_TR(0x5f29e7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f29e9:{NFSU2_TR(0x5f29e9);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f29ed:{NFSU2_TR(0x5f29ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x658ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f29f8:{NFSU2_TR(0x5f29f8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f29fc:{NFSU2_TR(0x5f29fc);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2a00:{NFSU2_TR(0x5f2a00);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2a04:{NFSU2_TR(0x5f2a04);
if(r1(R+518)){{goto L5f2a4f;}}
}
B5f2a06:L5f2a06:{c.instructions+=7;NFSU2_TR(0x5f2a06);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
}
B5f2a0b:{NFSU2_TR(0x5f2a0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2a0c:{NFSU2_TR(0x5f2a0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f2a12:{NFSU2_TR(0x5f2a12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2a13:{NFSU2_TR(0x5f2a13);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f2a17:{NFSU2_TR(0x5f2a17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2a18:{NFSU2_TR(0x5f2a18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2a1dull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5f2a1d:L5f2a1d:{c.instructions+=15;NFSU2_TR(0x5f2a1d);
{u32 ea_=u32(r4(R+28)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2a20:{NFSU2_TR(0x5f2a20);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2a23:{NFSU2_TR(0x5f2a23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2a26:{NFSU2_TR(0x5f2a26);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f2a28:{NFSU2_TR(0x5f2a28);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2a2c:{NFSU2_TR(0x5f2a2c);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f2a30:{NFSU2_TR(0x5f2a30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f2a33:{NFSU2_TR(0x5f2a33);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2a37:{NFSU2_TR(0x5f2a37);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2a3b:{NFSU2_TR(0x5f2a3b);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5f2a3d:{NFSU2_TR(0x5f2a3d);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2a41:{NFSU2_TR(0x5f2a41);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f2a43:{NFSU2_TR(0x5f2a43);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2a47:{NFSU2_TR(0x5f2a47);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f2a4b:{NFSU2_TR(0x5f2a4b);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2a4f:L5f2a4f:{c.instructions+=9;NFSU2_TR(0x5f2a4f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2a51:{NFSU2_TR(0x5f2a51);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2a52:{NFSU2_TR(0x5f2a52);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2a53:{NFSU2_TR(0x5f2a53);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f2a57:{NFSU2_TR(0x5f2a57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2a58:{NFSU2_TR(0x5f2a58);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f2a5c:{NFSU2_TR(0x5f2a5c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2a5d:{NFSU2_TR(0x5f2a5d);
u8 U[4];
w4(U+0,u32(u32(u32(0x32cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f2a64:{NFSU2_TR(0x5f2a64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2a69ull));
TAIL_STATIC(0x5e7ed0u,5e7);
}
B5f2a69:L5f2a69:{c.instructions+=2;NFSU2_TR(0x5f2a69);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f2a6b:{NFSU2_TR(0x5f2a6b);
if(r1(R+518)){{goto L5f2ac8;}}
}
B5f2a6d:L5f2a6d:{c.instructions+=2;NFSU2_TR(0x5f2a6d);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2a6f:{NFSU2_TR(0x5f2a6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2a74ull));
TAIL_STATIC(0x575620u,575);
}
B5f2a74:L5f2a74:{c.instructions+=5;NFSU2_TR(0x5f2a74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f2a77:{NFSU2_TR(0x5f2a77);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2a7b:{NFSU2_TR(0x5f2a7b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f2a7d:{NFSU2_TR(0x5f2a7d);
u8 U[5];
w4(U+0,u32(u32(u32(0xb8cull))+u32(r4(R+16))));
w1(U+4,u8(0x9ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f2a85:{NFSU2_TR(0x5f2a85);
if(r1(R+518)){{goto L5f2b03;}}
}
B5f2a87:L5f2a87:{c.instructions+=7;NFSU2_TR(0x5f2a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2a8a:{NFSU2_TR(0x5f2a8a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x249ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5f2a90:{NFSU2_TR(0x5f2a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5f2a93:{NFSU2_TR(0x5f2a93);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa74ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5f2a9a:{NFSU2_TR(0x5f2a9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2a9b:{NFSU2_TR(0x5f2a9b);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f2a9f:{NFSU2_TR(0x5f2a9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2aa4ull));
TAIL_STATIC(0x502500u,502);
}
B5f2aa4:L5f2aa4:{c.instructions+=14;NFSU2_TR(0x5f2aa4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f2aa7:{NFSU2_TR(0x5f2aa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2aab:{NFSU2_TR(0x5f2aab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f2aae:{NFSU2_TR(0x5f2aae);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f2ab0:{NFSU2_TR(0x5f2ab0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B5f2ab3:{NFSU2_TR(0x5f2ab3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2ab5:{NFSU2_TR(0x5f2ab5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2ab6:{NFSU2_TR(0x5f2ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2ab9:{NFSU2_TR(0x5f2ab9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2aba:{NFSU2_TR(0x5f2aba);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2abe:{NFSU2_TR(0x5f2abe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2abf:{NFSU2_TR(0x5f2abf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2ac0:{NFSU2_TR(0x5f2ac0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2ac1:{NFSU2_TR(0x5f2ac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2ac6ull));
TAIL_STATIC(0x451660u,451);
}
B5f2ac6:L5f2ac6:{c.instructions+=1;NFSU2_TR(0x5f2ac6);
{goto L5f2b05;}
}
B5f2ac8:L5f2ac8:{c.instructions+=2;NFSU2_TR(0x5f2ac8);
u8 U[4];
w4(U+0,u32(0x470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2acd:{NFSU2_TR(0x5f2acd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2ad2ull));
TAIL_STATIC(0x575620u,575);
}
B5f2ad2:L5f2ad2:{c.instructions+=5;NFSU2_TR(0x5f2ad2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f2ad5:{NFSU2_TR(0x5f2ad5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2ad9:{NFSU2_TR(0x5f2ad9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f2adb:{NFSU2_TR(0x5f2adb);
u8 U[5];
w4(U+0,u32(u32(u32(0xb8cull))+u32(r4(R+16))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f2ae3:{NFSU2_TR(0x5f2ae3);
if(r1(R+518)){{goto L5f2b03;}}
}
B5f2ae5:L5f2ae5:{c.instructions+=10;NFSU2_TR(0x5f2ae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2aeb:{NFSU2_TR(0x5f2aeb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2aec:{NFSU2_TR(0x5f2aec);
u8 U[4];
w4(U+0,u32(u32(u32(0x634ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f2af3:{NFSU2_TR(0x5f2af3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2af4:{NFSU2_TR(0x5f2af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2af7:{NFSU2_TR(0x5f2af7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2af8:{NFSU2_TR(0x5f2af8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2af9:{NFSU2_TR(0x5f2af9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2afa:{NFSU2_TR(0x5f2afa);
__builtin_memmove((R+4),(R+0),4);
}
B5f2afc:{NFSU2_TR(0x5f2afc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2b01ull));
TAIL_STATIC(0x44bea0u,44b);
}
B5f2b01:L5f2b01:{c.instructions+=1;NFSU2_TR(0x5f2b01);
{goto L5f2b05;}
}
B5f2b03:L5f2b03:{c.instructions+=1;NFSU2_TR(0x5f2b03);
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
B5f2b05:L5f2b05:{c.instructions+=4;NFSU2_TR(0x5f2b05);
u8 U[4];
w4(U+0,u32(u32(u32(0x318ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f2b0c:{NFSU2_TR(0x5f2b0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2b12:{NFSU2_TR(0x5f2b12);
u8 U[5];
w4(U+0,u32(u32(u32(0xb8cull))+u32(r4(R+16))));
w1(U+4,u8(0x7ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f2b1a:{NFSU2_TR(0x5f2b1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2b1full));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B5f2b1f:L5f2b1f:{c.instructions+=3;NFSU2_TR(0x5f2b1f);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f2b26:{NFSU2_TR(0x5f2b26);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f2b31:{NFSU2_TR(0x5f2b31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2b36ull));
TAIL_STATIC(0x4022c0u,402);
}
B5f2b36:L5f2b36:{c.instructions+=1;NFSU2_TR(0x5f2b36);
{goto L5f2f2e;}
}
B5f2b3b:L5f2b3b:{c.instructions+=2;NFSU2_TR(0x5f2b3b);
u8 U[2];
__builtin_memmove((U+0),gp(0x88f2be),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f2b41:{NFSU2_TR(0x5f2b41);
if(r1(R+518)){{goto L5f2b5e;}}
}
B5f2b43:L5f2b43:{c.instructions+=6;NFSU2_TR(0x5f2b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2b49:{NFSU2_TR(0x5f2b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2b4f:{NFSU2_TR(0x5f2b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2b52:{NFSU2_TR(0x5f2b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2b58:{NFSU2_TR(0x5f2b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2b5b:{NFSU2_TR(0x5f2b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2b5e:L5f2b5e:{c.instructions+=6;NFSU2_TR(0x5f2b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2b61:{NFSU2_TR(0x5f2b61);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2b64:{NFSU2_TR(0x5f2b64);
{u32 ea_=u32(r4(R+24)+u32(664u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f2b6a:{NFSU2_TR(0x5f2b6a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f2b6c:{NFSU2_TR(0x5f2b6c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f2b6f:{NFSU2_TR(0x5f2b6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f2b79;}}
}
B5f2b71:L5f2b71:{c.instructions+=2;NFSU2_TR(0x5f2b71);
{u32 ea_=u32(r4(R+24)+u32(664u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2b77:{NFSU2_TR(0x5f2b77);
{goto L5f2b7b;}
}
B5f2b79:L5f2b79:{c.instructions+=1;NFSU2_TR(0x5f2b79);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f2b7b:L5f2b7b:{c.instructions+=2;NFSU2_TR(0x5f2b7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x868ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f2b82:{NFSU2_TR(0x5f2b82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2b87ull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B5f2b87:L5f2b87:{c.instructions+=8;NFSU2_TR(0x5f2b87);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2b88:{NFSU2_TR(0x5f2b88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2b89:{NFSU2_TR(0x5f2b89);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2b8a:{NFSU2_TR(0x5f2b8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x290ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f2b90:{NFSU2_TR(0x5f2b90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2b91:{NFSU2_TR(0x5f2b91);
u8 U[4];
w4(U+0,u32(u32(u32(0x878ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f2b98:{NFSU2_TR(0x5f2b98);
u8 U[8];
w4(U+0,u32(u32(u32(0xb9cull))+u32(r4(R+16))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f2ba3:{NFSU2_TR(0x5f2ba3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2ba8ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B5f2ba8:L5f2ba8:{c.instructions+=4;NFSU2_TR(0x5f2ba8);
{u32 ea_=u32(r4(R+24)+u32(664u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f2bae:{NFSU2_TR(0x5f2bae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f2bb0:{NFSU2_TR(0x5f2bb0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f2bb3:{NFSU2_TR(0x5f2bb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f2bc3;}}
}
B5f2bb5:L5f2bb5:{c.instructions+=3;NFSU2_TR(0x5f2bb5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f2bbb:{NFSU2_TR(0x5f2bbb);
{u32 ea_=u32(r4(R+24)+u32(664u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2bc1:{NFSU2_TR(0x5f2bc1);
{goto L5f2bc5;}
}
B5f2bc3:L5f2bc3:{c.instructions+=1;NFSU2_TR(0x5f2bc3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f2bc5:L5f2bc5:{c.instructions+=25;NFSU2_TR(0x5f2bc5);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2bc7:{NFSU2_TR(0x5f2bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2bca:{NFSU2_TR(0x5f2bca);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2bcd:{NFSU2_TR(0x5f2bcd);
__builtin_memmove((R+0),(R+8),4);
}
B5f2bcf:{NFSU2_TR(0x5f2bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2bd5:{NFSU2_TR(0x5f2bd5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f2bd7:{NFSU2_TR(0x5f2bd7);
{u32 ea_=u32(r4(R+24)+u32(624u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2bdd:{NFSU2_TR(0x5f2bdd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2be1:{NFSU2_TR(0x5f2be1);
{u32 ea_=u32(r4(R+24)+u32(628u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2be7:{NFSU2_TR(0x5f2be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2bea:{NFSU2_TR(0x5f2bea);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2bec:{NFSU2_TR(0x5f2bec);
__builtin_memmove((R+8),(R+4),4);
}
B5f2bee:{NFSU2_TR(0x5f2bee);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2bf1:{NFSU2_TR(0x5f2bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x288ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2bf7:{NFSU2_TR(0x5f2bf7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f2bf9:{NFSU2_TR(0x5f2bf9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2bfd:{NFSU2_TR(0x5f2bfd);
{u32 ea_=u32(r4(R+24)+u32(640u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2c03:{NFSU2_TR(0x5f2c03);
{u32 ea_=u32(r4(R+24)+u32(644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2c09:{NFSU2_TR(0x5f2c09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2c0f:{NFSU2_TR(0x5f2c0f);
{u32 ea_=u32(r4(R+0)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2c15:{NFSU2_TR(0x5f2c15);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5f2c17:{NFSU2_TR(0x5f2c17);
{u32 ea_=u32(r4(R+0)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2c1d:{NFSU2_TR(0x5f2c1d);
w4(R+0,u32(0x30ull));
}
B5f2c22:{NFSU2_TR(0x5f2c22);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2c28:{NFSU2_TR(0x5f2c28);
{goto L5f2c30;}
}
B5f2c30:L5f2c30:{c.instructions+=76;NFSU2_TR(0x5f2c30);
{u32 ea_=u32(u32(8396988u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2c36:{NFSU2_TR(0x5f2c36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2c3c:{NFSU2_TR(0x5f2c3c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f2c3e:{NFSU2_TR(0x5f2c3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5f2c41:{NFSU2_TR(0x5f2c41);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5f2c43:{NFSU2_TR(0x5f2c43);
{u32 ea_=u32(u32(8396984u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5f2c49:{NFSU2_TR(0x5f2c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2c4c:{NFSU2_TR(0x5f2c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2c4f:{NFSU2_TR(0x5f2c4f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2c51:{NFSU2_TR(0x5f2c51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2c57:{NFSU2_TR(0x5f2c57);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5f2c5b:{NFSU2_TR(0x5f2c5b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f2c61:{NFSU2_TR(0x5f2c61);
{u32 ea_=u32(u32(8396988u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2c67:{NFSU2_TR(0x5f2c67);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f2c69:{NFSU2_TR(0x5f2c69);
{u32 ea_=u32(u32(8396984u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5f2c6f:{NFSU2_TR(0x5f2c6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2c72:{NFSU2_TR(0x5f2c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2c75:{NFSU2_TR(0x5f2c75);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2c77:{NFSU2_TR(0x5f2c77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2c7d:{NFSU2_TR(0x5f2c7d);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5f2c81:{NFSU2_TR(0x5f2c81);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f2c87:{NFSU2_TR(0x5f2c87);
{u32 ea_=u32(u32(8396988u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2c8d:{NFSU2_TR(0x5f2c8d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f2c8f:{NFSU2_TR(0x5f2c8f);
{u32 ea_=u32(u32(8396984u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5f2c95:{NFSU2_TR(0x5f2c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2c98:{NFSU2_TR(0x5f2c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2c9b:{NFSU2_TR(0x5f2c9b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2c9d:{NFSU2_TR(0x5f2c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2ca3:{NFSU2_TR(0x5f2ca3);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5f2ca5:{NFSU2_TR(0x5f2ca5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f2cab:{NFSU2_TR(0x5f2cab);
{u32 ea_=u32(u32(8396988u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2cb1:{NFSU2_TR(0x5f2cb1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f2cb3:{NFSU2_TR(0x5f2cb3);
{u32 ea_=u32(u32(8396984u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5f2cb9:{NFSU2_TR(0x5f2cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2cbc:{NFSU2_TR(0x5f2cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2cbf:{NFSU2_TR(0x5f2cbf);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2cc1:{NFSU2_TR(0x5f2cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2cc7:{NFSU2_TR(0x5f2cc7);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5f2ccb:{NFSU2_TR(0x5f2ccb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f2cd1:{NFSU2_TR(0x5f2cd1);
{u32 ea_=u32(u32(8396988u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2cd7:{NFSU2_TR(0x5f2cd7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f2cd9:{NFSU2_TR(0x5f2cd9);
{u32 ea_=u32(u32(8396984u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5f2cdf:{NFSU2_TR(0x5f2cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2ce2:{NFSU2_TR(0x5f2ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2ce5:{NFSU2_TR(0x5f2ce5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2ce7:{NFSU2_TR(0x5f2ce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2ced:{NFSU2_TR(0x5f2ced);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5f2cf1:{NFSU2_TR(0x5f2cf1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f2cf7:{NFSU2_TR(0x5f2cf7);
{u32 ea_=u32(u32(8396988u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2cfd:{NFSU2_TR(0x5f2cfd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f2cff:{NFSU2_TR(0x5f2cff);
{u32 ea_=u32(u32(8396984u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5f2d05:{NFSU2_TR(0x5f2d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2d08:{NFSU2_TR(0x5f2d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2d0b:{NFSU2_TR(0x5f2d0b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2d0d:{NFSU2_TR(0x5f2d0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2d13:{NFSU2_TR(0x5f2d13);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5f2d17:{NFSU2_TR(0x5f2d17);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f2d1d:{NFSU2_TR(0x5f2d1d);
{u32 ea_=u32(u32(8396988u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2d23:{NFSU2_TR(0x5f2d23);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f2d25:{NFSU2_TR(0x5f2d25);
{u32 ea_=u32(u32(8396984u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5f2d2b:{NFSU2_TR(0x5f2d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2d2e:{NFSU2_TR(0x5f2d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2d31:{NFSU2_TR(0x5f2d31);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2d33:{NFSU2_TR(0x5f2d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2d39:{NFSU2_TR(0x5f2d39);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5f2d3d:{NFSU2_TR(0x5f2d3d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f2d43:{NFSU2_TR(0x5f2d43);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B5f2d48:{NFSU2_TR(0x5f2d48);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x230ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x230ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5f2d4d:{NFSU2_TR(0x5f2d4d);
{u32 ea_=u32(u32(8396988u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2d53:{NFSU2_TR(0x5f2d53);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f2d55:{NFSU2_TR(0x5f2d55);
{u32 ea_=u32(u32(8396984u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5f2d5b:{NFSU2_TR(0x5f2d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2d5e:{NFSU2_TR(0x5f2d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2d61:{NFSU2_TR(0x5f2d61);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2d63:{NFSU2_TR(0x5f2d63);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f2d69:{NFSU2_TR(0x5f2d69);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f2c30u);}goto L5f2c30;}}
}
B5f2d6f:L5f2d6f:{c.instructions+=4;NFSU2_TR(0x5f2d6f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f2d71:{NFSU2_TR(0x5f2d71);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f2d73:{NFSU2_TR(0x5f2d73);
w4(R+4,u32(0x8cull));
}
B5f2d78:{NFSU2_TR(0x5f2d78);
u8 U[4];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5f2d7f:L5f2d7f:{c.instructions+=1;NFSU2_TR(0x5f2d7f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5f2d81;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f2d7fu);}goto L5f2d7f;}
}
B5f2d81:L5f2d81:{c.instructions+=15;NFSU2_TR(0x5f2d81);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2d85:{NFSU2_TR(0x5f2d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2d88:{NFSU2_TR(0x5f2d88);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f2d8c:{NFSU2_TR(0x5f2d8c);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2d8f:{NFSU2_TR(0x5f2d8f);
__builtin_memmove((R+8),(R+4),4);
}
B5f2d91:{NFSU2_TR(0x5f2d91);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2d94:{NFSU2_TR(0x5f2d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2d97:{NFSU2_TR(0x5f2d97);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f2d99:{NFSU2_TR(0x5f2d99);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f2d9b:{NFSU2_TR(0x5f2d9b);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2d9f:{NFSU2_TR(0x5f2d9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f2daa:{NFSU2_TR(0x5f2daa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2dae:{NFSU2_TR(0x5f2dae);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2db2:{NFSU2_TR(0x5f2db2);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2db6:{NFSU2_TR(0x5f2db6);
if(r1(R+518)){{goto L5f2e01;}}
}
B5f2db8:L5f2db8:{c.instructions+=7;NFSU2_TR(0x5f2db8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
}
B5f2dbd:{NFSU2_TR(0x5f2dbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2dbe:{NFSU2_TR(0x5f2dbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f2dc4:{NFSU2_TR(0x5f2dc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2dc5:{NFSU2_TR(0x5f2dc5);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f2dc9:{NFSU2_TR(0x5f2dc9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2dca:{NFSU2_TR(0x5f2dca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2dcfull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5f2dcf:L5f2dcf:{c.instructions+=15;NFSU2_TR(0x5f2dcf);
{u32 ea_=u32(r4(R+28)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2dd2:{NFSU2_TR(0x5f2dd2);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2dd5:{NFSU2_TR(0x5f2dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2dd8:{NFSU2_TR(0x5f2dd8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f2dda:{NFSU2_TR(0x5f2dda);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2dde:{NFSU2_TR(0x5f2dde);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f2de2:{NFSU2_TR(0x5f2de2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f2de5:{NFSU2_TR(0x5f2de5);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2de9:{NFSU2_TR(0x5f2de9);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2ded:{NFSU2_TR(0x5f2ded);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5f2def:{NFSU2_TR(0x5f2def);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2df3:{NFSU2_TR(0x5f2df3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f2df5:{NFSU2_TR(0x5f2df5);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f2df9:{NFSU2_TR(0x5f2df9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f2dfd:{NFSU2_TR(0x5f2dfd);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f2e01:L5f2e01:{c.instructions+=9;NFSU2_TR(0x5f2e01);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2e03:{NFSU2_TR(0x5f2e03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2e04:{NFSU2_TR(0x5f2e04);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2e05:{NFSU2_TR(0x5f2e05);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x290ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f2e0b:{NFSU2_TR(0x5f2e0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2e0c:{NFSU2_TR(0x5f2e0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f2e10:{NFSU2_TR(0x5f2e10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2e11:{NFSU2_TR(0x5f2e11);
u8 U[4];
w4(U+0,u32(u32(u32(0x87cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f2e18:{NFSU2_TR(0x5f2e18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2e1dull));
TAIL_STATIC(0x5e7ed0u,5e7);
}
B5f2e1d:L5f2e1d:{c.instructions+=2;NFSU2_TR(0x5f2e1d);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f2e1f:{NFSU2_TR(0x5f2e1f);
if(r1(R+518)){{goto L5f2e6b;}}
}
B5f2e21:L5f2e21:{c.instructions+=2;NFSU2_TR(0x5f2e21);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2e23:{NFSU2_TR(0x5f2e23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2e28ull));
TAIL_STATIC(0x575620u,575);
}
B5f2e28:L5f2e28:{c.instructions+=5;NFSU2_TR(0x5f2e28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f2e2b:{NFSU2_TR(0x5f2e2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2e2f:{NFSU2_TR(0x5f2e2f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f2e31:{NFSU2_TR(0x5f2e31);
u8 U[5];
w4(U+0,u32(u32(u32(0xb8cull))+u32(r4(R+16))));
w1(U+4,u8(0xcull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f2e39:{NFSU2_TR(0x5f2e39);
if(r1(R+518)){{goto L5f2ea6;}}
}
B5f2e3b:L5f2e3b:{c.instructions+=10;NFSU2_TR(0x5f2e3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x249ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f2e41:{NFSU2_TR(0x5f2e41);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f2e45:{NFSU2_TR(0x5f2e45);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2e49:{NFSU2_TR(0x5f2e49);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2e4b:{NFSU2_TR(0x5f2e4b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2e4c:{NFSU2_TR(0x5f2e4c);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5f2e4f:{NFSU2_TR(0x5f2e4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5f2e52:{NFSU2_TR(0x5f2e52);
__builtin_memmove((R+4),(R+24),4);
}
B5f2e54:{NFSU2_TR(0x5f2e54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2e55:{NFSU2_TR(0x5f2e55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2e5aull));
TAIL_STATIC(0x5eb400u,5eb);
}
B5f2e5a:L5f2e5a:{c.instructions+=6;NFSU2_TR(0x5f2e5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2e5d:{NFSU2_TR(0x5f2e5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2e5e:{NFSU2_TR(0x5f2e5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2e5f:{NFSU2_TR(0x5f2e5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2e60:{NFSU2_TR(0x5f2e60);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2e64:{NFSU2_TR(0x5f2e64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2e69ull));
TAIL_STATIC(0x451660u,451);
}
B5f2e69:L5f2e69:{c.instructions+=1;NFSU2_TR(0x5f2e69);
{goto L5f2ea8;}
}
B5f2e6b:L5f2e6b:{c.instructions+=2;NFSU2_TR(0x5f2e6b);
u8 U[4];
w4(U+0,u32(0x470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2e70:{NFSU2_TR(0x5f2e70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2e75ull));
TAIL_STATIC(0x575620u,575);
}
B5f2e75:L5f2e75:{c.instructions+=5;NFSU2_TR(0x5f2e75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f2e78:{NFSU2_TR(0x5f2e78);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2e7c:{NFSU2_TR(0x5f2e7c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f2e7e:{NFSU2_TR(0x5f2e7e);
u8 U[5];
w4(U+0,u32(u32(u32(0xb8cull))+u32(r4(R+16))));
w1(U+4,u8(0xdull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f2e86:{NFSU2_TR(0x5f2e86);
if(r1(R+518)){{goto L5f2ea6;}}
}
B5f2e88:L5f2e88:{c.instructions+=10;NFSU2_TR(0x5f2e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2e8e:{NFSU2_TR(0x5f2e8e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2e8f:{NFSU2_TR(0x5f2e8f);
u8 U[4];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f2e96:{NFSU2_TR(0x5f2e96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2e97:{NFSU2_TR(0x5f2e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2e9a:{NFSU2_TR(0x5f2e9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2e9b:{NFSU2_TR(0x5f2e9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2e9c:{NFSU2_TR(0x5f2e9c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2e9d:{NFSU2_TR(0x5f2e9d);
__builtin_memmove((R+4),(R+0),4);
}
B5f2e9f:{NFSU2_TR(0x5f2e9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2ea4ull));
TAIL_STATIC(0x44bea0u,44b);
}
B5f2ea4:L5f2ea4:{c.instructions+=1;NFSU2_TR(0x5f2ea4);
{goto L5f2ea8;}
}
B5f2ea6:L5f2ea6:{c.instructions+=1;NFSU2_TR(0x5f2ea6);
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
B5f2ea8:L5f2ea8:{c.instructions+=4;NFSU2_TR(0x5f2ea8);
u8 U[4];
w4(U+0,u32(u32(u32(0x868ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f2eaf:{NFSU2_TR(0x5f2eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2eb5:{NFSU2_TR(0x5f2eb5);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f2ec0:{NFSU2_TR(0x5f2ec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2ec5ull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B5f2ec5:L5f2ec5:{c.instructions+=1;NFSU2_TR(0x5f2ec5);
{goto L5f2f2e;}
}
B5f2ec7:L5f2ec7:{c.instructions+=2;NFSU2_TR(0x5f2ec7);
u8 U[4];
w4(U+0,u32(0xc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2ecc:{NFSU2_TR(0x5f2ecc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2ed1ull));
TAIL_STATIC(0x575620u,575);
}
B5f2ed1:L5f2ed1:{c.instructions+=5;NFSU2_TR(0x5f2ed1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f2ed4:{NFSU2_TR(0x5f2ed4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2ed8:{NFSU2_TR(0x5f2ed8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f2eda:{NFSU2_TR(0x5f2eda);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8cull))+u32(r4(R+16))));
w4(U+4,u32(0xeull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f2ee5:{NFSU2_TR(0x5f2ee5);
if(r1(R+518)){{goto L5f2f26;}}
}
B5f2ee7:L5f2ee7:{c.instructions+=6;NFSU2_TR(0x5f2ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2eea:{NFSU2_TR(0x5f2eea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2eeb:{NFSU2_TR(0x5f2eeb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2eec:{NFSU2_TR(0x5f2eec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2eed:{NFSU2_TR(0x5f2eed);
__builtin_memmove((R+4),(R+0),4);
}
B5f2eef:{NFSU2_TR(0x5f2eef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2ef4ull));
TAIL_STATIC(0x452600u,452);
}
B5f2ef4:L5f2ef4:{c.instructions+=1;NFSU2_TR(0x5f2ef4);
{goto L5f2f28;}
}
B5f2ef6:L5f2ef6:{c.instructions+=2;NFSU2_TR(0x5f2ef6);
u8 U[4];
w4(U+0,u32(0xd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2efb:{NFSU2_TR(0x5f2efb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2f00ull));
TAIL_STATIC(0x575620u,575);
}
B5f2f00:L5f2f00:{c.instructions+=5;NFSU2_TR(0x5f2f00);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f2f03:{NFSU2_TR(0x5f2f03);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2f07:{NFSU2_TR(0x5f2f07);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f2f09:{NFSU2_TR(0x5f2f09);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8cull))+u32(r4(R+16))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f2f14:{NFSU2_TR(0x5f2f14);
if(r1(R+518)){{goto L5f2f26;}}
}
B5f2f16:L5f2f16:{c.instructions+=6;NFSU2_TR(0x5f2f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f2f19:{NFSU2_TR(0x5f2f19);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2f1b:{NFSU2_TR(0x5f2f1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2f1c:{NFSU2_TR(0x5f2f1c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2f1d:{NFSU2_TR(0x5f2f1d);
__builtin_memmove((R+4),(R+0),4);
}
B5f2f1f:{NFSU2_TR(0x5f2f1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2f24ull));
TAIL_STATIC(0x4531a0u,453);
}
B5f2f24:L5f2f24:{c.instructions+=1;NFSU2_TR(0x5f2f24);
{goto L5f2f28;}
}
B5f2f26:L5f2f26:{c.instructions+=1;NFSU2_TR(0x5f2f26);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f2f28:L5f2f28:{c.instructions+=1;NFSU2_TR(0x5f2f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2f2e:L5f2f2e:{c.instructions+=3;NFSU2_TR(0x5f2f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2f34:{NFSU2_TR(0x5f2f34);
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
B5f2f36:{NFSU2_TR(0x5f2f36);
if(r1(R+518)){{goto L5f2f3b;}}
}
B5f2f38:L5f2f38:{c.instructions+=1;NFSU2_TR(0x5f2f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2f3b:L5f2f3b:{c.instructions+=8;NFSU2_TR(0x5f2f3b);
u8 U[8];
w4(U+0,u32(u32(u32(0xb84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2f42:{NFSU2_TR(0x5f2f42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f2f43:{NFSU2_TR(0x5f2f43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f2f44:{NFSU2_TR(0x5f2f44);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f2f4b:{NFSU2_TR(0x5f2f4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f2f4c:{NFSU2_TR(0x5f2f4c);
__builtin_memmove((R+16),(R+20),4);
}
B5f2f4e:{NFSU2_TR(0x5f2f4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f2f4f:{NFSU2_TR(0x5f2f4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f2fa0:L5f2fa0:{c.instructions+=12;NFSU2_TR(0x5f2fa0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2fa1:{NFSU2_TR(0x5f2fa1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2fa2:{NFSU2_TR(0x5f2fa2);
__builtin_memmove((R+24),(R+4),4);
}
B5f2fa4:{NFSU2_TR(0x5f2fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2fa7:{NFSU2_TR(0x5f2fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5f2faa:{NFSU2_TR(0x5f2faa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2fae:{NFSU2_TR(0x5f2fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2fb1:{NFSU2_TR(0x5f2fb1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2fb2:{NFSU2_TR(0x5f2fb2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2fb3:{NFSU2_TR(0x5f2fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5f2fb6:{NFSU2_TR(0x5f2fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa64ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5f2fbd:{NFSU2_TR(0x5f2fbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2fc2ull));
TAIL_STATIC(0x502540u,502);
}
B5f2fc2:L5f2fc2:{c.instructions+=5;NFSU2_TR(0x5f2fc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f2fc5:{NFSU2_TR(0x5f2fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5f2fc8:{NFSU2_TR(0x5f2fc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa74ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5f2fcf:{NFSU2_TR(0x5f2fcf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2fd0:{NFSU2_TR(0x5f2fd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2fd5ull));
TAIL_STATIC(0x502500u,502);
}
B5f2fd5:L5f2fd5:{c.instructions+=5;NFSU2_TR(0x5f2fd5);
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
B5f2fd8:{NFSU2_TR(0x5f2fd8);
__builtin_memmove((R+28),(R+0),4);
}
B5f2fda:{NFSU2_TR(0x5f2fda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2fdb:{NFSU2_TR(0x5f2fdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x720ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f2fe1:{NFSU2_TR(0x5f2fe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2fe6ull));
TAIL_STATIC(0x441140u,441);
}
B5f2fe6:L5f2fe6:{c.instructions+=2;NFSU2_TR(0x5f2fe6);
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
B5f2fe8:{NFSU2_TR(0x5f2fe8);
if(r1(R+518)){{goto L5f2ffa;}}
}
B5f2fea:L5f2fea:{c.instructions+=3;NFSU2_TR(0x5f2fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f2ff0:{NFSU2_TR(0x5f2ff0);
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
B5f2ff2:{NFSU2_TR(0x5f2ff2);
if(r1(R+518)){{goto L5f2ffa;}}
}
B5f2ff4:L5f2ff4:{c.instructions+=3;NFSU2_TR(0x5f2ff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f2ff6:{NFSU2_TR(0x5f2ff6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f2ff7:{NFSU2_TR(0x5f2ff7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2ffaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f2ffa:L5f2ffa:{c.instructions+=5;NFSU2_TR(0x5f2ffa);
__builtin_memmove((R+0),(R+28),4);
}
B5f2ffc:{NFSU2_TR(0x5f2ffc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f2ffd:{NFSU2_TR(0x5f2ffd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f2ffe:{NFSU2_TR(0x5f2ffe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f2fff:{NFSU2_TR(0x5f2fff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x5f2,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
