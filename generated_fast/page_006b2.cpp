#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6af(u8* __restrict R,Cpu& c);
u32 body_6b1(u8* __restrict R,Cpu& c);
u32 body_6b3(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6b2,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6b2,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6b2(u8* __restrict R,Cpu& c);
u32 page_6b2(Cpu& c){return body_6b2(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6b2(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6b2000:goto L6b2000;
case 0x6b2001:c.instructions+=3;goto B6b2001;
case 0x6b2004:c.instructions+=2;goto B6b2004;
case 0x6b2007:c.instructions+=1;goto B6b2007;
case 0x6b2009:goto L6b2009;
case 0x6b200c:c.instructions+=16;goto B6b200c;
case 0x6b2010:c.instructions+=15;goto B6b2010;
case 0x6b2012:c.instructions+=14;goto B6b2012;
case 0x6b2018:c.instructions+=13;goto B6b2018;
case 0x6b201b:c.instructions+=12;goto B6b201b;
case 0x6b201e:c.instructions+=11;goto B6b201e;
case 0x6b2021:c.instructions+=10;goto B6b2021;
case 0x6b2024:c.instructions+=9;goto B6b2024;
case 0x6b202a:c.instructions+=8;goto B6b202a;
case 0x6b202d:c.instructions+=7;goto B6b202d;
case 0x6b2030:c.instructions+=6;goto B6b2030;
case 0x6b2033:c.instructions+=5;goto B6b2033;
case 0x6b2036:c.instructions+=4;goto B6b2036;
case 0x6b2039:c.instructions+=3;goto B6b2039;
case 0x6b203c:c.instructions+=2;goto B6b203c;
case 0x6b2040:c.instructions+=1;goto B6b2040;
case 0x6b2042:goto L6b2042;
case 0x6b2045:c.instructions+=7;goto B6b2045;
case 0x6b2048:c.instructions+=6;goto B6b2048;
case 0x6b204b:c.instructions+=5;goto B6b204b;
case 0x6b2051:c.instructions+=4;goto B6b2051;
case 0x6b2054:c.instructions+=3;goto B6b2054;
case 0x6b2057:c.instructions+=2;goto B6b2057;
case 0x6b205a:c.instructions+=1;goto B6b205a;
case 0x6b205c:goto L6b205c;
case 0x6b205f:c.instructions+=8;goto B6b205f;
case 0x6b2062:c.instructions+=7;goto B6b2062;
case 0x6b2068:c.instructions+=6;goto B6b2068;
case 0x6b206d:c.instructions+=5;goto B6b206d;
case 0x6b2070:c.instructions+=4;goto B6b2070;
case 0x6b2073:c.instructions+=3;goto B6b2073;
case 0x6b2075:c.instructions+=2;goto B6b2075;
case 0x6b2078:c.instructions+=1;goto B6b2078;
case 0x6b207a:goto L6b207a;
case 0x6b207f:c.instructions+=2;goto B6b207f;
case 0x6b2081:c.instructions+=1;goto B6b2081;
case 0x6b2083:goto L6b2083;
case 0x6b2089:c.instructions+=1;goto B6b2089;
case 0x6b208b:goto L6b208b;
case 0x6b208d:goto L6b208d;
case 0x6b2090:goto L6b2090;
case 0x6b2093:c.instructions+=3;goto B6b2093;
case 0x6b2096:c.instructions+=2;goto B6b2096;
case 0x6b2099:c.instructions+=1;goto B6b2099;
case 0x6b209b:goto L6b209b;
case 0x6b209e:c.instructions+=4;goto B6b209e;
case 0x6b20a1:c.instructions+=3;goto B6b20a1;
case 0x6b20a5:c.instructions+=2;goto B6b20a5;
case 0x6b20a8:c.instructions+=1;goto B6b20a8;
case 0x6b20ae:goto L6b20ae;
case 0x6b20b1:c.instructions+=4;goto B6b20b1;
case 0x6b20b4:c.instructions+=3;goto B6b20b4;
case 0x6b20b8:c.instructions+=2;goto B6b20b8;
case 0x6b20bb:c.instructions+=1;goto B6b20bb;
case 0x6b20c1:goto L6b20c1;
case 0x6b20c7:c.instructions+=3;goto B6b20c7;
case 0x6b20ca:c.instructions+=2;goto B6b20ca;
case 0x6b20cc:c.instructions+=1;goto B6b20cc;
case 0x6b20d1:goto L6b20d1;
case 0x6b20d6:c.instructions+=1;goto B6b20d6;
case 0x6b20db:goto L6b20db;
case 0x6b20dd:c.instructions+=1;goto B6b20dd;
case 0x6b20df:goto L6b20df;
case 0x6b20e2:goto L6b20e2;
case 0x6b20e7:goto L6b20e7;
case 0x6b20e9:c.instructions+=1;goto B6b20e9;
case 0x6b20ee:goto L6b20ee;
case 0x6b20f0:c.instructions+=13;goto B6b20f0;
case 0x6b20f1:c.instructions+=12;goto B6b20f1;
case 0x6b20f3:c.instructions+=11;goto B6b20f3;
case 0x6b20f6:c.instructions+=10;goto B6b20f6;
case 0x6b20f7:c.instructions+=9;goto B6b20f7;
case 0x6b20f9:c.instructions+=8;goto B6b20f9;
case 0x6b20fb:c.instructions+=7;goto B6b20fb;
case 0x6b20fe:c.instructions+=6;goto B6b20fe;
case 0x6b20ff:c.instructions+=5;goto B6b20ff;
case 0x6b2101:c.instructions+=4;goto B6b2101;
case 0x6b2102:c.instructions+=3;goto B6b2102;
case 0x6b2105:c.instructions+=2;goto B6b2105;
case 0x6b2108:c.instructions+=1;goto B6b2108;
case 0x6b210e:goto L6b210e;
case 0x6b2111:c.instructions+=3;goto B6b2111;
case 0x6b2114:c.instructions+=2;goto B6b2114;
case 0x6b2116:c.instructions+=1;goto B6b2116;
case 0x6b211c:goto L6b211c;
case 0x6b211e:c.instructions+=2;goto B6b211e;
case 0x6b2120:c.instructions+=1;goto B6b2120;
case 0x6b2126:goto L6b2126;
case 0x6b2128:c.instructions+=3;goto B6b2128;
case 0x6b212e:c.instructions+=2;goto B6b212e;
case 0x6b212f:c.instructions+=1;goto B6b212f;
case 0x6b2134:goto L6b2134;
case 0x6b213a:c.instructions+=2;goto B6b213a;
case 0x6b213d:c.instructions+=1;goto B6b213d;
case 0x6b213f:goto L6b213f;
case 0x6b2146:goto L6b2146;
case 0x6b2149:c.instructions+=2;goto B6b2149;
case 0x6b214c:c.instructions+=1;goto B6b214c;
case 0x6b2152:goto L6b2152;
case 0x6b2155:c.instructions+=7;goto B6b2155;
case 0x6b2158:c.instructions+=6;goto B6b2158;
case 0x6b215b:c.instructions+=5;goto B6b215b;
case 0x6b215e:c.instructions+=4;goto B6b215e;
case 0x6b2161:c.instructions+=3;goto B6b2161;
case 0x6b2164:c.instructions+=2;goto B6b2164;
case 0x6b216a:c.instructions+=1;goto B6b216a;
case 0x6b2170:goto L6b2170;
case 0x6b2173:c.instructions+=3;goto B6b2173;
case 0x6b2179:c.instructions+=2;goto B6b2179;
case 0x6b217c:c.instructions+=1;goto B6b217c;
case 0x6b217e:goto L6b217e;
case 0x6b2182:c.instructions+=2;goto B6b2182;
case 0x6b2185:c.instructions+=1;goto B6b2185;
case 0x6b2187:goto L6b2187;
case 0x6b218a:c.instructions+=1;goto B6b218a;
case 0x6b218c:goto L6b218c;
case 0x6b218f:c.instructions+=1;goto B6b218f;
case 0x6b2191:goto L6b2191;
case 0x6b2195:c.instructions+=1;goto B6b2195;
case 0x6b2197:goto L6b2197;
case 0x6b219a:goto L6b219a;
case 0x6b219d:c.instructions+=4;goto B6b219d;
case 0x6b21a0:c.instructions+=3;goto B6b21a0;
case 0x6b21a3:c.instructions+=2;goto B6b21a3;
case 0x6b21a6:c.instructions+=1;goto B6b21a6;
case 0x6b21a8:goto L6b21a8;
case 0x6b21a9:c.instructions+=2;goto B6b21a9;
case 0x6b21ac:c.instructions+=1;goto B6b21ac;
case 0x6b21ae:goto L6b21ae;
case 0x6b21b0:goto L6b21b0;
case 0x6b21b1:c.instructions+=8;goto B6b21b1;
case 0x6b21b3:c.instructions+=7;goto B6b21b3;
case 0x6b21b4:c.instructions+=6;goto B6b21b4;
case 0x6b21b7:c.instructions+=5;goto B6b21b7;
case 0x6b21b8:c.instructions+=4;goto B6b21b8;
case 0x6b21bb:c.instructions+=3;goto B6b21bb;
case 0x6b21bd:c.instructions+=2;goto B6b21bd;
case 0x6b21c3:c.instructions+=1;goto B6b21c3;
case 0x6b21c8:goto L6b21c8;
case 0x6b21cb:c.instructions+=1;goto B6b21cb;
case 0x6b21cd:goto L6b21cd;
case 0x6b21d0:c.instructions+=10;goto B6b21d0;
case 0x6b21d3:c.instructions+=9;goto B6b21d3;
case 0x6b21d6:c.instructions+=8;goto B6b21d6;
case 0x6b21d9:c.instructions+=7;goto B6b21d9;
case 0x6b21dc:c.instructions+=6;goto B6b21dc;
case 0x6b21df:c.instructions+=5;goto B6b21df;
case 0x6b21e2:c.instructions+=4;goto B6b21e2;
case 0x6b21e5:c.instructions+=3;goto B6b21e5;
case 0x6b21e8:c.instructions+=2;goto B6b21e8;
case 0x6b21eb:c.instructions+=1;goto B6b21eb;
case 0x6b21ee:goto L6b21ee;
case 0x6b21f1:c.instructions+=1;goto B6b21f1;
case 0x6b21f3:goto L6b21f3;
case 0x6b21f6:c.instructions+=1;goto B6b21f6;
case 0x6b21f8:goto L6b21f8;
case 0x6b21fb:c.instructions+=3;goto B6b21fb;
case 0x6b21fe:c.instructions+=2;goto B6b21fe;
case 0x6b2201:c.instructions+=1;goto B6b2201;
case 0x6b2207:goto L6b2207;
case 0x6b220a:c.instructions+=4;goto B6b220a;
case 0x6b220b:c.instructions+=3;goto B6b220b;
case 0x6b220e:c.instructions+=2;goto B6b220e;
case 0x6b2211:c.instructions+=1;goto B6b2211;
case 0x6b2217:goto L6b2217;
case 0x6b2219:goto L6b2219;
case 0x6b221a:c.instructions+=4;goto B6b221a;
case 0x6b221b:c.instructions+=3;goto B6b221b;
case 0x6b221c:c.instructions+=2;goto B6b221c;
case 0x6b221d:c.instructions+=1;goto B6b221d;
case 0x6b2220:goto L6b2220;
case 0x6b2225:c.instructions+=1;goto B6b2225;
case 0x6b2227:goto L6b2227;
case 0x6b222c:c.instructions+=4;goto B6b222c;
case 0x6b2231:c.instructions+=3;goto B6b2231;
case 0x6b2233:c.instructions+=2;goto B6b2233;
case 0x6b2236:c.instructions+=1;goto B6b2236;
case 0x6b223b:goto L6b223b;
case 0x6b223e:c.instructions+=2;goto B6b223e;
case 0x6b2243:c.instructions+=1;goto B6b2243;
case 0x6b2245:goto L6b2245;
case 0x6b2247:c.instructions+=12;goto B6b2247;
case 0x6b2248:c.instructions+=11;goto B6b2248;
case 0x6b224a:c.instructions+=10;goto B6b224a;
case 0x6b224d:c.instructions+=9;goto B6b224d;
case 0x6b224e:c.instructions+=8;goto B6b224e;
case 0x6b2250:c.instructions+=7;goto B6b2250;
case 0x6b2252:c.instructions+=6;goto B6b2252;
case 0x6b2254:c.instructions+=5;goto B6b2254;
case 0x6b2257:c.instructions+=4;goto B6b2257;
case 0x6b2258:c.instructions+=3;goto B6b2258;
case 0x6b2259:c.instructions+=2;goto B6b2259;
case 0x6b225c:c.instructions+=1;goto B6b225c;
case 0x6b2262:goto L6b2262;
case 0x6b2265:c.instructions+=3;goto B6b2265;
case 0x6b2268:c.instructions+=2;goto B6b2268;
case 0x6b226a:c.instructions+=1;goto B6b226a;
case 0x6b2270:goto L6b2270;
case 0x6b2273:c.instructions+=2;goto B6b2273;
case 0x6b2276:c.instructions+=1;goto B6b2276;
case 0x6b227c:goto L6b227c;
case 0x6b227f:c.instructions+=7;goto B6b227f;
case 0x6b2282:c.instructions+=6;goto B6b2282;
case 0x6b2285:c.instructions+=5;goto B6b2285;
case 0x6b2288:c.instructions+=4;goto B6b2288;
case 0x6b228b:c.instructions+=3;goto B6b228b;
case 0x6b228e:c.instructions+=2;goto B6b228e;
case 0x6b2294:c.instructions+=1;goto B6b2294;
case 0x6b229a:goto L6b229a;
case 0x6b229d:c.instructions+=1;goto B6b229d;
case 0x6b22a3:goto L6b22a3;
case 0x6b22a6:c.instructions+=3;goto B6b22a6;
case 0x6b22ac:c.instructions+=2;goto B6b22ac;
case 0x6b22af:c.instructions+=1;goto B6b22af;
case 0x6b22b1:goto L6b22b1;
case 0x6b22b5:c.instructions+=2;goto B6b22b5;
case 0x6b22b8:c.instructions+=1;goto B6b22b8;
case 0x6b22ba:goto L6b22ba;
case 0x6b22bd:c.instructions+=2;goto B6b22bd;
case 0x6b22c0:c.instructions+=1;goto B6b22c0;
case 0x6b22c2:goto L6b22c2;
case 0x6b22c5:c.instructions+=6;goto B6b22c5;
case 0x6b22c8:c.instructions+=5;goto B6b22c8;
case 0x6b22cb:c.instructions+=4;goto B6b22cb;
case 0x6b22ce:c.instructions+=3;goto B6b22ce;
case 0x6b22d1:c.instructions+=2;goto B6b22d1;
case 0x6b22d4:c.instructions+=1;goto B6b22d4;
case 0x6b22d6:goto L6b22d6;
case 0x6b22d9:c.instructions+=3;goto B6b22d9;
case 0x6b22dc:c.instructions+=2;goto B6b22dc;
case 0x6b22df:c.instructions+=1;goto B6b22df;
case 0x6b22e1:goto L6b22e1;
case 0x6b22e3:goto L6b22e3;
case 0x6b22e4:c.instructions+=8;goto B6b22e4;
case 0x6b22e6:c.instructions+=7;goto B6b22e6;
case 0x6b22e7:c.instructions+=6;goto B6b22e7;
case 0x6b22ea:c.instructions+=5;goto B6b22ea;
case 0x6b22eb:c.instructions+=4;goto B6b22eb;
case 0x6b22ed:c.instructions+=3;goto B6b22ed;
case 0x6b22f3:c.instructions+=2;goto B6b22f3;
case 0x6b22f5:c.instructions+=1;goto B6b22f5;
case 0x6b22fa:goto L6b22fa;
case 0x6b22fd:c.instructions+=1;goto B6b22fd;
case 0x6b22ff:goto L6b22ff;
case 0x6b2302:c.instructions+=10;goto B6b2302;
case 0x6b2305:c.instructions+=9;goto B6b2305;
case 0x6b2308:c.instructions+=8;goto B6b2308;
case 0x6b230b:c.instructions+=7;goto B6b230b;
case 0x6b230e:c.instructions+=6;goto B6b230e;
case 0x6b2311:c.instructions+=5;goto B6b2311;
case 0x6b2314:c.instructions+=4;goto B6b2314;
case 0x6b2317:c.instructions+=3;goto B6b2317;
case 0x6b231a:c.instructions+=2;goto B6b231a;
case 0x6b231d:c.instructions+=1;goto B6b231d;
case 0x6b2320:goto L6b2320;
case 0x6b2322:goto L6b2322;
case 0x6b2325:c.instructions+=2;goto B6b2325;
case 0x6b2328:c.instructions+=1;goto B6b2328;
case 0x6b232a:goto L6b232a;
case 0x6b232d:c.instructions+=3;goto B6b232d;
case 0x6b2330:c.instructions+=2;goto B6b2330;
case 0x6b2333:c.instructions+=1;goto B6b2333;
case 0x6b2339:goto L6b2339;
case 0x6b233c:c.instructions+=4;goto B6b233c;
case 0x6b233d:c.instructions+=3;goto B6b233d;
case 0x6b2340:c.instructions+=2;goto B6b2340;
case 0x6b2343:c.instructions+=1;goto B6b2343;
case 0x6b2349:goto L6b2349;
case 0x6b234b:goto L6b234b;
case 0x6b234c:c.instructions+=4;goto B6b234c;
case 0x6b234d:c.instructions+=3;goto B6b234d;
case 0x6b234e:c.instructions+=2;goto B6b234e;
case 0x6b234f:c.instructions+=1;goto B6b234f;
case 0x6b2352:goto L6b2352;
case 0x6b2357:c.instructions+=1;goto B6b2357;
case 0x6b2359:goto L6b2359;
case 0x6b235e:c.instructions+=4;goto B6b235e;
case 0x6b2363:c.instructions+=3;goto B6b2363;
case 0x6b2364:c.instructions+=2;goto B6b2364;
case 0x6b2365:c.instructions+=1;goto B6b2365;
case 0x6b236a:goto L6b236a;
case 0x6b236d:c.instructions+=2;goto B6b236d;
case 0x6b2372:c.instructions+=1;goto B6b2372;
case 0x6b2374:goto L6b2374;
case 0x6b2376:c.instructions+=11;goto B6b2376;
case 0x6b2377:c.instructions+=10;goto B6b2377;
case 0x6b2379:c.instructions+=9;goto B6b2379;
case 0x6b237c:c.instructions+=8;goto B6b237c;
case 0x6b237d:c.instructions+=7;goto B6b237d;
case 0x6b237f:c.instructions+=6;goto B6b237f;
case 0x6b2381:c.instructions+=5;goto B6b2381;
case 0x6b2384:c.instructions+=4;goto B6b2384;
case 0x6b2385:c.instructions+=3;goto B6b2385;
case 0x6b2386:c.instructions+=2;goto B6b2386;
case 0x6b2389:c.instructions+=1;goto B6b2389;
case 0x6b238f:goto L6b238f;
case 0x6b2392:c.instructions+=4;goto B6b2392;
case 0x6b2395:c.instructions+=3;goto B6b2395;
case 0x6b2398:c.instructions+=2;goto B6b2398;
case 0x6b239a:c.instructions+=1;goto B6b239a;
case 0x6b23a0:goto L6b23a0;
case 0x6b23a4:c.instructions+=1;goto B6b23a4;
case 0x6b23aa:goto L6b23aa;
case 0x6b23ac:c.instructions+=1;goto B6b23ac;
case 0x6b23b2:goto L6b23b2;
case 0x6b23b5:c.instructions+=3;goto B6b23b5;
case 0x6b23b8:c.instructions+=2;goto B6b23b8;
case 0x6b23bb:c.instructions+=1;goto B6b23bb;
case 0x6b23c1:goto L6b23c1;
case 0x6b23c4:c.instructions+=2;goto B6b23c4;
case 0x6b23c7:c.instructions+=1;goto B6b23c7;
case 0x6b23cd:goto L6b23cd;
case 0x6b23d0:c.instructions+=7;goto B6b23d0;
case 0x6b23d3:c.instructions+=6;goto B6b23d3;
case 0x6b23d6:c.instructions+=5;goto B6b23d6;
case 0x6b23d9:c.instructions+=4;goto B6b23d9;
case 0x6b23dc:c.instructions+=3;goto B6b23dc;
case 0x6b23df:c.instructions+=2;goto B6b23df;
case 0x6b23e5:c.instructions+=1;goto B6b23e5;
case 0x6b23e7:goto L6b23e7;
case 0x6b23eb:c.instructions+=1;goto B6b23eb;
case 0x6b23f1:goto L6b23f1;
case 0x6b23f4:c.instructions+=4;goto B6b23f4;
case 0x6b23f7:c.instructions+=3;goto B6b23f7;
case 0x6b23fa:c.instructions+=2;goto B6b23fa;
case 0x6b23fc:c.instructions+=1;goto B6b23fc;
case 0x6b23fe:goto L6b23fe;
case 0x6b2401:c.instructions+=1;goto B6b2401;
case 0x6b2403:goto L6b2403;
case 0x6b2405:c.instructions+=9;goto B6b2405;
case 0x6b2408:c.instructions+=8;goto B6b2408;
case 0x6b240a:c.instructions+=7;goto B6b240a;
case 0x6b2410:c.instructions+=6;goto B6b2410;
case 0x6b2412:c.instructions+=5;goto B6b2412;
case 0x6b2414:c.instructions+=4;goto B6b2414;
case 0x6b2417:c.instructions+=3;goto B6b2417;
case 0x6b2419:c.instructions+=2;goto B6b2419;
case 0x6b241c:c.instructions+=1;goto B6b241c;
case 0x6b241e:goto L6b241e;
case 0x6b2421:goto L6b2421;
case 0x6b2424:c.instructions+=7;goto B6b2424;
case 0x6b2427:c.instructions+=6;goto B6b2427;
case 0x6b242a:c.instructions+=5;goto B6b242a;
case 0x6b242d:c.instructions+=4;goto B6b242d;
case 0x6b242e:c.instructions+=3;goto B6b242e;
case 0x6b242f:c.instructions+=2;goto B6b242f;
case 0x6b2431:c.instructions+=1;goto B6b2431;
case 0x6b2436:goto L6b2436;
case 0x6b2438:c.instructions+=1;goto B6b2438;
case 0x6b243e:goto L6b243e;
case 0x6b2441:c.instructions+=7;goto B6b2441;
case 0x6b2443:c.instructions+=6;goto B6b2443;
case 0x6b2446:c.instructions+=5;goto B6b2446;
case 0x6b2449:c.instructions+=4;goto B6b2449;
case 0x6b244c:c.instructions+=3;goto B6b244c;
case 0x6b244f:c.instructions+=2;goto B6b244f;
case 0x6b2456:c.instructions+=1;goto B6b2456;
case 0x6b2458:goto L6b2458;
case 0x6b245a:goto L6b245a;
case 0x6b245d:c.instructions+=3;goto B6b245d;
case 0x6b2460:c.instructions+=2;goto B6b2460;
case 0x6b2463:c.instructions+=1;goto B6b2463;
case 0x6b2469:goto L6b2469;
case 0x6b246c:c.instructions+=3;goto B6b246c;
case 0x6b246f:c.instructions+=2;goto B6b246f;
case 0x6b2472:c.instructions+=1;goto B6b2472;
case 0x6b2478:goto L6b2478;
case 0x6b247b:c.instructions+=1;goto B6b247b;
case 0x6b2481:goto L6b2481;
case 0x6b2483:c.instructions+=4;goto B6b2483;
case 0x6b2485:c.instructions+=3;goto B6b2485;
case 0x6b248b:c.instructions+=2;goto B6b248b;
case 0x6b2491:c.instructions+=1;goto B6b2491;
case 0x6b2493:goto L6b2493;
case 0x6b2499:c.instructions+=1;goto B6b2499;
case 0x6b249b:goto L6b249b;
case 0x6b24a1:c.instructions+=1;goto B6b24a1;
case 0x6b24a3:goto L6b24a3;
case 0x6b24a9:c.instructions+=1;goto B6b24a9;
case 0x6b24ab:goto L6b24ab;
case 0x6b24b1:c.instructions+=1;goto B6b24b1;
case 0x6b24b3:goto L6b24b3;
case 0x6b24b9:c.instructions+=1;goto B6b24b9;
case 0x6b24bb:goto L6b24bb;
case 0x6b24c1:c.instructions+=1;goto B6b24c1;
case 0x6b24c3:goto L6b24c3;
case 0x6b24c8:c.instructions+=4;goto B6b24c8;
case 0x6b24cb:c.instructions+=3;goto B6b24cb;
case 0x6b24cd:c.instructions+=2;goto B6b24cd;
case 0x6b24d0:c.instructions+=1;goto B6b24d0;
case 0x6b24d2:goto L6b24d2;
case 0x6b24d5:c.instructions+=1;goto B6b24d5;
case 0x6b24d8:goto L6b24d8;
case 0x6b24db:c.instructions+=5;goto B6b24db;
case 0x6b24dd:c.instructions+=4;goto B6b24dd;
case 0x6b24e0:c.instructions+=3;goto B6b24e0;
case 0x6b24e6:c.instructions+=2;goto B6b24e6;
case 0x6b24e9:c.instructions+=1;goto B6b24e9;
case 0x6b24eb:goto L6b24eb;
case 0x6b24ec:c.instructions+=3;goto B6b24ec;
case 0x6b24ef:c.instructions+=2;goto B6b24ef;
case 0x6b24f2:c.instructions+=1;goto B6b24f2;
case 0x6b24f4:goto L6b24f4;
case 0x6b24f6:goto L6b24f6;
case 0x6b24f9:c.instructions+=8;goto B6b24f9;
case 0x6b24fb:c.instructions+=7;goto B6b24fb;
case 0x6b24fe:c.instructions+=6;goto B6b24fe;
case 0x6b2501:c.instructions+=5;goto B6b2501;
case 0x6b2504:c.instructions+=4;goto B6b2504;
case 0x6b2507:c.instructions+=3;goto B6b2507;
case 0x6b250a:c.instructions+=2;goto B6b250a;
case 0x6b2511:c.instructions+=1;goto B6b2511;
case 0x6b2513:goto L6b2513;
case 0x6b2516:c.instructions+=3;goto B6b2516;
case 0x6b2519:c.instructions+=2;goto B6b2519;
case 0x6b251c:c.instructions+=1;goto B6b251c;
case 0x6b2522:goto L6b2522;
case 0x6b2524:goto L6b2524;
case 0x6b2525:c.instructions+=4;goto B6b2525;
case 0x6b2526:c.instructions+=3;goto B6b2526;
case 0x6b2527:c.instructions+=2;goto B6b2527;
case 0x6b2528:c.instructions+=1;goto B6b2528;
case 0x6b252b:goto L6b252b;
case 0x6b2530:c.instructions+=2;goto B6b2530;
case 0x6b2535:c.instructions+=1;goto B6b2535;
case 0x6b2537:goto L6b2537;
case 0x6b253c:c.instructions+=1;goto B6b253c;
case 0x6b2541:goto L6b2541;
case 0x6b2544:c.instructions+=2;goto B6b2544;
case 0x6b2545:c.instructions+=1;goto B6b2545;
case 0x6b254a:goto L6b254a;
case 0x6b254d:c.instructions+=2;goto B6b254d;
case 0x6b2552:c.instructions+=1;goto B6b2552;
case 0x6b2554:goto L6b2554;
case 0x6b2556:c.instructions+=13;goto B6b2556;
case 0x6b2557:c.instructions+=12;goto B6b2557;
case 0x6b2559:c.instructions+=11;goto B6b2559;
case 0x6b255c:c.instructions+=10;goto B6b255c;
case 0x6b255f:c.instructions+=9;goto B6b255f;
case 0x6b2560:c.instructions+=8;goto B6b2560;
case 0x6b2561:c.instructions+=7;goto B6b2561;
case 0x6b2562:c.instructions+=6;goto B6b2562;
case 0x6b2564:c.instructions+=5;goto B6b2564;
case 0x6b2567:c.instructions+=4;goto B6b2567;
case 0x6b2569:c.instructions+=3;goto B6b2569;
case 0x6b256b:c.instructions+=2;goto B6b256b;
case 0x6b256c:c.instructions+=1;goto B6b256c;
case 0x6b256f:goto L6b256f;
case 0x6b2571:goto L6b2571;
case 0x6b2574:c.instructions+=3;goto B6b2574;
case 0x6b2577:c.instructions+=2;goto B6b2577;
case 0x6b2579:c.instructions+=1;goto B6b2579;
case 0x6b257f:goto L6b257f;
case 0x6b2582:c.instructions+=4;goto B6b2582;
case 0x6b2584:c.instructions+=3;goto B6b2584;
case 0x6b2587:c.instructions+=2;goto B6b2587;
case 0x6b2589:c.instructions+=1;goto B6b2589;
case 0x6b258c:goto L6b258c;
case 0x6b258f:c.instructions+=2;goto B6b258f;
case 0x6b2591:c.instructions+=1;goto B6b2591;
case 0x6b2593:goto L6b2593;
case 0x6b2596:c.instructions+=2;goto B6b2596;
case 0x6b2599:c.instructions+=1;goto B6b2599;
case 0x6b259b:goto L6b259b;
case 0x6b259d:goto L6b259d;
case 0x6b259f:c.instructions+=1;goto B6b259f;
case 0x6b25a5:goto L6b25a5;
case 0x6b25a7:c.instructions+=2;goto B6b25a7;
case 0x6b25ad:c.instructions+=1;goto B6b25ad;
case 0x6b25b3:goto L6b25b3;
case 0x6b25b7:c.instructions+=1;goto B6b25b7;
case 0x6b25bd:goto L6b25bd;
case 0x6b25c3:c.instructions+=1;goto B6b25c3;
case 0x6b25c5:goto L6b25c5;
case 0x6b25cb:c.instructions+=1;goto B6b25cb;
case 0x6b25cd:goto L6b25cd;
case 0x6b25d3:c.instructions+=1;goto B6b25d3;
case 0x6b25d5:goto L6b25d5;
case 0x6b25db:c.instructions+=1;goto B6b25db;
case 0x6b25dd:goto L6b25dd;
case 0x6b25e3:c.instructions+=1;goto B6b25e3;
case 0x6b25e5:goto L6b25e5;
case 0x6b25eb:c.instructions+=1;goto B6b25eb;
case 0x6b25ed:goto L6b25ed;
case 0x6b25f3:c.instructions+=1;goto B6b25f3;
case 0x6b25f5:goto L6b25f5;
case 0x6b25f8:c.instructions+=1;goto B6b25f8;
case 0x6b25fa:goto L6b25fa;
case 0x6b25fd:c.instructions+=4;goto B6b25fd;
case 0x6b2601:c.instructions+=3;goto B6b2601;
case 0x6b2603:c.instructions+=2;goto B6b2603;
case 0x6b2606:c.instructions+=1;goto B6b2606;
case 0x6b2608:goto L6b2608;
case 0x6b260b:goto L6b260b;
case 0x6b260d:c.instructions+=5;goto B6b260d;
case 0x6b2610:c.instructions+=4;goto B6b2610;
case 0x6b2613:c.instructions+=3;goto B6b2613;
case 0x6b2619:c.instructions+=2;goto B6b2619;
case 0x6b261c:c.instructions+=1;goto B6b261c;
case 0x6b261e:goto L6b261e;
case 0x6b2622:c.instructions+=2;goto B6b2622;
case 0x6b2625:c.instructions+=1;goto B6b2625;
case 0x6b2627:goto L6b2627;
case 0x6b262b:c.instructions+=1;goto B6b262b;
case 0x6b262d:goto L6b262d;
case 0x6b2630:c.instructions+=3;goto B6b2630;
case 0x6b2633:c.instructions+=2;goto B6b2633;
case 0x6b2637:c.instructions+=1;goto B6b2637;
case 0x6b2639:goto L6b2639;
case 0x6b263c:c.instructions+=3;goto B6b263c;
case 0x6b263d:c.instructions+=2;goto B6b263d;
case 0x6b263f:c.instructions+=1;goto B6b263f;
case 0x6b2641:goto L6b2641;
case 0x6b2645:c.instructions+=1;goto B6b2645;
case 0x6b2647:goto L6b2647;
case 0x6b2649:c.instructions+=1;goto B6b2649;
case 0x6b264b:goto L6b264b;
case 0x6b264e:c.instructions+=3;goto B6b264e;
case 0x6b264f:c.instructions+=2;goto B6b264f;
case 0x6b2651:c.instructions+=1;goto B6b2651;
case 0x6b2653:goto L6b2653;
case 0x6b2655:goto L6b2655;
case 0x6b2658:c.instructions+=4;goto B6b2658;
case 0x6b265b:c.instructions+=3;goto B6b265b;
case 0x6b265e:c.instructions+=2;goto B6b265e;
case 0x6b2661:c.instructions+=1;goto B6b2661;
case 0x6b2663:goto L6b2663;
case 0x6b2666:c.instructions+=1;goto B6b2666;
case 0x6b2669:goto L6b2669;
case 0x6b266c:c.instructions+=4;goto B6b266c;
case 0x6b266f:c.instructions+=3;goto B6b266f;
case 0x6b2672:c.instructions+=2;goto B6b2672;
case 0x6b2675:c.instructions+=1;goto B6b2675;
case 0x6b267b:goto L6b267b;
case 0x6b267f:c.instructions+=2;goto B6b267f;
case 0x6b2683:c.instructions+=1;goto B6b2683;
case 0x6b2689:goto L6b2689;
case 0x6b268c:c.instructions+=4;goto B6b268c;
case 0x6b268f:c.instructions+=3;goto B6b268f;
case 0x6b2691:c.instructions+=2;goto B6b2691;
case 0x6b2693:c.instructions+=1;goto B6b2693;
case 0x6b2696:goto L6b2696;
case 0x6b2698:c.instructions+=2;goto B6b2698;
case 0x6b269a:c.instructions+=1;goto B6b269a;
case 0x6b26a0:goto L6b26a0;
case 0x6b26a2:c.instructions+=1;goto B6b26a2;
case 0x6b26a7:goto L6b26a7;
case 0x6b26a9:c.instructions+=1;goto B6b26a9;
case 0x6b26ab:goto L6b26ab;
case 0x6b26ad:c.instructions+=1;goto B6b26ad;
case 0x6b26b2:goto L6b26b2;
case 0x6b26b4:goto L6b26b4;
case 0x6b26b6:goto L6b26b6;
case 0x6b26b8:c.instructions+=2;goto B6b26b8;
case 0x6b26bb:c.instructions+=1;goto B6b26bb;
case 0x6b26c1:goto L6b26c1;
case 0x6b26c3:c.instructions+=7;goto B6b26c3;
case 0x6b26c4:c.instructions+=6;goto B6b26c4;
case 0x6b26c5:c.instructions+=5;goto B6b26c5;
case 0x6b26cb:c.instructions+=4;goto B6b26cb;
case 0x6b26d1:c.instructions+=3;goto B6b26d1;
case 0x6b26d2:c.instructions+=2;goto B6b26d2;
case 0x6b26d4:c.instructions+=1;goto B6b26d4;
case 0x6b26d9:goto L6b26d9;
case 0x6b26db:c.instructions+=1;goto B6b26db;
case 0x6b26e1:goto L6b26e1;
case 0x6b26e3:c.instructions+=2;goto B6b26e3;
case 0x6b26e5:c.instructions+=1;goto B6b26e5;
case 0x6b26e7:goto L6b26e7;
case 0x6b26e8:c.instructions+=8;goto B6b26e8;
case 0x6b26ea:c.instructions+=7;goto B6b26ea;
case 0x6b26eb:c.instructions+=6;goto B6b26eb;
case 0x6b26ee:c.instructions+=5;goto B6b26ee;
case 0x6b26ef:c.instructions+=4;goto B6b26ef;
case 0x6b26f2:c.instructions+=3;goto B6b26f2;
case 0x6b26f4:c.instructions+=2;goto B6b26f4;
case 0x6b26fa:c.instructions+=1;goto B6b26fa;
case 0x6b26ff:goto L6b26ff;
case 0x6b2702:c.instructions+=2;goto B6b2702;
case 0x6b2706:c.instructions+=1;goto B6b2706;
case 0x6b270c:goto L6b270c;
case 0x6b270f:c.instructions+=13;goto B6b270f;
case 0x6b2712:c.instructions+=12;goto B6b2712;
case 0x6b2715:c.instructions+=11;goto B6b2715;
case 0x6b2718:c.instructions+=10;goto B6b2718;
case 0x6b271b:c.instructions+=9;goto B6b271b;
case 0x6b271e:c.instructions+=8;goto B6b271e;
case 0x6b2722:c.instructions+=7;goto B6b2722;
case 0x6b2726:c.instructions+=6;goto B6b2726;
case 0x6b2729:c.instructions+=5;goto B6b2729;
case 0x6b272c:c.instructions+=4;goto B6b272c;
case 0x6b272d:c.instructions+=3;goto B6b272d;
case 0x6b272f:c.instructions+=2;goto B6b272f;
case 0x6b2732:c.instructions+=1;goto B6b2732;
case 0x6b2734:goto L6b2734;
case 0x6b2736:c.instructions+=9;goto B6b2736;
case 0x6b2739:c.instructions+=8;goto B6b2739;
case 0x6b273a:c.instructions+=7;goto B6b273a;
case 0x6b273b:c.instructions+=6;goto B6b273b;
case 0x6b273e:c.instructions+=5;goto B6b273e;
case 0x6b2740:c.instructions+=4;goto B6b2740;
case 0x6b2742:c.instructions+=3;goto B6b2742;
case 0x6b2745:c.instructions+=2;goto B6b2745;
case 0x6b2748:c.instructions+=1;goto B6b2748;
case 0x6b274d:goto L6b274d;
case 0x6b274f:c.instructions+=1;goto B6b274f;
case 0x6b2755:goto L6b2755;
case 0x6b2758:c.instructions+=8;goto B6b2758;
case 0x6b2759:c.instructions+=7;goto B6b2759;
case 0x6b275a:c.instructions+=6;goto B6b275a;
case 0x6b275d:c.instructions+=5;goto B6b275d;
case 0x6b275f:c.instructions+=4;goto B6b275f;
case 0x6b2761:c.instructions+=3;goto B6b2761;
case 0x6b2764:c.instructions+=2;goto B6b2764;
case 0x6b2767:c.instructions+=1;goto B6b2767;
case 0x6b276c:goto L6b276c;
case 0x6b276e:c.instructions+=1;goto B6b276e;
case 0x6b2774:goto L6b2774;
case 0x6b2776:c.instructions+=2;goto B6b2776;
case 0x6b2778:c.instructions+=1;goto B6b2778;
case 0x6b277a:goto L6b277a;
case 0x6b277b:c.instructions+=8;goto B6b277b;
case 0x6b277d:c.instructions+=7;goto B6b277d;
case 0x6b277e:c.instructions+=6;goto B6b277e;
case 0x6b2781:c.instructions+=5;goto B6b2781;
case 0x6b2782:c.instructions+=4;goto B6b2782;
case 0x6b2785:c.instructions+=3;goto B6b2785;
case 0x6b2787:c.instructions+=2;goto B6b2787;
case 0x6b278d:c.instructions+=1;goto B6b278d;
case 0x6b2792:goto L6b2792;
case 0x6b2795:c.instructions+=2;goto B6b2795;
case 0x6b2799:c.instructions+=1;goto B6b2799;
case 0x6b279f:goto L6b279f;
case 0x6b27a2:c.instructions+=12;goto B6b27a2;
case 0x6b27a5:c.instructions+=11;goto B6b27a5;
case 0x6b27a8:c.instructions+=10;goto B6b27a8;
case 0x6b27ac:c.instructions+=9;goto B6b27ac;
case 0x6b27af:c.instructions+=8;goto B6b27af;
case 0x6b27b2:c.instructions+=7;goto B6b27b2;
case 0x6b27b5:c.instructions+=6;goto B6b27b5;
case 0x6b27b8:c.instructions+=5;goto B6b27b8;
case 0x6b27bb:c.instructions+=4;goto B6b27bb;
case 0x6b27be:c.instructions+=3;goto B6b27be;
case 0x6b27bf:c.instructions+=2;goto B6b27bf;
case 0x6b27c1:c.instructions+=1;goto B6b27c1;
case 0x6b27c3:goto L6b27c3;
case 0x6b27c6:c.instructions+=3;goto B6b27c6;
case 0x6b27c9:c.instructions+=2;goto B6b27c9;
case 0x6b27cc:c.instructions+=1;goto B6b27cc;
case 0x6b27ce:goto L6b27ce;
case 0x6b27d1:c.instructions+=2;goto B6b27d1;
case 0x6b27d3:c.instructions+=1;goto B6b27d3;
case 0x6b27d8:goto L6b27d8;
case 0x6b27da:c.instructions+=1;goto B6b27da;
case 0x6b27e0:goto L6b27e0;
case 0x6b27e3:c.instructions+=1;goto B6b27e3;
case 0x6b27e5:goto L6b27e5;
case 0x6b27e8:c.instructions+=4;goto B6b27e8;
case 0x6b27eb:c.instructions+=3;goto B6b27eb;
case 0x6b27ee:c.instructions+=2;goto B6b27ee;
case 0x6b27f1:c.instructions+=1;goto B6b27f1;
case 0x6b27f7:goto L6b27f7;
case 0x6b27fe:goto L6b27fe;
case 0x6b2802:c.instructions+=2;goto B6b2802;
case 0x6b2806:c.instructions+=1;goto B6b2806;
case 0x6b280c:goto L6b280c;
case 0x6b280f:c.instructions+=6;goto B6b280f;
case 0x6b2812:c.instructions+=5;goto B6b2812;
case 0x6b2814:c.instructions+=4;goto B6b2814;
case 0x6b2817:c.instructions+=3;goto B6b2817;
case 0x6b2819:c.instructions+=2;goto B6b2819;
case 0x6b281c:c.instructions+=1;goto B6b281c;
case 0x6b281e:goto L6b281e;
case 0x6b2820:c.instructions+=1;goto B6b2820;
case 0x6b2822:goto L6b2822;
case 0x6b2827:c.instructions+=1;goto B6b2827;
case 0x6b2829:goto L6b2829;
case 0x6b282f:c.instructions+=7;goto B6b282f;
case 0x6b2834:c.instructions+=6;goto B6b2834;
case 0x6b2835:c.instructions+=5;goto B6b2835;
case 0x6b283a:c.instructions+=4;goto B6b283a;
case 0x6b283f:c.instructions+=3;goto B6b283f;
case 0x6b2841:c.instructions+=2;goto B6b2841;
case 0x6b2842:c.instructions+=1;goto B6b2842;
case 0x6b2847:goto L6b2847;
case 0x6b284a:c.instructions+=1;goto B6b284a;
case 0x6b284f:goto L6b284f;
case 0x6b2852:c.instructions+=2;goto B6b2852;
case 0x6b2854:c.instructions+=1;goto B6b2854;
case 0x6b2859:goto L6b2859;
case 0x6b285b:c.instructions+=1;goto B6b285b;
case 0x6b2860:goto L6b2860;
case 0x6b2863:goto L6b2863;
case 0x6b2866:c.instructions+=2;goto B6b2866;
case 0x6b286c:c.instructions+=1;goto B6b286c;
case 0x6b2872:goto L6b2872;
case 0x6b2875:c.instructions+=1;goto B6b2875;
case 0x6b2877:goto L6b2877;
case 0x6b287a:c.instructions+=2;goto B6b287a;
case 0x6b287d:c.instructions+=1;goto B6b287d;
case 0x6b287f:goto L6b287f;
case 0x6b2881:goto L6b2881;
case 0x6b2883:c.instructions+=1;goto B6b2883;
case 0x6b2889:goto L6b2889;
case 0x6b288d:c.instructions+=1;goto B6b288d;
case 0x6b2893:goto L6b2893;
case 0x6b2895:c.instructions+=4;goto B6b2895;
case 0x6b2897:c.instructions+=3;goto B6b2897;
case 0x6b289d:c.instructions+=2;goto B6b289d;
case 0x6b28a3:c.instructions+=1;goto B6b28a3;
case 0x6b28a5:goto L6b28a5;
case 0x6b28ab:c.instructions+=1;goto B6b28ab;
case 0x6b28ad:goto L6b28ad;
case 0x6b28b3:c.instructions+=1;goto B6b28b3;
case 0x6b28b5:goto L6b28b5;
case 0x6b28bb:c.instructions+=1;goto B6b28bb;
case 0x6b28bd:goto L6b28bd;
case 0x6b28c3:c.instructions+=1;goto B6b28c3;
case 0x6b28c5:goto L6b28c5;
case 0x6b28cb:c.instructions+=1;goto B6b28cb;
case 0x6b28cd:goto L6b28cd;
case 0x6b28d3:c.instructions+=1;goto B6b28d3;
case 0x6b28d9:goto L6b28d9;
case 0x6b28de:c.instructions+=3;goto B6b28de;
case 0x6b28e4:c.instructions+=2;goto B6b28e4;
case 0x6b28e6:c.instructions+=1;goto B6b28e6;
case 0x6b28e8:goto L6b28e8;
case 0x6b28ea:goto L6b28ea;
case 0x6b28ec:c.instructions+=5;goto B6b28ec;
case 0x6b28ef:c.instructions+=4;goto B6b28ef;
case 0x6b28f2:c.instructions+=3;goto B6b28f2;
case 0x6b28f5:c.instructions+=2;goto B6b28f5;
case 0x6b28f8:c.instructions+=1;goto B6b28f8;
case 0x6b28fa:goto L6b28fa;
case 0x6b28fc:c.instructions+=1;goto B6b28fc;
case 0x6b28ff:goto L6b28ff;
case 0x6b2902:c.instructions+=3;goto B6b2902;
case 0x6b2908:c.instructions+=2;goto B6b2908;
case 0x6b290b:c.instructions+=1;goto B6b290b;
case 0x6b2911:goto L6b2911;
case 0x6b2917:c.instructions+=3;goto B6b2917;
case 0x6b291c:c.instructions+=2;goto B6b291c;
case 0x6b2921:c.instructions+=1;goto B6b2921;
case 0x6b2927:goto L6b2927;
case 0x6b292b:c.instructions+=1;goto B6b292b;
case 0x6b2931:goto L6b2931;
case 0x6b2935:c.instructions+=3;goto B6b2935;
case 0x6b2938:c.instructions+=2;goto B6b2938;
case 0x6b293b:c.instructions+=1;goto B6b293b;
case 0x6b2941:goto L6b2941;
case 0x6b2943:c.instructions+=1;goto B6b2943;
case 0x6b2945:goto L6b2945;
case 0x6b2948:c.instructions+=4;goto B6b2948;
case 0x6b294b:c.instructions+=3;goto B6b294b;
case 0x6b294e:c.instructions+=2;goto B6b294e;
case 0x6b2954:c.instructions+=1;goto B6b2954;
case 0x6b2956:goto L6b2956;
case 0x6b2959:c.instructions+=1;goto B6b2959;
case 0x6b295b:goto L6b295b;
case 0x6b295f:c.instructions+=2;goto B6b295f;
case 0x6b2965:c.instructions+=1;goto B6b2965;
case 0x6b296b:goto L6b296b;
case 0x6b2970:c.instructions+=3;goto B6b2970;
case 0x6b2971:c.instructions+=2;goto B6b2971;
case 0x6b2976:c.instructions+=1;goto B6b2976;
case 0x6b297b:goto L6b297b;
case 0x6b297e:goto L6b297e;
case 0x6b2985:c.instructions+=2;goto B6b2985;
case 0x6b2988:c.instructions+=1;goto B6b2988;
case 0x6b298e:goto L6b298e;
case 0x6b2991:c.instructions+=4;goto B6b2991;
case 0x6b2994:c.instructions+=3;goto B6b2994;
case 0x6b2997:c.instructions+=2;goto B6b2997;
case 0x6b299a:c.instructions+=1;goto B6b299a;
case 0x6b29a0:goto L6b29a0;
case 0x6b29a2:c.instructions+=1;goto B6b29a2;
case 0x6b29a4:goto L6b29a4;
case 0x6b29a7:c.instructions+=14;goto B6b29a7;
case 0x6b29aa:c.instructions+=13;goto B6b29aa;
case 0x6b29b1:c.instructions+=12;goto B6b29b1;
case 0x6b29b4:c.instructions+=11;goto B6b29b4;
case 0x6b29b6:c.instructions+=10;goto B6b29b6;
case 0x6b29b7:c.instructions+=9;goto B6b29b7;
case 0x6b29b9:c.instructions+=8;goto B6b29b9;
case 0x6b29bc:c.instructions+=7;goto B6b29bc;
case 0x6b29bd:c.instructions+=6;goto B6b29bd;
case 0x6b29c0:c.instructions+=5;goto B6b29c0;
case 0x6b29c3:c.instructions+=4;goto B6b29c3;
case 0x6b29c5:c.instructions+=3;goto B6b29c5;
case 0x6b29c8:c.instructions+=2;goto B6b29c8;
case 0x6b29cb:c.instructions+=1;goto B6b29cb;
case 0x6b29d0:goto L6b29d0;
case 0x6b29d2:c.instructions+=2;goto B6b29d2;
case 0x6b29d8:c.instructions+=1;goto B6b29d8;
case 0x6b29da:goto L6b29da;
case 0x6b29dd:c.instructions+=6;goto B6b29dd;
case 0x6b29e0:c.instructions+=5;goto B6b29e0;
case 0x6b29e2:c.instructions+=4;goto B6b29e2;
case 0x6b29e3:c.instructions+=3;goto B6b29e3;
case 0x6b29e9:c.instructions+=2;goto B6b29e9;
case 0x6b29eb:c.instructions+=1;goto B6b29eb;
case 0x6b29ed:goto L6b29ed;
case 0x6b29f0:c.instructions+=5;goto B6b29f0;
case 0x6b29f3:c.instructions+=4;goto B6b29f3;
case 0x6b29f4:c.instructions+=3;goto B6b29f4;
case 0x6b29f6:c.instructions+=2;goto B6b29f6;
case 0x6b29f9:c.instructions+=1;goto B6b29f9;
case 0x6b29fe:goto L6b29fe;
case 0x6b2a01:c.instructions+=5;goto B6b2a01;
case 0x6b2a04:c.instructions+=4;goto B6b2a04;
case 0x6b2a07:c.instructions+=3;goto B6b2a07;
case 0x6b2a0a:c.instructions+=2;goto B6b2a0a;
case 0x6b2a11:c.instructions+=1;goto B6b2a11;
case 0x6b2a15:goto L6b2a15;
case 0x6b2a17:c.instructions+=1;goto B6b2a17;
case 0x6b2a1c:goto L6b2a1c;
case 0x6b2a20:c.instructions+=1;goto B6b2a20;
case 0x6b2a26:goto L6b2a26;
case 0x6b2a28:c.instructions+=1;goto B6b2a28;
case 0x6b2a2e:goto L6b2a2e;
case 0x6b2a31:c.instructions+=6;goto B6b2a31;
case 0x6b2a34:c.instructions+=5;goto B6b2a34;
case 0x6b2a37:c.instructions+=4;goto B6b2a37;
case 0x6b2a3a:c.instructions+=3;goto B6b2a3a;
case 0x6b2a3d:c.instructions+=2;goto B6b2a3d;
case 0x6b2a40:c.instructions+=1;goto B6b2a40;
case 0x6b2a46:goto L6b2a46;
case 0x6b2a4c:c.instructions+=1;goto B6b2a4c;
case 0x6b2a4e:goto L6b2a4e;
case 0x6b2a55:c.instructions+=4;goto B6b2a55;
case 0x6b2a57:c.instructions+=3;goto B6b2a57;
case 0x6b2a5a:c.instructions+=2;goto B6b2a5a;
case 0x6b2a5d:c.instructions+=1;goto B6b2a5d;
case 0x6b2a5f:goto L6b2a5f;
case 0x6b2a62:c.instructions+=2;goto B6b2a62;
case 0x6b2a66:c.instructions+=1;goto B6b2a66;
case 0x6b2a68:goto L6b2a68;
case 0x6b2a6f:c.instructions+=4;goto B6b2a6f;
case 0x6b2a72:c.instructions+=3;goto B6b2a72;
case 0x6b2a74:c.instructions+=2;goto B6b2a74;
case 0x6b2a76:c.instructions+=1;goto B6b2a76;
case 0x6b2a7b:goto L6b2a7b;
case 0x6b2a7e:goto L6b2a7e;
case 0x6b2a81:c.instructions+=2;goto B6b2a81;
case 0x6b2a83:c.instructions+=1;goto B6b2a83;
case 0x6b2a89:goto L6b2a89;
case 0x6b2a8c:c.instructions+=2;goto B6b2a8c;
case 0x6b2a90:c.instructions+=1;goto B6b2a90;
case 0x6b2a96:goto L6b2a96;
case 0x6b2a9c:c.instructions+=6;goto B6b2a9c;
case 0x6b2aa1:c.instructions+=5;goto B6b2aa1;
case 0x6b2aa2:c.instructions+=4;goto B6b2aa2;
case 0x6b2aa7:c.instructions+=3;goto B6b2aa7;
case 0x6b2aac:c.instructions+=2;goto B6b2aac;
case 0x6b2aae:c.instructions+=1;goto B6b2aae;
case 0x6b2ab3:goto L6b2ab3;
case 0x6b2ab5:c.instructions+=2;goto B6b2ab5;
case 0x6b2ab8:c.instructions+=1;goto B6b2ab8;
case 0x6b2aba:goto L6b2aba;
case 0x6b2ac0:c.instructions+=1;goto B6b2ac0;
case 0x6b2ac3:goto L6b2ac3;
case 0x6b2ac6:c.instructions+=2;goto B6b2ac6;
case 0x6b2aca:c.instructions+=1;goto B6b2aca;
case 0x6b2acc:goto L6b2acc;
case 0x6b2acf:c.instructions+=4;goto B6b2acf;
case 0x6b2ad1:c.instructions+=3;goto B6b2ad1;
case 0x6b2ad4:c.instructions+=2;goto B6b2ad4;
case 0x6b2ad6:c.instructions+=1;goto B6b2ad6;
case 0x6b2ad8:goto L6b2ad8;
case 0x6b2adb:c.instructions+=1;goto B6b2adb;
case 0x6b2add:goto L6b2add;
case 0x6b2ae1:c.instructions+=3;goto B6b2ae1;
case 0x6b2ae2:c.instructions+=2;goto B6b2ae2;
case 0x6b2ae5:c.instructions+=1;goto B6b2ae5;
case 0x6b2ae7:goto L6b2ae7;
case 0x6b2aea:goto L6b2aea;
case 0x6b2af0:goto L6b2af0;
case 0x6b2af2:c.instructions+=2;goto B6b2af2;
case 0x6b2af5:c.instructions+=1;goto B6b2af5;
case 0x6b2afb:goto L6b2afb;
case 0x6b2b01:c.instructions+=3;goto B6b2b01;
case 0x6b2b07:c.instructions+=2;goto B6b2b07;
case 0x6b2b0d:c.instructions+=1;goto B6b2b0d;
case 0x6b2b0f:goto L6b2b0f;
case 0x6b2b12:c.instructions+=2;goto B6b2b12;
case 0x6b2b18:c.instructions+=1;goto B6b2b18;
case 0x6b2b1a:goto L6b2b1a;
case 0x6b2b1d:c.instructions+=4;goto B6b2b1d;
case 0x6b2b24:c.instructions+=3;goto B6b2b24;
case 0x6b2b27:c.instructions+=2;goto B6b2b27;
case 0x6b2b29:c.instructions+=1;goto B6b2b29;
case 0x6b2b30:goto L6b2b30;
case 0x6b2b33:c.instructions+=8;goto B6b2b33;
case 0x6b2b34:c.instructions+=7;goto B6b2b34;
case 0x6b2b35:c.instructions+=6;goto B6b2b35;
case 0x6b2b38:c.instructions+=5;goto B6b2b38;
case 0x6b2b3b:c.instructions+=4;goto B6b2b3b;
case 0x6b2b3d:c.instructions+=3;goto B6b2b3d;
case 0x6b2b40:c.instructions+=2;goto B6b2b40;
case 0x6b2b43:c.instructions+=1;goto B6b2b43;
case 0x6b2b48:goto L6b2b48;
case 0x6b2b4a:c.instructions+=2;goto B6b2b4a;
case 0x6b2b50:c.instructions+=1;goto B6b2b50;
case 0x6b2b52:goto L6b2b52;
case 0x6b2b55:c.instructions+=6;goto B6b2b55;
case 0x6b2b58:c.instructions+=5;goto B6b2b58;
case 0x6b2b5a:c.instructions+=4;goto B6b2b5a;
case 0x6b2b5b:c.instructions+=3;goto B6b2b5b;
case 0x6b2b61:c.instructions+=2;goto B6b2b61;
case 0x6b2b63:c.instructions+=1;goto B6b2b63;
case 0x6b2b65:goto L6b2b65;
case 0x6b2b68:c.instructions+=5;goto B6b2b68;
case 0x6b2b6b:c.instructions+=4;goto B6b2b6b;
case 0x6b2b6c:c.instructions+=3;goto B6b2b6c;
case 0x6b2b6e:c.instructions+=2;goto B6b2b6e;
case 0x6b2b71:c.instructions+=1;goto B6b2b71;
case 0x6b2b76:goto L6b2b76;
case 0x6b2b79:c.instructions+=5;goto B6b2b79;
case 0x6b2b7c:c.instructions+=4;goto B6b2b7c;
case 0x6b2b7f:c.instructions+=3;goto B6b2b7f;
case 0x6b2b86:c.instructions+=2;goto B6b2b86;
case 0x6b2b8a:c.instructions+=1;goto B6b2b8a;
case 0x6b2b8c:goto L6b2b8c;
case 0x6b2b8f:c.instructions+=1;goto B6b2b8f;
case 0x6b2b92:goto L6b2b92;
case 0x6b2b95:c.instructions+=3;goto B6b2b95;
case 0x6b2b98:c.instructions+=2;goto B6b2b98;
case 0x6b2b9b:c.instructions+=1;goto B6b2b9b;
case 0x6b2ba2:goto L6b2ba2;
case 0x6b2ba5:c.instructions+=4;goto B6b2ba5;
case 0x6b2ba8:c.instructions+=3;goto B6b2ba8;
case 0x6b2bac:c.instructions+=2;goto B6b2bac;
case 0x6b2baf:c.instructions+=1;goto B6b2baf;
case 0x6b2bb5:goto L6b2bb5;
case 0x6b2bb8:c.instructions+=2;goto B6b2bb8;
case 0x6b2bbc:c.instructions+=1;goto B6b2bbc;
case 0x6b2bc2:goto L6b2bc2;
case 0x6b2bc6:c.instructions+=2;goto B6b2bc6;
case 0x6b2bca:c.instructions+=1;goto B6b2bca;
case 0x6b2bd0:goto L6b2bd0;
case 0x6b2bd3:c.instructions+=4;goto B6b2bd3;
case 0x6b2bd6:c.instructions+=3;goto B6b2bd6;
case 0x6b2bd9:c.instructions+=2;goto B6b2bd9;
case 0x6b2bdc:c.instructions+=1;goto B6b2bdc;
case 0x6b2be2:goto L6b2be2;
case 0x6b2be4:c.instructions+=1;goto B6b2be4;
case 0x6b2be9:goto L6b2be9;
case 0x6b2beb:c.instructions+=2;goto B6b2beb;
case 0x6b2bed:c.instructions+=1;goto B6b2bed;
case 0x6b2bf3:goto L6b2bf3;
case 0x6b2bf5:c.instructions+=1;goto B6b2bf5;
case 0x6b2bfa:goto L6b2bfa;
case 0x6b2bfc:goto L6b2bfc;
case 0x6b2c01:c.instructions+=2;goto B6b2c01;
case 0x6b2c06:c.instructions+=1;goto B6b2c06;
case 0x6b2c08:goto L6b2c08;
case 0x6b2c0d:c.instructions+=2;goto B6b2c0d;
case 0x6b2c0e:c.instructions+=1;goto B6b2c0e;
case 0x6b2c13:goto L6b2c13;
case 0x6b2c18:goto L6b2c18;
case 0x6b2c1b:goto L6b2c1b;
case 0x6b2c1c:c.instructions+=1;goto B6b2c1c;
case 0x6b2c21:goto L6b2c21;
case 0x6b2c24:c.instructions+=1;goto B6b2c24;
case 0x6b2c26:goto L6b2c26;
case 0x6b2c2c:c.instructions+=5;goto B6b2c2c;
case 0x6b2c31:c.instructions+=4;goto B6b2c31;
case 0x6b2c32:c.instructions+=3;goto B6b2c32;
case 0x6b2c37:c.instructions+=2;goto B6b2c37;
case 0x6b2c3c:c.instructions+=1;goto B6b2c3c;
case 0x6b2c3e:goto L6b2c3e;
case 0x6b2c41:c.instructions+=2;goto B6b2c41;
case 0x6b2c45:c.instructions+=1;goto B6b2c45;
case 0x6b2c47:goto L6b2c47;
case 0x6b2c4c:c.instructions+=1;goto B6b2c4c;
case 0x6b2c4e:goto L6b2c4e;
case 0x6b2c53:goto L6b2c53;
case 0x6b2c58:c.instructions+=1;goto B6b2c58;
case 0x6b2c5a:goto L6b2c5a;
case 0x6b2c5f:c.instructions+=1;goto B6b2c5f;
case 0x6b2c64:goto L6b2c64;
case 0x6b2c66:c.instructions+=2;goto B6b2c66;
case 0x6b2c67:c.instructions+=1;goto B6b2c67;
case 0x6b2c6c:goto L6b2c6c;
case 0x6b2c6f:goto L6b2c6f;
case 0x6b2c74:c.instructions+=1;goto B6b2c74;
case 0x6b2c76:goto L6b2c76;
case 0x6b2c78:goto L6b2c78;
case 0x6b2c7a:c.instructions+=2;goto B6b2c7a;
case 0x6b2c7c:c.instructions+=1;goto B6b2c7c;
case 0x6b2c7e:goto L6b2c7e;
case 0x6b2c7f:c.instructions+=5;goto B6b2c7f;
case 0x6b2c80:c.instructions+=4;goto B6b2c80;
case 0x6b2c81:c.instructions+=3;goto B6b2c81;
case 0x6b2c82:c.instructions+=2;goto B6b2c82;
case 0x6b2c84:c.instructions+=1;goto B6b2c84;
case 0x6b2c89:goto L6b2c89;
case 0x6b2c8b:c.instructions+=2;goto B6b2c8b;
case 0x6b2c8d:c.instructions+=1;goto B6b2c8d;
case 0x6b2c92:goto L6b2c92;
case 0x6b2c95:c.instructions+=3;goto B6b2c95;
case 0x6b2c98:c.instructions+=2;goto B6b2c98;
case 0x6b2c9b:c.instructions+=1;goto B6b2c9b;
case 0x6b2ca1:goto L6b2ca1;
case 0x6b2ca4:c.instructions+=5;goto B6b2ca4;
case 0x6b2ca7:c.instructions+=4;goto B6b2ca7;
case 0x6b2ca9:c.instructions+=3;goto B6b2ca9;
case 0x6b2cac:c.instructions+=2;goto B6b2cac;
case 0x6b2cae:c.instructions+=1;goto B6b2cae;
case 0x6b2cb0:goto L6b2cb0;
case 0x6b2cb3:c.instructions+=4;goto B6b2cb3;
case 0x6b2cb6:c.instructions+=3;goto B6b2cb6;
case 0x6b2cb8:c.instructions+=2;goto B6b2cb8;
case 0x6b2cba:c.instructions+=1;goto B6b2cba;
case 0x6b2cbc:goto L6b2cbc;
case 0x6b2cc0:c.instructions+=1;goto B6b2cc0;
case 0x6b2cc2:goto L6b2cc2;
case 0x6b2cc5:c.instructions+=1;goto B6b2cc5;
case 0x6b2cc7:goto L6b2cc7;
case 0x6b2cc9:c.instructions+=6;goto B6b2cc9;
case 0x6b2ccb:c.instructions+=5;goto B6b2ccb;
case 0x6b2cce:c.instructions+=4;goto B6b2cce;
case 0x6b2cd1:c.instructions+=3;goto B6b2cd1;
case 0x6b2cd3:c.instructions+=2;goto B6b2cd3;
case 0x6b2cd5:c.instructions+=1;goto B6b2cd5;
case 0x6b2cdc:goto L6b2cdc;
case 0x6b2cdd:c.instructions+=2;goto B6b2cdd;
case 0x6b2ce0:c.instructions+=1;goto B6b2ce0;
case 0x6b2ce2:goto L6b2ce2;
case 0x6b2ce4:goto L6b2ce4;
case 0x6b2ce5:c.instructions+=4;goto B6b2ce5;
case 0x6b2ce6:c.instructions+=3;goto B6b2ce6;
case 0x6b2ce7:c.instructions+=2;goto B6b2ce7;
case 0x6b2ce8:c.instructions+=1;goto B6b2ce8;
case 0x6b2ceb:goto L6b2ceb;
case 0x6b2cf0:c.instructions+=1;goto B6b2cf0;
case 0x6b2cf2:goto L6b2cf2;
case 0x6b2cf4:c.instructions+=14;goto B6b2cf4;
case 0x6b2cf5:c.instructions+=13;goto B6b2cf5;
case 0x6b2cf7:c.instructions+=12;goto B6b2cf7;
case 0x6b2cfa:c.instructions+=11;goto B6b2cfa;
case 0x6b2cfe:c.instructions+=10;goto B6b2cfe;
case 0x6b2d02:c.instructions+=9;goto B6b2d02;
case 0x6b2d03:c.instructions+=8;goto B6b2d03;
case 0x6b2d04:c.instructions+=7;goto B6b2d04;
case 0x6b2d05:c.instructions+=6;goto B6b2d05;
case 0x6b2d07:c.instructions+=5;goto B6b2d07;
case 0x6b2d09:c.instructions+=4;goto B6b2d09;
case 0x6b2d0a:c.instructions+=3;goto B6b2d0a;
case 0x6b2d0c:c.instructions+=2;goto B6b2d0c;
case 0x6b2d0e:c.instructions+=1;goto B6b2d0e;
case 0x6b2d11:goto L6b2d11;
case 0x6b2d13:goto L6b2d13;
case 0x6b2d15:c.instructions+=1;goto B6b2d15;
case 0x6b2d18:goto L6b2d18;
case 0x6b2d1a:goto L6b2d1a;
case 0x6b2d1c:c.instructions+=1;goto B6b2d1c;
case 0x6b2d1f:goto L6b2d1f;
case 0x6b2d21:goto L6b2d21;
case 0x6b2d24:c.instructions+=2;goto B6b2d24;
case 0x6b2d26:c.instructions+=1;goto B6b2d26;
case 0x6b2d2c:goto L6b2d2c;
case 0x6b2d2e:goto L6b2d2e;
case 0x6b2d30:c.instructions+=1;goto B6b2d30;
case 0x6b2d36:goto L6b2d36;
case 0x6b2d38:goto L6b2d38;
case 0x6b2d3a:c.instructions+=5;goto B6b2d3a;
case 0x6b2d3d:c.instructions+=4;goto B6b2d3d;
case 0x6b2d44:c.instructions+=3;goto B6b2d44;
case 0x6b2d47:c.instructions+=2;goto B6b2d47;
case 0x6b2d4a:c.instructions+=1;goto B6b2d4a;
case 0x6b2d50:goto L6b2d50;
case 0x6b2d52:c.instructions+=1;goto B6b2d52;
case 0x6b2d53:goto L6b2d53;
case 0x6b2d56:c.instructions+=8;goto B6b2d56;
case 0x6b2d59:c.instructions+=7;goto B6b2d59;
case 0x6b2d5c:c.instructions+=6;goto B6b2d5c;
case 0x6b2d5e:c.instructions+=5;goto B6b2d5e;
case 0x6b2d60:c.instructions+=4;goto B6b2d60;
case 0x6b2d66:c.instructions+=3;goto B6b2d66;
case 0x6b2d6c:c.instructions+=2;goto B6b2d6c;
case 0x6b2d6f:c.instructions+=1;goto B6b2d6f;
case 0x6b2d75:goto L6b2d75;
case 0x6b2d7b:c.instructions+=1;goto B6b2d7b;
case 0x6b2d81:goto L6b2d81;
case 0x6b2d87:c.instructions+=1;goto B6b2d87;
case 0x6b2d8d:goto L6b2d8d;
case 0x6b2d93:c.instructions+=1;goto B6b2d93;
case 0x6b2d99:goto L6b2d99;
case 0x6b2d9f:c.instructions+=1;goto B6b2d9f;
case 0x6b2da5:goto L6b2da5;
case 0x6b2dab:c.instructions+=1;goto B6b2dab;
case 0x6b2db1:goto L6b2db1;
case 0x6b2db7:c.instructions+=1;goto B6b2db7;
case 0x6b2dbd:goto L6b2dbd;
case 0x6b2dbf:c.instructions+=3;goto B6b2dbf;
case 0x6b2dc5:c.instructions+=2;goto B6b2dc5;
case 0x6b2dc8:c.instructions+=1;goto B6b2dc8;
case 0x6b2dce:goto L6b2dce;
case 0x6b2dd0:c.instructions+=1;goto B6b2dd0;
case 0x6b2dd6:goto L6b2dd6;
case 0x6b2dda:c.instructions+=2;goto B6b2dda;
case 0x6b2dde:c.instructions+=1;goto B6b2dde;
case 0x6b2de4:goto L6b2de4;
case 0x6b2de7:c.instructions+=3;goto B6b2de7;
case 0x6b2dea:c.instructions+=2;goto B6b2dea;
case 0x6b2ded:c.instructions+=1;goto B6b2ded;
case 0x6b2df0:goto L6b2df0;
case 0x6b2df3:c.instructions+=6;goto B6b2df3;
case 0x6b2df5:c.instructions+=5;goto B6b2df5;
case 0x6b2df8:c.instructions+=4;goto B6b2df8;
case 0x6b2dfb:c.instructions+=3;goto B6b2dfb;
case 0x6b2e01:c.instructions+=2;goto B6b2e01;
case 0x6b2e04:c.instructions+=1;goto B6b2e04;
case 0x6b2e06:goto L6b2e06;
case 0x6b2e0a:c.instructions+=2;goto B6b2e0a;
case 0x6b2e0e:c.instructions+=1;goto B6b2e0e;
case 0x6b2e10:goto L6b2e10;
case 0x6b2e12:c.instructions+=4;goto B6b2e12;
case 0x6b2e15:c.instructions+=3;goto B6b2e15;
case 0x6b2e19:c.instructions+=2;goto B6b2e19;
case 0x6b2e1c:c.instructions+=1;goto B6b2e1c;
case 0x6b2e1e:goto L6b2e1e;
case 0x6b2e24:c.instructions+=3;goto B6b2e24;
case 0x6b2e2a:c.instructions+=2;goto B6b2e2a;
case 0x6b2e30:c.instructions+=1;goto B6b2e30;
case 0x6b2e32:goto L6b2e32;
case 0x6b2e37:c.instructions+=1;goto B6b2e37;
case 0x6b2e39:goto L6b2e39;
case 0x6b2e3d:goto L6b2e3d;
case 0x6b2e3f:c.instructions+=5;goto B6b2e3f;
case 0x6b2e42:c.instructions+=4;goto B6b2e42;
case 0x6b2e45:c.instructions+=3;goto B6b2e45;
case 0x6b2e47:c.instructions+=2;goto B6b2e47;
case 0x6b2e4b:c.instructions+=1;goto B6b2e4b;
case 0x6b2e4d:goto L6b2e4d;
case 0x6b2e50:c.instructions+=4;goto B6b2e50;
case 0x6b2e53:c.instructions+=3;goto B6b2e53;
case 0x6b2e57:c.instructions+=2;goto B6b2e57;
case 0x6b2e59:c.instructions+=1;goto B6b2e59;
case 0x6b2e5c:goto L6b2e5c;
case 0x6b2e5e:c.instructions+=6;goto B6b2e5e;
case 0x6b2e61:c.instructions+=5;goto B6b2e61;
case 0x6b2e64:c.instructions+=4;goto B6b2e64;
case 0x6b2e67:c.instructions+=3;goto B6b2e67;
case 0x6b2e68:c.instructions+=2;goto B6b2e68;
case 0x6b2e6a:c.instructions+=1;goto B6b2e6a;
case 0x6b2e6c:goto L6b2e6c;
case 0x6b2e6e:goto L6b2e6e;
case 0x6b2e71:c.instructions+=2;goto B6b2e71;
case 0x6b2e74:c.instructions+=1;goto B6b2e74;
case 0x6b2e76:goto L6b2e76;
case 0x6b2e79:c.instructions+=3;goto B6b2e79;
case 0x6b2e7b:c.instructions+=2;goto B6b2e7b;
case 0x6b2e7d:c.instructions+=1;goto B6b2e7d;
case 0x6b2e7e:goto L6b2e7e;
case 0x6b2e81:c.instructions+=6;goto B6b2e81;
case 0x6b2e83:c.instructions+=5;goto B6b2e83;
case 0x6b2e86:c.instructions+=4;goto B6b2e86;
case 0x6b2e89:c.instructions+=3;goto B6b2e89;
case 0x6b2e8c:c.instructions+=2;goto B6b2e8c;
case 0x6b2e8f:c.instructions+=1;goto B6b2e8f;
case 0x6b2e95:goto L6b2e95;
case 0x6b2e98:goto L6b2e98;
case 0x6b2e9a:goto L6b2e9a;
case 0x6b2e9d:c.instructions+=3;goto B6b2e9d;
case 0x6b2ea0:c.instructions+=2;goto B6b2ea0;
case 0x6b2ea3:c.instructions+=1;goto B6b2ea3;
case 0x6b2ea9:goto L6b2ea9;
case 0x6b2ead:c.instructions+=1;goto B6b2ead;
case 0x6b2eaf:goto L6b2eaf;
case 0x6b2eb2:goto L6b2eb2;
case 0x6b2eb4:c.instructions+=2;goto B6b2eb4;
case 0x6b2eb7:c.instructions+=1;goto B6b2eb7;
case 0x6b2eb9:goto L6b2eb9;
case 0x6b2ebc:c.instructions+=5;goto B6b2ebc;
case 0x6b2ebf:c.instructions+=4;goto B6b2ebf;
case 0x6b2ec0:c.instructions+=3;goto B6b2ec0;
case 0x6b2ec3:c.instructions+=2;goto B6b2ec3;
case 0x6b2ec6:c.instructions+=1;goto B6b2ec6;
case 0x6b2ec8:goto L6b2ec8;
case 0x6b2ecb:c.instructions+=3;goto B6b2ecb;
case 0x6b2ece:c.instructions+=2;goto B6b2ece;
case 0x6b2ed1:c.instructions+=1;goto B6b2ed1;
case 0x6b2ed7:goto L6b2ed7;
case 0x6b2edc:c.instructions+=2;goto B6b2edc;
case 0x6b2ee2:c.instructions+=1;goto B6b2ee2;
case 0x6b2ee7:goto L6b2ee7;
case 0x6b2ee9:c.instructions+=4;goto B6b2ee9;
case 0x6b2eeb:c.instructions+=3;goto B6b2eeb;
case 0x6b2eec:c.instructions+=2;goto B6b2eec;
case 0x6b2ef2:c.instructions+=1;goto B6b2ef2;
case 0x6b2ef8:goto L6b2ef8;
case 0x6b2efa:c.instructions+=4;goto B6b2efa;
case 0x6b2efb:c.instructions+=3;goto B6b2efb;
case 0x6b2efc:c.instructions+=2;goto B6b2efc;
case 0x6b2efd:c.instructions+=1;goto B6b2efd;
case 0x6b2f02:goto L6b2f02;
case 0x6b2f04:goto L6b2f04;
case 0x6b2f07:c.instructions+=5;goto B6b2f07;
case 0x6b2f0d:c.instructions+=4;goto B6b2f0d;
case 0x6b2f0e:c.instructions+=3;goto B6b2f0e;
case 0x6b2f14:c.instructions+=2;goto B6b2f14;
case 0x6b2f16:c.instructions+=1;goto B6b2f16;
case 0x6b2f1b:goto L6b2f1b;
case 0x6b2f1d:c.instructions+=1;goto B6b2f1d;
case 0x6b2f23:goto L6b2f23;
case 0x6b2f28:goto L6b2f28;
case 0x6b2f2e:c.instructions+=1;goto B6b2f2e;
case 0x6b2f30:goto L6b2f30;
case 0x6b2f33:c.instructions+=2;goto B6b2f33;
case 0x6b2f35:c.instructions+=1;goto B6b2f35;
case 0x6b2f37:goto L6b2f37;
case 0x6b2f3a:c.instructions+=2;goto B6b2f3a;
case 0x6b2f40:c.instructions+=1;goto B6b2f40;
case 0x6b2f43:goto L6b2f43;
case 0x6b2f46:c.instructions+=4;goto B6b2f46;
case 0x6b2f49:c.instructions+=3;goto B6b2f49;
case 0x6b2f4c:c.instructions+=2;goto B6b2f4c;
case 0x6b2f52:c.instructions+=1;goto B6b2f52;
case 0x6b2f54:goto L6b2f54;
case 0x6b2f57:c.instructions+=1;goto B6b2f57;
case 0x6b2f59:goto L6b2f59;
case 0x6b2f5d:c.instructions+=2;goto B6b2f5d;
case 0x6b2f61:c.instructions+=1;goto B6b2f61;
case 0x6b2f63:goto L6b2f63;
case 0x6b2f67:c.instructions+=2;goto B6b2f67;
case 0x6b2f69:c.instructions+=1;goto B6b2f69;
case 0x6b2f6b:goto L6b2f6b;
case 0x6b2f71:c.instructions+=3;goto B6b2f71;
case 0x6b2f77:c.instructions+=2;goto B6b2f77;
case 0x6b2f7d:c.instructions+=1;goto B6b2f7d;
case 0x6b2f7f:goto L6b2f7f;
case 0x6b2f82:goto L6b2f82;
case 0x6b2f84:c.instructions+=1;goto B6b2f84;
case 0x6b2f89:goto L6b2f89;
case 0x6b2f8c:c.instructions+=1;goto B6b2f8c;
case 0x6b2f91:goto L6b2f91;
case 0x6b2f96:c.instructions+=3;goto B6b2f96;
case 0x6b2f9b:c.instructions+=2;goto B6b2f9b;
case 0x6b2f9e:c.instructions+=1;goto B6b2f9e;
case 0x6b2fa3:goto L6b2fa3;
case 0x6b2fa8:c.instructions+=2;goto B6b2fa8;
case 0x6b2fa9:c.instructions+=1;goto B6b2fa9;
case 0x6b2fae:goto L6b2fae;
case 0x6b2fb0:c.instructions+=3;goto B6b2fb0;
case 0x6b2fb1:c.instructions+=2;goto B6b2fb1;
case 0x6b2fb7:c.instructions+=1;goto B6b2fb7;
case 0x6b2fb9:goto L6b2fb9;
case 0x6b2fba:c.instructions+=1;goto B6b2fba;
case 0x6b2fbf:goto L6b2fbf;
case 0x6b2fc1:c.instructions+=3;goto B6b2fc1;
case 0x6b2fc2:c.instructions+=2;goto B6b2fc2;
case 0x6b2fc8:c.instructions+=1;goto B6b2fc8;
case 0x6b2fca:goto L6b2fca;
case 0x6b2fcb:c.instructions+=1;goto B6b2fcb;
case 0x6b2fd0:goto L6b2fd0;
case 0x6b2fd2:c.instructions+=3;goto B6b2fd2;
case 0x6b2fd3:c.instructions+=2;goto B6b2fd3;
case 0x6b2fd6:c.instructions+=1;goto B6b2fd6;
case 0x6b2fd8:goto L6b2fd8;
case 0x6b2fdd:c.instructions+=1;goto B6b2fdd;
case 0x6b2fe2:goto L6b2fe2;
case 0x6b2fe3:c.instructions+=1;goto B6b2fe3;
case 0x6b2fe8:goto L6b2fe8;
case 0x6b2fee:c.instructions+=5;goto B6b2fee;
case 0x6b2ff3:c.instructions+=4;goto B6b2ff3;
case 0x6b2ff6:c.instructions+=3;goto B6b2ff6;
case 0x6b2ff8:c.instructions+=2;goto B6b2ff8;
case 0x6b2ff9:c.instructions+=1;goto B6b2ff9;
case 0x6b2ffb:goto L6b2ffb;
case 0x6b2ffd:goto L6b2ffd;
default:missing_instruction(c.pc);}
B6b2000:L6b2000:{c.instructions+=4;NFSU2_TR(0x6b2000);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b2001:{NFSU2_TR(0x6b2001);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6b2004:{NFSU2_TR(0x6b2004);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6b2007:{NFSU2_TR(0x6b2007);
if(r1(R+512)){TAIL_STATIC(0x6b1ffbu,6b1);}
}
B6b2009:L6b2009:{c.instructions+=17;NFSU2_TR(0x6b2009);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b200c:{NFSU2_TR(0x6b200c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2010:{NFSU2_TR(0x6b2010);
__builtin_memmove((R+4),(R+0),4);
}
B6b2012:{NFSU2_TR(0x6b2012);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2018:{NFSU2_TR(0x6b2018);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b201b:{NFSU2_TR(0x6b201b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b201e:{NFSU2_TR(0x6b201e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b2021:{NFSU2_TR(0x6b2021);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b2024:{NFSU2_TR(0x6b2024);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b202a:{NFSU2_TR(0x6b202a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b202d:{NFSU2_TR(0x6b202d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b2030:{NFSU2_TR(0x6b2030);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b2033:{NFSU2_TR(0x6b2033);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b2036:{NFSU2_TR(0x6b2036);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b2039:{NFSU2_TR(0x6b2039);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b203c:{NFSU2_TR(0x6b203c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2040:{NFSU2_TR(0x6b2040);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b209b;}}
}
B6b2042:L6b2042:{c.instructions+=8;NFSU2_TR(0x6b2042);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2045:{NFSU2_TR(0x6b2045);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b2048:{NFSU2_TR(0x6b2048);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b204b:{NFSU2_TR(0x6b204b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2051:{NFSU2_TR(0x6b2051);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2054:{NFSU2_TR(0x6b2054);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b2057:{NFSU2_TR(0x6b2057);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+8))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6b205a:{NFSU2_TR(0x6b205a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2090;}}
}
B6b205c:L6b205c:{c.instructions+=9;NFSU2_TR(0x6b205c);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6b205f:{NFSU2_TR(0x6b205f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2062:{NFSU2_TR(0x6b2062);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6b2068:{NFSU2_TR(0x6b2068);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff7ffffull))));
}
B6b206d:{NFSU2_TR(0x6b206d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2070:{NFSU2_TR(0x6b2070);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b2073:{NFSU2_TR(0x6b2073);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6b2075:{NFSU2_TR(0x6b2075);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6b2078:{NFSU2_TR(0x6b2078);
if(r1(R+514)){{goto L6b2090;}}
}
B6b207a:L6b207a:{c.instructions+=3;NFSU2_TR(0x6b207a);
w4(R+0,u32(0x80000ull));
}
B6b207f:{NFSU2_TR(0x6b207f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b2081:{NFSU2_TR(0x6b2081);
if(r1(R+518)){{goto L6b208b;}}
}
B6b2083:L6b2083:{c.instructions+=2;NFSU2_TR(0x6b2083);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff7ffffull))));
}
B6b2089:{NFSU2_TR(0x6b2089);
{goto L6b208d;}
}
B6b208b:L6b208b:{c.instructions+=1;NFSU2_TR(0x6b208b);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B6b208d:L6b208d:{c.instructions+=1;NFSU2_TR(0x6b208d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2090:L6b2090:{c.instructions+=4;NFSU2_TR(0x6b2090);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2093:{NFSU2_TR(0x6b2093);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2096:{NFSU2_TR(0x6b2096);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b2099:{NFSU2_TR(0x6b2099);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2042u);}goto L6b2042;}}
}
B6b209b:L6b209b:{c.instructions+=5;NFSU2_TR(0x6b209b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b209e:{NFSU2_TR(0x6b209e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b20a1:{NFSU2_TR(0x6b20a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b20a5:{NFSU2_TR(0x6b20a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b20a8:{NFSU2_TR(0x6b20a8);
if(r1(R+512)){TAIL_STATIC(0x6b1feeu,6b1);}
}
B6b20ae:L6b20ae:{c.instructions+=5;NFSU2_TR(0x6b20ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b20b1:{NFSU2_TR(0x6b20b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b20b4:{NFSU2_TR(0x6b20b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b20b8:{NFSU2_TR(0x6b20b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b20bb:{NFSU2_TR(0x6b20bb);
if(r1(R+512)){TAIL_STATIC(0x6b1f26u,6b1);}
}
B6b20c1:L6b20c1:{c.instructions+=4;NFSU2_TR(0x6b20c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b20c7:{NFSU2_TR(0x6b20c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6b20ca:{NFSU2_TR(0x6b20ca);
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
B6b20cc:{NFSU2_TR(0x6b20cc);
TAIL_STATIC(0x6b1c9fu,6b1);
}
B6b20d1:L6b20d1:{c.instructions+=2;NFSU2_TR(0x6b20d1);
w4(R+0,u32(0x8007000eull));
}
B6b20d6:{NFSU2_TR(0x6b20d6);
TAIL_STATIC(0x6b1c9fu,6b1);
}
B6b20db:L6b20db:{c.instructions+=2;NFSU2_TR(0x6b20db);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b20dd:{NFSU2_TR(0x6b20dd);
{goto L6b20e2;}
}
B6b20df:L6b20df:{c.instructions+=1;NFSU2_TR(0x6b20df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b20e2:L6b20e2:{c.instructions+=1;NFSU2_TR(0x6b20e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b20e7ull));
TAIL_STATIC(0x6739efu,673);
}
B6b20e7:L6b20e7:{c.instructions+=2;NFSU2_TR(0x6b20e7);
__builtin_memmove((R+0),(R+24),4);
}
B6b20e9:{NFSU2_TR(0x6b20e9);
TAIL_STATIC(0x6b1c9fu,6b1);
}
B6b20ee:L6b20ee:{c.instructions+=14;NFSU2_TR(0x6b20ee);
__builtin_memmove((R+28),(R+28),4);
}
B6b20f0:{NFSU2_TR(0x6b20f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b20f1:{NFSU2_TR(0x6b20f1);
__builtin_memmove((R+20),(R+16),4);
}
B6b20f3:{NFSU2_TR(0x6b20f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6b20f6:{NFSU2_TR(0x6b20f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b20f7:{NFSU2_TR(0x6b20f7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b20f9:{NFSU2_TR(0x6b20f9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b20fb:{NFSU2_TR(0x6b20fb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b20fe:{NFSU2_TR(0x6b20fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b20ff:{NFSU2_TR(0x6b20ff);
__builtin_memmove((R+8),(R+4),4);
}
B6b2101:{NFSU2_TR(0x6b2101);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2102:{NFSU2_TR(0x6b2102);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2105:{NFSU2_TR(0x6b2105);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2108:{NFSU2_TR(0x6b2108);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2217;}}
}
B6b210e:L6b210e:{c.instructions+=4;NFSU2_TR(0x6b210e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2111:{NFSU2_TR(0x6b2111);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b2114:{NFSU2_TR(0x6b2114);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2116:{NFSU2_TR(0x6b2116);
if(r1(R+518)){{goto L6b2207;}}
}
B6b211c:L6b211c:{c.instructions+=3;NFSU2_TR(0x6b211c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b211e:{NFSU2_TR(0x6b211e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2120:{NFSU2_TR(0x6b2120);
if(r1(R+518)){{goto L6b2207;}}
}
B6b2126:L6b2126:{c.instructions+=4;NFSU2_TR(0x6b2126);
__builtin_memmove((R+4),(R+0),4);
}
B6b2128:{NFSU2_TR(0x6b2128);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6b212e:{NFSU2_TR(0x6b212e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b212f:{NFSU2_TR(0x6b212f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b2134ull));
TAIL_STATIC(0x6af0ecu,6af);
}
B6b2134:L6b2134:{c.instructions+=3;NFSU2_TR(0x6b2134);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b213a:{NFSU2_TR(0x6b213a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b213d:{NFSU2_TR(0x6b213d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2146;}}
}
B6b213f:L6b213f:{c.instructions+=1;NFSU2_TR(0x6b213f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2146:L6b2146:{c.instructions+=3;NFSU2_TR(0x6b2146);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2149:{NFSU2_TR(0x6b2149);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b214c:{NFSU2_TR(0x6b214c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2207;}}
}
B6b2152:L6b2152:{c.instructions+=8;NFSU2_TR(0x6b2152);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b2155:{NFSU2_TR(0x6b2155);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2158:{NFSU2_TR(0x6b2158);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b215b:{NFSU2_TR(0x6b215b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b215e:{NFSU2_TR(0x6b215e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b2161:{NFSU2_TR(0x6b2161);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2164:{NFSU2_TR(0x6b2164);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b216a:{NFSU2_TR(0x6b216a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b21f8;}}
}
B6b2170:L6b2170:{c.instructions+=4;NFSU2_TR(0x6b2170);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2173:{NFSU2_TR(0x6b2173);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B6b2179:{NFSU2_TR(0x6b2179);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b217c:{NFSU2_TR(0x6b217c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b21f8;}}
}
B6b217e:L6b217e:{c.instructions+=3;NFSU2_TR(0x6b217e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6b2182:{NFSU2_TR(0x6b2182);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2185:{NFSU2_TR(0x6b2185);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b21f8;}}
}
B6b2187:L6b2187:{c.instructions+=2;NFSU2_TR(0x6b2187);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b218a:{NFSU2_TR(0x6b218a);
if(r1(R+518)){{goto L6b2191;}}
}
B6b218c:L6b218c:{c.instructions+=2;NFSU2_TR(0x6b218c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b218f:{NFSU2_TR(0x6b218f);
if(r1(R+518)){{goto L6b21f8;}}
}
B6b2191:L6b2191:{c.instructions+=2;NFSU2_TR(0x6b2191);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2195:{NFSU2_TR(0x6b2195);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b21ee;}}
}
B6b2197:L6b2197:{c.instructions+=1;NFSU2_TR(0x6b2197);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b219a:L6b219a:{c.instructions+=5;NFSU2_TR(0x6b219a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b219d:{NFSU2_TR(0x6b219d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b21a0:{NFSU2_TR(0x6b21a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b21a3:{NFSU2_TR(0x6b21a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b21a6:{NFSU2_TR(0x6b21a6);
if(r1(R+518)){{goto L6b21b0;}}
}
B6b21a8:L6b21a8:{c.instructions+=3;NFSU2_TR(0x6b21a8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b21a9:{NFSU2_TR(0x6b21a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6b21ac:{NFSU2_TR(0x6b21ac);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b219au);}goto L6b219a;}}
}
B6b21ae:L6b21ae:{c.instructions+=1;NFSU2_TR(0x6b21ae);
{goto L6b21ee;}
}
B6b21b0:L6b21b0:{c.instructions+=9;NFSU2_TR(0x6b21b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b21b1:{NFSU2_TR(0x6b21b1);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b21b3:{NFSU2_TR(0x6b21b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b21b4:{NFSU2_TR(0x6b21b4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b21b7:{NFSU2_TR(0x6b21b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b21b8:{NFSU2_TR(0x6b21b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b21bb:{NFSU2_TR(0x6b21bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b21bd:{NFSU2_TR(0x6b21bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b21c3:{NFSU2_TR(0x6b21c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b21c8ull));
TAIL_STATIC(0x699c39u,699);
}
B6b21c8:L6b21c8:{c.instructions+=2;NFSU2_TR(0x6b21c8);
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
B6b21cb:{NFSU2_TR(0x6b21cb);
if(r1(R+518)){{goto L6b2220;}}
}
B6b21cd:L6b21cd:{c.instructions+=11;NFSU2_TR(0x6b21cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b21d0:{NFSU2_TR(0x6b21d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b21d3:{NFSU2_TR(0x6b21d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b21d6:{NFSU2_TR(0x6b21d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b21d9:{NFSU2_TR(0x6b21d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b21dc:{NFSU2_TR(0x6b21dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b21df:{NFSU2_TR(0x6b21df);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b21e2:{NFSU2_TR(0x6b21e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b21e5:{NFSU2_TR(0x6b21e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b21e8:{NFSU2_TR(0x6b21e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b21eb:{NFSU2_TR(0x6b21eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b21ee:L6b21ee:{c.instructions+=2;NFSU2_TR(0x6b21ee);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b21f1:{NFSU2_TR(0x6b21f1);
if(r1(R+518)){{goto L6b2227;}}
}
B6b21f3:L6b21f3:{c.instructions+=2;NFSU2_TR(0x6b21f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b21f6:{NFSU2_TR(0x6b21f6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b21f8:L6b21f8:{c.instructions+=4;NFSU2_TR(0x6b21f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b21fb:{NFSU2_TR(0x6b21fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b21fe:{NFSU2_TR(0x6b21fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b2201:{NFSU2_TR(0x6b2201);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2152u);}goto L6b2152;}}
}
B6b2207:L6b2207:{c.instructions+=5;NFSU2_TR(0x6b2207);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b220a:{NFSU2_TR(0x6b220a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b220b:{NFSU2_TR(0x6b220b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b220e:{NFSU2_TR(0x6b220e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2211:{NFSU2_TR(0x6b2211);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b210eu);}goto L6b210e;}}
}
B6b2217:L6b2217:{c.instructions+=1;NFSU2_TR(0x6b2217);
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
B6b2219:L6b2219:{c.instructions+=5;NFSU2_TR(0x6b2219);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b221a:{NFSU2_TR(0x6b221a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b221b:{NFSU2_TR(0x6b221b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b221c:{NFSU2_TR(0x6b221c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b221d:{NFSU2_TR(0x6b221d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b2220:L6b2220:{c.instructions+=2;NFSU2_TR(0x6b2220);
w4(R+0,u32(0x8007000eull));
}
B6b2225:{NFSU2_TR(0x6b2225);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2219u);}goto L6b2219;}
}
B6b2227:L6b2227:{c.instructions+=5;NFSU2_TR(0x6b2227);
u8 U[4];
w4(U+0,u32(0x7bc240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b222c:{NFSU2_TR(0x6b222c);
u8 U[4];
w4(U+0,u32(0x12c1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2231:{NFSU2_TR(0x6b2231);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2233:{NFSU2_TR(0x6b2233);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b2236:{NFSU2_TR(0x6b2236);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b223bull));
TAIL_STATIC(0x69e936u,69e);
}
B6b223b:L6b223b:{c.instructions+=3;NFSU2_TR(0x6b223b);
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
B6b223e:{NFSU2_TR(0x6b223e);
w4(R+0,u32(0x80004005ull));
}
B6b2243:{NFSU2_TR(0x6b2243);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2219u);}goto L6b2219;}
}
B6b2245:L6b2245:{c.instructions+=13;NFSU2_TR(0x6b2245);
__builtin_memmove((R+28),(R+28),4);
}
B6b2247:{NFSU2_TR(0x6b2247);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2248:{NFSU2_TR(0x6b2248);
__builtin_memmove((R+20),(R+16),4);
}
B6b224a:{NFSU2_TR(0x6b224a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6b224d:{NFSU2_TR(0x6b224d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b224e:{NFSU2_TR(0x6b224e);
__builtin_memmove((R+12),(R+4),4);
}
B6b2250:{NFSU2_TR(0x6b2250);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b2252:{NFSU2_TR(0x6b2252);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b2254:{NFSU2_TR(0x6b2254);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2257:{NFSU2_TR(0x6b2257);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2258:{NFSU2_TR(0x6b2258);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2259:{NFSU2_TR(0x6b2259);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b225c:{NFSU2_TR(0x6b225c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2349;}}
}
B6b2262:L6b2262:{c.instructions+=4;NFSU2_TR(0x6b2262);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b2265:{NFSU2_TR(0x6b2265);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b2268:{NFSU2_TR(0x6b2268);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b226a:{NFSU2_TR(0x6b226a);
if(r1(R+518)){{goto L6b2339;}}
}
B6b2270:L6b2270:{c.instructions+=3;NFSU2_TR(0x6b2270);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2273:{NFSU2_TR(0x6b2273);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2276:{NFSU2_TR(0x6b2276);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2339;}}
}
B6b227c:L6b227c:{c.instructions+=8;NFSU2_TR(0x6b227c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b227f:{NFSU2_TR(0x6b227f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b2282:{NFSU2_TR(0x6b2282);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b2285:{NFSU2_TR(0x6b2285);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2288:{NFSU2_TR(0x6b2288);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b228b:{NFSU2_TR(0x6b228b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b228e:{NFSU2_TR(0x6b228e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2294:{NFSU2_TR(0x6b2294);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b232a;}}
}
B6b229a:L6b229a:{c.instructions+=2;NFSU2_TR(0x6b229a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b229d:{NFSU2_TR(0x6b229d);
if(r1(R+518)){{goto L6b232a;}}
}
B6b22a3:L6b22a3:{c.instructions+=4;NFSU2_TR(0x6b22a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b22a6:{NFSU2_TR(0x6b22a6);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B6b22ac:{NFSU2_TR(0x6b22ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b22af:{NFSU2_TR(0x6b22af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b232a;}}
}
B6b22b1:L6b22b1:{c.instructions+=3;NFSU2_TR(0x6b22b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6b22b5:{NFSU2_TR(0x6b22b5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b22b8:{NFSU2_TR(0x6b22b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b232a;}}
}
B6b22ba:L6b22ba:{c.instructions+=3;NFSU2_TR(0x6b22ba);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b22bd:{NFSU2_TR(0x6b22bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b22c0:{NFSU2_TR(0x6b22c0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2322;}}
}
B6b22c2:L6b22c2:{c.instructions+=7;NFSU2_TR(0x6b22c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b22c5:{NFSU2_TR(0x6b22c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b22c8:{NFSU2_TR(0x6b22c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b22cb:{NFSU2_TR(0x6b22cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b22ce:{NFSU2_TR(0x6b22ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b22d1:{NFSU2_TR(0x6b22d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b22d4:{NFSU2_TR(0x6b22d4);
if(r1(R+518)){{goto L6b22e3;}}
}
B6b22d6:L6b22d6:{c.instructions+=4;NFSU2_TR(0x6b22d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b22d9:{NFSU2_TR(0x6b22d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b22dc:{NFSU2_TR(0x6b22dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6b22df:{NFSU2_TR(0x6b22df);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b22c2u);}goto L6b22c2;}}
}
B6b22e1:L6b22e1:{c.instructions+=1;NFSU2_TR(0x6b22e1);
{goto L6b2320;}
}
B6b22e3:L6b22e3:{c.instructions+=9;NFSU2_TR(0x6b22e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b22e4:{NFSU2_TR(0x6b22e4);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b22e6:{NFSU2_TR(0x6b22e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b22e7:{NFSU2_TR(0x6b22e7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b22ea:{NFSU2_TR(0x6b22ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b22eb:{NFSU2_TR(0x6b22eb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b22ed:{NFSU2_TR(0x6b22ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b22f3:{NFSU2_TR(0x6b22f3);
__builtin_memmove((R+4),(R+12),4);
}
B6b22f5:{NFSU2_TR(0x6b22f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b22faull));
TAIL_STATIC(0x699c39u,699);
}
B6b22fa:L6b22fa:{c.instructions+=2;NFSU2_TR(0x6b22fa);
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
B6b22fd:{NFSU2_TR(0x6b22fd);
if(r1(R+518)){{goto L6b2352;}}
}
B6b22ff:L6b22ff:{c.instructions+=11;NFSU2_TR(0x6b22ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2302:{NFSU2_TR(0x6b2302);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b2305:{NFSU2_TR(0x6b2305);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b2308:{NFSU2_TR(0x6b2308);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b230b:{NFSU2_TR(0x6b230b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b230e:{NFSU2_TR(0x6b230e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b2311:{NFSU2_TR(0x6b2311);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b2314:{NFSU2_TR(0x6b2314);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2317:{NFSU2_TR(0x6b2317);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b231a:{NFSU2_TR(0x6b231a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b231d:{NFSU2_TR(0x6b231d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b2320:L6b2320:{c.instructions+=1;NFSU2_TR(0x6b2320);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b2322:L6b2322:{c.instructions+=3;NFSU2_TR(0x6b2322);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2325:{NFSU2_TR(0x6b2325);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2328:{NFSU2_TR(0x6b2328);
if(r1(R+518)){{goto L6b2359;}}
}
B6b232a:L6b232a:{c.instructions+=4;NFSU2_TR(0x6b232a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b232d:{NFSU2_TR(0x6b232d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2330:{NFSU2_TR(0x6b2330);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b2333:{NFSU2_TR(0x6b2333);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b227cu);}goto L6b227c;}}
}
B6b2339:L6b2339:{c.instructions+=5;NFSU2_TR(0x6b2339);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b233c:{NFSU2_TR(0x6b233c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b233d:{NFSU2_TR(0x6b233d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b2340:{NFSU2_TR(0x6b2340);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2343:{NFSU2_TR(0x6b2343);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2262u);}goto L6b2262;}}
}
B6b2349:L6b2349:{c.instructions+=1;NFSU2_TR(0x6b2349);
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
B6b234b:L6b234b:{c.instructions+=5;NFSU2_TR(0x6b234b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b234c:{NFSU2_TR(0x6b234c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b234d:{NFSU2_TR(0x6b234d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b234e:{NFSU2_TR(0x6b234e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b234f:{NFSU2_TR(0x6b234f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b2352:L6b2352:{c.instructions+=2;NFSU2_TR(0x6b2352);
w4(R+0,u32(0x8007000eull));
}
B6b2357:{NFSU2_TR(0x6b2357);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b234bu);}goto L6b234b;}
}
B6b2359:L6b2359:{c.instructions+=5;NFSU2_TR(0x6b2359);
u8 U[4];
w4(U+0,u32(0x7bc240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b235e:{NFSU2_TR(0x6b235e);
u8 U[4];
w4(U+0,u32(0x12c2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2363:{NFSU2_TR(0x6b2363);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2364:{NFSU2_TR(0x6b2364);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2365:{NFSU2_TR(0x6b2365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b236aull));
TAIL_STATIC(0x69e936u,69e);
}
B6b236a:L6b236a:{c.instructions+=3;NFSU2_TR(0x6b236a);
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
B6b236d:{NFSU2_TR(0x6b236d);
w4(R+0,u32(0x80004005ull));
}
B6b2372:{NFSU2_TR(0x6b2372);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b234bu);}goto L6b234b;}
}
B6b2374:L6b2374:{c.instructions+=12;NFSU2_TR(0x6b2374);
__builtin_memmove((R+28),(R+28),4);
}
B6b2376:{NFSU2_TR(0x6b2376);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2377:{NFSU2_TR(0x6b2377);
__builtin_memmove((R+20),(R+16),4);
}
B6b2379:{NFSU2_TR(0x6b2379);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B6b237c:{NFSU2_TR(0x6b237c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b237d:{NFSU2_TR(0x6b237d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b237f:{NFSU2_TR(0x6b237f);
__builtin_memmove((R+12),(R+4),4);
}
B6b2381:{NFSU2_TR(0x6b2381);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2384:{NFSU2_TR(0x6b2384);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2385:{NFSU2_TR(0x6b2385);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2386:{NFSU2_TR(0x6b2386);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2389:{NFSU2_TR(0x6b2389);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2522;}}
}
B6b238f:L6b238f:{c.instructions+=5;NFSU2_TR(0x6b238f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2392:{NFSU2_TR(0x6b2392);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2395:{NFSU2_TR(0x6b2395);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b2398:{NFSU2_TR(0x6b2398);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b239a:{NFSU2_TR(0x6b239a);
if(r1(R+518)){{goto L6b2513;}}
}
B6b23a0:L6b23a0:{c.instructions+=2;NFSU2_TR(0x6b23a0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b23a4:{NFSU2_TR(0x6b23a4);
if(r1(R+518)){{goto L6b2513;}}
}
B6b23aa:L6b23aa:{c.instructions+=2;NFSU2_TR(0x6b23aa);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b23ac:{NFSU2_TR(0x6b23ac);
if(r1(R+518)){{goto L6b2513;}}
}
B6b23b2:L6b23b2:{c.instructions+=4;NFSU2_TR(0x6b23b2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b23b5:{NFSU2_TR(0x6b23b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b23b8:{NFSU2_TR(0x6b23b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b23bb:{NFSU2_TR(0x6b23bb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2513;}}
}
B6b23c1:L6b23c1:{c.instructions+=3;NFSU2_TR(0x6b23c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b23c4:{NFSU2_TR(0x6b23c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b23c7:{NFSU2_TR(0x6b23c7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2469;}}
}
B6b23cd:L6b23cd:{c.instructions+=8;NFSU2_TR(0x6b23cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b23d0:{NFSU2_TR(0x6b23d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b23d3:{NFSU2_TR(0x6b23d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b23d6:{NFSU2_TR(0x6b23d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b23d9:{NFSU2_TR(0x6b23d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b23dc:{NFSU2_TR(0x6b23dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b23df:{NFSU2_TR(0x6b23df);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b23e5:{NFSU2_TR(0x6b23e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b23f1;}}
}
B6b23e7:L6b23e7:{c.instructions+=2;NFSU2_TR(0x6b23e7);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6b23eb:{NFSU2_TR(0x6b23eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b252b;}}
}
B6b23f1:L6b23f1:{c.instructions+=5;NFSU2_TR(0x6b23f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b23f4:{NFSU2_TR(0x6b23f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b23f7:{NFSU2_TR(0x6b23f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b23fa:{NFSU2_TR(0x6b23fa);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b23fc:{NFSU2_TR(0x6b23fc);
if(r1(R+518)){{goto L6b2403;}}
}
B6b23fe:L6b23fe:{c.instructions+=2;NFSU2_TR(0x6b23fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2401:{NFSU2_TR(0x6b2401);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2458;}}
}
B6b2403:L6b2403:{c.instructions+=10;NFSU2_TR(0x6b2403);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b2405:{NFSU2_TR(0x6b2405);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2408:{NFSU2_TR(0x6b2408);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b240a:{NFSU2_TR(0x6b240a);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6b2410:{NFSU2_TR(0x6b2410);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b2410);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b2410);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6b2412:{NFSU2_TR(0x6b2412);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b2414:{NFSU2_TR(0x6b2414);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2417:{NFSU2_TR(0x6b2417);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2419:{NFSU2_TR(0x6b2419);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b241c:{NFSU2_TR(0x6b241c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b245a;}}
}
B6b241e:L6b241e:{c.instructions+=1;NFSU2_TR(0x6b241e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2421:L6b2421:{c.instructions+=8;NFSU2_TR(0x6b2421);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b2424:{NFSU2_TR(0x6b2424);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2427:{NFSU2_TR(0x6b2427);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b242a:{NFSU2_TR(0x6b242a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6b242d:{NFSU2_TR(0x6b242d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b242e:{NFSU2_TR(0x6b242e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b242f:{NFSU2_TR(0x6b242f);
__builtin_memmove((R+4),(R+12),4);
}
B6b2431:{NFSU2_TR(0x6b2431);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b2436ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2374u);}goto L6b2374;}
}
B6b2436:L6b2436:{c.instructions+=2;NFSU2_TR(0x6b2436);
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
B6b2438:{NFSU2_TR(0x6b2438);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b2524;}}
}
B6b243e:L6b243e:{c.instructions+=8;NFSU2_TR(0x6b243e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2441:{NFSU2_TR(0x6b2441);
__builtin_memmove((R+0),(R+28),4);
}
B6b2443:{NFSU2_TR(0x6b2443);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b2446:{NFSU2_TR(0x6b2446);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2449:{NFSU2_TR(0x6b2449);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b244c:{NFSU2_TR(0x6b244c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b244f:{NFSU2_TR(0x6b244f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2456:{NFSU2_TR(0x6b2456);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2421u);}goto L6b2421;}}
}
B6b2458:L6b2458:{c.instructions+=1;NFSU2_TR(0x6b2458);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b245a:L6b245a:{c.instructions+=4;NFSU2_TR(0x6b245a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b245d:{NFSU2_TR(0x6b245d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2460:{NFSU2_TR(0x6b2460);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b2463:{NFSU2_TR(0x6b2463);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b23cdu);}goto L6b23cd;}}
}
B6b2469:L6b2469:{c.instructions+=4;NFSU2_TR(0x6b2469);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b246c:{NFSU2_TR(0x6b246c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b246f:{NFSU2_TR(0x6b246f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b2472:{NFSU2_TR(0x6b2472);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b23c1u);}goto L6b23c1;}}
}
B6b2478:L6b2478:{c.instructions+=2;NFSU2_TR(0x6b2478);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b247b:{NFSU2_TR(0x6b247b);
if(r1(R+518)){{goto L6b2513;}}
}
B6b2481:L6b2481:{c.instructions+=5;NFSU2_TR(0x6b2481);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b2483:{NFSU2_TR(0x6b2483);
__builtin_memmove((R+4),(R+0),4);
}
B6b2485:{NFSU2_TR(0x6b2485);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6b248b:{NFSU2_TR(0x6b248b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2491:{NFSU2_TR(0x6b2491);
if(r1(R+518)){{goto L6b24c3;}}
}
B6b2493:L6b2493:{c.instructions+=2;NFSU2_TR(0x6b2493);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2499:{NFSU2_TR(0x6b2499);
if(r1(R+518)){{goto L6b24c3;}}
}
B6b249b:L6b249b:{c.instructions+=2;NFSU2_TR(0x6b249b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60a00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b24a1:{NFSU2_TR(0x6b24a1);
if(r1(R+518)){{goto L6b24c3;}}
}
B6b24a3:L6b24a3:{c.instructions+=2;NFSU2_TR(0x6b24a3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60f00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b24a9:{NFSU2_TR(0x6b24a9);
if(r1(R+518)){{goto L6b24c3;}}
}
B6b24ab:L6b24ab:{c.instructions+=2;NFSU2_TR(0x6b24ab);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72c00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b24b1:{NFSU2_TR(0x6b24b1);
if(r1(R+518)){{goto L6b24c3;}}
}
B6b24b3:L6b24b3:{c.instructions+=2;NFSU2_TR(0x6b24b3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72d00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b24b9:{NFSU2_TR(0x6b24b9);
if(r1(R+518)){{goto L6b24c3;}}
}
B6b24bb:L6b24bb:{c.instructions+=2;NFSU2_TR(0x6b24bb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b24c1:{NFSU2_TR(0x6b24c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b24f6;}}
}
B6b24c3:L6b24c3:{c.instructions+=5;NFSU2_TR(0x6b24c3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6b24c8:{NFSU2_TR(0x6b24c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6b24cb:{NFSU2_TR(0x6b24cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6b24cd:{NFSU2_TR(0x6b24cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b24d0:{NFSU2_TR(0x6b24d0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b24f6;}}
}
B6b24d2:L6b24d2:{c.instructions+=2;NFSU2_TR(0x6b24d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b24d5:{NFSU2_TR(0x6b24d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6b24d8:L6b24d8:{c.instructions+=6;NFSU2_TR(0x6b24d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b24db:{NFSU2_TR(0x6b24db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b24dd:{NFSU2_TR(0x6b24dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b24e0:{NFSU2_TR(0x6b24e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b24e6:{NFSU2_TR(0x6b24e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b24e9:{NFSU2_TR(0x6b24e9);
if(r1(R+518)){{goto L6b2537;}}
}
B6b24eb:L6b24eb:{c.instructions+=4;NFSU2_TR(0x6b24eb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b24ec:{NFSU2_TR(0x6b24ec);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6b24ef:{NFSU2_TR(0x6b24ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b24f2:{NFSU2_TR(0x6b24f2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b24d8u);}goto L6b24d8;}}
}
B6b24f4:L6b24f4:{c.instructions+=1;NFSU2_TR(0x6b24f4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b24f6:L6b24f6:{c.instructions+=9;NFSU2_TR(0x6b24f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b24f9:{NFSU2_TR(0x6b24f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b24fb:{NFSU2_TR(0x6b24fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b24fe:{NFSU2_TR(0x6b24fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b2501:{NFSU2_TR(0x6b2501);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2504:{NFSU2_TR(0x6b2504);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b2507:{NFSU2_TR(0x6b2507);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b250a:{NFSU2_TR(0x6b250a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2511:{NFSU2_TR(0x6b2511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6b2513:L6b2513:{c.instructions+=4;NFSU2_TR(0x6b2513);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2516:{NFSU2_TR(0x6b2516);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2519:{NFSU2_TR(0x6b2519);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b251c:{NFSU2_TR(0x6b251c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b238fu);}goto L6b238f;}}
}
B6b2522:L6b2522:{c.instructions+=1;NFSU2_TR(0x6b2522);
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
B6b2524:L6b2524:{c.instructions+=5;NFSU2_TR(0x6b2524);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b2525:{NFSU2_TR(0x6b2525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b2526:{NFSU2_TR(0x6b2526);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b2527:{NFSU2_TR(0x6b2527);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b2528:{NFSU2_TR(0x6b2528);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b252b:L6b252b:{c.instructions+=3;NFSU2_TR(0x6b252b);
u8 U[4];
w4(U+0,u32(0x7bc2b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2530:{NFSU2_TR(0x6b2530);
u8 U[4];
w4(U+0,u32(0x11a1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2535:{NFSU2_TR(0x6b2535);
{goto L6b2541;}
}
B6b2537:L6b2537:{c.instructions+=2;NFSU2_TR(0x6b2537);
u8 U[4];
w4(U+0,u32(0x7bc274ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b253c:{NFSU2_TR(0x6b253c);
u8 U[4];
w4(U+0,u32(0x11b6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2541:L6b2541:{c.instructions+=3;NFSU2_TR(0x6b2541);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b2544:{NFSU2_TR(0x6b2544);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2545:{NFSU2_TR(0x6b2545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b254aull));
TAIL_STATIC(0x69e936u,69e);
}
B6b254a:L6b254a:{c.instructions+=3;NFSU2_TR(0x6b254a);
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
B6b254d:{NFSU2_TR(0x6b254d);
w4(R+0,u32(0x80004005ull));
}
B6b2552:{NFSU2_TR(0x6b2552);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2524u);}goto L6b2524;}
}
B6b2554:L6b2554:{c.instructions+=14;NFSU2_TR(0x6b2554);
__builtin_memmove((R+28),(R+28),4);
}
B6b2556:{NFSU2_TR(0x6b2556);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2557:{NFSU2_TR(0x6b2557);
__builtin_memmove((R+20),(R+16),4);
}
B6b2559:{NFSU2_TR(0x6b2559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B6b255c:{NFSU2_TR(0x6b255c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b255f:{NFSU2_TR(0x6b255f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2560:{NFSU2_TR(0x6b2560);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2561:{NFSU2_TR(0x6b2561);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2562:{NFSU2_TR(0x6b2562);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b2564:{NFSU2_TR(0x6b2564);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2567:{NFSU2_TR(0x6b2567);
__builtin_memmove((R+12),(R+4),4);
}
B6b2569:{NFSU2_TR(0x6b2569);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b256b:{NFSU2_TR(0x6b256b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b256c:{NFSU2_TR(0x6b256c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b256f:L6b256f:{c.instructions+=1;NFSU2_TR(0x6b256f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b2571;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b256fu);}goto L6b256f;}
}
B6b2571:L6b2571:{c.instructions+=4;NFSU2_TR(0x6b2571);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2574:{NFSU2_TR(0x6b2574);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6b2577:{NFSU2_TR(0x6b2577);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b2579:{NFSU2_TR(0x6b2579);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b267b;}}
}
B6b257f:L6b257f:{c.instructions+=5;NFSU2_TR(0x6b257f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b2582:{NFSU2_TR(0x6b2582);
__builtin_memmove((R+0),(R+8),4);
}
B6b2584:{NFSU2_TR(0x6b2584);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b2587:{NFSU2_TR(0x6b2587);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B6b2589:{NFSU2_TR(0x6b2589);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b258c:L6b258c:{c.instructions+=3;NFSU2_TR(0x6b258c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b258f:{NFSU2_TR(0x6b258f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6b2591:{NFSU2_TR(0x6b2591);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b259b;}}
}
B6b2593:L6b2593:{c.instructions+=3;NFSU2_TR(0x6b2593);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2596:{NFSU2_TR(0x6b2596);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b2599:{NFSU2_TR(0x6b2599);
{goto L6b259d;}
}
B6b259b:L6b259b:{c.instructions+=1;NFSU2_TR(0x6b259b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b259d:L6b259d:{c.instructions+=2;NFSU2_TR(0x6b259d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b259f:{NFSU2_TR(0x6b259f);
if(r1(R+518)){{goto L6b2669;}}
}
B6b25a5:L6b25a5:{c.instructions+=3;NFSU2_TR(0x6b25a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b25a7:{NFSU2_TR(0x6b25a7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6b25ad:{NFSU2_TR(0x6b25ad);
if(r1(R+518)){{goto L6b2669;}}
}
B6b25b3:L6b25b3:{c.instructions+=2;NFSU2_TR(0x6b25b3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b25b7:{NFSU2_TR(0x6b25b7);
if(r1(R+518)){{goto L6b2669;}}
}
B6b25bd:L6b25bd:{c.instructions+=2;NFSU2_TR(0x6b25bd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b25c3:{NFSU2_TR(0x6b25c3);
if(r1(R+518)){{goto L6b25f5;}}
}
B6b25c5:L6b25c5:{c.instructions+=2;NFSU2_TR(0x6b25c5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b25cb:{NFSU2_TR(0x6b25cb);
if(r1(R+518)){{goto L6b25f5;}}
}
B6b25cd:L6b25cd:{c.instructions+=2;NFSU2_TR(0x6b25cd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60a00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b25d3:{NFSU2_TR(0x6b25d3);
if(r1(R+518)){{goto L6b25f5;}}
}
B6b25d5:L6b25d5:{c.instructions+=2;NFSU2_TR(0x6b25d5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60f00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b25db:{NFSU2_TR(0x6b25db);
if(r1(R+518)){{goto L6b25f5;}}
}
B6b25dd:L6b25dd:{c.instructions+=2;NFSU2_TR(0x6b25dd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b25e3:{NFSU2_TR(0x6b25e3);
if(r1(R+518)){{goto L6b25f5;}}
}
B6b25e5:L6b25e5:{c.instructions+=2;NFSU2_TR(0x6b25e5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72c00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b25eb:{NFSU2_TR(0x6b25eb);
if(r1(R+518)){{goto L6b25f5;}}
}
B6b25ed:L6b25ed:{c.instructions+=2;NFSU2_TR(0x6b25ed);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72d00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b25f3:{NFSU2_TR(0x6b25f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b25fa;}}
}
B6b25f5:L6b25f5:{c.instructions+=2;NFSU2_TR(0x6b25f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6b25f8:{NFSU2_TR(0x6b25f8);
if(r1(R+512)){{goto L6b2669;}}
}
B6b25fa:L6b25fa:{c.instructions+=5;NFSU2_TR(0x6b25fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b25fd:{NFSU2_TR(0x6b25fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2601:{NFSU2_TR(0x6b2601);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b2603:{NFSU2_TR(0x6b2603);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2606:{NFSU2_TR(0x6b2606);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2669;}}
}
B6b2608:L6b2608:{c.instructions+=1;NFSU2_TR(0x6b2608);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b260b:L6b260b:{c.instructions+=6;NFSU2_TR(0x6b260b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b260d:{NFSU2_TR(0x6b260d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2610:{NFSU2_TR(0x6b2610);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b2613:{NFSU2_TR(0x6b2613);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2619:{NFSU2_TR(0x6b2619);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b261c:{NFSU2_TR(0x6b261c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2655;}}
}
B6b261e:L6b261e:{c.instructions+=3;NFSU2_TR(0x6b261e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6b2622:{NFSU2_TR(0x6b2622);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x5ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2625:{NFSU2_TR(0x6b2625);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6b2663;}}
}
B6b2627:L6b2627:{c.instructions+=2;NFSU2_TR(0x6b2627);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6b262b:{NFSU2_TR(0x6b262b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2655;}}
}
B6b262d:L6b262d:{c.instructions+=4;NFSU2_TR(0x6b262d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b2630:{NFSU2_TR(0x6b2630);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6b2633:{NFSU2_TR(0x6b2633);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6b2637:{NFSU2_TR(0x6b2637);
if(r1(R+512)){{goto L6b264b;}}
}
B6b2639:L6b2639:{c.instructions+=4;NFSU2_TR(0x6b2639);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b263c:{NFSU2_TR(0x6b263c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b263d:{NFSU2_TR(0x6b263d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+4))));
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b263f:{NFSU2_TR(0x6b263f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2655;}}
}
B6b2641:L6b2641:{c.instructions+=2;NFSU2_TR(0x6b2641);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2645:{NFSU2_TR(0x6b2645);
if(r1(R+518)){{goto L6b2655;}}
}
B6b2647:L6b2647:{c.instructions+=2;NFSU2_TR(0x6b2647);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b2649:{NFSU2_TR(0x6b2649);
{goto L6b2655;}
}
B6b264b:L6b264b:{c.instructions+=4;NFSU2_TR(0x6b264b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b264e:{NFSU2_TR(0x6b264e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b264f:{NFSU2_TR(0x6b264f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b2651:{NFSU2_TR(0x6b2651);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2655;}}
}
B6b2653:L6b2653:{c.instructions+=1;NFSU2_TR(0x6b2653);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b2655:L6b2655:{c.instructions+=5;NFSU2_TR(0x6b2655);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2658:{NFSU2_TR(0x6b2658);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b265b:{NFSU2_TR(0x6b265b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6b265e:{NFSU2_TR(0x6b265e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b2661:{NFSU2_TR(0x6b2661);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b260bu);}goto L6b260b;}}
}
B6b2663:L6b2663:{c.instructions+=2;NFSU2_TR(0x6b2663);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b2666:{NFSU2_TR(0x6b2666);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b2669:L6b2669:{c.instructions+=5;NFSU2_TR(0x6b2669);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b266c:{NFSU2_TR(0x6b266c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6b266f:{NFSU2_TR(0x6b266f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6b2672:{NFSU2_TR(0x6b2672);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2675:{NFSU2_TR(0x6b2675);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b258cu);}goto L6b258c;}}
}
B6b267b:L6b267b:{c.instructions+=3;NFSU2_TR(0x6b267b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b267f:{NFSU2_TR(0x6b267f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2683:{NFSU2_TR(0x6b2683);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b27f7;}}
}
B6b2689:L6b2689:{c.instructions+=5;NFSU2_TR(0x6b2689);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b268c:{NFSU2_TR(0x6b268c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b268f:{NFSU2_TR(0x6b268f);
__builtin_memmove((R+4),(R+28),4);
}
B6b2691:{NFSU2_TR(0x6b2691);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6b2693:{NFSU2_TR(0x6b2693);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2696:L6b2696:{c.instructions+=3;NFSU2_TR(0x6b2696);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6b2698:{NFSU2_TR(0x6b2698);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b269a:{NFSU2_TR(0x6b269a);
if(r1(R+518)){{goto L6b27e5;}}
}
B6b26a0:L6b26a0:{c.instructions+=2;NFSU2_TR(0x6b26a0);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b26a2:{NFSU2_TR(0x6b26a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b26a7ull));
TAIL_STATIC(0x699317u,699);
}
B6b26a7:L6b26a7:{c.instructions+=2;NFSU2_TR(0x6b26a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b26a9:{NFSU2_TR(0x6b26a9);
if(r1(R+518)){{goto L6b26b4;}}
}
B6b26ab:L6b26ab:{c.instructions+=2;NFSU2_TR(0x6b26ab);
__builtin_memmove((R+4),(R+0),4);
}
B6b26ad:{NFSU2_TR(0x6b26ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b26b2ull));
TAIL_STATIC(0x698e7du,698);
}
B6b26b2:L6b26b2:{c.instructions+=1;NFSU2_TR(0x6b26b2);
{goto L6b26b6;}
}
B6b26b4:L6b26b4:{c.instructions+=1;NFSU2_TR(0x6b26b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b26b6:L6b26b6:{c.instructions+=3;NFSU2_TR(0x6b26b6);
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
B6b26b8:{NFSU2_TR(0x6b26b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b26bb:{NFSU2_TR(0x6b26bb);
if(r1(R+518)){{goto L6b2ceb;}}
}
B6b26c1:L6b26c1:{c.instructions+=8;NFSU2_TR(0x6b26c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b26c3:{NFSU2_TR(0x6b26c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b26c4:{NFSU2_TR(0x6b26c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b26c5:{NFSU2_TR(0x6b26c5);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6b26cb:{NFSU2_TR(0x6b26cb);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x72100000ull))));
}
B6b26d1:{NFSU2_TR(0x6b26d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b26d2:{NFSU2_TR(0x6b26d2);
__builtin_memmove((R+4),(R+0),4);
}
B6b26d4:{NFSU2_TR(0x6b26d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b26d9ull));
TAIL_STATIC(0x699362u,699);
}
B6b26d9:L6b26d9:{c.instructions+=2;NFSU2_TR(0x6b26d9);
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
B6b26db:{NFSU2_TR(0x6b26db);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b281e;}}
}
B6b26e1:L6b26e1:{c.instructions+=3;NFSU2_TR(0x6b26e1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b26e3:{NFSU2_TR(0x6b26e3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+24))));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b26e5:{NFSU2_TR(0x6b26e5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2734;}}
}
B6b26e7:L6b26e7:{c.instructions+=9;NFSU2_TR(0x6b26e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b26e8:{NFSU2_TR(0x6b26e8);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b26ea:{NFSU2_TR(0x6b26ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b26eb:{NFSU2_TR(0x6b26eb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b26ee:{NFSU2_TR(0x6b26ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b26ef:{NFSU2_TR(0x6b26ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b26f2:{NFSU2_TR(0x6b26f2);
__builtin_memmove((R+4),(R+12),4);
}
B6b26f4:{NFSU2_TR(0x6b26f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b26fa:{NFSU2_TR(0x6b26fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b26ffull));
TAIL_STATIC(0x699c39u,699);
}
B6b26ff:L6b26ff:{c.instructions+=3;NFSU2_TR(0x6b26ff);
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
B6b2702:{NFSU2_TR(0x6b2702);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b2706:{NFSU2_TR(0x6b2706);
if(r1(R+518)){{goto L6b2822;}}
}
B6b270c:L6b270c:{c.instructions+=14;NFSU2_TR(0x6b270c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b270f:{NFSU2_TR(0x6b270f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2712:{NFSU2_TR(0x6b2712);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b2715:{NFSU2_TR(0x6b2715);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2718:{NFSU2_TR(0x6b2718);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b271b:{NFSU2_TR(0x6b271b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b271e:{NFSU2_TR(0x6b271e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2722:{NFSU2_TR(0x6b2722);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2726:{NFSU2_TR(0x6b2726);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b2729:{NFSU2_TR(0x6b2729);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x3ull))));
}
B6b272c:{NFSU2_TR(0x6b272c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b272d:{NFSU2_TR(0x6b272d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+4))));
}
B6b272f:{NFSU2_TR(0x6b272f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2732:{NFSU2_TR(0x6b2732);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b26e7u);}goto L6b26e7;}}
}
B6b2734:L6b2734:{c.instructions+=10;NFSU2_TR(0x6b2734);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6b2736:{NFSU2_TR(0x6b2736);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b2739:{NFSU2_TR(0x6b2739);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b273a:{NFSU2_TR(0x6b273a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b273b:{NFSU2_TR(0x6b273b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b273e:{NFSU2_TR(0x6b273e);
__builtin_memmove((R+4),(R+12),4);
}
B6b2740:{NFSU2_TR(0x6b2740);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2742:{NFSU2_TR(0x6b2742);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b2745:{NFSU2_TR(0x6b2745);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b2748:{NFSU2_TR(0x6b2748);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b274dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b20eeu);}goto L6b20ee;}
}
B6b274d:L6b274d:{c.instructions+=2;NFSU2_TR(0x6b274d);
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
B6b274f:{NFSU2_TR(0x6b274f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b281e;}}
}
B6b2755:L6b2755:{c.instructions+=9;NFSU2_TR(0x6b2755);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b2758:{NFSU2_TR(0x6b2758);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2759:{NFSU2_TR(0x6b2759);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b275a:{NFSU2_TR(0x6b275a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b275d:{NFSU2_TR(0x6b275d);
__builtin_memmove((R+4),(R+12),4);
}
B6b275f:{NFSU2_TR(0x6b275f);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2761:{NFSU2_TR(0x6b2761);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b2764:{NFSU2_TR(0x6b2764);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b2767:{NFSU2_TR(0x6b2767);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b276cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2245u);}goto L6b2245;}
}
B6b276c:L6b276c:{c.instructions+=2;NFSU2_TR(0x6b276c);
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
B6b276e:{NFSU2_TR(0x6b276e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b281e;}}
}
B6b2774:L6b2774:{c.instructions+=3;NFSU2_TR(0x6b2774);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b2776:{NFSU2_TR(0x6b2776);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+24))));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b2778:{NFSU2_TR(0x6b2778);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b27c3;}}
}
B6b277a:L6b277a:{c.instructions+=9;NFSU2_TR(0x6b277a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b277b:{NFSU2_TR(0x6b277b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b277d:{NFSU2_TR(0x6b277d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b277e:{NFSU2_TR(0x6b277e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b2781:{NFSU2_TR(0x6b2781);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2782:{NFSU2_TR(0x6b2782);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b2785:{NFSU2_TR(0x6b2785);
__builtin_memmove((R+4),(R+12),4);
}
B6b2787:{NFSU2_TR(0x6b2787);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b278d:{NFSU2_TR(0x6b278d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b2792ull));
TAIL_STATIC(0x699c39u,699);
}
B6b2792:L6b2792:{c.instructions+=3;NFSU2_TR(0x6b2792);
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
B6b2795:{NFSU2_TR(0x6b2795);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b2799:{NFSU2_TR(0x6b2799);
if(r1(R+518)){{goto L6b2822;}}
}
B6b279f:L6b279f:{c.instructions+=13;NFSU2_TR(0x6b279f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b27a2:{NFSU2_TR(0x6b27a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b27a5:{NFSU2_TR(0x6b27a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b27a8:{NFSU2_TR(0x6b27a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b27ac:{NFSU2_TR(0x6b27ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6b27af:{NFSU2_TR(0x6b27af);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x3ull))));
}
B6b27b2:{NFSU2_TR(0x6b27b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b27b5:{NFSU2_TR(0x6b27b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b27b8:{NFSU2_TR(0x6b27b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b27bb:{NFSU2_TR(0x6b27bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b27be:{NFSU2_TR(0x6b27be);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b27bf:{NFSU2_TR(0x6b27bf);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+4))));
}
B6b27c1:{NFSU2_TR(0x6b27c1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b277au);}goto L6b277a;}}
}
B6b27c3:L6b27c3:{c.instructions+=4;NFSU2_TR(0x6b27c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b27c6:{NFSU2_TR(0x6b27c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6b27c9:{NFSU2_TR(0x6b27c9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b27cc:{NFSU2_TR(0x6b27cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2829;}}
}
B6b27ce:L6b27ce:{c.instructions+=3;NFSU2_TR(0x6b27ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b27d1:{NFSU2_TR(0x6b27d1);
__builtin_memmove((R+4),(R+12),4);
}
B6b27d3:{NFSU2_TR(0x6b27d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b27d8ull));
TAIL_STATIC(0x699b26u,699);
}
B6b27d8:L6b27d8:{c.instructions+=2;NFSU2_TR(0x6b27d8);
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
B6b27da:{NFSU2_TR(0x6b27da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b2ce4;}}
}
B6b27e0:L6b27e0:{c.instructions+=2;NFSU2_TR(0x6b27e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b27e3:{NFSU2_TR(0x6b27e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6b27e5:L6b27e5:{c.instructions+=5;NFSU2_TR(0x6b27e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b27e8:{NFSU2_TR(0x6b27e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b27eb:{NFSU2_TR(0x6b27eb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6b27ee:{NFSU2_TR(0x6b27ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b27f1:{NFSU2_TR(0x6b27f1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2696u);}goto L6b2696;}}
}
B6b27f7:L6b27f7:{c.instructions+=1;NFSU2_TR(0x6b27f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b27fe:L6b27fe:{c.instructions+=3;NFSU2_TR(0x6b27fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2802:{NFSU2_TR(0x6b2802);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2806:{NFSU2_TR(0x6b2806);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2bb5;}}
}
B6b280c:L6b280c:{c.instructions+=7;NFSU2_TR(0x6b280c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b280f:{NFSU2_TR(0x6b280f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b2812:{NFSU2_TR(0x6b2812);
__builtin_memmove((R+4),(R+0),4);
}
B6b2814:{NFSU2_TR(0x6b2814);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2817:{NFSU2_TR(0x6b2817);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6b2819:{NFSU2_TR(0x6b2819);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b281c:{NFSU2_TR(0x6b281c);
{goto L6b2863;}
}
B6b281e:L6b281e:{c.instructions+=2;NFSU2_TR(0x6b281e);
__builtin_memmove((R+24),(R+0),4);
}
B6b2820:{NFSU2_TR(0x6b2820);
{goto L6b284f;}
}
B6b2822:L6b2822:{c.instructions+=2;NFSU2_TR(0x6b2822);
w4(R+24,u32(0x8007000eull));
}
B6b2827:{NFSU2_TR(0x6b2827);
{goto L6b284f;}
}
B6b2829:L6b2829:{c.instructions+=8;NFSU2_TR(0x6b2829);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b282f:{NFSU2_TR(0x6b282f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6b2834:{NFSU2_TR(0x6b2834);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2835:{NFSU2_TR(0x6b2835);
u8 U[4];
w4(U+0,u32(0x7bc598ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b283a:{NFSU2_TR(0x6b283a);
u8 U[4];
w4(U+0,u32(0x11a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b283f:{NFSU2_TR(0x6b283f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2841:{NFSU2_TR(0x6b2841);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2842:{NFSU2_TR(0x6b2842);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b2847ull));
TAIL_STATIC(0x69e936u,69e);
}
B6b2847:L6b2847:{c.instructions+=2;NFSU2_TR(0x6b2847);
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
B6b284a:{NFSU2_TR(0x6b284a);
w4(R+24,u32(0x80004005ull));
}
B6b284f:L6b284f:{c.instructions+=3;NFSU2_TR(0x6b284f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2852:{NFSU2_TR(0x6b2852);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2854:{NFSU2_TR(0x6b2854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b2859ull));
TAIL_STATIC(0x6739efu,673);
}
B6b2859:L6b2859:{c.instructions+=2;NFSU2_TR(0x6b2859);
__builtin_memmove((R+0),(R+24),4);
}
B6b285b:{NFSU2_TR(0x6b285b);
{goto L6b2ce4;}
}
B6b2860:L6b2860:{c.instructions+=1;NFSU2_TR(0x6b2860);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2863:L6b2863:{c.instructions+=3;NFSU2_TR(0x6b2863);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2866:{NFSU2_TR(0x6b2866);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x200ull))));
}
B6b286c:{NFSU2_TR(0x6b286c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b2bfc;}}
}
B6b2872:L6b2872:{c.instructions+=2;NFSU2_TR(0x6b2872);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6b2875:{NFSU2_TR(0x6b2875);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b287f;}}
}
B6b2877:L6b2877:{c.instructions+=3;NFSU2_TR(0x6b2877);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b287a:{NFSU2_TR(0x6b287a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b287d:{NFSU2_TR(0x6b287d);
{goto L6b2881;}
}
B6b287f:L6b287f:{c.instructions+=1;NFSU2_TR(0x6b287f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b2881:L6b2881:{c.instructions+=2;NFSU2_TR(0x6b2881);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b2883:{NFSU2_TR(0x6b2883);
if(r1(R+518)){{goto L6b2ba2;}}
}
B6b2889:L6b2889:{c.instructions+=2;NFSU2_TR(0x6b2889);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b288d:{NFSU2_TR(0x6b288d);
if(r1(R+518)){{goto L6b2ba2;}}
}
B6b2893:L6b2893:{c.instructions+=5;NFSU2_TR(0x6b2893);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b2895:{NFSU2_TR(0x6b2895);
__builtin_memmove((R+4),(R+0),4);
}
B6b2897:{NFSU2_TR(0x6b2897);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6b289d:{NFSU2_TR(0x6b289d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b28a3:{NFSU2_TR(0x6b28a3);
if(r1(R+518)){{goto L6b28d9;}}
}
B6b28a5:L6b28a5:{c.instructions+=2;NFSU2_TR(0x6b28a5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b28ab:{NFSU2_TR(0x6b28ab);
if(r1(R+518)){{goto L6b28d9;}}
}
B6b28ad:L6b28ad:{c.instructions+=2;NFSU2_TR(0x6b28ad);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60a00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b28b3:{NFSU2_TR(0x6b28b3);
if(r1(R+518)){{goto L6b28d9;}}
}
B6b28b5:L6b28b5:{c.instructions+=2;NFSU2_TR(0x6b28b5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60f00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b28bb:{NFSU2_TR(0x6b28bb);
if(r1(R+518)){{goto L6b28d9;}}
}
B6b28bd:L6b28bd:{c.instructions+=2;NFSU2_TR(0x6b28bd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b28c3:{NFSU2_TR(0x6b28c3);
if(r1(R+518)){{goto L6b28d9;}}
}
B6b28c5:L6b28c5:{c.instructions+=2;NFSU2_TR(0x6b28c5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72c00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b28cb:{NFSU2_TR(0x6b28cb);
if(r1(R+518)){{goto L6b28d9;}}
}
B6b28cd:L6b28cd:{c.instructions+=2;NFSU2_TR(0x6b28cd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72d00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b28d3:{NFSU2_TR(0x6b28d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2ba2;}}
}
B6b28d9:L6b28d9:{c.instructions+=4;NFSU2_TR(0x6b28d9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6b28de:{NFSU2_TR(0x6b28de);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b28e4:{NFSU2_TR(0x6b28e4);
__builtin_memmove((R+24),(R+0),4);
}
B6b28e6:{NFSU2_TR(0x6b28e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b28ea;}}
}
B6b28e8:L6b28e8:{c.instructions+=1;NFSU2_TR(0x6b28e8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b28ea:L6b28ea:{c.instructions+=6;NFSU2_TR(0x6b28ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b28ec:{NFSU2_TR(0x6b28ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b28ef:{NFSU2_TR(0x6b28ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b28f2:{NFSU2_TR(0x6b28f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b28f5:{NFSU2_TR(0x6b28f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b28f8:{NFSU2_TR(0x6b28f8);
if(r1(R+518)){{goto L6b28ff;}}
}
B6b28fa:L6b28fa:{c.instructions+=2;NFSU2_TR(0x6b28fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b28fc:{NFSU2_TR(0x6b28fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b28ff:L6b28ff:{c.instructions+=4;NFSU2_TR(0x6b28ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2902:{NFSU2_TR(0x6b2902);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2908:{NFSU2_TR(0x6b2908);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b290b:{NFSU2_TR(0x6b290b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2a1c;}}
}
B6b2911:L6b2911:{c.instructions+=4;NFSU2_TR(0x6b2911);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2917:{NFSU2_TR(0x6b2917);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b291c:{NFSU2_TR(0x6b291c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b2921:{NFSU2_TR(0x6b2921);
if(r1(R+518)){{goto L6b2a1c;}}
}
B6b2927:L6b2927:{c.instructions+=2;NFSU2_TR(0x6b2927);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b292b:{NFSU2_TR(0x6b292b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2a1c;}}
}
B6b2931:L6b2931:{c.instructions+=4;NFSU2_TR(0x6b2931);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6b2935:{NFSU2_TR(0x6b2935);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B6b2938:{NFSU2_TR(0x6b2938);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b293b:{NFSU2_TR(0x6b293b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b2bb5;}}
}
B6b2941:L6b2941:{c.instructions+=2;NFSU2_TR(0x6b2941);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b2943:{NFSU2_TR(0x6b2943);
if(r1(R+518)){{goto L6b297e;}}
}
B6b2945:L6b2945:{c.instructions+=5;NFSU2_TR(0x6b2945);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2948:{NFSU2_TR(0x6b2948);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b294b:{NFSU2_TR(0x6b294b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b294e:{NFSU2_TR(0x6b294e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x840ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6b2954:{NFSU2_TR(0x6b2954);
if(r1(R+518)){{goto L6b297b;}}
}
B6b2956:L6b2956:{c.instructions+=2;NFSU2_TR(0x6b2956);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2959:{NFSU2_TR(0x6b2959);
if(r1(R+518)){{goto L6b297e;}}
}
B6b295b:L6b295b:{c.instructions+=3;NFSU2_TR(0x6b295b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b295f:{NFSU2_TR(0x6b295f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2965:{NFSU2_TR(0x6b2965);
if(r1(R+518)){{goto L6b2c08;}}
}
B6b296b:L6b296b:{c.instructions+=4;NFSU2_TR(0x6b296b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6b2970:{NFSU2_TR(0x6b2970);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2971:{NFSU2_TR(0x6b2971);
u8 U[4];
w4(U+0,u32(0x7bc520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2976:{NFSU2_TR(0x6b2976);
{goto L6b2c13;}
}
B6b297b:L6b297b:{c.instructions+=1;NFSU2_TR(0x6b297b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b297e:L6b297e:{c.instructions+=3;NFSU2_TR(0x6b297e);
u8 U[12];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6b2985:{NFSU2_TR(0x6b2985);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b2988:{NFSU2_TR(0x6b2988);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2c26;}}
}
B6b298e:L6b298e:{c.instructions+=5;NFSU2_TR(0x6b298e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b2991:{NFSU2_TR(0x6b2991);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6b2994:{NFSU2_TR(0x6b2994);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b2997:{NFSU2_TR(0x6b2997);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b299a:{NFSU2_TR(0x6b299a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2c26;}}
}
B6b29a0:L6b29a0:{c.instructions+=2;NFSU2_TR(0x6b29a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b29a2:{NFSU2_TR(0x6b29a2);
if(r1(R+518)){{goto L6b2a15;}}
}
B6b29a4:L6b29a4:{c.instructions+=15;NFSU2_TR(0x6b29a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b29a7:{NFSU2_TR(0x6b29a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b29aa:{NFSU2_TR(0x6b29aa);
u8 U[16];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b29b1:{NFSU2_TR(0x6b29b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b29b4:{NFSU2_TR(0x6b29b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b29b6:{NFSU2_TR(0x6b29b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b29b7:{NFSU2_TR(0x6b29b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b29b9:{NFSU2_TR(0x6b29b9);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6b29bc:{NFSU2_TR(0x6b29bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b29bd:{NFSU2_TR(0x6b29bd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b29c0:{NFSU2_TR(0x6b29c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b29c3:{NFSU2_TR(0x6b29c3);
__builtin_memmove((R+4),(R+12),4);
}
B6b29c5:{NFSU2_TR(0x6b29c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b29c8:{NFSU2_TR(0x6b29c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b29cb:{NFSU2_TR(0x6b29cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b29d0ull));
TAIL_STATIC(0x699c39u,699);
}
B6b29d0:L6b29d0:{c.instructions+=3;NFSU2_TR(0x6b29d0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b29d2:{NFSU2_TR(0x6b29d2);
u8 U[8];
w1(R+512,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b29d8:{NFSU2_TR(0x6b29d8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b29ed;}}
}
B6b29da:L6b29da:{c.instructions+=7;NFSU2_TR(0x6b29da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b29dd:{NFSU2_TR(0x6b29dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b29e0:{NFSU2_TR(0x6b29e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b29e2:{NFSU2_TR(0x6b29e2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b29e3:{NFSU2_TR(0x6b29e3);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B6b29e9:{NFSU2_TR(0x6b29e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6b29eb:{NFSU2_TR(0x6b29eb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b29dau);}goto L6b29da;}}
}
B6b29ed:L6b29ed:{c.instructions+=6;NFSU2_TR(0x6b29ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b29f0:{NFSU2_TR(0x6b29f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b29f3:{NFSU2_TR(0x6b29f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b29f4:{NFSU2_TR(0x6b29f4);
__builtin_memmove((R+4),(R+0),4);
}
B6b29f6:{NFSU2_TR(0x6b29f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b29f9:{NFSU2_TR(0x6b29f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b29feull));
TAIL_STATIC(0x699765u,699);
}
B6b29fe:L6b29fe:{c.instructions+=6;NFSU2_TR(0x6b29fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2a01:{NFSU2_TR(0x6b2a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2a04:{NFSU2_TR(0x6b2a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2a07:{NFSU2_TR(0x6b2a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2a0a:{NFSU2_TR(0x6b2a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2a11:{NFSU2_TR(0x6b2a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2a15:L6b2a15:{c.instructions+=2;NFSU2_TR(0x6b2a15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b2a17:{NFSU2_TR(0x6b2a17);
{goto L6b2b92;}
}
B6b2a1c:L6b2a1c:{c.instructions+=2;NFSU2_TR(0x6b2a1c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2a20:{NFSU2_TR(0x6b2a20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2ba2;}}
}
B6b2a26:L6b2a26:{c.instructions+=2;NFSU2_TR(0x6b2a26);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b2a28:{NFSU2_TR(0x6b2a28);
if(r1(R+518)){{goto L6b2ab3;}}
}
B6b2a2e:L6b2a2e:{c.instructions+=7;NFSU2_TR(0x6b2a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2a31:{NFSU2_TR(0x6b2a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b2a34:{NFSU2_TR(0x6b2a34);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b2a37:{NFSU2_TR(0x6b2a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2a3a:{NFSU2_TR(0x6b2a3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B6b2a3d:{NFSU2_TR(0x6b2a3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2a40:{NFSU2_TR(0x6b2a40);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b2bb5;}}
}
B6b2a46:L6b2a46:{c.instructions+=2;NFSU2_TR(0x6b2a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x840ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6b2a4c:{NFSU2_TR(0x6b2a4c);
if(r1(R+518)){{goto L6b2ab3;}}
}
B6b2a4e:L6b2a4e:{c.instructions+=5;NFSU2_TR(0x6b2a4e);
u8 U[12];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6b2a55:{NFSU2_TR(0x6b2a55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6b2a57:{NFSU2_TR(0x6b2a57);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2a5a:{NFSU2_TR(0x6b2a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2a5d:{NFSU2_TR(0x6b2a5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2a7e;}}
}
B6b2a5f:L6b2a5f:{c.instructions+=3;NFSU2_TR(0x6b2a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b2a62:{NFSU2_TR(0x6b2a62);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6b2a66:{NFSU2_TR(0x6b2a66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2a7b;}}
}
B6b2a68:L6b2a68:{c.instructions+=5;NFSU2_TR(0x6b2a68);
u8 U[16];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b2a6f:{NFSU2_TR(0x6b2a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b2a72:{NFSU2_TR(0x6b2a72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b2a74:{NFSU2_TR(0x6b2a74);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b2a76:{NFSU2_TR(0x6b2a76);
{goto L6b2b8c;}
}
B6b2a7b:L6b2a7b:{c.instructions+=1;NFSU2_TR(0x6b2a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b2a7e:L6b2a7e:{c.instructions+=3;NFSU2_TR(0x6b2a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2a81:{NFSU2_TR(0x6b2a81);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b2a83:{NFSU2_TR(0x6b2a83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2c3e;}}
}
B6b2a89:L6b2a89:{c.instructions+=3;NFSU2_TR(0x6b2a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2a8c:{NFSU2_TR(0x6b2a8c);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6b2a90:{NFSU2_TR(0x6b2a90);
if(r1(R+518)){{goto L6b2b8c;}}
}
B6b2a96:L6b2a96:{c.instructions+=7;NFSU2_TR(0x6b2a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2a9c:{NFSU2_TR(0x6b2a9c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6b2aa1:{NFSU2_TR(0x6b2aa1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2aa2:{NFSU2_TR(0x6b2aa2);
u8 U[4];
w4(U+0,u32(0x7bc4b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2aa7:{NFSU2_TR(0x6b2aa7);
u8 U[4];
w4(U+0,u32(0x11a6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2aac:{NFSU2_TR(0x6b2aac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2aae:{NFSU2_TR(0x6b2aae);
{goto L6b2c1b;}
}
B6b2ab3:L6b2ab3:{c.instructions+=3;NFSU2_TR(0x6b2ab3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b2ab5:{NFSU2_TR(0x6b2ab5);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2ab8:{NFSU2_TR(0x6b2ab8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b2aea;}}
}
B6b2aba:L6b2aba:{c.instructions+=2;NFSU2_TR(0x6b2aba);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x424ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b2ac0:{NFSU2_TR(0x6b2ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2ac3:L6b2ac3:{c.instructions+=3;NFSU2_TR(0x6b2ac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2ac6:{NFSU2_TR(0x6b2ac6);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6b2aca:{NFSU2_TR(0x6b2aca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2add;}}
}
B6b2acc:L6b2acc:{c.instructions+=5;NFSU2_TR(0x6b2acc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2acf:{NFSU2_TR(0x6b2acf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b2ad1:{NFSU2_TR(0x6b2ad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2ad4:{NFSU2_TR(0x6b2ad4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b2ad6:{NFSU2_TR(0x6b2ad6);
if(r1(R+518)){{goto L6b2ae7;}}
}
B6b2ad8:L6b2ad8:{c.instructions+=2;NFSU2_TR(0x6b2ad8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2adb:{NFSU2_TR(0x6b2adb);
if(r1(R+518)){{goto L6b2ae7;}}
}
B6b2add:L6b2add:{c.instructions+=4;NFSU2_TR(0x6b2add);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2ae1:{NFSU2_TR(0x6b2ae1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b2ae2:{NFSU2_TR(0x6b2ae2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b2ae5:{NFSU2_TR(0x6b2ae5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2ac3u);}goto L6b2ac3;}}
}
B6b2ae7:L6b2ae7:{c.instructions+=1;NFSU2_TR(0x6b2ae7);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2aea:L6b2aea:{c.instructions+=1;NFSU2_TR(0x6b2aea);
if(r1(R+518)){{goto L6b2c5a;}}
}
B6b2af0:L6b2af0:{c.instructions+=3;NFSU2_TR(0x6b2af0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b2af2:{NFSU2_TR(0x6b2af2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2af5:{NFSU2_TR(0x6b2af5);
if(r1(R+518)){{goto L6b2b8c;}}
}
B6b2afb:L6b2afb:{c.instructions+=4;NFSU2_TR(0x6b2afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2b01:{NFSU2_TR(0x6b2b01);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffull))));
}
B6b2b07:{NFSU2_TR(0x6b2b07);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2b0d:{NFSU2_TR(0x6b2b0d);
if(r1(R+518)){{goto L6b2b1a;}}
}
B6b2b0f:L6b2b0f:{c.instructions+=3;NFSU2_TR(0x6b2b0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2b12:{NFSU2_TR(0x6b2b12);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2b18:{NFSU2_TR(0x6b2b18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2b30;}}
}
B6b2b1a:L6b2b1a:{c.instructions+=5;NFSU2_TR(0x6b2b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2b1d:{NFSU2_TR(0x6b2b1d);
u8 U[16];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b2b24:{NFSU2_TR(0x6b2b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2b27:{NFSU2_TR(0x6b2b27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b2b29:{NFSU2_TR(0x6b2b29);
u8 U[16];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b2b30:L6b2b30:{c.instructions+=9;NFSU2_TR(0x6b2b30);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6b2b33:{NFSU2_TR(0x6b2b33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2b34:{NFSU2_TR(0x6b2b34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2b35:{NFSU2_TR(0x6b2b35);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b2b38:{NFSU2_TR(0x6b2b38);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b2b3b:{NFSU2_TR(0x6b2b3b);
__builtin_memmove((R+4),(R+12),4);
}
B6b2b3d:{NFSU2_TR(0x6b2b3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b2b40:{NFSU2_TR(0x6b2b40);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b2b43:{NFSU2_TR(0x6b2b43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b2b48ull));
TAIL_STATIC(0x699c39u,699);
}
B6b2b48:L6b2b48:{c.instructions+=3;NFSU2_TR(0x6b2b48);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b2b4a:{NFSU2_TR(0x6b2b4a);
u8 U[8];
w1(R+512,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2b50:{NFSU2_TR(0x6b2b50);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2b65;}}
}
B6b2b52:L6b2b52:{c.instructions+=7;NFSU2_TR(0x6b2b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b2b55:{NFSU2_TR(0x6b2b55);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b2b58:{NFSU2_TR(0x6b2b58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b2b5a:{NFSU2_TR(0x6b2b5a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b2b5b:{NFSU2_TR(0x6b2b5b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B6b2b61:{NFSU2_TR(0x6b2b61);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6b2b63:{NFSU2_TR(0x6b2b63);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2b52u);}goto L6b2b52;}}
}
B6b2b65:L6b2b65:{c.instructions+=6;NFSU2_TR(0x6b2b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2b68:{NFSU2_TR(0x6b2b68);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b2b6b:{NFSU2_TR(0x6b2b6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2b6c:{NFSU2_TR(0x6b2b6c);
__builtin_memmove((R+4),(R+0),4);
}
B6b2b6e:{NFSU2_TR(0x6b2b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2b71:{NFSU2_TR(0x6b2b71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b2b76ull));
TAIL_STATIC(0x699765u,699);
}
B6b2b76:L6b2b76:{c.instructions+=6;NFSU2_TR(0x6b2b76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2b79:{NFSU2_TR(0x6b2b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2b7c:{NFSU2_TR(0x6b2b7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2b7f:{NFSU2_TR(0x6b2b7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2b86:{NFSU2_TR(0x6b2b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2b8a:{NFSU2_TR(0x6b2b8a);
__builtin_memmove((R+0),(R+4),4);
}
B6b2b8c:L6b2b8c:{c.instructions+=2;NFSU2_TR(0x6b2b8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2b8f:{NFSU2_TR(0x6b2b8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b2b92:L6b2b92:{c.instructions+=4;NFSU2_TR(0x6b2b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2b95:{NFSU2_TR(0x6b2b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2b98:{NFSU2_TR(0x6b2b98);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b2b9b:{NFSU2_TR(0x6b2b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2ba2:L6b2ba2:{c.instructions+=5;NFSU2_TR(0x6b2ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2ba5:{NFSU2_TR(0x6b2ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2ba8:{NFSU2_TR(0x6b2ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2bac:{NFSU2_TR(0x6b2bac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b2baf:{NFSU2_TR(0x6b2baf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2860u);}goto L6b2860;}}
}
B6b2bb5:L6b2bb5:{c.instructions+=3;NFSU2_TR(0x6b2bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2bb8:{NFSU2_TR(0x6b2bb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
}
B6b2bbc:{NFSU2_TR(0x6b2bbc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b27feu);}goto L6b27fe;}}
}
B6b2bc2:L6b2bc2:{c.instructions+=3;NFSU2_TR(0x6b2bc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2bc6:{NFSU2_TR(0x6b2bc6);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2bca:{NFSU2_TR(0x6b2bca);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2ca1;}}
}
B6b2bd0:L6b2bd0:{c.instructions+=5;NFSU2_TR(0x6b2bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2bd3:{NFSU2_TR(0x6b2bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2bd6:{NFSU2_TR(0x6b2bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6b2bd9:{NFSU2_TR(0x6b2bd9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b2bdc:{NFSU2_TR(0x6b2bdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2c92;}}
}
B6b2be2:L6b2be2:{c.instructions+=2;NFSU2_TR(0x6b2be2);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2be4:{NFSU2_TR(0x6b2be4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b2be9ull));
TAIL_STATIC(0x699317u,699);
}
B6b2be9:L6b2be9:{c.instructions+=3;NFSU2_TR(0x6b2be9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b2beb:{NFSU2_TR(0x6b2beb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2bed:{NFSU2_TR(0x6b2bed);
if(r1(R+518)){{goto L6b2c76;}}
}
B6b2bf3:L6b2bf3:{c.instructions+=2;NFSU2_TR(0x6b2bf3);
__builtin_memmove((R+4),(R+0),4);
}
B6b2bf5:{NFSU2_TR(0x6b2bf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b2bfaull));
TAIL_STATIC(0x698e7du,698);
}
B6b2bfa:L6b2bfa:{c.instructions+=1;NFSU2_TR(0x6b2bfa);
{goto L6b2c78;}
}
B6b2bfc:L6b2bfc:{c.instructions+=3;NFSU2_TR(0x6b2bfc);
u8 U[4];
w4(U+0,u32(0x7bc4a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c01:{NFSU2_TR(0x6b2c01);
u8 U[4];
w4(U+0,u32(0x11a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c06:{NFSU2_TR(0x6b2c06);
{goto L6b2c64;}
}
B6b2c08:L6b2c08:{c.instructions+=3;NFSU2_TR(0x6b2c08);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6b2c0d:{NFSU2_TR(0x6b2c0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c0e:{NFSU2_TR(0x6b2c0e);
u8 U[4];
w4(U+0,u32(0x7bc438ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c13:L6b2c13:{c.instructions+=1;NFSU2_TR(0x6b2c13);
u8 U[4];
w4(U+0,u32(0x11a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c18:L6b2c18:{c.instructions+=1;NFSU2_TR(0x6b2c18);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b2c1b:L6b2c1b:{c.instructions+=2;NFSU2_TR(0x6b2c1b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c1c:{NFSU2_TR(0x6b2c1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b2c21ull));
TAIL_STATIC(0x69e936u,69e);
}
B6b2c21:L6b2c21:{c.instructions+=2;NFSU2_TR(0x6b2c21);
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
B6b2c24:{NFSU2_TR(0x6b2c24);
{goto L6b2c6f;}
}
B6b2c26:L6b2c26:{c.instructions+=6;NFSU2_TR(0x6b2c26);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2c2c:{NFSU2_TR(0x6b2c2c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6b2c31:{NFSU2_TR(0x6b2c31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c32:{NFSU2_TR(0x6b2c32);
u8 U[4];
w4(U+0,u32(0x7bc3e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c37:{NFSU2_TR(0x6b2c37);
u8 U[4];
w4(U+0,u32(0x11a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c3c:{NFSU2_TR(0x6b2c3c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2c18u);}goto L6b2c18;}
}
B6b2c3e:L6b2c3e:{c.instructions+=3;NFSU2_TR(0x6b2c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2c41:{NFSU2_TR(0x6b2c41);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b2c45:{NFSU2_TR(0x6b2c45);
if(r1(R+518)){{goto L6b2c4e;}}
}
B6b2c47:L6b2c47:{c.instructions+=2;NFSU2_TR(0x6b2c47);
u8 U[4];
w4(U+0,u32(0x7bc358ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c4c:{NFSU2_TR(0x6b2c4c);
{goto L6b2c53;}
}
B6b2c4e:L6b2c4e:{c.instructions+=1;NFSU2_TR(0x6b2c4e);
u8 U[4];
w4(U+0,u32(0x7bc330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c53:L6b2c53:{c.instructions+=2;NFSU2_TR(0x6b2c53);
u8 U[4];
w4(U+0,u32(0x11a5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c58:{NFSU2_TR(0x6b2c58);
{goto L6b2c64;}
}
B6b2c5a:L6b2c5a:{c.instructions+=2;NFSU2_TR(0x6b2c5a);
u8 U[4];
w4(U+0,u32(0x7bc300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c5f:{NFSU2_TR(0x6b2c5f);
u8 U[4];
w4(U+0,u32(0x11a7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c64:L6b2c64:{c.instructions+=3;NFSU2_TR(0x6b2c64);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c66:{NFSU2_TR(0x6b2c66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c67:{NFSU2_TR(0x6b2c67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b2c6cull));
TAIL_STATIC(0x69e936u,69e);
}
B6b2c6c:L6b2c6c:{c.instructions+=1;NFSU2_TR(0x6b2c6c);
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
B6b2c6f:L6b2c6f:{c.instructions+=2;NFSU2_TR(0x6b2c6f);
w4(R+0,u32(0x80004005ull));
}
B6b2c74:{NFSU2_TR(0x6b2c74);
{goto L6b2ce4;}
}
B6b2c76:L6b2c76:{c.instructions+=1;NFSU2_TR(0x6b2c76);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b2c78:L6b2c78:{c.instructions+=3;NFSU2_TR(0x6b2c78);
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
B6b2c7a:{NFSU2_TR(0x6b2c7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6b2c7c:{NFSU2_TR(0x6b2c7c);
if(r1(R+518)){{goto L6b2ceb;}}
}
B6b2c7e:L6b2c7e:{c.instructions+=6;NFSU2_TR(0x6b2c7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c7f:{NFSU2_TR(0x6b2c7f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c80:{NFSU2_TR(0x6b2c80);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c81:{NFSU2_TR(0x6b2c81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2c82:{NFSU2_TR(0x6b2c82);
__builtin_memmove((R+4),(R+0),4);
}
B6b2c84:{NFSU2_TR(0x6b2c84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b2c89ull));
TAIL_STATIC(0x699362u,699);
}
B6b2c89:L6b2c89:{c.instructions+=3;NFSU2_TR(0x6b2c89);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6b2c8b:{NFSU2_TR(0x6b2c8b);
__builtin_memmove((R+4),(R+12),4);
}
B6b2c8d:{NFSU2_TR(0x6b2c8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b2c92ull));
TAIL_STATIC(0x699b26u,699);
}
B6b2c92:L6b2c92:{c.instructions+=4;NFSU2_TR(0x6b2c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2c95:{NFSU2_TR(0x6b2c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2c98:{NFSU2_TR(0x6b2c98);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b2c9b:{NFSU2_TR(0x6b2c9b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2bd0u);}goto L6b2bd0;}}
}
B6b2ca1:L6b2ca1:{c.instructions+=6;NFSU2_TR(0x6b2ca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2ca4:{NFSU2_TR(0x6b2ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2ca7:{NFSU2_TR(0x6b2ca7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b2ca9:{NFSU2_TR(0x6b2ca9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2cac:{NFSU2_TR(0x6b2cac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b2cae:{NFSU2_TR(0x6b2cae);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2ce2;}}
}
B6b2cb0:L6b2cb0:{c.instructions+=5;NFSU2_TR(0x6b2cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2cb3:{NFSU2_TR(0x6b2cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6b2cb6:{NFSU2_TR(0x6b2cb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b2cb8:{NFSU2_TR(0x6b2cb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b2cba:{NFSU2_TR(0x6b2cba);
if(r1(R+518)){{goto L6b2cdc;}}
}
B6b2cbc:L6b2cbc:{c.instructions+=2;NFSU2_TR(0x6b2cbc);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2cc0:{NFSU2_TR(0x6b2cc0);
if(r1(R+518)){{goto L6b2cdc;}}
}
B6b2cc2:L6b2cc2:{c.instructions+=2;NFSU2_TR(0x6b2cc2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b2cc5:{NFSU2_TR(0x6b2cc5);
if(r1(R+518)){{goto L6b2cdc;}}
}
B6b2cc7:L6b2cc7:{c.instructions+=7;NFSU2_TR(0x6b2cc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b2cc9:{NFSU2_TR(0x6b2cc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b2ccb:{NFSU2_TR(0x6b2ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b2cce:{NFSU2_TR(0x6b2cce);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b2cd1:{NFSU2_TR(0x6b2cd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6b2cd3:{NFSU2_TR(0x6b2cd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b2cd5:{NFSU2_TR(0x6b2cd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2cdc:L6b2cdc:{c.instructions+=3;NFSU2_TR(0x6b2cdc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b2cdd:{NFSU2_TR(0x6b2cdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6b2ce0:{NFSU2_TR(0x6b2ce0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2cb0u);}goto L6b2cb0;}}
}
B6b2ce2:L6b2ce2:{c.instructions+=1;NFSU2_TR(0x6b2ce2);
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
B6b2ce4:L6b2ce4:{c.instructions+=5;NFSU2_TR(0x6b2ce4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b2ce5:{NFSU2_TR(0x6b2ce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b2ce6:{NFSU2_TR(0x6b2ce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b2ce7:{NFSU2_TR(0x6b2ce7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b2ce8:{NFSU2_TR(0x6b2ce8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b2ceb:L6b2ceb:{c.instructions+=2;NFSU2_TR(0x6b2ceb);
w4(R+0,u32(0x8007000eull));
}
B6b2cf0:{NFSU2_TR(0x6b2cf0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2ce4u);}goto L6b2ce4;}
}
B6b2cf2:L6b2cf2:{c.instructions+=15;NFSU2_TR(0x6b2cf2);
__builtin_memmove((R+28),(R+28),4);
}
B6b2cf4:{NFSU2_TR(0x6b2cf4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2cf5:{NFSU2_TR(0x6b2cf5);
__builtin_memmove((R+20),(R+16),4);
}
B6b2cf7:{NFSU2_TR(0x6b2cf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x70ull))));
}
B6b2cfa:{NFSU2_TR(0x6b2cfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2cfe:{NFSU2_TR(0x6b2cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2d02:{NFSU2_TR(0x6b2d02);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2d03:{NFSU2_TR(0x6b2d03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2d04:{NFSU2_TR(0x6b2d04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2d05:{NFSU2_TR(0x6b2d05);
__builtin_memmove((R+24),(R+4),4);
}
B6b2d07:{NFSU2_TR(0x6b2d07);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2d09:{NFSU2_TR(0x6b2d09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6b2d0a:{NFSU2_TR(0x6b2d0a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b2d0c:{NFSU2_TR(0x6b2d0c);
__builtin_memmove((R+4),(R+8),4);
}
B6b2d0e:{NFSU2_TR(0x6b2d0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b2d11:L6b2d11:{c.instructions+=1;NFSU2_TR(0x6b2d11);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b2d13;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2d11u);}goto L6b2d11;}
}
B6b2d13:L6b2d13:{c.instructions+=2;NFSU2_TR(0x6b2d13);
__builtin_memmove((R+4),(R+8),4);
}
B6b2d15:{NFSU2_TR(0x6b2d15);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b2d18:L6b2d18:{c.instructions+=1;NFSU2_TR(0x6b2d18);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b2d1a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2d18u);}goto L6b2d18;}
}
B6b2d1a:L6b2d1a:{c.instructions+=2;NFSU2_TR(0x6b2d1a);
__builtin_memmove((R+4),(R+8),4);
}
B6b2d1c:{NFSU2_TR(0x6b2d1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b2d1f:L6b2d1f:{c.instructions+=1;NFSU2_TR(0x6b2d1f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b2d21;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2d1fu);}goto L6b2d1f;}
}
B6b2d21:L6b2d21:{c.instructions+=3;NFSU2_TR(0x6b2d21);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6b2d24:{NFSU2_TR(0x6b2d24);
__builtin_memmove((R+4),(R+8),4);
}
B6b2d26:{NFSU2_TR(0x6b2d26);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b2d2c:L6b2d2c:{c.instructions+=1;NFSU2_TR(0x6b2d2c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b2d2e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2d2cu);}goto L6b2d2c;}
}
B6b2d2e:L6b2d2e:{c.instructions+=2;NFSU2_TR(0x6b2d2e);
__builtin_memmove((R+4),(R+8),4);
}
B6b2d30:{NFSU2_TR(0x6b2d30);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x424ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b2d36:L6b2d36:{c.instructions+=1;NFSU2_TR(0x6b2d36);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b2d38;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2d36u);}goto L6b2d36;}
}
B6b2d38:L6b2d38:{c.instructions+=6;NFSU2_TR(0x6b2d38);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b2d3a:{NFSU2_TR(0x6b2d3a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2d3d:{NFSU2_TR(0x6b2d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2d44:{NFSU2_TR(0x6b2d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2d47:{NFSU2_TR(0x6b2d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2d4a:{NFSU2_TR(0x6b2d4a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2eb2;}}
}
B6b2d50:L6b2d50:{c.instructions+=2;NFSU2_TR(0x6b2d50);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b2d52:{NFSU2_TR(0x6b2d52);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b2d53:L6b2d53:{c.instructions+=9;NFSU2_TR(0x6b2d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2d56:{NFSU2_TR(0x6b2d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2d59:{NFSU2_TR(0x6b2d59);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b2d5c:{NFSU2_TR(0x6b2d5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b2d5e:{NFSU2_TR(0x6b2d5e);
__builtin_memmove((R+8),(R+4),4);
}
B6b2d60:{NFSU2_TR(0x6b2d60);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6b2d66:{NFSU2_TR(0x6b2d66);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2d6c:{NFSU2_TR(0x6b2d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2d6f:{NFSU2_TR(0x6b2d6f);
if(r1(R+518)){{goto L6b2f28;}}
}
B6b2d75:L6b2d75:{c.instructions+=2;NFSU2_TR(0x6b2d75);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2d7b:{NFSU2_TR(0x6b2d7b);
if(r1(R+518)){{goto L6b2f28;}}
}
B6b2d81:L6b2d81:{c.instructions+=2;NFSU2_TR(0x6b2d81);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60a00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2d87:{NFSU2_TR(0x6b2d87);
if(r1(R+518)){{goto L6b2f28;}}
}
B6b2d8d:L6b2d8d:{c.instructions+=2;NFSU2_TR(0x6b2d8d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60f00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2d93:{NFSU2_TR(0x6b2d93);
if(r1(R+518)){{goto L6b2f28;}}
}
B6b2d99:L6b2d99:{c.instructions+=2;NFSU2_TR(0x6b2d99);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2d9f:{NFSU2_TR(0x6b2d9f);
if(r1(R+518)){{goto L6b2f30;}}
}
B6b2da5:L6b2da5:{c.instructions+=2;NFSU2_TR(0x6b2da5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72c00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2dab:{NFSU2_TR(0x6b2dab);
if(r1(R+518)){{goto L6b2f28;}}
}
B6b2db1:L6b2db1:{c.instructions+=2;NFSU2_TR(0x6b2db1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72d00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2db7:{NFSU2_TR(0x6b2db7);
if(r1(R+518)){{goto L6b2f28;}}
}
B6b2dbd:L6b2dbd:{c.instructions+=4;NFSU2_TR(0x6b2dbd);
__builtin_memmove((R+28),(R+4),4);
}
B6b2dbf:{NFSU2_TR(0x6b2dbf);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6b2dc5:{NFSU2_TR(0x6b2dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2dc8:{NFSU2_TR(0x6b2dc8);
if(r1(R+518)){{goto L6b2e98;}}
}
B6b2dce:L6b2dce:{c.instructions+=2;NFSU2_TR(0x6b2dce);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b2dd0:{NFSU2_TR(0x6b2dd0);
if(r1(R+518)){{goto L6b2e98;}}
}
B6b2dd6:L6b2dd6:{c.instructions+=3;NFSU2_TR(0x6b2dd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2dda:{NFSU2_TR(0x6b2dda);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2dde:{NFSU2_TR(0x6b2dde);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2e95;}}
}
B6b2de4:L6b2de4:{c.instructions+=4;NFSU2_TR(0x6b2de4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2de7:{NFSU2_TR(0x6b2de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2dea:{NFSU2_TR(0x6b2dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2ded:{NFSU2_TR(0x6b2ded);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2df0:L6b2df0:{c.instructions+=7;NFSU2_TR(0x6b2df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2df3:{NFSU2_TR(0x6b2df3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b2df5:{NFSU2_TR(0x6b2df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2df8:{NFSU2_TR(0x6b2df8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b2dfb:{NFSU2_TR(0x6b2dfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2e01:{NFSU2_TR(0x6b2e01);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2e04:{NFSU2_TR(0x6b2e04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2e7e;}}
}
B6b2e06:L6b2e06:{c.instructions+=3;NFSU2_TR(0x6b2e06);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6b2e0a:{NFSU2_TR(0x6b2e0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6b2e0e:{NFSU2_TR(0x6b2e0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2e7e;}}
}
B6b2e10:L6b2e10:{c.instructions+=5;NFSU2_TR(0x6b2e10);
__builtin_memmove((R+8),(R+0),4);
}
B6b2e12:{NFSU2_TR(0x6b2e12);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6b2e15:{NFSU2_TR(0x6b2e15);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffa8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6b2e19:{NFSU2_TR(0x6b2e19);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b2e1c:{NFSU2_TR(0x6b2e1c);
if(r1(R+518)){{goto L6b2e3d;}}
}
B6b2e1e:L6b2e1e:{c.instructions+=4;NFSU2_TR(0x6b2e1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2e24:{NFSU2_TR(0x6b2e24);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffull))));
}
B6b2e2a:{NFSU2_TR(0x6b2e2a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2e30:{NFSU2_TR(0x6b2e30);
if(r1(R+518)){{goto L6b2e3d;}}
}
B6b2e32:L6b2e32:{c.instructions+=2;NFSU2_TR(0x6b2e32);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b2e37:{NFSU2_TR(0x6b2e37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2e3d;}}
}
B6b2e39:L6b2e39:{c.instructions+=1;NFSU2_TR(0x6b2e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2e3d:L6b2e3d:{c.instructions+=6;NFSU2_TR(0x6b2e3d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b2e3f:{NFSU2_TR(0x6b2e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2e42:{NFSU2_TR(0x6b2e42);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6b2e45:{NFSU2_TR(0x6b2e45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6b2e47:{NFSU2_TR(0x6b2e47);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b2e4b:{NFSU2_TR(0x6b2e4b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b2e7e;}}
}
B6b2e4d:L6b2e4d:{c.instructions+=5;NFSU2_TR(0x6b2e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6b2e50:{NFSU2_TR(0x6b2e50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b2e53:{NFSU2_TR(0x6b2e53);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6b2e57:{NFSU2_TR(0x6b2e57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b2e59:{NFSU2_TR(0x6b2e59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2e5c:L6b2e5c:{c.instructions+=7;NFSU2_TR(0x6b2e5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b2e5e:{NFSU2_TR(0x6b2e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2e61:{NFSU2_TR(0x6b2e61);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b2e64:{NFSU2_TR(0x6b2e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b2e67:{NFSU2_TR(0x6b2e67);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b2e68:{NFSU2_TR(0x6b2e68);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2e6a:{NFSU2_TR(0x6b2e6a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2e6e;}}
}
B6b2e6c:L6b2e6c:{c.instructions+=1;NFSU2_TR(0x6b2e6c);
__builtin_memmove((R+0),(R+28),4);
}
B6b2e6e:L6b2e6e:{c.instructions+=3;NFSU2_TR(0x6b2e6e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6b2e71:{NFSU2_TR(0x6b2e71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2e74:{NFSU2_TR(0x6b2e74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2e5cu);}goto L6b2e5c;}}
}
B6b2e76:L6b2e76:{c.instructions+=4;NFSU2_TR(0x6b2e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b2e79:{NFSU2_TR(0x6b2e79);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b2e7b:{NFSU2_TR(0x6b2e7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6b2e7d:{NFSU2_TR(0x6b2e7d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b2e7e:L6b2e7e:{c.instructions+=7;NFSU2_TR(0x6b2e7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2e81:{NFSU2_TR(0x6b2e81);
__builtin_memmove((R+0),(R+28),4);
}
B6b2e83:{NFSU2_TR(0x6b2e83);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b2e86:{NFSU2_TR(0x6b2e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2e89:{NFSU2_TR(0x6b2e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2e8c:{NFSU2_TR(0x6b2e8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b2e8f:{NFSU2_TR(0x6b2e8f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2df0u);}goto L6b2df0;}}
}
B6b2e95:L6b2e95:{c.instructions+=1;NFSU2_TR(0x6b2e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2e98:L6b2e98:{c.instructions+=1;NFSU2_TR(0x6b2e98);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b2e9a:L6b2e9a:{c.instructions+=4;NFSU2_TR(0x6b2e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b2e9d:{NFSU2_TR(0x6b2e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2ea0:{NFSU2_TR(0x6b2ea0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b2ea3:{NFSU2_TR(0x6b2ea3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2d53u);}goto L6b2d53;}}
}
B6b2ea9:L6b2ea9:{c.instructions+=2;NFSU2_TR(0x6b2ea9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x10ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2ead:{NFSU2_TR(0x6b2ead);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2eb2;}}
}
B6b2eaf:L6b2eaf:{c.instructions+=1;NFSU2_TR(0x6b2eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2eb2:L6b2eb2:{c.instructions+=3;NFSU2_TR(0x6b2eb2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b2eb4:{NFSU2_TR(0x6b2eb4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2eb7:{NFSU2_TR(0x6b2eb7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b2ec8;}}
}
B6b2eb9:L6b2eb9:{c.instructions+=6;NFSU2_TR(0x6b2eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2ebc:{NFSU2_TR(0x6b2ebc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b2ebf:{NFSU2_TR(0x6b2ebf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b2ec0:{NFSU2_TR(0x6b2ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2ec3:{NFSU2_TR(0x6b2ec3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b2ec6:{NFSU2_TR(0x6b2ec6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2eb9u);}goto L6b2eb9;}}
}
B6b2ec8:L6b2ec8:{c.instructions+=4;NFSU2_TR(0x6b2ec8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2ecb:{NFSU2_TR(0x6b2ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b2ece:{NFSU2_TR(0x6b2ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2ed1:{NFSU2_TR(0x6b2ed1);
if(r1(R+518)){{goto L6b2fa3;}}
}
B6b2ed7:L6b2ed7:{c.instructions+=3;NFSU2_TR(0x6b2ed7);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2edc:{NFSU2_TR(0x6b2edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2ee2:{NFSU2_TR(0x6b2ee2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b2ee7ull));
TAIL_STATIC(0x575620u,575);
}
B6b2ee7:L6b2ee7:{c.instructions+=5;NFSU2_TR(0x6b2ee7);
__builtin_memmove((R+28),(R+0),4);
}
B6b2ee9:{NFSU2_TR(0x6b2ee9);
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
B6b2eeb:{NFSU2_TR(0x6b2eeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b2eec:{NFSU2_TR(0x6b2eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2ef2:{NFSU2_TR(0x6b2ef2);
if(r1(R+518)){{goto L6b2fd8;}}
}
B6b2ef8:L6b2ef8:{c.instructions+=5;NFSU2_TR(0x6b2ef8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b2efa:{NFSU2_TR(0x6b2efa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2efb:{NFSU2_TR(0x6b2efb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2efc:{NFSU2_TR(0x6b2efc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2efd:{NFSU2_TR(0x6b2efd);
w4(R+4,u32(0x200ull));
}
B6b2f02:L6b2f02:{c.instructions+=1;NFSU2_TR(0x6b2f02);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b2f04;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2f02u);}goto L6b2f02;}
}
B6b2f04:L6b2f04:{c.instructions+=6;NFSU2_TR(0x6b2f04);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b2f07:{NFSU2_TR(0x6b2f07);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b2f0d:{NFSU2_TR(0x6b2f0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2f0e:{NFSU2_TR(0x6b2f0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b2f14:{NFSU2_TR(0x6b2f14);
__builtin_memmove((R+4),(R+24),4);
}
B6b2f16:{NFSU2_TR(0x6b2f16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b2f1bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2554u);}goto L6b2554;}
}
B6b2f1b:L6b2f1b:{c.instructions+=2;NFSU2_TR(0x6b2f1b);
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
B6b2f1d:{NFSU2_TR(0x6b2f1d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6b31adu,6b3);}
}
B6b2f23:L6b2f23:{c.instructions+=1;NFSU2_TR(0x6b2f23);
TAIL_STATIC(0x6b31eeu,6b3);
}
B6b2f28:L6b2f28:{c.instructions+=2;NFSU2_TR(0x6b2f28);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2f2e:{NFSU2_TR(0x6b2f2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2f37;}}
}
B6b2f30:L6b2f30:{c.instructions+=3;NFSU2_TR(0x6b2f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2f33:{NFSU2_TR(0x6b2f33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b2f35:{NFSU2_TR(0x6b2f35);
{goto L6b2f43;}
}
B6b2f37:L6b2f37:{c.instructions+=3;NFSU2_TR(0x6b2f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b2f3a:{NFSU2_TR(0x6b2f3a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6b2f40:{NFSU2_TR(0x6b2f40);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b2f43:L6b2f43:{c.instructions+=5;NFSU2_TR(0x6b2f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2f46:{NFSU2_TR(0x6b2f46);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b2f49:{NFSU2_TR(0x6b2f49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2f4c:{NFSU2_TR(0x6b2f4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2f52:{NFSU2_TR(0x6b2f52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2f89;}}
}
B6b2f54:L6b2f54:{c.instructions+=2;NFSU2_TR(0x6b2f54);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b2f57:{NFSU2_TR(0x6b2f57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2f89;}}
}
B6b2f59:L6b2f59:{c.instructions+=3;NFSU2_TR(0x6b2f59);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6b2f5d:{NFSU2_TR(0x6b2f5d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6b2f61:{NFSU2_TR(0x6b2f61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2f91;}}
}
B6b2f63:L6b2f63:{c.instructions+=3;NFSU2_TR(0x6b2f63);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffa8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6b2f67:{NFSU2_TR(0x6b2f67);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b2f69:{NFSU2_TR(0x6b2f69);
if(r1(R+518)){{goto L6b2f82;}}
}
B6b2f6b:L6b2f6b:{c.instructions+=4;NFSU2_TR(0x6b2f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b2f71:{NFSU2_TR(0x6b2f71);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffull))));
}
B6b2f77:{NFSU2_TR(0x6b2f77);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b2f7d:{NFSU2_TR(0x6b2f7d);
if(r1(R+518)){{goto L6b2f82;}}
}
B6b2f7f:L6b2f7f:{c.instructions+=1;NFSU2_TR(0x6b2f7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2f82:L6b2f82:{c.instructions+=2;NFSU2_TR(0x6b2f82);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b2f84:{NFSU2_TR(0x6b2f84);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2e9au);}goto L6b2e9a;}
}
B6b2f89:L6b2f89:{c.instructions+=2;NFSU2_TR(0x6b2f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2f8c:{NFSU2_TR(0x6b2f8c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2e9au);}goto L6b2e9a;}
}
B6b2f91:L6b2f91:{c.instructions+=4;NFSU2_TR(0x6b2f91);
u8 U[4];
w4(U+0,u32(0x7bc630ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2f96:{NFSU2_TR(0x6b2f96);
u8 U[4];
w4(U+0,u32(0x11a1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2f9b:{NFSU2_TR(0x6b2f9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b2f9e:{NFSU2_TR(0x6b2f9e);
TAIL_STATIC(0x6b31ffu,6b3);
}
B6b2fa3:L6b2fa3:{c.instructions+=3;NFSU2_TR(0x6b2fa3);
w4(R+28,u32(0x800ull));
}
B6b2fa8:{NFSU2_TR(0x6b2fa8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2fa9:{NFSU2_TR(0x6b2fa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b2faeull));
TAIL_STATIC(0x575620u,575);
}
B6b2fae:L6b2fae:{c.instructions+=4;NFSU2_TR(0x6b2fae);
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
B6b2fb0:{NFSU2_TR(0x6b2fb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b2fb1:{NFSU2_TR(0x6b2fb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2fb7:{NFSU2_TR(0x6b2fb7);
if(r1(R+518)){{goto L6b2fd8;}}
}
B6b2fb9:L6b2fb9:{c.instructions+=2;NFSU2_TR(0x6b2fb9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2fba:{NFSU2_TR(0x6b2fba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b2fbfull));
TAIL_STATIC(0x575620u,575);
}
B6b2fbf:L6b2fbf:{c.instructions+=4;NFSU2_TR(0x6b2fbf);
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
B6b2fc1:{NFSU2_TR(0x6b2fc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b2fc2:{NFSU2_TR(0x6b2fc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2fc8:{NFSU2_TR(0x6b2fc8);
if(r1(R+518)){{goto L6b2fd8;}}
}
B6b2fca:L6b2fca:{c.instructions+=2;NFSU2_TR(0x6b2fca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2fcb:{NFSU2_TR(0x6b2fcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b2fd0ull));
TAIL_STATIC(0x575620u,575);
}
B6b2fd0:L6b2fd0:{c.instructions+=4;NFSU2_TR(0x6b2fd0);
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
B6b2fd2:{NFSU2_TR(0x6b2fd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b2fd3:{NFSU2_TR(0x6b2fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2fd6:{NFSU2_TR(0x6b2fd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b2fe2;}}
}
B6b2fd8:L6b2fd8:{c.instructions+=2;NFSU2_TR(0x6b2fd8);
w4(R+0,u32(0x8007000eull));
}
B6b2fdd:{NFSU2_TR(0x6b2fdd);
TAIL_STATIC(0x6b31eeu,6b3);
}
B6b2fe2:L6b2fe2:{c.instructions+=2;NFSU2_TR(0x6b2fe2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b2fe3:{NFSU2_TR(0x6b2fe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b2fe8ull));
TAIL_STATIC(0x575620u,575);
}
B6b2fe8:L6b2fe8:{c.instructions+=6;NFSU2_TR(0x6b2fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b2fee:{NFSU2_TR(0x6b2fee);
w4(R+12,u32(0x200ull));
}
B6b2ff3:{NFSU2_TR(0x6b2ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b2ff6:{NFSU2_TR(0x6b2ff6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b2ff8:{NFSU2_TR(0x6b2ff8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b2ff9:{NFSU2_TR(0x6b2ff9);
__builtin_memmove((R+4),(R+12),4);
}
B6b2ffb:L6b2ffb:{c.instructions+=1;NFSU2_TR(0x6b2ffb);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b2ffd;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b2ffbu);}goto L6b2ffb;}
}
B6b2ffd:L6b2ffd:{c.instructions+=1;NFSU2_TR(0x6b2ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
TAIL_STATIC(0x6b3003u,6b3);
}
XIT:NFSU2_TR_EXIT(0x6b2,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
