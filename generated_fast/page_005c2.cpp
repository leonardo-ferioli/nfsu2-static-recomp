#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_447(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b8(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 body_5bd(u8* __restrict R,Cpu& c);
u32 body_5c3(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_63c(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5c2,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5c2,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5c2(u8* __restrict R,Cpu& c);
u32 page_5c2(Cpu& c){return body_5c2(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5c2(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5c2000:goto L5c2000;
case 0x5c2003:c.instructions+=1;goto B5c2003;
case 0x5c2005:goto L5c2005;
case 0x5c200b:c.instructions+=2;goto B5c200b;
case 0x5c200d:c.instructions+=1;goto B5c200d;
case 0x5c200f:goto L5c200f;
case 0x5c2015:c.instructions+=7;goto B5c2015;
case 0x5c201b:c.instructions+=6;goto B5c201b;
case 0x5c2021:c.instructions+=5;goto B5c2021;
case 0x5c2027:c.instructions+=4;goto B5c2027;
case 0x5c2029:c.instructions+=3;goto B5c2029;
case 0x5c202c:c.instructions+=2;goto B5c202c;
case 0x5c2032:c.instructions+=1;goto B5c2032;
case 0x5c2037:goto L5c2037;
case 0x5c203d:c.instructions+=12;goto B5c203d;
case 0x5c203f:c.instructions+=11;goto B5c203f;
case 0x5c2041:c.instructions+=10;goto B5c2041;
case 0x5c2044:c.instructions+=9;goto B5c2044;
case 0x5c2048:c.instructions+=8;goto B5c2048;
case 0x5c204c:c.instructions+=7;goto B5c204c;
case 0x5c204d:c.instructions+=6;goto B5c204d;
case 0x5c204e:c.instructions+=5;goto B5c204e;
case 0x5c204f:c.instructions+=4;goto B5c204f;
case 0x5c2050:c.instructions+=3;goto B5c2050;
case 0x5c2052:c.instructions+=2;goto B5c2052;
case 0x5c2053:c.instructions+=1;goto B5c2053;
case 0x5c2054:goto L5c2054;
case 0x5c205a:c.instructions+=4;goto B5c205a;
case 0x5c2060:c.instructions+=3;goto B5c2060;
case 0x5c2062:c.instructions+=2;goto B5c2062;
case 0x5c2064:c.instructions+=1;goto B5c2064;
case 0x5c2066:goto L5c2066;
case 0x5c206c:c.instructions+=6;goto B5c206c;
case 0x5c2072:c.instructions+=5;goto B5c2072;
case 0x5c2078:c.instructions+=4;goto B5c2078;
case 0x5c207a:c.instructions+=3;goto B5c207a;
case 0x5c207d:c.instructions+=2;goto B5c207d;
case 0x5c2083:c.instructions+=1;goto B5c2083;
case 0x5c2088:goto L5c2088;
case 0x5c208e:c.instructions+=2;goto B5c208e;
case 0x5c2090:c.instructions+=1;goto B5c2090;
case 0x5c2092:goto L5c2092;
case 0x5c2098:c.instructions+=3;goto B5c2098;
case 0x5c209a:c.instructions+=2;goto B5c209a;
case 0x5c209c:c.instructions+=1;goto B5c209c;
case 0x5c209e:goto L5c209e;
case 0x5c20a4:c.instructions+=6;goto B5c20a4;
case 0x5c20aa:c.instructions+=5;goto B5c20aa;
case 0x5c20b0:c.instructions+=4;goto B5c20b0;
case 0x5c20b2:c.instructions+=3;goto B5c20b2;
case 0x5c20b5:c.instructions+=2;goto B5c20b5;
case 0x5c20bb:c.instructions+=1;goto B5c20bb;
case 0x5c20c0:goto L5c20c0;
case 0x5c20c6:c.instructions+=2;goto B5c20c6;
case 0x5c20c8:c.instructions+=1;goto B5c20c8;
case 0x5c20ca:goto L5c20ca;
case 0x5c20cd:c.instructions+=9;goto B5c20cd;
case 0x5c20d0:c.instructions+=8;goto B5c20d0;
case 0x5c20d4:c.instructions+=7;goto B5c20d4;
case 0x5c20d5:c.instructions+=6;goto B5c20d5;
case 0x5c20d6:c.instructions+=5;goto B5c20d6;
case 0x5c20d7:c.instructions+=4;goto B5c20d7;
case 0x5c20d8:c.instructions+=3;goto B5c20d8;
case 0x5c20da:c.instructions+=2;goto B5c20da;
case 0x5c20db:c.instructions+=1;goto B5c20db;
case 0x5c20e0:goto L5c20e0;
case 0x5c20e7:c.instructions+=1;goto B5c20e7;
case 0x5c20e9:goto L5c20e9;
case 0x5c20ee:goto L5c20ee;
case 0x5c2100:goto L5c2100;
case 0x5c2104:c.instructions+=4;goto B5c2104;
case 0x5c2108:c.instructions+=3;goto B5c2108;
case 0x5c210e:c.instructions+=2;goto B5c210e;
case 0x5c2114:c.instructions+=1;goto B5c2114;
case 0x5c2119:goto L5c2119;
case 0x5c2120:goto L5c2120;
case 0x5c2121:c.instructions+=3;goto B5c2121;
case 0x5c2122:c.instructions+=2;goto B5c2122;
case 0x5c2124:c.instructions+=1;goto B5c2124;
case 0x5c2129:goto L5c2129;
case 0x5c212b:c.instructions+=2;goto B5c212b;
case 0x5c212d:c.instructions+=1;goto B5c212d;
case 0x5c2132:goto L5c2132;
case 0x5c2134:c.instructions+=2;goto B5c2134;
case 0x5c2136:c.instructions+=1;goto B5c2136;
case 0x5c213b:goto L5c213b;
case 0x5c213e:c.instructions+=4;goto B5c213e;
case 0x5c2141:c.instructions+=3;goto B5c2141;
case 0x5c2144:c.instructions+=2;goto B5c2144;
case 0x5c2146:c.instructions+=1;goto B5c2146;
case 0x5c2148:goto L5c2148;
case 0x5c214a:c.instructions+=1;goto B5c214a;
case 0x5c214c:goto L5c214c;
case 0x5c214f:c.instructions+=2;goto B5c214f;
case 0x5c2151:c.instructions+=1;goto B5c2151;
case 0x5c2153:goto L5c2153;
case 0x5c2156:c.instructions+=3;goto B5c2156;
case 0x5c2159:c.instructions+=2;goto B5c2159;
case 0x5c215b:c.instructions+=1;goto B5c215b;
case 0x5c215d:goto L5c215d;
case 0x5c215f:c.instructions+=2;goto B5c215f;
case 0x5c2161:c.instructions+=1;goto B5c2161;
case 0x5c2163:goto L5c2163;
case 0x5c2166:c.instructions+=2;goto B5c2166;
case 0x5c2168:c.instructions+=1;goto B5c2168;
case 0x5c216a:goto L5c216a;
case 0x5c216b:c.instructions+=3;goto B5c216b;
case 0x5c2175:c.instructions+=2;goto B5c2175;
case 0x5c2176:c.instructions+=1;goto B5c2176;
case 0x5c2177:goto L5c2177;
case 0x5c2179:c.instructions+=2;goto B5c2179;
case 0x5c217b:c.instructions+=1;goto B5c217b;
case 0x5c217d:goto L5c217d;
case 0x5c217f:c.instructions+=1;goto B5c217f;
case 0x5c2181:goto L5c2181;
case 0x5c2184:c.instructions+=2;goto B5c2184;
case 0x5c2186:c.instructions+=1;goto B5c2186;
case 0x5c2188:goto L5c2188;
case 0x5c218b:c.instructions+=3;goto B5c218b;
case 0x5c218e:c.instructions+=2;goto B5c218e;
case 0x5c2190:c.instructions+=1;goto B5c2190;
case 0x5c2192:goto L5c2192;
case 0x5c2194:c.instructions+=2;goto B5c2194;
case 0x5c2196:c.instructions+=1;goto B5c2196;
case 0x5c2198:goto L5c2198;
case 0x5c219b:c.instructions+=2;goto B5c219b;
case 0x5c219d:c.instructions+=1;goto B5c219d;
case 0x5c219f:goto L5c219f;
case 0x5c21a0:c.instructions+=3;goto B5c21a0;
case 0x5c21aa:c.instructions+=2;goto B5c21aa;
case 0x5c21ab:c.instructions+=1;goto B5c21ab;
case 0x5c21ac:goto L5c21ac;
case 0x5c21ae:c.instructions+=2;goto B5c21ae;
case 0x5c21b0:c.instructions+=1;goto B5c21b0;
case 0x5c21b2:goto L5c21b2;
case 0x5c21b4:c.instructions+=2;goto B5c21b4;
case 0x5c21b6:c.instructions+=1;goto B5c21b6;
case 0x5c21b8:goto L5c21b8;
case 0x5c21bb:c.instructions+=3;goto B5c21bb;
case 0x5c21bd:c.instructions+=2;goto B5c21bd;
case 0x5c21c7:c.instructions+=1;goto B5c21c7;
case 0x5c21c9:goto L5c21c9;
case 0x5c21d3:goto L5c21d3;
case 0x5c21d4:c.instructions+=2;goto B5c21d4;
case 0x5c21d5:c.instructions+=1;goto B5c21d5;
case 0x5c21e0:goto L5c21e0;
case 0x5c21e5:c.instructions+=4;goto B5c21e5;
case 0x5c21eb:c.instructions+=3;goto B5c21eb;
case 0x5c21ee:c.instructions+=2;goto B5c21ee;
case 0x5c21f0:c.instructions+=1;goto B5c21f0;
case 0x5c21f2:goto L5c21f2;
case 0x5c21f7:goto L5c21f7;
case 0x5c21f9:c.instructions+=1;goto B5c21f9;
case 0x5c21fb:goto L5c21fb;
case 0x5c2200:goto L5c2200;
case 0x5c2201:c.instructions+=5;goto B5c2201;
case 0x5c2202:c.instructions+=4;goto B5c2202;
case 0x5c2203:c.instructions+=3;goto B5c2203;
case 0x5c2204:c.instructions+=2;goto B5c2204;
case 0x5c2206:c.instructions+=1;goto B5c2206;
case 0x5c220b:goto L5c220b;
case 0x5c220d:c.instructions+=3;goto B5c220d;
case 0x5c220f:c.instructions+=2;goto B5c220f;
case 0x5c2213:c.instructions+=1;goto B5c2213;
case 0x5c2218:goto L5c2218;
case 0x5c221a:c.instructions+=1;goto B5c221a;
case 0x5c221f:goto L5c221f;
case 0x5c2221:c.instructions+=5;goto B5c2221;
case 0x5c2226:c.instructions+=4;goto B5c2226;
case 0x5c2229:c.instructions+=3;goto B5c2229;
case 0x5c222c:c.instructions+=2;goto B5c222c;
case 0x5c2230:c.instructions+=1;goto B5c2230;
case 0x5c2232:goto L5c2232;
case 0x5c2235:c.instructions+=3;goto B5c2235;
case 0x5c2238:c.instructions+=2;goto B5c2238;
case 0x5c223a:c.instructions+=1;goto B5c223a;
case 0x5c223c:goto L5c223c;
case 0x5c223e:c.instructions+=1;goto B5c223e;
case 0x5c2240:goto L5c2240;
case 0x5c2243:c.instructions+=1;goto B5c2243;
case 0x5c2245:goto L5c2245;
case 0x5c2247:goto L5c2247;
case 0x5c224d:c.instructions+=3;goto B5c224d;
case 0x5c224f:c.instructions+=2;goto B5c224f;
case 0x5c2251:c.instructions+=1;goto B5c2251;
case 0x5c2257:goto L5c2257;
case 0x5c2259:c.instructions+=2;goto B5c2259;
case 0x5c225b:c.instructions+=1;goto B5c225b;
case 0x5c2261:goto L5c2261;
case 0x5c2264:c.instructions+=2;goto B5c2264;
case 0x5c2266:c.instructions+=1;goto B5c2266;
case 0x5c226c:goto L5c226c;
case 0x5c226f:c.instructions+=3;goto B5c226f;
case 0x5c2272:c.instructions+=2;goto B5c2272;
case 0x5c2274:c.instructions+=1;goto B5c2274;
case 0x5c2276:goto L5c2276;
case 0x5c2278:c.instructions+=2;goto B5c2278;
case 0x5c227a:c.instructions+=1;goto B5c227a;
case 0x5c227c:goto L5c227c;
case 0x5c227f:c.instructions+=2;goto B5c227f;
case 0x5c2281:c.instructions+=1;goto B5c2281;
case 0x5c2283:goto L5c2283;
case 0x5c2285:c.instructions+=2;goto B5c2285;
case 0x5c2287:c.instructions+=1;goto B5c2287;
case 0x5c2289:goto L5c2289;
case 0x5c228b:c.instructions+=1;goto B5c228b;
case 0x5c228d:goto L5c228d;
case 0x5c2290:c.instructions+=1;goto B5c2290;
case 0x5c2292:goto L5c2292;
case 0x5c2294:goto L5c2294;
case 0x5c2296:c.instructions+=1;goto B5c2296;
case 0x5c2299:goto L5c2299;
case 0x5c229b:c.instructions+=1;goto B5c229b;
case 0x5c229d:goto L5c229d;
case 0x5c22a7:c.instructions+=1;goto B5c22a7;
case 0x5c22a9:goto L5c22a9;
case 0x5c22ac:c.instructions+=1;goto B5c22ac;
case 0x5c22ae:goto L5c22ae;
case 0x5c22b1:c.instructions+=3;goto B5c22b1;
case 0x5c22b4:c.instructions+=2;goto B5c22b4;
case 0x5c22b6:c.instructions+=1;goto B5c22b6;
case 0x5c22b8:goto L5c22b8;
case 0x5c22ba:c.instructions+=2;goto B5c22ba;
case 0x5c22bc:c.instructions+=1;goto B5c22bc;
case 0x5c22be:goto L5c22be;
case 0x5c22c1:c.instructions+=2;goto B5c22c1;
case 0x5c22c3:c.instructions+=1;goto B5c22c3;
case 0x5c22c5:goto L5c22c5;
case 0x5c22c8:c.instructions+=3;goto B5c22c8;
case 0x5c22cb:c.instructions+=2;goto B5c22cb;
case 0x5c22cd:c.instructions+=1;goto B5c22cd;
case 0x5c22cf:goto L5c22cf;
case 0x5c22d1:c.instructions+=2;goto B5c22d1;
case 0x5c22d3:c.instructions+=1;goto B5c22d3;
case 0x5c22d5:goto L5c22d5;
case 0x5c22d8:c.instructions+=1;goto B5c22d8;
case 0x5c22da:goto L5c22da;
case 0x5c22dc:goto L5c22dc;
case 0x5c22de:c.instructions+=1;goto B5c22de;
case 0x5c22e1:goto L5c22e1;
case 0x5c22e3:c.instructions+=1;goto B5c22e3;
case 0x5c22e5:goto L5c22e5;
case 0x5c22ef:goto L5c22ef;
case 0x5c22f2:c.instructions+=3;goto B5c22f2;
case 0x5c22f5:c.instructions+=2;goto B5c22f5;
case 0x5c22f7:c.instructions+=1;goto B5c22f7;
case 0x5c22fc:goto L5c22fc;
case 0x5c22fe:c.instructions+=2;goto B5c22fe;
case 0x5c2300:c.instructions+=1;goto B5c2300;
case 0x5c2305:goto L5c2305;
case 0x5c2308:c.instructions+=2;goto B5c2308;
case 0x5c230a:c.instructions+=1;goto B5c230a;
case 0x5c230f:goto L5c230f;
case 0x5c2311:c.instructions+=2;goto B5c2311;
case 0x5c2315:c.instructions+=1;goto B5c2315;
case 0x5c231a:goto L5c231a;
case 0x5c2320:c.instructions+=5;goto B5c2320;
case 0x5c2325:c.instructions+=4;goto B5c2325;
case 0x5c232b:c.instructions+=3;goto B5c232b;
case 0x5c232e:c.instructions+=2;goto B5c232e;
case 0x5c2331:c.instructions+=1;goto B5c2331;
case 0x5c2333:goto L5c2333;
case 0x5c2334:c.instructions+=1;goto B5c2334;
case 0x5c2336:goto L5c2336;
case 0x5c2337:c.instructions+=1;goto B5c2337;
case 0x5c233d:goto L5c233d;
case 0x5c2341:c.instructions+=8;goto B5c2341;
case 0x5c2344:c.instructions+=7;goto B5c2344;
case 0x5c2347:c.instructions+=6;goto B5c2347;
case 0x5c234b:c.instructions+=5;goto B5c234b;
case 0x5c2350:c.instructions+=4;goto B5c2350;
case 0x5c2353:c.instructions+=3;goto B5c2353;
case 0x5c2356:c.instructions+=2;goto B5c2356;
case 0x5c2359:c.instructions+=1;goto B5c2359;
case 0x5c235c:goto L5c235c;
case 0x5c235f:c.instructions+=6;goto B5c235f;
case 0x5c2363:c.instructions+=5;goto B5c2363;
case 0x5c236a:c.instructions+=4;goto B5c236a;
case 0x5c2371:c.instructions+=3;goto B5c2371;
case 0x5c2375:c.instructions+=2;goto B5c2375;
case 0x5c2379:c.instructions+=1;goto B5c2379;
case 0x5c237b:goto L5c237b;
case 0x5c237f:c.instructions+=9;goto B5c237f;
case 0x5c2382:c.instructions+=8;goto B5c2382;
case 0x5c2385:c.instructions+=7;goto B5c2385;
case 0x5c2389:c.instructions+=6;goto B5c2389;
case 0x5c238e:c.instructions+=5;goto B5c238e;
case 0x5c2391:c.instructions+=4;goto B5c2391;
case 0x5c2394:c.instructions+=3;goto B5c2394;
case 0x5c239b:c.instructions+=2;goto B5c239b;
case 0x5c239f:c.instructions+=1;goto B5c239f;
case 0x5c23a1:goto L5c23a1;
case 0x5c23a5:c.instructions+=10;goto B5c23a5;
case 0x5c23a9:c.instructions+=9;goto B5c23a9;
case 0x5c23ab:c.instructions+=8;goto B5c23ab;
case 0x5c23ae:c.instructions+=7;goto B5c23ae;
case 0x5c23b1:c.instructions+=6;goto B5c23b1;
case 0x5c23b4:c.instructions+=5;goto B5c23b4;
case 0x5c23b7:c.instructions+=4;goto B5c23b7;
case 0x5c23ba:c.instructions+=3;goto B5c23ba;
case 0x5c23bd:c.instructions+=2;goto B5c23bd;
case 0x5c23c1:c.instructions+=1;goto B5c23c1;
case 0x5c23c5:goto L5c23c5;
case 0x5c23c7:c.instructions+=1;goto B5c23c7;
case 0x5c23cc:goto L5c23cc;
case 0x5c23ce:c.instructions+=4;goto B5c23ce;
case 0x5c23d3:c.instructions+=3;goto B5c23d3;
case 0x5c23d6:c.instructions+=2;goto B5c23d6;
case 0x5c23d9:c.instructions+=1;goto B5c23d9;
case 0x5c23db:goto L5c23db;
case 0x5c23e0:goto L5c23e0;
case 0x5c23e2:c.instructions+=1;goto B5c23e2;
case 0x5c23e4:goto L5c23e4;
case 0x5c23ea:c.instructions+=2;goto B5c23ea;
case 0x5c23ef:c.instructions+=1;goto B5c23ef;
case 0x5c23f4:goto L5c23f4;
case 0x5c23f6:c.instructions+=1;goto B5c23f6;
case 0x5c23f8:goto L5c23f8;
case 0x5c2400:goto L5c2400;
case 0x5c2406:c.instructions+=2;goto B5c2406;
case 0x5c2408:c.instructions+=1;goto B5c2408;
case 0x5c240a:goto L5c240a;
case 0x5c2411:c.instructions+=1;goto B5c2411;
case 0x5c2413:goto L5c2413;
case 0x5c2416:c.instructions+=3;goto B5c2416;
case 0x5c2418:c.instructions+=2;goto B5c2418;
case 0x5c241b:c.instructions+=1;goto B5c241b;
case 0x5c241e:goto L5c241e;
case 0x5c2420:c.instructions+=2;goto B5c2420;
case 0x5c2422:c.instructions+=1;goto B5c2422;
case 0x5c2424:goto L5c2424;
case 0x5c2425:c.instructions+=5;goto B5c2425;
case 0x5c2426:c.instructions+=4;goto B5c2426;
case 0x5c2427:c.instructions+=3;goto B5c2427;
case 0x5c2428:c.instructions+=2;goto B5c2428;
case 0x5c242b:c.instructions+=1;goto B5c242b;
case 0x5c2430:goto L5c2430;
case 0x5c2431:c.instructions+=6;goto B5c2431;
case 0x5c2436:c.instructions+=5;goto B5c2436;
case 0x5c2438:c.instructions+=4;goto B5c2438;
case 0x5c243a:c.instructions+=3;goto B5c243a;
case 0x5c243c:c.instructions+=2;goto B5c243c;
case 0x5c243d:c.instructions+=1;goto B5c243d;
case 0x5c2443:goto L5c2443;
case 0x5c2448:c.instructions+=5;goto B5c2448;
case 0x5c244a:c.instructions+=4;goto B5c244a;
case 0x5c244c:c.instructions+=3;goto B5c244c;
case 0x5c244e:c.instructions+=2;goto B5c244e;
case 0x5c244f:c.instructions+=1;goto B5c244f;
case 0x5c2455:goto L5c2455;
case 0x5c245a:c.instructions+=5;goto B5c245a;
case 0x5c245c:c.instructions+=4;goto B5c245c;
case 0x5c245e:c.instructions+=3;goto B5c245e;
case 0x5c2460:c.instructions+=2;goto B5c2460;
case 0x5c2461:c.instructions+=1;goto B5c2461;
case 0x5c2467:goto L5c2467;
case 0x5c246c:c.instructions+=5;goto B5c246c;
case 0x5c246e:c.instructions+=4;goto B5c246e;
case 0x5c2470:c.instructions+=3;goto B5c2470;
case 0x5c2472:c.instructions+=2;goto B5c2472;
case 0x5c2473:c.instructions+=1;goto B5c2473;
case 0x5c2479:goto L5c2479;
case 0x5c247e:c.instructions+=5;goto B5c247e;
case 0x5c2480:c.instructions+=4;goto B5c2480;
case 0x5c2482:c.instructions+=3;goto B5c2482;
case 0x5c2484:c.instructions+=2;goto B5c2484;
case 0x5c2485:c.instructions+=1;goto B5c2485;
case 0x5c248b:goto L5c248b;
case 0x5c2490:c.instructions+=5;goto B5c2490;
case 0x5c2492:c.instructions+=4;goto B5c2492;
case 0x5c2494:c.instructions+=3;goto B5c2494;
case 0x5c2499:c.instructions+=2;goto B5c2499;
case 0x5c249a:c.instructions+=1;goto B5c249a;
case 0x5c24a0:goto L5c24a0;
case 0x5c24a5:c.instructions+=5;goto B5c24a5;
case 0x5c24a7:c.instructions+=4;goto B5c24a7;
case 0x5c24a9:c.instructions+=3;goto B5c24a9;
case 0x5c24ab:c.instructions+=2;goto B5c24ab;
case 0x5c24ac:c.instructions+=1;goto B5c24ac;
case 0x5c24b2:goto L5c24b2;
case 0x5c24b7:c.instructions+=5;goto B5c24b7;
case 0x5c24b9:c.instructions+=4;goto B5c24b9;
case 0x5c24bb:c.instructions+=3;goto B5c24bb;
case 0x5c24bd:c.instructions+=2;goto B5c24bd;
case 0x5c24be:c.instructions+=1;goto B5c24be;
case 0x5c24c4:goto L5c24c4;
case 0x5c24c9:c.instructions+=5;goto B5c24c9;
case 0x5c24cb:c.instructions+=4;goto B5c24cb;
case 0x5c24cd:c.instructions+=3;goto B5c24cd;
case 0x5c24d2:c.instructions+=2;goto B5c24d2;
case 0x5c24d3:c.instructions+=1;goto B5c24d3;
case 0x5c24d9:goto L5c24d9;
case 0x5c24de:c.instructions+=6;goto B5c24de;
case 0x5c24e0:c.instructions+=5;goto B5c24e0;
case 0x5c24e2:c.instructions+=4;goto B5c24e2;
case 0x5c24e4:c.instructions+=3;goto B5c24e4;
case 0x5c24e6:c.instructions+=2;goto B5c24e6;
case 0x5c24e7:c.instructions+=1;goto B5c24e7;
case 0x5c24ed:goto L5c24ed;
case 0x5c24f2:c.instructions+=6;goto B5c24f2;
case 0x5c24f4:c.instructions+=5;goto B5c24f4;
case 0x5c24f6:c.instructions+=4;goto B5c24f6;
case 0x5c24f8:c.instructions+=3;goto B5c24f8;
case 0x5c24fa:c.instructions+=2;goto B5c24fa;
case 0x5c24fb:c.instructions+=1;goto B5c24fb;
case 0x5c2501:goto L5c2501;
case 0x5c2506:c.instructions+=6;goto B5c2506;
case 0x5c2508:c.instructions+=5;goto B5c2508;
case 0x5c250a:c.instructions+=4;goto B5c250a;
case 0x5c250c:c.instructions+=3;goto B5c250c;
case 0x5c250e:c.instructions+=2;goto B5c250e;
case 0x5c250f:c.instructions+=1;goto B5c250f;
case 0x5c2515:goto L5c2515;
case 0x5c251a:c.instructions+=6;goto B5c251a;
case 0x5c251c:c.instructions+=5;goto B5c251c;
case 0x5c251e:c.instructions+=4;goto B5c251e;
case 0x5c2520:c.instructions+=3;goto B5c2520;
case 0x5c2522:c.instructions+=2;goto B5c2522;
case 0x5c2523:c.instructions+=1;goto B5c2523;
case 0x5c2529:goto L5c2529;
case 0x5c252e:c.instructions+=6;goto B5c252e;
case 0x5c2530:c.instructions+=5;goto B5c2530;
case 0x5c2532:c.instructions+=4;goto B5c2532;
case 0x5c2534:c.instructions+=3;goto B5c2534;
case 0x5c2536:c.instructions+=2;goto B5c2536;
case 0x5c2537:c.instructions+=1;goto B5c2537;
case 0x5c253d:goto L5c253d;
case 0x5c2542:c.instructions+=6;goto B5c2542;
case 0x5c2544:c.instructions+=5;goto B5c2544;
case 0x5c2546:c.instructions+=4;goto B5c2546;
case 0x5c2548:c.instructions+=3;goto B5c2548;
case 0x5c254a:c.instructions+=2;goto B5c254a;
case 0x5c254b:c.instructions+=1;goto B5c254b;
case 0x5c2551:goto L5c2551;
case 0x5c2556:c.instructions+=6;goto B5c2556;
case 0x5c2558:c.instructions+=5;goto B5c2558;
case 0x5c255a:c.instructions+=4;goto B5c255a;
case 0x5c255c:c.instructions+=3;goto B5c255c;
case 0x5c255e:c.instructions+=2;goto B5c255e;
case 0x5c255f:c.instructions+=1;goto B5c255f;
case 0x5c2565:goto L5c2565;
case 0x5c256a:c.instructions+=6;goto B5c256a;
case 0x5c256c:c.instructions+=5;goto B5c256c;
case 0x5c256e:c.instructions+=4;goto B5c256e;
case 0x5c2570:c.instructions+=3;goto B5c2570;
case 0x5c2572:c.instructions+=2;goto B5c2572;
case 0x5c2573:c.instructions+=1;goto B5c2573;
case 0x5c2579:goto L5c2579;
case 0x5c257e:c.instructions+=6;goto B5c257e;
case 0x5c2580:c.instructions+=5;goto B5c2580;
case 0x5c2582:c.instructions+=4;goto B5c2582;
case 0x5c2584:c.instructions+=3;goto B5c2584;
case 0x5c2586:c.instructions+=2;goto B5c2586;
case 0x5c2587:c.instructions+=1;goto B5c2587;
case 0x5c258d:goto L5c258d;
case 0x5c2592:c.instructions+=6;goto B5c2592;
case 0x5c2594:c.instructions+=5;goto B5c2594;
case 0x5c2596:c.instructions+=4;goto B5c2596;
case 0x5c2598:c.instructions+=3;goto B5c2598;
case 0x5c259a:c.instructions+=2;goto B5c259a;
case 0x5c259b:c.instructions+=1;goto B5c259b;
case 0x5c25a1:goto L5c25a1;
case 0x5c25a6:c.instructions+=6;goto B5c25a6;
case 0x5c25a8:c.instructions+=5;goto B5c25a8;
case 0x5c25aa:c.instructions+=4;goto B5c25aa;
case 0x5c25ac:c.instructions+=3;goto B5c25ac;
case 0x5c25ae:c.instructions+=2;goto B5c25ae;
case 0x5c25af:c.instructions+=1;goto B5c25af;
case 0x5c25b5:goto L5c25b5;
case 0x5c25ba:c.instructions+=6;goto B5c25ba;
case 0x5c25bc:c.instructions+=5;goto B5c25bc;
case 0x5c25be:c.instructions+=4;goto B5c25be;
case 0x5c25c0:c.instructions+=3;goto B5c25c0;
case 0x5c25c2:c.instructions+=2;goto B5c25c2;
case 0x5c25c3:c.instructions+=1;goto B5c25c3;
case 0x5c25c9:goto L5c25c9;
case 0x5c25ce:c.instructions+=2;goto B5c25ce;
case 0x5c25d0:c.instructions+=1;goto B5c25d0;
case 0x5c25d2:goto L5c25d2;
case 0x5c25d7:c.instructions+=2;goto B5c25d7;
case 0x5c25d9:c.instructions+=1;goto B5c25d9;
case 0x5c25db:goto L5c25db;
case 0x5c25e0:c.instructions+=5;goto B5c25e0;
case 0x5c25e2:c.instructions+=4;goto B5c25e2;
case 0x5c25e4:c.instructions+=3;goto B5c25e4;
case 0x5c25e9:c.instructions+=2;goto B5c25e9;
case 0x5c25ea:c.instructions+=1;goto B5c25ea;
case 0x5c25f0:goto L5c25f0;
case 0x5c25f2:goto L5c25f2;
case 0x5c25f7:c.instructions+=5;goto B5c25f7;
case 0x5c25f9:c.instructions+=4;goto B5c25f9;
case 0x5c25fb:c.instructions+=3;goto B5c25fb;
case 0x5c2600:c.instructions+=2;goto B5c2600;
case 0x5c2601:c.instructions+=1;goto B5c2601;
case 0x5c2607:goto L5c2607;
case 0x5c2608:c.instructions+=2;goto B5c2608;
case 0x5c260a:c.instructions+=1;goto B5c260a;
case 0x5c2610:goto L5c2610;
case 0x5c2615:c.instructions+=6;goto B5c2615;
case 0x5c2617:c.instructions+=5;goto B5c2617;
case 0x5c2619:c.instructions+=4;goto B5c2619;
case 0x5c261b:c.instructions+=3;goto B5c261b;
case 0x5c261c:c.instructions+=2;goto B5c261c;
case 0x5c261d:c.instructions+=1;goto B5c261d;
case 0x5c2623:goto L5c2623;
case 0x5c2628:c.instructions+=6;goto B5c2628;
case 0x5c262a:c.instructions+=5;goto B5c262a;
case 0x5c262c:c.instructions+=4;goto B5c262c;
case 0x5c262e:c.instructions+=3;goto B5c262e;
case 0x5c262f:c.instructions+=2;goto B5c262f;
case 0x5c2630:c.instructions+=1;goto B5c2630;
case 0x5c2636:goto L5c2636;
case 0x5c263b:c.instructions+=6;goto B5c263b;
case 0x5c263d:c.instructions+=5;goto B5c263d;
case 0x5c263f:c.instructions+=4;goto B5c263f;
case 0x5c2641:c.instructions+=3;goto B5c2641;
case 0x5c2642:c.instructions+=2;goto B5c2642;
case 0x5c2643:c.instructions+=1;goto B5c2643;
case 0x5c2649:goto L5c2649;
case 0x5c264e:c.instructions+=6;goto B5c264e;
case 0x5c2650:c.instructions+=5;goto B5c2650;
case 0x5c2651:c.instructions+=4;goto B5c2651;
case 0x5c2653:c.instructions+=3;goto B5c2653;
case 0x5c2654:c.instructions+=2;goto B5c2654;
case 0x5c2655:c.instructions+=1;goto B5c2655;
case 0x5c265b:goto L5c265b;
case 0x5c265c:c.instructions+=2;goto B5c265c;
case 0x5c265f:c.instructions+=1;goto B5c265f;
case 0x5c2661:goto L5c2661;
case 0x5c2667:c.instructions+=4;goto B5c2667;
case 0x5c266d:c.instructions+=3;goto B5c266d;
case 0x5c266f:c.instructions+=2;goto B5c266f;
case 0x5c2671:c.instructions+=1;goto B5c2671;
case 0x5c2674:goto L5c2674;
case 0x5c2677:c.instructions+=5;goto B5c2677;
case 0x5c267c:c.instructions+=4;goto B5c267c;
case 0x5c267e:c.instructions+=3;goto B5c267e;
case 0x5c267f:c.instructions+=2;goto B5c267f;
case 0x5c2680:c.instructions+=1;goto B5c2680;
case 0x5c2686:goto L5c2686;
case 0x5c2689:c.instructions+=6;goto B5c2689;
case 0x5c268b:c.instructions+=5;goto B5c268b;
case 0x5c268d:c.instructions+=4;goto B5c268d;
case 0x5c2691:c.instructions+=3;goto B5c2691;
case 0x5c2692:c.instructions+=2;goto B5c2692;
case 0x5c2693:c.instructions+=1;goto B5c2693;
case 0x5c2699:goto L5c2699;
case 0x5c269b:c.instructions+=3;goto B5c269b;
case 0x5c269d:c.instructions+=2;goto B5c269d;
case 0x5c269f:c.instructions+=1;goto B5c269f;
case 0x5c26a4:goto L5c26a4;
case 0x5c26a6:c.instructions+=2;goto B5c26a6;
case 0x5c26a8:c.instructions+=1;goto B5c26a8;
case 0x5c26ad:goto L5c26ad;
case 0x5c26b0:c.instructions+=1;goto B5c26b0;
case 0x5c26b5:goto L5c26b5;
case 0x5c26bb:c.instructions+=3;goto B5c26bb;
case 0x5c26bd:c.instructions+=2;goto B5c26bd;
case 0x5c26bf:c.instructions+=1;goto B5c26bf;
case 0x5c26c2:goto L5c26c2;
case 0x5c26c5:c.instructions+=3;goto B5c26c5;
case 0x5c26c7:c.instructions+=2;goto B5c26c7;
case 0x5c26c8:c.instructions+=1;goto B5c26c8;
case 0x5c26ce:goto L5c26ce;
case 0x5c26d8:c.instructions+=3;goto B5c26d8;
case 0x5c26d9:c.instructions+=2;goto B5c26d9;
case 0x5c26da:c.instructions+=1;goto B5c26da;
case 0x5c26e0:goto L5c26e0;
case 0x5c26e1:c.instructions+=11;goto B5c26e1;
case 0x5c26e3:c.instructions+=10;goto B5c26e3;
case 0x5c26e6:c.instructions+=9;goto B5c26e6;
case 0x5c26ec:c.instructions+=8;goto B5c26ec;
case 0x5c26ed:c.instructions+=7;goto B5c26ed;
case 0x5c26f0:c.instructions+=6;goto B5c26f0;
case 0x5c26f2:c.instructions+=5;goto B5c26f2;
case 0x5c26f4:c.instructions+=4;goto B5c26f4;
case 0x5c26f7:c.instructions+=3;goto B5c26f7;
case 0x5c26f8:c.instructions+=2;goto B5c26f8;
case 0x5c26f9:c.instructions+=1;goto B5c26f9;
case 0x5c26fe:goto L5c26fe;
case 0x5c2706:c.instructions+=19;goto B5c2706;
case 0x5c270e:c.instructions+=18;goto B5c270e;
case 0x5c2716:c.instructions+=17;goto B5c2716;
case 0x5c271e:c.instructions+=16;goto B5c271e;
case 0x5c2726:c.instructions+=15;goto B5c2726;
case 0x5c2727:c.instructions+=14;goto B5c2727;
case 0x5c272b:c.instructions+=13;goto B5c272b;
case 0x5c272c:c.instructions+=12;goto B5c272c;
case 0x5c2734:c.instructions+=11;goto B5c2734;
case 0x5c273c:c.instructions+=10;goto B5c273c;
case 0x5c2744:c.instructions+=9;goto B5c2744;
case 0x5c274c:c.instructions+=8;goto B5c274c;
case 0x5c2754:c.instructions+=7;goto B5c2754;
case 0x5c275c:c.instructions+=6;goto B5c275c;
case 0x5c2764:c.instructions+=5;goto B5c2764;
case 0x5c276c:c.instructions+=4;goto B5c276c;
case 0x5c2774:c.instructions+=3;goto B5c2774;
case 0x5c277c:c.instructions+=2;goto B5c277c;
case 0x5c2784:c.instructions+=1;goto B5c2784;
case 0x5c2789:goto L5c2789;
case 0x5c278c:c.instructions+=7;goto B5c278c;
case 0x5c2790:c.instructions+=6;goto B5c2790;
case 0x5c2791:c.instructions+=5;goto B5c2791;
case 0x5c2795:c.instructions+=4;goto B5c2795;
case 0x5c2796:c.instructions+=3;goto B5c2796;
case 0x5c279a:c.instructions+=2;goto B5c279a;
case 0x5c279b:c.instructions+=1;goto B5c279b;
case 0x5c27a0:goto L5c27a0;
case 0x5c27a3:c.instructions+=5;goto B5c27a3;
case 0x5c27a6:c.instructions+=4;goto B5c27a6;
case 0x5c27a7:c.instructions+=3;goto B5c27a7;
case 0x5c27a9:c.instructions+=2;goto B5c27a9;
case 0x5c27aa:c.instructions+=1;goto B5c27aa;
case 0x5c27b0:goto L5c27b0;
case 0x5c27b1:c.instructions+=34;goto B5c27b1;
case 0x5c27b3:c.instructions+=33;goto B5c27b3;
case 0x5c27b6:c.instructions+=32;goto B5c27b6;
case 0x5c27bc:c.instructions+=31;goto B5c27bc;
case 0x5c27bf:c.instructions+=30;goto B5c27bf;
case 0x5c27c0:c.instructions+=29;goto B5c27c0;
case 0x5c27c1:c.instructions+=28;goto B5c27c1;
case 0x5c27c5:c.instructions+=27;goto B5c27c5;
case 0x5c27c9:c.instructions+=26;goto B5c27c9;
case 0x5c27cd:c.instructions+=25;goto B5c27cd;
case 0x5c27d1:c.instructions+=24;goto B5c27d1;
case 0x5c27d5:c.instructions+=23;goto B5c27d5;
case 0x5c27d6:c.instructions+=22;goto B5c27d6;
case 0x5c27d7:c.instructions+=21;goto B5c27d7;
case 0x5c27df:c.instructions+=20;goto B5c27df;
case 0x5c27e7:c.instructions+=19;goto B5c27e7;
case 0x5c27ef:c.instructions+=18;goto B5c27ef;
case 0x5c27f7:c.instructions+=17;goto B5c27f7;
case 0x5c27ff:c.instructions+=16;goto B5c27ff;
case 0x5c2807:c.instructions+=15;goto B5c2807;
case 0x5c280f:c.instructions+=14;goto B5c280f;
case 0x5c2817:c.instructions+=13;goto B5c2817;
case 0x5c281f:c.instructions+=12;goto B5c281f;
case 0x5c2827:c.instructions+=11;goto B5c2827;
case 0x5c282f:c.instructions+=10;goto B5c282f;
case 0x5c2837:c.instructions+=9;goto B5c2837;
case 0x5c283f:c.instructions+=8;goto B5c283f;
case 0x5c2847:c.instructions+=7;goto B5c2847;
case 0x5c284f:c.instructions+=6;goto B5c284f;
case 0x5c2857:c.instructions+=5;goto B5c2857;
case 0x5c285f:c.instructions+=4;goto B5c285f;
case 0x5c2867:c.instructions+=3;goto B5c2867;
case 0x5c286f:c.instructions+=2;goto B5c286f;
case 0x5c287a:c.instructions+=1;goto B5c287a;
case 0x5c287f:goto L5c287f;
case 0x5c2885:c.instructions+=3;goto B5c2885;
case 0x5c2888:c.instructions+=2;goto B5c2888;
case 0x5c2889:c.instructions+=1;goto B5c2889;
case 0x5c288e:goto L5c288e;
case 0x5c2890:c.instructions+=5;goto B5c2890;
case 0x5c2894:c.instructions+=4;goto B5c2894;
case 0x5c2897:c.instructions+=3;goto B5c2897;
case 0x5c289c:c.instructions+=2;goto B5c289c;
case 0x5c289e:c.instructions+=1;goto B5c289e;
case 0x5c28a5:goto L5c28a5;
case 0x5c28a7:goto L5c28a7;
case 0x5c28a9:c.instructions+=3;goto B5c28a9;
case 0x5c28ae:c.instructions+=2;goto B5c28ae;
case 0x5c28b5:c.instructions+=1;goto B5c28b5;
case 0x5c28b6:goto L5c28b6;
case 0x5c28b8:goto L5c28b8;
case 0x5c28bd:goto L5c28bd;
case 0x5c28c0:c.instructions+=2;goto B5c28c0;
case 0x5c28c1:c.instructions+=1;goto B5c28c1;
case 0x5c28c6:goto L5c28c6;
case 0x5c28c9:c.instructions+=6;goto B5c28c9;
case 0x5c28ca:c.instructions+=5;goto B5c28ca;
case 0x5c28d0:c.instructions+=4;goto B5c28d0;
case 0x5c28d1:c.instructions+=3;goto B5c28d1;
case 0x5c28d2:c.instructions+=2;goto B5c28d2;
case 0x5c28d6:c.instructions+=1;goto B5c28d6;
case 0x5c28db:goto L5c28db;
case 0x5c28df:c.instructions+=6;goto B5c28df;
case 0x5c28e9:c.instructions+=5;goto B5c28e9;
case 0x5c28ec:c.instructions+=4;goto B5c28ec;
case 0x5c28ed:c.instructions+=3;goto B5c28ed;
case 0x5c28f4:c.instructions+=2;goto B5c28f4;
case 0x5c28f5:c.instructions+=1;goto B5c28f5;
case 0x5c28fa:goto L5c28fa;
case 0x5c28ff:c.instructions+=7;goto B5c28ff;
case 0x5c2901:c.instructions+=6;goto B5c2901;
case 0x5c2904:c.instructions+=5;goto B5c2904;
case 0x5c2906:c.instructions+=4;goto B5c2906;
case 0x5c2908:c.instructions+=3;goto B5c2908;
case 0x5c290a:c.instructions+=2;goto B5c290a;
case 0x5c290b:c.instructions+=1;goto B5c290b;
case 0x5c2911:goto L5c2911;
case 0x5c2916:c.instructions+=6;goto B5c2916;
case 0x5c2918:c.instructions+=5;goto B5c2918;
case 0x5c291a:c.instructions+=4;goto B5c291a;
case 0x5c291c:c.instructions+=3;goto B5c291c;
case 0x5c291e:c.instructions+=2;goto B5c291e;
case 0x5c291f:c.instructions+=1;goto B5c291f;
case 0x5c2925:goto L5c2925;
case 0x5c292a:c.instructions+=6;goto B5c292a;
case 0x5c292c:c.instructions+=5;goto B5c292c;
case 0x5c292e:c.instructions+=4;goto B5c292e;
case 0x5c2930:c.instructions+=3;goto B5c2930;
case 0x5c2932:c.instructions+=2;goto B5c2932;
case 0x5c2933:c.instructions+=1;goto B5c2933;
case 0x5c2939:goto L5c2939;
case 0x5c293e:c.instructions+=6;goto B5c293e;
case 0x5c2940:c.instructions+=5;goto B5c2940;
case 0x5c2942:c.instructions+=4;goto B5c2942;
case 0x5c2944:c.instructions+=3;goto B5c2944;
case 0x5c2946:c.instructions+=2;goto B5c2946;
case 0x5c2947:c.instructions+=1;goto B5c2947;
case 0x5c294d:goto L5c294d;
case 0x5c2952:c.instructions+=6;goto B5c2952;
case 0x5c2954:c.instructions+=5;goto B5c2954;
case 0x5c2956:c.instructions+=4;goto B5c2956;
case 0x5c2958:c.instructions+=3;goto B5c2958;
case 0x5c295a:c.instructions+=2;goto B5c295a;
case 0x5c295b:c.instructions+=1;goto B5c295b;
case 0x5c2961:goto L5c2961;
case 0x5c2966:c.instructions+=6;goto B5c2966;
case 0x5c2968:c.instructions+=5;goto B5c2968;
case 0x5c296a:c.instructions+=4;goto B5c296a;
case 0x5c296c:c.instructions+=3;goto B5c296c;
case 0x5c296e:c.instructions+=2;goto B5c296e;
case 0x5c296f:c.instructions+=1;goto B5c296f;
case 0x5c2975:goto L5c2975;
case 0x5c297a:c.instructions+=6;goto B5c297a;
case 0x5c297c:c.instructions+=5;goto B5c297c;
case 0x5c297e:c.instructions+=4;goto B5c297e;
case 0x5c2980:c.instructions+=3;goto B5c2980;
case 0x5c2982:c.instructions+=2;goto B5c2982;
case 0x5c2983:c.instructions+=1;goto B5c2983;
case 0x5c2989:goto L5c2989;
case 0x5c298e:c.instructions+=6;goto B5c298e;
case 0x5c2990:c.instructions+=5;goto B5c2990;
case 0x5c2992:c.instructions+=4;goto B5c2992;
case 0x5c2994:c.instructions+=3;goto B5c2994;
case 0x5c2996:c.instructions+=2;goto B5c2996;
case 0x5c2997:c.instructions+=1;goto B5c2997;
case 0x5c299d:goto L5c299d;
case 0x5c29a3:c.instructions+=9;goto B5c29a3;
case 0x5c29a6:c.instructions+=8;goto B5c29a6;
case 0x5c29a9:c.instructions+=7;goto B5c29a9;
case 0x5c29ac:c.instructions+=6;goto B5c29ac;
case 0x5c29b2:c.instructions+=5;goto B5c29b2;
case 0x5c29b4:c.instructions+=4;goto B5c29b4;
case 0x5c29b5:c.instructions+=3;goto B5c29b5;
case 0x5c29b6:c.instructions+=2;goto B5c29b6;
case 0x5c29b7:c.instructions+=1;goto B5c29b7;
case 0x5c29bd:goto L5c29bd;
case 0x5c29c0:c.instructions+=5;goto B5c29c0;
case 0x5c29c3:c.instructions+=4;goto B5c29c3;
case 0x5c29c4:c.instructions+=3;goto B5c29c4;
case 0x5c29c5:c.instructions+=2;goto B5c29c5;
case 0x5c29c7:c.instructions+=1;goto B5c29c7;
case 0x5c29cc:goto L5c29cc;
case 0x5c29ce:c.instructions+=2;goto B5c29ce;
case 0x5c29d0:c.instructions+=1;goto B5c29d0;
case 0x5c29d5:goto L5c29d5;
case 0x5c29d8:c.instructions+=1;goto B5c29d8;
case 0x5c29dd:goto L5c29dd;
case 0x5c29e2:c.instructions+=5;goto B5c29e2;
case 0x5c29e4:c.instructions+=4;goto B5c29e4;
case 0x5c29e6:c.instructions+=3;goto B5c29e6;
case 0x5c29e8:c.instructions+=2;goto B5c29e8;
case 0x5c29e9:c.instructions+=1;goto B5c29e9;
case 0x5c29ef:goto L5c29ef;
case 0x5c29f4:c.instructions+=5;goto B5c29f4;
case 0x5c29f6:c.instructions+=4;goto B5c29f6;
case 0x5c29f8:c.instructions+=3;goto B5c29f8;
case 0x5c29fa:c.instructions+=2;goto B5c29fa;
case 0x5c29fb:c.instructions+=1;goto B5c29fb;
case 0x5c2a01:goto L5c2a01;
case 0x5c2a06:c.instructions+=4;goto B5c2a06;
case 0x5c2a09:c.instructions+=3;goto B5c2a09;
case 0x5c2a0b:c.instructions+=2;goto B5c2a0b;
case 0x5c2a0c:c.instructions+=1;goto B5c2a0c;
case 0x5c2a12:goto L5c2a12;
case 0x5c2a18:c.instructions+=5;goto B5c2a18;
case 0x5c2a1b:c.instructions+=4;goto B5c2a1b;
case 0x5c2a1d:c.instructions+=3;goto B5c2a1d;
case 0x5c2a1f:c.instructions+=2;goto B5c2a1f;
case 0x5c2a20:c.instructions+=1;goto B5c2a20;
case 0x5c2a26:goto L5c2a26;
case 0x5c2a2b:c.instructions+=8;goto B5c2a2b;
case 0x5c2a2d:c.instructions+=7;goto B5c2a2d;
case 0x5c2a2f:c.instructions+=6;goto B5c2a2f;
case 0x5c2a33:c.instructions+=5;goto B5c2a33;
case 0x5c2a34:c.instructions+=4;goto B5c2a34;
case 0x5c2a36:c.instructions+=3;goto B5c2a36;
case 0x5c2a38:c.instructions+=2;goto B5c2a38;
case 0x5c2a39:c.instructions+=1;goto B5c2a39;
case 0x5c2a3f:goto L5c2a3f;
case 0x5c2a45:c.instructions+=4;goto B5c2a45;
case 0x5c2a48:c.instructions+=3;goto B5c2a48;
case 0x5c2a4a:c.instructions+=2;goto B5c2a4a;
case 0x5c2a4b:c.instructions+=1;goto B5c2a4b;
case 0x5c2a51:goto L5c2a51;
case 0x5c2a56:c.instructions+=5;goto B5c2a56;
case 0x5c2a58:c.instructions+=4;goto B5c2a58;
case 0x5c2a5a:c.instructions+=3;goto B5c2a5a;
case 0x5c2a5c:c.instructions+=2;goto B5c2a5c;
case 0x5c2a5d:c.instructions+=1;goto B5c2a5d;
case 0x5c2a63:goto L5c2a63;
case 0x5c2a68:c.instructions+=5;goto B5c2a68;
case 0x5c2a6a:c.instructions+=4;goto B5c2a6a;
case 0x5c2a6c:c.instructions+=3;goto B5c2a6c;
case 0x5c2a6e:c.instructions+=2;goto B5c2a6e;
case 0x5c2a6f:c.instructions+=1;goto B5c2a6f;
case 0x5c2a75:goto L5c2a75;
case 0x5c2a77:c.instructions+=3;goto B5c2a77;
case 0x5c2a79:c.instructions+=2;goto B5c2a79;
case 0x5c2a7b:c.instructions+=1;goto B5c2a7b;
case 0x5c2a80:goto L5c2a80;
case 0x5c2a84:c.instructions+=6;goto B5c2a84;
case 0x5c2a87:c.instructions+=5;goto B5c2a87;
case 0x5c2a8a:c.instructions+=4;goto B5c2a8a;
case 0x5c2a8b:c.instructions+=3;goto B5c2a8b;
case 0x5c2a90:c.instructions+=2;goto B5c2a90;
case 0x5c2a97:c.instructions+=1;goto B5c2a97;
case 0x5c2a99:goto L5c2a99;
case 0x5c2a9b:goto L5c2a9b;
case 0x5c2a9c:c.instructions+=4;goto B5c2a9c;
case 0x5c2a9e:c.instructions+=3;goto B5c2a9e;
case 0x5c2aa3:c.instructions+=2;goto B5c2aa3;
case 0x5c2aaa:c.instructions+=1;goto B5c2aaa;
case 0x5c2aab:goto L5c2aab;
case 0x5c2aad:goto L5c2aad;
case 0x5c2ab2:goto L5c2ab2;
case 0x5c2ab7:c.instructions+=5;goto B5c2ab7;
case 0x5c2aba:c.instructions+=4;goto B5c2aba;
case 0x5c2abb:c.instructions+=3;goto B5c2abb;
case 0x5c2ac2:c.instructions+=2;goto B5c2ac2;
case 0x5c2ac3:c.instructions+=1;goto B5c2ac3;
case 0x5c2ac8:goto L5c2ac8;
case 0x5c2acb:c.instructions+=6;goto B5c2acb;
case 0x5c2acc:c.instructions+=5;goto B5c2acc;
case 0x5c2acd:c.instructions+=4;goto B5c2acd;
case 0x5c2ace:c.instructions+=3;goto B5c2ace;
case 0x5c2ad0:c.instructions+=2;goto B5c2ad0;
case 0x5c2ad1:c.instructions+=1;goto B5c2ad1;
case 0x5c2ae0:goto L5c2ae0;
case 0x5c2ae1:c.instructions+=10;goto B5c2ae1;
case 0x5c2ae3:c.instructions+=9;goto B5c2ae3;
case 0x5c2ae6:c.instructions+=8;goto B5c2ae6;
case 0x5c2aec:c.instructions+=7;goto B5c2aec;
case 0x5c2af3:c.instructions+=6;goto B5c2af3;
case 0x5c2af4:c.instructions+=5;goto B5c2af4;
case 0x5c2af5:c.instructions+=4;goto B5c2af5;
case 0x5c2af6:c.instructions+=3;goto B5c2af6;
case 0x5c2af9:c.instructions+=2;goto B5c2af9;
case 0x5c2afc:c.instructions+=1;goto B5c2afc;
case 0x5c2b02:goto L5c2b02;
case 0x5c2b07:goto L5c2b07;
case 0x5c2b09:c.instructions+=1;goto B5c2b09;
case 0x5c2b0f:goto L5c2b0f;
case 0x5c2b15:c.instructions+=2;goto B5c2b15;
case 0x5c2b1a:c.instructions+=1;goto B5c2b1a;
case 0x5c2b1f:goto L5c2b1f;
case 0x5c2b21:c.instructions+=1;goto B5c2b21;
case 0x5c2b27:goto L5c2b27;
case 0x5c2b2a:c.instructions+=2;goto B5c2b2a;
case 0x5c2b2d:c.instructions+=1;goto B5c2b2d;
case 0x5c2b30:goto L5c2b30;
case 0x5c2b36:c.instructions+=1;goto B5c2b36;
case 0x5c2b3c:goto L5c2b3c;
case 0x5c2b42:c.instructions+=2;goto B5c2b42;
case 0x5c2b44:c.instructions+=1;goto B5c2b44;
case 0x5c2b4a:goto L5c2b4a;
case 0x5c2b50:c.instructions+=58;goto B5c2b50;
case 0x5c2b56:c.instructions+=57;goto B5c2b56;
case 0x5c2b5c:c.instructions+=56;goto B5c2b5c;
case 0x5c2b60:c.instructions+=55;goto B5c2b60;
case 0x5c2b66:c.instructions+=54;goto B5c2b66;
case 0x5c2b6c:c.instructions+=53;goto B5c2b6c;
case 0x5c2b70:c.instructions+=52;goto B5c2b70;
case 0x5c2b74:c.instructions+=51;goto B5c2b74;
case 0x5c2b7a:c.instructions+=50;goto B5c2b7a;
case 0x5c2b80:c.instructions+=49;goto B5c2b80;
case 0x5c2b84:c.instructions+=48;goto B5c2b84;
case 0x5c2b88:c.instructions+=47;goto B5c2b88;
case 0x5c2b8e:c.instructions+=46;goto B5c2b8e;
case 0x5c2b92:c.instructions+=45;goto B5c2b92;
case 0x5c2b98:c.instructions+=44;goto B5c2b98;
case 0x5c2b9f:c.instructions+=43;goto B5c2b9f;
case 0x5c2ba3:c.instructions+=42;goto B5c2ba3;
case 0x5c2ba5:c.instructions+=41;goto B5c2ba5;
case 0x5c2bab:c.instructions+=40;goto B5c2bab;
case 0x5c2baf:c.instructions+=39;goto B5c2baf;
case 0x5c2bb6:c.instructions+=38;goto B5c2bb6;
case 0x5c2bba:c.instructions+=37;goto B5c2bba;
case 0x5c2bbe:c.instructions+=36;goto B5c2bbe;
case 0x5c2bc4:c.instructions+=35;goto B5c2bc4;
case 0x5c2bc8:c.instructions+=34;goto B5c2bc8;
case 0x5c2bcc:c.instructions+=33;goto B5c2bcc;
case 0x5c2bd2:c.instructions+=32;goto B5c2bd2;
case 0x5c2bd6:c.instructions+=31;goto B5c2bd6;
case 0x5c2bda:c.instructions+=30;goto B5c2bda;
case 0x5c2be0:c.instructions+=29;goto B5c2be0;
case 0x5c2be2:c.instructions+=28;goto B5c2be2;
case 0x5c2be6:c.instructions+=27;goto B5c2be6;
case 0x5c2bea:c.instructions+=26;goto B5c2bea;
case 0x5c2bf0:c.instructions+=25;goto B5c2bf0;
case 0x5c2bf4:c.instructions+=24;goto B5c2bf4;
case 0x5c2bfa:c.instructions+=23;goto B5c2bfa;
case 0x5c2bfe:c.instructions+=22;goto B5c2bfe;
case 0x5c2c02:c.instructions+=21;goto B5c2c02;
case 0x5c2c06:c.instructions+=20;goto B5c2c06;
case 0x5c2c0c:c.instructions+=19;goto B5c2c0c;
case 0x5c2c10:c.instructions+=18;goto B5c2c10;
case 0x5c2c16:c.instructions+=17;goto B5c2c16;
case 0x5c2c1a:c.instructions+=16;goto B5c2c1a;
case 0x5c2c20:c.instructions+=15;goto B5c2c20;
case 0x5c2c24:c.instructions+=14;goto B5c2c24;
case 0x5c2c28:c.instructions+=13;goto B5c2c28;
case 0x5c2c2c:c.instructions+=12;goto B5c2c2c;
case 0x5c2c2e:c.instructions+=11;goto B5c2c2e;
case 0x5c2c32:c.instructions+=10;goto B5c2c32;
case 0x5c2c36:c.instructions+=9;goto B5c2c36;
case 0x5c2c3a:c.instructions+=8;goto B5c2c3a;
case 0x5c2c3e:c.instructions+=7;goto B5c2c3e;
case 0x5c2c42:c.instructions+=6;goto B5c2c42;
case 0x5c2c46:c.instructions+=5;goto B5c2c46;
case 0x5c2c4a:c.instructions+=4;goto B5c2c4a;
case 0x5c2c4e:c.instructions+=3;goto B5c2c4e;
case 0x5c2c50:c.instructions+=2;goto B5c2c50;
case 0x5c2c54:c.instructions+=1;goto B5c2c54;
case 0x5c2c56:goto L5c2c56;
case 0x5c2c58:c.instructions+=2;goto B5c2c58;
case 0x5c2c5a:c.instructions+=1;goto B5c2c5a;
case 0x5c2c60:goto L5c2c60;
case 0x5c2c65:goto L5c2c65;
case 0x5c2c6c:c.instructions+=1;goto B5c2c6c;
case 0x5c2c72:goto L5c2c72;
case 0x5c2c77:c.instructions+=3;goto B5c2c77;
case 0x5c2c7a:c.instructions+=2;goto B5c2c7a;
case 0x5c2c7d:c.instructions+=1;goto B5c2c7d;
case 0x5c2c83:goto L5c2c83;
case 0x5c2c84:c.instructions+=2;goto B5c2c84;
case 0x5c2c89:c.instructions+=1;goto B5c2c89;
case 0x5c2c8e:goto L5c2c8e;
case 0x5c2c94:c.instructions+=2;goto B5c2c94;
case 0x5c2c95:c.instructions+=1;goto B5c2c95;
case 0x5c2c9a:goto L5c2c9a;
case 0x5c2c9d:c.instructions+=9;goto B5c2c9d;
case 0x5c2ca0:c.instructions+=8;goto B5c2ca0;
case 0x5c2ca3:c.instructions+=7;goto B5c2ca3;
case 0x5c2ca7:c.instructions+=6;goto B5c2ca7;
case 0x5c2caa:c.instructions+=5;goto B5c2caa;
case 0x5c2cae:c.instructions+=4;goto B5c2cae;
case 0x5c2cb2:c.instructions+=3;goto B5c2cb2;
case 0x5c2cb3:c.instructions+=2;goto B5c2cb3;
case 0x5c2cb8:c.instructions+=1;goto B5c2cb8;
case 0x5c2cbd:goto L5c2cbd;
case 0x5c2cc3:c.instructions+=2;goto B5c2cc3;
case 0x5c2cc4:c.instructions+=1;goto B5c2cc4;
case 0x5c2cc9:goto L5c2cc9;
case 0x5c2ccf:c.instructions+=10;goto B5c2ccf;
case 0x5c2cd5:c.instructions+=9;goto B5c2cd5;
case 0x5c2cdb:c.instructions+=8;goto B5c2cdb;
case 0x5c2ce0:c.instructions+=7;goto B5c2ce0;
case 0x5c2ce2:c.instructions+=6;goto B5c2ce2;
case 0x5c2ce6:c.instructions+=5;goto B5c2ce6;
case 0x5c2ce7:c.instructions+=4;goto B5c2ce7;
case 0x5c2cec:c.instructions+=3;goto B5c2cec;
case 0x5c2cf0:c.instructions+=2;goto B5c2cf0;
case 0x5c2cf4:c.instructions+=1;goto B5c2cf4;
case 0x5c2cf9:goto L5c2cf9;
case 0x5c2cff:c.instructions+=2;goto B5c2cff;
case 0x5c2d00:c.instructions+=1;goto B5c2d00;
case 0x5c2d05:goto L5c2d05;
case 0x5c2d0b:c.instructions+=9;goto B5c2d0b;
case 0x5c2d11:c.instructions+=8;goto B5c2d11;
case 0x5c2d16:c.instructions+=7;goto B5c2d16;
case 0x5c2d1a:c.instructions+=6;goto B5c2d1a;
case 0x5c2d1d:c.instructions+=5;goto B5c2d1d;
case 0x5c2d21:c.instructions+=4;goto B5c2d21;
case 0x5c2d25:c.instructions+=3;goto B5c2d25;
case 0x5c2d26:c.instructions+=2;goto B5c2d26;
case 0x5c2d2b:c.instructions+=1;goto B5c2d2b;
case 0x5c2d30:goto L5c2d30;
case 0x5c2d36:c.instructions+=2;goto B5c2d36;
case 0x5c2d37:c.instructions+=1;goto B5c2d37;
case 0x5c2d3c:goto L5c2d3c;
case 0x5c2d42:c.instructions+=40;goto B5c2d42;
case 0x5c2d48:c.instructions+=39;goto B5c2d48;
case 0x5c2d4d:c.instructions+=38;goto B5c2d4d;
case 0x5c2d51:c.instructions+=37;goto B5c2d51;
case 0x5c2d54:c.instructions+=36;goto B5c2d54;
case 0x5c2d58:c.instructions+=35;goto B5c2d58;
case 0x5c2d5c:c.instructions+=34;goto B5c2d5c;
case 0x5c2d62:c.instructions+=33;goto B5c2d62;
case 0x5c2d66:c.instructions+=32;goto B5c2d66;
case 0x5c2d6c:c.instructions+=31;goto B5c2d6c;
case 0x5c2d70:c.instructions+=30;goto B5c2d70;
case 0x5c2d76:c.instructions+=29;goto B5c2d76;
case 0x5c2d7a:c.instructions+=28;goto B5c2d7a;
case 0x5c2d7c:c.instructions+=27;goto B5c2d7c;
case 0x5c2d80:c.instructions+=26;goto B5c2d80;
case 0x5c2d84:c.instructions+=25;goto B5c2d84;
case 0x5c2d88:c.instructions+=24;goto B5c2d88;
case 0x5c2d8c:c.instructions+=23;goto B5c2d8c;
case 0x5c2d90:c.instructions+=22;goto B5c2d90;
case 0x5c2d92:c.instructions+=21;goto B5c2d92;
case 0x5c2d96:c.instructions+=20;goto B5c2d96;
case 0x5c2d9a:c.instructions+=19;goto B5c2d9a;
case 0x5c2d9e:c.instructions+=18;goto B5c2d9e;
case 0x5c2da2:c.instructions+=17;goto B5c2da2;
case 0x5c2da8:c.instructions+=16;goto B5c2da8;
case 0x5c2dac:c.instructions+=15;goto B5c2dac;
case 0x5c2db2:c.instructions+=14;goto B5c2db2;
case 0x5c2db6:c.instructions+=13;goto B5c2db6;
case 0x5c2dbc:c.instructions+=12;goto B5c2dbc;
case 0x5c2dc0:c.instructions+=11;goto B5c2dc0;
case 0x5c2dc2:c.instructions+=10;goto B5c2dc2;
case 0x5c2dc6:c.instructions+=9;goto B5c2dc6;
case 0x5c2dca:c.instructions+=8;goto B5c2dca;
case 0x5c2dce:c.instructions+=7;goto B5c2dce;
case 0x5c2dd2:c.instructions+=6;goto B5c2dd2;
case 0x5c2dd6:c.instructions+=5;goto B5c2dd6;
case 0x5c2dd8:c.instructions+=4;goto B5c2dd8;
case 0x5c2ddc:c.instructions+=3;goto B5c2ddc;
case 0x5c2de0:c.instructions+=2;goto B5c2de0;
case 0x5c2de4:c.instructions+=1;goto B5c2de4;
case 0x5c2de8:goto L5c2de8;
case 0x5c2dec:c.instructions+=10;goto B5c2dec;
case 0x5c2df0:c.instructions+=9;goto B5c2df0;
case 0x5c2df6:c.instructions+=8;goto B5c2df6;
case 0x5c2df7:c.instructions+=7;goto B5c2df7;
case 0x5c2dfb:c.instructions+=6;goto B5c2dfb;
case 0x5c2dfc:c.instructions+=5;goto B5c2dfc;
case 0x5c2e00:c.instructions+=4;goto B5c2e00;
case 0x5c2e08:c.instructions+=3;goto B5c2e08;
case 0x5c2e10:c.instructions+=2;goto B5c2e10;
case 0x5c2e18:c.instructions+=1;goto B5c2e18;
case 0x5c2e1d:goto L5c2e1d;
case 0x5c2e21:c.instructions+=17;goto B5c2e21;
case 0x5c2e25:c.instructions+=16;goto B5c2e25;
case 0x5c2e29:c.instructions+=15;goto B5c2e29;
case 0x5c2e2a:c.instructions+=14;goto B5c2e2a;
case 0x5c2e2e:c.instructions+=13;goto B5c2e2e;
case 0x5c2e32:c.instructions+=12;goto B5c2e32;
case 0x5c2e33:c.instructions+=11;goto B5c2e33;
case 0x5c2e37:c.instructions+=10;goto B5c2e37;
case 0x5c2e3b:c.instructions+=9;goto B5c2e3b;
case 0x5c2e3f:c.instructions+=8;goto B5c2e3f;
case 0x5c2e40:c.instructions+=7;goto B5c2e40;
case 0x5c2e47:c.instructions+=6;goto B5c2e47;
case 0x5c2e48:c.instructions+=5;goto B5c2e48;
case 0x5c2e4c:c.instructions+=4;goto B5c2e4c;
case 0x5c2e50:c.instructions+=3;goto B5c2e50;
case 0x5c2e54:c.instructions+=2;goto B5c2e54;
case 0x5c2e58:c.instructions+=1;goto B5c2e58;
case 0x5c2e5d:goto L5c2e5d;
case 0x5c2e60:c.instructions+=6;goto B5c2e60;
case 0x5c2e62:c.instructions+=5;goto B5c2e62;
case 0x5c2e63:c.instructions+=4;goto B5c2e63;
case 0x5c2e6a:c.instructions+=3;goto B5c2e6a;
case 0x5c2e6b:c.instructions+=2;goto B5c2e6b;
case 0x5c2e6d:c.instructions+=1;goto B5c2e6d;
case 0x5c2e72:goto L5c2e72;
case 0x5c2e78:c.instructions+=1;goto B5c2e78;
case 0x5c2e7a:goto L5c2e7a;
case 0x5c2e80:c.instructions+=2;goto B5c2e80;
case 0x5c2e86:c.instructions+=1;goto B5c2e86;
case 0x5c2e88:goto L5c2e88;
case 0x5c2e8e:goto L5c2e8e;
case 0x5c2e93:c.instructions+=5;goto B5c2e93;
case 0x5c2e99:c.instructions+=4;goto B5c2e99;
case 0x5c2e9f:c.instructions+=3;goto B5c2e9f;
case 0x5c2ea5:c.instructions+=2;goto B5c2ea5;
case 0x5c2eab:c.instructions+=1;goto B5c2eab;
case 0x5c2ead:goto L5c2ead;
case 0x5c2eb3:c.instructions+=2;goto B5c2eb3;
case 0x5c2eb9:c.instructions+=1;goto B5c2eb9;
case 0x5c2ebe:goto L5c2ebe;
case 0x5c2ec5:goto L5c2ec5;
case 0x5c2ec6:c.instructions+=5;goto B5c2ec6;
case 0x5c2ec7:c.instructions+=4;goto B5c2ec7;
case 0x5c2ec8:c.instructions+=3;goto B5c2ec8;
case 0x5c2eca:c.instructions+=2;goto B5c2eca;
case 0x5c2ecb:c.instructions+=1;goto B5c2ecb;
case 0x5c2ed0:goto L5c2ed0;
case 0x5c2ed5:c.instructions+=15;goto B5c2ed5;
case 0x5c2ed7:c.instructions+=14;goto B5c2ed7;
case 0x5c2eda:c.instructions+=13;goto B5c2eda;
case 0x5c2edc:c.instructions+=12;goto B5c2edc;
case 0x5c2ee0:c.instructions+=11;goto B5c2ee0;
case 0x5c2ee1:c.instructions+=10;goto B5c2ee1;
case 0x5c2ee7:c.instructions+=9;goto B5c2ee7;
case 0x5c2ee9:c.instructions+=8;goto B5c2ee9;
case 0x5c2eeb:c.instructions+=7;goto B5c2eeb;
case 0x5c2eed:c.instructions+=6;goto B5c2eed;
case 0x5c2eef:c.instructions+=5;goto B5c2eef;
case 0x5c2ef0:c.instructions+=4;goto B5c2ef0;
case 0x5c2ef6:c.instructions+=3;goto B5c2ef6;
case 0x5c2ef7:c.instructions+=2;goto B5c2ef7;
case 0x5c2ef8:c.instructions+=1;goto B5c2ef8;
case 0x5c2efb:goto L5c2efb;
case 0x5c2efd:c.instructions+=1;goto B5c2efd;
case 0x5c2f03:goto L5c2f03;
case 0x5c2f07:c.instructions+=10;goto B5c2f07;
case 0x5c2f0c:c.instructions+=9;goto B5c2f0c;
case 0x5c2f0e:c.instructions+=8;goto B5c2f0e;
case 0x5c2f10:c.instructions+=7;goto B5c2f10;
case 0x5c2f12:c.instructions+=6;goto B5c2f12;
case 0x5c2f13:c.instructions+=5;goto B5c2f13;
case 0x5c2f19:c.instructions+=4;goto B5c2f19;
case 0x5c2f1b:c.instructions+=3;goto B5c2f1b;
case 0x5c2f1c:c.instructions+=2;goto B5c2f1c;
case 0x5c2f1d:c.instructions+=1;goto B5c2f1d;
case 0x5c2f23:goto L5c2f23;
case 0x5c2f25:c.instructions+=1;goto B5c2f25;
case 0x5c2f27:goto L5c2f27;
case 0x5c2f2b:c.instructions+=7;goto B5c2f2b;
case 0x5c2f2d:c.instructions+=6;goto B5c2f2d;
case 0x5c2f2f:c.instructions+=5;goto B5c2f2f;
case 0x5c2f31:c.instructions+=4;goto B5c2f31;
case 0x5c2f35:c.instructions+=3;goto B5c2f35;
case 0x5c2f36:c.instructions+=2;goto B5c2f36;
case 0x5c2f37:c.instructions+=1;goto B5c2f37;
case 0x5c2f3a:goto L5c2f3a;
case 0x5c2f3c:c.instructions+=1;goto B5c2f3c;
case 0x5c2f3e:goto L5c2f3e;
case 0x5c2f42:c.instructions+=5;goto B5c2f42;
case 0x5c2f44:c.instructions+=4;goto B5c2f44;
case 0x5c2f48:c.instructions+=3;goto B5c2f48;
case 0x5c2f49:c.instructions+=2;goto B5c2f49;
case 0x5c2f4a:c.instructions+=1;goto B5c2f4a;
case 0x5c2f4d:goto L5c2f4d;
case 0x5c2f51:c.instructions+=2;goto B5c2f51;
case 0x5c2f54:c.instructions+=1;goto B5c2f54;
case 0x5c2f56:goto L5c2f56;
case 0x5c2f59:c.instructions+=1;goto B5c2f59;
case 0x5c2f5b:goto L5c2f5b;
case 0x5c2f5f:c.instructions+=6;goto B5c2f5f;
case 0x5c2f60:c.instructions+=5;goto B5c2f60;
case 0x5c2f64:c.instructions+=4;goto B5c2f64;
case 0x5c2f65:c.instructions+=3;goto B5c2f65;
case 0x5c2f69:c.instructions+=2;goto B5c2f69;
case 0x5c2f6a:c.instructions+=1;goto B5c2f6a;
case 0x5c2f6f:goto L5c2f6f;
case 0x5c2f72:goto L5c2f72;
case 0x5c2f76:c.instructions+=3;goto B5c2f76;
case 0x5c2f78:c.instructions+=2;goto B5c2f78;
case 0x5c2f79:c.instructions+=1;goto B5c2f79;
case 0x5c2f7c:goto L5c2f7c;
case 0x5c2f80:c.instructions+=3;goto B5c2f80;
case 0x5c2f82:c.instructions+=2;goto B5c2f82;
case 0x5c2f83:c.instructions+=1;goto B5c2f83;
case 0x5c2f86:goto L5c2f86;
case 0x5c2f89:c.instructions+=1;goto B5c2f89;
case 0x5c2f90:goto L5c2f90;
case 0x5c2f92:c.instructions+=10;goto B5c2f92;
case 0x5c2f97:c.instructions+=9;goto B5c2f97;
case 0x5c2f9d:c.instructions+=8;goto B5c2f9d;
case 0x5c2f9e:c.instructions+=7;goto B5c2f9e;
case 0x5c2fa5:c.instructions+=6;goto B5c2fa5;
case 0x5c2fa6:c.instructions+=5;goto B5c2fa6;
case 0x5c2fa7:c.instructions+=4;goto B5c2fa7;
case 0x5c2fa8:c.instructions+=3;goto B5c2fa8;
case 0x5c2fa9:c.instructions+=2;goto B5c2fa9;
case 0x5c2fab:c.instructions+=1;goto B5c2fab;
case 0x5c2fb0:goto L5c2fb0;
case 0x5c2fb5:c.instructions+=5;goto B5c2fb5;
case 0x5c2fbc:c.instructions+=4;goto B5c2fbc;
case 0x5c2fc3:c.instructions+=3;goto B5c2fc3;
case 0x5c2fc4:c.instructions+=2;goto B5c2fc4;
case 0x5c2fc7:c.instructions+=1;goto B5c2fc7;
case 0x5c2fcc:goto L5c2fcc;
case 0x5c2fce:c.instructions+=5;goto B5c2fce;
case 0x5c2fd5:c.instructions+=4;goto B5c2fd5;
case 0x5c2fdc:c.instructions+=3;goto B5c2fdc;
case 0x5c2fe1:c.instructions+=2;goto B5c2fe1;
case 0x5c2fe4:c.instructions+=1;goto B5c2fe4;
case 0x5c2fe9:goto L5c2fe9;
case 0x5c2fec:c.instructions+=4;goto B5c2fec;
case 0x5c2ff0:c.instructions+=3;goto B5c2ff0;
case 0x5c2ff2:c.instructions+=2;goto B5c2ff2;
case 0x5c2ffa:c.instructions+=1;goto B5c2ffa;
case 0x5c2ffc:goto L5c2ffc;
case 0x5c2ffe:c.instructions+=1;goto B5c2ffe;
default:missing_instruction(c.pc);}
B5c2000:L5c2000:{c.instructions+=2;NFSU2_TR(0x5c2000);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c2003:{NFSU2_TR(0x5c2003);
if(r1(R+518)){{goto L5c2054;}}
}
B5c2005:L5c2005:{c.instructions+=3;NFSU2_TR(0x5c2005);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x367ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5c200b:{NFSU2_TR(0x5c200b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c200d:{NFSU2_TR(0x5c200d);
if(r1(R+518)){{goto L5c2054;}}
}
B5c200f:L5c200f:{c.instructions+=8;NFSU2_TR(0x5c200f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c2015:{NFSU2_TR(0x5c2015);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x350ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c201b:{NFSU2_TR(0x5c201b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5c2021:{NFSU2_TR(0x5c2021);
__builtin_memmove((R+4),gp(0x870760),4);
}
B5c2027:{NFSU2_TR(0x5c2027);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5c2029:{NFSU2_TR(0x5c2029);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c202c:{NFSU2_TR(0x5c202c);
{u32 ea_=u32(u32(8010776u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c2032:{NFSU2_TR(0x5c2032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2037ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c2037:L5c2037:{c.instructions+=13;NFSU2_TR(0x5c2037);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x360ull))));
w2(U+5,u16(s16(s8(r1(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(U+7,u16(s16(s8(r1(U+4)))));
w2(R+0,u16(u32(r2(U+5))*u32(r2(U+7))));
}
B5c203d:{NFSU2_TR(0x5c203d);
w1(R+8,u8(0x7full));
}
B5c203f:{NFSU2_TR(0x5c203f);
u8 U[3];
w1(R+512,u8((r1(R+8))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(R+8),r1(R+0)));
w1(R+8,u8(u32(r1(R+8))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+8))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c2041:{NFSU2_TR(0x5c2041);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c2044:{NFSU2_TR(0x5c2044);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5c2048:{NFSU2_TR(0x5c2048);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5c204c:{NFSU2_TR(0x5c204c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c204d:{NFSU2_TR(0x5c204d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c204e:{NFSU2_TR(0x5c204e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c204f:{NFSU2_TR(0x5c204f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c2050:{NFSU2_TR(0x5c2050);
__builtin_memmove((R+16),(R+20),4);
}
B5c2052:{NFSU2_TR(0x5c2052);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c2053:{NFSU2_TR(0x5c2053);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c2054:L5c2054:{c.instructions+=5;NFSU2_TR(0x5c2054);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x366ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5c205a:{NFSU2_TR(0x5c205a);
__builtin_memmove((R+28),gp(0x870760),4);
}
B5c2060:{NFSU2_TR(0x5c2060);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5c2062:{NFSU2_TR(0x5c2062);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c2064:{NFSU2_TR(0x5c2064);
if(r1(R+518)){{goto L5c2092;}}
}
B5c2066:L5c2066:{c.instructions+=7;NFSU2_TR(0x5c2066);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c206c:{NFSU2_TR(0x5c206c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2072:{NFSU2_TR(0x5c2072);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5c2078:{NFSU2_TR(0x5c2078);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5c207a:{NFSU2_TR(0x5c207a);
{u32 ea_=u32(r4(R+28)+r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c207d:{NFSU2_TR(0x5c207d);
{u32 ea_=u32(u32(8010776u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c2083:{NFSU2_TR(0x5c2083);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2088ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c2088:L5c2088:{c.instructions+=3;NFSU2_TR(0x5c2088);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x35cull))));
w2(U+5,u16(s16(s8(r1(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(U+7,u16(s16(s8(r1(U+4)))));
w2(R+0,u16(u32(r2(U+5))*u32(r2(U+7))));
}
B5c208e:{NFSU2_TR(0x5c208e);
w1(R+12,u8(0x7full));
}
B5c2090:{NFSU2_TR(0x5c2090);
w1(R+12,u8(u32(r1(R+12))-u32(r1(R+0))));
}
B5c2092:L5c2092:{c.instructions+=4;NFSU2_TR(0x5c2092);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x365ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5c2098:{NFSU2_TR(0x5c2098);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B5c209a:{NFSU2_TR(0x5c209a);
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
B5c209c:{NFSU2_TR(0x5c209c);
if(r1(R+518)){{goto L5c20ca;}}
}
B5c209e:L5c209e:{c.instructions+=7;NFSU2_TR(0x5c209e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c20a4:{NFSU2_TR(0x5c20a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x348ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c20aa:{NFSU2_TR(0x5c20aa);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5c20b0:{NFSU2_TR(0x5c20b0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B5c20b2:{NFSU2_TR(0x5c20b2);
{u32 ea_=u32(r4(R+28)+r4(R+4));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c20b5:{NFSU2_TR(0x5c20b5);
{u32 ea_=u32(u32(8010776u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c20bb:{NFSU2_TR(0x5c20bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c20c0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c20c0:L5c20c0:{c.instructions+=3;NFSU2_TR(0x5c20c0);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x358ull))));
w2(U+5,u16(s16(s8(r1(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(U+7,u16(s16(s8(r1(U+4)))));
w2(R+0,u16(u32(r2(U+5))*u32(r2(U+7))));
}
B5c20c6:{NFSU2_TR(0x5c20c6);
w1(R+4,u8(0x7full));
}
B5c20c8:{NFSU2_TR(0x5c20c8);
u8 U[3];
w1(R+512,u8((r1(R+4))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(R+4),r1(R+0)));
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c20ca:L5c20ca:{c.instructions+=10;NFSU2_TR(0x5c20ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c20cd:{NFSU2_TR(0x5c20cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c20d0:{NFSU2_TR(0x5c20d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13ull))));
w1(U+4,u8(0x80ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5c20d4:{NFSU2_TR(0x5c20d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c20d5:{NFSU2_TR(0x5c20d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c20d6:{NFSU2_TR(0x5c20d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c20d7:{NFSU2_TR(0x5c20d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c20d8:{NFSU2_TR(0x5c20d8);
__builtin_memmove((R+16),(R+20),4);
}
B5c20da:{NFSU2_TR(0x5c20da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c20db:{NFSU2_TR(0x5c20db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c20e0:L5c20e0:{c.instructions+=2;NFSU2_TR(0x5c20e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x13ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c20e7:{NFSU2_TR(0x5c20e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c20ee;}}
}
B5c20e9:L5c20e9:{c.instructions+=1;NFSU2_TR(0x5c20e9);
TAIL_STATIC(0x5b8d90u,5b8);
}
B5c20ee:L5c20ee:{c.instructions+=1;NFSU2_TR(0x5c20ee);
TAIL_STATIC(0x5b8a90u,5b8);
}
B5c2100:L5c2100:{c.instructions+=5;NFSU2_TR(0x5c2100);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c2104:{NFSU2_TR(0x5c2104);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2108:{NFSU2_TR(0x5c2108);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x33cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c210e:{NFSU2_TR(0x5c210e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x340ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2114:{NFSU2_TR(0x5c2114);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2119ull));
TAIL_STATIC(0x5b9120u,5b9);
}
B5c2119:L5c2119:{c.instructions+=1;NFSU2_TR(0x5c2119);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c2120:L5c2120:{c.instructions+=4;NFSU2_TR(0x5c2120);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2121:{NFSU2_TR(0x5c2121);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2122:{NFSU2_TR(0x5c2122);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2124:{NFSU2_TR(0x5c2124);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2129ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c2129:L5c2129:{c.instructions+=3;NFSU2_TR(0x5c2129);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c212b:{NFSU2_TR(0x5c212b);
__builtin_memmove((R+24),(R+0),4);
}
B5c212d:{NFSU2_TR(0x5c212d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2132ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c2132:L5c2132:{c.instructions+=3;NFSU2_TR(0x5c2132);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2134:{NFSU2_TR(0x5c2134);
__builtin_memmove((R+28),(R+0),4);
}
B5c2136:{NFSU2_TR(0x5c2136);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c213bull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c213b:L5c213b:{c.instructions+=5;NFSU2_TR(0x5c213b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c213e:{NFSU2_TR(0x5c213e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c2141:{NFSU2_TR(0x5c2141);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5c2144:{NFSU2_TR(0x5c2144);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c2146:{NFSU2_TR(0x5c2146);
if(r1(R+518)){{goto L5c21ac;}}
}
B5c2148:L5c2148:{c.instructions+=2;NFSU2_TR(0x5c2148);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c214a:{NFSU2_TR(0x5c214a);
if(r1(R+518)){{goto L5c2177;}}
}
B5c214c:L5c214c:{c.instructions+=3;NFSU2_TR(0x5c214c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
}
B5c214f:{NFSU2_TR(0x5c214f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c2151:{NFSU2_TR(0x5c2151);
if(r1(R+518)){{goto L5c2177;}}
}
B5c2153:L5c2153:{c.instructions+=4;NFSU2_TR(0x5c2153);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c2156:{NFSU2_TR(0x5c2156);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5c2159:{NFSU2_TR(0x5c2159);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c215b:{NFSU2_TR(0x5c215b);
if(r1(R+518)){{goto L5c2177;}}
}
B5c215d:L5c215d:{c.instructions+=3;NFSU2_TR(0x5c215d);
__builtin_memmove((R+8),(R+24),4);
}
B5c215f:{NFSU2_TR(0x5c215f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c2161:{NFSU2_TR(0x5c2161);
if(r1(R+518)){{goto L5c2177;}}
}
B5c2163:L5c2163:{c.instructions+=3;NFSU2_TR(0x5c2163);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
}
B5c2166:{NFSU2_TR(0x5c2166);
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
B5c2168:{NFSU2_TR(0x5c2168);
if(r1(R+518)){{goto L5c2177;}}
}
B5c216a:L5c216a:{c.instructions+=4;NFSU2_TR(0x5c216a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c216b:{NFSU2_TR(0x5c216b);
s4(0x8707dc,u32(0x3ull));
}
B5c2175:{NFSU2_TR(0x5c2175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c2176:{NFSU2_TR(0x5c2176);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c2177:L5c2177:{c.instructions+=3;NFSU2_TR(0x5c2177);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c2179:{NFSU2_TR(0x5c2179);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c217b:{NFSU2_TR(0x5c217b);
if(r1(R+518)){{goto L5c21ac;}}
}
B5c217d:L5c217d:{c.instructions+=2;NFSU2_TR(0x5c217d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c217f:{NFSU2_TR(0x5c217f);
if(r1(R+518)){{goto L5c21ac;}}
}
B5c2181:L5c2181:{c.instructions+=3;NFSU2_TR(0x5c2181);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
}
B5c2184:{NFSU2_TR(0x5c2184);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c2186:{NFSU2_TR(0x5c2186);
if(r1(R+518)){{goto L5c21ac;}}
}
B5c2188:L5c2188:{c.instructions+=4;NFSU2_TR(0x5c2188);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c218b:{NFSU2_TR(0x5c218b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
}
B5c218e:{NFSU2_TR(0x5c218e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c2190:{NFSU2_TR(0x5c2190);
if(r1(R+518)){{goto L5c21ac;}}
}
B5c2192:L5c2192:{c.instructions+=3;NFSU2_TR(0x5c2192);
__builtin_memmove((R+0),(R+8),4);
}
B5c2194:{NFSU2_TR(0x5c2194);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c2196:{NFSU2_TR(0x5c2196);
if(r1(R+518)){{goto L5c21ac;}}
}
B5c2198:L5c2198:{c.instructions+=3;NFSU2_TR(0x5c2198);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5c219b:{NFSU2_TR(0x5c219b);
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
B5c219d:{NFSU2_TR(0x5c219d);
if(r1(R+518)){{goto L5c21ac;}}
}
B5c219f:L5c219f:{c.instructions+=4;NFSU2_TR(0x5c219f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c21a0:{NFSU2_TR(0x5c21a0);
s4(0x8707dc,u32(0x2ull));
}
B5c21aa:{NFSU2_TR(0x5c21aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c21ab:{NFSU2_TR(0x5c21ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c21ac:L5c21ac:{c.instructions+=3;NFSU2_TR(0x5c21ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c21ae:{NFSU2_TR(0x5c21ae);
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
B5c21b0:{NFSU2_TR(0x5c21b0);
if(r1(R+518)){{goto L5c21c9;}}
}
B5c21b2:L5c21b2:{c.instructions+=3;NFSU2_TR(0x5c21b2);
__builtin_memmove((R+4),(R+0),4);
}
B5c21b4:{NFSU2_TR(0x5c21b4);
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
B5c21b6:{NFSU2_TR(0x5c21b6);
if(r1(R+518)){{goto L5c21c9;}}
}
B5c21b8:L5c21b8:{c.instructions+=4;NFSU2_TR(0x5c21b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5c21bb:{NFSU2_TR(0x5c21bb);
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
B5c21bd:{NFSU2_TR(0x5c21bd);
s4(0x8707dc,u32(0x1ull));
}
B5c21c7:{NFSU2_TR(0x5c21c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c21d3;}}
}
B5c21c9:L5c21c9:{c.instructions+=1;NFSU2_TR(0x5c21c9);
s4(0x8707dc,u32(0x0ull));
}
B5c21d3:L5c21d3:{c.instructions+=3;NFSU2_TR(0x5c21d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c21d4:{NFSU2_TR(0x5c21d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c21d5:{NFSU2_TR(0x5c21d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c21e0:L5c21e0:{c.instructions+=5;NFSU2_TR(0x5c21e0);
__builtin_memmove((R+0),gp(0x8707e4),4);
}
B5c21e5:{NFSU2_TR(0x5c21e5);
__builtin_memmove((R+4),gp(0x8707e0),4);
}
B5c21eb:{NFSU2_TR(0x5c21eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5c21ee:{NFSU2_TR(0x5c21ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c21f0:{NFSU2_TR(0x5c21f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c21f7;}}
}
B5c21f2:L5c21f2:{c.instructions+=1;NFSU2_TR(0x5c21f2);
__builtin_memmove((R+0),gp(0x8707dc),4);
}
B5c21f7:L5c21f7:{c.instructions+=2;NFSU2_TR(0x5c21f7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c21f9:{NFSU2_TR(0x5c21f9);
if(r1(R+518)){{goto L5c2200;}}
}
B5c21fb:L5c21fb:{c.instructions+=1;NFSU2_TR(0x5c21fb);
__builtin_memmove(gp(0x8707e0),(R+0),4);
}
B5c2200:L5c2200:{c.instructions+=6;NFSU2_TR(0x5c2200);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2201:{NFSU2_TR(0x5c2201);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2202:{NFSU2_TR(0x5c2202);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2203:{NFSU2_TR(0x5c2203);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2204:{NFSU2_TR(0x5c2204);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2206:{NFSU2_TR(0x5c2206);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c220bull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c220b:L5c220b:{c.instructions+=4;NFSU2_TR(0x5c220b);
__builtin_memmove((R+24),(R+0),4);
}
B5c220d:{NFSU2_TR(0x5c220d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c220f:{NFSU2_TR(0x5c220f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2213:{NFSU2_TR(0x5c2213);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2218ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c2218:L5c2218:{c.instructions+=2;NFSU2_TR(0x5c2218);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c221a:{NFSU2_TR(0x5c221a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c221full));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c221f:L5c221f:{c.instructions+=6;NFSU2_TR(0x5c221f);
__builtin_memmove((R+28),(R+0),4);
}
B5c2221:{NFSU2_TR(0x5c2221);
__builtin_memmove((R+0),gp(0x8707dc),4);
}
B5c2226:{NFSU2_TR(0x5c2226);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5c2229:{NFSU2_TR(0x5c2229);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c222c:{NFSU2_TR(0x5c222c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2230:{NFSU2_TR(0x5c2230);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c22a9;}}
}
B5c2232:L5c2232:{c.instructions+=4;NFSU2_TR(0x5c2232);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c2235:{NFSU2_TR(0x5c2235);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5c2238:{NFSU2_TR(0x5c2238);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c223a:{NFSU2_TR(0x5c223a);
if(r1(R+518)){{goto L5c2245;}}
}
B5c223c:L5c223c:{c.instructions+=2;NFSU2_TR(0x5c223c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c223e:{NFSU2_TR(0x5c223e);
if(r1(R+518)){{goto L5c2245;}}
}
B5c2240:L5c2240:{c.instructions+=2;NFSU2_TR(0x5c2240);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B5c2243:{NFSU2_TR(0x5c2243);
{goto L5c2247;}
}
B5c2245:L5c2245:{c.instructions+=1;NFSU2_TR(0x5c2245);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5c2247:L5c2247:{c.instructions+=4;NFSU2_TR(0x5c2247);
__builtin_memmove(gp(0x86e6fc),(R+4),4);
}
B5c224d:{NFSU2_TR(0x5c224d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c224f:{NFSU2_TR(0x5c224f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c2251:{NFSU2_TR(0x5c2251);
if(r1(R+518)){{goto L5c22ef;}}
}
B5c2257:L5c2257:{c.instructions+=3;NFSU2_TR(0x5c2257);
__builtin_memmove((R+8),(R+4),4);
}
B5c2259:{NFSU2_TR(0x5c2259);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c225b:{NFSU2_TR(0x5c225b);
if(r1(R+518)){{goto L5c22ef;}}
}
B5c2261:L5c2261:{c.instructions+=3;NFSU2_TR(0x5c2261);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c2264:{NFSU2_TR(0x5c2264);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c2266:{NFSU2_TR(0x5c2266);
if(r1(R+518)){{goto L5c22ef;}}
}
B5c226c:L5c226c:{c.instructions+=4;NFSU2_TR(0x5c226c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c226f:{NFSU2_TR(0x5c226f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c2272:{NFSU2_TR(0x5c2272);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c2274:{NFSU2_TR(0x5c2274);
if(r1(R+518)){{goto L5c22ef;}}
}
B5c2276:L5c2276:{c.instructions+=3;NFSU2_TR(0x5c2276);
__builtin_memmove((R+4),(R+12),4);
}
B5c2278:{NFSU2_TR(0x5c2278);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c227a:{NFSU2_TR(0x5c227a);
if(r1(R+518)){{goto L5c22ef;}}
}
B5c227c:L5c227c:{c.instructions+=3;NFSU2_TR(0x5c227c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B5c227f:{NFSU2_TR(0x5c227f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c2281:{NFSU2_TR(0x5c2281);
if(r1(R+518)){{goto L5c22ef;}}
}
B5c2283:L5c2283:{c.instructions+=3;NFSU2_TR(0x5c2283);
__builtin_memmove((R+4),(R+8),4);
}
B5c2285:{NFSU2_TR(0x5c2285);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c2287:{NFSU2_TR(0x5c2287);
if(r1(R+518)){{goto L5c2292;}}
}
B5c2289:L5c2289:{c.instructions+=2;NFSU2_TR(0x5c2289);
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
B5c228b:{NFSU2_TR(0x5c228b);
if(r1(R+518)){{goto L5c2292;}}
}
B5c228d:L5c228d:{c.instructions+=2;NFSU2_TR(0x5c228d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c2290:{NFSU2_TR(0x5c2290);
{goto L5c2294;}
}
B5c2292:L5c2292:{c.instructions+=1;NFSU2_TR(0x5c2292);
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
B5c2294:L5c2294:{c.instructions+=2;NFSU2_TR(0x5c2294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c2296:{NFSU2_TR(0x5c2296);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2299ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2299:L5c2299:{c.instructions+=2;NFSU2_TR(0x5c2299);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c229b:{NFSU2_TR(0x5c229b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c22ef;}}
}
B5c229d:L5c229d:{c.instructions+=2;NFSU2_TR(0x5c229d);
s4(0x8707dc,u32(0x2ull));
}
B5c22a7:{NFSU2_TR(0x5c22a7);
{goto L5c22ef;}
}
B5c22a9:L5c22a9:{c.instructions+=2;NFSU2_TR(0x5c22a9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c22ac:{NFSU2_TR(0x5c22ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c22ef;}}
}
B5c22ae:L5c22ae:{c.instructions+=4;NFSU2_TR(0x5c22ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c22b1:{NFSU2_TR(0x5c22b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5c22b4:{NFSU2_TR(0x5c22b4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c22b6:{NFSU2_TR(0x5c22b6);
if(r1(R+518)){{goto L5c22e5;}}
}
B5c22b8:L5c22b8:{c.instructions+=3;NFSU2_TR(0x5c22b8);
__builtin_memmove((R+0),(R+4),4);
}
B5c22ba:{NFSU2_TR(0x5c22ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c22bc:{NFSU2_TR(0x5c22bc);
if(r1(R+518)){{goto L5c22e5;}}
}
B5c22be:L5c22be:{c.instructions+=3;NFSU2_TR(0x5c22be);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5c22c1:{NFSU2_TR(0x5c22c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c22c3:{NFSU2_TR(0x5c22c3);
if(r1(R+518)){{goto L5c22e5;}}
}
B5c22c5:L5c22c5:{c.instructions+=4;NFSU2_TR(0x5c22c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c22c8:{NFSU2_TR(0x5c22c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5c22cb:{NFSU2_TR(0x5c22cb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c22cd:{NFSU2_TR(0x5c22cd);
if(r1(R+518)){{goto L5c22da;}}
}
B5c22cf:L5c22cf:{c.instructions+=3;NFSU2_TR(0x5c22cf);
__builtin_memmove((R+0),(R+4),4);
}
B5c22d1:{NFSU2_TR(0x5c22d1);
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
B5c22d3:{NFSU2_TR(0x5c22d3);
if(r1(R+518)){{goto L5c22da;}}
}
B5c22d5:L5c22d5:{c.instructions+=2;NFSU2_TR(0x5c22d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c22d8:{NFSU2_TR(0x5c22d8);
{goto L5c22dc;}
}
B5c22da:L5c22da:{c.instructions+=1;NFSU2_TR(0x5c22da);
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
B5c22dc:L5c22dc:{c.instructions+=2;NFSU2_TR(0x5c22dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c22de:{NFSU2_TR(0x5c22de);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c22e1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c22e1:L5c22e1:{c.instructions+=2;NFSU2_TR(0x5c22e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c22e3:{NFSU2_TR(0x5c22e3);
if(r1(R+518)){{goto L5c22ef;}}
}
B5c22e5:L5c22e5:{c.instructions+=1;NFSU2_TR(0x5c22e5);
s4(0x8707dc,u32(0x1ull));
}
B5c22ef:L5c22ef:{c.instructions+=4;NFSU2_TR(0x5c22ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c22f2:{NFSU2_TR(0x5c22f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c22f5:{NFSU2_TR(0x5c22f5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c22f7:{NFSU2_TR(0x5c22f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c22fcull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c22fc:L5c22fc:{c.instructions+=3;NFSU2_TR(0x5c22fc);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c22fe:{NFSU2_TR(0x5c22fe);
__builtin_memmove((R+20),(R+0),4);
}
B5c2300:{NFSU2_TR(0x5c2300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2305ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c2305:L5c2305:{c.instructions+=3;NFSU2_TR(0x5c2305);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c2308:{NFSU2_TR(0x5c2308);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c230a:{NFSU2_TR(0x5c230a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c230full));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c230f:L5c230f:{c.instructions+=3;NFSU2_TR(0x5c230f);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2311:{NFSU2_TR(0x5c2311);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2315:{NFSU2_TR(0x5c2315);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c231aull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c231a:L5c231a:{c.instructions+=6;NFSU2_TR(0x5c231a);
__builtin_memmove((R+8),gp(0x8707e0),4);
}
B5c2320:{NFSU2_TR(0x5c2320);
__builtin_memmove((R+0),gp(0x870980),4);
}
B5c2325:{NFSU2_TR(0x5c2325);
__builtin_memmove((R+4),gp(0x870984),4);
}
B5c232b:{NFSU2_TR(0x5c232b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5c232e:{NFSU2_TR(0x5c232e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5c2331:{NFSU2_TR(0x5c2331);
if(r1(R+518)){{goto L5c23a1;}}
}
B5c2333:L5c2333:{c.instructions+=2;NFSU2_TR(0x5c2333);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5c2334:{NFSU2_TR(0x5c2334);
if(r1(R+518)){{goto L5c237b;}}
}
B5c2336:L5c2336:{c.instructions+=2;NFSU2_TR(0x5c2336);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5c2337:{NFSU2_TR(0x5c2337);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c23c5;}}
}
B5c233d:L5c233d:{c.instructions+=9;NFSU2_TR(0x5c233d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2341:{NFSU2_TR(0x5c2341);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2344:{NFSU2_TR(0x5c2344);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2347:{NFSU2_TR(0x5c2347);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c234b:{NFSU2_TR(0x5c234b);
w4(R+0,u32(0x1ull));
}
B5c2350:{NFSU2_TR(0x5c2350);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2353:{NFSU2_TR(0x5c2353);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c2356:{NFSU2_TR(0x5c2356);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2359:{NFSU2_TR(0x5c2359);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c235c:L5c235c:{c.instructions+=7;NFSU2_TR(0x5c235c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c235f:{NFSU2_TR(0x5c235f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c2363:{NFSU2_TR(0x5c2363);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w4(U+4,u32(0x140ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c236a:{NFSU2_TR(0x5c236a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
w4(U+4,u32(0xf0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2371:{NFSU2_TR(0x5c2371);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5c2375:{NFSU2_TR(0x5c2375);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5c2379:{NFSU2_TR(0x5c2379);
{goto L5c23c5;}
}
B5c237b:L5c237b:{c.instructions+=10;NFSU2_TR(0x5c237b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c237f:{NFSU2_TR(0x5c237f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2382:{NFSU2_TR(0x5c2382);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2385:{NFSU2_TR(0x5c2385);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c2389:{NFSU2_TR(0x5c2389);
w4(R+0,u32(0x1ull));
}
B5c238e:{NFSU2_TR(0x5c238e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2391:{NFSU2_TR(0x5c2391);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c2394:{NFSU2_TR(0x5c2394);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c239b:{NFSU2_TR(0x5c239b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5c239f:{NFSU2_TR(0x5c239f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c235cu);}goto L5c235c;}
}
B5c23a1:L5c23a1:{c.instructions+=11;NFSU2_TR(0x5c23a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c23a5:{NFSU2_TR(0x5c23a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c23a9:{NFSU2_TR(0x5c23a9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5c23ab:{NFSU2_TR(0x5c23ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c23ae:{NFSU2_TR(0x5c23ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c23b1:{NFSU2_TR(0x5c23b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c23b4:{NFSU2_TR(0x5c23b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c23b7:{NFSU2_TR(0x5c23b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c23ba:{NFSU2_TR(0x5c23ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c23bd:{NFSU2_TR(0x5c23bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c23c1:{NFSU2_TR(0x5c23c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5c23c5:L5c23c5:{c.instructions+=2;NFSU2_TR(0x5c23c5);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c23c7:{NFSU2_TR(0x5c23c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c23ccull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c23cc:L5c23cc:{c.instructions+=5;NFSU2_TR(0x5c23cc);
__builtin_memmove((R+28),(R+0),4);
}
B5c23ce:{NFSU2_TR(0x5c23ce);
__builtin_memmove((R+0),gp(0x8654a4),4);
}
B5c23d3:{NFSU2_TR(0x5c23d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c23d6:{NFSU2_TR(0x5c23d6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c23d9:{NFSU2_TR(0x5c23d9);
if(r1(R+518)){{goto L5c2424;}}
}
B5c23db:L5c23db:{c.instructions+=1;NFSU2_TR(0x5c23db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c23e0ull));
TAIL_STATIC(0x60f4f0u,60f);
}
B5c23e0:L5c23e0:{c.instructions+=2;NFSU2_TR(0x5c23e0);
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
B5c23e2:{NFSU2_TR(0x5c23e2);
if(r1(R+518)){{goto L5c2424;}}
}
B5c23e4:L5c23e4:{c.instructions+=3;NFSU2_TR(0x5c23e4);
__builtin_memmove((R+24),gp(0x8a30f0),4);
}
B5c23ea:{NFSU2_TR(0x5c23ea);
w4(R+4,u32(0x8a30f0ull));
}
B5c23ef:{NFSU2_TR(0x5c23ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c23f4ull));
TAIL_STATIC(0x502fd0u,502);
}
B5c23f4:L5c23f4:{c.instructions+=2;NFSU2_TR(0x5c23f4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c23f6:{NFSU2_TR(0x5c23f6);
if(r1(R+518)){{goto L5c2424;}}
}
B5c23f8:L5c23f8:{c.instructions+=1;NFSU2_TR(0x5c23f8);
{goto L5c2400;}
}
B5c2400:L5c2400:{c.instructions+=3;NFSU2_TR(0x5c2400);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c2406:{NFSU2_TR(0x5c2406);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c2408:{NFSU2_TR(0x5c2408);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c241e;}}
}
B5c240a:L5c240a:{c.instructions+=2;NFSU2_TR(0x5c240a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c2411:{NFSU2_TR(0x5c2411);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c241e;}}
}
B5c2413:L5c2413:{c.instructions+=4;NFSU2_TR(0x5c2413);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c2416:{NFSU2_TR(0x5c2416);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c2418:{NFSU2_TR(0x5c2418);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B5c241b:{NFSU2_TR(0x5c241b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c241e:L5c241e:{c.instructions+=3;NFSU2_TR(0x5c241e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5c2420:{NFSU2_TR(0x5c2420);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c2422:{NFSU2_TR(0x5c2422);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c2400u);}goto L5c2400;}}
}
B5c2424:L5c2424:{c.instructions+=6;NFSU2_TR(0x5c2424);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c2425:{NFSU2_TR(0x5c2425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c2426:{NFSU2_TR(0x5c2426);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c2427:{NFSU2_TR(0x5c2427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c2428:{NFSU2_TR(0x5c2428);
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
B5c242b:{NFSU2_TR(0x5c242b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c2430:L5c2430:{c.instructions+=7;NFSU2_TR(0x5c2430);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2431:{NFSU2_TR(0x5c2431);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c2436:{NFSU2_TR(0x5c2436);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c2438:{NFSU2_TR(0x5c2438);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c243a:{NFSU2_TR(0x5c243a);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c243c:{NFSU2_TR(0x5c243c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c243d:{NFSU2_TR(0x5c243d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2443ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2443:L5c2443:{c.instructions+=6;NFSU2_TR(0x5c2443);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c2448:{NFSU2_TR(0x5c2448);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c244a:{NFSU2_TR(0x5c244a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c244c:{NFSU2_TR(0x5c244c);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c244e:{NFSU2_TR(0x5c244e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c244f:{NFSU2_TR(0x5c244f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2455ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2455:L5c2455:{c.instructions+=6;NFSU2_TR(0x5c2455);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c245a:{NFSU2_TR(0x5c245a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c245c:{NFSU2_TR(0x5c245c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c245e:{NFSU2_TR(0x5c245e);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2460:{NFSU2_TR(0x5c2460);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2461:{NFSU2_TR(0x5c2461);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2467ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2467:L5c2467:{c.instructions+=6;NFSU2_TR(0x5c2467);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c246c:{NFSU2_TR(0x5c246c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c246e:{NFSU2_TR(0x5c246e);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2470:{NFSU2_TR(0x5c2470);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2472:{NFSU2_TR(0x5c2472);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2473:{NFSU2_TR(0x5c2473);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2479ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2479:L5c2479:{c.instructions+=6;NFSU2_TR(0x5c2479);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c247e:{NFSU2_TR(0x5c247e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c2480:{NFSU2_TR(0x5c2480);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2482:{NFSU2_TR(0x5c2482);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2484:{NFSU2_TR(0x5c2484);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2485:{NFSU2_TR(0x5c2485);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c248bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c248b:L5c248b:{c.instructions+=6;NFSU2_TR(0x5c248b);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c2490:{NFSU2_TR(0x5c2490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c2492:{NFSU2_TR(0x5c2492);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2494:{NFSU2_TR(0x5c2494);
u8 U[4];
w4(U+0,u32(0x89ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2499:{NFSU2_TR(0x5c2499);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c249a:{NFSU2_TR(0x5c249a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c24a0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c24a0:L5c24a0:{c.instructions+=6;NFSU2_TR(0x5c24a0);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c24a5:{NFSU2_TR(0x5c24a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c24a7:{NFSU2_TR(0x5c24a7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c24a9:{NFSU2_TR(0x5c24a9);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c24ab:{NFSU2_TR(0x5c24ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c24ac:{NFSU2_TR(0x5c24ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c24b2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c24b2:L5c24b2:{c.instructions+=6;NFSU2_TR(0x5c24b2);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c24b7:{NFSU2_TR(0x5c24b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c24b9:{NFSU2_TR(0x5c24b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c24bb:{NFSU2_TR(0x5c24bb);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c24bd:{NFSU2_TR(0x5c24bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c24be:{NFSU2_TR(0x5c24be);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c24c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c24c4:L5c24c4:{c.instructions+=6;NFSU2_TR(0x5c24c4);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c24c9:{NFSU2_TR(0x5c24c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c24cb:{NFSU2_TR(0x5c24cb);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c24cd:{NFSU2_TR(0x5c24cd);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c24d2:{NFSU2_TR(0x5c24d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c24d3:{NFSU2_TR(0x5c24d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c24d9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c24d9:L5c24d9:{c.instructions+=7;NFSU2_TR(0x5c24d9);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c24de:{NFSU2_TR(0x5c24de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c24e0:{NFSU2_TR(0x5c24e0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c24e2:{NFSU2_TR(0x5c24e2);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c24e4:{NFSU2_TR(0x5c24e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c24e6:{NFSU2_TR(0x5c24e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c24e7:{NFSU2_TR(0x5c24e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c24edull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c24ed:L5c24ed:{c.instructions+=7;NFSU2_TR(0x5c24ed);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c24f2:{NFSU2_TR(0x5c24f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c24f4:{NFSU2_TR(0x5c24f4);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c24f6:{NFSU2_TR(0x5c24f6);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c24f8:{NFSU2_TR(0x5c24f8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c24fa:{NFSU2_TR(0x5c24fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c24fb:{NFSU2_TR(0x5c24fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2501ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2501:L5c2501:{c.instructions+=7;NFSU2_TR(0x5c2501);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c2506:{NFSU2_TR(0x5c2506);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c2508:{NFSU2_TR(0x5c2508);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c250a:{NFSU2_TR(0x5c250a);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c250c:{NFSU2_TR(0x5c250c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c250e:{NFSU2_TR(0x5c250e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c250f:{NFSU2_TR(0x5c250f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2515ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2515:L5c2515:{c.instructions+=7;NFSU2_TR(0x5c2515);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c251a:{NFSU2_TR(0x5c251a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c251c:{NFSU2_TR(0x5c251c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c251e:{NFSU2_TR(0x5c251e);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2520:{NFSU2_TR(0x5c2520);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2522:{NFSU2_TR(0x5c2522);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2523:{NFSU2_TR(0x5c2523);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2529ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2529:L5c2529:{c.instructions+=7;NFSU2_TR(0x5c2529);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c252e:{NFSU2_TR(0x5c252e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c2530:{NFSU2_TR(0x5c2530);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2532:{NFSU2_TR(0x5c2532);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2534:{NFSU2_TR(0x5c2534);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2536:{NFSU2_TR(0x5c2536);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2537:{NFSU2_TR(0x5c2537);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c253dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c253d:L5c253d:{c.instructions+=7;NFSU2_TR(0x5c253d);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c2542:{NFSU2_TR(0x5c2542);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c2544:{NFSU2_TR(0x5c2544);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2546:{NFSU2_TR(0x5c2546);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2548:{NFSU2_TR(0x5c2548);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c254a:{NFSU2_TR(0x5c254a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c254b:{NFSU2_TR(0x5c254b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2551ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2551:L5c2551:{c.instructions+=7;NFSU2_TR(0x5c2551);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c2556:{NFSU2_TR(0x5c2556);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c2558:{NFSU2_TR(0x5c2558);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c255a:{NFSU2_TR(0x5c255a);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c255c:{NFSU2_TR(0x5c255c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c255e:{NFSU2_TR(0x5c255e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c255f:{NFSU2_TR(0x5c255f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2565ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2565:L5c2565:{c.instructions+=7;NFSU2_TR(0x5c2565);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c256a:{NFSU2_TR(0x5c256a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c256c:{NFSU2_TR(0x5c256c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c256e:{NFSU2_TR(0x5c256e);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2570:{NFSU2_TR(0x5c2570);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2572:{NFSU2_TR(0x5c2572);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2573:{NFSU2_TR(0x5c2573);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2579ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2579:L5c2579:{c.instructions+=7;NFSU2_TR(0x5c2579);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c257e:{NFSU2_TR(0x5c257e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c2580:{NFSU2_TR(0x5c2580);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2582:{NFSU2_TR(0x5c2582);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2584:{NFSU2_TR(0x5c2584);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2586:{NFSU2_TR(0x5c2586);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2587:{NFSU2_TR(0x5c2587);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c258dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c258d:L5c258d:{c.instructions+=7;NFSU2_TR(0x5c258d);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c2592:{NFSU2_TR(0x5c2592);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c2594:{NFSU2_TR(0x5c2594);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2596:{NFSU2_TR(0x5c2596);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2598:{NFSU2_TR(0x5c2598);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c259a:{NFSU2_TR(0x5c259a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c259b:{NFSU2_TR(0x5c259b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c25a1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c25a1:L5c25a1:{c.instructions+=7;NFSU2_TR(0x5c25a1);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c25a6:{NFSU2_TR(0x5c25a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c25a8:{NFSU2_TR(0x5c25a8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c25aa:{NFSU2_TR(0x5c25aa);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c25ac:{NFSU2_TR(0x5c25ac);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c25ae:{NFSU2_TR(0x5c25ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c25af:{NFSU2_TR(0x5c25af);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c25b5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c25b5:L5c25b5:{c.instructions+=7;NFSU2_TR(0x5c25b5);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c25ba:{NFSU2_TR(0x5c25ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c25bc:{NFSU2_TR(0x5c25bc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c25be:{NFSU2_TR(0x5c25be);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c25c0:{NFSU2_TR(0x5c25c0);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c25c2:{NFSU2_TR(0x5c25c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c25c3:{NFSU2_TR(0x5c25c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c25c9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c25c9:L5c25c9:{c.instructions+=3;NFSU2_TR(0x5c25c9);
__builtin_memmove((R+0),gp(0x7fee3c),4);
}
B5c25ce:{NFSU2_TR(0x5c25ce);
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
B5c25d0:{NFSU2_TR(0x5c25d0);
if(r1(R+518)){{goto L5c25f2;}}
}
B5c25d2:L5c25d2:{c.instructions+=3;NFSU2_TR(0x5c25d2);
__builtin_memmove((R+0),gp(0x870d08),4);
}
B5c25d7:{NFSU2_TR(0x5c25d7);
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
B5c25d9:{NFSU2_TR(0x5c25d9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5c25f2;}}
}
B5c25db:L5c25db:{c.instructions+=6;NFSU2_TR(0x5c25db);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c25e0:{NFSU2_TR(0x5c25e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c25e2:{NFSU2_TR(0x5c25e2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c25e4:{NFSU2_TR(0x5c25e4);
u8 U[4];
w4(U+0,u32(0xa1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c25e9:{NFSU2_TR(0x5c25e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c25ea:{NFSU2_TR(0x5c25ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c25f0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c25f0:L5c25f0:{c.instructions+=1;NFSU2_TR(0x5c25f0);
{goto L5c2607;}
}
B5c25f2:L5c25f2:{c.instructions+=6;NFSU2_TR(0x5c25f2);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c25f7:{NFSU2_TR(0x5c25f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c25f9:{NFSU2_TR(0x5c25f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c25fb:{NFSU2_TR(0x5c25fb);
u8 U[4];
w4(U+0,u32(0xa1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2600:{NFSU2_TR(0x5c2600);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2601:{NFSU2_TR(0x5c2601);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2607ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2607:L5c2607:{c.instructions+=3;NFSU2_TR(0x5c2607);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2608:{NFSU2_TR(0x5c2608);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c260a:{NFSU2_TR(0x5c260a);
__builtin_memmove((R+12),(R+12),4);
}
B5c2610:L5c2610:{c.instructions+=7;NFSU2_TR(0x5c2610);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c2615:{NFSU2_TR(0x5c2615);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c2617:{NFSU2_TR(0x5c2617);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2619:{NFSU2_TR(0x5c2619);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c261b:{NFSU2_TR(0x5c261b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c261c:{NFSU2_TR(0x5c261c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c261d:{NFSU2_TR(0x5c261d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2623ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2623:L5c2623:{c.instructions+=7;NFSU2_TR(0x5c2623);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c2628:{NFSU2_TR(0x5c2628);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c262a:{NFSU2_TR(0x5c262a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c262c:{NFSU2_TR(0x5c262c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c262e:{NFSU2_TR(0x5c262e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c262f:{NFSU2_TR(0x5c262f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2630:{NFSU2_TR(0x5c2630);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2636ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2636:L5c2636:{c.instructions+=7;NFSU2_TR(0x5c2636);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c263b:{NFSU2_TR(0x5c263b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c263d:{NFSU2_TR(0x5c263d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c263f:{NFSU2_TR(0x5c263f);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2641:{NFSU2_TR(0x5c2641);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2642:{NFSU2_TR(0x5c2642);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2643:{NFSU2_TR(0x5c2643);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2649ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2649:L5c2649:{c.instructions+=7;NFSU2_TR(0x5c2649);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c264e:{NFSU2_TR(0x5c264e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c2650:{NFSU2_TR(0x5c2650);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2651:{NFSU2_TR(0x5c2651);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2653:{NFSU2_TR(0x5c2653);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2654:{NFSU2_TR(0x5c2654);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2655:{NFSU2_TR(0x5c2655);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c265bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c265b:L5c265b:{c.instructions+=3;NFSU2_TR(0x5c265b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5c265c:{NFSU2_TR(0x5c265c);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c265f:{NFSU2_TR(0x5c265f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c2610u);}goto L5c2610;}}
}
B5c2661:L5c2661:{c.instructions+=5;NFSU2_TR(0x5c2661);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5c2667:{NFSU2_TR(0x5c2667);
__builtin_memmove(gp(0x870910),(R+4),4);
}
B5c266d:{NFSU2_TR(0x5c266d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c266f:{NFSU2_TR(0x5c266f);
__builtin_memmove((R+24),(R+4),4);
}
B5c2671:{NFSU2_TR(0x5c2671);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2674ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2674:L5c2674:{c.instructions+=6;NFSU2_TR(0x5c2674);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2677:{NFSU2_TR(0x5c2677);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c267c:{NFSU2_TR(0x5c267c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c267e:{NFSU2_TR(0x5c267e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c267f:{NFSU2_TR(0x5c267f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2680:{NFSU2_TR(0x5c2680);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2686ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2686:L5c2686:{c.instructions+=7;NFSU2_TR(0x5c2686);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c2689:{NFSU2_TR(0x5c2689);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c268b:{NFSU2_TR(0x5c268b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c268d:{NFSU2_TR(0x5c268d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c2691:{NFSU2_TR(0x5c2691);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2692:{NFSU2_TR(0x5c2692);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2693:{NFSU2_TR(0x5c2693);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2699ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2699:L5c2699:{c.instructions+=4;NFSU2_TR(0x5c2699);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c269b:{NFSU2_TR(0x5c269b);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c269d:{NFSU2_TR(0x5c269d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c269f:{NFSU2_TR(0x5c269f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c26a4ull));
TAIL_STATIC(0x5bcbc0u,5bc);
}
B5c26a4:L5c26a4:{c.instructions+=3;NFSU2_TR(0x5c26a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c26a6:{NFSU2_TR(0x5c26a6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c26a8:{NFSU2_TR(0x5c26a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c26adull));
TAIL_STATIC(0x5bcb70u,5bc);
}
B5c26ad:L5c26ad:{c.instructions+=2;NFSU2_TR(0x5c26ad);
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
B5c26b0:{NFSU2_TR(0x5c26b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c26b5ull));
TAIL_STATIC(0x5bdf90u,5bd);
}
B5c26b5:L5c26b5:{c.instructions+=4;NFSU2_TR(0x5c26b5);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5c26bb:{NFSU2_TR(0x5c26bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c26bd:{NFSU2_TR(0x5c26bd);
__builtin_memmove((R+24),(R+4),4);
}
B5c26bf:{NFSU2_TR(0x5c26bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c26c2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c26c2:L5c26c2:{c.instructions+=4;NFSU2_TR(0x5c26c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c26c5:{NFSU2_TR(0x5c26c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c26c7:{NFSU2_TR(0x5c26c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c26c8:{NFSU2_TR(0x5c26c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c26ceull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c26ce:L5c26ce:{c.instructions+=4;NFSU2_TR(0x5c26ce);
s4(0x870910,u32(0x0ull));
}
B5c26d8:{NFSU2_TR(0x5c26d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c26d9:{NFSU2_TR(0x5c26d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c26da:{NFSU2_TR(0x5c26da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c26e0:L5c26e0:{c.instructions+=12;NFSU2_TR(0x5c26e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c26e1:{NFSU2_TR(0x5c26e1);
__builtin_memmove((R+20),(R+16),4);
}
B5c26e3:{NFSU2_TR(0x5c26e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5c26e6:{NFSU2_TR(0x5c26e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8cull))));
}
B5c26ec:{NFSU2_TR(0x5c26ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c26ed:{NFSU2_TR(0x5c26ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c26f0:{NFSU2_TR(0x5c26f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c26f2:{NFSU2_TR(0x5c26f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c26f4:{NFSU2_TR(0x5c26f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c26f7:{NFSU2_TR(0x5c26f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c26f8:{NFSU2_TR(0x5c26f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c26f9:{NFSU2_TR(0x5c26f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c26feull));
TAIL_STATIC(0x43e6d0u,43e);
}
B5c26fe:L5c26fe:{c.instructions+=20;NFSU2_TR(0x5c26fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2706:{NFSU2_TR(0x5c2706);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c270e:{NFSU2_TR(0x5c270e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2716:{NFSU2_TR(0x5c2716);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c271e:{NFSU2_TR(0x5c271e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2726:{NFSU2_TR(0x5c2726);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2727:{NFSU2_TR(0x5c2727);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c272b:{NFSU2_TR(0x5c272b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c272c:{NFSU2_TR(0x5c272c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2734:{NFSU2_TR(0x5c2734);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c273c:{NFSU2_TR(0x5c273c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2744:{NFSU2_TR(0x5c2744);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c274c:{NFSU2_TR(0x5c274c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2754:{NFSU2_TR(0x5c2754);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c275c:{NFSU2_TR(0x5c275c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2764:{NFSU2_TR(0x5c2764);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c276c:{NFSU2_TR(0x5c276c);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2774:{NFSU2_TR(0x5c2774);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c277c:{NFSU2_TR(0x5c277c);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2784:{NFSU2_TR(0x5c2784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2789ull));
TAIL_STATIC(0x5bac90u,5ba);
}
B5c2789:L5c2789:{c.instructions+=8;NFSU2_TR(0x5c2789);
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
B5c278c:{NFSU2_TR(0x5c278c);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c2790:{NFSU2_TR(0x5c2790);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2791:{NFSU2_TR(0x5c2791);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c2795:{NFSU2_TR(0x5c2795);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2796:{NFSU2_TR(0x5c2796);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c279a:{NFSU2_TR(0x5c279a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c279b:{NFSU2_TR(0x5c279b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c27a0ull));
TAIL_STATIC(0x63cedbu,63c);
}
B5c27a0:L5c27a0:{c.instructions+=6;NFSU2_TR(0x5c27a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c27a3:{NFSU2_TR(0x5c27a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c27a6:{NFSU2_TR(0x5c27a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c27a7:{NFSU2_TR(0x5c27a7);
__builtin_memmove((R+16),(R+20),4);
}
B5c27a9:{NFSU2_TR(0x5c27a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c27aa:{NFSU2_TR(0x5c27aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c27b0:L5c27b0:{c.instructions+=35;NFSU2_TR(0x5c27b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c27b1:{NFSU2_TR(0x5c27b1);
__builtin_memmove((R+20),(R+16),4);
}
B5c27b3:{NFSU2_TR(0x5c27b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5c27b6:{NFSU2_TR(0x5c27b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x134ull))));
}
B5c27bc:{NFSU2_TR(0x5c27bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c27bf:{NFSU2_TR(0x5c27bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c27c0:{NFSU2_TR(0x5c27c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c27c1:{NFSU2_TR(0x5c27c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c27c5:{NFSU2_TR(0x5c27c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c27c9:{NFSU2_TR(0x5c27c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c27cd:{NFSU2_TR(0x5c27cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c27d1:{NFSU2_TR(0x5c27d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c27d5:{NFSU2_TR(0x5c27d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c27d6:{NFSU2_TR(0x5c27d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c27d7:{NFSU2_TR(0x5c27d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c27df:{NFSU2_TR(0x5c27df);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c27e7:{NFSU2_TR(0x5c27e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c27ef:{NFSU2_TR(0x5c27ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c27f7:{NFSU2_TR(0x5c27f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c27ff:{NFSU2_TR(0x5c27ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2807:{NFSU2_TR(0x5c2807);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c280f:{NFSU2_TR(0x5c280f);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2817:{NFSU2_TR(0x5c2817);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c281f:{NFSU2_TR(0x5c281f);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2827:{NFSU2_TR(0x5c2827);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c282f:{NFSU2_TR(0x5c282f);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2837:{NFSU2_TR(0x5c2837);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c283f:{NFSU2_TR(0x5c283f);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2847:{NFSU2_TR(0x5c2847);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c284f:{NFSU2_TR(0x5c284f);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2857:{NFSU2_TR(0x5c2857);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c285f:{NFSU2_TR(0x5c285f);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2867:{NFSU2_TR(0x5c2867);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c286f:{NFSU2_TR(0x5c286f);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c287a:{NFSU2_TR(0x5c287a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c287full));
TAIL_STATIC(0x43c780u,43c);
}
B5c287f:L5c287f:{c.instructions+=4;NFSU2_TR(0x5c287f);
__builtin_memmove((R+4),gp(0x870848),4);
}
B5c2885:{NFSU2_TR(0x5c2885);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2888:{NFSU2_TR(0x5c2888);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2889:{NFSU2_TR(0x5c2889);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c288eull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c288e:L5c288e:{c.instructions+=6;NFSU2_TR(0x5c288e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5c2890:{NFSU2_TR(0x5c2890);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2894:{NFSU2_TR(0x5c2894);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5c2897:{NFSU2_TR(0x5c2897);
w4(R+4,u32(0x10ull));
}
B5c289c:{NFSU2_TR(0x5c289c);
__builtin_memmove((R+24),(R+12),4);
}
B5c289e:{NFSU2_TR(0x5c289e);
u8 U[4];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5c28a5:L5c28a5:{c.instructions+=1;NFSU2_TR(0x5c28a5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5c28a7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c28a5u);}goto L5c28a5;}
}
B5c28a7:L5c28a7:{c.instructions+=4;NFSU2_TR(0x5c28a7);
__builtin_memmove((R+24),(R+0),4);
}
B5c28a9:{NFSU2_TR(0x5c28a9);
w4(R+4,u32(0x10ull));
}
B5c28ae:{NFSU2_TR(0x5c28ae);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5c28b5:{NFSU2_TR(0x5c28b5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c28b6:L5c28b6:{c.instructions+=1;NFSU2_TR(0x5c28b6);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5c28b8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c28b6u);}goto L5c28b6;}
}
B5c28b8:L5c28b8:{c.instructions+=1;NFSU2_TR(0x5c28b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c28bdull));
TAIL_STATIC(0x43c780u,43c);
}
B5c28bd:L5c28bd:{c.instructions+=3;NFSU2_TR(0x5c28bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c28c0:{NFSU2_TR(0x5c28c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c28c1:{NFSU2_TR(0x5c28c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c28c6ull));
TAIL_STATIC(0x43c780u,43c);
}
B5c28c6:L5c28c6:{c.instructions+=7;NFSU2_TR(0x5c28c6);
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
B5c28c9:{NFSU2_TR(0x5c28c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c28ca:{NFSU2_TR(0x5c28ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5c28d0:{NFSU2_TR(0x5c28d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c28d1:{NFSU2_TR(0x5c28d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c28d2:{NFSU2_TR(0x5c28d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c28d6:{NFSU2_TR(0x5c28d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c28dbull));
TAIL_STATIC(0x63cedbu,63c);
}
B5c28db:L5c28db:{c.instructions+=7;NFSU2_TR(0x5c28db);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c28df:{NFSU2_TR(0x5c28df);
s4(0x800534,u32(0xffffffffull));
}
B5c28e9:{NFSU2_TR(0x5c28e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c28ec:{NFSU2_TR(0x5c28ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c28ed:{NFSU2_TR(0x5c28ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c28f4:{NFSU2_TR(0x5c28f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c28f5:{NFSU2_TR(0x5c28f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c28faull));
TAIL_STATIC(0x5bdde0u,5bd);
}
B5c28fa:L5c28fa:{c.instructions+=8;NFSU2_TR(0x5c28fa);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c28ff:{NFSU2_TR(0x5c28ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c2901:{NFSU2_TR(0x5c2901);
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
B5c2904:{NFSU2_TR(0x5c2904);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2906:{NFSU2_TR(0x5c2906);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2908:{NFSU2_TR(0x5c2908);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c290a:{NFSU2_TR(0x5c290a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c290b:{NFSU2_TR(0x5c290b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2911ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2911:L5c2911:{c.instructions+=7;NFSU2_TR(0x5c2911);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c2916:{NFSU2_TR(0x5c2916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c2918:{NFSU2_TR(0x5c2918);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c291a:{NFSU2_TR(0x5c291a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c291c:{NFSU2_TR(0x5c291c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c291e:{NFSU2_TR(0x5c291e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c291f:{NFSU2_TR(0x5c291f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2925ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2925:L5c2925:{c.instructions+=7;NFSU2_TR(0x5c2925);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c292a:{NFSU2_TR(0x5c292a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c292c:{NFSU2_TR(0x5c292c);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c292e:{NFSU2_TR(0x5c292e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2930:{NFSU2_TR(0x5c2930);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2932:{NFSU2_TR(0x5c2932);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2933:{NFSU2_TR(0x5c2933);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2939ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2939:L5c2939:{c.instructions+=7;NFSU2_TR(0x5c2939);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c293e:{NFSU2_TR(0x5c293e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c2940:{NFSU2_TR(0x5c2940);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2942:{NFSU2_TR(0x5c2942);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2944:{NFSU2_TR(0x5c2944);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2946:{NFSU2_TR(0x5c2946);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2947:{NFSU2_TR(0x5c2947);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c294dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c294d:L5c294d:{c.instructions+=7;NFSU2_TR(0x5c294d);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c2952:{NFSU2_TR(0x5c2952);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c2954:{NFSU2_TR(0x5c2954);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2956:{NFSU2_TR(0x5c2956);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2958:{NFSU2_TR(0x5c2958);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c295a:{NFSU2_TR(0x5c295a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c295b:{NFSU2_TR(0x5c295b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2961ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2961:L5c2961:{c.instructions+=7;NFSU2_TR(0x5c2961);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c2966:{NFSU2_TR(0x5c2966);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c2968:{NFSU2_TR(0x5c2968);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c296a:{NFSU2_TR(0x5c296a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c296c:{NFSU2_TR(0x5c296c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c296e:{NFSU2_TR(0x5c296e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c296f:{NFSU2_TR(0x5c296f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2975ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2975:L5c2975:{c.instructions+=7;NFSU2_TR(0x5c2975);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c297a:{NFSU2_TR(0x5c297a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c297c:{NFSU2_TR(0x5c297c);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c297e:{NFSU2_TR(0x5c297e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2980:{NFSU2_TR(0x5c2980);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2982:{NFSU2_TR(0x5c2982);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2983:{NFSU2_TR(0x5c2983);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2989ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2989:L5c2989:{c.instructions+=7;NFSU2_TR(0x5c2989);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c298e:{NFSU2_TR(0x5c298e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c2990:{NFSU2_TR(0x5c2990);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2992:{NFSU2_TR(0x5c2992);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2994:{NFSU2_TR(0x5c2994);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2996:{NFSU2_TR(0x5c2996);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2997:{NFSU2_TR(0x5c2997);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c299dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c299d:L5c299d:{c.instructions+=10;NFSU2_TR(0x5c299d);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5c29a3:{NFSU2_TR(0x5c29a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c29a6:{NFSU2_TR(0x5c29a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c29a9:{NFSU2_TR(0x5c29a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c29ac:{NFSU2_TR(0x5c29ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c29b2:{NFSU2_TR(0x5c29b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c29b4:{NFSU2_TR(0x5c29b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c29b5:{NFSU2_TR(0x5c29b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c29b6:{NFSU2_TR(0x5c29b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c29b7:{NFSU2_TR(0x5c29b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c29bdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c29bd:L5c29bd:{c.instructions+=6;NFSU2_TR(0x5c29bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c29c0:{NFSU2_TR(0x5c29c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c29c3:{NFSU2_TR(0x5c29c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c29c4:{NFSU2_TR(0x5c29c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c29c5:{NFSU2_TR(0x5c29c5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c29c7:{NFSU2_TR(0x5c29c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c29ccull));
TAIL_STATIC(0x5bcbc0u,5bc);
}
B5c29cc:L5c29cc:{c.instructions+=3;NFSU2_TR(0x5c29cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c29ce:{NFSU2_TR(0x5c29ce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c29d0:{NFSU2_TR(0x5c29d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c29d5ull));
TAIL_STATIC(0x5bcb70u,5bc);
}
B5c29d5:L5c29d5:{c.instructions+=2;NFSU2_TR(0x5c29d5);
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
B5c29d8:{NFSU2_TR(0x5c29d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c29ddull));
TAIL_STATIC(0x5bdf90u,5bd);
}
B5c29dd:L5c29dd:{c.instructions+=6;NFSU2_TR(0x5c29dd);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c29e2:{NFSU2_TR(0x5c29e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c29e4:{NFSU2_TR(0x5c29e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c29e6:{NFSU2_TR(0x5c29e6);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c29e8:{NFSU2_TR(0x5c29e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c29e9:{NFSU2_TR(0x5c29e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c29efull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c29ef:L5c29ef:{c.instructions+=6;NFSU2_TR(0x5c29ef);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c29f4:{NFSU2_TR(0x5c29f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c29f6:{NFSU2_TR(0x5c29f6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c29f8:{NFSU2_TR(0x5c29f8);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c29fa:{NFSU2_TR(0x5c29fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c29fb:{NFSU2_TR(0x5c29fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2a01ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2a01:L5c2a01:{c.instructions+=5;NFSU2_TR(0x5c2a01);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5c2a06:{NFSU2_TR(0x5c2a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c2a09:{NFSU2_TR(0x5c2a09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c2a0b:{NFSU2_TR(0x5c2a0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a0c:{NFSU2_TR(0x5c2a0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2a12ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2a12:L5c2a12:{c.instructions+=6;NFSU2_TR(0x5c2a12);
__builtin_memmove((R+8),gp(0x870910),4);
}
B5c2a18:{NFSU2_TR(0x5c2a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c2a1b:{NFSU2_TR(0x5c2a1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c2a1d:{NFSU2_TR(0x5c2a1d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a1f:{NFSU2_TR(0x5c2a1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a20:{NFSU2_TR(0x5c2a20);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2a26ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2a26:L5c2a26:{c.instructions+=9;NFSU2_TR(0x5c2a26);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c2a2b:{NFSU2_TR(0x5c2a2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c2a2d:{NFSU2_TR(0x5c2a2d);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a2f:{NFSU2_TR(0x5c2a2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c2a33:{NFSU2_TR(0x5c2a33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a34:{NFSU2_TR(0x5c2a34);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a36:{NFSU2_TR(0x5c2a36);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a38:{NFSU2_TR(0x5c2a38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a39:{NFSU2_TR(0x5c2a39);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2a3full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2a3f:L5c2a3f:{c.instructions+=5;NFSU2_TR(0x5c2a3f);
__builtin_memmove((R+8),gp(0x870910),4);
}
B5c2a45:{NFSU2_TR(0x5c2a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c2a48:{NFSU2_TR(0x5c2a48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c2a4a:{NFSU2_TR(0x5c2a4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a4b:{NFSU2_TR(0x5c2a4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2a51ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2a51:L5c2a51:{c.instructions+=6;NFSU2_TR(0x5c2a51);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c2a56:{NFSU2_TR(0x5c2a56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c2a58:{NFSU2_TR(0x5c2a58);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a5a:{NFSU2_TR(0x5c2a5a);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a5c:{NFSU2_TR(0x5c2a5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a5d:{NFSU2_TR(0x5c2a5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2a63ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2a63:L5c2a63:{c.instructions+=6;NFSU2_TR(0x5c2a63);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c2a68:{NFSU2_TR(0x5c2a68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c2a6a:{NFSU2_TR(0x5c2a6a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a6c:{NFSU2_TR(0x5c2a6c);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a6e:{NFSU2_TR(0x5c2a6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a6f:{NFSU2_TR(0x5c2a6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2a75ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2a75:L5c2a75:{c.instructions+=4;NFSU2_TR(0x5c2a75);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a77:{NFSU2_TR(0x5c2a77);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a79:{NFSU2_TR(0x5c2a79);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a7b:{NFSU2_TR(0x5c2a7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2a80ull));
TAIL_STATIC(0x5bcbc0u,5bc);
}
B5c2a80:L5c2a80:{c.instructions+=7;NFSU2_TR(0x5c2a80);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2a84:{NFSU2_TR(0x5c2a84);
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
B5c2a87:{NFSU2_TR(0x5c2a87);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5c2a8a:{NFSU2_TR(0x5c2a8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a8b:{NFSU2_TR(0x5c2a8b);
w4(R+4,u32(0x10ull));
}
B5c2a90:{NFSU2_TR(0x5c2a90);
u8 U[4];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5c2a97:{NFSU2_TR(0x5c2a97);
__builtin_memmove((R+28),(R+12),4);
}
B5c2a99:L5c2a99:{c.instructions+=1;NFSU2_TR(0x5c2a99);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5c2a9b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c2a99u);}goto L5c2a99;}
}
B5c2a9b:L5c2a9b:{c.instructions+=5;NFSU2_TR(0x5c2a9b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2a9c:{NFSU2_TR(0x5c2a9c);
__builtin_memmove((R+28),(R+0),4);
}
B5c2a9e:{NFSU2_TR(0x5c2a9e);
w4(R+4,u32(0x10ull));
}
B5c2aa3:{NFSU2_TR(0x5c2aa3);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5c2aaa:{NFSU2_TR(0x5c2aaa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2aab:L5c2aab:{c.instructions+=1;NFSU2_TR(0x5c2aab);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5c2aad;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c2aabu);}goto L5c2aab;}
}
B5c2aad:L5c2aad:{c.instructions+=1;NFSU2_TR(0x5c2aad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2ab2ull));
TAIL_STATIC(0x63cedbu,63c);
}
B5c2ab2:L5c2ab2:{c.instructions+=6;NFSU2_TR(0x5c2ab2);
__builtin_memmove((R+0),gp(0x870848),4);
}
B5c2ab7:{NFSU2_TR(0x5c2ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c2aba:{NFSU2_TR(0x5c2aba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2abb:{NFSU2_TR(0x5c2abb);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c2ac2:{NFSU2_TR(0x5c2ac2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2ac3:{NFSU2_TR(0x5c2ac3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2ac8ull));
TAIL_STATIC(0x5bdde0u,5bd);
}
B5c2ac8:L5c2ac8:{c.instructions+=7;NFSU2_TR(0x5c2ac8);
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
B5c2acb:{NFSU2_TR(0x5c2acb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c2acc:{NFSU2_TR(0x5c2acc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c2acd:{NFSU2_TR(0x5c2acd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c2ace:{NFSU2_TR(0x5c2ace);
__builtin_memmove((R+16),(R+20),4);
}
B5c2ad0:{NFSU2_TR(0x5c2ad0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c2ad1:{NFSU2_TR(0x5c2ad1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c2ae0:L5c2ae0:{c.instructions+=11;NFSU2_TR(0x5c2ae0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2ae1:{NFSU2_TR(0x5c2ae1);
__builtin_memmove((R+20),(R+16),4);
}
B5c2ae3:{NFSU2_TR(0x5c2ae3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5c2ae6:{NFSU2_TR(0x5c2ae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc4ull))));
}
B5c2aec:{NFSU2_TR(0x5c2aec);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c2af3:{NFSU2_TR(0x5c2af3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2af4:{NFSU2_TR(0x5c2af4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2af5:{NFSU2_TR(0x5c2af5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2af6:{NFSU2_TR(0x5c2af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c2af9:{NFSU2_TR(0x5c2af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c2afc:{NFSU2_TR(0x5c2afc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c2c65;}}
}
B5c2b02:L5c2b02:{c.instructions+=1;NFSU2_TR(0x5c2b02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2b07ull));
TAIL_STATIC(0x60f4f0u,60f);
}
B5c2b07:L5c2b07:{c.instructions+=2;NFSU2_TR(0x5c2b07);
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
B5c2b09:{NFSU2_TR(0x5c2b09);
if(r1(R+518)){{goto L5c2c65;}}
}
B5c2b0f:L5c2b0f:{c.instructions+=3;NFSU2_TR(0x5c2b0f);
__builtin_memmove((R+24),gp(0x8a30f0),4);
}
B5c2b15:{NFSU2_TR(0x5c2b15);
w4(R+4,u32(0x8a30f0ull));
}
B5c2b1a:{NFSU2_TR(0x5c2b1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2b1full));
TAIL_STATIC(0x502fd0u,502);
}
B5c2b1f:L5c2b1f:{c.instructions+=2;NFSU2_TR(0x5c2b1f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c2b21:{NFSU2_TR(0x5c2b21);
if(r1(R+518)){{goto L5c2de8;}}
}
B5c2b27:L5c2b27:{c.instructions+=3;NFSU2_TR(0x5c2b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c2b2a:{NFSU2_TR(0x5c2b2a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
}
B5c2b2d:{NFSU2_TR(0x5c2b2d);
__builtin_memmove((R+4),(R+4),4);
}
B5c2b30:L5c2b30:{c.instructions+=2;NFSU2_TR(0x5c2b30);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c2b36:{NFSU2_TR(0x5c2b36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c2c56;}}
}
B5c2b3c:L5c2b3c:{c.instructions+=3;NFSU2_TR(0x5c2b3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2b42:{NFSU2_TR(0x5c2b42);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c2b44:{NFSU2_TR(0x5c2b44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c2c56;}}
}
B5c2b4a:L5c2b4a:{c.instructions+=59;NFSU2_TR(0x5c2b4a);
{u32 ea_=u32(r4(R+24)+u32(2336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2b50:{NFSU2_TR(0x5c2b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x924ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2b56:{NFSU2_TR(0x5c2b56);
{u32 ea_=u32(u32(8005560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c2b5c:{NFSU2_TR(0x5c2b5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2b60:{NFSU2_TR(0x5c2b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x928ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2b66:{NFSU2_TR(0x5c2b66);
{u32 ea_=u32(u32(8005560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2b6c:{NFSU2_TR(0x5c2b6c);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c2b70:{NFSU2_TR(0x5c2b70);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2b74:{NFSU2_TR(0x5c2b74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x940ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2b7a:{NFSU2_TR(0x5c2b7a);
{u32 ea_=u32(u32(8005560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2b80:{NFSU2_TR(0x5c2b80);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c2b84:{NFSU2_TR(0x5c2b84);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2b88:{NFSU2_TR(0x5c2b88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x944ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2b8e:{NFSU2_TR(0x5c2b8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2b92:{NFSU2_TR(0x5c2b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x948ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2b98:{NFSU2_TR(0x5c2b98);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2b9f:{NFSU2_TR(0x5c2b9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2ba3:{NFSU2_TR(0x5c2ba3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c2ba5:{NFSU2_TR(0x5c2ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x910ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2bab:{NFSU2_TR(0x5c2bab);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2baf:{NFSU2_TR(0x5c2baf);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2bb6:{NFSU2_TR(0x5c2bb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2bba:{NFSU2_TR(0x5c2bba);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2bbe:{NFSU2_TR(0x5c2bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x914ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2bc4:{NFSU2_TR(0x5c2bc4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c2bc8:{NFSU2_TR(0x5c2bc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2bcc:{NFSU2_TR(0x5c2bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2bd2:{NFSU2_TR(0x5c2bd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2bd6:{NFSU2_TR(0x5c2bd6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2bda:{NFSU2_TR(0x5c2bda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2be0:{NFSU2_TR(0x5c2be0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c2be2:{NFSU2_TR(0x5c2be2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2be6:{NFSU2_TR(0x5c2be6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c2bea:{NFSU2_TR(0x5c2bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x924ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2bf0:{NFSU2_TR(0x5c2bf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2bf4:{NFSU2_TR(0x5c2bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x928ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2bfa:{NFSU2_TR(0x5c2bfa);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2bfe:{NFSU2_TR(0x5c2bfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2c02:{NFSU2_TR(0x5c2c02);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c2c06:{NFSU2_TR(0x5c2c06);
{u32 ea_=u32(u32(8005564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2c0c:{NFSU2_TR(0x5c2c0c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c2c10:{NFSU2_TR(0x5c2c10);
{u32 ea_=u32(u32(8005564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2c16:{NFSU2_TR(0x5c2c16);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c2c1a:{NFSU2_TR(0x5c2c1a);
{u32 ea_=u32(u32(8005564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2c20:{NFSU2_TR(0x5c2c20);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c2c24:{NFSU2_TR(0x5c2c24);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2c28:{NFSU2_TR(0x5c2c28);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2c2c:{NFSU2_TR(0x5c2c2c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c2c2e:{NFSU2_TR(0x5c2c2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2c32:{NFSU2_TR(0x5c2c32);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2c36:{NFSU2_TR(0x5c2c36);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2c3a:{NFSU2_TR(0x5c2c3a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c2c3e:{NFSU2_TR(0x5c2c3e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2c42:{NFSU2_TR(0x5c2c42);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c2c46:{NFSU2_TR(0x5c2c46);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2c4a:{NFSU2_TR(0x5c2c4a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2c4e:{NFSU2_TR(0x5c2c4e);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5c2c50:{NFSU2_TR(0x5c2c50);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2c54:{NFSU2_TR(0x5c2c54);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5c2c56:L5c2c56:{c.instructions+=3;NFSU2_TR(0x5c2c56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5c2c58:{NFSU2_TR(0x5c2c58);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c2c5a:{NFSU2_TR(0x5c2c5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c2b30u);}goto L5c2b30;}}
}
B5c2c60:L5c2c60:{c.instructions+=1;NFSU2_TR(0x5c2c60);
{goto L5c2de8;}
}
B5c2c65:L5c2c65:{c.instructions+=2;NFSU2_TR(0x5c2c65);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c2c6c:{NFSU2_TR(0x5c2c6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c2de8;}}
}
B5c2c72:L5c2c72:{c.instructions+=4;NFSU2_TR(0x5c2c72);
__builtin_memmove((R+0),gp(0x890080),4);
}
B5c2c77:{NFSU2_TR(0x5c2c77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c2c7a:{NFSU2_TR(0x5c2c7a);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5c2c7d:{NFSU2_TR(0x5c2c7d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c2de8;}}
}
B5c2c83:L5c2c83:{c.instructions+=3;NFSU2_TR(0x5c2c83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2c84:{NFSU2_TR(0x5c2c84);
w4(R+4,u32(0x89e7a0ull));
}
B5c2c89:{NFSU2_TR(0x5c2c89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2c8eull));
TAIL_STATIC(0x5ed980u,5ed);
}
B5c2c8e:L5c2c8e:{c.instructions+=3;NFSU2_TR(0x5c2c8e);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5c2c94:{NFSU2_TR(0x5c2c94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2c95:{NFSU2_TR(0x5c2c95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2c9aull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B5c2c9a:L5c2c9a:{c.instructions+=10;NFSU2_TR(0x5c2c9a);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2c9d:{NFSU2_TR(0x5c2c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c2ca0:{NFSU2_TR(0x5c2ca0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x50ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c2ca3:{NFSU2_TR(0x5c2ca3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2ca7:{NFSU2_TR(0x5c2ca7);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2caa:{NFSU2_TR(0x5c2caa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2cae:{NFSU2_TR(0x5c2cae);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2cb2:{NFSU2_TR(0x5c2cb2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2cb3:{NFSU2_TR(0x5c2cb3);
w4(R+4,u32(0x89e7a0ull));
}
B5c2cb8:{NFSU2_TR(0x5c2cb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2cbdull));
TAIL_STATIC(0x5ed980u,5ed);
}
B5c2cbd:L5c2cbd:{c.instructions+=3;NFSU2_TR(0x5c2cbd);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5c2cc3:{NFSU2_TR(0x5c2cc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2cc4:{NFSU2_TR(0x5c2cc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2cc9ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B5c2cc9:L5c2cc9:{c.instructions+=11;NFSU2_TR(0x5c2cc9);
{u32 ea_=u32(r4(R+0)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2ccf:{NFSU2_TR(0x5c2ccf);
{u32 ea_=u32(r4(R+0)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2cd5:{NFSU2_TR(0x5c2cd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c2cdb:{NFSU2_TR(0x5c2cdb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x90ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c2ce0:{NFSU2_TR(0x5c2ce0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c2ce2:{NFSU2_TR(0x5c2ce2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2ce6:{NFSU2_TR(0x5c2ce6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2ce7:{NFSU2_TR(0x5c2ce7);
w4(R+4,u32(0x89e7a0ull));
}
B5c2cec:{NFSU2_TR(0x5c2cec);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2cf0:{NFSU2_TR(0x5c2cf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2cf4:{NFSU2_TR(0x5c2cf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2cf9ull));
TAIL_STATIC(0x5ed980u,5ed);
}
B5c2cf9:L5c2cf9:{c.instructions+=3;NFSU2_TR(0x5c2cf9);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5c2cff:{NFSU2_TR(0x5c2cff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2d00:{NFSU2_TR(0x5c2d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2d05ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B5c2d05:L5c2d05:{c.instructions+=10;NFSU2_TR(0x5c2d05);
{u32 ea_=u32(r4(R+0)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2d0b:{NFSU2_TR(0x5c2d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c2d11:{NFSU2_TR(0x5c2d11);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x90ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c2d16:{NFSU2_TR(0x5c2d16);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2d1a:{NFSU2_TR(0x5c2d1a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2d1d:{NFSU2_TR(0x5c2d1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2d21:{NFSU2_TR(0x5c2d21);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2d25:{NFSU2_TR(0x5c2d25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2d26:{NFSU2_TR(0x5c2d26);
w4(R+4,u32(0x89e7a0ull));
}
B5c2d2b:{NFSU2_TR(0x5c2d2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2d30ull));
TAIL_STATIC(0x5ed980u,5ed);
}
B5c2d30:L5c2d30:{c.instructions+=3;NFSU2_TR(0x5c2d30);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5c2d36:{NFSU2_TR(0x5c2d36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2d37:{NFSU2_TR(0x5c2d37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2d3cull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B5c2d3c:L5c2d3c:{c.instructions+=41;NFSU2_TR(0x5c2d3c);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2d42:{NFSU2_TR(0x5c2d42);
{u32 ea_=u32(r4(R+0)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2d48:{NFSU2_TR(0x5c2d48);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
}
B5c2d4d:{NFSU2_TR(0x5c2d4d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2d51:{NFSU2_TR(0x5c2d51);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2d54:{NFSU2_TR(0x5c2d54);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2d58:{NFSU2_TR(0x5c2d58);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2d5c:{NFSU2_TR(0x5c2d5c);
{u32 ea_=u32(u32(8005552u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c2d62:{NFSU2_TR(0x5c2d62);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2d66:{NFSU2_TR(0x5c2d66);
{u32 ea_=u32(u32(8005552u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c2d6c:{NFSU2_TR(0x5c2d6c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2d70:{NFSU2_TR(0x5c2d70);
{u32 ea_=u32(u32(8005552u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c2d76:{NFSU2_TR(0x5c2d76);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2d7a:{NFSU2_TR(0x5c2d7a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c2d7c:{NFSU2_TR(0x5c2d7c);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2d80:{NFSU2_TR(0x5c2d80);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2d84:{NFSU2_TR(0x5c2d84);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2d88:{NFSU2_TR(0x5c2d88);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c2d8c:{NFSU2_TR(0x5c2d8c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2d90:{NFSU2_TR(0x5c2d90);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c2d92:{NFSU2_TR(0x5c2d92);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c2d96:{NFSU2_TR(0x5c2d96);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2d9a:{NFSU2_TR(0x5c2d9a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c2d9e:{NFSU2_TR(0x5c2d9e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2da2:{NFSU2_TR(0x5c2da2);
{u32 ea_=u32(u32(8005556u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c2da8:{NFSU2_TR(0x5c2da8);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2dac:{NFSU2_TR(0x5c2dac);
{u32 ea_=u32(u32(8005556u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c2db2:{NFSU2_TR(0x5c2db2);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2db6:{NFSU2_TR(0x5c2db6);
{u32 ea_=u32(u32(8005556u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c2dbc:{NFSU2_TR(0x5c2dbc);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2dc0:{NFSU2_TR(0x5c2dc0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c2dc2:{NFSU2_TR(0x5c2dc2);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2dc6:{NFSU2_TR(0x5c2dc6);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2dca:{NFSU2_TR(0x5c2dca);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2dce:{NFSU2_TR(0x5c2dce);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c2dd2:{NFSU2_TR(0x5c2dd2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2dd6:{NFSU2_TR(0x5c2dd6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c2dd8:{NFSU2_TR(0x5c2dd8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c2ddc:{NFSU2_TR(0x5c2ddc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2de0:{NFSU2_TR(0x5c2de0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c2de4:{NFSU2_TR(0x5c2de4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2de8:L5c2de8:{c.instructions+=11;NFSU2_TR(0x5c2de8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2dec:{NFSU2_TR(0x5c2dec);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c2df0:{NFSU2_TR(0x5c2df0);
{u32 ea_=u32(u32(8005568u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c2df6:{NFSU2_TR(0x5c2df6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2df7:{NFSU2_TR(0x5c2df7);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c2dfb:{NFSU2_TR(0x5c2dfb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2dfc:{NFSU2_TR(0x5c2dfc);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2e00:{NFSU2_TR(0x5c2e00);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2e08:{NFSU2_TR(0x5c2e08);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2e10:{NFSU2_TR(0x5c2e10);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2e18:{NFSU2_TR(0x5c2e18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2e1dull));
TAIL_STATIC(0x43cf10u,43c);
}
B5c2e1d:L5c2e1d:{c.instructions+=18;NFSU2_TR(0x5c2e1d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2e21:{NFSU2_TR(0x5c2e21);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c2e25:{NFSU2_TR(0x5c2e25);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c2e29:{NFSU2_TR(0x5c2e29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2e2a:{NFSU2_TR(0x5c2e2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c2e2e:{NFSU2_TR(0x5c2e2e);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2e32:{NFSU2_TR(0x5c2e32);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2e33:{NFSU2_TR(0x5c2e33);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2e37:{NFSU2_TR(0x5c2e37);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c2e3b:{NFSU2_TR(0x5c2e3b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c2e3f:{NFSU2_TR(0x5c2e3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2e40:{NFSU2_TR(0x5c2e40);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c2e47:{NFSU2_TR(0x5c2e47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2e48:{NFSU2_TR(0x5c2e48);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2e4c:{NFSU2_TR(0x5c2e4c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2e50:{NFSU2_TR(0x5c2e50);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c2e54:{NFSU2_TR(0x5c2e54);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c2e58:{NFSU2_TR(0x5c2e58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2e5dull));
TAIL_STATIC(0x5ba9a0u,5ba);
}
B5c2e5d:L5c2e5d:{c.instructions+=7;NFSU2_TR(0x5c2e5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5c2e60:{NFSU2_TR(0x5c2e60);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5c2e62:{NFSU2_TR(0x5c2e62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2e63:{NFSU2_TR(0x5c2e63);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c2e6a:{NFSU2_TR(0x5c2e6a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2e6b:{NFSU2_TR(0x5c2e6b);
__builtin_memmove((R+4),(R+12),4);
}
B5c2e6d:{NFSU2_TR(0x5c2e6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2e72ull));
TAIL_STATIC(0x447280u,447);
}
B5c2e72:L5c2e72:{c.instructions+=2;NFSU2_TR(0x5c2e72);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c2e78:{NFSU2_TR(0x5c2e78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c2e8e;}}
}
B5c2e7a:L5c2e7a:{c.instructions+=3;NFSU2_TR(0x5c2e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x284ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2e80:{NFSU2_TR(0x5c2e80);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c2e86:{NFSU2_TR(0x5c2e86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c2e8e;}}
}
B5c2e88:L5c2e88:{c.instructions+=1;NFSU2_TR(0x5c2e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2e8e:L5c2e8e:{c.instructions+=6;NFSU2_TR(0x5c2e8e);
__builtin_memmove((R+0),gp(0x7a27ac),4);
}
B5c2e93:{NFSU2_TR(0x5c2e93);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2e99:{NFSU2_TR(0x5c2e99);
__builtin_memmove((R+4),gp(0x7fee58),4);
}
B5c2e9f:{NFSU2_TR(0x5c2e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2ea5:{NFSU2_TR(0x5c2ea5);
u8 U[14];
__builtin_memmove((U+6),gp(0x828640),4);
w1(R+512,u8((r4(U+6))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+24)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c2eab:{NFSU2_TR(0x5c2eab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c2ec5;}}
}
B5c2ead:L5c2ead:{c.instructions+=3;NFSU2_TR(0x5c2ead);
{u32 ea_=u32(u32(8005572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c2eb3:{NFSU2_TR(0x5c2eb3);
{u32 ea_=u32(u32(7881276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c2eb9:{NFSU2_TR(0x5c2eb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2ebeull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c2ebe:L5c2ebe:{c.instructions+=1;NFSU2_TR(0x5c2ebe);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5c2ec5:L5c2ec5:{c.instructions+=6;NFSU2_TR(0x5c2ec5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c2ec6:{NFSU2_TR(0x5c2ec6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c2ec7:{NFSU2_TR(0x5c2ec7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c2ec8:{NFSU2_TR(0x5c2ec8);
__builtin_memmove((R+16),(R+20),4);
}
B5c2eca:{NFSU2_TR(0x5c2eca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c2ecb:{NFSU2_TR(0x5c2ecb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c2ed0:L5c2ed0:{c.instructions+=16;NFSU2_TR(0x5c2ed0);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c2ed5:{NFSU2_TR(0x5c2ed5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c2ed7:{NFSU2_TR(0x5c2ed7);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x2cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c2eda:{NFSU2_TR(0x5c2eda);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2edc:{NFSU2_TR(0x5c2edc);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c2ee0:{NFSU2_TR(0x5c2ee0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2ee1:{NFSU2_TR(0x5c2ee1);
__builtin_memmove((R+8),gp(0x870984),4);
}
B5c2ee7:{NFSU2_TR(0x5c2ee7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2ee9:{NFSU2_TR(0x5c2ee9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2eeb:{NFSU2_TR(0x5c2eeb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2eed:{NFSU2_TR(0x5c2eed);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2eef:{NFSU2_TR(0x5c2eef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2ef0:{NFSU2_TR(0x5c2ef0);
__builtin_memmove((R+8),gp(0x870980),4);
}
B5c2ef6:{NFSU2_TR(0x5c2ef6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2ef7:{NFSU2_TR(0x5c2ef7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2ef8:{NFSU2_TR(0x5c2ef8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2efbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2efb:L5c2efb:{c.instructions+=2;NFSU2_TR(0x5c2efb);
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
B5c2efd:{NFSU2_TR(0x5c2efd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c2f86;}}
}
B5c2f03:L5c2f03:{c.instructions+=11;NFSU2_TR(0x5c2f03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c2f07:{NFSU2_TR(0x5c2f07);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c2f0c:{NFSU2_TR(0x5c2f0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c2f0e:{NFSU2_TR(0x5c2f0e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f10:{NFSU2_TR(0x5c2f10);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f12:{NFSU2_TR(0x5c2f12);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f13:{NFSU2_TR(0x5c2f13);
__builtin_memmove((R+8),gp(0x870850),4);
}
B5c2f19:{NFSU2_TR(0x5c2f19);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f1b:{NFSU2_TR(0x5c2f1b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f1c:{NFSU2_TR(0x5c2f1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f1d:{NFSU2_TR(0x5c2f1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2f23ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2f23:L5c2f23:{c.instructions+=2;NFSU2_TR(0x5c2f23);
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
B5c2f25:{NFSU2_TR(0x5c2f25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c2f86;}}
}
B5c2f27:L5c2f27:{c.instructions+=8;NFSU2_TR(0x5c2f27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c2f2b:{NFSU2_TR(0x5c2f2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c2f2d:{NFSU2_TR(0x5c2f2d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f2f:{NFSU2_TR(0x5c2f2f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f31:{NFSU2_TR(0x5c2f31);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c2f35:{NFSU2_TR(0x5c2f35);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f36:{NFSU2_TR(0x5c2f36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f37:{NFSU2_TR(0x5c2f37);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2f3aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2f3a:L5c2f3a:{c.instructions+=2;NFSU2_TR(0x5c2f3a);
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
B5c2f3c:{NFSU2_TR(0x5c2f3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c2f86;}}
}
B5c2f3e:L5c2f3e:{c.instructions+=6;NFSU2_TR(0x5c2f3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c2f42:{NFSU2_TR(0x5c2f42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c2f44:{NFSU2_TR(0x5c2f44);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c2f48:{NFSU2_TR(0x5c2f48);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f49:{NFSU2_TR(0x5c2f49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f4a:{NFSU2_TR(0x5c2f4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2f4dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2f4d:L5c2f4d:{c.instructions+=3;NFSU2_TR(0x5c2f4d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c2f51:{NFSU2_TR(0x5c2f51);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5c2f54:{NFSU2_TR(0x5c2f54);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c2f72;}}
}
B5c2f56:L5c2f56:{c.instructions+=2;NFSU2_TR(0x5c2f56);
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
B5c2f59:{NFSU2_TR(0x5c2f59);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5c2f72;}}
}
B5c2f5b:L5c2f5b:{c.instructions+=7;NFSU2_TR(0x5c2f5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c2f5f:{NFSU2_TR(0x5c2f5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f60:{NFSU2_TR(0x5c2f60);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c2f64:{NFSU2_TR(0x5c2f64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f65:{NFSU2_TR(0x5c2f65);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c2f69:{NFSU2_TR(0x5c2f69);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f6a:{NFSU2_TR(0x5c2f6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2f6full));
TAIL_STATIC(0x5b9e90u,5b9);
}
B5c2f6f:L5c2f6f:{c.instructions+=1;NFSU2_TR(0x5c2f6f);
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
B5c2f72:L5c2f72:{c.instructions+=4;NFSU2_TR(0x5c2f72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c2f76:{NFSU2_TR(0x5c2f76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c2f78:{NFSU2_TR(0x5c2f78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f79:{NFSU2_TR(0x5c2f79);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2f7cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2f7c:L5c2f7c:{c.instructions+=4;NFSU2_TR(0x5c2f7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c2f80:{NFSU2_TR(0x5c2f80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c2f82:{NFSU2_TR(0x5c2f82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f83:{NFSU2_TR(0x5c2f83);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2f86ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c2f86:L5c2f86:{c.instructions+=2;NFSU2_TR(0x5c2f86);
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
B5c2f89:{NFSU2_TR(0x5c2f89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c2f90:L5c2f90:{c.instructions+=11;NFSU2_TR(0x5c2f90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f92:{NFSU2_TR(0x5c2f92);
u8 U[4];
w4(U+0,u32(0x77917cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f97:{NFSU2_TR(0x5c2f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c2f9d:{NFSU2_TR(0x5c2f9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2f9e:{NFSU2_TR(0x5c2f9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2fa5:{NFSU2_TR(0x5c2fa5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2fa6:{NFSU2_TR(0x5c2fa6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2fa7:{NFSU2_TR(0x5c2fa7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2fa8:{NFSU2_TR(0x5c2fa8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2fa9:{NFSU2_TR(0x5c2fa9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2fab:{NFSU2_TR(0x5c2fab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2fb0ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c2fb0:L5c2fb0:{c.instructions+=6;NFSU2_TR(0x5c2fb0);
w4(R+12,u32(0x1ull));
}
B5c2fb5:{NFSU2_TR(0x5c2fb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w4(U+4,u32(0x872c00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2fbc:{NFSU2_TR(0x5c2fbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
w4(U+4,u32(0x86e7a0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2fc3:{NFSU2_TR(0x5c2fc3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2fc4:{NFSU2_TR(0x5c2fc4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c2fc7:{NFSU2_TR(0x5c2fc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2fccull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c2fcc:L5c2fcc:{c.instructions+=6;NFSU2_TR(0x5c2fcc);
__builtin_memmove((R+24),(R+0),4);
}
B5c2fce:{NFSU2_TR(0x5c2fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w4(U+4,u32(0x8760e0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2fd5:{NFSU2_TR(0x5c2fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x86e768ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2fdc:{NFSU2_TR(0x5c2fdc);
u8 U[4];
w4(U+0,u32(0x3b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c2fe1:{NFSU2_TR(0x5c2fe1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c2fe4:{NFSU2_TR(0x5c2fe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c2fe9ull));
TAIL_STATIC(0x575620u,575);
}
B5c2fe9:L5c2fe9:{c.instructions+=5;NFSU2_TR(0x5c2fe9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5c2fec:{NFSU2_TR(0x5c2fec);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c2ff0:{NFSU2_TR(0x5c2ff0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c2ff2:{NFSU2_TR(0x5c2ff2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c2ffa:{NFSU2_TR(0x5c2ffa);
if(r1(R+518)){TAIL_STATIC(0x5c3005u,5c3);}
}
B5c2ffc:L5c2ffc:{c.instructions+=2;NFSU2_TR(0x5c2ffc);
__builtin_memmove((R+4),(R+0),4);
}
B5c2ffe:{NFSU2_TR(0x5c2ffe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3003ull));
TAIL_STATIC(0x5e0260u,5e0);
}
XIT:NFSU2_TR_EXIT(0x5c2,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
