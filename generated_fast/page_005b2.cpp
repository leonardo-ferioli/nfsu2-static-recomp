#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5a7(u8* __restrict R,Cpu& c);
u32 body_5a8(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_5ad(u8* __restrict R,Cpu& c);
u32 body_5ae(u8* __restrict R,Cpu& c);
u32 body_5af(u8* __restrict R,Cpu& c);
u32 body_5b0(u8* __restrict R,Cpu& c);
u32 body_5b3(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5b2,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5b2,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5b2(u8* __restrict R,Cpu& c);
u32 page_5b2(Cpu& c){return body_5b2(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5b2(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5b200a:goto L5b200a;
case 0x5b200f:goto L5b200f;
case 0x5b2015:c.instructions+=2;goto B5b2015;
case 0x5b2017:c.instructions+=1;goto B5b2017;
case 0x5b2019:goto L5b2019;
case 0x5b201f:c.instructions+=4;goto B5b201f;
case 0x5b2025:c.instructions+=3;goto B5b2025;
case 0x5b2027:c.instructions+=2;goto B5b2027;
case 0x5b202a:c.instructions+=1;goto B5b202a;
case 0x5b202c:goto L5b202c;
case 0x5b2032:c.instructions+=7;goto B5b2032;
case 0x5b2035:c.instructions+=6;goto B5b2035;
case 0x5b203b:c.instructions+=5;goto B5b203b;
case 0x5b2041:c.instructions+=4;goto B5b2041;
case 0x5b2047:c.instructions+=3;goto B5b2047;
case 0x5b2049:c.instructions+=2;goto B5b2049;
case 0x5b204c:c.instructions+=1;goto B5b204c;
case 0x5b204e:goto L5b204e;
case 0x5b2058:goto L5b2058;
case 0x5b205a:c.instructions+=1;goto B5b205a;
case 0x5b205f:goto L5b205f;
case 0x5b2060:c.instructions+=5;goto B5b2060;
case 0x5b2061:c.instructions+=4;goto B5b2061;
case 0x5b2062:c.instructions+=3;goto B5b2062;
case 0x5b2064:c.instructions+=2;goto B5b2064;
case 0x5b2065:c.instructions+=1;goto B5b2065;
case 0x5b2070:goto L5b2070;
case 0x5b2071:c.instructions+=11;goto B5b2071;
case 0x5b2073:c.instructions+=10;goto B5b2073;
case 0x5b2076:c.instructions+=9;goto B5b2076;
case 0x5b2079:c.instructions+=8;goto B5b2079;
case 0x5b207a:c.instructions+=7;goto B5b207a;
case 0x5b207c:c.instructions+=6;goto B5b207c;
case 0x5b2082:c.instructions+=5;goto B5b2082;
case 0x5b2084:c.instructions+=4;goto B5b2084;
case 0x5b2085:c.instructions+=3;goto B5b2085;
case 0x5b2088:c.instructions+=2;goto B5b2088;
case 0x5b2090:c.instructions+=1;goto B5b2090;
case 0x5b2096:goto L5b2096;
case 0x5b209c:c.instructions+=4;goto B5b209c;
case 0x5b20a2:c.instructions+=3;goto B5b20a2;
case 0x5b20a4:c.instructions+=2;goto B5b20a4;
case 0x5b20a7:c.instructions+=1;goto B5b20a7;
case 0x5b20ad:goto L5b20ad;
case 0x5b20b0:c.instructions+=18;goto B5b20b0;
case 0x5b20b6:c.instructions+=17;goto B5b20b6;
case 0x5b20b9:c.instructions+=16;goto B5b20b9;
case 0x5b20be:c.instructions+=15;goto B5b20be;
case 0x5b20c1:c.instructions+=14;goto B5b20c1;
case 0x5b20c4:c.instructions+=13;goto B5b20c4;
case 0x5b20c5:c.instructions+=12;goto B5b20c5;
case 0x5b20c8:c.instructions+=11;goto B5b20c8;
case 0x5b20ca:c.instructions+=10;goto B5b20ca;
case 0x5b20ce:c.instructions+=9;goto B5b20ce;
case 0x5b20d0:c.instructions+=8;goto B5b20d0;
case 0x5b20d1:c.instructions+=7;goto B5b20d1;
case 0x5b20d5:c.instructions+=6;goto B5b20d5;
case 0x5b20d6:c.instructions+=5;goto B5b20d6;
case 0x5b20da:c.instructions+=4;goto B5b20da;
case 0x5b20dc:c.instructions+=3;goto B5b20dc;
case 0x5b20e0:c.instructions+=2;goto B5b20e0;
case 0x5b20e4:c.instructions+=1;goto B5b20e4;
case 0x5b20e9:goto L5b20e9;
case 0x5b20ed:c.instructions+=29;goto B5b20ed;
case 0x5b20f0:c.instructions+=28;goto B5b20f0;
case 0x5b20f4:c.instructions+=27;goto B5b20f4;
case 0x5b20f8:c.instructions+=26;goto B5b20f8;
case 0x5b20fc:c.instructions+=25;goto B5b20fc;
case 0x5b20fe:c.instructions+=24;goto B5b20fe;
case 0x5b2102:c.instructions+=23;goto B5b2102;
case 0x5b2106:c.instructions+=22;goto B5b2106;
case 0x5b2108:c.instructions+=21;goto B5b2108;
case 0x5b210a:c.instructions+=20;goto B5b210a;
case 0x5b210d:c.instructions+=19;goto B5b210d;
case 0x5b2110:c.instructions+=18;goto B5b2110;
case 0x5b2112:c.instructions+=17;goto B5b2112;
case 0x5b2114:c.instructions+=16;goto B5b2114;
case 0x5b2116:c.instructions+=15;goto B5b2116;
case 0x5b2118:c.instructions+=14;goto B5b2118;
case 0x5b211a:c.instructions+=13;goto B5b211a;
case 0x5b211c:c.instructions+=12;goto B5b211c;
case 0x5b211e:c.instructions+=11;goto B5b211e;
case 0x5b2120:c.instructions+=10;goto B5b2120;
case 0x5b2122:c.instructions+=9;goto B5b2122;
case 0x5b2124:c.instructions+=8;goto B5b2124;
case 0x5b2126:c.instructions+=7;goto B5b2126;
case 0x5b2128:c.instructions+=6;goto B5b2128;
case 0x5b212a:c.instructions+=5;goto B5b212a;
case 0x5b212e:c.instructions+=4;goto B5b212e;
case 0x5b2130:c.instructions+=3;goto B5b2130;
case 0x5b2132:c.instructions+=2;goto B5b2132;
case 0x5b2135:c.instructions+=1;goto B5b2135;
case 0x5b2137:goto L5b2137;
case 0x5b2139:c.instructions+=1;goto B5b2139;
case 0x5b213d:goto L5b213d;
case 0x5b2143:c.instructions+=3;goto B5b2143;
case 0x5b2145:c.instructions+=2;goto B5b2145;
case 0x5b2148:c.instructions+=1;goto B5b2148;
case 0x5b214a:goto L5b214a;
case 0x5b214c:c.instructions+=6;goto B5b214c;
case 0x5b2152:c.instructions+=5;goto B5b2152;
case 0x5b2153:c.instructions+=4;goto B5b2153;
case 0x5b2154:c.instructions+=3;goto B5b2154;
case 0x5b2156:c.instructions+=2;goto B5b2156;
case 0x5b2157:c.instructions+=1;goto B5b2157;
case 0x5b215a:goto L5b215a;
case 0x5b2160:c.instructions+=27;goto B5b2160;
case 0x5b2163:c.instructions+=26;goto B5b2163;
case 0x5b2165:c.instructions+=25;goto B5b2165;
case 0x5b216a:c.instructions+=24;goto B5b216a;
case 0x5b216c:c.instructions+=23;goto B5b216c;
case 0x5b2170:c.instructions+=22;goto B5b2170;
case 0x5b2172:c.instructions+=21;goto B5b2172;
case 0x5b2176:c.instructions+=20;goto B5b2176;
case 0x5b2178:c.instructions+=19;goto B5b2178;
case 0x5b217a:c.instructions+=18;goto B5b217a;
case 0x5b217c:c.instructions+=17;goto B5b217c;
case 0x5b2180:c.instructions+=16;goto B5b2180;
case 0x5b2182:c.instructions+=15;goto B5b2182;
case 0x5b2185:c.instructions+=14;goto B5b2185;
case 0x5b2189:c.instructions+=13;goto B5b2189;
case 0x5b218c:c.instructions+=12;goto B5b218c;
case 0x5b2190:c.instructions+=11;goto B5b2190;
case 0x5b2193:c.instructions+=10;goto B5b2193;
case 0x5b2196:c.instructions+=9;goto B5b2196;
case 0x5b2198:c.instructions+=8;goto B5b2198;
case 0x5b219a:c.instructions+=7;goto B5b219a;
case 0x5b219e:c.instructions+=6;goto B5b219e;
case 0x5b21a0:c.instructions+=5;goto B5b21a0;
case 0x5b21a2:c.instructions+=4;goto B5b21a2;
case 0x5b21a6:c.instructions+=3;goto B5b21a6;
case 0x5b21a8:c.instructions+=2;goto B5b21a8;
case 0x5b21ac:c.instructions+=1;goto B5b21ac;
case 0x5b21b1:goto L5b21b1;
case 0x5b21b3:c.instructions+=7;goto B5b21b3;
case 0x5b21b7:c.instructions+=6;goto B5b21b7;
case 0x5b21b8:c.instructions+=5;goto B5b21b8;
case 0x5b21bc:c.instructions+=4;goto B5b21bc;
case 0x5b21bd:c.instructions+=3;goto B5b21bd;
case 0x5b21bf:c.instructions+=2;goto B5b21bf;
case 0x5b21c9:c.instructions+=1;goto B5b21c9;
case 0x5b21cc:goto L5b21cc;
case 0x5b21ce:c.instructions+=1;goto B5b21ce;
case 0x5b21d3:goto L5b21d3;
case 0x5b21d5:goto L5b21d5;
case 0x5b21d7:c.instructions+=1;goto B5b21d7;
case 0x5b21dc:goto L5b21dc;
case 0x5b21e2:c.instructions+=4;goto B5b21e2;
case 0x5b21e8:c.instructions+=3;goto B5b21e8;
case 0x5b21ea:c.instructions+=2;goto B5b21ea;
case 0x5b21ed:c.instructions+=1;goto B5b21ed;
case 0x5b21ef:goto L5b21ef;
case 0x5b21f2:c.instructions+=15;goto B5b21f2;
case 0x5b21f4:c.instructions+=14;goto B5b21f4;
case 0x5b21f7:c.instructions+=13;goto B5b21f7;
case 0x5b21f9:c.instructions+=12;goto B5b21f9;
case 0x5b21fb:c.instructions+=11;goto B5b21fb;
case 0x5b21fd:c.instructions+=10;goto B5b21fd;
case 0x5b21ff:c.instructions+=9;goto B5b21ff;
case 0x5b2201:c.instructions+=8;goto B5b2201;
case 0x5b2203:c.instructions+=7;goto B5b2203;
case 0x5b2207:c.instructions+=6;goto B5b2207;
case 0x5b2209:c.instructions+=5;goto B5b2209;
case 0x5b220d:c.instructions+=4;goto B5b220d;
case 0x5b2213:c.instructions+=3;goto B5b2213;
case 0x5b2215:c.instructions+=2;goto B5b2215;
case 0x5b2218:c.instructions+=1;goto B5b2218;
case 0x5b221a:goto L5b221a;
case 0x5b2220:c.instructions+=12;goto B5b2220;
case 0x5b222a:c.instructions+=11;goto B5b222a;
case 0x5b222c:c.instructions+=10;goto B5b222c;
case 0x5b2230:c.instructions+=9;goto B5b2230;
case 0x5b2232:c.instructions+=8;goto B5b2232;
case 0x5b2236:c.instructions+=7;goto B5b2236;
case 0x5b2238:c.instructions+=6;goto B5b2238;
case 0x5b223c:c.instructions+=5;goto B5b223c;
case 0x5b223d:c.instructions+=4;goto B5b223d;
case 0x5b223e:c.instructions+=3;goto B5b223e;
case 0x5b2240:c.instructions+=2;goto B5b2240;
case 0x5b2241:c.instructions+=1;goto B5b2241;
case 0x5b2244:goto L5b2244;
case 0x5b224a:c.instructions+=2;goto B5b224a;
case 0x5b2250:c.instructions+=1;goto B5b2250;
case 0x5b2256:goto L5b2256;
case 0x5b225a:c.instructions+=5;goto B5b225a;
case 0x5b225b:c.instructions+=4;goto B5b225b;
case 0x5b225c:c.instructions+=3;goto B5b225c;
case 0x5b225e:c.instructions+=2;goto B5b225e;
case 0x5b225f:c.instructions+=1;goto B5b225f;
case 0x5b2270:goto L5b2270;
case 0x5b2273:c.instructions+=1;goto B5b2273;
case 0x5b2280:goto L5b2280;
case 0x5b2281:c.instructions+=2;goto B5b2281;
case 0x5b2283:c.instructions+=1;goto B5b2283;
case 0x5b2288:goto L5b2288;
case 0x5b228d:c.instructions+=1;goto B5b228d;
case 0x5b228f:goto L5b228f;
case 0x5b2294:c.instructions+=3;goto B5b2294;
case 0x5b2295:c.instructions+=2;goto B5b2295;
case 0x5b2296:c.instructions+=1;goto B5b2296;
case 0x5b229b:goto L5b229b;
case 0x5b229e:goto L5b229e;
case 0x5b22a0:c.instructions+=2;goto B5b22a0;
case 0x5b22a1:c.instructions+=1;goto B5b22a1;
case 0x5b22b0:goto L5b22b0;
case 0x5b22b2:c.instructions+=17;goto B5b22b2;
case 0x5b22b7:c.instructions+=16;goto B5b22b7;
case 0x5b22bd:c.instructions+=15;goto B5b22bd;
case 0x5b22be:c.instructions+=14;goto B5b22be;
case 0x5b22c5:c.instructions+=13;goto B5b22c5;
case 0x5b22c6:c.instructions+=12;goto B5b22c6;
case 0x5b22c7:c.instructions+=11;goto B5b22c7;
case 0x5b22c9:c.instructions+=10;goto B5b22c9;
case 0x5b22cd:c.instructions+=9;goto B5b22cd;
case 0x5b22d3:c.instructions+=8;goto B5b22d3;
case 0x5b22d9:c.instructions+=7;goto B5b22d9;
case 0x5b22df:c.instructions+=6;goto B5b22df;
case 0x5b22e1:c.instructions+=5;goto B5b22e1;
case 0x5b22e2:c.instructions+=4;goto B5b22e2;
case 0x5b22e4:c.instructions+=3;goto B5b22e4;
case 0x5b22e8:c.instructions+=2;goto B5b22e8;
case 0x5b22ee:c.instructions+=1;goto B5b22ee;
case 0x5b22f0:goto L5b22f0;
case 0x5b22f5:goto L5b22f5;
case 0x5b22fb:c.instructions+=1;goto B5b22fb;
case 0x5b22fd:goto L5b22fd;
case 0x5b22ff:c.instructions+=1;goto B5b22ff;
case 0x5b2304:goto L5b2304;
case 0x5b230a:c.instructions+=47;goto B5b230a;
case 0x5b2310:c.instructions+=46;goto B5b2310;
case 0x5b2312:c.instructions+=45;goto B5b2312;
case 0x5b2315:c.instructions+=44;goto B5b2315;
case 0x5b231b:c.instructions+=43;goto B5b231b;
case 0x5b231e:c.instructions+=42;goto B5b231e;
case 0x5b2324:c.instructions+=41;goto B5b2324;
case 0x5b2327:c.instructions+=40;goto B5b2327;
case 0x5b232d:c.instructions+=39;goto B5b232d;
case 0x5b2331:c.instructions+=38;goto B5b2331;
case 0x5b2337:c.instructions+=37;goto B5b2337;
case 0x5b233d:c.instructions+=36;goto B5b233d;
case 0x5b2341:c.instructions+=35;goto B5b2341;
case 0x5b2343:c.instructions+=34;goto B5b2343;
case 0x5b2348:c.instructions+=33;goto B5b2348;
case 0x5b234a:c.instructions+=32;goto B5b234a;
case 0x5b234d:c.instructions+=31;goto B5b234d;
case 0x5b234f:c.instructions+=30;goto B5b234f;
case 0x5b2352:c.instructions+=29;goto B5b2352;
case 0x5b2354:c.instructions+=28;goto B5b2354;
case 0x5b2356:c.instructions+=27;goto B5b2356;
case 0x5b2358:c.instructions+=26;goto B5b2358;
case 0x5b235a:c.instructions+=25;goto B5b235a;
case 0x5b235c:c.instructions+=24;goto B5b235c;
case 0x5b235e:c.instructions+=23;goto B5b235e;
case 0x5b2364:c.instructions+=22;goto B5b2364;
case 0x5b2368:c.instructions+=21;goto B5b2368;
case 0x5b236e:c.instructions+=20;goto B5b236e;
case 0x5b2374:c.instructions+=19;goto B5b2374;
case 0x5b2378:c.instructions+=18;goto B5b2378;
case 0x5b237a:c.instructions+=17;goto B5b237a;
case 0x5b237f:c.instructions+=16;goto B5b237f;
case 0x5b2381:c.instructions+=15;goto B5b2381;
case 0x5b2384:c.instructions+=14;goto B5b2384;
case 0x5b2386:c.instructions+=13;goto B5b2386;
case 0x5b2389:c.instructions+=12;goto B5b2389;
case 0x5b238b:c.instructions+=11;goto B5b238b;
case 0x5b238d:c.instructions+=10;goto B5b238d;
case 0x5b238f:c.instructions+=9;goto B5b238f;
case 0x5b2391:c.instructions+=8;goto B5b2391;
case 0x5b2393:c.instructions+=7;goto B5b2393;
case 0x5b2395:c.instructions+=6;goto B5b2395;
case 0x5b2399:c.instructions+=5;goto B5b2399;
case 0x5b239f:c.instructions+=4;goto B5b239f;
case 0x5b23a0:c.instructions+=3;goto B5b23a0;
case 0x5b23a7:c.instructions+=2;goto B5b23a7;
case 0x5b23aa:c.instructions+=1;goto B5b23aa;
case 0x5b23b0:goto L5b23b0;
case 0x5b23b2:c.instructions+=10;goto B5b23b2;
case 0x5b23b7:c.instructions+=9;goto B5b23b7;
case 0x5b23bd:c.instructions+=8;goto B5b23bd;
case 0x5b23be:c.instructions+=7;goto B5b23be;
case 0x5b23c5:c.instructions+=6;goto B5b23c5;
case 0x5b23c6:c.instructions+=5;goto B5b23c6;
case 0x5b23c7:c.instructions+=4;goto B5b23c7;
case 0x5b23c9:c.instructions+=3;goto B5b23c9;
case 0x5b23cb:c.instructions+=2;goto B5b23cb;
case 0x5b23cd:c.instructions+=1;goto B5b23cd;
case 0x5b23d0:goto L5b23d0;
case 0x5b23d2:c.instructions+=1;goto B5b23d2;
case 0x5b23d8:goto L5b23d8;
case 0x5b23d9:c.instructions+=3;goto B5b23d9;
case 0x5b23da:c.instructions+=2;goto B5b23da;
case 0x5b23dc:c.instructions+=1;goto B5b23dc;
case 0x5b23e1:goto L5b23e1;
case 0x5b23e4:c.instructions+=4;goto B5b23e4;
case 0x5b23e6:c.instructions+=3;goto B5b23e6;
case 0x5b23e9:c.instructions+=2;goto B5b23e9;
case 0x5b23ed:c.instructions+=1;goto B5b23ed;
case 0x5b23ef:goto L5b23ef;
case 0x5b23f2:c.instructions+=1;goto B5b23f2;
case 0x5b23f4:goto L5b23f4;
case 0x5b23f6:goto L5b23f6;
case 0x5b23fb:c.instructions+=1;goto B5b23fb;
case 0x5b2400:goto L5b2400;
case 0x5b2402:c.instructions+=2;goto B5b2402;
case 0x5b2404:c.instructions+=1;goto B5b2404;
case 0x5b2406:goto L5b2406;
case 0x5b2409:c.instructions+=4;goto B5b2409;
case 0x5b240d:c.instructions+=3;goto B5b240d;
case 0x5b240f:c.instructions+=2;goto B5b240f;
case 0x5b2412:c.instructions+=1;goto B5b2412;
case 0x5b2414:goto L5b2414;
case 0x5b2417:c.instructions+=2;goto B5b2417;
case 0x5b2419:c.instructions+=1;goto B5b2419;
case 0x5b241b:goto L5b241b;
case 0x5b241e:c.instructions+=1;goto B5b241e;
case 0x5b2420:goto L5b2420;
case 0x5b2422:goto L5b2422;
case 0x5b2424:c.instructions+=1;goto B5b2424;
case 0x5b2426:goto L5b2426;
case 0x5b242c:c.instructions+=5;goto B5b242c;
case 0x5b242f:c.instructions+=4;goto B5b242f;
case 0x5b2431:c.instructions+=3;goto B5b2431;
case 0x5b2434:c.instructions+=2;goto B5b2434;
case 0x5b2438:c.instructions+=1;goto B5b2438;
case 0x5b243a:goto L5b243a;
case 0x5b243d:c.instructions+=1;goto B5b243d;
case 0x5b243f:goto L5b243f;
case 0x5b2441:goto L5b2441;
case 0x5b2443:c.instructions+=1;goto B5b2443;
case 0x5b2445:goto L5b2445;
case 0x5b2448:c.instructions+=4;goto B5b2448;
case 0x5b244c:c.instructions+=3;goto B5b244c;
case 0x5b244e:c.instructions+=2;goto B5b244e;
case 0x5b2451:c.instructions+=1;goto B5b2451;
case 0x5b2453:goto L5b2453;
case 0x5b2456:c.instructions+=2;goto B5b2456;
case 0x5b2458:c.instructions+=1;goto B5b2458;
case 0x5b245a:goto L5b245a;
case 0x5b245d:c.instructions+=1;goto B5b245d;
case 0x5b245f:goto L5b245f;
case 0x5b2461:goto L5b2461;
case 0x5b2463:c.instructions+=1;goto B5b2463;
case 0x5b2465:goto L5b2465;
case 0x5b246a:c.instructions+=3;goto B5b246a;
case 0x5b246d:c.instructions+=2;goto B5b246d;
case 0x5b246f:c.instructions+=1;goto B5b246f;
case 0x5b2471:goto L5b2471;
case 0x5b2476:c.instructions+=2;goto B5b2476;
case 0x5b2478:c.instructions+=1;goto B5b2478;
case 0x5b247a:goto L5b247a;
case 0x5b247d:c.instructions+=1;goto B5b247d;
case 0x5b247f:goto L5b247f;
case 0x5b2482:c.instructions+=2;goto B5b2482;
case 0x5b2484:c.instructions+=1;goto B5b2484;
case 0x5b2486:goto L5b2486;
case 0x5b2489:c.instructions+=1;goto B5b2489;
case 0x5b248b:goto L5b248b;
case 0x5b248d:goto L5b248d;
case 0x5b248f:c.instructions+=1;goto B5b248f;
case 0x5b2495:goto L5b2495;
case 0x5b2496:goto L5b2496;
case 0x5b2499:c.instructions+=2;goto B5b2499;
case 0x5b249b:c.instructions+=1;goto B5b249b;
case 0x5b249d:goto L5b249d;
case 0x5b24a0:c.instructions+=1;goto B5b24a0;
case 0x5b24a2:goto L5b24a2;
case 0x5b24a4:goto L5b24a4;
case 0x5b24a6:c.instructions+=1;goto B5b24a6;
case 0x5b24ac:goto L5b24ac;
case 0x5b24af:c.instructions+=4;goto B5b24af;
case 0x5b24b2:c.instructions+=3;goto B5b24b2;
case 0x5b24b4:c.instructions+=2;goto B5b24b4;
case 0x5b24b7:c.instructions+=1;goto B5b24b7;
case 0x5b24bd:goto L5b24bd;
case 0x5b24c0:c.instructions+=4;goto B5b24c0;
case 0x5b24c3:c.instructions+=3;goto B5b24c3;
case 0x5b24c5:c.instructions+=2;goto B5b24c5;
case 0x5b24c8:c.instructions+=1;goto B5b24c8;
case 0x5b24ce:goto L5b24ce;
case 0x5b24d1:c.instructions+=4;goto B5b24d1;
case 0x5b24d4:c.instructions+=3;goto B5b24d4;
case 0x5b24d6:c.instructions+=2;goto B5b24d6;
case 0x5b24d9:c.instructions+=1;goto B5b24d9;
case 0x5b24df:goto L5b24df;
case 0x5b24e2:c.instructions+=4;goto B5b24e2;
case 0x5b24e5:c.instructions+=3;goto B5b24e5;
case 0x5b24e7:c.instructions+=2;goto B5b24e7;
case 0x5b24ea:c.instructions+=1;goto B5b24ea;
case 0x5b24f0:goto L5b24f0;
case 0x5b24f4:c.instructions+=2;goto B5b24f4;
case 0x5b24f7:c.instructions+=1;goto B5b24f7;
case 0x5b24f9:goto L5b24f9;
case 0x5b24fd:c.instructions+=2;goto B5b24fd;
case 0x5b2500:c.instructions+=1;goto B5b2500;
case 0x5b2502:goto L5b2502;
case 0x5b2505:c.instructions+=13;goto B5b2505;
case 0x5b250b:c.instructions+=12;goto B5b250b;
case 0x5b250e:c.instructions+=11;goto B5b250e;
case 0x5b2510:c.instructions+=10;goto B5b2510;
case 0x5b2512:c.instructions+=9;goto B5b2512;
case 0x5b2515:c.instructions+=8;goto B5b2515;
case 0x5b251a:c.instructions+=7;goto B5b251a;
case 0x5b251c:c.instructions+=6;goto B5b251c;
case 0x5b2522:c.instructions+=5;goto B5b2522;
case 0x5b2525:c.instructions+=4;goto B5b2525;
case 0x5b2529:c.instructions+=3;goto B5b2529;
case 0x5b252b:c.instructions+=2;goto B5b252b;
case 0x5b252d:c.instructions+=1;goto B5b252d;
case 0x5b252f:goto L5b252f;
case 0x5b2531:c.instructions+=3;goto B5b2531;
case 0x5b2532:c.instructions+=2;goto B5b2532;
case 0x5b2534:c.instructions+=1;goto B5b2534;
case 0x5b2537:goto L5b2537;
case 0x5b2539:c.instructions+=1;goto B5b2539;
case 0x5b253b:goto L5b253b;
case 0x5b253f:c.instructions+=1;goto B5b253f;
case 0x5b2541:goto L5b2541;
case 0x5b2542:c.instructions+=1;goto B5b2542;
case 0x5b2547:goto L5b2547;
case 0x5b254a:c.instructions+=1;goto B5b254a;
case 0x5b254c:goto L5b254c;
case 0x5b254e:c.instructions+=1;goto B5b254e;
case 0x5b2550:goto L5b2550;
case 0x5b2552:c.instructions+=3;goto B5b2552;
case 0x5b2553:c.instructions+=2;goto B5b2553;
case 0x5b2555:c.instructions+=1;goto B5b2555;
case 0x5b255a:goto L5b255a;
case 0x5b255c:c.instructions+=1;goto B5b255c;
case 0x5b255e:goto L5b255e;
case 0x5b2563:c.instructions+=2;goto B5b2563;
case 0x5b2564:c.instructions+=1;goto B5b2564;
case 0x5b2569:goto L5b2569;
case 0x5b256c:c.instructions+=4;goto B5b256c;
case 0x5b2570:c.instructions+=3;goto B5b2570;
case 0x5b2572:c.instructions+=2;goto B5b2572;
case 0x5b257a:c.instructions+=1;goto B5b257a;
case 0x5b257c:goto L5b257c;
case 0x5b257d:c.instructions+=3;goto B5b257d;
case 0x5b257e:c.instructions+=2;goto B5b257e;
case 0x5b2580:c.instructions+=1;goto B5b2580;
case 0x5b2585:goto L5b2585;
case 0x5b258d:goto L5b258d;
case 0x5b258f:c.instructions+=2;goto B5b258f;
case 0x5b2591:c.instructions+=1;goto B5b2591;
case 0x5b2597:goto L5b2597;
case 0x5b2598:goto L5b2598;
case 0x5b2599:c.instructions+=1;goto B5b2599;
case 0x5b259a:goto L5b259a;
case 0x5b259e:c.instructions+=4;goto B5b259e;
case 0x5b259f:c.instructions+=3;goto B5b259f;
case 0x5b25a6:c.instructions+=2;goto B5b25a6;
case 0x5b25a9:c.instructions+=1;goto B5b25a9;
case 0x5b25b0:goto L5b25b0;
case 0x5b25b1:c.instructions+=2;goto B5b25b1;
case 0x5b25b3:c.instructions+=1;goto B5b25b3;
case 0x5b25b8:goto L5b25b8;
case 0x5b25bd:c.instructions+=1;goto B5b25bd;
case 0x5b25bf:goto L5b25bf;
case 0x5b25c4:c.instructions+=3;goto B5b25c4;
case 0x5b25c5:c.instructions+=2;goto B5b25c5;
case 0x5b25c6:c.instructions+=1;goto B5b25c6;
case 0x5b25cb:goto L5b25cb;
case 0x5b25ce:goto L5b25ce;
case 0x5b25d0:c.instructions+=2;goto B5b25d0;
case 0x5b25d1:c.instructions+=1;goto B5b25d1;
case 0x5b25e0:goto L5b25e0;
case 0x5b25e1:c.instructions+=2;goto B5b25e1;
case 0x5b25e3:c.instructions+=1;goto B5b25e3;
case 0x5b25e8:goto L5b25e8;
case 0x5b25ed:c.instructions+=1;goto B5b25ed;
case 0x5b25ef:goto L5b25ef;
case 0x5b25f4:c.instructions+=3;goto B5b25f4;
case 0x5b25f5:c.instructions+=2;goto B5b25f5;
case 0x5b25f6:c.instructions+=1;goto B5b25f6;
case 0x5b25fb:goto L5b25fb;
case 0x5b25fe:goto L5b25fe;
case 0x5b2600:c.instructions+=2;goto B5b2600;
case 0x5b2601:c.instructions+=1;goto B5b2601;
case 0x5b2610:goto L5b2610;
case 0x5b2611:c.instructions+=12;goto B5b2611;
case 0x5b2613:c.instructions+=11;goto B5b2613;
case 0x5b2616:c.instructions+=10;goto B5b2616;
case 0x5b2619:c.instructions+=9;goto B5b2619;
case 0x5b261a:c.instructions+=8;goto B5b261a;
case 0x5b261b:c.instructions+=7;goto B5b261b;
case 0x5b261d:c.instructions+=6;goto B5b261d;
case 0x5b2620:c.instructions+=5;goto B5b2620;
case 0x5b2623:c.instructions+=4;goto B5b2623;
case 0x5b2625:c.instructions+=3;goto B5b2625;
case 0x5b2626:c.instructions+=2;goto B5b2626;
case 0x5b2627:c.instructions+=1;goto B5b2627;
case 0x5b262a:goto L5b262a;
case 0x5b262d:c.instructions+=4;goto B5b262d;
case 0x5b2630:c.instructions+=3;goto B5b2630;
case 0x5b2632:c.instructions+=2;goto B5b2632;
case 0x5b2633:c.instructions+=1;goto B5b2633;
case 0x5b2636:goto L5b2636;
case 0x5b2639:c.instructions+=4;goto B5b2639;
case 0x5b263c:c.instructions+=3;goto B5b263c;
case 0x5b263e:c.instructions+=2;goto B5b263e;
case 0x5b263f:c.instructions+=1;goto B5b263f;
case 0x5b2642:goto L5b2642;
case 0x5b2645:c.instructions+=4;goto B5b2645;
case 0x5b2648:c.instructions+=3;goto B5b2648;
case 0x5b264a:c.instructions+=2;goto B5b264a;
case 0x5b264b:c.instructions+=1;goto B5b264b;
case 0x5b264e:goto L5b264e;
case 0x5b2651:c.instructions+=2;goto B5b2651;
case 0x5b2653:c.instructions+=1;goto B5b2653;
case 0x5b2656:goto L5b2656;
case 0x5b2659:c.instructions+=9;goto B5b2659;
case 0x5b265c:c.instructions+=8;goto B5b265c;
case 0x5b265e:c.instructions+=7;goto B5b265e;
case 0x5b2660:c.instructions+=6;goto B5b2660;
case 0x5b2664:c.instructions+=5;goto B5b2664;
case 0x5b2667:c.instructions+=4;goto B5b2667;
case 0x5b266b:c.instructions+=3;goto B5b266b;
case 0x5b266f:c.instructions+=2;goto B5b266f;
case 0x5b2671:c.instructions+=1;goto B5b2671;
case 0x5b2674:goto L5b2674;
case 0x5b2677:c.instructions+=11;goto B5b2677;
case 0x5b267a:c.instructions+=10;goto B5b267a;
case 0x5b267c:c.instructions+=9;goto B5b267c;
case 0x5b267f:c.instructions+=8;goto B5b267f;
case 0x5b2681:c.instructions+=7;goto B5b2681;
case 0x5b2685:c.instructions+=6;goto B5b2685;
case 0x5b2689:c.instructions+=5;goto B5b2689;
case 0x5b268b:c.instructions+=4;goto B5b268b;
case 0x5b268f:c.instructions+=3;goto B5b268f;
case 0x5b2692:c.instructions+=2;goto B5b2692;
case 0x5b2694:c.instructions+=1;goto B5b2694;
case 0x5b2696:goto L5b2696;
case 0x5b2699:c.instructions+=2;goto B5b2699;
case 0x5b269d:c.instructions+=1;goto B5b269d;
case 0x5b269f:goto L5b269f;
case 0x5b26a5:c.instructions+=2;goto B5b26a5;
case 0x5b26a7:c.instructions+=1;goto B5b26a7;
case 0x5b26a9:goto L5b26a9;
case 0x5b26ab:c.instructions+=1;goto B5b26ab;
case 0x5b26ad:goto L5b26ad;
case 0x5b26b0:c.instructions+=3;goto B5b26b0;
case 0x5b26b3:c.instructions+=2;goto B5b26b3;
case 0x5b26b5:c.instructions+=1;goto B5b26b5;
case 0x5b26b7:goto L5b26b7;
case 0x5b26b9:c.instructions+=1;goto B5b26b9;
case 0x5b26bb:goto L5b26bb;
case 0x5b26c1:c.instructions+=2;goto B5b26c1;
case 0x5b26c3:c.instructions+=1;goto B5b26c3;
case 0x5b26c5:goto L5b26c5;
case 0x5b26c7:goto L5b26c7;
case 0x5b26c9:c.instructions+=1;goto B5b26c9;
case 0x5b26cc:goto L5b26cc;
case 0x5b26ce:c.instructions+=1;goto B5b26ce;
case 0x5b26d0:goto L5b26d0;
case 0x5b26d4:c.instructions+=14;goto B5b26d4;
case 0x5b26d7:c.instructions+=13;goto B5b26d7;
case 0x5b26d9:c.instructions+=12;goto B5b26d9;
case 0x5b26dc:c.instructions+=11;goto B5b26dc;
case 0x5b26df:c.instructions+=10;goto B5b26df;
case 0x5b26e3:c.instructions+=9;goto B5b26e3;
case 0x5b26e6:c.instructions+=8;goto B5b26e6;
case 0x5b26ea:c.instructions+=7;goto B5b26ea;
case 0x5b26ee:c.instructions+=6;goto B5b26ee;
case 0x5b26f2:c.instructions+=5;goto B5b26f2;
case 0x5b26f4:c.instructions+=4;goto B5b26f4;
case 0x5b26f8:c.instructions+=3;goto B5b26f8;
case 0x5b26fc:c.instructions+=2;goto B5b26fc;
case 0x5b2700:c.instructions+=1;goto B5b2700;
case 0x5b2702:goto L5b2702;
case 0x5b2704:c.instructions+=1;goto B5b2704;
case 0x5b2707:goto L5b2707;
case 0x5b270a:c.instructions+=1;goto B5b270a;
case 0x5b270e:goto L5b270e;
case 0x5b2711:c.instructions+=2;goto B5b2711;
case 0x5b2713:c.instructions+=1;goto B5b2713;
case 0x5b2716:goto L5b2716;
case 0x5b2718:c.instructions+=1;goto B5b2718;
case 0x5b271a:goto L5b271a;
case 0x5b271e:c.instructions+=14;goto B5b271e;
case 0x5b2721:c.instructions+=13;goto B5b2721;
case 0x5b2723:c.instructions+=12;goto B5b2723;
case 0x5b2726:c.instructions+=11;goto B5b2726;
case 0x5b2729:c.instructions+=10;goto B5b2729;
case 0x5b272d:c.instructions+=9;goto B5b272d;
case 0x5b2730:c.instructions+=8;goto B5b2730;
case 0x5b2734:c.instructions+=7;goto B5b2734;
case 0x5b2738:c.instructions+=6;goto B5b2738;
case 0x5b273c:c.instructions+=5;goto B5b273c;
case 0x5b273e:c.instructions+=4;goto B5b273e;
case 0x5b2742:c.instructions+=3;goto B5b2742;
case 0x5b2746:c.instructions+=2;goto B5b2746;
case 0x5b274a:c.instructions+=1;goto B5b274a;
case 0x5b274c:goto L5b274c;
case 0x5b274e:c.instructions+=1;goto B5b274e;
case 0x5b2751:goto L5b2751;
case 0x5b2754:c.instructions+=1;goto B5b2754;
case 0x5b2758:goto L5b2758;
case 0x5b275b:c.instructions+=4;goto B5b275b;
case 0x5b275d:c.instructions+=3;goto B5b275d;
case 0x5b2761:c.instructions+=2;goto B5b2761;
case 0x5b2762:c.instructions+=1;goto B5b2762;
case 0x5b2765:goto L5b2765;
case 0x5b2768:c.instructions+=4;goto B5b2768;
case 0x5b276a:c.instructions+=3;goto B5b276a;
case 0x5b276e:c.instructions+=2;goto B5b276e;
case 0x5b276f:c.instructions+=1;goto B5b276f;
case 0x5b2772:goto L5b2772;
case 0x5b2775:c.instructions+=2;goto B5b2775;
case 0x5b2777:c.instructions+=1;goto B5b2777;
case 0x5b277a:goto L5b277a;
case 0x5b277d:c.instructions+=2;goto B5b277d;
case 0x5b277f:c.instructions+=1;goto B5b277f;
case 0x5b2782:goto L5b2782;
case 0x5b2784:c.instructions+=1;goto B5b2784;
case 0x5b2789:goto L5b2789;
case 0x5b278c:c.instructions+=2;goto B5b278c;
case 0x5b278e:c.instructions+=1;goto B5b278e;
case 0x5b2791:goto L5b2791;
case 0x5b2794:c.instructions+=2;goto B5b2794;
case 0x5b2796:c.instructions+=1;goto B5b2796;
case 0x5b2799:goto L5b2799;
case 0x5b279c:c.instructions+=4;goto B5b279c;
case 0x5b279f:c.instructions+=3;goto B5b279f;
case 0x5b27a1:c.instructions+=2;goto B5b27a1;
case 0x5b27a2:c.instructions+=1;goto B5b27a2;
case 0x5b27a5:goto L5b27a5;
case 0x5b27a8:c.instructions+=4;goto B5b27a8;
case 0x5b27ab:c.instructions+=3;goto B5b27ab;
case 0x5b27ad:c.instructions+=2;goto B5b27ad;
case 0x5b27ae:c.instructions+=1;goto B5b27ae;
case 0x5b27b1:goto L5b27b1;
case 0x5b27b2:c.instructions+=5;goto B5b27b2;
case 0x5b27b3:c.instructions+=4;goto B5b27b3;
case 0x5b27b4:c.instructions+=3;goto B5b27b4;
case 0x5b27b6:c.instructions+=2;goto B5b27b6;
case 0x5b27b7:c.instructions+=1;goto B5b27b7;
case 0x5b27c0:goto L5b27c0;
case 0x5b27c1:c.instructions+=2;goto B5b27c1;
case 0x5b27c3:c.instructions+=1;goto B5b27c3;
case 0x5b27c8:goto L5b27c8;
case 0x5b27cd:c.instructions+=1;goto B5b27cd;
case 0x5b27cf:goto L5b27cf;
case 0x5b27d0:c.instructions+=1;goto B5b27d0;
case 0x5b27d5:goto L5b27d5;
case 0x5b27d8:goto L5b27d8;
case 0x5b27da:c.instructions+=2;goto B5b27da;
case 0x5b27db:c.instructions+=1;goto B5b27db;
case 0x5b27e0:goto L5b27e0;
case 0x5b27e1:c.instructions+=2;goto B5b27e1;
case 0x5b27e3:c.instructions+=1;goto B5b27e3;
case 0x5b27e8:goto L5b27e8;
case 0x5b27ed:c.instructions+=1;goto B5b27ed;
case 0x5b27ef:goto L5b27ef;
case 0x5b27f0:c.instructions+=1;goto B5b27f0;
case 0x5b27f5:goto L5b27f5;
case 0x5b27f8:goto L5b27f8;
case 0x5b27fa:c.instructions+=2;goto B5b27fa;
case 0x5b27fb:c.instructions+=1;goto B5b27fb;
case 0x5b2800:goto L5b2800;
case 0x5b2803:c.instructions+=13;goto B5b2803;
case 0x5b2804:c.instructions+=12;goto B5b2804;
case 0x5b2805:c.instructions+=11;goto B5b2805;
case 0x5b2809:c.instructions+=10;goto B5b2809;
case 0x5b280b:c.instructions+=9;goto B5b280b;
case 0x5b280d:c.instructions+=8;goto B5b280d;
case 0x5b280f:c.instructions+=7;goto B5b280f;
case 0x5b2813:c.instructions+=6;goto B5b2813;
case 0x5b2814:c.instructions+=5;goto B5b2814;
case 0x5b2818:c.instructions+=4;goto B5b2818;
case 0x5b2819:c.instructions+=3;goto B5b2819;
case 0x5b281a:c.instructions+=2;goto B5b281a;
case 0x5b281c:c.instructions+=1;goto B5b281c;
case 0x5b2821:goto L5b2821;
case 0x5b2824:c.instructions+=3;goto B5b2824;
case 0x5b2825:c.instructions+=2;goto B5b2825;
case 0x5b2826:c.instructions+=1;goto B5b2826;
case 0x5b282b:goto L5b282b;
case 0x5b282e:c.instructions+=2;goto B5b282e;
case 0x5b2830:c.instructions+=1;goto B5b2830;
case 0x5b2832:goto L5b2832;
case 0x5b2836:c.instructions+=4;goto B5b2836;
case 0x5b283a:c.instructions+=3;goto B5b283a;
case 0x5b283c:c.instructions+=2;goto B5b283c;
case 0x5b283f:c.instructions+=1;goto B5b283f;
case 0x5b2841:goto L5b2841;
case 0x5b2845:c.instructions+=2;goto B5b2845;
case 0x5b284b:c.instructions+=1;goto B5b284b;
case 0x5b284f:goto L5b284f;
case 0x5b2851:c.instructions+=8;goto B5b2851;
case 0x5b2853:c.instructions+=7;goto B5b2853;
case 0x5b2857:c.instructions+=6;goto B5b2857;
case 0x5b2858:c.instructions+=5;goto B5b2858;
case 0x5b285c:c.instructions+=4;goto B5b285c;
case 0x5b285d:c.instructions+=3;goto B5b285d;
case 0x5b285e:c.instructions+=2;goto B5b285e;
case 0x5b2860:c.instructions+=1;goto B5b2860;
case 0x5b2865:goto L5b2865;
case 0x5b2868:c.instructions+=1;goto B5b2868;
case 0x5b286e:goto L5b286e;
case 0x5b2871:c.instructions+=1;goto B5b2871;
case 0x5b2877:goto L5b2877;
case 0x5b287b:c.instructions+=4;goto B5b287b;
case 0x5b287d:c.instructions+=3;goto B5b287d;
case 0x5b2881:c.instructions+=2;goto B5b2881;
case 0x5b2883:c.instructions+=1;goto B5b2883;
case 0x5b2885:goto L5b2885;
case 0x5b2886:c.instructions+=2;goto B5b2886;
case 0x5b2887:c.instructions+=1;goto B5b2887;
case 0x5b288c:goto L5b288c;
case 0x5b2890:c.instructions+=5;goto B5b2890;
case 0x5b2894:c.instructions+=4;goto B5b2894;
case 0x5b2895:c.instructions+=3;goto B5b2895;
case 0x5b2896:c.instructions+=2;goto B5b2896;
case 0x5b2898:c.instructions+=1;goto B5b2898;
case 0x5b289d:goto L5b289d;
case 0x5b28a1:c.instructions+=6;goto B5b28a1;
case 0x5b28a2:c.instructions+=5;goto B5b28a2;
case 0x5b28a6:c.instructions+=4;goto B5b28a6;
case 0x5b28aa:c.instructions+=3;goto B5b28aa;
case 0x5b28ab:c.instructions+=2;goto B5b28ab;
case 0x5b28ad:c.instructions+=1;goto B5b28ad;
case 0x5b28b2:goto L5b28b2;
case 0x5b28b6:c.instructions+=5;goto B5b28b6;
case 0x5b28ba:c.instructions+=4;goto B5b28ba;
case 0x5b28bc:c.instructions+=3;goto B5b28bc;
case 0x5b28be:c.instructions+=2;goto B5b28be;
case 0x5b28c1:c.instructions+=1;goto B5b28c1;
case 0x5b28c3:goto L5b28c3;
case 0x5b28c7:c.instructions+=3;goto B5b28c7;
case 0x5b28cb:c.instructions+=2;goto B5b28cb;
case 0x5b28cf:c.instructions+=1;goto B5b28cf;
case 0x5b28d1:goto L5b28d1;
case 0x5b28d3:goto L5b28d3;
case 0x5b28d7:c.instructions+=10;goto B5b28d7;
case 0x5b28db:c.instructions+=9;goto B5b28db;
case 0x5b28df:c.instructions+=8;goto B5b28df;
case 0x5b28e0:c.instructions+=7;goto B5b28e0;
case 0x5b28e4:c.instructions+=6;goto B5b28e4;
case 0x5b28e5:c.instructions+=5;goto B5b28e5;
case 0x5b28e9:c.instructions+=4;goto B5b28e9;
case 0x5b28ea:c.instructions+=3;goto B5b28ea;
case 0x5b28eb:c.instructions+=2;goto B5b28eb;
case 0x5b28ec:c.instructions+=1;goto B5b28ec;
case 0x5b28f1:goto L5b28f1;
case 0x5b28f4:c.instructions+=4;goto B5b28f4;
case 0x5b28f5:c.instructions+=3;goto B5b28f5;
case 0x5b28f6:c.instructions+=2;goto B5b28f6;
case 0x5b28f9:c.instructions+=1;goto B5b28f9;
case 0x5b28fc:goto L5b28fc;
case 0x5b28fe:c.instructions+=3;goto B5b28fe;
case 0x5b28ff:c.instructions+=2;goto B5b28ff;
case 0x5b2900:c.instructions+=1;goto B5b2900;
case 0x5b2905:goto L5b2905;
case 0x5b2909:c.instructions+=5;goto B5b2909;
case 0x5b290d:c.instructions+=4;goto B5b290d;
case 0x5b290f:c.instructions+=3;goto B5b290f;
case 0x5b2910:c.instructions+=2;goto B5b2910;
case 0x5b2912:c.instructions+=1;goto B5b2912;
case 0x5b2917:goto L5b2917;
case 0x5b2918:c.instructions+=3;goto B5b2918;
case 0x5b2919:c.instructions+=2;goto B5b2919;
case 0x5b291c:c.instructions+=1;goto B5b291c;
case 0x5b291f:goto L5b291f;
case 0x5b2923:c.instructions+=3;goto B5b2923;
case 0x5b2925:c.instructions+=2;goto B5b2925;
case 0x5b2929:c.instructions+=1;goto B5b2929;
case 0x5b292b:goto L5b292b;
case 0x5b292f:c.instructions+=9;goto B5b292f;
case 0x5b2933:c.instructions+=8;goto B5b2933;
case 0x5b2934:c.instructions+=7;goto B5b2934;
case 0x5b2938:c.instructions+=6;goto B5b2938;
case 0x5b2939:c.instructions+=5;goto B5b2939;
case 0x5b293d:c.instructions+=4;goto B5b293d;
case 0x5b293e:c.instructions+=3;goto B5b293e;
case 0x5b293f:c.instructions+=2;goto B5b293f;
case 0x5b2940:c.instructions+=1;goto B5b2940;
case 0x5b2945:goto L5b2945;
case 0x5b2948:c.instructions+=4;goto B5b2948;
case 0x5b2949:c.instructions+=3;goto B5b2949;
case 0x5b294a:c.instructions+=2;goto B5b294a;
case 0x5b294d:c.instructions+=1;goto B5b294d;
case 0x5b2950:goto L5b2950;
case 0x5b2954:c.instructions+=9;goto B5b2954;
case 0x5b2958:c.instructions+=8;goto B5b2958;
case 0x5b2959:c.instructions+=7;goto B5b2959;
case 0x5b295d:c.instructions+=6;goto B5b295d;
case 0x5b295e:c.instructions+=5;goto B5b295e;
case 0x5b2962:c.instructions+=4;goto B5b2962;
case 0x5b2963:c.instructions+=3;goto B5b2963;
case 0x5b2964:c.instructions+=2;goto B5b2964;
case 0x5b2965:c.instructions+=1;goto B5b2965;
case 0x5b296a:goto L5b296a;
case 0x5b296d:c.instructions+=4;goto B5b296d;
case 0x5b296e:c.instructions+=3;goto B5b296e;
case 0x5b296f:c.instructions+=2;goto B5b296f;
case 0x5b2972:c.instructions+=1;goto B5b2972;
case 0x5b2980:goto L5b2980;
case 0x5b2983:c.instructions+=10;goto B5b2983;
case 0x5b2984:c.instructions+=9;goto B5b2984;
case 0x5b2988:c.instructions+=8;goto B5b2988;
case 0x5b2989:c.instructions+=7;goto B5b2989;
case 0x5b298b:c.instructions+=6;goto B5b298b;
case 0x5b298e:c.instructions+=5;goto B5b298e;
case 0x5b298f:c.instructions+=4;goto B5b298f;
case 0x5b2990:c.instructions+=3;goto B5b2990;
case 0x5b2991:c.instructions+=2;goto B5b2991;
case 0x5b2995:c.instructions+=1;goto B5b2995;
case 0x5b299a:goto L5b299a;
case 0x5b299c:c.instructions+=3;goto B5b299c;
case 0x5b299f:c.instructions+=2;goto B5b299f;
case 0x5b29a1:c.instructions+=1;goto B5b29a1;
case 0x5b29a7:goto L5b29a7;
case 0x5b29a8:c.instructions+=10;goto B5b29a8;
case 0x5b29ac:c.instructions+=9;goto B5b29ac;
case 0x5b29ae:c.instructions+=8;goto B5b29ae;
case 0x5b29af:c.instructions+=7;goto B5b29af;
case 0x5b29b3:c.instructions+=6;goto B5b29b3;
case 0x5b29b4:c.instructions+=5;goto B5b29b4;
case 0x5b29b8:c.instructions+=4;goto B5b29b8;
case 0x5b29b9:c.instructions+=3;goto B5b29b9;
case 0x5b29ba:c.instructions+=2;goto B5b29ba;
case 0x5b29bc:c.instructions+=1;goto B5b29bc;
case 0x5b29c1:goto L5b29c1;
case 0x5b29c2:c.instructions+=3;goto B5b29c2;
case 0x5b29c3:c.instructions+=2;goto B5b29c3;
case 0x5b29c5:c.instructions+=1;goto B5b29c5;
case 0x5b29ca:goto L5b29ca;
case 0x5b29ce:c.instructions+=2;goto B5b29ce;
case 0x5b29d1:c.instructions+=1;goto B5b29d1;
case 0x5b29d3:goto L5b29d3;
case 0x5b29d6:c.instructions+=1;goto B5b29d6;
case 0x5b29d8:goto L5b29d8;
case 0x5b29d9:c.instructions+=7;goto B5b29d9;
case 0x5b29dd:c.instructions+=6;goto B5b29dd;
case 0x5b29de:c.instructions+=5;goto B5b29de;
case 0x5b29e2:c.instructions+=4;goto B5b29e2;
case 0x5b29e3:c.instructions+=3;goto B5b29e3;
case 0x5b29e4:c.instructions+=2;goto B5b29e4;
case 0x5b29e6:c.instructions+=1;goto B5b29e6;
case 0x5b29eb:goto L5b29eb;
case 0x5b29ee:c.instructions+=4;goto B5b29ee;
case 0x5b29f0:c.instructions+=3;goto B5b29f0;
case 0x5b29f4:c.instructions+=2;goto B5b29f4;
case 0x5b29f8:c.instructions+=1;goto B5b29f8;
case 0x5b29fa:goto L5b29fa;
case 0x5b29fc:c.instructions+=2;goto B5b29fc;
case 0x5b29ff:c.instructions+=1;goto B5b29ff;
case 0x5b2a01:goto L5b2a01;
case 0x5b2a04:c.instructions+=1;goto B5b2a04;
case 0x5b2a06:goto L5b2a06;
case 0x5b2a09:c.instructions+=1;goto B5b2a09;
case 0x5b2a0b:goto L5b2a0b;
case 0x5b2a0f:c.instructions+=3;goto B5b2a0f;
case 0x5b2a13:c.instructions+=2;goto B5b2a13;
case 0x5b2a17:c.instructions+=1;goto B5b2a17;
case 0x5b2a19:goto L5b2a19;
case 0x5b2a1c:c.instructions+=6;goto B5b2a1c;
case 0x5b2a20:c.instructions+=5;goto B5b2a20;
case 0x5b2a24:c.instructions+=4;goto B5b2a24;
case 0x5b2a26:c.instructions+=3;goto B5b2a26;
case 0x5b2a28:c.instructions+=2;goto B5b2a28;
case 0x5b2a2b:c.instructions+=1;goto B5b2a2b;
case 0x5b2a2d:goto L5b2a2d;
case 0x5b2a2f:c.instructions+=1;goto B5b2a2f;
case 0x5b2a33:goto L5b2a33;
case 0x5b2a35:c.instructions+=1;goto B5b2a35;
case 0x5b2a3a:goto L5b2a3a;
case 0x5b2a3e:c.instructions+=8;goto B5b2a3e;
case 0x5b2a42:c.instructions+=7;goto B5b2a42;
case 0x5b2a45:c.instructions+=6;goto B5b2a45;
case 0x5b2a49:c.instructions+=5;goto B5b2a49;
case 0x5b2a4d:c.instructions+=4;goto B5b2a4d;
case 0x5b2a4f:c.instructions+=3;goto B5b2a4f;
case 0x5b2a51:c.instructions+=2;goto B5b2a51;
case 0x5b2a54:c.instructions+=1;goto B5b2a54;
case 0x5b2a56:goto L5b2a56;
case 0x5b2a58:c.instructions+=1;goto B5b2a58;
case 0x5b2a5c:goto L5b2a5c;
case 0x5b2a60:c.instructions+=3;goto B5b2a60;
case 0x5b2a62:c.instructions+=2;goto B5b2a62;
case 0x5b2a64:c.instructions+=1;goto B5b2a64;
case 0x5b2a69:goto L5b2a69;
case 0x5b2a6b:c.instructions+=1;goto B5b2a6b;
case 0x5b2a6d:goto L5b2a6d;
case 0x5b2a71:c.instructions+=9;goto B5b2a71;
case 0x5b2a75:c.instructions+=8;goto B5b2a75;
case 0x5b2a77:c.instructions+=7;goto B5b2a77;
case 0x5b2a7a:c.instructions+=6;goto B5b2a7a;
case 0x5b2a7e:c.instructions+=5;goto B5b2a7e;
case 0x5b2a82:c.instructions+=4;goto B5b2a82;
case 0x5b2a84:c.instructions+=3;goto B5b2a84;
case 0x5b2a86:c.instructions+=2;goto B5b2a86;
case 0x5b2a89:c.instructions+=1;goto B5b2a89;
case 0x5b2a8b:goto L5b2a8b;
case 0x5b2a8d:c.instructions+=1;goto B5b2a8d;
case 0x5b2a91:goto L5b2a91;
case 0x5b2a93:c.instructions+=1;goto B5b2a93;
case 0x5b2a95:goto L5b2a95;
case 0x5b2a97:c.instructions+=1;goto B5b2a97;
case 0x5b2a99:goto L5b2a99;
case 0x5b2a9d:c.instructions+=2;goto B5b2a9d;
case 0x5b2a9e:c.instructions+=1;goto B5b2a9e;
case 0x5b2aa3:goto L5b2aa3;
case 0x5b2aa9:c.instructions+=4;goto B5b2aa9;
case 0x5b2aad:c.instructions+=3;goto B5b2aad;
case 0x5b2aaf:c.instructions+=2;goto B5b2aaf;
case 0x5b2ab2:c.instructions+=1;goto B5b2ab2;
case 0x5b2ab4:goto L5b2ab4;
case 0x5b2ab8:c.instructions+=7;goto B5b2ab8;
case 0x5b2abc:c.instructions+=6;goto B5b2abc;
case 0x5b2abe:c.instructions+=5;goto B5b2abe;
case 0x5b2ac1:c.instructions+=4;goto B5b2ac1;
case 0x5b2ac2:c.instructions+=3;goto B5b2ac2;
case 0x5b2ac5:c.instructions+=2;goto B5b2ac5;
case 0x5b2ac6:c.instructions+=1;goto B5b2ac6;
case 0x5b2acb:goto L5b2acb;
case 0x5b2acd:c.instructions+=2;goto B5b2acd;
case 0x5b2ad0:c.instructions+=1;goto B5b2ad0;
case 0x5b2ad2:goto L5b2ad2;
case 0x5b2ad5:c.instructions+=5;goto B5b2ad5;
case 0x5b2ad9:c.instructions+=4;goto B5b2ad9;
case 0x5b2ada:c.instructions+=3;goto B5b2ada;
case 0x5b2add:c.instructions+=2;goto B5b2add;
case 0x5b2ade:c.instructions+=1;goto B5b2ade;
case 0x5b2ae3:goto L5b2ae3;
case 0x5b2ae5:c.instructions+=4;goto B5b2ae5;
case 0x5b2ae9:c.instructions+=3;goto B5b2ae9;
case 0x5b2aec:c.instructions+=2;goto B5b2aec;
case 0x5b2aee:c.instructions+=1;goto B5b2aee;
case 0x5b2af0:goto L5b2af0;
case 0x5b2af2:c.instructions+=1;goto B5b2af2;
case 0x5b2af4:goto L5b2af4;
case 0x5b2af8:c.instructions+=6;goto B5b2af8;
case 0x5b2afc:c.instructions+=5;goto B5b2afc;
case 0x5b2aff:c.instructions+=4;goto B5b2aff;
case 0x5b2b00:c.instructions+=3;goto B5b2b00;
case 0x5b2b03:c.instructions+=2;goto B5b2b03;
case 0x5b2b04:c.instructions+=1;goto B5b2b04;
case 0x5b2b09:goto L5b2b09;
case 0x5b2b0b:c.instructions+=7;goto B5b2b0b;
case 0x5b2b0f:c.instructions+=6;goto B5b2b0f;
case 0x5b2b13:c.instructions+=5;goto B5b2b13;
case 0x5b2b16:c.instructions+=4;goto B5b2b16;
case 0x5b2b19:c.instructions+=3;goto B5b2b19;
case 0x5b2b1c:c.instructions+=2;goto B5b2b1c;
case 0x5b2b1d:c.instructions+=1;goto B5b2b1d;
case 0x5b2b22:goto L5b2b22;
case 0x5b2b24:c.instructions+=2;goto B5b2b24;
case 0x5b2b27:c.instructions+=1;goto B5b2b27;
case 0x5b2b29:goto L5b2b29;
case 0x5b2b2b:c.instructions+=1;goto B5b2b2b;
case 0x5b2b2d:goto L5b2b2d;
case 0x5b2b30:c.instructions+=3;goto B5b2b30;
case 0x5b2b32:c.instructions+=2;goto B5b2b32;
case 0x5b2b35:c.instructions+=1;goto B5b2b35;
case 0x5b2b37:goto L5b2b37;
case 0x5b2b3b:c.instructions+=2;goto B5b2b3b;
case 0x5b2b3d:c.instructions+=1;goto B5b2b3d;
case 0x5b2b3f:goto L5b2b3f;
case 0x5b2b41:c.instructions+=6;goto B5b2b41;
case 0x5b2b45:c.instructions+=5;goto B5b2b45;
case 0x5b2b47:c.instructions+=4;goto B5b2b47;
case 0x5b2b48:c.instructions+=3;goto B5b2b48;
case 0x5b2b49:c.instructions+=2;goto B5b2b49;
case 0x5b2b4b:c.instructions+=1;goto B5b2b4b;
case 0x5b2b50:goto L5b2b50;
case 0x5b2b52:c.instructions+=6;goto B5b2b52;
case 0x5b2b54:c.instructions+=5;goto B5b2b54;
case 0x5b2b56:c.instructions+=4;goto B5b2b56;
case 0x5b2b57:c.instructions+=3;goto B5b2b57;
case 0x5b2b58:c.instructions+=2;goto B5b2b58;
case 0x5b2b5a:c.instructions+=1;goto B5b2b5a;
case 0x5b2b5f:goto L5b2b5f;
case 0x5b2b61:c.instructions+=4;goto B5b2b61;
case 0x5b2b63:c.instructions+=3;goto B5b2b63;
case 0x5b2b65:c.instructions+=2;goto B5b2b65;
case 0x5b2b68:c.instructions+=1;goto B5b2b68;
case 0x5b2b6a:goto L5b2b6a;
case 0x5b2b6c:c.instructions+=4;goto B5b2b6c;
case 0x5b2b6e:c.instructions+=3;goto B5b2b6e;
case 0x5b2b70:c.instructions+=2;goto B5b2b70;
case 0x5b2b72:c.instructions+=1;goto B5b2b72;
case 0x5b2b74:goto L5b2b74;
case 0x5b2b76:goto L5b2b76;
case 0x5b2b78:c.instructions+=4;goto B5b2b78;
case 0x5b2b7a:c.instructions+=3;goto B5b2b7a;
case 0x5b2b7c:c.instructions+=2;goto B5b2b7c;
case 0x5b2b7f:c.instructions+=1;goto B5b2b7f;
case 0x5b2b81:goto L5b2b81;
case 0x5b2b83:c.instructions+=2;goto B5b2b83;
case 0x5b2b89:c.instructions+=1;goto B5b2b89;
case 0x5b2b8b:goto L5b2b8b;
case 0x5b2b8c:goto L5b2b8c;
case 0x5b2b8d:c.instructions+=4;goto B5b2b8d;
case 0x5b2b8e:c.instructions+=3;goto B5b2b8e;
case 0x5b2b8f:c.instructions+=2;goto B5b2b8f;
case 0x5b2b92:c.instructions+=1;goto B5b2b92;
case 0x5b2ba0:goto L5b2ba0;
case 0x5b2ba4:c.instructions+=10;goto B5b2ba4;
case 0x5b2ba8:c.instructions+=9;goto B5b2ba8;
case 0x5b2ba9:c.instructions+=8;goto B5b2ba9;
case 0x5b2baa:c.instructions+=7;goto B5b2baa;
case 0x5b2bae:c.instructions+=6;goto B5b2bae;
case 0x5b2baf:c.instructions+=5;goto B5b2baf;
case 0x5b2bb3:c.instructions+=4;goto B5b2bb3;
case 0x5b2bb7:c.instructions+=3;goto B5b2bb7;
case 0x5b2bb8:c.instructions+=2;goto B5b2bb8;
case 0x5b2bb9:c.instructions+=1;goto B5b2bb9;
case 0x5b2bbe:goto L5b2bbe;
case 0x5b2bc2:c.instructions+=1;goto B5b2bc2;
case 0x5b2bd0:goto L5b2bd0;
case 0x5b2bd4:c.instructions+=10;goto B5b2bd4;
case 0x5b2bd8:c.instructions+=9;goto B5b2bd8;
case 0x5b2bd9:c.instructions+=8;goto B5b2bd9;
case 0x5b2bda:c.instructions+=7;goto B5b2bda;
case 0x5b2bde:c.instructions+=6;goto B5b2bde;
case 0x5b2bdf:c.instructions+=5;goto B5b2bdf;
case 0x5b2be3:c.instructions+=4;goto B5b2be3;
case 0x5b2be7:c.instructions+=3;goto B5b2be7;
case 0x5b2be8:c.instructions+=2;goto B5b2be8;
case 0x5b2be9:c.instructions+=1;goto B5b2be9;
case 0x5b2bee:goto L5b2bee;
case 0x5b2bf2:c.instructions+=1;goto B5b2bf2;
case 0x5b2c00:goto L5b2c00;
case 0x5b2c03:c.instructions+=8;goto B5b2c03;
case 0x5b2c04:c.instructions+=7;goto B5b2c04;
case 0x5b2c08:c.instructions+=6;goto B5b2c08;
case 0x5b2c09:c.instructions+=5;goto B5b2c09;
case 0x5b2c0a:c.instructions+=4;goto B5b2c0a;
case 0x5b2c0b:c.instructions+=3;goto B5b2c0b;
case 0x5b2c0d:c.instructions+=2;goto B5b2c0d;
case 0x5b2c0f:c.instructions+=1;goto B5b2c0f;
case 0x5b2c10:goto L5b2c10;
case 0x5b2c11:c.instructions+=3;goto B5b2c11;
case 0x5b2c12:c.instructions+=2;goto B5b2c12;
case 0x5b2c14:c.instructions+=1;goto B5b2c14;
case 0x5b2c19:goto L5b2c19;
case 0x5b2c1d:c.instructions+=3;goto B5b2c1d;
case 0x5b2c1e:c.instructions+=2;goto B5b2c1e;
case 0x5b2c21:c.instructions+=1;goto B5b2c21;
case 0x5b2c23:goto L5b2c23;
case 0x5b2c27:c.instructions+=14;goto B5b2c27;
case 0x5b2c2b:c.instructions+=13;goto B5b2c2b;
case 0x5b2c2f:c.instructions+=12;goto B5b2c2f;
case 0x5b2c31:c.instructions+=11;goto B5b2c31;
case 0x5b2c32:c.instructions+=10;goto B5b2c32;
case 0x5b2c33:c.instructions+=9;goto B5b2c33;
case 0x5b2c37:c.instructions+=8;goto B5b2c37;
case 0x5b2c3b:c.instructions+=7;goto B5b2c3b;
case 0x5b2c3c:c.instructions+=6;goto B5b2c3c;
case 0x5b2c40:c.instructions+=5;goto B5b2c40;
case 0x5b2c44:c.instructions+=4;goto B5b2c44;
case 0x5b2c45:c.instructions+=3;goto B5b2c45;
case 0x5b2c46:c.instructions+=2;goto B5b2c46;
case 0x5b2c48:c.instructions+=1;goto B5b2c48;
case 0x5b2c4d:goto L5b2c4d;
case 0x5b2c51:c.instructions+=4;goto B5b2c51;
case 0x5b2c55:c.instructions+=3;goto B5b2c55;
case 0x5b2c57:c.instructions+=2;goto B5b2c57;
case 0x5b2c5a:c.instructions+=1;goto B5b2c5a;
case 0x5b2c5c:goto L5b2c5c;
case 0x5b2c60:c.instructions+=1;goto B5b2c60;
case 0x5b2c62:goto L5b2c62;
case 0x5b2c66:goto L5b2c66;
case 0x5b2c6a:c.instructions+=4;goto B5b2c6a;
case 0x5b2c6c:c.instructions+=3;goto B5b2c6c;
case 0x5b2c6e:c.instructions+=2;goto B5b2c6e;
case 0x5b2c71:c.instructions+=1;goto B5b2c71;
case 0x5b2c73:goto L5b2c73;
case 0x5b2c75:c.instructions+=1;goto B5b2c75;
case 0x5b2c79:goto L5b2c79;
case 0x5b2c7d:c.instructions+=5;goto B5b2c7d;
case 0x5b2c81:c.instructions+=4;goto B5b2c81;
case 0x5b2c87:c.instructions+=3;goto B5b2c87;
case 0x5b2c89:c.instructions+=2;goto B5b2c89;
case 0x5b2c8c:c.instructions+=1;goto B5b2c8c;
case 0x5b2c92:goto L5b2c92;
case 0x5b2c96:c.instructions+=5;goto B5b2c96;
case 0x5b2c98:c.instructions+=4;goto B5b2c98;
case 0x5b2c9e:c.instructions+=3;goto B5b2c9e;
case 0x5b2ca0:c.instructions+=2;goto B5b2ca0;
case 0x5b2ca3:c.instructions+=1;goto B5b2ca3;
case 0x5b2ca9:goto L5b2ca9;
case 0x5b2cae:c.instructions+=2;goto B5b2cae;
case 0x5b2cb2:c.instructions+=1;goto B5b2cb2;
case 0x5b2cb4:goto L5b2cb4;
case 0x5b2cb8:c.instructions+=1;goto B5b2cb8;
case 0x5b2cc0:goto L5b2cc0;
case 0x5b2cc6:c.instructions+=1;goto B5b2cc6;
case 0x5b2ccc:goto L5b2ccc;
case 0x5b2cd0:c.instructions+=2;goto B5b2cd0;
case 0x5b2cd2:c.instructions+=1;goto B5b2cd2;
case 0x5b2cd8:goto L5b2cd8;
case 0x5b2cde:c.instructions+=4;goto B5b2cde;
case 0x5b2ce2:c.instructions+=3;goto B5b2ce2;
case 0x5b2ce4:c.instructions+=2;goto B5b2ce4;
case 0x5b2ce8:c.instructions+=1;goto B5b2ce8;
case 0x5b2cea:goto L5b2cea;
case 0x5b2cee:c.instructions+=9;goto B5b2cee;
case 0x5b2cf0:c.instructions+=8;goto B5b2cf0;
case 0x5b2cf4:c.instructions+=7;goto B5b2cf4;
case 0x5b2cf8:c.instructions+=6;goto B5b2cf8;
case 0x5b2cfe:c.instructions+=5;goto B5b2cfe;
case 0x5b2d00:c.instructions+=4;goto B5b2d00;
case 0x5b2d04:c.instructions+=3;goto B5b2d04;
case 0x5b2d07:c.instructions+=2;goto B5b2d07;
case 0x5b2d09:c.instructions+=1;goto B5b2d09;
case 0x5b2d0b:goto L5b2d0b;
case 0x5b2d0e:c.instructions+=1;goto B5b2d0e;
case 0x5b2d10:goto L5b2d10;
case 0x5b2d14:c.instructions+=2;goto B5b2d14;
case 0x5b2d18:c.instructions+=1;goto B5b2d18;
case 0x5b2d1a:goto L5b2d1a;
case 0x5b2d1d:c.instructions+=1;goto B5b2d1d;
case 0x5b2d1f:goto L5b2d1f;
case 0x5b2d23:c.instructions+=1;goto B5b2d23;
case 0x5b2d27:goto L5b2d27;
case 0x5b2d29:c.instructions+=1;goto B5b2d29;
case 0x5b2d2b:goto L5b2d2b;
case 0x5b2d2c:c.instructions+=2;goto B5b2d2c;
case 0x5b2d2f:c.instructions+=1;goto B5b2d2f;
case 0x5b2d31:goto L5b2d31;
case 0x5b2d36:goto L5b2d36;
case 0x5b2d38:c.instructions+=2;goto B5b2d38;
case 0x5b2d3b:c.instructions+=1;goto B5b2d3b;
case 0x5b2d3d:goto L5b2d3d;
case 0x5b2d3f:c.instructions+=1;goto B5b2d3f;
case 0x5b2d41:goto L5b2d41;
case 0x5b2d43:c.instructions+=8;goto B5b2d43;
case 0x5b2d44:c.instructions+=7;goto B5b2d44;
case 0x5b2d48:c.instructions+=6;goto B5b2d48;
case 0x5b2d49:c.instructions+=5;goto B5b2d49;
case 0x5b2d4d:c.instructions+=4;goto B5b2d4d;
case 0x5b2d4e:c.instructions+=3;goto B5b2d4e;
case 0x5b2d4f:c.instructions+=2;goto B5b2d4f;
case 0x5b2d51:c.instructions+=1;goto B5b2d51;
case 0x5b2d56:goto L5b2d56;
case 0x5b2d5a:c.instructions+=6;goto B5b2d5a;
case 0x5b2d5e:c.instructions+=5;goto B5b2d5e;
case 0x5b2d62:c.instructions+=4;goto B5b2d62;
case 0x5b2d66:c.instructions+=3;goto B5b2d66;
case 0x5b2d68:c.instructions+=2;goto B5b2d68;
case 0x5b2d6b:c.instructions+=1;goto B5b2d6b;
case 0x5b2d6d:goto L5b2d6d;
case 0x5b2d6f:c.instructions+=1;goto B5b2d6f;
case 0x5b2d73:goto L5b2d73;
case 0x5b2d77:c.instructions+=4;goto B5b2d77;
case 0x5b2d79:c.instructions+=3;goto B5b2d79;
case 0x5b2d7b:c.instructions+=2;goto B5b2d7b;
case 0x5b2d7e:c.instructions+=1;goto B5b2d7e;
case 0x5b2d80:goto L5b2d80;
case 0x5b2d82:c.instructions+=1;goto B5b2d82;
case 0x5b2d86:goto L5b2d86;
case 0x5b2d8a:c.instructions+=8;goto B5b2d8a;
case 0x5b2d8c:c.instructions+=7;goto B5b2d8c;
case 0x5b2d8e:c.instructions+=6;goto B5b2d8e;
case 0x5b2d91:c.instructions+=5;goto B5b2d91;
case 0x5b2d95:c.instructions+=4;goto B5b2d95;
case 0x5b2d99:c.instructions+=3;goto B5b2d99;
case 0x5b2d9d:c.instructions+=2;goto B5b2d9d;
case 0x5b2d9f:c.instructions+=1;goto B5b2d9f;
case 0x5b2da1:goto L5b2da1;
case 0x5b2da5:c.instructions+=5;goto B5b2da5;
case 0x5b2da7:c.instructions+=4;goto B5b2da7;
case 0x5b2dad:c.instructions+=3;goto B5b2dad;
case 0x5b2daf:c.instructions+=2;goto B5b2daf;
case 0x5b2db2:c.instructions+=1;goto B5b2db2;
case 0x5b2db8:goto L5b2db8;
case 0x5b2dbb:c.instructions+=1;goto B5b2dbb;
case 0x5b2dbd:goto L5b2dbd;
case 0x5b2dc2:c.instructions+=4;goto B5b2dc2;
case 0x5b2dc6:c.instructions+=3;goto B5b2dc6;
case 0x5b2dc8:c.instructions+=2;goto B5b2dc8;
case 0x5b2dca:c.instructions+=1;goto B5b2dca;
case 0x5b2dd0:goto L5b2dd0;
case 0x5b2dd3:c.instructions+=5;goto B5b2dd3;
case 0x5b2dd4:c.instructions+=4;goto B5b2dd4;
case 0x5b2dd6:c.instructions+=3;goto B5b2dd6;
case 0x5b2dd7:c.instructions+=2;goto B5b2dd7;
case 0x5b2dd9:c.instructions+=1;goto B5b2dd9;
case 0x5b2dde:goto L5b2dde;
case 0x5b2de2:c.instructions+=8;goto B5b2de2;
case 0x5b2de6:c.instructions+=7;goto B5b2de6;
case 0x5b2de8:c.instructions+=6;goto B5b2de8;
case 0x5b2dec:c.instructions+=5;goto B5b2dec;
case 0x5b2df0:c.instructions+=4;goto B5b2df0;
case 0x5b2df1:c.instructions+=3;goto B5b2df1;
case 0x5b2df4:c.instructions+=2;goto B5b2df4;
case 0x5b2df6:c.instructions+=1;goto B5b2df6;
case 0x5b2df8:goto L5b2df8;
case 0x5b2df9:c.instructions+=5;goto B5b2df9;
case 0x5b2dfa:c.instructions+=4;goto B5b2dfa;
case 0x5b2dfb:c.instructions+=3;goto B5b2dfb;
case 0x5b2dfc:c.instructions+=2;goto B5b2dfc;
case 0x5b2dff:c.instructions+=1;goto B5b2dff;
case 0x5b2e02:goto L5b2e02;
case 0x5b2e05:c.instructions+=1;goto B5b2e05;
case 0x5b2e0b:goto L5b2e0b;
case 0x5b2e10:c.instructions+=4;goto B5b2e10;
case 0x5b2e14:c.instructions+=3;goto B5b2e14;
case 0x5b2e16:c.instructions+=2;goto B5b2e16;
case 0x5b2e18:c.instructions+=1;goto B5b2e18;
case 0x5b2e20:goto L5b2e20;
case 0x5b2e26:c.instructions+=2;goto B5b2e26;
case 0x5b2e28:c.instructions+=1;goto B5b2e28;
case 0x5b2e2a:goto L5b2e2a;
case 0x5b2e2c:c.instructions+=8;goto B5b2e2c;
case 0x5b2e2f:c.instructions+=7;goto B5b2e2f;
case 0x5b2e35:c.instructions+=6;goto B5b2e35;
case 0x5b2e38:c.instructions+=5;goto B5b2e38;
case 0x5b2e39:c.instructions+=4;goto B5b2e39;
case 0x5b2e3f:c.instructions+=3;goto B5b2e3f;
case 0x5b2e40:c.instructions+=2;goto B5b2e40;
case 0x5b2e47:c.instructions+=1;goto B5b2e47;
case 0x5b2e4c:goto L5b2e4c;
case 0x5b2e52:c.instructions+=11;goto B5b2e52;
case 0x5b2e53:c.instructions+=10;goto B5b2e53;
case 0x5b2e59:c.instructions+=9;goto B5b2e59;
case 0x5b2e5b:c.instructions+=8;goto B5b2e5b;
case 0x5b2e5e:c.instructions+=7;goto B5b2e5e;
case 0x5b2e61:c.instructions+=6;goto B5b2e61;
case 0x5b2e62:c.instructions+=5;goto B5b2e62;
case 0x5b2e64:c.instructions+=4;goto B5b2e64;
case 0x5b2e68:c.instructions+=3;goto B5b2e68;
case 0x5b2e6e:c.instructions+=2;goto B5b2e6e;
case 0x5b2e72:c.instructions+=1;goto B5b2e72;
case 0x5b2e74:goto L5b2e74;
case 0x5b2e77:c.instructions+=7;goto B5b2e77;
case 0x5b2e7d:c.instructions+=6;goto B5b2e7d;
case 0x5b2e7e:c.instructions+=5;goto B5b2e7e;
case 0x5b2e7f:c.instructions+=4;goto B5b2e7f;
case 0x5b2e81:c.instructions+=3;goto B5b2e81;
case 0x5b2e87:c.instructions+=2;goto B5b2e87;
case 0x5b2e8e:c.instructions+=1;goto B5b2e8e;
case 0x5b2e93:goto L5b2e93;
case 0x5b2e97:c.instructions+=9;goto B5b2e97;
case 0x5b2e9a:c.instructions+=8;goto B5b2e9a;
case 0x5b2e9d:c.instructions+=7;goto B5b2e9d;
case 0x5b2e9e:c.instructions+=6;goto B5b2e9e;
case 0x5b2ea0:c.instructions+=5;goto B5b2ea0;
case 0x5b2ea2:c.instructions+=4;goto B5b2ea2;
case 0x5b2ea5:c.instructions+=3;goto B5b2ea5;
case 0x5b2ea8:c.instructions+=2;goto B5b2ea8;
case 0x5b2ea9:c.instructions+=1;goto B5b2ea9;
case 0x5b2eae:goto L5b2eae;
case 0x5b2eb1:c.instructions+=5;goto B5b2eb1;
case 0x5b2eb4:c.instructions+=4;goto B5b2eb4;
case 0x5b2eb5:c.instructions+=3;goto B5b2eb5;
case 0x5b2ebb:c.instructions+=2;goto B5b2ebb;
case 0x5b2ebd:c.instructions+=1;goto B5b2ebd;
case 0x5b2ec3:goto L5b2ec3;
case 0x5b2ec4:c.instructions+=5;goto B5b2ec4;
case 0x5b2ec5:c.instructions+=4;goto B5b2ec5;
case 0x5b2ec6:c.instructions+=3;goto B5b2ec6;
case 0x5b2ec7:c.instructions+=2;goto B5b2ec7;
case 0x5b2eca:c.instructions+=1;goto B5b2eca;
case 0x5b2ed0:goto L5b2ed0;
case 0x5b2ed3:c.instructions+=14;goto B5b2ed3;
case 0x5b2ed4:c.instructions+=13;goto B5b2ed4;
case 0x5b2ed5:c.instructions+=12;goto B5b2ed5;
case 0x5b2ed6:c.instructions+=11;goto B5b2ed6;
case 0x5b2eda:c.instructions+=10;goto B5b2eda;
case 0x5b2edc:c.instructions+=9;goto B5b2edc;
case 0x5b2ede:c.instructions+=8;goto B5b2ede;
case 0x5b2ee0:c.instructions+=7;goto B5b2ee0;
case 0x5b2ee4:c.instructions+=6;goto B5b2ee4;
case 0x5b2ee5:c.instructions+=5;goto B5b2ee5;
case 0x5b2ee9:c.instructions+=4;goto B5b2ee9;
case 0x5b2eea:c.instructions+=3;goto B5b2eea;
case 0x5b2eeb:c.instructions+=2;goto B5b2eeb;
case 0x5b2eed:c.instructions+=1;goto B5b2eed;
case 0x5b2ef2:goto L5b2ef2;
case 0x5b2ef6:c.instructions+=4;goto B5b2ef6;
case 0x5b2efa:c.instructions+=3;goto B5b2efa;
case 0x5b2efc:c.instructions+=2;goto B5b2efc;
case 0x5b2eff:c.instructions+=1;goto B5b2eff;
case 0x5b2f01:goto L5b2f01;
case 0x5b2f05:c.instructions+=1;goto B5b2f05;
case 0x5b2f07:goto L5b2f07;
case 0x5b2f0b:goto L5b2f0b;
case 0x5b2f0f:c.instructions+=4;goto B5b2f0f;
case 0x5b2f11:c.instructions+=3;goto B5b2f11;
case 0x5b2f13:c.instructions+=2;goto B5b2f13;
case 0x5b2f16:c.instructions+=1;goto B5b2f16;
case 0x5b2f18:goto L5b2f18;
case 0x5b2f1c:c.instructions+=3;goto B5b2f1c;
case 0x5b2f1e:c.instructions+=2;goto B5b2f1e;
case 0x5b2f22:c.instructions+=1;goto B5b2f22;
case 0x5b2f24:goto L5b2f24;
case 0x5b2f28:goto L5b2f28;
case 0x5b2f2c:c.instructions+=6;goto B5b2f2c;
case 0x5b2f30:c.instructions+=5;goto B5b2f30;
case 0x5b2f34:c.instructions+=4;goto B5b2f34;
case 0x5b2f3a:c.instructions+=3;goto B5b2f3a;
case 0x5b2f3c:c.instructions+=2;goto B5b2f3c;
case 0x5b2f3f:c.instructions+=1;goto B5b2f3f;
case 0x5b2f41:goto L5b2f41;
case 0x5b2f42:c.instructions+=6;goto B5b2f42;
case 0x5b2f44:c.instructions+=5;goto B5b2f44;
case 0x5b2f4a:c.instructions+=4;goto B5b2f4a;
case 0x5b2f4b:c.instructions+=3;goto B5b2f4b;
case 0x5b2f4c:c.instructions+=2;goto B5b2f4c;
case 0x5b2f4f:c.instructions+=1;goto B5b2f4f;
case 0x5b2f52:goto L5b2f52;
case 0x5b2f58:c.instructions+=4;goto B5b2f58;
case 0x5b2f5a:c.instructions+=3;goto B5b2f5a;
case 0x5b2f5c:c.instructions+=2;goto B5b2f5c;
case 0x5b2f5f:c.instructions+=1;goto B5b2f5f;
case 0x5b2f61:goto L5b2f61;
case 0x5b2f64:c.instructions+=1;goto B5b2f64;
case 0x5b2f66:goto L5b2f66;
case 0x5b2f68:c.instructions+=2;goto B5b2f68;
case 0x5b2f6b:c.instructions+=1;goto B5b2f6b;
case 0x5b2f6d:goto L5b2f6d;
case 0x5b2f73:c.instructions+=3;goto B5b2f73;
case 0x5b2f75:c.instructions+=2;goto B5b2f75;
case 0x5b2f78:c.instructions+=1;goto B5b2f78;
case 0x5b2f7a:goto L5b2f7a;
case 0x5b2f7d:c.instructions+=1;goto B5b2f7d;
case 0x5b2f7f:goto L5b2f7f;
case 0x5b2f84:goto L5b2f84;
case 0x5b2f86:c.instructions+=4;goto B5b2f86;
case 0x5b2f8a:c.instructions+=3;goto B5b2f8a;
case 0x5b2f8e:c.instructions+=2;goto B5b2f8e;
case 0x5b2f92:c.instructions+=1;goto B5b2f92;
case 0x5b2f98:goto L5b2f98;
case 0x5b2f99:c.instructions+=12;goto B5b2f99;
case 0x5b2f9c:c.instructions+=11;goto B5b2f9c;
case 0x5b2fa0:c.instructions+=10;goto B5b2fa0;
case 0x5b2fa4:c.instructions+=9;goto B5b2fa4;
case 0x5b2fa8:c.instructions+=8;goto B5b2fa8;
case 0x5b2fac:c.instructions+=7;goto B5b2fac;
case 0x5b2fb0:c.instructions+=6;goto B5b2fb0;
case 0x5b2fb6:c.instructions+=5;goto B5b2fb6;
case 0x5b2fba:c.instructions+=4;goto B5b2fba;
case 0x5b2fbc:c.instructions+=3;goto B5b2fbc;
case 0x5b2fbe:c.instructions+=2;goto B5b2fbe;
case 0x5b2fc1:c.instructions+=1;goto B5b2fc1;
case 0x5b2fc3:goto L5b2fc3;
case 0x5b2fc5:c.instructions+=1;goto B5b2fc5;
case 0x5b2fc7:goto L5b2fc7;
case 0x5b2fcb:c.instructions+=4;goto B5b2fcb;
case 0x5b2fcd:c.instructions+=3;goto B5b2fcd;
case 0x5b2fcf:c.instructions+=2;goto B5b2fcf;
case 0x5b2fd2:c.instructions+=1;goto B5b2fd2;
case 0x5b2fd4:goto L5b2fd4;
case 0x5b2fd8:c.instructions+=3;goto B5b2fd8;
case 0x5b2fda:c.instructions+=2;goto B5b2fda;
case 0x5b2fde:c.instructions+=1;goto B5b2fde;
case 0x5b2fe0:goto L5b2fe0;
case 0x5b2fe2:c.instructions+=8;goto B5b2fe2;
case 0x5b2fe8:c.instructions+=7;goto B5b2fe8;
case 0x5b2fec:c.instructions+=6;goto B5b2fec;
case 0x5b2ff0:c.instructions+=5;goto B5b2ff0;
case 0x5b2ff4:c.instructions+=4;goto B5b2ff4;
case 0x5b2ff8:c.instructions+=3;goto B5b2ff8;
case 0x5b2ffa:c.instructions+=2;goto B5b2ffa;
case 0x5b2ffd:c.instructions+=1;goto B5b2ffd;
case 0x5b2fff:goto L5b2fff;
default:missing_instruction(c.pc);}
B5b200a:L5b200a:{c.instructions+=1;NFSU2_TR(0x5b200a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b200full));
TAIL_STATIC(0x5a8c80u,5a8);
}
B5b200f:L5b200f:{c.instructions+=3;NFSU2_TR(0x5b200f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x506ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b2015:{NFSU2_TR(0x5b2015);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2017:{NFSU2_TR(0x5b2017);
if(r1(R+518)){{goto L5b2058;}}
}
B5b2019:L5b2019:{c.instructions+=5;NFSU2_TR(0x5b2019);
{u32 ea_=u32(r4(R+24)+u32(336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b201f:{NFSU2_TR(0x5b201f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b2025:{NFSU2_TR(0x5b2025);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2027:{NFSU2_TR(0x5b2027);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b202a:{NFSU2_TR(0x5b202a);
if(r1(R+514)){{goto L5b2058;}}
}
B5b202c:L5b202c:{c.instructions+=8;NFSU2_TR(0x5b202c);
{u32 ea_=u32(u32(8374364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2032:{NFSU2_TR(0x5b2032);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b2035:{NFSU2_TR(0x5b2035);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5b203b:{NFSU2_TR(0x5b203b);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b2041:{NFSU2_TR(0x5b2041);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b2047:{NFSU2_TR(0x5b2047);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2049:{NFSU2_TR(0x5b2049);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b204c:{NFSU2_TR(0x5b204c);
if(r1(R+514)){{goto L5b2058;}}
}
B5b204e:L5b204e:{c.instructions+=1;NFSU2_TR(0x5b204e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b2058:L5b2058:{c.instructions+=2;NFSU2_TR(0x5b2058);
__builtin_memmove((R+4),(R+24),4);
}
B5b205a:{NFSU2_TR(0x5b205a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b205full));
TAIL_STATIC(0x5ade10u,5ad);
}
B5b205f:L5b205f:{c.instructions+=6;NFSU2_TR(0x5b205f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b2060:{NFSU2_TR(0x5b2060);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b2061:{NFSU2_TR(0x5b2061);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b2062:{NFSU2_TR(0x5b2062);
__builtin_memmove((R+16),(R+20),4);
}
B5b2064:{NFSU2_TR(0x5b2064);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b2065:{NFSU2_TR(0x5b2065);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b2070:L5b2070:{c.instructions+=12;NFSU2_TR(0x5b2070);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2071:{NFSU2_TR(0x5b2071);
__builtin_memmove((R+20),(R+16),4);
}
B5b2073:{NFSU2_TR(0x5b2073);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5b2076:{NFSU2_TR(0x5b2076);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B5b2079:{NFSU2_TR(0x5b2079);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b207a:{NFSU2_TR(0x5b207a);
__builtin_memmove((R+24),(R+4),4);
}
B5b207c:{NFSU2_TR(0x5b207c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x506ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b2082:{NFSU2_TR(0x5b2082);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2084:{NFSU2_TR(0x5b2084);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2085:{NFSU2_TR(0x5b2085);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b2088:{NFSU2_TR(0x5b2088);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b2090:{NFSU2_TR(0x5b2090);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b21dc;}}
}
B5b2096:L5b2096:{c.instructions+=5;NFSU2_TR(0x5b2096);
{u32 ea_=u32(r4(R+24)+u32(336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b209c:{NFSU2_TR(0x5b209c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b20a2:{NFSU2_TR(0x5b20a2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b20a4:{NFSU2_TR(0x5b20a4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b20a7:{NFSU2_TR(0x5b20a7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b21d5;}}
}
B5b20ad:L5b20ad:{c.instructions+=19;NFSU2_TR(0x5b20ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b20b0:{NFSU2_TR(0x5b20b0);
{u32 ea_=u32(r4(R+0)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b20b6:{NFSU2_TR(0x5b20b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b20b9:{NFSU2_TR(0x5b20b9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x1f0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x1f0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b20be:{NFSU2_TR(0x5b20be);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b20c1:{NFSU2_TR(0x5b20c1);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b20c4:{NFSU2_TR(0x5b20c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b20c5:{NFSU2_TR(0x5b20c5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b20c8:{NFSU2_TR(0x5b20c8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b20ca:{NFSU2_TR(0x5b20ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b20ce:{NFSU2_TR(0x5b20ce);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b20d0:{NFSU2_TR(0x5b20d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b20d1:{NFSU2_TR(0x5b20d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b20d5:{NFSU2_TR(0x5b20d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b20d6:{NFSU2_TR(0x5b20d6);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b20da:{NFSU2_TR(0x5b20da);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b20dc:{NFSU2_TR(0x5b20dc);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b20e0:{NFSU2_TR(0x5b20e0);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b20e4:{NFSU2_TR(0x5b20e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b20e9ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5b20e9:L5b20e9:{c.instructions+=30;NFSU2_TR(0x5b20e9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b20ed:{NFSU2_TR(0x5b20ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b20f0:{NFSU2_TR(0x5b20f0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b20f4:{NFSU2_TR(0x5b20f4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b20f8:{NFSU2_TR(0x5b20f8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b20fc:{NFSU2_TR(0x5b20fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b20fe:{NFSU2_TR(0x5b20fe);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2102:{NFSU2_TR(0x5b2102);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b2106:{NFSU2_TR(0x5b2106);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b2108:{NFSU2_TR(0x5b2108);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5b210a:{NFSU2_TR(0x5b210a);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b210d:{NFSU2_TR(0x5b210d);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2110:{NFSU2_TR(0x5b2110);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2112:{NFSU2_TR(0x5b2112);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5b2114:{NFSU2_TR(0x5b2114);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5b2116:{NFSU2_TR(0x5b2116);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5b2118:{NFSU2_TR(0x5b2118);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5b211a:{NFSU2_TR(0x5b211a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b211c:{NFSU2_TR(0x5b211c);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5b211e:{NFSU2_TR(0x5b211e);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5b2120:{NFSU2_TR(0x5b2120);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b2122:{NFSU2_TR(0x5b2122);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5b2124:{NFSU2_TR(0x5b2124);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5b2126:{NFSU2_TR(0x5b2126);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b2128:{NFSU2_TR(0x5b2128);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b212a:{NFSU2_TR(0x5b212a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b212e:{NFSU2_TR(0x5b212e);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b2130:{NFSU2_TR(0x5b2130);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2132:{NFSU2_TR(0x5b2132);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2135:{NFSU2_TR(0x5b2135);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b213d;}}
}
B5b2137:L5b2137:{c.instructions+=2;NFSU2_TR(0x5b2137);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b2139:{NFSU2_TR(0x5b2139);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b213d:L5b213d:{c.instructions+=4;NFSU2_TR(0x5b213d);
{u32 ea_=u32(r4(R+24)+u32(336u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b2143:{NFSU2_TR(0x5b2143);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2145:{NFSU2_TR(0x5b2145);
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
B5b2148:{NFSU2_TR(0x5b2148);
if(r1(R+514)){{goto L5b215a;}}
}
B5b214a:L5b214a:{c.instructions+=7;NFSU2_TR(0x5b214a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b214c:{NFSU2_TR(0x5b214c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2152:{NFSU2_TR(0x5b2152);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b2153:{NFSU2_TR(0x5b2153);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b2154:{NFSU2_TR(0x5b2154);
__builtin_memmove((R+16),(R+20),4);
}
B5b2156:{NFSU2_TR(0x5b2156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b2157:{NFSU2_TR(0x5b2157);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b215a:L5b215a:{c.instructions+=28;NFSU2_TR(0x5b215a);
{u32 ea_=u32(r4(R+24)+u32(336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2160:{NFSU2_TR(0x5b2160);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2163:{NFSU2_TR(0x5b2163);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5b2165:{NFSU2_TR(0x5b2165);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
}
B5b216a:{NFSU2_TR(0x5b216a);
__builtin_memmove((R+4),(R+24),4);
}
B5b216c:{NFSU2_TR(0x5b216c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2170:{NFSU2_TR(0x5b2170);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b2172:{NFSU2_TR(0x5b2172);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2176:{NFSU2_TR(0x5b2176);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b2178:{NFSU2_TR(0x5b2178);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5b217a:{NFSU2_TR(0x5b217a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b217c:{NFSU2_TR(0x5b217c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2180:{NFSU2_TR(0x5b2180);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5b2182:{NFSU2_TR(0x5b2182);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b2185:{NFSU2_TR(0x5b2185);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2189:{NFSU2_TR(0x5b2189);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b218c:{NFSU2_TR(0x5b218c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2190:{NFSU2_TR(0x5b2190);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2193:{NFSU2_TR(0x5b2193);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2196:{NFSU2_TR(0x5b2196);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2198:{NFSU2_TR(0x5b2198);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b219a:{NFSU2_TR(0x5b219a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b219e:{NFSU2_TR(0x5b219e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b21a0:{NFSU2_TR(0x5b21a0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b21a2:{NFSU2_TR(0x5b21a2);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b21a6:{NFSU2_TR(0x5b21a6);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b21a8:{NFSU2_TR(0x5b21a8);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b21ac:{NFSU2_TR(0x5b21ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b21b1ull));
TAIL_STATIC(0x5adf90u,5ad);
}
B5b21b1:L5b21b1:{c.instructions+=8;NFSU2_TR(0x5b21b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b21b3:{NFSU2_TR(0x5b21b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b21b7:{NFSU2_TR(0x5b21b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b21b8:{NFSU2_TR(0x5b21b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b21bc:{NFSU2_TR(0x5b21bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b21bd:{NFSU2_TR(0x5b21bd);
__builtin_memmove((R+4),(R+24),4);
}
B5b21bf:{NFSU2_TR(0x5b21bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b21c9:{NFSU2_TR(0x5b21c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b21ccull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b21cc:L5b21cc:{c.instructions+=2;NFSU2_TR(0x5b21cc);
__builtin_memmove((R+4),(R+24),4);
}
B5b21ce:{NFSU2_TR(0x5b21ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b21d3ull));
TAIL_STATIC(0x5a8d50u,5a8);
}
B5b21d3:L5b21d3:{c.instructions+=1;NFSU2_TR(0x5b21d3);
{goto L5b21dc;}
}
B5b21d5:L5b21d5:{c.instructions+=2;NFSU2_TR(0x5b21d5);
__builtin_memmove((R+4),(R+24),4);
}
B5b21d7:{NFSU2_TR(0x5b21d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b21dcull));
TAIL_STATIC(0x5adf90u,5ad);
}
B5b21dc:L5b21dc:{c.instructions+=5;NFSU2_TR(0x5b21dc);
{u32 ea_=u32(r4(R+24)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b21e2:{NFSU2_TR(0x5b21e2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b21e8:{NFSU2_TR(0x5b21e8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b21ea:{NFSU2_TR(0x5b21ea);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b21ed:{NFSU2_TR(0x5b21ed);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b2256;}}
}
B5b21ef:L5b21ef:{c.instructions+=16;NFSU2_TR(0x5b21ef);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b21f2:{NFSU2_TR(0x5b21f2);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5b21f4:{NFSU2_TR(0x5b21f4);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b21f7:{NFSU2_TR(0x5b21f7);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5b21f9:{NFSU2_TR(0x5b21f9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b21fb:{NFSU2_TR(0x5b21fb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b21fd:{NFSU2_TR(0x5b21fd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b21ff:{NFSU2_TR(0x5b21ff);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2201:{NFSU2_TR(0x5b2201);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5b2203:{NFSU2_TR(0x5b2203);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b2207:{NFSU2_TR(0x5b2207);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b2209:{NFSU2_TR(0x5b2209);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b220d:{NFSU2_TR(0x5b220d);
{u32 ea_=u32(r4(R+24)+u32(340u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b2213:{NFSU2_TR(0x5b2213);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2215:{NFSU2_TR(0x5b2215);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b2218:{NFSU2_TR(0x5b2218);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2244;}}
}
B5b221a:L5b221a:{c.instructions+=13;NFSU2_TR(0x5b221a);
{u32 ea_=u32(r4(R+24)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2220:{NFSU2_TR(0x5b2220);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b222a:{NFSU2_TR(0x5b222a);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5b222c:{NFSU2_TR(0x5b222c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b2230:{NFSU2_TR(0x5b2230);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b2232:{NFSU2_TR(0x5b2232);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2236:{NFSU2_TR(0x5b2236);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b2238:{NFSU2_TR(0x5b2238);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b223c:{NFSU2_TR(0x5b223c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b223d:{NFSU2_TR(0x5b223d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b223e:{NFSU2_TR(0x5b223e);
__builtin_memmove((R+16),(R+20),4);
}
B5b2240:{NFSU2_TR(0x5b2240);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b2241:{NFSU2_TR(0x5b2241);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b2244:L5b2244:{c.instructions+=3;NFSU2_TR(0x5b2244);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b224a:{NFSU2_TR(0x5b224a);
{u32 ea_=u32(r4(R+24)+u32(340u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5b2250:{NFSU2_TR(0x5b2250);
{u32 ea_=u32(r4(R+24)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2256:L5b2256:{c.instructions+=6;NFSU2_TR(0x5b2256);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b225a:{NFSU2_TR(0x5b225a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b225b:{NFSU2_TR(0x5b225b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b225c:{NFSU2_TR(0x5b225c);
__builtin_memmove((R+16),(R+20),4);
}
B5b225e:{NFSU2_TR(0x5b225e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b225f:{NFSU2_TR(0x5b225f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b2270:L5b2270:{c.instructions+=2;NFSU2_TR(0x5b2270);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2273:{NFSU2_TR(0x5b2273);
TAIL_STATIC(0x5ae470u,5ae);
}
B5b2280:L5b2280:{c.instructions+=3;NFSU2_TR(0x5b2280);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2281:{NFSU2_TR(0x5b2281);
__builtin_memmove((R+24),(R+4),4);
}
B5b2283:{NFSU2_TR(0x5b2283);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2288ull));
TAIL_STATIC(0x5aff60u,5af);
}
B5b2288:L5b2288:{c.instructions+=2;NFSU2_TR(0x5b2288);
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
B5b228d:{NFSU2_TR(0x5b228d);
if(r1(R+518)){{goto L5b229e;}}
}
B5b228f:L5b228f:{c.instructions+=4;NFSU2_TR(0x5b228f);
__builtin_memmove((R+0),gp(0x86b300),4);
}
B5b2294:{NFSU2_TR(0x5b2294);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2295:{NFSU2_TR(0x5b2295);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2296:{NFSU2_TR(0x5b2296);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b229bull));
TAIL_STATIC(0x43f920u,43f);
}
B5b229b:L5b229b:{c.instructions+=1;NFSU2_TR(0x5b229b);
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
B5b229e:L5b229e:{c.instructions+=3;NFSU2_TR(0x5b229e);
__builtin_memmove((R+0),(R+24),4);
}
B5b22a0:{NFSU2_TR(0x5b22a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b22a1:{NFSU2_TR(0x5b22a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b22b0:L5b22b0:{c.instructions+=18;NFSU2_TR(0x5b22b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b22b2:{NFSU2_TR(0x5b22b2);
u8 U[4];
w4(U+0,u32(0x778fb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b22b7:{NFSU2_TR(0x5b22b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b22bd:{NFSU2_TR(0x5b22bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b22be:{NFSU2_TR(0x5b22be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b22c5:{NFSU2_TR(0x5b22c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b22c6:{NFSU2_TR(0x5b22c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b22c7:{NFSU2_TR(0x5b22c7);
__builtin_memmove((R+24),(R+4),4);
}
B5b22c9:{NFSU2_TR(0x5b22c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b22cd:{NFSU2_TR(0x5b22cd);
u8 U[4];
w4(U+0,u32(0x7a1fd8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5b22d3:{NFSU2_TR(0x5b22d3);
__builtin_memmove((R+8),gp(0x86b248),4);
}
B5b22d9:{NFSU2_TR(0x5b22d9);
__builtin_memmove((R+4),gp(0x86b2b8),4);
}
B5b22df:{NFSU2_TR(0x5b22df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b22e1:{NFSU2_TR(0x5b22e1);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5b22e2:{NFSU2_TR(0x5b22e2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b22e4:{NFSU2_TR(0x5b22e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b22e8:{NFSU2_TR(0x5b22e8);
__builtin_memmove(gp(0x86b248),(R+8),4);
}
B5b22ee:{NFSU2_TR(0x5b22ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b22f5;}}
}
B5b22f0:L5b22f0:{c.instructions+=1;NFSU2_TR(0x5b22f0);
__builtin_memmove(gp(0x86b2b8),(R+0),4);
}
B5b22f5:L5b22f5:{c.instructions+=2;NFSU2_TR(0x5b22f5);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5b22fb:{NFSU2_TR(0x5b22fb);
if(r1(R+518)){{goto L5b2304;}}
}
B5b22fd:L5b22fd:{c.instructions+=2;NFSU2_TR(0x5b22fd);
__builtin_memmove((R+4),(R+24),4);
}
B5b22ff:{NFSU2_TR(0x5b22ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2304ull));
TAIL_STATIC(0x5ae470u,5ae);
}
B5b2304:L5b2304:{c.instructions+=48;NFSU2_TR(0x5b2304);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b230a:{NFSU2_TR(0x5b230a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2310:{NFSU2_TR(0x5b2310);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5b2312:{NFSU2_TR(0x5b2312);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b2315:{NFSU2_TR(0x5b2315);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b231b:{NFSU2_TR(0x5b231b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))-u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B5b231e:{NFSU2_TR(0x5b231e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2324:{NFSU2_TR(0x5b2324);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))-u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B5b2327:{NFSU2_TR(0x5b2327);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b232d:{NFSU2_TR(0x5b232d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5b2331:{NFSU2_TR(0x5b2331);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2337:{NFSU2_TR(0x5b2337);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xd6ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5b233d:{NFSU2_TR(0x5b233d);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5b2341:{NFSU2_TR(0x5b2341);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5b2343:{NFSU2_TR(0x5b2343);
__builtin_memmove((R+0),gp(0x86b0b0),4);
}
B5b2348:{NFSU2_TR(0x5b2348);
__builtin_memmove((R+8),(R+4),4);
}
B5b234a:{NFSU2_TR(0x5b234a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5b234d:{NFSU2_TR(0x5b234d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5b234f:{NFSU2_TR(0x5b234f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B5b2352:{NFSU2_TR(0x5b2352);
w1(R+8,u8(0x1ull));
}
B5b2354:{NFSU2_TR(0x5b2354);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B5b2356:{NFSU2_TR(0x5b2356);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5b2358:{NFSU2_TR(0x5b2358);
w1(R+8,u8(~u32(r1(R+8))));
}
B5b235a:{NFSU2_TR(0x5b235a);
w1(R+4,u8(u32(r1(R+4))&u32(r1(R+8))));
}
B5b235c:{NFSU2_TR(0x5b235c);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B5b235e:{NFSU2_TR(0x5b235e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2364:{NFSU2_TR(0x5b2364);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5b2368:{NFSU2_TR(0x5b2368);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b236e:{NFSU2_TR(0x5b236e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xd6ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5b2374:{NFSU2_TR(0x5b2374);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5b2378:{NFSU2_TR(0x5b2378);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5b237a:{NFSU2_TR(0x5b237a);
__builtin_memmove((R+0),gp(0x86b0b0),4);
}
B5b237f:{NFSU2_TR(0x5b237f);
__builtin_memmove((R+8),(R+4),4);
}
B5b2381:{NFSU2_TR(0x5b2381);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5b2384:{NFSU2_TR(0x5b2384);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5b2386:{NFSU2_TR(0x5b2386);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B5b2389:{NFSU2_TR(0x5b2389);
w1(R+8,u8(0x1ull));
}
B5b238b:{NFSU2_TR(0x5b238b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B5b238d:{NFSU2_TR(0x5b238d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5b238f:{NFSU2_TR(0x5b238f);
w1(R+8,u8(~u32(r1(R+8))));
}
B5b2391:{NFSU2_TR(0x5b2391);
w1(R+4,u8(u32(r1(R+4))&u32(r1(R+8))));
}
B5b2393:{NFSU2_TR(0x5b2393);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B5b2395:{NFSU2_TR(0x5b2395);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2399:{NFSU2_TR(0x5b2399);
u8 U[4];
w4(U+0,u32(0x7a1d44ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5b239f:{NFSU2_TR(0x5b239f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b23a0:{NFSU2_TR(0x5b23a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b23a7:{NFSU2_TR(0x5b23a7);
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
B5b23aa:{NFSU2_TR(0x5b23aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b23b0:L5b23b0:{c.instructions+=11;NFSU2_TR(0x5b23b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b23b2:{NFSU2_TR(0x5b23b2);
u8 U[4];
w4(U+0,u32(0x778d6bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b23b7:{NFSU2_TR(0x5b23b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b23bd:{NFSU2_TR(0x5b23bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b23be:{NFSU2_TR(0x5b23be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b23c5:{NFSU2_TR(0x5b23c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b23c6:{NFSU2_TR(0x5b23c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b23c7:{NFSU2_TR(0x5b23c7);
__builtin_memmove((R+28),(R+4),4);
}
B5b23c9:{NFSU2_TR(0x5b23c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b23cb:{NFSU2_TR(0x5b23cb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b23cd:{NFSU2_TR(0x5b23cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b23d0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b23d0:L5b23d0:{c.instructions+=2;NFSU2_TR(0x5b23d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b23d2:{NFSU2_TR(0x5b23d2);
if(r1(R+518)){{goto L5b259a;}}
}
B5b23d8:L5b23d8:{c.instructions+=4;NFSU2_TR(0x5b23d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b23d9:{NFSU2_TR(0x5b23d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b23da:{NFSU2_TR(0x5b23da);
__builtin_memmove((R+4),(R+28),4);
}
B5b23dc:{NFSU2_TR(0x5b23dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b23e1ull));
TAIL_STATIC(0x5ae930u,5ae);
}
B5b23e1:L5b23e1:{c.instructions+=5;NFSU2_TR(0x5b23e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b23e4:{NFSU2_TR(0x5b23e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b23e6:{NFSU2_TR(0x5b23e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b23e9:{NFSU2_TR(0x5b23e9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b23ed:{NFSU2_TR(0x5b23ed);
if(r1(R+518)){{goto L5b23f4;}}
}
B5b23ef:L5b23ef:{c.instructions+=2;NFSU2_TR(0x5b23ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b23f2:{NFSU2_TR(0x5b23f2);
{goto L5b23f6;}
}
B5b23f4:L5b23f4:{c.instructions+=1;NFSU2_TR(0x5b23f4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5b23f6:L5b23f6:{c.instructions+=2;NFSU2_TR(0x5b23f6);
w4(R+4,u32(0x86b4c8ull));
}
B5b23fb:{NFSU2_TR(0x5b23fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2400ull));
TAIL_STATIC(0x431780u,431);
}
B5b2400:L5b2400:{c.instructions+=3;NFSU2_TR(0x5b2400);
__builtin_memmove((R+4),(R+0),4);
}
B5b2402:{NFSU2_TR(0x5b2402);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b2404:{NFSU2_TR(0x5b2404);
if(r1(R+518)){{goto L5b2426;}}
}
B5b2406:L5b2406:{c.instructions+=5;NFSU2_TR(0x5b2406);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2409:{NFSU2_TR(0x5b2409);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b240d:{NFSU2_TR(0x5b240d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b240f:{NFSU2_TR(0x5b240f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2412:{NFSU2_TR(0x5b2412);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2426;}}
}
B5b2414:L5b2414:{c.instructions+=3;NFSU2_TR(0x5b2414);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b2417:{NFSU2_TR(0x5b2417);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b2419:{NFSU2_TR(0x5b2419);
if(r1(R+518)){{goto L5b2420;}}
}
B5b241b:L5b241b:{c.instructions+=2;NFSU2_TR(0x5b241b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B5b241e:{NFSU2_TR(0x5b241e);
{goto L5b2422;}
}
B5b2420:L5b2420:{c.instructions+=1;NFSU2_TR(0x5b2420);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5b2422:L5b2422:{c.instructions+=2;NFSU2_TR(0x5b2422);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b2424:{NFSU2_TR(0x5b2424);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b2406u);}goto L5b2406;}}
}
B5b2426:L5b2426:{c.instructions+=6;NFSU2_TR(0x5b2426);
{u32 ea_=u32(u32(8827548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b242c:{NFSU2_TR(0x5b242c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b242f:{NFSU2_TR(0x5b242f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b2431:{NFSU2_TR(0x5b2431);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b2434:{NFSU2_TR(0x5b2434);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2438:{NFSU2_TR(0x5b2438);
if(r1(R+518)){{goto L5b243f;}}
}
B5b243a:L5b243a:{c.instructions+=2;NFSU2_TR(0x5b243a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b243d:{NFSU2_TR(0x5b243d);
{goto L5b2441;}
}
B5b243f:L5b243f:{c.instructions+=1;NFSU2_TR(0x5b243f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5b2441:L5b2441:{c.instructions+=2;NFSU2_TR(0x5b2441);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b2443:{NFSU2_TR(0x5b2443);
if(r1(R+518)){{goto L5b2465;}}
}
B5b2445:L5b2445:{c.instructions+=5;NFSU2_TR(0x5b2445);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2448:{NFSU2_TR(0x5b2448);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b244c:{NFSU2_TR(0x5b244c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b244e:{NFSU2_TR(0x5b244e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b2451:{NFSU2_TR(0x5b2451);
if(r1(R+514)){{goto L5b2465;}}
}
B5b2453:L5b2453:{c.instructions+=3;NFSU2_TR(0x5b2453);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2456:{NFSU2_TR(0x5b2456);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b2458:{NFSU2_TR(0x5b2458);
if(r1(R+518)){{goto L5b245f;}}
}
B5b245a:L5b245a:{c.instructions+=2;NFSU2_TR(0x5b245a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b245d:{NFSU2_TR(0x5b245d);
{goto L5b2461;}
}
B5b245f:L5b245f:{c.instructions+=1;NFSU2_TR(0x5b245f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5b2461:L5b2461:{c.instructions+=2;NFSU2_TR(0x5b2461);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b2463:{NFSU2_TR(0x5b2463);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b2445u);}goto L5b2445;}}
}
B5b2465:L5b2465:{c.instructions+=4;NFSU2_TR(0x5b2465);
w4(R+8,u32(0x86b4c8ull));
}
B5b246a:{NFSU2_TR(0x5b246a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x4ull))));
}
B5b246d:{NFSU2_TR(0x5b246d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b246f:{NFSU2_TR(0x5b246f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b247f;}}
}
B5b2471:L5b2471:{c.instructions+=3;NFSU2_TR(0x5b2471);
__builtin_memmove((R+0),gp(0x86b4c8),4);
}
B5b2476:{NFSU2_TR(0x5b2476);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b2478:{NFSU2_TR(0x5b2478);
if(r1(R+518)){{goto L5b248b;}}
}
B5b247a:L5b247a:{c.instructions+=2;NFSU2_TR(0x5b247a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b247d:{NFSU2_TR(0x5b247d);
{goto L5b248d;}
}
B5b247f:L5b247f:{c.instructions+=3;NFSU2_TR(0x5b247f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b2482:{NFSU2_TR(0x5b2482);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b2484:{NFSU2_TR(0x5b2484);
if(r1(R+518)){{goto L5b248b;}}
}
B5b2486:L5b2486:{c.instructions+=2;NFSU2_TR(0x5b2486);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B5b2489:{NFSU2_TR(0x5b2489);
{goto L5b248d;}
}
B5b248b:L5b248b:{c.instructions+=1;NFSU2_TR(0x5b248b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5b248d:L5b248d:{c.instructions+=2;NFSU2_TR(0x5b248d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b248f:{NFSU2_TR(0x5b248f);
if(r1(R+518)){{goto L5b2598;}}
}
B5b2495:L5b2495:{c.instructions+=1;NFSU2_TR(0x5b2495);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2496:L5b2496:{c.instructions+=3;NFSU2_TR(0x5b2496);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2499:{NFSU2_TR(0x5b2499);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b249b:{NFSU2_TR(0x5b249b);
if(r1(R+518)){{goto L5b24a2;}}
}
B5b249d:L5b249d:{c.instructions+=2;NFSU2_TR(0x5b249d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b24a0:{NFSU2_TR(0x5b24a0);
{goto L5b24a4;}
}
B5b24a2:L5b24a2:{c.instructions+=1;NFSU2_TR(0x5b24a2);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5b24a4:L5b24a4:{c.instructions+=2;NFSU2_TR(0x5b24a4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b24a6:{NFSU2_TR(0x5b24a6);
if(r1(R+518)){{goto L5b258d;}}
}
B5b24ac:L5b24ac:{c.instructions+=5;NFSU2_TR(0x5b24ac);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b24af:{NFSU2_TR(0x5b24af);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b24b2:{NFSU2_TR(0x5b24b2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b24b4:{NFSU2_TR(0x5b24b4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b24b7:{NFSU2_TR(0x5b24b7);
if(r1(R+514)){{goto L5b258d;}}
}
B5b24bd:L5b24bd:{c.instructions+=5;NFSU2_TR(0x5b24bd);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b24c0:{NFSU2_TR(0x5b24c0);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b24c3:{NFSU2_TR(0x5b24c3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b24c5:{NFSU2_TR(0x5b24c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b24c8:{NFSU2_TR(0x5b24c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b258d;}}
}
B5b24ce:L5b24ce:{c.instructions+=5;NFSU2_TR(0x5b24ce);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b24d1:{NFSU2_TR(0x5b24d1);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b24d4:{NFSU2_TR(0x5b24d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b24d6:{NFSU2_TR(0x5b24d6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b24d9:{NFSU2_TR(0x5b24d9);
if(r1(R+514)){{goto L5b258d;}}
}
B5b24df:L5b24df:{c.instructions+=5;NFSU2_TR(0x5b24df);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b24e2:{NFSU2_TR(0x5b24e2);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b24e5:{NFSU2_TR(0x5b24e5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b24e7:{NFSU2_TR(0x5b24e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b24ea:{NFSU2_TR(0x5b24ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b258d;}}
}
B5b24f0:L5b24f0:{c.instructions+=3;NFSU2_TR(0x5b24f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5b24f4:{NFSU2_TR(0x5b24f4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B5b24f7:{NFSU2_TR(0x5b24f7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b252f;}}
}
B5b24f9:L5b24f9:{c.instructions+=3;NFSU2_TR(0x5b24f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5b24fd:{NFSU2_TR(0x5b24fd);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B5b2500:{NFSU2_TR(0x5b2500);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b252f;}}
}
B5b2502:L5b2502:{c.instructions+=14;NFSU2_TR(0x5b2502);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5b2505:{NFSU2_TR(0x5b2505);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xd6ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5b250b:{NFSU2_TR(0x5b250b);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B5b250e:{NFSU2_TR(0x5b250e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5b2510:{NFSU2_TR(0x5b2510);
__builtin_memmove((R+4),(R+0),4);
}
B5b2512:{NFSU2_TR(0x5b2512);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B5b2515:{NFSU2_TR(0x5b2515);
w4(R+8,u32(0x1ull));
}
B5b251a:{NFSU2_TR(0x5b251a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B5b251c:{NFSU2_TR(0x5b251c);
__builtin_memmove((R+4),gp(0x86b0b0),4);
}
B5b2522:{NFSU2_TR(0x5b2522);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5b2525:{NFSU2_TR(0x5b2525);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B5b2529:{NFSU2_TR(0x5b2529);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B5b252b:{NFSU2_TR(0x5b252b);
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
B5b252d:{NFSU2_TR(0x5b252d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b258d;}}
}
B5b252f:L5b252f:{c.instructions+=4;NFSU2_TR(0x5b252f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b2531:{NFSU2_TR(0x5b2531);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2532:{NFSU2_TR(0x5b2532);
__builtin_memmove((R+4),(R+24),4);
}
B5b2534:{NFSU2_TR(0x5b2534);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2537ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b2537:L5b2537:{c.instructions+=2;NFSU2_TR(0x5b2537);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b2539:{NFSU2_TR(0x5b2539);
if(r1(R+518)){{goto L5b258d;}}
}
B5b253b:L5b253b:{c.instructions+=2;NFSU2_TR(0x5b253b);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5b253f:{NFSU2_TR(0x5b253f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b254c;}}
}
B5b2541:L5b2541:{c.instructions+=2;NFSU2_TR(0x5b2541);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2542:{NFSU2_TR(0x5b2542);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2547ull));
TAIL_STATIC(0x5b31f0u,5b3);
}
B5b2547:L5b2547:{c.instructions+=2;NFSU2_TR(0x5b2547);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b254a:{NFSU2_TR(0x5b254a);
__builtin_memmove((R+24),(R+0),4);
}
B5b254c:L5b254c:{c.instructions+=2;NFSU2_TR(0x5b254c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b254e:{NFSU2_TR(0x5b254e);
if(r1(R+518)){{goto L5b258d;}}
}
B5b2550:L5b2550:{c.instructions+=4;NFSU2_TR(0x5b2550);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2552:{NFSU2_TR(0x5b2552);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2553:{NFSU2_TR(0x5b2553);
__builtin_memmove((R+4),(R+28),4);
}
B5b2555:{NFSU2_TR(0x5b2555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b255aull));
TAIL_STATIC(0x592960u,592);
}
B5b255a:L5b255a:{c.instructions+=2;NFSU2_TR(0x5b255a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b255c:{NFSU2_TR(0x5b255c);
if(r1(R+518)){{goto L5b258d;}}
}
B5b255e:L5b255e:{c.instructions+=3;NFSU2_TR(0x5b255e);
__builtin_memmove((R+0),gp(0x86b0bc),4);
}
B5b2563:{NFSU2_TR(0x5b2563);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2564:{NFSU2_TR(0x5b2564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2569ull));
TAIL_STATIC(0x440e50u,440);
}
B5b2569:L5b2569:{c.instructions+=5;NFSU2_TR(0x5b2569);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b256c:{NFSU2_TR(0x5b256c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b2570:{NFSU2_TR(0x5b2570);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b2572:{NFSU2_TR(0x5b2572);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b257a:{NFSU2_TR(0x5b257a);
if(r1(R+518)){{goto L5b2585;}}
}
B5b257c:L5b257c:{c.instructions+=4;NFSU2_TR(0x5b257c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b257d:{NFSU2_TR(0x5b257d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b257e:{NFSU2_TR(0x5b257e);
__builtin_memmove((R+4),(R+0),4);
}
B5b2580:{NFSU2_TR(0x5b2580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2585ull));
TAIL_STATIC(0x5a0340u,5a0);
}
B5b2585:L5b2585:{c.instructions+=1;NFSU2_TR(0x5b2585);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b258d:L5b258d:{c.instructions+=3;NFSU2_TR(0x5b258d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b258f:{NFSU2_TR(0x5b258f);
__builtin_memmove((R+24),(R+20),4);
}
B5b2591:{NFSU2_TR(0x5b2591);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b2496u);}goto L5b2496;}}
}
B5b2597:L5b2597:{c.instructions+=1;NFSU2_TR(0x5b2597);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b2598:L5b2598:{c.instructions+=2;NFSU2_TR(0x5b2598);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b2599:{NFSU2_TR(0x5b2599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b259a:L5b259a:{c.instructions+=5;NFSU2_TR(0x5b259a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b259e:{NFSU2_TR(0x5b259e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b259f:{NFSU2_TR(0x5b259f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b25a6:{NFSU2_TR(0x5b25a6);
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
B5b25a9:{NFSU2_TR(0x5b25a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b25b0:L5b25b0:{c.instructions+=3;NFSU2_TR(0x5b25b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b25b1:{NFSU2_TR(0x5b25b1);
__builtin_memmove((R+24),(R+4),4);
}
B5b25b3:{NFSU2_TR(0x5b25b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b25b8ull));
TAIL_STATIC(0x5aeee0u,5ae);
}
B5b25b8:L5b25b8:{c.instructions+=2;NFSU2_TR(0x5b25b8);
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
B5b25bd:{NFSU2_TR(0x5b25bd);
if(r1(R+518)){{goto L5b25ce;}}
}
B5b25bf:L5b25bf:{c.instructions+=4;NFSU2_TR(0x5b25bf);
__builtin_memmove((R+0),gp(0x86ad60),4);
}
B5b25c4:{NFSU2_TR(0x5b25c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b25c5:{NFSU2_TR(0x5b25c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b25c6:{NFSU2_TR(0x5b25c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b25cbull));
TAIL_STATIC(0x43f920u,43f);
}
B5b25cb:L5b25cb:{c.instructions+=1;NFSU2_TR(0x5b25cb);
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
B5b25ce:L5b25ce:{c.instructions+=3;NFSU2_TR(0x5b25ce);
__builtin_memmove((R+0),(R+24),4);
}
B5b25d0:{NFSU2_TR(0x5b25d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b25d1:{NFSU2_TR(0x5b25d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b25e0:L5b25e0:{c.instructions+=3;NFSU2_TR(0x5b25e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b25e1:{NFSU2_TR(0x5b25e1);
__builtin_memmove((R+24),(R+4),4);
}
B5b25e3:{NFSU2_TR(0x5b25e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b25e8ull));
TAIL_STATIC(0x5aefa0u,5ae);
}
B5b25e8:L5b25e8:{c.instructions+=2;NFSU2_TR(0x5b25e8);
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
B5b25ed:{NFSU2_TR(0x5b25ed);
if(r1(R+518)){{goto L5b25fe;}}
}
B5b25ef:L5b25ef:{c.instructions+=4;NFSU2_TR(0x5b25ef);
__builtin_memmove((R+0),gp(0x86ad68),4);
}
B5b25f4:{NFSU2_TR(0x5b25f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b25f5:{NFSU2_TR(0x5b25f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b25f6:{NFSU2_TR(0x5b25f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b25fbull));
TAIL_STATIC(0x43f920u,43f);
}
B5b25fb:L5b25fb:{c.instructions+=1;NFSU2_TR(0x5b25fb);
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
B5b25fe:L5b25fe:{c.instructions+=3;NFSU2_TR(0x5b25fe);
__builtin_memmove((R+0),(R+24),4);
}
B5b2600:{NFSU2_TR(0x5b2600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b2601:{NFSU2_TR(0x5b2601);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b2610:L5b2610:{c.instructions+=13;NFSU2_TR(0x5b2610);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2611:{NFSU2_TR(0x5b2611);
__builtin_memmove((R+20),(R+16),4);
}
B5b2613:{NFSU2_TR(0x5b2613);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5b2616:{NFSU2_TR(0x5b2616);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x34ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b2619:{NFSU2_TR(0x5b2619);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b261a:{NFSU2_TR(0x5b261a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b261b:{NFSU2_TR(0x5b261b);
__builtin_memmove((R+24),(R+4),4);
}
B5b261d:{NFSU2_TR(0x5b261d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2620:{NFSU2_TR(0x5b2620);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2623:{NFSU2_TR(0x5b2623);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b2625:{NFSU2_TR(0x5b2625);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2626:{NFSU2_TR(0x5b2626);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2627:{NFSU2_TR(0x5b2627);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b262aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b262a:L5b262a:{c.instructions+=5;NFSU2_TR(0x5b262a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b262d:{NFSU2_TR(0x5b262d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2630:{NFSU2_TR(0x5b2630);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b2632:{NFSU2_TR(0x5b2632);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2633:{NFSU2_TR(0x5b2633);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2636ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b2636:L5b2636:{c.instructions+=5;NFSU2_TR(0x5b2636);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2639:{NFSU2_TR(0x5b2639);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b263c:{NFSU2_TR(0x5b263c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b263e:{NFSU2_TR(0x5b263e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b263f:{NFSU2_TR(0x5b263f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2642ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b2642:L5b2642:{c.instructions+=5;NFSU2_TR(0x5b2642);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2645:{NFSU2_TR(0x5b2645);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2648:{NFSU2_TR(0x5b2648);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b264a:{NFSU2_TR(0x5b264a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b264b:{NFSU2_TR(0x5b264b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b264eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b264e:L5b264e:{c.instructions+=3;NFSU2_TR(0x5b264e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2651:{NFSU2_TR(0x5b2651);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b2653:{NFSU2_TR(0x5b2653);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2656ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b2656:L5b2656:{c.instructions+=10;NFSU2_TR(0x5b2656);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2659:{NFSU2_TR(0x5b2659);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b265c:{NFSU2_TR(0x5b265c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b265e:{NFSU2_TR(0x5b265e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b2660:{NFSU2_TR(0x5b2660);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b2664:{NFSU2_TR(0x5b2664);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2667:{NFSU2_TR(0x5b2667);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b266b:{NFSU2_TR(0x5b266b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b266f:{NFSU2_TR(0x5b266f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b2671:{NFSU2_TR(0x5b2671);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2674ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b2674:L5b2674:{c.instructions+=12;NFSU2_TR(0x5b2674);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2677:{NFSU2_TR(0x5b2677);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b267a:{NFSU2_TR(0x5b267a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b267c:{NFSU2_TR(0x5b267c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b267f:{NFSU2_TR(0x5b267f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b2681:{NFSU2_TR(0x5b2681);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2685:{NFSU2_TR(0x5b2685);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b2689:{NFSU2_TR(0x5b2689);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b268b:{NFSU2_TR(0x5b268b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b268f:{NFSU2_TR(0x5b268f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b2692:{NFSU2_TR(0x5b2692);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2694:{NFSU2_TR(0x5b2694);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b26ad;}}
}
B5b2696:L5b2696:{c.instructions+=3;NFSU2_TR(0x5b2696);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2699:{NFSU2_TR(0x5b2699);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5b269d:{NFSU2_TR(0x5b269d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b26ad;}}
}
B5b269f:L5b269f:{c.instructions+=3;NFSU2_TR(0x5b269f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b26a5:{NFSU2_TR(0x5b26a5);
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
B5b26a7:{NFSU2_TR(0x5b26a7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b26ad;}}
}
B5b26a9:L5b26a9:{c.instructions+=2;NFSU2_TR(0x5b26a9);
__builtin_memmove((R+28),(R+4),4);
}
B5b26ab:{NFSU2_TR(0x5b26ab);
{goto L5b26c7;}
}
B5b26ad:L5b26ad:{c.instructions+=4;NFSU2_TR(0x5b26ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b26b0:{NFSU2_TR(0x5b26b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5b26b3:{NFSU2_TR(0x5b26b3);
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
B5b26b5:{NFSU2_TR(0x5b26b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b26c7;}}
}
B5b26b7:L5b26b7:{c.instructions+=2;NFSU2_TR(0x5b26b7);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b26b9:{NFSU2_TR(0x5b26b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b26c7;}}
}
B5b26bb:L5b26bb:{c.instructions+=3;NFSU2_TR(0x5b26bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b26c1:{NFSU2_TR(0x5b26c1);
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
B5b26c3:{NFSU2_TR(0x5b26c3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b26c7;}}
}
B5b26c5:L5b26c5:{c.instructions+=1;NFSU2_TR(0x5b26c5);
__builtin_memmove((R+28),(R+8),4);
}
B5b26c7:L5b26c7:{c.instructions+=2;NFSU2_TR(0x5b26c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b26c9:{NFSU2_TR(0x5b26c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b26ccull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b26cc:L5b26cc:{c.instructions+=2;NFSU2_TR(0x5b26cc);
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
B5b26ce:{NFSU2_TR(0x5b26ce);
if(r1(R+518)){{goto L5b270e;}}
}
B5b26d0:L5b26d0:{c.instructions+=15;NFSU2_TR(0x5b26d0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b26d4:{NFSU2_TR(0x5b26d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b26d7:{NFSU2_TR(0x5b26d7);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5b26d9:{NFSU2_TR(0x5b26d9);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b26dc:{NFSU2_TR(0x5b26dc);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b26df:{NFSU2_TR(0x5b26df);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5b26e3:{NFSU2_TR(0x5b26e3);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b26e6:{NFSU2_TR(0x5b26e6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5b26ea:{NFSU2_TR(0x5b26ea);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b26ee:{NFSU2_TR(0x5b26ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b26f2:{NFSU2_TR(0x5b26f2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b26f4:{NFSU2_TR(0x5b26f4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b26f8:{NFSU2_TR(0x5b26f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b26fc:{NFSU2_TR(0x5b26fc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2700:{NFSU2_TR(0x5b2700);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b270e;}}
}
B5b2702:L5b2702:{c.instructions+=2;NFSU2_TR(0x5b2702);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b2704:{NFSU2_TR(0x5b2704);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2707ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b2707:L5b2707:{c.instructions+=2;NFSU2_TR(0x5b2707);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b270a:{NFSU2_TR(0x5b270a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b270e:L5b270e:{c.instructions+=3;NFSU2_TR(0x5b270e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2711:{NFSU2_TR(0x5b2711);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b2713:{NFSU2_TR(0x5b2713);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2716ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b2716:L5b2716:{c.instructions+=2;NFSU2_TR(0x5b2716);
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
B5b2718:{NFSU2_TR(0x5b2718);
if(r1(R+518)){{goto L5b2758;}}
}
B5b271a:L5b271a:{c.instructions+=15;NFSU2_TR(0x5b271a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b271e:{NFSU2_TR(0x5b271e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2721:{NFSU2_TR(0x5b2721);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5b2723:{NFSU2_TR(0x5b2723);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b2726:{NFSU2_TR(0x5b2726);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2729:{NFSU2_TR(0x5b2729);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b272d:{NFSU2_TR(0x5b272d);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2730:{NFSU2_TR(0x5b2730);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b2734:{NFSU2_TR(0x5b2734);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2738:{NFSU2_TR(0x5b2738);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b273c:{NFSU2_TR(0x5b273c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b273e:{NFSU2_TR(0x5b273e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2742:{NFSU2_TR(0x5b2742);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b2746:{NFSU2_TR(0x5b2746);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b274a:{NFSU2_TR(0x5b274a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2758;}}
}
B5b274c:L5b274c:{c.instructions+=2;NFSU2_TR(0x5b274c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b274e:{NFSU2_TR(0x5b274e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2751ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b2751:L5b2751:{c.instructions+=2;NFSU2_TR(0x5b2751);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2754:{NFSU2_TR(0x5b2754);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b2758:L5b2758:{c.instructions+=5;NFSU2_TR(0x5b2758);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b275b:{NFSU2_TR(0x5b275b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b275d:{NFSU2_TR(0x5b275d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b2761:{NFSU2_TR(0x5b2761);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2762:{NFSU2_TR(0x5b2762);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2765ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b2765:L5b2765:{c.instructions+=5;NFSU2_TR(0x5b2765);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2768:{NFSU2_TR(0x5b2768);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b276a:{NFSU2_TR(0x5b276a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b276e:{NFSU2_TR(0x5b276e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b276f:{NFSU2_TR(0x5b276f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2772ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b2772:L5b2772:{c.instructions+=3;NFSU2_TR(0x5b2772);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2775:{NFSU2_TR(0x5b2775);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b2777:{NFSU2_TR(0x5b2777);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b277aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b277a:L5b277a:{c.instructions+=3;NFSU2_TR(0x5b277a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b277d:{NFSU2_TR(0x5b277d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b277f:{NFSU2_TR(0x5b277f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2782ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b2782:L5b2782:{c.instructions+=2;NFSU2_TR(0x5b2782);
__builtin_memmove((R+4),(R+24),4);
}
B5b2784:{NFSU2_TR(0x5b2784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2789ull));
TAIL_STATIC(0x5af0e0u,5af);
}
B5b2789:L5b2789:{c.instructions+=3;NFSU2_TR(0x5b2789);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b278c:{NFSU2_TR(0x5b278c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b278e:{NFSU2_TR(0x5b278e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2791ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b2791:L5b2791:{c.instructions+=3;NFSU2_TR(0x5b2791);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2794:{NFSU2_TR(0x5b2794);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b2796:{NFSU2_TR(0x5b2796);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2799ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b2799:L5b2799:{c.instructions+=5;NFSU2_TR(0x5b2799);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b279c:{NFSU2_TR(0x5b279c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b279f:{NFSU2_TR(0x5b279f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b27a1:{NFSU2_TR(0x5b27a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b27a2:{NFSU2_TR(0x5b27a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b27a5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b27a5:L5b27a5:{c.instructions+=5;NFSU2_TR(0x5b27a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b27a8:{NFSU2_TR(0x5b27a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b27ab:{NFSU2_TR(0x5b27ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b27ad:{NFSU2_TR(0x5b27ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b27ae:{NFSU2_TR(0x5b27ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b27b1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b27b1:L5b27b1:{c.instructions+=6;NFSU2_TR(0x5b27b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b27b2:{NFSU2_TR(0x5b27b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b27b3:{NFSU2_TR(0x5b27b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b27b4:{NFSU2_TR(0x5b27b4);
__builtin_memmove((R+16),(R+20),4);
}
B5b27b6:{NFSU2_TR(0x5b27b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b27b7:{NFSU2_TR(0x5b27b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b27c0:L5b27c0:{c.instructions+=3;NFSU2_TR(0x5b27c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b27c1:{NFSU2_TR(0x5b27c1);
__builtin_memmove((R+24),(R+4),4);
}
B5b27c3:{NFSU2_TR(0x5b27c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b27c8ull));
TAIL_STATIC(0x5b0320u,5b0);
}
B5b27c8:L5b27c8:{c.instructions+=2;NFSU2_TR(0x5b27c8);
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
B5b27cd:{NFSU2_TR(0x5b27cd);
if(r1(R+518)){{goto L5b27d8;}}
}
B5b27cf:L5b27cf:{c.instructions+=2;NFSU2_TR(0x5b27cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b27d0:{NFSU2_TR(0x5b27d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b27d5ull));
TAIL_STATIC(0x440540u,440);
}
B5b27d5:L5b27d5:{c.instructions+=1;NFSU2_TR(0x5b27d5);
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
B5b27d8:L5b27d8:{c.instructions+=3;NFSU2_TR(0x5b27d8);
__builtin_memmove((R+0),(R+24),4);
}
B5b27da:{NFSU2_TR(0x5b27da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b27db:{NFSU2_TR(0x5b27db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b27e0:L5b27e0:{c.instructions+=3;NFSU2_TR(0x5b27e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b27e1:{NFSU2_TR(0x5b27e1);
__builtin_memmove((R+24),(R+4),4);
}
B5b27e3:{NFSU2_TR(0x5b27e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b27e8ull));
TAIL_STATIC(0x5b0370u,5b0);
}
B5b27e8:L5b27e8:{c.instructions+=2;NFSU2_TR(0x5b27e8);
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
B5b27ed:{NFSU2_TR(0x5b27ed);
if(r1(R+518)){{goto L5b27f8;}}
}
B5b27ef:L5b27ef:{c.instructions+=2;NFSU2_TR(0x5b27ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b27f0:{NFSU2_TR(0x5b27f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b27f5ull));
TAIL_STATIC(0x575630u,575);
}
B5b27f5:L5b27f5:{c.instructions+=1;NFSU2_TR(0x5b27f5);
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
B5b27f8:L5b27f8:{c.instructions+=3;NFSU2_TR(0x5b27f8);
__builtin_memmove((R+0),(R+24),4);
}
B5b27fa:{NFSU2_TR(0x5b27fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b27fb:{NFSU2_TR(0x5b27fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b2800:L5b2800:{c.instructions+=14;NFSU2_TR(0x5b2800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5b2803:{NFSU2_TR(0x5b2803);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2804:{NFSU2_TR(0x5b2804);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2805:{NFSU2_TR(0x5b2805);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b2809:{NFSU2_TR(0x5b2809);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b280b:{NFSU2_TR(0x5b280b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b280d:{NFSU2_TR(0x5b280d);
__builtin_memmove((R+24),(R+4),4);
}
B5b280f:{NFSU2_TR(0x5b280f);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b2813:{NFSU2_TR(0x5b2813);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2814:{NFSU2_TR(0x5b2814);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b2818:{NFSU2_TR(0x5b2818);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2819:{NFSU2_TR(0x5b2819);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b281a:{NFSU2_TR(0x5b281a);
__builtin_memmove((R+4),(R+24),4);
}
B5b281c:{NFSU2_TR(0x5b281c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2821ull));
TAIL_STATIC(0x5aca50u,5ac);
}
B5b2821:L5b2821:{c.instructions+=4;NFSU2_TR(0x5b2821);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2824:{NFSU2_TR(0x5b2824);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2825:{NFSU2_TR(0x5b2825);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2826:{NFSU2_TR(0x5b2826);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b282bull));
TAIL_STATIC(0x59ae40u,59a);
}
B5b282b:L5b282b:{c.instructions+=3;NFSU2_TR(0x5b282b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b282e:{NFSU2_TR(0x5b282e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b2830:{NFSU2_TR(0x5b2830);
if(r1(R+518)){{goto L5b284f;}}
}
B5b2832:L5b2832:{c.instructions+=5;NFSU2_TR(0x5b2832);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2836:{NFSU2_TR(0x5b2836);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b283a:{NFSU2_TR(0x5b283a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b283c:{NFSU2_TR(0x5b283c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b283f:{NFSU2_TR(0x5b283f);
if(r1(R+514)){{goto L5b284f;}}
}
B5b2841:L5b2841:{c.instructions+=3;NFSU2_TR(0x5b2841);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2845:{NFSU2_TR(0x5b2845);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b284b:{NFSU2_TR(0x5b284b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b284f:L5b284f:{c.instructions+=9;NFSU2_TR(0x5b284f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2851:{NFSU2_TR(0x5b2851);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2853:{NFSU2_TR(0x5b2853);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b2857:{NFSU2_TR(0x5b2857);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2858:{NFSU2_TR(0x5b2858);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b285c:{NFSU2_TR(0x5b285c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b285d:{NFSU2_TR(0x5b285d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b285e:{NFSU2_TR(0x5b285e);
__builtin_memmove((R+4),(R+24),4);
}
B5b2860:{NFSU2_TR(0x5b2860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2865ull));
TAIL_STATIC(0x5b09a0u,5b0);
}
B5b2865:L5b2865:{c.instructions+=2;NFSU2_TR(0x5b2865);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b2868:{NFSU2_TR(0x5b2868);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b291f;}}
}
B5b286e:L5b286e:{c.instructions+=2;NFSU2_TR(0x5b286e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b2871:{NFSU2_TR(0x5b2871);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5b291f;}}
}
B5b2877:L5b2877:{c.instructions+=5;NFSU2_TR(0x5b2877);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b287b:{NFSU2_TR(0x5b287b);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b287d:{NFSU2_TR(0x5b287d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2881:{NFSU2_TR(0x5b2881);
__builtin_memmove((R+4),(R+24),4);
}
B5b2883:{NFSU2_TR(0x5b2883);
if(r1(R+518)){{goto L5b28fc;}}
}
B5b2885:L5b2885:{c.instructions+=3;NFSU2_TR(0x5b2885);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2886:{NFSU2_TR(0x5b2886);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2887:{NFSU2_TR(0x5b2887);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b288cull));
TAIL_STATIC(0x59b5c0u,59b);
}
B5b288c:L5b288c:{c.instructions+=6;NFSU2_TR(0x5b288c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2890:{NFSU2_TR(0x5b2890);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2894:{NFSU2_TR(0x5b2894);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2895:{NFSU2_TR(0x5b2895);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2896:{NFSU2_TR(0x5b2896);
__builtin_memmove((R+4),(R+24),4);
}
B5b2898:{NFSU2_TR(0x5b2898);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b289dull));
TAIL_STATIC(0x59b5c0u,59b);
}
B5b289d:L5b289d:{c.instructions+=7;NFSU2_TR(0x5b289d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b28a1:{NFSU2_TR(0x5b28a1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b28a2:{NFSU2_TR(0x5b28a2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b28a6:{NFSU2_TR(0x5b28a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b28aa:{NFSU2_TR(0x5b28aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b28ab:{NFSU2_TR(0x5b28ab);
__builtin_memmove((R+4),(R+24),4);
}
B5b28ad:{NFSU2_TR(0x5b28ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b28b2ull));
TAIL_STATIC(0x59b5c0u,59b);
}
B5b28b2:L5b28b2:{c.instructions+=6;NFSU2_TR(0x5b28b2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b28b6:{NFSU2_TR(0x5b28b6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b28ba:{NFSU2_TR(0x5b28ba);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b28bc:{NFSU2_TR(0x5b28bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b28be:{NFSU2_TR(0x5b28be);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b28c1:{NFSU2_TR(0x5b28c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b28d1;}}
}
B5b28c3:L5b28c3:{c.instructions+=4;NFSU2_TR(0x5b28c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b28c7:{NFSU2_TR(0x5b28c7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b28cb:{NFSU2_TR(0x5b28cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b28cf:{NFSU2_TR(0x5b28cf);
{goto L5b28d3;}
}
B5b28d1:L5b28d1:{c.instructions+=1;NFSU2_TR(0x5b28d1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b28d3:L5b28d3:{c.instructions+=11;NFSU2_TR(0x5b28d3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b28d7:{NFSU2_TR(0x5b28d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b28db:{NFSU2_TR(0x5b28db);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b28df:{NFSU2_TR(0x5b28df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b28e0:{NFSU2_TR(0x5b28e0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b28e4:{NFSU2_TR(0x5b28e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b28e5:{NFSU2_TR(0x5b28e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b28e9:{NFSU2_TR(0x5b28e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b28ea:{NFSU2_TR(0x5b28ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b28eb:{NFSU2_TR(0x5b28eb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b28ec:{NFSU2_TR(0x5b28ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b28f1ull));
TAIL_STATIC(0x401790u,401);
}
B5b28f1:L5b28f1:{c.instructions+=5;NFSU2_TR(0x5b28f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5b28f4:{NFSU2_TR(0x5b28f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b28f5:{NFSU2_TR(0x5b28f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b28f6:{NFSU2_TR(0x5b28f6);
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
B5b28f9:{NFSU2_TR(0x5b28f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b28fc:L5b28fc:{c.instructions+=4;NFSU2_TR(0x5b28fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b28fe:{NFSU2_TR(0x5b28fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b28ff:{NFSU2_TR(0x5b28ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2900:{NFSU2_TR(0x5b2900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2905ull));
TAIL_STATIC(0x59b4a0u,59b);
}
B5b2905:L5b2905:{c.instructions+=6;NFSU2_TR(0x5b2905);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2909:{NFSU2_TR(0x5b2909);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b290d:{NFSU2_TR(0x5b290d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b290f:{NFSU2_TR(0x5b290f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2910:{NFSU2_TR(0x5b2910);
__builtin_memmove((R+4),(R+24),4);
}
B5b2912:{NFSU2_TR(0x5b2912);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2917ull));
TAIL_STATIC(0x59b5c0u,59b);
}
B5b2917:L5b2917:{c.instructions+=4;NFSU2_TR(0x5b2917);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b2918:{NFSU2_TR(0x5b2918);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b2919:{NFSU2_TR(0x5b2919);
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
B5b291c:{NFSU2_TR(0x5b291c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b291f:L5b291f:{c.instructions+=4;NFSU2_TR(0x5b291f);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b2923:{NFSU2_TR(0x5b2923);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2925:{NFSU2_TR(0x5b2925);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2929:{NFSU2_TR(0x5b2929);
if(r1(R+518)){{goto L5b2950;}}
}
B5b292b:L5b292b:{c.instructions+=10;NFSU2_TR(0x5b292b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b292f:{NFSU2_TR(0x5b292f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2933:{NFSU2_TR(0x5b2933);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2934:{NFSU2_TR(0x5b2934);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2938:{NFSU2_TR(0x5b2938);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2939:{NFSU2_TR(0x5b2939);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b293d:{NFSU2_TR(0x5b293d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b293e:{NFSU2_TR(0x5b293e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b293f:{NFSU2_TR(0x5b293f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2940:{NFSU2_TR(0x5b2940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2945ull));
TAIL_STATIC(0x401790u,401);
}
B5b2945:L5b2945:{c.instructions+=5;NFSU2_TR(0x5b2945);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5b2948:{NFSU2_TR(0x5b2948);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b2949:{NFSU2_TR(0x5b2949);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b294a:{NFSU2_TR(0x5b294a);
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
B5b294d:{NFSU2_TR(0x5b294d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b2950:L5b2950:{c.instructions+=10;NFSU2_TR(0x5b2950);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2954:{NFSU2_TR(0x5b2954);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2958:{NFSU2_TR(0x5b2958);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2959:{NFSU2_TR(0x5b2959);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b295d:{NFSU2_TR(0x5b295d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b295e:{NFSU2_TR(0x5b295e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2962:{NFSU2_TR(0x5b2962);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2963:{NFSU2_TR(0x5b2963);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2964:{NFSU2_TR(0x5b2964);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2965:{NFSU2_TR(0x5b2965);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b296aull));
TAIL_STATIC(0x401790u,401);
}
B5b296a:L5b296a:{c.instructions+=5;NFSU2_TR(0x5b296a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5b296d:{NFSU2_TR(0x5b296d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b296e:{NFSU2_TR(0x5b296e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b296f:{NFSU2_TR(0x5b296f);
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
B5b2972:{NFSU2_TR(0x5b2972);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b2980:L5b2980:{c.instructions+=11;NFSU2_TR(0x5b2980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5b2983:{NFSU2_TR(0x5b2983);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2984:{NFSU2_TR(0x5b2984);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5b2988:{NFSU2_TR(0x5b2988);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2989:{NFSU2_TR(0x5b2989);
__builtin_memmove((R+24),(R+4),4);
}
B5b298b:{NFSU2_TR(0x5b298b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b298e:{NFSU2_TR(0x5b298e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b298f:{NFSU2_TR(0x5b298f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2990:{NFSU2_TR(0x5b2990);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2991:{NFSU2_TR(0x5b2991);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b2995:{NFSU2_TR(0x5b2995);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b299aull));
TAIL_STATIC(0x59ae40u,59a);
}
B5b299a:L5b299a:{c.instructions+=4;NFSU2_TR(0x5b299a);
__builtin_memmove((R+28),(R+0),4);
}
B5b299c:{NFSU2_TR(0x5b299c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b299f:{NFSU2_TR(0x5b299f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b29a1:{NFSU2_TR(0x5b29a1);
if(r1(R+518)){{goto L5b2b8c;}}
}
B5b29a7:L5b29a7:{c.instructions+=11;NFSU2_TR(0x5b29a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b29a8:{NFSU2_TR(0x5b29a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b29ac:{NFSU2_TR(0x5b29ac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b29ae:{NFSU2_TR(0x5b29ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b29af:{NFSU2_TR(0x5b29af);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b29b3:{NFSU2_TR(0x5b29b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b29b4:{NFSU2_TR(0x5b29b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b29b8:{NFSU2_TR(0x5b29b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b29b9:{NFSU2_TR(0x5b29b9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b29ba:{NFSU2_TR(0x5b29ba);
__builtin_memmove((R+4),(R+24),4);
}
B5b29bc:{NFSU2_TR(0x5b29bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b29c1ull));
TAIL_STATIC(0x5aca50u,5ac);
}
B5b29c1:L5b29c1:{c.instructions+=4;NFSU2_TR(0x5b29c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b29c2:{NFSU2_TR(0x5b29c2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b29c3:{NFSU2_TR(0x5b29c3);
__builtin_memmove((R+4),(R+24),4);
}
B5b29c5:{NFSU2_TR(0x5b29c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b29caull));
TAIL_STATIC(0x5a79f0u,5a7);
}
B5b29ca:L5b29ca:{c.instructions+=3;NFSU2_TR(0x5b29ca);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b29ce:{NFSU2_TR(0x5b29ce);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b29d1:{NFSU2_TR(0x5b29d1);
if(r1(R+518)){{goto L5b29d8;}}
}
B5b29d3:L5b29d3:{c.instructions+=2;NFSU2_TR(0x5b29d3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b29d6:{NFSU2_TR(0x5b29d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b29eb;}}
}
B5b29d8:L5b29d8:{c.instructions+=8;NFSU2_TR(0x5b29d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b29d9:{NFSU2_TR(0x5b29d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b29dd:{NFSU2_TR(0x5b29dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b29de:{NFSU2_TR(0x5b29de);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b29e2:{NFSU2_TR(0x5b29e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b29e3:{NFSU2_TR(0x5b29e3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b29e4:{NFSU2_TR(0x5b29e4);
__builtin_memmove((R+4),(R+24),4);
}
B5b29e6:{NFSU2_TR(0x5b29e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b29ebull));
TAIL_STATIC(0x5ace80u,5ac);
}
B5b29eb:L5b29eb:{c.instructions+=5;NFSU2_TR(0x5b29eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b29ee:{NFSU2_TR(0x5b29ee);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b29f0:{NFSU2_TR(0x5b29f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b29f4:{NFSU2_TR(0x5b29f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b29f8:{NFSU2_TR(0x5b29f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2a69;}}
}
B5b29fa:L5b29fa:{c.instructions+=3;NFSU2_TR(0x5b29fa);
__builtin_memmove((R+0),(R+20),4);
}
B5b29fc:{NFSU2_TR(0x5b29fc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5b29ff:{NFSU2_TR(0x5b29ff);
if(r1(R+518)){{goto L5b2a3a;}}
}
B5b2a01:L5b2a01:{c.instructions+=2;NFSU2_TR(0x5b2a01);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5b2a04:{NFSU2_TR(0x5b2a04);
if(r1(R+518)){{goto L5b2a3a;}}
}
B5b2a06:L5b2a06:{c.instructions+=2;NFSU2_TR(0x5b2a06);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5b2a09:{NFSU2_TR(0x5b2a09);
if(r1(R+518)){{goto L5b2a3a;}}
}
B5b2a0b:L5b2a0b:{c.instructions+=4;NFSU2_TR(0x5b2a0b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2a0f:{NFSU2_TR(0x5b2a0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2a13:{NFSU2_TR(0x5b2a13);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b2a17:{NFSU2_TR(0x5b2a17);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5b2a19:L5b2a19:{c.instructions+=7;NFSU2_TR(0x5b2a19);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b2a1c:{NFSU2_TR(0x5b2a1c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b2a20:{NFSU2_TR(0x5b2a20);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2a24:{NFSU2_TR(0x5b2a24);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b2a26:{NFSU2_TR(0x5b2a26);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2a28:{NFSU2_TR(0x5b2a28);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b2a2b:{NFSU2_TR(0x5b2a2b);
if(r1(R+514)){{goto L5b2a33;}}
}
B5b2a2d:L5b2a2d:{c.instructions+=2;NFSU2_TR(0x5b2a2d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b2a2f:{NFSU2_TR(0x5b2a2f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2a33:L5b2a33:{c.instructions+=2;NFSU2_TR(0x5b2a33);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2a35:{NFSU2_TR(0x5b2a35);
{goto L5b2b37;}
}
B5b2a3a:L5b2a3a:{c.instructions+=9;NFSU2_TR(0x5b2a3a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2a3e:{NFSU2_TR(0x5b2a3e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b2a42:{NFSU2_TR(0x5b2a42);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b2a45:{NFSU2_TR(0x5b2a45);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5b2a49:{NFSU2_TR(0x5b2a49);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2a4d:{NFSU2_TR(0x5b2a4d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b2a4f:{NFSU2_TR(0x5b2a4f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2a51:{NFSU2_TR(0x5b2a51);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2a54:{NFSU2_TR(0x5b2a54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2a5c;}}
}
B5b2a56:L5b2a56:{c.instructions+=2;NFSU2_TR(0x5b2a56);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b2a58:{NFSU2_TR(0x5b2a58);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2a5c:L5b2a5c:{c.instructions+=4;NFSU2_TR(0x5b2a5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2a60:{NFSU2_TR(0x5b2a60);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2a62:{NFSU2_TR(0x5b2a62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5b2a64:{NFSU2_TR(0x5b2a64);
{goto L5b2b37;}
}
B5b2a69:L5b2a69:{c.instructions+=2;NFSU2_TR(0x5b2a69);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2a6b:{NFSU2_TR(0x5b2a6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2a95;}}
}
B5b2a6d:L5b2a6d:{c.instructions+=10;NFSU2_TR(0x5b2a6d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2a71:{NFSU2_TR(0x5b2a71);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b2a75:{NFSU2_TR(0x5b2a75);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5b2a77:{NFSU2_TR(0x5b2a77);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b2a7a:{NFSU2_TR(0x5b2a7a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b2a7e:{NFSU2_TR(0x5b2a7e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2a82:{NFSU2_TR(0x5b2a82);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b2a84:{NFSU2_TR(0x5b2a84);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2a86:{NFSU2_TR(0x5b2a86);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2a89:{NFSU2_TR(0x5b2a89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2a91;}}
}
B5b2a8b:L5b2a8b:{c.instructions+=2;NFSU2_TR(0x5b2a8b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b2a8d:{NFSU2_TR(0x5b2a8d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2a91:L5b2a91:{c.instructions+=2;NFSU2_TR(0x5b2a91);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2a93:{NFSU2_TR(0x5b2a93);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b2a19u);}goto L5b2a19;}
}
B5b2a95:L5b2a95:{c.instructions+=2;NFSU2_TR(0x5b2a95);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2a97:{NFSU2_TR(0x5b2a97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2af0;}}
}
B5b2a99:L5b2a99:{c.instructions+=3;NFSU2_TR(0x5b2a99);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2a9d:{NFSU2_TR(0x5b2a9d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2a9e:{NFSU2_TR(0x5b2a9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2aa3ull));
TAIL_STATIC(0x59b6c0u,59b);
}
B5b2aa3:L5b2aa3:{c.instructions+=5;NFSU2_TR(0x5b2aa3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b2aa9:{NFSU2_TR(0x5b2aa9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2aad:{NFSU2_TR(0x5b2aad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2aaf:{NFSU2_TR(0x5b2aaf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2ab2:{NFSU2_TR(0x5b2ab2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2ad2;}}
}
B5b2ab4:L5b2ab4:{c.instructions+=8;NFSU2_TR(0x5b2ab4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2ab8:{NFSU2_TR(0x5b2ab8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2abc:{NFSU2_TR(0x5b2abc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5b2abe:{NFSU2_TR(0x5b2abe);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b2ac1:{NFSU2_TR(0x5b2ac1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2ac2:{NFSU2_TR(0x5b2ac2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2ac5:{NFSU2_TR(0x5b2ac5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2ac6:{NFSU2_TR(0x5b2ac6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2acbull));
TAIL_STATIC(0x401070u,401);
}
B5b2acb:L5b2acb:{c.instructions+=3;NFSU2_TR(0x5b2acb);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2acd:{NFSU2_TR(0x5b2acd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b2ad0:{NFSU2_TR(0x5b2ad0);
{goto L5b2b37;}
}
B5b2ad2:L5b2ad2:{c.instructions+=6;NFSU2_TR(0x5b2ad2);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b2ad5:{NFSU2_TR(0x5b2ad5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2ad9:{NFSU2_TR(0x5b2ad9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2ada:{NFSU2_TR(0x5b2ada);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2add:{NFSU2_TR(0x5b2add);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2ade:{NFSU2_TR(0x5b2ade);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2ae3ull));
TAIL_STATIC(0x401050u,401);
}
B5b2ae3:L5b2ae3:{c.instructions+=5;NFSU2_TR(0x5b2ae3);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2ae5:{NFSU2_TR(0x5b2ae5);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2ae9:{NFSU2_TR(0x5b2ae9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b2aec:{NFSU2_TR(0x5b2aec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5b2aee:{NFSU2_TR(0x5b2aee);
{goto L5b2b37;}
}
B5b2af0:L5b2af0:{c.instructions+=2;NFSU2_TR(0x5b2af0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2af2:{NFSU2_TR(0x5b2af2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2b29;}}
}
B5b2af4:L5b2af4:{c.instructions+=7;NFSU2_TR(0x5b2af4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2af8:{NFSU2_TR(0x5b2af8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2afc:{NFSU2_TR(0x5b2afc);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b2aff:{NFSU2_TR(0x5b2aff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2b00:{NFSU2_TR(0x5b2b00);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2b03:{NFSU2_TR(0x5b2b03);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2b04:{NFSU2_TR(0x5b2b04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2b09ull));
TAIL_STATIC(0x401050u,401);
}
B5b2b09:L5b2b09:{c.instructions+=8;NFSU2_TR(0x5b2b09);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2b0b:{NFSU2_TR(0x5b2b0b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2b0f:{NFSU2_TR(0x5b2b0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2b13:{NFSU2_TR(0x5b2b13);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b2b16:{NFSU2_TR(0x5b2b16);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b2b19:{NFSU2_TR(0x5b2b19);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2b1c:{NFSU2_TR(0x5b2b1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2b1d:{NFSU2_TR(0x5b2b1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2b22ull));
TAIL_STATIC(0x401070u,401);
}
B5b2b22:L5b2b22:{c.instructions+=3;NFSU2_TR(0x5b2b22);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2b24:{NFSU2_TR(0x5b2b24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b2b27:{NFSU2_TR(0x5b2b27);
{goto L5b2b37;}
}
B5b2b29:L5b2b29:{c.instructions+=2;NFSU2_TR(0x5b2b29);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2b2b:{NFSU2_TR(0x5b2b2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2b37;}}
}
B5b2b2d:L5b2b2d:{c.instructions+=4;NFSU2_TR(0x5b2b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2b30:{NFSU2_TR(0x5b2b30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5b2b32:{NFSU2_TR(0x5b2b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2b35:{NFSU2_TR(0x5b2b35);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5b2b37:L5b2b37:{c.instructions+=3;NFSU2_TR(0x5b2b37);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b2b3b:{NFSU2_TR(0x5b2b3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2b3d:{NFSU2_TR(0x5b2b3d);
if(r1(R+518)){{goto L5b2b76;}}
}
B5b2b3f:L5b2b3f:{c.instructions+=7;NFSU2_TR(0x5b2b3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b2b41:{NFSU2_TR(0x5b2b41);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b2b45:{NFSU2_TR(0x5b2b45);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2b47:{NFSU2_TR(0x5b2b47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2b48:{NFSU2_TR(0x5b2b48);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2b49:{NFSU2_TR(0x5b2b49);
__builtin_memmove((R+4),(R+28),4);
}
B5b2b4b:{NFSU2_TR(0x5b2b4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2b50ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b2800u);}goto L5b2800;}
}
B5b2b50:L5b2b50:{c.instructions+=7;NFSU2_TR(0x5b2b50);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2b52:{NFSU2_TR(0x5b2b52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b2b54:{NFSU2_TR(0x5b2b54);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2b56:{NFSU2_TR(0x5b2b56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2b57:{NFSU2_TR(0x5b2b57);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2b58:{NFSU2_TR(0x5b2b58);
__builtin_memmove((R+4),(R+28),4);
}
B5b2b5a:{NFSU2_TR(0x5b2b5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2b5full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b2800u);}goto L5b2800;}
}
B5b2b5f:L5b2b5f:{c.instructions+=5;NFSU2_TR(0x5b2b5f);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b2b61:{NFSU2_TR(0x5b2b61);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b2b63:{NFSU2_TR(0x5b2b63);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2b65:{NFSU2_TR(0x5b2b65);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b2b68:{NFSU2_TR(0x5b2b68);
if(r1(R+514)){{goto L5b2b74;}}
}
B5b2b6a:L5b2b6a:{c.instructions+=5;NFSU2_TR(0x5b2b6a);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2b6c:{NFSU2_TR(0x5b2b6c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b2b6e:{NFSU2_TR(0x5b2b6e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2b70:{NFSU2_TR(0x5b2b70);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2b72:{NFSU2_TR(0x5b2b72);
{goto L5b2b76;}
}
B5b2b74:L5b2b74:{c.instructions+=1;NFSU2_TR(0x5b2b74);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b2b76:L5b2b76:{c.instructions+=5;NFSU2_TR(0x5b2b76);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2b78:{NFSU2_TR(0x5b2b78);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b2b7a:{NFSU2_TR(0x5b2b7a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2b7c:{NFSU2_TR(0x5b2b7c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b2b7f:{NFSU2_TR(0x5b2b7f);
if(r1(R+514)){{goto L5b2b8b;}}
}
B5b2b81:L5b2b81:{c.instructions+=3;NFSU2_TR(0x5b2b81);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2b83:{NFSU2_TR(0x5b2b83);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b2b89:{NFSU2_TR(0x5b2b89);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2b8b:L5b2b8b:{c.instructions+=1;NFSU2_TR(0x5b2b8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b2b8c:L5b2b8c:{c.instructions+=5;NFSU2_TR(0x5b2b8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b2b8d:{NFSU2_TR(0x5b2b8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b2b8e:{NFSU2_TR(0x5b2b8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b2b8f:{NFSU2_TR(0x5b2b8f);
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
B5b2b92:{NFSU2_TR(0x5b2b92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b2ba0:L5b2ba0:{c.instructions+=11;NFSU2_TR(0x5b2ba0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2ba4:{NFSU2_TR(0x5b2ba4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2ba8:{NFSU2_TR(0x5b2ba8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2ba9:{NFSU2_TR(0x5b2ba9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2baa:{NFSU2_TR(0x5b2baa);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b2bae:{NFSU2_TR(0x5b2bae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2baf:{NFSU2_TR(0x5b2baf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2bb3:{NFSU2_TR(0x5b2bb3);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b2bb7:{NFSU2_TR(0x5b2bb7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2bb8:{NFSU2_TR(0x5b2bb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2bb9:{NFSU2_TR(0x5b2bb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2bbeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b2980u);}goto L5b2980;}
}
B5b2bbe:L5b2bbe:{c.instructions+=2;NFSU2_TR(0x5b2bbe);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2bc2:{NFSU2_TR(0x5b2bc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b2bd0:L5b2bd0:{c.instructions+=11;NFSU2_TR(0x5b2bd0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2bd4:{NFSU2_TR(0x5b2bd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2bd8:{NFSU2_TR(0x5b2bd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2bd9:{NFSU2_TR(0x5b2bd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2bda:{NFSU2_TR(0x5b2bda);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b2bde:{NFSU2_TR(0x5b2bde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2bdf:{NFSU2_TR(0x5b2bdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2be3:{NFSU2_TR(0x5b2be3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b2be7:{NFSU2_TR(0x5b2be7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2be8:{NFSU2_TR(0x5b2be8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2be9:{NFSU2_TR(0x5b2be9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2beeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b2980u);}goto L5b2980;}
}
B5b2bee:L5b2bee:{c.instructions+=2;NFSU2_TR(0x5b2bee);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2bf2:{NFSU2_TR(0x5b2bf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b2c00:L5b2c00:{c.instructions+=9;NFSU2_TR(0x5b2c00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B5b2c03:{NFSU2_TR(0x5b2c03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2c04:{NFSU2_TR(0x5b2c04);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b2c08:{NFSU2_TR(0x5b2c08);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2c09:{NFSU2_TR(0x5b2c09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2c0a:{NFSU2_TR(0x5b2c0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2c0b:{NFSU2_TR(0x5b2c0b);
__builtin_memmove((R+24),(R+4),4);
}
B5b2c0d:{NFSU2_TR(0x5b2c0d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b2c0f:{NFSU2_TR(0x5b2c0f);
}
B5b2c10:L5b2c10:{c.instructions+=4;NFSU2_TR(0x5b2c10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2c11:{NFSU2_TR(0x5b2c11);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2c12:{NFSU2_TR(0x5b2c12);
__builtin_memmove((R+4),(R+24),4);
}
B5b2c14:{NFSU2_TR(0x5b2c14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2c19ull));
TAIL_STATIC(0x5a7da0u,5a7);
}
B5b2c19:L5b2c19:{c.instructions+=4;NFSU2_TR(0x5b2c19);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2c1d:{NFSU2_TR(0x5b2c1d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5b2c1e:{NFSU2_TR(0x5b2c1e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b2c21:{NFSU2_TR(0x5b2c21);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b2c10u);}goto L5b2c10;}}
}
B5b2c23:L5b2c23:{c.instructions+=15;NFSU2_TR(0x5b2c23);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b2c27:{NFSU2_TR(0x5b2c27);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2c2b:{NFSU2_TR(0x5b2c2b);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b2c2f:{NFSU2_TR(0x5b2c2f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5b2c31:{NFSU2_TR(0x5b2c31);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2c32:{NFSU2_TR(0x5b2c32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2c33:{NFSU2_TR(0x5b2c33);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b2c37:{NFSU2_TR(0x5b2c37);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b2c3b:{NFSU2_TR(0x5b2c3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2c3c:{NFSU2_TR(0x5b2c3c);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2c40:{NFSU2_TR(0x5b2c40);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b2c44:{NFSU2_TR(0x5b2c44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2c45:{NFSU2_TR(0x5b2c45);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2c46:{NFSU2_TR(0x5b2c46);
__builtin_memmove((R+4),(R+24),4);
}
B5b2c48:{NFSU2_TR(0x5b2c48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2c4dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b2980u);}goto L5b2980;}
}
B5b2c4d:L5b2c4d:{c.instructions+=5;NFSU2_TR(0x5b2c4d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2c51:{NFSU2_TR(0x5b2c51);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b2c55:{NFSU2_TR(0x5b2c55);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2c57:{NFSU2_TR(0x5b2c57);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2c5a:{NFSU2_TR(0x5b2c5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2c62;}}
}
B5b2c5c:L5b2c5c:{c.instructions+=2;NFSU2_TR(0x5b2c5c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2c60:{NFSU2_TR(0x5b2c60);
{goto L5b2c66;}
}
B5b2c62:L5b2c62:{c.instructions+=1;NFSU2_TR(0x5b2c62);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2c66:L5b2c66:{c.instructions+=5;NFSU2_TR(0x5b2c66);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2c6a:{NFSU2_TR(0x5b2c6a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b2c6c:{NFSU2_TR(0x5b2c6c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2c6e:{NFSU2_TR(0x5b2c6e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b2c71:{NFSU2_TR(0x5b2c71);
if(r1(R+514)){{goto L5b2c79;}}
}
B5b2c73:L5b2c73:{c.instructions+=2;NFSU2_TR(0x5b2c73);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b2c75:{NFSU2_TR(0x5b2c75);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2c79:L5b2c79:{c.instructions+=6;NFSU2_TR(0x5b2c79);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2c7d:{NFSU2_TR(0x5b2c7d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2c81:{NFSU2_TR(0x5b2c81);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b2c87:{NFSU2_TR(0x5b2c87);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2c89:{NFSU2_TR(0x5b2c89);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b2c8c:{NFSU2_TR(0x5b2c8c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b2ec3;}}
}
B5b2c92:L5b2c92:{c.instructions+=6;NFSU2_TR(0x5b2c92);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2c96:{NFSU2_TR(0x5b2c96);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5b2c98:{NFSU2_TR(0x5b2c98);
{u32 ea_=u32(u32(7996244u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b2c9e:{NFSU2_TR(0x5b2c9e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2ca0:{NFSU2_TR(0x5b2ca0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2ca3:{NFSU2_TR(0x5b2ca3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2db8;}}
}
B5b2ca9:L5b2ca9:{c.instructions+=3;NFSU2_TR(0x5b2ca9);
w4(R+4,u32(0x7fc674ull));
}
B5b2cae:{NFSU2_TR(0x5b2cae);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b2cb2:{NFSU2_TR(0x5b2cb2);
{goto L5b2cc0;}
}
B5b2cb4:L5b2cb4:{c.instructions+=2;NFSU2_TR(0x5b2cb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b2cb8:{NFSU2_TR(0x5b2cb8);
{goto L5b2cc0;}
}
B5b2cc0:L5b2cc0:{c.instructions+=2;NFSU2_TR(0x5b2cc0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fc6c4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fc6c4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b2cc6:{NFSU2_TR(0x5b2cc6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b2db8;}}
}
B5b2ccc:L5b2ccc:{c.instructions+=3;NFSU2_TR(0x5b2ccc);
u8 U[5];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b2cd0:{NFSU2_TR(0x5b2cd0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2cd2:{NFSU2_TR(0x5b2cd2);
if(r1(R+518)){{goto L5b2db8;}}
}
B5b2cd8:L5b2cd8:{c.instructions+=5;NFSU2_TR(0x5b2cd8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fc698ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fc698ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b2cde:{NFSU2_TR(0x5b2cde);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2ce2:{NFSU2_TR(0x5b2ce2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b2ce4:{NFSU2_TR(0x5b2ce4);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2ce8:{NFSU2_TR(0x5b2ce8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b2d27;}}
}
B5b2cea:L5b2cea:{c.instructions+=10;NFSU2_TR(0x5b2cea);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2cee:{NFSU2_TR(0x5b2cee);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b2cf0:{NFSU2_TR(0x5b2cf0);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b2cf4:{NFSU2_TR(0x5b2cf4);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2cf8:{NFSU2_TR(0x5b2cf8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b2cfe:{NFSU2_TR(0x5b2cfe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2d00:{NFSU2_TR(0x5b2d00);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b2d04:{NFSU2_TR(0x5b2d04);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2d07:{NFSU2_TR(0x5b2d07);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2d09:{NFSU2_TR(0x5b2d09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2d1a;}}
}
B5b2d0b:L5b2d0b:{c.instructions+=2;NFSU2_TR(0x5b2d0b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b2d0e:{NFSU2_TR(0x5b2d0e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b2d27;}}
}
B5b2d10:L5b2d10:{c.instructions+=3;NFSU2_TR(0x5b2d10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2d14:{NFSU2_TR(0x5b2d14);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b2d18:{NFSU2_TR(0x5b2d18);
{goto L5b2d27;}
}
B5b2d1a:L5b2d1a:{c.instructions+=2;NFSU2_TR(0x5b2d1a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2d1d:{NFSU2_TR(0x5b2d1d);
if(r1(R+518)){{goto L5b2d27;}}
}
B5b2d1f:L5b2d1f:{c.instructions+=2;NFSU2_TR(0x5b2d1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2d23:{NFSU2_TR(0x5b2d23);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b2d27:L5b2d27:{c.instructions+=2;NFSU2_TR(0x5b2d27);
w4(R+20,u32(0-u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B5b2d29:{NFSU2_TR(0x5b2d29);
if(r1(R+519)){{goto L5b2d36;}}
}
B5b2d2b:L5b2d2b:{c.instructions+=3;NFSU2_TR(0x5b2d2b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5b2d2c:{NFSU2_TR(0x5b2d2c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b2d2f:{NFSU2_TR(0x5b2d2f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b2d36;}}
}
B5b2d31:L5b2d31:{c.instructions+=1;NFSU2_TR(0x5b2d31);
w4(R+20,u32(0x1ull));
}
B5b2d36:L5b2d36:{c.instructions+=3;NFSU2_TR(0x5b2d36);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B5b2d38:{NFSU2_TR(0x5b2d38);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b2d3b:{NFSU2_TR(0x5b2d3b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b2da1;}}
}
B5b2d3d:L5b2d3d:{c.instructions+=2;NFSU2_TR(0x5b2d3d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5b2d3f:{NFSU2_TR(0x5b2d3f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b2da1;}}
}
B5b2d41:L5b2d41:{c.instructions+=9;NFSU2_TR(0x5b2d41);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2d43:{NFSU2_TR(0x5b2d43);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2d44:{NFSU2_TR(0x5b2d44);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b2d48:{NFSU2_TR(0x5b2d48);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2d49:{NFSU2_TR(0x5b2d49);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b2d4d:{NFSU2_TR(0x5b2d4d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2d4e:{NFSU2_TR(0x5b2d4e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2d4f:{NFSU2_TR(0x5b2d4f);
__builtin_memmove((R+4),(R+24),4);
}
B5b2d51:{NFSU2_TR(0x5b2d51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2d56ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b2980u);}goto L5b2980;}
}
B5b2d56:L5b2d56:{c.instructions+=7;NFSU2_TR(0x5b2d56);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2d5a:{NFSU2_TR(0x5b2d5a);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b2d5e:{NFSU2_TR(0x5b2d5e);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5b2d62:{NFSU2_TR(0x5b2d62);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b2d66:{NFSU2_TR(0x5b2d66);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2d68:{NFSU2_TR(0x5b2d68);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2d6b:{NFSU2_TR(0x5b2d6b);
if(r1(R+518)){{goto L5b2d73;}}
}
B5b2d6d:L5b2d6d:{c.instructions+=2;NFSU2_TR(0x5b2d6d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b2d6f:{NFSU2_TR(0x5b2d6f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2d73:L5b2d73:{c.instructions+=5;NFSU2_TR(0x5b2d73);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2d77:{NFSU2_TR(0x5b2d77);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b2d79:{NFSU2_TR(0x5b2d79);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2d7b:{NFSU2_TR(0x5b2d7b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b2d7e:{NFSU2_TR(0x5b2d7e);
if(r1(R+514)){{goto L5b2d86;}}
}
B5b2d80:L5b2d80:{c.instructions+=2;NFSU2_TR(0x5b2d80);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b2d82:{NFSU2_TR(0x5b2d82);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2d86:L5b2d86:{c.instructions+=9;NFSU2_TR(0x5b2d86);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2d8a:{NFSU2_TR(0x5b2d8a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5b2d8c:{NFSU2_TR(0x5b2d8c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b2d8e:{NFSU2_TR(0x5b2d8e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5b2d91:{NFSU2_TR(0x5b2d91);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b2d95:{NFSU2_TR(0x5b2d95);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b2d99:{NFSU2_TR(0x5b2d99);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2d9d:{NFSU2_TR(0x5b2d9d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2d9f:{NFSU2_TR(0x5b2d9f);
__builtin_memmove((R+4),(R+0),4);
}
B5b2da1:L5b2da1:{c.instructions+=6;NFSU2_TR(0x5b2da1);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2da5:{NFSU2_TR(0x5b2da5);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5b2da7:{NFSU2_TR(0x5b2da7);
{u32 ea_=u32(u32(7996244u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b2dad:{NFSU2_TR(0x5b2dad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2daf:{NFSU2_TR(0x5b2daf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2db2:{NFSU2_TR(0x5b2db2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b2cb4u);}goto L5b2cb4;}}
}
B5b2db8:L5b2db8:{c.instructions+=2;NFSU2_TR(0x5b2db8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b2dbb:{NFSU2_TR(0x5b2dbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2e02;}}
}
B5b2dbd:L5b2dbd:{c.instructions+=5;NFSU2_TR(0x5b2dbd);
w4(R+20,u32(0x224ull));
}
B5b2dc2:{NFSU2_TR(0x5b2dc2);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b2dc6:{NFSU2_TR(0x5b2dc6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b2dc8:{NFSU2_TR(0x5b2dc8);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+0))));
}
B5b2dca:{NFSU2_TR(0x5b2dca);
__builtin_memmove((R+12),(R+12),4);
}
B5b2dd0:L5b2dd0:{c.instructions+=6;NFSU2_TR(0x5b2dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b2dd3:{NFSU2_TR(0x5b2dd3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2dd4:{NFSU2_TR(0x5b2dd4);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2dd6:{NFSU2_TR(0x5b2dd6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2dd7:{NFSU2_TR(0x5b2dd7);
__builtin_memmove((R+4),(R+24),4);
}
B5b2dd9:{NFSU2_TR(0x5b2dd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2ddeull));
TAIL_STATIC(0x59b200u,59b);
}
B5b2dde:L5b2dde:{c.instructions+=9;NFSU2_TR(0x5b2dde);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2de2:{NFSU2_TR(0x5b2de2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5b2de6:{NFSU2_TR(0x5b2de6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B5b2de8:{NFSU2_TR(0x5b2de8);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b2dec:{NFSU2_TR(0x5b2dec);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5b2df0:{NFSU2_TR(0x5b2df0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5b2df1:{NFSU2_TR(0x5b2df1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b2df4:{NFSU2_TR(0x5b2df4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2df6:{NFSU2_TR(0x5b2df6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b2dd0u);}goto L5b2dd0;}}
}
B5b2df8:L5b2df8:{c.instructions+=6;NFSU2_TR(0x5b2df8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b2df9:{NFSU2_TR(0x5b2df9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b2dfa:{NFSU2_TR(0x5b2dfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b2dfb:{NFSU2_TR(0x5b2dfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b2dfc:{NFSU2_TR(0x5b2dfc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b2dff:{NFSU2_TR(0x5b2dff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b2e02:L5b2e02:{c.instructions+=2;NFSU2_TR(0x5b2e02);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b2e05:{NFSU2_TR(0x5b2e05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2ec3;}}
}
B5b2e0b:L5b2e0b:{c.instructions+=5;NFSU2_TR(0x5b2e0b);
w4(R+28,u32(0x200ull));
}
B5b2e10:{NFSU2_TR(0x5b2e10);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B5b2e14:{NFSU2_TR(0x5b2e14);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5b2e16:{NFSU2_TR(0x5b2e16);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B5b2e18:{NFSU2_TR(0x5b2e18);
{goto L5b2e20;}
}
B5b2e20:L5b2e20:{c.instructions+=3;NFSU2_TR(0x5b2e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2e26:{NFSU2_TR(0x5b2e26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b2e28:{NFSU2_TR(0x5b2e28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2e4c;}}
}
B5b2e2a:L5b2e2a:{c.instructions+=9;NFSU2_TR(0x5b2e2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b2e2c:{NFSU2_TR(0x5b2e2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2e2f:{NFSU2_TR(0x5b2e2f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5b2e35:{NFSU2_TR(0x5b2e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2e38:{NFSU2_TR(0x5b2e38);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2e39:{NFSU2_TR(0x5b2e39);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B5b2e3f:{NFSU2_TR(0x5b2e3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2e40:{NFSU2_TR(0x5b2e40);
u8 U[12];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5b2e47:{NFSU2_TR(0x5b2e47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2e4cull));
TAIL_STATIC(0x599d90u,599);
}
B5b2e4c:L5b2e4c:{c.instructions+=12;NFSU2_TR(0x5b2e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2e52:{NFSU2_TR(0x5b2e52);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b2e53:{NFSU2_TR(0x5b2e53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b2e59:{NFSU2_TR(0x5b2e59);
__builtin_memmove((R+4),(R+0),4);
}
B5b2e5b:{NFSU2_TR(0x5b2e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2e5e:{NFSU2_TR(0x5b2e5e);
{u32 ea_=u32(r4(R+0)+r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2e61:{NFSU2_TR(0x5b2e61);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5b2e62:{NFSU2_TR(0x5b2e62);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b2e64:{NFSU2_TR(0x5b2e64);
{u32 ea_=u32(r4(R+0)+r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b2e68:{NFSU2_TR(0x5b2e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b2e6e:{NFSU2_TR(0x5b2e6e);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2e72:{NFSU2_TR(0x5b2e72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2e93;}}
}
B5b2e74:L5b2e74:{c.instructions+=8;NFSU2_TR(0x5b2e74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2e77:{NFSU2_TR(0x5b2e77);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B5b2e7d:{NFSU2_TR(0x5b2e7d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2e7e:{NFSU2_TR(0x5b2e7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2e7f:{NFSU2_TR(0x5b2e7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b2e81:{NFSU2_TR(0x5b2e81);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5b2e87:{NFSU2_TR(0x5b2e87);
u8 U[12];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5b2e8e:{NFSU2_TR(0x5b2e8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2e93ull));
TAIL_STATIC(0x5997e0u,599);
}
B5b2e93:L5b2e93:{c.instructions+=10;NFSU2_TR(0x5b2e93);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2e97:{NFSU2_TR(0x5b2e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2e9a:{NFSU2_TR(0x5b2e9a);
{u32 ea_=u32(r4(R+28)+r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b2e9d:{NFSU2_TR(0x5b2e9d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2e9e:{NFSU2_TR(0x5b2e9e);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2ea0:{NFSU2_TR(0x5b2ea0);
__builtin_memmove((R+4),(R+24),4);
}
B5b2ea2:{NFSU2_TR(0x5b2ea2);
{u32 ea_=u32(r4(R+0)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2ea5:{NFSU2_TR(0x5b2ea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2ea8:{NFSU2_TR(0x5b2ea8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2ea9:{NFSU2_TR(0x5b2ea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2eaeull));
TAIL_STATIC(0x59b200u,59b);
}
B5b2eae:L5b2eae:{c.instructions+=6;NFSU2_TR(0x5b2eae);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5b2eb1:{NFSU2_TR(0x5b2eb1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5b2eb4:{NFSU2_TR(0x5b2eb4);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5b2eb5:{NFSU2_TR(0x5b2eb5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x224ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x224ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b2ebb:{NFSU2_TR(0x5b2ebb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b2ebd:{NFSU2_TR(0x5b2ebd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b2e20u);}goto L5b2e20;}}
}
B5b2ec3:L5b2ec3:{c.instructions+=6;NFSU2_TR(0x5b2ec3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b2ec4:{NFSU2_TR(0x5b2ec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b2ec5:{NFSU2_TR(0x5b2ec5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b2ec6:{NFSU2_TR(0x5b2ec6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b2ec7:{NFSU2_TR(0x5b2ec7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b2eca:{NFSU2_TR(0x5b2eca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b2ed0:L5b2ed0:{c.instructions+=15;NFSU2_TR(0x5b2ed0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5b2ed3:{NFSU2_TR(0x5b2ed3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2ed4:{NFSU2_TR(0x5b2ed4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2ed5:{NFSU2_TR(0x5b2ed5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2ed6:{NFSU2_TR(0x5b2ed6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b2eda:{NFSU2_TR(0x5b2eda);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2edc:{NFSU2_TR(0x5b2edc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2ede:{NFSU2_TR(0x5b2ede);
__builtin_memmove((R+20),(R+4),4);
}
B5b2ee0:{NFSU2_TR(0x5b2ee0);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b2ee4:{NFSU2_TR(0x5b2ee4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2ee5:{NFSU2_TR(0x5b2ee5);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b2ee9:{NFSU2_TR(0x5b2ee9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2eea:{NFSU2_TR(0x5b2eea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2eeb:{NFSU2_TR(0x5b2eeb);
__builtin_memmove((R+4),(R+20),4);
}
B5b2eed:{NFSU2_TR(0x5b2eed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b2ef2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b2980u);}goto L5b2980;}
}
B5b2ef2:L5b2ef2:{c.instructions+=5;NFSU2_TR(0x5b2ef2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2ef6:{NFSU2_TR(0x5b2ef6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b2efa:{NFSU2_TR(0x5b2efa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2efc:{NFSU2_TR(0x5b2efc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2eff:{NFSU2_TR(0x5b2eff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2f07;}}
}
B5b2f01:L5b2f01:{c.instructions+=2;NFSU2_TR(0x5b2f01);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2f05:{NFSU2_TR(0x5b2f05);
{goto L5b2f0b;}
}
B5b2f07:L5b2f07:{c.instructions+=1;NFSU2_TR(0x5b2f07);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2f0b:L5b2f0b:{c.instructions+=5;NFSU2_TR(0x5b2f0b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2f0f:{NFSU2_TR(0x5b2f0f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b2f11:{NFSU2_TR(0x5b2f11);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2f13:{NFSU2_TR(0x5b2f13);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b2f16:{NFSU2_TR(0x5b2f16);
if(r1(R+514)){{goto L5b2f24;}}
}
B5b2f18:L5b2f18:{c.instructions+=4;NFSU2_TR(0x5b2f18);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b2f1c:{NFSU2_TR(0x5b2f1c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b2f1e:{NFSU2_TR(0x5b2f1e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b2f22:{NFSU2_TR(0x5b2f22);
{goto L5b2f28;}
}
B5b2f24:L5b2f24:{c.instructions+=1;NFSU2_TR(0x5b2f24);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2f28:L5b2f28:{c.instructions+=7;NFSU2_TR(0x5b2f28);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b2f2c:{NFSU2_TR(0x5b2f2c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2f30:{NFSU2_TR(0x5b2f30);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+12)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b2f34:{NFSU2_TR(0x5b2f34);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b2f3a:{NFSU2_TR(0x5b2f3a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2f3c:{NFSU2_TR(0x5b2f3c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b2f3f:{NFSU2_TR(0x5b2f3f);
if(r1(R+514)){{goto L5b2f52;}}
}
B5b2f41:L5b2f41:{c.instructions+=7;NFSU2_TR(0x5b2f41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b2f42:{NFSU2_TR(0x5b2f42);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b2f44:{NFSU2_TR(0x5b2f44);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2f4a:{NFSU2_TR(0x5b2f4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b2f4b:{NFSU2_TR(0x5b2f4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b2f4c:{NFSU2_TR(0x5b2f4c);
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
B5b2f4f:{NFSU2_TR(0x5b2f4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b2f52:L5b2f52:{c.instructions+=5;NFSU2_TR(0x5b2f52);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b2f58:{NFSU2_TR(0x5b2f58);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5b2f5a:{NFSU2_TR(0x5b2f5a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2f5c:{NFSU2_TR(0x5b2f5c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2f5f:{NFSU2_TR(0x5b2f5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2f6d;}}
}
B5b2f61:L5b2f61:{c.instructions+=2;NFSU2_TR(0x5b2f61);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b2f64:{NFSU2_TR(0x5b2f64);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b2f6d;}}
}
B5b2f66:L5b2f66:{c.instructions+=3;NFSU2_TR(0x5b2f66);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b2f68:{NFSU2_TR(0x5b2f68);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B5b2f6b:{NFSU2_TR(0x5b2f6b);
{goto L5b2f84;}
}
B5b2f6d:L5b2f6d:{c.instructions+=4;NFSU2_TR(0x5b2f6d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b2f73:{NFSU2_TR(0x5b2f73);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2f75:{NFSU2_TR(0x5b2f75);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b2f78:{NFSU2_TR(0x5b2f78);
if(r1(R+514)){{goto L5b2f84;}}
}
B5b2f7a:L5b2f7a:{c.instructions+=2;NFSU2_TR(0x5b2f7a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b2f7d:{NFSU2_TR(0x5b2f7d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b2f84;}}
}
B5b2f7f:L5b2f7f:{c.instructions+=1;NFSU2_TR(0x5b2f7f);
w4(R+4,u32(0x1ull));
}
B5b2f84:L5b2f84:{c.instructions+=5;NFSU2_TR(0x5b2f84);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b2f86:{NFSU2_TR(0x5b2f86);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2f8a:{NFSU2_TR(0x5b2f8a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b2f8e:{NFSU2_TR(0x5b2f8e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2f92:{NFSU2_TR(0x5b2f92);
if(r1(R+518)){TAIL_STATIC(0x5b303fu,5b3);}
}
B5b2f98:L5b2f98:{c.instructions+=13;NFSU2_TR(0x5b2f98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b2f99:{NFSU2_TR(0x5b2f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5b2f9c:{NFSU2_TR(0x5b2f9c);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+12)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2fa0:{NFSU2_TR(0x5b2fa0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2fa4:{NFSU2_TR(0x5b2fa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b2fa8:{NFSU2_TR(0x5b2fa8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2fac:{NFSU2_TR(0x5b2fac);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b2fb0:{NFSU2_TR(0x5b2fb0);
{u32 ea_=u32(u32(8002252u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b2fb6:{NFSU2_TR(0x5b2fb6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2fba:{NFSU2_TR(0x5b2fba);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b2fbc:{NFSU2_TR(0x5b2fbc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2fbe:{NFSU2_TR(0x5b2fbe);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b2fc1:{NFSU2_TR(0x5b2fc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b2fe0;}}
}
B5b2fc3:L5b2fc3:{c.instructions+=2;NFSU2_TR(0x5b2fc3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b2fc5:{NFSU2_TR(0x5b2fc5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b2fe0;}}
}
B5b2fc7:L5b2fc7:{c.instructions+=5;NFSU2_TR(0x5b2fc7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2fcb:{NFSU2_TR(0x5b2fcb);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b2fcd:{NFSU2_TR(0x5b2fcd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2fcf:{NFSU2_TR(0x5b2fcf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b2fd2:{NFSU2_TR(0x5b2fd2);
if(r1(R+514)){TAIL_STATIC(0x5b3015u,5b3);}
}
B5b2fd4:L5b2fd4:{c.instructions+=4;NFSU2_TR(0x5b2fd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b2fd8:{NFSU2_TR(0x5b2fd8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b2fda:{NFSU2_TR(0x5b2fda);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b2fde:{NFSU2_TR(0x5b2fde);
TAIL_STATIC(0x5b3019u,5b3);
}
B5b2fe0:L5b2fe0:{c.instructions+=9;NFSU2_TR(0x5b2fe0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b2fe2:{NFSU2_TR(0x5b2fe2);
{u32 ea_=u32(u32(8002252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2fe8:{NFSU2_TR(0x5b2fe8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b2fec:{NFSU2_TR(0x5b2fec);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b2ff0:{NFSU2_TR(0x5b2ff0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b2ff4:{NFSU2_TR(0x5b2ff4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b2ff8:{NFSU2_TR(0x5b2ff8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b2ffa:{NFSU2_TR(0x5b2ffa);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b2ffd:{NFSU2_TR(0x5b2ffd);
if(r1(R+514)){TAIL_STATIC(0x5b3019u,5b3);}
}
B5b2fff:L5b2fff:{c.instructions+=1;NFSU2_TR(0x5b2fff);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
TAIL_STATIC(0x5b3001u,5b3);
}
XIT:NFSU2_TR_EXIT(0x5b2,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
