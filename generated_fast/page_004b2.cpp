#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_497(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4b1(u8* __restrict R,Cpu& c);
u32 body_4b3(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4b2,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4b2,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4b2(u8* __restrict R,Cpu& c);
u32 page_4b2(Cpu& c){return body_4b2(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4b2(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4b2003:goto L4b2003;
case 0x4b2006:c.instructions+=2;goto B4b2006;
case 0x4b2008:c.instructions+=1;goto B4b2008;
case 0x4b200a:goto L4b200a;
case 0x4b200c:c.instructions+=2;goto B4b200c;
case 0x4b200e:c.instructions+=1;goto B4b200e;
case 0x4b2013:goto L4b2013;
case 0x4b2014:c.instructions+=1;goto B4b2014;
case 0x4b2017:goto L4b2017;
case 0x4b201d:c.instructions+=2;goto B4b201d;
case 0x4b201e:c.instructions+=1;goto B4b201e;
case 0x4b2023:goto L4b2023;
case 0x4b2026:c.instructions+=2;goto B4b2026;
case 0x4b2028:c.instructions+=1;goto B4b2028;
case 0x4b202a:goto L4b202a;
case 0x4b202c:c.instructions+=2;goto B4b202c;
case 0x4b202e:c.instructions+=1;goto B4b202e;
case 0x4b2033:goto L4b2033;
case 0x4b2034:c.instructions+=1;goto B4b2034;
case 0x4b2040:goto L4b2040;
case 0x4b2043:c.instructions+=9;goto B4b2043;
case 0x4b2044:c.instructions+=8;goto B4b2044;
case 0x4b2045:c.instructions+=7;goto B4b2045;
case 0x4b2047:c.instructions+=6;goto B4b2047;
case 0x4b204a:c.instructions+=5;goto B4b204a;
case 0x4b204c:c.instructions+=4;goto B4b204c;
case 0x4b204d:c.instructions+=3;goto B4b204d;
case 0x4b204e:c.instructions+=2;goto B4b204e;
case 0x4b2051:c.instructions+=1;goto B4b2051;
case 0x4b2053:goto L4b2053;
case 0x4b2056:c.instructions+=1;goto B4b2056;
case 0x4b2058:goto L4b2058;
case 0x4b205a:goto L4b205a;
case 0x4b205d:c.instructions+=2;goto B4b205d;
case 0x4b205f:c.instructions+=1;goto B4b205f;
case 0x4b2061:goto L4b2061;
case 0x4b2064:c.instructions+=2;goto B4b2064;
case 0x4b2068:c.instructions+=1;goto B4b2068;
case 0x4b206a:goto L4b206a;
case 0x4b2072:goto L4b2072;
case 0x4b2074:goto L4b2074;
case 0x4b2077:c.instructions+=4;goto B4b2077;
case 0x4b207a:c.instructions+=3;goto B4b207a;
case 0x4b207b:c.instructions+=2;goto B4b207b;
case 0x4b2080:c.instructions+=1;goto B4b2080;
case 0x4b2085:goto L4b2085;
case 0x4b2086:c.instructions+=2;goto B4b2086;
case 0x4b2087:c.instructions+=1;goto B4b2087;
case 0x4b208c:goto L4b208c;
case 0x4b208f:c.instructions+=3;goto B4b208f;
case 0x4b2091:c.instructions+=2;goto B4b2091;
case 0x4b2093:c.instructions+=1;goto B4b2093;
case 0x4b2095:goto L4b2095;
case 0x4b2099:c.instructions+=1;goto B4b2099;
case 0x4b209b:goto L4b209b;
case 0x4b209e:c.instructions+=6;goto B4b209e;
case 0x4b20a0:c.instructions+=5;goto B4b20a0;
case 0x4b20a4:c.instructions+=4;goto B4b20a4;
case 0x4b20a5:c.instructions+=3;goto B4b20a5;
case 0x4b20a9:c.instructions+=2;goto B4b20a9;
case 0x4b20aa:c.instructions+=1;goto B4b20aa;
case 0x4b20af:goto L4b20af;
case 0x4b20b0:c.instructions+=1;goto B4b20b0;
case 0x4b20b5:goto L4b20b5;
case 0x4b20b9:c.instructions+=3;goto B4b20b9;
case 0x4b20ba:c.instructions+=2;goto B4b20ba;
case 0x4b20bb:c.instructions+=1;goto B4b20bb;
case 0x4b20c0:goto L4b20c0;
case 0x4b20c3:c.instructions+=4;goto B4b20c3;
case 0x4b20c6:c.instructions+=3;goto B4b20c6;
case 0x4b20c9:c.instructions+=2;goto B4b20c9;
case 0x4b20cb:c.instructions+=1;goto B4b20cb;
case 0x4b20cd:goto L4b20cd;
case 0x4b20d2:c.instructions+=1;goto B4b20d2;
case 0x4b20d4:goto L4b20d4;
case 0x4b20d9:goto L4b20d9;
case 0x4b20da:c.instructions+=1;goto B4b20da;
case 0x4b20df:goto L4b20df;
case 0x4b20e2:c.instructions+=3;goto B4b20e2;
case 0x4b20e5:c.instructions+=2;goto B4b20e5;
case 0x4b20e7:c.instructions+=1;goto B4b20e7;
case 0x4b20e9:goto L4b20e9;
case 0x4b20ec:c.instructions+=1;goto B4b20ec;
case 0x4b20ee:goto L4b20ee;
case 0x4b20f0:c.instructions+=1;goto B4b20f0;
case 0x4b20f2:goto L4b20f2;
case 0x4b20f3:c.instructions+=1;goto B4b20f3;
case 0x4b20f8:goto L4b20f8;
case 0x4b20fb:goto L4b20fb;
case 0x4b20fd:c.instructions+=2;goto B4b20fd;
case 0x4b2100:c.instructions+=1;goto B4b2100;
case 0x4b2106:goto L4b2106;
case 0x4b2107:c.instructions+=5;goto B4b2107;
case 0x4b2108:c.instructions+=4;goto B4b2108;
case 0x4b2109:c.instructions+=3;goto B4b2109;
case 0x4b210a:c.instructions+=2;goto B4b210a;
case 0x4b210d:c.instructions+=1;goto B4b210d;
case 0x4b2110:goto L4b2110;
case 0x4b2114:c.instructions+=5;goto B4b2114;
case 0x4b2117:c.instructions+=4;goto B4b2117;
case 0x4b2118:c.instructions+=3;goto B4b2118;
case 0x4b2119:c.instructions+=2;goto B4b2119;
case 0x4b211b:c.instructions+=1;goto B4b211b;
case 0x4b211d:goto L4b211d;
case 0x4b2123:c.instructions+=3;goto B4b2123;
case 0x4b2125:c.instructions+=2;goto B4b2125;
case 0x4b212b:c.instructions+=1;goto B4b212b;
case 0x4b212d:goto L4b212d;
case 0x4b2130:c.instructions+=1;goto B4b2130;
case 0x4b2132:goto L4b2132;
case 0x4b2134:goto L4b2134;
case 0x4b2137:c.instructions+=1;goto B4b2137;
case 0x4b2139:goto L4b2139;
case 0x4b213c:c.instructions+=4;goto B4b213c;
case 0x4b213e:c.instructions+=3;goto B4b213e;
case 0x4b2140:c.instructions+=2;goto B4b2140;
case 0x4b2141:c.instructions+=1;goto B4b2141;
case 0x4b2146:goto L4b2146;
case 0x4b2149:c.instructions+=2;goto B4b2149;
case 0x4b214b:c.instructions+=1;goto B4b214b;
case 0x4b2150:goto L4b2150;
case 0x4b2151:c.instructions+=2;goto B4b2151;
case 0x4b2152:c.instructions+=1;goto B4b2152;
case 0x4b2155:goto L4b2155;
case 0x4b2158:c.instructions+=1;goto B4b2158;
case 0x4b215a:goto L4b215a;
case 0x4b2160:c.instructions+=3;goto B4b2160;
case 0x4b2162:c.instructions+=2;goto B4b2162;
case 0x4b2168:c.instructions+=1;goto B4b2168;
case 0x4b216a:goto L4b216a;
case 0x4b216d:c.instructions+=1;goto B4b216d;
case 0x4b216f:goto L4b216f;
case 0x4b2171:goto L4b2171;
case 0x4b2174:c.instructions+=1;goto B4b2174;
case 0x4b2176:goto L4b2176;
case 0x4b217b:goto L4b217b;
case 0x4b217e:c.instructions+=4;goto B4b217e;
case 0x4b2180:c.instructions+=3;goto B4b2180;
case 0x4b2182:c.instructions+=2;goto B4b2182;
case 0x4b2183:c.instructions+=1;goto B4b2183;
case 0x4b2188:goto L4b2188;
case 0x4b218b:goto L4b218b;
case 0x4b218c:c.instructions+=2;goto B4b218c;
case 0x4b218d:c.instructions+=1;goto B4b218d;
case 0x4b2190:goto L4b2190;
case 0x4b2191:c.instructions+=4;goto B4b2191;
case 0x4b2193:c.instructions+=3;goto B4b2193;
case 0x4b2196:c.instructions+=2;goto B4b2196;
case 0x4b2198:c.instructions+=1;goto B4b2198;
case 0x4b219a:goto L4b219a;
case 0x4b21a0:c.instructions+=2;goto B4b21a0;
case 0x4b21a1:c.instructions+=1;goto B4b21a1;
case 0x4b21a6:goto L4b21a6;
case 0x4b21ac:c.instructions+=2;goto B4b21ac;
case 0x4b21ad:c.instructions+=1;goto B4b21ad;
case 0x4b21b2:goto L4b21b2;
case 0x4b21b5:c.instructions+=2;goto B4b21b5;
case 0x4b21b6:c.instructions+=1;goto B4b21b6;
case 0x4b21b7:goto L4b21b7;
case 0x4b21ba:c.instructions+=2;goto B4b21ba;
case 0x4b21bc:c.instructions+=1;goto B4b21bc;
case 0x4b21be:goto L4b21be;
case 0x4b21c1:c.instructions+=1;goto B4b21c1;
case 0x4b21c3:goto L4b21c3;
case 0x4b21c5:goto L4b21c5;
case 0x4b21c8:c.instructions+=1;goto B4b21c8;
case 0x4b21ca:goto L4b21ca;
case 0x4b21d0:c.instructions+=2;goto B4b21d0;
case 0x4b21d1:c.instructions+=1;goto B4b21d1;
case 0x4b21d6:goto L4b21d6;
case 0x4b21dc:c.instructions+=2;goto B4b21dc;
case 0x4b21dd:c.instructions+=1;goto B4b21dd;
case 0x4b21e2:goto L4b21e2;
case 0x4b21e5:c.instructions+=2;goto B4b21e5;
case 0x4b21e6:c.instructions+=1;goto B4b21e6;
case 0x4b21e7:goto L4b21e7;
case 0x4b21ea:c.instructions+=2;goto B4b21ea;
case 0x4b21ec:c.instructions+=1;goto B4b21ec;
case 0x4b21ee:goto L4b21ee;
case 0x4b21f1:c.instructions+=1;goto B4b21f1;
case 0x4b21f3:goto L4b21f3;
case 0x4b21f5:goto L4b21f5;
case 0x4b21f8:c.instructions+=1;goto B4b21f8;
case 0x4b21fa:goto L4b21fa;
case 0x4b2200:c.instructions+=2;goto B4b2200;
case 0x4b2201:c.instructions+=1;goto B4b2201;
case 0x4b2206:goto L4b2206;
case 0x4b220c:c.instructions+=2;goto B4b220c;
case 0x4b220d:c.instructions+=1;goto B4b220d;
case 0x4b2212:goto L4b2212;
case 0x4b2215:c.instructions+=2;goto B4b2215;
case 0x4b2216:c.instructions+=1;goto B4b2216;
case 0x4b2217:goto L4b2217;
case 0x4b221d:c.instructions+=2;goto B4b221d;
case 0x4b221e:c.instructions+=1;goto B4b221e;
case 0x4b2223:goto L4b2223;
case 0x4b2229:c.instructions+=2;goto B4b2229;
case 0x4b222a:c.instructions+=1;goto B4b222a;
case 0x4b222f:goto L4b222f;
case 0x4b2232:c.instructions+=2;goto B4b2232;
case 0x4b2233:c.instructions+=1;goto B4b2233;
case 0x4b2240:goto L4b2240;
case 0x4b2242:c.instructions+=7;goto B4b2242;
case 0x4b2247:c.instructions+=6;goto B4b2247;
case 0x4b224d:c.instructions+=5;goto B4b224d;
case 0x4b224e:c.instructions+=4;goto B4b224e;
case 0x4b2255:c.instructions+=3;goto B4b2255;
case 0x4b2256:c.instructions+=2;goto B4b2256;
case 0x4b225b:c.instructions+=1;goto B4b225b;
case 0x4b2260:goto L4b2260;
case 0x4b2263:c.instructions+=4;goto B4b2263;
case 0x4b2267:c.instructions+=3;goto B4b2267;
case 0x4b2269:c.instructions+=2;goto B4b2269;
case 0x4b2271:c.instructions+=1;goto B4b2271;
case 0x4b2273:goto L4b2273;
case 0x4b2277:c.instructions+=3;goto B4b2277;
case 0x4b2278:c.instructions+=2;goto B4b2278;
case 0x4b227a:c.instructions+=1;goto B4b227a;
case 0x4b227f:goto L4b227f;
case 0x4b2283:c.instructions+=3;goto B4b2283;
case 0x4b228a:c.instructions+=2;goto B4b228a;
case 0x4b228d:c.instructions+=1;goto B4b228d;
case 0x4b228e:goto L4b228e;
case 0x4b2292:c.instructions+=4;goto B4b2292;
case 0x4b2294:c.instructions+=3;goto B4b2294;
case 0x4b229b:c.instructions+=2;goto B4b229b;
case 0x4b229e:c.instructions+=1;goto B4b229e;
case 0x4b22a0:goto L4b22a0;
case 0x4b22a1:c.instructions+=2;goto B4b22a1;
case 0x4b22a3:c.instructions+=1;goto B4b22a3;
case 0x4b22a8:goto L4b22a8;
case 0x4b22ad:c.instructions+=1;goto B4b22ad;
case 0x4b22af:goto L4b22af;
case 0x4b22b0:c.instructions+=1;goto B4b22b0;
case 0x4b22b5:goto L4b22b5;
case 0x4b22b8:goto L4b22b8;
case 0x4b22ba:c.instructions+=2;goto B4b22ba;
case 0x4b22bb:c.instructions+=1;goto B4b22bb;
case 0x4b22c0:goto L4b22c0;
case 0x4b22c5:goto L4b22c5;
case 0x4b22c7:c.instructions+=2;goto B4b22c7;
case 0x4b22c9:c.instructions+=1;goto B4b22c9;
case 0x4b22cb:goto L4b22cb;
case 0x4b22cf:c.instructions+=7;goto B4b22cf;
case 0x4b22d1:c.instructions+=6;goto B4b22d1;
case 0x4b22d3:c.instructions+=5;goto B4b22d3;
case 0x4b22d5:c.instructions+=4;goto B4b22d5;
case 0x4b22d7:c.instructions+=3;goto B4b22d7;
case 0x4b22dc:c.instructions+=2;goto B4b22dc;
case 0x4b22dd:c.instructions+=1;goto B4b22dd;
case 0x4b22e2:goto L4b22e2;
case 0x4b22e5:c.instructions+=1;goto B4b22e5;
case 0x4b22ea:goto L4b22ea;
case 0x4b22ee:c.instructions+=3;goto B4b22ee;
case 0x4b22f3:c.instructions+=2;goto B4b22f3;
case 0x4b22f4:c.instructions+=1;goto B4b22f4;
case 0x4b22f9:goto L4b22f9;
case 0x4b22fc:c.instructions+=1;goto B4b22fc;
case 0x4b2310:goto L4b2310;
case 0x4b2311:c.instructions+=7;goto B4b2311;
case 0x4b2312:c.instructions+=6;goto B4b2312;
case 0x4b2313:c.instructions+=5;goto B4b2313;
case 0x4b2315:c.instructions+=4;goto B4b2315;
case 0x4b2318:c.instructions+=3;goto B4b2318;
case 0x4b231d:c.instructions+=2;goto B4b231d;
case 0x4b231e:c.instructions+=1;goto B4b231e;
case 0x4b2323:goto L4b2323;
case 0x4b2324:c.instructions+=1;goto B4b2324;
case 0x4b2329:goto L4b2329;
case 0x4b232c:c.instructions+=3;goto B4b232c;
case 0x4b2331:c.instructions+=2;goto B4b2331;
case 0x4b2332:c.instructions+=1;goto B4b2332;
case 0x4b2337:goto L4b2337;
case 0x4b2338:c.instructions+=1;goto B4b2338;
case 0x4b233d:goto L4b233d;
case 0x4b2340:c.instructions+=5;goto B4b2340;
case 0x4b2344:c.instructions+=4;goto B4b2344;
case 0x4b2349:c.instructions+=3;goto B4b2349;
case 0x4b234c:c.instructions+=2;goto B4b234c;
case 0x4b234f:c.instructions+=1;goto B4b234f;
case 0x4b2355:goto L4b2355;
case 0x4b235b:goto L4b235b;
case 0x4b235e:c.instructions+=1;goto B4b235e;
case 0x4b2360:goto L4b2360;
case 0x4b2363:c.instructions+=1;goto B4b2363;
case 0x4b2365:goto L4b2365;
case 0x4b2368:c.instructions+=1;goto B4b2368;
case 0x4b236e:goto L4b236e;
case 0x4b2373:c.instructions+=1;goto B4b2373;
case 0x4b2378:goto L4b2378;
case 0x4b237b:c.instructions+=4;goto B4b237b;
case 0x4b2380:c.instructions+=3;goto B4b2380;
case 0x4b2385:c.instructions+=2;goto B4b2385;
case 0x4b2386:c.instructions+=1;goto B4b2386;
case 0x4b238b:goto L4b238b;
case 0x4b238e:c.instructions+=2;goto B4b238e;
case 0x4b238f:c.instructions+=1;goto B4b238f;
case 0x4b2394:goto L4b2394;
case 0x4b2397:c.instructions+=3;goto B4b2397;
case 0x4b239c:c.instructions+=2;goto B4b239c;
case 0x4b23a1:c.instructions+=1;goto B4b23a1;
case 0x4b23a6:goto L4b23a6;
case 0x4b23ab:c.instructions+=2;goto B4b23ab;
case 0x4b23ae:c.instructions+=1;goto B4b23ae;
case 0x4b23b0:goto L4b23b0;
case 0x4b23b3:c.instructions+=1;goto B4b23b3;
case 0x4b23b5:goto L4b23b5;
case 0x4b23b8:c.instructions+=3;goto B4b23b8;
case 0x4b23bd:c.instructions+=2;goto B4b23bd;
case 0x4b23be:c.instructions+=1;goto B4b23be;
case 0x4b23c3:goto L4b23c3;
case 0x4b23c4:c.instructions+=1;goto B4b23c4;
case 0x4b23c9:goto L4b23c9;
case 0x4b23cc:c.instructions+=3;goto B4b23cc;
case 0x4b23d1:c.instructions+=2;goto B4b23d1;
case 0x4b23d2:c.instructions+=1;goto B4b23d2;
case 0x4b23d7:goto L4b23d7;
case 0x4b23d8:c.instructions+=1;goto B4b23d8;
case 0x4b23dd:goto L4b23dd;
case 0x4b23e1:c.instructions+=3;goto B4b23e1;
case 0x4b23e4:c.instructions+=2;goto B4b23e4;
case 0x4b23e9:c.instructions+=1;goto B4b23e9;
case 0x4b23ed:goto L4b23ed;
case 0x4b23f2:c.instructions+=1;goto B4b23f2;
case 0x4b23f7:goto L4b23f7;
case 0x4b23fb:c.instructions+=7;goto B4b23fb;
case 0x4b23fe:c.instructions+=6;goto B4b23fe;
case 0x4b2404:c.instructions+=5;goto B4b2404;
case 0x4b2408:c.instructions+=4;goto B4b2408;
case 0x4b240e:c.instructions+=3;goto B4b240e;
case 0x4b240f:c.instructions+=2;goto B4b240f;
case 0x4b2414:c.instructions+=1;goto B4b2414;
case 0x4b2419:goto L4b2419;
case 0x4b241b:c.instructions+=3;goto B4b241b;
case 0x4b2420:c.instructions+=2;goto B4b2420;
case 0x4b2421:c.instructions+=1;goto B4b2421;
case 0x4b2423:goto L4b2423;
case 0x4b2428:goto L4b2428;
case 0x4b242a:c.instructions+=2;goto B4b242a;
case 0x4b242d:c.instructions+=1;goto B4b242d;
case 0x4b242f:goto L4b242f;
case 0x4b2434:c.instructions+=3;goto B4b2434;
case 0x4b2439:c.instructions+=2;goto B4b2439;
case 0x4b243a:c.instructions+=1;goto B4b243a;
case 0x4b243f:goto L4b243f;
case 0x4b2442:c.instructions+=2;goto B4b2442;
case 0x4b2443:c.instructions+=1;goto B4b2443;
case 0x4b2448:goto L4b2448;
case 0x4b244c:c.instructions+=4;goto B4b244c;
case 0x4b244f:c.instructions+=3;goto B4b244f;
case 0x4b2454:c.instructions+=2;goto B4b2454;
case 0x4b2458:c.instructions+=1;goto B4b2458;
case 0x4b245d:goto L4b245d;
case 0x4b2462:c.instructions+=3;goto B4b2462;
case 0x4b2467:c.instructions+=2;goto B4b2467;
case 0x4b2468:c.instructions+=1;goto B4b2468;
case 0x4b246d:goto L4b246d;
case 0x4b2470:c.instructions+=2;goto B4b2470;
case 0x4b2471:c.instructions+=1;goto B4b2471;
case 0x4b2476:goto L4b2476;
case 0x4b2479:c.instructions+=1;goto B4b2479;
case 0x4b247e:goto L4b247e;
case 0x4b2483:goto L4b2483;
case 0x4b2485:c.instructions+=1;goto B4b2485;
case 0x4b248b:goto L4b248b;
case 0x4b248e:c.instructions+=4;goto B4b248e;
case 0x4b2493:c.instructions+=3;goto B4b2493;
case 0x4b2498:c.instructions+=2;goto B4b2498;
case 0x4b2499:c.instructions+=1;goto B4b2499;
case 0x4b249e:goto L4b249e;
case 0x4b24a1:c.instructions+=2;goto B4b24a1;
case 0x4b24a2:c.instructions+=1;goto B4b24a2;
case 0x4b24a7:goto L4b24a7;
case 0x4b24aa:c.instructions+=3;goto B4b24aa;
case 0x4b24af:c.instructions+=2;goto B4b24af;
case 0x4b24b0:c.instructions+=1;goto B4b24b0;
case 0x4b24b5:goto L4b24b5;
case 0x4b24b6:c.instructions+=1;goto B4b24b6;
case 0x4b24bb:goto L4b24bb;
case 0x4b24be:c.instructions+=3;goto B4b24be;
case 0x4b24c3:c.instructions+=2;goto B4b24c3;
case 0x4b24c4:c.instructions+=1;goto B4b24c4;
case 0x4b24c9:goto L4b24c9;
case 0x4b24ca:c.instructions+=1;goto B4b24ca;
case 0x4b24cf:goto L4b24cf;
case 0x4b24d2:c.instructions+=1;goto B4b24d2;
case 0x4b24d4:goto L4b24d4;
case 0x4b24d9:c.instructions+=1;goto B4b24d9;
case 0x4b24db:goto L4b24db;
case 0x4b24e0:c.instructions+=1;goto B4b24e0;
case 0x4b24e2:goto L4b24e2;
case 0x4b24e7:c.instructions+=1;goto B4b24e7;
case 0x4b24e9:goto L4b24e9;
case 0x4b24ee:c.instructions+=2;goto B4b24ee;
case 0x4b24f1:c.instructions+=1;goto B4b24f1;
case 0x4b24f3:goto L4b24f3;
case 0x4b24f6:c.instructions+=1;goto B4b24f6;
case 0x4b24f8:goto L4b24f8;
case 0x4b24fb:c.instructions+=3;goto B4b24fb;
case 0x4b2500:c.instructions+=2;goto B4b2500;
case 0x4b2501:c.instructions+=1;goto B4b2501;
case 0x4b2506:goto L4b2506;
case 0x4b2507:c.instructions+=1;goto B4b2507;
case 0x4b250c:goto L4b250c;
case 0x4b250f:c.instructions+=3;goto B4b250f;
case 0x4b2514:c.instructions+=2;goto B4b2514;
case 0x4b2515:c.instructions+=1;goto B4b2515;
case 0x4b251a:goto L4b251a;
case 0x4b251b:c.instructions+=1;goto B4b251b;
case 0x4b2520:goto L4b2520;
case 0x4b2523:goto L4b2523;
case 0x4b2528:goto L4b2528;
case 0x4b252d:goto L4b252d;
case 0x4b2530:c.instructions+=2;goto B4b2530;
case 0x4b2531:c.instructions+=1;goto B4b2531;
case 0x4b2536:goto L4b2536;
case 0x4b2539:c.instructions+=2;goto B4b2539;
case 0x4b253a:c.instructions+=1;goto B4b253a;
case 0x4b253f:goto L4b253f;
case 0x4b2542:goto L4b2542;
case 0x4b2545:c.instructions+=5;goto B4b2545;
case 0x4b254b:c.instructions+=4;goto B4b254b;
case 0x4b2551:c.instructions+=3;goto B4b2551;
case 0x4b2553:c.instructions+=2;goto B4b2553;
case 0x4b2554:c.instructions+=1;goto B4b2554;
case 0x4b2559:goto L4b2559;
case 0x4b255b:c.instructions+=4;goto B4b255b;
case 0x4b255d:c.instructions+=3;goto B4b255d;
case 0x4b255f:c.instructions+=2;goto B4b255f;
case 0x4b2560:c.instructions+=1;goto B4b2560;
case 0x4b2565:goto L4b2565;
case 0x4b2568:c.instructions+=2;goto B4b2568;
case 0x4b256a:c.instructions+=1;goto B4b256a;
case 0x4b256c:goto L4b256c;
case 0x4b2572:c.instructions+=3;goto B4b2572;
case 0x4b2573:c.instructions+=2;goto B4b2573;
case 0x4b2574:c.instructions+=1;goto B4b2574;
case 0x4b2579:goto L4b2579;
case 0x4b257c:c.instructions+=1;goto B4b257c;
case 0x4b257e:goto L4b257e;
case 0x4b2583:c.instructions+=1;goto B4b2583;
case 0x4b2588:goto L4b2588;
case 0x4b258e:c.instructions+=3;goto B4b258e;
case 0x4b258f:c.instructions+=2;goto B4b258f;
case 0x4b2590:c.instructions+=1;goto B4b2590;
case 0x4b2595:goto L4b2595;
case 0x4b2598:goto L4b2598;
case 0x4b259b:c.instructions+=5;goto B4b259b;
case 0x4b25a1:c.instructions+=4;goto B4b25a1;
case 0x4b25a7:c.instructions+=3;goto B4b25a7;
case 0x4b25a9:c.instructions+=2;goto B4b25a9;
case 0x4b25aa:c.instructions+=1;goto B4b25aa;
case 0x4b25af:goto L4b25af;
case 0x4b25b1:c.instructions+=4;goto B4b25b1;
case 0x4b25b3:c.instructions+=3;goto B4b25b3;
case 0x4b25b5:c.instructions+=2;goto B4b25b5;
case 0x4b25b6:c.instructions+=1;goto B4b25b6;
case 0x4b25bb:goto L4b25bb;
case 0x4b25be:c.instructions+=2;goto B4b25be;
case 0x4b25c0:c.instructions+=1;goto B4b25c0;
case 0x4b25c2:goto L4b25c2;
case 0x4b25c8:c.instructions+=3;goto B4b25c8;
case 0x4b25c9:c.instructions+=2;goto B4b25c9;
case 0x4b25ca:c.instructions+=1;goto B4b25ca;
case 0x4b25cf:goto L4b25cf;
case 0x4b25d2:c.instructions+=1;goto B4b25d2;
case 0x4b25d4:goto L4b25d4;
case 0x4b25d9:c.instructions+=1;goto B4b25d9;
case 0x4b25de:goto L4b25de;
case 0x4b25df:c.instructions+=3;goto B4b25df;
case 0x4b25e5:c.instructions+=2;goto B4b25e5;
case 0x4b25e6:c.instructions+=1;goto B4b25e6;
case 0x4b25eb:goto L4b25eb;
case 0x4b25ee:goto L4b25ee;
case 0x4b25f1:c.instructions+=7;goto B4b25f1;
case 0x4b25f4:c.instructions+=6;goto B4b25f4;
case 0x4b25f5:c.instructions+=5;goto B4b25f5;
case 0x4b25f6:c.instructions+=4;goto B4b25f6;
case 0x4b25f7:c.instructions+=3;goto B4b25f7;
case 0x4b25f9:c.instructions+=2;goto B4b25f9;
case 0x4b25fc:c.instructions+=1;goto B4b25fc;
case 0x4b2601:goto L4b2601;
case 0x4b2604:c.instructions+=2;goto B4b2604;
case 0x4b2609:c.instructions+=1;goto B4b2609;
case 0x4b260e:goto L4b260e;
case 0x4b260f:c.instructions+=2;goto B4b260f;
case 0x4b2610:c.instructions+=1;goto B4b2610;
case 0x4b2615:goto L4b2615;
case 0x4b2618:c.instructions+=3;goto B4b2618;
case 0x4b261d:c.instructions+=2;goto B4b261d;
case 0x4b261f:c.instructions+=1;goto B4b261f;
case 0x4b2624:goto L4b2624;
case 0x4b2625:c.instructions+=2;goto B4b2625;
case 0x4b2626:c.instructions+=1;goto B4b2626;
case 0x4b262b:goto L4b262b;
case 0x4b262d:c.instructions+=4;goto B4b262d;
case 0x4b2630:c.instructions+=3;goto B4b2630;
case 0x4b2633:c.instructions+=2;goto B4b2633;
case 0x4b2635:c.instructions+=1;goto B4b2635;
case 0x4b2637:goto L4b2637;
case 0x4b263a:c.instructions+=1;goto B4b263a;
case 0x4b263c:goto L4b263c;
case 0x4b263e:goto L4b263e;
case 0x4b2641:c.instructions+=2;goto B4b2641;
case 0x4b2643:c.instructions+=1;goto B4b2643;
case 0x4b2645:goto L4b2645;
case 0x4b264b:c.instructions+=2;goto B4b264b;
case 0x4b264d:c.instructions+=1;goto B4b264d;
case 0x4b2653:goto L4b2653;
case 0x4b2656:c.instructions+=3;goto B4b2656;
case 0x4b265b:c.instructions+=2;goto B4b265b;
case 0x4b265c:c.instructions+=1;goto B4b265c;
case 0x4b2661:goto L4b2661;
case 0x4b2662:c.instructions+=1;goto B4b2662;
case 0x4b2667:goto L4b2667;
case 0x4b266e:c.instructions+=1;goto B4b266e;
case 0x4b2673:goto L4b2673;
case 0x4b2676:c.instructions+=2;goto B4b2676;
case 0x4b2678:c.instructions+=1;goto B4b2678;
case 0x4b267a:goto L4b267a;
case 0x4b267d:c.instructions+=1;goto B4b267d;
case 0x4b267f:goto L4b267f;
case 0x4b2681:goto L4b2681;
case 0x4b2683:c.instructions+=1;goto B4b2683;
case 0x4b2685:goto L4b2685;
case 0x4b268b:c.instructions+=2;goto B4b268b;
case 0x4b268d:c.instructions+=1;goto B4b268d;
case 0x4b2693:goto L4b2693;
case 0x4b2696:c.instructions+=3;goto B4b2696;
case 0x4b269b:c.instructions+=2;goto B4b269b;
case 0x4b269c:c.instructions+=1;goto B4b269c;
case 0x4b26a1:goto L4b26a1;
case 0x4b26a2:c.instructions+=1;goto B4b26a2;
case 0x4b26a7:goto L4b26a7;
case 0x4b26ae:c.instructions+=1;goto B4b26ae;
case 0x4b26b3:goto L4b26b3;
case 0x4b26b9:c.instructions+=2;goto B4b26b9;
case 0x4b26bb:c.instructions+=1;goto B4b26bb;
case 0x4b26bd:goto L4b26bd;
case 0x4b26c0:c.instructions+=3;goto B4b26c0;
case 0x4b26c5:c.instructions+=2;goto B4b26c5;
case 0x4b26c6:c.instructions+=1;goto B4b26c6;
case 0x4b26cb:goto L4b26cb;
case 0x4b26cc:c.instructions+=1;goto B4b26cc;
case 0x4b26d1:goto L4b26d1;
case 0x4b26d8:c.instructions+=1;goto B4b26d8;
case 0x4b26da:goto L4b26da;
case 0x4b26e0:c.instructions+=2;goto B4b26e0;
case 0x4b26e2:c.instructions+=1;goto B4b26e2;
case 0x4b26e4:goto L4b26e4;
case 0x4b26e7:c.instructions+=3;goto B4b26e7;
case 0x4b26ec:c.instructions+=2;goto B4b26ec;
case 0x4b26ed:c.instructions+=1;goto B4b26ed;
case 0x4b26f2:goto L4b26f2;
case 0x4b26f3:c.instructions+=1;goto B4b26f3;
case 0x4b26f8:goto L4b26f8;
case 0x4b26ff:goto L4b26ff;
case 0x4b2702:goto L4b2702;
case 0x4b2707:c.instructions+=2;goto B4b2707;
case 0x4b2708:c.instructions+=1;goto B4b2708;
case 0x4b270d:goto L4b270d;
case 0x4b2710:c.instructions+=2;goto B4b2710;
case 0x4b2712:c.instructions+=1;goto B4b2712;
case 0x4b2714:goto L4b2714;
case 0x4b2716:c.instructions+=3;goto B4b2716;
case 0x4b271b:c.instructions+=2;goto B4b271b;
case 0x4b271c:c.instructions+=1;goto B4b271c;
case 0x4b2721:goto L4b2721;
case 0x4b2724:goto L4b2724;
case 0x4b2729:c.instructions+=2;goto B4b2729;
case 0x4b272a:c.instructions+=1;goto B4b272a;
case 0x4b272f:goto L4b272f;
case 0x4b2732:c.instructions+=2;goto B4b2732;
case 0x4b2734:c.instructions+=1;goto B4b2734;
case 0x4b2736:goto L4b2736;
case 0x4b2738:c.instructions+=3;goto B4b2738;
case 0x4b273d:c.instructions+=2;goto B4b273d;
case 0x4b273e:c.instructions+=1;goto B4b273e;
case 0x4b2743:goto L4b2743;
case 0x4b2746:goto L4b2746;
case 0x4b274b:c.instructions+=4;goto B4b274b;
case 0x4b274e:c.instructions+=3;goto B4b274e;
case 0x4b2753:c.instructions+=2;goto B4b2753;
case 0x4b2754:c.instructions+=1;goto B4b2754;
case 0x4b2756:goto L4b2756;
case 0x4b275b:c.instructions+=1;goto B4b275b;
case 0x4b275d:goto L4b275d;
case 0x4b275f:c.instructions+=1;goto B4b275f;
case 0x4b2761:goto L4b2761;
case 0x4b2766:goto L4b2766;
case 0x4b2768:c.instructions+=1;goto B4b2768;
case 0x4b276a:goto L4b276a;
case 0x4b276f:goto L4b276f;
case 0x4b2771:c.instructions+=1;goto B4b2771;
case 0x4b2773:goto L4b2773;
case 0x4b2778:goto L4b2778;
case 0x4b277a:c.instructions+=1;goto B4b277a;
case 0x4b277c:goto L4b277c;
case 0x4b2781:goto L4b2781;
case 0x4b2783:c.instructions+=1;goto B4b2783;
case 0x4b2785:goto L4b2785;
case 0x4b278a:goto L4b278a;
case 0x4b278d:c.instructions+=4;goto B4b278d;
case 0x4b2793:c.instructions+=3;goto B4b2793;
case 0x4b2799:c.instructions+=2;goto B4b2799;
case 0x4b279c:c.instructions+=1;goto B4b279c;
case 0x4b279e:goto L4b279e;
case 0x4b27a4:c.instructions+=1;goto B4b27a4;
case 0x4b27a6:goto L4b27a6;
case 0x4b27a9:c.instructions+=1;goto B4b27a9;
case 0x4b27ab:goto L4b27ab;
case 0x4b27ac:c.instructions+=2;goto B4b27ac;
case 0x4b27b1:c.instructions+=1;goto B4b27b1;
case 0x4b27b6:goto L4b27b6;
case 0x4b27b8:c.instructions+=1;goto B4b27b8;
case 0x4b27ba:goto L4b27ba;
case 0x4b27bd:c.instructions+=3;goto B4b27bd;
case 0x4b27c2:c.instructions+=2;goto B4b27c2;
case 0x4b27c3:c.instructions+=1;goto B4b27c3;
case 0x4b27c8:goto L4b27c8;
case 0x4b27c9:c.instructions+=1;goto B4b27c9;
case 0x4b27ce:goto L4b27ce;
case 0x4b27d1:c.instructions+=3;goto B4b27d1;
case 0x4b27d6:c.instructions+=2;goto B4b27d6;
case 0x4b27d7:c.instructions+=1;goto B4b27d7;
case 0x4b27dc:goto L4b27dc;
case 0x4b27dd:c.instructions+=1;goto B4b27dd;
case 0x4b27e2:goto L4b27e2;
case 0x4b27e5:c.instructions+=1;goto B4b27e5;
case 0x4b27e7:goto L4b27e7;
case 0x4b27ea:c.instructions+=3;goto B4b27ea;
case 0x4b27ef:c.instructions+=2;goto B4b27ef;
case 0x4b27f0:c.instructions+=1;goto B4b27f0;
case 0x4b27f5:goto L4b27f5;
case 0x4b27f6:c.instructions+=1;goto B4b27f6;
case 0x4b27fb:goto L4b27fb;
case 0x4b27fe:c.instructions+=3;goto B4b27fe;
case 0x4b2803:c.instructions+=2;goto B4b2803;
case 0x4b2804:c.instructions+=1;goto B4b2804;
case 0x4b2809:goto L4b2809;
case 0x4b280a:c.instructions+=1;goto B4b280a;
case 0x4b280f:goto L4b280f;
case 0x4b2813:c.instructions+=3;goto B4b2813;
case 0x4b2816:c.instructions+=2;goto B4b2816;
case 0x4b281b:c.instructions+=1;goto B4b281b;
case 0x4b281f:goto L4b281f;
case 0x4b2822:c.instructions+=4;goto B4b2822;
case 0x4b2823:c.instructions+=3;goto B4b2823;
case 0x4b2828:c.instructions+=2;goto B4b2828;
case 0x4b2829:c.instructions+=1;goto B4b2829;
case 0x4b282e:goto L4b282e;
case 0x4b2831:c.instructions+=2;goto B4b2831;
case 0x4b2832:c.instructions+=1;goto B4b2832;
case 0x4b2837:goto L4b2837;
case 0x4b283a:c.instructions+=6;goto B4b283a;
case 0x4b283e:c.instructions+=5;goto B4b283e;
case 0x4b2844:c.instructions+=4;goto B4b2844;
case 0x4b2847:c.instructions+=3;goto B4b2847;
case 0x4b2848:c.instructions+=2;goto B4b2848;
case 0x4b2849:c.instructions+=1;goto B4b2849;
case 0x4b284e:goto L4b284e;
case 0x4b284f:c.instructions+=4;goto B4b284f;
case 0x4b2851:c.instructions+=3;goto B4b2851;
case 0x4b2852:c.instructions+=2;goto B4b2852;
case 0x4b2855:c.instructions+=1;goto B4b2855;
case 0x4b2860:goto L4b2860;
case 0x4b2863:c.instructions+=4;goto B4b2863;
case 0x4b2864:c.instructions+=3;goto B4b2864;
case 0x4b2867:c.instructions+=2;goto B4b2867;
case 0x4b2869:c.instructions+=1;goto B4b2869;
case 0x4b286b:goto L4b286b;
case 0x4b2870:goto L4b2870;
case 0x4b2872:c.instructions+=7;goto B4b2872;
case 0x4b2874:c.instructions+=6;goto B4b2874;
case 0x4b2877:c.instructions+=5;goto B4b2877;
case 0x4b2879:c.instructions+=4;goto B4b2879;
case 0x4b287c:c.instructions+=3;goto B4b287c;
case 0x4b287f:c.instructions+=2;goto B4b287f;
case 0x4b2881:c.instructions+=1;goto B4b2881;
case 0x4b2883:goto L4b2883;
case 0x4b2885:c.instructions+=2;goto B4b2885;
case 0x4b2887:c.instructions+=1;goto B4b2887;
case 0x4b2889:goto L4b2889;
case 0x4b288b:c.instructions+=1;goto B4b288b;
case 0x4b288d:goto L4b288d;
case 0x4b288e:c.instructions+=1;goto B4b288e;
case 0x4b2890:goto L4b2890;
case 0x4b2892:c.instructions+=12;goto B4b2892;
case 0x4b2897:c.instructions+=11;goto B4b2897;
case 0x4b289d:c.instructions+=10;goto B4b289d;
case 0x4b289e:c.instructions+=9;goto B4b289e;
case 0x4b28a5:c.instructions+=8;goto B4b28a5;
case 0x4b28a6:c.instructions+=7;goto B4b28a6;
case 0x4b28aa:c.instructions+=6;goto B4b28aa;
case 0x4b28ab:c.instructions+=5;goto B4b28ab;
case 0x4b28ac:c.instructions+=4;goto B4b28ac;
case 0x4b28ae:c.instructions+=3;goto B4b28ae;
case 0x4b28af:c.instructions+=2;goto B4b28af;
case 0x4b28b3:c.instructions+=1;goto B4b28b3;
case 0x4b28b8:goto L4b28b8;
case 0x4b28bb:c.instructions+=7;goto B4b28bb;
case 0x4b28bd:c.instructions+=6;goto B4b28bd;
case 0x4b28c3:c.instructions+=5;goto B4b28c3;
case 0x4b28c6:c.instructions+=4;goto B4b28c6;
case 0x4b28c9:c.instructions+=3;goto B4b28c9;
case 0x4b28cf:c.instructions+=2;goto B4b28cf;
case 0x4b28d3:c.instructions+=1;goto B4b28d3;
case 0x4b28d5:goto L4b28d5;
case 0x4b28da:c.instructions+=1;goto B4b28da;
case 0x4b28dc:goto L4b28dc;
case 0x4b28e1:goto L4b28e1;
case 0x4b28e6:goto L4b28e6;
case 0x4b28e7:c.instructions+=3;goto B4b28e7;
case 0x4b28ec:c.instructions+=2;goto B4b28ec;
case 0x4b28ed:c.instructions+=1;goto B4b28ed;
case 0x4b28f2:goto L4b28f2;
case 0x4b28f6:c.instructions+=7;goto B4b28f6;
case 0x4b28f9:c.instructions+=6;goto B4b28f9;
case 0x4b28fa:c.instructions+=5;goto B4b28fa;
case 0x4b28fc:c.instructions+=4;goto B4b28fc;
case 0x4b28fd:c.instructions+=3;goto B4b28fd;
case 0x4b2904:c.instructions+=2;goto B4b2904;
case 0x4b2907:c.instructions+=1;goto B4b2907;
case 0x4b2910:goto L4b2910;
case 0x4b2911:c.instructions+=2;goto B4b2911;
case 0x4b2913:c.instructions+=1;goto B4b2913;
case 0x4b2918:goto L4b2918;
case 0x4b291d:c.instructions+=1;goto B4b291d;
case 0x4b291f:goto L4b291f;
case 0x4b2920:c.instructions+=1;goto B4b2920;
case 0x4b2925:goto L4b2925;
case 0x4b2928:goto L4b2928;
case 0x4b292a:c.instructions+=2;goto B4b292a;
case 0x4b292b:c.instructions+=1;goto B4b292b;
case 0x4b2930:goto L4b2930;
case 0x4b2936:c.instructions+=1;goto B4b2936;
case 0x4b2940:goto L4b2940;
case 0x4b2946:c.instructions+=2;goto B4b2946;
case 0x4b2948:c.instructions+=1;goto B4b2948;
case 0x4b294a:goto L4b294a;
case 0x4b294c:c.instructions+=2;goto B4b294c;
case 0x4b294e:c.instructions+=1;goto B4b294e;
case 0x4b2950:goto L4b2950;
case 0x4b295a:goto L4b295a;
case 0x4b2960:goto L4b2960;
case 0x4b2961:c.instructions+=6;goto B4b2961;
case 0x4b2962:c.instructions+=5;goto B4b2962;
case 0x4b2965:c.instructions+=4;goto B4b2965;
case 0x4b2966:c.instructions+=3;goto B4b2966;
case 0x4b2969:c.instructions+=2;goto B4b2969;
case 0x4b296b:c.instructions+=1;goto B4b296b;
case 0x4b296d:goto L4b296d;
case 0x4b2971:goto L4b2971;
case 0x4b2974:c.instructions+=3;goto B4b2974;
case 0x4b2975:c.instructions+=2;goto B4b2975;
case 0x4b2976:c.instructions+=1;goto B4b2976;
case 0x4b297b:goto L4b297b;
case 0x4b297e:c.instructions+=2;goto B4b297e;
case 0x4b2980:c.instructions+=1;goto B4b2980;
case 0x4b2982:goto L4b2982;
case 0x4b2984:c.instructions+=2;goto B4b2984;
case 0x4b2986:c.instructions+=1;goto B4b2986;
case 0x4b2988:goto L4b2988;
case 0x4b2989:c.instructions+=4;goto B4b2989;
case 0x4b298a:c.instructions+=3;goto B4b298a;
case 0x4b298c:c.instructions+=2;goto B4b298c;
case 0x4b298d:c.instructions+=1;goto B4b298d;
case 0x4b2990:goto L4b2990;
case 0x4b2991:c.instructions+=4;goto B4b2991;
case 0x4b2993:c.instructions+=3;goto B4b2993;
case 0x4b2994:c.instructions+=2;goto B4b2994;
case 0x4b2995:c.instructions+=1;goto B4b2995;
case 0x4b29a0:goto L4b29a0;
case 0x4b29a1:c.instructions+=6;goto B4b29a1;
case 0x4b29a2:c.instructions+=5;goto B4b29a2;
case 0x4b29a4:c.instructions+=4;goto B4b29a4;
case 0x4b29a7:c.instructions+=3;goto B4b29a7;
case 0x4b29aa:c.instructions+=2;goto B4b29aa;
case 0x4b29ab:c.instructions+=1;goto B4b29ab;
case 0x4b29ae:goto L4b29ae;
case 0x4b29b0:c.instructions+=3;goto B4b29b0;
case 0x4b29b1:c.instructions+=2;goto B4b29b1;
case 0x4b29b3:c.instructions+=1;goto B4b29b3;
case 0x4b29b8:goto L4b29b8;
case 0x4b29ba:c.instructions+=4;goto B4b29ba;
case 0x4b29bb:c.instructions+=3;goto B4b29bb;
case 0x4b29bc:c.instructions+=2;goto B4b29bc;
case 0x4b29bf:c.instructions+=1;goto B4b29bf;
case 0x4b29c4:goto L4b29c4;
case 0x4b29c7:c.instructions+=3;goto B4b29c7;
case 0x4b29c8:c.instructions+=2;goto B4b29c8;
case 0x4b29c9:c.instructions+=1;goto B4b29c9;
case 0x4b29ce:goto L4b29ce;
case 0x4b29d1:c.instructions+=5;goto B4b29d1;
case 0x4b29d3:c.instructions+=4;goto B4b29d3;
case 0x4b29d4:c.instructions+=3;goto B4b29d4;
case 0x4b29d5:c.instructions+=2;goto B4b29d5;
case 0x4b29d6:c.instructions+=1;goto B4b29d6;
case 0x4b29d8:goto L4b29d8;
case 0x4b29de:c.instructions+=2;goto B4b29de;
case 0x4b29e0:c.instructions+=1;goto B4b29e0;
case 0x4b29e2:goto L4b29e2;
case 0x4b29e4:c.instructions+=2;goto B4b29e4;
case 0x4b29e6:c.instructions+=1;goto B4b29e6;
case 0x4b29e8:goto L4b29e8;
case 0x4b29f2:goto L4b29f2;
case 0x4b2a00:goto L4b2a00;
case 0x4b2a01:c.instructions+=6;goto B4b2a01;
case 0x4b2a02:c.instructions+=5;goto B4b2a02;
case 0x4b2a04:c.instructions+=4;goto B4b2a04;
case 0x4b2a07:c.instructions+=3;goto B4b2a07;
case 0x4b2a0a:c.instructions+=2;goto B4b2a0a;
case 0x4b2a0b:c.instructions+=1;goto B4b2a0b;
case 0x4b2a0e:goto L4b2a0e;
case 0x4b2a10:c.instructions+=3;goto B4b2a10;
case 0x4b2a11:c.instructions+=2;goto B4b2a11;
case 0x4b2a13:c.instructions+=1;goto B4b2a13;
case 0x4b2a18:goto L4b2a18;
case 0x4b2a1a:c.instructions+=4;goto B4b2a1a;
case 0x4b2a1b:c.instructions+=3;goto B4b2a1b;
case 0x4b2a1c:c.instructions+=2;goto B4b2a1c;
case 0x4b2a1f:c.instructions+=1;goto B4b2a1f;
case 0x4b2a24:goto L4b2a24;
case 0x4b2a27:c.instructions+=3;goto B4b2a27;
case 0x4b2a28:c.instructions+=2;goto B4b2a28;
case 0x4b2a29:c.instructions+=1;goto B4b2a29;
case 0x4b2a2e:goto L4b2a2e;
case 0x4b2a31:c.instructions+=2;goto B4b2a31;
case 0x4b2a33:c.instructions+=1;goto B4b2a33;
case 0x4b2a35:goto L4b2a35;
case 0x4b2a3b:c.instructions+=3;goto B4b2a3b;
case 0x4b2a3c:c.instructions+=2;goto B4b2a3c;
case 0x4b2a3d:c.instructions+=1;goto B4b2a3d;
case 0x4b2a42:goto L4b2a42;
case 0x4b2a45:c.instructions+=2;goto B4b2a45;
case 0x4b2a47:c.instructions+=1;goto B4b2a47;
case 0x4b2a49:goto L4b2a49;
case 0x4b2a50:c.instructions+=1;goto B4b2a50;
case 0x4b2a52:goto L4b2a52;
case 0x4b2a57:c.instructions+=1;goto B4b2a57;
case 0x4b2a5c:goto L4b2a5c;
case 0x4b2a62:c.instructions+=2;goto B4b2a62;
case 0x4b2a64:c.instructions+=1;goto B4b2a64;
case 0x4b2a66:goto L4b2a66;
case 0x4b2a68:c.instructions+=2;goto B4b2a68;
case 0x4b2a6a:c.instructions+=1;goto B4b2a6a;
case 0x4b2a6c:goto L4b2a6c;
case 0x4b2a76:goto L4b2a76;
case 0x4b2a77:c.instructions+=3;goto B4b2a77;
case 0x4b2a78:c.instructions+=2;goto B4b2a78;
case 0x4b2a79:c.instructions+=1;goto B4b2a79;
case 0x4b2a80:goto L4b2a80;
case 0x4b2a85:c.instructions+=3;goto B4b2a85;
case 0x4b2a88:c.instructions+=2;goto B4b2a88;
case 0x4b2a8e:c.instructions+=1;goto B4b2a8e;
case 0x4b2a90:goto L4b2a90;
case 0x4b2a93:c.instructions+=1;goto B4b2a93;
case 0x4b2a95:goto L4b2a95;
case 0x4b2a9a:c.instructions+=1;goto B4b2a9a;
case 0x4b2a9b:goto L4b2a9b;
case 0x4b2aa0:c.instructions+=1;goto B4b2aa0;
case 0x4b2aa2:goto L4b2aa2;
case 0x4b2aa5:c.instructions+=1;goto B4b2aa5;
case 0x4b2aa7:goto L4b2aa7;
case 0x4b2aae:c.instructions+=1;goto B4b2aae;
case 0x4b2ab0:goto L4b2ab0;
case 0x4b2ab5:c.instructions+=1;goto B4b2ab5;
case 0x4b2aba:goto L4b2aba;
case 0x4b2abb:c.instructions+=1;goto B4b2abb;
case 0x4b2ac0:goto L4b2ac0;
case 0x4b2ac6:c.instructions+=3;goto B4b2ac6;
case 0x4b2acb:c.instructions+=2;goto B4b2acb;
case 0x4b2ace:c.instructions+=1;goto B4b2ace;
case 0x4b2acf:goto L4b2acf;
case 0x4b2ad2:c.instructions+=1;goto B4b2ad2;
case 0x4b2ad4:goto L4b2ad4;
case 0x4b2ad9:c.instructions+=1;goto B4b2ad9;
case 0x4b2adb:goto L4b2adb;
case 0x4b2ade:c.instructions+=2;goto B4b2ade;
case 0x4b2ae3:c.instructions+=1;goto B4b2ae3;
case 0x4b2ae5:goto L4b2ae5;
case 0x4b2aea:goto L4b2aea;
case 0x4b2af0:goto L4b2af0;
case 0x4b2af5:c.instructions+=2;goto B4b2af5;
case 0x4b2af8:c.instructions+=1;goto B4b2af8;
case 0x4b2afa:goto L4b2afa;
case 0x4b2b01:c.instructions+=1;goto B4b2b01;
case 0x4b2b03:goto L4b2b03;
case 0x4b2b08:c.instructions+=1;goto B4b2b08;
case 0x4b2b09:goto L4b2b09;
case 0x4b2b0e:c.instructions+=1;goto B4b2b0e;
case 0x4b2b10:goto L4b2b10;
case 0x4b2b13:c.instructions+=1;goto B4b2b13;
case 0x4b2b15:goto L4b2b15;
case 0x4b2b1c:c.instructions+=1;goto B4b2b1c;
case 0x4b2b1e:goto L4b2b1e;
case 0x4b2b23:c.instructions+=1;goto B4b2b23;
case 0x4b2b30:goto L4b2b30;
case 0x4b2b34:c.instructions+=12;goto B4b2b34;
case 0x4b2b38:c.instructions+=11;goto B4b2b38;
case 0x4b2b39:c.instructions+=10;goto B4b2b39;
case 0x4b2b3a:c.instructions+=9;goto B4b2b3a;
case 0x4b2b3e:c.instructions+=8;goto B4b2b3e;
case 0x4b2b40:c.instructions+=7;goto B4b2b40;
case 0x4b2b44:c.instructions+=6;goto B4b2b44;
case 0x4b2b45:c.instructions+=5;goto B4b2b45;
case 0x4b2b46:c.instructions+=4;goto B4b2b46;
case 0x4b2b47:c.instructions+=3;goto B4b2b47;
case 0x4b2b48:c.instructions+=2;goto B4b2b48;
case 0x4b2b4a:c.instructions+=1;goto B4b2b4a;
case 0x4b2b4f:goto L4b2b4f;
case 0x4b2b55:c.instructions+=1;goto B4b2b55;
case 0x4b2b57:goto L4b2b57;
case 0x4b2b5d:c.instructions+=1;goto B4b2b5d;
case 0x4b2b5f:goto L4b2b5f;
case 0x4b2b65:c.instructions+=1;goto B4b2b65;
case 0x4b2b67:goto L4b2b67;
case 0x4b2b6d:c.instructions+=2;goto B4b2b6d;
case 0x4b2b73:c.instructions+=1;goto B4b2b73;
case 0x4b2b75:goto L4b2b75;
case 0x4b2b7b:c.instructions+=1;goto B4b2b7b;
case 0x4b2b7d:goto L4b2b7d;
case 0x4b2b83:c.instructions+=1;goto B4b2b83;
case 0x4b2b88:goto L4b2b88;
case 0x4b2b89:c.instructions+=2;goto B4b2b89;
case 0x4b2b8a:c.instructions+=1;goto B4b2b8a;
case 0x4b2b8d:goto L4b2b8d;
case 0x4b2b93:c.instructions+=1;goto B4b2b93;
case 0x4b2b98:goto L4b2b98;
case 0x4b2b99:c.instructions+=2;goto B4b2b99;
case 0x4b2b9a:c.instructions+=1;goto B4b2b9a;
case 0x4b2b9d:goto L4b2b9d;
case 0x4b2ba0:c.instructions+=4;goto B4b2ba0;
case 0x4b2ba5:c.instructions+=3;goto B4b2ba5;
case 0x4b2baa:c.instructions+=2;goto B4b2baa;
case 0x4b2bab:c.instructions+=1;goto B4b2bab;
case 0x4b2bb0:goto L4b2bb0;
case 0x4b2bb3:c.instructions+=2;goto B4b2bb3;
case 0x4b2bb5:c.instructions+=1;goto B4b2bb5;
case 0x4b2bb7:goto L4b2bb7;
case 0x4b2bba:c.instructions+=5;goto B4b2bba;
case 0x4b2bbc:c.instructions+=4;goto B4b2bbc;
case 0x4b2bc1:c.instructions+=3;goto B4b2bc1;
case 0x4b2bc6:c.instructions+=2;goto B4b2bc6;
case 0x4b2bc7:c.instructions+=1;goto B4b2bc7;
case 0x4b2bcc:goto L4b2bcc;
case 0x4b2bcf:goto L4b2bcf;
case 0x4b2bd0:c.instructions+=2;goto B4b2bd0;
case 0x4b2bd1:c.instructions+=1;goto B4b2bd1;
case 0x4b2be0:goto L4b2be0;
case 0x4b2be8:c.instructions+=1;goto B4b2be8;
case 0x4b2bea:goto L4b2bea;
case 0x4b2bec:c.instructions+=1;goto B4b2bec;
case 0x4b2bf1:goto L4b2bf1;
case 0x4b2bf2:goto L4b2bf2;
case 0x4b2c00:goto L4b2c00;
case 0x4b2c05:c.instructions+=2;goto B4b2c05;
case 0x4b2c08:c.instructions+=1;goto B4b2c08;
case 0x4b2c0a:goto L4b2c0a;
case 0x4b2c0f:c.instructions+=1;goto B4b2c0f;
case 0x4b2c11:goto L4b2c11;
case 0x4b2c15:c.instructions+=2;goto B4b2c15;
case 0x4b2c1b:c.instructions+=1;goto B4b2c1b;
case 0x4b2c1d:goto L4b2c1d;
case 0x4b2c21:c.instructions+=1;goto B4b2c21;
case 0x4b2c27:goto L4b2c27;
case 0x4b2c2a:c.instructions+=2;goto B4b2c2a;
case 0x4b2c2f:c.instructions+=1;goto B4b2c2f;
case 0x4b2c31:goto L4b2c31;
case 0x4b2c33:c.instructions+=1;goto B4b2c33;
case 0x4b2c38:goto L4b2c38;
case 0x4b2c3a:c.instructions+=2;goto B4b2c3a;
case 0x4b2c3f:c.instructions+=1;goto B4b2c3f;
case 0x4b2c44:goto L4b2c44;
case 0x4b2c45:goto L4b2c45;
case 0x4b2c47:c.instructions+=1;goto B4b2c47;
case 0x4b2c4c:goto L4b2c4c;
case 0x4b2c53:c.instructions+=1;goto B4b2c53;
case 0x4b2c55:goto L4b2c55;
case 0x4b2c57:c.instructions+=2;goto B4b2c57;
case 0x4b2c5c:c.instructions+=1;goto B4b2c5c;
case 0x4b2c61:goto L4b2c61;
case 0x4b2c62:goto L4b2c62;
case 0x4b2c64:c.instructions+=2;goto B4b2c64;
case 0x4b2c69:c.instructions+=1;goto B4b2c69;
case 0x4b2c6e:goto L4b2c6e;
case 0x4b2c70:goto L4b2c70;
case 0x4b2c78:c.instructions+=1;goto B4b2c78;
case 0x4b2c7a:goto L4b2c7a;
case 0x4b2c7c:c.instructions+=1;goto B4b2c7c;
case 0x4b2c81:goto L4b2c81;
case 0x4b2c82:goto L4b2c82;
case 0x4b2c90:goto L4b2c90;
case 0x4b2c98:c.instructions+=1;goto B4b2c98;
case 0x4b2c9a:goto L4b2c9a;
case 0x4b2c9c:c.instructions+=1;goto B4b2c9c;
case 0x4b2ca1:goto L4b2ca1;
case 0x4b2ca2:goto L4b2ca2;
case 0x4b2cb0:goto L4b2cb0;
case 0x4b2cb8:c.instructions+=1;goto B4b2cb8;
case 0x4b2cba:goto L4b2cba;
case 0x4b2cbc:c.instructions+=1;goto B4b2cbc;
case 0x4b2cc1:goto L4b2cc1;
case 0x4b2cc2:goto L4b2cc2;
case 0x4b2cd0:goto L4b2cd0;
case 0x4b2cd8:c.instructions+=1;goto B4b2cd8;
case 0x4b2cda:goto L4b2cda;
case 0x4b2cdf:c.instructions+=1;goto B4b2cdf;
case 0x4b2ce4:goto L4b2ce4;
case 0x4b2ce6:c.instructions+=1;goto B4b2ce6;
case 0x4b2ceb:goto L4b2ceb;
case 0x4b2cec:goto L4b2cec;
case 0x4b2cf0:goto L4b2cf0;
case 0x4b2cf8:c.instructions+=1;goto B4b2cf8;
case 0x4b2cfa:goto L4b2cfa;
case 0x4b2cfc:c.instructions+=1;goto B4b2cfc;
case 0x4b2d01:goto L4b2d01;
case 0x4b2d04:c.instructions+=2;goto B4b2d04;
case 0x4b2d09:c.instructions+=1;goto B4b2d09;
case 0x4b2d0e:goto L4b2d0e;
case 0x4b2d13:c.instructions+=1;goto B4b2d13;
case 0x4b2d1a:goto L4b2d1a;
case 0x4b2d20:goto L4b2d20;
case 0x4b2d28:c.instructions+=1;goto B4b2d28;
case 0x4b2d2a:goto L4b2d2a;
case 0x4b2d2c:c.instructions+=1;goto B4b2d2c;
case 0x4b2d31:goto L4b2d31;
case 0x4b2d32:goto L4b2d32;
case 0x4b2d40:goto L4b2d40;
case 0x4b2d48:c.instructions+=1;goto B4b2d48;
case 0x4b2d4a:goto L4b2d4a;
case 0x4b2d4c:c.instructions+=1;goto B4b2d4c;
case 0x4b2d51:goto L4b2d51;
case 0x4b2d52:goto L4b2d52;
case 0x4b2d60:goto L4b2d60;
case 0x4b2d62:c.instructions+=11;goto B4b2d62;
case 0x4b2d67:c.instructions+=10;goto B4b2d67;
case 0x4b2d6d:c.instructions+=9;goto B4b2d6d;
case 0x4b2d6e:c.instructions+=8;goto B4b2d6e;
case 0x4b2d75:c.instructions+=7;goto B4b2d75;
case 0x4b2d76:c.instructions+=6;goto B4b2d76;
case 0x4b2d77:c.instructions+=5;goto B4b2d77;
case 0x4b2d78:c.instructions+=4;goto B4b2d78;
case 0x4b2d7a:c.instructions+=3;goto B4b2d7a;
case 0x4b2d7b:c.instructions+=2;goto B4b2d7b;
case 0x4b2d80:c.instructions+=1;goto B4b2d80;
case 0x4b2d85:goto L4b2d85;
case 0x4b2d87:c.instructions+=2;goto B4b2d87;
case 0x4b2d8b:c.instructions+=1;goto B4b2d8b;
case 0x4b2d90:goto L4b2d90;
case 0x4b2d92:c.instructions+=5;goto B4b2d92;
case 0x4b2d95:c.instructions+=4;goto B4b2d95;
case 0x4b2d99:c.instructions+=3;goto B4b2d99;
case 0x4b2d9b:c.instructions+=2;goto B4b2d9b;
case 0x4b2da3:c.instructions+=1;goto B4b2da3;
case 0x4b2da5:goto L4b2da5;
case 0x4b2da7:c.instructions+=4;goto B4b2da7;
case 0x4b2dac:c.instructions+=3;goto B4b2dac;
case 0x4b2db1:c.instructions+=2;goto B4b2db1;
case 0x4b2db3:c.instructions+=1;goto B4b2db3;
case 0x4b2db8:goto L4b2db8;
case 0x4b2dbe:c.instructions+=1;goto B4b2dbe;
case 0x4b2dc0:goto L4b2dc0;
case 0x4b2dc2:goto L4b2dc2;
case 0x4b2dc4:c.instructions+=5;goto B4b2dc4;
case 0x4b2dc7:c.instructions+=4;goto B4b2dc7;
case 0x4b2dc8:c.instructions+=3;goto B4b2dc8;
case 0x4b2dca:c.instructions+=2;goto B4b2dca;
case 0x4b2dce:c.instructions+=1;goto B4b2dce;
case 0x4b2dd1:goto L4b2dd1;
case 0x4b2dd3:c.instructions+=1;goto B4b2dd3;
case 0x4b2dd8:goto L4b2dd8;
case 0x4b2dda:c.instructions+=5;goto B4b2dda;
case 0x4b2ddd:c.instructions+=4;goto B4b2ddd;
case 0x4b2de1:c.instructions+=3;goto B4b2de1;
case 0x4b2de3:c.instructions+=2;goto B4b2de3;
case 0x4b2deb:c.instructions+=1;goto B4b2deb;
case 0x4b2ded:goto L4b2ded;
case 0x4b2def:c.instructions+=4;goto B4b2def;
case 0x4b2df4:c.instructions+=3;goto B4b2df4;
case 0x4b2df9:c.instructions+=2;goto B4b2df9;
case 0x4b2dfb:c.instructions+=1;goto B4b2dfb;
case 0x4b2e00:goto L4b2e00;
case 0x4b2e06:c.instructions+=1;goto B4b2e06;
case 0x4b2e08:goto L4b2e08;
case 0x4b2e0a:goto L4b2e0a;
case 0x4b2e0c:c.instructions+=4;goto B4b2e0c;
case 0x4b2e0d:c.instructions+=3;goto B4b2e0d;
case 0x4b2e0f:c.instructions+=2;goto B4b2e0f;
case 0x4b2e13:c.instructions+=1;goto B4b2e13;
case 0x4b2e16:goto L4b2e16;
case 0x4b2e18:c.instructions+=1;goto B4b2e18;
case 0x4b2e1d:goto L4b2e1d;
case 0x4b2e1f:c.instructions+=5;goto B4b2e1f;
case 0x4b2e22:c.instructions+=4;goto B4b2e22;
case 0x4b2e26:c.instructions+=3;goto B4b2e26;
case 0x4b2e28:c.instructions+=2;goto B4b2e28;
case 0x4b2e30:c.instructions+=1;goto B4b2e30;
case 0x4b2e32:goto L4b2e32;
case 0x4b2e34:c.instructions+=4;goto B4b2e34;
case 0x4b2e39:c.instructions+=3;goto B4b2e39;
case 0x4b2e3e:c.instructions+=2;goto B4b2e3e;
case 0x4b2e40:c.instructions+=1;goto B4b2e40;
case 0x4b2e45:goto L4b2e45;
case 0x4b2e4b:c.instructions+=1;goto B4b2e4b;
case 0x4b2e4d:goto L4b2e4d;
case 0x4b2e4f:goto L4b2e4f;
case 0x4b2e51:c.instructions+=4;goto B4b2e51;
case 0x4b2e52:c.instructions+=3;goto B4b2e52;
case 0x4b2e54:c.instructions+=2;goto B4b2e54;
case 0x4b2e58:c.instructions+=1;goto B4b2e58;
case 0x4b2e5b:goto L4b2e5b;
case 0x4b2e5d:c.instructions+=1;goto B4b2e5d;
case 0x4b2e62:goto L4b2e62;
case 0x4b2e64:c.instructions+=5;goto B4b2e64;
case 0x4b2e67:c.instructions+=4;goto B4b2e67;
case 0x4b2e6b:c.instructions+=3;goto B4b2e6b;
case 0x4b2e6d:c.instructions+=2;goto B4b2e6d;
case 0x4b2e75:c.instructions+=1;goto B4b2e75;
case 0x4b2e77:goto L4b2e77;
case 0x4b2e79:c.instructions+=4;goto B4b2e79;
case 0x4b2e7e:c.instructions+=3;goto B4b2e7e;
case 0x4b2e83:c.instructions+=2;goto B4b2e83;
case 0x4b2e85:c.instructions+=1;goto B4b2e85;
case 0x4b2e8a:goto L4b2e8a;
case 0x4b2e90:c.instructions+=1;goto B4b2e90;
case 0x4b2e92:goto L4b2e92;
case 0x4b2e94:goto L4b2e94;
case 0x4b2e96:c.instructions+=4;goto B4b2e96;
case 0x4b2e97:c.instructions+=3;goto B4b2e97;
case 0x4b2e99:c.instructions+=2;goto B4b2e99;
case 0x4b2e9d:c.instructions+=1;goto B4b2e9d;
case 0x4b2ea0:goto L4b2ea0;
case 0x4b2ea2:c.instructions+=1;goto B4b2ea2;
case 0x4b2ea7:goto L4b2ea7;
case 0x4b2ea9:c.instructions+=5;goto B4b2ea9;
case 0x4b2eac:c.instructions+=4;goto B4b2eac;
case 0x4b2eb0:c.instructions+=3;goto B4b2eb0;
case 0x4b2eb2:c.instructions+=2;goto B4b2eb2;
case 0x4b2eba:c.instructions+=1;goto B4b2eba;
case 0x4b2ebc:goto L4b2ebc;
case 0x4b2ebe:c.instructions+=4;goto B4b2ebe;
case 0x4b2ec3:c.instructions+=3;goto B4b2ec3;
case 0x4b2ec8:c.instructions+=2;goto B4b2ec8;
case 0x4b2eca:c.instructions+=1;goto B4b2eca;
case 0x4b2ecf:goto L4b2ecf;
case 0x4b2ed5:c.instructions+=1;goto B4b2ed5;
case 0x4b2ed7:goto L4b2ed7;
case 0x4b2ed9:goto L4b2ed9;
case 0x4b2edb:c.instructions+=4;goto B4b2edb;
case 0x4b2edc:c.instructions+=3;goto B4b2edc;
case 0x4b2ede:c.instructions+=2;goto B4b2ede;
case 0x4b2ee2:c.instructions+=1;goto B4b2ee2;
case 0x4b2ee5:goto L4b2ee5;
case 0x4b2ee7:c.instructions+=1;goto B4b2ee7;
case 0x4b2eec:goto L4b2eec;
case 0x4b2eee:c.instructions+=5;goto B4b2eee;
case 0x4b2ef1:c.instructions+=4;goto B4b2ef1;
case 0x4b2ef5:c.instructions+=3;goto B4b2ef5;
case 0x4b2ef7:c.instructions+=2;goto B4b2ef7;
case 0x4b2eff:c.instructions+=1;goto B4b2eff;
case 0x4b2f01:goto L4b2f01;
case 0x4b2f03:c.instructions+=4;goto B4b2f03;
case 0x4b2f08:c.instructions+=3;goto B4b2f08;
case 0x4b2f0d:c.instructions+=2;goto B4b2f0d;
case 0x4b2f0f:c.instructions+=1;goto B4b2f0f;
case 0x4b2f14:goto L4b2f14;
case 0x4b2f1a:c.instructions+=1;goto B4b2f1a;
case 0x4b2f1c:goto L4b2f1c;
case 0x4b2f1e:goto L4b2f1e;
case 0x4b2f20:c.instructions+=4;goto B4b2f20;
case 0x4b2f21:c.instructions+=3;goto B4b2f21;
case 0x4b2f23:c.instructions+=2;goto B4b2f23;
case 0x4b2f27:c.instructions+=1;goto B4b2f27;
case 0x4b2f2a:goto L4b2f2a;
case 0x4b2f2f:c.instructions+=2;goto B4b2f2f;
case 0x4b2f32:c.instructions+=1;goto B4b2f32;
case 0x4b2f34:goto L4b2f34;
case 0x4b2f39:c.instructions+=1;goto B4b2f39;
case 0x4b2f3b:goto L4b2f3b;
case 0x4b2f3e:c.instructions+=1;goto B4b2f3e;
case 0x4b2f40:goto L4b2f40;
case 0x4b2f42:c.instructions+=1;goto B4b2f42;
case 0x4b2f47:goto L4b2f47;
case 0x4b2f49:c.instructions+=5;goto B4b2f49;
case 0x4b2f4c:c.instructions+=4;goto B4b2f4c;
case 0x4b2f50:c.instructions+=3;goto B4b2f50;
case 0x4b2f52:c.instructions+=2;goto B4b2f52;
case 0x4b2f5a:c.instructions+=1;goto B4b2f5a;
case 0x4b2f5c:goto L4b2f5c;
case 0x4b2f5e:c.instructions+=4;goto B4b2f5e;
case 0x4b2f63:c.instructions+=3;goto B4b2f63;
case 0x4b2f68:c.instructions+=2;goto B4b2f68;
case 0x4b2f6a:c.instructions+=1;goto B4b2f6a;
case 0x4b2f6f:goto L4b2f6f;
case 0x4b2f75:c.instructions+=1;goto B4b2f75;
case 0x4b2f77:goto L4b2f77;
case 0x4b2f79:goto L4b2f79;
case 0x4b2f7b:c.instructions+=4;goto B4b2f7b;
case 0x4b2f7c:c.instructions+=3;goto B4b2f7c;
case 0x4b2f7e:c.instructions+=2;goto B4b2f7e;
case 0x4b2f82:c.instructions+=1;goto B4b2f82;
case 0x4b2f85:goto L4b2f85;
case 0x4b2f8a:goto L4b2f8a;
case 0x4b2f8d:c.instructions+=1;goto B4b2f8d;
case 0x4b2f8f:goto L4b2f8f;
case 0x4b2f94:c.instructions+=1;goto B4b2f94;
case 0x4b2f96:goto L4b2f96;
case 0x4b2f99:c.instructions+=1;goto B4b2f99;
case 0x4b2f9b:goto L4b2f9b;
case 0x4b2f9d:c.instructions+=1;goto B4b2f9d;
case 0x4b2fa2:goto L4b2fa2;
case 0x4b2fa4:c.instructions+=5;goto B4b2fa4;
case 0x4b2fa7:c.instructions+=4;goto B4b2fa7;
case 0x4b2fab:c.instructions+=3;goto B4b2fab;
case 0x4b2fad:c.instructions+=2;goto B4b2fad;
case 0x4b2fb5:c.instructions+=1;goto B4b2fb5;
case 0x4b2fb7:goto L4b2fb7;
case 0x4b2fb9:c.instructions+=4;goto B4b2fb9;
case 0x4b2fbe:c.instructions+=3;goto B4b2fbe;
case 0x4b2fc3:c.instructions+=2;goto B4b2fc3;
case 0x4b2fc5:c.instructions+=1;goto B4b2fc5;
case 0x4b2fca:goto L4b2fca;
case 0x4b2fd0:c.instructions+=1;goto B4b2fd0;
case 0x4b2fd2:goto L4b2fd2;
case 0x4b2fd4:goto L4b2fd4;
case 0x4b2fd6:c.instructions+=4;goto B4b2fd6;
case 0x4b2fd7:c.instructions+=3;goto B4b2fd7;
case 0x4b2fd9:c.instructions+=2;goto B4b2fd9;
case 0x4b2fdd:c.instructions+=1;goto B4b2fdd;
case 0x4b2fe0:goto L4b2fe0;
case 0x4b2fe3:c.instructions+=4;goto B4b2fe3;
case 0x4b2fe6:c.instructions+=3;goto B4b2fe6;
case 0x4b2fe9:c.instructions+=2;goto B4b2fe9;
case 0x4b2fea:c.instructions+=1;goto B4b2fea;
case 0x4b2fef:goto L4b2fef;
case 0x4b2ff2:c.instructions+=3;goto B4b2ff2;
case 0x4b2ff3:c.instructions+=2;goto B4b2ff3;
case 0x4b2ff5:c.instructions+=1;goto B4b2ff5;
case 0x4b2ff8:goto L4b2ff8;
case 0x4b2ffc:c.instructions+=4;goto B4b2ffc;
case 0x4b2ffd:c.instructions+=3;goto B4b2ffd;
case 0x4b2ffe:c.instructions+=2;goto B4b2ffe;
case 0x4b2fff:c.instructions+=1;goto B4b2fff;
default:missing_instruction(c.pc);}
B4b2003:L4b2003:{c.instructions+=3;NFSU2_TR(0x4b2003);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b2006:{NFSU2_TR(0x4b2006);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b2008:{NFSU2_TR(0x4b2008);
if(r1(R+518)){{goto L4b2017;}}
}
B4b200a:L4b200a:{c.instructions+=3;NFSU2_TR(0x4b200a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b200c:{NFSU2_TR(0x4b200c);
__builtin_memmove((R+4),(R+24),4);
}
B4b200e:{NFSU2_TR(0x4b200e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2013ull));
TAIL_STATIC(0x4b1e60u,4b1);
}
B4b2013:L4b2013:{c.instructions+=2;NFSU2_TR(0x4b2013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b2014:{NFSU2_TR(0x4b2014);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2017:L4b2017:{c.instructions+=3;NFSU2_TR(0x4b2017);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b201d:{NFSU2_TR(0x4b201d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b201e:{NFSU2_TR(0x4b201e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2023ull));
TAIL_STATIC(0x52d100u,52d);
}
B4b2023:L4b2023:{c.instructions+=3;NFSU2_TR(0x4b2023);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b2026:{NFSU2_TR(0x4b2026);
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
B4b2028:{NFSU2_TR(0x4b2028);
if(r1(R+518)){{goto L4b2033;}}
}
B4b202a:L4b202a:{c.instructions+=3;NFSU2_TR(0x4b202a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b202c:{NFSU2_TR(0x4b202c);
__builtin_memmove((R+4),(R+24),4);
}
B4b202e:{NFSU2_TR(0x4b202e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2033ull));
TAIL_STATIC(0x4b1e60u,4b1);
}
B4b2033:L4b2033:{c.instructions+=2;NFSU2_TR(0x4b2033);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b2034:{NFSU2_TR(0x4b2034);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2040:L4b2040:{c.instructions+=10;NFSU2_TR(0x4b2040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B4b2043:{NFSU2_TR(0x4b2043);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2044:{NFSU2_TR(0x4b2044);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2045:{NFSU2_TR(0x4b2045);
__builtin_memmove((R+12),(R+4),4);
}
B4b2047:{NFSU2_TR(0x4b2047);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b204a:{NFSU2_TR(0x4b204a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b204c:{NFSU2_TR(0x4b204c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b204d:{NFSU2_TR(0x4b204d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b204e:{NFSU2_TR(0x4b204e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b2051:{NFSU2_TR(0x4b2051);
if(r1(R+518)){{goto L4b2058;}}
}
B4b2053:L4b2053:{c.instructions+=2;NFSU2_TR(0x4b2053);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4b2056:{NFSU2_TR(0x4b2056);
{goto L4b205a;}
}
B4b2058:L4b2058:{c.instructions+=1;NFSU2_TR(0x4b2058);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b205a:L4b205a:{c.instructions+=3;NFSU2_TR(0x4b205a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b205d:{NFSU2_TR(0x4b205d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b205f:{NFSU2_TR(0x4b205f);
if(r1(R+518)){{goto L4b206a;}}
}
B4b2061:L4b2061:{c.instructions+=3;NFSU2_TR(0x4b2061);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4b2064:{NFSU2_TR(0x4b2064);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2068:{NFSU2_TR(0x4b2068);
{goto L4b2072;}
}
B4b206a:L4b206a:{c.instructions+=1;NFSU2_TR(0x4b206a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b2072:L4b2072:{c.instructions+=1;NFSU2_TR(0x4b2072);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b2074:L4b2074:{c.instructions+=5;NFSU2_TR(0x4b2074);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b2077:{NFSU2_TR(0x4b2077);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b207a:{NFSU2_TR(0x4b207a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b207b:{NFSU2_TR(0x4b207b);
u8 U[4];
w4(U+0,u32(0x790f98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2080:{NFSU2_TR(0x4b2080);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2085ull));
TAIL_STATIC(0x50b990u,50b);
}
B4b2085:L4b2085:{c.instructions+=3;NFSU2_TR(0x4b2085);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2086:{NFSU2_TR(0x4b2086);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2087:{NFSU2_TR(0x4b2087);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b208cull));
TAIL_STATIC(0x5379c0u,537);
}
B4b208c:L4b208c:{c.instructions+=4;NFSU2_TR(0x4b208c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4b208f:{NFSU2_TR(0x4b208f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2091:{NFSU2_TR(0x4b2091);
__builtin_memmove((R+24),(R+0),4);
}
B4b2093:{NFSU2_TR(0x4b2093);
if(r1(R+518)){{goto L4b20f2;}}
}
B4b2095:L4b2095:{c.instructions+=2;NFSU2_TR(0x4b2095);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b2099:{NFSU2_TR(0x4b2099);
if(r1(R+518)){{goto L4b20f2;}}
}
B4b209b:L4b209b:{c.instructions+=7;NFSU2_TR(0x4b209b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b209e:{NFSU2_TR(0x4b209e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b20a0:{NFSU2_TR(0x4b20a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4b20a4:{NFSU2_TR(0x4b20a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b20a5:{NFSU2_TR(0x4b20a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4b20a9:{NFSU2_TR(0x4b20a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b20aa:{NFSU2_TR(0x4b20aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b20afull));
TAIL_STATIC(0x4974a0u,497);
}
B4b20af:L4b20af:{c.instructions+=2;NFSU2_TR(0x4b20af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b20b0:{NFSU2_TR(0x4b20b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b20b5ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b20b5:L4b20b5:{c.instructions+=4;NFSU2_TR(0x4b20b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4b20b9:{NFSU2_TR(0x4b20b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b20ba:{NFSU2_TR(0x4b20ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b20bb:{NFSU2_TR(0x4b20bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b20c0ull));
TAIL_STATIC(0x51d860u,51d);
}
B4b20c0:L4b20c0:{c.instructions+=5;NFSU2_TR(0x4b20c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b20c3:{NFSU2_TR(0x4b20c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b20c6:{NFSU2_TR(0x4b20c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4b20c9:{NFSU2_TR(0x4b20c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b20cb:{NFSU2_TR(0x4b20cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b20d4;}}
}
B4b20cd:L4b20cd:{c.instructions+=2;NFSU2_TR(0x4b20cd);
u8 U[4];
w4(U+0,u32(0xee28ac57ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b20d2:{NFSU2_TR(0x4b20d2);
{goto L4b20d9;}
}
B4b20d4:L4b20d4:{c.instructions+=1;NFSU2_TR(0x4b20d4);
u8 U[4];
w4(U+0,u32(0x4b9b8f5aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b20d9:L4b20d9:{c.instructions+=2;NFSU2_TR(0x4b20d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b20da:{NFSU2_TR(0x4b20da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b20dfull));
TAIL_STATIC(0x50c990u,50c);
}
B4b20df:L4b20df:{c.instructions+=4;NFSU2_TR(0x4b20df);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b20e2:{NFSU2_TR(0x4b20e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b20e5:{NFSU2_TR(0x4b20e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b20e7:{NFSU2_TR(0x4b20e7);
if(r1(R+518)){{goto L4b20ee;}}
}
B4b20e9:L4b20e9:{c.instructions+=2;NFSU2_TR(0x4b20e9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
}
B4b20ec:{NFSU2_TR(0x4b20ec);
{goto L4b20fb;}
}
B4b20ee:L4b20ee:{c.instructions+=2;NFSU2_TR(0x4b20ee);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b20f0:{NFSU2_TR(0x4b20f0);
{goto L4b20fb;}
}
B4b20f2:L4b20f2:{c.instructions+=2;NFSU2_TR(0x4b20f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b20f3:{NFSU2_TR(0x4b20f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b20f8ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b20f8:L4b20f8:{c.instructions+=1;NFSU2_TR(0x4b20f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b20fb:L4b20fb:{c.instructions+=3;NFSU2_TR(0x4b20fb);
__builtin_memmove((R+0),(R+20),4);
}
B4b20fd:{NFSU2_TR(0x4b20fd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4b2100:{NFSU2_TR(0x4b2100);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b2074u);}goto L4b2074;}}
}
B4b2106:L4b2106:{c.instructions+=6;NFSU2_TR(0x4b2106);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b2107:{NFSU2_TR(0x4b2107);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b2108:{NFSU2_TR(0x4b2108);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b2109:{NFSU2_TR(0x4b2109);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b210a:{NFSU2_TR(0x4b210a);
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
B4b210d:{NFSU2_TR(0x4b210d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2110:L4b2110:{c.instructions+=6;NFSU2_TR(0x4b2110);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2114:{NFSU2_TR(0x4b2114);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b2117:{NFSU2_TR(0x4b2117);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2118:{NFSU2_TR(0x4b2118);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2119:{NFSU2_TR(0x4b2119);
__builtin_memmove((R+28),(R+4),4);
}
B4b211b:{NFSU2_TR(0x4b211b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2155;}}
}
B4b211d:L4b211d:{c.instructions+=4;NFSU2_TR(0x4b211d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2123:{NFSU2_TR(0x4b2123);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2125:{NFSU2_TR(0x4b2125);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfcull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b212b:{NFSU2_TR(0x4b212b);
if(r1(R+518)){{goto L4b2132;}}
}
B4b212d:L4b212d:{c.instructions+=2;NFSU2_TR(0x4b212d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4b2130:{NFSU2_TR(0x4b2130);
{goto L4b2134;}
}
B4b2132:L4b2132:{c.instructions+=1;NFSU2_TR(0x4b2132);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b2134:L4b2134:{c.instructions+=2;NFSU2_TR(0x4b2134);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
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
B4b2137:{NFSU2_TR(0x4b2137);
if(r1(R+518)){{goto L4b218b;}}
}
B4b2139:L4b2139:{c.instructions+=5;NFSU2_TR(0x4b2139);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b213c:{NFSU2_TR(0x4b213c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b213e:{NFSU2_TR(0x4b213e);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2140:{NFSU2_TR(0x4b2140);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2141:{NFSU2_TR(0x4b2141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2146ull));
TAIL_STATIC(0x50d150u,50d);
}
B4b2146:L4b2146:{c.instructions+=3;NFSU2_TR(0x4b2146);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b2149:{NFSU2_TR(0x4b2149);
__builtin_memmove((R+4),(R+24),4);
}
B4b214b:{NFSU2_TR(0x4b214b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2150ull));
TAIL_STATIC(0x54eb60u,54e);
}
B4b2150:L4b2150:{c.instructions+=3;NFSU2_TR(0x4b2150);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b2151:{NFSU2_TR(0x4b2151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b2152:{NFSU2_TR(0x4b2152);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2155:L4b2155:{c.instructions+=2;NFSU2_TR(0x4b2155);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b2158:{NFSU2_TR(0x4b2158);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b218b;}}
}
B4b215a:L4b215a:{c.instructions+=4;NFSU2_TR(0x4b215a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2160:{NFSU2_TR(0x4b2160);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2162:{NFSU2_TR(0x4b2162);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b2168:{NFSU2_TR(0x4b2168);
if(r1(R+518)){{goto L4b216f;}}
}
B4b216a:L4b216a:{c.instructions+=2;NFSU2_TR(0x4b216a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4b216d:{NFSU2_TR(0x4b216d);
{goto L4b2171;}
}
B4b216f:L4b216f:{c.instructions+=1;NFSU2_TR(0x4b216f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b2171:L4b2171:{c.instructions+=2;NFSU2_TR(0x4b2171);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
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
B4b2174:{NFSU2_TR(0x4b2174);
if(r1(R+518)){{goto L4b218b;}}
}
B4b2176:L4b2176:{c.instructions+=1;NFSU2_TR(0x4b2176);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b217bull));
TAIL_STATIC(0x54eb40u,54e);
}
B4b217b:L4b217b:{c.instructions+=5;NFSU2_TR(0x4b217b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b217e:{NFSU2_TR(0x4b217e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2180:{NFSU2_TR(0x4b2180);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2182:{NFSU2_TR(0x4b2182);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2183:{NFSU2_TR(0x4b2183);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2188ull));
TAIL_STATIC(0x50d150u,50d);
}
B4b2188:L4b2188:{c.instructions+=1;NFSU2_TR(0x4b2188);
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
B4b218b:L4b218b:{c.instructions+=3;NFSU2_TR(0x4b218b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b218c:{NFSU2_TR(0x4b218c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b218d:{NFSU2_TR(0x4b218d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2190:L4b2190:{c.instructions+=5;NFSU2_TR(0x4b2190);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2191:{NFSU2_TR(0x4b2191);
__builtin_memmove((R+24),(R+4),4);
}
B4b2193:{NFSU2_TR(0x4b2193);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2196:{NFSU2_TR(0x4b2196);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2198:{NFSU2_TR(0x4b2198);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b21b7;}}
}
B4b219a:L4b219a:{c.instructions+=3;NFSU2_TR(0x4b219a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b21a0:{NFSU2_TR(0x4b21a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b21a1:{NFSU2_TR(0x4b21a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b21a6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b21a6:L4b21a6:{c.instructions+=3;NFSU2_TR(0x4b21a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b21ac:{NFSU2_TR(0x4b21ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b21ad:{NFSU2_TR(0x4b21ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b21b2ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b21b2:L4b21b2:{c.instructions+=3;NFSU2_TR(0x4b21b2);
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
B4b21b5:{NFSU2_TR(0x4b21b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b21b6:{NFSU2_TR(0x4b21b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b21b7:L4b21b7:{c.instructions+=3;NFSU2_TR(0x4b21b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b21ba:{NFSU2_TR(0x4b21ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b21bc:{NFSU2_TR(0x4b21bc);
if(r1(R+518)){{goto L4b21c3;}}
}
B4b21be:L4b21be:{c.instructions+=2;NFSU2_TR(0x4b21be);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4b21c1:{NFSU2_TR(0x4b21c1);
{goto L4b21c5;}
}
B4b21c3:L4b21c3:{c.instructions+=1;NFSU2_TR(0x4b21c3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b21c5:L4b21c5:{c.instructions+=2;NFSU2_TR(0x4b21c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b21c8:{NFSU2_TR(0x4b21c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b21e7;}}
}
B4b21ca:L4b21ca:{c.instructions+=3;NFSU2_TR(0x4b21ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b21d0:{NFSU2_TR(0x4b21d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b21d1:{NFSU2_TR(0x4b21d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b21d6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b21d6:L4b21d6:{c.instructions+=3;NFSU2_TR(0x4b21d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b21dc:{NFSU2_TR(0x4b21dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b21dd:{NFSU2_TR(0x4b21dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b21e2ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b21e2:L4b21e2:{c.instructions+=3;NFSU2_TR(0x4b21e2);
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
B4b21e5:{NFSU2_TR(0x4b21e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b21e6:{NFSU2_TR(0x4b21e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b21e7:L4b21e7:{c.instructions+=3;NFSU2_TR(0x4b21e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b21ea:{NFSU2_TR(0x4b21ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b21ec:{NFSU2_TR(0x4b21ec);
if(r1(R+518)){{goto L4b21f3;}}
}
B4b21ee:L4b21ee:{c.instructions+=2;NFSU2_TR(0x4b21ee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4b21f1:{NFSU2_TR(0x4b21f1);
{goto L4b21f5;}
}
B4b21f3:L4b21f3:{c.instructions+=1;NFSU2_TR(0x4b21f3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b21f5:L4b21f5:{c.instructions+=2;NFSU2_TR(0x4b21f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b21f8:{NFSU2_TR(0x4b21f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2217;}}
}
B4b21fa:L4b21fa:{c.instructions+=3;NFSU2_TR(0x4b21fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b2200:{NFSU2_TR(0x4b2200);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2201:{NFSU2_TR(0x4b2201);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2206ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b2206:L4b2206:{c.instructions+=3;NFSU2_TR(0x4b2206);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b220c:{NFSU2_TR(0x4b220c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b220d:{NFSU2_TR(0x4b220d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2212ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b2212:L4b2212:{c.instructions+=3;NFSU2_TR(0x4b2212);
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
B4b2215:{NFSU2_TR(0x4b2215);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b2216:{NFSU2_TR(0x4b2216);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2217:L4b2217:{c.instructions+=3;NFSU2_TR(0x4b2217);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b221d:{NFSU2_TR(0x4b221d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b221e:{NFSU2_TR(0x4b221e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2223ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b2223:L4b2223:{c.instructions+=3;NFSU2_TR(0x4b2223);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b2229:{NFSU2_TR(0x4b2229);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b222a:{NFSU2_TR(0x4b222a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b222full));
TAIL_STATIC(0x50ca50u,50c);
}
B4b222f:L4b222f:{c.instructions+=3;NFSU2_TR(0x4b222f);
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
B4b2232:{NFSU2_TR(0x4b2232);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b2233:{NFSU2_TR(0x4b2233);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2240:L4b2240:{c.instructions+=8;NFSU2_TR(0x4b2240);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2242:{NFSU2_TR(0x4b2242);
u8 U[4];
w4(U+0,u32(0x772ec4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2247:{NFSU2_TR(0x4b2247);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b224d:{NFSU2_TR(0x4b224d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b224e:{NFSU2_TR(0x4b224e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2255:{NFSU2_TR(0x4b2255);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2256:{NFSU2_TR(0x4b2256);
u8 U[4];
w4(U+0,u32(0x104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b225b:{NFSU2_TR(0x4b225b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2260ull));
TAIL_STATIC(0x575620u,575);
}
B4b2260:L4b2260:{c.instructions+=5;NFSU2_TR(0x4b2260);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b2263:{NFSU2_TR(0x4b2263);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4b2267:{NFSU2_TR(0x4b2267);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2269:{NFSU2_TR(0x4b2269);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b2271:{NFSU2_TR(0x4b2271);
if(r1(R+518)){{goto L4b228e;}}
}
B4b2273:L4b2273:{c.instructions+=4;NFSU2_TR(0x4b2273);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b2277:{NFSU2_TR(0x4b2277);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2278:{NFSU2_TR(0x4b2278);
__builtin_memmove((R+4),(R+0),4);
}
B4b227a:{NFSU2_TR(0x4b227a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b227full));
TAIL_STATIC(0x497850u,497);
}
B4b227f:L4b227f:{c.instructions+=4;NFSU2_TR(0x4b227f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b2283:{NFSU2_TR(0x4b2283);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b228a:{NFSU2_TR(0x4b228a);
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
B4b228d:{NFSU2_TR(0x4b228d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b228e:L4b228e:{c.instructions+=5;NFSU2_TR(0x4b228e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b2292:{NFSU2_TR(0x4b2292);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b2294:{NFSU2_TR(0x4b2294);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b229b:{NFSU2_TR(0x4b229b);
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
B4b229e:{NFSU2_TR(0x4b229e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b22a0:L4b22a0:{c.instructions+=3;NFSU2_TR(0x4b22a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b22a1:{NFSU2_TR(0x4b22a1);
__builtin_memmove((R+24),(R+4),4);
}
B4b22a3:{NFSU2_TR(0x4b22a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b22a8ull));
TAIL_STATIC(0x497a80u,497);
}
B4b22a8:L4b22a8:{c.instructions+=2;NFSU2_TR(0x4b22a8);
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
B4b22ad:{NFSU2_TR(0x4b22ad);
if(r1(R+518)){{goto L4b22b8;}}
}
B4b22af:L4b22af:{c.instructions+=2;NFSU2_TR(0x4b22af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b22b0:{NFSU2_TR(0x4b22b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b22b5ull));
TAIL_STATIC(0x575630u,575);
}
B4b22b5:L4b22b5:{c.instructions+=1;NFSU2_TR(0x4b22b5);
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
B4b22b8:L4b22b8:{c.instructions+=3;NFSU2_TR(0x4b22b8);
__builtin_memmove((R+0),(R+24),4);
}
B4b22ba:{NFSU2_TR(0x4b22ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b22bb:{NFSU2_TR(0x4b22bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b22c0:L4b22c0:{c.instructions+=1;NFSU2_TR(0x4b22c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b22c5ull));
TAIL_STATIC(0x50e2c0u,50e);
}
B4b22c5:L4b22c5:{c.instructions+=3;NFSU2_TR(0x4b22c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b22c7:{NFSU2_TR(0x4b22c7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b22c9:{NFSU2_TR(0x4b22c9);
if(r1(R+518)){{goto L4b22ea;}}
}
B4b22cb:L4b22cb:{c.instructions+=8;NFSU2_TR(0x4b22cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b22cf:{NFSU2_TR(0x4b22cf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b22d1:{NFSU2_TR(0x4b22d1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b22d3:{NFSU2_TR(0x4b22d3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b22d5:{NFSU2_TR(0x4b22d5);
u8 U[4];
w4(U+0,u32(0x42ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b22d7:{NFSU2_TR(0x4b22d7);
u8 U[4];
w4(U+0,u32(0x78f530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b22dc:{NFSU2_TR(0x4b22dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b22dd:{NFSU2_TR(0x4b22dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b22e2ull));
TAIL_STATIC(0x4a3100u,4a3);
}
B4b22e2:L4b22e2:{c.instructions+=2;NFSU2_TR(0x4b22e2);
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
B4b22e5:{NFSU2_TR(0x4b22e5);
TAIL_STATIC(0x50e2d0u,50e);
}
B4b22ea:L4b22ea:{c.instructions+=4;NFSU2_TR(0x4b22ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b22ee:{NFSU2_TR(0x4b22ee);
u8 U[4];
w4(U+0,u32(0x78f530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b22f3:{NFSU2_TR(0x4b22f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b22f4:{NFSU2_TR(0x4b22f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b22f9ull));
TAIL_STATIC(0x537980u,537);
}
B4b22f9:L4b22f9:{c.instructions+=2;NFSU2_TR(0x4b22f9);
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
B4b22fc:{NFSU2_TR(0x4b22fc);
TAIL_STATIC(0x50e2d0u,50e);
}
B4b2310:L4b2310:{c.instructions+=8;NFSU2_TR(0x4b2310);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2311:{NFSU2_TR(0x4b2311);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2312:{NFSU2_TR(0x4b2312);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2313:{NFSU2_TR(0x4b2313);
__builtin_memmove((R+24),(R+4),4);
}
B4b2315:{NFSU2_TR(0x4b2315);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2318:{NFSU2_TR(0x4b2318);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b231d:{NFSU2_TR(0x4b231d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b231e:{NFSU2_TR(0x4b231e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2323ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b2323:L4b2323:{c.instructions+=2;NFSU2_TR(0x4b2323);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2324:{NFSU2_TR(0x4b2324);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2329ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b2329:L4b2329:{c.instructions+=4;NFSU2_TR(0x4b2329);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b232c:{NFSU2_TR(0x4b232c);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2331:{NFSU2_TR(0x4b2331);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2332:{NFSU2_TR(0x4b2332);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2337ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b2337:L4b2337:{c.instructions+=2;NFSU2_TR(0x4b2337);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2338:{NFSU2_TR(0x4b2338);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b233dull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b233d:L4b233d:{c.instructions+=6;NFSU2_TR(0x4b233d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2340:{NFSU2_TR(0x4b2340);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2344:{NFSU2_TR(0x4b2344);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4b2349:{NFSU2_TR(0x4b2349);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4b234c:{NFSU2_TR(0x4b234c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b234f:{NFSU2_TR(0x4b234f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4b24d4;}}
}
B4b2355:L4b2355:{c.instructions+=1;NFSU2_TR(0x4b2355);
if(r1(R+518)){{goto L4b23f7;}}
}
B4b235b:L4b235b:{c.instructions+=2;NFSU2_TR(0x4b235b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4b235e:{NFSU2_TR(0x4b235e);
if(r1(R+518)){{goto L4b23a6;}}
}
B4b2360:L4b2360:{c.instructions+=2;NFSU2_TR(0x4b2360);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4b2363:{NFSU2_TR(0x4b2363);
if(r1(R+518)){{goto L4b2378;}}
}
B4b2365:L4b2365:{c.instructions+=2;NFSU2_TR(0x4b2365);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4b2368:{NFSU2_TR(0x4b2368);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2542;}}
}
B4b236e:L4b236e:{c.instructions+=2;NFSU2_TR(0x4b236e);
u8 U[4];
w4(U+0,u32(0x87fea07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2373:{NFSU2_TR(0x4b2373);
{goto L4b2528;}
}
B4b2378:L4b2378:{c.instructions+=5;NFSU2_TR(0x4b2378);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b237b:{NFSU2_TR(0x4b237b);
u8 U[4];
w4(U+0,u32(0xf221d7edull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2380:{NFSU2_TR(0x4b2380);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2385:{NFSU2_TR(0x4b2385);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2386:{NFSU2_TR(0x4b2386);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b238bull));
TAIL_STATIC(0x537a10u,537);
}
B4b238b:L4b238b:{c.instructions+=3;NFSU2_TR(0x4b238b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b238e:{NFSU2_TR(0x4b238e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b238f:{NFSU2_TR(0x4b238f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2394ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b2394:L4b2394:{c.instructions+=4;NFSU2_TR(0x4b2394);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b2397:{NFSU2_TR(0x4b2397);
u8 U[4];
w4(U+0,u32(0xaa3cd907ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b239c:{NFSU2_TR(0x4b239c);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b23a1:{NFSU2_TR(0x4b23a1);
{goto L4b252d;}
}
B4b23a6:L4b23a6:{c.instructions+=3;NFSU2_TR(0x4b23a6);
__builtin_memmove((R+0),gp(0x7f444c),4);
}
B4b23ab:{NFSU2_TR(0x4b23ab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b23ae:{NFSU2_TR(0x4b23ae);
if(r1(R+518)){{goto L4b23b5;}}
}
B4b23b0:L4b23b0:{c.instructions+=2;NFSU2_TR(0x4b23b0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b23b3:{NFSU2_TR(0x4b23b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b23ed;}}
}
B4b23b5:L4b23b5:{c.instructions+=4;NFSU2_TR(0x4b23b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b23b8:{NFSU2_TR(0x4b23b8);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b23bd:{NFSU2_TR(0x4b23bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b23be:{NFSU2_TR(0x4b23be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b23c3ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b23c3:L4b23c3:{c.instructions+=2;NFSU2_TR(0x4b23c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b23c4:{NFSU2_TR(0x4b23c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b23c9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b23c9:L4b23c9:{c.instructions+=4;NFSU2_TR(0x4b23c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b23cc:{NFSU2_TR(0x4b23cc);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b23d1:{NFSU2_TR(0x4b23d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b23d2:{NFSU2_TR(0x4b23d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b23d7ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b23d7:L4b23d7:{c.instructions+=2;NFSU2_TR(0x4b23d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b23d8:{NFSU2_TR(0x4b23d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b23ddull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b23dd:L4b23dd:{c.instructions+=4;NFSU2_TR(0x4b23dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b23e1:{NFSU2_TR(0x4b23e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4b23e4:{NFSU2_TR(0x4b23e4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffefffull))));
}
B4b23e9:{NFSU2_TR(0x4b23e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b23ed:L4b23ed:{c.instructions+=2;NFSU2_TR(0x4b23ed);
u8 U[4];
w4(U+0,u32(0x5ac1fb59ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b23f2:{NFSU2_TR(0x4b23f2);
{goto L4b2528;}
}
B4b23f7:L4b23f7:{c.instructions+=8;NFSU2_TR(0x4b23f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b23fb:{NFSU2_TR(0x4b23fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b23fe:{NFSU2_TR(0x4b23fe);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffffefffull))));
}
B4b2404:{NFSU2_TR(0x4b2404);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2408:{NFSU2_TR(0x4b2408);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b240e:{NFSU2_TR(0x4b240e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b240f:{NFSU2_TR(0x4b240f);
w4(R+4,u32(0x83ad90ull));
}
B4b2414:{NFSU2_TR(0x4b2414);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2419ull));
TAIL_STATIC(0x5163a0u,516);
}
B4b2419:L4b2419:{c.instructions+=4;NFSU2_TR(0x4b2419);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b241b:{NFSU2_TR(0x4b241b);
w4(R+4,u32(0x83ad90ull));
}
B4b2420:{NFSU2_TR(0x4b2420);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2421:{NFSU2_TR(0x4b2421);
if(r1(R+518)){{goto L4b247e;}}
}
B4b2423:L4b2423:{c.instructions+=1;NFSU2_TR(0x4b2423);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2428ull));
TAIL_STATIC(0x516340u,516);
}
B4b2428:L4b2428:{c.instructions+=3;NFSU2_TR(0x4b2428);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b242a:{NFSU2_TR(0x4b242a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b242d:{NFSU2_TR(0x4b242d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b245d;}}
}
B4b242f:L4b242f:{c.instructions+=4;NFSU2_TR(0x4b242f);
u8 U[4];
w4(U+0,u32(0xefddc126ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2434:{NFSU2_TR(0x4b2434);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2439:{NFSU2_TR(0x4b2439);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b243a:{NFSU2_TR(0x4b243a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b243full));
TAIL_STATIC(0x537a10u,537);
}
B4b243f:L4b243f:{c.instructions+=3;NFSU2_TR(0x4b243f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b2442:{NFSU2_TR(0x4b2442);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2443:{NFSU2_TR(0x4b2443);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2448ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b2448:L4b2448:{c.instructions+=5;NFSU2_TR(0x4b2448);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b244c:{NFSU2_TR(0x4b244c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b244f:{NFSU2_TR(0x4b244f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x40000ull))));
}
B4b2454:{NFSU2_TR(0x4b2454);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2458:{NFSU2_TR(0x4b2458);
{goto L4b2523;}
}
B4b245d:L4b245d:{c.instructions+=4;NFSU2_TR(0x4b245d);
u8 U[4];
w4(U+0,u32(0x5da6131bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2462:{NFSU2_TR(0x4b2462);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2467:{NFSU2_TR(0x4b2467);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2468:{NFSU2_TR(0x4b2468);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b246dull));
TAIL_STATIC(0x537a10u,537);
}
B4b246d:L4b246d:{c.instructions+=3;NFSU2_TR(0x4b246d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b2470:{NFSU2_TR(0x4b2470);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2471:{NFSU2_TR(0x4b2471);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2476ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b2476:L4b2476:{c.instructions+=2;NFSU2_TR(0x4b2476);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b2479:{NFSU2_TR(0x4b2479);
{goto L4b2523;}
}
B4b247e:L4b247e:{c.instructions+=1;NFSU2_TR(0x4b247e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2483ull));
TAIL_STATIC(0x516360u,516);
}
B4b2483:L4b2483:{c.instructions+=2;NFSU2_TR(0x4b2483);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b2485:{NFSU2_TR(0x4b2485);
if(r1(R+518)){{goto L4b2523;}}
}
B4b248b:L4b248b:{c.instructions+=5;NFSU2_TR(0x4b248b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b248e:{NFSU2_TR(0x4b248e);
u8 U[4];
w4(U+0,u32(0xc8054ce0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2493:{NFSU2_TR(0x4b2493);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2498:{NFSU2_TR(0x4b2498);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2499:{NFSU2_TR(0x4b2499);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b249eull));
TAIL_STATIC(0x537a10u,537);
}
B4b249e:L4b249e:{c.instructions+=3;NFSU2_TR(0x4b249e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b24a1:{NFSU2_TR(0x4b24a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b24a2:{NFSU2_TR(0x4b24a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b24a7ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b24a7:L4b24a7:{c.instructions+=4;NFSU2_TR(0x4b24a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b24aa:{NFSU2_TR(0x4b24aa);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b24af:{NFSU2_TR(0x4b24af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b24b0:{NFSU2_TR(0x4b24b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b24b5ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b24b5:L4b24b5:{c.instructions+=2;NFSU2_TR(0x4b24b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b24b6:{NFSU2_TR(0x4b24b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b24bbull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b24bb:L4b24bb:{c.instructions+=4;NFSU2_TR(0x4b24bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b24be:{NFSU2_TR(0x4b24be);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b24c3:{NFSU2_TR(0x4b24c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b24c4:{NFSU2_TR(0x4b24c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b24c9ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b24c9:L4b24c9:{c.instructions+=2;NFSU2_TR(0x4b24c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b24ca:{NFSU2_TR(0x4b24ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b24cfull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b24cf:L4b24cf:{c.instructions+=2;NFSU2_TR(0x4b24cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4b24d2:{NFSU2_TR(0x4b24d2);
{goto L4b2523;}
}
B4b24d4:L4b24d4:{c.instructions+=2;NFSU2_TR(0x4b24d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b24d9:{NFSU2_TR(0x4b24d9);
if(r1(R+518)){{goto L4b24e9;}}
}
B4b24db:L4b24db:{c.instructions+=2;NFSU2_TR(0x4b24db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b24e0:{NFSU2_TR(0x4b24e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2542;}}
}
B4b24e2:L4b24e2:{c.instructions+=2;NFSU2_TR(0x4b24e2);
u8 U[4];
w4(U+0,u32(0xd5f627ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b24e7:{NFSU2_TR(0x4b24e7);
{goto L4b2528;}
}
B4b24e9:L4b24e9:{c.instructions+=3;NFSU2_TR(0x4b24e9);
__builtin_memmove((R+0),gp(0x7f444c),4);
}
B4b24ee:{NFSU2_TR(0x4b24ee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b24f1:{NFSU2_TR(0x4b24f1);
if(r1(R+518)){{goto L4b24f8;}}
}
B4b24f3:L4b24f3:{c.instructions+=2;NFSU2_TR(0x4b24f3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b24f6:{NFSU2_TR(0x4b24f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2523;}}
}
B4b24f8:L4b24f8:{c.instructions+=4;NFSU2_TR(0x4b24f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b24fb:{NFSU2_TR(0x4b24fb);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2500:{NFSU2_TR(0x4b2500);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2501:{NFSU2_TR(0x4b2501);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2506ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b2506:L4b2506:{c.instructions+=2;NFSU2_TR(0x4b2506);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2507:{NFSU2_TR(0x4b2507);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b250cull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b250c:L4b250c:{c.instructions+=4;NFSU2_TR(0x4b250c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b250f:{NFSU2_TR(0x4b250f);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2514:{NFSU2_TR(0x4b2514);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2515:{NFSU2_TR(0x4b2515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b251aull));
TAIL_STATIC(0x5379c0u,537);
}
B4b251a:L4b251a:{c.instructions+=2;NFSU2_TR(0x4b251a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b251b:{NFSU2_TR(0x4b251b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2520ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b2520:L4b2520:{c.instructions+=1;NFSU2_TR(0x4b2520);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4b2523:L4b2523:{c.instructions+=1;NFSU2_TR(0x4b2523);
u8 U[4];
w4(U+0,u32(0x61032ce5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2528:L4b2528:{c.instructions+=1;NFSU2_TR(0x4b2528);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b252d:L4b252d:{c.instructions+=3;NFSU2_TR(0x4b252d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2530:{NFSU2_TR(0x4b2530);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2531:{NFSU2_TR(0x4b2531);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2536ull));
TAIL_STATIC(0x537a10u,537);
}
B4b2536:L4b2536:{c.instructions+=3;NFSU2_TR(0x4b2536);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b2539:{NFSU2_TR(0x4b2539);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b253a:{NFSU2_TR(0x4b253a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b253full));
TAIL_STATIC(0x50c900u,50c);
}
B4b253f:L4b253f:{c.instructions+=1;NFSU2_TR(0x4b253f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b2542:L4b2542:{c.instructions+=6;NFSU2_TR(0x4b2542);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b2545:{NFSU2_TR(0x4b2545);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b254b:{NFSU2_TR(0x4b254b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2551:{NFSU2_TR(0x4b2551);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2553:{NFSU2_TR(0x4b2553);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2554:{NFSU2_TR(0x4b2554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2559ull));
TAIL_STATIC(0x511e60u,511);
}
B4b2559:L4b2559:{c.instructions+=5;NFSU2_TR(0x4b2559);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b255b:{NFSU2_TR(0x4b255b);
__builtin_memmove((R+28),(R+0),4);
}
B4b255d:{NFSU2_TR(0x4b255d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b255f:{NFSU2_TR(0x4b255f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2560:{NFSU2_TR(0x4b2560);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2565ull));
TAIL_STATIC(0x4901d0u,490);
}
B4b2565:L4b2565:{c.instructions+=3;NFSU2_TR(0x4b2565);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4b2568:{NFSU2_TR(0x4b2568);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b256a:{NFSU2_TR(0x4b256a);
if(r1(R+518)){{goto L4b257e;}}
}
B4b256c:L4b256c:{c.instructions+=4;NFSU2_TR(0x4b256c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b2572:{NFSU2_TR(0x4b2572);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2573:{NFSU2_TR(0x4b2573);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2574:{NFSU2_TR(0x4b2574);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2579ull));
TAIL_STATIC(0x50c990u,50c);
}
B4b2579:L4b2579:{c.instructions+=2;NFSU2_TR(0x4b2579);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b257c:{NFSU2_TR(0x4b257c);
{goto L4b2598;}
}
B4b257e:L4b257e:{c.instructions+=2;NFSU2_TR(0x4b257e);
u8 U[4];
w4(U+0,u32(0x790324ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2583:{NFSU2_TR(0x4b2583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2588ull));
TAIL_STATIC(0x505450u,505);
}
B4b2588:L4b2588:{c.instructions+=4;NFSU2_TR(0x4b2588);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b258e:{NFSU2_TR(0x4b258e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b258f:{NFSU2_TR(0x4b258f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2590:{NFSU2_TR(0x4b2590);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2595ull));
TAIL_STATIC(0x50c990u,50c);
}
B4b2595:L4b2595:{c.instructions+=1;NFSU2_TR(0x4b2595);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b2598:L4b2598:{c.instructions+=6;NFSU2_TR(0x4b2598);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b259b:{NFSU2_TR(0x4b259b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b25a1:{NFSU2_TR(0x4b25a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b25a7:{NFSU2_TR(0x4b25a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b25a9:{NFSU2_TR(0x4b25a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b25aa:{NFSU2_TR(0x4b25aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b25afull));
TAIL_STATIC(0x511e60u,511);
}
B4b25af:L4b25af:{c.instructions+=5;NFSU2_TR(0x4b25af);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b25b1:{NFSU2_TR(0x4b25b1);
__builtin_memmove((R+28),(R+0),4);
}
B4b25b3:{NFSU2_TR(0x4b25b3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b25b5:{NFSU2_TR(0x4b25b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b25b6:{NFSU2_TR(0x4b25b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b25bbull));
TAIL_STATIC(0x4901d0u,490);
}
B4b25bb:L4b25bb:{c.instructions+=3;NFSU2_TR(0x4b25bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4b25be:{NFSU2_TR(0x4b25be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b25c0:{NFSU2_TR(0x4b25c0);
if(r1(R+518)){{goto L4b25d4;}}
}
B4b25c2:L4b25c2:{c.instructions+=4;NFSU2_TR(0x4b25c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b25c8:{NFSU2_TR(0x4b25c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b25c9:{NFSU2_TR(0x4b25c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b25ca:{NFSU2_TR(0x4b25ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b25cfull));
TAIL_STATIC(0x50c990u,50c);
}
B4b25cf:L4b25cf:{c.instructions+=2;NFSU2_TR(0x4b25cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b25d2:{NFSU2_TR(0x4b25d2);
{goto L4b25ee;}
}
B4b25d4:L4b25d4:{c.instructions+=2;NFSU2_TR(0x4b25d4);
u8 U[4];
w4(U+0,u32(0x790324ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b25d9:{NFSU2_TR(0x4b25d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b25deull));
TAIL_STATIC(0x505450u,505);
}
B4b25de:L4b25de:{c.instructions+=4;NFSU2_TR(0x4b25de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b25df:{NFSU2_TR(0x4b25df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b25e5:{NFSU2_TR(0x4b25e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b25e6:{NFSU2_TR(0x4b25e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b25ebull));
TAIL_STATIC(0x50c990u,50c);
}
B4b25eb:L4b25eb:{c.instructions+=1;NFSU2_TR(0x4b25eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b25ee:L4b25ee:{c.instructions+=8;NFSU2_TR(0x4b25ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b25f1:{NFSU2_TR(0x4b25f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b25f4:{NFSU2_TR(0x4b25f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b25f5:{NFSU2_TR(0x4b25f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b25f6:{NFSU2_TR(0x4b25f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b25f7:{NFSU2_TR(0x4b25f7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b25f9:{NFSU2_TR(0x4b25f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b25fc:{NFSU2_TR(0x4b25fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2601ull));
TAIL_STATIC(0x538080u,538);
}
B4b2601:L4b2601:{c.instructions+=3;NFSU2_TR(0x4b2601);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b2604:{NFSU2_TR(0x4b2604);
u8 U[4];
w4(U+0,u32(0x790e98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2609:{NFSU2_TR(0x4b2609);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b260eull));
TAIL_STATIC(0x505450u,505);
}
B4b260e:L4b260e:{c.instructions+=3;NFSU2_TR(0x4b260e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b260f:{NFSU2_TR(0x4b260f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2610:{NFSU2_TR(0x4b2610);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2615ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b2615:L4b2615:{c.instructions+=4;NFSU2_TR(0x4b2615);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b2618:{NFSU2_TR(0x4b2618);
u8 U[4];
w4(U+0,u32(0x790e84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b261d:{NFSU2_TR(0x4b261d);
__builtin_memmove((R+20),(R+0),4);
}
B4b261f:{NFSU2_TR(0x4b261f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2624ull));
TAIL_STATIC(0x505450u,505);
}
B4b2624:L4b2624:{c.instructions+=3;NFSU2_TR(0x4b2624);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2625:{NFSU2_TR(0x4b2625);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2626:{NFSU2_TR(0x4b2626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b262bull));
TAIL_STATIC(0x5379c0u,537);
}
B4b262b:L4b262b:{c.instructions+=5;NFSU2_TR(0x4b262b);
__builtin_memmove((R+28),(R+0),4);
}
B4b262d:{NFSU2_TR(0x4b262d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2630:{NFSU2_TR(0x4b2630);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4b2633:{NFSU2_TR(0x4b2633);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2635:{NFSU2_TR(0x4b2635);
if(r1(R+518)){{goto L4b263c;}}
}
B4b2637:L4b2637:{c.instructions+=2;NFSU2_TR(0x4b2637);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4b263a:{NFSU2_TR(0x4b263a);
{goto L4b263e;}
}
B4b263c:L4b263c:{c.instructions+=1;NFSU2_TR(0x4b263c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b263e:L4b263e:{c.instructions+=3;NFSU2_TR(0x4b263e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b2641:{NFSU2_TR(0x4b2641);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b2643:{NFSU2_TR(0x4b2643);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2673;}}
}
B4b2645:L4b2645:{c.instructions+=3;NFSU2_TR(0x4b2645);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b264b:{NFSU2_TR(0x4b264b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b264d:{NFSU2_TR(0x4b264d);
if(r1(R+518)){{goto L4b2746;}}
}
B4b2653:L4b2653:{c.instructions+=4;NFSU2_TR(0x4b2653);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2656:{NFSU2_TR(0x4b2656);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b265b:{NFSU2_TR(0x4b265b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b265c:{NFSU2_TR(0x4b265c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2661ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b2661:L4b2661:{c.instructions+=2;NFSU2_TR(0x4b2661);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2662:{NFSU2_TR(0x4b2662);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2667ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b2667:L4b2667:{c.instructions+=2;NFSU2_TR(0x4b2667);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a5ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b266e:{NFSU2_TR(0x4b266e);
{goto L4b2743;}
}
B4b2673:L4b2673:{c.instructions+=3;NFSU2_TR(0x4b2673);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2676:{NFSU2_TR(0x4b2676);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2678:{NFSU2_TR(0x4b2678);
if(r1(R+518)){{goto L4b267f;}}
}
B4b267a:L4b267a:{c.instructions+=2;NFSU2_TR(0x4b267a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4b267d:{NFSU2_TR(0x4b267d);
{goto L4b2681;}
}
B4b267f:L4b267f:{c.instructions+=1;NFSU2_TR(0x4b267f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b2681:L4b2681:{c.instructions+=2;NFSU2_TR(0x4b2681);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b2683:{NFSU2_TR(0x4b2683);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b26b3;}}
}
B4b2685:L4b2685:{c.instructions+=3;NFSU2_TR(0x4b2685);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b268b:{NFSU2_TR(0x4b268b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b268d:{NFSU2_TR(0x4b268d);
if(r1(R+518)){{goto L4b2746;}}
}
B4b2693:L4b2693:{c.instructions+=4;NFSU2_TR(0x4b2693);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2696:{NFSU2_TR(0x4b2696);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b269b:{NFSU2_TR(0x4b269b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b269c:{NFSU2_TR(0x4b269c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b26a1ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b26a1:L4b26a1:{c.instructions+=2;NFSU2_TR(0x4b26a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b26a2:{NFSU2_TR(0x4b26a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b26a7ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b26a7:L4b26a7:{c.instructions+=2;NFSU2_TR(0x4b26a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b26ae:{NFSU2_TR(0x4b26ae);
{goto L4b2743;}
}
B4b26b3:L4b26b3:{c.instructions+=3;NFSU2_TR(0x4b26b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b26b9:{NFSU2_TR(0x4b26b9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b26bb:{NFSU2_TR(0x4b26bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b26da;}}
}
B4b26bd:L4b26bd:{c.instructions+=4;NFSU2_TR(0x4b26bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b26c0:{NFSU2_TR(0x4b26c0);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b26c5:{NFSU2_TR(0x4b26c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b26c6:{NFSU2_TR(0x4b26c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b26cbull));
TAIL_STATIC(0x5379c0u,537);
}
B4b26cb:L4b26cb:{c.instructions+=2;NFSU2_TR(0x4b26cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b26cc:{NFSU2_TR(0x4b26cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b26d1ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b26d1:L4b26d1:{c.instructions+=2;NFSU2_TR(0x4b26d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b26d8:{NFSU2_TR(0x4b26d8);
{goto L4b26ff;}
}
B4b26da:L4b26da:{c.instructions+=3;NFSU2_TR(0x4b26da);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b26e0:{NFSU2_TR(0x4b26e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b26e2:{NFSU2_TR(0x4b26e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2702;}}
}
B4b26e4:L4b26e4:{c.instructions+=4;NFSU2_TR(0x4b26e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b26e7:{NFSU2_TR(0x4b26e7);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b26ec:{NFSU2_TR(0x4b26ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b26ed:{NFSU2_TR(0x4b26ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b26f2ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b26f2:L4b26f2:{c.instructions+=2;NFSU2_TR(0x4b26f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b26f3:{NFSU2_TR(0x4b26f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b26f8ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b26f8:L4b26f8:{c.instructions+=1;NFSU2_TR(0x4b26f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b26ff:L4b26ff:{c.instructions+=1;NFSU2_TR(0x4b26ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b2702:L4b2702:{c.instructions+=3;NFSU2_TR(0x4b2702);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2707:{NFSU2_TR(0x4b2707);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2708:{NFSU2_TR(0x4b2708);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b270dull));
TAIL_STATIC(0x51d040u,51d);
}
B4b270d:L4b270d:{c.instructions+=3;NFSU2_TR(0x4b270d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b2710:{NFSU2_TR(0x4b2710);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b2712:{NFSU2_TR(0x4b2712);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2724;}}
}
B4b2714:L4b2714:{c.instructions+=4;NFSU2_TR(0x4b2714);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2716:{NFSU2_TR(0x4b2716);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b271b:{NFSU2_TR(0x4b271b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b271c:{NFSU2_TR(0x4b271c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2721ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4b2721:L4b2721:{c.instructions+=1;NFSU2_TR(0x4b2721);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b2724:L4b2724:{c.instructions+=3;NFSU2_TR(0x4b2724);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2729:{NFSU2_TR(0x4b2729);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b272a:{NFSU2_TR(0x4b272a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b272full));
TAIL_STATIC(0x51d040u,51d);
}
B4b272f:L4b272f:{c.instructions+=3;NFSU2_TR(0x4b272f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b2732:{NFSU2_TR(0x4b2732);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b2734:{NFSU2_TR(0x4b2734);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2746;}}
}
B4b2736:L4b2736:{c.instructions+=4;NFSU2_TR(0x4b2736);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2738:{NFSU2_TR(0x4b2738);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b273d:{NFSU2_TR(0x4b273d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b273e:{NFSU2_TR(0x4b273e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2743ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4b2743:L4b2743:{c.instructions+=1;NFSU2_TR(0x4b2743);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b2746:L4b2746:{c.instructions+=5;NFSU2_TR(0x4b2746);
__builtin_memmove((R+0),gp(0x7f444c),4);
}
B4b274b:{NFSU2_TR(0x4b274b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b274e:{NFSU2_TR(0x4b274e);
w4(R+28,u32(0xe798a2f7ull));
}
B4b2753:{NFSU2_TR(0x4b2753);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b2754:{NFSU2_TR(0x4b2754);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b275d;}}
}
B4b2756:L4b2756:{c.instructions+=2;NFSU2_TR(0x4b2756);
w4(R+28,u32(0x6b68362cull));
}
B4b275b:{NFSU2_TR(0x4b275b);
{goto L4b278a;}
}
B4b275d:L4b275d:{c.instructions+=2;NFSU2_TR(0x4b275d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b275f:{NFSU2_TR(0x4b275f);
if(r1(R+518)){{goto L4b2766;}}
}
B4b2761:L4b2761:{c.instructions+=1;NFSU2_TR(0x4b2761);
w4(R+28,u32(0xe798a2f7ull));
}
B4b2766:L4b2766:{c.instructions+=2;NFSU2_TR(0x4b2766);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b2768:{NFSU2_TR(0x4b2768);
if(r1(R+518)){{goto L4b276f;}}
}
B4b276a:L4b276a:{c.instructions+=1;NFSU2_TR(0x4b276a);
w4(R+28,u32(0xe7ab43d3ull));
}
B4b276f:L4b276f:{c.instructions+=2;NFSU2_TR(0x4b276f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b2771:{NFSU2_TR(0x4b2771);
if(r1(R+518)){{goto L4b2778;}}
}
B4b2773:L4b2773:{c.instructions+=1;NFSU2_TR(0x4b2773);
w4(R+28,u32(0xb4045365ull));
}
B4b2778:L4b2778:{c.instructions+=2;NFSU2_TR(0x4b2778);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b277a:{NFSU2_TR(0x4b277a);
if(r1(R+518)){{goto L4b2781;}}
}
B4b277c:L4b277c:{c.instructions+=1;NFSU2_TR(0x4b277c);
w4(R+28,u32(0x26fecee7ull));
}
B4b2781:L4b2781:{c.instructions+=2;NFSU2_TR(0x4b2781);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b2783:{NFSU2_TR(0x4b2783);
if(r1(R+518)){{goto L4b278a;}}
}
B4b2785:L4b2785:{c.instructions+=1;NFSU2_TR(0x4b2785);
w4(R+28,u32(0x1a23d5e6ull));
}
B4b278a:L4b278a:{c.instructions+=5;NFSU2_TR(0x4b278a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b278d:{NFSU2_TR(0x4b278d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b2793:{NFSU2_TR(0x4b2793);
__builtin_memmove((R+4),gp(0x850078),4);
}
B4b2799:{NFSU2_TR(0x4b2799);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b279c:{NFSU2_TR(0x4b279c);
if(r1(R+518)){{goto L4b27a6;}}
}
B4b279e:L4b279e:{c.instructions+=2;NFSU2_TR(0x4b279e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b27a4:{NFSU2_TR(0x4b27a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b27ab;}}
}
B4b27a6:L4b27a6:{c.instructions+=2;NFSU2_TR(0x4b27a6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b27a9:{NFSU2_TR(0x4b27a9);
if(r1(R+518)){{goto L4b27e7;}}
}
B4b27ab:L4b27ab:{c.instructions+=3;NFSU2_TR(0x4b27ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b27ac:{NFSU2_TR(0x4b27ac);
w4(R+4,u32(0x83ad90ull));
}
B4b27b1:{NFSU2_TR(0x4b27b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b27b6ull));
TAIL_STATIC(0x516340u,516);
}
B4b27b6:L4b27b6:{c.instructions+=2;NFSU2_TR(0x4b27b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b27b8:{NFSU2_TR(0x4b27b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b27e7;}}
}
B4b27ba:L4b27ba:{c.instructions+=4;NFSU2_TR(0x4b27ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b27bd:{NFSU2_TR(0x4b27bd);
u8 U[4];
w4(U+0,u32(0x39b2b1c6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b27c2:{NFSU2_TR(0x4b27c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b27c3:{NFSU2_TR(0x4b27c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b27c8ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b27c8:L4b27c8:{c.instructions+=2;NFSU2_TR(0x4b27c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b27c9:{NFSU2_TR(0x4b27c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b27ceull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b27ce:L4b27ce:{c.instructions+=4;NFSU2_TR(0x4b27ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b27d1:{NFSU2_TR(0x4b27d1);
u8 U[4];
w4(U+0,u32(0xe8ca2e25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b27d6:{NFSU2_TR(0x4b27d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b27d7:{NFSU2_TR(0x4b27d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b27dcull));
TAIL_STATIC(0x5379c0u,537);
}
B4b27dc:L4b27dc:{c.instructions+=2;NFSU2_TR(0x4b27dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b27dd:{NFSU2_TR(0x4b27dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b27e2ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b27e2:L4b27e2:{c.instructions+=2;NFSU2_TR(0x4b27e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4b27e5:{NFSU2_TR(0x4b27e5);
{goto L4b281f;}
}
B4b27e7:L4b27e7:{c.instructions+=4;NFSU2_TR(0x4b27e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b27ea:{NFSU2_TR(0x4b27ea);
u8 U[4];
w4(U+0,u32(0x39b2b1c6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b27ef:{NFSU2_TR(0x4b27ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b27f0:{NFSU2_TR(0x4b27f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b27f5ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b27f5:L4b27f5:{c.instructions+=2;NFSU2_TR(0x4b27f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b27f6:{NFSU2_TR(0x4b27f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b27fbull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b27fb:L4b27fb:{c.instructions+=4;NFSU2_TR(0x4b27fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b27fe:{NFSU2_TR(0x4b27fe);
u8 U[4];
w4(U+0,u32(0xe8ca2e25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2803:{NFSU2_TR(0x4b2803);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2804:{NFSU2_TR(0x4b2804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2809ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b2809:L4b2809:{c.instructions+=2;NFSU2_TR(0x4b2809);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b280a:{NFSU2_TR(0x4b280a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b280full));
TAIL_STATIC(0x50ca00u,50c);
}
B4b280f:L4b280f:{c.instructions+=4;NFSU2_TR(0x4b280f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2813:{NFSU2_TR(0x4b2813);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4b2816:{NFSU2_TR(0x4b2816);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffefffull))));
}
B4b281b:{NFSU2_TR(0x4b281b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b281f:L4b281f:{c.instructions+=5;NFSU2_TR(0x4b281f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2822:{NFSU2_TR(0x4b2822);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2823:{NFSU2_TR(0x4b2823);
u8 U[4];
w4(U+0,u32(0x3e81de59ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2828:{NFSU2_TR(0x4b2828);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2829:{NFSU2_TR(0x4b2829);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b282eull));
TAIL_STATIC(0x537a10u,537);
}
B4b282e:L4b282e:{c.instructions+=3;NFSU2_TR(0x4b282e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b2831:{NFSU2_TR(0x4b2831);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2832:{NFSU2_TR(0x4b2832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2837ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b2837:L4b2837:{c.instructions+=7;NFSU2_TR(0x4b2837);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b283a:{NFSU2_TR(0x4b283a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b283e:{NFSU2_TR(0x4b283e);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4b2844:{NFSU2_TR(0x4b2844);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b2847:{NFSU2_TR(0x4b2847);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2848:{NFSU2_TR(0x4b2848);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2849:{NFSU2_TR(0x4b2849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b284eull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4b284e:L4b284e:{c.instructions+=5;NFSU2_TR(0x4b284e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b284f:{NFSU2_TR(0x4b284f);
__builtin_memmove((R+4),(R+24),4);
}
B4b2851:{NFSU2_TR(0x4b2851);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b2852:{NFSU2_TR(0x4b2852);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b2855:{NFSU2_TR(0x4b2855);
TAIL_STATIC(0x497cd0u,497);
}
B4b2860:L4b2860:{c.instructions+=5;NFSU2_TR(0x4b2860);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2863:{NFSU2_TR(0x4b2863);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2864:{NFSU2_TR(0x4b2864);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b2867:{NFSU2_TR(0x4b2867);
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
B4b2869:{NFSU2_TR(0x4b2869);
if(r1(R+518)){{goto L4b288d;}}
}
B4b286b:L4b286b:{c.instructions+=1;NFSU2_TR(0x4b286b);
{goto L4b2870;}
}
B4b2870:L4b2870:{c.instructions+=8;NFSU2_TR(0x4b2870);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b2872:{NFSU2_TR(0x4b2872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4b2874:{NFSU2_TR(0x4b2874);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b2877:{NFSU2_TR(0x4b2877);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4b2879:{NFSU2_TR(0x4b2879);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b287c:{NFSU2_TR(0x4b287c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b287f:{NFSU2_TR(0x4b287f);
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
B4b2881:{NFSU2_TR(0x4b2881);
if(r1(R+518)){{goto L4b2889;}}
}
B4b2883:L4b2883:{c.instructions+=3;NFSU2_TR(0x4b2883);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b2885:{NFSU2_TR(0x4b2885);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2887:{NFSU2_TR(0x4b2887);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2889ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4b2889:L4b2889:{c.instructions+=2;NFSU2_TR(0x4b2889);
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
B4b288b:{NFSU2_TR(0x4b288b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b2870u);}goto L4b2870;}}
}
B4b288d:L4b288d:{c.instructions+=2;NFSU2_TR(0x4b288d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b288e:{NFSU2_TR(0x4b288e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2890:L4b2890:{c.instructions+=13;NFSU2_TR(0x4b2890);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2892:{NFSU2_TR(0x4b2892);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2897:{NFSU2_TR(0x4b2897);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b289d:{NFSU2_TR(0x4b289d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b289e:{NFSU2_TR(0x4b289e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b28a5:{NFSU2_TR(0x4b28a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b28a6:{NFSU2_TR(0x4b28a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b28aa:{NFSU2_TR(0x4b28aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b28ab:{NFSU2_TR(0x4b28ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b28ac:{NFSU2_TR(0x4b28ac);
__builtin_memmove((R+24),(R+4),4);
}
B4b28ae:{NFSU2_TR(0x4b28ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b28af:{NFSU2_TR(0x4b28af);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b28b3:{NFSU2_TR(0x4b28b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b28b8ull));
TAIL_STATIC(0x551de0u,551);
}
B4b28b8:L4b28b8:{c.instructions+=8;NFSU2_TR(0x4b28b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b28bb:{NFSU2_TR(0x4b28bb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b28bd:{NFSU2_TR(0x4b28bd);
u8 U[4];
w4(U+0,u32(0x790fc4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b28c3:{NFSU2_TR(0x4b28c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b28c6:{NFSU2_TR(0x4b28c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b28c9:{NFSU2_TR(0x4b28c9);
u8 U[8];
__builtin_memmove((U+0),gp(0x85ad28),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b28cf:{NFSU2_TR(0x4b28cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b28d3:{NFSU2_TR(0x4b28d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b28dc;}}
}
B4b28d5:L4b28d5:{c.instructions+=2;NFSU2_TR(0x4b28d5);
u8 U[4];
w4(U+0,u32(0xfc6731a6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b28da:{NFSU2_TR(0x4b28da);
{goto L4b28e1;}
}
B4b28dc:L4b28dc:{c.instructions+=1;NFSU2_TR(0x4b28dc);
u8 U[4];
w4(U+0,u32(0x5bc4bc1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b28e1:L4b28e1:{c.instructions+=1;NFSU2_TR(0x4b28e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b28e6ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b28e6:L4b28e6:{c.instructions+=4;NFSU2_TR(0x4b28e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b28e7:{NFSU2_TR(0x4b28e7);
u8 U[4];
w4(U+0,u32(0x78f850ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b28ec:{NFSU2_TR(0x4b28ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b28ed:{NFSU2_TR(0x4b28ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b28f2ull));
TAIL_STATIC(0x542600u,542);
}
B4b28f2:L4b28f2:{c.instructions+=8;NFSU2_TR(0x4b28f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b28f6:{NFSU2_TR(0x4b28f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4b28f9:{NFSU2_TR(0x4b28f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b28fa:{NFSU2_TR(0x4b28fa);
__builtin_memmove((R+0),(R+24),4);
}
B4b28fc:{NFSU2_TR(0x4b28fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b28fd:{NFSU2_TR(0x4b28fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2904:{NFSU2_TR(0x4b2904);
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
B4b2907:{NFSU2_TR(0x4b2907);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2910:L4b2910:{c.instructions+=3;NFSU2_TR(0x4b2910);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2911:{NFSU2_TR(0x4b2911);
__builtin_memmove((R+24),(R+4),4);
}
B4b2913:{NFSU2_TR(0x4b2913);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2918ull));
{goto L4b2930;}
}
B4b2918:L4b2918:{c.instructions+=2;NFSU2_TR(0x4b2918);
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
B4b291d:{NFSU2_TR(0x4b291d);
if(r1(R+518)){{goto L4b2928;}}
}
B4b291f:L4b291f:{c.instructions+=2;NFSU2_TR(0x4b291f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2920:{NFSU2_TR(0x4b2920);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2925ull));
TAIL_STATIC(0x575630u,575);
}
B4b2925:L4b2925:{c.instructions+=1;NFSU2_TR(0x4b2925);
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
B4b2928:L4b2928:{c.instructions+=3;NFSU2_TR(0x4b2928);
__builtin_memmove((R+0),(R+24),4);
}
B4b292a:{NFSU2_TR(0x4b292a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b292b:{NFSU2_TR(0x4b292b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2930:L4b2930:{c.instructions+=2;NFSU2_TR(0x4b2930);
u8 U[4];
w4(U+0,u32(0x790fc4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4b2936:{NFSU2_TR(0x4b2936);
TAIL_STATIC(0x510d40u,510);
}
B4b2940:L4b2940:{c.instructions+=3;NFSU2_TR(0x4b2940);
__builtin_memmove((R+4),gp(0x836340),4);
}
B4b2946:{NFSU2_TR(0x4b2946);
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
B4b2948:{NFSU2_TR(0x4b2948);
if(r1(R+518)){{goto L4b295a;}}
}
B4b294a:L4b294a:{c.instructions+=3;NFSU2_TR(0x4b294a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b294c:{NFSU2_TR(0x4b294c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b294e:{NFSU2_TR(0x4b294e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2950ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4b2950:L4b2950:{c.instructions+=1;NFSU2_TR(0x4b2950);
s4(0x836340,u32(0x0ull));
}
B4b295a:L4b295a:{c.instructions+=1;NFSU2_TR(0x4b295a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2960:L4b2960:{c.instructions+=7;NFSU2_TR(0x4b2960);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2961:{NFSU2_TR(0x4b2961);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2962:{NFSU2_TR(0x4b2962);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b2965:{NFSU2_TR(0x4b2965);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2966:{NFSU2_TR(0x4b2966);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b2969:{NFSU2_TR(0x4b2969);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b296b:{NFSU2_TR(0x4b296b);
if(r1(R+518)){{goto L4b2988;}}
}
B4b296d:L4b296d:{c.instructions+=1;NFSU2_TR(0x4b296d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b2971:L4b2971:{c.instructions+=4;NFSU2_TR(0x4b2971);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2974:{NFSU2_TR(0x4b2974);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2975:{NFSU2_TR(0x4b2975);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2976:{NFSU2_TR(0x4b2976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b297bull));
TAIL_STATIC(0x43dcc0u,43d);
}
B4b297b:L4b297b:{c.instructions+=3;NFSU2_TR(0x4b297b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b297e:{NFSU2_TR(0x4b297e);
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
B4b2980:{NFSU2_TR(0x4b2980);
if(r1(R+518)){{goto L4b2990;}}
}
B4b2982:L4b2982:{c.instructions+=3;NFSU2_TR(0x4b2982);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4b2984:{NFSU2_TR(0x4b2984);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b2986:{NFSU2_TR(0x4b2986);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b2971u);}goto L4b2971;}}
}
B4b2988:L4b2988:{c.instructions+=5;NFSU2_TR(0x4b2988);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b2989:{NFSU2_TR(0x4b2989);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b298a:{NFSU2_TR(0x4b298a);
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
B4b298c:{NFSU2_TR(0x4b298c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b298d:{NFSU2_TR(0x4b298d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2990:L4b2990:{c.instructions+=5;NFSU2_TR(0x4b2990);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b2991:{NFSU2_TR(0x4b2991);
__builtin_memmove((R+0),(R+24),4);
}
B4b2993:{NFSU2_TR(0x4b2993);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b2994:{NFSU2_TR(0x4b2994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b2995:{NFSU2_TR(0x4b2995);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b29a0:L4b29a0:{c.instructions+=7;NFSU2_TR(0x4b29a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b29a1:{NFSU2_TR(0x4b29a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b29a2:{NFSU2_TR(0x4b29a2);
__builtin_memmove((R+24),(R+4),4);
}
B4b29a4:{NFSU2_TR(0x4b29a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b29a7:{NFSU2_TR(0x4b29a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b29aa:{NFSU2_TR(0x4b29aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b29ab:{NFSU2_TR(0x4b29ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b29aeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b29ae:L4b29ae:{c.instructions+=4;NFSU2_TR(0x4b29ae);
__builtin_memmove((R+28),(R+0),4);
}
B4b29b0:{NFSU2_TR(0x4b29b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b29b1:{NFSU2_TR(0x4b29b1);
__builtin_memmove((R+4),(R+24),4);
}
B4b29b3:{NFSU2_TR(0x4b29b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b29b8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b2960u);}goto L4b2960;}
}
B4b29b8:L4b29b8:{c.instructions+=5;NFSU2_TR(0x4b29b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b29ba:{NFSU2_TR(0x4b29ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b29bb:{NFSU2_TR(0x4b29bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b29bc:{NFSU2_TR(0x4b29bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b29bf:{NFSU2_TR(0x4b29bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b29c4ull));
TAIL_STATIC(0x537980u,537);
}
B4b29c4:L4b29c4:{c.instructions+=4;NFSU2_TR(0x4b29c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b29c7:{NFSU2_TR(0x4b29c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b29c8:{NFSU2_TR(0x4b29c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b29c9:{NFSU2_TR(0x4b29c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b29ceull));
TAIL_STATIC(0x43dcc0u,43d);
}
B4b29ce:L4b29ce:{c.instructions+=6;NFSU2_TR(0x4b29ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4b29d1:{NFSU2_TR(0x4b29d1);
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
B4b29d3:{NFSU2_TR(0x4b29d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b29d4:{NFSU2_TR(0x4b29d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b29d5:{NFSU2_TR(0x4b29d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b29d6:{NFSU2_TR(0x4b29d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b29f2;}}
}
B4b29d8:L4b29d8:{c.instructions+=3;NFSU2_TR(0x4b29d8);
__builtin_memmove((R+4),gp(0x836340),4);
}
B4b29de:{NFSU2_TR(0x4b29de);
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
B4b29e0:{NFSU2_TR(0x4b29e0);
if(r1(R+518)){{goto L4b29e8;}}
}
B4b29e2:L4b29e2:{c.instructions+=3;NFSU2_TR(0x4b29e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b29e4:{NFSU2_TR(0x4b29e4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b29e6:{NFSU2_TR(0x4b29e6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b29e8ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4b29e8:L4b29e8:{c.instructions+=1;NFSU2_TR(0x4b29e8);
s4(0x836340,u32(0x0ull));
}
B4b29f2:L4b29f2:{c.instructions+=1;NFSU2_TR(0x4b29f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2a00:L4b2a00:{c.instructions+=7;NFSU2_TR(0x4b2a00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2a01:{NFSU2_TR(0x4b2a01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2a02:{NFSU2_TR(0x4b2a02);
__builtin_memmove((R+24),(R+4),4);
}
B4b2a04:{NFSU2_TR(0x4b2a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2a07:{NFSU2_TR(0x4b2a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b2a0a:{NFSU2_TR(0x4b2a0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2a0b:{NFSU2_TR(0x4b2a0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2a0eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b2a0e:L4b2a0e:{c.instructions+=4;NFSU2_TR(0x4b2a0e);
__builtin_memmove((R+28),(R+0),4);
}
B4b2a10:{NFSU2_TR(0x4b2a10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2a11:{NFSU2_TR(0x4b2a11);
__builtin_memmove((R+4),(R+24),4);
}
B4b2a13:{NFSU2_TR(0x4b2a13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2a18ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b2960u);}goto L4b2960;}
}
B4b2a18:L4b2a18:{c.instructions+=5;NFSU2_TR(0x4b2a18);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2a1a:{NFSU2_TR(0x4b2a1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2a1b:{NFSU2_TR(0x4b2a1b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2a1c:{NFSU2_TR(0x4b2a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2a1f:{NFSU2_TR(0x4b2a1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2a24ull));
TAIL_STATIC(0x537980u,537);
}
B4b2a24:L4b2a24:{c.instructions+=4;NFSU2_TR(0x4b2a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2a27:{NFSU2_TR(0x4b2a27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2a28:{NFSU2_TR(0x4b2a28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2a29:{NFSU2_TR(0x4b2a29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2a2eull));
TAIL_STATIC(0x43dcc0u,43d);
}
B4b2a2e:L4b2a2e:{c.instructions+=3;NFSU2_TR(0x4b2a2e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4b2a31:{NFSU2_TR(0x4b2a31);
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
B4b2a33:{NFSU2_TR(0x4b2a33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2a76;}}
}
B4b2a35:L4b2a35:{c.instructions+=4;NFSU2_TR(0x4b2a35);
__builtin_memmove((R+4),gp(0x7f4468),4);
}
B4b2a3b:{NFSU2_TR(0x4b2a3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2a3c:{NFSU2_TR(0x4b2a3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2a3d:{NFSU2_TR(0x4b2a3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2a42ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4b2a42:L4b2a42:{c.instructions+=3;NFSU2_TR(0x4b2a42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b2a45:{NFSU2_TR(0x4b2a45);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2a47:{NFSU2_TR(0x4b2a47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2a5c;}}
}
B4b2a49:L4b2a49:{c.instructions+=2;NFSU2_TR(0x4b2a49);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b2a50:{NFSU2_TR(0x4b2a50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2a5c;}}
}
B4b2a52:L4b2a52:{c.instructions+=2;NFSU2_TR(0x4b2a52);
w4(R+4,u32(0x83a9d0ull));
}
B4b2a57:{NFSU2_TR(0x4b2a57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2a5cull));
TAIL_STATIC(0x515d70u,515);
}
B4b2a5c:L4b2a5c:{c.instructions+=3;NFSU2_TR(0x4b2a5c);
__builtin_memmove((R+4),gp(0x836340),4);
}
B4b2a62:{NFSU2_TR(0x4b2a62);
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
B4b2a64:{NFSU2_TR(0x4b2a64);
if(r1(R+518)){{goto L4b2a6c;}}
}
B4b2a66:L4b2a66:{c.instructions+=3;NFSU2_TR(0x4b2a66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b2a68:{NFSU2_TR(0x4b2a68);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2a6a:{NFSU2_TR(0x4b2a6a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2a6cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4b2a6c:L4b2a6c:{c.instructions+=1;NFSU2_TR(0x4b2a6c);
s4(0x836340,u32(0x0ull));
}
B4b2a76:L4b2a76:{c.instructions+=4;NFSU2_TR(0x4b2a76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b2a77:{NFSU2_TR(0x4b2a77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b2a78:{NFSU2_TR(0x4b2a78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b2a79:{NFSU2_TR(0x4b2a79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2a80:L4b2a80:{c.instructions+=4;NFSU2_TR(0x4b2a80);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4b2a85:{NFSU2_TR(0x4b2a85);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b2a88:{NFSU2_TR(0x4b2a88);
__builtin_memmove((R+4),gp(0x83aab4),4);
}
B4b2a8e:{NFSU2_TR(0x4b2a8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2a9b;}}
}
B4b2a90:L4b2a90:{c.instructions+=2;NFSU2_TR(0x4b2a90);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B4b2a93:{NFSU2_TR(0x4b2a93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2adb;}}
}
B4b2a95:L4b2a95:{c.instructions+=2;NFSU2_TR(0x4b2a95);
__builtin_memmove((R+0),gp(0x7f4460),4);
}
B4b2a9a:{NFSU2_TR(0x4b2a9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2a9b:L4b2a9b:{c.instructions+=2;NFSU2_TR(0x4b2a9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2aa0:{NFSU2_TR(0x4b2aa0);
if(r1(R+518)){{goto L4b2aa7;}}
}
B4b2aa2:L4b2aa2:{c.instructions+=2;NFSU2_TR(0x4b2aa2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b2aa5:{NFSU2_TR(0x4b2aa5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2ad4;}}
}
B4b2aa7:L4b2aa7:{c.instructions+=2;NFSU2_TR(0x4b2aa7);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b2aae:{NFSU2_TR(0x4b2aae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2acf;}}
}
B4b2ab0:L4b2ab0:{c.instructions+=2;NFSU2_TR(0x4b2ab0);
u8 U[4];
w4(U+0,u32(0x7fffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2ab5:{NFSU2_TR(0x4b2ab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2abaull));
TAIL_STATIC(0x43c1c0u,43c);
}
B4b2aba:L4b2aba:{c.instructions+=2;NFSU2_TR(0x4b2aba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2abb:{NFSU2_TR(0x4b2abb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2ac0ull));
TAIL_STATIC(0x4fef50u,4fe);
}
B4b2ac0:L4b2ac0:{c.instructions+=4;NFSU2_TR(0x4b2ac0);
__builtin_memmove(gp(0x8500b8),(R+0),2);
}
B4b2ac6:{NFSU2_TR(0x4b2ac6);
__builtin_memmove((R+0),gp(0x7f4460),4);
}
B4b2acb:{NFSU2_TR(0x4b2acb);
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
B4b2ace:{NFSU2_TR(0x4b2ace);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2acf:L4b2acf:{c.instructions+=2;NFSU2_TR(0x4b2acf);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4b2ad2:{NFSU2_TR(0x4b2ad2);
if(r1(R+518)){{goto L4b2ae5;}}
}
B4b2ad4:L4b2ad4:{c.instructions+=2;NFSU2_TR(0x4b2ad4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x200ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b2ad9:{NFSU2_TR(0x4b2ad9);
if(r1(R+518)){{goto L4b2ae5;}}
}
B4b2adb:L4b2adb:{c.instructions+=3;NFSU2_TR(0x4b2adb);
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
B4b2ade:{NFSU2_TR(0x4b2ade);
__builtin_memmove((R+0),gp(0x7f446c),4);
}
B4b2ae3:{NFSU2_TR(0x4b2ae3);
if(r1(R+518)){{goto L4b2aea;}}
}
B4b2ae5:L4b2ae5:{c.instructions+=1;NFSU2_TR(0x4b2ae5);
__builtin_memmove((R+0),gp(0x7f4464),4);
}
B4b2aea:L4b2aea:{c.instructions+=1;NFSU2_TR(0x4b2aea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2af0:L4b2af0:{c.instructions+=3;NFSU2_TR(0x4b2af0);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4b2af5:{NFSU2_TR(0x4b2af5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b2af8:{NFSU2_TR(0x4b2af8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2b09;}}
}
B4b2afa:L4b2afa:{c.instructions+=2;NFSU2_TR(0x4b2afa);
u8 U[14];
__builtin_memmove((U+6),gp(0x83aab4),4);
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
B4b2b01:{NFSU2_TR(0x4b2b01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2b1e;}}
}
B4b2b03:L4b2b03:{c.instructions+=2;NFSU2_TR(0x4b2b03);
__builtin_memmove((R+0),gp(0x7f445c),4);
}
B4b2b08:{NFSU2_TR(0x4b2b08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2b09:L4b2b09:{c.instructions+=2;NFSU2_TR(0x4b2b09);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2b0e:{NFSU2_TR(0x4b2b0e);
if(r1(R+518)){{goto L4b2b15;}}
}
B4b2b10:L4b2b10:{c.instructions+=2;NFSU2_TR(0x4b2b10);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4b2b13:{NFSU2_TR(0x4b2b13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2b1e;}}
}
B4b2b15:L4b2b15:{c.instructions+=2;NFSU2_TR(0x4b2b15);
u8 U[14];
__builtin_memmove((U+6),gp(0x850088),4);
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
B4b2b1c:{NFSU2_TR(0x4b2b1c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b2b03u);}goto L4b2b03;}}
}
B4b2b1e:L4b2b1e:{c.instructions+=2;NFSU2_TR(0x4b2b1e);
__builtin_memmove((R+0),gp(0x7f4464),4);
}
B4b2b23:{NFSU2_TR(0x4b2b23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2b30:L4b2b30:{c.instructions+=13;NFSU2_TR(0x4b2b30);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2b34:{NFSU2_TR(0x4b2b34);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b2b38:{NFSU2_TR(0x4b2b38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2b39:{NFSU2_TR(0x4b2b39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2b3a:{NFSU2_TR(0x4b2b3a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b2b3e:{NFSU2_TR(0x4b2b3e);
__builtin_memmove((R+24),(R+4),4);
}
B4b2b40:{NFSU2_TR(0x4b2b40);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b2b44:{NFSU2_TR(0x4b2b44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2b45:{NFSU2_TR(0x4b2b45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2b46:{NFSU2_TR(0x4b2b46);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2b47:{NFSU2_TR(0x4b2b47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2b48:{NFSU2_TR(0x4b2b48);
__builtin_memmove((R+4),(R+24),4);
}
B4b2b4a:{NFSU2_TR(0x4b2b4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2b4full));
TAIL_STATIC(0x543d40u,543);
}
B4b2b4f:L4b2b4f:{c.instructions+=2;NFSU2_TR(0x4b2b4f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b2b55:{NFSU2_TR(0x4b2b55);
if(r1(R+518)){{goto L4b2b9d;}}
}
B4b2b57:L4b2b57:{c.instructions+=2;NFSU2_TR(0x4b2b57);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b2b5d:{NFSU2_TR(0x4b2b5d);
if(r1(R+518)){{goto L4b2b9d;}}
}
B4b2b5f:L4b2b5f:{c.instructions+=2;NFSU2_TR(0x4b2b5f);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b2b65:{NFSU2_TR(0x4b2b65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2bcf;}}
}
B4b2b67:L4b2b67:{c.instructions+=3;NFSU2_TR(0x4b2b67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b2b6d:{NFSU2_TR(0x4b2b6d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc407210ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b2b73:{NFSU2_TR(0x4b2b73);
if(r1(R+518)){{goto L4b2b8d;}}
}
B4b2b75:L4b2b75:{c.instructions+=2;NFSU2_TR(0x4b2b75);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4b2b7b:{NFSU2_TR(0x4b2b7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2bcf;}}
}
B4b2b7d:L4b2b7d:{c.instructions+=2;NFSU2_TR(0x4b2b7d);
__builtin_memmove((R+4),gp(0x836340),4);
}
B4b2b83:{NFSU2_TR(0x4b2b83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2b88ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b2a00u);}goto L4b2a00;}
}
B4b2b88:L4b2b88:{c.instructions+=3;NFSU2_TR(0x4b2b88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b2b89:{NFSU2_TR(0x4b2b89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b2b8a:{NFSU2_TR(0x4b2b8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2b8d:L4b2b8d:{c.instructions+=2;NFSU2_TR(0x4b2b8d);
__builtin_memmove((R+4),gp(0x836340),4);
}
B4b2b93:{NFSU2_TR(0x4b2b93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2b98ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b29a0u);}goto L4b29a0;}
}
B4b2b98:L4b2b98:{c.instructions+=3;NFSU2_TR(0x4b2b98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b2b99:{NFSU2_TR(0x4b2b99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b2b9a:{NFSU2_TR(0x4b2b9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2b9d:L4b2b9d:{c.instructions+=5;NFSU2_TR(0x4b2b9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2ba0:{NFSU2_TR(0x4b2ba0);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2ba5:{NFSU2_TR(0x4b2ba5);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2baa:{NFSU2_TR(0x4b2baa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2bab:{NFSU2_TR(0x4b2bab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2bb0ull));
TAIL_STATIC(0x537d40u,537);
}
B4b2bb0:L4b2bb0:{c.instructions+=3;NFSU2_TR(0x4b2bb0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b2bb3:{NFSU2_TR(0x4b2bb3);
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
B4b2bb5:{NFSU2_TR(0x4b2bb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2bcf;}}
}
B4b2bb7:L4b2bb7:{c.instructions+=6;NFSU2_TR(0x4b2bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2bba:{NFSU2_TR(0x4b2bba);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2bbc:{NFSU2_TR(0x4b2bbc);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2bc1:{NFSU2_TR(0x4b2bc1);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2bc6:{NFSU2_TR(0x4b2bc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2bc7:{NFSU2_TR(0x4b2bc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2bccull));
TAIL_STATIC(0x537c60u,537);
}
B4b2bcc:L4b2bcc:{c.instructions+=1;NFSU2_TR(0x4b2bcc);
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
B4b2bcf:L4b2bcf:{c.instructions+=3;NFSU2_TR(0x4b2bcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b2bd0:{NFSU2_TR(0x4b2bd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b2bd1:{NFSU2_TR(0x4b2bd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2be0:L4b2be0:{c.instructions+=2;NFSU2_TR(0x4b2be0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4b2be8:{NFSU2_TR(0x4b2be8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2bf2;}}
}
B4b2bea:L4b2bea:{c.instructions+=2;NFSU2_TR(0x4b2bea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2bec:{NFSU2_TR(0x4b2bec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2bf1ull));
{goto L4b2c00;}
}
B4b2bf1:L4b2bf1:{c.instructions+=1;NFSU2_TR(0x4b2bf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b2bf2:L4b2bf2:{c.instructions+=1;NFSU2_TR(0x4b2bf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2c00:L4b2c00:{c.instructions+=3;NFSU2_TR(0x4b2c00);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4b2c05:{NFSU2_TR(0x4b2c05);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b2c08:{NFSU2_TR(0x4b2c08);
if(r1(R+518)){{goto L4b2c1d;}}
}
B4b2c0a:L4b2c0a:{c.instructions+=2;NFSU2_TR(0x4b2c0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2c0f:{NFSU2_TR(0x4b2c0f);
if(r1(R+518)){{goto L4b2c1d;}}
}
B4b2c11:L4b2c11:{c.instructions+=3;NFSU2_TR(0x4b2c11);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b2c15:{NFSU2_TR(0x4b2c15);
__builtin_memmove(gp(0x83aab4),(R+4),4);
}
B4b2c1b:{NFSU2_TR(0x4b2c1b);
{goto L4b2c27;}
}
B4b2c1d:L4b2c1d:{c.instructions+=2;NFSU2_TR(0x4b2c1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b2c21:{NFSU2_TR(0x4b2c21);
__builtin_memmove(gp(0x850088),(R+8),4);
}
B4b2c27:L4b2c27:{c.instructions+=3;NFSU2_TR(0x4b2c27);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b2c2a:{NFSU2_TR(0x4b2c2a);
w4(R+4,u32(0x83aab4ull));
}
B4b2c2f:{NFSU2_TR(0x4b2c2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2c45;}}
}
B4b2c31:L4b2c31:{c.instructions+=2;NFSU2_TR(0x4b2c31);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2c33:{NFSU2_TR(0x4b2c33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2c38ull));
TAIL_STATIC(0x502930u,502);
}
B4b2c38:L4b2c38:{c.instructions+=3;NFSU2_TR(0x4b2c38);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2c3a:{NFSU2_TR(0x4b2c3a);
w4(R+4,u32(0x83aab4ull));
}
B4b2c3f:{NFSU2_TR(0x4b2c3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2c44ull));
TAIL_STATIC(0x502960u,502);
}
B4b2c44:L4b2c44:{c.instructions+=1;NFSU2_TR(0x4b2c44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2c45:L4b2c45:{c.instructions+=2;NFSU2_TR(0x4b2c45);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2c47:{NFSU2_TR(0x4b2c47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2c4cull));
TAIL_STATIC(0x502930u,502);
}
B4b2c4c:L4b2c4c:{c.instructions+=2;NFSU2_TR(0x4b2c4c);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b2c53:{NFSU2_TR(0x4b2c53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2c62;}}
}
B4b2c55:L4b2c55:{c.instructions+=3;NFSU2_TR(0x4b2c55);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2c57:{NFSU2_TR(0x4b2c57);
w4(R+4,u32(0x83aab4ull));
}
B4b2c5c:{NFSU2_TR(0x4b2c5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2c61ull));
TAIL_STATIC(0x502960u,502);
}
B4b2c61:L4b2c61:{c.instructions+=1;NFSU2_TR(0x4b2c61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2c62:L4b2c62:{c.instructions+=3;NFSU2_TR(0x4b2c62);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2c64:{NFSU2_TR(0x4b2c64);
w4(R+4,u32(0x83aab4ull));
}
B4b2c69:{NFSU2_TR(0x4b2c69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2c6eull));
TAIL_STATIC(0x502960u,502);
}
B4b2c6e:L4b2c6e:{c.instructions+=1;NFSU2_TR(0x4b2c6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2c70:L4b2c70:{c.instructions+=2;NFSU2_TR(0x4b2c70);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4b2c78:{NFSU2_TR(0x4b2c78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2c82;}}
}
B4b2c7a:L4b2c7a:{c.instructions+=2;NFSU2_TR(0x4b2c7a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2c7c:{NFSU2_TR(0x4b2c7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2c81ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b2c00u);}goto L4b2c00;}
}
B4b2c81:L4b2c81:{c.instructions+=1;NFSU2_TR(0x4b2c81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b2c82:L4b2c82:{c.instructions+=1;NFSU2_TR(0x4b2c82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2c90:L4b2c90:{c.instructions+=2;NFSU2_TR(0x4b2c90);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4b2c98:{NFSU2_TR(0x4b2c98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2ca2;}}
}
B4b2c9a:L4b2c9a:{c.instructions+=2;NFSU2_TR(0x4b2c9a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2c9c:{NFSU2_TR(0x4b2c9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2ca1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b2c00u);}goto L4b2c00;}
}
B4b2ca1:L4b2ca1:{c.instructions+=1;NFSU2_TR(0x4b2ca1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b2ca2:L4b2ca2:{c.instructions+=1;NFSU2_TR(0x4b2ca2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2cb0:L4b2cb0:{c.instructions+=2;NFSU2_TR(0x4b2cb0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4b2cb8:{NFSU2_TR(0x4b2cb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2cc2;}}
}
B4b2cba:L4b2cba:{c.instructions+=2;NFSU2_TR(0x4b2cba);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2cbc:{NFSU2_TR(0x4b2cbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2cc1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b2c00u);}goto L4b2c00;}
}
B4b2cc1:L4b2cc1:{c.instructions+=1;NFSU2_TR(0x4b2cc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b2cc2:L4b2cc2:{c.instructions+=1;NFSU2_TR(0x4b2cc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2cd0:L4b2cd0:{c.instructions+=2;NFSU2_TR(0x4b2cd0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4b2cd8:{NFSU2_TR(0x4b2cd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2cec;}}
}
B4b2cda:L4b2cda:{c.instructions+=2;NFSU2_TR(0x4b2cda);
w4(R+4,u32(0x83aab4ull));
}
B4b2cdf:{NFSU2_TR(0x4b2cdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2ce4ull));
TAIL_STATIC(0x5028d0u,502);
}
B4b2ce4:L4b2ce4:{c.instructions+=2;NFSU2_TR(0x4b2ce4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2ce6:{NFSU2_TR(0x4b2ce6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2cebull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b2c00u);}goto L4b2c00;}
}
B4b2ceb:L4b2ceb:{c.instructions+=1;NFSU2_TR(0x4b2ceb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b2cec:L4b2cec:{c.instructions+=1;NFSU2_TR(0x4b2cec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2cf0:L4b2cf0:{c.instructions+=2;NFSU2_TR(0x4b2cf0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4b2cf8:{NFSU2_TR(0x4b2cf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2d1a;}}
}
B4b2cfa:L4b2cfa:{c.instructions+=2;NFSU2_TR(0x4b2cfa);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2cfc:{NFSU2_TR(0x4b2cfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2d01ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b2c00u);}goto L4b2c00;}
}
B4b2d01:L4b2d01:{c.instructions+=3;NFSU2_TR(0x4b2d01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b2d04:{NFSU2_TR(0x4b2d04);
w4(R+4,u32(0x83aab4ull));
}
B4b2d09:{NFSU2_TR(0x4b2d09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2d0eull));
TAIL_STATIC(0x502910u,502);
}
B4b2d0e:L4b2d0e:{c.instructions+=2;NFSU2_TR(0x4b2d0e);
u8 U[2];
w2(U+0,u16(0xfa0ull));
s2(u32(r4(R+0)),r2(U+0));
}
B4b2d13:{NFSU2_TR(0x4b2d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b2d1a:L4b2d1a:{c.instructions+=1;NFSU2_TR(0x4b2d1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2d20:L4b2d20:{c.instructions+=2;NFSU2_TR(0x4b2d20);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4b2d28:{NFSU2_TR(0x4b2d28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2d32;}}
}
B4b2d2a:L4b2d2a:{c.instructions+=2;NFSU2_TR(0x4b2d2a);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2d2c:{NFSU2_TR(0x4b2d2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2d31ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b2c00u);}goto L4b2c00;}
}
B4b2d31:L4b2d31:{c.instructions+=1;NFSU2_TR(0x4b2d31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b2d32:L4b2d32:{c.instructions+=1;NFSU2_TR(0x4b2d32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2d40:L4b2d40:{c.instructions+=2;NFSU2_TR(0x4b2d40);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4b2d48:{NFSU2_TR(0x4b2d48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2d52;}}
}
B4b2d4a:L4b2d4a:{c.instructions+=2;NFSU2_TR(0x4b2d4a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2d4c:{NFSU2_TR(0x4b2d4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2d51ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b2c00u);}goto L4b2c00;}
}
B4b2d51:L4b2d51:{c.instructions+=1;NFSU2_TR(0x4b2d51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b2d52:L4b2d52:{c.instructions+=1;NFSU2_TR(0x4b2d52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b2d60:L4b2d60:{c.instructions+=12;NFSU2_TR(0x4b2d60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2d62:{NFSU2_TR(0x4b2d62);
u8 U[4];
w4(U+0,u32(0x772f70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2d67:{NFSU2_TR(0x4b2d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2d6d:{NFSU2_TR(0x4b2d6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2d6e:{NFSU2_TR(0x4b2d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2d75:{NFSU2_TR(0x4b2d75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2d76:{NFSU2_TR(0x4b2d76);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2d77:{NFSU2_TR(0x4b2d77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2d78:{NFSU2_TR(0x4b2d78);
__builtin_memmove((R+24),(R+4),4);
}
B4b2d7a:{NFSU2_TR(0x4b2d7a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2d7b:{NFSU2_TR(0x4b2d7b);
w4(R+4,u32(0x83aab4ull));
}
B4b2d80:{NFSU2_TR(0x4b2d80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2d85ull));
TAIL_STATIC(0x502910u,502);
}
B4b2d85:L4b2d85:{c.instructions+=3;NFSU2_TR(0x4b2d85);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2d87:{NFSU2_TR(0x4b2d87);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b2d8b:{NFSU2_TR(0x4b2d8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2d90ull));
TAIL_STATIC(0x575620u,575);
}
B4b2d90:L4b2d90:{c.instructions+=6;NFSU2_TR(0x4b2d90);
__builtin_memmove((R+28),(R+0),4);
}
B4b2d92:{NFSU2_TR(0x4b2d92);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b2d95:{NFSU2_TR(0x4b2d95);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2d99:{NFSU2_TR(0x4b2d99);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2d9b:{NFSU2_TR(0x4b2d9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b2da3:{NFSU2_TR(0x4b2da3);
if(r1(R+518)){{goto L4b2dc0;}}
}
B4b2da5:L4b2da5:{c.instructions+=5;NFSU2_TR(0x4b2da5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2da7:{NFSU2_TR(0x4b2da7);
u8 U[4];
w4(U+0,u32(0x93fdee74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2dac:{NFSU2_TR(0x4b2dac);
u8 U[4];
w4(U+0,u32(0xe9638d3eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2db1:{NFSU2_TR(0x4b2db1);
__builtin_memmove((R+4),(R+28),4);
}
B4b2db3:{NFSU2_TR(0x4b2db3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2db8ull));
TAIL_STATIC(0x51f670u,51f);
}
B4b2db8:L4b2db8:{c.instructions+=2;NFSU2_TR(0x4b2db8);
u8 U[4];
w4(U+0,u32(0x790fd4ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b2dbe:{NFSU2_TR(0x4b2dbe);
{goto L4b2dc2;}
}
B4b2dc0:L4b2dc0:{c.instructions+=1;NFSU2_TR(0x4b2dc0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b2dc2:L4b2dc2:{c.instructions+=6;NFSU2_TR(0x4b2dc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b2dc4:{NFSU2_TR(0x4b2dc4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b2dc7:{NFSU2_TR(0x4b2dc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2dc8:{NFSU2_TR(0x4b2dc8);
__builtin_memmove((R+4),(R+24),4);
}
B4b2dca:{NFSU2_TR(0x4b2dca);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2dce:{NFSU2_TR(0x4b2dce);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2dd1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b2dd1:L4b2dd1:{c.instructions+=2;NFSU2_TR(0x4b2dd1);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2dd3:{NFSU2_TR(0x4b2dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2dd8ull));
TAIL_STATIC(0x575620u,575);
}
B4b2dd8:L4b2dd8:{c.instructions+=6;NFSU2_TR(0x4b2dd8);
__builtin_memmove((R+28),(R+0),4);
}
B4b2dda:{NFSU2_TR(0x4b2dda);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b2ddd:{NFSU2_TR(0x4b2ddd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2de1:{NFSU2_TR(0x4b2de1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2de3:{NFSU2_TR(0x4b2de3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b2deb:{NFSU2_TR(0x4b2deb);
if(r1(R+518)){{goto L4b2e08;}}
}
B4b2ded:L4b2ded:{c.instructions+=5;NFSU2_TR(0x4b2ded);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2def:{NFSU2_TR(0x4b2def);
u8 U[4];
w4(U+0,u32(0xdcb9f861ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2df4:{NFSU2_TR(0x4b2df4);
u8 U[4];
w4(U+0,u32(0x2521e5ebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2df9:{NFSU2_TR(0x4b2df9);
__builtin_memmove((R+4),(R+28),4);
}
B4b2dfb:{NFSU2_TR(0x4b2dfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2e00ull));
TAIL_STATIC(0x51f670u,51f);
}
B4b2e00:L4b2e00:{c.instructions+=2;NFSU2_TR(0x4b2e00);
u8 U[4];
w4(U+0,u32(0x790fdcull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b2e06:{NFSU2_TR(0x4b2e06);
{goto L4b2e0a;}
}
B4b2e08:L4b2e08:{c.instructions+=1;NFSU2_TR(0x4b2e08);
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
B4b2e0a:L4b2e0a:{c.instructions+=5;NFSU2_TR(0x4b2e0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b2e0c:{NFSU2_TR(0x4b2e0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2e0d:{NFSU2_TR(0x4b2e0d);
__builtin_memmove((R+4),(R+24),4);
}
B4b2e0f:{NFSU2_TR(0x4b2e0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2e13:{NFSU2_TR(0x4b2e13);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2e16ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b2e16:L4b2e16:{c.instructions+=2;NFSU2_TR(0x4b2e16);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2e18:{NFSU2_TR(0x4b2e18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2e1dull));
TAIL_STATIC(0x575620u,575);
}
B4b2e1d:L4b2e1d:{c.instructions+=6;NFSU2_TR(0x4b2e1d);
__builtin_memmove((R+28),(R+0),4);
}
B4b2e1f:{NFSU2_TR(0x4b2e1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b2e22:{NFSU2_TR(0x4b2e22);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2e26:{NFSU2_TR(0x4b2e26);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2e28:{NFSU2_TR(0x4b2e28);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b2e30:{NFSU2_TR(0x4b2e30);
if(r1(R+518)){{goto L4b2e4d;}}
}
B4b2e32:L4b2e32:{c.instructions+=5;NFSU2_TR(0x4b2e32);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2e34:{NFSU2_TR(0x4b2e34);
u8 U[4];
w4(U+0,u32(0x35102edfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2e39:{NFSU2_TR(0x4b2e39);
u8 U[4];
w4(U+0,u32(0xaaab31e9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2e3e:{NFSU2_TR(0x4b2e3e);
__builtin_memmove((R+4),(R+28),4);
}
B4b2e40:{NFSU2_TR(0x4b2e40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2e45ull));
TAIL_STATIC(0x51f670u,51f);
}
B4b2e45:L4b2e45:{c.instructions+=2;NFSU2_TR(0x4b2e45);
u8 U[4];
w4(U+0,u32(0x790fe4ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b2e4b:{NFSU2_TR(0x4b2e4b);
{goto L4b2e4f;}
}
B4b2e4d:L4b2e4d:{c.instructions+=1;NFSU2_TR(0x4b2e4d);
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
B4b2e4f:L4b2e4f:{c.instructions+=5;NFSU2_TR(0x4b2e4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b2e51:{NFSU2_TR(0x4b2e51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2e52:{NFSU2_TR(0x4b2e52);
__builtin_memmove((R+4),(R+24),4);
}
B4b2e54:{NFSU2_TR(0x4b2e54);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2e58:{NFSU2_TR(0x4b2e58);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2e5bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b2e5b:L4b2e5b:{c.instructions+=2;NFSU2_TR(0x4b2e5b);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2e5d:{NFSU2_TR(0x4b2e5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2e62ull));
TAIL_STATIC(0x575620u,575);
}
B4b2e62:L4b2e62:{c.instructions+=6;NFSU2_TR(0x4b2e62);
__builtin_memmove((R+28),(R+0),4);
}
B4b2e64:{NFSU2_TR(0x4b2e64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b2e67:{NFSU2_TR(0x4b2e67);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2e6b:{NFSU2_TR(0x4b2e6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2e6d:{NFSU2_TR(0x4b2e6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b2e75:{NFSU2_TR(0x4b2e75);
if(r1(R+518)){{goto L4b2e92;}}
}
B4b2e77:L4b2e77:{c.instructions+=5;NFSU2_TR(0x4b2e77);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2e79:{NFSU2_TR(0x4b2e79);
u8 U[4];
w4(U+0,u32(0xd7162cfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2e7e:{NFSU2_TR(0x4b2e7e);
u8 U[4];
w4(U+0,u32(0x119144ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2e83:{NFSU2_TR(0x4b2e83);
__builtin_memmove((R+4),(R+28),4);
}
B4b2e85:{NFSU2_TR(0x4b2e85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2e8aull));
TAIL_STATIC(0x51f670u,51f);
}
B4b2e8a:L4b2e8a:{c.instructions+=2;NFSU2_TR(0x4b2e8a);
u8 U[4];
w4(U+0,u32(0x790fecull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b2e90:{NFSU2_TR(0x4b2e90);
{goto L4b2e94;}
}
B4b2e92:L4b2e92:{c.instructions+=1;NFSU2_TR(0x4b2e92);
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
B4b2e94:L4b2e94:{c.instructions+=5;NFSU2_TR(0x4b2e94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b2e96:{NFSU2_TR(0x4b2e96);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2e97:{NFSU2_TR(0x4b2e97);
__builtin_memmove((R+4),(R+24),4);
}
B4b2e99:{NFSU2_TR(0x4b2e99);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2e9d:{NFSU2_TR(0x4b2e9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2ea0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b2ea0:L4b2ea0:{c.instructions+=2;NFSU2_TR(0x4b2ea0);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2ea2:{NFSU2_TR(0x4b2ea2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2ea7ull));
TAIL_STATIC(0x575620u,575);
}
B4b2ea7:L4b2ea7:{c.instructions+=6;NFSU2_TR(0x4b2ea7);
__builtin_memmove((R+28),(R+0),4);
}
B4b2ea9:{NFSU2_TR(0x4b2ea9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b2eac:{NFSU2_TR(0x4b2eac);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2eb0:{NFSU2_TR(0x4b2eb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2eb2:{NFSU2_TR(0x4b2eb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b2eba:{NFSU2_TR(0x4b2eba);
if(r1(R+518)){{goto L4b2ed7;}}
}
B4b2ebc:L4b2ebc:{c.instructions+=5;NFSU2_TR(0x4b2ebc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2ebe:{NFSU2_TR(0x4b2ebe);
u8 U[4];
w4(U+0,u32(0x30da61e1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2ec3:{NFSU2_TR(0x4b2ec3);
u8 U[4];
w4(U+0,u32(0x91703aefull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2ec8:{NFSU2_TR(0x4b2ec8);
__builtin_memmove((R+4),(R+28),4);
}
B4b2eca:{NFSU2_TR(0x4b2eca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2ecfull));
TAIL_STATIC(0x51f670u,51f);
}
B4b2ecf:L4b2ecf:{c.instructions+=2;NFSU2_TR(0x4b2ecf);
u8 U[4];
w4(U+0,u32(0x791004ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b2ed5:{NFSU2_TR(0x4b2ed5);
{goto L4b2ed9;}
}
B4b2ed7:L4b2ed7:{c.instructions+=1;NFSU2_TR(0x4b2ed7);
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
B4b2ed9:L4b2ed9:{c.instructions+=5;NFSU2_TR(0x4b2ed9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b2edb:{NFSU2_TR(0x4b2edb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2edc:{NFSU2_TR(0x4b2edc);
__builtin_memmove((R+4),(R+24),4);
}
B4b2ede:{NFSU2_TR(0x4b2ede);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2ee2:{NFSU2_TR(0x4b2ee2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2ee5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b2ee5:L4b2ee5:{c.instructions+=2;NFSU2_TR(0x4b2ee5);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2ee7:{NFSU2_TR(0x4b2ee7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2eecull));
TAIL_STATIC(0x575620u,575);
}
B4b2eec:L4b2eec:{c.instructions+=6;NFSU2_TR(0x4b2eec);
__builtin_memmove((R+28),(R+0),4);
}
B4b2eee:{NFSU2_TR(0x4b2eee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b2ef1:{NFSU2_TR(0x4b2ef1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2ef5:{NFSU2_TR(0x4b2ef5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2ef7:{NFSU2_TR(0x4b2ef7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b2eff:{NFSU2_TR(0x4b2eff);
if(r1(R+518)){{goto L4b2f1c;}}
}
B4b2f01:L4b2f01:{c.instructions+=5;NFSU2_TR(0x4b2f01);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2f03:{NFSU2_TR(0x4b2f03);
u8 U[4];
w4(U+0,u32(0xc786c4e7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2f08:{NFSU2_TR(0x4b2f08);
u8 U[4];
w4(U+0,u32(0x3f6495c5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2f0d:{NFSU2_TR(0x4b2f0d);
__builtin_memmove((R+4),(R+28),4);
}
B4b2f0f:{NFSU2_TR(0x4b2f0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2f14ull));
TAIL_STATIC(0x51f670u,51f);
}
B4b2f14:L4b2f14:{c.instructions+=2;NFSU2_TR(0x4b2f14);
u8 U[4];
w4(U+0,u32(0x79100cull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b2f1a:{NFSU2_TR(0x4b2f1a);
{goto L4b2f1e;}
}
B4b2f1c:L4b2f1c:{c.instructions+=1;NFSU2_TR(0x4b2f1c);
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
B4b2f1e:L4b2f1e:{c.instructions+=5;NFSU2_TR(0x4b2f1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b2f20:{NFSU2_TR(0x4b2f20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2f21:{NFSU2_TR(0x4b2f21);
__builtin_memmove((R+4),(R+24),4);
}
B4b2f23:{NFSU2_TR(0x4b2f23);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2f27:{NFSU2_TR(0x4b2f27);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2f2aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b2f2a:L4b2f2a:{c.instructions+=3;NFSU2_TR(0x4b2f2a);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4b2f2f:{NFSU2_TR(0x4b2f2f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b2f32:{NFSU2_TR(0x4b2f32);
if(r1(R+518)){{goto L4b2f40;}}
}
B4b2f34:L4b2f34:{c.instructions+=2;NFSU2_TR(0x4b2f34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2f39:{NFSU2_TR(0x4b2f39);
if(r1(R+518)){{goto L4b2f40;}}
}
B4b2f3b:L4b2f3b:{c.instructions+=2;NFSU2_TR(0x4b2f3b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b2f3e:{NFSU2_TR(0x4b2f3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b2f8a;}}
}
B4b2f40:L4b2f40:{c.instructions+=2;NFSU2_TR(0x4b2f40);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2f42:{NFSU2_TR(0x4b2f42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2f47ull));
TAIL_STATIC(0x575620u,575);
}
B4b2f47:L4b2f47:{c.instructions+=6;NFSU2_TR(0x4b2f47);
__builtin_memmove((R+28),(R+0),4);
}
B4b2f49:{NFSU2_TR(0x4b2f49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b2f4c:{NFSU2_TR(0x4b2f4c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2f50:{NFSU2_TR(0x4b2f50);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2f52:{NFSU2_TR(0x4b2f52);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b2f5a:{NFSU2_TR(0x4b2f5a);
if(r1(R+518)){{goto L4b2f77;}}
}
B4b2f5c:L4b2f5c:{c.instructions+=5;NFSU2_TR(0x4b2f5c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2f5e:{NFSU2_TR(0x4b2f5e);
u8 U[4];
w4(U+0,u32(0x613d3106ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2f63:{NFSU2_TR(0x4b2f63);
u8 U[4];
w4(U+0,u32(0x86c74cbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2f68:{NFSU2_TR(0x4b2f68);
__builtin_memmove((R+4),(R+28),4);
}
B4b2f6a:{NFSU2_TR(0x4b2f6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2f6full));
TAIL_STATIC(0x51f670u,51f);
}
B4b2f6f:L4b2f6f:{c.instructions+=2;NFSU2_TR(0x4b2f6f);
u8 U[4];
w4(U+0,u32(0x790ff4ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b2f75:{NFSU2_TR(0x4b2f75);
{goto L4b2f79;}
}
B4b2f77:L4b2f77:{c.instructions+=1;NFSU2_TR(0x4b2f77);
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
B4b2f79:L4b2f79:{c.instructions+=5;NFSU2_TR(0x4b2f79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b2f7b:{NFSU2_TR(0x4b2f7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2f7c:{NFSU2_TR(0x4b2f7c);
__builtin_memmove((R+4),(R+24),4);
}
B4b2f7e:{NFSU2_TR(0x4b2f7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2f82:{NFSU2_TR(0x4b2f82);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2f85ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b2f85:L4b2f85:{c.instructions+=1;NFSU2_TR(0x4b2f85);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4b2f8a:L4b2f8a:{c.instructions+=2;NFSU2_TR(0x4b2f8a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b2f8d:{NFSU2_TR(0x4b2f8d);
if(r1(R+518)){{goto L4b2fe0;}}
}
B4b2f8f:L4b2f8f:{c.instructions+=2;NFSU2_TR(0x4b2f8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2f94:{NFSU2_TR(0x4b2f94);
if(r1(R+518)){{goto L4b2fe0;}}
}
B4b2f96:L4b2f96:{c.instructions+=2;NFSU2_TR(0x4b2f96);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b2f99:{NFSU2_TR(0x4b2f99);
if(r1(R+518)){{goto L4b2fe0;}}
}
B4b2f9b:L4b2f9b:{c.instructions+=2;NFSU2_TR(0x4b2f9b);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2f9d:{NFSU2_TR(0x4b2f9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2fa2ull));
TAIL_STATIC(0x575620u,575);
}
B4b2fa2:L4b2fa2:{c.instructions+=6;NFSU2_TR(0x4b2fa2);
__builtin_memmove((R+28),(R+0),4);
}
B4b2fa4:{NFSU2_TR(0x4b2fa4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b2fa7:{NFSU2_TR(0x4b2fa7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2fab:{NFSU2_TR(0x4b2fab);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b2fad:{NFSU2_TR(0x4b2fad);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b2fb5:{NFSU2_TR(0x4b2fb5);
if(r1(R+518)){{goto L4b2fd2;}}
}
B4b2fb7:L4b2fb7:{c.instructions+=5;NFSU2_TR(0x4b2fb7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2fb9:{NFSU2_TR(0x4b2fb9);
u8 U[4];
w4(U+0,u32(0x6f2421b7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2fbe:{NFSU2_TR(0x4b2fbe);
u8 U[4];
w4(U+0,u32(0x713d99c1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2fc3:{NFSU2_TR(0x4b2fc3);
__builtin_memmove((R+4),(R+28),4);
}
B4b2fc5:{NFSU2_TR(0x4b2fc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2fcaull));
TAIL_STATIC(0x51f670u,51f);
}
B4b2fca:L4b2fca:{c.instructions+=2;NFSU2_TR(0x4b2fca);
u8 U[4];
w4(U+0,u32(0x790ffcull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b2fd0:{NFSU2_TR(0x4b2fd0);
{goto L4b2fd4;}
}
B4b2fd2:L4b2fd2:{c.instructions+=1;NFSU2_TR(0x4b2fd2);
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
B4b2fd4:L4b2fd4:{c.instructions+=5;NFSU2_TR(0x4b2fd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b2fd6:{NFSU2_TR(0x4b2fd6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2fd7:{NFSU2_TR(0x4b2fd7);
__builtin_memmove((R+4),(R+24),4);
}
B4b2fd9:{NFSU2_TR(0x4b2fd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b2fdd:{NFSU2_TR(0x4b2fdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2fe0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b2fe0:L4b2fe0:{c.instructions+=5;NFSU2_TR(0x4b2fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b2fe3:{NFSU2_TR(0x4b2fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b2fe6:{NFSU2_TR(0x4b2fe6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4cull))));
}
B4b2fe9:{NFSU2_TR(0x4b2fe9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2fea:{NFSU2_TR(0x4b2fea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2fefull));
TAIL_STATIC(0x50b8a0u,50b);
}
B4b2fef:L4b2fef:{c.instructions+=4;NFSU2_TR(0x4b2fef);
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
B4b2ff2:{NFSU2_TR(0x4b2ff2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b2ff3:{NFSU2_TR(0x4b2ff3);
__builtin_memmove((R+4),(R+24),4);
}
B4b2ff5:{NFSU2_TR(0x4b2ff5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2ff8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b2ff8:L4b2ff8:{c.instructions+=5;NFSU2_TR(0x4b2ff8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b2ffc:{NFSU2_TR(0x4b2ffc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b2ffd:{NFSU2_TR(0x4b2ffd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b2ffe:{NFSU2_TR(0x4b2ffe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b2fff:{NFSU2_TR(0x4b2fff);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x4b3006u,4b3);
}
XIT:NFSU2_TR_EXIT(0x4b2,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
