#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5b6(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4a2,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4a2,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4a2(u8* __restrict R,Cpu& c);
u32 page_4a2(Cpu& c){return body_4a2(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4a2(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4a2000:goto L4a2000;
case 0x4a2003:c.instructions+=1;goto B4a2003;
case 0x4a2005:goto L4a2005;
case 0x4a2008:c.instructions+=4;goto B4a2008;
case 0x4a2009:c.instructions+=3;goto B4a2009;
case 0x4a200a:c.instructions+=2;goto B4a200a;
case 0x4a200d:c.instructions+=1;goto B4a200d;
case 0x4a200f:goto L4a200f;
case 0x4a2015:c.instructions+=7;goto B4a2015;
case 0x4a2016:c.instructions+=6;goto B4a2016;
case 0x4a2017:c.instructions+=5;goto B4a2017;
case 0x4a2018:c.instructions+=4;goto B4a2018;
case 0x4a201e:c.instructions+=3;goto B4a201e;
case 0x4a2022:c.instructions+=2;goto B4a2022;
case 0x4a2028:c.instructions+=1;goto B4a2028;
case 0x4a202a:goto L4a202a;
case 0x4a202c:c.instructions+=1;goto B4a202c;
case 0x4a202e:goto L4a202e;
case 0x4a202f:c.instructions+=2;goto B4a202f;
case 0x4a2030:c.instructions+=1;goto B4a2030;
case 0x4a2035:goto L4a2035;
case 0x4a2038:goto L4a2038;
case 0x4a203c:c.instructions+=5;goto B4a203c;
case 0x4a203d:c.instructions+=4;goto B4a203d;
case 0x4a203e:c.instructions+=3;goto B4a203e;
case 0x4a2045:c.instructions+=2;goto B4a2045;
case 0x4a2046:c.instructions+=1;goto B4a2046;
case 0x4a204b:goto L4a204b;
case 0x4a204d:c.instructions+=11;goto B4a204d;
case 0x4a2050:c.instructions+=10;goto B4a2050;
case 0x4a2054:c.instructions+=9;goto B4a2054;
case 0x4a205a:c.instructions+=8;goto B4a205a;
case 0x4a2060:c.instructions+=7;goto B4a2060;
case 0x4a2063:c.instructions+=6;goto B4a2063;
case 0x4a2064:c.instructions+=5;goto B4a2064;
case 0x4a2067:c.instructions+=4;goto B4a2067;
case 0x4a206d:c.instructions+=3;goto B4a206d;
case 0x4a206f:c.instructions+=2;goto B4a206f;
case 0x4a2070:c.instructions+=1;goto B4a2070;
case 0x4a2072:goto L4a2072;
case 0x4a2073:c.instructions+=3;goto B4a2073;
case 0x4a2075:c.instructions+=2;goto B4a2075;
case 0x4a207b:c.instructions+=1;goto B4a207b;
case 0x4a207d:goto L4a207d;
case 0x4a2083:goto L4a2083;
case 0x4a2084:c.instructions+=2;goto B4a2084;
case 0x4a2085:c.instructions+=1;goto B4a2085;
case 0x4a2090:goto L4a2090;
case 0x4a2094:c.instructions+=12;goto B4a2094;
case 0x4a2098:c.instructions+=11;goto B4a2098;
case 0x4a2099:c.instructions+=10;goto B4a2099;
case 0x4a209a:c.instructions+=9;goto B4a209a;
case 0x4a209e:c.instructions+=8;goto B4a209e;
case 0x4a20a0:c.instructions+=7;goto B4a20a0;
case 0x4a20a4:c.instructions+=6;goto B4a20a4;
case 0x4a20a5:c.instructions+=5;goto B4a20a5;
case 0x4a20a6:c.instructions+=4;goto B4a20a6;
case 0x4a20a7:c.instructions+=3;goto B4a20a7;
case 0x4a20a8:c.instructions+=2;goto B4a20a8;
case 0x4a20aa:c.instructions+=1;goto B4a20aa;
case 0x4a20af:goto L4a20af;
case 0x4a20b5:c.instructions+=1;goto B4a20b5;
case 0x4a20b7:goto L4a20b7;
case 0x4a20ba:c.instructions+=4;goto B4a20ba;
case 0x4a20bc:c.instructions+=3;goto B4a20bc;
case 0x4a20c1:c.instructions+=2;goto B4a20c1;
case 0x4a20c2:c.instructions+=1;goto B4a20c2;
case 0x4a20c7:goto L4a20c7;
case 0x4a20ca:goto L4a20ca;
case 0x4a20cb:c.instructions+=2;goto B4a20cb;
case 0x4a20cc:c.instructions+=1;goto B4a20cc;
case 0x4a20d0:goto L4a20d0;
case 0x4a20d1:c.instructions+=4;goto B4a20d1;
case 0x4a20d3:c.instructions+=3;goto B4a20d3;
case 0x4a20d9:c.instructions+=2;goto B4a20d9;
case 0x4a20db:c.instructions+=1;goto B4a20db;
case 0x4a20e1:goto L4a20e1;
case 0x4a20e5:c.instructions+=2;goto B4a20e5;
case 0x4a20e7:c.instructions+=1;goto B4a20e7;
case 0x4a20e9:goto L4a20e9;
case 0x4a20ec:c.instructions+=1;goto B4a20ec;
case 0x4a20f1:goto L4a20f1;
case 0x4a20f4:c.instructions+=5;goto B4a20f4;
case 0x4a20f6:c.instructions+=4;goto B4a20f6;
case 0x4a20fb:c.instructions+=3;goto B4a20fb;
case 0x4a2100:c.instructions+=2;goto B4a2100;
case 0x4a2101:c.instructions+=1;goto B4a2101;
case 0x4a2103:goto L4a2103;
case 0x4a2105:goto L4a2105;
case 0x4a2108:c.instructions+=1;goto B4a2108;
case 0x4a210d:goto L4a210d;
case 0x4a2110:c.instructions+=4;goto B4a2110;
case 0x4a2112:c.instructions+=3;goto B4a2112;
case 0x4a2117:c.instructions+=2;goto B4a2117;
case 0x4a211c:c.instructions+=1;goto B4a211c;
case 0x4a211d:goto L4a211d;
case 0x4a2122:goto L4a2122;
case 0x4a2125:goto L4a2125;
case 0x4a212b:c.instructions+=4;goto B4a212b;
case 0x4a212d:c.instructions+=3;goto B4a212d;
case 0x4a212e:c.instructions+=2;goto B4a212e;
case 0x4a2131:c.instructions+=1;goto B4a2131;
case 0x4a2133:goto L4a2133;
case 0x4a2136:c.instructions+=3;goto B4a2136;
case 0x4a213b:c.instructions+=2;goto B4a213b;
case 0x4a213c:c.instructions+=1;goto B4a213c;
case 0x4a2141:goto L4a2141;
case 0x4a2143:c.instructions+=2;goto B4a2143;
case 0x4a2145:c.instructions+=1;goto B4a2145;
case 0x4a214a:goto L4a214a;
case 0x4a214d:c.instructions+=3;goto B4a214d;
case 0x4a214e:c.instructions+=2;goto B4a214e;
case 0x4a2150:c.instructions+=1;goto B4a2150;
case 0x4a2155:goto L4a2155;
case 0x4a2156:c.instructions+=5;goto B4a2156;
case 0x4a215c:c.instructions+=4;goto B4a215c;
case 0x4a215d:c.instructions+=3;goto B4a215d;
case 0x4a215f:c.instructions+=2;goto B4a215f;
case 0x4a2165:c.instructions+=1;goto B4a2165;
case 0x4a216a:goto L4a216a;
case 0x4a216b:goto L4a216b;
case 0x4a216c:c.instructions+=1;goto B4a216c;
case 0x4a2170:goto L4a2170;
case 0x4a2172:c.instructions+=14;goto B4a2172;
case 0x4a2177:c.instructions+=13;goto B4a2177;
case 0x4a217d:c.instructions+=12;goto B4a217d;
case 0x4a217e:c.instructions+=11;goto B4a217e;
case 0x4a2185:c.instructions+=10;goto B4a2185;
case 0x4a2186:c.instructions+=9;goto B4a2186;
case 0x4a2187:c.instructions+=8;goto B4a2187;
case 0x4a2189:c.instructions+=7;goto B4a2189;
case 0x4a218d:c.instructions+=6;goto B4a218d;
case 0x4a2193:c.instructions+=5;goto B4a2193;
case 0x4a2198:c.instructions+=4;goto B4a2198;
case 0x4a219a:c.instructions+=3;goto B4a219a;
case 0x4a219b:c.instructions+=2;goto B4a219b;
case 0x4a21a3:c.instructions+=1;goto B4a21a3;
case 0x4a21a8:goto L4a21a8;
case 0x4a21ad:c.instructions+=7;goto B4a21ad;
case 0x4a21b0:c.instructions+=6;goto B4a21b0;
case 0x4a21b2:c.instructions+=5;goto B4a21b2;
case 0x4a21b8:c.instructions+=4;goto B4a21b8;
case 0x4a21be:c.instructions+=3;goto B4a21be;
case 0x4a21c1:c.instructions+=2;goto B4a21c1;
case 0x4a21c9:c.instructions+=1;goto B4a21c9;
case 0x4a21ce:goto L4a21ce;
case 0x4a21d2:c.instructions+=4;goto B4a21d2;
case 0x4a21d3:c.instructions+=3;goto B4a21d3;
case 0x4a21da:c.instructions+=2;goto B4a21da;
case 0x4a21dd:c.instructions+=1;goto B4a21dd;
case 0x4a21e0:goto L4a21e0;
case 0x4a21e4:c.instructions+=4;goto B4a21e4;
case 0x4a21e9:c.instructions+=3;goto B4a21e9;
case 0x4a21ea:c.instructions+=2;goto B4a21ea;
case 0x4a21ec:c.instructions+=1;goto B4a21ec;
case 0x4a21ee:goto L4a21ee;
case 0x4a21f0:goto L4a21f0;
case 0x4a21f5:c.instructions+=1;goto B4a21f5;
case 0x4a21f7:goto L4a21f7;
case 0x4a21fc:c.instructions+=1;goto B4a21fc;
case 0x4a2202:goto L4a2202;
case 0x4a2205:c.instructions+=5;goto B4a2205;
case 0x4a2207:c.instructions+=4;goto B4a2207;
case 0x4a220c:c.instructions+=3;goto B4a220c;
case 0x4a2211:c.instructions+=2;goto B4a2211;
case 0x4a2212:c.instructions+=1;goto B4a2212;
case 0x4a2217:goto L4a2217;
case 0x4a221a:c.instructions+=2;goto B4a221a;
case 0x4a221b:c.instructions+=1;goto B4a221b;
case 0x4a221e:goto L4a221e;
case 0x4a2224:c.instructions+=5;goto B4a2224;
case 0x4a2226:c.instructions+=4;goto B4a2226;
case 0x4a222b:c.instructions+=3;goto B4a222b;
case 0x4a2230:c.instructions+=2;goto B4a2230;
case 0x4a2231:c.instructions+=1;goto B4a2231;
case 0x4a2236:goto L4a2236;
case 0x4a2239:c.instructions+=2;goto B4a2239;
case 0x4a223a:c.instructions+=1;goto B4a223a;
case 0x4a223d:goto L4a223d;
case 0x4a2243:c.instructions+=2;goto B4a2243;
case 0x4a2245:c.instructions+=1;goto B4a2245;
case 0x4a2247:goto L4a2247;
case 0x4a224a:c.instructions+=2;goto B4a224a;
case 0x4a224b:c.instructions+=1;goto B4a224b;
case 0x4a2250:goto L4a2250;
case 0x4a2257:c.instructions+=4;goto B4a2257;
case 0x4a225c:c.instructions+=3;goto B4a225c;
case 0x4a225d:c.instructions+=2;goto B4a225d;
case 0x4a225f:c.instructions+=1;goto B4a225f;
case 0x4a2264:goto L4a2264;
case 0x4a2267:c.instructions+=2;goto B4a2267;
case 0x4a2268:c.instructions+=1;goto B4a2268;
case 0x4a226b:goto L4a226b;
case 0x4a2270:c.instructions+=1;goto B4a2270;
case 0x4a2272:goto L4a2272;
case 0x4a2278:c.instructions+=5;goto B4a2278;
case 0x4a227a:c.instructions+=4;goto B4a227a;
case 0x4a227f:c.instructions+=3;goto B4a227f;
case 0x4a2284:c.instructions+=2;goto B4a2284;
case 0x4a2285:c.instructions+=1;goto B4a2285;
case 0x4a228a:goto L4a228a;
case 0x4a2291:c.instructions+=1;goto B4a2291;
case 0x4a2294:goto L4a2294;
case 0x4a2295:c.instructions+=1;goto B4a2295;
case 0x4a22a0:goto L4a22a0;
case 0x4a22a3:c.instructions+=7;goto B4a22a3;
case 0x4a22a4:c.instructions+=6;goto B4a22a4;
case 0x4a22a5:c.instructions+=5;goto B4a22a5;
case 0x4a22a7:c.instructions+=4;goto B4a22a7;
case 0x4a22aa:c.instructions+=3;goto B4a22aa;
case 0x4a22ac:c.instructions+=2;goto B4a22ac;
case 0x4a22b1:c.instructions+=1;goto B4a22b1;
case 0x4a22b5:goto L4a22b5;
case 0x4a22b7:goto L4a22b7;
case 0x4a22ba:c.instructions+=14;goto B4a22ba;
case 0x4a22be:c.instructions+=13;goto B4a22be;
case 0x4a22c1:c.instructions+=12;goto B4a22c1;
case 0x4a22c3:c.instructions+=11;goto B4a22c3;
case 0x4a22c7:c.instructions+=10;goto B4a22c7;
case 0x4a22c8:c.instructions+=9;goto B4a22c8;
case 0x4a22d0:c.instructions+=8;goto B4a22d0;
case 0x4a22d8:c.instructions+=7;goto B4a22d8;
case 0x4a22e0:c.instructions+=6;goto B4a22e0;
case 0x4a22e8:c.instructions+=5;goto B4a22e8;
case 0x4a22f0:c.instructions+=4;goto B4a22f0;
case 0x4a22f8:c.instructions+=3;goto B4a22f8;
case 0x4a2300:c.instructions+=2;goto B4a2300;
case 0x4a2308:c.instructions+=1;goto B4a2308;
case 0x4a230b:goto L4a230b;
case 0x4a2311:c.instructions+=8;goto B4a2311;
case 0x4a2317:c.instructions+=7;goto B4a2317;
case 0x4a2319:c.instructions+=6;goto B4a2319;
case 0x4a231d:c.instructions+=5;goto B4a231d;
case 0x4a231e:c.instructions+=4;goto B4a231e;
case 0x4a2326:c.instructions+=3;goto B4a2326;
case 0x4a232e:c.instructions+=2;goto B4a232e;
case 0x4a2336:c.instructions+=1;goto B4a2336;
case 0x4a2339:goto L4a2339;
case 0x4a233f:c.instructions+=8;goto B4a233f;
case 0x4a2345:c.instructions+=7;goto B4a2345;
case 0x4a2347:c.instructions+=6;goto B4a2347;
case 0x4a234b:c.instructions+=5;goto B4a234b;
case 0x4a234c:c.instructions+=4;goto B4a234c;
case 0x4a2354:c.instructions+=3;goto B4a2354;
case 0x4a235c:c.instructions+=2;goto B4a235c;
case 0x4a2364:c.instructions+=1;goto B4a2364;
case 0x4a2367:goto L4a2367;
case 0x4a2368:c.instructions+=3;goto B4a2368;
case 0x4a2369:c.instructions+=2;goto B4a2369;
case 0x4a236c:c.instructions+=1;goto B4a236c;
case 0x4a2370:goto L4a2370;
case 0x4a2371:c.instructions+=6;goto B4a2371;
case 0x4a2373:c.instructions+=5;goto B4a2373;
case 0x4a2379:c.instructions+=4;goto B4a2379;
case 0x4a237a:c.instructions+=3;goto B4a237a;
case 0x4a237d:c.instructions+=2;goto B4a237d;
case 0x4a2380:c.instructions+=1;goto B4a2380;
case 0x4a2385:goto L4a2385;
case 0x4a2386:c.instructions+=3;goto B4a2386;
case 0x4a2388:c.instructions+=2;goto B4a2388;
case 0x4a238b:c.instructions+=1;goto B4a238b;
case 0x4a2390:goto L4a2390;
case 0x4a2392:c.instructions+=2;goto B4a2392;
case 0x4a2394:c.instructions+=1;goto B4a2394;
case 0x4a2397:goto L4a2397;
case 0x4a239d:c.instructions+=3;goto B4a239d;
case 0x4a23a0:c.instructions+=2;goto B4a23a0;
case 0x4a23a6:c.instructions+=1;goto B4a23a6;
case 0x4a23ab:goto L4a23ab;
case 0x4a23ac:c.instructions+=3;goto B4a23ac;
case 0x4a23ae:c.instructions+=2;goto B4a23ae;
case 0x4a23b1:c.instructions+=1;goto B4a23b1;
case 0x4a23b6:goto L4a23b6;
case 0x4a23b8:c.instructions+=2;goto B4a23b8;
case 0x4a23ba:c.instructions+=1;goto B4a23ba;
case 0x4a23bd:goto L4a23bd;
case 0x4a23c3:c.instructions+=3;goto B4a23c3;
case 0x4a23c6:c.instructions+=2;goto B4a23c6;
case 0x4a23cc:c.instructions+=1;goto B4a23cc;
case 0x4a23d1:goto L4a23d1;
case 0x4a23d2:c.instructions+=3;goto B4a23d2;
case 0x4a23d4:c.instructions+=2;goto B4a23d4;
case 0x4a23d7:c.instructions+=1;goto B4a23d7;
case 0x4a23dc:goto L4a23dc;
case 0x4a23de:c.instructions+=4;goto B4a23de;
case 0x4a23df:c.instructions+=3;goto B4a23df;
case 0x4a23e1:c.instructions+=2;goto B4a23e1;
case 0x4a23e2:c.instructions+=1;goto B4a23e2;
case 0x4a23f0:goto L4a23f0;
case 0x4a23f1:c.instructions+=5;goto B4a23f1;
case 0x4a23f2:c.instructions+=4;goto B4a23f2;
case 0x4a23f4:c.instructions+=3;goto B4a23f4;
case 0x4a23f7:c.instructions+=2;goto B4a23f7;
case 0x4a23fc:c.instructions+=1;goto B4a23fc;
case 0x4a2401:goto L4a2401;
case 0x4a2404:c.instructions+=4;goto B4a2404;
case 0x4a2405:c.instructions+=3;goto B4a2405;
case 0x4a240a:c.instructions+=2;goto B4a240a;
case 0x4a240b:c.instructions+=1;goto B4a240b;
case 0x4a2410:goto L4a2410;
case 0x4a2413:c.instructions+=2;goto B4a2413;
case 0x4a2414:c.instructions+=1;goto B4a2414;
case 0x4a2419:goto L4a2419;
case 0x4a241f:c.instructions+=4;goto B4a241f;
case 0x4a2421:c.instructions+=3;goto B4a2421;
case 0x4a2423:c.instructions+=2;goto B4a2423;
case 0x4a2424:c.instructions+=1;goto B4a2424;
case 0x4a2429:goto L4a2429;
case 0x4a242b:c.instructions+=4;goto B4a242b;
case 0x4a242d:c.instructions+=3;goto B4a242d;
case 0x4a242f:c.instructions+=2;goto B4a242f;
case 0x4a2430:c.instructions+=1;goto B4a2430;
case 0x4a2435:goto L4a2435;
case 0x4a2438:c.instructions+=2;goto B4a2438;
case 0x4a243a:c.instructions+=1;goto B4a243a;
case 0x4a243c:goto L4a243c;
case 0x4a243f:c.instructions+=3;goto B4a243f;
case 0x4a2440:c.instructions+=2;goto B4a2440;
case 0x4a2441:c.instructions+=1;goto B4a2441;
case 0x4a2446:goto L4a2446;
case 0x4a2449:c.instructions+=1;goto B4a2449;
case 0x4a244b:goto L4a244b;
case 0x4a2450:c.instructions+=1;goto B4a2450;
case 0x4a2455:goto L4a2455;
case 0x4a2456:c.instructions+=3;goto B4a2456;
case 0x4a2459:c.instructions+=2;goto B4a2459;
case 0x4a245a:c.instructions+=1;goto B4a245a;
case 0x4a245f:goto L4a245f;
case 0x4a2462:goto L4a2462;
case 0x4a2468:c.instructions+=4;goto B4a2468;
case 0x4a246a:c.instructions+=3;goto B4a246a;
case 0x4a246c:c.instructions+=2;goto B4a246c;
case 0x4a246d:c.instructions+=1;goto B4a246d;
case 0x4a2472:goto L4a2472;
case 0x4a2474:c.instructions+=4;goto B4a2474;
case 0x4a2476:c.instructions+=3;goto B4a2476;
case 0x4a2478:c.instructions+=2;goto B4a2478;
case 0x4a2479:c.instructions+=1;goto B4a2479;
case 0x4a247e:goto L4a247e;
case 0x4a2481:c.instructions+=2;goto B4a2481;
case 0x4a2483:c.instructions+=1;goto B4a2483;
case 0x4a2485:goto L4a2485;
case 0x4a2488:c.instructions+=3;goto B4a2488;
case 0x4a2489:c.instructions+=2;goto B4a2489;
case 0x4a248a:c.instructions+=1;goto B4a248a;
case 0x4a248f:goto L4a248f;
case 0x4a2492:c.instructions+=4;goto B4a2492;
case 0x4a2493:c.instructions+=3;goto B4a2493;
case 0x4a2495:c.instructions+=2;goto B4a2495;
case 0x4a2496:c.instructions+=1;goto B4a2496;
case 0x4a249b:goto L4a249b;
case 0x4a24a0:c.instructions+=1;goto B4a24a0;
case 0x4a24a5:goto L4a24a5;
case 0x4a24a8:c.instructions+=3;goto B4a24a8;
case 0x4a24a9:c.instructions+=2;goto B4a24a9;
case 0x4a24aa:c.instructions+=1;goto B4a24aa;
case 0x4a24af:goto L4a24af;
case 0x4a24b2:c.instructions+=4;goto B4a24b2;
case 0x4a24b3:c.instructions+=3;goto B4a24b3;
case 0x4a24b5:c.instructions+=2;goto B4a24b5;
case 0x4a24b6:c.instructions+=1;goto B4a24b6;
case 0x4a24c0:goto L4a24c0;
case 0x4a24c4:c.instructions+=7;goto B4a24c4;
case 0x4a24c6:c.instructions+=6;goto B4a24c6;
case 0x4a24c7:c.instructions+=5;goto B4a24c7;
case 0x4a24c8:c.instructions+=4;goto B4a24c8;
case 0x4a24c9:c.instructions+=3;goto B4a24c9;
case 0x4a24ca:c.instructions+=2;goto B4a24ca;
case 0x4a24cc:c.instructions+=1;goto B4a24cc;
case 0x4a24ce:goto L4a24ce;
case 0x4a24d1:c.instructions+=1;goto B4a24d1;
case 0x4a24d6:goto L4a24d6;
case 0x4a24d8:goto L4a24d8;
case 0x4a24da:goto L4a24da;
case 0x4a24dd:c.instructions+=1;goto B4a24dd;
case 0x4a24e2:goto L4a24e2;
case 0x4a24e5:c.instructions+=4;goto B4a24e5;
case 0x4a24e8:c.instructions+=3;goto B4a24e8;
case 0x4a24e9:c.instructions+=2;goto B4a24e9;
case 0x4a24eb:c.instructions+=1;goto B4a24eb;
case 0x4a24f0:goto L4a24f0;
case 0x4a24f3:c.instructions+=4;goto B4a24f3;
case 0x4a24f5:c.instructions+=3;goto B4a24f5;
case 0x4a24fc:c.instructions+=2;goto B4a24fc;
case 0x4a24fd:c.instructions+=1;goto B4a24fd;
case 0x4a2502:goto L4a2502;
case 0x4a2505:c.instructions+=3;goto B4a2505;
case 0x4a2506:c.instructions+=2;goto B4a2506;
case 0x4a250b:c.instructions+=1;goto B4a250b;
case 0x4a2510:goto L4a2510;
case 0x4a2513:c.instructions+=3;goto B4a2513;
case 0x4a2514:c.instructions+=2;goto B4a2514;
case 0x4a2515:c.instructions+=1;goto B4a2515;
case 0x4a251a:goto L4a251a;
case 0x4a251d:c.instructions+=3;goto B4a251d;
case 0x4a2520:c.instructions+=2;goto B4a2520;
case 0x4a2522:c.instructions+=1;goto B4a2522;
case 0x4a2524:goto L4a2524;
case 0x4a2527:c.instructions+=3;goto B4a2527;
case 0x4a252c:c.instructions+=2;goto B4a252c;
case 0x4a252d:c.instructions+=1;goto B4a252d;
case 0x4a2532:goto L4a2532;
case 0x4a2534:c.instructions+=2;goto B4a2534;
case 0x4a2536:c.instructions+=1;goto B4a2536;
case 0x4a253b:goto L4a253b;
case 0x4a253c:c.instructions+=4;goto B4a253c;
case 0x4a253e:c.instructions+=3;goto B4a253e;
case 0x4a2540:c.instructions+=2;goto B4a2540;
case 0x4a2546:c.instructions+=1;goto B4a2546;
case 0x4a254b:goto L4a254b;
case 0x4a254c:c.instructions+=4;goto B4a254c;
case 0x4a254d:c.instructions+=3;goto B4a254d;
case 0x4a254e:c.instructions+=2;goto B4a254e;
case 0x4a254f:c.instructions+=1;goto B4a254f;
case 0x4a2560:goto L4a2560;
case 0x4a2561:c.instructions+=4;goto B4a2561;
case 0x4a2563:c.instructions+=3;goto B4a2563;
case 0x4a2566:c.instructions+=2;goto B4a2566;
case 0x4a2568:c.instructions+=1;goto B4a2568;
case 0x4a256a:goto L4a256a;
case 0x4a256b:c.instructions+=1;goto B4a256b;
case 0x4a2570:goto L4a2570;
case 0x4a2573:c.instructions+=1;goto B4a2573;
case 0x4a257a:goto L4a257a;
case 0x4a257e:c.instructions+=4;goto B4a257e;
case 0x4a2581:c.instructions+=3;goto B4a2581;
case 0x4a2583:c.instructions+=2;goto B4a2583;
case 0x4a2586:c.instructions+=1;goto B4a2586;
case 0x4a2588:goto L4a2588;
case 0x4a258d:c.instructions+=1;goto B4a258d;
case 0x4a258f:goto L4a258f;
case 0x4a2594:goto L4a2594;
case 0x4a2599:goto L4a2599;
case 0x4a259a:c.instructions+=6;goto B4a259a;
case 0x4a259f:c.instructions+=5;goto B4a259f;
case 0x4a25a4:c.instructions+=4;goto B4a25a4;
case 0x4a25a9:c.instructions+=3;goto B4a25a9;
case 0x4a25ae:c.instructions+=2;goto B4a25ae;
case 0x4a25af:c.instructions+=1;goto B4a25af;
case 0x4a25b4:goto L4a25b4;
case 0x4a25b7:c.instructions+=2;goto B4a25b7;
case 0x4a25b8:c.instructions+=1;goto B4a25b8;
case 0x4a25c0:goto L4a25c0;
case 0x4a25c1:c.instructions+=8;goto B4a25c1;
case 0x4a25c2:c.instructions+=7;goto B4a25c2;
case 0x4a25c3:c.instructions+=6;goto B4a25c3;
case 0x4a25c5:c.instructions+=5;goto B4a25c5;
case 0x4a25c8:c.instructions+=4;goto B4a25c8;
case 0x4a25cb:c.instructions+=3;goto B4a25cb;
case 0x4a25cc:c.instructions+=2;goto B4a25cc;
case 0x4a25ce:c.instructions+=1;goto B4a25ce;
case 0x4a25d3:goto L4a25d3;
case 0x4a25d5:c.instructions+=2;goto B4a25d5;
case 0x4a25d7:c.instructions+=1;goto B4a25d7;
case 0x4a25dc:goto L4a25dc;
case 0x4a25df:c.instructions+=3;goto B4a25df;
case 0x4a25e0:c.instructions+=2;goto B4a25e0;
case 0x4a25e2:c.instructions+=1;goto B4a25e2;
case 0x4a25e7:goto L4a25e7;
case 0x4a25e9:c.instructions+=1;goto B4a25e9;
case 0x4a25eb:goto L4a25eb;
case 0x4a25ee:c.instructions+=4;goto B4a25ee;
case 0x4a25ef:c.instructions+=3;goto B4a25ef;
case 0x4a25f0:c.instructions+=2;goto B4a25f0;
case 0x4a25f2:c.instructions+=1;goto B4a25f2;
case 0x4a25f7:goto L4a25f7;
case 0x4a25fa:c.instructions+=4;goto B4a25fa;
case 0x4a25fc:c.instructions+=3;goto B4a25fc;
case 0x4a2603:c.instructions+=2;goto B4a2603;
case 0x4a2604:c.instructions+=1;goto B4a2604;
case 0x4a2609:goto L4a2609;
case 0x4a260c:c.instructions+=3;goto B4a260c;
case 0x4a260d:c.instructions+=2;goto B4a260d;
case 0x4a2612:c.instructions+=1;goto B4a2612;
case 0x4a2617:goto L4a2617;
case 0x4a261a:c.instructions+=3;goto B4a261a;
case 0x4a261b:c.instructions+=2;goto B4a261b;
case 0x4a261c:c.instructions+=1;goto B4a261c;
case 0x4a2621:goto L4a2621;
case 0x4a2624:c.instructions+=4;goto B4a2624;
case 0x4a2627:c.instructions+=3;goto B4a2627;
case 0x4a2629:c.instructions+=2;goto B4a2629;
case 0x4a262a:c.instructions+=1;goto B4a262a;
case 0x4a262c:goto L4a262c;
case 0x4a262f:c.instructions+=3;goto B4a262f;
case 0x4a2634:c.instructions+=2;goto B4a2634;
case 0x4a2635:c.instructions+=1;goto B4a2635;
case 0x4a263a:goto L4a263a;
case 0x4a263c:c.instructions+=2;goto B4a263c;
case 0x4a263e:c.instructions+=1;goto B4a263e;
case 0x4a2643:goto L4a2643;
case 0x4a2644:c.instructions+=4;goto B4a2644;
case 0x4a2646:c.instructions+=3;goto B4a2646;
case 0x4a2648:c.instructions+=2;goto B4a2648;
case 0x4a264e:c.instructions+=1;goto B4a264e;
case 0x4a2653:goto L4a2653;
case 0x4a2659:c.instructions+=2;goto B4a2659;
case 0x4a265a:c.instructions+=1;goto B4a265a;
case 0x4a265f:goto L4a265f;
case 0x4a2662:c.instructions+=2;goto B4a2662;
case 0x4a2664:c.instructions+=1;goto B4a2664;
case 0x4a2666:goto L4a2666;
case 0x4a2669:c.instructions+=3;goto B4a2669;
case 0x4a266a:c.instructions+=2;goto B4a266a;
case 0x4a266f:c.instructions+=1;goto B4a266f;
case 0x4a2674:goto L4a2674;
case 0x4a2677:goto L4a2677;
case 0x4a2678:c.instructions+=3;goto B4a2678;
case 0x4a2679:c.instructions+=2;goto B4a2679;
case 0x4a267a:c.instructions+=1;goto B4a267a;
case 0x4a2680:goto L4a2680;
case 0x4a2681:c.instructions+=11;goto B4a2681;
case 0x4a2682:c.instructions+=10;goto B4a2682;
case 0x4a2683:c.instructions+=9;goto B4a2683;
case 0x4a2684:c.instructions+=8;goto B4a2684;
case 0x4a2685:c.instructions+=7;goto B4a2685;
case 0x4a2687:c.instructions+=6;goto B4a2687;
case 0x4a268d:c.instructions+=5;goto B4a268d;
case 0x4a2690:c.instructions+=4;goto B4a2690;
case 0x4a2692:c.instructions+=3;goto B4a2692;
case 0x4a2697:c.instructions+=2;goto B4a2697;
case 0x4a2698:c.instructions+=1;goto B4a2698;
case 0x4a269d:goto L4a269d;
case 0x4a26a0:c.instructions+=2;goto B4a26a0;
case 0x4a26a1:c.instructions+=1;goto B4a26a1;
case 0x4a26a6:goto L4a26a6;
case 0x4a26ac:c.instructions+=7;goto B4a26ac;
case 0x4a26af:c.instructions+=6;goto B4a26af;
case 0x4a26b1:c.instructions+=5;goto B4a26b1;
case 0x4a26b4:c.instructions+=4;goto B4a26b4;
case 0x4a26b7:c.instructions+=3;goto B4a26b7;
case 0x4a26bc:c.instructions+=2;goto B4a26bc;
case 0x4a26bd:c.instructions+=1;goto B4a26bd;
case 0x4a26c2:goto L4a26c2;
case 0x4a26c5:c.instructions+=2;goto B4a26c5;
case 0x4a26c6:c.instructions+=1;goto B4a26c6;
case 0x4a26cb:goto L4a26cb;
case 0x4a26d1:c.instructions+=7;goto B4a26d1;
case 0x4a26d4:c.instructions+=6;goto B4a26d4;
case 0x4a26d6:c.instructions+=5;goto B4a26d6;
case 0x4a26d9:c.instructions+=4;goto B4a26d9;
case 0x4a26dc:c.instructions+=3;goto B4a26dc;
case 0x4a26e1:c.instructions+=2;goto B4a26e1;
case 0x4a26e2:c.instructions+=1;goto B4a26e2;
case 0x4a26e7:goto L4a26e7;
case 0x4a26ea:c.instructions+=2;goto B4a26ea;
case 0x4a26eb:c.instructions+=1;goto B4a26eb;
case 0x4a26f0:goto L4a26f0;
case 0x4a26f3:c.instructions+=7;goto B4a26f3;
case 0x4a26f6:c.instructions+=6;goto B4a26f6;
case 0x4a26fc:c.instructions+=5;goto B4a26fc;
case 0x4a26ff:c.instructions+=4;goto B4a26ff;
case 0x4a2701:c.instructions+=3;goto B4a2701;
case 0x4a2706:c.instructions+=2;goto B4a2706;
case 0x4a2707:c.instructions+=1;goto B4a2707;
case 0x4a270c:goto L4a270c;
case 0x4a270f:c.instructions+=2;goto B4a270f;
case 0x4a2710:c.instructions+=1;goto B4a2710;
case 0x4a2715:goto L4a2715;
case 0x4a271b:c.instructions+=7;goto B4a271b;
case 0x4a271e:c.instructions+=6;goto B4a271e;
case 0x4a2720:c.instructions+=5;goto B4a2720;
case 0x4a2723:c.instructions+=4;goto B4a2723;
case 0x4a2726:c.instructions+=3;goto B4a2726;
case 0x4a272b:c.instructions+=2;goto B4a272b;
case 0x4a272c:c.instructions+=1;goto B4a272c;
case 0x4a2731:goto L4a2731;
case 0x4a2734:c.instructions+=2;goto B4a2734;
case 0x4a2735:c.instructions+=1;goto B4a2735;
case 0x4a273a:goto L4a273a;
case 0x4a2740:c.instructions+=7;goto B4a2740;
case 0x4a2743:c.instructions+=6;goto B4a2743;
case 0x4a2745:c.instructions+=5;goto B4a2745;
case 0x4a2748:c.instructions+=4;goto B4a2748;
case 0x4a274b:c.instructions+=3;goto B4a274b;
case 0x4a2750:c.instructions+=2;goto B4a2750;
case 0x4a2751:c.instructions+=1;goto B4a2751;
case 0x4a2756:goto L4a2756;
case 0x4a2759:c.instructions+=2;goto B4a2759;
case 0x4a275a:c.instructions+=1;goto B4a275a;
case 0x4a275f:goto L4a275f;
case 0x4a2762:c.instructions+=7;goto B4a2762;
case 0x4a2765:c.instructions+=6;goto B4a2765;
case 0x4a276b:c.instructions+=5;goto B4a276b;
case 0x4a276e:c.instructions+=4;goto B4a276e;
case 0x4a2770:c.instructions+=3;goto B4a2770;
case 0x4a2775:c.instructions+=2;goto B4a2775;
case 0x4a2776:c.instructions+=1;goto B4a2776;
case 0x4a277b:goto L4a277b;
case 0x4a277e:c.instructions+=2;goto B4a277e;
case 0x4a277f:c.instructions+=1;goto B4a277f;
case 0x4a2784:goto L4a2784;
case 0x4a2787:c.instructions+=7;goto B4a2787;
case 0x4a278d:c.instructions+=6;goto B4a278d;
case 0x4a278f:c.instructions+=5;goto B4a278f;
case 0x4a2792:c.instructions+=4;goto B4a2792;
case 0x4a2795:c.instructions+=3;goto B4a2795;
case 0x4a279a:c.instructions+=2;goto B4a279a;
case 0x4a279b:c.instructions+=1;goto B4a279b;
case 0x4a27a0:goto L4a27a0;
case 0x4a27a3:c.instructions+=2;goto B4a27a3;
case 0x4a27a4:c.instructions+=1;goto B4a27a4;
case 0x4a27a9:goto L4a27a9;
case 0x4a27af:c.instructions+=7;goto B4a27af;
case 0x4a27b2:c.instructions+=6;goto B4a27b2;
case 0x4a27b4:c.instructions+=5;goto B4a27b4;
case 0x4a27b7:c.instructions+=4;goto B4a27b7;
case 0x4a27ba:c.instructions+=3;goto B4a27ba;
case 0x4a27bf:c.instructions+=2;goto B4a27bf;
case 0x4a27c0:c.instructions+=1;goto B4a27c0;
case 0x4a27c5:goto L4a27c5;
case 0x4a27c8:c.instructions+=2;goto B4a27c8;
case 0x4a27c9:c.instructions+=1;goto B4a27c9;
case 0x4a27ce:goto L4a27ce;
case 0x4a27d4:c.instructions+=10;goto B4a27d4;
case 0x4a27d7:c.instructions+=9;goto B4a27d7;
case 0x4a27dc:c.instructions+=8;goto B4a27dc;
case 0x4a27df:c.instructions+=7;goto B4a27df;
case 0x4a27e2:c.instructions+=6;goto B4a27e2;
case 0x4a27e4:c.instructions+=5;goto B4a27e4;
case 0x4a27ea:c.instructions+=4;goto B4a27ea;
case 0x4a27eb:c.instructions+=3;goto B4a27eb;
case 0x4a27f0:c.instructions+=2;goto B4a27f0;
case 0x4a27f1:c.instructions+=1;goto B4a27f1;
case 0x4a27f6:goto L4a27f6;
case 0x4a27f9:c.instructions+=2;goto B4a27f9;
case 0x4a27fa:c.instructions+=1;goto B4a27fa;
case 0x4a27ff:goto L4a27ff;
case 0x4a2805:c.instructions+=6;goto B4a2805;
case 0x4a2808:c.instructions+=5;goto B4a2808;
case 0x4a280b:c.instructions+=4;goto B4a280b;
case 0x4a280d:c.instructions+=3;goto B4a280d;
case 0x4a2812:c.instructions+=2;goto B4a2812;
case 0x4a2813:c.instructions+=1;goto B4a2813;
case 0x4a2818:goto L4a2818;
case 0x4a281b:c.instructions+=2;goto B4a281b;
case 0x4a281c:c.instructions+=1;goto B4a281c;
case 0x4a2821:goto L4a2821;
case 0x4a2827:c.instructions+=7;goto B4a2827;
case 0x4a282a:c.instructions+=6;goto B4a282a;
case 0x4a282c:c.instructions+=5;goto B4a282c;
case 0x4a282e:c.instructions+=4;goto B4a282e;
case 0x4a2831:c.instructions+=3;goto B4a2831;
case 0x4a2836:c.instructions+=2;goto B4a2836;
case 0x4a2837:c.instructions+=1;goto B4a2837;
case 0x4a283c:goto L4a283c;
case 0x4a283f:c.instructions+=2;goto B4a283f;
case 0x4a2840:c.instructions+=1;goto B4a2840;
case 0x4a2845:goto L4a2845;
case 0x4a284b:c.instructions+=8;goto B4a284b;
case 0x4a284e:c.instructions+=7;goto B4a284e;
case 0x4a2851:c.instructions+=6;goto B4a2851;
case 0x4a2852:c.instructions+=5;goto B4a2852;
case 0x4a2857:c.instructions+=4;goto B4a2857;
case 0x4a2858:c.instructions+=3;goto B4a2858;
case 0x4a285c:c.instructions+=2;goto B4a285c;
case 0x4a285e:c.instructions+=1;goto B4a285e;
case 0x4a2863:goto L4a2863;
case 0x4a2866:c.instructions+=3;goto B4a2866;
case 0x4a2869:c.instructions+=2;goto B4a2869;
case 0x4a286c:c.instructions+=1;goto B4a286c;
case 0x4a286e:goto L4a286e;
case 0x4a2875:goto L4a2875;
case 0x4a287a:c.instructions+=1;goto B4a287a;
case 0x4a287c:goto L4a287c;
case 0x4a2881:c.instructions+=1;goto B4a2881;
case 0x4a2883:goto L4a2883;
case 0x4a2888:c.instructions+=1;goto B4a2888;
case 0x4a288a:goto L4a288a;
case 0x4a288f:c.instructions+=1;goto B4a288f;
case 0x4a2891:goto L4a2891;
case 0x4a2896:c.instructions+=1;goto B4a2896;
case 0x4a2898:goto L4a2898;
case 0x4a289d:c.instructions+=1;goto B4a289d;
case 0x4a289f:goto L4a289f;
case 0x4a28a4:goto L4a28a4;
case 0x4a28a7:c.instructions+=2;goto B4a28a7;
case 0x4a28ac:c.instructions+=1;goto B4a28ac;
case 0x4a28b1:goto L4a28b1;
case 0x4a28b2:c.instructions+=3;goto B4a28b2;
case 0x4a28b7:c.instructions+=2;goto B4a28b7;
case 0x4a28b8:c.instructions+=1;goto B4a28b8;
case 0x4a28bd:goto L4a28bd;
case 0x4a28c0:c.instructions+=2;goto B4a28c0;
case 0x4a28c5:c.instructions+=1;goto B4a28c5;
case 0x4a28ca:goto L4a28ca;
case 0x4a28cb:c.instructions+=3;goto B4a28cb;
case 0x4a28d0:c.instructions+=2;goto B4a28d0;
case 0x4a28d1:c.instructions+=1;goto B4a28d1;
case 0x4a28d6:goto L4a28d6;
case 0x4a28d9:c.instructions+=2;goto B4a28d9;
case 0x4a28de:c.instructions+=1;goto B4a28de;
case 0x4a28e3:goto L4a28e3;
case 0x4a28e4:c.instructions+=3;goto B4a28e4;
case 0x4a28e9:c.instructions+=2;goto B4a28e9;
case 0x4a28ea:c.instructions+=1;goto B4a28ea;
case 0x4a28ef:goto L4a28ef;
case 0x4a28f2:c.instructions+=2;goto B4a28f2;
case 0x4a28f7:c.instructions+=1;goto B4a28f7;
case 0x4a28fc:goto L4a28fc;
case 0x4a28fd:c.instructions+=3;goto B4a28fd;
case 0x4a2902:c.instructions+=2;goto B4a2902;
case 0x4a2903:c.instructions+=1;goto B4a2903;
case 0x4a2908:goto L4a2908;
case 0x4a290b:c.instructions+=3;goto B4a290b;
case 0x4a290e:c.instructions+=2;goto B4a290e;
case 0x4a2913:c.instructions+=1;goto B4a2913;
case 0x4a2918:goto L4a2918;
case 0x4a2919:c.instructions+=3;goto B4a2919;
case 0x4a291e:c.instructions+=2;goto B4a291e;
case 0x4a291f:c.instructions+=1;goto B4a291f;
case 0x4a2924:goto L4a2924;
case 0x4a2927:c.instructions+=5;goto B4a2927;
case 0x4a292a:c.instructions+=4;goto B4a292a;
case 0x4a292b:c.instructions+=3;goto B4a292b;
case 0x4a2930:c.instructions+=2;goto B4a2930;
case 0x4a2931:c.instructions+=1;goto B4a2931;
case 0x4a2936:goto L4a2936;
case 0x4a2939:c.instructions+=2;goto B4a2939;
case 0x4a293a:c.instructions+=1;goto B4a293a;
case 0x4a293f:goto L4a293f;
case 0x4a2942:c.instructions+=10;goto B4a2942;
case 0x4a2945:c.instructions+=9;goto B4a2945;
case 0x4a2948:c.instructions+=8;goto B4a2948;
case 0x4a294a:c.instructions+=7;goto B4a294a;
case 0x4a294c:c.instructions+=6;goto B4a294c;
case 0x4a2951:c.instructions+=5;goto B4a2951;
case 0x4a2956:c.instructions+=4;goto B4a2956;
case 0x4a2957:c.instructions+=3;goto B4a2957;
case 0x4a295c:c.instructions+=2;goto B4a295c;
case 0x4a295d:c.instructions+=1;goto B4a295d;
case 0x4a2962:goto L4a2962;
case 0x4a2965:c.instructions+=2;goto B4a2965;
case 0x4a2966:c.instructions+=1;goto B4a2966;
case 0x4a296b:goto L4a296b;
case 0x4a296e:c.instructions+=6;goto B4a296e;
case 0x4a2971:c.instructions+=5;goto B4a2971;
case 0x4a2972:c.instructions+=4;goto B4a2972;
case 0x4a2977:c.instructions+=3;goto B4a2977;
case 0x4a297c:c.instructions+=2;goto B4a297c;
case 0x4a297d:c.instructions+=1;goto B4a297d;
case 0x4a2982:goto L4a2982;
case 0x4a2985:c.instructions+=10;goto B4a2985;
case 0x4a2988:c.instructions+=9;goto B4a2988;
case 0x4a298b:c.instructions+=8;goto B4a298b;
case 0x4a298d:c.instructions+=7;goto B4a298d;
case 0x4a298f:c.instructions+=6;goto B4a298f;
case 0x4a2994:c.instructions+=5;goto B4a2994;
case 0x4a2999:c.instructions+=4;goto B4a2999;
case 0x4a299a:c.instructions+=3;goto B4a299a;
case 0x4a299f:c.instructions+=2;goto B4a299f;
case 0x4a29a0:c.instructions+=1;goto B4a29a0;
case 0x4a29a5:goto L4a29a5;
case 0x4a29a8:c.instructions+=2;goto B4a29a8;
case 0x4a29a9:c.instructions+=1;goto B4a29a9;
case 0x4a29ae:goto L4a29ae;
case 0x4a29b1:c.instructions+=10;goto B4a29b1;
case 0x4a29b4:c.instructions+=9;goto B4a29b4;
case 0x4a29b7:c.instructions+=8;goto B4a29b7;
case 0x4a29b9:c.instructions+=7;goto B4a29b9;
case 0x4a29bb:c.instructions+=6;goto B4a29bb;
case 0x4a29c0:c.instructions+=5;goto B4a29c0;
case 0x4a29c5:c.instructions+=4;goto B4a29c5;
case 0x4a29c6:c.instructions+=3;goto B4a29c6;
case 0x4a29cb:c.instructions+=2;goto B4a29cb;
case 0x4a29cc:c.instructions+=1;goto B4a29cc;
case 0x4a29d1:goto L4a29d1;
case 0x4a29d4:c.instructions+=2;goto B4a29d4;
case 0x4a29d5:c.instructions+=1;goto B4a29d5;
case 0x4a29da:goto L4a29da;
case 0x4a29dd:c.instructions+=10;goto B4a29dd;
case 0x4a29e0:c.instructions+=9;goto B4a29e0;
case 0x4a29e3:c.instructions+=8;goto B4a29e3;
case 0x4a29e5:c.instructions+=7;goto B4a29e5;
case 0x4a29e7:c.instructions+=6;goto B4a29e7;
case 0x4a29ec:c.instructions+=5;goto B4a29ec;
case 0x4a29f1:c.instructions+=4;goto B4a29f1;
case 0x4a29f2:c.instructions+=3;goto B4a29f2;
case 0x4a29f7:c.instructions+=2;goto B4a29f7;
case 0x4a29f8:c.instructions+=1;goto B4a29f8;
case 0x4a29fd:goto L4a29fd;
case 0x4a2a00:c.instructions+=2;goto B4a2a00;
case 0x4a2a01:c.instructions+=1;goto B4a2a01;
case 0x4a2a06:goto L4a2a06;
case 0x4a2a09:c.instructions+=4;goto B4a2a09;
case 0x4a2a0c:c.instructions+=3;goto B4a2a0c;
case 0x4a2a0f:c.instructions+=2;goto B4a2a0f;
case 0x4a2a12:c.instructions+=1;goto B4a2a12;
case 0x4a2a18:goto L4a2a18;
case 0x4a2a1d:c.instructions+=1;goto B4a2a1d;
case 0x4a2a22:goto L4a2a22;
case 0x4a2a23:c.instructions+=3;goto B4a2a23;
case 0x4a2a28:c.instructions+=2;goto B4a2a28;
case 0x4a2a29:c.instructions+=1;goto B4a2a29;
case 0x4a2a2e:goto L4a2a2e;
case 0x4a2a31:c.instructions+=2;goto B4a2a31;
case 0x4a2a36:c.instructions+=1;goto B4a2a36;
case 0x4a2a3b:goto L4a2a3b;
case 0x4a2a3c:c.instructions+=3;goto B4a2a3c;
case 0x4a2a41:c.instructions+=2;goto B4a2a41;
case 0x4a2a42:c.instructions+=1;goto B4a2a42;
case 0x4a2a47:goto L4a2a47;
case 0x4a2a4a:c.instructions+=2;goto B4a2a4a;
case 0x4a2a4d:c.instructions+=1;goto B4a2a4d;
case 0x4a2a4f:goto L4a2a4f;
case 0x4a2a52:c.instructions+=2;goto B4a2a52;
case 0x4a2a57:c.instructions+=1;goto B4a2a57;
case 0x4a2a5c:goto L4a2a5c;
case 0x4a2a5d:c.instructions+=3;goto B4a2a5d;
case 0x4a2a62:c.instructions+=2;goto B4a2a62;
case 0x4a2a63:c.instructions+=1;goto B4a2a63;
case 0x4a2a65:goto L4a2a65;
case 0x4a2a6c:c.instructions+=5;goto B4a2a6c;
case 0x4a2a6f:c.instructions+=4;goto B4a2a6f;
case 0x4a2a70:c.instructions+=3;goto B4a2a70;
case 0x4a2a75:c.instructions+=2;goto B4a2a75;
case 0x4a2a7a:c.instructions+=1;goto B4a2a7a;
case 0x4a2a7b:goto L4a2a7b;
case 0x4a2a80:goto L4a2a80;
case 0x4a2a84:c.instructions+=4;goto B4a2a84;
case 0x4a2a87:c.instructions+=3;goto B4a2a87;
case 0x4a2a8a:c.instructions+=2;goto B4a2a8a;
case 0x4a2a8c:c.instructions+=1;goto B4a2a8c;
case 0x4a2a8e:goto L4a2a8e;
case 0x4a2a93:c.instructions+=1;goto B4a2a93;
case 0x4a2a98:goto L4a2a98;
case 0x4a2a99:c.instructions+=3;goto B4a2a99;
case 0x4a2a9e:c.instructions+=2;goto B4a2a9e;
case 0x4a2a9f:c.instructions+=1;goto B4a2a9f;
case 0x4a2aa4:goto L4a2aa4;
case 0x4a2aa7:c.instructions+=1;goto B4a2aa7;
case 0x4a2aa9:goto L4a2aa9;
case 0x4a2aae:c.instructions+=1;goto B4a2aae;
case 0x4a2ab3:goto L4a2ab3;
case 0x4a2aba:c.instructions+=6;goto B4a2aba;
case 0x4a2abb:c.instructions+=5;goto B4a2abb;
case 0x4a2abc:c.instructions+=4;goto B4a2abc;
case 0x4a2ac1:c.instructions+=3;goto B4a2ac1;
case 0x4a2ac6:c.instructions+=2;goto B4a2ac6;
case 0x4a2ac7:c.instructions+=1;goto B4a2ac7;
case 0x4a2acc:goto L4a2acc;
case 0x4a2acf:c.instructions+=1;goto B4a2acf;
case 0x4a2ad1:goto L4a2ad1;
case 0x4a2ad4:c.instructions+=2;goto B4a2ad4;
case 0x4a2ad5:c.instructions+=1;goto B4a2ad5;
case 0x4a2ada:goto L4a2ada;
case 0x4a2adb:c.instructions+=4;goto B4a2adb;
case 0x4a2ae0:c.instructions+=3;goto B4a2ae0;
case 0x4a2ae5:c.instructions+=2;goto B4a2ae5;
case 0x4a2ae6:c.instructions+=1;goto B4a2ae6;
case 0x4a2aeb:goto L4a2aeb;
case 0x4a2aee:c.instructions+=6;goto B4a2aee;
case 0x4a2af1:c.instructions+=5;goto B4a2af1;
case 0x4a2af2:c.instructions+=4;goto B4a2af2;
case 0x4a2af7:c.instructions+=3;goto B4a2af7;
case 0x4a2afc:c.instructions+=2;goto B4a2afc;
case 0x4a2afd:c.instructions+=1;goto B4a2afd;
case 0x4a2b02:goto L4a2b02;
case 0x4a2b05:goto L4a2b05;
case 0x4a2b08:c.instructions+=3;goto B4a2b08;
case 0x4a2b0a:c.instructions+=2;goto B4a2b0a;
case 0x4a2b0d:c.instructions+=1;goto B4a2b0d;
case 0x4a2b0f:goto L4a2b0f;
case 0x4a2b14:c.instructions+=1;goto B4a2b14;
case 0x4a2b16:goto L4a2b16;
case 0x4a2b1b:goto L4a2b1b;
case 0x4a2b20:c.instructions+=2;goto B4a2b20;
case 0x4a2b21:c.instructions+=1;goto B4a2b21;
case 0x4a2b26:goto L4a2b26;
case 0x4a2b29:c.instructions+=2;goto B4a2b29;
case 0x4a2b2a:c.instructions+=1;goto B4a2b2a;
case 0x4a2b2f:goto L4a2b2f;
case 0x4a2b32:c.instructions+=6;goto B4a2b32;
case 0x4a2b33:c.instructions+=5;goto B4a2b33;
case 0x4a2b34:c.instructions+=4;goto B4a2b34;
case 0x4a2b35:c.instructions+=3;goto B4a2b35;
case 0x4a2b36:c.instructions+=2;goto B4a2b36;
case 0x4a2b37:c.instructions+=1;goto B4a2b37;
case 0x4a2b70:goto L4a2b70;
case 0x4a2b71:c.instructions+=6;goto B4a2b71;
case 0x4a2b73:c.instructions+=5;goto B4a2b73;
case 0x4a2b79:c.instructions+=4;goto B4a2b79;
case 0x4a2b7a:c.instructions+=3;goto B4a2b7a;
case 0x4a2b7b:c.instructions+=2;goto B4a2b7b;
case 0x4a2b80:c.instructions+=1;goto B4a2b80;
case 0x4a2b85:goto L4a2b85;
case 0x4a2b87:c.instructions+=1;goto B4a2b87;
case 0x4a2b89:goto L4a2b89;
case 0x4a2b8e:c.instructions+=1;goto B4a2b8e;
case 0x4a2b90:goto L4a2b90;
case 0x4a2b92:c.instructions+=2;goto B4a2b92;
case 0x4a2b94:c.instructions+=1;goto B4a2b94;
case 0x4a2b97:goto L4a2b97;
case 0x4a2b9d:c.instructions+=2;goto B4a2b9d;
case 0x4a2ba3:c.instructions+=1;goto B4a2ba3;
case 0x4a2ba5:goto L4a2ba5;
case 0x4a2baa:c.instructions+=1;goto B4a2baa;
case 0x4a2bac:goto L4a2bac;
case 0x4a2bad:c.instructions+=2;goto B4a2bad;
case 0x4a2bb2:c.instructions+=1;goto B4a2bb2;
case 0x4a2bb7:goto L4a2bb7;
case 0x4a2bb8:c.instructions+=1;goto B4a2bb8;
case 0x4a2bbd:goto L4a2bbd;
case 0x4a2bc0:c.instructions+=1;goto B4a2bc0;
case 0x4a2bc2:goto L4a2bc2;
case 0x4a2bc5:c.instructions+=4;goto B4a2bc5;
case 0x4a2bcb:c.instructions+=3;goto B4a2bcb;
case 0x4a2bcc:c.instructions+=2;goto B4a2bcc;
case 0x4a2bd1:c.instructions+=1;goto B4a2bd1;
case 0x4a2bd6:goto L4a2bd6;
case 0x4a2bd8:c.instructions+=1;goto B4a2bd8;
case 0x4a2bda:goto L4a2bda;
case 0x4a2bdc:c.instructions+=2;goto B4a2bdc;
case 0x4a2bde:c.instructions+=1;goto B4a2bde;
case 0x4a2be1:goto L4a2be1;
case 0x4a2be7:c.instructions+=2;goto B4a2be7;
case 0x4a2bed:c.instructions+=1;goto B4a2bed;
case 0x4a2bef:goto L4a2bef;
case 0x4a2bf4:c.instructions+=1;goto B4a2bf4;
case 0x4a2bf6:goto L4a2bf6;
case 0x4a2bf7:c.instructions+=2;goto B4a2bf7;
case 0x4a2bfc:c.instructions+=1;goto B4a2bfc;
case 0x4a2c01:goto L4a2c01;
case 0x4a2c02:c.instructions+=1;goto B4a2c02;
case 0x4a2c07:goto L4a2c07;
case 0x4a2c0a:goto L4a2c0a;
case 0x4a2c0d:c.instructions+=4;goto B4a2c0d;
case 0x4a2c0e:c.instructions+=3;goto B4a2c0e;
case 0x4a2c0f:c.instructions+=2;goto B4a2c0f;
case 0x4a2c14:c.instructions+=1;goto B4a2c14;
case 0x4a2c19:goto L4a2c19;
case 0x4a2c1c:c.instructions+=10;goto B4a2c1c;
case 0x4a2c1d:c.instructions+=9;goto B4a2c1d;
case 0x4a2c1f:c.instructions+=8;goto B4a2c1f;
case 0x4a2c21:c.instructions+=7;goto B4a2c21;
case 0x4a2c26:c.instructions+=6;goto B4a2c26;
case 0x4a2c2b:c.instructions+=5;goto B4a2c2b;
case 0x4a2c30:c.instructions+=4;goto B4a2c30;
case 0x4a2c35:c.instructions+=3;goto B4a2c35;
case 0x4a2c3a:c.instructions+=2;goto B4a2c3a;
case 0x4a2c3b:c.instructions+=1;goto B4a2c3b;
case 0x4a2c40:goto L4a2c40;
case 0x4a2c43:c.instructions+=3;goto B4a2c43;
case 0x4a2c44:c.instructions+=2;goto B4a2c44;
case 0x4a2c45:c.instructions+=1;goto B4a2c45;
case 0x4a2c50:goto L4a2c50;
case 0x4a2c54:c.instructions+=4;goto B4a2c54;
case 0x4a2c59:c.instructions+=3;goto B4a2c59;
case 0x4a2c5a:c.instructions+=2;goto B4a2c5a;
case 0x4a2c5c:c.instructions+=1;goto B4a2c5c;
case 0x4a2c62:goto L4a2c62;
case 0x4a2c68:goto L4a2c68;
case 0x4a2c6d:c.instructions+=1;goto B4a2c6d;
case 0x4a2c6f:goto L4a2c6f;
case 0x4a2c74:c.instructions+=1;goto B4a2c74;
case 0x4a2c76:goto L4a2c76;
case 0x4a2c7b:c.instructions+=1;goto B4a2c7b;
case 0x4a2c81:goto L4a2c81;
case 0x4a2c84:c.instructions+=5;goto B4a2c84;
case 0x4a2c86:c.instructions+=4;goto B4a2c86;
case 0x4a2c8b:c.instructions+=3;goto B4a2c8b;
case 0x4a2c90:c.instructions+=2;goto B4a2c90;
case 0x4a2c91:c.instructions+=1;goto B4a2c91;
case 0x4a2c96:goto L4a2c96;
case 0x4a2c99:c.instructions+=2;goto B4a2c99;
case 0x4a2c9a:c.instructions+=1;goto B4a2c9a;
case 0x4a2c9d:goto L4a2c9d;
case 0x4a2c9f:c.instructions+=4;goto B4a2c9f;
case 0x4a2ca4:c.instructions+=3;goto B4a2ca4;
case 0x4a2ca9:c.instructions+=2;goto B4a2ca9;
case 0x4a2cae:c.instructions+=1;goto B4a2cae;
case 0x4a2cb3:goto L4a2cb3;
case 0x4a2cb5:c.instructions+=4;goto B4a2cb5;
case 0x4a2cba:c.instructions+=3;goto B4a2cba;
case 0x4a2cbf:c.instructions+=2;goto B4a2cbf;
case 0x4a2cc4:c.instructions+=1;goto B4a2cc4;
case 0x4a2cc9:goto L4a2cc9;
case 0x4a2ccb:c.instructions+=4;goto B4a2ccb;
case 0x4a2cd0:c.instructions+=3;goto B4a2cd0;
case 0x4a2cd5:c.instructions+=2;goto B4a2cd5;
case 0x4a2cda:c.instructions+=1;goto B4a2cda;
case 0x4a2cdf:goto L4a2cdf;
case 0x4a2ce2:c.instructions+=2;goto B4a2ce2;
case 0x4a2ce3:c.instructions+=1;goto B4a2ce3;
case 0x4a2ce6:goto L4a2ce6;
case 0x4a2ce9:c.instructions+=5;goto B4a2ce9;
case 0x4a2ceb:c.instructions+=4;goto B4a2ceb;
case 0x4a2cf0:c.instructions+=3;goto B4a2cf0;
case 0x4a2cf5:c.instructions+=2;goto B4a2cf5;
case 0x4a2cf6:c.instructions+=1;goto B4a2cf6;
case 0x4a2cfb:goto L4a2cfb;
case 0x4a2cfe:c.instructions+=2;goto B4a2cfe;
case 0x4a2cff:c.instructions+=1;goto B4a2cff;
case 0x4a2d02:goto L4a2d02;
case 0x4a2d08:c.instructions+=2;goto B4a2d08;
case 0x4a2d09:c.instructions+=1;goto B4a2d09;
case 0x4a2d0e:goto L4a2d0e;
case 0x4a2d11:c.instructions+=2;goto B4a2d11;
case 0x4a2d13:c.instructions+=1;goto B4a2d13;
case 0x4a2d19:goto L4a2d19;
case 0x4a2d1c:c.instructions+=3;goto B4a2d1c;
case 0x4a2d1d:c.instructions+=2;goto B4a2d1d;
case 0x4a2d22:c.instructions+=1;goto B4a2d22;
case 0x4a2d27:goto L4a2d27;
case 0x4a2d2a:c.instructions+=2;goto B4a2d2a;
case 0x4a2d2b:c.instructions+=1;goto B4a2d2b;
case 0x4a2d2e:goto L4a2d2e;
case 0x4a2d33:c.instructions+=1;goto B4a2d33;
case 0x4a2d35:goto L4a2d35;
case 0x4a2d3a:c.instructions+=1;goto B4a2d3a;
case 0x4a2d3c:goto L4a2d3c;
case 0x4a2d3e:c.instructions+=4;goto B4a2d3e;
case 0x4a2d43:c.instructions+=3;goto B4a2d43;
case 0x4a2d48:c.instructions+=2;goto B4a2d48;
case 0x4a2d4d:c.instructions+=1;goto B4a2d4d;
case 0x4a2d52:goto L4a2d52;
case 0x4a2d54:c.instructions+=4;goto B4a2d54;
case 0x4a2d59:c.instructions+=3;goto B4a2d59;
case 0x4a2d5e:c.instructions+=2;goto B4a2d5e;
case 0x4a2d63:c.instructions+=1;goto B4a2d63;
case 0x4a2d68:goto L4a2d68;
case 0x4a2d6b:c.instructions+=3;goto B4a2d6b;
case 0x4a2d72:c.instructions+=2;goto B4a2d72;
case 0x4a2d73:c.instructions+=1;goto B4a2d73;
case 0x4a2d76:goto L4a2d76;
case 0x4a2d7b:goto L4a2d7b;
case 0x4a2d7d:c.instructions+=1;goto B4a2d7d;
case 0x4a2d82:goto L4a2d82;
case 0x4a2d88:c.instructions+=2;goto B4a2d88;
case 0x4a2d8a:c.instructions+=1;goto B4a2d8a;
case 0x4a2d8c:goto L4a2d8c;
case 0x4a2d8f:c.instructions+=2;goto B4a2d8f;
case 0x4a2d90:c.instructions+=1;goto B4a2d90;
case 0x4a2d95:goto L4a2d95;
case 0x4a2d98:c.instructions+=1;goto B4a2d98;
case 0x4a2d9f:goto L4a2d9f;
case 0x4a2da0:c.instructions+=1;goto B4a2da0;
case 0x4a2db0:goto L4a2db0;
case 0x4a2db3:c.instructions+=5;goto B4a2db3;
case 0x4a2db5:c.instructions+=4;goto B4a2db5;
case 0x4a2db6:c.instructions+=3;goto B4a2db6;
case 0x4a2db8:c.instructions+=2;goto B4a2db8;
case 0x4a2dbd:c.instructions+=1;goto B4a2dbd;
case 0x4a2dc1:goto L4a2dc1;
case 0x4a2dc3:goto L4a2dc3;
case 0x4a2dc6:c.instructions+=15;goto B4a2dc6;
case 0x4a2dca:c.instructions+=14;goto B4a2dca;
case 0x4a2dcd:c.instructions+=13;goto B4a2dcd;
case 0x4a2dcf:c.instructions+=12;goto B4a2dcf;
case 0x4a2dd1:c.instructions+=11;goto B4a2dd1;
case 0x4a2dd5:c.instructions+=10;goto B4a2dd5;
case 0x4a2dd6:c.instructions+=9;goto B4a2dd6;
case 0x4a2dde:c.instructions+=8;goto B4a2dde;
case 0x4a2de6:c.instructions+=7;goto B4a2de6;
case 0x4a2dee:c.instructions+=6;goto B4a2dee;
case 0x4a2df6:c.instructions+=5;goto B4a2df6;
case 0x4a2dfe:c.instructions+=4;goto B4a2dfe;
case 0x4a2e06:c.instructions+=3;goto B4a2e06;
case 0x4a2e0e:c.instructions+=2;goto B4a2e0e;
case 0x4a2e16:c.instructions+=1;goto B4a2e16;
case 0x4a2e19:goto L4a2e19;
case 0x4a2e1a:c.instructions+=2;goto B4a2e1a;
case 0x4a2e1d:c.instructions+=1;goto B4a2e1d;
case 0x4a2e20:goto L4a2e20;
case 0x4a2e24:c.instructions+=4;goto B4a2e24;
case 0x4a2e29:c.instructions+=3;goto B4a2e29;
case 0x4a2e2a:c.instructions+=2;goto B4a2e2a;
case 0x4a2e2c:c.instructions+=1;goto B4a2e2c;
case 0x4a2e32:goto L4a2e32;
case 0x4a2e38:goto L4a2e38;
case 0x4a2e3d:c.instructions+=1;goto B4a2e3d;
case 0x4a2e43:goto L4a2e43;
case 0x4a2e48:c.instructions+=1;goto B4a2e48;
case 0x4a2e4e:goto L4a2e4e;
case 0x4a2e51:c.instructions+=2;goto B4a2e51;
case 0x4a2e53:c.instructions+=1;goto B4a2e53;
case 0x4a2e59:goto L4a2e59;
case 0x4a2e5e:c.instructions+=1;goto B4a2e5e;
case 0x4a2e64:goto L4a2e64;
case 0x4a2e67:c.instructions+=7;goto B4a2e67;
case 0x4a2e6d:c.instructions+=6;goto B4a2e6d;
case 0x4a2e73:c.instructions+=5;goto B4a2e73;
case 0x4a2e79:c.instructions+=4;goto B4a2e79;
case 0x4a2e7b:c.instructions+=3;goto B4a2e7b;
case 0x4a2e7d:c.instructions+=2;goto B4a2e7d;
case 0x4a2e80:c.instructions+=1;goto B4a2e80;
case 0x4a2e86:goto L4a2e86;
case 0x4a2e89:c.instructions+=2;goto B4a2e89;
case 0x4a2e8a:c.instructions+=1;goto B4a2e8a;
case 0x4a2e8f:goto L4a2e8f;
case 0x4a2e96:c.instructions+=3;goto B4a2e96;
case 0x4a2e9c:c.instructions+=2;goto B4a2e9c;
case 0x4a2e9d:c.instructions+=1;goto B4a2e9d;
case 0x4a2ea2:goto L4a2ea2;
case 0x4a2ea3:c.instructions+=2;goto B4a2ea3;
case 0x4a2ea8:c.instructions+=1;goto B4a2ea8;
case 0x4a2ead:goto L4a2ead;
case 0x4a2eb6:c.instructions+=6;goto B4a2eb6;
case 0x4a2eb9:c.instructions+=5;goto B4a2eb9;
case 0x4a2ebb:c.instructions+=4;goto B4a2ebb;
case 0x4a2ec0:c.instructions+=3;goto B4a2ec0;
case 0x4a2ec1:c.instructions+=2;goto B4a2ec1;
case 0x4a2ec8:c.instructions+=1;goto B4a2ec8;
case 0x4a2ecd:goto L4a2ecd;
case 0x4a2ed0:c.instructions+=2;goto B4a2ed0;
case 0x4a2ed1:c.instructions+=1;goto B4a2ed1;
case 0x4a2ed4:goto L4a2ed4;
case 0x4a2ed6:c.instructions+=1;goto B4a2ed6;
case 0x4a2edb:goto L4a2edb;
case 0x4a2ede:c.instructions+=4;goto B4a2ede;
case 0x4a2ee0:c.instructions+=3;goto B4a2ee0;
case 0x4a2ee5:c.instructions+=2;goto B4a2ee5;
case 0x4a2ee6:c.instructions+=1;goto B4a2ee6;
case 0x4a2eeb:goto L4a2eeb;
case 0x4a2eee:c.instructions+=2;goto B4a2eee;
case 0x4a2eef:c.instructions+=1;goto B4a2eef;
case 0x4a2ef2:goto L4a2ef2;
case 0x4a2ef7:c.instructions+=1;goto B4a2ef7;
case 0x4a2efd:goto L4a2efd;
case 0x4a2eff:c.instructions+=1;goto B4a2eff;
case 0x4a2f04:goto L4a2f04;
case 0x4a2f07:c.instructions+=2;goto B4a2f07;
case 0x4a2f09:c.instructions+=1;goto B4a2f09;
case 0x4a2f0e:goto L4a2f0e;
case 0x4a2f0f:c.instructions+=2;goto B4a2f0f;
case 0x4a2f14:c.instructions+=1;goto B4a2f14;
case 0x4a2f19:goto L4a2f19;
case 0x4a2f1b:c.instructions+=1;goto B4a2f1b;
case 0x4a2f20:goto L4a2f20;
case 0x4a2f21:c.instructions+=2;goto B4a2f21;
case 0x4a2f26:c.instructions+=1;goto B4a2f26;
case 0x4a2f2b:goto L4a2f2b;
case 0x4a2f2d:c.instructions+=1;goto B4a2f2d;
case 0x4a2f32:goto L4a2f32;
case 0x4a2f33:c.instructions+=2;goto B4a2f33;
case 0x4a2f38:c.instructions+=1;goto B4a2f38;
case 0x4a2f3d:goto L4a2f3d;
case 0x4a2f44:c.instructions+=1;goto B4a2f44;
case 0x4a2f4a:goto L4a2f4a;
case 0x4a2f4f:c.instructions+=1;goto B4a2f4f;
case 0x4a2f54:goto L4a2f54;
case 0x4a2f55:c.instructions+=2;goto B4a2f55;
case 0x4a2f5a:c.instructions+=1;goto B4a2f5a;
case 0x4a2f5f:goto L4a2f5f;
case 0x4a2f61:c.instructions+=1;goto B4a2f61;
case 0x4a2f63:goto L4a2f63;
case 0x4a2f66:c.instructions+=6;goto B4a2f66;
case 0x4a2f6b:c.instructions+=5;goto B4a2f6b;
case 0x4a2f70:c.instructions+=4;goto B4a2f70;
case 0x4a2f75:c.instructions+=3;goto B4a2f75;
case 0x4a2f7a:c.instructions+=2;goto B4a2f7a;
case 0x4a2f7b:c.instructions+=1;goto B4a2f7b;
case 0x4a2f80:goto L4a2f80;
case 0x4a2f83:c.instructions+=2;goto B4a2f83;
case 0x4a2f84:c.instructions+=1;goto B4a2f84;
case 0x4a2f87:goto L4a2f87;
case 0x4a2f8d:c.instructions+=5;goto B4a2f8d;
case 0x4a2f93:c.instructions+=4;goto B4a2f93;
case 0x4a2f99:c.instructions+=3;goto B4a2f99;
case 0x4a2f9f:c.instructions+=2;goto B4a2f9f;
case 0x4a2fa5:c.instructions+=1;goto B4a2fa5;
case 0x4a2faa:goto L4a2faa;
case 0x4a2faf:c.instructions+=5;goto B4a2faf;
case 0x4a2fb2:c.instructions+=4;goto B4a2fb2;
case 0x4a2fb5:c.instructions+=3;goto B4a2fb5;
case 0x4a2fba:c.instructions+=2;goto B4a2fba;
case 0x4a2fbb:c.instructions+=1;goto B4a2fbb;
case 0x4a2fc0:goto L4a2fc0;
case 0x4a2fc3:c.instructions+=3;goto B4a2fc3;
case 0x4a2fc6:c.instructions+=2;goto B4a2fc6;
case 0x4a2fc7:c.instructions+=1;goto B4a2fc7;
case 0x4a2fca:goto L4a2fca;
case 0x4a2fcd:c.instructions+=4;goto B4a2fcd;
case 0x4a2fcf:c.instructions+=3;goto B4a2fcf;
case 0x4a2fd4:c.instructions+=2;goto B4a2fd4;
case 0x4a2fd5:c.instructions+=1;goto B4a2fd5;
case 0x4a2fda:goto L4a2fda;
case 0x4a2fdd:goto L4a2fdd;
case 0x4a2fde:c.instructions+=1;goto B4a2fde;
case 0x4a2ff0:goto L4a2ff0;
case 0x4a2ff1:c.instructions+=5;goto B4a2ff1;
case 0x4a2ff3:c.instructions+=4;goto B4a2ff3;
case 0x4a2ff5:c.instructions+=3;goto B4a2ff5;
case 0x4a2ff8:c.instructions+=2;goto B4a2ff8;
case 0x4a2ffd:c.instructions+=1;goto B4a2ffd;
default:missing_instruction(c.pc);}
B4a2000:L4a2000:{c.instructions+=2;NFSU2_TR(0x4a2000);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4a2003:{NFSU2_TR(0x4a2003);
if(r1(R+518)){{goto L4a200f;}}
}
B4a2005:L4a2005:{c.instructions+=5;NFSU2_TR(0x4a2005);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4a2008:{NFSU2_TR(0x4a2008);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4a2009:{NFSU2_TR(0x4a2009);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B4a200a:{NFSU2_TR(0x4a200a);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4a200d:{NFSU2_TR(0x4a200d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a2005u);}goto L4a2005;}}
}
B4a200f:L4a200f:{c.instructions+=8;NFSU2_TR(0x4a200f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x117cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a2015:{NFSU2_TR(0x4a2015);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4a2016:{NFSU2_TR(0x4a2016);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B4a2017:{NFSU2_TR(0x4a2017);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4a2018:{NFSU2_TR(0x4a2018);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x117cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a201e:{NFSU2_TR(0x4a201e);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B4a2022:{NFSU2_TR(0x4a2022);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a2028:{NFSU2_TR(0x4a2028);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a2000u);}goto L4a2000;}}
}
B4a202a:L4a202a:{c.instructions+=2;NFSU2_TR(0x4a202a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a202c:{NFSU2_TR(0x4a202c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4a2038;}}
}
B4a202e:L4a202e:{c.instructions+=3;NFSU2_TR(0x4a202e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a202f:{NFSU2_TR(0x4a202f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2030:{NFSU2_TR(0x4a2030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2035ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4a2035:L4a2035:{c.instructions+=1;NFSU2_TR(0x4a2035);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a2038:L4a2038:{c.instructions+=6;NFSU2_TR(0x4a2038);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a203c:{NFSU2_TR(0x4a203c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a203d:{NFSU2_TR(0x4a203d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a203e:{NFSU2_TR(0x4a203e);
u8 U[12];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B4a2045:{NFSU2_TR(0x4a2045);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2046:{NFSU2_TR(0x4a2046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a204bull));
TAIL_STATIC(0x43dc00u,43d);
}
B4a204b:L4a204b:{c.instructions+=12;NFSU2_TR(0x4a204b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B4a204d:{NFSU2_TR(0x4a204d);
u8 U[1];
w1(U+0,u8(0xaull));
s1(u32(r4(R+28)),r1(U+0));
}
B4a2050:{NFSU2_TR(0x4a2050);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a2054:{NFSU2_TR(0x4a2054);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x117cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a205a:{NFSU2_TR(0x4a205a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2060:{NFSU2_TR(0x4a2060);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a2063:{NFSU2_TR(0x4a2063);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4a2064:{NFSU2_TR(0x4a2064);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a2067:{NFSU2_TR(0x4a2067);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x117cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a206d:{NFSU2_TR(0x4a206d);
__builtin_memmove((R+4),(R+28),4);
}
B4a206f:{NFSU2_TR(0x4a206f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a2070:{NFSU2_TR(0x4a2070);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a2083;}}
}
B4a2072:L4a2072:{c.instructions+=4;NFSU2_TR(0x4a2072);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4a2073:{NFSU2_TR(0x4a2073);
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
B4a2075:{NFSU2_TR(0x4a2075);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a207b:{NFSU2_TR(0x4a207b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a2083;}}
}
B4a207d:L4a207d:{c.instructions+=1;NFSU2_TR(0x4a207d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a2083:L4a2083:{c.instructions+=3;NFSU2_TR(0x4a2083);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a2084:{NFSU2_TR(0x4a2084);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a2085:{NFSU2_TR(0x4a2085);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a2090:L4a2090:{c.instructions+=13;NFSU2_TR(0x4a2090);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2094:{NFSU2_TR(0x4a2094);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a2098:{NFSU2_TR(0x4a2098);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2099:{NFSU2_TR(0x4a2099);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a209a:{NFSU2_TR(0x4a209a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a209e:{NFSU2_TR(0x4a209e);
__builtin_memmove((R+24),(R+4),4);
}
B4a20a0:{NFSU2_TR(0x4a20a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a20a4:{NFSU2_TR(0x4a20a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a20a5:{NFSU2_TR(0x4a20a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a20a6:{NFSU2_TR(0x4a20a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a20a7:{NFSU2_TR(0x4a20a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a20a8:{NFSU2_TR(0x4a20a8);
__builtin_memmove((R+4),(R+24),4);
}
B4a20aa:{NFSU2_TR(0x4a20aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a20afull));
TAIL_STATIC(0x543d40u,543);
}
B4a20af:L4a20af:{c.instructions+=2;NFSU2_TR(0x4a20af);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x911ab364ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a20b5:{NFSU2_TR(0x4a20b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a20ca;}}
}
B4a20b7:L4a20b7:{c.instructions+=5;NFSU2_TR(0x4a20b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a20ba:{NFSU2_TR(0x4a20ba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a20bc:{NFSU2_TR(0x4a20bc);
u8 U[4];
w4(U+0,u32(0x78f240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a20c1:{NFSU2_TR(0x4a20c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a20c2:{NFSU2_TR(0x4a20c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a20c7ull));
TAIL_STATIC(0x537980u,537);
}
B4a20c7:L4a20c7:{c.instructions+=1;NFSU2_TR(0x4a20c7);
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
B4a20ca:L4a20ca:{c.instructions+=3;NFSU2_TR(0x4a20ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a20cb:{NFSU2_TR(0x4a20cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a20cc:{NFSU2_TR(0x4a20cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a20d0:L4a20d0:{c.instructions+=5;NFSU2_TR(0x4a20d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a20d1:{NFSU2_TR(0x4a20d1);
__builtin_memmove((R+24),(R+4),4);
}
B4a20d3:{NFSU2_TR(0x4a20d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a20d9:{NFSU2_TR(0x4a20d9);
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
B4a20db:{NFSU2_TR(0x4a20db);
if(r1(R+518)){{goto L4a216b;}}
}
B4a20e1:L4a20e1:{c.instructions+=3;NFSU2_TR(0x4a20e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a20e5:{NFSU2_TR(0x4a20e5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a20e7:{NFSU2_TR(0x4a20e7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4a2103;}}
}
B4a20e9:L4a20e9:{c.instructions+=2;NFSU2_TR(0x4a20e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a20ec:{NFSU2_TR(0x4a20ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a20f1ull));
TAIL_STATIC(0x54eb60u,54e);
}
B4a20f1:L4a20f1:{c.instructions+=6;NFSU2_TR(0x4a20f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a20f4:{NFSU2_TR(0x4a20f4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a20f6:{NFSU2_TR(0x4a20f6);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a20fb:{NFSU2_TR(0x4a20fb);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2100:{NFSU2_TR(0x4a2100);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2101:{NFSU2_TR(0x4a2101);
{goto L4a211d;}
}
B4a2103:L4a2103:{c.instructions+=1;NFSU2_TR(0x4a2103);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a2125;}}
}
B4a2105:L4a2105:{c.instructions+=2;NFSU2_TR(0x4a2105);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a2108:{NFSU2_TR(0x4a2108);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a210dull));
TAIL_STATIC(0x54eb40u,54e);
}
B4a210d:L4a210d:{c.instructions+=5;NFSU2_TR(0x4a210d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a2110:{NFSU2_TR(0x4a2110);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2112:{NFSU2_TR(0x4a2112);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2117:{NFSU2_TR(0x4a2117);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a211c:{NFSU2_TR(0x4a211c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a211d:L4a211d:{c.instructions+=1;NFSU2_TR(0x4a211d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2122ull));
TAIL_STATIC(0x537c00u,537);
}
B4a2122:L4a2122:{c.instructions+=1;NFSU2_TR(0x4a2122);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a2125:L4a2125:{c.instructions+=5;NFSU2_TR(0x4a2125);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a212b:{NFSU2_TR(0x4a212b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a212d:{NFSU2_TR(0x4a212d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a212e:{NFSU2_TR(0x4a212e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a2131:{NFSU2_TR(0x4a2131);
if(r1(R+518)){{goto L4a2141;}}
}
B4a2133:L4a2133:{c.instructions+=4;NFSU2_TR(0x4a2133);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a2136:{NFSU2_TR(0x4a2136);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a213b:{NFSU2_TR(0x4a213b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a213c:{NFSU2_TR(0x4a213c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2141ull));
TAIL_STATIC(0x51ee80u,51e);
}
B4a2141:L4a2141:{c.instructions+=3;NFSU2_TR(0x4a2141);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2143:{NFSU2_TR(0x4a2143);
__builtin_memmove((R+4),(R+28),4);
}
B4a2145:{NFSU2_TR(0x4a2145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a214aull));
TAIL_STATIC(0x538500u,538);
}
B4a214a:L4a214a:{c.instructions+=4;NFSU2_TR(0x4a214a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a214d:{NFSU2_TR(0x4a214d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a214e:{NFSU2_TR(0x4a214e);
__builtin_memmove((R+4),(R+28),4);
}
B4a2150:{NFSU2_TR(0x4a2150);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2155ull));
TAIL_STATIC(0x51f440u,51f);
}
B4a2155:L4a2155:{c.instructions+=6;NFSU2_TR(0x4a2155);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2156:{NFSU2_TR(0x4a2156);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a215c:{NFSU2_TR(0x4a215c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a215d:{NFSU2_TR(0x4a215d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a215f:{NFSU2_TR(0x4a215f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a2165:{NFSU2_TR(0x4a2165);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a216aull));
TAIL_STATIC(0x538080u,538);
}
B4a216a:L4a216a:{c.instructions+=1;NFSU2_TR(0x4a216a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a216b:L4a216b:{c.instructions+=2;NFSU2_TR(0x4a216b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a216c:{NFSU2_TR(0x4a216c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a2170:L4a2170:{c.instructions+=15;NFSU2_TR(0x4a2170);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2172:{NFSU2_TR(0x4a2172);
u8 U[4];
w4(U+0,u32(0x7766ffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2177:{NFSU2_TR(0x4a2177);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a217d:{NFSU2_TR(0x4a217d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a217e:{NFSU2_TR(0x4a217e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a2185:{NFSU2_TR(0x4a2185);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2186:{NFSU2_TR(0x4a2186);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2187:{NFSU2_TR(0x4a2187);
__builtin_memmove((R+24),(R+4),4);
}
B4a2189:{NFSU2_TR(0x4a2189);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a218d:{NFSU2_TR(0x4a218d);
u8 U[4];
w4(U+0,u32(0x79030cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a2193:{NFSU2_TR(0x4a2193);
__builtin_memmove((R+0),gp(0x7f44fc),4);
}
B4a2198:{NFSU2_TR(0x4a2198);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a219a:{NFSU2_TR(0x4a219a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a219b:{NFSU2_TR(0x4a219b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a21a3:{NFSU2_TR(0x4a21a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a21a8ull));
TAIL_STATIC(0x51ce80u,51c);
}
B4a21a8:L4a21a8:{c.instructions+=8;NFSU2_TR(0x4a21a8);
w4(R+0,u32(0x78f544ull));
}
B4a21ad:{NFSU2_TR(0x4a21ad);
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
B4a21b0:{NFSU2_TR(0x4a21b0);
__builtin_memmove((R+4),(R+24),4);
}
B4a21b2:{NFSU2_TR(0x4a21b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a21b8:{NFSU2_TR(0x4a21b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a21be:{NFSU2_TR(0x4a21be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a21c1:{NFSU2_TR(0x4a21c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a21c9:{NFSU2_TR(0x4a21c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a21ceull));
TAIL_STATIC(0x510d40u,510);
}
B4a21ce:L4a21ce:{c.instructions+=5;NFSU2_TR(0x4a21ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a21d2:{NFSU2_TR(0x4a21d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a21d3:{NFSU2_TR(0x4a21d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a21da:{NFSU2_TR(0x4a21da);
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
B4a21dd:{NFSU2_TR(0x4a21dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a21e0:L4a21e0:{c.instructions+=5;NFSU2_TR(0x4a21e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a21e4:{NFSU2_TR(0x4a21e4);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a21e9:{NFSU2_TR(0x4a21e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a21ea:{NFSU2_TR(0x4a21ea);
__builtin_memmove((R+24),(R+4),4);
}
B4a21ec:{NFSU2_TR(0x4a21ec);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4a226b;}}
}
B4a21ee:L4a21ee:{c.instructions+=1;NFSU2_TR(0x4a21ee);
if(r1(R+518)){{goto L4a223d;}}
}
B4a21f0:L4a21f0:{c.instructions+=2;NFSU2_TR(0x4a21f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a21f5:{NFSU2_TR(0x4a21f5);
if(r1(R+518)){{goto L4a221e;}}
}
B4a21f7:L4a21f7:{c.instructions+=2;NFSU2_TR(0x4a21f7);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a21fc:{NFSU2_TR(0x4a21fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a2294;}}
}
B4a2202:L4a2202:{c.instructions+=6;NFSU2_TR(0x4a2202);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2205:{NFSU2_TR(0x4a2205);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2207:{NFSU2_TR(0x4a2207);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a220c:{NFSU2_TR(0x4a220c);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2211:{NFSU2_TR(0x4a2211);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2212:{NFSU2_TR(0x4a2212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2217ull));
TAIL_STATIC(0x537c00u,537);
}
B4a2217:L4a2217:{c.instructions+=3;NFSU2_TR(0x4a2217);
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
B4a221a:{NFSU2_TR(0x4a221a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a221b:{NFSU2_TR(0x4a221b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a221e:L4a221e:{c.instructions+=6;NFSU2_TR(0x4a221e);
__builtin_memmove((R+4),gp(0x7f44fc),4);
}
B4a2224:{NFSU2_TR(0x4a2224);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2226:{NFSU2_TR(0x4a2226);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a222b:{NFSU2_TR(0x4a222b);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2230:{NFSU2_TR(0x4a2230);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2231:{NFSU2_TR(0x4a2231);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2236ull));
TAIL_STATIC(0x537c00u,537);
}
B4a2236:L4a2236:{c.instructions+=3;NFSU2_TR(0x4a2236);
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
B4a2239:{NFSU2_TR(0x4a2239);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a223a:{NFSU2_TR(0x4a223a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a223d:L4a223d:{c.instructions+=3;NFSU2_TR(0x4a223d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a2243:{NFSU2_TR(0x4a2243);
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
B4a2245:{NFSU2_TR(0x4a2245);
if(r1(R+518)){{goto L4a2294;}}
}
B4a2247:L4a2247:{c.instructions+=3;NFSU2_TR(0x4a2247);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a224a:{NFSU2_TR(0x4a224a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a224b:{NFSU2_TR(0x4a224b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2250ull));
TAIL_STATIC(0x5379a0u,537);
}
B4a2250:L4a2250:{c.instructions+=5;NFSU2_TR(0x4a2250);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a2257:{NFSU2_TR(0x4a2257);
__builtin_memmove((R+0),gp(0x7f44fc),4);
}
B4a225c:{NFSU2_TR(0x4a225c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a225d:{NFSU2_TR(0x4a225d);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a225f:{NFSU2_TR(0x4a225f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2264ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a2264:L4a2264:{c.instructions+=3;NFSU2_TR(0x4a2264);
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
B4a2267:{NFSU2_TR(0x4a2267);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a2268:{NFSU2_TR(0x4a2268);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a226b:L4a226b:{c.instructions+=2;NFSU2_TR(0x4a226b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe1fde1d1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a2270:{NFSU2_TR(0x4a2270);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a2294;}}
}
B4a2272:L4a2272:{c.instructions+=6;NFSU2_TR(0x4a2272);
__builtin_memmove((R+4),gp(0x7f44fc),4);
}
B4a2278:{NFSU2_TR(0x4a2278);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a227a:{NFSU2_TR(0x4a227a);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a227f:{NFSU2_TR(0x4a227f);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2284:{NFSU2_TR(0x4a2284);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2285:{NFSU2_TR(0x4a2285);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a228aull));
TAIL_STATIC(0x537c00u,537);
}
B4a228a:L4a228a:{c.instructions+=2;NFSU2_TR(0x4a228a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a2291:{NFSU2_TR(0x4a2291);
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
B4a2294:L4a2294:{c.instructions+=2;NFSU2_TR(0x4a2294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a2295:{NFSU2_TR(0x4a2295);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a22a0:L4a22a0:{c.instructions+=8;NFSU2_TR(0x4a22a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B4a22a3:{NFSU2_TR(0x4a22a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a22a4:{NFSU2_TR(0x4a22a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a22a5:{NFSU2_TR(0x4a22a5);
__builtin_memmove((R+24),(R+4),4);
}
B4a22a7:{NFSU2_TR(0x4a22a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a22aa:{NFSU2_TR(0x4a22aa);
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
B4a22ac:{NFSU2_TR(0x4a22ac);
w4(R+4,u32(0xcull));
}
B4a22b1:{NFSU2_TR(0x4a22b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4a22b5:L4a22b5:{c.instructions+=1;NFSU2_TR(0x4a22b5);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4a22b7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a22b5u);}goto L4a22b5;}
}
B4a22b7:L4a22b7:{c.instructions+=15;NFSU2_TR(0x4a22b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a22ba:{NFSU2_TR(0x4a22ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a22be:{NFSU2_TR(0x4a22be);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a22c1:{NFSU2_TR(0x4a22c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a22c3:{NFSU2_TR(0x4a22c3);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a22c7:{NFSU2_TR(0x4a22c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a22c8:{NFSU2_TR(0x4a22c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f6a4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a22d0:{NFSU2_TR(0x4a22d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f694ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a22d8:{NFSU2_TR(0x4a22d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f688ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a22e0:{NFSU2_TR(0x4a22e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a22e8:{NFSU2_TR(0x4a22e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a22f0:{NFSU2_TR(0x4a22f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a22f8:{NFSU2_TR(0x4a22f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a2300:{NFSU2_TR(0x4a2300);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x42380000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a2308:{NFSU2_TR(0x4a2308);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a230bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a230b:L4a230b:{c.instructions+=9;NFSU2_TR(0x4a230b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a2311:{NFSU2_TR(0x4a2311);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a2317:{NFSU2_TR(0x4a2317);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2319:{NFSU2_TR(0x4a2319);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a231d:{NFSU2_TR(0x4a231d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a231e:{NFSU2_TR(0x4a231e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f674ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a2326:{NFSU2_TR(0x4a2326);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f660ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a232e:{NFSU2_TR(0x4a232e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f650ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a2336:{NFSU2_TR(0x4a2336);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2339ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a2339:L4a2339:{c.instructions+=9;NFSU2_TR(0x4a2339);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a233f:{NFSU2_TR(0x4a233f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a2345:{NFSU2_TR(0x4a2345);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2347:{NFSU2_TR(0x4a2347);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a234b:{NFSU2_TR(0x4a234b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a234c:{NFSU2_TR(0x4a234c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f63cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a2354:{NFSU2_TR(0x4a2354);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f62cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a235c:{NFSU2_TR(0x4a235c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f61cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a2364:{NFSU2_TR(0x4a2364);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2367ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a2367:L4a2367:{c.instructions+=4;NFSU2_TR(0x4a2367);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a2368:{NFSU2_TR(0x4a2368);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a2369:{NFSU2_TR(0x4a2369);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a236c:{NFSU2_TR(0x4a236c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a2370:L4a2370:{c.instructions+=7;NFSU2_TR(0x4a2370);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2371:{NFSU2_TR(0x4a2371);
__builtin_memmove((R+24),(R+4),4);
}
B4a2373:{NFSU2_TR(0x4a2373);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2379:{NFSU2_TR(0x4a2379);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a237a:{NFSU2_TR(0x4a237a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a237d:{NFSU2_TR(0x4a237d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a2380:{NFSU2_TR(0x4a2380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2385ull));
TAIL_STATIC(0x5b53a0u,5b5);
}
B4a2385:L4a2385:{c.instructions+=4;NFSU2_TR(0x4a2385);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2386:{NFSU2_TR(0x4a2386);
__builtin_memmove((R+4),(R+28),4);
}
B4a2388:{NFSU2_TR(0x4a2388);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a238b:{NFSU2_TR(0x4a238b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2390ull));
TAIL_STATIC(0x4ff550u,4ff);
}
B4a2390:L4a2390:{c.instructions+=3;NFSU2_TR(0x4a2390);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4a2392:{NFSU2_TR(0x4a2392);
__builtin_memmove((R+4),(R+28),4);
}
B4a2394:{NFSU2_TR(0x4a2394);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2397ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a2397:L4a2397:{c.instructions+=4;NFSU2_TR(0x4a2397);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a239d:{NFSU2_TR(0x4a239d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a23a0:{NFSU2_TR(0x4a23a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a23a6:{NFSU2_TR(0x4a23a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a23abull));
TAIL_STATIC(0x5b6a20u,5b6);
}
B4a23ab:L4a23ab:{c.instructions+=4;NFSU2_TR(0x4a23ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a23ac:{NFSU2_TR(0x4a23ac);
__builtin_memmove((R+4),(R+28),4);
}
B4a23ae:{NFSU2_TR(0x4a23ae);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a23b1:{NFSU2_TR(0x4a23b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a23b6ull));
TAIL_STATIC(0x4ff550u,4ff);
}
B4a23b6:L4a23b6:{c.instructions+=3;NFSU2_TR(0x4a23b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a23b8:{NFSU2_TR(0x4a23b8);
__builtin_memmove((R+4),(R+28),4);
}
B4a23ba:{NFSU2_TR(0x4a23ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a23bdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a23bd:L4a23bd:{c.instructions+=4;NFSU2_TR(0x4a23bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a23c3:{NFSU2_TR(0x4a23c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a23c6:{NFSU2_TR(0x4a23c6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xdcull))));
}
B4a23cc:{NFSU2_TR(0x4a23cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a23d1ull));
TAIL_STATIC(0x5b5490u,5b5);
}
B4a23d1:L4a23d1:{c.instructions+=4;NFSU2_TR(0x4a23d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a23d2:{NFSU2_TR(0x4a23d2);
__builtin_memmove((R+4),(R+24),4);
}
B4a23d4:{NFSU2_TR(0x4a23d4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a23d7:{NFSU2_TR(0x4a23d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a23dcull));
TAIL_STATIC(0x4ff550u,4ff);
}
B4a23dc:L4a23dc:{c.instructions+=5;NFSU2_TR(0x4a23dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4a23de:{NFSU2_TR(0x4a23de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a23df:{NFSU2_TR(0x4a23df);
__builtin_memmove((R+4),(R+24),4);
}
B4a23e1:{NFSU2_TR(0x4a23e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a23e2:{NFSU2_TR(0x4a23e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4a23f0:L4a23f0:{c.instructions+=6;NFSU2_TR(0x4a23f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a23f1:{NFSU2_TR(0x4a23f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a23f2:{NFSU2_TR(0x4a23f2);
__builtin_memmove((R+24),(R+4),4);
}
B4a23f4:{NFSU2_TR(0x4a23f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a23f7:{NFSU2_TR(0x4a23f7);
u8 U[4];
w4(U+0,u32(0x790338ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a23fc:{NFSU2_TR(0x4a23fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2401ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a2401:L4a2401:{c.instructions+=5;NFSU2_TR(0x4a2401);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a2404:{NFSU2_TR(0x4a2404);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2405:{NFSU2_TR(0x4a2405);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a240a:{NFSU2_TR(0x4a240a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a240b:{NFSU2_TR(0x4a240b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2410ull));
TAIL_STATIC(0x537a10u,537);
}
B4a2410:L4a2410:{c.instructions+=3;NFSU2_TR(0x4a2410);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a2413:{NFSU2_TR(0x4a2413);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2414:{NFSU2_TR(0x4a2414);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2419ull));
TAIL_STATIC(0x50c900u,50c);
}
B4a2419:L4a2419:{c.instructions+=5;NFSU2_TR(0x4a2419);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a241f:{NFSU2_TR(0x4a241f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4a2421:{NFSU2_TR(0x4a2421);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2423:{NFSU2_TR(0x4a2423);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2424:{NFSU2_TR(0x4a2424);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2429ull));
TAIL_STATIC(0x511e60u,511);
}
B4a2429:L4a2429:{c.instructions+=5;NFSU2_TR(0x4a2429);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a242b:{NFSU2_TR(0x4a242b);
__builtin_memmove((R+28),(R+0),4);
}
B4a242d:{NFSU2_TR(0x4a242d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a242f:{NFSU2_TR(0x4a242f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2430:{NFSU2_TR(0x4a2430);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2435ull));
TAIL_STATIC(0x4901d0u,490);
}
B4a2435:L4a2435:{c.instructions+=3;NFSU2_TR(0x4a2435);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4a2438:{NFSU2_TR(0x4a2438);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a243a:{NFSU2_TR(0x4a243a);
if(r1(R+518)){{goto L4a244b;}}
}
B4a243c:L4a243c:{c.instructions+=4;NFSU2_TR(0x4a243c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a243f:{NFSU2_TR(0x4a243f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2440:{NFSU2_TR(0x4a2440);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2441:{NFSU2_TR(0x4a2441);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2446ull));
TAIL_STATIC(0x50c990u,50c);
}
B4a2446:L4a2446:{c.instructions+=2;NFSU2_TR(0x4a2446);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a2449:{NFSU2_TR(0x4a2449);
{goto L4a2462;}
}
B4a244b:L4a244b:{c.instructions+=2;NFSU2_TR(0x4a244b);
u8 U[4];
w4(U+0,u32(0x790324ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2450:{NFSU2_TR(0x4a2450);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2455ull));
TAIL_STATIC(0x505450u,505);
}
B4a2455:L4a2455:{c.instructions+=4;NFSU2_TR(0x4a2455);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2456:{NFSU2_TR(0x4a2456);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2459:{NFSU2_TR(0x4a2459);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a245a:{NFSU2_TR(0x4a245a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a245full));
TAIL_STATIC(0x50c990u,50c);
}
B4a245f:L4a245f:{c.instructions+=1;NFSU2_TR(0x4a245f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a2462:L4a2462:{c.instructions+=5;NFSU2_TR(0x4a2462);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a2468:{NFSU2_TR(0x4a2468);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a246a:{NFSU2_TR(0x4a246a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a246c:{NFSU2_TR(0x4a246c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a246d:{NFSU2_TR(0x4a246d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2472ull));
TAIL_STATIC(0x511e60u,511);
}
B4a2472:L4a2472:{c.instructions+=5;NFSU2_TR(0x4a2472);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2474:{NFSU2_TR(0x4a2474);
__builtin_memmove((R+28),(R+0),4);
}
B4a2476:{NFSU2_TR(0x4a2476);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2478:{NFSU2_TR(0x4a2478);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2479:{NFSU2_TR(0x4a2479);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a247eull));
TAIL_STATIC(0x4901d0u,490);
}
B4a247e:L4a247e:{c.instructions+=3;NFSU2_TR(0x4a247e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a2481:{NFSU2_TR(0x4a2481);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a2483:{NFSU2_TR(0x4a2483);
if(r1(R+518)){{goto L4a249b;}}
}
B4a2485:L4a2485:{c.instructions+=4;NFSU2_TR(0x4a2485);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2488:{NFSU2_TR(0x4a2488);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2489:{NFSU2_TR(0x4a2489);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a248a:{NFSU2_TR(0x4a248a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a248full));
TAIL_STATIC(0x50c990u,50c);
}
B4a248f:L4a248f:{c.instructions+=5;NFSU2_TR(0x4a248f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a2492:{NFSU2_TR(0x4a2492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a2493:{NFSU2_TR(0x4a2493);
__builtin_memmove((R+4),(R+24),4);
}
B4a2495:{NFSU2_TR(0x4a2495);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a2496:{NFSU2_TR(0x4a2496);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a2370u);}goto L4a2370;}
}
B4a249b:L4a249b:{c.instructions+=2;NFSU2_TR(0x4a249b);
u8 U[4];
w4(U+0,u32(0x790324ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a24a0:{NFSU2_TR(0x4a24a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a24a5ull));
TAIL_STATIC(0x505450u,505);
}
B4a24a5:L4a24a5:{c.instructions+=4;NFSU2_TR(0x4a24a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a24a8:{NFSU2_TR(0x4a24a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a24a9:{NFSU2_TR(0x4a24a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a24aa:{NFSU2_TR(0x4a24aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a24afull));
TAIL_STATIC(0x50c990u,50c);
}
B4a24af:L4a24af:{c.instructions+=5;NFSU2_TR(0x4a24af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a24b2:{NFSU2_TR(0x4a24b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a24b3:{NFSU2_TR(0x4a24b3);
__builtin_memmove((R+4),(R+24),4);
}
B4a24b5:{NFSU2_TR(0x4a24b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a24b6:{NFSU2_TR(0x4a24b6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a2370u);}goto L4a2370;}
}
B4a24c0:L4a24c0:{c.instructions+=8;NFSU2_TR(0x4a24c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a24c4:{NFSU2_TR(0x4a24c4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a24c6:{NFSU2_TR(0x4a24c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a24c7:{NFSU2_TR(0x4a24c7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a24c8:{NFSU2_TR(0x4a24c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a24c9:{NFSU2_TR(0x4a24c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a24ca:{NFSU2_TR(0x4a24ca);
__builtin_memmove((R+28),(R+4),4);
}
B4a24cc:{NFSU2_TR(0x4a24cc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4a24d8;}}
}
B4a24ce:L4a24ce:{c.instructions+=2;NFSU2_TR(0x4a24ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a24d1:{NFSU2_TR(0x4a24d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a24d6ull));
TAIL_STATIC(0x54eb60u,54e);
}
B4a24d6:L4a24d6:{c.instructions+=1;NFSU2_TR(0x4a24d6);
{goto L4a24e2;}
}
B4a24d8:L4a24d8:{c.instructions+=1;NFSU2_TR(0x4a24d8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a24e2;}}
}
B4a24da:L4a24da:{c.instructions+=2;NFSU2_TR(0x4a24da);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a24dd:{NFSU2_TR(0x4a24dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a24e2ull));
TAIL_STATIC(0x54eb40u,54e);
}
B4a24e2:L4a24e2:{c.instructions+=5;NFSU2_TR(0x4a24e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a24e5:{NFSU2_TR(0x4a24e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a24e8:{NFSU2_TR(0x4a24e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a24e9:{NFSU2_TR(0x4a24e9);
__builtin_memmove((R+4),(R+24),4);
}
B4a24eb:{NFSU2_TR(0x4a24eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a24f0ull));
TAIL_STATIC(0x51f440u,51f);
}
B4a24f0:L4a24f0:{c.instructions+=5;NFSU2_TR(0x4a24f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a24f3:{NFSU2_TR(0x4a24f3);
__builtin_memmove((R+12),(R+0),4);
}
B4a24f5:{NFSU2_TR(0x4a24f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f4524ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4a24fc:{NFSU2_TR(0x4a24fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a24fd:{NFSU2_TR(0x4a24fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2502ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a2502:L4a2502:{c.instructions+=4;NFSU2_TR(0x4a2502);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a2505:{NFSU2_TR(0x4a2505);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2506:{NFSU2_TR(0x4a2506);
u8 U[4];
w4(U+0,u32(0x790348ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a250b:{NFSU2_TR(0x4a250b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2510ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4a2510:L4a2510:{c.instructions+=4;NFSU2_TR(0x4a2510);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a2513:{NFSU2_TR(0x4a2513);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2514:{NFSU2_TR(0x4a2514);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2515:{NFSU2_TR(0x4a2515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a251aull));
TAIL_STATIC(0x537b80u,537);
}
B4a251a:L4a251a:{c.instructions+=4;NFSU2_TR(0x4a251a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a251d:{NFSU2_TR(0x4a251d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a2520:{NFSU2_TR(0x4a2520);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a2522:{NFSU2_TR(0x4a2522);
if(r1(R+518)){{goto L4a2532;}}
}
B4a2524:L4a2524:{c.instructions+=4;NFSU2_TR(0x4a2524);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a2527:{NFSU2_TR(0x4a2527);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a252c:{NFSU2_TR(0x4a252c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a252d:{NFSU2_TR(0x4a252d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2532ull));
TAIL_STATIC(0x51ee80u,51e);
}
B4a2532:L4a2532:{c.instructions+=3;NFSU2_TR(0x4a2532);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2534:{NFSU2_TR(0x4a2534);
__builtin_memmove((R+4),(R+24),4);
}
B4a2536:{NFSU2_TR(0x4a2536);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a253bull));
TAIL_STATIC(0x538500u,538);
}
B4a253b:L4a253b:{c.instructions+=5;NFSU2_TR(0x4a253b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a253c:{NFSU2_TR(0x4a253c);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a253e:{NFSU2_TR(0x4a253e);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2540:{NFSU2_TR(0x4a2540);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a2546:{NFSU2_TR(0x4a2546);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a254bull));
TAIL_STATIC(0x538080u,538);
}
B4a254b:L4a254b:{c.instructions+=5;NFSU2_TR(0x4a254b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a254c:{NFSU2_TR(0x4a254c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a254d:{NFSU2_TR(0x4a254d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a254e:{NFSU2_TR(0x4a254e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a254f:{NFSU2_TR(0x4a254f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a2560:L4a2560:{c.instructions+=5;NFSU2_TR(0x4a2560);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2561:{NFSU2_TR(0x4a2561);
__builtin_memmove((R+24),(R+4),4);
}
B4a2563:{NFSU2_TR(0x4a2563);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2566:{NFSU2_TR(0x4a2566);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a2568:{NFSU2_TR(0x4a2568);
if(r1(R+518)){{goto L4a257a;}}
}
B4a256a:L4a256a:{c.instructions+=2;NFSU2_TR(0x4a256a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a256b:{NFSU2_TR(0x4a256b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2570ull));
TAIL_STATIC(0x540a60u,540);
}
B4a2570:L4a2570:{c.instructions+=2;NFSU2_TR(0x4a2570);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a2573:{NFSU2_TR(0x4a2573);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a257a:L4a257a:{c.instructions+=5;NFSU2_TR(0x4a257a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a257e:{NFSU2_TR(0x4a257e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a2581:{NFSU2_TR(0x4a2581);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a2583:{NFSU2_TR(0x4a2583);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a2586:{NFSU2_TR(0x4a2586);
if(r1(R+518)){{goto L4a258f;}}
}
B4a2588:L4a2588:{c.instructions+=2;NFSU2_TR(0x4a2588);
u8 U[4];
w4(U+0,u32(0x4984589ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a258d:{NFSU2_TR(0x4a258d);
{goto L4a2594;}
}
B4a258f:L4a258f:{c.instructions+=1;NFSU2_TR(0x4a258f);
u8 U[4];
w4(U+0,u32(0xa19617bdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2594:L4a2594:{c.instructions+=1;NFSU2_TR(0x4a2594);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2599ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a2599:L4a2599:{c.instructions+=7;NFSU2_TR(0x4a2599);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a259a:{NFSU2_TR(0x4a259a);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a259f:{NFSU2_TR(0x4a259f);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a25a4:{NFSU2_TR(0x4a25a4);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a25a9:{NFSU2_TR(0x4a25a9);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a25ae:{NFSU2_TR(0x4a25ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a25af:{NFSU2_TR(0x4a25af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a25b4ull));
TAIL_STATIC(0x558540u,558);
}
B4a25b4:L4a25b4:{c.instructions+=3;NFSU2_TR(0x4a25b4);
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
B4a25b7:{NFSU2_TR(0x4a25b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a25b8:{NFSU2_TR(0x4a25b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a25c0:L4a25c0:{c.instructions+=9;NFSU2_TR(0x4a25c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a25c1:{NFSU2_TR(0x4a25c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a25c2:{NFSU2_TR(0x4a25c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a25c3:{NFSU2_TR(0x4a25c3);
__builtin_memmove((R+28),(R+4),4);
}
B4a25c5:{NFSU2_TR(0x4a25c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a25c8:{NFSU2_TR(0x4a25c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a25cb:{NFSU2_TR(0x4a25cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a25cc:{NFSU2_TR(0x4a25cc);
__builtin_memmove((R+4),(R+24),4);
}
B4a25ce:{NFSU2_TR(0x4a25ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a25d3ull));
TAIL_STATIC(0x51f440u,51f);
}
B4a25d3:L4a25d3:{c.instructions+=3;NFSU2_TR(0x4a25d3);
__builtin_memmove((R+4),(R+24),4);
}
B4a25d5:{NFSU2_TR(0x4a25d5);
__builtin_memmove((R+12),(R+0),4);
}
B4a25d7:{NFSU2_TR(0x4a25d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a25dcull));
TAIL_STATIC(0x54eb80u,54e);
}
B4a25dc:L4a25dc:{c.instructions+=4;NFSU2_TR(0x4a25dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a25df:{NFSU2_TR(0x4a25df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a25e0:{NFSU2_TR(0x4a25e0);
__builtin_memmove((R+4),(R+24),4);
}
B4a25e2:{NFSU2_TR(0x4a25e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a25e7ull));
TAIL_STATIC(0x51f440u,51f);
}
B4a25e7:L4a25e7:{c.instructions+=2;NFSU2_TR(0x4a25e7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a25e9:{NFSU2_TR(0x4a25e9);
if(r1(R+518)){{goto L4a2653;}}
}
B4a25eb:L4a25eb:{c.instructions+=5;NFSU2_TR(0x4a25eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a25ee:{NFSU2_TR(0x4a25ee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a25ef:{NFSU2_TR(0x4a25ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a25f0:{NFSU2_TR(0x4a25f0);
__builtin_memmove((R+4),(R+24),4);
}
B4a25f2:{NFSU2_TR(0x4a25f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a25f7ull));
TAIL_STATIC(0x51f440u,51f);
}
B4a25f7:L4a25f7:{c.instructions+=5;NFSU2_TR(0x4a25f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a25fa:{NFSU2_TR(0x4a25fa);
__builtin_memmove((R+12),(R+0),4);
}
B4a25fc:{NFSU2_TR(0x4a25fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f4524ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4a2603:{NFSU2_TR(0x4a2603);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2604:{NFSU2_TR(0x4a2604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2609ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a2609:L4a2609:{c.instructions+=4;NFSU2_TR(0x4a2609);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a260c:{NFSU2_TR(0x4a260c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a260d:{NFSU2_TR(0x4a260d);
u8 U[4];
w4(U+0,u32(0x790348ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2612:{NFSU2_TR(0x4a2612);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2617ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4a2617:L4a2617:{c.instructions+=4;NFSU2_TR(0x4a2617);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a261a:{NFSU2_TR(0x4a261a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a261b:{NFSU2_TR(0x4a261b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a261c:{NFSU2_TR(0x4a261c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2621ull));
TAIL_STATIC(0x537b80u,537);
}
B4a2621:L4a2621:{c.instructions+=5;NFSU2_TR(0x4a2621);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a2624:{NFSU2_TR(0x4a2624);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a2627:{NFSU2_TR(0x4a2627);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a2629:{NFSU2_TR(0x4a2629);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a262a:{NFSU2_TR(0x4a262a);
if(r1(R+518)){{goto L4a263a;}}
}
B4a262c:L4a262c:{c.instructions+=4;NFSU2_TR(0x4a262c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a262f:{NFSU2_TR(0x4a262f);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2634:{NFSU2_TR(0x4a2634);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2635:{NFSU2_TR(0x4a2635);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a263aull));
TAIL_STATIC(0x51ee80u,51e);
}
B4a263a:L4a263a:{c.instructions+=3;NFSU2_TR(0x4a263a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a263c:{NFSU2_TR(0x4a263c);
__builtin_memmove((R+4),(R+24),4);
}
B4a263e:{NFSU2_TR(0x4a263e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2643ull));
TAIL_STATIC(0x538500u,538);
}
B4a2643:L4a2643:{c.instructions+=5;NFSU2_TR(0x4a2643);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2644:{NFSU2_TR(0x4a2644);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2646:{NFSU2_TR(0x4a2646);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2648:{NFSU2_TR(0x4a2648);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a264e:{NFSU2_TR(0x4a264e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2653ull));
TAIL_STATIC(0x538080u,538);
}
B4a2653:L4a2653:{c.instructions+=3;NFSU2_TR(0x4a2653);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2659:{NFSU2_TR(0x4a2659);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a265a:{NFSU2_TR(0x4a265a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a265full));
TAIL_STATIC(0x52d100u,52d);
}
B4a265f:L4a265f:{c.instructions+=3;NFSU2_TR(0x4a265f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a2662:{NFSU2_TR(0x4a2662);
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
B4a2664:{NFSU2_TR(0x4a2664);
if(r1(R+518)){{goto L4a2677;}}
}
B4a2666:L4a2666:{c.instructions+=4;NFSU2_TR(0x4a2666);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a2669:{NFSU2_TR(0x4a2669);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a266a:{NFSU2_TR(0x4a266a);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a266f:{NFSU2_TR(0x4a266f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2674ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a2674:L4a2674:{c.instructions+=1;NFSU2_TR(0x4a2674);
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
B4a2677:L4a2677:{c.instructions+=4;NFSU2_TR(0x4a2677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a2678:{NFSU2_TR(0x4a2678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a2679:{NFSU2_TR(0x4a2679);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a267a:{NFSU2_TR(0x4a267a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a2680:L4a2680:{c.instructions+=12;NFSU2_TR(0x4a2680);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2681:{NFSU2_TR(0x4a2681);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2682:{NFSU2_TR(0x4a2682);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2683:{NFSU2_TR(0x4a2683);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2684:{NFSU2_TR(0x4a2684);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2685:{NFSU2_TR(0x4a2685);
__builtin_memmove((R+24),(R+4),4);
}
B4a2687:{NFSU2_TR(0x4a2687);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a268d:{NFSU2_TR(0x4a268d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a2690:{NFSU2_TR(0x4a2690);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2692:{NFSU2_TR(0x4a2692);
u8 U[4];
w4(U+0,u32(0x7903d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2697:{NFSU2_TR(0x4a2697);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2698:{NFSU2_TR(0x4a2698);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a269dull));
TAIL_STATIC(0x7414a0u,741);
}
B4a269d:L4a269d:{c.instructions+=3;NFSU2_TR(0x4a269d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a26a0:{NFSU2_TR(0x4a26a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a26a1:{NFSU2_TR(0x4a26a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a26a6ull));
TAIL_STATIC(0x7420b0u,742);
}
B4a26a6:L4a26a6:{c.instructions+=8;NFSU2_TR(0x4a26a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a26ac:{NFSU2_TR(0x4a26ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a26af:{NFSU2_TR(0x4a26af);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a26b1:{NFSU2_TR(0x4a26b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a26b4:{NFSU2_TR(0x4a26b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a26b7:{NFSU2_TR(0x4a26b7);
u8 U[4];
w4(U+0,u32(0x7903ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a26bc:{NFSU2_TR(0x4a26bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a26bd:{NFSU2_TR(0x4a26bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a26c2ull));
TAIL_STATIC(0x7414a0u,741);
}
B4a26c2:L4a26c2:{c.instructions+=3;NFSU2_TR(0x4a26c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a26c5:{NFSU2_TR(0x4a26c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a26c6:{NFSU2_TR(0x4a26c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a26cbull));
TAIL_STATIC(0x7420b0u,742);
}
B4a26cb:L4a26cb:{c.instructions+=8;NFSU2_TR(0x4a26cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a26d1:{NFSU2_TR(0x4a26d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a26d4:{NFSU2_TR(0x4a26d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a26d6:{NFSU2_TR(0x4a26d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a26d9:{NFSU2_TR(0x4a26d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a26dc:{NFSU2_TR(0x4a26dc);
u8 U[4];
w4(U+0,u32(0x7903c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a26e1:{NFSU2_TR(0x4a26e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a26e2:{NFSU2_TR(0x4a26e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a26e7ull));
TAIL_STATIC(0x7414a0u,741);
}
B4a26e7:L4a26e7:{c.instructions+=3;NFSU2_TR(0x4a26e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a26ea:{NFSU2_TR(0x4a26ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a26eb:{NFSU2_TR(0x4a26eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a26f0ull));
TAIL_STATIC(0x7420b0u,742);
}
B4a26f0:L4a26f0:{c.instructions+=8;NFSU2_TR(0x4a26f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a26f3:{NFSU2_TR(0x4a26f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a26f6:{NFSU2_TR(0x4a26f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a26fc:{NFSU2_TR(0x4a26fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a26ff:{NFSU2_TR(0x4a26ff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2701:{NFSU2_TR(0x4a2701);
u8 U[4];
w4(U+0,u32(0x7903bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2706:{NFSU2_TR(0x4a2706);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2707:{NFSU2_TR(0x4a2707);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a270cull));
TAIL_STATIC(0x7414a0u,741);
}
B4a270c:L4a270c:{c.instructions+=3;NFSU2_TR(0x4a270c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a270f:{NFSU2_TR(0x4a270f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2710:{NFSU2_TR(0x4a2710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2715ull));
TAIL_STATIC(0x7420b0u,742);
}
B4a2715:L4a2715:{c.instructions+=8;NFSU2_TR(0x4a2715);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a271b:{NFSU2_TR(0x4a271b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a271e:{NFSU2_TR(0x4a271e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2720:{NFSU2_TR(0x4a2720);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a2723:{NFSU2_TR(0x4a2723);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2726:{NFSU2_TR(0x4a2726);
u8 U[4];
w4(U+0,u32(0x7903b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a272b:{NFSU2_TR(0x4a272b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a272c:{NFSU2_TR(0x4a272c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2731ull));
TAIL_STATIC(0x7414a0u,741);
}
B4a2731:L4a2731:{c.instructions+=3;NFSU2_TR(0x4a2731);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a2734:{NFSU2_TR(0x4a2734);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2735:{NFSU2_TR(0x4a2735);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a273aull));
TAIL_STATIC(0x7420b0u,742);
}
B4a273a:L4a273a:{c.instructions+=8;NFSU2_TR(0x4a273a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a2740:{NFSU2_TR(0x4a2740);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a2743:{NFSU2_TR(0x4a2743);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2745:{NFSU2_TR(0x4a2745);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a2748:{NFSU2_TR(0x4a2748);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a274b:{NFSU2_TR(0x4a274b);
u8 U[4];
w4(U+0,u32(0x7903acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2750:{NFSU2_TR(0x4a2750);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2751:{NFSU2_TR(0x4a2751);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2756ull));
TAIL_STATIC(0x7414a0u,741);
}
B4a2756:L4a2756:{c.instructions+=3;NFSU2_TR(0x4a2756);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a2759:{NFSU2_TR(0x4a2759);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a275a:{NFSU2_TR(0x4a275a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a275full));
TAIL_STATIC(0x7420b0u,742);
}
B4a275f:L4a275f:{c.instructions+=8;NFSU2_TR(0x4a275f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a2762:{NFSU2_TR(0x4a2762);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a2765:{NFSU2_TR(0x4a2765);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a276b:{NFSU2_TR(0x4a276b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a276e:{NFSU2_TR(0x4a276e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2770:{NFSU2_TR(0x4a2770);
u8 U[4];
w4(U+0,u32(0x7903a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2775:{NFSU2_TR(0x4a2775);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2776:{NFSU2_TR(0x4a2776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a277bull));
TAIL_STATIC(0x7414a0u,741);
}
B4a277b:L4a277b:{c.instructions+=3;NFSU2_TR(0x4a277b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a277e:{NFSU2_TR(0x4a277e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a277f:{NFSU2_TR(0x4a277f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2784ull));
TAIL_STATIC(0x7420b0u,742);
}
B4a2784:L4a2784:{c.instructions+=8;NFSU2_TR(0x4a2784);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a2787:{NFSU2_TR(0x4a2787);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a278d:{NFSU2_TR(0x4a278d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a278f:{NFSU2_TR(0x4a278f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a2792:{NFSU2_TR(0x4a2792);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2795:{NFSU2_TR(0x4a2795);
u8 U[4];
w4(U+0,u32(0x79039cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a279a:{NFSU2_TR(0x4a279a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a279b:{NFSU2_TR(0x4a279b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a27a0ull));
TAIL_STATIC(0x7414a0u,741);
}
B4a27a0:L4a27a0:{c.instructions+=3;NFSU2_TR(0x4a27a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a27a3:{NFSU2_TR(0x4a27a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a27a4:{NFSU2_TR(0x4a27a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a27a9ull));
TAIL_STATIC(0x7420b0u,742);
}
B4a27a9:L4a27a9:{c.instructions+=8;NFSU2_TR(0x4a27a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a27af:{NFSU2_TR(0x4a27af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a27b2:{NFSU2_TR(0x4a27b2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a27b4:{NFSU2_TR(0x4a27b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a27b7:{NFSU2_TR(0x4a27b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a27ba:{NFSU2_TR(0x4a27ba);
u8 U[4];
w4(U+0,u32(0x790394ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a27bf:{NFSU2_TR(0x4a27bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a27c0:{NFSU2_TR(0x4a27c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a27c5ull));
TAIL_STATIC(0x7414a0u,741);
}
B4a27c5:L4a27c5:{c.instructions+=3;NFSU2_TR(0x4a27c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a27c8:{NFSU2_TR(0x4a27c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a27c9:{NFSU2_TR(0x4a27c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a27ceull));
TAIL_STATIC(0x7420b0u,742);
}
B4a27ce:L4a27ce:{c.instructions+=11;NFSU2_TR(0x4a27ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a27d4:{NFSU2_TR(0x4a27d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a27d7:{NFSU2_TR(0x4a27d7);
u8 U[4];
w4(U+0,u32(0x79038cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a27dc:{NFSU2_TR(0x4a27dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a27df:{NFSU2_TR(0x4a27df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a27e2:{NFSU2_TR(0x4a27e2);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a27e4:{NFSU2_TR(0x4a27e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4a27ea:{NFSU2_TR(0x4a27ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a27eb:{NFSU2_TR(0x4a27eb);
u8 U[4];
w4(U+0,u32(0x790380ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a27f0:{NFSU2_TR(0x4a27f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a27f1:{NFSU2_TR(0x4a27f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a27f6ull));
TAIL_STATIC(0x7414a0u,741);
}
B4a27f6:L4a27f6:{c.instructions+=3;NFSU2_TR(0x4a27f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a27f9:{NFSU2_TR(0x4a27f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a27fa:{NFSU2_TR(0x4a27fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a27ffull));
TAIL_STATIC(0x742360u,742);
}
B4a27ff:L4a27ff:{c.instructions+=7;NFSU2_TR(0x4a27ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2805:{NFSU2_TR(0x4a2805);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a2808:{NFSU2_TR(0x4a2808);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a280b:{NFSU2_TR(0x4a280b);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a280d:{NFSU2_TR(0x4a280d);
u8 U[4];
w4(U+0,u32(0x790378ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2812:{NFSU2_TR(0x4a2812);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2813:{NFSU2_TR(0x4a2813);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2818ull));
TAIL_STATIC(0x7414a0u,741);
}
B4a2818:L4a2818:{c.instructions+=3;NFSU2_TR(0x4a2818);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a281b:{NFSU2_TR(0x4a281b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a281c:{NFSU2_TR(0x4a281c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2821ull));
TAIL_STATIC(0x7420b0u,742);
}
B4a2821:L4a2821:{c.instructions+=8;NFSU2_TR(0x4a2821);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a2827:{NFSU2_TR(0x4a2827);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a282a:{NFSU2_TR(0x4a282a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a282c:{NFSU2_TR(0x4a282c);
__builtin_memmove((R+20),(R+0),4);
}
B4a282e:{NFSU2_TR(0x4a282e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2831:{NFSU2_TR(0x4a2831);
u8 U[4];
w4(U+0,u32(0x790370ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2836:{NFSU2_TR(0x4a2836);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2837:{NFSU2_TR(0x4a2837);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a283cull));
TAIL_STATIC(0x7414a0u,741);
}
B4a283c:L4a283c:{c.instructions+=3;NFSU2_TR(0x4a283c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a283f:{NFSU2_TR(0x4a283f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2840:{NFSU2_TR(0x4a2840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2845ull));
TAIL_STATIC(0x7420b0u,742);
}
B4a2845:L4a2845:{c.instructions+=9;NFSU2_TR(0x4a2845);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a284b:{NFSU2_TR(0x4a284b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a284e:{NFSU2_TR(0x4a284e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B4a2851:{NFSU2_TR(0x4a2851);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2852:{NFSU2_TR(0x4a2852);
u8 U[4];
w4(U+0,u32(0x790360ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2857:{NFSU2_TR(0x4a2857);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2858:{NFSU2_TR(0x4a2858);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a285c:{NFSU2_TR(0x4a285c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4a285e:{NFSU2_TR(0x4a285e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2863ull));
TAIL_STATIC(0x542600u,542);
}
B4a2863:L4a2863:{c.instructions+=4;NFSU2_TR(0x4a2863);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2866:{NFSU2_TR(0x4a2866);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a2869:{NFSU2_TR(0x4a2869);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a286c:{NFSU2_TR(0x4a286c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4a28a4;}}
}
B4a286e:L4a286e:{c.instructions+=1;NFSU2_TR(0x4a286e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4a2b38ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a2875:L4a2875:{c.instructions+=2;NFSU2_TR(0x4a2875);
w4(R+12,u32(0x93fdee74ull));
}
B4a287a:{NFSU2_TR(0x4a287a);
{goto L4a28a4;}
}
B4a287c:L4a287c:{c.instructions+=2;NFSU2_TR(0x4a287c);
w4(R+12,u32(0xdcb9f861ull));
}
B4a2881:{NFSU2_TR(0x4a2881);
{goto L4a28a4;}
}
B4a2883:L4a2883:{c.instructions+=2;NFSU2_TR(0x4a2883);
w4(R+12,u32(0x35102edfull));
}
B4a2888:{NFSU2_TR(0x4a2888);
{goto L4a28a4;}
}
B4a288a:L4a288a:{c.instructions+=2;NFSU2_TR(0x4a288a);
w4(R+12,u32(0xd7162cfaull));
}
B4a288f:{NFSU2_TR(0x4a288f);
{goto L4a28a4;}
}
B4a2891:L4a2891:{c.instructions+=2;NFSU2_TR(0x4a2891);
w4(R+12,u32(0x30da61e1ull));
}
B4a2896:{NFSU2_TR(0x4a2896);
{goto L4a28a4;}
}
B4a2898:L4a2898:{c.instructions+=2;NFSU2_TR(0x4a2898);
w4(R+12,u32(0x75f903f4ull));
}
B4a289d:{NFSU2_TR(0x4a289d);
{goto L4a28a4;}
}
B4a289f:L4a289f:{c.instructions+=1;NFSU2_TR(0x4a289f);
w4(R+12,u32(0x613d3106ull));
}
B4a28a4:L4a28a4:{c.instructions+=3;NFSU2_TR(0x4a28a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a28a7:{NFSU2_TR(0x4a28a7);
u8 U[4];
w4(U+0,u32(0xfd143578ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a28ac:{NFSU2_TR(0x4a28ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a28b1ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a28b1:L4a28b1:{c.instructions+=4;NFSU2_TR(0x4a28b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a28b2:{NFSU2_TR(0x4a28b2);
u8 U[4];
w4(U+0,u32(0x7248670aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a28b7:{NFSU2_TR(0x4a28b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a28b8:{NFSU2_TR(0x4a28b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a28bdull));
TAIL_STATIC(0x537b80u,537);
}
B4a28bd:L4a28bd:{c.instructions+=3;NFSU2_TR(0x4a28bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a28c0:{NFSU2_TR(0x4a28c0);
u8 U[4];
w4(U+0,u32(0x145890eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a28c5:{NFSU2_TR(0x4a28c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a28caull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a28ca:L4a28ca:{c.instructions+=4;NFSU2_TR(0x4a28ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a28cb:{NFSU2_TR(0x4a28cb);
u8 U[4];
w4(U+0,u32(0x7248670bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a28d0:{NFSU2_TR(0x4a28d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a28d1:{NFSU2_TR(0x4a28d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a28d6ull));
TAIL_STATIC(0x537b80u,537);
}
B4a28d6:L4a28d6:{c.instructions+=3;NFSU2_TR(0x4a28d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a28d9:{NFSU2_TR(0x4a28d9);
u8 U[4];
w4(U+0,u32(0xff1c4cfeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a28de:{NFSU2_TR(0x4a28de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a28e3ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a28e3:L4a28e3:{c.instructions+=4;NFSU2_TR(0x4a28e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a28e4:{NFSU2_TR(0x4a28e4);
u8 U[4];
w4(U+0,u32(0x7248670cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a28e9:{NFSU2_TR(0x4a28e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a28ea:{NFSU2_TR(0x4a28ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a28efull));
TAIL_STATIC(0x537b80u,537);
}
B4a28ef:L4a28ef:{c.instructions+=3;NFSU2_TR(0x4a28ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a28f2:{NFSU2_TR(0x4a28f2);
u8 U[4];
w4(U+0,u32(0x932538c3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a28f7:{NFSU2_TR(0x4a28f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a28fcull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a28fc:L4a28fc:{c.instructions+=4;NFSU2_TR(0x4a28fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a28fd:{NFSU2_TR(0x4a28fd);
u8 U[4];
w4(U+0,u32(0x7248670dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2902:{NFSU2_TR(0x4a2902);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2903:{NFSU2_TR(0x4a2903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2908ull));
TAIL_STATIC(0x537b80u,537);
}
B4a2908:L4a2908:{c.instructions+=4;NFSU2_TR(0x4a2908);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a290b:{NFSU2_TR(0x4a290b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4a290e:{NFSU2_TR(0x4a290e);
u8 U[4];
w4(U+0,u32(0x480e0f39ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2913:{NFSU2_TR(0x4a2913);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2918ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a2918:L4a2918:{c.instructions+=4;NFSU2_TR(0x4a2918);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2919:{NFSU2_TR(0x4a2919);
u8 U[4];
w4(U+0,u32(0x7248670eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a291e:{NFSU2_TR(0x4a291e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a291f:{NFSU2_TR(0x4a291f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2924ull));
TAIL_STATIC(0x537b80u,537);
}
B4a2924:L4a2924:{c.instructions+=6;NFSU2_TR(0x4a2924);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2927:{NFSU2_TR(0x4a2927);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a292a:{NFSU2_TR(0x4a292a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a292b:{NFSU2_TR(0x4a292b);
u8 U[4];
w4(U+0,u32(0xca49d8bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2930:{NFSU2_TR(0x4a2930);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2931:{NFSU2_TR(0x4a2931);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2936ull));
TAIL_STATIC(0x537a10u,537);
}
B4a2936:L4a2936:{c.instructions+=3;NFSU2_TR(0x4a2936);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a2939:{NFSU2_TR(0x4a2939);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a293a:{NFSU2_TR(0x4a293a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a293full));
TAIL_STATIC(0x50c900u,50c);
}
B4a293f:L4a293f:{c.instructions+=11;NFSU2_TR(0x4a293f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2942:{NFSU2_TR(0x4a2942);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a2945:{NFSU2_TR(0x4a2945);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a2948:{NFSU2_TR(0x4a2948);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4a294a:{NFSU2_TR(0x4a294a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4a294c:{NFSU2_TR(0x4a294c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x58b0443dull))));
}
B4a2951:{NFSU2_TR(0x4a2951);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xe1f1271ull))));
}
B4a2956:{NFSU2_TR(0x4a2956);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2957:{NFSU2_TR(0x4a2957);
u8 U[4];
w4(U+0,u32(0xca49d8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a295c:{NFSU2_TR(0x4a295c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a295d:{NFSU2_TR(0x4a295d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2962ull));
TAIL_STATIC(0x537a10u,537);
}
B4a2962:L4a2962:{c.instructions+=3;NFSU2_TR(0x4a2962);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a2965:{NFSU2_TR(0x4a2965);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2966:{NFSU2_TR(0x4a2966);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a296bull));
TAIL_STATIC(0x50c900u,50c);
}
B4a296b:L4a296b:{c.instructions+=7;NFSU2_TR(0x4a296b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a296e:{NFSU2_TR(0x4a296e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a2971:{NFSU2_TR(0x4a2971);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2972:{NFSU2_TR(0x4a2972);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2977:{NFSU2_TR(0x4a2977);
u8 U[4];
w4(U+0,u32(0xca49d8dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a297c:{NFSU2_TR(0x4a297c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a297d:{NFSU2_TR(0x4a297d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2982ull));
TAIL_STATIC(0x537b80u,537);
}
B4a2982:L4a2982:{c.instructions+=11;NFSU2_TR(0x4a2982);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2985:{NFSU2_TR(0x4a2985);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a2988:{NFSU2_TR(0x4a2988);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4a298b:{NFSU2_TR(0x4a298b);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4a298d:{NFSU2_TR(0x4a298d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4a298f:{NFSU2_TR(0x4a298f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x35f8cca2ull))));
}
B4a2994:{NFSU2_TR(0x4a2994);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x88576cffull))));
}
B4a2999:{NFSU2_TR(0x4a2999);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a299a:{NFSU2_TR(0x4a299a);
u8 U[4];
w4(U+0,u32(0xca49d8eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a299f:{NFSU2_TR(0x4a299f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a29a0:{NFSU2_TR(0x4a29a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a29a5ull));
TAIL_STATIC(0x537a10u,537);
}
B4a29a5:L4a29a5:{c.instructions+=3;NFSU2_TR(0x4a29a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a29a8:{NFSU2_TR(0x4a29a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a29a9:{NFSU2_TR(0x4a29a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a29aeull));
TAIL_STATIC(0x50c900u,50c);
}
B4a29ae:L4a29ae:{c.instructions+=11;NFSU2_TR(0x4a29ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a29b1:{NFSU2_TR(0x4a29b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a29b4:{NFSU2_TR(0x4a29b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a29b7:{NFSU2_TR(0x4a29b7);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4a29b9:{NFSU2_TR(0x4a29b9);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4a29bb:{NFSU2_TR(0x4a29bb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4d2c2ull))));
}
B4a29c0:{NFSU2_TR(0x4a29c0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfabfc6dcull))));
}
B4a29c5:{NFSU2_TR(0x4a29c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a29c6:{NFSU2_TR(0x4a29c6);
u8 U[4];
w4(U+0,u32(0xca49d8full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a29cb:{NFSU2_TR(0x4a29cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a29cc:{NFSU2_TR(0x4a29cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a29d1ull));
TAIL_STATIC(0x537a10u,537);
}
B4a29d1:L4a29d1:{c.instructions+=3;NFSU2_TR(0x4a29d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a29d4:{NFSU2_TR(0x4a29d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a29d5:{NFSU2_TR(0x4a29d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a29daull));
TAIL_STATIC(0x50c900u,50c);
}
B4a29da:L4a29da:{c.instructions+=11;NFSU2_TR(0x4a29da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a29dd:{NFSU2_TR(0x4a29dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a29e0:{NFSU2_TR(0x4a29e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a29e3:{NFSU2_TR(0x4a29e3);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4a29e5:{NFSU2_TR(0x4a29e5);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4a29e7:{NFSU2_TR(0x4a29e7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x35f8cca2ull))));
}
B4a29ec:{NFSU2_TR(0x4a29ec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x88576cffull))));
}
B4a29f1:{NFSU2_TR(0x4a29f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a29f2:{NFSU2_TR(0x4a29f2);
u8 U[4];
w4(U+0,u32(0xca49d90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a29f7:{NFSU2_TR(0x4a29f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a29f8:{NFSU2_TR(0x4a29f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a29fdull));
TAIL_STATIC(0x537a10u,537);
}
B4a29fd:L4a29fd:{c.instructions+=3;NFSU2_TR(0x4a29fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a2a00:{NFSU2_TR(0x4a2a00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a01:{NFSU2_TR(0x4a2a01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2a06ull));
TAIL_STATIC(0x50c900u,50c);
}
B4a2a06:L4a2a06:{c.instructions+=5;NFSU2_TR(0x4a2a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2a09:{NFSU2_TR(0x4a2a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a2a0c:{NFSU2_TR(0x4a2a0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a2a0f:{NFSU2_TR(0x4a2a0f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a2a12:{NFSU2_TR(0x4a2a12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a2ad1;}}
}
B4a2a18:L4a2a18:{c.instructions+=2;NFSU2_TR(0x4a2a18);
u8 U[4];
w4(U+0,u32(0x81caa8e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a1d:{NFSU2_TR(0x4a2a1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2a22ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a2a22:L4a2a22:{c.instructions+=4;NFSU2_TR(0x4a2a22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a23:{NFSU2_TR(0x4a2a23);
u8 U[4];
w4(U+0,u32(0x72486710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a28:{NFSU2_TR(0x4a2a28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a29:{NFSU2_TR(0x4a2a29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2a2eull));
TAIL_STATIC(0x537b80u,537);
}
B4a2a2e:L4a2a2e:{c.instructions+=3;NFSU2_TR(0x4a2a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a2a31:{NFSU2_TR(0x4a2a31);
u8 U[4];
w4(U+0,u32(0xfe407a18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a36:{NFSU2_TR(0x4a2a36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2a3bull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a2a3b:L4a2a3b:{c.instructions+=4;NFSU2_TR(0x4a2a3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a3c:{NFSU2_TR(0x4a2a3c);
u8 U[4];
w4(U+0,u32(0x72486711ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a41:{NFSU2_TR(0x4a2a41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a42:{NFSU2_TR(0x4a2a42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2a47ull));
TAIL_STATIC(0x537b80u,537);
}
B4a2a47:L4a2a47:{c.instructions+=3;NFSU2_TR(0x4a2a47);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4a2a4a:{NFSU2_TR(0x4a2a4a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a2a4d:{NFSU2_TR(0x4a2a4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a2a65;}}
}
B4a2a4f:L4a2a4f:{c.instructions+=3;NFSU2_TR(0x4a2a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a2a52:{NFSU2_TR(0x4a2a52);
u8 U[4];
w4(U+0,u32(0x2f8344eaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a57:{NFSU2_TR(0x4a2a57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2a5cull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a2a5c:L4a2a5c:{c.instructions+=4;NFSU2_TR(0x4a2a5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a5d:{NFSU2_TR(0x4a2a5d);
u8 U[4];
w4(U+0,u32(0xca49d91ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a62:{NFSU2_TR(0x4a2a62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a63:{NFSU2_TR(0x4a2a63);
{goto L4a2a7b;}
}
B4a2a65:L4a2a65:{c.instructions+=6;NFSU2_TR(0x4a2a65);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78da98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4a2a6c:{NFSU2_TR(0x4a2a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2a6f:{NFSU2_TR(0x4a2a6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a70:{NFSU2_TR(0x4a2a70);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a75:{NFSU2_TR(0x4a2a75);
u8 U[4];
w4(U+0,u32(0xca49d91ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a7a:{NFSU2_TR(0x4a2a7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a7b:L4a2a7b:{c.instructions+=1;NFSU2_TR(0x4a2a7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2a80ull));
TAIL_STATIC(0x537b80u,537);
}
B4a2a80:L4a2a80:{c.instructions+=5;NFSU2_TR(0x4a2a80);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a2a84:{NFSU2_TR(0x4a2a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a2a87:{NFSU2_TR(0x4a2a87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a2a8a:{NFSU2_TR(0x4a2a8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a2a8c:{NFSU2_TR(0x4a2a8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a2aa9;}}
}
B4a2a8e:L4a2a8e:{c.instructions+=2;NFSU2_TR(0x4a2a8e);
u8 U[4];
w4(U+0,u32(0x53b157fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a93:{NFSU2_TR(0x4a2a93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2a98ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a2a98:L4a2a98:{c.instructions+=4;NFSU2_TR(0x4a2a98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a99:{NFSU2_TR(0x4a2a99);
u8 U[4];
w4(U+0,u32(0xca49d92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a9e:{NFSU2_TR(0x4a2a9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2a9f:{NFSU2_TR(0x4a2a9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2aa4ull));
TAIL_STATIC(0x537b80u,537);
}
B4a2aa4:L4a2aa4:{c.instructions+=2;NFSU2_TR(0x4a2aa4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a2aa7:{NFSU2_TR(0x4a2aa7);
{goto L4a2b05;}
}
B4a2aa9:L4a2aa9:{c.instructions+=2;NFSU2_TR(0x4a2aa9);
u8 U[4];
w4(U+0,u32(0x542110c3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2aae:{NFSU2_TR(0x4a2aae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2ab3ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a2ab3:L4a2ab3:{c.instructions+=7;NFSU2_TR(0x4a2ab3);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78daa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B4a2aba:{NFSU2_TR(0x4a2aba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2abb:{NFSU2_TR(0x4a2abb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2abc:{NFSU2_TR(0x4a2abc);
u8 U[4];
w4(U+0,u32(0x790358ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ac1:{NFSU2_TR(0x4a2ac1);
u8 U[4];
w4(U+0,u32(0xca49d92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ac6:{NFSU2_TR(0x4a2ac6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ac7:{NFSU2_TR(0x4a2ac7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2accull));
TAIL_STATIC(0x537b80u,537);
}
B4a2acc:L4a2acc:{c.instructions+=2;NFSU2_TR(0x4a2acc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4a2acf:{NFSU2_TR(0x4a2acf);
{goto L4a2b05;}
}
B4a2ad1:L4a2ad1:{c.instructions+=3;NFSU2_TR(0x4a2ad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a2ad4:{NFSU2_TR(0x4a2ad4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ad5:{NFSU2_TR(0x4a2ad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2adaull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a2ada:L4a2ada:{c.instructions+=5;NFSU2_TR(0x4a2ada);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2adb:{NFSU2_TR(0x4a2adb);
u8 U[4];
w4(U+0,u32(0x787accull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ae0:{NFSU2_TR(0x4a2ae0);
u8 U[4];
w4(U+0,u32(0xca49d91ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ae5:{NFSU2_TR(0x4a2ae5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ae6:{NFSU2_TR(0x4a2ae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2aebull));
TAIL_STATIC(0x537b80u,537);
}
B4a2aeb:L4a2aeb:{c.instructions+=7;NFSU2_TR(0x4a2aeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2aee:{NFSU2_TR(0x4a2aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a2af1:{NFSU2_TR(0x4a2af1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2af2:{NFSU2_TR(0x4a2af2);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2af7:{NFSU2_TR(0x4a2af7);
u8 U[4];
w4(U+0,u32(0xca49d92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2afc:{NFSU2_TR(0x4a2afc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2afd:{NFSU2_TR(0x4a2afd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2b02ull));
TAIL_STATIC(0x537b80u,537);
}
B4a2b02:L4a2b02:{c.instructions+=1;NFSU2_TR(0x4a2b02);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4a2b05:L4a2b05:{c.instructions+=4;NFSU2_TR(0x4a2b05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2b08:{NFSU2_TR(0x4a2b08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a2b0a:{NFSU2_TR(0x4a2b0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a2b0d:{NFSU2_TR(0x4a2b0d);
if(r1(R+518)){{goto L4a2b16;}}
}
B4a2b0f:L4a2b0f:{c.instructions+=2;NFSU2_TR(0x4a2b0f);
u8 U[4];
w4(U+0,u32(0xa53035ddull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2b14:{NFSU2_TR(0x4a2b14);
{goto L4a2b1b;}
}
B4a2b16:L4a2b16:{c.instructions+=1;NFSU2_TR(0x4a2b16);
u8 U[4];
w4(U+0,u32(0xd157c200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2b1b:L4a2b1b:{c.instructions+=3;NFSU2_TR(0x4a2b1b);
u8 U[4];
w4(U+0,u32(0x57ad6797ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2b20:{NFSU2_TR(0x4a2b20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2b21:{NFSU2_TR(0x4a2b21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2b26ull));
TAIL_STATIC(0x537a10u,537);
}
B4a2b26:L4a2b26:{c.instructions+=3;NFSU2_TR(0x4a2b26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a2b29:{NFSU2_TR(0x4a2b29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2b2a:{NFSU2_TR(0x4a2b2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2b2full));
TAIL_STATIC(0x50c900u,50c);
}
B4a2b2f:L4a2b2f:{c.instructions+=7;NFSU2_TR(0x4a2b2f);
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
B4a2b32:{NFSU2_TR(0x4a2b32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a2b33:{NFSU2_TR(0x4a2b33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a2b34:{NFSU2_TR(0x4a2b34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a2b35:{NFSU2_TR(0x4a2b35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a2b36:{NFSU2_TR(0x4a2b36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a2b37:{NFSU2_TR(0x4a2b37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a2b70:L4a2b70:{c.instructions+=7;NFSU2_TR(0x4a2b70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2b71:{NFSU2_TR(0x4a2b71);
__builtin_memmove((R+24),(R+4),4);
}
B4a2b73:{NFSU2_TR(0x4a2b73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2b79:{NFSU2_TR(0x4a2b79);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2b7a:{NFSU2_TR(0x4a2b7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2b7b:{NFSU2_TR(0x4a2b7b);
w4(R+4,u32(0x83ad90ull));
}
B4a2b80:{NFSU2_TR(0x4a2b80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2b85ull));
TAIL_STATIC(0x503510u,503);
}
B4a2b85:L4a2b85:{c.instructions+=2;NFSU2_TR(0x4a2b85);
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
B4a2b87:{NFSU2_TR(0x4a2b87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a2b90;}}
}
B4a2b89:L4a2b89:{c.instructions+=2;NFSU2_TR(0x4a2b89);
w4(R+28,u32(0x783fe5ull));
}
B4a2b8e:{NFSU2_TR(0x4a2b8e);
{goto L4a2bc2;}
}
B4a2b90:L4a2b90:{c.instructions+=3;NFSU2_TR(0x4a2b90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a2b92:{NFSU2_TR(0x4a2b92);
__builtin_memmove((R+4),(R+0),4);
}
B4a2b94:{NFSU2_TR(0x4a2b94);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2b97ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a2b97:L4a2b97:{c.instructions+=3;NFSU2_TR(0x4a2b97);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4a2b9d:{NFSU2_TR(0x4a2b9d);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8a1ccc))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4a2ba3:{NFSU2_TR(0x4a2ba3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a2bac;}}
}
B4a2ba5:L4a2ba5:{c.instructions+=2;NFSU2_TR(0x4a2ba5);
w4(R+28,u32(0x783fe5ull));
}
B4a2baa:{NFSU2_TR(0x4a2baa);
{goto L4a2bc2;}
}
B4a2bac:L4a2bac:{c.instructions+=3;NFSU2_TR(0x4a2bac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2bad:{NFSU2_TR(0x4a2bad);
u8 U[4];
w4(U+0,u32(0x790400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2bb2:{NFSU2_TR(0x4a2bb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2bb7ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a2bb7:L4a2bb7:{c.instructions+=2;NFSU2_TR(0x4a2bb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2bb8:{NFSU2_TR(0x4a2bb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2bbdull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a2bbd:L4a2bbd:{c.instructions+=2;NFSU2_TR(0x4a2bbd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a2bc0:{NFSU2_TR(0x4a2bc0);
__builtin_memmove((R+28),(R+0),4);
}
B4a2bc2:L4a2bc2:{c.instructions+=5;NFSU2_TR(0x4a2bc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2bc5:{NFSU2_TR(0x4a2bc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2bcb:{NFSU2_TR(0x4a2bcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2bcc:{NFSU2_TR(0x4a2bcc);
w4(R+4,u32(0x83ad90ull));
}
B4a2bd1:{NFSU2_TR(0x4a2bd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2bd6ull));
TAIL_STATIC(0x503510u,503);
}
B4a2bd6:L4a2bd6:{c.instructions+=2;NFSU2_TR(0x4a2bd6);
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
B4a2bd8:{NFSU2_TR(0x4a2bd8);
if(r1(R+518)){{goto L4a2bef;}}
}
B4a2bda:L4a2bda:{c.instructions+=3;NFSU2_TR(0x4a2bda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a2bdc:{NFSU2_TR(0x4a2bdc);
__builtin_memmove((R+4),(R+0),4);
}
B4a2bde:{NFSU2_TR(0x4a2bde);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2be1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a2be1:L4a2be1:{c.instructions+=3;NFSU2_TR(0x4a2be1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4a2be7:{NFSU2_TR(0x4a2be7);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8a1ccc))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4a2bed:{NFSU2_TR(0x4a2bed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a2bf6;}}
}
B4a2bef:L4a2bef:{c.instructions+=2;NFSU2_TR(0x4a2bef);
w4(R+0,u32(0x783fe5ull));
}
B4a2bf4:{NFSU2_TR(0x4a2bf4);
{goto L4a2c0a;}
}
B4a2bf6:L4a2bf6:{c.instructions+=3;NFSU2_TR(0x4a2bf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2bf7:{NFSU2_TR(0x4a2bf7);
u8 U[4];
w4(U+0,u32(0x790400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2bfc:{NFSU2_TR(0x4a2bfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2c01ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a2c01:L4a2c01:{c.instructions+=2;NFSU2_TR(0x4a2c01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2c02:{NFSU2_TR(0x4a2c02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2c07ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a2c07:L4a2c07:{c.instructions+=1;NFSU2_TR(0x4a2c07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a2c0a:L4a2c0a:{c.instructions+=5;NFSU2_TR(0x4a2c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a2c0d:{NFSU2_TR(0x4a2c0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2c0e:{NFSU2_TR(0x4a2c0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2c0f:{NFSU2_TR(0x4a2c0f);
u8 U[4];
w4(U+0,u32(0x85215bc6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2c14:{NFSU2_TR(0x4a2c14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2c19ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a2c19:L4a2c19:{c.instructions+=11;NFSU2_TR(0x4a2c19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a2c1c:{NFSU2_TR(0x4a2c1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2c1d:{NFSU2_TR(0x4a2c1d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2c1f:{NFSU2_TR(0x4a2c1f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2c21:{NFSU2_TR(0x4a2c21);
u8 U[4];
w4(U+0,u32(0x1190b316ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2c26:{NFSU2_TR(0x4a2c26);
u8 U[4];
w4(U+0,u32(0x43a743aaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2c2b:{NFSU2_TR(0x4a2c2b);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2c30:{NFSU2_TR(0x4a2c30);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2c35:{NFSU2_TR(0x4a2c35);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2c3a:{NFSU2_TR(0x4a2c3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2c3b:{NFSU2_TR(0x4a2c3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2c40ull));
TAIL_STATIC(0x558750u,558);
}
B4a2c40:L4a2c40:{c.instructions+=4;NFSU2_TR(0x4a2c40);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a2c43:{NFSU2_TR(0x4a2c43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a2c44:{NFSU2_TR(0x4a2c44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a2c45:{NFSU2_TR(0x4a2c45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a2c50:L4a2c50:{c.instructions+=5;NFSU2_TR(0x4a2c50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2c54:{NFSU2_TR(0x4a2c54);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a2c59:{NFSU2_TR(0x4a2c59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2c5a:{NFSU2_TR(0x4a2c5a);
__builtin_memmove((R+24),(R+4),4);
}
B4a2c5c:{NFSU2_TR(0x4a2c5c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4a2d2e;}}
}
B4a2c62:L4a2c62:{c.instructions+=1;NFSU2_TR(0x4a2c62);
if(r1(R+518)){{goto L4a2d02;}}
}
B4a2c68:L4a2c68:{c.instructions+=2;NFSU2_TR(0x4a2c68);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1fab5998ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a2c6d:{NFSU2_TR(0x4a2c6d);
if(r1(R+518)){{goto L4a2ce6;}}
}
B4a2c6f:L4a2c6f:{c.instructions+=2;NFSU2_TR(0x4a2c6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a2c74:{NFSU2_TR(0x4a2c74);
if(r1(R+518)){{goto L4a2c9d;}}
}
B4a2c76:L4a2c76:{c.instructions+=2;NFSU2_TR(0x4a2c76);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a2c7b:{NFSU2_TR(0x4a2c7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a2d9f;}}
}
B4a2c81:L4a2c81:{c.instructions+=6;NFSU2_TR(0x4a2c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2c84:{NFSU2_TR(0x4a2c84);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2c86:{NFSU2_TR(0x4a2c86);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2c8b:{NFSU2_TR(0x4a2c8b);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2c90:{NFSU2_TR(0x4a2c90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2c91:{NFSU2_TR(0x4a2c91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2c96ull));
TAIL_STATIC(0x537c00u,537);
}
B4a2c96:L4a2c96:{c.instructions+=3;NFSU2_TR(0x4a2c96);
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
B4a2c99:{NFSU2_TR(0x4a2c99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a2c9a:{NFSU2_TR(0x4a2c9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a2c9d:L4a2c9d:{c.instructions+=5;NFSU2_TR(0x4a2c9d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2c9f:{NFSU2_TR(0x4a2c9f);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ca4:{NFSU2_TR(0x4a2ca4);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ca9:{NFSU2_TR(0x4a2ca9);
u8 U[4];
w4(U+0,u32(0x79040cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2cae:{NFSU2_TR(0x4a2cae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2cb3ull));
TAIL_STATIC(0x537c00u,537);
}
B4a2cb3:L4a2cb3:{c.instructions+=5;NFSU2_TR(0x4a2cb3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2cb5:{NFSU2_TR(0x4a2cb5);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2cba:{NFSU2_TR(0x4a2cba);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2cbf:{NFSU2_TR(0x4a2cbf);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2cc4:{NFSU2_TR(0x4a2cc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2cc9ull));
TAIL_STATIC(0x537c00u,537);
}
B4a2cc9:L4a2cc9:{c.instructions+=5;NFSU2_TR(0x4a2cc9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ccb:{NFSU2_TR(0x4a2ccb);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2cd0:{NFSU2_TR(0x4a2cd0);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2cd5:{NFSU2_TR(0x4a2cd5);
u8 U[4];
w4(U+0,u32(0x790210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2cda:{NFSU2_TR(0x4a2cda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2cdfull));
TAIL_STATIC(0x537c00u,537);
}
B4a2cdf:L4a2cdf:{c.instructions+=3;NFSU2_TR(0x4a2cdf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a2ce2:{NFSU2_TR(0x4a2ce2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a2ce3:{NFSU2_TR(0x4a2ce3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a2ce6:L4a2ce6:{c.instructions+=6;NFSU2_TR(0x4a2ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a2ce9:{NFSU2_TR(0x4a2ce9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ceb:{NFSU2_TR(0x4a2ceb);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2cf0:{NFSU2_TR(0x4a2cf0);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2cf5:{NFSU2_TR(0x4a2cf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2cf6:{NFSU2_TR(0x4a2cf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2cfbull));
TAIL_STATIC(0x537c00u,537);
}
B4a2cfb:L4a2cfb:{c.instructions+=3;NFSU2_TR(0x4a2cfb);
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
B4a2cfe:{NFSU2_TR(0x4a2cfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a2cff:{NFSU2_TR(0x4a2cff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a2d02:L4a2d02:{c.instructions+=3;NFSU2_TR(0x4a2d02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a2d08:{NFSU2_TR(0x4a2d08);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2d09:{NFSU2_TR(0x4a2d09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2d0eull));
TAIL_STATIC(0x52d100u,52d);
}
B4a2d0e:L4a2d0e:{c.instructions+=3;NFSU2_TR(0x4a2d0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a2d11:{NFSU2_TR(0x4a2d11);
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
B4a2d13:{NFSU2_TR(0x4a2d13);
if(r1(R+518)){{goto L4a2d9f;}}
}
B4a2d19:L4a2d19:{c.instructions+=4;NFSU2_TR(0x4a2d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2d1c:{NFSU2_TR(0x4a2d1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2d1d:{NFSU2_TR(0x4a2d1d);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2d22:{NFSU2_TR(0x4a2d22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2d27ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a2d27:L4a2d27:{c.instructions+=3;NFSU2_TR(0x4a2d27);
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
B4a2d2a:{NFSU2_TR(0x4a2d2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a2d2b:{NFSU2_TR(0x4a2d2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a2d2e:L4a2d2e:{c.instructions+=2;NFSU2_TR(0x4a2d2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a2d33:{NFSU2_TR(0x4a2d33);
if(r1(R+518)){{goto L4a2d76;}}
}
B4a2d35:L4a2d35:{c.instructions+=2;NFSU2_TR(0x4a2d35);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe1fde1d1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a2d3a:{NFSU2_TR(0x4a2d3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a2d9f;}}
}
B4a2d3c:L4a2d3c:{c.instructions+=5;NFSU2_TR(0x4a2d3c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2d3e:{NFSU2_TR(0x4a2d3e);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2d43:{NFSU2_TR(0x4a2d43);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2d48:{NFSU2_TR(0x4a2d48);
u8 U[4];
w4(U+0,u32(0x790210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2d4d:{NFSU2_TR(0x4a2d4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2d52ull));
TAIL_STATIC(0x537c00u,537);
}
B4a2d52:L4a2d52:{c.instructions+=5;NFSU2_TR(0x4a2d52);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2d54:{NFSU2_TR(0x4a2d54);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2d59:{NFSU2_TR(0x4a2d59);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2d5e:{NFSU2_TR(0x4a2d5e);
u8 U[4];
w4(U+0,u32(0x79040cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2d63:{NFSU2_TR(0x4a2d63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2d68ull));
TAIL_STATIC(0x537c00u,537);
}
B4a2d68:L4a2d68:{c.instructions+=4;NFSU2_TR(0x4a2d68);
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
B4a2d6b:{NFSU2_TR(0x4a2d6b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a2d72:{NFSU2_TR(0x4a2d72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a2d73:{NFSU2_TR(0x4a2d73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a2d76:L4a2d76:{c.instructions+=1;NFSU2_TR(0x4a2d76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2d7bull));
TAIL_STATIC(0x582b60u,582);
}
B4a2d7b:L4a2d7b:{c.instructions+=2;NFSU2_TR(0x4a2d7b);
__builtin_memmove((R+4),(R+0),4);
}
B4a2d7d:{NFSU2_TR(0x4a2d7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2d82ull));
TAIL_STATIC(0x584f10u,584);
}
B4a2d82:L4a2d82:{c.instructions+=3;NFSU2_TR(0x4a2d82);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a2d88:{NFSU2_TR(0x4a2d88);
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
B4a2d8a:{NFSU2_TR(0x4a2d8a);
if(r1(R+518)){{goto L4a2d9f;}}
}
B4a2d8c:L4a2d8c:{c.instructions+=3;NFSU2_TR(0x4a2d8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a2d8f:{NFSU2_TR(0x4a2d8f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2d90:{NFSU2_TR(0x4a2d90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2d95ull));
TAIL_STATIC(0x5379a0u,537);
}
B4a2d95:L4a2d95:{c.instructions+=2;NFSU2_TR(0x4a2d95);
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
B4a2d98:{NFSU2_TR(0x4a2d98);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a2d9f:L4a2d9f:{c.instructions+=2;NFSU2_TR(0x4a2d9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a2da0:{NFSU2_TR(0x4a2da0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a2db0:L4a2db0:{c.instructions+=6;NFSU2_TR(0x4a2db0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B4a2db3:{NFSU2_TR(0x4a2db3);
__builtin_memmove((R+8),(R+4),4);
}
B4a2db5:{NFSU2_TR(0x4a2db5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2db6:{NFSU2_TR(0x4a2db6);
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
B4a2db8:{NFSU2_TR(0x4a2db8);
w4(R+4,u32(0xcull));
}
B4a2dbd:{NFSU2_TR(0x4a2dbd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4a2dc1:L4a2dc1:{c.instructions+=1;NFSU2_TR(0x4a2dc1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4a2dc3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a2dc1u);}goto L4a2dc1;}
}
B4a2dc3:L4a2dc3:{c.instructions+=16;NFSU2_TR(0x4a2dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2dc6:{NFSU2_TR(0x4a2dc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a2dca:{NFSU2_TR(0x4a2dca);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a2dcd:{NFSU2_TR(0x4a2dcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a2dcf:{NFSU2_TR(0x4a2dcf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2dd1:{NFSU2_TR(0x4a2dd1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a2dd5:{NFSU2_TR(0x4a2dd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2dd6:{NFSU2_TR(0x4a2dd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x7900a8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a2dde:{NFSU2_TR(0x4a2dde);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x790098ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a2de6:{NFSU2_TR(0x4a2de6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x790084ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a2dee:{NFSU2_TR(0x4a2dee);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a2df6:{NFSU2_TR(0x4a2df6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a2dfe:{NFSU2_TR(0x4a2dfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a2e06:{NFSU2_TR(0x4a2e06);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a2e0e:{NFSU2_TR(0x4a2e0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x42380000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a2e16:{NFSU2_TR(0x4a2e16);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2e19ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a2e19:L4a2e19:{c.instructions+=3;NFSU2_TR(0x4a2e19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a2e1a:{NFSU2_TR(0x4a2e1a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a2e1d:{NFSU2_TR(0x4a2e1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a2e20:L4a2e20:{c.instructions+=5;NFSU2_TR(0x4a2e20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2e24:{NFSU2_TR(0x4a2e24);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc9d30688ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc9d30688ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a2e29:{NFSU2_TR(0x4a2e29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2e2a:{NFSU2_TR(0x4a2e2a);
__builtin_memmove((R+24),(R+4),4);
}
B4a2e2c:{NFSU2_TR(0x4a2e2c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4a2ef2;}}
}
B4a2e32:L4a2e32:{c.instructions+=1;NFSU2_TR(0x4a2e32);
if(r1(R+518)){{goto L4a2ed4;}}
}
B4a2e38:L4a2e38:{c.instructions+=2;NFSU2_TR(0x4a2e38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a2e3d:{NFSU2_TR(0x4a2e3d);
if(r1(R+518)){{goto L4a2ed4;}}
}
B4a2e43:L4a2e43:{c.instructions+=2;NFSU2_TR(0x4a2e43);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc98356baull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a2e48:{NFSU2_TR(0x4a2e48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a2fdd;}}
}
B4a2e4e:L4a2e4e:{c.instructions+=3;NFSU2_TR(0x4a2e4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2e51:{NFSU2_TR(0x4a2e51);
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
B4a2e53:{NFSU2_TR(0x4a2e53);
if(r1(R+518)){{goto L4a2fdd;}}
}
B4a2e59:L4a2e59:{c.instructions+=2;NFSU2_TR(0x4a2e59);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a2e5e:{NFSU2_TR(0x4a2e5e);
if(r1(R+518)){{goto L4a2fdd;}}
}
B4a2e64:L4a2e64:{c.instructions+=8;NFSU2_TR(0x4a2e64);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a2e67:{NFSU2_TR(0x4a2e67);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a2e6d:{NFSU2_TR(0x4a2e6d);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a2e73:{NFSU2_TR(0x4a2e73);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a2e79:{NFSU2_TR(0x4a2e79);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B4a2e7b:{NFSU2_TR(0x4a2e7b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a2e7d:{NFSU2_TR(0x4a2e7d);
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
B4a2e80:{NFSU2_TR(0x4a2e80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a2fdd;}}
}
B4a2e86:L4a2e86:{c.instructions+=3;NFSU2_TR(0x4a2e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2e89:{NFSU2_TR(0x4a2e89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2e8a:{NFSU2_TR(0x4a2e8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2e8full));
TAIL_STATIC(0x540a60u,540);
}
B4a2e8f:L4a2e8f:{c.instructions+=4;NFSU2_TR(0x4a2e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a2e96:{NFSU2_TR(0x4a2e96);
__builtin_memmove((R+4),gp(0x866770),4);
}
B4a2e9c:{NFSU2_TR(0x4a2e9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2e9d:{NFSU2_TR(0x4a2e9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2ea2ull));
TAIL_STATIC(0x743140u,743);
}
B4a2ea2:L4a2ea2:{c.instructions+=3;NFSU2_TR(0x4a2ea2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ea3:{NFSU2_TR(0x4a2ea3);
u8 U[4];
w4(U+0,u32(0x7fbddcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ea8:{NFSU2_TR(0x4a2ea8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2eadull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4a2ead:L4a2ead:{c.instructions+=7;NFSU2_TR(0x4a2ead);
s2(0x7fbe04,u16(0x26acull));
}
B4a2eb6:{NFSU2_TR(0x4a2eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a2eb9:{NFSU2_TR(0x4a2eb9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ebb:{NFSU2_TR(0x4a2ebb);
u8 U[4];
w4(U+0,u32(0x78f240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ec0:{NFSU2_TR(0x4a2ec0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ec1:{NFSU2_TR(0x4a2ec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a2ec8:{NFSU2_TR(0x4a2ec8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2ecdull));
TAIL_STATIC(0x537980u,537);
}
B4a2ecd:L4a2ecd:{c.instructions+=3;NFSU2_TR(0x4a2ecd);
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
B4a2ed0:{NFSU2_TR(0x4a2ed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a2ed1:{NFSU2_TR(0x4a2ed1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a2ed4:L4a2ed4:{c.instructions+=2;NFSU2_TR(0x4a2ed4);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ed6:{NFSU2_TR(0x4a2ed6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2edbull));
TAIL_STATIC(0x50d180u,50d);
}
B4a2edb:L4a2edb:{c.instructions+=5;NFSU2_TR(0x4a2edb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2ede:{NFSU2_TR(0x4a2ede);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ee0:{NFSU2_TR(0x4a2ee0);
u8 U[4];
w4(U+0,u32(0x790428ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ee5:{NFSU2_TR(0x4a2ee5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ee6:{NFSU2_TR(0x4a2ee6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2eebull));
TAIL_STATIC(0x537980u,537);
}
B4a2eeb:L4a2eeb:{c.instructions+=3;NFSU2_TR(0x4a2eeb);
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
B4a2eee:{NFSU2_TR(0x4a2eee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a2eef:{NFSU2_TR(0x4a2eef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a2ef2:L4a2ef2:{c.instructions+=2;NFSU2_TR(0x4a2ef2);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xda5b8712ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xda5b8712ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xda5b8712ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a2ef7:{NFSU2_TR(0x4a2ef7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a2fdd;}}
}
B4a2efd:L4a2efd:{c.instructions+=2;NFSU2_TR(0x4a2efd);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2eff:{NFSU2_TR(0x4a2eff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2f04ull));
TAIL_STATIC(0x50d180u,50d);
}
B4a2f04:L4a2f04:{c.instructions+=3;NFSU2_TR(0x4a2f04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a2f07:{NFSU2_TR(0x4a2f07);
__builtin_memmove((R+4),(R+24),4);
}
B4a2f09:{NFSU2_TR(0x4a2f09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2f0eull));
TAIL_STATIC(0x50ced0u,50c);
}
B4a2f0e:L4a2f0e:{c.instructions+=3;NFSU2_TR(0x4a2f0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2f0f:{NFSU2_TR(0x4a2f0f);
w4(R+4,u32(0x850080ull));
}
B4a2f14:{NFSU2_TR(0x4a2f14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2f19ull));
TAIL_STATIC(0x503230u,503);
}
B4a2f19:L4a2f19:{c.instructions+=2;NFSU2_TR(0x4a2f19);
__builtin_memmove((R+4),(R+24),4);
}
B4a2f1b:{NFSU2_TR(0x4a2f1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2f20ull));
TAIL_STATIC(0x50ced0u,50c);
}
B4a2f20:L4a2f20:{c.instructions+=3;NFSU2_TR(0x4a2f20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2f21:{NFSU2_TR(0x4a2f21);
w4(R+4,u32(0x850080ull));
}
B4a2f26:{NFSU2_TR(0x4a2f26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2f2bull));
TAIL_STATIC(0x503260u,503);
}
B4a2f2b:L4a2f2b:{c.instructions+=2;NFSU2_TR(0x4a2f2b);
__builtin_memmove((R+4),(R+24),4);
}
B4a2f2d:{NFSU2_TR(0x4a2f2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2f32ull));
TAIL_STATIC(0x50ced0u,50c);
}
B4a2f32:L4a2f32:{c.instructions+=3;NFSU2_TR(0x4a2f32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2f33:{NFSU2_TR(0x4a2f33);
w4(R+4,u32(0x850080ull));
}
B4a2f38:{NFSU2_TR(0x4a2f38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2f3dull));
TAIL_STATIC(0x503290u,503);
}
B4a2f3d:L4a2f3d:{c.instructions+=2;NFSU2_TR(0x4a2f3d);
u8 U[2];
__builtin_memmove((U+0),gp(0x8500c7),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4a2f44:{NFSU2_TR(0x4a2f44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a2fca;}}
}
B4a2f4a:L4a2f4a:{c.instructions+=2;NFSU2_TR(0x4a2f4a);
w4(R+4,u32(0x850080ull));
}
B4a2f4f:{NFSU2_TR(0x4a2f4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2f54ull));
TAIL_STATIC(0x5031d0u,503);
}
B4a2f54:L4a2f54:{c.instructions+=3;NFSU2_TR(0x4a2f54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2f55:{NFSU2_TR(0x4a2f55);
w4(R+4,u32(0x89cf48ull));
}
B4a2f5a:{NFSU2_TR(0x4a2f5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2f5full));
TAIL_STATIC(0x5fa300u,5fa);
}
B4a2f5f:L4a2f5f:{c.instructions+=2;NFSU2_TR(0x4a2f5f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a2f61:{NFSU2_TR(0x4a2f61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a2f87;}}
}
B4a2f63:L4a2f63:{c.instructions+=7;NFSU2_TR(0x4a2f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a2f66:{NFSU2_TR(0x4a2f66);
u8 U[4];
w4(U+0,u32(0xa8cd6fd3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2f6b:{NFSU2_TR(0x4a2f6b);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2f70:{NFSU2_TR(0x4a2f70);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2f75:{NFSU2_TR(0x4a2f75);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2f7a:{NFSU2_TR(0x4a2f7a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2f7b:{NFSU2_TR(0x4a2f7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2f80ull));
TAIL_STATIC(0x558610u,558);
}
B4a2f80:L4a2f80:{c.instructions+=3;NFSU2_TR(0x4a2f80);
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
B4a2f83:{NFSU2_TR(0x4a2f83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a2f84:{NFSU2_TR(0x4a2f84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a2f87:L4a2f87:{c.instructions+=6;NFSU2_TR(0x4a2f87);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a2f8d:{NFSU2_TR(0x4a2f8d);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a2f93:{NFSU2_TR(0x4a2f93);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a2f99:{NFSU2_TR(0x4a2f99);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a2f9f:{NFSU2_TR(0x4a2f9f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a2fa5:{NFSU2_TR(0x4a2fa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2faaull));
TAIL_STATIC(0x75bed4u,75b);
}
B4a2faa:L4a2faa:{c.instructions+=6;NFSU2_TR(0x4a2faa);
u8 U[4];
w4(U+0,u32(0xb13d6a9bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2faf:{NFSU2_TR(0x4a2faf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a2fb2:{NFSU2_TR(0x4a2fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2fb5:{NFSU2_TR(0x4a2fb5);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2fba:{NFSU2_TR(0x4a2fba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2fbb:{NFSU2_TR(0x4a2fbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2fc0ull));
TAIL_STATIC(0x558330u,558);
}
B4a2fc0:L4a2fc0:{c.instructions+=4;NFSU2_TR(0x4a2fc0);
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
B4a2fc3:{NFSU2_TR(0x4a2fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a2fc6:{NFSU2_TR(0x4a2fc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a2fc7:{NFSU2_TR(0x4a2fc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a2fca:L4a2fca:{c.instructions+=5;NFSU2_TR(0x4a2fca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a2fcd:{NFSU2_TR(0x4a2fcd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2fcf:{NFSU2_TR(0x4a2fcf);
u8 U[4];
w4(U+0,u32(0x78f240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2fd4:{NFSU2_TR(0x4a2fd4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2fd5:{NFSU2_TR(0x4a2fd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a2fdaull));
TAIL_STATIC(0x537980u,537);
}
B4a2fda:L4a2fda:{c.instructions+=1;NFSU2_TR(0x4a2fda);
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
B4a2fdd:L4a2fdd:{c.instructions+=2;NFSU2_TR(0x4a2fdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a2fde:{NFSU2_TR(0x4a2fde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a2ff0:L4a2ff0:{c.instructions+=6;NFSU2_TR(0x4a2ff0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ff1:{NFSU2_TR(0x4a2ff1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ff3:{NFSU2_TR(0x4a2ff3);
__builtin_memmove((R+24),(R+4),4);
}
B4a2ff5:{NFSU2_TR(0x4a2ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a2ff8:{NFSU2_TR(0x4a2ff8);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a2ffd:{NFSU2_TR(0x4a2ffd);
u8 U[4];
w4(U+0,u32(0x7902b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x4a3002u,4a3);
}
XIT:NFSU2_TR_EXIT(0x4a2,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
