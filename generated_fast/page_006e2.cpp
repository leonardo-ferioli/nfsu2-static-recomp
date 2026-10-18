#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6e1(u8* __restrict R,Cpu& c);
u32 body_6e3(u8* __restrict R,Cpu& c);
u32 body_6e4(u8* __restrict R,Cpu& c);
u32 body_6e6(u8* __restrict R,Cpu& c);
u32 body_6e7(u8* __restrict R,Cpu& c);
u32 body_6e8(u8* __restrict R,Cpu& c);
u32 body_6ea(u8* __restrict R,Cpu& c);
u32 body_6eb(u8* __restrict R,Cpu& c);
u32 body_6ec(u8* __restrict R,Cpu& c);
u32 body_6ee(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6e2,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6e2,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6e2(u8* __restrict R,Cpu& c);
u32 page_6e2(Cpu& c){return body_6e2(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6e2(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6e2000:goto L6e2000;
case 0x6e2001:c.instructions+=6;goto B6e2001;
case 0x6e2003:c.instructions+=5;goto B6e2003;
case 0x6e2006:c.instructions+=4;goto B6e2006;
case 0x6e2009:c.instructions+=3;goto B6e2009;
case 0x6e200b:c.instructions+=2;goto B6e200b;
case 0x6e200d:c.instructions+=1;goto B6e200d;
case 0x6e200f:goto L6e200f;
case 0x6e2012:c.instructions+=8;goto B6e2012;
case 0x6e2013:c.instructions+=7;goto B6e2013;
case 0x6e2014:c.instructions+=6;goto B6e2014;
case 0x6e2018:c.instructions+=5;goto B6e2018;
case 0x6e2019:c.instructions+=4;goto B6e2019;
case 0x6e201a:c.instructions+=3;goto B6e201a;
case 0x6e201e:c.instructions+=2;goto B6e201e;
case 0x6e201f:c.instructions+=1;goto B6e201f;
case 0x6e2022:goto L6e2022;
case 0x6e2024:c.instructions+=2;goto B6e2024;
case 0x6e2026:c.instructions+=1;goto B6e2026;
case 0x6e2028:goto L6e2028;
case 0x6e202c:c.instructions+=9;goto B6e202c;
case 0x6e202f:c.instructions+=8;goto B6e202f;
case 0x6e2031:c.instructions+=7;goto B6e2031;
case 0x6e2034:c.instructions+=6;goto B6e2034;
case 0x6e2035:c.instructions+=5;goto B6e2035;
case 0x6e2036:c.instructions+=4;goto B6e2036;
case 0x6e2037:c.instructions+=3;goto B6e2037;
case 0x6e203a:c.instructions+=2;goto B6e203a;
case 0x6e203b:c.instructions+=1;goto B6e203b;
case 0x6e2040:goto L6e2040;
case 0x6e2041:c.instructions+=4;goto B6e2041;
case 0x6e2043:c.instructions+=3;goto B6e2043;
case 0x6e2044:c.instructions+=2;goto B6e2044;
case 0x6e2045:c.instructions+=1;goto B6e2045;
case 0x6e2048:goto L6e2048;
case 0x6e2049:c.instructions+=1;goto B6e2049;
case 0x6e2050:goto L6e2050;
case 0x6e2055:c.instructions+=4;goto B6e2055;
case 0x6e2056:c.instructions+=3;goto B6e2056;
case 0x6e2058:c.instructions+=2;goto B6e2058;
case 0x6e205e:c.instructions+=1;goto B6e205e;
case 0x6e2060:goto L6e2060;
case 0x6e2062:c.instructions+=2;goto B6e2062;
case 0x6e2063:c.instructions+=1;goto B6e2063;
case 0x6e2069:goto L6e2069;
case 0x6e206c:goto L6e206c;
case 0x6e206e:c.instructions+=2;goto B6e206e;
case 0x6e206f:c.instructions+=1;goto B6e206f;
case 0x6e2080:goto L6e2080;
case 0x6e2085:c.instructions+=4;goto B6e2085;
case 0x6e2086:c.instructions+=3;goto B6e2086;
case 0x6e2088:c.instructions+=2;goto B6e2088;
case 0x6e208e:c.instructions+=1;goto B6e208e;
case 0x6e2090:goto L6e2090;
case 0x6e2092:c.instructions+=2;goto B6e2092;
case 0x6e2093:c.instructions+=1;goto B6e2093;
case 0x6e2099:goto L6e2099;
case 0x6e209c:goto L6e209c;
case 0x6e209e:c.instructions+=2;goto B6e209e;
case 0x6e209f:c.instructions+=1;goto B6e209f;
case 0x6e20b0:goto L6e20b0;
case 0x6e20b1:c.instructions+=2;goto B6e20b1;
case 0x6e20b3:c.instructions+=1;goto B6e20b3;
case 0x6e20b8:goto L6e20b8;
case 0x6e20be:c.instructions+=6;goto B6e20be;
case 0x6e20c4:c.instructions+=5;goto B6e20c4;
case 0x6e20c8:c.instructions+=4;goto B6e20c8;
case 0x6e20cf:c.instructions+=3;goto B6e20cf;
case 0x6e20d1:c.instructions+=2;goto B6e20d1;
case 0x6e20d2:c.instructions+=1;goto B6e20d2;
case 0x6e20e0:goto L6e20e0;
case 0x6e20e1:c.instructions+=2;goto B6e20e1;
case 0x6e20e3:c.instructions+=1;goto B6e20e3;
case 0x6e20e8:goto L6e20e8;
case 0x6e20ea:c.instructions+=8;goto B6e20ea;
case 0x6e20ed:c.instructions+=7;goto B6e20ed;
case 0x6e20f0:c.instructions+=6;goto B6e20f0;
case 0x6e20f3:c.instructions+=5;goto B6e20f3;
case 0x6e20f9:c.instructions+=4;goto B6e20f9;
case 0x6e2100:c.instructions+=3;goto B6e2100;
case 0x6e2102:c.instructions+=2;goto B6e2102;
case 0x6e2103:c.instructions+=1;goto B6e2103;
case 0x6e2110:goto L6e2110;
case 0x6e2111:c.instructions+=10;goto B6e2111;
case 0x6e2114:c.instructions+=9;goto B6e2114;
case 0x6e2118:c.instructions+=8;goto B6e2118;
case 0x6e211c:c.instructions+=7;goto B6e211c;
case 0x6e2120:c.instructions+=6;goto B6e2120;
case 0x6e2124:c.instructions+=5;goto B6e2124;
case 0x6e2126:c.instructions+=4;goto B6e2126;
case 0x6e2128:c.instructions+=3;goto B6e2128;
case 0x6e212b:c.instructions+=2;goto B6e212b;
case 0x6e212d:c.instructions+=1;goto B6e212d;
case 0x6e212f:goto L6e212f;
case 0x6e2133:c.instructions+=4;goto B6e2133;
case 0x6e2137:c.instructions+=3;goto B6e2137;
case 0x6e213b:c.instructions+=2;goto B6e213b;
case 0x6e213d:c.instructions+=1;goto B6e213d;
case 0x6e213f:goto L6e213f;
case 0x6e2141:c.instructions+=3;goto B6e2141;
case 0x6e2143:c.instructions+=2;goto B6e2143;
case 0x6e2144:c.instructions+=1;goto B6e2144;
case 0x6e2150:goto L6e2150;
case 0x6e2151:c.instructions+=2;goto B6e2151;
case 0x6e2153:c.instructions+=1;goto B6e2153;
case 0x6e2158:goto L6e2158;
case 0x6e215d:c.instructions+=1;goto B6e215d;
case 0x6e215f:goto L6e215f;
case 0x6e2161:c.instructions+=2;goto B6e2161;
case 0x6e2162:c.instructions+=1;goto B6e2162;
case 0x6e2168:goto L6e2168;
case 0x6e216b:goto L6e216b;
case 0x6e216d:c.instructions+=2;goto B6e216d;
case 0x6e216e:c.instructions+=1;goto B6e216e;
case 0x6e2180:goto L6e2180;
case 0x6e2181:c.instructions+=2;goto B6e2181;
case 0x6e2183:c.instructions+=1;goto B6e2183;
case 0x6e2188:goto L6e2188;
case 0x6e218e:c.instructions+=5;goto B6e218e;
case 0x6e2195:c.instructions+=4;goto B6e2195;
case 0x6e219c:c.instructions+=3;goto B6e219c;
case 0x6e219e:c.instructions+=2;goto B6e219e;
case 0x6e219f:c.instructions+=1;goto B6e219f;
case 0x6e21a0:goto L6e21a0;
case 0x6e21a1:c.instructions+=9;goto B6e21a1;
case 0x6e21a4:c.instructions+=8;goto B6e21a4;
case 0x6e21a8:c.instructions+=7;goto B6e21a8;
case 0x6e21ac:c.instructions+=6;goto B6e21ac;
case 0x6e21b0:c.instructions+=5;goto B6e21b0;
case 0x6e21b2:c.instructions+=4;goto B6e21b2;
case 0x6e21b6:c.instructions+=3;goto B6e21b6;
case 0x6e21b8:c.instructions+=2;goto B6e21b8;
case 0x6e21b9:c.instructions+=1;goto B6e21b9;
case 0x6e21c0:goto L6e21c0;
case 0x6e21c4:c.instructions+=5;goto B6e21c4;
case 0x6e21c6:c.instructions+=4;goto B6e21c6;
case 0x6e21c7:c.instructions+=3;goto B6e21c7;
case 0x6e21cb:c.instructions+=2;goto B6e21cb;
case 0x6e21cc:c.instructions+=1;goto B6e21cc;
case 0x6e21cf:goto L6e21cf;
case 0x6e21e0:goto L6e21e0;
case 0x6e21e1:c.instructions+=3;goto B6e21e1;
case 0x6e21e3:c.instructions+=2;goto B6e21e3;
case 0x6e21e9:c.instructions+=1;goto B6e21e9;
case 0x6e21ee:goto L6e21ee;
case 0x6e21f3:c.instructions+=1;goto B6e21f3;
case 0x6e21f5:goto L6e21f5;
case 0x6e21f7:c.instructions+=2;goto B6e21f7;
case 0x6e21f8:c.instructions+=1;goto B6e21f8;
case 0x6e21fe:goto L6e21fe;
case 0x6e2201:goto L6e2201;
case 0x6e2203:c.instructions+=2;goto B6e2203;
case 0x6e2204:c.instructions+=1;goto B6e2204;
case 0x6e2210:goto L6e2210;
case 0x6e2215:c.instructions+=2;goto B6e2215;
case 0x6e221b:c.instructions+=1;goto B6e221b;
case 0x6e2220:goto L6e2220;
case 0x6e2226:c.instructions+=2;goto B6e2226;
case 0x6e2228:c.instructions+=1;goto B6e2228;
case 0x6e222b:goto L6e222b;
case 0x6e2231:c.instructions+=3;goto B6e2231;
case 0x6e2233:c.instructions+=2;goto B6e2233;
case 0x6e2235:c.instructions+=1;goto B6e2235;
case 0x6e2240:goto L6e2240;
case 0x6e2245:c.instructions+=3;goto B6e2245;
case 0x6e224c:c.instructions+=2;goto B6e224c;
case 0x6e224e:c.instructions+=1;goto B6e224e;
case 0x6e2250:goto L6e2250;
case 0x6e2258:c.instructions+=9;goto B6e2258;
case 0x6e2259:c.instructions+=8;goto B6e2259;
case 0x6e225f:c.instructions+=7;goto B6e225f;
case 0x6e2261:c.instructions+=6;goto B6e2261;
case 0x6e2266:c.instructions+=5;goto B6e2266;
case 0x6e226d:c.instructions+=4;goto B6e226d;
case 0x6e226f:c.instructions+=3;goto B6e226f;
case 0x6e2274:c.instructions+=2;goto B6e2274;
case 0x6e227b:c.instructions+=1;goto B6e227b;
case 0x6e227c:goto L6e227c;
case 0x6e227e:c.instructions+=2;goto B6e227e;
case 0x6e2285:c.instructions+=1;goto B6e2285;
case 0x6e2290:goto L6e2290;
case 0x6e2294:c.instructions+=5;goto B6e2294;
case 0x6e2297:c.instructions+=4;goto B6e2297;
case 0x6e229a:c.instructions+=3;goto B6e229a;
case 0x6e22a1:c.instructions+=2;goto B6e22a1;
case 0x6e22a3:c.instructions+=1;goto B6e22a3;
case 0x6e22a5:goto L6e22a5;
case 0x6e22a7:c.instructions+=2;goto B6e22a7;
case 0x6e22ae:c.instructions+=1;goto B6e22ae;
case 0x6e22b1:goto L6e22b1;
case 0x6e22b6:c.instructions+=7;goto B6e22b6;
case 0x6e22b8:c.instructions+=6;goto B6e22b8;
case 0x6e22be:c.instructions+=5;goto B6e22be;
case 0x6e22c1:c.instructions+=4;goto B6e22c1;
case 0x6e22c5:c.instructions+=3;goto B6e22c5;
case 0x6e22c8:c.instructions+=2;goto B6e22c8;
case 0x6e22ce:c.instructions+=1;goto B6e22ce;
case 0x6e22e0:goto L6e22e0;
case 0x6e22e5:c.instructions+=5;goto B6e22e5;
case 0x6e22e6:c.instructions+=4;goto B6e22e6;
case 0x6e22eb:c.instructions+=3;goto B6e22eb;
case 0x6e22ed:c.instructions+=2;goto B6e22ed;
case 0x6e22f2:c.instructions+=1;goto B6e22f2;
case 0x6e22f7:goto L6e22f7;
case 0x6e22f9:goto L6e22f9;
case 0x6e22fe:c.instructions+=1;goto B6e22fe;
case 0x6e2303:goto L6e2303;
case 0x6e2305:goto L6e2305;
case 0x6e2306:c.instructions+=1;goto B6e2306;
case 0x6e2310:goto L6e2310;
case 0x6e2314:c.instructions+=4;goto B6e2314;
case 0x6e2319:c.instructions+=3;goto B6e2319;
case 0x6e231a:c.instructions+=2;goto B6e231a;
case 0x6e231f:c.instructions+=1;goto B6e231f;
case 0x6e2325:goto L6e2325;
case 0x6e232b:c.instructions+=5;goto B6e232b;
case 0x6e2330:c.instructions+=4;goto B6e2330;
case 0x6e2339:c.instructions+=3;goto B6e2339;
case 0x6e233b:c.instructions+=2;goto B6e233b;
case 0x6e233e:c.instructions+=1;goto B6e233e;
case 0x6e2341:goto L6e2341;
case 0x6e2350:goto L6e2350;
case 0x6e2355:c.instructions+=4;goto B6e2355;
case 0x6e235b:c.instructions+=3;goto B6e235b;
case 0x6e235c:c.instructions+=2;goto B6e235c;
case 0x6e235d:c.instructions+=1;goto B6e235d;
case 0x6e2363:goto L6e2363;
case 0x6e2366:c.instructions+=1;goto B6e2366;
case 0x6e2370:goto L6e2370;
case 0x6e2371:c.instructions+=6;goto B6e2371;
case 0x6e2372:c.instructions+=5;goto B6e2372;
case 0x6e2376:c.instructions+=4;goto B6e2376;
case 0x6e2379:c.instructions+=3;goto B6e2379;
case 0x6e237b:c.instructions+=2;goto B6e237b;
case 0x6e237e:c.instructions+=1;goto B6e237e;
case 0x6e2380:goto L6e2380;
case 0x6e2381:c.instructions+=1;goto B6e2381;
case 0x6e2383:goto L6e2383;
case 0x6e2386:c.instructions+=1;goto B6e2386;
case 0x6e2388:goto L6e2388;
case 0x6e238e:c.instructions+=3;goto B6e238e;
case 0x6e2390:c.instructions+=2;goto B6e2390;
case 0x6e2391:c.instructions+=1;goto B6e2391;
case 0x6e2394:goto L6e2394;
case 0x6e2396:c.instructions+=4;goto B6e2396;
case 0x6e2398:c.instructions+=3;goto B6e2398;
case 0x6e2399:c.instructions+=2;goto B6e2399;
case 0x6e239b:c.instructions+=1;goto B6e239b;
case 0x6e239e:goto L6e239e;
case 0x6e239f:c.instructions+=3;goto B6e239f;
case 0x6e23a1:c.instructions+=2;goto B6e23a1;
case 0x6e23a2:c.instructions+=1;goto B6e23a2;
case 0x6e23a5:goto L6e23a5;
case 0x6e23a8:c.instructions+=4;goto B6e23a8;
case 0x6e23ab:c.instructions+=3;goto B6e23ab;
case 0x6e23ac:c.instructions+=2;goto B6e23ac;
case 0x6e23ae:c.instructions+=1;goto B6e23ae;
case 0x6e23b1:goto L6e23b1;
case 0x6e23b2:c.instructions+=3;goto B6e23b2;
case 0x6e23b4:c.instructions+=2;goto B6e23b4;
case 0x6e23b5:c.instructions+=1;goto B6e23b5;
case 0x6e23b8:goto L6e23b8;
case 0x6e23bb:c.instructions+=4;goto B6e23bb;
case 0x6e23be:c.instructions+=3;goto B6e23be;
case 0x6e23bf:c.instructions+=2;goto B6e23bf;
case 0x6e23c1:c.instructions+=1;goto B6e23c1;
case 0x6e23c4:goto L6e23c4;
case 0x6e23c5:c.instructions+=3;goto B6e23c5;
case 0x6e23c7:c.instructions+=2;goto B6e23c7;
case 0x6e23c8:c.instructions+=1;goto B6e23c8;
case 0x6e23d0:goto L6e23d0;
case 0x6e23d4:c.instructions+=3;goto B6e23d4;
case 0x6e23d7:c.instructions+=2;goto B6e23d7;
case 0x6e23da:c.instructions+=1;goto B6e23da;
case 0x6e23dc:goto L6e23dc;
case 0x6e23e3:c.instructions+=1;goto B6e23e3;
case 0x6e23ea:goto L6e23ea;
case 0x6e23eb:c.instructions+=1;goto B6e23eb;
case 0x6e23f0:goto L6e23f0;
case 0x6e23f3:c.instructions+=1;goto B6e23f3;
case 0x6e23f6:goto L6e23f6;
case 0x6e23f7:c.instructions+=1;goto B6e23f7;
case 0x6e23fc:goto L6e23fc;
case 0x6e23ff:c.instructions+=1;goto B6e23ff;
case 0x6e2402:goto L6e2402;
case 0x6e2403:c.instructions+=1;goto B6e2403;
case 0x6e2408:goto L6e2408;
case 0x6e240b:c.instructions+=1;goto B6e240b;
case 0x6e240e:goto L6e240e;
case 0x6e240f:c.instructions+=1;goto B6e240f;
case 0x6e2414:goto L6e2414;
case 0x6e2417:c.instructions+=1;goto B6e2417;
case 0x6e241a:goto L6e241a;
case 0x6e241b:c.instructions+=1;goto B6e241b;
case 0x6e2420:goto L6e2420;
case 0x6e2421:goto L6e2421;
case 0x6e2460:goto L6e2460;
case 0x6e2465:c.instructions+=5;goto B6e2465;
case 0x6e246c:c.instructions+=4;goto B6e246c;
case 0x6e2470:c.instructions+=3;goto B6e2470;
case 0x6e2472:c.instructions+=2;goto B6e2472;
case 0x6e2479:c.instructions+=1;goto B6e2479;
case 0x6e2480:goto L6e2480;
case 0x6e2484:c.instructions+=5;goto B6e2484;
case 0x6e2487:c.instructions+=4;goto B6e2487;
case 0x6e248e:c.instructions+=3;goto B6e248e;
case 0x6e2490:c.instructions+=2;goto B6e2490;
case 0x6e2497:c.instructions+=1;goto B6e2497;
case 0x6e24a0:goto L6e24a0;
case 0x6e24a1:c.instructions+=4;goto B6e24a1;
case 0x6e24a5:c.instructions+=3;goto B6e24a5;
case 0x6e24a8:c.instructions+=2;goto B6e24a8;
case 0x6e24ab:c.instructions+=1;goto B6e24ab;
case 0x6e24ad:goto L6e24ad;
case 0x6e24b0:c.instructions+=1;goto B6e24b0;
case 0x6e24b2:goto L6e24b2;
case 0x6e24b5:c.instructions+=1;goto B6e24b5;
case 0x6e24b7:goto L6e24b7;
case 0x6e24b9:c.instructions+=3;goto B6e24b9;
case 0x6e24bb:c.instructions+=2;goto B6e24bb;
case 0x6e24bd:c.instructions+=1;goto B6e24bd;
case 0x6e24bf:goto L6e24bf;
case 0x6e24c5:c.instructions+=6;goto B6e24c5;
case 0x6e24c7:c.instructions+=5;goto B6e24c7;
case 0x6e24c9:c.instructions+=4;goto B6e24c9;
case 0x6e24cd:c.instructions+=3;goto B6e24cd;
case 0x6e24ce:c.instructions+=2;goto B6e24ce;
case 0x6e24cf:c.instructions+=1;goto B6e24cf;
case 0x6e24d2:goto L6e24d2;
case 0x6e24d3:c.instructions+=1;goto B6e24d3;
case 0x6e24db:goto L6e24db;
case 0x6e24dc:c.instructions+=13;goto B6e24dc;
case 0x6e24dd:c.instructions+=12;goto B6e24dd;
case 0x6e24de:c.instructions+=11;goto B6e24de;
case 0x6e24df:c.instructions+=10;goto B6e24df;
case 0x6e24e0:c.instructions+=9;goto B6e24e0;
case 0x6e24e4:c.instructions+=8;goto B6e24e4;
case 0x6e24e6:c.instructions+=7;goto B6e24e6;
case 0x6e24e9:c.instructions+=6;goto B6e24e9;
case 0x6e24ec:c.instructions+=5;goto B6e24ec;
case 0x6e24ed:c.instructions+=4;goto B6e24ed;
case 0x6e24f1:c.instructions+=3;goto B6e24f1;
case 0x6e24f2:c.instructions+=2;goto B6e24f2;
case 0x6e24f3:c.instructions+=1;goto B6e24f3;
case 0x6e24f8:goto L6e24f8;
case 0x6e2500:goto L6e2500;
case 0x6e2503:c.instructions+=7;goto B6e2503;
case 0x6e2507:c.instructions+=6;goto B6e2507;
case 0x6e250b:c.instructions+=5;goto B6e250b;
case 0x6e2511:c.instructions+=4;goto B6e2511;
case 0x6e2515:c.instructions+=3;goto B6e2515;
case 0x6e2517:c.instructions+=2;goto B6e2517;
case 0x6e251a:c.instructions+=1;goto B6e251a;
case 0x6e251c:goto L6e251c;
case 0x6e2522:c.instructions+=5;goto B6e2522;
case 0x6e2526:c.instructions+=4;goto B6e2526;
case 0x6e252a:c.instructions+=3;goto B6e252a;
case 0x6e252e:c.instructions+=2;goto B6e252e;
case 0x6e2532:c.instructions+=1;goto B6e2532;
case 0x6e2534:goto L6e2534;
case 0x6e253a:c.instructions+=4;goto B6e253a;
case 0x6e253e:c.instructions+=3;goto B6e253e;
case 0x6e2542:c.instructions+=2;goto B6e2542;
case 0x6e2546:c.instructions+=1;goto B6e2546;
case 0x6e254a:goto L6e254a;
case 0x6e254c:c.instructions+=3;goto B6e254c;
case 0x6e2550:c.instructions+=2;goto B6e2550;
case 0x6e2554:c.instructions+=1;goto B6e2554;
case 0x6e2556:goto L6e2556;
case 0x6e255a:c.instructions+=3;goto B6e255a;
case 0x6e255b:c.instructions+=2;goto B6e255b;
case 0x6e255d:c.instructions+=1;goto B6e255d;
case 0x6e2562:goto L6e2562;
case 0x6e2565:c.instructions+=1;goto B6e2565;
case 0x6e2568:goto L6e2568;
case 0x6e256c:c.instructions+=3;goto B6e256c;
case 0x6e256d:c.instructions+=2;goto B6e256d;
case 0x6e256f:c.instructions+=1;goto B6e256f;
case 0x6e2571:goto L6e2571;
case 0x6e2575:c.instructions+=3;goto B6e2575;
case 0x6e2576:c.instructions+=2;goto B6e2576;
case 0x6e2577:c.instructions+=1;goto B6e2577;
case 0x6e257c:goto L6e257c;
case 0x6e257f:c.instructions+=1;goto B6e257f;
case 0x6e2582:goto L6e2582;
case 0x6e2586:c.instructions+=6;goto B6e2586;
case 0x6e258a:c.instructions+=5;goto B6e258a;
case 0x6e258e:c.instructions+=4;goto B6e258e;
case 0x6e2594:c.instructions+=3;goto B6e2594;
case 0x6e2596:c.instructions+=2;goto B6e2596;
case 0x6e2599:c.instructions+=1;goto B6e2599;
case 0x6e259b:goto L6e259b;
case 0x6e259f:c.instructions+=2;goto B6e259f;
case 0x6e25a1:c.instructions+=1;goto B6e25a1;
case 0x6e25a3:goto L6e25a3;
case 0x6e25a7:c.instructions+=7;goto B6e25a7;
case 0x6e25a8:c.instructions+=6;goto B6e25a8;
case 0x6e25ab:c.instructions+=5;goto B6e25ab;
case 0x6e25ac:c.instructions+=4;goto B6e25ac;
case 0x6e25ad:c.instructions+=3;goto B6e25ad;
case 0x6e25b1:c.instructions+=2;goto B6e25b1;
case 0x6e25b2:c.instructions+=1;goto B6e25b2;
case 0x6e25b7:goto L6e25b7;
case 0x6e25ba:c.instructions+=1;goto B6e25ba;
case 0x6e25bd:goto L6e25bd;
case 0x6e25c1:c.instructions+=3;goto B6e25c1;
case 0x6e25c2:c.instructions+=2;goto B6e25c2;
case 0x6e25c3:c.instructions+=1;goto B6e25c3;
case 0x6e25c8:goto L6e25c8;
case 0x6e25cb:c.instructions+=1;goto B6e25cb;
case 0x6e25d0:goto L6e25d0;
case 0x6e25d4:c.instructions+=10;goto B6e25d4;
case 0x6e25d6:c.instructions+=9;goto B6e25d6;
case 0x6e25db:c.instructions+=8;goto B6e25db;
case 0x6e25dc:c.instructions+=7;goto B6e25dc;
case 0x6e25df:c.instructions+=6;goto B6e25df;
case 0x6e25e2:c.instructions+=5;goto B6e25e2;
case 0x6e25e6:c.instructions+=4;goto B6e25e6;
case 0x6e25e9:c.instructions+=3;goto B6e25e9;
case 0x6e25eb:c.instructions+=2;goto B6e25eb;
case 0x6e25ed:c.instructions+=1;goto B6e25ed;
case 0x6e25ef:goto L6e25ef;
case 0x6e25f3:c.instructions+=2;goto B6e25f3;
case 0x6e25f4:c.instructions+=1;goto B6e25f4;
case 0x6e25f5:goto L6e25f5;
case 0x6e25fa:c.instructions+=6;goto B6e25fa;
case 0x6e25fd:c.instructions+=5;goto B6e25fd;
case 0x6e2600:c.instructions+=4;goto B6e2600;
case 0x6e2604:c.instructions+=3;goto B6e2604;
case 0x6e2605:c.instructions+=2;goto B6e2605;
case 0x6e2607:c.instructions+=1;goto B6e2607;
case 0x6e2609:goto L6e2609;
case 0x6e260a:c.instructions+=1;goto B6e260a;
case 0x6e260b:goto L6e260b;
case 0x6e260c:c.instructions+=1;goto B6e260c;
case 0x6e2610:goto L6e2610;
case 0x6e2611:c.instructions+=15;goto B6e2611;
case 0x6e2615:c.instructions+=14;goto B6e2615;
case 0x6e2616:c.instructions+=13;goto B6e2616;
case 0x6e2618:c.instructions+=12;goto B6e2618;
case 0x6e261d:c.instructions+=11;goto B6e261d;
case 0x6e261f:c.instructions+=10;goto B6e261f;
case 0x6e2624:c.instructions+=9;goto B6e2624;
case 0x6e2627:c.instructions+=8;goto B6e2627;
case 0x6e262a:c.instructions+=7;goto B6e262a;
case 0x6e262e:c.instructions+=6;goto B6e262e;
case 0x6e2632:c.instructions+=5;goto B6e2632;
case 0x6e2635:c.instructions+=4;goto B6e2635;
case 0x6e2637:c.instructions+=3;goto B6e2637;
case 0x6e2639:c.instructions+=2;goto B6e2639;
case 0x6e263c:c.instructions+=1;goto B6e263c;
case 0x6e263e:goto L6e263e;
case 0x6e2640:c.instructions+=4;goto B6e2640;
case 0x6e2644:c.instructions+=3;goto B6e2644;
case 0x6e2646:c.instructions+=2;goto B6e2646;
case 0x6e2647:c.instructions+=1;goto B6e2647;
case 0x6e2650:goto L6e2650;
case 0x6e2653:c.instructions+=10;goto B6e2653;
case 0x6e2658:c.instructions+=9;goto B6e2658;
case 0x6e265a:c.instructions+=8;goto B6e265a;
case 0x6e265b:c.instructions+=7;goto B6e265b;
case 0x6e265e:c.instructions+=6;goto B6e265e;
case 0x6e2662:c.instructions+=5;goto B6e2662;
case 0x6e2665:c.instructions+=4;goto B6e2665;
case 0x6e2668:c.instructions+=3;goto B6e2668;
case 0x6e266c:c.instructions+=2;goto B6e266c;
case 0x6e266e:c.instructions+=1;goto B6e266e;
case 0x6e2670:goto L6e2670;
case 0x6e2671:goto L6e2671;
case 0x6e2672:c.instructions+=2;goto B6e2672;
case 0x6e2673:c.instructions+=1;goto B6e2673;
case 0x6e2680:goto L6e2680;
case 0x6e2681:c.instructions+=2;goto B6e2681;
case 0x6e2683:c.instructions+=1;goto B6e2683;
case 0x6e2688:goto L6e2688;
case 0x6e268a:c.instructions+=10;goto B6e268a;
case 0x6e268d:c.instructions+=9;goto B6e268d;
case 0x6e2690:c.instructions+=8;goto B6e2690;
case 0x6e2693:c.instructions+=7;goto B6e2693;
case 0x6e2696:c.instructions+=6;goto B6e2696;
case 0x6e269d:c.instructions+=5;goto B6e269d;
case 0x6e26a3:c.instructions+=4;goto B6e26a3;
case 0x6e26aa:c.instructions+=3;goto B6e26aa;
case 0x6e26ac:c.instructions+=2;goto B6e26ac;
case 0x6e26ad:c.instructions+=1;goto B6e26ad;
case 0x6e26b0:goto L6e26b0;
case 0x6e26b1:c.instructions+=2;goto B6e26b1;
case 0x6e26b3:c.instructions+=1;goto B6e26b3;
case 0x6e26b8:goto L6e26b8;
case 0x6e26ba:c.instructions+=10;goto B6e26ba;
case 0x6e26bd:c.instructions+=9;goto B6e26bd;
case 0x6e26c0:c.instructions+=8;goto B6e26c0;
case 0x6e26c3:c.instructions+=7;goto B6e26c3;
case 0x6e26c6:c.instructions+=6;goto B6e26c6;
case 0x6e26cd:c.instructions+=5;goto B6e26cd;
case 0x6e26d3:c.instructions+=4;goto B6e26d3;
case 0x6e26da:c.instructions+=3;goto B6e26da;
case 0x6e26dc:c.instructions+=2;goto B6e26dc;
case 0x6e26dd:c.instructions+=1;goto B6e26dd;
case 0x6e26e0:goto L6e26e0;
case 0x6e26e1:c.instructions+=2;goto B6e26e1;
case 0x6e26e3:c.instructions+=1;goto B6e26e3;
case 0x6e26e8:goto L6e26e8;
case 0x6e26ed:c.instructions+=1;goto B6e26ed;
case 0x6e26ef:goto L6e26ef;
case 0x6e26f1:c.instructions+=2;goto B6e26f1;
case 0x6e26f2:c.instructions+=1;goto B6e26f2;
case 0x6e26f8:goto L6e26f8;
case 0x6e26fb:goto L6e26fb;
case 0x6e26fd:c.instructions+=2;goto B6e26fd;
case 0x6e26fe:c.instructions+=1;goto B6e26fe;
case 0x6e2710:goto L6e2710;
case 0x6e2711:c.instructions+=2;goto B6e2711;
case 0x6e2713:c.instructions+=1;goto B6e2713;
case 0x6e2718:goto L6e2718;
case 0x6e271d:c.instructions+=1;goto B6e271d;
case 0x6e271f:goto L6e271f;
case 0x6e2721:c.instructions+=2;goto B6e2721;
case 0x6e2722:c.instructions+=1;goto B6e2722;
case 0x6e2728:goto L6e2728;
case 0x6e272b:goto L6e272b;
case 0x6e272d:c.instructions+=2;goto B6e272d;
case 0x6e272e:c.instructions+=1;goto B6e272e;
case 0x6e2740:goto L6e2740;
case 0x6e2744:c.instructions+=10;goto B6e2744;
case 0x6e2745:c.instructions+=9;goto B6e2745;
case 0x6e2747:c.instructions+=8;goto B6e2747;
case 0x6e274b:c.instructions+=7;goto B6e274b;
case 0x6e274e:c.instructions+=6;goto B6e274e;
case 0x6e274f:c.instructions+=5;goto B6e274f;
case 0x6e2751:c.instructions+=4;goto B6e2751;
case 0x6e2752:c.instructions+=3;goto B6e2752;
case 0x6e2753:c.instructions+=2;goto B6e2753;
case 0x6e2755:c.instructions+=1;goto B6e2755;
case 0x6e275a:goto L6e275a;
case 0x6e275e:c.instructions+=5;goto B6e275e;
case 0x6e275f:c.instructions+=4;goto B6e275f;
case 0x6e2762:c.instructions+=3;goto B6e2762;
case 0x6e2763:c.instructions+=2;goto B6e2763;
case 0x6e2765:c.instructions+=1;goto B6e2765;
case 0x6e276a:goto L6e276a;
case 0x6e276b:c.instructions+=3;goto B6e276b;
case 0x6e276e:c.instructions+=2;goto B6e276e;
case 0x6e2771:c.instructions+=1;goto B6e2771;
case 0x6e2774:goto L6e2774;
case 0x6e2775:c.instructions+=2;goto B6e2775;
case 0x6e2776:c.instructions+=1;goto B6e2776;
case 0x6e2780:goto L6e2780;
case 0x6e2783:c.instructions+=7;goto B6e2783;
case 0x6e2787:c.instructions+=6;goto B6e2787;
case 0x6e278b:c.instructions+=5;goto B6e278b;
case 0x6e278e:c.instructions+=4;goto B6e278e;
case 0x6e2792:c.instructions+=3;goto B6e2792;
case 0x6e2794:c.instructions+=2;goto B6e2794;
case 0x6e2797:c.instructions+=1;goto B6e2797;
case 0x6e2799:goto L6e2799;
case 0x6e279c:c.instructions+=6;goto B6e279c;
case 0x6e27a0:c.instructions+=5;goto B6e27a0;
case 0x6e27a3:c.instructions+=4;goto B6e27a3;
case 0x6e27a9:c.instructions+=3;goto B6e27a9;
case 0x6e27ab:c.instructions+=2;goto B6e27ab;
case 0x6e27ae:c.instructions+=1;goto B6e27ae;
case 0x6e27b0:goto L6e27b0;
case 0x6e27b6:c.instructions+=6;goto B6e27b6;
case 0x6e27ba:c.instructions+=5;goto B6e27ba;
case 0x6e27be:c.instructions+=4;goto B6e27be;
case 0x6e27c2:c.instructions+=3;goto B6e27c2;
case 0x6e27c6:c.instructions+=2;goto B6e27c6;
case 0x6e27ca:c.instructions+=1;goto B6e27ca;
case 0x6e27cc:goto L6e27cc;
case 0x6e27d2:c.instructions+=5;goto B6e27d2;
case 0x6e27d6:c.instructions+=4;goto B6e27d6;
case 0x6e27da:c.instructions+=3;goto B6e27da;
case 0x6e27de:c.instructions+=2;goto B6e27de;
case 0x6e27e2:c.instructions+=1;goto B6e27e2;
case 0x6e27e6:goto L6e27e6;
case 0x6e27ea:c.instructions+=6;goto B6e27ea;
case 0x6e27ee:c.instructions+=5;goto B6e27ee;
case 0x6e27f1:c.instructions+=4;goto B6e27f1;
case 0x6e27f5:c.instructions+=3;goto B6e27f5;
case 0x6e27f8:c.instructions+=2;goto B6e27f8;
case 0x6e27fb:c.instructions+=1;goto B6e27fb;
case 0x6e27fe:goto L6e27fe;
case 0x6e2801:c.instructions+=3;goto B6e2801;
case 0x6e2803:c.instructions+=2;goto B6e2803;
case 0x6e2806:c.instructions+=1;goto B6e2806;
case 0x6e2808:goto L6e2808;
case 0x6e280c:c.instructions+=7;goto B6e280c;
case 0x6e280f:c.instructions+=6;goto B6e280f;
case 0x6e2813:c.instructions+=5;goto B6e2813;
case 0x6e2816:c.instructions+=4;goto B6e2816;
case 0x6e281c:c.instructions+=3;goto B6e281c;
case 0x6e281e:c.instructions+=2;goto B6e281e;
case 0x6e2821:c.instructions+=1;goto B6e2821;
case 0x6e2823:goto L6e2823;
case 0x6e2829:c.instructions+=6;goto B6e2829;
case 0x6e282d:c.instructions+=5;goto B6e282d;
case 0x6e2831:c.instructions+=4;goto B6e2831;
case 0x6e2835:c.instructions+=3;goto B6e2835;
case 0x6e2839:c.instructions+=2;goto B6e2839;
case 0x6e283d:c.instructions+=1;goto B6e283d;
case 0x6e283f:goto L6e283f;
case 0x6e2845:c.instructions+=5;goto B6e2845;
case 0x6e2849:c.instructions+=4;goto B6e2849;
case 0x6e284d:c.instructions+=3;goto B6e284d;
case 0x6e2851:c.instructions+=2;goto B6e2851;
case 0x6e2855:c.instructions+=1;goto B6e2855;
case 0x6e2859:goto L6e2859;
case 0x6e285d:c.instructions+=6;goto B6e285d;
case 0x6e2861:c.instructions+=5;goto B6e2861;
case 0x6e2864:c.instructions+=4;goto B6e2864;
case 0x6e2868:c.instructions+=3;goto B6e2868;
case 0x6e286b:c.instructions+=2;goto B6e286b;
case 0x6e286e:c.instructions+=1;goto B6e286e;
case 0x6e2871:goto L6e2871;
case 0x6e2875:c.instructions+=2;goto B6e2875;
case 0x6e2878:c.instructions+=1;goto B6e2878;
case 0x6e2880:goto L6e2880;
case 0x6e2884:c.instructions+=12;goto B6e2884;
case 0x6e2885:c.instructions+=11;goto B6e2885;
case 0x6e2886:c.instructions+=10;goto B6e2886;
case 0x6e2888:c.instructions+=9;goto B6e2888;
case 0x6e288b:c.instructions+=8;goto B6e288b;
case 0x6e288f:c.instructions+=7;goto B6e288f;
case 0x6e2891:c.instructions+=6;goto B6e2891;
case 0x6e2895:c.instructions+=5;goto B6e2895;
case 0x6e2896:c.instructions+=4;goto B6e2896;
case 0x6e2897:c.instructions+=3;goto B6e2897;
case 0x6e2898:c.instructions+=2;goto B6e2898;
case 0x6e289a:c.instructions+=1;goto B6e289a;
case 0x6e289f:goto L6e289f;
case 0x6e28a0:c.instructions+=5;goto B6e28a0;
case 0x6e28a4:c.instructions+=4;goto B6e28a4;
case 0x6e28a7:c.instructions+=3;goto B6e28a7;
case 0x6e28a8:c.instructions+=2;goto B6e28a8;
case 0x6e28aa:c.instructions+=1;goto B6e28aa;
case 0x6e28af:goto L6e28af;
case 0x6e28b0:c.instructions+=3;goto B6e28b0;
case 0x6e28b3:c.instructions+=2;goto B6e28b3;
case 0x6e28b6:c.instructions+=1;goto B6e28b6;
case 0x6e28b9:goto L6e28b9;
case 0x6e28ba:c.instructions+=2;goto B6e28ba;
case 0x6e28bb:c.instructions+=1;goto B6e28bb;
case 0x6e28c0:goto L6e28c0;
case 0x6e28c4:c.instructions+=12;goto B6e28c4;
case 0x6e28c5:c.instructions+=11;goto B6e28c5;
case 0x6e28c6:c.instructions+=10;goto B6e28c6;
case 0x6e28c8:c.instructions+=9;goto B6e28c8;
case 0x6e28cb:c.instructions+=8;goto B6e28cb;
case 0x6e28cf:c.instructions+=7;goto B6e28cf;
case 0x6e28d1:c.instructions+=6;goto B6e28d1;
case 0x6e28d5:c.instructions+=5;goto B6e28d5;
case 0x6e28d6:c.instructions+=4;goto B6e28d6;
case 0x6e28d7:c.instructions+=3;goto B6e28d7;
case 0x6e28d8:c.instructions+=2;goto B6e28d8;
case 0x6e28da:c.instructions+=1;goto B6e28da;
case 0x6e28df:goto L6e28df;
case 0x6e28e0:c.instructions+=3;goto B6e28e0;
case 0x6e28e3:c.instructions+=2;goto B6e28e3;
case 0x6e28e6:c.instructions+=1;goto B6e28e6;
case 0x6e28e9:goto L6e28e9;
case 0x6e28ea:c.instructions+=2;goto B6e28ea;
case 0x6e28eb:c.instructions+=1;goto B6e28eb;
case 0x6e28f0:goto L6e28f0;
case 0x6e28f4:c.instructions+=10;goto B6e28f4;
case 0x6e28f5:c.instructions+=9;goto B6e28f5;
case 0x6e28f7:c.instructions+=8;goto B6e28f7;
case 0x6e28fb:c.instructions+=7;goto B6e28fb;
case 0x6e28fe:c.instructions+=6;goto B6e28fe;
case 0x6e28ff:c.instructions+=5;goto B6e28ff;
case 0x6e2901:c.instructions+=4;goto B6e2901;
case 0x6e2902:c.instructions+=3;goto B6e2902;
case 0x6e2903:c.instructions+=2;goto B6e2903;
case 0x6e2905:c.instructions+=1;goto B6e2905;
case 0x6e290a:goto L6e290a;
case 0x6e290b:c.instructions+=3;goto B6e290b;
case 0x6e290e:c.instructions+=2;goto B6e290e;
case 0x6e2911:c.instructions+=1;goto B6e2911;
case 0x6e2914:goto L6e2914;
case 0x6e2915:c.instructions+=2;goto B6e2915;
case 0x6e2916:c.instructions+=1;goto B6e2916;
case 0x6e2920:goto L6e2920;
case 0x6e2921:c.instructions+=2;goto B6e2921;
case 0x6e2923:c.instructions+=1;goto B6e2923;
case 0x6e2928:goto L6e2928;
case 0x6e292d:c.instructions+=1;goto B6e292d;
case 0x6e292f:goto L6e292f;
case 0x6e2931:c.instructions+=2;goto B6e2931;
case 0x6e2932:c.instructions+=1;goto B6e2932;
case 0x6e2938:goto L6e2938;
case 0x6e293b:goto L6e293b;
case 0x6e293d:c.instructions+=2;goto B6e293d;
case 0x6e293e:c.instructions+=1;goto B6e293e;
case 0x6e2950:goto L6e2950;
case 0x6e2956:c.instructions+=6;goto B6e2956;
case 0x6e2958:c.instructions+=5;goto B6e2958;
case 0x6e2959:c.instructions+=4;goto B6e2959;
case 0x6e295a:c.instructions+=3;goto B6e295a;
case 0x6e295e:c.instructions+=2;goto B6e295e;
case 0x6e295f:c.instructions+=1;goto B6e295f;
case 0x6e2962:goto L6e2962;
case 0x6e2965:c.instructions+=2;goto B6e2965;
case 0x6e2967:c.instructions+=1;goto B6e2967;
case 0x6e296d:goto L6e296d;
case 0x6e2974:goto L6e2974;
case 0x6e2976:c.instructions+=1;goto B6e2976;
case 0x6e297c:goto L6e297c;
case 0x6e297e:c.instructions+=1;goto B6e297e;
case 0x6e2983:goto L6e2983;
case 0x6e2984:c.instructions+=3;goto B6e2984;
case 0x6e2986:c.instructions+=2;goto B6e2986;
case 0x6e2987:c.instructions+=1;goto B6e2987;
case 0x6e298a:goto L6e298a;
case 0x6e298c:c.instructions+=1;goto B6e298c;
case 0x6e2992:goto L6e2992;
case 0x6e2994:c.instructions+=1;goto B6e2994;
case 0x6e2999:goto L6e2999;
case 0x6e299a:c.instructions+=3;goto B6e299a;
case 0x6e299c:c.instructions+=2;goto B6e299c;
case 0x6e299d:c.instructions+=1;goto B6e299d;
case 0x6e29a0:goto L6e29a0;
case 0x6e29a2:c.instructions+=1;goto B6e29a2;
case 0x6e29a8:goto L6e29a8;
case 0x6e29aa:c.instructions+=1;goto B6e29aa;
case 0x6e29af:goto L6e29af;
case 0x6e29b0:c.instructions+=3;goto B6e29b0;
case 0x6e29b2:c.instructions+=2;goto B6e29b2;
case 0x6e29b3:c.instructions+=1;goto B6e29b3;
case 0x6e29b6:goto L6e29b6;
case 0x6e29b8:c.instructions+=1;goto B6e29b8;
case 0x6e29be:goto L6e29be;
case 0x6e29bf:c.instructions+=6;goto B6e29bf;
case 0x6e29c6:c.instructions+=5;goto B6e29c6;
case 0x6e29cc:c.instructions+=4;goto B6e29cc;
case 0x6e29d3:c.instructions+=3;goto B6e29d3;
case 0x6e29d5:c.instructions+=2;goto B6e29d5;
case 0x6e29d6:c.instructions+=1;goto B6e29d6;
case 0x6e29d9:goto L6e29d9;
case 0x6e29db:c.instructions+=1;goto B6e29db;
case 0x6e29e1:goto L6e29e1;
case 0x6e29e2:c.instructions+=6;goto B6e29e2;
case 0x6e29e9:c.instructions+=5;goto B6e29e9;
case 0x6e29ef:c.instructions+=4;goto B6e29ef;
case 0x6e29f6:c.instructions+=3;goto B6e29f6;
case 0x6e29f8:c.instructions+=2;goto B6e29f8;
case 0x6e29f9:c.instructions+=1;goto B6e29f9;
case 0x6e29fc:goto L6e29fc;
case 0x6e29fe:c.instructions+=1;goto B6e29fe;
case 0x6e2a04:goto L6e2a04;
case 0x6e2a05:c.instructions+=6;goto B6e2a05;
case 0x6e2a0c:c.instructions+=5;goto B6e2a0c;
case 0x6e2a12:c.instructions+=4;goto B6e2a12;
case 0x6e2a19:c.instructions+=3;goto B6e2a19;
case 0x6e2a1b:c.instructions+=2;goto B6e2a1b;
case 0x6e2a1c:c.instructions+=1;goto B6e2a1c;
case 0x6e2a1f:goto L6e2a1f;
case 0x6e2a21:c.instructions+=1;goto B6e2a21;
case 0x6e2a27:goto L6e2a27;
case 0x6e2a29:c.instructions+=1;goto B6e2a29;
case 0x6e2a2e:goto L6e2a2e;
case 0x6e2a2f:c.instructions+=3;goto B6e2a2f;
case 0x6e2a31:c.instructions+=2;goto B6e2a31;
case 0x6e2a32:c.instructions+=1;goto B6e2a32;
case 0x6e2a35:goto L6e2a35;
case 0x6e2a37:c.instructions+=1;goto B6e2a37;
case 0x6e2a3d:goto L6e2a3d;
case 0x6e2a3f:c.instructions+=1;goto B6e2a3f;
case 0x6e2a44:goto L6e2a44;
case 0x6e2a45:c.instructions+=3;goto B6e2a45;
case 0x6e2a47:c.instructions+=2;goto B6e2a47;
case 0x6e2a48:c.instructions+=1;goto B6e2a48;
case 0x6e2a4b:goto L6e2a4b;
case 0x6e2a4d:c.instructions+=1;goto B6e2a4d;
case 0x6e2a53:goto L6e2a53;
case 0x6e2a55:c.instructions+=1;goto B6e2a55;
case 0x6e2a5a:goto L6e2a5a;
case 0x6e2a5b:c.instructions+=3;goto B6e2a5b;
case 0x6e2a5d:c.instructions+=2;goto B6e2a5d;
case 0x6e2a5e:c.instructions+=1;goto B6e2a5e;
case 0x6e2a61:goto L6e2a61;
case 0x6e2a63:c.instructions+=1;goto B6e2a63;
case 0x6e2a69:goto L6e2a69;
case 0x6e2a6b:c.instructions+=1;goto B6e2a6b;
case 0x6e2a70:goto L6e2a70;
case 0x6e2a71:c.instructions+=3;goto B6e2a71;
case 0x6e2a73:c.instructions+=2;goto B6e2a73;
case 0x6e2a74:c.instructions+=1;goto B6e2a74;
case 0x6e2a77:goto L6e2a77;
case 0x6e2a79:c.instructions+=1;goto B6e2a79;
case 0x6e2a7f:goto L6e2a7f;
case 0x6e2a81:c.instructions+=1;goto B6e2a81;
case 0x6e2a86:goto L6e2a86;
case 0x6e2a87:c.instructions+=3;goto B6e2a87;
case 0x6e2a89:c.instructions+=2;goto B6e2a89;
case 0x6e2a8a:c.instructions+=1;goto B6e2a8a;
case 0x6e2a8d:goto L6e2a8d;
case 0x6e2a8f:c.instructions+=1;goto B6e2a8f;
case 0x6e2a95:goto L6e2a95;
case 0x6e2a97:c.instructions+=1;goto B6e2a97;
case 0x6e2a9c:goto L6e2a9c;
case 0x6e2a9d:c.instructions+=3;goto B6e2a9d;
case 0x6e2a9f:c.instructions+=2;goto B6e2a9f;
case 0x6e2aa0:c.instructions+=1;goto B6e2aa0;
case 0x6e2aa3:goto L6e2aa3;
case 0x6e2aa5:c.instructions+=1;goto B6e2aa5;
case 0x6e2aab:goto L6e2aab;
case 0x6e2aad:c.instructions+=1;goto B6e2aad;
case 0x6e2ab2:goto L6e2ab2;
case 0x6e2ab3:c.instructions+=3;goto B6e2ab3;
case 0x6e2ab5:c.instructions+=2;goto B6e2ab5;
case 0x6e2ab6:c.instructions+=1;goto B6e2ab6;
case 0x6e2ab9:goto L6e2ab9;
case 0x6e2abb:c.instructions+=1;goto B6e2abb;
case 0x6e2ac1:goto L6e2ac1;
case 0x6e2ac3:c.instructions+=1;goto B6e2ac3;
case 0x6e2ac8:goto L6e2ac8;
case 0x6e2ac9:c.instructions+=3;goto B6e2ac9;
case 0x6e2acb:c.instructions+=2;goto B6e2acb;
case 0x6e2acc:c.instructions+=1;goto B6e2acc;
case 0x6e2acf:goto L6e2acf;
case 0x6e2ad1:c.instructions+=1;goto B6e2ad1;
case 0x6e2ad7:goto L6e2ad7;
case 0x6e2ad9:c.instructions+=1;goto B6e2ad9;
case 0x6e2ade:goto L6e2ade;
case 0x6e2adf:c.instructions+=3;goto B6e2adf;
case 0x6e2ae1:c.instructions+=2;goto B6e2ae1;
case 0x6e2ae2:c.instructions+=1;goto B6e2ae2;
case 0x6e2ae5:goto L6e2ae5;
case 0x6e2ae7:c.instructions+=1;goto B6e2ae7;
case 0x6e2aed:goto L6e2aed;
case 0x6e2aef:c.instructions+=1;goto B6e2aef;
case 0x6e2af4:goto L6e2af4;
case 0x6e2af5:c.instructions+=3;goto B6e2af5;
case 0x6e2af7:c.instructions+=2;goto B6e2af7;
case 0x6e2af8:c.instructions+=1;goto B6e2af8;
case 0x6e2afb:goto L6e2afb;
case 0x6e2afd:c.instructions+=1;goto B6e2afd;
case 0x6e2aff:goto L6e2aff;
case 0x6e2b01:c.instructions+=1;goto B6e2b01;
case 0x6e2b06:goto L6e2b06;
case 0x6e2b07:c.instructions+=3;goto B6e2b07;
case 0x6e2b09:c.instructions+=2;goto B6e2b09;
case 0x6e2b0a:c.instructions+=1;goto B6e2b0a;
case 0x6e2b0d:goto L6e2b0d;
case 0x6e2b0f:c.instructions+=1;goto B6e2b0f;
case 0x6e2b11:goto L6e2b11;
case 0x6e2b13:c.instructions+=1;goto B6e2b13;
case 0x6e2b18:goto L6e2b18;
case 0x6e2b19:c.instructions+=3;goto B6e2b19;
case 0x6e2b1b:c.instructions+=2;goto B6e2b1b;
case 0x6e2b1c:c.instructions+=1;goto B6e2b1c;
case 0x6e2b1f:goto L6e2b1f;
case 0x6e2b21:c.instructions+=1;goto B6e2b21;
case 0x6e2b23:goto L6e2b23;
case 0x6e2b25:c.instructions+=1;goto B6e2b25;
case 0x6e2b2a:goto L6e2b2a;
case 0x6e2b2b:c.instructions+=3;goto B6e2b2b;
case 0x6e2b2d:c.instructions+=2;goto B6e2b2d;
case 0x6e2b2e:c.instructions+=1;goto B6e2b2e;
case 0x6e2b31:goto L6e2b31;
case 0x6e2b33:c.instructions+=1;goto B6e2b33;
case 0x6e2b35:goto L6e2b35;
case 0x6e2b37:c.instructions+=1;goto B6e2b37;
case 0x6e2b3c:goto L6e2b3c;
case 0x6e2b3d:c.instructions+=3;goto B6e2b3d;
case 0x6e2b3f:c.instructions+=2;goto B6e2b3f;
case 0x6e2b40:c.instructions+=1;goto B6e2b40;
case 0x6e2b43:goto L6e2b43;
case 0x6e2b45:c.instructions+=1;goto B6e2b45;
case 0x6e2b47:goto L6e2b47;
case 0x6e2b49:c.instructions+=1;goto B6e2b49;
case 0x6e2b4e:goto L6e2b4e;
case 0x6e2b4f:c.instructions+=3;goto B6e2b4f;
case 0x6e2b51:c.instructions+=2;goto B6e2b51;
case 0x6e2b52:c.instructions+=1;goto B6e2b52;
case 0x6e2b55:goto L6e2b55;
case 0x6e2b57:c.instructions+=1;goto B6e2b57;
case 0x6e2b59:goto L6e2b59;
case 0x6e2b5b:c.instructions+=1;goto B6e2b5b;
case 0x6e2b60:goto L6e2b60;
case 0x6e2b61:c.instructions+=3;goto B6e2b61;
case 0x6e2b63:c.instructions+=2;goto B6e2b63;
case 0x6e2b64:c.instructions+=1;goto B6e2b64;
case 0x6e2b67:goto L6e2b67;
case 0x6e2b69:c.instructions+=1;goto B6e2b69;
case 0x6e2b6b:goto L6e2b6b;
case 0x6e2b6d:c.instructions+=1;goto B6e2b6d;
case 0x6e2b72:goto L6e2b72;
case 0x6e2b73:c.instructions+=2;goto B6e2b73;
case 0x6e2b75:c.instructions+=1;goto B6e2b75;
case 0x6e2be0:goto L6e2be0;
case 0x6e2be1:c.instructions+=5;goto B6e2be1;
case 0x6e2be2:c.instructions+=4;goto B6e2be2;
case 0x6e2be6:c.instructions+=3;goto B6e2be6;
case 0x6e2be9:c.instructions+=2;goto B6e2be9;
case 0x6e2bea:c.instructions+=1;goto B6e2bea;
case 0x6e2bec:goto L6e2bec;
case 0x6e2bf0:goto L6e2bf0;
case 0x6e2bf3:c.instructions+=5;goto B6e2bf3;
case 0x6e2bf9:c.instructions+=4;goto B6e2bf9;
case 0x6e2bfc:c.instructions+=3;goto B6e2bfc;
case 0x6e2bfe:c.instructions+=2;goto B6e2bfe;
case 0x6e2bff:c.instructions+=1;goto B6e2bff;
case 0x6e2c02:goto L6e2c02;
case 0x6e2c03:c.instructions+=1;goto B6e2c03;
case 0x6e2c05:goto L6e2c05;
case 0x6e2c06:c.instructions+=2;goto B6e2c06;
case 0x6e2c07:c.instructions+=1;goto B6e2c07;
case 0x6e2c10:goto L6e2c10;
case 0x6e2c11:c.instructions+=8;goto B6e2c11;
case 0x6e2c12:c.instructions+=7;goto B6e2c12;
case 0x6e2c13:c.instructions+=6;goto B6e2c13;
case 0x6e2c16:c.instructions+=5;goto B6e2c16;
case 0x6e2c17:c.instructions+=4;goto B6e2c17;
case 0x6e2c19:c.instructions+=3;goto B6e2c19;
case 0x6e2c1a:c.instructions+=2;goto B6e2c1a;
case 0x6e2c1b:c.instructions+=1;goto B6e2c1b;
case 0x6e2c1d:goto L6e2c1d;
case 0x6e2c20:c.instructions+=1;goto B6e2c20;
case 0x6e2c24:goto L6e2c24;
case 0x6e2c28:c.instructions+=4;goto B6e2c28;
case 0x6e2c2b:c.instructions+=3;goto B6e2c2b;
case 0x6e2c2d:c.instructions+=2;goto B6e2c2d;
case 0x6e2c30:c.instructions+=1;goto B6e2c30;
case 0x6e2c34:goto L6e2c34;
case 0x6e2c36:c.instructions+=3;goto B6e2c36;
case 0x6e2c38:c.instructions+=2;goto B6e2c38;
case 0x6e2c3a:c.instructions+=1;goto B6e2c3a;
case 0x6e2c3c:goto L6e2c3c;
case 0x6e2c3e:c.instructions+=1;goto B6e2c3e;
case 0x6e2c40:goto L6e2c40;
case 0x6e2c43:c.instructions+=3;goto B6e2c43;
case 0x6e2c45:c.instructions+=2;goto B6e2c45;
case 0x6e2c48:c.instructions+=1;goto B6e2c48;
case 0x6e2c4a:goto L6e2c4a;
case 0x6e2c4d:c.instructions+=3;goto B6e2c4d;
case 0x6e2c50:c.instructions+=2;goto B6e2c50;
case 0x6e2c52:c.instructions+=1;goto B6e2c52;
case 0x6e2c54:goto L6e2c54;
case 0x6e2c56:c.instructions+=1;goto B6e2c56;
case 0x6e2c58:goto L6e2c58;
case 0x6e2c5a:c.instructions+=1;goto B6e2c5a;
case 0x6e2c5d:goto L6e2c5d;
case 0x6e2c5f:c.instructions+=1;goto B6e2c5f;
case 0x6e2c61:goto L6e2c61;
case 0x6e2c64:c.instructions+=1;goto B6e2c64;
case 0x6e2c66:goto L6e2c66;
case 0x6e2c68:goto L6e2c68;
case 0x6e2c6b:goto L6e2c6b;
case 0x6e2c6d:c.instructions+=1;goto B6e2c6d;
case 0x6e2c6f:goto L6e2c6f;
case 0x6e2c70:c.instructions+=6;goto B6e2c70;
case 0x6e2c71:c.instructions+=5;goto B6e2c71;
case 0x6e2c72:c.instructions+=4;goto B6e2c72;
case 0x6e2c75:c.instructions+=3;goto B6e2c75;
case 0x6e2c76:c.instructions+=2;goto B6e2c76;
case 0x6e2c77:c.instructions+=1;goto B6e2c77;
case 0x6e2c7a:goto L6e2c7a;
case 0x6e2c7c:c.instructions+=6;goto B6e2c7c;
case 0x6e2c7d:c.instructions+=5;goto B6e2c7d;
case 0x6e2c7e:c.instructions+=4;goto B6e2c7e;
case 0x6e2c7f:c.instructions+=3;goto B6e2c7f;
case 0x6e2c80:c.instructions+=2;goto B6e2c80;
case 0x6e2c81:c.instructions+=1;goto B6e2c81;
case 0x6e2c90:goto L6e2c90;
case 0x6e2c91:c.instructions+=6;goto B6e2c91;
case 0x6e2c95:c.instructions+=5;goto B6e2c95;
case 0x6e2c98:c.instructions+=4;goto B6e2c98;
case 0x6e2c9b:c.instructions+=3;goto B6e2c9b;
case 0x6e2c9e:c.instructions+=2;goto B6e2c9e;
case 0x6e2c9f:c.instructions+=1;goto B6e2c9f;
case 0x6e2ca1:goto L6e2ca1;
case 0x6e2ca8:c.instructions+=1;goto B6e2ca8;
case 0x6e2caf:goto L6e2caf;
case 0x6e2cb2:c.instructions+=4;goto B6e2cb2;
case 0x6e2cb5:c.instructions+=3;goto B6e2cb5;
case 0x6e2cb6:c.instructions+=2;goto B6e2cb6;
case 0x6e2cb8:c.instructions+=1;goto B6e2cb8;
case 0x6e2cbb:goto L6e2cbb;
case 0x6e2cbd:c.instructions+=3;goto B6e2cbd;
case 0x6e2cbe:c.instructions+=2;goto B6e2cbe;
case 0x6e2cbf:c.instructions+=1;goto B6e2cbf;
case 0x6e2cc0:goto L6e2cc0;
case 0x6e2cc3:c.instructions+=4;goto B6e2cc3;
case 0x6e2cc6:c.instructions+=3;goto B6e2cc6;
case 0x6e2cc7:c.instructions+=2;goto B6e2cc7;
case 0x6e2cc9:c.instructions+=1;goto B6e2cc9;
case 0x6e2ccc:goto L6e2ccc;
case 0x6e2cce:c.instructions+=3;goto B6e2cce;
case 0x6e2ccf:c.instructions+=2;goto B6e2ccf;
case 0x6e2cd0:c.instructions+=1;goto B6e2cd0;
case 0x6e2cd1:goto L6e2cd1;
case 0x6e2cd4:c.instructions+=4;goto B6e2cd4;
case 0x6e2cd7:c.instructions+=3;goto B6e2cd7;
case 0x6e2cd8:c.instructions+=2;goto B6e2cd8;
case 0x6e2cda:c.instructions+=1;goto B6e2cda;
case 0x6e2cdd:goto L6e2cdd;
case 0x6e2cdf:c.instructions+=3;goto B6e2cdf;
case 0x6e2ce0:c.instructions+=2;goto B6e2ce0;
case 0x6e2ce1:c.instructions+=1;goto B6e2ce1;
case 0x6e2ce2:goto L6e2ce2;
case 0x6e2ce8:c.instructions+=3;goto B6e2ce8;
case 0x6e2cea:c.instructions+=2;goto B6e2cea;
case 0x6e2cec:c.instructions+=1;goto B6e2cec;
case 0x6e2cef:goto L6e2cef;
case 0x6e2cf1:c.instructions+=1;goto B6e2cf1;
case 0x6e2cf3:goto L6e2cf3;
case 0x6e2cf5:c.instructions+=1;goto B6e2cf5;
case 0x6e2cfa:goto L6e2cfa;
case 0x6e2cfc:c.instructions+=4;goto B6e2cfc;
case 0x6e2cfe:c.instructions+=3;goto B6e2cfe;
case 0x6e2cff:c.instructions+=2;goto B6e2cff;
case 0x6e2d01:c.instructions+=1;goto B6e2d01;
case 0x6e2d04:goto L6e2d04;
case 0x6e2d06:c.instructions+=3;goto B6e2d06;
case 0x6e2d07:c.instructions+=2;goto B6e2d07;
case 0x6e2d08:c.instructions+=1;goto B6e2d08;
case 0x6e2d09:goto L6e2d09;
case 0x6e2d0b:c.instructions+=4;goto B6e2d0b;
case 0x6e2d0d:c.instructions+=3;goto B6e2d0d;
case 0x6e2d0e:c.instructions+=2;goto B6e2d0e;
case 0x6e2d10:c.instructions+=1;goto B6e2d10;
case 0x6e2d13:goto L6e2d13;
case 0x6e2d15:c.instructions+=3;goto B6e2d15;
case 0x6e2d16:c.instructions+=2;goto B6e2d16;
case 0x6e2d17:c.instructions+=1;goto B6e2d17;
case 0x6e2d18:goto L6e2d18;
case 0x6e2d19:c.instructions+=3;goto B6e2d19;
case 0x6e2d1b:c.instructions+=2;goto B6e2d1b;
case 0x6e2d1c:c.instructions+=1;goto B6e2d1c;
case 0x6e2d40:goto L6e2d40;
case 0x6e2d43:c.instructions+=4;goto B6e2d43;
case 0x6e2d47:c.instructions+=3;goto B6e2d47;
case 0x6e2d4a:c.instructions+=2;goto B6e2d4a;
case 0x6e2d4b:c.instructions+=1;goto B6e2d4b;
case 0x6e2d50:goto L6e2d50;
case 0x6e2d53:c.instructions+=1;goto B6e2d53;
case 0x6e2d60:goto L6e2d60;
case 0x6e2d63:c.instructions+=79;goto B6e2d63;
case 0x6e2d67:c.instructions+=78;goto B6e2d67;
case 0x6e2d69:c.instructions+=77;goto B6e2d69;
case 0x6e2d6b:c.instructions+=76;goto B6e2d6b;
case 0x6e2d6e:c.instructions+=75;goto B6e2d6e;
case 0x6e2d72:c.instructions+=74;goto B6e2d72;
case 0x6e2d75:c.instructions+=73;goto B6e2d75;
case 0x6e2d77:c.instructions+=72;goto B6e2d77;
case 0x6e2d7b:c.instructions+=71;goto B6e2d7b;
case 0x6e2d7d:c.instructions+=70;goto B6e2d7d;
case 0x6e2d81:c.instructions+=69;goto B6e2d81;
case 0x6e2d83:c.instructions+=68;goto B6e2d83;
case 0x6e2d87:c.instructions+=67;goto B6e2d87;
case 0x6e2d8b:c.instructions+=66;goto B6e2d8b;
case 0x6e2d8f:c.instructions+=65;goto B6e2d8f;
case 0x6e2d91:c.instructions+=64;goto B6e2d91;
case 0x6e2d95:c.instructions+=63;goto B6e2d95;
case 0x6e2d99:c.instructions+=62;goto B6e2d99;
case 0x6e2d9d:c.instructions+=61;goto B6e2d9d;
case 0x6e2da1:c.instructions+=60;goto B6e2da1;
case 0x6e2da3:c.instructions+=59;goto B6e2da3;
case 0x6e2da7:c.instructions+=58;goto B6e2da7;
case 0x6e2dab:c.instructions+=57;goto B6e2dab;
case 0x6e2daf:c.instructions+=56;goto B6e2daf;
case 0x6e2db1:c.instructions+=55;goto B6e2db1;
case 0x6e2db5:c.instructions+=54;goto B6e2db5;
case 0x6e2db9:c.instructions+=53;goto B6e2db9;
case 0x6e2dbd:c.instructions+=52;goto B6e2dbd;
case 0x6e2dc1:c.instructions+=51;goto B6e2dc1;
case 0x6e2dc5:c.instructions+=50;goto B6e2dc5;
case 0x6e2dc9:c.instructions+=49;goto B6e2dc9;
case 0x6e2dcd:c.instructions+=48;goto B6e2dcd;
case 0x6e2dd1:c.instructions+=47;goto B6e2dd1;
case 0x6e2dd5:c.instructions+=46;goto B6e2dd5;
case 0x6e2dd7:c.instructions+=45;goto B6e2dd7;
case 0x6e2dd9:c.instructions+=44;goto B6e2dd9;
case 0x6e2ddf:c.instructions+=43;goto B6e2ddf;
case 0x6e2de3:c.instructions+=42;goto B6e2de3;
case 0x6e2de5:c.instructions+=41;goto B6e2de5;
case 0x6e2de9:c.instructions+=40;goto B6e2de9;
case 0x6e2ded:c.instructions+=39;goto B6e2ded;
case 0x6e2df1:c.instructions+=38;goto B6e2df1;
case 0x6e2df4:c.instructions+=37;goto B6e2df4;
case 0x6e2df8:c.instructions+=36;goto B6e2df8;
case 0x6e2dfc:c.instructions+=35;goto B6e2dfc;
case 0x6e2e00:c.instructions+=34;goto B6e2e00;
case 0x6e2e03:c.instructions+=33;goto B6e2e03;
case 0x6e2e07:c.instructions+=32;goto B6e2e07;
case 0x6e2e0b:c.instructions+=31;goto B6e2e0b;
case 0x6e2e0f:c.instructions+=30;goto B6e2e0f;
case 0x6e2e12:c.instructions+=29;goto B6e2e12;
case 0x6e2e16:c.instructions+=28;goto B6e2e16;
case 0x6e2e1c:c.instructions+=27;goto B6e2e1c;
case 0x6e2e20:c.instructions+=26;goto B6e2e20;
case 0x6e2e23:c.instructions+=25;goto B6e2e23;
case 0x6e2e27:c.instructions+=24;goto B6e2e27;
case 0x6e2e29:c.instructions+=23;goto B6e2e29;
case 0x6e2e2d:c.instructions+=22;goto B6e2e2d;
case 0x6e2e30:c.instructions+=21;goto B6e2e30;
case 0x6e2e34:c.instructions+=20;goto B6e2e34;
case 0x6e2e38:c.instructions+=19;goto B6e2e38;
case 0x6e2e3c:c.instructions+=18;goto B6e2e3c;
case 0x6e2e3f:c.instructions+=17;goto B6e2e3f;
case 0x6e2e43:c.instructions+=16;goto B6e2e43;
case 0x6e2e47:c.instructions+=15;goto B6e2e47;
case 0x6e2e4a:c.instructions+=14;goto B6e2e4a;
case 0x6e2e4e:c.instructions+=13;goto B6e2e4e;
case 0x6e2e54:c.instructions+=12;goto B6e2e54;
case 0x6e2e58:c.instructions+=11;goto B6e2e58;
case 0x6e2e5b:c.instructions+=10;goto B6e2e5b;
case 0x6e2e5f:c.instructions+=9;goto B6e2e5f;
case 0x6e2e62:c.instructions+=8;goto B6e2e62;
case 0x6e2e66:c.instructions+=7;goto B6e2e66;
case 0x6e2e69:c.instructions+=6;goto B6e2e69;
case 0x6e2e6d:c.instructions+=5;goto B6e2e6d;
case 0x6e2e70:c.instructions+=4;goto B6e2e70;
case 0x6e2e73:c.instructions+=3;goto B6e2e73;
case 0x6e2e7a:c.instructions+=2;goto B6e2e7a;
case 0x6e2e7d:c.instructions+=1;goto B6e2e7d;
case 0x6e2e80:goto L6e2e80;
case 0x6e2e84:c.instructions+=11;goto B6e2e84;
case 0x6e2e86:c.instructions+=10;goto B6e2e86;
case 0x6e2e88:c.instructions+=9;goto B6e2e88;
case 0x6e2e89:c.instructions+=8;goto B6e2e89;
case 0x6e2e8c:c.instructions+=7;goto B6e2e8c;
case 0x6e2e91:c.instructions+=6;goto B6e2e91;
case 0x6e2e93:c.instructions+=5;goto B6e2e93;
case 0x6e2e96:c.instructions+=4;goto B6e2e96;
case 0x6e2e99:c.instructions+=3;goto B6e2e99;
case 0x6e2e9c:c.instructions+=2;goto B6e2e9c;
case 0x6e2e9d:c.instructions+=1;goto B6e2e9d;
case 0x6e2ea0:goto L6e2ea0;
case 0x6e2ea3:c.instructions+=12;goto B6e2ea3;
case 0x6e2ea7:c.instructions+=11;goto B6e2ea7;
case 0x6e2ea8:c.instructions+=10;goto B6e2ea8;
case 0x6e2ea9:c.instructions+=9;goto B6e2ea9;
case 0x6e2eab:c.instructions+=8;goto B6e2eab;
case 0x6e2eae:c.instructions+=7;goto B6e2eae;
case 0x6e2eaf:c.instructions+=6;goto B6e2eaf;
case 0x6e2eb1:c.instructions+=5;goto B6e2eb1;
case 0x6e2eb5:c.instructions+=4;goto B6e2eb5;
case 0x6e2eb6:c.instructions+=3;goto B6e2eb6;
case 0x6e2eba:c.instructions+=2;goto B6e2eba;
case 0x6e2ebe:c.instructions+=1;goto B6e2ebe;
case 0x6e2ec4:goto L6e2ec4;
case 0x6e2ec8:c.instructions+=3;goto B6e2ec8;
case 0x6e2eca:c.instructions+=2;goto B6e2eca;
case 0x6e2ecc:c.instructions+=1;goto B6e2ecc;
case 0x6e2ed2:goto L6e2ed2;
case 0x6e2ed5:c.instructions+=1;goto B6e2ed5;
case 0x6e2edb:goto L6e2edb;
case 0x6e2edd:c.instructions+=14;goto B6e2edd;
case 0x6e2ee1:c.instructions+=13;goto B6e2ee1;
case 0x6e2ee6:c.instructions+=12;goto B6e2ee6;
case 0x6e2eea:c.instructions+=11;goto B6e2eea;
case 0x6e2eec:c.instructions+=10;goto B6e2eec;
case 0x6e2ef1:c.instructions+=9;goto B6e2ef1;
case 0x6e2ef4:c.instructions+=8;goto B6e2ef4;
case 0x6e2ef6:c.instructions+=7;goto B6e2ef6;
case 0x6e2ef9:c.instructions+=6;goto B6e2ef9;
case 0x6e2efe:c.instructions+=5;goto B6e2efe;
case 0x6e2f00:c.instructions+=4;goto B6e2f00;
case 0x6e2f02:c.instructions+=3;goto B6e2f02;
case 0x6e2f05:c.instructions+=2;goto B6e2f05;
case 0x6e2f08:c.instructions+=1;goto B6e2f08;
case 0x6e2f0e:goto L6e2f0e;
case 0x6e2f12:c.instructions+=3;goto B6e2f12;
case 0x6e2f15:c.instructions+=2;goto B6e2f15;
case 0x6e2f17:c.instructions+=1;goto B6e2f17;
case 0x6e2f19:goto L6e2f19;
case 0x6e2f1d:c.instructions+=36;goto B6e2f1d;
case 0x6e2f20:c.instructions+=35;goto B6e2f20;
case 0x6e2f23:c.instructions+=34;goto B6e2f23;
case 0x6e2f27:c.instructions+=33;goto B6e2f27;
case 0x6e2f29:c.instructions+=32;goto B6e2f29;
case 0x6e2f2c:c.instructions+=31;goto B6e2f2c;
case 0x6e2f2e:c.instructions+=30;goto B6e2f2e;
case 0x6e2f31:c.instructions+=29;goto B6e2f31;
case 0x6e2f33:c.instructions+=28;goto B6e2f33;
case 0x6e2f36:c.instructions+=27;goto B6e2f36;
case 0x6e2f39:c.instructions+=26;goto B6e2f39;
case 0x6e2f3c:c.instructions+=25;goto B6e2f3c;
case 0x6e2f3e:c.instructions+=24;goto B6e2f3e;
case 0x6e2f41:c.instructions+=23;goto B6e2f41;
case 0x6e2f44:c.instructions+=22;goto B6e2f44;
case 0x6e2f46:c.instructions+=21;goto B6e2f46;
case 0x6e2f49:c.instructions+=20;goto B6e2f49;
case 0x6e2f4c:c.instructions+=19;goto B6e2f4c;
case 0x6e2f4f:c.instructions+=18;goto B6e2f4f;
case 0x6e2f52:c.instructions+=17;goto B6e2f52;
case 0x6e2f55:c.instructions+=16;goto B6e2f55;
case 0x6e2f58:c.instructions+=15;goto B6e2f58;
case 0x6e2f5b:c.instructions+=14;goto B6e2f5b;
case 0x6e2f5e:c.instructions+=13;goto B6e2f5e;
case 0x6e2f61:c.instructions+=12;goto B6e2f61;
case 0x6e2f64:c.instructions+=11;goto B6e2f64;
case 0x6e2f67:c.instructions+=10;goto B6e2f67;
case 0x6e2f6a:c.instructions+=9;goto B6e2f6a;
case 0x6e2f6d:c.instructions+=8;goto B6e2f6d;
case 0x6e2f70:c.instructions+=7;goto B6e2f70;
case 0x6e2f73:c.instructions+=6;goto B6e2f73;
case 0x6e2f76:c.instructions+=5;goto B6e2f76;
case 0x6e2f79:c.instructions+=4;goto B6e2f79;
case 0x6e2f7c:c.instructions+=3;goto B6e2f7c;
case 0x6e2f7e:c.instructions+=2;goto B6e2f7e;
case 0x6e2f81:c.instructions+=1;goto B6e2f81;
case 0x6e2f83:goto L6e2f83;
case 0x6e2f85:goto L6e2f85;
case 0x6e2f88:c.instructions+=6;goto B6e2f88;
case 0x6e2f8a:c.instructions+=5;goto B6e2f8a;
case 0x6e2f8d:c.instructions+=4;goto B6e2f8d;
case 0x6e2f90:c.instructions+=3;goto B6e2f90;
case 0x6e2f92:c.instructions+=2;goto B6e2f92;
case 0x6e2f95:c.instructions+=1;goto B6e2f95;
case 0x6e2f98:goto L6e2f98;
case 0x6e2f9a:c.instructions+=1;goto B6e2f9a;
case 0x6e2f9d:goto L6e2f9d;
case 0x6e2fa0:c.instructions+=8;goto B6e2fa0;
case 0x6e2fa2:c.instructions+=7;goto B6e2fa2;
case 0x6e2fa5:c.instructions+=6;goto B6e2fa5;
case 0x6e2faa:c.instructions+=5;goto B6e2faa;
case 0x6e2fac:c.instructions+=4;goto B6e2fac;
case 0x6e2fae:c.instructions+=3;goto B6e2fae;
case 0x6e2fb1:c.instructions+=2;goto B6e2fb1;
case 0x6e2fb4:c.instructions+=1;goto B6e2fb4;
case 0x6e2fba:goto L6e2fba;
case 0x6e2fbe:c.instructions+=3;goto B6e2fbe;
case 0x6e2fc0:c.instructions+=2;goto B6e2fc0;
case 0x6e2fc2:c.instructions+=1;goto B6e2fc2;
case 0x6e2fc4:goto L6e2fc4;
case 0x6e2fc8:c.instructions+=21;goto B6e2fc8;
case 0x6e2fcb:c.instructions+=20;goto B6e2fcb;
case 0x6e2fce:c.instructions+=19;goto B6e2fce;
case 0x6e2fd2:c.instructions+=18;goto B6e2fd2;
case 0x6e2fd4:c.instructions+=17;goto B6e2fd4;
case 0x6e2fd7:c.instructions+=16;goto B6e2fd7;
case 0x6e2fd9:c.instructions+=15;goto B6e2fd9;
case 0x6e2fdc:c.instructions+=14;goto B6e2fdc;
case 0x6e2fde:c.instructions+=13;goto B6e2fde;
case 0x6e2fe1:c.instructions+=12;goto B6e2fe1;
case 0x6e2fe4:c.instructions+=11;goto B6e2fe4;
case 0x6e2fe7:c.instructions+=10;goto B6e2fe7;
case 0x6e2fe9:c.instructions+=9;goto B6e2fe9;
case 0x6e2fec:c.instructions+=8;goto B6e2fec;
case 0x6e2fef:c.instructions+=7;goto B6e2fef;
case 0x6e2ff1:c.instructions+=6;goto B6e2ff1;
case 0x6e2ff4:c.instructions+=5;goto B6e2ff4;
case 0x6e2ff7:c.instructions+=4;goto B6e2ff7;
case 0x6e2ffa:c.instructions+=3;goto B6e2ffa;
case 0x6e2ffc:c.instructions+=2;goto B6e2ffc;
case 0x6e2fff:c.instructions+=1;goto B6e2fff;
default:missing_instruction(c.pc);}
B6e2000:L6e2000:{c.instructions+=7;NFSU2_TR(0x6e2000);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2001:{NFSU2_TR(0x6e2001);
__builtin_memmove((R+24),(R+4),4);
}
B6e2003:{NFSU2_TR(0x6e2003);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e2006:{NFSU2_TR(0x6e2006);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e2009:{NFSU2_TR(0x6e2009);
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
B6e200b:{NFSU2_TR(0x6e200b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e200d:{NFSU2_TR(0x6e200d);
if(r1(R+518)){{goto L6e2048;}}
}
B6e200f:L6e200f:{c.instructions+=9;NFSU2_TR(0x6e200f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e2012:{NFSU2_TR(0x6e2012);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2013:{NFSU2_TR(0x6e2013);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2014:{NFSU2_TR(0x6e2014);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e2018:{NFSU2_TR(0x6e2018);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2019:{NFSU2_TR(0x6e2019);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e201a:{NFSU2_TR(0x6e201a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e201e:{NFSU2_TR(0x6e201e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e201f:{NFSU2_TR(0x6e201f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2022ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e2022:L6e2022:{c.instructions+=3;NFSU2_TR(0x6e2022);
__builtin_memmove((R+12),(R+0),1);
}
B6e2024:{NFSU2_TR(0x6e2024);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e2026:{NFSU2_TR(0x6e2026);
if(r1(R+518)){{goto L6e2040;}}
}
B6e2028:L6e2028:{c.instructions+=10;NFSU2_TR(0x6e2028);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e202c:{NFSU2_TR(0x6e202c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e202f:{NFSU2_TR(0x6e202f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e2031:{NFSU2_TR(0x6e2031);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e2034:{NFSU2_TR(0x6e2034);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2035:{NFSU2_TR(0x6e2035);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2036:{NFSU2_TR(0x6e2036);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2037:{NFSU2_TR(0x6e2037);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e203a:{NFSU2_TR(0x6e203a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e203b:{NFSU2_TR(0x6e203b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2040ull));
{goto L6e2ea0;}
}
B6e2040:L6e2040:{c.instructions+=5;NFSU2_TR(0x6e2040);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2041:{NFSU2_TR(0x6e2041);
__builtin_memmove((R+0),(R+12),1);
}
B6e2043:{NFSU2_TR(0x6e2043);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e2044:{NFSU2_TR(0x6e2044);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2045:{NFSU2_TR(0x6e2045);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2048:L6e2048:{c.instructions+=2;NFSU2_TR(0x6e2048);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2049:{NFSU2_TR(0x6e2049);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6e2050:L6e2050:{c.instructions+=5;NFSU2_TR(0x6e2050);
u8 U[9];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B6e2055:{NFSU2_TR(0x6e2055);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2056:{NFSU2_TR(0x6e2056);
__builtin_memmove((R+24),(R+4),4);
}
B6e2058:{NFSU2_TR(0x6e2058);
u8 U[4];
w4(U+0,u32(0x7c14f4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e205e:{NFSU2_TR(0x6e205e);
if(r1(R+518)){{goto L6e206c;}}
}
B6e2060:L6e2060:{c.instructions+=3;NFSU2_TR(0x6e2060);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2062:{NFSU2_TR(0x6e2062);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2063:{NFSU2_TR(0x6e2063);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2069ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e2069:L6e2069:{c.instructions+=1;NFSU2_TR(0x6e2069);
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
B6e206c:L6e206c:{c.instructions+=3;NFSU2_TR(0x6e206c);
__builtin_memmove((R+0),(R+24),4);
}
B6e206e:{NFSU2_TR(0x6e206e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e206f:{NFSU2_TR(0x6e206f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2080:L6e2080:{c.instructions+=5;NFSU2_TR(0x6e2080);
u8 U[9];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B6e2085:{NFSU2_TR(0x6e2085);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2086:{NFSU2_TR(0x6e2086);
__builtin_memmove((R+24),(R+4),4);
}
B6e2088:{NFSU2_TR(0x6e2088);
u8 U[4];
w4(U+0,u32(0x7c14f4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e208e:{NFSU2_TR(0x6e208e);
if(r1(R+518)){{goto L6e209c;}}
}
B6e2090:L6e2090:{c.instructions+=3;NFSU2_TR(0x6e2090);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2092:{NFSU2_TR(0x6e2092);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2093:{NFSU2_TR(0x6e2093);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2099ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e2099:L6e2099:{c.instructions+=1;NFSU2_TR(0x6e2099);
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
B6e209c:L6e209c:{c.instructions+=3;NFSU2_TR(0x6e209c);
__builtin_memmove((R+0),(R+24),4);
}
B6e209e:{NFSU2_TR(0x6e209e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e209f:{NFSU2_TR(0x6e209f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e20b0:L6e20b0:{c.instructions+=3;NFSU2_TR(0x6e20b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e20b1:{NFSU2_TR(0x6e20b1);
__builtin_memmove((R+24),(R+4),4);
}
B6e20b3:{NFSU2_TR(0x6e20b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e20b8ull));
TAIL_STATIC(0x6e3ed0u,6e3);
}
B6e20b8:L6e20b8:{c.instructions+=7;NFSU2_TR(0x6e20b8);
u8 U[4];
w4(U+0,u32(0x7c1920ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e20be:{NFSU2_TR(0x6e20be);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6e20c4:{NFSU2_TR(0x6e20c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6e20c8:{NFSU2_TR(0x6e20c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0xeull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e20cf:{NFSU2_TR(0x6e20cf);
__builtin_memmove((R+0),(R+24),4);
}
B6e20d1:{NFSU2_TR(0x6e20d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e20d2:{NFSU2_TR(0x6e20d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e20e0:L6e20e0:{c.instructions+=3;NFSU2_TR(0x6e20e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e20e1:{NFSU2_TR(0x6e20e1);
__builtin_memmove((R+24),(R+4),4);
}
B6e20e3:{NFSU2_TR(0x6e20e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e20e8ull));
TAIL_STATIC(0x6e3ed0u,6e3);
}
B6e20e8:L6e20e8:{c.instructions+=9;NFSU2_TR(0x6e20e8);
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
B6e20ea:{NFSU2_TR(0x6e20ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e20ed:{NFSU2_TR(0x6e20ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6e20f0:{NFSU2_TR(0x6e20f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6e20f3:{NFSU2_TR(0x6e20f3);
u8 U[4];
w4(U+0,u32(0x7c1978ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e20f9:{NFSU2_TR(0x6e20f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e2100:{NFSU2_TR(0x6e2100);
__builtin_memmove((R+0),(R+24),4);
}
B6e2102:{NFSU2_TR(0x6e2102);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2103:{NFSU2_TR(0x6e2103);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2110:L6e2110:{c.instructions+=11;NFSU2_TR(0x6e2110);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2111:{NFSU2_TR(0x6e2111);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e2114:{NFSU2_TR(0x6e2114);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e2118:{NFSU2_TR(0x6e2118);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e211c:{NFSU2_TR(0x6e211c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6e2120:{NFSU2_TR(0x6e2120);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e2124:{NFSU2_TR(0x6e2124);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6e2126:{NFSU2_TR(0x6e2126);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2128:{NFSU2_TR(0x6e2128);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6e212b:{NFSU2_TR(0x6e212b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e212d:{NFSU2_TR(0x6e212d);
if(r1(R+518)){{goto L6e213f;}}
}
B6e212f:L6e212f:{c.instructions+=5;NFSU2_TR(0x6e212f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6e2133:{NFSU2_TR(0x6e2133);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2137:{NFSU2_TR(0x6e2137);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e213b:{NFSU2_TR(0x6e213b);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B6e213d:{NFSU2_TR(0x6e213d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e213f:L6e213f:{c.instructions+=4;NFSU2_TR(0x6e213f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e2141:{NFSU2_TR(0x6e2141);
w1(R+0,u8(0x1ull));
}
B6e2143:{NFSU2_TR(0x6e2143);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e2144:{NFSU2_TR(0x6e2144);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2150:L6e2150:{c.instructions+=3;NFSU2_TR(0x6e2150);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2151:{NFSU2_TR(0x6e2151);
__builtin_memmove((R+24),(R+4),4);
}
B6e2153:{NFSU2_TR(0x6e2153);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2158ull));
TAIL_STATIC(0x6e6730u,6e6);
}
B6e2158:L6e2158:{c.instructions+=2;NFSU2_TR(0x6e2158);
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
B6e215d:{NFSU2_TR(0x6e215d);
if(r1(R+518)){{goto L6e216b;}}
}
B6e215f:L6e215f:{c.instructions+=3;NFSU2_TR(0x6e215f);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2161:{NFSU2_TR(0x6e2161);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2162:{NFSU2_TR(0x6e2162);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2168ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e2168:L6e2168:{c.instructions+=1;NFSU2_TR(0x6e2168);
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
B6e216b:L6e216b:{c.instructions+=3;NFSU2_TR(0x6e216b);
__builtin_memmove((R+0),(R+24),4);
}
B6e216d:{NFSU2_TR(0x6e216d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e216e:{NFSU2_TR(0x6e216e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2180:L6e2180:{c.instructions+=3;NFSU2_TR(0x6e2180);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2181:{NFSU2_TR(0x6e2181);
__builtin_memmove((R+24),(R+4),4);
}
B6e2183:{NFSU2_TR(0x6e2183);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2188ull));
TAIL_STATIC(0x6e3ed0u,6e3);
}
B6e2188:L6e2188:{c.instructions+=6;NFSU2_TR(0x6e2188);
u8 U[4];
w4(U+0,u32(0x7c19d0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e218e:{NFSU2_TR(0x6e218e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e2195:{NFSU2_TR(0x6e2195);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e219c:{NFSU2_TR(0x6e219c);
__builtin_memmove((R+0),(R+24),4);
}
B6e219e:{NFSU2_TR(0x6e219e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e219f:{NFSU2_TR(0x6e219f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e21a0:L6e21a0:{c.instructions+=10;NFSU2_TR(0x6e21a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e21a1:{NFSU2_TR(0x6e21a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e21a4:{NFSU2_TR(0x6e21a4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e21a8:{NFSU2_TR(0x6e21a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e21ac:{NFSU2_TR(0x6e21ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6e21b0:{NFSU2_TR(0x6e21b0);
w1(R+0,u8(0x1ull));
}
B6e21b2:{NFSU2_TR(0x6e21b2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e21b6:{NFSU2_TR(0x6e21b6);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e21b8:{NFSU2_TR(0x6e21b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e21b9:{NFSU2_TR(0x6e21b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e21c0:L6e21c0:{c.instructions+=6;NFSU2_TR(0x6e21c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e21c4:{NFSU2_TR(0x6e21c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e21c6:{NFSU2_TR(0x6e21c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e21c7:{NFSU2_TR(0x6e21c7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e21cb:{NFSU2_TR(0x6e21cb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e21cc:{NFSU2_TR(0x6e21cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e21cfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e21cf:L6e21cf:{c.instructions+=1;NFSU2_TR(0x6e21cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e21e0:L6e21e0:{c.instructions+=4;NFSU2_TR(0x6e21e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e21e1:{NFSU2_TR(0x6e21e1);
__builtin_memmove((R+24),(R+4),4);
}
B6e21e3:{NFSU2_TR(0x6e21e3);
u8 U[4];
w4(U+0,u32(0x7c19d0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e21e9:{NFSU2_TR(0x6e21e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e21eeull));
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6e21ee:L6e21ee:{c.instructions+=2;NFSU2_TR(0x6e21ee);
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
B6e21f3:{NFSU2_TR(0x6e21f3);
if(r1(R+518)){{goto L6e2201;}}
}
B6e21f5:L6e21f5:{c.instructions+=3;NFSU2_TR(0x6e21f5);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e21f7:{NFSU2_TR(0x6e21f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e21f8:{NFSU2_TR(0x6e21f8);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e21feull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e21fe:L6e21fe:{c.instructions+=1;NFSU2_TR(0x6e21fe);
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
B6e2201:L6e2201:{c.instructions+=3;NFSU2_TR(0x6e2201);
__builtin_memmove((R+0),(R+24),4);
}
B6e2203:{NFSU2_TR(0x6e2203);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2204:{NFSU2_TR(0x6e2204);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2210:L6e2210:{c.instructions+=3;NFSU2_TR(0x6e2210);
__builtin_memmove((R+0),gp(0x8aae10),4);
}
B6e2215:{NFSU2_TR(0x6e2215);
u8 U[6];
w1(R+512,u8((r4(R+0))<(m4(0x8ab28c))));
w1(R+523,sborrow<u32>(r4(R+0),m4(0x8ab28c)));
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x8ab28c))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e221b:{NFSU2_TR(0x6e221b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2220:L6e2220:{c.instructions+=3;NFSU2_TR(0x6e2220);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e2226:{NFSU2_TR(0x6e2226);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e2228:{NFSU2_TR(0x6e2228);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e222bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e222b:L6e222b:{c.instructions+=4;NFSU2_TR(0x6e222b);
__builtin_memmove((R+4),gp(0x8ab288),4);
}
B6e2231:{NFSU2_TR(0x6e2231);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e2233:{NFSU2_TR(0x6e2233);
__builtin_memmove((R+0),(R+4),4);
}
B6e2235:{NFSU2_TR(0x6e2235);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2240:L6e2240:{c.instructions+=4;NFSU2_TR(0x6e2240);
u8 U[6];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e2245:{NFSU2_TR(0x6e2245);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8aae18ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6e224c:{NFSU2_TR(0x6e224c);
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
B6e224e:{NFSU2_TR(0x6e224e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e227c;}}
}
B6e2250:L6e2250:{c.instructions+=10;NFSU2_TR(0x6e2250);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x811e00ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6e2258:{NFSU2_TR(0x6e2258);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2259:{NFSU2_TR(0x6e2259);
__builtin_memmove((R+24),gp(0x8aae10),4);
}
B6e225f:{NFSU2_TR(0x6e225f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6e2261:{NFSU2_TR(0x6e2261);
__builtin_memmove((R+0),gp(0x8aae10),4);
}
B6e2266:{NFSU2_TR(0x6e2266);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8aae18ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e226d:{NFSU2_TR(0x6e226d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e226f:{NFSU2_TR(0x6e226f);
__builtin_memmove(gp(0x8aae10),(R+0),4);
}
B6e2274:{NFSU2_TR(0x6e2274);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8aae18ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6e227b:{NFSU2_TR(0x6e227b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e227c:L6e227c:{c.instructions+=3;NFSU2_TR(0x6e227c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e227e:{NFSU2_TR(0x6e227e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8aae18ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e2285:{NFSU2_TR(0x6e2285);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2290:L6e2290:{c.instructions+=6;NFSU2_TR(0x6e2290);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e2294:{NFSU2_TR(0x6e2294);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6e2297:{NFSU2_TR(0x6e2297);
w4(R+4,u32(r1(R+0)));
}
B6e229a:{NFSU2_TR(0x6e229a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8aae80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6e22a1:{NFSU2_TR(0x6e22a1);
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
B6e22a3:{NFSU2_TR(0x6e22a3);
if(r1(R+518)){{goto L6e22b1;}}
}
B6e22a5:L6e22a5:{c.instructions+=3;NFSU2_TR(0x6e22a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e22a7:{NFSU2_TR(0x6e22a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8aae80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e22ae:{NFSU2_TR(0x6e22ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e22b1:L6e22b1:{c.instructions+=8;NFSU2_TR(0x6e22b1);
__builtin_memmove((R+0),gp(0x8aae10),4);
}
B6e22b6:{NFSU2_TR(0x6e22b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e22b8:{NFSU2_TR(0x6e22b8);
__builtin_memmove((R+8),gp(0x8aae10),4);
}
B6e22be:{NFSU2_TR(0x6e22be);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6e22c1:{NFSU2_TR(0x6e22c1);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6e22c5:{NFSU2_TR(0x6e22c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e22c8:{NFSU2_TR(0x6e22c8);
__builtin_memmove(gp(0x8aae10),(R+4),4);
}
B6e22ce:{NFSU2_TR(0x6e22ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e22e0:L6e22e0:{c.instructions+=6;NFSU2_TR(0x6e22e0);
__builtin_memmove((R+0),gp(0x8ab28c),4);
}
B6e22e5:{NFSU2_TR(0x6e22e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e22e6:{NFSU2_TR(0x6e22e6);
__builtin_memmove(gp(0x8aae10),(R+0),4);
}
B6e22eb:{NFSU2_TR(0x6e22eb);
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
B6e22ed:{NFSU2_TR(0x6e22ed);
w4(R+4,u32(0x100ull));
}
B6e22f2:{NFSU2_TR(0x6e22f2);
w4(R+28,u32(0x8aae80ull));
}
B6e22f7:L6e22f7:{c.instructions+=1;NFSU2_TR(0x6e22f7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6e22f9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e22f7u);}goto L6e22f7;}
}
B6e22f9:L6e22f9:{c.instructions+=2;NFSU2_TR(0x6e22f9);
w4(R+4,u32(0x1aull));
}
B6e22fe:{NFSU2_TR(0x6e22fe);
w4(R+28,u32(0x8aae18ull));
}
B6e2303:L6e2303:{c.instructions+=1;NFSU2_TR(0x6e2303);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6e2305;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e2303u);}goto L6e2303;}
}
B6e2305:L6e2305:{c.instructions+=2;NFSU2_TR(0x6e2305);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2306:{NFSU2_TR(0x6e2306);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2310:L6e2310:{c.instructions+=5;NFSU2_TR(0x6e2310);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e2314:{NFSU2_TR(0x6e2314);
u8 U[4];
w4(U+0,u32(0x7c1a24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2319:{NFSU2_TR(0x6e2319);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e231a:{NFSU2_TR(0x6e231a);
__builtin_memmove(gp(0x8ab288),(R+0),4);
}
B6e231f:{NFSU2_TR(0x6e231f);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2325ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e2325:L6e2325:{c.instructions+=6;NFSU2_TR(0x6e2325);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e232b:{NFSU2_TR(0x6e232b);
__builtin_memmove(gp(0x8ab28c),(R+0),4);
}
B6e2330:{NFSU2_TR(0x6e2330);
s2(0x8ab284,u16(0x0ull));
}
B6e2339:{NFSU2_TR(0x6e2339);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e233b:{NFSU2_TR(0x6e233b);
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
B6e233e:{NFSU2_TR(0x6e233e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2341ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e2341:L6e2341:{c.instructions+=1;NFSU2_TR(0x6e2341);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2350:L6e2350:{c.instructions+=5;NFSU2_TR(0x6e2350);
__builtin_memmove((R+0),gp(0x8ab288),4);
}
B6e2355:{NFSU2_TR(0x6e2355);
__builtin_memmove((R+4),gp(0x8ab28c),4);
}
B6e235b:{NFSU2_TR(0x6e235b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e235c:{NFSU2_TR(0x6e235c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e235d:{NFSU2_TR(0x6e235d);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2363ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e2363:L6e2363:{c.instructions+=2;NFSU2_TR(0x6e2363);
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
B6e2366:{NFSU2_TR(0x6e2366);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2370:L6e2370:{c.instructions+=7;NFSU2_TR(0x6e2370);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2371:{NFSU2_TR(0x6e2371);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2372:{NFSU2_TR(0x6e2372);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e2376:{NFSU2_TR(0x6e2376);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+8,u32(r2(U+0)));
}
B6e2379:{NFSU2_TR(0x6e2379);
__builtin_memmove((R+0),(R+8),4);
}
B6e237b:{NFSU2_TR(0x6e237b);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x16ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x16ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x16ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e237e:{NFSU2_TR(0x6e237e);
if(r1(R+518)){{goto L6e23b8;}}
}
B6e2380:L6e2380:{c.instructions+=2;NFSU2_TR(0x6e2380);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e2381:{NFSU2_TR(0x6e2381);
if(r1(R+518)){{goto L6e23b8;}}
}
B6e2383:L6e2383:{c.instructions+=2;NFSU2_TR(0x6e2383);
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
B6e2386:{NFSU2_TR(0x6e2386);
if(r1(R+518)){{goto L6e23a5;}}
}
B6e2388:L6e2388:{c.instructions+=4;NFSU2_TR(0x6e2388);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e238e:{NFSU2_TR(0x6e238e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e2390:{NFSU2_TR(0x6e2390);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2391:{NFSU2_TR(0x6e2391);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2394ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e2394:L6e2394:{c.instructions+=5;NFSU2_TR(0x6e2394);
__builtin_memmove((R+24),(R+0),4);
}
B6e2396:{NFSU2_TR(0x6e2396);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e2398:{NFSU2_TR(0x6e2398);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2399:{NFSU2_TR(0x6e2399);
__builtin_memmove((R+4),(R+24),4);
}
B6e239b:{NFSU2_TR(0x6e239b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e239eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e239e:L6e239e:{c.instructions+=4;NFSU2_TR(0x6e239e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e239f:{NFSU2_TR(0x6e239f);
__builtin_memmove((R+0),(R+24),4);
}
B6e23a1:{NFSU2_TR(0x6e23a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e23a2:{NFSU2_TR(0x6e23a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e23a5:L6e23a5:{c.instructions+=5;NFSU2_TR(0x6e23a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e23a8:{NFSU2_TR(0x6e23a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e23ab:{NFSU2_TR(0x6e23ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e23ac:{NFSU2_TR(0x6e23ac);
__builtin_memmove((R+4),(R+24),4);
}
B6e23ae:{NFSU2_TR(0x6e23ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e23b1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e23b1:L6e23b1:{c.instructions+=4;NFSU2_TR(0x6e23b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e23b2:{NFSU2_TR(0x6e23b2);
__builtin_memmove((R+0),(R+24),4);
}
B6e23b4:{NFSU2_TR(0x6e23b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e23b5:{NFSU2_TR(0x6e23b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e23b8:L6e23b8:{c.instructions+=5;NFSU2_TR(0x6e23b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e23bb:{NFSU2_TR(0x6e23bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e23be:{NFSU2_TR(0x6e23be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e23bf:{NFSU2_TR(0x6e23bf);
__builtin_memmove((R+4),(R+24),4);
}
B6e23c1:{NFSU2_TR(0x6e23c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e23c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e23c4:L6e23c4:{c.instructions+=4;NFSU2_TR(0x6e23c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e23c5:{NFSU2_TR(0x6e23c5);
__builtin_memmove((R+0),(R+24),4);
}
B6e23c7:{NFSU2_TR(0x6e23c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e23c8:{NFSU2_TR(0x6e23c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e23d0:L6e23d0:{c.instructions+=4;NFSU2_TR(0x6e23d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e23d4:{NFSU2_TR(0x6e23d4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B6e23d7:{NFSU2_TR(0x6e23d7);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x19ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x19ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x19ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e23da:{NFSU2_TR(0x6e23da);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6e2421;}}
}
B6e23dc:L6e23dc:{c.instructions+=2;NFSU2_TR(0x6e23dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6e2440ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6e23e3:{NFSU2_TR(0x6e23e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6e2424ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e23ea:L6e23ea:{c.instructions+=2;NFSU2_TR(0x6e23ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e23eb:{NFSU2_TR(0x6e23eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e23f0ull));
TAIL_STATIC(0x6e75a0u,6e7);
}
B6e23f0:L6e23f0:{c.instructions+=2;NFSU2_TR(0x6e23f0);
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
B6e23f3:{NFSU2_TR(0x6e23f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e23f6:L6e23f6:{c.instructions+=2;NFSU2_TR(0x6e23f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e23f7:{NFSU2_TR(0x6e23f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e23fcull));
TAIL_STATIC(0x6e6bf0u,6e6);
}
B6e23fc:L6e23fc:{c.instructions+=2;NFSU2_TR(0x6e23fc);
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
B6e23ff:{NFSU2_TR(0x6e23ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2402:L6e2402:{c.instructions+=2;NFSU2_TR(0x6e2402);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2403:{NFSU2_TR(0x6e2403);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2408ull));
TAIL_STATIC(0x6e70d0u,6e7);
}
B6e2408:L6e2408:{c.instructions+=2;NFSU2_TR(0x6e2408);
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
B6e240b:{NFSU2_TR(0x6e240b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e240e:L6e240e:{c.instructions+=2;NFSU2_TR(0x6e240e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e240f:{NFSU2_TR(0x6e240f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2414ull));
TAIL_STATIC(0x6e70a0u,6e7);
}
B6e2414:L6e2414:{c.instructions+=2;NFSU2_TR(0x6e2414);
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
B6e2417:{NFSU2_TR(0x6e2417);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e241a:L6e241a:{c.instructions+=2;NFSU2_TR(0x6e241a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e241b:{NFSU2_TR(0x6e241b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2420ull));
TAIL_STATIC(0x6e7070u,6e7);
}
B6e2420:L6e2420:{c.instructions+=1;NFSU2_TR(0x6e2420);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e2421:L6e2421:{c.instructions+=1;NFSU2_TR(0x6e2421);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2460:L6e2460:{c.instructions+=6;NFSU2_TR(0x6e2460);
u8 U[6];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e2465:{NFSU2_TR(0x6e2465);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8aae18ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6e246c:{NFSU2_TR(0x6e246c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e2470:{NFSU2_TR(0x6e2470);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6e2472:{NFSU2_TR(0x6e2472);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8aae18ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e2479:{NFSU2_TR(0x6e2479);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2480:L6e2480:{c.instructions+=6;NFSU2_TR(0x6e2480);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e2484:{NFSU2_TR(0x6e2484);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e2487:{NFSU2_TR(0x6e2487);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8aae80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6e248e:{NFSU2_TR(0x6e248e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e2490:{NFSU2_TR(0x6e2490);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8aae80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e2497:{NFSU2_TR(0x6e2497);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e24a0:L6e24a0:{c.instructions+=5;NFSU2_TR(0x6e24a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e24a1:{NFSU2_TR(0x6e24a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e24a5:{NFSU2_TR(0x6e24a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e24a8:{NFSU2_TR(0x6e24a8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x16ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x16ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x16ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e24ab:{NFSU2_TR(0x6e24ab);
if(r1(R+518)){{goto L6e24d2;}}
}
B6e24ad:L6e24ad:{c.instructions+=2;NFSU2_TR(0x6e24ad);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x17ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x17ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e24b0:{NFSU2_TR(0x6e24b0);
if(r1(R+518)){{goto L6e24d2;}}
}
B6e24b2:L6e24b2:{c.instructions+=2;NFSU2_TR(0x6e24b2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x19ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x19ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x19ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e24b5:{NFSU2_TR(0x6e24b5);
if(r1(R+518)){{goto L6e24d2;}}
}
B6e24b7:L6e24b7:{c.instructions+=4;NFSU2_TR(0x6e24b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e24b9:{NFSU2_TR(0x6e24b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e24bb:{NFSU2_TR(0x6e24bb);
__builtin_memmove((R+4),(R+24),4);
}
B6e24bd:{NFSU2_TR(0x6e24bd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e24bfull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6e24bf:L6e24bf:{c.instructions+=7;NFSU2_TR(0x6e24bf);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e24c5:{NFSU2_TR(0x6e24c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e24c7:{NFSU2_TR(0x6e24c7);
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
B6e24c9:{NFSU2_TR(0x6e24c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6e24cd:{NFSU2_TR(0x6e24cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e24ce:{NFSU2_TR(0x6e24ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e24cf:{NFSU2_TR(0x6e24cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e24d2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e24d2:L6e24d2:{c.instructions+=2;NFSU2_TR(0x6e24d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e24d3:{NFSU2_TR(0x6e24d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e24db:L6e24db:{c.instructions+=14;NFSU2_TR(0x6e24db);
}
B6e24dc:{NFSU2_TR(0x6e24dc);
}
B6e24dd:{NFSU2_TR(0x6e24dd);
}
B6e24de:{NFSU2_TR(0x6e24de);
}
B6e24df:{NFSU2_TR(0x6e24df);
}
B6e24e0:{NFSU2_TR(0x6e24e0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e24e4:{NFSU2_TR(0x6e24e4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e24e6:{NFSU2_TR(0x6e24e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e24e9:{NFSU2_TR(0x6e24e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e24ec:{NFSU2_TR(0x6e24ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e24ed:{NFSU2_TR(0x6e24ed);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e24f1:{NFSU2_TR(0x6e24f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e24f2:{NFSU2_TR(0x6e24f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e24f3:{NFSU2_TR(0x6e24f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e24f8ull));
{goto L6e2500;}
}
B6e24f8:L6e24f8:{c.instructions+=1;NFSU2_TR(0x6e24f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2500:L6e2500:{c.instructions+=8;NFSU2_TR(0x6e2500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6e2503:{NFSU2_TR(0x6e2503);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2507:{NFSU2_TR(0x6e2507);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6e250b:{NFSU2_TR(0x6e250b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e2511:{NFSU2_TR(0x6e2511);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2515:{NFSU2_TR(0x6e2515);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e2517:{NFSU2_TR(0x6e2517);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e251a:{NFSU2_TR(0x6e251a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e2534;}}
}
B6e251c:L6e251c:{c.instructions+=6;NFSU2_TR(0x6e251c);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e2522:{NFSU2_TR(0x6e2522);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2526:{NFSU2_TR(0x6e2526);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e252a:{NFSU2_TR(0x6e252a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e252e:{NFSU2_TR(0x6e252e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e2532:{NFSU2_TR(0x6e2532);
{goto L6e254a;}
}
B6e2534:L6e2534:{c.instructions+=5;NFSU2_TR(0x6e2534);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e253a:{NFSU2_TR(0x6e253a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e253e:{NFSU2_TR(0x6e253e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2542:{NFSU2_TR(0x6e2542);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e2546:{NFSU2_TR(0x6e2546);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e254a:L6e254a:{c.instructions+=4;NFSU2_TR(0x6e254a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e254c:{NFSU2_TR(0x6e254c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e2550:{NFSU2_TR(0x6e2550);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2554:{NFSU2_TR(0x6e2554);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e2568;}}
}
B6e2556:L6e2556:{c.instructions+=4;NFSU2_TR(0x6e2556);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e255a:{NFSU2_TR(0x6e255a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e255b:{NFSU2_TR(0x6e255b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e255d:{NFSU2_TR(0x6e255d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2562ull));
{goto L6e25d0;}
}
B6e2562:L6e2562:{c.instructions+=2;NFSU2_TR(0x6e2562);
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
B6e2565:{NFSU2_TR(0x6e2565);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2568:L6e2568:{c.instructions+=4;NFSU2_TR(0x6e2568);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e256c:{NFSU2_TR(0x6e256c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6e256d:{NFSU2_TR(0x6e256d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e256f:{NFSU2_TR(0x6e256f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e2582;}}
}
B6e2571:L6e2571:{c.instructions+=4;NFSU2_TR(0x6e2571);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e2575:{NFSU2_TR(0x6e2575);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2576:{NFSU2_TR(0x6e2576);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2577:{NFSU2_TR(0x6e2577);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e257cull));
{goto L6e25d0;}
}
B6e257c:L6e257c:{c.instructions+=2;NFSU2_TR(0x6e257c);
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
B6e257f:{NFSU2_TR(0x6e257f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2582:L6e2582:{c.instructions+=7;NFSU2_TR(0x6e2582);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e2586:{NFSU2_TR(0x6e2586);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e258a:{NFSU2_TR(0x6e258a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6e258e:{NFSU2_TR(0x6e258e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e2594:{NFSU2_TR(0x6e2594);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e2596:{NFSU2_TR(0x6e2596);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e2599:{NFSU2_TR(0x6e2599);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e25bd;}}
}
B6e259b:L6e259b:{c.instructions+=3;NFSU2_TR(0x6e259b);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e259f:{NFSU2_TR(0x6e259f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e25a1:{NFSU2_TR(0x6e25a1);
if(r1(R+518)){{goto L6e25bd;}}
}
B6e25a3:L6e25a3:{c.instructions+=8;NFSU2_TR(0x6e25a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e25a7:{NFSU2_TR(0x6e25a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e25a8:{NFSU2_TR(0x6e25a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e25ab:{NFSU2_TR(0x6e25ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e25ac:{NFSU2_TR(0x6e25ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e25ad:{NFSU2_TR(0x6e25ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e25b1:{NFSU2_TR(0x6e25b1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e25b2:{NFSU2_TR(0x6e25b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e25b7ull));
{goto L6e2610;}
}
B6e25b7:L6e25b7:{c.instructions+=2;NFSU2_TR(0x6e25b7);
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
B6e25ba:{NFSU2_TR(0x6e25ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e25bd:L6e25bd:{c.instructions+=4;NFSU2_TR(0x6e25bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e25c1:{NFSU2_TR(0x6e25c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e25c2:{NFSU2_TR(0x6e25c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e25c3:{NFSU2_TR(0x6e25c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e25c8ull));
{goto L6e25d0;}
}
B6e25c8:L6e25c8:{c.instructions+=2;NFSU2_TR(0x6e25c8);
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
B6e25cb:{NFSU2_TR(0x6e25cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e25d0:L6e25d0:{c.instructions+=11;NFSU2_TR(0x6e25d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e25d4:{NFSU2_TR(0x6e25d4);
__builtin_memmove((R+0),(R+8),4);
}
B6e25d6:{NFSU2_TR(0x6e25d6);
u8 U[32];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6e25db:{NFSU2_TR(0x6e25db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e25dc:{NFSU2_TR(0x6e25dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e25df:{NFSU2_TR(0x6e25df);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffeull))));
}
B6e25e2:{NFSU2_TR(0x6e25e2);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e25e6:{NFSU2_TR(0x6e25e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6e25e9:{NFSU2_TR(0x6e25e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e25eb:{NFSU2_TR(0x6e25eb);
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
B6e25ed:{NFSU2_TR(0x6e25ed);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e260b;}}
}
B6e25ef:L6e25ef:{c.instructions+=3;NFSU2_TR(0x6e25ef);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e25f3:{NFSU2_TR(0x6e25f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e25f4:{NFSU2_TR(0x6e25f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e25f5:L6e25f5:{c.instructions+=7;NFSU2_TR(0x6e25f5);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+28,u32(r2(U+12)));
}
B6e25fa:{NFSU2_TR(0x6e25fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6e25fd:{NFSU2_TR(0x6e25fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e2600:{NFSU2_TR(0x6e2600);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6e2604:{NFSU2_TR(0x6e2604);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e2605:{NFSU2_TR(0x6e2605);
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
B6e2607:{NFSU2_TR(0x6e2607);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e25f5u);}goto L6e25f5;}}
}
B6e2609:L6e2609:{c.instructions+=2;NFSU2_TR(0x6e2609);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e260a:{NFSU2_TR(0x6e260a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e260b:L6e260b:{c.instructions+=2;NFSU2_TR(0x6e260b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e260c:{NFSU2_TR(0x6e260c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2610:L6e2610:{c.instructions+=16;NFSU2_TR(0x6e2610);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2611:{NFSU2_TR(0x6e2611);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6e2615:{NFSU2_TR(0x6e2615);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2616:{NFSU2_TR(0x6e2616);
__builtin_memmove((R+0),(R+24),4);
}
B6e2618:{NFSU2_TR(0x6e2618);
u8 U[32];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6e261d:{NFSU2_TR(0x6e261d);
__builtin_memmove((R+28),(R+24),4);
}
B6e261f:{NFSU2_TR(0x6e261f);
u8 U[32];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B6e2624:{NFSU2_TR(0x6e2624);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e2627:{NFSU2_TR(0x6e2627);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B6e262a:{NFSU2_TR(0x6e262a);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e262e:{NFSU2_TR(0x6e262e);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e2632:{NFSU2_TR(0x6e2632);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6e2635:{NFSU2_TR(0x6e2635);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e2637:{NFSU2_TR(0x6e2637);
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
B6e2639:{NFSU2_TR(0x6e2639);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e263c:{NFSU2_TR(0x6e263c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e2671;}}
}
B6e263e:L6e263e:{c.instructions+=5;NFSU2_TR(0x6e263e);
__builtin_memmove((R+24),(R+28),4);
}
B6e2640:{NFSU2_TR(0x6e2640);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e2644:{NFSU2_TR(0x6e2644);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B6e2646:{NFSU2_TR(0x6e2646);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2647:{NFSU2_TR(0x6e2647);
{goto L6e2650;}
}
B6e2650:L6e2650:{c.instructions+=11;NFSU2_TR(0x6e2650);
{u32 ea_=u32(r4(R+0)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2653:{NFSU2_TR(0x6e2653);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+12,u32(r2(U+12)));
}
B6e2658:{NFSU2_TR(0x6e2658);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e265a:{NFSU2_TR(0x6e265a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e265b:{NFSU2_TR(0x6e265b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6e265e:{NFSU2_TR(0x6e265e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e2662:{NFSU2_TR(0x6e2662);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e2665:{NFSU2_TR(0x6e2665);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2668:{NFSU2_TR(0x6e2668);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e266c:{NFSU2_TR(0x6e266c);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6e266e:{NFSU2_TR(0x6e266e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e2650u);}goto L6e2650;}}
}
B6e2670:L6e2670:{c.instructions+=1;NFSU2_TR(0x6e2670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e2671:L6e2671:{c.instructions+=3;NFSU2_TR(0x6e2671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2672:{NFSU2_TR(0x6e2672);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2673:{NFSU2_TR(0x6e2673);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2680:L6e2680:{c.instructions+=3;NFSU2_TR(0x6e2680);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2681:{NFSU2_TR(0x6e2681);
__builtin_memmove((R+24),(R+4),4);
}
B6e2683:{NFSU2_TR(0x6e2683);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2688ull));
TAIL_STATIC(0x6e3ed0u,6e3);
}
B6e2688:L6e2688:{c.instructions+=11;NFSU2_TR(0x6e2688);
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
B6e268a:{NFSU2_TR(0x6e268a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e268d:{NFSU2_TR(0x6e268d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2690:{NFSU2_TR(0x6e2690);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2693:{NFSU2_TR(0x6e2693);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2696:{NFSU2_TR(0x6e2696);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e269d:{NFSU2_TR(0x6e269d);
u8 U[4];
w4(U+0,u32(0x7c1a40ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e26a3:{NFSU2_TR(0x6e26a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e26aa:{NFSU2_TR(0x6e26aa);
__builtin_memmove((R+0),(R+24),4);
}
B6e26ac:{NFSU2_TR(0x6e26ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e26ad:{NFSU2_TR(0x6e26ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e26b0:L6e26b0:{c.instructions+=3;NFSU2_TR(0x6e26b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e26b1:{NFSU2_TR(0x6e26b1);
__builtin_memmove((R+24),(R+4),4);
}
B6e26b3:{NFSU2_TR(0x6e26b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e26b8ull));
TAIL_STATIC(0x6e3ed0u,6e3);
}
B6e26b8:L6e26b8:{c.instructions+=11;NFSU2_TR(0x6e26b8);
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
B6e26ba:{NFSU2_TR(0x6e26ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e26bd:{NFSU2_TR(0x6e26bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e26c0:{NFSU2_TR(0x6e26c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e26c3:{NFSU2_TR(0x6e26c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e26c6:{NFSU2_TR(0x6e26c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e26cd:{NFSU2_TR(0x6e26cd);
u8 U[4];
w4(U+0,u32(0x7c1a98ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e26d3:{NFSU2_TR(0x6e26d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e26da:{NFSU2_TR(0x6e26da);
__builtin_memmove((R+0),(R+24),4);
}
B6e26dc:{NFSU2_TR(0x6e26dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e26dd:{NFSU2_TR(0x6e26dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e26e0:L6e26e0:{c.instructions+=3;NFSU2_TR(0x6e26e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e26e1:{NFSU2_TR(0x6e26e1);
__builtin_memmove((R+24),(R+4),4);
}
B6e26e3:{NFSU2_TR(0x6e26e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e26e8ull));
TAIL_STATIC(0x6e4550u,6e4);
}
B6e26e8:L6e26e8:{c.instructions+=2;NFSU2_TR(0x6e26e8);
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
B6e26ed:{NFSU2_TR(0x6e26ed);
if(r1(R+518)){{goto L6e26fb;}}
}
B6e26ef:L6e26ef:{c.instructions+=3;NFSU2_TR(0x6e26ef);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e26f1:{NFSU2_TR(0x6e26f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e26f2:{NFSU2_TR(0x6e26f2);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e26f8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e26f8:L6e26f8:{c.instructions+=1;NFSU2_TR(0x6e26f8);
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
B6e26fb:L6e26fb:{c.instructions+=3;NFSU2_TR(0x6e26fb);
__builtin_memmove((R+0),(R+24),4);
}
B6e26fd:{NFSU2_TR(0x6e26fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e26fe:{NFSU2_TR(0x6e26fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2710:L6e2710:{c.instructions+=3;NFSU2_TR(0x6e2710);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2711:{NFSU2_TR(0x6e2711);
__builtin_memmove((R+24),(R+4),4);
}
B6e2713:{NFSU2_TR(0x6e2713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2718ull));
TAIL_STATIC(0x6e46f0u,6e4);
}
B6e2718:L6e2718:{c.instructions+=2;NFSU2_TR(0x6e2718);
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
B6e271d:{NFSU2_TR(0x6e271d);
if(r1(R+518)){{goto L6e272b;}}
}
B6e271f:L6e271f:{c.instructions+=3;NFSU2_TR(0x6e271f);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2721:{NFSU2_TR(0x6e2721);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2722:{NFSU2_TR(0x6e2722);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2728ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e2728:L6e2728:{c.instructions+=1;NFSU2_TR(0x6e2728);
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
B6e272b:L6e272b:{c.instructions+=3;NFSU2_TR(0x6e272b);
__builtin_memmove((R+0),(R+24),4);
}
B6e272d:{NFSU2_TR(0x6e272d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e272e:{NFSU2_TR(0x6e272e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2740:L6e2740:{c.instructions+=11;NFSU2_TR(0x6e2740);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e2744:{NFSU2_TR(0x6e2744);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2745:{NFSU2_TR(0x6e2745);
__builtin_memmove((R+24),(R+4),4);
}
B6e2747:{NFSU2_TR(0x6e2747);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e274b:{NFSU2_TR(0x6e274b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e274e:{NFSU2_TR(0x6e274e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e274f:{NFSU2_TR(0x6e274f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6e2751:{NFSU2_TR(0x6e2751);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2752:{NFSU2_TR(0x6e2752);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2753:{NFSU2_TR(0x6e2753);
__builtin_memmove((R+4),(R+24),4);
}
B6e2755:{NFSU2_TR(0x6e2755);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e275aull));
{goto L6e2780;}
}
B6e275a:L6e275a:{c.instructions+=6;NFSU2_TR(0x6e275a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e275e:{NFSU2_TR(0x6e275e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e275f:{NFSU2_TR(0x6e275f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2762:{NFSU2_TR(0x6e2762);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2763:{NFSU2_TR(0x6e2763);
__builtin_memmove((R+4),(R+24),4);
}
B6e2765:{NFSU2_TR(0x6e2765);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e276aull));
{goto L6e2780;}
}
B6e276a:L6e276a:{c.instructions+=4;NFSU2_TR(0x6e276a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e276b:{NFSU2_TR(0x6e276b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e276e:{NFSU2_TR(0x6e276e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2771:{NFSU2_TR(0x6e2771);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2774ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e2774:L6e2774:{c.instructions+=3;NFSU2_TR(0x6e2774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2775:{NFSU2_TR(0x6e2775);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2776:{NFSU2_TR(0x6e2776);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2780:L6e2780:{c.instructions+=8;NFSU2_TR(0x6e2780);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6e2783:{NFSU2_TR(0x6e2783);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2787:{NFSU2_TR(0x6e2787);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6e278b:{NFSU2_TR(0x6e278b);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e278e:{NFSU2_TR(0x6e278e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2792:{NFSU2_TR(0x6e2792);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e2794:{NFSU2_TR(0x6e2794);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e2797:{NFSU2_TR(0x6e2797);
if(r1(R+514)){{goto L6e27fe;}}
}
B6e2799:L6e2799:{c.instructions+=7;NFSU2_TR(0x6e2799);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e279c:{NFSU2_TR(0x6e279c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6e27a0:{NFSU2_TR(0x6e27a0);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6e27a3:{NFSU2_TR(0x6e27a3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6e27a9:{NFSU2_TR(0x6e27a9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e27ab:{NFSU2_TR(0x6e27ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e27ae:{NFSU2_TR(0x6e27ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e27cc;}}
}
B6e27b0:L6e27b0:{c.instructions+=7;NFSU2_TR(0x6e27b0);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e27b6:{NFSU2_TR(0x6e27b6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e27ba:{NFSU2_TR(0x6e27ba);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e27be:{NFSU2_TR(0x6e27be);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e27c2:{NFSU2_TR(0x6e27c2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e27c6:{NFSU2_TR(0x6e27c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e27ca:{NFSU2_TR(0x6e27ca);
{goto L6e27e6;}
}
B6e27cc:L6e27cc:{c.instructions+=6;NFSU2_TR(0x6e27cc);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e27d2:{NFSU2_TR(0x6e27d2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e27d6:{NFSU2_TR(0x6e27d6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e27da:{NFSU2_TR(0x6e27da);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e27de:{NFSU2_TR(0x6e27de);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e27e2:{NFSU2_TR(0x6e27e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e27e6:L6e27e6:{c.instructions+=7;NFSU2_TR(0x6e27e6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e27ea:{NFSU2_TR(0x6e27ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e27ee:{NFSU2_TR(0x6e27ee);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e27f1:{NFSU2_TR(0x6e27f1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e27f5:{NFSU2_TR(0x6e27f5);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e27f8:{NFSU2_TR(0x6e27f8);
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
B6e27fb:{NFSU2_TR(0x6e27fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e27fe:L6e27fe:{c.instructions+=4;NFSU2_TR(0x6e27fe);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e2801:{NFSU2_TR(0x6e2801);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e2803:{NFSU2_TR(0x6e2803);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e2806:{NFSU2_TR(0x6e2806);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e2871;}}
}
B6e2808:L6e2808:{c.instructions+=8;NFSU2_TR(0x6e2808);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e280c:{NFSU2_TR(0x6e280c);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e280f:{NFSU2_TR(0x6e280f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6e2813:{NFSU2_TR(0x6e2813);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6e2816:{NFSU2_TR(0x6e2816);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6e281c:{NFSU2_TR(0x6e281c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e281e:{NFSU2_TR(0x6e281e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e2821:{NFSU2_TR(0x6e2821);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e283f;}}
}
B6e2823:L6e2823:{c.instructions+=7;NFSU2_TR(0x6e2823);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e2829:{NFSU2_TR(0x6e2829);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e282d:{NFSU2_TR(0x6e282d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2831:{NFSU2_TR(0x6e2831);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e2835:{NFSU2_TR(0x6e2835);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e2839:{NFSU2_TR(0x6e2839);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e283d:{NFSU2_TR(0x6e283d);
{goto L6e2859;}
}
B6e283f:L6e283f:{c.instructions+=6;NFSU2_TR(0x6e283f);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e2845:{NFSU2_TR(0x6e2845);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2849:{NFSU2_TR(0x6e2849);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e284d:{NFSU2_TR(0x6e284d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e2851:{NFSU2_TR(0x6e2851);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e2855:{NFSU2_TR(0x6e2855);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2859:L6e2859:{c.instructions+=7;NFSU2_TR(0x6e2859);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e285d:{NFSU2_TR(0x6e285d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e2861:{NFSU2_TR(0x6e2861);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e2864:{NFSU2_TR(0x6e2864);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e2868:{NFSU2_TR(0x6e2868);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e286b:{NFSU2_TR(0x6e286b);
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
B6e286e:{NFSU2_TR(0x6e286e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2871:L6e2871:{c.instructions+=3;NFSU2_TR(0x6e2871);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2875:{NFSU2_TR(0x6e2875);
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
B6e2878:{NFSU2_TR(0x6e2878);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2880:L6e2880:{c.instructions+=13;NFSU2_TR(0x6e2880);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e2884:{NFSU2_TR(0x6e2884);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2885:{NFSU2_TR(0x6e2885);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2886:{NFSU2_TR(0x6e2886);
__builtin_memmove((R+24),(R+4),4);
}
B6e2888:{NFSU2_TR(0x6e2888);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e288b:{NFSU2_TR(0x6e288b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e288f:{NFSU2_TR(0x6e288f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6e2891:{NFSU2_TR(0x6e2891);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e2895:{NFSU2_TR(0x6e2895);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2896:{NFSU2_TR(0x6e2896);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2897:{NFSU2_TR(0x6e2897);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2898:{NFSU2_TR(0x6e2898);
__builtin_memmove((R+4),(R+24),4);
}
B6e289a:{NFSU2_TR(0x6e289a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e289full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e2780u);}goto L6e2780;}
}
B6e289f:L6e289f:{c.instructions+=6;NFSU2_TR(0x6e289f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e28a0:{NFSU2_TR(0x6e28a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e28a4:{NFSU2_TR(0x6e28a4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e28a7:{NFSU2_TR(0x6e28a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e28a8:{NFSU2_TR(0x6e28a8);
__builtin_memmove((R+4),(R+24),4);
}
B6e28aa:{NFSU2_TR(0x6e28aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e28afull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e2780u);}goto L6e2780;}
}
B6e28af:L6e28af:{c.instructions+=4;NFSU2_TR(0x6e28af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e28b0:{NFSU2_TR(0x6e28b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e28b3:{NFSU2_TR(0x6e28b3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e28b6:{NFSU2_TR(0x6e28b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e28b9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e28b9:L6e28b9:{c.instructions+=3;NFSU2_TR(0x6e28b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e28ba:{NFSU2_TR(0x6e28ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e28bb:{NFSU2_TR(0x6e28bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e28c0:L6e28c0:{c.instructions+=13;NFSU2_TR(0x6e28c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e28c4:{NFSU2_TR(0x6e28c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e28c5:{NFSU2_TR(0x6e28c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e28c6:{NFSU2_TR(0x6e28c6);
__builtin_memmove((R+24),(R+4),4);
}
B6e28c8:{NFSU2_TR(0x6e28c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e28cb:{NFSU2_TR(0x6e28cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e28cf:{NFSU2_TR(0x6e28cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6e28d1:{NFSU2_TR(0x6e28d1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e28d5:{NFSU2_TR(0x6e28d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e28d6:{NFSU2_TR(0x6e28d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e28d7:{NFSU2_TR(0x6e28d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e28d8:{NFSU2_TR(0x6e28d8);
__builtin_memmove((R+4),(R+24),4);
}
B6e28da:{NFSU2_TR(0x6e28da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e28dfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e2780u);}goto L6e2780;}
}
B6e28df:L6e28df:{c.instructions+=4;NFSU2_TR(0x6e28df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e28e0:{NFSU2_TR(0x6e28e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e28e3:{NFSU2_TR(0x6e28e3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e28e6:{NFSU2_TR(0x6e28e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e28e9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e28e9:L6e28e9:{c.instructions+=3;NFSU2_TR(0x6e28e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e28ea:{NFSU2_TR(0x6e28ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e28eb:{NFSU2_TR(0x6e28eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e28f0:L6e28f0:{c.instructions+=11;NFSU2_TR(0x6e28f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e28f4:{NFSU2_TR(0x6e28f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e28f5:{NFSU2_TR(0x6e28f5);
__builtin_memmove((R+24),(R+4),4);
}
B6e28f7:{NFSU2_TR(0x6e28f7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e28fb:{NFSU2_TR(0x6e28fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e28fe:{NFSU2_TR(0x6e28fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e28ff:{NFSU2_TR(0x6e28ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6e2901:{NFSU2_TR(0x6e2901);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2902:{NFSU2_TR(0x6e2902);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2903:{NFSU2_TR(0x6e2903);
__builtin_memmove((R+4),(R+24),4);
}
B6e2905:{NFSU2_TR(0x6e2905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e290aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e2780u);}goto L6e2780;}
}
B6e290a:L6e290a:{c.instructions+=4;NFSU2_TR(0x6e290a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e290b:{NFSU2_TR(0x6e290b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e290e:{NFSU2_TR(0x6e290e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2911:{NFSU2_TR(0x6e2911);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2914ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e2914:L6e2914:{c.instructions+=3;NFSU2_TR(0x6e2914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2915:{NFSU2_TR(0x6e2915);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2916:{NFSU2_TR(0x6e2916);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2920:L6e2920:{c.instructions+=3;NFSU2_TR(0x6e2920);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2921:{NFSU2_TR(0x6e2921);
__builtin_memmove((R+24),(R+4),4);
}
B6e2923:{NFSU2_TR(0x6e2923);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2928ull));
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6e2928:L6e2928:{c.instructions+=2;NFSU2_TR(0x6e2928);
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
B6e292d:{NFSU2_TR(0x6e292d);
if(r1(R+518)){{goto L6e293b;}}
}
B6e292f:L6e292f:{c.instructions+=3;NFSU2_TR(0x6e292f);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2931:{NFSU2_TR(0x6e2931);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2932:{NFSU2_TR(0x6e2932);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2938ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e2938:L6e2938:{c.instructions+=1;NFSU2_TR(0x6e2938);
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
B6e293b:L6e293b:{c.instructions+=3;NFSU2_TR(0x6e293b);
__builtin_memmove((R+0),(R+24),4);
}
B6e293d:{NFSU2_TR(0x6e293d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e293e:{NFSU2_TR(0x6e293e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2950:L6e2950:{c.instructions+=7;NFSU2_TR(0x6e2950);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e2956:{NFSU2_TR(0x6e2956);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e2958:{NFSU2_TR(0x6e2958);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2959:{NFSU2_TR(0x6e2959);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e295a:{NFSU2_TR(0x6e295a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e295e:{NFSU2_TR(0x6e295e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e295f:{NFSU2_TR(0x6e295f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2962ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e2962:L6e2962:{c.instructions+=3;NFSU2_TR(0x6e2962);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6e2965:{NFSU2_TR(0x6e2965);
__builtin_memmove((R+24),(R+0),4);
}
B6e2967:{NFSU2_TR(0x6e2967);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6e2b72;}}
}
B6e296d:L6e296d:{c.instructions+=1;NFSU2_TR(0x6e296d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6e2b7cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e2974:L6e2974:{c.instructions+=2;NFSU2_TR(0x6e2974);
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
B6e2976:{NFSU2_TR(0x6e2976);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e297c:L6e297c:{c.instructions+=2;NFSU2_TR(0x6e297c);
__builtin_memmove((R+4),(R+24),4);
}
B6e297e:{NFSU2_TR(0x6e297e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2983ull));
TAIL_STATIC(0x6e1be0u,6e1);
}
B6e2983:L6e2983:{c.instructions+=4;NFSU2_TR(0x6e2983);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2984:{NFSU2_TR(0x6e2984);
__builtin_memmove((R+0),(R+24),4);
}
B6e2986:{NFSU2_TR(0x6e2986);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2987:{NFSU2_TR(0x6e2987);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e298a:L6e298a:{c.instructions+=2;NFSU2_TR(0x6e298a);
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
B6e298c:{NFSU2_TR(0x6e298c);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e2992:L6e2992:{c.instructions+=2;NFSU2_TR(0x6e2992);
__builtin_memmove((R+4),(R+24),4);
}
B6e2994:{NFSU2_TR(0x6e2994);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2999ull));
TAIL_STATIC(0x6e1c50u,6e1);
}
B6e2999:L6e2999:{c.instructions+=4;NFSU2_TR(0x6e2999);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e299a:{NFSU2_TR(0x6e299a);
__builtin_memmove((R+0),(R+24),4);
}
B6e299c:{NFSU2_TR(0x6e299c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e299d:{NFSU2_TR(0x6e299d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e29a0:L6e29a0:{c.instructions+=2;NFSU2_TR(0x6e29a0);
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
B6e29a2:{NFSU2_TR(0x6e29a2);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e29a8:L6e29a8:{c.instructions+=2;NFSU2_TR(0x6e29a8);
__builtin_memmove((R+4),(R+24),4);
}
B6e29aa:{NFSU2_TR(0x6e29aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e29afull));
TAIL_STATIC(0x6e1db0u,6e1);
}
B6e29af:L6e29af:{c.instructions+=4;NFSU2_TR(0x6e29af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e29b0:{NFSU2_TR(0x6e29b0);
__builtin_memmove((R+0),(R+24),4);
}
B6e29b2:{NFSU2_TR(0x6e29b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e29b3:{NFSU2_TR(0x6e29b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e29b6:L6e29b6:{c.instructions+=2;NFSU2_TR(0x6e29b6);
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
B6e29b8:{NFSU2_TR(0x6e29b8);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e29be:L6e29be:{c.instructions+=7;NFSU2_TR(0x6e29be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e29bf:{NFSU2_TR(0x6e29bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e29c6:{NFSU2_TR(0x6e29c6);
u8 U[4];
w4(U+0,u32(0x7c1890ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e29cc:{NFSU2_TR(0x6e29cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e29d3:{NFSU2_TR(0x6e29d3);
__builtin_memmove((R+0),(R+24),4);
}
B6e29d5:{NFSU2_TR(0x6e29d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e29d6:{NFSU2_TR(0x6e29d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e29d9:L6e29d9:{c.instructions+=2;NFSU2_TR(0x6e29d9);
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
B6e29db:{NFSU2_TR(0x6e29db);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e29e1:L6e29e1:{c.instructions+=7;NFSU2_TR(0x6e29e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e29e2:{NFSU2_TR(0x6e29e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e29e9:{NFSU2_TR(0x6e29e9);
u8 U[4];
w4(U+0,u32(0x7c18d8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e29ef:{NFSU2_TR(0x6e29ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e29f6:{NFSU2_TR(0x6e29f6);
__builtin_memmove((R+0),(R+24),4);
}
B6e29f8:{NFSU2_TR(0x6e29f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e29f9:{NFSU2_TR(0x6e29f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e29fc:L6e29fc:{c.instructions+=2;NFSU2_TR(0x6e29fc);
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
B6e29fe:{NFSU2_TR(0x6e29fe);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e2a04:L6e2a04:{c.instructions+=7;NFSU2_TR(0x6e2a04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2a05:{NFSU2_TR(0x6e2a05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e2a0c:{NFSU2_TR(0x6e2a0c);
u8 U[4];
w4(U+0,u32(0x7c17b8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e2a12:{NFSU2_TR(0x6e2a12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e2a19:{NFSU2_TR(0x6e2a19);
__builtin_memmove((R+0),(R+24),4);
}
B6e2a1b:{NFSU2_TR(0x6e2a1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2a1c:{NFSU2_TR(0x6e2a1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2a1f:L6e2a1f:{c.instructions+=2;NFSU2_TR(0x6e2a1f);
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
B6e2a21:{NFSU2_TR(0x6e2a21);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e2a27:L6e2a27:{c.instructions+=2;NFSU2_TR(0x6e2a27);
__builtin_memmove((R+4),(R+24),4);
}
B6e2a29:{NFSU2_TR(0x6e2a29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2a2eull));
TAIL_STATIC(0x6e1f20u,6e1);
}
B6e2a2e:L6e2a2e:{c.instructions+=4;NFSU2_TR(0x6e2a2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2a2f:{NFSU2_TR(0x6e2a2f);
__builtin_memmove((R+0),(R+24),4);
}
B6e2a31:{NFSU2_TR(0x6e2a31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2a32:{NFSU2_TR(0x6e2a32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2a35:L6e2a35:{c.instructions+=2;NFSU2_TR(0x6e2a35);
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
B6e2a37:{NFSU2_TR(0x6e2a37);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e2a3d:L6e2a3d:{c.instructions+=2;NFSU2_TR(0x6e2a3d);
__builtin_memmove((R+4),(R+24),4);
}
B6e2a3f:{NFSU2_TR(0x6e2a3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2a44ull));
TAIL_STATIC(0x6e1f80u,6e1);
}
B6e2a44:L6e2a44:{c.instructions+=4;NFSU2_TR(0x6e2a44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2a45:{NFSU2_TR(0x6e2a45);
__builtin_memmove((R+0),(R+24),4);
}
B6e2a47:{NFSU2_TR(0x6e2a47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2a48:{NFSU2_TR(0x6e2a48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2a4b:L6e2a4b:{c.instructions+=2;NFSU2_TR(0x6e2a4b);
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
B6e2a4d:{NFSU2_TR(0x6e2a4d);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e2a53:L6e2a53:{c.instructions+=2;NFSU2_TR(0x6e2a53);
__builtin_memmove((R+4),(R+24),4);
}
B6e2a55:{NFSU2_TR(0x6e2a55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2a5aull));
TAIL_STATIC(0x6eeb80u,6ee);
}
B6e2a5a:L6e2a5a:{c.instructions+=4;NFSU2_TR(0x6e2a5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2a5b:{NFSU2_TR(0x6e2a5b);
__builtin_memmove((R+0),(R+24),4);
}
B6e2a5d:{NFSU2_TR(0x6e2a5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2a5e:{NFSU2_TR(0x6e2a5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2a61:L6e2a61:{c.instructions+=2;NFSU2_TR(0x6e2a61);
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
B6e2a63:{NFSU2_TR(0x6e2a63);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e2a69:L6e2a69:{c.instructions+=2;NFSU2_TR(0x6e2a69);
__builtin_memmove((R+4),(R+24),4);
}
B6e2a6b:{NFSU2_TR(0x6e2a6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2a70ull));
TAIL_STATIC(0x6ee100u,6ee);
}
B6e2a70:L6e2a70:{c.instructions+=4;NFSU2_TR(0x6e2a70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2a71:{NFSU2_TR(0x6e2a71);
__builtin_memmove((R+0),(R+24),4);
}
B6e2a73:{NFSU2_TR(0x6e2a73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2a74:{NFSU2_TR(0x6e2a74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2a77:L6e2a77:{c.instructions+=2;NFSU2_TR(0x6e2a77);
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
B6e2a79:{NFSU2_TR(0x6e2a79);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e2a7f:L6e2a7f:{c.instructions+=2;NFSU2_TR(0x6e2a7f);
__builtin_memmove((R+4),(R+24),4);
}
B6e2a81:{NFSU2_TR(0x6e2a81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2a86ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e2680u);}goto L6e2680;}
}
B6e2a86:L6e2a86:{c.instructions+=4;NFSU2_TR(0x6e2a86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2a87:{NFSU2_TR(0x6e2a87);
__builtin_memmove((R+0),(R+24),4);
}
B6e2a89:{NFSU2_TR(0x6e2a89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2a8a:{NFSU2_TR(0x6e2a8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2a8d:L6e2a8d:{c.instructions+=2;NFSU2_TR(0x6e2a8d);
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
B6e2a8f:{NFSU2_TR(0x6e2a8f);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e2a95:L6e2a95:{c.instructions+=2;NFSU2_TR(0x6e2a95);
__builtin_memmove((R+4),(R+24),4);
}
B6e2a97:{NFSU2_TR(0x6e2a97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2a9cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e26b0u);}goto L6e26b0;}
}
B6e2a9c:L6e2a9c:{c.instructions+=4;NFSU2_TR(0x6e2a9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2a9d:{NFSU2_TR(0x6e2a9d);
__builtin_memmove((R+0),(R+24),4);
}
B6e2a9f:{NFSU2_TR(0x6e2a9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2aa0:{NFSU2_TR(0x6e2aa0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2aa3:L6e2aa3:{c.instructions+=2;NFSU2_TR(0x6e2aa3);
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
B6e2aa5:{NFSU2_TR(0x6e2aa5);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e2aab:L6e2aab:{c.instructions+=2;NFSU2_TR(0x6e2aab);
__builtin_memmove((R+4),(R+24),4);
}
B6e2aad:{NFSU2_TR(0x6e2aad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2ab2ull));
TAIL_STATIC(0x6e1e20u,6e1);
}
B6e2ab2:L6e2ab2:{c.instructions+=4;NFSU2_TR(0x6e2ab2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2ab3:{NFSU2_TR(0x6e2ab3);
__builtin_memmove((R+0),(R+24),4);
}
B6e2ab5:{NFSU2_TR(0x6e2ab5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2ab6:{NFSU2_TR(0x6e2ab6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2ab9:L6e2ab9:{c.instructions+=2;NFSU2_TR(0x6e2ab9);
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
B6e2abb:{NFSU2_TR(0x6e2abb);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e2ac1:L6e2ac1:{c.instructions+=2;NFSU2_TR(0x6e2ac1);
__builtin_memmove((R+4),(R+24),4);
}
B6e2ac3:{NFSU2_TR(0x6e2ac3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2ac8ull));
TAIL_STATIC(0x6e1e50u,6e1);
}
B6e2ac8:L6e2ac8:{c.instructions+=4;NFSU2_TR(0x6e2ac8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2ac9:{NFSU2_TR(0x6e2ac9);
__builtin_memmove((R+0),(R+24),4);
}
B6e2acb:{NFSU2_TR(0x6e2acb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2acc:{NFSU2_TR(0x6e2acc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2acf:L6e2acf:{c.instructions+=2;NFSU2_TR(0x6e2acf);
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
B6e2ad1:{NFSU2_TR(0x6e2ad1);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e2ad7:L6e2ad7:{c.instructions+=2;NFSU2_TR(0x6e2ad7);
__builtin_memmove((R+4),(R+24),4);
}
B6e2ad9:{NFSU2_TR(0x6e2ad9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2adeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e20b0u);}goto L6e20b0;}
}
B6e2ade:L6e2ade:{c.instructions+=4;NFSU2_TR(0x6e2ade);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2adf:{NFSU2_TR(0x6e2adf);
__builtin_memmove((R+0),(R+24),4);
}
B6e2ae1:{NFSU2_TR(0x6e2ae1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2ae2:{NFSU2_TR(0x6e2ae2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2ae5:L6e2ae5:{c.instructions+=2;NFSU2_TR(0x6e2ae5);
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
B6e2ae7:{NFSU2_TR(0x6e2ae7);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e2aed:L6e2aed:{c.instructions+=2;NFSU2_TR(0x6e2aed);
__builtin_memmove((R+4),(R+24),4);
}
B6e2aef:{NFSU2_TR(0x6e2aef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2af4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e20e0u);}goto L6e20e0;}
}
B6e2af4:L6e2af4:{c.instructions+=4;NFSU2_TR(0x6e2af4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2af5:{NFSU2_TR(0x6e2af5);
__builtin_memmove((R+0),(R+24),4);
}
B6e2af7:{NFSU2_TR(0x6e2af7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2af8:{NFSU2_TR(0x6e2af8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2afb:L6e2afb:{c.instructions+=2;NFSU2_TR(0x6e2afb);
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
B6e2afd:{NFSU2_TR(0x6e2afd);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e2aff:L6e2aff:{c.instructions+=2;NFSU2_TR(0x6e2aff);
__builtin_memmove((R+4),(R+24),4);
}
B6e2b01:{NFSU2_TR(0x6e2b01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2b06ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e2180u);}goto L6e2180;}
}
B6e2b06:L6e2b06:{c.instructions+=4;NFSU2_TR(0x6e2b06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2b07:{NFSU2_TR(0x6e2b07);
__builtin_memmove((R+0),(R+24),4);
}
B6e2b09:{NFSU2_TR(0x6e2b09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2b0a:{NFSU2_TR(0x6e2b0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2b0d:L6e2b0d:{c.instructions+=2;NFSU2_TR(0x6e2b0d);
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
B6e2b0f:{NFSU2_TR(0x6e2b0f);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e2b11:L6e2b11:{c.instructions+=2;NFSU2_TR(0x6e2b11);
__builtin_memmove((R+4),(R+24),4);
}
B6e2b13:{NFSU2_TR(0x6e2b13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2b18ull));
TAIL_STATIC(0x6ecc20u,6ec);
}
B6e2b18:L6e2b18:{c.instructions+=4;NFSU2_TR(0x6e2b18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2b19:{NFSU2_TR(0x6e2b19);
__builtin_memmove((R+0),(R+24),4);
}
B6e2b1b:{NFSU2_TR(0x6e2b1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2b1c:{NFSU2_TR(0x6e2b1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2b1f:L6e2b1f:{c.instructions+=2;NFSU2_TR(0x6e2b1f);
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
B6e2b21:{NFSU2_TR(0x6e2b21);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e2b23:L6e2b23:{c.instructions+=2;NFSU2_TR(0x6e2b23);
__builtin_memmove((R+4),(R+24),4);
}
B6e2b25:{NFSU2_TR(0x6e2b25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2b2aull));
TAIL_STATIC(0x6eb9c0u,6eb);
}
B6e2b2a:L6e2b2a:{c.instructions+=4;NFSU2_TR(0x6e2b2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2b2b:{NFSU2_TR(0x6e2b2b);
__builtin_memmove((R+0),(R+24),4);
}
B6e2b2d:{NFSU2_TR(0x6e2b2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2b2e:{NFSU2_TR(0x6e2b2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2b31:L6e2b31:{c.instructions+=2;NFSU2_TR(0x6e2b31);
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
B6e2b33:{NFSU2_TR(0x6e2b33);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e2b35:L6e2b35:{c.instructions+=2;NFSU2_TR(0x6e2b35);
__builtin_memmove((R+4),(R+24),4);
}
B6e2b37:{NFSU2_TR(0x6e2b37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2b3cull));
TAIL_STATIC(0x6ea220u,6ea);
}
B6e2b3c:L6e2b3c:{c.instructions+=4;NFSU2_TR(0x6e2b3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2b3d:{NFSU2_TR(0x6e2b3d);
__builtin_memmove((R+0),(R+24),4);
}
B6e2b3f:{NFSU2_TR(0x6e2b3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2b40:{NFSU2_TR(0x6e2b40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2b43:L6e2b43:{c.instructions+=2;NFSU2_TR(0x6e2b43);
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
B6e2b45:{NFSU2_TR(0x6e2b45);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e2b47:L6e2b47:{c.instructions+=2;NFSU2_TR(0x6e2b47);
__builtin_memmove((R+4),(R+24),4);
}
B6e2b49:{NFSU2_TR(0x6e2b49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2b4eull));
TAIL_STATIC(0x6e8970u,6e8);
}
B6e2b4e:L6e2b4e:{c.instructions+=4;NFSU2_TR(0x6e2b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2b4f:{NFSU2_TR(0x6e2b4f);
__builtin_memmove((R+0),(R+24),4);
}
B6e2b51:{NFSU2_TR(0x6e2b51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2b52:{NFSU2_TR(0x6e2b52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2b55:L6e2b55:{c.instructions+=2;NFSU2_TR(0x6e2b55);
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
B6e2b57:{NFSU2_TR(0x6e2b57);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e2b59:L6e2b59:{c.instructions+=2;NFSU2_TR(0x6e2b59);
__builtin_memmove((R+4),(R+24),4);
}
B6e2b5b:{NFSU2_TR(0x6e2b5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2b60ull));
TAIL_STATIC(0x6e7880u,6e7);
}
B6e2b60:L6e2b60:{c.instructions+=4;NFSU2_TR(0x6e2b60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2b61:{NFSU2_TR(0x6e2b61);
__builtin_memmove((R+0),(R+24),4);
}
B6e2b63:{NFSU2_TR(0x6e2b63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2b64:{NFSU2_TR(0x6e2b64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2b67:L6e2b67:{c.instructions+=2;NFSU2_TR(0x6e2b67);
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
B6e2b69:{NFSU2_TR(0x6e2b69);
if(r1(R+518)){{goto L6e2b72;}}
}
B6e2b6b:L6e2b6b:{c.instructions+=2;NFSU2_TR(0x6e2b6b);
__builtin_memmove((R+4),(R+24),4);
}
B6e2b6d:{NFSU2_TR(0x6e2b6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2b72ull));
TAIL_STATIC(0x6e1d20u,6e1);
}
B6e2b72:L6e2b72:{c.instructions+=3;NFSU2_TR(0x6e2b72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2b73:{NFSU2_TR(0x6e2b73);
__builtin_memmove((R+0),(R+24),4);
}
B6e2b75:{NFSU2_TR(0x6e2b75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
EXIT(0x6e2b76u);
}
B6e2be0:L6e2be0:{c.instructions+=6;NFSU2_TR(0x6e2be0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2be1:{NFSU2_TR(0x6e2be1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2be2:{NFSU2_TR(0x6e2be2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e2be6:{NFSU2_TR(0x6e2be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e2be9:{NFSU2_TR(0x6e2be9);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e2bea:{NFSU2_TR(0x6e2bea);
if(r1(R+519)){{goto L6e2c05;}}
}
B6e2bec:L6e2bec:{c.instructions+=1;NFSU2_TR(0x6e2bec);
__builtin_memmove((R+16),(R+16),4);
}
B6e2bf0:L6e2bf0:{c.instructions+=6;NFSU2_TR(0x6e2bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e2bf3:{NFSU2_TR(0x6e2bf3);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e2bf9:{NFSU2_TR(0x6e2bf9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6e2bfc:{NFSU2_TR(0x6e2bfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e2bfe:{NFSU2_TR(0x6e2bfe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2bff:{NFSU2_TR(0x6e2bff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2c02ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e2c02:L6e2c02:{c.instructions+=2;NFSU2_TR(0x6e2c02);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e2c03:{NFSU2_TR(0x6e2c03);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e2bf0u);}goto L6e2bf0;}}
}
B6e2c05:L6e2c05:{c.instructions+=3;NFSU2_TR(0x6e2c05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2c06:{NFSU2_TR(0x6e2c06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2c07:{NFSU2_TR(0x6e2c07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2c10:L6e2c10:{c.instructions+=9;NFSU2_TR(0x6e2c10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2c11:{NFSU2_TR(0x6e2c11);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2c12:{NFSU2_TR(0x6e2c12);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2c13:{NFSU2_TR(0x6e2c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e2c16:{NFSU2_TR(0x6e2c16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2c17:{NFSU2_TR(0x6e2c17);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6e2c19:{NFSU2_TR(0x6e2c19);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B6e2c1a:{NFSU2_TR(0x6e2c1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2c1b:{NFSU2_TR(0x6e2c1b);
if(r1(R+519)){{goto L6e2c6f;}}
}
B6e2c1d:L6e2c1d:{c.instructions+=2;NFSU2_TR(0x6e2c1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e2c20:{NFSU2_TR(0x6e2c20);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2c24:L6e2c24:{c.instructions+=5;NFSU2_TR(0x6e2c24);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e2c28:{NFSU2_TR(0x6e2c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6e2c2b:{NFSU2_TR(0x6e2c2b);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6e2c2d:{NFSU2_TR(0x6e2c2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6e2c30:{NFSU2_TR(0x6e2c30);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e2c34:L6e2c34:{c.instructions+=4;NFSU2_TR(0x6e2c34);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6e2c36:{NFSU2_TR(0x6e2c36);
__builtin_memmove((R+0),(R+8),1);
}
B6e2c38:{NFSU2_TR(0x6e2c38);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6e2c3a:{NFSU2_TR(0x6e2c3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e2c58;}}
}
B6e2c3c:L6e2c3c:{c.instructions+=2;NFSU2_TR(0x6e2c3c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e2c3e:{NFSU2_TR(0x6e2c3e);
if(r1(R+518)){{goto L6e2c54;}}
}
B6e2c40:L6e2c40:{c.instructions+=4;NFSU2_TR(0x6e2c40);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e2c43:{NFSU2_TR(0x6e2c43);
__builtin_memmove((R+8),(R+0),1);
}
B6e2c45:{NFSU2_TR(0x6e2c45);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6e2c48:{NFSU2_TR(0x6e2c48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e2c58;}}
}
B6e2c4a:L6e2c4a:{c.instructions+=4;NFSU2_TR(0x6e2c4a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6e2c4d:{NFSU2_TR(0x6e2c4d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6e2c50:{NFSU2_TR(0x6e2c50);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e2c52:{NFSU2_TR(0x6e2c52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e2c34u);}goto L6e2c34;}}
}
B6e2c54:L6e2c54:{c.instructions+=2;NFSU2_TR(0x6e2c54);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e2c56:{NFSU2_TR(0x6e2c56);
{goto L6e2c5d;}
}
B6e2c58:L6e2c58:{c.instructions+=2;NFSU2_TR(0x6e2c58);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6e2c5a:{NFSU2_TR(0x6e2c5a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6e2c5d:L6e2c5d:{c.instructions+=2;NFSU2_TR(0x6e2c5d);
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
B6e2c5f:{NFSU2_TR(0x6e2c5f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e2c66;}}
}
B6e2c61:L6e2c61:{c.instructions+=2;NFSU2_TR(0x6e2c61);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e2c64:{NFSU2_TR(0x6e2c64);
{goto L6e2c6b;}
}
B6e2c66:L6e2c66:{c.instructions+=1;NFSU2_TR(0x6e2c66);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e2c7a;}}
}
B6e2c68:L6e2c68:{c.instructions+=1;NFSU2_TR(0x6e2c68);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e2c6b:L6e2c6b:{c.instructions+=2;NFSU2_TR(0x6e2c6b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e2c6d:{NFSU2_TR(0x6e2c6d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e2c24u);}goto L6e2c24;}}
}
B6e2c6f:L6e2c6f:{c.instructions+=7;NFSU2_TR(0x6e2c6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2c70:{NFSU2_TR(0x6e2c70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2c71:{NFSU2_TR(0x6e2c71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e2c72:{NFSU2_TR(0x6e2c72);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e2c75:{NFSU2_TR(0x6e2c75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e2c76:{NFSU2_TR(0x6e2c76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e2c77:{NFSU2_TR(0x6e2c77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2c7a:L6e2c7a:{c.instructions+=7;NFSU2_TR(0x6e2c7a);
__builtin_memmove((R+0),(R+28),4);
}
B6e2c7c:{NFSU2_TR(0x6e2c7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2c7d:{NFSU2_TR(0x6e2c7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2c7e:{NFSU2_TR(0x6e2c7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e2c7f:{NFSU2_TR(0x6e2c7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e2c80:{NFSU2_TR(0x6e2c80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e2c81:{NFSU2_TR(0x6e2c81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2c90:L6e2c90:{c.instructions+=7;NFSU2_TR(0x6e2c90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2c91:{NFSU2_TR(0x6e2c91);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e2c95:{NFSU2_TR(0x6e2c95);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B6e2c98:{NFSU2_TR(0x6e2c98);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff1ull))));
}
B6e2c9b:{NFSU2_TR(0x6e2c9b);
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
B6e2c9e:{NFSU2_TR(0x6e2c9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2c9f:{NFSU2_TR(0x6e2c9f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6e2d18;}}
}
B6e2ca1:L6e2ca1:{c.instructions+=2;NFSU2_TR(0x6e2ca1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6e2d34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6e2ca8:{NFSU2_TR(0x6e2ca8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6e2d20ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e2caf:L6e2caf:{c.instructions+=5;NFSU2_TR(0x6e2caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e2cb2:{NFSU2_TR(0x6e2cb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2cb5:{NFSU2_TR(0x6e2cb5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2cb6:{NFSU2_TR(0x6e2cb6);
__builtin_memmove((R+4),(R+28),4);
}
B6e2cb8:{NFSU2_TR(0x6e2cb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2cbbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e2cbb:L6e2cbb:{c.instructions+=4;NFSU2_TR(0x6e2cbb);
__builtin_memmove((R+0),(R+28),4);
}
B6e2cbd:{NFSU2_TR(0x6e2cbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2cbe:{NFSU2_TR(0x6e2cbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2cbf:{NFSU2_TR(0x6e2cbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2cc0:L6e2cc0:{c.instructions+=5;NFSU2_TR(0x6e2cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e2cc3:{NFSU2_TR(0x6e2cc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2cc6:{NFSU2_TR(0x6e2cc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2cc7:{NFSU2_TR(0x6e2cc7);
__builtin_memmove((R+4),(R+28),4);
}
B6e2cc9:{NFSU2_TR(0x6e2cc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2cccull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e2ccc:L6e2ccc:{c.instructions+=4;NFSU2_TR(0x6e2ccc);
__builtin_memmove((R+0),(R+28),4);
}
B6e2cce:{NFSU2_TR(0x6e2cce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2ccf:{NFSU2_TR(0x6e2ccf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2cd0:{NFSU2_TR(0x6e2cd0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2cd1:L6e2cd1:{c.instructions+=5;NFSU2_TR(0x6e2cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e2cd4:{NFSU2_TR(0x6e2cd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2cd7:{NFSU2_TR(0x6e2cd7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2cd8:{NFSU2_TR(0x6e2cd8);
__builtin_memmove((R+4),(R+28),4);
}
B6e2cda:{NFSU2_TR(0x6e2cda);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2cddull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e2cdd:L6e2cdd:{c.instructions+=4;NFSU2_TR(0x6e2cdd);
__builtin_memmove((R+0),(R+28),4);
}
B6e2cdf:{NFSU2_TR(0x6e2cdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2ce0:{NFSU2_TR(0x6e2ce0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2ce1:{NFSU2_TR(0x6e2ce1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2ce2:L6e2ce2:{c.instructions+=4;NFSU2_TR(0x6e2ce2);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e2ce8:{NFSU2_TR(0x6e2ce8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e2cea:{NFSU2_TR(0x6e2cea);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2cec:{NFSU2_TR(0x6e2cec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2cefull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e2cef:L6e2cef:{c.instructions+=2;NFSU2_TR(0x6e2cef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e2cf1:{NFSU2_TR(0x6e2cf1);
if(r1(R+518)){{goto L6e2d09;}}
}
B6e2cf3:L6e2cf3:{c.instructions+=2;NFSU2_TR(0x6e2cf3);
__builtin_memmove((R+4),(R+0),4);
}
B6e2cf5:{NFSU2_TR(0x6e2cf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2cfaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e20e0u);}goto L6e20e0;}
}
B6e2cfa:L6e2cfa:{c.instructions+=5;NFSU2_TR(0x6e2cfa);
__builtin_memmove((R+28),(R+0),4);
}
B6e2cfc:{NFSU2_TR(0x6e2cfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e2cfe:{NFSU2_TR(0x6e2cfe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2cff:{NFSU2_TR(0x6e2cff);
__builtin_memmove((R+4),(R+28),4);
}
B6e2d01:{NFSU2_TR(0x6e2d01);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2d04ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e2d04:L6e2d04:{c.instructions+=4;NFSU2_TR(0x6e2d04);
__builtin_memmove((R+0),(R+28),4);
}
B6e2d06:{NFSU2_TR(0x6e2d06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2d07:{NFSU2_TR(0x6e2d07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2d08:{NFSU2_TR(0x6e2d08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2d09:L6e2d09:{c.instructions+=5;NFSU2_TR(0x6e2d09);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e2d0b:{NFSU2_TR(0x6e2d0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e2d0d:{NFSU2_TR(0x6e2d0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2d0e:{NFSU2_TR(0x6e2d0e);
__builtin_memmove((R+4),(R+28),4);
}
B6e2d10:{NFSU2_TR(0x6e2d10);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2d13ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e2d13:L6e2d13:{c.instructions+=4;NFSU2_TR(0x6e2d13);
__builtin_memmove((R+0),(R+28),4);
}
B6e2d15:{NFSU2_TR(0x6e2d15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2d16:{NFSU2_TR(0x6e2d16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2d17:{NFSU2_TR(0x6e2d17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2d18:L6e2d18:{c.instructions+=4;NFSU2_TR(0x6e2d18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2d19:{NFSU2_TR(0x6e2d19);
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
B6e2d1b:{NFSU2_TR(0x6e2d1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2d1c:{NFSU2_TR(0x6e2d1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2d40:L6e2d40:{c.instructions+=5;NFSU2_TR(0x6e2d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e2d43:{NFSU2_TR(0x6e2d43);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e2d47:{NFSU2_TR(0x6e2d47);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6e2d4a:{NFSU2_TR(0x6e2d4a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2d4b:{NFSU2_TR(0x6e2d4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e2d50ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e2c90u);}goto L6e2c90;}
}
B6e2d50:L6e2d50:{c.instructions+=2;NFSU2_TR(0x6e2d50);
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
B6e2d53:{NFSU2_TR(0x6e2d53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2d60:L6e2d60:{c.instructions+=80;NFSU2_TR(0x6e2d60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6e2d63:{NFSU2_TR(0x6e2d63);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2d67:{NFSU2_TR(0x6e2d67);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e2d69:{NFSU2_TR(0x6e2d69);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6e2d6b:{NFSU2_TR(0x6e2d6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2d6e:{NFSU2_TR(0x6e2d6e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2d72:{NFSU2_TR(0x6e2d72);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2d75:{NFSU2_TR(0x6e2d75);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6e2d77:{NFSU2_TR(0x6e2d77);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2d7b:{NFSU2_TR(0x6e2d7b);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6e2d7d:{NFSU2_TR(0x6e2d7d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2d81:{NFSU2_TR(0x6e2d81);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6e2d83:{NFSU2_TR(0x6e2d83);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e2d87:{NFSU2_TR(0x6e2d87);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2d8b:{NFSU2_TR(0x6e2d8b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2d8f:{NFSU2_TR(0x6e2d8f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6e2d91:{NFSU2_TR(0x6e2d91);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2d95:{NFSU2_TR(0x6e2d95);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2d99:{NFSU2_TR(0x6e2d99);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e2d9d:{NFSU2_TR(0x6e2d9d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2da1:{NFSU2_TR(0x6e2da1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6e2da3:{NFSU2_TR(0x6e2da3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e2da7:{NFSU2_TR(0x6e2da7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2dab:{NFSU2_TR(0x6e2dab);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2daf:{NFSU2_TR(0x6e2daf);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6e2db1:{NFSU2_TR(0x6e2db1);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2db5:{NFSU2_TR(0x6e2db5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2db9:{NFSU2_TR(0x6e2db9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e2dbd:{NFSU2_TR(0x6e2dbd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2dc1:{NFSU2_TR(0x6e2dc1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e2dc5:{NFSU2_TR(0x6e2dc5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2dc9:{NFSU2_TR(0x6e2dc9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e2dcd:{NFSU2_TR(0x6e2dcd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2dd1:{NFSU2_TR(0x6e2dd1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e2dd5:{NFSU2_TR(0x6e2dd5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6e2dd7:{NFSU2_TR(0x6e2dd7);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B6e2dd9:{NFSU2_TR(0x6e2dd9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e2ddf:{NFSU2_TR(0x6e2ddf);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e2de3:{NFSU2_TR(0x6e2de3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2de5:{NFSU2_TR(0x6e2de5);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2de9:{NFSU2_TR(0x6e2de9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e2ded:{NFSU2_TR(0x6e2ded);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e2df1:{NFSU2_TR(0x6e2df1);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2df4:{NFSU2_TR(0x6e2df4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2df8:{NFSU2_TR(0x6e2df8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e2dfc:{NFSU2_TR(0x6e2dfc);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e2e00:{NFSU2_TR(0x6e2e00);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2e03:{NFSU2_TR(0x6e2e03);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2e07:{NFSU2_TR(0x6e2e07);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e2e0b:{NFSU2_TR(0x6e2e0b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e2e0f:{NFSU2_TR(0x6e2e0f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2e12:{NFSU2_TR(0x6e2e12);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e2e16:{NFSU2_TR(0x6e2e16);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e2e1c:{NFSU2_TR(0x6e2e1c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e2e20:{NFSU2_TR(0x6e2e20);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2e23:{NFSU2_TR(0x6e2e23);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2e27:{NFSU2_TR(0x6e2e27);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B6e2e29:{NFSU2_TR(0x6e2e29);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e2e2d:{NFSU2_TR(0x6e2e2d);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2e30:{NFSU2_TR(0x6e2e30);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2e34:{NFSU2_TR(0x6e2e34);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e2e38:{NFSU2_TR(0x6e2e38);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e2e3c:{NFSU2_TR(0x6e2e3c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2e3f:{NFSU2_TR(0x6e2e3f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e2e43:{NFSU2_TR(0x6e2e43);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e2e47:{NFSU2_TR(0x6e2e47);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2e4a:{NFSU2_TR(0x6e2e4a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e2e4e:{NFSU2_TR(0x6e2e4e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e2e54:{NFSU2_TR(0x6e2e54);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e2e58:{NFSU2_TR(0x6e2e58);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2e5b:{NFSU2_TR(0x6e2e5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e2e5f:{NFSU2_TR(0x6e2e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2e62:{NFSU2_TR(0x6e2e62);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e2e66:{NFSU2_TR(0x6e2e66);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2e69:{NFSU2_TR(0x6e2e69);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e2e6d:{NFSU2_TR(0x6e2e6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2e70:{NFSU2_TR(0x6e2e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2e73:{NFSU2_TR(0x6e2e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e2e7a:{NFSU2_TR(0x6e2e7a);
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
B6e2e7d:{NFSU2_TR(0x6e2e7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2e80:L6e2e80:{c.instructions+=12;NFSU2_TR(0x6e2e80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e2e84:{NFSU2_TR(0x6e2e84);
__builtin_memmove((R+8),(R+4),4);
}
B6e2e86:{NFSU2_TR(0x6e2e86);
__builtin_memmove((R+4),(R+0),4);
}
B6e2e88:{NFSU2_TR(0x6e2e88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2e89:{NFSU2_TR(0x6e2e89);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e2e8c:{NFSU2_TR(0x6e2e8c);
w4(R+24,u32(0x1ull));
}
B6e2e91:{NFSU2_TR(0x6e2e91);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B6e2e93:{NFSU2_TR(0x6e2e93);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e2e96:{NFSU2_TR(0x6e2e96);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+18,u32(u32(r4(U+8))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6e2e99:{NFSU2_TR(0x6e2e99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B6e2e9c:{NFSU2_TR(0x6e2e9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e2e9d:{NFSU2_TR(0x6e2e9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e2ea0:L6e2ea0:{c.instructions+=13;NFSU2_TR(0x6e2ea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B6e2ea3:{NFSU2_TR(0x6e2ea3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e2ea7:{NFSU2_TR(0x6e2ea7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2ea8:{NFSU2_TR(0x6e2ea8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2ea9:{NFSU2_TR(0x6e2ea9);
__builtin_memmove((R+12),(R+4),4);
}
B6e2eab:{NFSU2_TR(0x6e2eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e2eae:{NFSU2_TR(0x6e2eae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2eaf:{NFSU2_TR(0x6e2eaf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e2eb1:{NFSU2_TR(0x6e2eb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e2eb5:{NFSU2_TR(0x6e2eb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e2eb6:{NFSU2_TR(0x6e2eb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2eba:{NFSU2_TR(0x6e2eba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2ebe:{NFSU2_TR(0x6e2ebe);
if(r1(R+518)){TAIL_STATIC(0x6e3596u,6e3);}
}
B6e2ec4:L6e2ec4:{c.instructions+=4;NFSU2_TR(0x6e2ec4);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e2ec8:{NFSU2_TR(0x6e2ec8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e2eca:{NFSU2_TR(0x6e2eca);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e2ecc:{NFSU2_TR(0x6e2ecc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6e32a6u,6e3);}
}
B6e2ed2:L6e2ed2:{c.instructions+=2;NFSU2_TR(0x6e2ed2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e2ed5:{NFSU2_TR(0x6e2ed5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6e31c6u,6e3);}
}
B6e2edb:L6e2edb:{c.instructions+=15;NFSU2_TR(0x6e2edb);
__builtin_memmove((R+0),(R+12),4);
}
B6e2edd:{NFSU2_TR(0x6e2edd);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e2ee1:{NFSU2_TR(0x6e2ee1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
}
B6e2ee6:{NFSU2_TR(0x6e2ee6);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2eea:{NFSU2_TR(0x6e2eea);
__builtin_memmove((R+0),(R+4),4);
}
B6e2eec:{NFSU2_TR(0x6e2eec);
w4(R+8,u32(0x2ull));
}
B6e2ef1:{NFSU2_TR(0x6e2ef1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
}
B6e2ef4:{NFSU2_TR(0x6e2ef4);
__builtin_memmove((R+4),(R+24),4);
}
B6e2ef6:{NFSU2_TR(0x6e2ef6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e2ef9:{NFSU2_TR(0x6e2ef9);
w4(R+28,u32(0x1ull));
}
B6e2efe:{NFSU2_TR(0x6e2efe);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B6e2f00:{NFSU2_TR(0x6e2f00);
__builtin_memmove((R+4),(R+24),4);
}
B6e2f02:{NFSU2_TR(0x6e2f02);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6e2f05:{NFSU2_TR(0x6e2f05);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e2f08:{NFSU2_TR(0x6e2f08);
if(r1(R+518)){{goto L6e2f9d;}}
}
B6e2f0e:L6e2f0e:{c.instructions+=4;NFSU2_TR(0x6e2f0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e2f12:{NFSU2_TR(0x6e2f12);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e2f15:{NFSU2_TR(0x6e2f15);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e2f17:{NFSU2_TR(0x6e2f17);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e2f83;}}
}
B6e2f19:L6e2f19:{c.instructions+=37;NFSU2_TR(0x6e2f19);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e2f1d:{NFSU2_TR(0x6e2f1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e2f20:{NFSU2_TR(0x6e2f20);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e2f23:{NFSU2_TR(0x6e2f23);
{u32 ea_=u32(r4(R+28)+r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2f27:{NFSU2_TR(0x6e2f27);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6e2f29:{NFSU2_TR(0x6e2f29);
{u32 ea_=u32(r4(R+0)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2f2c:{NFSU2_TR(0x6e2f2c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e2f2e:{NFSU2_TR(0x6e2f2e);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2f31:{NFSU2_TR(0x6e2f31);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e2f33:{NFSU2_TR(0x6e2f33);
{u32 ea_=u32(r4(R+0)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2f36:{NFSU2_TR(0x6e2f36);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2f39:{NFSU2_TR(0x6e2f39);
{u32 ea_=u32(r4(R+0)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2f3c:{NFSU2_TR(0x6e2f3c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e2f3e:{NFSU2_TR(0x6e2f3e);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2f41:{NFSU2_TR(0x6e2f41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e2f44:{NFSU2_TR(0x6e2f44);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e2f46:{NFSU2_TR(0x6e2f46);
{u32 ea_=u32(r4(R+0)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2f49:{NFSU2_TR(0x6e2f49);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2f4c:{NFSU2_TR(0x6e2f4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2f4f:{NFSU2_TR(0x6e2f4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e2f52:{NFSU2_TR(0x6e2f52);
{u32 ea_=u32(r4(R+0)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2f55:{NFSU2_TR(0x6e2f55);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2f58:{NFSU2_TR(0x6e2f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2f5b:{NFSU2_TR(0x6e2f5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e2f5e:{NFSU2_TR(0x6e2f5e);
{u32 ea_=u32(r4(R+0)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2f61:{NFSU2_TR(0x6e2f61);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2f64:{NFSU2_TR(0x6e2f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2f67:{NFSU2_TR(0x6e2f67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e2f6a:{NFSU2_TR(0x6e2f6a);
{u32 ea_=u32(r4(R+0)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2f6d:{NFSU2_TR(0x6e2f6d);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2f70:{NFSU2_TR(0x6e2f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2f73:{NFSU2_TR(0x6e2f73);
{u32 ea_=u32(r4(R+0)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2f76:{NFSU2_TR(0x6e2f76);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2f79:{NFSU2_TR(0x6e2f79);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2f7c:{NFSU2_TR(0x6e2f7c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e2f7e:{NFSU2_TR(0x6e2f7e);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2f81:{NFSU2_TR(0x6e2f81);
{goto L6e2f98;}
}
B6e2f83:L6e2f83:{c.instructions+=1;NFSU2_TR(0x6e2f83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e2f9d;}}
}
B6e2f85:L6e2f85:{c.instructions+=7;NFSU2_TR(0x6e2f85);
{u32 ea_=u32(r4(R+0)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2f88:{NFSU2_TR(0x6e2f88);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e2f8a:{NFSU2_TR(0x6e2f8a);
{u32 ea_=u32(r4(R+0)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2f8d:{NFSU2_TR(0x6e2f8d);
{u32 ea_=u32(r4(R+0)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2f90:{NFSU2_TR(0x6e2f90);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e2f92:{NFSU2_TR(0x6e2f92);
{u32 ea_=u32(r4(R+0)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2f95:{NFSU2_TR(0x6e2f95);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2f98:L6e2f98:{c.instructions+=2;NFSU2_TR(0x6e2f98);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e2f9a:{NFSU2_TR(0x6e2f9a);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2f9d:L6e2f9d:{c.instructions+=9;NFSU2_TR(0x6e2f9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e2fa0:{NFSU2_TR(0x6e2fa0);
__builtin_memmove((R+4),(R+28),4);
}
B6e2fa2:{NFSU2_TR(0x6e2fa2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e2fa5:{NFSU2_TR(0x6e2fa5);
w4(R+20,u32(0x1ull));
}
B6e2faa:{NFSU2_TR(0x6e2faa);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6e2fac:{NFSU2_TR(0x6e2fac);
__builtin_memmove((R+4),(R+28),4);
}
B6e2fae:{NFSU2_TR(0x6e2fae);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6e2fb1:{NFSU2_TR(0x6e2fb1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e2fb4:{NFSU2_TR(0x6e2fb4);
if(r1(R+518)){TAIL_STATIC(0x6e3046u,6e3);}
}
B6e2fba:L6e2fba:{c.instructions+=4;NFSU2_TR(0x6e2fba);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e2fbe:{NFSU2_TR(0x6e2fbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e2fc0:{NFSU2_TR(0x6e2fc0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e2fc2:{NFSU2_TR(0x6e2fc2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6e302cu,6e3);}
}
B6e2fc4:L6e2fc4:{c.instructions+=22;NFSU2_TR(0x6e2fc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e2fc8:{NFSU2_TR(0x6e2fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e2fcb:{NFSU2_TR(0x6e2fcb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e2fce:{NFSU2_TR(0x6e2fce);
{u32 ea_=u32(r4(R+28)+r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2fd2:{NFSU2_TR(0x6e2fd2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6e2fd4:{NFSU2_TR(0x6e2fd4);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2fd7:{NFSU2_TR(0x6e2fd7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e2fd9:{NFSU2_TR(0x6e2fd9);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2fdc:{NFSU2_TR(0x6e2fdc);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e2fde:{NFSU2_TR(0x6e2fde);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2fe1:{NFSU2_TR(0x6e2fe1);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2fe4:{NFSU2_TR(0x6e2fe4);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2fe7:{NFSU2_TR(0x6e2fe7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e2fe9:{NFSU2_TR(0x6e2fe9);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2fec:{NFSU2_TR(0x6e2fec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e2fef:{NFSU2_TR(0x6e2fef);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e2ff1:{NFSU2_TR(0x6e2ff1);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2ff4:{NFSU2_TR(0x6e2ff4);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e2ff7:{NFSU2_TR(0x6e2ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e2ffa:{NFSU2_TR(0x6e2ffa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6e2ffc:{NFSU2_TR(0x6e2ffc);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e2fff:{NFSU2_TR(0x6e2fff);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x6e3002u,6e3);
}
XIT:NFSU2_TR_EXIT(0x6e2,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
