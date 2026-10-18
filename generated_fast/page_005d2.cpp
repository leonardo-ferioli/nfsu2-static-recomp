#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_492(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 body_5bd(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_5c0(u8* __restrict R,Cpu& c);
u32 body_5c2(u8* __restrict R,Cpu& c);
u32 body_5c3(u8* __restrict R,Cpu& c);
u32 body_5c7(u8* __restrict R,Cpu& c);
u32 body_5ca(u8* __restrict R,Cpu& c);
u32 body_5cb(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_5cf(u8* __restrict R,Cpu& c);
u32 body_5d0(u8* __restrict R,Cpu& c);
u32 body_5d1(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_61a(u8* __restrict R,Cpu& c);
u32 body_63b(u8* __restrict R,Cpu& c);
u32 body_640(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5d2,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5d2,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5d2(u8* __restrict R,Cpu& c);
u32 page_5d2(Cpu& c){return body_5d2(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5d2(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5d2003:goto L5d2003;
case 0x5d2005:goto L5d2005;
case 0x5d2008:c.instructions+=1;goto B5d2008;
case 0x5d200e:goto L5d200e;
case 0x5d2010:goto L5d2010;
case 0x5d2014:goto L5d2014;
case 0x5d2017:c.instructions+=1;goto B5d2017;
case 0x5d2019:goto L5d2019;
case 0x5d201e:c.instructions+=1;goto B5d201e;
case 0x5d2020:goto L5d2020;
case 0x5d2023:c.instructions+=1;goto B5d2023;
case 0x5d2025:goto L5d2025;
case 0x5d202a:goto L5d202a;
case 0x5d202c:goto L5d202c;
case 0x5d202e:c.instructions+=1;goto B5d202e;
case 0x5d2034:goto L5d2034;
case 0x5d2037:c.instructions+=2;goto B5d2037;
case 0x5d203a:c.instructions+=1;goto B5d203a;
case 0x5d203c:goto L5d203c;
case 0x5d2042:c.instructions+=13;goto B5d2042;
case 0x5d2048:c.instructions+=12;goto B5d2048;
case 0x5d204e:c.instructions+=11;goto B5d204e;
case 0x5d2058:c.instructions+=10;goto B5d2058;
case 0x5d2062:c.instructions+=9;goto B5d2062;
case 0x5d2065:c.instructions+=8;goto B5d2065;
case 0x5d2068:c.instructions+=7;goto B5d2068;
case 0x5d206b:c.instructions+=6;goto B5d206b;
case 0x5d206d:c.instructions+=5;goto B5d206d;
case 0x5d206f:c.instructions+=4;goto B5d206f;
case 0x5d2074:c.instructions+=3;goto B5d2074;
case 0x5d2075:c.instructions+=2;goto B5d2075;
case 0x5d2076:c.instructions+=1;goto B5d2076;
case 0x5d2079:goto L5d2079;
case 0x5d207c:c.instructions+=3;goto B5d207c;
case 0x5d2082:c.instructions+=2;goto B5d2082;
case 0x5d2084:c.instructions+=1;goto B5d2084;
case 0x5d2086:goto L5d2086;
case 0x5d208b:c.instructions+=2;goto B5d208b;
case 0x5d208d:c.instructions+=1;goto B5d208d;
case 0x5d208f:goto L5d208f;
case 0x5d2097:c.instructions+=1;goto B5d2097;
case 0x5d2099:goto L5d2099;
case 0x5d209c:c.instructions+=1;goto B5d209c;
case 0x5d209e:goto L5d209e;
case 0x5d20a6:c.instructions+=1;goto B5d20a6;
case 0x5d20a8:goto L5d20a8;
case 0x5d20ab:c.instructions+=1;goto B5d20ab;
case 0x5d20ad:goto L5d20ad;
case 0x5d20b3:c.instructions+=5;goto B5d20b3;
case 0x5d20b5:c.instructions+=4;goto B5d20b5;
case 0x5d20bb:c.instructions+=3;goto B5d20bb;
case 0x5d20be:c.instructions+=2;goto B5d20be;
case 0x5d20c0:c.instructions+=1;goto B5d20c0;
case 0x5d20c4:goto L5d20c4;
case 0x5d20c8:c.instructions+=6;goto B5d20c8;
case 0x5d20cb:c.instructions+=5;goto B5d20cb;
case 0x5d20cd:c.instructions+=4;goto B5d20cd;
case 0x5d20ce:c.instructions+=3;goto B5d20ce;
case 0x5d20cf:c.instructions+=2;goto B5d20cf;
case 0x5d20d0:c.instructions+=1;goto B5d20d0;
case 0x5d20d3:goto L5d20d3;
case 0x5d20d6:c.instructions+=3;goto B5d20d6;
case 0x5d20dc:c.instructions+=2;goto B5d20dc;
case 0x5d20de:c.instructions+=1;goto B5d20de;
case 0x5d20e0:goto L5d20e0;
case 0x5d20e3:c.instructions+=4;goto B5d20e3;
case 0x5d20e5:c.instructions+=3;goto B5d20e5;
case 0x5d20ea:c.instructions+=2;goto B5d20ea;
case 0x5d20ee:c.instructions+=1;goto B5d20ee;
case 0x5d20f3:goto L5d20f3;
case 0x5d20f4:c.instructions+=4;goto B5d20f4;
case 0x5d20f8:c.instructions+=3;goto B5d20f8;
case 0x5d20f9:c.instructions+=2;goto B5d20f9;
case 0x5d20fa:c.instructions+=1;goto B5d20fa;
case 0x5d20fd:goto L5d20fd;
case 0x5d2100:c.instructions+=3;goto B5d2100;
case 0x5d2106:c.instructions+=2;goto B5d2106;
case 0x5d2108:c.instructions+=1;goto B5d2108;
case 0x5d210a:goto L5d210a;
case 0x5d210d:c.instructions+=5;goto B5d210d;
case 0x5d210f:c.instructions+=4;goto B5d210f;
case 0x5d2111:c.instructions+=3;goto B5d2111;
case 0x5d2112:c.instructions+=2;goto B5d2112;
case 0x5d2113:c.instructions+=1;goto B5d2113;
case 0x5d2116:goto L5d2116;
case 0x5d2119:c.instructions+=3;goto B5d2119;
case 0x5d211f:c.instructions+=2;goto B5d211f;
case 0x5d2121:c.instructions+=1;goto B5d2121;
case 0x5d2123:goto L5d2123;
case 0x5d2129:c.instructions+=6;goto B5d2129;
case 0x5d212c:c.instructions+=5;goto B5d212c;
case 0x5d212e:c.instructions+=4;goto B5d212e;
case 0x5d212f:c.instructions+=3;goto B5d212f;
case 0x5d2130:c.instructions+=2;goto B5d2130;
case 0x5d2131:c.instructions+=1;goto B5d2131;
case 0x5d2134:goto L5d2134;
case 0x5d2137:c.instructions+=3;goto B5d2137;
case 0x5d213d:c.instructions+=2;goto B5d213d;
case 0x5d213f:c.instructions+=1;goto B5d213f;
case 0x5d2141:goto L5d2141;
case 0x5d2144:c.instructions+=5;goto B5d2144;
case 0x5d2146:c.instructions+=4;goto B5d2146;
case 0x5d2148:c.instructions+=3;goto B5d2148;
case 0x5d2149:c.instructions+=2;goto B5d2149;
case 0x5d214a:c.instructions+=1;goto B5d214a;
case 0x5d214d:goto L5d214d;
case 0x5d2150:c.instructions+=5;goto B5d2150;
case 0x5d2154:c.instructions+=4;goto B5d2154;
case 0x5d2156:c.instructions+=3;goto B5d2156;
case 0x5d2157:c.instructions+=2;goto B5d2157;
case 0x5d2158:c.instructions+=1;goto B5d2158;
case 0x5d215e:goto L5d215e;
case 0x5d2160:c.instructions+=1;goto B5d2160;
case 0x5d2162:goto L5d2162;
case 0x5d2166:goto L5d2166;
case 0x5d216b:c.instructions+=4;goto B5d216b;
case 0x5d216c:c.instructions+=3;goto B5d216c;
case 0x5d216e:c.instructions+=2;goto B5d216e;
case 0x5d2172:c.instructions+=1;goto B5d2172;
case 0x5d2178:goto L5d2178;
case 0x5d217a:goto L5d217a;
case 0x5d217e:c.instructions+=7;goto B5d217e;
case 0x5d2181:c.instructions+=6;goto B5d2181;
case 0x5d2182:c.instructions+=5;goto B5d2182;
case 0x5d2185:c.instructions+=4;goto B5d2185;
case 0x5d2188:c.instructions+=3;goto B5d2188;
case 0x5d218a:c.instructions+=2;goto B5d218a;
case 0x5d218b:c.instructions+=1;goto B5d218b;
case 0x5d2191:goto L5d2191;
case 0x5d2195:c.instructions+=2;goto B5d2195;
case 0x5d2198:c.instructions+=1;goto B5d2198;
case 0x5d219b:goto L5d219b;
case 0x5d219d:c.instructions+=1;goto B5d219d;
case 0x5d21a0:goto L5d21a0;
case 0x5d21a3:c.instructions+=6;goto B5d21a3;
case 0x5d21a6:c.instructions+=5;goto B5d21a6;
case 0x5d21a8:c.instructions+=4;goto B5d21a8;
case 0x5d21a9:c.instructions+=3;goto B5d21a9;
case 0x5d21aa:c.instructions+=2;goto B5d21aa;
case 0x5d21ab:c.instructions+=1;goto B5d21ab;
case 0x5d21ae:goto L5d21ae;
case 0x5d21b0:c.instructions+=1;goto B5d21b0;
case 0x5d21b2:goto L5d21b2;
case 0x5d21b3:c.instructions+=2;goto B5d21b3;
case 0x5d21b6:c.instructions+=1;goto B5d21b6;
case 0x5d21b8:goto L5d21b8;
case 0x5d21bc:c.instructions+=2;goto B5d21bc;
case 0x5d21bf:c.instructions+=1;goto B5d21bf;
case 0x5d21c1:goto L5d21c1;
case 0x5d21c4:c.instructions+=7;goto B5d21c4;
case 0x5d21ca:c.instructions+=6;goto B5d21ca;
case 0x5d21cd:c.instructions+=5;goto B5d21cd;
case 0x5d21d0:c.instructions+=4;goto B5d21d0;
case 0x5d21d5:c.instructions+=3;goto B5d21d5;
case 0x5d21d6:c.instructions+=2;goto B5d21d6;
case 0x5d21d7:c.instructions+=1;goto B5d21d7;
case 0x5d21da:goto L5d21da;
case 0x5d21db:c.instructions+=5;goto B5d21db;
case 0x5d21dc:c.instructions+=4;goto B5d21dc;
case 0x5d21dd:c.instructions+=3;goto B5d21dd;
case 0x5d21de:c.instructions+=2;goto B5d21de;
case 0x5d21e4:c.instructions+=1;goto B5d21e4;
case 0x5d21f0:goto L5d21f0;
case 0x5d21f2:c.instructions+=10;goto B5d21f2;
case 0x5d21f7:c.instructions+=9;goto B5d21f7;
case 0x5d21fd:c.instructions+=8;goto B5d21fd;
case 0x5d21fe:c.instructions+=7;goto B5d21fe;
case 0x5d2205:c.instructions+=6;goto B5d2205;
case 0x5d2206:c.instructions+=5;goto B5d2206;
case 0x5d220b:c.instructions+=4;goto B5d220b;
case 0x5d220d:c.instructions+=3;goto B5d220d;
case 0x5d2212:c.instructions+=2;goto B5d2212;
case 0x5d2213:c.instructions+=1;goto B5d2213;
case 0x5d2216:goto L5d2216;
case 0x5d221c:c.instructions+=4;goto B5d221c;
case 0x5d221e:c.instructions+=3;goto B5d221e;
case 0x5d2224:c.instructions+=2;goto B5d2224;
case 0x5d2229:c.instructions+=1;goto B5d2229;
case 0x5d222b:goto L5d222b;
case 0x5d222e:c.instructions+=1;goto B5d222e;
case 0x5d2230:goto L5d2230;
case 0x5d2236:c.instructions+=1;goto B5d2236;
case 0x5d2238:goto L5d2238;
case 0x5d223d:c.instructions+=1;goto B5d223d;
case 0x5d2242:goto L5d2242;
case 0x5d2245:c.instructions+=1;goto B5d2245;
case 0x5d2247:goto L5d2247;
case 0x5d2248:c.instructions+=1;goto B5d2248;
case 0x5d224d:goto L5d224d;
case 0x5d2253:c.instructions+=1;goto B5d2253;
case 0x5d2255:goto L5d2255;
case 0x5d225a:goto L5d225a;
case 0x5d225f:c.instructions+=2;goto B5d225f;
case 0x5d2261:c.instructions+=1;goto B5d2261;
case 0x5d2263:goto L5d2263;
case 0x5d2265:c.instructions+=2;goto B5d2265;
case 0x5d2266:c.instructions+=1;goto B5d2266;
case 0x5d2269:goto L5d2269;
case 0x5d226a:c.instructions+=2;goto B5d226a;
case 0x5d226f:c.instructions+=1;goto B5d226f;
case 0x5d2274:goto L5d2274;
case 0x5d2279:c.instructions+=2;goto B5d2279;
case 0x5d227b:c.instructions+=1;goto B5d227b;
case 0x5d2281:goto L5d2281;
case 0x5d2282:c.instructions+=4;goto B5d2282;
case 0x5d2283:c.instructions+=3;goto B5d2283;
case 0x5d2285:c.instructions+=2;goto B5d2285;
case 0x5d2288:c.instructions+=1;goto B5d2288;
case 0x5d2290:goto L5d2290;
case 0x5d2292:c.instructions+=2;goto B5d2292;
case 0x5d2295:c.instructions+=1;goto B5d2295;
case 0x5d229b:goto L5d229b;
case 0x5d22a2:c.instructions+=1;goto B5d22a2;
case 0x5d22a9:goto L5d22a9;
case 0x5d22ab:c.instructions+=1;goto B5d22ab;
case 0x5d22b0:goto L5d22b0;
case 0x5d22b2:c.instructions+=5;goto B5d22b2;
case 0x5d22b5:c.instructions+=4;goto B5d22b5;
case 0x5d22b9:c.instructions+=3;goto B5d22b9;
case 0x5d22bb:c.instructions+=2;goto B5d22bb;
case 0x5d22c3:c.instructions+=1;goto B5d22c3;
case 0x5d22c9:goto L5d22c9;
case 0x5d22cb:c.instructions+=1;goto B5d22cb;
case 0x5d22d0:goto L5d22d0;
case 0x5d22d6:c.instructions+=2;goto B5d22d6;
case 0x5d22d8:c.instructions+=1;goto B5d22d8;
case 0x5d22dd:goto L5d22dd;
case 0x5d22df:c.instructions+=1;goto B5d22df;
case 0x5d22e4:goto L5d22e4;
case 0x5d22e6:c.instructions+=5;goto B5d22e6;
case 0x5d22e9:c.instructions+=4;goto B5d22e9;
case 0x5d22ed:c.instructions+=3;goto B5d22ed;
case 0x5d22ef:c.instructions+=2;goto B5d22ef;
case 0x5d22f7:c.instructions+=1;goto B5d22f7;
case 0x5d22fd:goto L5d22fd;
case 0x5d22ff:c.instructions+=1;goto B5d22ff;
case 0x5d2304:goto L5d2304;
case 0x5d230a:c.instructions+=2;goto B5d230a;
case 0x5d230c:c.instructions+=1;goto B5d230c;
case 0x5d2311:goto L5d2311;
case 0x5d2313:c.instructions+=1;goto B5d2313;
case 0x5d2318:goto L5d2318;
case 0x5d231a:c.instructions+=5;goto B5d231a;
case 0x5d231d:c.instructions+=4;goto B5d231d;
case 0x5d2321:c.instructions+=3;goto B5d2321;
case 0x5d2323:c.instructions+=2;goto B5d2323;
case 0x5d232b:c.instructions+=1;goto B5d232b;
case 0x5d2331:goto L5d2331;
case 0x5d2333:c.instructions+=1;goto B5d2333;
case 0x5d2338:goto L5d2338;
case 0x5d233e:c.instructions+=2;goto B5d233e;
case 0x5d2340:c.instructions+=1;goto B5d2340;
case 0x5d2345:goto L5d2345;
case 0x5d2347:c.instructions+=1;goto B5d2347;
case 0x5d234c:goto L5d234c;
case 0x5d234e:c.instructions+=5;goto B5d234e;
case 0x5d2351:c.instructions+=4;goto B5d2351;
case 0x5d2355:c.instructions+=3;goto B5d2355;
case 0x5d2357:c.instructions+=2;goto B5d2357;
case 0x5d235f:c.instructions+=1;goto B5d235f;
case 0x5d2365:goto L5d2365;
case 0x5d2367:c.instructions+=1;goto B5d2367;
case 0x5d236c:goto L5d236c;
case 0x5d2372:c.instructions+=2;goto B5d2372;
case 0x5d2374:c.instructions+=1;goto B5d2374;
case 0x5d2379:goto L5d2379;
case 0x5d237b:c.instructions+=1;goto B5d237b;
case 0x5d2380:goto L5d2380;
case 0x5d2382:c.instructions+=5;goto B5d2382;
case 0x5d2385:c.instructions+=4;goto B5d2385;
case 0x5d2389:c.instructions+=3;goto B5d2389;
case 0x5d238b:c.instructions+=2;goto B5d238b;
case 0x5d2393:c.instructions+=1;goto B5d2393;
case 0x5d2399:goto L5d2399;
case 0x5d239b:c.instructions+=1;goto B5d239b;
case 0x5d23a0:goto L5d23a0;
case 0x5d23a6:c.instructions+=2;goto B5d23a6;
case 0x5d23a8:c.instructions+=1;goto B5d23a8;
case 0x5d23ad:goto L5d23ad;
case 0x5d23af:c.instructions+=1;goto B5d23af;
case 0x5d23b4:goto L5d23b4;
case 0x5d23b6:c.instructions+=5;goto B5d23b6;
case 0x5d23b9:c.instructions+=4;goto B5d23b9;
case 0x5d23bd:c.instructions+=3;goto B5d23bd;
case 0x5d23bf:c.instructions+=2;goto B5d23bf;
case 0x5d23c7:c.instructions+=1;goto B5d23c7;
case 0x5d23c9:goto L5d23c9;
case 0x5d23cb:c.instructions+=1;goto B5d23cb;
case 0x5d23d0:goto L5d23d0;
case 0x5d23d6:c.instructions+=2;goto B5d23d6;
case 0x5d23d8:c.instructions+=1;goto B5d23d8;
case 0x5d23da:goto L5d23da;
case 0x5d23dc:c.instructions+=1;goto B5d23dc;
case 0x5d23e1:goto L5d23e1;
case 0x5d23e3:c.instructions+=5;goto B5d23e3;
case 0x5d23e6:c.instructions+=4;goto B5d23e6;
case 0x5d23ea:c.instructions+=3;goto B5d23ea;
case 0x5d23ec:c.instructions+=2;goto B5d23ec;
case 0x5d23f4:c.instructions+=1;goto B5d23f4;
case 0x5d23f6:goto L5d23f6;
case 0x5d23f8:c.instructions+=1;goto B5d23f8;
case 0x5d23fd:goto L5d23fd;
case 0x5d2403:c.instructions+=2;goto B5d2403;
case 0x5d2405:c.instructions+=1;goto B5d2405;
case 0x5d2407:goto L5d2407;
case 0x5d2409:c.instructions+=1;goto B5d2409;
case 0x5d240e:goto L5d240e;
case 0x5d2410:c.instructions+=5;goto B5d2410;
case 0x5d2413:c.instructions+=4;goto B5d2413;
case 0x5d2417:c.instructions+=3;goto B5d2417;
case 0x5d2419:c.instructions+=2;goto B5d2419;
case 0x5d2421:c.instructions+=1;goto B5d2421;
case 0x5d2423:goto L5d2423;
case 0x5d2425:c.instructions+=1;goto B5d2425;
case 0x5d242a:goto L5d242a;
case 0x5d2430:c.instructions+=2;goto B5d2430;
case 0x5d2432:c.instructions+=1;goto B5d2432;
case 0x5d2434:goto L5d2434;
case 0x5d2436:goto L5d2436;
case 0x5d243a:goto L5d243a;
case 0x5d2441:c.instructions+=3;goto B5d2441;
case 0x5d2442:c.instructions+=2;goto B5d2442;
case 0x5d2445:c.instructions+=1;goto B5d2445;
case 0x5d244b:goto L5d244b;
case 0x5d244c:c.instructions+=1;goto B5d244c;
case 0x5d244d:goto L5d244d;
case 0x5d2452:c.instructions+=4;goto B5d2452;
case 0x5d2454:c.instructions+=3;goto B5d2454;
case 0x5d2459:c.instructions+=2;goto B5d2459;
case 0x5d245a:c.instructions+=1;goto B5d245a;
case 0x5d245d:goto L5d245d;
case 0x5d2463:c.instructions+=7;goto B5d2463;
case 0x5d2468:c.instructions+=6;goto B5d2468;
case 0x5d246a:c.instructions+=5;goto B5d246a;
case 0x5d246f:c.instructions+=4;goto B5d246f;
case 0x5d2471:c.instructions+=3;goto B5d2471;
case 0x5d2472:c.instructions+=2;goto B5d2472;
case 0x5d2473:c.instructions+=1;goto B5d2473;
case 0x5d2476:goto L5d2476;
case 0x5d2478:c.instructions+=1;goto B5d2478;
case 0x5d2480:goto L5d2480;
case 0x5d2487:c.instructions+=2;goto B5d2487;
case 0x5d2488:c.instructions+=1;goto B5d2488;
case 0x5d248d:goto L5d248d;
case 0x5d248e:c.instructions+=2;goto B5d248e;
case 0x5d2491:c.instructions+=1;goto B5d2491;
case 0x5d2493:goto L5d2493;
case 0x5d249a:c.instructions+=1;goto B5d249a;
case 0x5d249f:goto L5d249f;
case 0x5d24a3:c.instructions+=4;goto B5d24a3;
case 0x5d24a4:c.instructions+=3;goto B5d24a4;
case 0x5d24ab:c.instructions+=2;goto B5d24ab;
case 0x5d24ae:c.instructions+=1;goto B5d24ae;
case 0x5d24f0:goto L5d24f0;
case 0x5d24f3:c.instructions+=7;goto B5d24f3;
case 0x5d24f4:c.instructions+=6;goto B5d24f4;
case 0x5d24f5:c.instructions+=5;goto B5d24f5;
case 0x5d24f6:c.instructions+=4;goto B5d24f6;
case 0x5d24f7:c.instructions+=3;goto B5d24f7;
case 0x5d24f9:c.instructions+=2;goto B5d24f9;
case 0x5d2503:c.instructions+=1;goto B5d2503;
case 0x5d2508:goto L5d2508;
case 0x5d250d:c.instructions+=7;goto B5d250d;
case 0x5d250f:c.instructions+=6;goto B5d250f;
case 0x5d2511:c.instructions+=5;goto B5d2511;
case 0x5d2512:c.instructions+=4;goto B5d2512;
case 0x5d2517:c.instructions+=3;goto B5d2517;
case 0x5d2519:c.instructions+=2;goto B5d2519;
case 0x5d251a:c.instructions+=1;goto B5d251a;
case 0x5d251d:goto L5d251d;
case 0x5d2522:goto L5d2522;
case 0x5d2527:goto L5d2527;
case 0x5d252c:c.instructions+=2;goto B5d252c;
case 0x5d252e:c.instructions+=1;goto B5d252e;
case 0x5d2533:goto L5d2533;
case 0x5d2534:c.instructions+=4;goto B5d2534;
case 0x5d2539:c.instructions+=3;goto B5d2539;
case 0x5d253e:c.instructions+=2;goto B5d253e;
case 0x5d2540:c.instructions+=1;goto B5d2540;
case 0x5d2545:goto L5d2545;
case 0x5d2546:c.instructions+=9;goto B5d2546;
case 0x5d254b:c.instructions+=8;goto B5d254b;
case 0x5d254e:c.instructions+=7;goto B5d254e;
case 0x5d2553:c.instructions+=6;goto B5d2553;
case 0x5d2558:c.instructions+=5;goto B5d2558;
case 0x5d255a:c.instructions+=4;goto B5d255a;
case 0x5d255f:c.instructions+=3;goto B5d255f;
case 0x5d2561:c.instructions+=2;goto B5d2561;
case 0x5d2564:c.instructions+=1;goto B5d2564;
case 0x5d2569:goto L5d2569;
case 0x5d256f:c.instructions+=8;goto B5d256f;
case 0x5d2572:c.instructions+=7;goto B5d2572;
case 0x5d2577:c.instructions+=6;goto B5d2577;
case 0x5d257a:c.instructions+=5;goto B5d257a;
case 0x5d257f:c.instructions+=4;goto B5d257f;
case 0x5d2581:c.instructions+=3;goto B5d2581;
case 0x5d2582:c.instructions+=2;goto B5d2582;
case 0x5d2585:c.instructions+=1;goto B5d2585;
case 0x5d2587:goto L5d2587;
case 0x5d2588:c.instructions+=1;goto B5d2588;
case 0x5d258e:goto L5d258e;
case 0x5d258f:c.instructions+=7;goto B5d258f;
case 0x5d2591:c.instructions+=6;goto B5d2591;
case 0x5d2599:c.instructions+=5;goto B5d2599;
case 0x5d25a1:c.instructions+=4;goto B5d25a1;
case 0x5d25a9:c.instructions+=3;goto B5d25a9;
case 0x5d25ad:c.instructions+=2;goto B5d25ad;
case 0x5d25b1:c.instructions+=1;goto B5d25b1;
case 0x5d25b3:goto L5d25b3;
case 0x5d25b8:c.instructions+=4;goto B5d25b8;
case 0x5d25b9:c.instructions+=3;goto B5d25b9;
case 0x5d25bd:c.instructions+=2;goto B5d25bd;
case 0x5d25c1:c.instructions+=1;goto B5d25c1;
case 0x5d25c7:goto L5d25c7;
case 0x5d25cb:c.instructions+=7;goto B5d25cb;
case 0x5d25cc:c.instructions+=6;goto B5d25cc;
case 0x5d25d0:c.instructions+=5;goto B5d25d0;
case 0x5d25d4:c.instructions+=4;goto B5d25d4;
case 0x5d25d8:c.instructions+=3;goto B5d25d8;
case 0x5d25e0:c.instructions+=2;goto B5d25e0;
case 0x5d25e4:c.instructions+=1;goto B5d25e4;
case 0x5d25ea:goto L5d25ea;
case 0x5d25ee:c.instructions+=5;goto B5d25ee;
case 0x5d25ef:c.instructions+=4;goto B5d25ef;
case 0x5d25f3:c.instructions+=3;goto B5d25f3;
case 0x5d25f4:c.instructions+=2;goto B5d25f4;
case 0x5d25f9:c.instructions+=1;goto B5d25f9;
case 0x5d25fe:goto L5d25fe;
case 0x5d2602:c.instructions+=15;goto B5d2602;
case 0x5d2606:c.instructions+=14;goto B5d2606;
case 0x5d260b:c.instructions+=13;goto B5d260b;
case 0x5d260f:c.instructions+=12;goto B5d260f;
case 0x5d2613:c.instructions+=11;goto B5d2613;
case 0x5d2619:c.instructions+=10;goto B5d2619;
case 0x5d261f:c.instructions+=9;goto B5d261f;
case 0x5d2622:c.instructions+=8;goto B5d2622;
case 0x5d2623:c.instructions+=7;goto B5d2623;
case 0x5d2628:c.instructions+=6;goto B5d2628;
case 0x5d262c:c.instructions+=5;goto B5d262c;
case 0x5d262f:c.instructions+=4;goto B5d262f;
case 0x5d2630:c.instructions+=3;goto B5d2630;
case 0x5d2634:c.instructions+=2;goto B5d2634;
case 0x5d2638:c.instructions+=1;goto B5d2638;
case 0x5d263e:goto L5d263e;
case 0x5d2642:c.instructions+=4;goto B5d2642;
case 0x5d2643:c.instructions+=3;goto B5d2643;
case 0x5d2644:c.instructions+=2;goto B5d2644;
case 0x5d2645:c.instructions+=1;goto B5d2645;
case 0x5d264b:goto L5d264b;
case 0x5d264f:c.instructions+=15;goto B5d264f;
case 0x5d2653:c.instructions+=14;goto B5d2653;
case 0x5d2654:c.instructions+=13;goto B5d2654;
case 0x5d2658:c.instructions+=12;goto B5d2658;
case 0x5d265a:c.instructions+=11;goto B5d265a;
case 0x5d265b:c.instructions+=10;goto B5d265b;
case 0x5d265f:c.instructions+=9;goto B5d265f;
case 0x5d2661:c.instructions+=8;goto B5d2661;
case 0x5d2662:c.instructions+=7;goto B5d2662;
case 0x5d2663:c.instructions+=6;goto B5d2663;
case 0x5d2664:c.instructions+=5;goto B5d2664;
case 0x5d2669:c.instructions+=4;goto B5d2669;
case 0x5d266e:c.instructions+=3;goto B5d266e;
case 0x5d2673:c.instructions+=2;goto B5d2673;
case 0x5d2674:c.instructions+=1;goto B5d2674;
case 0x5d267a:goto L5d267a;
case 0x5d267b:c.instructions+=2;goto B5d267b;
case 0x5d2680:c.instructions+=1;goto B5d2680;
case 0x5d2686:goto L5d2686;
case 0x5d268c:c.instructions+=1;goto B5d268c;
case 0x5d268e:goto L5d268e;
case 0x5d268f:c.instructions+=1;goto B5d268f;
case 0x5d2695:goto L5d2695;
case 0x5d2696:c.instructions+=1;goto B5d2696;
case 0x5d269c:goto L5d269c;
case 0x5d26a1:c.instructions+=2;goto B5d26a1;
case 0x5d26a2:c.instructions+=1;goto B5d26a2;
case 0x5d26a8:goto L5d26a8;
case 0x5d26ae:c.instructions+=2;goto B5d26ae;
case 0x5d26af:c.instructions+=1;goto B5d26af;
case 0x5d26b5:goto L5d26b5;
case 0x5d26bb:c.instructions+=3;goto B5d26bb;
case 0x5d26c0:c.instructions+=2;goto B5d26c0;
case 0x5d26c1:c.instructions+=1;goto B5d26c1;
case 0x5d26c7:goto L5d26c7;
case 0x5d26cc:c.instructions+=3;goto B5d26cc;
case 0x5d26d1:c.instructions+=2;goto B5d26d1;
case 0x5d26d2:c.instructions+=1;goto B5d26d2;
case 0x5d26d8:goto L5d26d8;
case 0x5d26dd:c.instructions+=7;goto B5d26dd;
case 0x5d26df:c.instructions+=6;goto B5d26df;
case 0x5d26e3:c.instructions+=5;goto B5d26e3;
case 0x5d26e4:c.instructions+=4;goto B5d26e4;
case 0x5d26ea:c.instructions+=3;goto B5d26ea;
case 0x5d26eb:c.instructions+=2;goto B5d26eb;
case 0x5d26ec:c.instructions+=1;goto B5d26ec;
case 0x5d26ef:goto L5d26ef;
case 0x5d26f5:c.instructions+=11;goto B5d26f5;
case 0x5d26fa:c.instructions+=10;goto B5d26fa;
case 0x5d26ff:c.instructions+=9;goto B5d26ff;
case 0x5d2701:c.instructions+=8;goto B5d2701;
case 0x5d2702:c.instructions+=7;goto B5d2702;
case 0x5d2704:c.instructions+=6;goto B5d2704;
case 0x5d2706:c.instructions+=5;goto B5d2706;
case 0x5d2707:c.instructions+=4;goto B5d2707;
case 0x5d2711:c.instructions+=3;goto B5d2711;
case 0x5d2713:c.instructions+=2;goto B5d2713;
case 0x5d2714:c.instructions+=1;goto B5d2714;
case 0x5d2717:goto L5d2717;
case 0x5d271d:c.instructions+=5;goto B5d271d;
case 0x5d2722:c.instructions+=4;goto B5d2722;
case 0x5d2723:c.instructions+=3;goto B5d2723;
case 0x5d2728:c.instructions+=2;goto B5d2728;
case 0x5d272e:c.instructions+=1;goto B5d272e;
case 0x5d2730:goto L5d2730;
case 0x5d2735:goto L5d2735;
case 0x5d2737:c.instructions+=1;goto B5d2737;
case 0x5d2739:goto L5d2739;
case 0x5d273f:goto L5d273f;
case 0x5d2740:c.instructions+=2;goto B5d2740;
case 0x5d2741:c.instructions+=1;goto B5d2741;
case 0x5d2746:goto L5d2746;
case 0x5d2749:c.instructions+=1;goto B5d2749;
case 0x5d274e:goto L5d274e;
case 0x5d2750:c.instructions+=1;goto B5d2750;
case 0x5d2752:goto L5d2752;
case 0x5d2758:c.instructions+=1;goto B5d2758;
case 0x5d275a:goto L5d275a;
case 0x5d275b:c.instructions+=5;goto B5d275b;
case 0x5d275c:c.instructions+=4;goto B5d275c;
case 0x5d2762:c.instructions+=3;goto B5d2762;
case 0x5d2768:c.instructions+=2;goto B5d2768;
case 0x5d276e:c.instructions+=1;goto B5d276e;
case 0x5d2773:goto L5d2773;
case 0x5d2776:c.instructions+=1;goto B5d2776;
case 0x5d277b:goto L5d277b;
case 0x5d2780:c.instructions+=3;goto B5d2780;
case 0x5d2782:c.instructions+=2;goto B5d2782;
case 0x5d2783:c.instructions+=1;goto B5d2783;
case 0x5d2786:goto L5d2786;
case 0x5d278c:c.instructions+=3;goto B5d278c;
case 0x5d278e:c.instructions+=2;goto B5d278e;
case 0x5d278f:c.instructions+=1;goto B5d278f;
case 0x5d2795:goto L5d2795;
case 0x5d279a:c.instructions+=4;goto B5d279a;
case 0x5d279f:c.instructions+=3;goto B5d279f;
case 0x5d27a1:c.instructions+=2;goto B5d27a1;
case 0x5d27a2:c.instructions+=1;goto B5d27a2;
case 0x5d27a8:goto L5d27a8;
case 0x5d27ad:goto L5d27ad;
case 0x5d27b2:goto L5d27b2;
case 0x5d27b7:goto L5d27b7;
case 0x5d27bc:goto L5d27bc;
case 0x5d27c1:goto L5d27c1;
case 0x5d27c6:goto L5d27c6;
case 0x5d27cb:c.instructions+=3;goto B5d27cb;
case 0x5d27cd:c.instructions+=2;goto B5d27cd;
case 0x5d27ce:c.instructions+=1;goto B5d27ce;
case 0x5d27d1:goto L5d27d1;
case 0x5d27d5:c.instructions+=7;goto B5d27d5;
case 0x5d27d6:c.instructions+=6;goto B5d27d6;
case 0x5d27da:c.instructions+=5;goto B5d27da;
case 0x5d27db:c.instructions+=4;goto B5d27db;
case 0x5d27e0:c.instructions+=3;goto B5d27e0;
case 0x5d27e8:c.instructions+=2;goto B5d27e8;
case 0x5d27ec:c.instructions+=1;goto B5d27ec;
case 0x5d27f1:goto L5d27f1;
case 0x5d27f6:c.instructions+=2;goto B5d27f6;
case 0x5d27f8:c.instructions+=1;goto B5d27f8;
case 0x5d27fa:goto L5d27fa;
case 0x5d27fc:c.instructions+=2;goto B5d27fc;
case 0x5d27fd:c.instructions+=1;goto B5d27fd;
case 0x5d2800:goto L5d2800;
case 0x5d2806:goto L5d2806;
case 0x5d2807:c.instructions+=5;goto B5d2807;
case 0x5d280c:c.instructions+=4;goto B5d280c;
case 0x5d2811:c.instructions+=3;goto B5d2811;
case 0x5d2816:c.instructions+=2;goto B5d2816;
case 0x5d2817:c.instructions+=1;goto B5d2817;
case 0x5d2819:goto L5d2819;
case 0x5d281a:c.instructions+=1;goto B5d281a;
case 0x5d281f:goto L5d281f;
case 0x5d2821:c.instructions+=1;goto B5d2821;
case 0x5d2823:goto L5d2823;
case 0x5d2829:goto L5d2829;
case 0x5d282e:c.instructions+=1;goto B5d282e;
case 0x5d2833:goto L5d2833;
case 0x5d2838:goto L5d2838;
case 0x5d2839:c.instructions+=6;goto B5d2839;
case 0x5d283a:c.instructions+=5;goto B5d283a;
case 0x5d283b:c.instructions+=4;goto B5d283b;
case 0x5d283d:c.instructions+=3;goto B5d283d;
case 0x5d283e:c.instructions+=2;goto B5d283e;
case 0x5d2841:c.instructions+=1;goto B5d2841;
case 0x5d2850:goto L5d2850;
case 0x5d2855:c.instructions+=6;goto B5d2855;
case 0x5d2858:c.instructions+=5;goto B5d2858;
case 0x5d2859:c.instructions+=4;goto B5d2859;
case 0x5d285b:c.instructions+=3;goto B5d285b;
case 0x5d285d:c.instructions+=2;goto B5d285d;
case 0x5d2863:c.instructions+=1;goto B5d2863;
case 0x5d2865:goto L5d2865;
case 0x5d2869:c.instructions+=5;goto B5d2869;
case 0x5d286a:c.instructions+=4;goto B5d286a;
case 0x5d286e:c.instructions+=3;goto B5d286e;
case 0x5d286f:c.instructions+=2;goto B5d286f;
case 0x5d2874:c.instructions+=1;goto B5d2874;
case 0x5d2879:goto L5d2879;
case 0x5d287d:c.instructions+=4;goto B5d287d;
case 0x5d2881:c.instructions+=3;goto B5d2881;
case 0x5d2882:c.instructions+=2;goto B5d2882;
case 0x5d2883:c.instructions+=1;goto B5d2883;
case 0x5d2888:goto L5d2888;
case 0x5d288b:c.instructions+=1;goto B5d288b;
case 0x5d2890:goto L5d2890;
case 0x5d2897:goto L5d2897;
case 0x5d289d:c.instructions+=4;goto B5d289d;
case 0x5d289e:c.instructions+=3;goto B5d289e;
case 0x5d28a4:c.instructions+=2;goto B5d28a4;
case 0x5d28a9:c.instructions+=1;goto B5d28a9;
case 0x5d28ab:goto L5d28ab;
case 0x5d28b1:c.instructions+=2;goto B5d28b1;
case 0x5d28b7:c.instructions+=1;goto B5d28b7;
case 0x5d28b9:goto L5d28b9;
case 0x5d28bf:c.instructions+=1;goto B5d28bf;
case 0x5d28c1:goto L5d28c1;
case 0x5d28cb:goto L5d28cb;
case 0x5d28d0:goto L5d28d0;
case 0x5d28d5:c.instructions+=2;goto B5d28d5;
case 0x5d28d7:c.instructions+=1;goto B5d28d7;
case 0x5d28d9:goto L5d28d9;
case 0x5d28da:c.instructions+=1;goto B5d28da;
case 0x5d28dc:goto L5d28dc;
case 0x5d28e2:c.instructions+=2;goto B5d28e2;
case 0x5d28e8:c.instructions+=1;goto B5d28e8;
case 0x5d28ea:goto L5d28ea;
case 0x5d28ef:c.instructions+=2;goto B5d28ef;
case 0x5d28f4:c.instructions+=1;goto B5d28f4;
case 0x5d28f9:goto L5d28f9;
case 0x5d28fe:c.instructions+=2;goto B5d28fe;
case 0x5d2901:c.instructions+=1;goto B5d2901;
case 0x5d2903:goto L5d2903;
case 0x5d290a:goto L5d290a;
case 0x5d2910:c.instructions+=1;goto B5d2910;
case 0x5d2912:goto L5d2912;
case 0x5d2918:goto L5d2918;
case 0x5d291f:c.instructions+=1;goto B5d291f;
case 0x5d2921:goto L5d2921;
case 0x5d2927:goto L5d2927;
case 0x5d292d:c.instructions+=1;goto B5d292d;
case 0x5d292f:goto L5d292f;
case 0x5d2934:goto L5d2934;
case 0x5d2939:goto L5d2939;
case 0x5d293a:c.instructions+=1;goto B5d293a;
case 0x5d2940:goto L5d2940;
case 0x5d2941:c.instructions+=1;goto B5d2941;
case 0x5d2946:goto L5d2946;
case 0x5d2949:c.instructions+=4;goto B5d2949;
case 0x5d294c:c.instructions+=3;goto B5d294c;
case 0x5d294e:c.instructions+=2;goto B5d294e;
case 0x5d2950:c.instructions+=1;goto B5d2950;
case 0x5d2952:goto L5d2952;
case 0x5d2954:c.instructions+=2;goto B5d2954;
case 0x5d2955:c.instructions+=1;goto B5d2955;
case 0x5d295a:goto L5d295a;
case 0x5d295d:goto L5d295d;
case 0x5d2960:c.instructions+=2;goto B5d2960;
case 0x5d2962:c.instructions+=1;goto B5d2962;
case 0x5d2964:goto L5d2964;
case 0x5d2967:c.instructions+=1;goto B5d2967;
case 0x5d2969:goto L5d2969;
case 0x5d296b:c.instructions+=5;goto B5d296b;
case 0x5d296d:c.instructions+=4;goto B5d296d;
case 0x5d296f:c.instructions+=3;goto B5d296f;
case 0x5d2970:c.instructions+=2;goto B5d2970;
case 0x5d2972:c.instructions+=1;goto B5d2972;
case 0x5d2977:goto L5d2977;
case 0x5d2978:c.instructions+=2;goto B5d2978;
case 0x5d297b:c.instructions+=1;goto B5d297b;
case 0x5d297d:goto L5d297d;
case 0x5d2982:goto L5d2982;
case 0x5d2987:c.instructions+=4;goto B5d2987;
case 0x5d2989:c.instructions+=3;goto B5d2989;
case 0x5d298b:c.instructions+=2;goto B5d298b;
case 0x5d298c:c.instructions+=1;goto B5d298c;
case 0x5d298e:goto L5d298e;
case 0x5d2990:c.instructions+=1;goto B5d2990;
case 0x5d2995:goto L5d2995;
case 0x5d2998:c.instructions+=10;goto B5d2998;
case 0x5d299e:c.instructions+=9;goto B5d299e;
case 0x5d29a4:c.instructions+=8;goto B5d29a4;
case 0x5d29a8:c.instructions+=7;goto B5d29a8;
case 0x5d29ac:c.instructions+=6;goto B5d29ac;
case 0x5d29af:c.instructions+=5;goto B5d29af;
case 0x5d29b5:c.instructions+=4;goto B5d29b5;
case 0x5d29b9:c.instructions+=3;goto B5d29b9;
case 0x5d29bb:c.instructions+=2;goto B5d29bb;
case 0x5d29be:c.instructions+=1;goto B5d29be;
case 0x5d29c0:goto L5d29c0;
case 0x5d29c4:c.instructions+=4;goto B5d29c4;
case 0x5d29ca:c.instructions+=3;goto B5d29ca;
case 0x5d29cc:c.instructions+=2;goto B5d29cc;
case 0x5d29cf:c.instructions+=1;goto B5d29cf;
case 0x5d29d1:goto L5d29d1;
case 0x5d29d8:c.instructions+=1;goto B5d29d8;
case 0x5d29dd:goto L5d29dd;
case 0x5d29e1:c.instructions+=4;goto B5d29e1;
case 0x5d29e7:c.instructions+=3;goto B5d29e7;
case 0x5d29e9:c.instructions+=2;goto B5d29e9;
case 0x5d29ec:c.instructions+=1;goto B5d29ec;
case 0x5d29ee:goto L5d29ee;
case 0x5d29f6:goto L5d29f6;
case 0x5d29fa:c.instructions+=4;goto B5d29fa;
case 0x5d2a00:c.instructions+=3;goto B5d2a00;
case 0x5d2a02:c.instructions+=2;goto B5d2a02;
case 0x5d2a05:c.instructions+=1;goto B5d2a05;
case 0x5d2a07:goto L5d2a07;
case 0x5d2a0f:goto L5d2a0f;
case 0x5d2a15:c.instructions+=9;goto B5d2a15;
case 0x5d2a1c:c.instructions+=8;goto B5d2a1c;
case 0x5d2a1f:c.instructions+=7;goto B5d2a1f;
case 0x5d2a22:c.instructions+=6;goto B5d2a22;
case 0x5d2a28:c.instructions+=5;goto B5d2a28;
case 0x5d2a2a:c.instructions+=4;goto B5d2a2a;
case 0x5d2a2f:c.instructions+=3;goto B5d2a2f;
case 0x5d2a30:c.instructions+=2;goto B5d2a30;
case 0x5d2a31:c.instructions+=1;goto B5d2a31;
case 0x5d2a34:goto L5d2a34;
case 0x5d2a38:c.instructions+=19;goto B5d2a38;
case 0x5d2a3e:c.instructions+=18;goto B5d2a3e;
case 0x5d2a44:c.instructions+=17;goto B5d2a44;
case 0x5d2a47:c.instructions+=16;goto B5d2a47;
case 0x5d2a4a:c.instructions+=15;goto B5d2a4a;
case 0x5d2a4e:c.instructions+=14;goto B5d2a4e;
case 0x5d2a54:c.instructions+=13;goto B5d2a54;
case 0x5d2a58:c.instructions+=12;goto B5d2a58;
case 0x5d2a5a:c.instructions+=11;goto B5d2a5a;
case 0x5d2a60:c.instructions+=10;goto B5d2a60;
case 0x5d2a64:c.instructions+=9;goto B5d2a64;
case 0x5d2a68:c.instructions+=8;goto B5d2a68;
case 0x5d2a6e:c.instructions+=7;goto B5d2a6e;
case 0x5d2a74:c.instructions+=6;goto B5d2a74;
case 0x5d2a78:c.instructions+=5;goto B5d2a78;
case 0x5d2a7c:c.instructions+=4;goto B5d2a7c;
case 0x5d2a7d:c.instructions+=3;goto B5d2a7d;
case 0x5d2a7e:c.instructions+=2;goto B5d2a7e;
case 0x5d2a7f:c.instructions+=1;goto B5d2a7f;
case 0x5d2a82:goto L5d2a82;
case 0x5d2a86:c.instructions+=13;goto B5d2a86;
case 0x5d2a8a:c.instructions+=12;goto B5d2a8a;
case 0x5d2a90:c.instructions+=11;goto B5d2a90;
case 0x5d2a93:c.instructions+=10;goto B5d2a93;
case 0x5d2a95:c.instructions+=9;goto B5d2a95;
case 0x5d2a96:c.instructions+=8;goto B5d2a96;
case 0x5d2a99:c.instructions+=7;goto B5d2a99;
case 0x5d2a9f:c.instructions+=6;goto B5d2a9f;
case 0x5d2aa3:c.instructions+=5;goto B5d2aa3;
case 0x5d2aa5:c.instructions+=4;goto B5d2aa5;
case 0x5d2aa8:c.instructions+=3;goto B5d2aa8;
case 0x5d2aa9:c.instructions+=2;goto B5d2aa9;
case 0x5d2aaa:c.instructions+=1;goto B5d2aaa;
case 0x5d2aad:goto L5d2aad;
case 0x5d2ab1:c.instructions+=12;goto B5d2ab1;
case 0x5d2ab5:c.instructions+=11;goto B5d2ab5;
case 0x5d2abb:c.instructions+=10;goto B5d2abb;
case 0x5d2abe:c.instructions+=9;goto B5d2abe;
case 0x5d2ac0:c.instructions+=8;goto B5d2ac0;
case 0x5d2ac1:c.instructions+=7;goto B5d2ac1;
case 0x5d2ac4:c.instructions+=6;goto B5d2ac4;
case 0x5d2aca:c.instructions+=5;goto B5d2aca;
case 0x5d2ace:c.instructions+=4;goto B5d2ace;
case 0x5d2ad1:c.instructions+=3;goto B5d2ad1;
case 0x5d2ad2:c.instructions+=2;goto B5d2ad2;
case 0x5d2ad3:c.instructions+=1;goto B5d2ad3;
case 0x5d2ad6:goto L5d2ad6;
case 0x5d2adb:c.instructions+=3;goto B5d2adb;
case 0x5d2add:c.instructions+=2;goto B5d2add;
case 0x5d2ae4:c.instructions+=1;goto B5d2ae4;
case 0x5d2ae6:goto L5d2ae6;
case 0x5d2aed:goto L5d2aed;
case 0x5d2af2:c.instructions+=3;goto B5d2af2;
case 0x5d2af4:c.instructions+=2;goto B5d2af4;
case 0x5d2af5:c.instructions+=1;goto B5d2af5;
case 0x5d2af8:goto L5d2af8;
case 0x5d2afd:c.instructions+=1;goto B5d2afd;
case 0x5d2aff:goto L5d2aff;
case 0x5d2b04:goto L5d2b04;
case 0x5d2b06:c.instructions+=1;goto B5d2b06;
case 0x5d2b08:goto L5d2b08;
case 0x5d2b0d:c.instructions+=3;goto B5d2b0d;
case 0x5d2b0f:c.instructions+=2;goto B5d2b0f;
case 0x5d2b10:c.instructions+=1;goto B5d2b10;
case 0x5d2b16:goto L5d2b16;
case 0x5d2b18:c.instructions+=1;goto B5d2b18;
case 0x5d2b1d:goto L5d2b1d;
case 0x5d2b20:c.instructions+=1;goto B5d2b20;
case 0x5d2b25:goto L5d2b25;
case 0x5d2b27:c.instructions+=1;goto B5d2b27;
case 0x5d2b29:goto L5d2b29;
case 0x5d2b2e:c.instructions+=1;goto B5d2b2e;
case 0x5d2b30:goto L5d2b30;
case 0x5d2b31:c.instructions+=1;goto B5d2b31;
case 0x5d2b36:goto L5d2b36;
case 0x5d2b39:c.instructions+=3;goto B5d2b39;
case 0x5d2b3c:c.instructions+=2;goto B5d2b3c;
case 0x5d2b3e:c.instructions+=1;goto B5d2b3e;
case 0x5d2b40:goto L5d2b40;
case 0x5d2b42:c.instructions+=1;goto B5d2b42;
case 0x5d2b47:goto L5d2b47;
case 0x5d2b48:c.instructions+=2;goto B5d2b48;
case 0x5d2b4b:c.instructions+=1;goto B5d2b4b;
case 0x5d2b4d:goto L5d2b4d;
case 0x5d2b53:c.instructions+=1;goto B5d2b53;
case 0x5d2b55:goto L5d2b55;
case 0x5d2b5a:goto L5d2b5a;
case 0x5d2b5f:goto L5d2b5f;
case 0x5d2b60:c.instructions+=1;goto B5d2b60;
case 0x5d2b65:goto L5d2b65;
case 0x5d2b6a:c.instructions+=4;goto B5d2b6a;
case 0x5d2b6c:c.instructions+=3;goto B5d2b6c;
case 0x5d2b6f:c.instructions+=2;goto B5d2b6f;
case 0x5d2b70:c.instructions+=1;goto B5d2b70;
case 0x5d2b76:goto L5d2b76;
case 0x5d2b7b:goto L5d2b7b;
case 0x5d2b81:c.instructions+=2;goto B5d2b81;
case 0x5d2b82:c.instructions+=1;goto B5d2b82;
case 0x5d2b84:goto L5d2b84;
case 0x5d2b85:c.instructions+=1;goto B5d2b85;
case 0x5d2b8a:goto L5d2b8a;
case 0x5d2b8d:c.instructions+=1;goto B5d2b8d;
case 0x5d2b93:goto L5d2b93;
case 0x5d2b98:goto L5d2b98;
case 0x5d2b9d:c.instructions+=1;goto B5d2b9d;
case 0x5d2ba2:goto L5d2ba2;
case 0x5d2ba4:c.instructions+=1;goto B5d2ba4;
case 0x5d2ba6:goto L5d2ba6;
case 0x5d2bab:c.instructions+=1;goto B5d2bab;
case 0x5d2bb0:goto L5d2bb0;
case 0x5d2bb5:c.instructions+=1;goto B5d2bb5;
case 0x5d2bba:goto L5d2bba;
case 0x5d2bbf:c.instructions+=7;goto B5d2bbf;
case 0x5d2bc1:c.instructions+=6;goto B5d2bc1;
case 0x5d2bc2:c.instructions+=5;goto B5d2bc2;
case 0x5d2bc3:c.instructions+=4;goto B5d2bc3;
case 0x5d2bc4:c.instructions+=3;goto B5d2bc4;
case 0x5d2bc5:c.instructions+=2;goto B5d2bc5;
case 0x5d2bc6:c.instructions+=1;goto B5d2bc6;
case 0x5d2bc9:goto L5d2bc9;
case 0x5d2bce:c.instructions+=1;goto B5d2bce;
case 0x5d2bd0:goto L5d2bd0;
case 0x5d2bd5:c.instructions+=3;goto B5d2bd5;
case 0x5d2bd7:c.instructions+=2;goto B5d2bd7;
case 0x5d2bd8:c.instructions+=1;goto B5d2bd8;
case 0x5d2bdb:goto L5d2bdb;
case 0x5d2be0:c.instructions+=1;goto B5d2be0;
case 0x5d2be2:goto L5d2be2;
case 0x5d2be7:goto L5d2be7;
case 0x5d2bed:c.instructions+=1;goto B5d2bed;
case 0x5d2bef:goto L5d2bef;
case 0x5d2bf4:goto L5d2bf4;
case 0x5d2bfa:goto L5d2bfa;
case 0x5d2c00:c.instructions+=1;goto B5d2c00;
case 0x5d2c02:goto L5d2c02;
case 0x5d2c07:goto L5d2c07;
case 0x5d2c0d:goto L5d2c0d;
case 0x5d2c12:c.instructions+=2;goto B5d2c12;
case 0x5d2c17:c.instructions+=1;goto B5d2c17;
case 0x5d2c1c:goto L5d2c1c;
case 0x5d2c21:goto L5d2c21;
case 0x5d2c26:goto L5d2c26;
case 0x5d2c2b:c.instructions+=9;goto B5d2c2b;
case 0x5d2c2d:c.instructions+=8;goto B5d2c2d;
case 0x5d2c2e:c.instructions+=7;goto B5d2c2e;
case 0x5d2c33:c.instructions+=6;goto B5d2c33;
case 0x5d2c34:c.instructions+=5;goto B5d2c34;
case 0x5d2c36:c.instructions+=4;goto B5d2c36;
case 0x5d2c37:c.instructions+=3;goto B5d2c37;
case 0x5d2c38:c.instructions+=2;goto B5d2c38;
case 0x5d2c39:c.instructions+=1;goto B5d2c39;
case 0x5d2c3f:goto L5d2c3f;
case 0x5d2c44:goto L5d2c44;
case 0x5d2c49:goto L5d2c49;
case 0x5d2c4e:c.instructions+=5;goto B5d2c4e;
case 0x5d2c4f:c.instructions+=4;goto B5d2c4f;
case 0x5d2c55:c.instructions+=3;goto B5d2c55;
case 0x5d2c5b:c.instructions+=2;goto B5d2c5b;
case 0x5d2c60:c.instructions+=1;goto B5d2c60;
case 0x5d2c65:goto L5d2c65;
case 0x5d2c6a:goto L5d2c6a;
case 0x5d2c6f:goto L5d2c6f;
case 0x5d2c75:c.instructions+=3;goto B5d2c75;
case 0x5d2c7c:c.instructions+=2;goto B5d2c7c;
case 0x5d2c83:c.instructions+=1;goto B5d2c83;
case 0x5d2c88:goto L5d2c88;
case 0x5d2c8d:c.instructions+=2;goto B5d2c8d;
case 0x5d2c97:c.instructions+=1;goto B5d2c97;
case 0x5d2c9c:goto L5d2c9c;
case 0x5d2c9d:c.instructions+=2;goto B5d2c9d;
case 0x5d2ca0:c.instructions+=1;goto B5d2ca0;
case 0x5d2cc0:goto L5d2cc0;
case 0x5d2cc3:c.instructions+=89;goto B5d2cc3;
case 0x5d2cc7:c.instructions+=88;goto B5d2cc7;
case 0x5d2ccb:c.instructions+=87;goto B5d2ccb;
case 0x5d2cce:c.instructions+=86;goto B5d2cce;
case 0x5d2cd1:c.instructions+=85;goto B5d2cd1;
case 0x5d2cd5:c.instructions+=84;goto B5d2cd5;
case 0x5d2cd9:c.instructions+=83;goto B5d2cd9;
case 0x5d2cdb:c.instructions+=82;goto B5d2cdb;
case 0x5d2cdf:c.instructions+=81;goto B5d2cdf;
case 0x5d2ce2:c.instructions+=80;goto B5d2ce2;
case 0x5d2ce6:c.instructions+=79;goto B5d2ce6;
case 0x5d2cea:c.instructions+=78;goto B5d2cea;
case 0x5d2ced:c.instructions+=77;goto B5d2ced;
case 0x5d2cf1:c.instructions+=76;goto B5d2cf1;
case 0x5d2cf2:c.instructions+=75;goto B5d2cf2;
case 0x5d2cf6:c.instructions+=74;goto B5d2cf6;
case 0x5d2cfc:c.instructions+=73;goto B5d2cfc;
case 0x5d2cfe:c.instructions+=72;goto B5d2cfe;
case 0x5d2d02:c.instructions+=71;goto B5d2d02;
case 0x5d2d08:c.instructions+=70;goto B5d2d08;
case 0x5d2d0b:c.instructions+=69;goto B5d2d0b;
case 0x5d2d0f:c.instructions+=68;goto B5d2d0f;
case 0x5d2d15:c.instructions+=67;goto B5d2d15;
case 0x5d2d18:c.instructions+=66;goto B5d2d18;
case 0x5d2d1c:c.instructions+=65;goto B5d2d1c;
case 0x5d2d20:c.instructions+=64;goto B5d2d20;
case 0x5d2d23:c.instructions+=63;goto B5d2d23;
case 0x5d2d27:c.instructions+=62;goto B5d2d27;
case 0x5d2d2b:c.instructions+=61;goto B5d2d2b;
case 0x5d2d2e:c.instructions+=60;goto B5d2d2e;
case 0x5d2d30:c.instructions+=59;goto B5d2d30;
case 0x5d2d33:c.instructions+=58;goto B5d2d33;
case 0x5d2d37:c.instructions+=57;goto B5d2d37;
case 0x5d2d3b:c.instructions+=56;goto B5d2d3b;
case 0x5d2d3e:c.instructions+=55;goto B5d2d3e;
case 0x5d2d42:c.instructions+=54;goto B5d2d42;
case 0x5d2d46:c.instructions+=53;goto B5d2d46;
case 0x5d2d4c:c.instructions+=52;goto B5d2d4c;
case 0x5d2d4f:c.instructions+=51;goto B5d2d4f;
case 0x5d2d53:c.instructions+=50;goto B5d2d53;
case 0x5d2d59:c.instructions+=49;goto B5d2d59;
case 0x5d2d5c:c.instructions+=48;goto B5d2d5c;
case 0x5d2d60:c.instructions+=47;goto B5d2d60;
case 0x5d2d66:c.instructions+=46;goto B5d2d66;
case 0x5d2d69:c.instructions+=45;goto B5d2d69;
case 0x5d2d6d:c.instructions+=44;goto B5d2d6d;
case 0x5d2d71:c.instructions+=43;goto B5d2d71;
case 0x5d2d74:c.instructions+=42;goto B5d2d74;
case 0x5d2d78:c.instructions+=41;goto B5d2d78;
case 0x5d2d7c:c.instructions+=40;goto B5d2d7c;
case 0x5d2d7f:c.instructions+=39;goto B5d2d7f;
case 0x5d2d81:c.instructions+=38;goto B5d2d81;
case 0x5d2d84:c.instructions+=37;goto B5d2d84;
case 0x5d2d88:c.instructions+=36;goto B5d2d88;
case 0x5d2d8c:c.instructions+=35;goto B5d2d8c;
case 0x5d2d8f:c.instructions+=34;goto B5d2d8f;
case 0x5d2d93:c.instructions+=33;goto B5d2d93;
case 0x5d2d97:c.instructions+=32;goto B5d2d97;
case 0x5d2d9d:c.instructions+=31;goto B5d2d9d;
case 0x5d2da0:c.instructions+=30;goto B5d2da0;
case 0x5d2da4:c.instructions+=29;goto B5d2da4;
case 0x5d2daa:c.instructions+=28;goto B5d2daa;
case 0x5d2dad:c.instructions+=27;goto B5d2dad;
case 0x5d2db1:c.instructions+=26;goto B5d2db1;
case 0x5d2db7:c.instructions+=25;goto B5d2db7;
case 0x5d2dba:c.instructions+=24;goto B5d2dba;
case 0x5d2dbe:c.instructions+=23;goto B5d2dbe;
case 0x5d2dc2:c.instructions+=22;goto B5d2dc2;
case 0x5d2dc5:c.instructions+=21;goto B5d2dc5;
case 0x5d2dc9:c.instructions+=20;goto B5d2dc9;
case 0x5d2dcd:c.instructions+=19;goto B5d2dcd;
case 0x5d2dd1:c.instructions+=18;goto B5d2dd1;
case 0x5d2dd4:c.instructions+=17;goto B5d2dd4;
case 0x5d2dd6:c.instructions+=16;goto B5d2dd6;
case 0x5d2dd9:c.instructions+=15;goto B5d2dd9;
case 0x5d2ddc:c.instructions+=14;goto B5d2ddc;
case 0x5d2de0:c.instructions+=13;goto B5d2de0;
case 0x5d2de4:c.instructions+=12;goto B5d2de4;
case 0x5d2de5:c.instructions+=11;goto B5d2de5;
case 0x5d2de9:c.instructions+=10;goto B5d2de9;
case 0x5d2def:c.instructions+=9;goto B5d2def;
case 0x5d2df2:c.instructions+=8;goto B5d2df2;
case 0x5d2df6:c.instructions+=7;goto B5d2df6;
case 0x5d2dfc:c.instructions+=6;goto B5d2dfc;
case 0x5d2dff:c.instructions+=5;goto B5d2dff;
case 0x5d2e03:c.instructions+=4;goto B5d2e03;
case 0x5d2e09:c.instructions+=3;goto B5d2e09;
case 0x5d2e0c:c.instructions+=2;goto B5d2e0c;
case 0x5d2e0f:c.instructions+=1;goto B5d2e0f;
case 0x5d2e20:goto L5d2e20;
case 0x5d2e24:c.instructions+=4;goto B5d2e24;
case 0x5d2e2a:c.instructions+=3;goto B5d2e2a;
case 0x5d2e2b:c.instructions+=2;goto B5d2e2b;
case 0x5d2e2c:c.instructions+=1;goto B5d2e2c;
case 0x5d2e31:goto L5d2e31;
case 0x5d2e34:c.instructions+=1;goto B5d2e34;
case 0x5d2e40:goto L5d2e40;
case 0x5d2e44:c.instructions+=4;goto B5d2e44;
case 0x5d2e4a:c.instructions+=3;goto B5d2e4a;
case 0x5d2e4b:c.instructions+=2;goto B5d2e4b;
case 0x5d2e4c:c.instructions+=1;goto B5d2e4c;
case 0x5d2e51:goto L5d2e51;
case 0x5d2e54:c.instructions+=1;goto B5d2e54;
case 0x5d2e60:goto L5d2e60;
case 0x5d2e61:c.instructions+=8;goto B5d2e61;
case 0x5d2e62:c.instructions+=7;goto B5d2e62;
case 0x5d2e63:c.instructions+=6;goto B5d2e63;
case 0x5d2e65:c.instructions+=5;goto B5d2e65;
case 0x5d2e6b:c.instructions+=4;goto B5d2e6b;
case 0x5d2e6c:c.instructions+=3;goto B5d2e6c;
case 0x5d2e6e:c.instructions+=2;goto B5d2e6e;
case 0x5d2e70:c.instructions+=1;goto B5d2e70;
case 0x5d2e72:goto L5d2e72;
case 0x5d2e76:c.instructions+=2;goto B5d2e76;
case 0x5d2e78:c.instructions+=1;goto B5d2e78;
case 0x5d2e80:goto L5d2e80;
case 0x5d2e86:c.instructions+=4;goto B5d2e86;
case 0x5d2e8a:c.instructions+=3;goto B5d2e8a;
case 0x5d2e8c:c.instructions+=2;goto B5d2e8c;
case 0x5d2e8e:c.instructions+=1;goto B5d2e8e;
case 0x5d2e90:goto L5d2e90;
case 0x5d2e94:c.instructions+=6;goto B5d2e94;
case 0x5d2e95:c.instructions+=5;goto B5d2e95;
case 0x5d2e96:c.instructions+=4;goto B5d2e96;
case 0x5d2e99:c.instructions+=3;goto B5d2e99;
case 0x5d2e9a:c.instructions+=2;goto B5d2e9a;
case 0x5d2e9b:c.instructions+=1;goto B5d2e9b;
case 0x5d2ea0:goto L5d2ea0;
case 0x5d2ea3:c.instructions+=2;goto B5d2ea3;
case 0x5d2ea5:c.instructions+=1;goto B5d2ea5;
case 0x5d2ea7:goto L5d2ea7;
case 0x5d2ead:c.instructions+=4;goto B5d2ead;
case 0x5d2eae:c.instructions+=3;goto B5d2eae;
case 0x5d2eb1:c.instructions+=2;goto B5d2eb1;
case 0x5d2eb3:c.instructions+=1;goto B5d2eb3;
case 0x5d2eb5:goto L5d2eb5;
case 0x5d2eb6:c.instructions+=5;goto B5d2eb6;
case 0x5d2eb7:c.instructions+=4;goto B5d2eb7;
case 0x5d2eb8:c.instructions+=3;goto B5d2eb8;
case 0x5d2eba:c.instructions+=2;goto B5d2eba;
case 0x5d2ebb:c.instructions+=1;goto B5d2ebb;
case 0x5d2ebe:goto L5d2ebe;
case 0x5d2ec4:c.instructions+=7;goto B5d2ec4;
case 0x5d2ec7:c.instructions+=6;goto B5d2ec7;
case 0x5d2ec8:c.instructions+=5;goto B5d2ec8;
case 0x5d2ec9:c.instructions+=4;goto B5d2ec9;
case 0x5d2eca:c.instructions+=3;goto B5d2eca;
case 0x5d2ecd:c.instructions+=2;goto B5d2ecd;
case 0x5d2ece:c.instructions+=1;goto B5d2ece;
case 0x5d2ee0:goto L5d2ee0;
case 0x5d2ee1:c.instructions+=17;goto B5d2ee1;
case 0x5d2ee2:c.instructions+=16;goto B5d2ee2;
case 0x5d2ee4:c.instructions+=15;goto B5d2ee4;
case 0x5d2ee8:c.instructions+=14;goto B5d2ee8;
case 0x5d2eec:c.instructions+=13;goto B5d2eec;
case 0x5d2eef:c.instructions+=12;goto B5d2eef;
case 0x5d2ef3:c.instructions+=11;goto B5d2ef3;
case 0x5d2ef6:c.instructions+=10;goto B5d2ef6;
case 0x5d2efa:c.instructions+=9;goto B5d2efa;
case 0x5d2efe:c.instructions+=8;goto B5d2efe;
case 0x5d2f04:c.instructions+=7;goto B5d2f04;
case 0x5d2f08:c.instructions+=6;goto B5d2f08;
case 0x5d2f0e:c.instructions+=5;goto B5d2f0e;
case 0x5d2f12:c.instructions+=4;goto B5d2f12;
case 0x5d2f14:c.instructions+=3;goto B5d2f14;
case 0x5d2f16:c.instructions+=2;goto B5d2f16;
case 0x5d2f19:c.instructions+=1;goto B5d2f19;
case 0x5d2f1b:goto L5d2f1b;
case 0x5d2f1d:c.instructions+=1;goto B5d2f1d;
case 0x5d2f21:goto L5d2f21;
case 0x5d2f25:c.instructions+=3;goto B5d2f25;
case 0x5d2f27:c.instructions+=2;goto B5d2f27;
case 0x5d2f2d:c.instructions+=1;goto B5d2f2d;
case 0x5d2f32:goto L5d2f32;
case 0x5d2f34:c.instructions+=6;goto B5d2f34;
case 0x5d2f38:c.instructions+=5;goto B5d2f38;
case 0x5d2f3b:c.instructions+=4;goto B5d2f3b;
case 0x5d2f3f:c.instructions+=3;goto B5d2f3f;
case 0x5d2f40:c.instructions+=2;goto B5d2f40;
case 0x5d2f41:c.instructions+=1;goto B5d2f41;
case 0x5d2f50:goto L5d2f50;
case 0x5d2f51:c.instructions+=11;goto B5d2f51;
case 0x5d2f52:c.instructions+=10;goto B5d2f52;
case 0x5d2f56:c.instructions+=9;goto B5d2f56;
case 0x5d2f57:c.instructions+=8;goto B5d2f57;
case 0x5d2f58:c.instructions+=7;goto B5d2f58;
case 0x5d2f5c:c.instructions+=6;goto B5d2f5c;
case 0x5d2f5f:c.instructions+=5;goto B5d2f5f;
case 0x5d2f61:c.instructions+=4;goto B5d2f61;
case 0x5d2f64:c.instructions+=3;goto B5d2f64;
case 0x5d2f67:c.instructions+=2;goto B5d2f67;
case 0x5d2f6d:c.instructions+=1;goto B5d2f6d;
case 0x5d2f72:goto L5d2f72;
case 0x5d2f75:c.instructions+=3;goto B5d2f75;
case 0x5d2f7b:c.instructions+=2;goto B5d2f7b;
case 0x5d2f7d:c.instructions+=1;goto B5d2f7d;
case 0x5d2f82:goto L5d2f82;
case 0x5d2f85:c.instructions+=3;goto B5d2f85;
case 0x5d2f8b:c.instructions+=2;goto B5d2f8b;
case 0x5d2f8f:c.instructions+=1;goto B5d2f8f;
case 0x5d2f94:goto L5d2f94;
case 0x5d2f96:c.instructions+=13;goto B5d2f96;
case 0x5d2f98:c.instructions+=12;goto B5d2f98;
case 0x5d2f9b:c.instructions+=11;goto B5d2f9b;
case 0x5d2f9f:c.instructions+=10;goto B5d2f9f;
case 0x5d2fa0:c.instructions+=9;goto B5d2fa0;
case 0x5d2fa3:c.instructions+=8;goto B5d2fa3;
case 0x5d2fa6:c.instructions+=7;goto B5d2fa6;
case 0x5d2fa8:c.instructions+=6;goto B5d2fa8;
case 0x5d2fab:c.instructions+=5;goto B5d2fab;
case 0x5d2fae:c.instructions+=4;goto B5d2fae;
case 0x5d2faf:c.instructions+=3;goto B5d2faf;
case 0x5d2fb0:c.instructions+=2;goto B5d2fb0;
case 0x5d2fb1:c.instructions+=1;goto B5d2fb1;
case 0x5d2fc0:goto L5d2fc0;
case 0x5d2fc3:c.instructions+=16;goto B5d2fc3;
case 0x5d2fc7:c.instructions+=15;goto B5d2fc7;
case 0x5d2fca:c.instructions+=14;goto B5d2fca;
case 0x5d2fcd:c.instructions+=13;goto B5d2fcd;
case 0x5d2fd1:c.instructions+=12;goto B5d2fd1;
case 0x5d2fd5:c.instructions+=11;goto B5d2fd5;
case 0x5d2fd9:c.instructions+=10;goto B5d2fd9;
case 0x5d2fdd:c.instructions+=9;goto B5d2fdd;
case 0x5d2fdf:c.instructions+=8;goto B5d2fdf;
case 0x5d2fe3:c.instructions+=7;goto B5d2fe3;
case 0x5d2fe9:c.instructions+=6;goto B5d2fe9;
case 0x5d2fed:c.instructions+=5;goto B5d2fed;
case 0x5d2ff1:c.instructions+=4;goto B5d2ff1;
case 0x5d2ff5:c.instructions+=3;goto B5d2ff5;
case 0x5d2ff9:c.instructions+=2;goto B5d2ff9;
case 0x5d2ffb:c.instructions+=1;goto B5d2ffb;
default:missing_instruction(c.pc);}
B5d2003:L5d2003:{c.instructions+=1;NFSU2_TR(0x5d2003);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d2014;}}
}
B5d2005:L5d2005:{c.instructions+=2;NFSU2_TR(0x5d2005);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d2008:{NFSU2_TR(0x5d2008);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d2166;}}
}
B5d200e:L5d200e:{c.instructions+=1;NFSU2_TR(0x5d200e);
{goto L5d2014;}
}
B5d2010:L5d2010:{c.instructions+=1;NFSU2_TR(0x5d2010);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d2014:L5d2014:{c.instructions+=2;NFSU2_TR(0x5d2014);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d2017:{NFSU2_TR(0x5d2017);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d2020;}}
}
B5d2019:L5d2019:{c.instructions+=2;NFSU2_TR(0x5d2019);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x102bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d201e:{NFSU2_TR(0x5d201e);
{goto L5d202a;}
}
B5d2020:L5d2020:{c.instructions+=2;NFSU2_TR(0x5d2020);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d2023:{NFSU2_TR(0x5d2023);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d2034;}}
}
B5d2025:L5d2025:{c.instructions+=1;NFSU2_TR(0x5d2025);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1039ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d202a:L5d202a:{c.instructions+=1;NFSU2_TR(0x5d202a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d2034;}}
}
B5d202c:L5d202c:{c.instructions+=2;NFSU2_TR(0x5d202c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d202e:{NFSU2_TR(0x5d202e);
if(r1(R+518)){{goto L5d2166;}}
}
B5d2034:L5d2034:{c.instructions+=3;NFSU2_TR(0x5d2034);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d2037:{NFSU2_TR(0x5d2037);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5d203a:{NFSU2_TR(0x5d203a);
if(r1(R+518)){{goto L5d2079;}}
}
B5d203c:L5d203c:{c.instructions+=14;NFSU2_TR(0x5d203c);
__builtin_memmove(gp(0x86ead8),(R+12),4);
}
B5d2042:{NFSU2_TR(0x5d2042);
__builtin_memmove(gp(0x86eadc),(R+12),4);
}
B5d2048:{NFSU2_TR(0x5d2048);
__builtin_memmove(gp(0x86eae0),(R+12),4);
}
B5d204e:{NFSU2_TR(0x5d204e);
s4(0x86eae4,u32(0x5ull));
}
B5d2058:{NFSU2_TR(0x5d2058);
s4(0x86eae8,u32(0x6ull));
}
B5d2062:{NFSU2_TR(0x5d2062);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d2065:{NFSU2_TR(0x5d2065);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d2068:{NFSU2_TR(0x5d2068);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d206b:{NFSU2_TR(0x5d206b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d206d:{NFSU2_TR(0x5d206d);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d206f:{NFSU2_TR(0x5d206f);
u8 U[4];
w4(U+0,u32(0x86ead8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2074:{NFSU2_TR(0x5d2074);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2075:{NFSU2_TR(0x5d2075);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2076:{NFSU2_TR(0x5d2076);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2079ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2079:L5d2079:{c.instructions+=4;NFSU2_TR(0x5d2079);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d207c:{NFSU2_TR(0x5d207c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d2082:{NFSU2_TR(0x5d2082);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d2084:{NFSU2_TR(0x5d2084);
if(r1(R+518)){{goto L5d20d3;}}
}
B5d2086:L5d2086:{c.instructions+=3;NFSU2_TR(0x5d2086);
__builtin_memmove((R+0),gp(0x870d18),4);
}
B5d208b:{NFSU2_TR(0x5d208b);
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
B5d208d:{NFSU2_TR(0x5d208d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d2099;}}
}
B5d208f:L5d208f:{c.instructions+=2;NFSU2_TR(0x5d208f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d2097:{NFSU2_TR(0x5d2097);
{goto L5d20c4;}
}
B5d2099:L5d2099:{c.instructions+=2;NFSU2_TR(0x5d2099);
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
B5d209c:{NFSU2_TR(0x5d209c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d20a8;}}
}
B5d209e:L5d209e:{c.instructions+=2;NFSU2_TR(0x5d209e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d20a6:{NFSU2_TR(0x5d20a6);
{goto L5d20c4;}
}
B5d20a8:L5d20a8:{c.instructions+=2;NFSU2_TR(0x5d20a8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d20ab:{NFSU2_TR(0x5d20ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d20c4;}}
}
B5d20ad:L5d20ad:{c.instructions+=6;NFSU2_TR(0x5d20ad);
__builtin_memmove((R+28),gp(0x86c548),4);
}
B5d20b3:{NFSU2_TR(0x5d20b3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d20b5:{NFSU2_TR(0x5d20b5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x102bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d20bb:{NFSU2_TR(0x5d20bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B5d20be:{NFSU2_TR(0x5d20be);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+0)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d20c0:{NFSU2_TR(0x5d20c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d20c4:L5d20c4:{c.instructions+=7;NFSU2_TR(0x5d20c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d20c8:{NFSU2_TR(0x5d20c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d20cb:{NFSU2_TR(0x5d20cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d20cd:{NFSU2_TR(0x5d20cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d20ce:{NFSU2_TR(0x5d20ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d20cf:{NFSU2_TR(0x5d20cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d20d0:{NFSU2_TR(0x5d20d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d20d3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d20d3:L5d20d3:{c.instructions+=4;NFSU2_TR(0x5d20d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d20d6:{NFSU2_TR(0x5d20d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d20dc:{NFSU2_TR(0x5d20dc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d20de:{NFSU2_TR(0x5d20de);
if(r1(R+518)){{goto L5d20fd;}}
}
B5d20e0:L5d20e0:{c.instructions+=5;NFSU2_TR(0x5d20e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d20e3:{NFSU2_TR(0x5d20e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d20e5:{NFSU2_TR(0x5d20e5);
w4(R+4,u32(0x8718b0ull));
}
B5d20ea:{NFSU2_TR(0x5d20ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d20ee:{NFSU2_TR(0x5d20ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d20f3ull));
TAIL_STATIC(0x5be560u,5be);
}
B5d20f3:L5d20f3:{c.instructions+=5;NFSU2_TR(0x5d20f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d20f4:{NFSU2_TR(0x5d20f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d20f8:{NFSU2_TR(0x5d20f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d20f9:{NFSU2_TR(0x5d20f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d20fa:{NFSU2_TR(0x5d20fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d20fdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d20fd:L5d20fd:{c.instructions+=4;NFSU2_TR(0x5d20fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d2100:{NFSU2_TR(0x5d2100);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x484ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d2106:{NFSU2_TR(0x5d2106);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5d2108:{NFSU2_TR(0x5d2108);
if(r1(R+518)){{goto L5d2116;}}
}
B5d210a:L5d210a:{c.instructions+=6;NFSU2_TR(0x5d210a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d210d:{NFSU2_TR(0x5d210d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d210f:{NFSU2_TR(0x5d210f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2111:{NFSU2_TR(0x5d2111);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2112:{NFSU2_TR(0x5d2112);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2113:{NFSU2_TR(0x5d2113);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2116ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2116:L5d2116:{c.instructions+=4;NFSU2_TR(0x5d2116);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d2119:{NFSU2_TR(0x5d2119);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d211f:{NFSU2_TR(0x5d211f);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5d2121:{NFSU2_TR(0x5d2121);
if(r1(R+518)){{goto L5d2134;}}
}
B5d2123:L5d2123:{c.instructions+=7;NFSU2_TR(0x5d2123);
__builtin_memmove((R+28),gp(0x86e634),4);
}
B5d2129:{NFSU2_TR(0x5d2129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d212c:{NFSU2_TR(0x5d212c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d212e:{NFSU2_TR(0x5d212e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d212f:{NFSU2_TR(0x5d212f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2130:{NFSU2_TR(0x5d2130);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2131:{NFSU2_TR(0x5d2131);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2134ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2134:L5d2134:{c.instructions+=4;NFSU2_TR(0x5d2134);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d2137:{NFSU2_TR(0x5d2137);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x31cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d213d:{NFSU2_TR(0x5d213d);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5d213f:{NFSU2_TR(0x5d213f);
if(r1(R+518)){{goto L5d214d;}}
}
B5d2141:L5d2141:{c.instructions+=6;NFSU2_TR(0x5d2141);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d2144:{NFSU2_TR(0x5d2144);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d2146:{NFSU2_TR(0x5d2146);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2148:{NFSU2_TR(0x5d2148);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2149:{NFSU2_TR(0x5d2149);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d214a:{NFSU2_TR(0x5d214a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d214dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d214d:L5d214d:{c.instructions+=6;NFSU2_TR(0x5d214d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d2150:{NFSU2_TR(0x5d2150);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d2154:{NFSU2_TR(0x5d2154);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d2156:{NFSU2_TR(0x5d2156);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2157:{NFSU2_TR(0x5d2157);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2158:{NFSU2_TR(0x5d2158);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d215eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d215e:L5d215e:{c.instructions+=2;NFSU2_TR(0x5d215e);
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
B5d2160:{NFSU2_TR(0x5d2160);
if(r1(R+518)){{goto L5d217a;}}
}
B5d2162:L5d2162:{c.instructions+=1;NFSU2_TR(0x5d2162);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d2166:L5d2166:{c.instructions+=5;NFSU2_TR(0x5d2166);
__builtin_memmove((R+0),gp(0x800bf4),4);
}
B5d216b:{NFSU2_TR(0x5d216b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5d216c:{NFSU2_TR(0x5d216c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d216e:{NFSU2_TR(0x5d216e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2172:{NFSU2_TR(0x5d2172);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5d1f78u,5d1);}
}
B5d2178:L5d2178:{c.instructions+=1;NFSU2_TR(0x5d2178);
{goto L5d219b;}
}
B5d217a:L5d217a:{c.instructions+=8;NFSU2_TR(0x5d217a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d217e:{NFSU2_TR(0x5d217e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d2181:{NFSU2_TR(0x5d2181);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2182:{NFSU2_TR(0x5d2182);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2185:{NFSU2_TR(0x5d2185);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2188:{NFSU2_TR(0x5d2188);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d218a:{NFSU2_TR(0x5d218a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d218b:{NFSU2_TR(0x5d218b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2191ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2191:L5d2191:{c.instructions+=3;NFSU2_TR(0x5d2191);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d2195:{NFSU2_TR(0x5d2195);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B5d2198:{NFSU2_TR(0x5d2198);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d219b:L5d219b:{c.instructions+=2;NFSU2_TR(0x5d219b);
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
B5d219d:{NFSU2_TR(0x5d219d);
__builtin_memmove((R+4),(R+4),4);
}
B5d21a0:L5d21a0:{c.instructions+=7;NFSU2_TR(0x5d21a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d21a3:{NFSU2_TR(0x5d21a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d21a6:{NFSU2_TR(0x5d21a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d21a8:{NFSU2_TR(0x5d21a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d21a9:{NFSU2_TR(0x5d21a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d21aa:{NFSU2_TR(0x5d21aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d21ab:{NFSU2_TR(0x5d21ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d21aeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d21ae:L5d21ae:{c.instructions+=2;NFSU2_TR(0x5d21ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d21b0:{NFSU2_TR(0x5d21b0);
if(r1(R+518)){{goto L5d21b8;}}
}
B5d21b2:L5d21b2:{c.instructions+=3;NFSU2_TR(0x5d21b2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5d21b3:{NFSU2_TR(0x5d21b3);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d21b6:{NFSU2_TR(0x5d21b6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d21a0u);}goto L5d21a0;}}
}
B5d21b8:L5d21b8:{c.instructions+=3;NFSU2_TR(0x5d21b8);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x9ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5d21bc:{NFSU2_TR(0x5d21bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d21bf:{NFSU2_TR(0x5d21bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d21da;}}
}
B5d21c1:L5d21c1:{c.instructions+=8;NFSU2_TR(0x5d21c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d21c4:{NFSU2_TR(0x5d21c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d21ca:{NFSU2_TR(0x5d21ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5d21cd:{NFSU2_TR(0x5d21cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d21d0:{NFSU2_TR(0x5d21d0);
u8 U[4];
w4(U+0,u32(0x3c1374bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d21d5:{NFSU2_TR(0x5d21d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d21d6:{NFSU2_TR(0x5d21d6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d21d7:{NFSU2_TR(0x5d21d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d21daull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d21da:L5d21da:{c.instructions+=6;NFSU2_TR(0x5d21da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d21db:{NFSU2_TR(0x5d21db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d21dc:{NFSU2_TR(0x5d21dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d21dd:{NFSU2_TR(0x5d21dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d21de:{NFSU2_TR(0x5d21de);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xa0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xa0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xa0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d21e4:{NFSU2_TR(0x5d21e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d21f0:L5d21f0:{c.instructions+=11;NFSU2_TR(0x5d21f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d21f2:{NFSU2_TR(0x5d21f2);
u8 U[4];
w4(U+0,u32(0x7792f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d21f7:{NFSU2_TR(0x5d21f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d21fd:{NFSU2_TR(0x5d21fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d21fe:{NFSU2_TR(0x5d21fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2205:{NFSU2_TR(0x5d2205);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2206:{NFSU2_TR(0x5d2206);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5d220b:{NFSU2_TR(0x5d220b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d220d:{NFSU2_TR(0x5d220d);
u8 U[4];
w4(U+0,u32(0x86e5c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2212:{NFSU2_TR(0x5d2212);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2213:{NFSU2_TR(0x5d2213);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2216ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2216:L5d2216:{c.instructions+=5;NFSU2_TR(0x5d2216);
__builtin_memmove((R+4),gp(0x86e608),4);
}
B5d221c:{NFSU2_TR(0x5d221c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d221e:{NFSU2_TR(0x5d221e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x2000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d2224:{NFSU2_TR(0x5d2224);
__builtin_memmove(gp(0x876530),(R+0),4);
}
B5d2229:{NFSU2_TR(0x5d2229);
if(r1(R+518)){{goto L5d2242;}}
}
B5d222b:L5d222b:{c.instructions+=2;NFSU2_TR(0x5d222b);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d222e:{NFSU2_TR(0x5d222e);
if(r1(R+518)){{goto L5d2242;}}
}
B5d2230:L5d2230:{c.instructions+=2;NFSU2_TR(0x5d2230);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x20000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d2236:{NFSU2_TR(0x5d2236);
if(r1(R+518)){{goto L5d2242;}}
}
B5d2238:L5d2238:{c.instructions+=2;NFSU2_TR(0x5d2238);
w4(R+0,u32(0x1ull));
}
B5d223d:{NFSU2_TR(0x5d223d);
__builtin_memmove(gp(0x876530),(R+0),4);
}
B5d2242:L5d2242:{c.instructions+=2;NFSU2_TR(0x5d2242);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d2245:{NFSU2_TR(0x5d2245);
if(r1(R+518)){{goto L5d224d;}}
}
B5d2247:L5d2247:{c.instructions+=2;NFSU2_TR(0x5d2247);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d2248:{NFSU2_TR(0x5d2248);
__builtin_memmove(gp(0x876530),(R+0),4);
}
B5d224d:L5d224d:{c.instructions+=2;NFSU2_TR(0x5d224d);
u8 U[8];
__builtin_memmove((U+0),gp(0x870d18),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+0)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d2253:{NFSU2_TR(0x5d2253);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d225a;}}
}
B5d2255:L5d2255:{c.instructions+=1;NFSU2_TR(0x5d2255);
__builtin_memmove(gp(0x870d18),(R+0),4);
}
B5d225a:L5d225a:{c.instructions+=3;NFSU2_TR(0x5d225a);
__builtin_memmove((R+0),gp(0x870914),4);
}
B5d225f:{NFSU2_TR(0x5d225f);
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
B5d2261:{NFSU2_TR(0x5d2261);
if(r1(R+518)){{goto L5d2269;}}
}
B5d2263:L5d2263:{c.instructions+=3;NFSU2_TR(0x5d2263);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d2265:{NFSU2_TR(0x5d2265);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2266:{NFSU2_TR(0x5d2266);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2269ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2269:L5d2269:{c.instructions+=3;NFSU2_TR(0x5d2269);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d226a:{NFSU2_TR(0x5d226a);
u8 U[4];
w4(U+0,u32(0x870914ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d226f:{NFSU2_TR(0x5d226f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2274ull));
TAIL_STATIC(0x640aacu,640);
}
B5d2274:L5d2274:{c.instructions+=3;NFSU2_TR(0x5d2274);
__builtin_memmove((R+0),gp(0x87090c),1);
}
B5d2279:{NFSU2_TR(0x5d2279);
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
B5d227b:{NFSU2_TR(0x5d227b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d244d;}}
}
B5d2281:L5d2281:{c.instructions+=5;NFSU2_TR(0x5d2281);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2282:{NFSU2_TR(0x5d2282);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2283:{NFSU2_TR(0x5d2283);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5d2285:{NFSU2_TR(0x5d2285);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B5d2288:{NFSU2_TR(0x5d2288);
{goto L5d2290;}
}
B5d2290:L5d2290:{c.instructions+=3;NFSU2_TR(0x5d2290);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d2292:{NFSU2_TR(0x5d2292);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5d2295:{NFSU2_TR(0x5d2295);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5d243a;}}
}
B5d229b:L5d229b:{c.instructions+=2;NFSU2_TR(0x5d229b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5d24d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5d22a2:{NFSU2_TR(0x5d22a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5d24b0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d22a9:L5d22a9:{c.instructions+=2;NFSU2_TR(0x5d22a9);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d22ab:{NFSU2_TR(0x5d22ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d22b0ull));
TAIL_STATIC(0x575620u,575);
}
B5d22b0:L5d22b0:{c.instructions+=6;NFSU2_TR(0x5d22b0);
__builtin_memmove((R+24),(R+0),4);
}
B5d22b2:{NFSU2_TR(0x5d22b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d22b5:{NFSU2_TR(0x5d22b5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d22b9:{NFSU2_TR(0x5d22b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d22bb:{NFSU2_TR(0x5d22bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d22c3:{NFSU2_TR(0x5d22c3);
if(r1(R+518)){{goto L5d2434;}}
}
B5d22c9:L5d22c9:{c.instructions+=2;NFSU2_TR(0x5d22c9);
__builtin_memmove((R+4),(R+24),4);
}
B5d22cb:{NFSU2_TR(0x5d22cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d22d0ull));
TAIL_STATIC(0x5d0f80u,5d0);
}
B5d22d0:L5d22d0:{c.instructions+=3;NFSU2_TR(0x5d22d0);
u8 U[4];
w4(U+0,u32(0x7a4578ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5d22d6:{NFSU2_TR(0x5d22d6);
__builtin_memmove((R+0),(R+24),4);
}
B5d22d8:{NFSU2_TR(0x5d22d8);
{goto L5d2436;}
}
B5d22dd:L5d22dd:{c.instructions+=2;NFSU2_TR(0x5d22dd);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d22df:{NFSU2_TR(0x5d22df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d22e4ull));
TAIL_STATIC(0x575620u,575);
}
B5d22e4:L5d22e4:{c.instructions+=6;NFSU2_TR(0x5d22e4);
__builtin_memmove((R+24),(R+0),4);
}
B5d22e6:{NFSU2_TR(0x5d22e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d22e9:{NFSU2_TR(0x5d22e9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d22ed:{NFSU2_TR(0x5d22ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d22ef:{NFSU2_TR(0x5d22ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d22f7:{NFSU2_TR(0x5d22f7);
if(r1(R+518)){{goto L5d2434;}}
}
B5d22fd:L5d22fd:{c.instructions+=2;NFSU2_TR(0x5d22fd);
__builtin_memmove((R+4),(R+24),4);
}
B5d22ff:{NFSU2_TR(0x5d22ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2304ull));
TAIL_STATIC(0x5d0f80u,5d0);
}
B5d2304:L5d2304:{c.instructions+=3;NFSU2_TR(0x5d2304);
u8 U[4];
w4(U+0,u32(0x7a453cull));
s4(u32(r4(R+24)),r4(U+0));
}
B5d230a:{NFSU2_TR(0x5d230a);
__builtin_memmove((R+0),(R+24),4);
}
B5d230c:{NFSU2_TR(0x5d230c);
{goto L5d2436;}
}
B5d2311:L5d2311:{c.instructions+=2;NFSU2_TR(0x5d2311);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2313:{NFSU2_TR(0x5d2313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2318ull));
TAIL_STATIC(0x575620u,575);
}
B5d2318:L5d2318:{c.instructions+=6;NFSU2_TR(0x5d2318);
__builtin_memmove((R+24),(R+0),4);
}
B5d231a:{NFSU2_TR(0x5d231a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d231d:{NFSU2_TR(0x5d231d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2321:{NFSU2_TR(0x5d2321);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d2323:{NFSU2_TR(0x5d2323);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d232b:{NFSU2_TR(0x5d232b);
if(r1(R+518)){{goto L5d2434;}}
}
B5d2331:L5d2331:{c.instructions+=2;NFSU2_TR(0x5d2331);
__builtin_memmove((R+4),(R+24),4);
}
B5d2333:{NFSU2_TR(0x5d2333);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2338ull));
TAIL_STATIC(0x5d0f80u,5d0);
}
B5d2338:L5d2338:{c.instructions+=3;NFSU2_TR(0x5d2338);
u8 U[4];
w4(U+0,u32(0x7a4548ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5d233e:{NFSU2_TR(0x5d233e);
__builtin_memmove((R+0),(R+24),4);
}
B5d2340:{NFSU2_TR(0x5d2340);
{goto L5d2436;}
}
B5d2345:L5d2345:{c.instructions+=2;NFSU2_TR(0x5d2345);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2347:{NFSU2_TR(0x5d2347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d234cull));
TAIL_STATIC(0x575620u,575);
}
B5d234c:L5d234c:{c.instructions+=6;NFSU2_TR(0x5d234c);
__builtin_memmove((R+24),(R+0),4);
}
B5d234e:{NFSU2_TR(0x5d234e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d2351:{NFSU2_TR(0x5d2351);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2355:{NFSU2_TR(0x5d2355);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d2357:{NFSU2_TR(0x5d2357);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d235f:{NFSU2_TR(0x5d235f);
if(r1(R+518)){{goto L5d2434;}}
}
B5d2365:L5d2365:{c.instructions+=2;NFSU2_TR(0x5d2365);
__builtin_memmove((R+4),(R+24),4);
}
B5d2367:{NFSU2_TR(0x5d2367);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d236cull));
TAIL_STATIC(0x5d0f80u,5d0);
}
B5d236c:L5d236c:{c.instructions+=3;NFSU2_TR(0x5d236c);
u8 U[4];
w4(U+0,u32(0x7a4554ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5d2372:{NFSU2_TR(0x5d2372);
__builtin_memmove((R+0),(R+24),4);
}
B5d2374:{NFSU2_TR(0x5d2374);
{goto L5d2436;}
}
B5d2379:L5d2379:{c.instructions+=2;NFSU2_TR(0x5d2379);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d237b:{NFSU2_TR(0x5d237b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2380ull));
TAIL_STATIC(0x575620u,575);
}
B5d2380:L5d2380:{c.instructions+=6;NFSU2_TR(0x5d2380);
__builtin_memmove((R+24),(R+0),4);
}
B5d2382:{NFSU2_TR(0x5d2382);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d2385:{NFSU2_TR(0x5d2385);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2389:{NFSU2_TR(0x5d2389);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d238b:{NFSU2_TR(0x5d238b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d2393:{NFSU2_TR(0x5d2393);
if(r1(R+518)){{goto L5d2434;}}
}
B5d2399:L5d2399:{c.instructions+=2;NFSU2_TR(0x5d2399);
__builtin_memmove((R+4),(R+24),4);
}
B5d239b:{NFSU2_TR(0x5d239b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d23a0ull));
TAIL_STATIC(0x5d0f80u,5d0);
}
B5d23a0:L5d23a0:{c.instructions+=3;NFSU2_TR(0x5d23a0);
u8 U[4];
w4(U+0,u32(0x7a4578ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5d23a6:{NFSU2_TR(0x5d23a6);
__builtin_memmove((R+0),(R+24),4);
}
B5d23a8:{NFSU2_TR(0x5d23a8);
{goto L5d2436;}
}
B5d23ad:L5d23ad:{c.instructions+=2;NFSU2_TR(0x5d23ad);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d23af:{NFSU2_TR(0x5d23af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d23b4ull));
TAIL_STATIC(0x575620u,575);
}
B5d23b4:L5d23b4:{c.instructions+=6;NFSU2_TR(0x5d23b4);
__builtin_memmove((R+24),(R+0),4);
}
B5d23b6:{NFSU2_TR(0x5d23b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d23b9:{NFSU2_TR(0x5d23b9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d23bd:{NFSU2_TR(0x5d23bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d23bf:{NFSU2_TR(0x5d23bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d23c7:{NFSU2_TR(0x5d23c7);
if(r1(R+518)){{goto L5d2434;}}
}
B5d23c9:L5d23c9:{c.instructions+=2;NFSU2_TR(0x5d23c9);
__builtin_memmove((R+4),(R+24),4);
}
B5d23cb:{NFSU2_TR(0x5d23cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d23d0ull));
TAIL_STATIC(0x5d0f80u,5d0);
}
B5d23d0:L5d23d0:{c.instructions+=3;NFSU2_TR(0x5d23d0);
u8 U[4];
w4(U+0,u32(0x7a4560ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5d23d6:{NFSU2_TR(0x5d23d6);
__builtin_memmove((R+0),(R+24),4);
}
B5d23d8:{NFSU2_TR(0x5d23d8);
{goto L5d2436;}
}
B5d23da:L5d23da:{c.instructions+=2;NFSU2_TR(0x5d23da);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d23dc:{NFSU2_TR(0x5d23dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d23e1ull));
TAIL_STATIC(0x575620u,575);
}
B5d23e1:L5d23e1:{c.instructions+=6;NFSU2_TR(0x5d23e1);
__builtin_memmove((R+24),(R+0),4);
}
B5d23e3:{NFSU2_TR(0x5d23e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d23e6:{NFSU2_TR(0x5d23e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d23ea:{NFSU2_TR(0x5d23ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d23ec:{NFSU2_TR(0x5d23ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d23f4:{NFSU2_TR(0x5d23f4);
if(r1(R+518)){{goto L5d2434;}}
}
B5d23f6:L5d23f6:{c.instructions+=2;NFSU2_TR(0x5d23f6);
__builtin_memmove((R+4),(R+24),4);
}
B5d23f8:{NFSU2_TR(0x5d23f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d23fdull));
TAIL_STATIC(0x5d0f80u,5d0);
}
B5d23fd:L5d23fd:{c.instructions+=3;NFSU2_TR(0x5d23fd);
u8 U[4];
w4(U+0,u32(0x7a456cull));
s4(u32(r4(R+24)),r4(U+0));
}
B5d2403:{NFSU2_TR(0x5d2403);
__builtin_memmove((R+0),(R+24),4);
}
B5d2405:{NFSU2_TR(0x5d2405);
{goto L5d2436;}
}
B5d2407:L5d2407:{c.instructions+=2;NFSU2_TR(0x5d2407);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2409:{NFSU2_TR(0x5d2409);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d240eull));
TAIL_STATIC(0x575620u,575);
}
B5d240e:L5d240e:{c.instructions+=6;NFSU2_TR(0x5d240e);
__builtin_memmove((R+24),(R+0),4);
}
B5d2410:{NFSU2_TR(0x5d2410);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d2413:{NFSU2_TR(0x5d2413);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2417:{NFSU2_TR(0x5d2417);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d2419:{NFSU2_TR(0x5d2419);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d2421:{NFSU2_TR(0x5d2421);
if(r1(R+518)){{goto L5d2434;}}
}
B5d2423:L5d2423:{c.instructions+=2;NFSU2_TR(0x5d2423);
__builtin_memmove((R+4),(R+24),4);
}
B5d2425:{NFSU2_TR(0x5d2425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d242aull));
TAIL_STATIC(0x5d0f80u,5d0);
}
B5d242a:L5d242a:{c.instructions+=3;NFSU2_TR(0x5d242a);
u8 U[4];
w4(U+0,u32(0x7a4578ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5d2430:{NFSU2_TR(0x5d2430);
__builtin_memmove((R+0),(R+24),4);
}
B5d2432:{NFSU2_TR(0x5d2432);
{goto L5d2436;}
}
B5d2434:L5d2434:{c.instructions+=1;NFSU2_TR(0x5d2434);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d2436:L5d2436:{c.instructions+=1;NFSU2_TR(0x5d2436);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d243a:L5d243a:{c.instructions+=4;NFSU2_TR(0x5d243a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb28ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5d2441:{NFSU2_TR(0x5d2441);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5d2442:{NFSU2_TR(0x5d2442);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5d2445:{NFSU2_TR(0x5d2445);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d2290u);}goto L5d2290;}}
}
B5d244b:L5d244b:{c.instructions+=2;NFSU2_TR(0x5d244b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d244c:{NFSU2_TR(0x5d244c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d244d:L5d244d:{c.instructions+=5;NFSU2_TR(0x5d244d);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5d2452:{NFSU2_TR(0x5d2452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d2454:{NFSU2_TR(0x5d2454);
u8 U[4];
w4(U+0,u32(0x86e5c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2459:{NFSU2_TR(0x5d2459);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d245a:{NFSU2_TR(0x5d245a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d245dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d245d:L5d245d:{c.instructions+=8;NFSU2_TR(0x5d245d);
__builtin_memmove((R+8),gp(0x8709ac),4);
}
B5d2463:{NFSU2_TR(0x5d2463);
__builtin_memmove((R+0),gp(0x870970),4);
}
B5d2468:{NFSU2_TR(0x5d2468);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d246a:{NFSU2_TR(0x5d246a);
u8 U[4];
w4(U+0,u32(0x86c120ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d246f:{NFSU2_TR(0x5d246f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2471:{NFSU2_TR(0x5d2471);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2472:{NFSU2_TR(0x5d2472);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2473:{NFSU2_TR(0x5d2473);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2476ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2476:L5d2476:{c.instructions+=2;NFSU2_TR(0x5d2476);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5d2478:{NFSU2_TR(0x5d2478);
{goto L5d2480;}
}
B5d2480:L5d2480:{c.instructions+=3;NFSU2_TR(0x5d2480);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb28ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5d2487:{NFSU2_TR(0x5d2487);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2488:{NFSU2_TR(0x5d2488);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d248dull));
TAIL_STATIC(0x5d1e20u,5d1);
}
B5d248d:L5d248d:{c.instructions+=3;NFSU2_TR(0x5d248d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5d248e:{NFSU2_TR(0x5d248e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x16ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x16ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d2491:{NFSU2_TR(0x5d2491);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d2480u);}goto L5d2480;}}
}
B5d2493:L5d2493:{c.instructions+=2;NFSU2_TR(0x5d2493);
s1(0x87090c,u8(0x1ull));
}
B5d249a:{NFSU2_TR(0x5d249a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d249full));
TAIL_STATIC(0x5bc5d0u,5bc);
}
B5d249f:L5d249f:{c.instructions+=5;NFSU2_TR(0x5d249f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d24a3:{NFSU2_TR(0x5d24a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d24a4:{NFSU2_TR(0x5d24a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d24ab:{NFSU2_TR(0x5d24ab);
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
B5d24ae:{NFSU2_TR(0x5d24ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d24f0:L5d24f0:{c.instructions+=8;NFSU2_TR(0x5d24f0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x58ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d24f3:{NFSU2_TR(0x5d24f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d24f4:{NFSU2_TR(0x5d24f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d24f5:{NFSU2_TR(0x5d24f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d24f6:{NFSU2_TR(0x5d24f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d24f7:{NFSU2_TR(0x5d24f7);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d24f9:{NFSU2_TR(0x5d24f9);
s4(0x800df8,u32(0x1ull));
}
B5d2503:{NFSU2_TR(0x5d2503);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2508ull));
TAIL_STATIC(0x63bd30u,63b);
}
B5d2508:L5d2508:{c.instructions+=8;NFSU2_TR(0x5d2508);
u8 U[4];
w4(U+0,u32(0x86e5c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d250d:{NFSU2_TR(0x5d250d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d250f:{NFSU2_TR(0x5d250f);
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
B5d2511:{NFSU2_TR(0x5d2511);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2512:{NFSU2_TR(0x5d2512);
__builtin_memmove(gp(0x870970),(R+0),4);
}
B5d2517:{NFSU2_TR(0x5d2517);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d2519:{NFSU2_TR(0x5d2519);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d251a:{NFSU2_TR(0x5d251a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d251dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d251d:L5d251d:{c.instructions+=1;NFSU2_TR(0x5d251d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2522ull));
TAIL_STATIC(0x5be5a0u,5be);
}
B5d2522:L5d2522:{c.instructions+=1;NFSU2_TR(0x5d2522);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2527ull));
TAIL_STATIC(0x5bea20u,5be);
}
B5d2527:L5d2527:{c.instructions+=3;NFSU2_TR(0x5d2527);
u8 U[4];
w4(U+0,u32(0x8001full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d252c:{NFSU2_TR(0x5d252c);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d252e:{NFSU2_TR(0x5d252e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2533ull));
TAIL_STATIC(0x75db6au,75d);
}
B5d2533:L5d2533:{c.instructions+=5;NFSU2_TR(0x5d2533);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2534:{NFSU2_TR(0x5d2534);
u8 U[4];
w4(U+0,u32(0x7a45c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2539:{NFSU2_TR(0x5d2539);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d253e:{NFSU2_TR(0x5d253e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2540:{NFSU2_TR(0x5d2540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2545ull));
TAIL_STATIC(0x440df0u,440);
}
B5d2545:L5d2545:{c.instructions+=10;NFSU2_TR(0x5d2545);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2546:{NFSU2_TR(0x5d2546);
__builtin_memmove(gp(0x87081c),(R+0),4);
}
B5d254b:{NFSU2_TR(0x5d254b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d254e:{NFSU2_TR(0x5d254e);
u8 U[4];
w4(U+0,u32(0x7a45a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2553:{NFSU2_TR(0x5d2553);
w4(R+28,u32(0xfffffffdull));
}
B5d2558:{NFSU2_TR(0x5d2558);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+28))));
}
B5d255a:{NFSU2_TR(0x5d255a);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d255f:{NFSU2_TR(0x5d255f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2561:{NFSU2_TR(0x5d2561);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2564:{NFSU2_TR(0x5d2564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2569ull));
TAIL_STATIC(0x440df0u,440);
}
B5d2569:L5d2569:{c.instructions+=9;NFSU2_TR(0x5d2569);
__builtin_memmove((R+20),gp(0x783138),4);
}
B5d256f:{NFSU2_TR(0x5d256f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B5d2572:{NFSU2_TR(0x5d2572);
__builtin_memmove(gp(0x870820),(R+0),4);
}
B5d2577:{NFSU2_TR(0x5d2577);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d257a:{NFSU2_TR(0x5d257a);
u8 U[4];
w4(U+0,u32(0x7a4598ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d257f:{NFSU2_TR(0x5d257f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d2581:{NFSU2_TR(0x5d2581);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2582:{NFSU2_TR(0x5d2582);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2585:{NFSU2_TR(0x5d2585);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2587ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d2587:L5d2587:{c.instructions+=2;NFSU2_TR(0x5d2587);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2588:{NFSU2_TR(0x5d2588);
u8 U[4];
__builtin_memmove((U+0),gp(0x783338),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d258eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d258e:L5d258e:{c.instructions+=8;NFSU2_TR(0x5d258e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d258f:{NFSU2_TR(0x5d258f);
__builtin_memmove((R+28),(R+0),4);
}
B5d2591:{NFSU2_TR(0x5d2591);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d2599:{NFSU2_TR(0x5d2599);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d25a1:{NFSU2_TR(0x5d25a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ccd60ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d25a9:{NFSU2_TR(0x5d25a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d25ad:{NFSU2_TR(0x5d25ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d25b1:{NFSU2_TR(0x5d25b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d25b3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d25b3:L5d25b3:{c.instructions+=5;NFSU2_TR(0x5d25b3);
u8 U[4];
w4(U+0,u32(0x7f00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d25b8:{NFSU2_TR(0x5d25b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d25b9:{NFSU2_TR(0x5d25b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d25bd:{NFSU2_TR(0x5d25bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d25c1:{NFSU2_TR(0x5d25c1);
u8 U[4];
__builtin_memmove((U+0),gp(0x78333c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d25c7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d25c7:L5d25c7:{c.instructions+=8;NFSU2_TR(0x5d25c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d25cb:{NFSU2_TR(0x5d25cb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d25cc:{NFSU2_TR(0x5d25cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d25d0:{NFSU2_TR(0x5d25d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d25d4:{NFSU2_TR(0x5d25d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d25d8:{NFSU2_TR(0x5d25d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x7a458cull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d25e0:{NFSU2_TR(0x5d25e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d25e4:{NFSU2_TR(0x5d25e4);
u8 U[4];
__builtin_memmove((U+0),gp(0x783340),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d25eaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d25ea:L5d25ea:{c.instructions+=6;NFSU2_TR(0x5d25ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d25ee:{NFSU2_TR(0x5d25ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d25ef:{NFSU2_TR(0x5d25ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d25f3:{NFSU2_TR(0x5d25f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d25f4:{NFSU2_TR(0x5d25f4);
w4(R+4,u32(0x8718b0ull));
}
B5d25f9:{NFSU2_TR(0x5d25f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d25feull));
TAIL_STATIC(0x5bf610u,5bf);
}
B5d25fe:L5d25fe:{c.instructions+=16;NFSU2_TR(0x5d25fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d2602:{NFSU2_TR(0x5d2602);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d2606:{NFSU2_TR(0x5d2606);
w4(R+0,u32(0x64ull));
}
B5d260b:{NFSU2_TR(0x5d260b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d260f:{NFSU2_TR(0x5d260f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2613:{NFSU2_TR(0x5d2613);
__builtin_memmove(gp(0x870980),(R+28),4);
}
B5d2619:{NFSU2_TR(0x5d2619);
__builtin_memmove(gp(0x870984),(R+12),4);
}
B5d261f:{NFSU2_TR(0x5d261f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d2622:{NFSU2_TR(0x5d2622);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2623:{NFSU2_TR(0x5d2623);
u8 U[4];
w4(U+0,u32(0x80000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2628:{NFSU2_TR(0x5d2628);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d262c:{NFSU2_TR(0x5d262c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d262f:{NFSU2_TR(0x5d262f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2630:{NFSU2_TR(0x5d2630);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2634:{NFSU2_TR(0x5d2634);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2638:{NFSU2_TR(0x5d2638);
u8 U[4];
__builtin_memmove((U+0),gp(0x783344),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d263eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d263e:L5d263e:{c.instructions+=5;NFSU2_TR(0x5d263e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d2642:{NFSU2_TR(0x5d2642);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2643:{NFSU2_TR(0x5d2643);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2644:{NFSU2_TR(0x5d2644);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2645:{NFSU2_TR(0x5d2645);
u8 U[4];
__builtin_memmove((U+0),gp(0x783348),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d264bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d264b:L5d264b:{c.instructions+=16;NFSU2_TR(0x5d264b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d264f:{NFSU2_TR(0x5d264f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d2653:{NFSU2_TR(0x5d2653);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2654:{NFSU2_TR(0x5d2654);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d2658:{NFSU2_TR(0x5d2658);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5d265a:{NFSU2_TR(0x5d265a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d265b:{NFSU2_TR(0x5d265b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d265f:{NFSU2_TR(0x5d265f);
u8 U[6];
w1(R+512,u8((r4(R+8))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+8),r4(R+4)));
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d2661:{NFSU2_TR(0x5d2661);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2662:{NFSU2_TR(0x5d2662);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2663:{NFSU2_TR(0x5d2663);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2664:{NFSU2_TR(0x5d2664);
u8 U[4];
w4(U+0,u32(0x80000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2669:{NFSU2_TR(0x5d2669);
u8 U[4];
w4(U+0,u32(0x78e8f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d266e:{NFSU2_TR(0x5d266e);
u8 U[4];
w4(U+0,u32(0x7a458cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2673:{NFSU2_TR(0x5d2673);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2674:{NFSU2_TR(0x5d2674);
u8 U[4];
__builtin_memmove((U+0),gp(0x78334c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d267aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d267a:L5d267a:{c.instructions+=3;NFSU2_TR(0x5d267a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d267b:{NFSU2_TR(0x5d267b);
__builtin_memmove(gp(0x870990),(R+0),4);
}
B5d2680:{NFSU2_TR(0x5d2680);
u8 U[4];
__builtin_memmove((U+0),gp(0x783350),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2686ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d2686:L5d2686:{c.instructions+=2;NFSU2_TR(0x5d2686);
u8 U[14];
__builtin_memmove((U+6),gp(0x87098c),4);
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
B5d268c:{NFSU2_TR(0x5d268c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d269c;}}
}
B5d268e:L5d268e:{c.instructions+=2;NFSU2_TR(0x5d268e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d268f:{NFSU2_TR(0x5d268f);
u8 U[4];
__builtin_memmove((U+0),gp(0x783354),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2695ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d2695:L5d2695:{c.instructions+=2;NFSU2_TR(0x5d2695);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2696:{NFSU2_TR(0x5d2696);
u8 U[4];
__builtin_memmove((U+0),gp(0x78330c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d269cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d269c:L5d269c:{c.instructions+=3;NFSU2_TR(0x5d269c);
__builtin_memmove((R+0),gp(0x870990),4);
}
B5d26a1:{NFSU2_TR(0x5d26a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d26a2:{NFSU2_TR(0x5d26a2);
u8 U[4];
__builtin_memmove((U+0),gp(0x783358),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d26a8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d26a8:L5d26a8:{c.instructions+=3;NFSU2_TR(0x5d26a8);
__builtin_memmove((R+4),gp(0x870990),4);
}
B5d26ae:{NFSU2_TR(0x5d26ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d26af:{NFSU2_TR(0x5d26af);
u8 U[4];
__builtin_memmove((U+0),gp(0x78335c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d26b5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d26b5:L5d26b5:{c.instructions+=4;NFSU2_TR(0x5d26b5);
__builtin_memmove((R+8),gp(0x870990),4);
}
B5d26bb:{NFSU2_TR(0x5d26bb);
u8 U[4];
w4(U+0,u32(0x86e754ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d26c0:{NFSU2_TR(0x5d26c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d26c1:{NFSU2_TR(0x5d26c1);
u8 U[4];
__builtin_memmove((U+0),gp(0x783388),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d26c7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d26c7:L5d26c7:{c.instructions+=4;NFSU2_TR(0x5d26c7);
__builtin_memmove((R+0),gp(0x870990),4);
}
B5d26cc:{NFSU2_TR(0x5d26cc);
u8 U[4];
w4(U+0,u32(0x86b790ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d26d1:{NFSU2_TR(0x5d26d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d26d2:{NFSU2_TR(0x5d26d2);
u8 U[4];
__builtin_memmove((U+0),gp(0x783384),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d26d8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d26d8:L5d26d8:{c.instructions+=8;NFSU2_TR(0x5d26d8);
__builtin_memmove((R+0),gp(0x870970),4);
}
B5d26dd:{NFSU2_TR(0x5d26dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d26df:{NFSU2_TR(0x5d26df);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d26e3:{NFSU2_TR(0x5d26e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d26e4:{NFSU2_TR(0x5d26e4);
__builtin_memmove((R+8),gp(0x8709ac),4);
}
B5d26ea:{NFSU2_TR(0x5d26ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d26eb:{NFSU2_TR(0x5d26eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d26ec:{NFSU2_TR(0x5d26ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d26efull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d26ef:L5d26ef:{c.instructions+=12;NFSU2_TR(0x5d26ef);
__builtin_memmove((R+8),gp(0x8709ac),4);
}
B5d26f5:{NFSU2_TR(0x5d26f5);
__builtin_memmove((R+0),gp(0x870970),4);
}
B5d26fa:{NFSU2_TR(0x5d26fa);
u8 U[4];
w4(U+0,u32(0x876520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d26ff:{NFSU2_TR(0x5d26ff);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2701:{NFSU2_TR(0x5d2701);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2702:{NFSU2_TR(0x5d2702);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2704:{NFSU2_TR(0x5d2704);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2706:{NFSU2_TR(0x5d2706);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2707:{NFSU2_TR(0x5d2707);
s4(0x7fee68,u32(0x15ull));
}
B5d2711:{NFSU2_TR(0x5d2711);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d2713:{NFSU2_TR(0x5d2713);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2714:{NFSU2_TR(0x5d2714);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2717ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2717:L5d2717:{c.instructions+=6;NFSU2_TR(0x5d2717);
__builtin_memmove((R+4),gp(0x876520),4);
}
B5d271d:{NFSU2_TR(0x5d271d);
__builtin_memmove((R+0),gp(0x86c548),4);
}
B5d2722:{NFSU2_TR(0x5d2722);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5d2723:{NFSU2_TR(0x5d2723);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1002ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d2728:{NFSU2_TR(0x5d2728);
__builtin_memmove(gp(0x876520),(R+4),4);
}
B5d272e:{NFSU2_TR(0x5d272e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d273f;}}
}
B5d2730:L5d2730:{c.instructions+=1;NFSU2_TR(0x5d2730);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2735ull));
TAIL_STATIC(0x5bf5a0u,5bf);
}
B5d2735:L5d2735:{c.instructions+=2;NFSU2_TR(0x5d2735);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d2737:{NFSU2_TR(0x5d2737);
if(r1(R+518)){{goto L5d273f;}}
}
B5d2739:L5d2739:{c.instructions+=1;NFSU2_TR(0x5d2739);
__builtin_memmove(gp(0x876520),(R+24),4);
}
B5d273f:L5d273f:{c.instructions+=3;NFSU2_TR(0x5d273f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2740:{NFSU2_TR(0x5d2740);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2741:{NFSU2_TR(0x5d2741);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2746ull));
TAIL_STATIC(0x5b9a60u,5b9);
}
B5d2746:L5d2746:{c.instructions+=2;NFSU2_TR(0x5d2746);
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
B5d2749:{NFSU2_TR(0x5d2749);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d274eull));
TAIL_STATIC(0x5b9b70u,5b9);
}
B5d274e:L5d274e:{c.instructions+=2;NFSU2_TR(0x5d274e);
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
B5d2750:{NFSU2_TR(0x5d2750);
if(r1(R+518)){{goto L5d277b;}}
}
B5d2752:L5d2752:{c.instructions+=2;NFSU2_TR(0x5d2752);
u8 U[14];
__builtin_memmove((U+6),gp(0x870d08),4);
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
B5d2758:{NFSU2_TR(0x5d2758);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d277b;}}
}
B5d275a:L5d275a:{c.instructions+=6;NFSU2_TR(0x5d275a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d275b:{NFSU2_TR(0x5d275b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d275c:{NFSU2_TR(0x5d275c);
__builtin_memmove(gp(0x870d08),(R+24),4);
}
B5d2762:{NFSU2_TR(0x5d2762);
__builtin_memmove(gp(0x876520),(R+24),4);
}
B5d2768:{NFSU2_TR(0x5d2768);
if(r4(MODV+28)){goto B5d276e;}
__builtin_memmove(gp(0x870d1c),(R+24),4);
}
B5d276e:{NFSU2_TR(0x5d276e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2773ull));
TAIL_STATIC(0x5b9a60u,5b9);
}
B5d2773:L5d2773:{c.instructions+=2;NFSU2_TR(0x5d2773);
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
B5d2776:{NFSU2_TR(0x5d2776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d277bull));
TAIL_STATIC(0x5b9b70u,5b9);
}
B5d277b:L5d277b:{c.instructions+=4;NFSU2_TR(0x5d277b);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5d2780:{NFSU2_TR(0x5d2780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d2782:{NFSU2_TR(0x5d2782);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2783:{NFSU2_TR(0x5d2783);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2786ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2786:L5d2786:{c.instructions+=4;NFSU2_TR(0x5d2786);
__builtin_memmove((R+8),gp(0x870990),4);
}
B5d278c:{NFSU2_TR(0x5d278c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d278e:{NFSU2_TR(0x5d278e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d278f:{NFSU2_TR(0x5d278f);
u8 U[4];
__builtin_memmove((U+0),gp(0x783360),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2795ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d2795:L5d2795:{c.instructions+=5;NFSU2_TR(0x5d2795);
__builtin_memmove((R+0),gp(0x870990),4);
}
B5d279a:{NFSU2_TR(0x5d279a);
u8 U[4];
w4(U+0,u32(0x10000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d279f:{NFSU2_TR(0x5d279f);
u8 U[4];
w4(U+0,u32(0xfffffff0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d27a1:{NFSU2_TR(0x5d27a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d27a2:{NFSU2_TR(0x5d27a2);
u8 U[4];
__builtin_memmove((U+0),gp(0x783364),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d27a8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d27a8:L5d27a8:{c.instructions+=1;NFSU2_TR(0x5d27a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d27adull));
TAIL_STATIC(0x5b9750u,5b9);
}
B5d27ad:L5d27ad:{c.instructions+=1;NFSU2_TR(0x5d27ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d27b2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d21f0u);}goto L5d21f0;}
}
B5d27b2:L5d27b2:{c.instructions+=1;NFSU2_TR(0x5d27b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d27b7ull));
TAIL_STATIC(0x5ced60u,5ce);
}
B5d27b7:L5d27b7:{c.instructions+=1;NFSU2_TR(0x5d27b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d27bcull));
TAIL_STATIC(0x5be690u,5be);
}
B5d27bc:L5d27bc:{c.instructions+=1;NFSU2_TR(0x5d27bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d27c1ull));
TAIL_STATIC(0x5bcff0u,5bc);
}
B5d27c1:L5d27c1:{c.instructions+=1;NFSU2_TR(0x5d27c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d27c6ull));
TAIL_STATIC(0x5ba780u,5ba);
}
B5d27c6:L5d27c6:{c.instructions+=4;NFSU2_TR(0x5d27c6);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5d27cb:{NFSU2_TR(0x5d27cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d27cd:{NFSU2_TR(0x5d27cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d27ce:{NFSU2_TR(0x5d27ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d27d1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d27d1:L5d27d1:{c.instructions+=8;NFSU2_TR(0x5d27d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d27d5:{NFSU2_TR(0x5d27d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d27d6:{NFSU2_TR(0x5d27d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d27da:{NFSU2_TR(0x5d27da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d27db:{NFSU2_TR(0x5d27db);
w4(R+4,u32(0x86b7a4ull));
}
B5d27e0:{NFSU2_TR(0x5d27e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3e8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d27e8:{NFSU2_TR(0x5d27e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d27ec:{NFSU2_TR(0x5d27ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d27f1ull));
TAIL_STATIC(0x5bb220u,5bb);
}
B5d27f1:L5d27f1:{c.instructions+=3;NFSU2_TR(0x5d27f1);
__builtin_memmove((R+0),gp(0x870758),4);
}
B5d27f6:{NFSU2_TR(0x5d27f6);
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
B5d27f8:{NFSU2_TR(0x5d27f8);
if(r1(R+518)){{goto L5d2806;}}
}
B5d27fa:L5d27fa:{c.instructions+=3;NFSU2_TR(0x5d27fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d27fc:{NFSU2_TR(0x5d27fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d27fd:{NFSU2_TR(0x5d27fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2800ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2800:L5d2800:{c.instructions+=1;NFSU2_TR(0x5d2800);
__builtin_memmove(gp(0x870758),(R+24),4);
}
B5d2806:L5d2806:{c.instructions+=6;NFSU2_TR(0x5d2806);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2807:{NFSU2_TR(0x5d2807);
u8 U[4];
w4(U+0,u32(0x870758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d280c:{NFSU2_TR(0x5d280c);
u8 U[4];
w4(U+0,u32(0x7bfda0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2811:{NFSU2_TR(0x5d2811);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2816:{NFSU2_TR(0x5d2816);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2817:{NFSU2_TR(0x5d2817);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2819ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d2819:L5d2819:{c.instructions+=2;NFSU2_TR(0x5d2819);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d281a:{NFSU2_TR(0x5d281a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d281full));
TAIL_STATIC(0x6d7100u,6d7);
}
B5d281f:L5d281f:{c.instructions+=2;NFSU2_TR(0x5d281f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d2821:{NFSU2_TR(0x5d2821);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d2829;}}
}
B5d2823:L5d2823:{c.instructions+=1;NFSU2_TR(0x5d2823);
__builtin_memmove(gp(0x870758),(R+24),4);
}
B5d2829:L5d2829:{c.instructions+=2;NFSU2_TR(0x5d2829);
w4(R+4,u32(0x8763d0ull));
}
B5d282e:{NFSU2_TR(0x5d282e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2833ull));
TAIL_STATIC(0x5bf6e0u,5bf);
}
B5d2833:L5d2833:{c.instructions+=1;NFSU2_TR(0x5d2833);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2838ull));
TAIL_STATIC(0x5bdfb0u,5bd);
}
B5d2838:L5d2838:{c.instructions+=7;NFSU2_TR(0x5d2838);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d2839:{NFSU2_TR(0x5d2839);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d283a:{NFSU2_TR(0x5d283a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d283b:{NFSU2_TR(0x5d283b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d283d:{NFSU2_TR(0x5d283d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d283e:{NFSU2_TR(0x5d283e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d2841:{NFSU2_TR(0x5d2841);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d2850:L5d2850:{c.instructions+=7;NFSU2_TR(0x5d2850);
__builtin_memmove((R+0),gp(0x8709d1),1);
}
B5d2855:{NFSU2_TR(0x5d2855);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5d2858:{NFSU2_TR(0x5d2858);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2859:{NFSU2_TR(0x5d2859);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5d285b:{NFSU2_TR(0x5d285b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d285d:{NFSU2_TR(0x5d285d);
__builtin_memmove(gp(0x870910),(R+28),4);
}
B5d2863:{NFSU2_TR(0x5d2863);
if(r1(R+518)){{goto L5d2897;}}
}
B5d2865:L5d2865:{c.instructions+=6;NFSU2_TR(0x5d2865);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d2869:{NFSU2_TR(0x5d2869);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d286a:{NFSU2_TR(0x5d286a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d286e:{NFSU2_TR(0x5d286e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d286f:{NFSU2_TR(0x5d286f);
w4(R+4,u32(0x8718b0ull));
}
B5d2874:{NFSU2_TR(0x5d2874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2879ull));
TAIL_STATIC(0x5bf610u,5bf);
}
B5d2879:L5d2879:{c.instructions+=5;NFSU2_TR(0x5d2879);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d287d:{NFSU2_TR(0x5d287d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d2881:{NFSU2_TR(0x5d2881);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2882:{NFSU2_TR(0x5d2882);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2883:{NFSU2_TR(0x5d2883);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2888ull));
TAIL_STATIC(0x5b9a60u,5b9);
}
B5d2888:L5d2888:{c.instructions+=2;NFSU2_TR(0x5d2888);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d288b:{NFSU2_TR(0x5d288b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2890ull));
TAIL_STATIC(0x5d1c40u,5d1);
}
B5d2890:L5d2890:{c.instructions+=1;NFSU2_TR(0x5d2890);
s1(0x8709d1,u8(0x0ull));
}
B5d2897:L5d2897:{c.instructions+=5;NFSU2_TR(0x5d2897);
u8 U[8];
__builtin_memmove((U+0),gp(0x870840),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d289d:{NFSU2_TR(0x5d289d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d289e:{NFSU2_TR(0x5d289e);
__builtin_memmove(gp(0x870838),(R+28),4);
}
B5d28a4:{NFSU2_TR(0x5d28a4);
w4(R+24,u32(0x2ull));
}
B5d28a9:{NFSU2_TR(0x5d28a9);
if(r1(R+518)){{goto L5d28b9;}}
}
B5d28ab:L5d28ab:{c.instructions+=3;NFSU2_TR(0x5d28ab);
__builtin_memmove(gp(0x870838),(R+24),4);
}
B5d28b1:{NFSU2_TR(0x5d28b1);
__builtin_memmove(gp(0x87083c),(R+28),4);
}
B5d28b7:{NFSU2_TR(0x5d28b7);
{goto L5d28cb;}
}
B5d28b9:L5d28b9:{c.instructions+=2;NFSU2_TR(0x5d28b9);
u8 U[8];
__builtin_memmove((U+0),gp(0x87083c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d28bf:{NFSU2_TR(0x5d28bf);
if(r1(R+518)){{goto L5d28cb;}}
}
B5d28c1:L5d28c1:{c.instructions+=1;NFSU2_TR(0x5d28c1);
s4(0x870838,u32(0x1ull));
}
B5d28cb:L5d28cb:{c.instructions+=1;NFSU2_TR(0x5d28cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d28d0ull));
TAIL_STATIC(0x5c21e0u,5c2);
}
B5d28d0:L5d28d0:{c.instructions+=3;NFSU2_TR(0x5d28d0);
__builtin_memmove((R+0),gp(0x870cf8),4);
}
B5d28d5:{NFSU2_TR(0x5d28d5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d28d7:{NFSU2_TR(0x5d28d7);
if(r1(R+518)){{goto L5d28ea;}}
}
B5d28d9:L5d28d9:{c.instructions+=2;NFSU2_TR(0x5d28d9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d28da:{NFSU2_TR(0x5d28da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d28f9;}}
}
B5d28dc:L5d28dc:{c.instructions+=3;NFSU2_TR(0x5d28dc);
__builtin_memmove(gp(0x8a1c10),(R+28),4);
}
B5d28e2:{NFSU2_TR(0x5d28e2);
__builtin_memmove(gp(0x8a1c14),(R+28),4);
}
B5d28e8:{NFSU2_TR(0x5d28e8);
{goto L5d28f9;}
}
B5d28ea:L5d28ea:{c.instructions+=3;NFSU2_TR(0x5d28ea);
w4(R+0,u32(0x1ull));
}
B5d28ef:{NFSU2_TR(0x5d28ef);
__builtin_memmove(gp(0x8a1c10),(R+0),4);
}
B5d28f4:{NFSU2_TR(0x5d28f4);
__builtin_memmove(gp(0x8a1c14),(R+0),4);
}
B5d28f9:L5d28f9:{c.instructions+=3;NFSU2_TR(0x5d28f9);
__builtin_memmove((R+0),gp(0x870cf4),4);
}
B5d28fe:{NFSU2_TR(0x5d28fe);
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
B5d2901:{NFSU2_TR(0x5d2901);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5d2918;}}
}
B5d2903:L5d2903:{c.instructions+=1;NFSU2_TR(0x5d2903);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5d2ca8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d290a:L5d290a:{c.instructions+=2;NFSU2_TR(0x5d290a);
__builtin_memmove(gp(0x883ddc),(R+24),4);
}
B5d2910:{NFSU2_TR(0x5d2910);
{goto L5d2918;}
}
B5d2912:L5d2912:{c.instructions+=1;NFSU2_TR(0x5d2912);
__builtin_memmove(gp(0x883ddc),(R+28),4);
}
B5d2918:L5d2918:{c.instructions+=2;NFSU2_TR(0x5d2918);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d291f:{NFSU2_TR(0x5d291f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d2927;}}
}
B5d2921:L5d2921:{c.instructions+=1;NFSU2_TR(0x5d2921);
__builtin_memmove(gp(0x870794),(R+28),4);
}
B5d2927:L5d2927:{c.instructions+=2;NFSU2_TR(0x5d2927);
u8 U[14];
__builtin_memmove((U+6),gp(0x870cb8),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d292d:{NFSU2_TR(0x5d292d);
if(r1(R+518)){{goto L5d2934;}}
}
B5d292f:L5d292f:{c.instructions+=1;NFSU2_TR(0x5d292f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2934ull));
TAIL_STATIC(0x61ab50u,61a);
}
B5d2934:L5d2934:{c.instructions+=1;NFSU2_TR(0x5d2934);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2939ull));
TAIL_STATIC(0x4022c0u,402);
}
B5d2939:L5d2939:{c.instructions+=2;NFSU2_TR(0x5d2939);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d293a:{NFSU2_TR(0x5d293a);
__builtin_memmove((R+12),(R+12),4);
}
B5d2940:L5d2940:{c.instructions+=2;NFSU2_TR(0x5d2940);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2941:{NFSU2_TR(0x5d2941);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2946ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5d2946:L5d2946:{c.instructions+=5;NFSU2_TR(0x5d2946);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d2949:{NFSU2_TR(0x5d2949);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d294c:{NFSU2_TR(0x5d294c);
__builtin_memmove((R+24),(R+0),4);
}
B5d294e:{NFSU2_TR(0x5d294e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5d2950:{NFSU2_TR(0x5d2950);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d295d;}}
}
B5d2952:L5d2952:{c.instructions+=3;NFSU2_TR(0x5d2952);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2954:{NFSU2_TR(0x5d2954);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2955:{NFSU2_TR(0x5d2955);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d295aull));
TAIL_STATIC(0x5c2ae0u,5c2);
}
B5d295a:L5d295a:{c.instructions+=1;NFSU2_TR(0x5d295a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d295d:L5d295d:{c.instructions+=3;NFSU2_TR(0x5d295d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d2960:{NFSU2_TR(0x5d2960);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d2962:{NFSU2_TR(0x5d2962);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d2969;}}
}
B5d2964:L5d2964:{c.instructions+=2;NFSU2_TR(0x5d2964);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d2967:{NFSU2_TR(0x5d2967);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d2977;}}
}
B5d2969:L5d2969:{c.instructions+=6;NFSU2_TR(0x5d2969);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d296b:{NFSU2_TR(0x5d296b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d296d:{NFSU2_TR(0x5d296d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d296f:{NFSU2_TR(0x5d296f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2970:{NFSU2_TR(0x5d2970);
__builtin_memmove((R+4),(R+12),4);
}
B5d2972:{NFSU2_TR(0x5d2972);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2977ull));
TAIL_STATIC(0x5c7ec0u,5c7);
}
B5d2977:L5d2977:{c.instructions+=3;NFSU2_TR(0x5d2977);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5d2978:{NFSU2_TR(0x5d2978);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5d297b:{NFSU2_TR(0x5d297b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d2940u);}goto L5d2940;}}
}
B5d297d:L5d297d:{c.instructions+=1;NFSU2_TR(0x5d297d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2982ull));
TAIL_STATIC(0x5c2430u,5c2);
}
B5d2982:L5d2982:{c.instructions+=5;NFSU2_TR(0x5d2982);
__builtin_memmove((R+0),gp(0x870cf0),4);
}
B5d2987:{NFSU2_TR(0x5d2987);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5d2989:{NFSU2_TR(0x5d2989);
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
B5d298b:{NFSU2_TR(0x5d298b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d298c:{NFSU2_TR(0x5d298c);
if(r1(R+518)){{goto L5d29d1;}}
}
B5d298e:L5d298e:{c.instructions+=2;NFSU2_TR(0x5d298e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2990:{NFSU2_TR(0x5d2990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2995ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5d2995:L5d2995:{c.instructions+=11;NFSU2_TR(0x5d2995);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d2998:{NFSU2_TR(0x5d2998);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d299e:{NFSU2_TR(0x5d299e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d29a4:{NFSU2_TR(0x5d29a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d29a8:{NFSU2_TR(0x5d29a8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d29ac:{NFSU2_TR(0x5d29ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d29af:{NFSU2_TR(0x5d29af);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d29b5:{NFSU2_TR(0x5d29b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d29b9:{NFSU2_TR(0x5d29b9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d29bb:{NFSU2_TR(0x5d29bb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d29be:{NFSU2_TR(0x5d29be);
if(r1(R+514)){{goto L5d29dd;}}
}
B5d29c0:L5d29c0:{c.instructions+=5;NFSU2_TR(0x5d29c0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d29c4:{NFSU2_TR(0x5d29c4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d29ca:{NFSU2_TR(0x5d29ca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d29cc:{NFSU2_TR(0x5d29cc);
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
B5d29cf:{NFSU2_TR(0x5d29cf);
if(r1(R+514)){{goto L5d29dd;}}
}
B5d29d1:L5d29d1:{c.instructions+=2;NFSU2_TR(0x5d29d1);
s1(0x8707cc,u8(0x0ull));
}
B5d29d8:{NFSU2_TR(0x5d29d8);
{goto L5d2ae6;}
}
B5d29dd:L5d29dd:{c.instructions+=5;NFSU2_TR(0x5d29dd);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d29e1:{NFSU2_TR(0x5d29e1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d29e7:{NFSU2_TR(0x5d29e7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d29e9:{NFSU2_TR(0x5d29e9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d29ec:{NFSU2_TR(0x5d29ec);
if(r1(R+514)){{goto L5d29f6;}}
}
B5d29ee:L5d29ee:{c.instructions+=1;NFSU2_TR(0x5d29ee);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d29f6:L5d29f6:{c.instructions+=5;NFSU2_TR(0x5d29f6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d29fa:{NFSU2_TR(0x5d29fa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d2a00:{NFSU2_TR(0x5d2a00);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d2a02:{NFSU2_TR(0x5d2a02);
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
B5d2a05:{NFSU2_TR(0x5d2a05);
if(r1(R+514)){{goto L5d2a0f;}}
}
B5d2a07:L5d2a07:{c.instructions+=1;NFSU2_TR(0x5d2a07);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x41000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d2a0f:L5d2a0f:{c.instructions+=10;NFSU2_TR(0x5d2a0f);
__builtin_memmove((R+4),gp(0x86eb4c),4);
}
B5d2a15:{NFSU2_TR(0x5d2a15);
s1(0x8707cc,u8(0x1ull));
}
B5d2a1c:{NFSU2_TR(0x5d2a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d2a1f:{NFSU2_TR(0x5d2a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d2a22:{NFSU2_TR(0x5d2a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d2a28:{NFSU2_TR(0x5d2a28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d2a2a:{NFSU2_TR(0x5d2a2a);
u8 U[4];
w4(U+0,u32(0x3a800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2a2f:{NFSU2_TR(0x5d2a2f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2a30:{NFSU2_TR(0x5d2a30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2a31:{NFSU2_TR(0x5d2a31);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2a34ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2a34:L5d2a34:{c.instructions+=20;NFSU2_TR(0x5d2a34);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d2a38:{NFSU2_TR(0x5d2a38);
{u32 ea_=u32(u32(8013280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2a3e:{NFSU2_TR(0x5d2a3e);
__builtin_memmove((R+4),gp(0x86eb70),4);
}
B5d2a44:{NFSU2_TR(0x5d2a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d2a47:{NFSU2_TR(0x5d2a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d2a4a:{NFSU2_TR(0x5d2a4a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2a4e:{NFSU2_TR(0x5d2a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x204ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d2a54:{NFSU2_TR(0x5d2a54);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d2a58:{NFSU2_TR(0x5d2a58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d2a5a:{NFSU2_TR(0x5d2a5a);
{u32 ea_=u32(u32(7919972u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2a60:{NFSU2_TR(0x5d2a60);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2a64:{NFSU2_TR(0x5d2a64);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d2a68:{NFSU2_TR(0x5d2a68);
{u32 ea_=u32(u32(8013272u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B5d2a6e:{NFSU2_TR(0x5d2a6e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5d2a74:{NFSU2_TR(0x5d2a74);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2a78:{NFSU2_TR(0x5d2a78);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d2a7c:{NFSU2_TR(0x5d2a7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2a7d:{NFSU2_TR(0x5d2a7d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2a7e:{NFSU2_TR(0x5d2a7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2a7f:{NFSU2_TR(0x5d2a7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2a82ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2a82:L5d2a82:{c.instructions+=14;NFSU2_TR(0x5d2a82);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d2a86:{NFSU2_TR(0x5d2a86);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d2a8a:{NFSU2_TR(0x5d2a8a);
__builtin_memmove((R+4),gp(0x86eb70),4);
}
B5d2a90:{NFSU2_TR(0x5d2a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d2a93:{NFSU2_TR(0x5d2a93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d2a95:{NFSU2_TR(0x5d2a95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2a96:{NFSU2_TR(0x5d2a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d2a99:{NFSU2_TR(0x5d2a99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d2a9f:{NFSU2_TR(0x5d2a9f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2aa3:{NFSU2_TR(0x5d2aa3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d2aa5:{NFSU2_TR(0x5d2aa5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2aa8:{NFSU2_TR(0x5d2aa8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2aa9:{NFSU2_TR(0x5d2aa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2aaa:{NFSU2_TR(0x5d2aaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2aadull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2aad:L5d2aad:{c.instructions+=13;NFSU2_TR(0x5d2aad);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d2ab1:{NFSU2_TR(0x5d2ab1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d2ab5:{NFSU2_TR(0x5d2ab5);
__builtin_memmove((R+4),gp(0x86eb70),4);
}
B5d2abb:{NFSU2_TR(0x5d2abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d2abe:{NFSU2_TR(0x5d2abe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d2ac0:{NFSU2_TR(0x5d2ac0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2ac1:{NFSU2_TR(0x5d2ac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d2ac4:{NFSU2_TR(0x5d2ac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d2aca:{NFSU2_TR(0x5d2aca);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2ace:{NFSU2_TR(0x5d2ace);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2ad1:{NFSU2_TR(0x5d2ad1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2ad2:{NFSU2_TR(0x5d2ad2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2ad3:{NFSU2_TR(0x5d2ad3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2ad6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2ad6:L5d2ad6:{c.instructions+=4;NFSU2_TR(0x5d2ad6);
__builtin_memmove((R+0),gp(0x8707cc),1);
}
B5d2adb:{NFSU2_TR(0x5d2adb);
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
B5d2add:{NFSU2_TR(0x5d2add);
s1(0x8707cd,u8(0x1ull));
}
B5d2ae4:{NFSU2_TR(0x5d2ae4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d2aed;}}
}
B5d2ae6:L5d2ae6:{c.instructions+=1;NFSU2_TR(0x5d2ae6);
s1(0x8707cd,u8(0x0ull));
}
B5d2aed:L5d2aed:{c.instructions+=4;NFSU2_TR(0x5d2aed);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5d2af2:{NFSU2_TR(0x5d2af2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d2af4:{NFSU2_TR(0x5d2af4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2af5:{NFSU2_TR(0x5d2af5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2af8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2af8:L5d2af8:{c.instructions+=2;NFSU2_TR(0x5d2af8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x88760869ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d2afd:{NFSU2_TR(0x5d2afd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d2b04;}}
}
B5d2aff:L5d2aff:{c.instructions+=1;NFSU2_TR(0x5d2aff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2b04ull));
TAIL_STATIC(0x5d1c40u,5d1);
}
B5d2b04:L5d2b04:{c.instructions+=2;NFSU2_TR(0x5d2b04);
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
B5d2b06:{NFSU2_TR(0x5d2b06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d2b76;}}
}
B5d2b08:L5d2b08:{c.instructions+=4;NFSU2_TR(0x5d2b08);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5d2b0d:{NFSU2_TR(0x5d2b0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d2b0f:{NFSU2_TR(0x5d2b0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2b10:{NFSU2_TR(0x5d2b10);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2b16ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2b16:L5d2b16:{c.instructions+=2;NFSU2_TR(0x5d2b16);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2b18:{NFSU2_TR(0x5d2b18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2b1dull));
TAIL_STATIC(0x5cbf40u,5cb);
}
B5d2b1d:L5d2b1d:{c.instructions+=2;NFSU2_TR(0x5d2b1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d2b20:{NFSU2_TR(0x5d2b20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2b25ull));
TAIL_STATIC(0x4fe4a0u,4fe);
}
B5d2b25:L5d2b25:{c.instructions+=2;NFSU2_TR(0x5d2b25);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d2b27:{NFSU2_TR(0x5d2b27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d2b5f;}}
}
B5d2b29:L5d2b29:{c.instructions+=2;NFSU2_TR(0x5d2b29);
w4(R+24,u32(0x1ull));
}
B5d2b2e:{NFSU2_TR(0x5d2b2e);
__builtin_memmove((R+28),(R+28),4);
}
B5d2b30:L5d2b30:{c.instructions+=2;NFSU2_TR(0x5d2b30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2b31:{NFSU2_TR(0x5d2b31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2b36ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5d2b36:L5d2b36:{c.instructions+=4;NFSU2_TR(0x5d2b36);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5d2b39:{NFSU2_TR(0x5d2b39);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d2b3c:{NFSU2_TR(0x5d2b3c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d2b3e:{NFSU2_TR(0x5d2b3e);
if(r1(R+518)){{goto L5d2b47;}}
}
B5d2b40:L5d2b40:{c.instructions+=2;NFSU2_TR(0x5d2b40);
__builtin_memmove((R+4),(R+0),4);
}
B5d2b42:{NFSU2_TR(0x5d2b42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2b47ull));
TAIL_STATIC(0x48f7a0u,48f);
}
B5d2b47:L5d2b47:{c.instructions+=3;NFSU2_TR(0x5d2b47);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5d2b48:{NFSU2_TR(0x5d2b48);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d2b4b:{NFSU2_TR(0x5d2b4b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d2b30u);}goto L5d2b30;}}
}
B5d2b4d:L5d2b4d:{c.instructions+=2;NFSU2_TR(0x5d2b4d);
u8 U[8];
__builtin_memmove((U+0),gp(0x864f4c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d2b53:{NFSU2_TR(0x5d2b53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d2b5a;}}
}
B5d2b55:L5d2b55:{c.instructions+=1;NFSU2_TR(0x5d2b55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2b5aull));
TAIL_STATIC(0x5caad0u,5ca);
}
B5d2b5a:L5d2b5a:{c.instructions+=1;NFSU2_TR(0x5d2b5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2b5full));
TAIL_STATIC(0x5bc180u,5bc);
}
B5d2b5f:L5d2b5f:{c.instructions+=2;NFSU2_TR(0x5d2b5f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2b60:{NFSU2_TR(0x5d2b60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2b65ull));
TAIL_STATIC(0x5cbf40u,5cb);
}
B5d2b65:L5d2b65:{c.instructions+=5;NFSU2_TR(0x5d2b65);
if(mod_hook_table[0]){SPILL();c.pc=0x5d2b65u;mod_hook_table[0](c);SPILL();if(c.pc!=0x5d2b65u){TAIL_DYNAMIC(c.pc);}}
__builtin_memmove((R+0),gp(0x870974),4);
}
B5d2b6a:{NFSU2_TR(0x5d2b6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d2b6c:{NFSU2_TR(0x5d2b6c);
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
B5d2b6f:{NFSU2_TR(0x5d2b6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2b70:{NFSU2_TR(0x5d2b70);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2b76ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2b76:L5d2b76:{c.instructions+=1;NFSU2_TR(0x5d2b76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2b7bull));
TAIL_STATIC(0x5bcfd0u,5bc);
}
B5d2b7b:L5d2b7b:{c.instructions+=3;NFSU2_TR(0x5d2b7b);
u8 U[8];
__builtin_memmove((U+0),gp(0x870994),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d2b81:{NFSU2_TR(0x5d2b81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d2b82:{NFSU2_TR(0x5d2b82);
if(r1(R+518)){{goto L5d2b93;}}
}
B5d2b84:L5d2b84:{c.instructions+=2;NFSU2_TR(0x5d2b84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2b85:{NFSU2_TR(0x5d2b85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2b8aull));
TAIL_STATIC(0x5c2ed0u,5c2);
}
B5d2b8a:L5d2b8a:{c.instructions+=2;NFSU2_TR(0x5d2b8a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d2b8d:{NFSU2_TR(0x5d2b8d);
__builtin_memmove(gp(0x870994),(R+28),4);
}
B5d2b93:L5d2b93:{c.instructions+=1;NFSU2_TR(0x5d2b93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2b98ull));
TAIL_STATIC(0x5c32c0u,5c3);
}
B5d2b98:L5d2b98:{c.instructions+=2;NFSU2_TR(0x5d2b98);
w4(R+4,u32(0x832dacull));
}
B5d2b9d:{NFSU2_TR(0x5d2b9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2ba2ull));
TAIL_STATIC(0x488b70u,488);
}
B5d2ba2:L5d2ba2:{c.instructions+=2;NFSU2_TR(0x5d2ba2);
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
B5d2ba4:{NFSU2_TR(0x5d2ba4);
if(r1(R+518)){{goto L5d2bba;}}
}
B5d2ba6:L5d2ba6:{c.instructions+=2;NFSU2_TR(0x5d2ba6);
w4(R+4,u32(0x832dacull));
}
B5d2bab:{NFSU2_TR(0x5d2bab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2bb0ull));
TAIL_STATIC(0x5c3120u,5c3);
}
B5d2bb0:L5d2bb0:{c.instructions+=2;NFSU2_TR(0x5d2bb0);
w4(R+4,u32(0x832dacull));
}
B5d2bb5:{NFSU2_TR(0x5d2bb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2bbaull));
TAIL_STATIC(0x488b60u,488);
}
B5d2bba:L5d2bba:{c.instructions+=8;NFSU2_TR(0x5d2bba);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5d2bbf:{NFSU2_TR(0x5d2bbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d2bc1:{NFSU2_TR(0x5d2bc1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2bc2:{NFSU2_TR(0x5d2bc2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2bc3:{NFSU2_TR(0x5d2bc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2bc4:{NFSU2_TR(0x5d2bc4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2bc5:{NFSU2_TR(0x5d2bc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2bc6:{NFSU2_TR(0x5d2bc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2bc9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2bc9:L5d2bc9:{c.instructions+=2;NFSU2_TR(0x5d2bc9);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x88760868ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x88760868ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x88760868ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d2bce:{NFSU2_TR(0x5d2bce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d2be7;}}
}
B5d2bd0:L5d2bd0:{c.instructions+=4;NFSU2_TR(0x5d2bd0);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5d2bd5:{NFSU2_TR(0x5d2bd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d2bd7:{NFSU2_TR(0x5d2bd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2bd8:{NFSU2_TR(0x5d2bd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2bdbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2bdb:L5d2bdb:{c.instructions+=2;NFSU2_TR(0x5d2bdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x88760869ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d2be0:{NFSU2_TR(0x5d2be0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d2be7;}}
}
B5d2be2:L5d2be2:{c.instructions+=1;NFSU2_TR(0x5d2be2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2be7ull));
TAIL_STATIC(0x5d1c40u,5d1);
}
B5d2be7:L5d2be7:{c.instructions+=2;NFSU2_TR(0x5d2be7);
u8 U[14];
__builtin_memmove((U+6),gp(0x8768ac),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d2bed:{NFSU2_TR(0x5d2bed);
if(r1(R+518)){{goto L5d2bfa;}}
}
B5d2bef:L5d2bef:{c.instructions+=1;NFSU2_TR(0x5d2bef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2bf4ull));
TAIL_STATIC(0x4022c0u,402);
}
B5d2bf4:L5d2bf4:{c.instructions+=1;NFSU2_TR(0x5d2bf4);
__builtin_memmove(gp(0x8768ac),(R+28),4);
}
B5d2bfa:L5d2bfa:{c.instructions+=2;NFSU2_TR(0x5d2bfa);
u8 U[14];
__builtin_memmove((U+6),gp(0x8707c4),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d2c00:{NFSU2_TR(0x5d2c00);
if(r1(R+518)){{goto L5d2c0d;}}
}
B5d2c02:L5d2c02:{c.instructions+=1;NFSU2_TR(0x5d2c02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2c07ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d21f0u);}goto L5d21f0;}
}
B5d2c07:L5d2c07:{c.instructions+=1;NFSU2_TR(0x5d2c07);
__builtin_memmove(gp(0x8707c4),(R+28),4);
}
B5d2c0d:L5d2c0d:{c.instructions+=3;NFSU2_TR(0x5d2c0d);
u8 U[4];
__builtin_memmove((U+0),(MODV+60),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2c12:{NFSU2_TR(0x5d2c12);
w4(R+4,u32(0x835860ull));
}
B5d2c17:{NFSU2_TR(0x5d2c17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2c1cull));
TAIL_STATIC(0x492e10u,492);
}
B5d2c1c:L5d2c1c:{c.instructions+=1;NFSU2_TR(0x5d2c1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2c21ull));
TAIL_STATIC(0x490020u,490);
}
B5d2c21:L5d2c21:{c.instructions+=1;NFSU2_TR(0x5d2c21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2c26ull));
TAIL_STATIC(0x5dbe80u,5db);
}
B5d2c26:L5d2c26:{c.instructions+=10;NFSU2_TR(0x5d2c26);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5d2c2b:{NFSU2_TR(0x5d2c2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d2c2d:{NFSU2_TR(0x5d2c2d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2c2e:{NFSU2_TR(0x5d2c2e);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2c33:{NFSU2_TR(0x5d2c33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2c34:{NFSU2_TR(0x5d2c34);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2c36:{NFSU2_TR(0x5d2c36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2c37:{NFSU2_TR(0x5d2c37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2c38:{NFSU2_TR(0x5d2c38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2c39:{NFSU2_TR(0x5d2c39);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2c3full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d2c3f:L5d2c3f:{c.instructions+=1;NFSU2_TR(0x5d2c3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2c44ull));
TAIL_STATIC(0x488800u,488);
}
B5d2c44:L5d2c44:{c.instructions+=1;NFSU2_TR(0x5d2c44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2c49ull));
TAIL_STATIC(0x4022c0u,402);
}
B5d2c49:L5d2c49:{c.instructions+=6;NFSU2_TR(0x5d2c49);
__builtin_memmove((R+0),gp(0x870818),4);
}
B5d2c4e:{NFSU2_TR(0x5d2c4e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d2c4f:{NFSU2_TR(0x5d2c4f);
__builtin_memmove(gp(0x87092c),(R+28),4);
}
B5d2c55:{NFSU2_TR(0x5d2c55);
__builtin_memmove(gp(0x870930),(R+28),4);
}
B5d2c5b:{NFSU2_TR(0x5d2c5b);
__builtin_memmove(gp(0x870818),(R+0),4);
}
B5d2c60:{NFSU2_TR(0x5d2c60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2c65ull));
TAIL_STATIC(0x5c0f90u,5c0);
}
B5d2c65:L5d2c65:{c.instructions+=1;NFSU2_TR(0x5d2c65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2c6aull));
TAIL_STATIC(0x5ca690u,5ca);
}
B5d2c6a:L5d2c6a:{c.instructions+=1;NFSU2_TR(0x5d2c6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2c6full));
TAIL_STATIC(0x5cfbf0u,5cf);
}
B5d2c6f:L5d2c6f:{c.instructions+=4;NFSU2_TR(0x5d2c6f);
__builtin_memmove((R+4),gp(0x870760),4);
}
B5d2c75:{NFSU2_TR(0x5d2c75);
s1(0x870784,u8(0x0ull));
}
B5d2c7c:{NFSU2_TR(0x5d2c7c);
s1(0x870785,u8(0x0ull));
}
B5d2c83:{NFSU2_TR(0x5d2c83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2c88ull));
TAIL_STATIC(0x5cfa10u,5cf);
}
B5d2c88:L5d2c88:{c.instructions+=3;NFSU2_TR(0x5d2c88);
w4(R+4,u32(0x8763d0ull));
}
B5d2c8d:{NFSU2_TR(0x5d2c8d);
s4(0x87077c,u32(0x1ull));
}
B5d2c97:{NFSU2_TR(0x5d2c97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2c9cull));
TAIL_STATIC(0x5bf860u,5bf);
}
B5d2c9c:L5d2c9c:{c.instructions+=3;NFSU2_TR(0x5d2c9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d2c9d:{NFSU2_TR(0x5d2c9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5d2ca0:{NFSU2_TR(0x5d2ca0);
TAIL_STATIC(0x5c0940u,5c0);
}
B5d2cc0:L5d2cc0:{c.instructions+=90;NFSU2_TR(0x5d2cc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5d2cc3:{NFSU2_TR(0x5d2cc3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d2cc7:{NFSU2_TR(0x5d2cc7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d2ccb:{NFSU2_TR(0x5d2ccb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d2cce:{NFSU2_TR(0x5d2cce);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d2cd1:{NFSU2_TR(0x5d2cd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5d2cd5:{NFSU2_TR(0x5d2cd5);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d2cd9:{NFSU2_TR(0x5d2cd9);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5d2cdb:{NFSU2_TR(0x5d2cdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d2cdf:{NFSU2_TR(0x5d2cdf);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d2ce2:{NFSU2_TR(0x5d2ce2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2ce6:{NFSU2_TR(0x5d2ce6);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d2cea:{NFSU2_TR(0x5d2cea);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d2ced:{NFSU2_TR(0x5d2ced);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2cf1:{NFSU2_TR(0x5d2cf1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2cf2:{NFSU2_TR(0x5d2cf2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d2cf6:{NFSU2_TR(0x5d2cf6);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2cfc:{NFSU2_TR(0x5d2cfc);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2cfe:{NFSU2_TR(0x5d2cfe);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d2d02:{NFSU2_TR(0x5d2d02);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2d08:{NFSU2_TR(0x5d2d08);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2d0b:{NFSU2_TR(0x5d2d0b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d2d0f:{NFSU2_TR(0x5d2d0f);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2d15:{NFSU2_TR(0x5d2d15);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2d18:{NFSU2_TR(0x5d2d18);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d2d1c:{NFSU2_TR(0x5d2d1c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5d2d20:{NFSU2_TR(0x5d2d20);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d2d23:{NFSU2_TR(0x5d2d23);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2d27:{NFSU2_TR(0x5d2d27);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d2d2b:{NFSU2_TR(0x5d2d2b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d2d2e:{NFSU2_TR(0x5d2d2e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5d2d30:{NFSU2_TR(0x5d2d30);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d2d33:{NFSU2_TR(0x5d2d33);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2d37:{NFSU2_TR(0x5d2d37);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d2d3b:{NFSU2_TR(0x5d2d3b);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d2d3e:{NFSU2_TR(0x5d2d3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2d42:{NFSU2_TR(0x5d2d42);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d2d46:{NFSU2_TR(0x5d2d46);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2d4c:{NFSU2_TR(0x5d2d4c);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2d4f:{NFSU2_TR(0x5d2d4f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d2d53:{NFSU2_TR(0x5d2d53);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2d59:{NFSU2_TR(0x5d2d59);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2d5c:{NFSU2_TR(0x5d2d5c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d2d60:{NFSU2_TR(0x5d2d60);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2d66:{NFSU2_TR(0x5d2d66);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2d69:{NFSU2_TR(0x5d2d69);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d2d6d:{NFSU2_TR(0x5d2d6d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5d2d71:{NFSU2_TR(0x5d2d71);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d2d74:{NFSU2_TR(0x5d2d74);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2d78:{NFSU2_TR(0x5d2d78);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d2d7c:{NFSU2_TR(0x5d2d7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d2d7f:{NFSU2_TR(0x5d2d7f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5d2d81:{NFSU2_TR(0x5d2d81);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d2d84:{NFSU2_TR(0x5d2d84);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2d88:{NFSU2_TR(0x5d2d88);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d2d8c:{NFSU2_TR(0x5d2d8c);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d2d8f:{NFSU2_TR(0x5d2d8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2d93:{NFSU2_TR(0x5d2d93);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d2d97:{NFSU2_TR(0x5d2d97);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2d9d:{NFSU2_TR(0x5d2d9d);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2da0:{NFSU2_TR(0x5d2da0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d2da4:{NFSU2_TR(0x5d2da4);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2daa:{NFSU2_TR(0x5d2daa);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2dad:{NFSU2_TR(0x5d2dad);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d2db1:{NFSU2_TR(0x5d2db1);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2db7:{NFSU2_TR(0x5d2db7);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2dba:{NFSU2_TR(0x5d2dba);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d2dbe:{NFSU2_TR(0x5d2dbe);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5d2dc2:{NFSU2_TR(0x5d2dc2);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d2dc5:{NFSU2_TR(0x5d2dc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2dc9:{NFSU2_TR(0x5d2dc9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d2dcd:{NFSU2_TR(0x5d2dcd);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5d2dd1:{NFSU2_TR(0x5d2dd1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d2dd4:{NFSU2_TR(0x5d2dd4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5d2dd6:{NFSU2_TR(0x5d2dd6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d2dd9:{NFSU2_TR(0x5d2dd9);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5d2ddc:{NFSU2_TR(0x5d2ddc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2de0:{NFSU2_TR(0x5d2de0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2de4:{NFSU2_TR(0x5d2de4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d2de5:{NFSU2_TR(0x5d2de5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d2de9:{NFSU2_TR(0x5d2de9);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2def:{NFSU2_TR(0x5d2def);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2df2:{NFSU2_TR(0x5d2df2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d2df6:{NFSU2_TR(0x5d2df6);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2dfc:{NFSU2_TR(0x5d2dfc);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2dff:{NFSU2_TR(0x5d2dff);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d2e03:{NFSU2_TR(0x5d2e03);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2e09:{NFSU2_TR(0x5d2e09);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2e0c:{NFSU2_TR(0x5d2e0c);
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
B5d2e0f:{NFSU2_TR(0x5d2e0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d2e20:L5d2e20:{c.instructions+=5;NFSU2_TR(0x5d2e20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d2e24:{NFSU2_TR(0x5d2e24);
__builtin_memmove((R+4),gp(0x883d80),4);
}
B5d2e2a:{NFSU2_TR(0x5d2e2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2e2b:{NFSU2_TR(0x5d2e2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2e2c:{NFSU2_TR(0x5d2e2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2e31ull));
TAIL_STATIC(0x43f920u,43f);
}
B5d2e31:L5d2e31:{c.instructions+=2;NFSU2_TR(0x5d2e31);
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
B5d2e34:{NFSU2_TR(0x5d2e34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d2e40:L5d2e40:{c.instructions+=5;NFSU2_TR(0x5d2e40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d2e44:{NFSU2_TR(0x5d2e44);
__builtin_memmove((R+4),gp(0x883d74),4);
}
B5d2e4a:{NFSU2_TR(0x5d2e4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2e4b:{NFSU2_TR(0x5d2e4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2e4c:{NFSU2_TR(0x5d2e4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2e51ull));
TAIL_STATIC(0x43f920u,43f);
}
B5d2e51:L5d2e51:{c.instructions+=2;NFSU2_TR(0x5d2e51);
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
B5d2e54:{NFSU2_TR(0x5d2e54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d2e60:L5d2e60:{c.instructions+=9;NFSU2_TR(0x5d2e60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2e61:{NFSU2_TR(0x5d2e61);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2e62:{NFSU2_TR(0x5d2e62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2e63:{NFSU2_TR(0x5d2e63);
__builtin_memmove((R+24),(R+4),4);
}
B5d2e65:{NFSU2_TR(0x5d2e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x498ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d2e6b:{NFSU2_TR(0x5d2e6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2e6c:{NFSU2_TR(0x5d2e6c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5d2e6e:{NFSU2_TR(0x5d2e6e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d2e70:{NFSU2_TR(0x5d2e70);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d2eb5;}}
}
B5d2e72:L5d2e72:{c.instructions+=3;NFSU2_TR(0x5d2e72);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d2e76:{NFSU2_TR(0x5d2e76);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5d2e78:{NFSU2_TR(0x5d2e78);
{goto L5d2e80;}
}
B5d2e80:L5d2e80:{c.instructions+=5;NFSU2_TR(0x5d2e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x49cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d2e86:{NFSU2_TR(0x5d2e86);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B5d2e8a:{NFSU2_TR(0x5d2e8a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B5d2e8c:{NFSU2_TR(0x5d2e8c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d2e8e:{NFSU2_TR(0x5d2e8e);
if(r1(R+518)){{goto L5d2ea7;}}
}
B5d2e90:L5d2e90:{c.instructions+=7;NFSU2_TR(0x5d2e90);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d2e94:{NFSU2_TR(0x5d2e94);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2e95:{NFSU2_TR(0x5d2e95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2e96:{NFSU2_TR(0x5d2e96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d2e99:{NFSU2_TR(0x5d2e99);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2e9a:{NFSU2_TR(0x5d2e9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2e9b:{NFSU2_TR(0x5d2e9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2ea0ull));
TAIL_STATIC(0x5d4d50u,5d4);
}
B5d2ea0:L5d2ea0:{c.instructions+=3;NFSU2_TR(0x5d2ea0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5d2ea3:{NFSU2_TR(0x5d2ea3);
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
B5d2ea5:{NFSU2_TR(0x5d2ea5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d2ebe;}}
}
B5d2ea7:L5d2ea7:{c.instructions+=5;NFSU2_TR(0x5d2ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x498ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d2ead:{NFSU2_TR(0x5d2ead);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5d2eae:{NFSU2_TR(0x5d2eae);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x24ull))));
}
B5d2eb1:{NFSU2_TR(0x5d2eb1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d2eb3:{NFSU2_TR(0x5d2eb3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d2e80u);}goto L5d2e80;}}
}
B5d2eb5:L5d2eb5:{c.instructions+=6;NFSU2_TR(0x5d2eb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d2eb6:{NFSU2_TR(0x5d2eb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d2eb7:{NFSU2_TR(0x5d2eb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d2eb8:{NFSU2_TR(0x5d2eb8);
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
B5d2eba:{NFSU2_TR(0x5d2eba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d2ebb:{NFSU2_TR(0x5d2ebb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d2ebe:L5d2ebe:{c.instructions+=8;NFSU2_TR(0x5d2ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x49cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d2ec4:{NFSU2_TR(0x5d2ec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d2ec7:{NFSU2_TR(0x5d2ec7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d2ec8:{NFSU2_TR(0x5d2ec8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d2ec9:{NFSU2_TR(0x5d2ec9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d2eca:{NFSU2_TR(0x5d2eca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d2ecd:{NFSU2_TR(0x5d2ecd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d2ece:{NFSU2_TR(0x5d2ece);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d2ee0:L5d2ee0:{c.instructions+=18;NFSU2_TR(0x5d2ee0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2ee1:{NFSU2_TR(0x5d2ee1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2ee2:{NFSU2_TR(0x5d2ee2);
__builtin_memmove((R+24),(R+4),4);
}
B5d2ee4:{NFSU2_TR(0x5d2ee4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5d2ee8:{NFSU2_TR(0x5d2ee8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5d2eec:{NFSU2_TR(0x5d2eec);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d2eef:{NFSU2_TR(0x5d2eef);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2ef3:{NFSU2_TR(0x5d2ef3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5d2ef6:{NFSU2_TR(0x5d2ef6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d2efa:{NFSU2_TR(0x5d2efa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2efe:{NFSU2_TR(0x5d2efe);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2f04:{NFSU2_TR(0x5d2f04);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d2f08:{NFSU2_TR(0x5d2f08);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2f0e:{NFSU2_TR(0x5d2f0e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5d2f12:{NFSU2_TR(0x5d2f12);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5d2f14:{NFSU2_TR(0x5d2f14);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d2f16:{NFSU2_TR(0x5d2f16);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d2f19:{NFSU2_TR(0x5d2f19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d2f21;}}
}
B5d2f1b:L5d2f1b:{c.instructions+=2;NFSU2_TR(0x5d2f1b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d2f1d:{NFSU2_TR(0x5d2f1d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d2f21:L5d2f21:{c.instructions+=4;NFSU2_TR(0x5d2f21);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d2f25:{NFSU2_TR(0x5d2f25);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5d2f27:{NFSU2_TR(0x5d2f27);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2f2d:{NFSU2_TR(0x5d2f2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2f32ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d2f32:L5d2f32:{c.instructions+=7;NFSU2_TR(0x5d2f32);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d2f34:{NFSU2_TR(0x5d2f34);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d2f38:{NFSU2_TR(0x5d2f38);
u8 U[47];
w4(U+39,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5d2f3b:{NFSU2_TR(0x5d2f3b);
u8 U[13];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5d2f3f:{NFSU2_TR(0x5d2f3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d2f40:{NFSU2_TR(0x5d2f40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d2f41:{NFSU2_TR(0x5d2f41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d2f50:L5d2f50:{c.instructions+=12;NFSU2_TR(0x5d2f50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2f51:{NFSU2_TR(0x5d2f51);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2f52:{NFSU2_TR(0x5d2f52);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d2f56:{NFSU2_TR(0x5d2f56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2f57:{NFSU2_TR(0x5d2f57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d2f58:{NFSU2_TR(0x5d2f58);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d2f5c:{NFSU2_TR(0x5d2f5c);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d2f5f:{NFSU2_TR(0x5d2f5f);
__builtin_memmove((R+24),(R+4),4);
}
B5d2f61:{NFSU2_TR(0x5d2f61);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d2f64:{NFSU2_TR(0x5d2f64);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d2f67:{NFSU2_TR(0x5d2f67);
{u32 ea_=u32(u32(8016260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2f6d:{NFSU2_TR(0x5d2f6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2f72ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d2f72:L5d2f72:{c.instructions+=4;NFSU2_TR(0x5d2f72);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d2f75:{NFSU2_TR(0x5d2f75);
{u32 ea_=u32(u32(8016260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2f7b:{NFSU2_TR(0x5d2f7b);
__builtin_memmove((R+12),(R+0),4);
}
B5d2f7d:{NFSU2_TR(0x5d2f7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2f82ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d2f82:L5d2f82:{c.instructions+=4;NFSU2_TR(0x5d2f82);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d2f85:{NFSU2_TR(0x5d2f85);
{u32 ea_=u32(u32(8016260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2f8b:{NFSU2_TR(0x5d2f8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d2f8f:{NFSU2_TR(0x5d2f8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d2f94ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d2f94:L5d2f94:{c.instructions+=14;NFSU2_TR(0x5d2f94);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d2f96:{NFSU2_TR(0x5d2f96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d2f98:{NFSU2_TR(0x5d2f98);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2f9b:{NFSU2_TR(0x5d2f9b);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5d2f9f:{NFSU2_TR(0x5d2f9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d2fa0:{NFSU2_TR(0x5d2fa0);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2fa3:{NFSU2_TR(0x5d2fa3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d2fa6:{NFSU2_TR(0x5d2fa6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5d2fa8:{NFSU2_TR(0x5d2fa8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d2fab:{NFSU2_TR(0x5d2fab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d2fae:{NFSU2_TR(0x5d2fae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d2faf:{NFSU2_TR(0x5d2faf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d2fb0:{NFSU2_TR(0x5d2fb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d2fb1:{NFSU2_TR(0x5d2fb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d2fc0:L5d2fc0:{c.instructions+=17;NFSU2_TR(0x5d2fc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5d2fc3:{NFSU2_TR(0x5d2fc3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5d2fc7:{NFSU2_TR(0x5d2fc7);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d2fca:{NFSU2_TR(0x5d2fca);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d2fcd:{NFSU2_TR(0x5d2fcd);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5d2fd1:{NFSU2_TR(0x5d2fd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5d2fd5:{NFSU2_TR(0x5d2fd5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5d2fd9:{NFSU2_TR(0x5d2fd9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d2fdd:{NFSU2_TR(0x5d2fdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d2fdf:{NFSU2_TR(0x5d2fdf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5d2fe3:{NFSU2_TR(0x5d2fe3);
{u32 ea_=u32(u32(7997180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d2fe9:{NFSU2_TR(0x5d2fe9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d2fed:{NFSU2_TR(0x5d2fed);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d2ff1:{NFSU2_TR(0x5d2ff1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5d2ff5:{NFSU2_TR(0x5d2ff5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d2ff9:{NFSU2_TR(0x5d2ff9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d2ffb:{NFSU2_TR(0x5d2ffb);
{u32 ea_=u32(u32(7997180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
TAIL_STATIC(0x5d3001u,5d3);
}
XIT:NFSU2_TR_EXIT(0x5d2,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
