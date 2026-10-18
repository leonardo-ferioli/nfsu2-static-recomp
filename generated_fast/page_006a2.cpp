#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69b(u8* __restrict R,Cpu& c);
u32 body_69c(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6a1(u8* __restrict R,Cpu& c);
u32 body_6a3(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6a2,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6a2,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6a2(u8* __restrict R,Cpu& c);
u32 page_6a2(Cpu& c){return body_6a2(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6a2(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6a2000:goto L6a2000;
case 0x6a2006:c.instructions+=3;goto B6a2006;
case 0x6a2008:c.instructions+=2;goto B6a2008;
case 0x6a200b:c.instructions+=1;goto B6a200b;
case 0x6a200d:goto L6a200d;
case 0x6a2010:c.instructions+=1;goto B6a2010;
case 0x6a2016:goto L6a2016;
case 0x6a201c:c.instructions+=3;goto B6a201c;
case 0x6a201e:c.instructions+=2;goto B6a201e;
case 0x6a2021:c.instructions+=1;goto B6a2021;
case 0x6a2027:goto L6a2027;
case 0x6a202a:c.instructions+=1;goto B6a202a;
case 0x6a202f:goto L6a202f;
case 0x6a2035:c.instructions+=3;goto B6a2035;
case 0x6a2037:c.instructions+=2;goto B6a2037;
case 0x6a203a:c.instructions+=1;goto B6a203a;
case 0x6a203c:goto L6a203c;
case 0x6a203f:c.instructions+=1;goto B6a203f;
case 0x6a2041:goto L6a2041;
case 0x6a2043:c.instructions+=2;goto B6a2043;
case 0x6a2046:c.instructions+=1;goto B6a2046;
case 0x6a204b:goto L6a204b;
case 0x6a2051:c.instructions+=3;goto B6a2051;
case 0x6a2053:c.instructions+=2;goto B6a2053;
case 0x6a2056:c.instructions+=1;goto B6a2056;
case 0x6a2058:goto L6a2058;
case 0x6a205b:c.instructions+=1;goto B6a205b;
case 0x6a2061:goto L6a2061;
case 0x6a2063:c.instructions+=1;goto B6a2063;
case 0x6a2068:goto L6a2068;
case 0x6a206b:c.instructions+=2;goto B6a206b;
case 0x6a206e:c.instructions+=1;goto B6a206e;
case 0x6a2070:goto L6a2070;
case 0x6a2073:c.instructions+=2;goto B6a2073;
case 0x6a2079:c.instructions+=1;goto B6a2079;
case 0x6a207f:goto L6a207f;
case 0x6a2085:c.instructions+=1;goto B6a2085;
case 0x6a208b:goto L6a208b;
case 0x6a2091:c.instructions+=1;goto B6a2091;
case 0x6a2097:goto L6a2097;
case 0x6a209d:c.instructions+=1;goto B6a209d;
case 0x6a20a3:goto L6a20a3;
case 0x6a20a9:c.instructions+=1;goto B6a20a9;
case 0x6a20ab:goto L6a20ab;
case 0x6a20af:c.instructions+=1;goto B6a20af;
case 0x6a20b5:goto L6a20b5;
case 0x6a20b7:c.instructions+=2;goto B6a20b7;
case 0x6a20ba:c.instructions+=1;goto B6a20ba;
case 0x6a20c0:goto L6a20c0;
case 0x6a20c7:c.instructions+=1;goto B6a20c7;
case 0x6a20cd:goto L6a20cd;
case 0x6a20d0:c.instructions+=3;goto B6a20d0;
case 0x6a20d3:c.instructions+=2;goto B6a20d3;
case 0x6a20d7:c.instructions+=1;goto B6a20d7;
case 0x6a20d9:goto L6a20d9;
case 0x6a20dc:c.instructions+=6;goto B6a20dc;
case 0x6a20df:c.instructions+=5;goto B6a20df;
case 0x6a20e2:c.instructions+=4;goto B6a20e2;
case 0x6a20e4:c.instructions+=3;goto B6a20e4;
case 0x6a20ea:c.instructions+=2;goto B6a20ea;
case 0x6a20f0:c.instructions+=1;goto B6a20f0;
case 0x6a20f2:goto L6a20f2;
case 0x6a20f5:c.instructions+=1;goto B6a20f5;
case 0x6a20f7:goto L6a20f7;
case 0x6a20fa:goto L6a20fa;
case 0x6a20fd:c.instructions+=2;goto B6a20fd;
case 0x6a20ff:c.instructions+=1;goto B6a20ff;
case 0x6a2101:goto L6a2101;
case 0x6a2102:c.instructions+=3;goto B6a2102;
case 0x6a2105:c.instructions+=2;goto B6a2105;
case 0x6a2108:c.instructions+=1;goto B6a2108;
case 0x6a210a:goto L6a210a;
case 0x6a210d:c.instructions+=1;goto B6a210d;
case 0x6a210f:goto L6a210f;
case 0x6a2112:c.instructions+=3;goto B6a2112;
case 0x6a2115:c.instructions+=2;goto B6a2115;
case 0x6a2118:c.instructions+=1;goto B6a2118;
case 0x6a211a:goto L6a211a;
case 0x6a211e:c.instructions+=1;goto B6a211e;
case 0x6a2120:goto L6a2120;
case 0x6a2123:c.instructions+=7;goto B6a2123;
case 0x6a2126:c.instructions+=6;goto B6a2126;
case 0x6a2129:c.instructions+=5;goto B6a2129;
case 0x6a212c:c.instructions+=4;goto B6a212c;
case 0x6a212e:c.instructions+=3;goto B6a212e;
case 0x6a2134:c.instructions+=2;goto B6a2134;
case 0x6a213a:c.instructions+=1;goto B6a213a;
case 0x6a213c:goto L6a213c;
case 0x6a213e:c.instructions+=2;goto B6a213e;
case 0x6a2141:c.instructions+=1;goto B6a2141;
case 0x6a2143:goto L6a2143;
case 0x6a2146:goto L6a2146;
case 0x6a2148:c.instructions+=2;goto B6a2148;
case 0x6a214b:c.instructions+=1;goto B6a214b;
case 0x6a214d:goto L6a214d;
case 0x6a214e:c.instructions+=3;goto B6a214e;
case 0x6a2151:c.instructions+=2;goto B6a2151;
case 0x6a2154:c.instructions+=1;goto B6a2154;
case 0x6a2156:goto L6a2156;
case 0x6a2159:c.instructions+=1;goto B6a2159;
case 0x6a215b:goto L6a215b;
case 0x6a215e:c.instructions+=3;goto B6a215e;
case 0x6a2161:c.instructions+=2;goto B6a2161;
case 0x6a2164:c.instructions+=1;goto B6a2164;
case 0x6a2166:goto L6a2166;
case 0x6a2168:goto L6a2168;
case 0x6a2169:c.instructions+=5;goto B6a2169;
case 0x6a216a:c.instructions+=4;goto B6a216a;
case 0x6a216d:c.instructions+=3;goto B6a216d;
case 0x6a216f:c.instructions+=2;goto B6a216f;
case 0x6a2171:c.instructions+=1;goto B6a2171;
case 0x6a2176:goto L6a2176;
case 0x6a217a:c.instructions+=1;goto B6a217a;
case 0x6a2180:goto L6a2180;
case 0x6a2182:c.instructions+=1;goto B6a2182;
case 0x6a2184:goto L6a2184;
case 0x6a2188:c.instructions+=1;goto B6a2188;
case 0x6a218e:goto L6a218e;
case 0x6a2190:goto L6a2190;
case 0x6a2194:goto L6a2194;
case 0x6a2198:c.instructions+=1;goto B6a2198;
case 0x6a219a:goto L6a219a;
case 0x6a219d:c.instructions+=2;goto B6a219d;
case 0x6a21a0:c.instructions+=1;goto B6a21a0;
case 0x6a21a2:goto L6a21a2;
case 0x6a21a5:c.instructions+=1;goto B6a21a5;
case 0x6a21a8:goto L6a21a8;
case 0x6a21ab:c.instructions+=5;goto B6a21ab;
case 0x6a21ae:c.instructions+=4;goto B6a21ae;
case 0x6a21b1:c.instructions+=3;goto B6a21b1;
case 0x6a21b4:c.instructions+=2;goto B6a21b4;
case 0x6a21b7:c.instructions+=1;goto B6a21b7;
case 0x6a21b9:goto L6a21b9;
case 0x6a21bc:c.instructions+=6;goto B6a21bc;
case 0x6a21bf:c.instructions+=5;goto B6a21bf;
case 0x6a21c2:c.instructions+=4;goto B6a21c2;
case 0x6a21c5:c.instructions+=3;goto B6a21c5;
case 0x6a21c8:c.instructions+=2;goto B6a21c8;
case 0x6a21cc:c.instructions+=1;goto B6a21cc;
case 0x6a21d2:goto L6a21d2;
case 0x6a21d5:c.instructions+=6;goto B6a21d5;
case 0x6a21d8:c.instructions+=5;goto B6a21d8;
case 0x6a21db:c.instructions+=4;goto B6a21db;
case 0x6a21dd:c.instructions+=3;goto B6a21dd;
case 0x6a21e3:c.instructions+=2;goto B6a21e3;
case 0x6a21e9:c.instructions+=1;goto B6a21e9;
case 0x6a21ef:goto L6a21ef;
case 0x6a21f3:c.instructions+=2;goto B6a21f3;
case 0x6a21f7:c.instructions+=1;goto B6a21f7;
case 0x6a21f9:goto L6a21f9;
case 0x6a21fc:c.instructions+=1;goto B6a21fc;
case 0x6a21fe:goto L6a21fe;
case 0x6a2201:goto L6a2201;
case 0x6a2204:c.instructions+=2;goto B6a2204;
case 0x6a2206:c.instructions+=1;goto B6a2206;
case 0x6a2208:goto L6a2208;
case 0x6a220b:c.instructions+=5;goto B6a220b;
case 0x6a220e:c.instructions+=4;goto B6a220e;
case 0x6a2211:c.instructions+=3;goto B6a2211;
case 0x6a2214:c.instructions+=2;goto B6a2214;
case 0x6a2217:c.instructions+=1;goto B6a2217;
case 0x6a2219:goto L6a2219;
case 0x6a221b:goto L6a221b;
case 0x6a221e:c.instructions+=5;goto B6a221e;
case 0x6a2221:c.instructions+=4;goto B6a2221;
case 0x6a2224:c.instructions+=3;goto B6a2224;
case 0x6a2227:c.instructions+=2;goto B6a2227;
case 0x6a222a:c.instructions+=1;goto B6a222a;
case 0x6a222d:goto L6a222d;
case 0x6a2230:c.instructions+=7;goto B6a2230;
case 0x6a2233:c.instructions+=6;goto B6a2233;
case 0x6a2236:c.instructions+=5;goto B6a2236;
case 0x6a2239:c.instructions+=4;goto B6a2239;
case 0x6a223c:c.instructions+=3;goto B6a223c;
case 0x6a223f:c.instructions+=2;goto B6a223f;
case 0x6a2243:c.instructions+=1;goto B6a2243;
case 0x6a2249:goto L6a2249;
case 0x6a224c:c.instructions+=6;goto B6a224c;
case 0x6a224f:c.instructions+=5;goto B6a224f;
case 0x6a2252:c.instructions+=4;goto B6a2252;
case 0x6a2254:c.instructions+=3;goto B6a2254;
case 0x6a225a:c.instructions+=2;goto B6a225a;
case 0x6a2260:c.instructions+=1;goto B6a2260;
case 0x6a2266:goto L6a2266;
case 0x6a2269:c.instructions+=3;goto B6a2269;
case 0x6a226b:c.instructions+=2;goto B6a226b;
case 0x6a226d:c.instructions+=1;goto B6a226d;
case 0x6a226f:goto L6a226f;
case 0x6a2272:goto L6a2272;
case 0x6a2275:c.instructions+=2;goto B6a2275;
case 0x6a2277:c.instructions+=1;goto B6a2277;
case 0x6a2279:goto L6a2279;
case 0x6a227a:c.instructions+=3;goto B6a227a;
case 0x6a227d:c.instructions+=2;goto B6a227d;
case 0x6a227f:c.instructions+=1;goto B6a227f;
case 0x6a2281:goto L6a2281;
case 0x6a2283:goto L6a2283;
case 0x6a2287:c.instructions+=2;goto B6a2287;
case 0x6a228a:c.instructions+=1;goto B6a228a;
case 0x6a228c:goto L6a228c;
case 0x6a228f:c.instructions+=2;goto B6a228f;
case 0x6a2291:c.instructions+=1;goto B6a2291;
case 0x6a2293:goto L6a2293;
case 0x6a2296:c.instructions+=1;goto B6a2296;
case 0x6a2299:goto L6a2299;
case 0x6a229c:c.instructions+=7;goto B6a229c;
case 0x6a229f:c.instructions+=6;goto B6a229f;
case 0x6a22a2:c.instructions+=5;goto B6a22a2;
case 0x6a22a5:c.instructions+=4;goto B6a22a5;
case 0x6a22a8:c.instructions+=3;goto B6a22a8;
case 0x6a22ab:c.instructions+=2;goto B6a22ab;
case 0x6a22ae:c.instructions+=1;goto B6a22ae;
case 0x6a22b1:goto L6a22b1;
case 0x6a22b4:goto L6a22b4;
case 0x6a22b8:c.instructions+=1;goto B6a22b8;
case 0x6a22ba:goto L6a22ba;
case 0x6a22bd:c.instructions+=7;goto B6a22bd;
case 0x6a22c0:c.instructions+=6;goto B6a22c0;
case 0x6a22c3:c.instructions+=5;goto B6a22c3;
case 0x6a22c6:c.instructions+=4;goto B6a22c6;
case 0x6a22c9:c.instructions+=3;goto B6a22c9;
case 0x6a22cc:c.instructions+=2;goto B6a22cc;
case 0x6a22d0:c.instructions+=1;goto B6a22d0;
case 0x6a22d2:goto L6a22d2;
case 0x6a22d5:c.instructions+=6;goto B6a22d5;
case 0x6a22d8:c.instructions+=5;goto B6a22d8;
case 0x6a22db:c.instructions+=4;goto B6a22db;
case 0x6a22dd:c.instructions+=3;goto B6a22dd;
case 0x6a22e3:c.instructions+=2;goto B6a22e3;
case 0x6a22e9:c.instructions+=1;goto B6a22e9;
case 0x6a22eb:goto L6a22eb;
case 0x6a22ed:c.instructions+=2;goto B6a22ed;
case 0x6a22f0:c.instructions+=1;goto B6a22f0;
case 0x6a22f2:goto L6a22f2;
case 0x6a22f5:goto L6a22f5;
case 0x6a22f7:c.instructions+=1;goto B6a22f7;
case 0x6a22f9:goto L6a22f9;
case 0x6a22fa:c.instructions+=3;goto B6a22fa;
case 0x6a22fd:c.instructions+=2;goto B6a22fd;
case 0x6a2300:c.instructions+=1;goto B6a2300;
case 0x6a2302:goto L6a2302;
case 0x6a2304:goto L6a2304;
case 0x6a2307:c.instructions+=5;goto B6a2307;
case 0x6a230a:c.instructions+=4;goto B6a230a;
case 0x6a230d:c.instructions+=3;goto B6a230d;
case 0x6a2310:c.instructions+=2;goto B6a2310;
case 0x6a2313:c.instructions+=1;goto B6a2313;
case 0x6a2316:goto L6a2316;
case 0x6a2319:c.instructions+=2;goto B6a2319;
case 0x6a231c:c.instructions+=1;goto B6a231c;
case 0x6a231e:goto L6a231e;
case 0x6a2321:c.instructions+=2;goto B6a2321;
case 0x6a2325:c.instructions+=1;goto B6a2325;
case 0x6a232b:goto L6a232b;
case 0x6a2332:c.instructions+=1;goto B6a2332;
case 0x6a2338:goto L6a2338;
case 0x6a233b:c.instructions+=8;goto B6a233b;
case 0x6a233d:c.instructions+=7;goto B6a233d;
case 0x6a2340:c.instructions+=6;goto B6a2340;
case 0x6a2343:c.instructions+=5;goto B6a2343;
case 0x6a2346:c.instructions+=4;goto B6a2346;
case 0x6a2349:c.instructions+=3;goto B6a2349;
case 0x6a234c:c.instructions+=2;goto B6a234c;
case 0x6a234f:c.instructions+=1;goto B6a234f;
case 0x6a2352:goto L6a2352;
case 0x6a2356:c.instructions+=1;goto B6a2356;
case 0x6a2358:goto L6a2358;
case 0x6a235b:c.instructions+=2;goto B6a235b;
case 0x6a235e:c.instructions+=1;goto B6a235e;
case 0x6a2363:goto L6a2363;
case 0x6a2366:c.instructions+=6;goto B6a2366;
case 0x6a2369:c.instructions+=5;goto B6a2369;
case 0x6a236c:c.instructions+=4;goto B6a236c;
case 0x6a236e:c.instructions+=3;goto B6a236e;
case 0x6a2373:c.instructions+=2;goto B6a2373;
case 0x6a2378:c.instructions+=1;goto B6a2378;
case 0x6a237a:goto L6a237a;
case 0x6a237e:c.instructions+=1;goto B6a237e;
case 0x6a2380:goto L6a2380;
case 0x6a2385:c.instructions+=1;goto B6a2385;
case 0x6a2387:goto L6a2387;
case 0x6a238b:goto L6a238b;
case 0x6a238d:c.instructions+=8;goto B6a238d;
case 0x6a238f:c.instructions+=7;goto B6a238f;
case 0x6a2392:c.instructions+=6;goto B6a2392;
case 0x6a2394:c.instructions+=5;goto B6a2394;
case 0x6a2397:c.instructions+=4;goto B6a2397;
case 0x6a2399:c.instructions+=3;goto B6a2399;
case 0x6a239b:c.instructions+=2;goto B6a239b;
case 0x6a239e:c.instructions+=1;goto B6a239e;
case 0x6a23a0:goto L6a23a0;
case 0x6a23a3:c.instructions+=1;goto B6a23a3;
case 0x6a23a5:goto L6a23a5;
case 0x6a23a8:goto L6a23a8;
case 0x6a23aa:c.instructions+=1;goto B6a23aa;
case 0x6a23ac:goto L6a23ac;
case 0x6a23ad:c.instructions+=4;goto B6a23ad;
case 0x6a23b0:c.instructions+=3;goto B6a23b0;
case 0x6a23b3:c.instructions+=2;goto B6a23b3;
case 0x6a23b6:c.instructions+=1;goto B6a23b6;
case 0x6a23b8:goto L6a23b8;
case 0x6a23ba:goto L6a23ba;
case 0x6a23bd:c.instructions+=1;goto B6a23bd;
case 0x6a23c0:goto L6a23c0;
case 0x6a23c3:c.instructions+=1;goto B6a23c3;
case 0x6a23c5:goto L6a23c5;
case 0x6a23c8:c.instructions+=6;goto B6a23c8;
case 0x6a23cb:c.instructions+=5;goto B6a23cb;
case 0x6a23ce:c.instructions+=4;goto B6a23ce;
case 0x6a23d1:c.instructions+=3;goto B6a23d1;
case 0x6a23d4:c.instructions+=2;goto B6a23d4;
case 0x6a23d8:c.instructions+=1;goto B6a23d8;
case 0x6a23da:goto L6a23da;
case 0x6a23de:c.instructions+=3;goto B6a23de;
case 0x6a23e1:c.instructions+=2;goto B6a23e1;
case 0x6a23e4:c.instructions+=1;goto B6a23e4;
case 0x6a23ea:goto L6a23ea;
case 0x6a23ed:c.instructions+=2;goto B6a23ed;
case 0x6a23f0:c.instructions+=1;goto B6a23f0;
case 0x6a23f2:goto L6a23f2;
case 0x6a23f5:c.instructions+=2;goto B6a23f5;
case 0x6a23f8:c.instructions+=1;goto B6a23f8;
case 0x6a23fa:goto L6a23fa;
case 0x6a23fd:c.instructions+=2;goto B6a23fd;
case 0x6a2400:c.instructions+=1;goto B6a2400;
case 0x6a2402:goto L6a2402;
case 0x6a2404:c.instructions+=1;goto B6a2404;
case 0x6a2406:goto L6a2406;
case 0x6a240b:c.instructions+=1;goto B6a240b;
case 0x6a2410:goto L6a2410;
case 0x6a2416:goto L6a2416;
case 0x6a2417:c.instructions+=7;goto B6a2417;
case 0x6a2418:c.instructions+=6;goto B6a2418;
case 0x6a241b:c.instructions+=5;goto B6a241b;
case 0x6a241d:c.instructions+=4;goto B6a241d;
case 0x6a241f:c.instructions+=3;goto B6a241f;
case 0x6a2422:c.instructions+=2;goto B6a2422;
case 0x6a2424:c.instructions+=1;goto B6a2424;
case 0x6a2429:goto L6a2429;
case 0x6a2430:c.instructions+=2;goto B6a2430;
case 0x6a2433:c.instructions+=1;goto B6a2433;
case 0x6a2435:goto L6a2435;
case 0x6a2438:c.instructions+=6;goto B6a2438;
case 0x6a243b:c.instructions+=5;goto B6a243b;
case 0x6a243e:c.instructions+=4;goto B6a243e;
case 0x6a2441:c.instructions+=3;goto B6a2441;
case 0x6a2444:c.instructions+=2;goto B6a2444;
case 0x6a2448:c.instructions+=1;goto B6a2448;
case 0x6a244a:goto L6a244a;
case 0x6a244e:c.instructions+=1;goto B6a244e;
case 0x6a2450:goto L6a2450;
case 0x6a2453:c.instructions+=6;goto B6a2453;
case 0x6a2456:c.instructions+=5;goto B6a2456;
case 0x6a2459:c.instructions+=4;goto B6a2459;
case 0x6a245b:c.instructions+=3;goto B6a245b;
case 0x6a2461:c.instructions+=2;goto B6a2461;
case 0x6a2467:c.instructions+=1;goto B6a2467;
case 0x6a2469:goto L6a2469;
case 0x6a246c:c.instructions+=3;goto B6a246c;
case 0x6a246e:c.instructions+=2;goto B6a246e;
case 0x6a2470:c.instructions+=1;goto B6a2470;
case 0x6a2472:goto L6a2472;
case 0x6a2475:goto L6a2475;
case 0x6a2477:c.instructions+=1;goto B6a2477;
case 0x6a2479:goto L6a2479;
case 0x6a247a:c.instructions+=3;goto B6a247a;
case 0x6a247d:c.instructions+=2;goto B6a247d;
case 0x6a247f:c.instructions+=1;goto B6a247f;
case 0x6a2481:goto L6a2481;
case 0x6a2484:c.instructions+=3;goto B6a2484;
case 0x6a2487:c.instructions+=2;goto B6a2487;
case 0x6a248a:c.instructions+=1;goto B6a248a;
case 0x6a2490:goto L6a2490;
case 0x6a2493:c.instructions+=6;goto B6a2493;
case 0x6a2496:c.instructions+=5;goto B6a2496;
case 0x6a2499:c.instructions+=4;goto B6a2499;
case 0x6a249c:c.instructions+=3;goto B6a249c;
case 0x6a249f:c.instructions+=2;goto B6a249f;
case 0x6a24a3:c.instructions+=1;goto B6a24a3;
case 0x6a24a9:goto L6a24a9;
case 0x6a24ac:c.instructions+=5;goto B6a24ac;
case 0x6a24af:c.instructions+=4;goto B6a24af;
case 0x6a24b2:c.instructions+=3;goto B6a24b2;
case 0x6a24b5:c.instructions+=2;goto B6a24b5;
case 0x6a24b9:c.instructions+=1;goto B6a24b9;
case 0x6a24bf:goto L6a24bf;
case 0x6a24c6:c.instructions+=1;goto B6a24c6;
case 0x6a24c8:goto L6a24c8;
case 0x6a24cf:c.instructions+=1;goto B6a24cf;
case 0x6a24d1:goto L6a24d1;
case 0x6a24d8:c.instructions+=1;goto B6a24d8;
case 0x6a24de:goto L6a24de;
case 0x6a24e1:c.instructions+=13;goto B6a24e1;
case 0x6a24e4:c.instructions+=12;goto B6a24e4;
case 0x6a24e7:c.instructions+=11;goto B6a24e7;
case 0x6a24ea:c.instructions+=10;goto B6a24ea;
case 0x6a24ed:c.instructions+=9;goto B6a24ed;
case 0x6a24f0:c.instructions+=8;goto B6a24f0;
case 0x6a24f3:c.instructions+=7;goto B6a24f3;
case 0x6a24f6:c.instructions+=6;goto B6a24f6;
case 0x6a24f8:c.instructions+=5;goto B6a24f8;
case 0x6a24fb:c.instructions+=4;goto B6a24fb;
case 0x6a2501:c.instructions+=3;goto B6a2501;
case 0x6a2506:c.instructions+=2;goto B6a2506;
case 0x6a2508:c.instructions+=1;goto B6a2508;
case 0x6a250e:goto L6a250e;
case 0x6a2510:c.instructions+=3;goto B6a2510;
case 0x6a2516:c.instructions+=2;goto B6a2516;
case 0x6a2518:c.instructions+=1;goto B6a2518;
case 0x6a251e:goto L6a251e;
case 0x6a2521:c.instructions+=4;goto B6a2521;
case 0x6a2524:c.instructions+=3;goto B6a2524;
case 0x6a2528:c.instructions+=2;goto B6a2528;
case 0x6a252a:c.instructions+=1;goto B6a252a;
case 0x6a252c:goto L6a252c;
case 0x6a252f:goto L6a252f;
case 0x6a2532:c.instructions+=2;goto B6a2532;
case 0x6a2534:c.instructions+=1;goto B6a2534;
case 0x6a2536:goto L6a2536;
case 0x6a2539:c.instructions+=3;goto B6a2539;
case 0x6a253c:c.instructions+=2;goto B6a253c;
case 0x6a253f:c.instructions+=1;goto B6a253f;
case 0x6a2541:goto L6a2541;
case 0x6a2543:c.instructions+=2;goto B6a2543;
case 0x6a2546:c.instructions+=1;goto B6a2546;
case 0x6a2548:goto L6a2548;
case 0x6a254b:goto L6a254b;
case 0x6a254e:c.instructions+=2;goto B6a254e;
case 0x6a2550:c.instructions+=1;goto B6a2550;
case 0x6a2552:goto L6a2552;
case 0x6a2553:c.instructions+=3;goto B6a2553;
case 0x6a2556:c.instructions+=2;goto B6a2556;
case 0x6a2559:c.instructions+=1;goto B6a2559;
case 0x6a255b:goto L6a255b;
case 0x6a255d:c.instructions+=2;goto B6a255d;
case 0x6a2560:c.instructions+=1;goto B6a2560;
case 0x6a2562:goto L6a2562;
case 0x6a2565:goto L6a2565;
case 0x6a2568:c.instructions+=2;goto B6a2568;
case 0x6a256a:c.instructions+=1;goto B6a256a;
case 0x6a256c:goto L6a256c;
case 0x6a256d:c.instructions+=3;goto B6a256d;
case 0x6a2570:c.instructions+=2;goto B6a2570;
case 0x6a2573:c.instructions+=1;goto B6a2573;
case 0x6a2575:goto L6a2575;
case 0x6a2578:goto L6a2578;
case 0x6a257f:c.instructions+=1;goto B6a257f;
case 0x6a2581:goto L6a2581;
case 0x6a2584:c.instructions+=4;goto B6a2584;
case 0x6a2587:c.instructions+=3;goto B6a2587;
case 0x6a258a:c.instructions+=2;goto B6a258a;
case 0x6a258d:c.instructions+=1;goto B6a258d;
case 0x6a258f:goto L6a258f;
case 0x6a2592:c.instructions+=3;goto B6a2592;
case 0x6a2595:c.instructions+=2;goto B6a2595;
case 0x6a2598:c.instructions+=1;goto B6a2598;
case 0x6a259b:goto L6a259b;
case 0x6a259e:c.instructions+=14;goto B6a259e;
case 0x6a25a1:c.instructions+=13;goto B6a25a1;
case 0x6a25a4:c.instructions+=12;goto B6a25a4;
case 0x6a25a7:c.instructions+=11;goto B6a25a7;
case 0x6a25aa:c.instructions+=10;goto B6a25aa;
case 0x6a25ad:c.instructions+=9;goto B6a25ad;
case 0x6a25b0:c.instructions+=8;goto B6a25b0;
case 0x6a25b3:c.instructions+=7;goto B6a25b3;
case 0x6a25b6:c.instructions+=6;goto B6a25b6;
case 0x6a25b9:c.instructions+=5;goto B6a25b9;
case 0x6a25bc:c.instructions+=4;goto B6a25bc;
case 0x6a25bf:c.instructions+=3;goto B6a25bf;
case 0x6a25c1:c.instructions+=2;goto B6a25c1;
case 0x6a25c4:c.instructions+=1;goto B6a25c4;
case 0x6a25c9:goto L6a25c9;
case 0x6a25cc:goto L6a25cc;
case 0x6a25d3:c.instructions+=1;goto B6a25d3;
case 0x6a25d9:goto L6a25d9;
case 0x6a25dc:c.instructions+=1;goto B6a25dc;
case 0x6a25e2:goto L6a25e2;
case 0x6a25e5:c.instructions+=7;goto B6a25e5;
case 0x6a25e8:c.instructions+=6;goto B6a25e8;
case 0x6a25eb:c.instructions+=5;goto B6a25eb;
case 0x6a25ed:c.instructions+=4;goto B6a25ed;
case 0x6a25f2:c.instructions+=3;goto B6a25f2;
case 0x6a25f7:c.instructions+=2;goto B6a25f7;
case 0x6a25fa:c.instructions+=1;goto B6a25fa;
case 0x6a25fc:goto L6a25fc;
case 0x6a2601:c.instructions+=1;goto B6a2601;
case 0x6a2607:goto L6a2607;
case 0x6a2609:c.instructions+=2;goto B6a2609;
case 0x6a260c:c.instructions+=1;goto B6a260c;
case 0x6a260e:goto L6a260e;
case 0x6a2611:goto L6a2611;
case 0x6a2613:c.instructions+=1;goto B6a2613;
case 0x6a2615:goto L6a2615;
case 0x6a2616:c.instructions+=3;goto B6a2616;
case 0x6a2619:c.instructions+=2;goto B6a2619;
case 0x6a261c:c.instructions+=1;goto B6a261c;
case 0x6a261e:goto L6a261e;
case 0x6a2620:c.instructions+=10;goto B6a2620;
case 0x6a2623:c.instructions+=9;goto B6a2623;
case 0x6a2626:c.instructions+=8;goto B6a2626;
case 0x6a2629:c.instructions+=7;goto B6a2629;
case 0x6a262c:c.instructions+=6;goto B6a262c;
case 0x6a262f:c.instructions+=5;goto B6a262f;
case 0x6a2632:c.instructions+=4;goto B6a2632;
case 0x6a2635:c.instructions+=3;goto B6a2635;
case 0x6a2638:c.instructions+=2;goto B6a2638;
case 0x6a263c:c.instructions+=1;goto B6a263c;
case 0x6a263e:goto L6a263e;
case 0x6a2642:c.instructions+=1;goto B6a2642;
case 0x6a2644:goto L6a2644;
case 0x6a2647:c.instructions+=5;goto B6a2647;
case 0x6a264a:c.instructions+=4;goto B6a264a;
case 0x6a264c:c.instructions+=3;goto B6a264c;
case 0x6a2652:c.instructions+=2;goto B6a2652;
case 0x6a2658:c.instructions+=1;goto B6a2658;
case 0x6a265a:goto L6a265a;
case 0x6a2660:c.instructions+=1;goto B6a2660;
case 0x6a2662:goto L6a2662;
case 0x6a2665:c.instructions+=1;goto B6a2665;
case 0x6a2667:goto L6a2667;
case 0x6a266b:c.instructions+=2;goto B6a266b;
case 0x6a266f:c.instructions+=1;goto B6a266f;
case 0x6a2671:goto L6a2671;
case 0x6a2674:goto L6a2674;
case 0x6a2677:c.instructions+=7;goto B6a2677;
case 0x6a267a:c.instructions+=6;goto B6a267a;
case 0x6a267d:c.instructions+=5;goto B6a267d;
case 0x6a2680:c.instructions+=4;goto B6a2680;
case 0x6a2683:c.instructions+=3;goto B6a2683;
case 0x6a2686:c.instructions+=2;goto B6a2686;
case 0x6a268a:c.instructions+=1;goto B6a268a;
case 0x6a268c:goto L6a268c;
case 0x6a268f:c.instructions+=3;goto B6a268f;
case 0x6a2692:c.instructions+=2;goto B6a2692;
case 0x6a2695:c.instructions+=1;goto B6a2695;
case 0x6a2697:goto L6a2697;
case 0x6a269a:c.instructions+=5;goto B6a269a;
case 0x6a269d:c.instructions+=4;goto B6a269d;
case 0x6a26a0:c.instructions+=3;goto B6a26a0;
case 0x6a26a3:c.instructions+=2;goto B6a26a3;
case 0x6a26a6:c.instructions+=1;goto B6a26a6;
case 0x6a26ab:goto L6a26ab;
case 0x6a26ae:c.instructions+=1;goto B6a26ae;
case 0x6a26b1:goto L6a26b1;
case 0x6a26b8:c.instructions+=1;goto B6a26b8;
case 0x6a26be:goto L6a26be;
case 0x6a26c1:c.instructions+=4;goto B6a26c1;
case 0x6a26c3:c.instructions+=3;goto B6a26c3;
case 0x6a26c6:c.instructions+=2;goto B6a26c6;
case 0x6a26c9:c.instructions+=1;goto B6a26c9;
case 0x6a26cb:goto L6a26cb;
case 0x6a26ce:c.instructions+=3;goto B6a26ce;
case 0x6a26d0:c.instructions+=2;goto B6a26d0;
case 0x6a26d1:c.instructions+=1;goto B6a26d1;
case 0x6a26d6:goto L6a26d6;
case 0x6a26d8:c.instructions+=1;goto B6a26d8;
case 0x6a26da:goto L6a26da;
case 0x6a26dd:c.instructions+=1;goto B6a26dd;
case 0x6a26e2:goto L6a26e2;
case 0x6a26e5:c.instructions+=4;goto B6a26e5;
case 0x6a26e7:c.instructions+=3;goto B6a26e7;
case 0x6a26ea:c.instructions+=2;goto B6a26ea;
case 0x6a26ed:c.instructions+=1;goto B6a26ed;
case 0x6a26ef:goto L6a26ef;
case 0x6a26f0:c.instructions+=3;goto B6a26f0;
case 0x6a26f3:c.instructions+=2;goto B6a26f3;
case 0x6a26f5:c.instructions+=1;goto B6a26f5;
case 0x6a26fa:goto L6a26fa;
case 0x6a26fc:c.instructions+=1;goto B6a26fc;
case 0x6a26fe:goto L6a26fe;
case 0x6a2701:c.instructions+=2;goto B6a2701;
case 0x6a2704:c.instructions+=1;goto B6a2704;
case 0x6a2709:goto L6a2709;
case 0x6a270d:c.instructions+=10;goto B6a270d;
case 0x6a2711:c.instructions+=9;goto B6a2711;
case 0x6a2713:c.instructions+=8;goto B6a2713;
case 0x6a2714:c.instructions+=7;goto B6a2714;
case 0x6a2717:c.instructions+=6;goto B6a2717;
case 0x6a271a:c.instructions+=5;goto B6a271a;
case 0x6a271d:c.instructions+=4;goto B6a271d;
case 0x6a2720:c.instructions+=3;goto B6a2720;
case 0x6a2723:c.instructions+=2;goto B6a2723;
case 0x6a2726:c.instructions+=1;goto B6a2726;
case 0x6a272c:goto L6a272c;
case 0x6a272f:c.instructions+=12;goto B6a272f;
case 0x6a2732:c.instructions+=11;goto B6a2732;
case 0x6a2734:c.instructions+=10;goto B6a2734;
case 0x6a2737:c.instructions+=9;goto B6a2737;
case 0x6a273a:c.instructions+=8;goto B6a273a;
case 0x6a273d:c.instructions+=7;goto B6a273d;
case 0x6a2740:c.instructions+=6;goto B6a2740;
case 0x6a2743:c.instructions+=5;goto B6a2743;
case 0x6a2746:c.instructions+=4;goto B6a2746;
case 0x6a2749:c.instructions+=3;goto B6a2749;
case 0x6a274b:c.instructions+=2;goto B6a274b;
case 0x6a274d:c.instructions+=1;goto B6a274d;
case 0x6a274f:goto L6a274f;
case 0x6a2752:goto L6a2752;
case 0x6a2754:c.instructions+=1;goto B6a2754;
case 0x6a2756:goto L6a2756;
case 0x6a2757:c.instructions+=3;goto B6a2757;
case 0x6a275a:c.instructions+=2;goto B6a275a;
case 0x6a275c:c.instructions+=1;goto B6a275c;
case 0x6a275e:goto L6a275e;
case 0x6a2762:c.instructions+=1;goto B6a2762;
case 0x6a2764:goto L6a2764;
case 0x6a2767:c.instructions+=6;goto B6a2767;
case 0x6a276a:c.instructions+=5;goto B6a276a;
case 0x6a276d:c.instructions+=4;goto B6a276d;
case 0x6a276e:c.instructions+=3;goto B6a276e;
case 0x6a2771:c.instructions+=2;goto B6a2771;
case 0x6a2774:c.instructions+=1;goto B6a2774;
case 0x6a2779:goto L6a2779;
case 0x6a277b:c.instructions+=1;goto B6a277b;
case 0x6a277d:goto L6a277d;
case 0x6a2784:goto L6a2784;
case 0x6a2786:c.instructions+=1;goto B6a2786;
case 0x6a2788:goto L6a2788;
case 0x6a278b:c.instructions+=3;goto B6a278b;
case 0x6a278e:c.instructions+=2;goto B6a278e;
case 0x6a2791:c.instructions+=1;goto B6a2791;
case 0x6a2796:goto L6a2796;
case 0x6a2798:c.instructions+=1;goto B6a2798;
case 0x6a279a:goto L6a279a;
case 0x6a279d:c.instructions+=1;goto B6a279d;
case 0x6a27a4:goto L6a27a4;
case 0x6a27a8:c.instructions+=1;goto B6a27a8;
case 0x6a27aa:goto L6a27aa;
case 0x6a27ad:c.instructions+=5;goto B6a27ad;
case 0x6a27b0:c.instructions+=4;goto B6a27b0;
case 0x6a27b3:c.instructions+=3;goto B6a27b3;
case 0x6a27b4:c.instructions+=2;goto B6a27b4;
case 0x6a27b7:c.instructions+=1;goto B6a27b7;
case 0x6a27bc:goto L6a27bc;
case 0x6a27be:c.instructions+=1;goto B6a27be;
case 0x6a27c0:goto L6a27c0;
case 0x6a27c7:goto L6a27c7;
case 0x6a27c9:c.instructions+=2;goto B6a27c9;
case 0x6a27cc:c.instructions+=1;goto B6a27cc;
case 0x6a27ce:goto L6a27ce;
case 0x6a27d1:c.instructions+=3;goto B6a27d1;
case 0x6a27d3:c.instructions+=2;goto B6a27d3;
case 0x6a27d4:c.instructions+=1;goto B6a27d4;
case 0x6a27d9:goto L6a27d9;
case 0x6a27db:c.instructions+=1;goto B6a27db;
case 0x6a27dd:goto L6a27dd;
case 0x6a27e0:c.instructions+=2;goto B6a27e0;
case 0x6a27e7:c.instructions+=1;goto B6a27e7;
case 0x6a27e9:goto L6a27e9;
case 0x6a27ec:goto L6a27ec;
case 0x6a27ef:c.instructions+=7;goto B6a27ef;
case 0x6a27f2:c.instructions+=6;goto B6a27f2;
case 0x6a27f5:c.instructions+=5;goto B6a27f5;
case 0x6a27f8:c.instructions+=4;goto B6a27f8;
case 0x6a27fb:c.instructions+=3;goto B6a27fb;
case 0x6a27fd:c.instructions+=2;goto B6a27fd;
case 0x6a2800:c.instructions+=1;goto B6a2800;
case 0x6a2806:goto L6a2806;
case 0x6a2809:c.instructions+=1;goto B6a2809;
case 0x6a280b:goto L6a280b;
case 0x6a280e:c.instructions+=1;goto B6a280e;
case 0x6a2810:goto L6a2810;
case 0x6a2813:c.instructions+=1;goto B6a2813;
case 0x6a2815:goto L6a2815;
case 0x6a2818:c.instructions+=1;goto B6a2818;
case 0x6a281a:goto L6a281a;
case 0x6a281c:c.instructions+=1;goto B6a281c;
case 0x6a281e:goto L6a281e;
case 0x6a2821:c.instructions+=1;goto B6a2821;
case 0x6a2823:goto L6a2823;
case 0x6a2826:c.instructions+=1;goto B6a2826;
case 0x6a2828:goto L6a2828;
case 0x6a282b:c.instructions+=1;goto B6a282b;
case 0x6a282d:goto L6a282d;
case 0x6a282f:goto L6a282f;
case 0x6a2830:c.instructions+=6;goto B6a2830;
case 0x6a2831:c.instructions+=5;goto B6a2831;
case 0x6a2834:c.instructions+=4;goto B6a2834;
case 0x6a2835:c.instructions+=3;goto B6a2835;
case 0x6a2836:c.instructions+=2;goto B6a2836;
case 0x6a2839:c.instructions+=1;goto B6a2839;
case 0x6a283b:goto L6a283b;
case 0x6a2840:goto L6a2840;
case 0x6a2842:goto L6a2842;
case 0x6a2845:c.instructions+=1;goto B6a2845;
case 0x6a2847:goto L6a2847;
case 0x6a284a:c.instructions+=1;goto B6a284a;
case 0x6a284c:goto L6a284c;
case 0x6a284f:c.instructions+=3;goto B6a284f;
case 0x6a2852:c.instructions+=2;goto B6a2852;
case 0x6a2855:c.instructions+=1;goto B6a2855;
case 0x6a2857:goto L6a2857;
case 0x6a285a:c.instructions+=1;goto B6a285a;
case 0x6a285c:goto L6a285c;
case 0x6a285f:c.instructions+=1;goto B6a285f;
case 0x6a2861:goto L6a2861;
case 0x6a2864:goto L6a2864;
case 0x6a2867:c.instructions+=1;goto B6a2867;
case 0x6a286a:goto L6a286a;
case 0x6a286c:goto L6a286c;
case 0x6a286d:c.instructions+=4;goto B6a286d;
case 0x6a286e:c.instructions+=3;goto B6a286e;
case 0x6a286f:c.instructions+=2;goto B6a286f;
case 0x6a2870:c.instructions+=1;goto B6a2870;
case 0x6a2873:goto L6a2873;
case 0x6a2875:c.instructions+=39;goto B6a2875;
case 0x6a2876:c.instructions+=38;goto B6a2876;
case 0x6a2878:c.instructions+=37;goto B6a2878;
case 0x6a287e:c.instructions+=36;goto B6a287e;
case 0x6a287f:c.instructions+=35;goto B6a287f;
case 0x6a2880:c.instructions+=34;goto B6a2880;
case 0x6a2881:c.instructions+=33;goto B6a2881;
case 0x6a2883:c.instructions+=32;goto B6a2883;
case 0x6a2886:c.instructions+=31;goto B6a2886;
case 0x6a2889:c.instructions+=30;goto B6a2889;
case 0x6a288c:c.instructions+=29;goto B6a288c;
case 0x6a288f:c.instructions+=28;goto B6a288f;
case 0x6a2892:c.instructions+=27;goto B6a2892;
case 0x6a2895:c.instructions+=26;goto B6a2895;
case 0x6a2898:c.instructions+=25;goto B6a2898;
case 0x6a289b:c.instructions+=24;goto B6a289b;
case 0x6a289e:c.instructions+=23;goto B6a289e;
case 0x6a28a1:c.instructions+=22;goto B6a28a1;
case 0x6a28a4:c.instructions+=21;goto B6a28a4;
case 0x6a28a7:c.instructions+=20;goto B6a28a7;
case 0x6a28aa:c.instructions+=19;goto B6a28aa;
case 0x6a28ad:c.instructions+=18;goto B6a28ad;
case 0x6a28b0:c.instructions+=17;goto B6a28b0;
case 0x6a28b3:c.instructions+=16;goto B6a28b3;
case 0x6a28b6:c.instructions+=15;goto B6a28b6;
case 0x6a28b9:c.instructions+=14;goto B6a28b9;
case 0x6a28bc:c.instructions+=13;goto B6a28bc;
case 0x6a28bf:c.instructions+=12;goto B6a28bf;
case 0x6a28c1:c.instructions+=11;goto B6a28c1;
case 0x6a28c3:c.instructions+=10;goto B6a28c3;
case 0x6a28c6:c.instructions+=9;goto B6a28c6;
case 0x6a28c9:c.instructions+=8;goto B6a28c9;
case 0x6a28cc:c.instructions+=7;goto B6a28cc;
case 0x6a28cf:c.instructions+=6;goto B6a28cf;
case 0x6a28d2:c.instructions+=5;goto B6a28d2;
case 0x6a28d5:c.instructions+=4;goto B6a28d5;
case 0x6a28d8:c.instructions+=3;goto B6a28d8;
case 0x6a28db:c.instructions+=2;goto B6a28db;
case 0x6a28de:c.instructions+=1;goto B6a28de;
case 0x6a28e4:goto L6a28e4;
case 0x6a28e7:c.instructions+=1;goto B6a28e7;
case 0x6a28ed:goto L6a28ed;
case 0x6a28f2:c.instructions+=1;goto B6a28f2;
case 0x6a28f4:goto L6a28f4;
case 0x6a28f7:c.instructions+=4;goto B6a28f7;
case 0x6a28f9:c.instructions+=3;goto B6a28f9;
case 0x6a28ff:c.instructions+=2;goto B6a28ff;
case 0x6a2905:c.instructions+=1;goto B6a2905;
case 0x6a2907:goto L6a2907;
case 0x6a2909:c.instructions+=4;goto B6a2909;
case 0x6a290c:c.instructions+=3;goto B6a290c;
case 0x6a290e:c.instructions+=2;goto B6a290e;
case 0x6a2914:c.instructions+=1;goto B6a2914;
case 0x6a2916:goto L6a2916;
case 0x6a291b:c.instructions+=1;goto B6a291b;
case 0x6a291d:goto L6a291d;
case 0x6a2923:c.instructions+=1;goto B6a2923;
case 0x6a2925:goto L6a2925;
case 0x6a292a:c.instructions+=1;goto B6a292a;
case 0x6a292c:goto L6a292c;
case 0x6a2932:c.instructions+=1;goto B6a2932;
case 0x6a2934:goto L6a2934;
case 0x6a2939:goto L6a2939;
case 0x6a293b:goto L6a293b;
case 0x6a293d:c.instructions+=4;goto B6a293d;
case 0x6a293f:c.instructions+=3;goto B6a293f;
case 0x6a2942:c.instructions+=2;goto B6a2942;
case 0x6a2944:c.instructions+=1;goto B6a2944;
case 0x6a2946:goto L6a2946;
case 0x6a2949:goto L6a2949;
case 0x6a294b:c.instructions+=3;goto B6a294b;
case 0x6a294d:c.instructions+=2;goto B6a294d;
case 0x6a294f:c.instructions+=1;goto B6a294f;
case 0x6a2951:goto L6a2951;
case 0x6a2954:c.instructions+=4;goto B6a2954;
case 0x6a2956:c.instructions+=3;goto B6a2956;
case 0x6a295b:c.instructions+=2;goto B6a295b;
case 0x6a2960:c.instructions+=1;goto B6a2960;
case 0x6a2962:goto L6a2962;
case 0x6a2965:goto L6a2965;
case 0x6a2968:c.instructions+=4;goto B6a2968;
case 0x6a296a:c.instructions+=3;goto B6a296a;
case 0x6a296f:c.instructions+=2;goto B6a296f;
case 0x6a2974:c.instructions+=1;goto B6a2974;
case 0x6a2976:goto L6a2976;
case 0x6a2978:c.instructions+=7;goto B6a2978;
case 0x6a297a:c.instructions+=6;goto B6a297a;
case 0x6a297d:c.instructions+=5;goto B6a297d;
case 0x6a2980:c.instructions+=4;goto B6a2980;
case 0x6a2982:c.instructions+=3;goto B6a2982;
case 0x6a2985:c.instructions+=2;goto B6a2985;
case 0x6a2987:c.instructions+=1;goto B6a2987;
case 0x6a2989:goto L6a2989;
case 0x6a298c:c.instructions+=1;goto B6a298c;
case 0x6a298e:goto L6a298e;
case 0x6a2991:c.instructions+=1;goto B6a2991;
case 0x6a2993:goto L6a2993;
case 0x6a2996:c.instructions+=2;goto B6a2996;
case 0x6a2999:c.instructions+=1;goto B6a2999;
case 0x6a299b:goto L6a299b;
case 0x6a299e:c.instructions+=1;goto B6a299e;
case 0x6a29a0:goto L6a29a0;
case 0x6a29a3:goto L6a29a3;
case 0x6a29a6:c.instructions+=4;goto B6a29a6;
case 0x6a29a8:c.instructions+=3;goto B6a29a8;
case 0x6a29ad:c.instructions+=2;goto B6a29ad;
case 0x6a29b2:c.instructions+=1;goto B6a29b2;
case 0x6a29b8:goto L6a29b8;
case 0x6a29bc:c.instructions+=2;goto B6a29bc;
case 0x6a29bf:c.instructions+=1;goto B6a29bf;
case 0x6a29c1:goto L6a29c1;
case 0x6a29c4:c.instructions+=1;goto B6a29c4;
case 0x6a29c6:goto L6a29c6;
case 0x6a29c9:c.instructions+=1;goto B6a29c9;
case 0x6a29ce:goto L6a29ce;
case 0x6a29d1:c.instructions+=6;goto B6a29d1;
case 0x6a29d4:c.instructions+=5;goto B6a29d4;
case 0x6a29d7:c.instructions+=4;goto B6a29d7;
case 0x6a29da:c.instructions+=3;goto B6a29da;
case 0x6a29dd:c.instructions+=2;goto B6a29dd;
case 0x6a29e0:c.instructions+=1;goto B6a29e0;
case 0x6a29e2:goto L6a29e2;
case 0x6a29e6:c.instructions+=1;goto B6a29e6;
case 0x6a29e8:goto L6a29e8;
case 0x6a29eb:c.instructions+=5;goto B6a29eb;
case 0x6a29f1:c.instructions+=4;goto B6a29f1;
case 0x6a29f3:c.instructions+=3;goto B6a29f3;
case 0x6a29f6:c.instructions+=2;goto B6a29f6;
case 0x6a29f9:c.instructions+=1;goto B6a29f9;
case 0x6a29ff:goto L6a29ff;
case 0x6a2a02:c.instructions+=1;goto B6a2a02;
case 0x6a2a07:goto L6a2a07;
case 0x6a2a0a:c.instructions+=2;goto B6a2a0a;
case 0x6a2a0d:c.instructions+=1;goto B6a2a0d;
case 0x6a2a13:goto L6a2a13;
case 0x6a2a16:c.instructions+=7;goto B6a2a16;
case 0x6a2a19:c.instructions+=6;goto B6a2a19;
case 0x6a2a1c:c.instructions+=5;goto B6a2a1c;
case 0x6a2a1f:c.instructions+=4;goto B6a2a1f;
case 0x6a2a22:c.instructions+=3;goto B6a2a22;
case 0x6a2a28:c.instructions+=2;goto B6a2a28;
case 0x6a2a2b:c.instructions+=1;goto B6a2a2b;
case 0x6a2a2d:goto L6a2a2d;
case 0x6a2a30:c.instructions+=2;goto B6a2a30;
case 0x6a2a34:c.instructions+=1;goto B6a2a34;
case 0x6a2a36:goto L6a2a36;
case 0x6a2a39:c.instructions+=3;goto B6a2a39;
case 0x6a2a3c:c.instructions+=2;goto B6a2a3c;
case 0x6a2a40:c.instructions+=1;goto B6a2a40;
case 0x6a2a42:goto L6a2a42;
case 0x6a2a46:c.instructions+=1;goto B6a2a46;
case 0x6a2a48:goto L6a2a48;
case 0x6a2a4b:c.instructions+=6;goto B6a2a4b;
case 0x6a2a4e:c.instructions+=5;goto B6a2a4e;
case 0x6a2a51:c.instructions+=4;goto B6a2a51;
case 0x6a2a53:c.instructions+=3;goto B6a2a53;
case 0x6a2a55:c.instructions+=2;goto B6a2a55;
case 0x6a2a58:c.instructions+=1;goto B6a2a58;
case 0x6a2a5e:goto L6a2a5e;
case 0x6a2a62:c.instructions+=1;goto B6a2a62;
case 0x6a2a68:goto L6a2a68;
case 0x6a2a6b:c.instructions+=2;goto B6a2a6b;
case 0x6a2a6e:c.instructions+=1;goto B6a2a6e;
case 0x6a2a74:goto L6a2a74;
case 0x6a2a78:c.instructions+=1;goto B6a2a78;
case 0x6a2a7e:goto L6a2a7e;
case 0x6a2a81:c.instructions+=7;goto B6a2a81;
case 0x6a2a84:c.instructions+=6;goto B6a2a84;
case 0x6a2a87:c.instructions+=5;goto B6a2a87;
case 0x6a2a8a:c.instructions+=4;goto B6a2a8a;
case 0x6a2a8c:c.instructions+=3;goto B6a2a8c;
case 0x6a2a91:c.instructions+=2;goto B6a2a91;
case 0x6a2a96:c.instructions+=1;goto B6a2a96;
case 0x6a2a9c:goto L6a2a9c;
case 0x6a2aa0:c.instructions+=1;goto B6a2aa0;
case 0x6a2aa6:goto L6a2aa6;
case 0x6a2aa9:c.instructions+=2;goto B6a2aa9;
case 0x6a2aad:c.instructions+=1;goto B6a2aad;
case 0x6a2ab3:goto L6a2ab3;
case 0x6a2ab6:c.instructions+=5;goto B6a2ab6;
case 0x6a2abc:c.instructions+=4;goto B6a2abc;
case 0x6a2abe:c.instructions+=3;goto B6a2abe;
case 0x6a2ac0:c.instructions+=2;goto B6a2ac0;
case 0x6a2ac3:c.instructions+=1;goto B6a2ac3;
case 0x6a2ac5:goto L6a2ac5;
case 0x6a2ac8:c.instructions+=4;goto B6a2ac8;
case 0x6a2acb:c.instructions+=3;goto B6a2acb;
case 0x6a2ace:c.instructions+=2;goto B6a2ace;
case 0x6a2ad2:c.instructions+=1;goto B6a2ad2;
case 0x6a2ad4:goto L6a2ad4;
case 0x6a2ad8:c.instructions+=1;goto B6a2ad8;
case 0x6a2ada:goto L6a2ada;
case 0x6a2add:c.instructions+=5;goto B6a2add;
case 0x6a2ae3:c.instructions+=4;goto B6a2ae3;
case 0x6a2ae5:c.instructions+=3;goto B6a2ae5;
case 0x6a2ae7:c.instructions+=2;goto B6a2ae7;
case 0x6a2aea:c.instructions+=1;goto B6a2aea;
case 0x6a2aec:goto L6a2aec;
case 0x6a2aef:c.instructions+=3;goto B6a2aef;
case 0x6a2af1:c.instructions+=2;goto B6a2af1;
case 0x6a2af4:c.instructions+=1;goto B6a2af4;
case 0x6a2af6:goto L6a2af6;
case 0x6a2af9:c.instructions+=1;goto B6a2af9;
case 0x6a2afc:goto L6a2afc;
case 0x6a2aff:c.instructions+=3;goto B6a2aff;
case 0x6a2b01:c.instructions+=2;goto B6a2b01;
case 0x6a2b04:c.instructions+=1;goto B6a2b04;
case 0x6a2b06:goto L6a2b06;
case 0x6a2b0a:c.instructions+=3;goto B6a2b0a;
case 0x6a2b0b:c.instructions+=2;goto B6a2b0b;
case 0x6a2b0e:c.instructions+=1;goto B6a2b0e;
case 0x6a2b10:goto L6a2b10;
case 0x6a2b13:c.instructions+=7;goto B6a2b13;
case 0x6a2b16:c.instructions+=6;goto B6a2b16;
case 0x6a2b19:c.instructions+=5;goto B6a2b19;
case 0x6a2b1c:c.instructions+=4;goto B6a2b1c;
case 0x6a2b1f:c.instructions+=3;goto B6a2b1f;
case 0x6a2b22:c.instructions+=2;goto B6a2b22;
case 0x6a2b25:c.instructions+=1;goto B6a2b25;
case 0x6a2b27:goto L6a2b27;
case 0x6a2b2a:goto L6a2b2a;
case 0x6a2b2c:goto L6a2b2c;
case 0x6a2b2d:c.instructions+=4;goto B6a2b2d;
case 0x6a2b2e:c.instructions+=3;goto B6a2b2e;
case 0x6a2b2f:c.instructions+=2;goto B6a2b2f;
case 0x6a2b30:c.instructions+=1;goto B6a2b30;
case 0x6a2b33:goto L6a2b33;
case 0x6a2b36:goto L6a2b36;
case 0x6a2b3a:c.instructions+=1;goto B6a2b3a;
case 0x6a2b3c:goto L6a2b3c;
case 0x6a2b40:c.instructions+=1;goto B6a2b40;
case 0x6a2b46:goto L6a2b46;
case 0x6a2b49:c.instructions+=6;goto B6a2b49;
case 0x6a2b4c:c.instructions+=5;goto B6a2b4c;
case 0x6a2b4f:c.instructions+=4;goto B6a2b4f;
case 0x6a2b51:c.instructions+=3;goto B6a2b51;
case 0x6a2b56:c.instructions+=2;goto B6a2b56;
case 0x6a2b5b:c.instructions+=1;goto B6a2b5b;
case 0x6a2b61:goto L6a2b61;
case 0x6a2b65:c.instructions+=1;goto B6a2b65;
case 0x6a2b6b:goto L6a2b6b;
case 0x6a2b6e:c.instructions+=2;goto B6a2b6e;
case 0x6a2b72:c.instructions+=1;goto B6a2b72;
case 0x6a2b78:goto L6a2b78;
case 0x6a2b7b:c.instructions+=5;goto B6a2b7b;
case 0x6a2b81:c.instructions+=4;goto B6a2b81;
case 0x6a2b83:c.instructions+=3;goto B6a2b83;
case 0x6a2b85:c.instructions+=2;goto B6a2b85;
case 0x6a2b88:c.instructions+=1;goto B6a2b88;
case 0x6a2b8e:goto L6a2b8e;
case 0x6a2b91:c.instructions+=4;goto B6a2b91;
case 0x6a2b94:c.instructions+=3;goto B6a2b94;
case 0x6a2b97:c.instructions+=2;goto B6a2b97;
case 0x6a2b9b:c.instructions+=1;goto B6a2b9b;
case 0x6a2ba1:goto L6a2ba1;
case 0x6a2ba5:c.instructions+=1;goto B6a2ba5;
case 0x6a2bab:goto L6a2bab;
case 0x6a2bae:c.instructions+=5;goto B6a2bae;
case 0x6a2bb4:c.instructions+=4;goto B6a2bb4;
case 0x6a2bb6:c.instructions+=3;goto B6a2bb6;
case 0x6a2bb8:c.instructions+=2;goto B6a2bb8;
case 0x6a2bbb:c.instructions+=1;goto B6a2bbb;
case 0x6a2bc1:goto L6a2bc1;
case 0x6a2bc4:c.instructions+=3;goto B6a2bc4;
case 0x6a2bc8:c.instructions+=2;goto B6a2bc8;
case 0x6a2bca:c.instructions+=1;goto B6a2bca;
case 0x6a2bcc:goto L6a2bcc;
case 0x6a2bcf:goto L6a2bcf;
case 0x6a2bd1:c.instructions+=2;goto B6a2bd1;
case 0x6a2bd4:c.instructions+=1;goto B6a2bd4;
case 0x6a2bd6:goto L6a2bd6;
case 0x6a2bd9:c.instructions+=3;goto B6a2bd9;
case 0x6a2bdc:c.instructions+=2;goto B6a2bdc;
case 0x6a2bdf:c.instructions+=1;goto B6a2bdf;
case 0x6a2be1:goto L6a2be1;
case 0x6a2be4:c.instructions+=17;goto B6a2be4;
case 0x6a2be7:c.instructions+=16;goto B6a2be7;
case 0x6a2bea:c.instructions+=15;goto B6a2bea;
case 0x6a2bed:c.instructions+=14;goto B6a2bed;
case 0x6a2bf1:c.instructions+=13;goto B6a2bf1;
case 0x6a2bf3:c.instructions+=12;goto B6a2bf3;
case 0x6a2bf6:c.instructions+=11;goto B6a2bf6;
case 0x6a2bf9:c.instructions+=10;goto B6a2bf9;
case 0x6a2bfc:c.instructions+=9;goto B6a2bfc;
case 0x6a2bfe:c.instructions+=8;goto B6a2bfe;
case 0x6a2c00:c.instructions+=7;goto B6a2c00;
case 0x6a2c03:c.instructions+=6;goto B6a2c03;
case 0x6a2c06:c.instructions+=5;goto B6a2c06;
case 0x6a2c09:c.instructions+=4;goto B6a2c09;
case 0x6a2c0b:c.instructions+=3;goto B6a2c0b;
case 0x6a2c0e:c.instructions+=2;goto B6a2c0e;
case 0x6a2c11:c.instructions+=1;goto B6a2c11;
case 0x6a2c14:goto L6a2c14;
case 0x6a2c17:c.instructions+=12;goto B6a2c17;
case 0x6a2c19:c.instructions+=11;goto B6a2c19;
case 0x6a2c1b:c.instructions+=10;goto B6a2c1b;
case 0x6a2c1e:c.instructions+=9;goto B6a2c1e;
case 0x6a2c21:c.instructions+=8;goto B6a2c21;
case 0x6a2c24:c.instructions+=7;goto B6a2c24;
case 0x6a2c27:c.instructions+=6;goto B6a2c27;
case 0x6a2c2a:c.instructions+=5;goto B6a2c2a;
case 0x6a2c2d:c.instructions+=4;goto B6a2c2d;
case 0x6a2c30:c.instructions+=3;goto B6a2c30;
case 0x6a2c33:c.instructions+=2;goto B6a2c33;
case 0x6a2c36:c.instructions+=1;goto B6a2c36;
case 0x6a2c38:goto L6a2c38;
case 0x6a2c3b:c.instructions+=4;goto B6a2c3b;
case 0x6a2c3e:c.instructions+=3;goto B6a2c3e;
case 0x6a2c41:c.instructions+=2;goto B6a2c41;
case 0x6a2c45:c.instructions+=1;goto B6a2c45;
case 0x6a2c47:goto L6a2c47;
case 0x6a2c4a:c.instructions+=2;goto B6a2c4a;
case 0x6a2c4e:c.instructions+=1;goto B6a2c4e;
case 0x6a2c50:goto L6a2c50;
case 0x6a2c53:c.instructions+=4;goto B6a2c53;
case 0x6a2c59:c.instructions+=3;goto B6a2c59;
case 0x6a2c5b:c.instructions+=2;goto B6a2c5b;
case 0x6a2c5e:c.instructions+=1;goto B6a2c5e;
case 0x6a2c64:goto L6a2c64;
case 0x6a2c67:c.instructions+=7;goto B6a2c67;
case 0x6a2c6a:c.instructions+=6;goto B6a2c6a;
case 0x6a2c6d:c.instructions+=5;goto B6a2c6d;
case 0x6a2c70:c.instructions+=4;goto B6a2c70;
case 0x6a2c72:c.instructions+=3;goto B6a2c72;
case 0x6a2c76:c.instructions+=2;goto B6a2c76;
case 0x6a2c79:c.instructions+=1;goto B6a2c79;
case 0x6a2c7b:goto L6a2c7b;
case 0x6a2c7e:goto L6a2c7e;
case 0x6a2c81:goto L6a2c81;
case 0x6a2c85:c.instructions+=1;goto B6a2c85;
case 0x6a2c8b:goto L6a2c8b;
case 0x6a2c8f:c.instructions+=1;goto B6a2c8f;
case 0x6a2c95:goto L6a2c95;
case 0x6a2c98:c.instructions+=6;goto B6a2c98;
case 0x6a2c9b:c.instructions+=5;goto B6a2c9b;
case 0x6a2c9e:c.instructions+=4;goto B6a2c9e;
case 0x6a2ca0:c.instructions+=3;goto B6a2ca0;
case 0x6a2ca5:c.instructions+=2;goto B6a2ca5;
case 0x6a2caa:c.instructions+=1;goto B6a2caa;
case 0x6a2cb0:goto L6a2cb0;
case 0x6a2cb4:c.instructions+=2;goto B6a2cb4;
case 0x6a2cb8:c.instructions+=1;goto B6a2cb8;
case 0x6a2cbe:goto L6a2cbe;
case 0x6a2cc1:c.instructions+=2;goto B6a2cc1;
case 0x6a2cc5:c.instructions+=1;goto B6a2cc5;
case 0x6a2cc7:goto L6a2cc7;
case 0x6a2cca:c.instructions+=4;goto B6a2cca;
case 0x6a2ccd:c.instructions+=3;goto B6a2ccd;
case 0x6a2cd0:c.instructions+=2;goto B6a2cd0;
case 0x6a2cd4:c.instructions+=1;goto B6a2cd4;
case 0x6a2cd6:goto L6a2cd6;
case 0x6a2cda:c.instructions+=1;goto B6a2cda;
case 0x6a2cdc:goto L6a2cdc;
case 0x6a2cdf:c.instructions+=5;goto B6a2cdf;
case 0x6a2ce5:c.instructions+=4;goto B6a2ce5;
case 0x6a2ce7:c.instructions+=3;goto B6a2ce7;
case 0x6a2ce9:c.instructions+=2;goto B6a2ce9;
case 0x6a2cec:c.instructions+=1;goto B6a2cec;
case 0x6a2cee:goto L6a2cee;
case 0x6a2cf1:c.instructions+=5;goto B6a2cf1;
case 0x6a2cf7:c.instructions+=4;goto B6a2cf7;
case 0x6a2cf9:c.instructions+=3;goto B6a2cf9;
case 0x6a2cfb:c.instructions+=2;goto B6a2cfb;
case 0x6a2cfe:c.instructions+=1;goto B6a2cfe;
case 0x6a2d00:goto L6a2d00;
case 0x6a2d07:c.instructions+=1;goto B6a2d07;
case 0x6a2d09:goto L6a2d09;
case 0x6a2d0c:goto L6a2d0c;
case 0x6a2d0f:c.instructions+=1;goto B6a2d0f;
case 0x6a2d14:goto L6a2d14;
case 0x6a2d17:c.instructions+=5;goto B6a2d17;
case 0x6a2d1d:c.instructions+=4;goto B6a2d1d;
case 0x6a2d1f:c.instructions+=3;goto B6a2d1f;
case 0x6a2d21:c.instructions+=2;goto B6a2d21;
case 0x6a2d24:c.instructions+=1;goto B6a2d24;
case 0x6a2d26:goto L6a2d26;
case 0x6a2d29:c.instructions+=5;goto B6a2d29;
case 0x6a2d2f:c.instructions+=4;goto B6a2d2f;
case 0x6a2d31:c.instructions+=3;goto B6a2d31;
case 0x6a2d33:c.instructions+=2;goto B6a2d33;
case 0x6a2d36:c.instructions+=1;goto B6a2d36;
case 0x6a2d38:goto L6a2d38;
case 0x6a2d3f:goto L6a2d3f;
case 0x6a2d42:c.instructions+=3;goto B6a2d42;
case 0x6a2d44:c.instructions+=2;goto B6a2d44;
case 0x6a2d46:c.instructions+=1;goto B6a2d46;
case 0x6a2d48:goto L6a2d48;
case 0x6a2d4b:goto L6a2d4b;
case 0x6a2d4d:c.instructions+=2;goto B6a2d4d;
case 0x6a2d50:c.instructions+=1;goto B6a2d50;
case 0x6a2d52:goto L6a2d52;
case 0x6a2d53:c.instructions+=3;goto B6a2d53;
case 0x6a2d56:c.instructions+=2;goto B6a2d56;
case 0x6a2d58:c.instructions+=1;goto B6a2d58;
case 0x6a2d5a:goto L6a2d5a;
case 0x6a2d5d:c.instructions+=13;goto B6a2d5d;
case 0x6a2d60:c.instructions+=12;goto B6a2d60;
case 0x6a2d64:c.instructions+=11;goto B6a2d64;
case 0x6a2d66:c.instructions+=10;goto B6a2d66;
case 0x6a2d69:c.instructions+=9;goto B6a2d69;
case 0x6a2d6c:c.instructions+=8;goto B6a2d6c;
case 0x6a2d6e:c.instructions+=7;goto B6a2d6e;
case 0x6a2d70:c.instructions+=6;goto B6a2d70;
case 0x6a2d73:c.instructions+=5;goto B6a2d73;
case 0x6a2d76:c.instructions+=4;goto B6a2d76;
case 0x6a2d78:c.instructions+=3;goto B6a2d78;
case 0x6a2d7b:c.instructions+=2;goto B6a2d7b;
case 0x6a2d7e:c.instructions+=1;goto B6a2d7e;
case 0x6a2d81:goto L6a2d81;
case 0x6a2d84:c.instructions+=10;goto B6a2d84;
case 0x6a2d86:c.instructions+=9;goto B6a2d86;
case 0x6a2d89:c.instructions+=8;goto B6a2d89;
case 0x6a2d8c:c.instructions+=7;goto B6a2d8c;
case 0x6a2d8e:c.instructions+=6;goto B6a2d8e;
case 0x6a2d91:c.instructions+=5;goto B6a2d91;
case 0x6a2d94:c.instructions+=4;goto B6a2d94;
case 0x6a2d97:c.instructions+=3;goto B6a2d97;
case 0x6a2d9a:c.instructions+=2;goto B6a2d9a;
case 0x6a2d9e:c.instructions+=1;goto B6a2d9e;
case 0x6a2da0:goto L6a2da0;
case 0x6a2da3:c.instructions+=4;goto B6a2da3;
case 0x6a2da6:c.instructions+=3;goto B6a2da6;
case 0x6a2da9:c.instructions+=2;goto B6a2da9;
case 0x6a2dad:c.instructions+=1;goto B6a2dad;
case 0x6a2daf:goto L6a2daf;
case 0x6a2db2:c.instructions+=6;goto B6a2db2;
case 0x6a2db5:c.instructions+=5;goto B6a2db5;
case 0x6a2db8:c.instructions+=4;goto B6a2db8;
case 0x6a2dba:c.instructions+=3;goto B6a2dba;
case 0x6a2dc0:c.instructions+=2;goto B6a2dc0;
case 0x6a2dc6:c.instructions+=1;goto B6a2dc6;
case 0x6a2dc8:goto L6a2dc8;
case 0x6a2dca:c.instructions+=2;goto B6a2dca;
case 0x6a2dcd:c.instructions+=1;goto B6a2dcd;
case 0x6a2dcf:goto L6a2dcf;
case 0x6a2dd2:c.instructions+=1;goto B6a2dd2;
case 0x6a2dd4:goto L6a2dd4;
case 0x6a2dd7:goto L6a2dd7;
case 0x6a2dd9:c.instructions+=1;goto B6a2dd9;
case 0x6a2ddb:goto L6a2ddb;
case 0x6a2ddc:c.instructions+=4;goto B6a2ddc;
case 0x6a2ddf:c.instructions+=3;goto B6a2ddf;
case 0x6a2de2:c.instructions+=2;goto B6a2de2;
case 0x6a2de5:c.instructions+=1;goto B6a2de5;
case 0x6a2de7:goto L6a2de7;
case 0x6a2dea:c.instructions+=8;goto B6a2dea;
case 0x6a2ded:c.instructions+=7;goto B6a2ded;
case 0x6a2df0:c.instructions+=6;goto B6a2df0;
case 0x6a2df3:c.instructions+=5;goto B6a2df3;
case 0x6a2df6:c.instructions+=4;goto B6a2df6;
case 0x6a2df9:c.instructions+=3;goto B6a2df9;
case 0x6a2dfc:c.instructions+=2;goto B6a2dfc;
case 0x6a2dff:c.instructions+=1;goto B6a2dff;
case 0x6a2e01:goto L6a2e01;
case 0x6a2e04:c.instructions+=2;goto B6a2e04;
case 0x6a2e06:c.instructions+=1;goto B6a2e06;
case 0x6a2e08:goto L6a2e08;
case 0x6a2e0b:c.instructions+=2;goto B6a2e0b;
case 0x6a2e0e:c.instructions+=1;goto B6a2e0e;
case 0x6a2e10:goto L6a2e10;
case 0x6a2e13:c.instructions+=1;goto B6a2e13;
case 0x6a2e15:goto L6a2e15;
case 0x6a2e18:c.instructions+=1;goto B6a2e18;
case 0x6a2e1a:goto L6a2e1a;
case 0x6a2e1d:c.instructions+=8;goto B6a2e1d;
case 0x6a2e20:c.instructions+=7;goto B6a2e20;
case 0x6a2e23:c.instructions+=6;goto B6a2e23;
case 0x6a2e26:c.instructions+=5;goto B6a2e26;
case 0x6a2e28:c.instructions+=4;goto B6a2e28;
case 0x6a2e2c:c.instructions+=3;goto B6a2e2c;
case 0x6a2e2f:c.instructions+=2;goto B6a2e2f;
case 0x6a2e32:c.instructions+=1;goto B6a2e32;
case 0x6a2e38:goto L6a2e38;
case 0x6a2e3d:goto L6a2e3d;
case 0x6a2e44:c.instructions+=1;goto B6a2e44;
case 0x6a2e46:goto L6a2e46;
case 0x6a2e4d:goto L6a2e4d;
case 0x6a2e53:c.instructions+=1;goto B6a2e53;
case 0x6a2e58:goto L6a2e58;
case 0x6a2e5a:c.instructions+=5;goto B6a2e5a;
case 0x6a2e5c:c.instructions+=4;goto B6a2e5c;
case 0x6a2e5e:c.instructions+=3;goto B6a2e5e;
case 0x6a2e61:c.instructions+=2;goto B6a2e61;
case 0x6a2e67:c.instructions+=1;goto B6a2e67;
case 0x6a2e6c:goto L6a2e6c;
case 0x6a2e6e:c.instructions+=1;goto B6a2e6e;
case 0x6a2e70:goto L6a2e70;
case 0x6a2e73:c.instructions+=2;goto B6a2e73;
case 0x6a2e79:c.instructions+=1;goto B6a2e79;
case 0x6a2e7e:goto L6a2e7e;
case 0x6a2e80:c.instructions+=1;goto B6a2e80;
case 0x6a2e82:goto L6a2e82;
case 0x6a2e88:c.instructions+=14;goto B6a2e88;
case 0x6a2e8b:c.instructions+=13;goto B6a2e8b;
case 0x6a2e8d:c.instructions+=12;goto B6a2e8d;
case 0x6a2e93:c.instructions+=11;goto B6a2e93;
case 0x6a2e96:c.instructions+=10;goto B6a2e96;
case 0x6a2e97:c.instructions+=9;goto B6a2e97;
case 0x6a2e98:c.instructions+=8;goto B6a2e98;
case 0x6a2e9a:c.instructions+=7;goto B6a2e9a;
case 0x6a2ea0:c.instructions+=6;goto B6a2ea0;
case 0x6a2ea1:c.instructions+=5;goto B6a2ea1;
case 0x6a2ea7:c.instructions+=4;goto B6a2ea7;
case 0x6a2ea8:c.instructions+=3;goto B6a2ea8;
case 0x6a2eaa:c.instructions+=2;goto B6a2eaa;
case 0x6a2ead:c.instructions+=1;goto B6a2ead;
case 0x6a2eb2:goto L6a2eb2;
case 0x6a2eb8:c.instructions+=2;goto B6a2eb8;
case 0x6a2eba:c.instructions+=1;goto B6a2eba;
case 0x6a2ebf:goto L6a2ebf;
case 0x6a2ec1:c.instructions+=1;goto B6a2ec1;
case 0x6a2ec6:goto L6a2ec6;
case 0x6a2ec8:c.instructions+=8;goto B6a2ec8;
case 0x6a2ec9:c.instructions+=7;goto B6a2ec9;
case 0x6a2ecb:c.instructions+=6;goto B6a2ecb;
case 0x6a2ece:c.instructions+=5;goto B6a2ece;
case 0x6a2ecf:c.instructions+=4;goto B6a2ecf;
case 0x6a2ed0:c.instructions+=3;goto B6a2ed0;
case 0x6a2ed1:c.instructions+=2;goto B6a2ed1;
case 0x6a2ed3:c.instructions+=1;goto B6a2ed3;
case 0x6a2ed8:goto L6a2ed8;
case 0x6a2eda:c.instructions+=3;goto B6a2eda;
case 0x6a2edc:c.instructions+=2;goto B6a2edc;
case 0x6a2edf:c.instructions+=1;goto B6a2edf;
case 0x6a2ee1:goto L6a2ee1;
case 0x6a2ee4:c.instructions+=7;goto B6a2ee4;
case 0x6a2ee7:c.instructions+=6;goto B6a2ee7;
case 0x6a2eea:c.instructions+=5;goto B6a2eea;
case 0x6a2eed:c.instructions+=4;goto B6a2eed;
case 0x6a2ef0:c.instructions+=3;goto B6a2ef0;
case 0x6a2ef3:c.instructions+=2;goto B6a2ef3;
case 0x6a2ef7:c.instructions+=1;goto B6a2ef7;
case 0x6a2ef9:goto L6a2ef9;
case 0x6a2efd:c.instructions+=1;goto B6a2efd;
case 0x6a2f01:goto L6a2f01;
case 0x6a2f02:c.instructions+=2;goto B6a2f02;
case 0x6a2f05:c.instructions+=1;goto B6a2f05;
case 0x6a2f07:goto L6a2f07;
case 0x6a2f09:c.instructions+=2;goto B6a2f09;
case 0x6a2f0c:c.instructions+=1;goto B6a2f0c;
case 0x6a2f0e:goto L6a2f0e;
case 0x6a2f11:c.instructions+=8;goto B6a2f11;
case 0x6a2f14:c.instructions+=7;goto B6a2f14;
case 0x6a2f17:c.instructions+=6;goto B6a2f17;
case 0x6a2f1a:c.instructions+=5;goto B6a2f1a;
case 0x6a2f1d:c.instructions+=4;goto B6a2f1d;
case 0x6a2f1e:c.instructions+=3;goto B6a2f1e;
case 0x6a2f21:c.instructions+=2;goto B6a2f21;
case 0x6a2f24:c.instructions+=1;goto B6a2f24;
case 0x6a2f26:goto L6a2f26;
case 0x6a2f28:c.instructions+=1;goto B6a2f28;
case 0x6a2f2d:goto L6a2f2d;
case 0x6a2f30:c.instructions+=3;goto B6a2f30;
case 0x6a2f32:c.instructions+=2;goto B6a2f32;
case 0x6a2f35:c.instructions+=1;goto B6a2f35;
case 0x6a2f3b:goto L6a2f3b;
case 0x6a2f3e:c.instructions+=7;goto B6a2f3e;
case 0x6a2f3f:c.instructions+=6;goto B6a2f3f;
case 0x6a2f42:c.instructions+=5;goto B6a2f42;
case 0x6a2f45:c.instructions+=4;goto B6a2f45;
case 0x6a2f47:c.instructions+=3;goto B6a2f47;
case 0x6a2f49:c.instructions+=2;goto B6a2f49;
case 0x6a2f4f:c.instructions+=1;goto B6a2f4f;
case 0x6a2f55:goto L6a2f55;
case 0x6a2f58:c.instructions+=3;goto B6a2f58;
case 0x6a2f5e:c.instructions+=2;goto B6a2f5e;
case 0x6a2f64:c.instructions+=1;goto B6a2f64;
case 0x6a2f66:goto L6a2f66;
case 0x6a2f6c:c.instructions+=1;goto B6a2f6c;
case 0x6a2f6e:goto L6a2f6e;
case 0x6a2f6f:c.instructions+=2;goto B6a2f6f;
case 0x6a2f71:c.instructions+=1;goto B6a2f71;
case 0x6a2f76:goto L6a2f76;
case 0x6a2f78:goto L6a2f78;
case 0x6a2f7e:c.instructions+=3;goto B6a2f7e;
case 0x6a2f80:c.instructions+=2;goto B6a2f80;
case 0x6a2f81:c.instructions+=1;goto B6a2f81;
case 0x6a2f83:goto L6a2f83;
case 0x6a2f88:goto L6a2f88;
case 0x6a2f8a:goto L6a2f8a;
case 0x6a2f8f:goto L6a2f8f;
case 0x6a2f91:c.instructions+=1;goto B6a2f91;
case 0x6a2f97:goto L6a2f97;
case 0x6a2f9a:c.instructions+=3;goto B6a2f9a;
case 0x6a2f9c:c.instructions+=2;goto B6a2f9c;
case 0x6a2f9f:c.instructions+=1;goto B6a2f9f;
case 0x6a2fa1:goto L6a2fa1;
case 0x6a2fa4:c.instructions+=4;goto B6a2fa4;
case 0x6a2fa7:c.instructions+=3;goto B6a2fa7;
case 0x6a2faa:c.instructions+=2;goto B6a2faa;
case 0x6a2fac:c.instructions+=1;goto B6a2fac;
case 0x6a2fb1:goto L6a2fb1;
case 0x6a2fb3:c.instructions+=1;goto B6a2fb3;
case 0x6a2fb9:goto L6a2fb9;
case 0x6a2fbc:c.instructions+=2;goto B6a2fbc;
case 0x6a2fbf:c.instructions+=1;goto B6a2fbf;
case 0x6a2fc1:goto L6a2fc1;
case 0x6a2fc3:c.instructions+=3;goto B6a2fc3;
case 0x6a2fc5:c.instructions+=2;goto B6a2fc5;
case 0x6a2fc7:c.instructions+=1;goto B6a2fc7;
case 0x6a2fc9:goto L6a2fc9;
case 0x6a2fcb:c.instructions+=3;goto B6a2fcb;
case 0x6a2fce:c.instructions+=2;goto B6a2fce;
case 0x6a2fd1:c.instructions+=1;goto B6a2fd1;
case 0x6a2fd4:goto L6a2fd4;
case 0x6a2fd7:c.instructions+=10;goto B6a2fd7;
case 0x6a2fda:c.instructions+=9;goto B6a2fda;
case 0x6a2fde:c.instructions+=8;goto B6a2fde;
case 0x6a2fe0:c.instructions+=7;goto B6a2fe0;
case 0x6a2fe2:c.instructions+=6;goto B6a2fe2;
case 0x6a2fe5:c.instructions+=5;goto B6a2fe5;
case 0x6a2fe9:c.instructions+=4;goto B6a2fe9;
case 0x6a2fec:c.instructions+=3;goto B6a2fec;
case 0x6a2fef:c.instructions+=2;goto B6a2fef;
case 0x6a2ff2:c.instructions+=1;goto B6a2ff2;
case 0x6a2ff4:goto L6a2ff4;
case 0x6a2ff7:c.instructions+=3;goto B6a2ff7;
case 0x6a2ff9:c.instructions+=2;goto B6a2ff9;
case 0x6a2ffb:c.instructions+=1;goto B6a2ffb;
default:missing_instruction(c.pc);}
B6a2000:L6a2000:{c.instructions+=4;NFSU2_TR(0x6a2000);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B6a2006:{NFSU2_TR(0x6a2006);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a2008:{NFSU2_TR(0x6a2008);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a200b:{NFSU2_TR(0x6a200b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2016;}}
}
B6a200d:L6a200d:{c.instructions+=2;NFSU2_TR(0x6a200d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a2010:{NFSU2_TR(0x6a2010);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a1d29u,6a1);}
}
B6a2016:L6a2016:{c.instructions+=4;NFSU2_TR(0x6a2016);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a201c:{NFSU2_TR(0x6a201c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a201e:{NFSU2_TR(0x6a201e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a2021:{NFSU2_TR(0x6a2021);
if(r1(R+514)){{goto L6a286a;}}
}
B6a2027:L6a2027:{c.instructions+=2;NFSU2_TR(0x6a2027);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a202a:{NFSU2_TR(0x6a202a);
TAIL_STATIC(0x6a1f6cu,6a1);
}
B6a202f:L6a202f:{c.instructions+=4;NFSU2_TR(0x6a202f);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B6a2035:{NFSU2_TR(0x6a2035);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a2037:{NFSU2_TR(0x6a2037);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a203a:{NFSU2_TR(0x6a203a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a204b;}}
}
B6a203c:L6a203c:{c.instructions+=2;NFSU2_TR(0x6a203c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a203f:{NFSU2_TR(0x6a203f);
if(r1(R+518)){{goto L6a204b;}}
}
B6a2041:L6a2041:{c.instructions+=3;NFSU2_TR(0x6a2041);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6a2043:{NFSU2_TR(0x6a2043);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2046:{NFSU2_TR(0x6a2046);
{goto L6a286a;}
}
B6a204b:L6a204b:{c.instructions+=4;NFSU2_TR(0x6a204b);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B6a2051:{NFSU2_TR(0x6a2051);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a2053:{NFSU2_TR(0x6a2053);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a2056:{NFSU2_TR(0x6a2056);
if(r1(R+514)){{goto L6a2061;}}
}
B6a2058:L6a2058:{c.instructions+=2;NFSU2_TR(0x6a2058);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a205b:{NFSU2_TR(0x6a205b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a1d29u,6a1);}
}
B6a2061:L6a2061:{c.instructions+=2;NFSU2_TR(0x6a2061);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6a2063:{NFSU2_TR(0x6a2063);
{goto L6a286a;}
}
B6a2068:L6a2068:{c.instructions+=3;NFSU2_TR(0x6a2068);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a206b:{NFSU2_TR(0x6a206b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a206e:{NFSU2_TR(0x6a206e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a20b5;}}
}
B6a2070:L6a2070:{c.instructions+=3;NFSU2_TR(0x6a2070);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2073:{NFSU2_TR(0x6a2073);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2079:{NFSU2_TR(0x6a2079);
if(r1(R+518)){TAIL_STATIC(0x6a1c16u,6a1);}
}
B6a207f:L6a207f:{c.instructions+=2;NFSU2_TR(0x6a207f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2085:{NFSU2_TR(0x6a2085);
if(r1(R+518)){TAIL_STATIC(0x6a1c16u,6a1);}
}
B6a208b:L6a208b:{c.instructions+=2;NFSU2_TR(0x6a208b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2091:{NFSU2_TR(0x6a2091);
if(r1(R+518)){{goto L6a2184;}}
}
B6a2097:L6a2097:{c.instructions+=2;NFSU2_TR(0x6a2097);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a209d:{NFSU2_TR(0x6a209d);
if(r1(R+518)){{goto L6a2176;}}
}
B6a20a3:L6a20a3:{c.instructions+=2;NFSU2_TR(0x6a20a3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a20a9:{NFSU2_TR(0x6a20a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a20b5;}}
}
B6a20ab:L6a20ab:{c.instructions+=2;NFSU2_TR(0x6a20ab);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a20af:{NFSU2_TR(0x6a20af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a1c16u,6a1);}
}
B6a20b5:L6a20b5:{c.instructions+=3;NFSU2_TR(0x6a20b5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a20b7:{NFSU2_TR(0x6a20b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a20ba:{NFSU2_TR(0x6a20ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a286a;}}
}
B6a20c0:L6a20c0:{c.instructions+=2;NFSU2_TR(0x6a20c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a20c7:{NFSU2_TR(0x6a20c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a232b;}}
}
B6a20cd:L6a20cd:{c.instructions+=4;NFSU2_TR(0x6a20cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a20d0:{NFSU2_TR(0x6a20d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a20d3:{NFSU2_TR(0x6a20d3);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a20d7:{NFSU2_TR(0x6a20d7);
if(r1(R+518)){{goto L6a211a;}}
}
B6a20d9:L6a20d9:{c.instructions+=7;NFSU2_TR(0x6a20d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a20dc:{NFSU2_TR(0x6a20dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a20df:{NFSU2_TR(0x6a20df);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a20e2:{NFSU2_TR(0x6a20e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a20e4:{NFSU2_TR(0x6a20e4);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6a20ea:{NFSU2_TR(0x6a20ea);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a20f0:{NFSU2_TR(0x6a20f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a211a;}}
}
B6a20f2:L6a20f2:{c.instructions+=2;NFSU2_TR(0x6a20f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a20f5:{NFSU2_TR(0x6a20f5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a211a;}}
}
B6a20f7:L6a20f7:{c.instructions+=1;NFSU2_TR(0x6a20f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a20fa:L6a20fa:{c.instructions+=3;NFSU2_TR(0x6a20fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a20fd:{NFSU2_TR(0x6a20fd);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a20ff:{NFSU2_TR(0x6a20ff);
if(r1(R+518)){{goto L6a210a;}}
}
B6a2101:L6a2101:{c.instructions+=4;NFSU2_TR(0x6a2101);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a2102:{NFSU2_TR(0x6a2102);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6a2105:{NFSU2_TR(0x6a2105);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a2108:{NFSU2_TR(0x6a2108);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a20fau);}goto L6a20fa;}}
}
B6a210a:L6a210a:{c.instructions+=2;NFSU2_TR(0x6a210a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a210d:{NFSU2_TR(0x6a210d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a211a;}}
}
B6a210f:L6a210f:{c.instructions+=4;NFSU2_TR(0x6a210f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2112:{NFSU2_TR(0x6a2112);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2115:{NFSU2_TR(0x6a2115);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+8))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a2118:{NFSU2_TR(0x6a2118);
if(r1(R+518)){{goto L6a2166;}}
}
B6a211a:L6a211a:{c.instructions+=2;NFSU2_TR(0x6a211a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a211e:{NFSU2_TR(0x6a211e);
if(r1(R+518)){{goto L6a2190;}}
}
B6a2120:L6a2120:{c.instructions+=8;NFSU2_TR(0x6a2120);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2123:{NFSU2_TR(0x6a2123);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2126:{NFSU2_TR(0x6a2126);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2129:{NFSU2_TR(0x6a2129);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a212c:{NFSU2_TR(0x6a212c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a212e:{NFSU2_TR(0x6a212e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6a2134:{NFSU2_TR(0x6a2134);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a213a:{NFSU2_TR(0x6a213a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2190;}}
}
B6a213c:L6a213c:{c.instructions+=3;NFSU2_TR(0x6a213c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a213e:{NFSU2_TR(0x6a213e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a2141:{NFSU2_TR(0x6a2141);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a2190;}}
}
B6a2143:L6a2143:{c.instructions+=1;NFSU2_TR(0x6a2143);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2146:L6a2146:{c.instructions+=3;NFSU2_TR(0x6a2146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6a2148:{NFSU2_TR(0x6a2148);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a214b:{NFSU2_TR(0x6a214b);
if(r1(R+518)){{goto L6a2156;}}
}
B6a214d:L6a214d:{c.instructions+=4;NFSU2_TR(0x6a214d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a214e:{NFSU2_TR(0x6a214e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6a2151:{NFSU2_TR(0x6a2151);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a2154:{NFSU2_TR(0x6a2154);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2146u);}goto L6a2146;}}
}
B6a2156:L6a2156:{c.instructions+=2;NFSU2_TR(0x6a2156);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a2159:{NFSU2_TR(0x6a2159);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a2190;}}
}
B6a215b:L6a215b:{c.instructions+=4;NFSU2_TR(0x6a215b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a215e:{NFSU2_TR(0x6a215e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2161:{NFSU2_TR(0x6a2161);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+8))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a2164:{NFSU2_TR(0x6a2164);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2190;}}
}
B6a2166:L6a2166:{c.instructions+=1;NFSU2_TR(0x6a2166);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a2168:L6a2168:{c.instructions+=6;NFSU2_TR(0x6a2168);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2169:{NFSU2_TR(0x6a2169);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a216a:{NFSU2_TR(0x6a216a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a216d:{NFSU2_TR(0x6a216d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a216f:{NFSU2_TR(0x6a216f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2171:{NFSU2_TR(0x6a2171);
TAIL_STATIC(0x6a1c03u,6a1);
}
B6a2176:L6a2176:{c.instructions+=2;NFSU2_TR(0x6a2176);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a217a:{NFSU2_TR(0x6a217a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a286a;}}
}
B6a2180:L6a2180:{c.instructions+=2;NFSU2_TR(0x6a2180);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6a2182:{NFSU2_TR(0x6a2182);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2168u);}goto L6a2168;}
}
B6a2184:L6a2184:{c.instructions+=2;NFSU2_TR(0x6a2184);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2188:{NFSU2_TR(0x6a2188);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a286a;}}
}
B6a218e:L6a218e:{c.instructions+=1;NFSU2_TR(0x6a218e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2166u);}goto L6a2166;}
}
B6a2190:L6a2190:{c.instructions+=1;NFSU2_TR(0x6a2190);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2194:L6a2194:{c.instructions+=2;NFSU2_TR(0x6a2194);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a2198:{NFSU2_TR(0x6a2198);
if(r1(R+518)){{goto L6a21a2;}}
}
B6a219a:L6a219a:{c.instructions+=3;NFSU2_TR(0x6a219a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a219d:{NFSU2_TR(0x6a219d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a21a0:{NFSU2_TR(0x6a21a0);
{goto L6a21a8;}
}
B6a21a2:L6a21a2:{c.instructions+=2;NFSU2_TR(0x6a21a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a21a5:{NFSU2_TR(0x6a21a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a21a8:L6a21a8:{c.instructions+=6;NFSU2_TR(0x6a21a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a21ab:{NFSU2_TR(0x6a21ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a21ae:{NFSU2_TR(0x6a21ae);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x2ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6a21b1:{NFSU2_TR(0x6a21b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a21b4:{NFSU2_TR(0x6a21b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a21b7:{NFSU2_TR(0x6a21b7);
if(r1(R+518)){{goto L6a222d;}}
}
B6a21b9:L6a21b9:{c.instructions+=7;NFSU2_TR(0x6a21b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a21bc:{NFSU2_TR(0x6a21bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a21bf:{NFSU2_TR(0x6a21bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a21c2:{NFSU2_TR(0x6a21c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a21c5:{NFSU2_TR(0x6a21c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a21c8:{NFSU2_TR(0x6a21c8);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a21cc:{NFSU2_TR(0x6a21cc);
if(r1(R+518)){{goto L6a231e;}}
}
B6a21d2:L6a21d2:{c.instructions+=7;NFSU2_TR(0x6a21d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a21d5:{NFSU2_TR(0x6a21d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a21d8:{NFSU2_TR(0x6a21d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a21db:{NFSU2_TR(0x6a21db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a21dd:{NFSU2_TR(0x6a21dd);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6a21e3:{NFSU2_TR(0x6a21e3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a21e9:{NFSU2_TR(0x6a21e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a231e;}}
}
B6a21ef:L6a21ef:{c.instructions+=3;NFSU2_TR(0x6a21ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a21f3:{NFSU2_TR(0x6a21f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a21f7:{NFSU2_TR(0x6a21f7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a222d;}}
}
B6a21f9:L6a21f9:{c.instructions+=2;NFSU2_TR(0x6a21f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a21fc:{NFSU2_TR(0x6a21fc);
{goto L6a2201;}
}
B6a21fe:L6a21fe:{c.instructions+=1;NFSU2_TR(0x6a21fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2201:L6a2201:{c.instructions+=3;NFSU2_TR(0x6a2201);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a2204:{NFSU2_TR(0x6a2204);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a2206:{NFSU2_TR(0x6a2206);
if(r1(R+518)){{goto L6a221b;}}
}
B6a2208:L6a2208:{c.instructions+=6;NFSU2_TR(0x6a2208);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a220b:{NFSU2_TR(0x6a220b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6a220e:{NFSU2_TR(0x6a220e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2211:{NFSU2_TR(0x6a2211);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2214:{NFSU2_TR(0x6a2214);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6a2217:{NFSU2_TR(0x6a2217);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a21feu);}goto L6a21fe;}}
}
B6a2219:L6a2219:{c.instructions+=1;NFSU2_TR(0x6a2219);
{goto L6a222d;}
}
B6a221b:L6a221b:{c.instructions+=6;NFSU2_TR(0x6a221b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a221e:{NFSU2_TR(0x6a221e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2221:{NFSU2_TR(0x6a2221);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2224:{NFSU2_TR(0x6a2224);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2227:{NFSU2_TR(0x6a2227);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a222a:{NFSU2_TR(0x6a222a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a222d:L6a222d:{c.instructions+=8;NFSU2_TR(0x6a222d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2230:{NFSU2_TR(0x6a2230);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2233:{NFSU2_TR(0x6a2233);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2236:{NFSU2_TR(0x6a2236);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2239:{NFSU2_TR(0x6a2239);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a223c:{NFSU2_TR(0x6a223c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a223f:{NFSU2_TR(0x6a223f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a2243:{NFSU2_TR(0x6a2243);
if(r1(R+518)){{goto L6a231e;}}
}
B6a2249:L6a2249:{c.instructions+=7;NFSU2_TR(0x6a2249);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a224c:{NFSU2_TR(0x6a224c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a224f:{NFSU2_TR(0x6a224f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2252:{NFSU2_TR(0x6a2252);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a2254:{NFSU2_TR(0x6a2254);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6a225a:{NFSU2_TR(0x6a225a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2260:{NFSU2_TR(0x6a2260);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a231e;}}
}
B6a2266:L6a2266:{c.instructions+=4;NFSU2_TR(0x6a2266);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a2269:{NFSU2_TR(0x6a2269);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a226b:{NFSU2_TR(0x6a226b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a226d:{NFSU2_TR(0x6a226d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a22b4;}}
}
B6a226f:L6a226f:{c.instructions+=1;NFSU2_TR(0x6a226f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2272:L6a2272:{c.instructions+=3;NFSU2_TR(0x6a2272);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2275:{NFSU2_TR(0x6a2275);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a2277:{NFSU2_TR(0x6a2277);
if(r1(R+518)){{goto L6a2283;}}
}
B6a2279:L6a2279:{c.instructions+=4;NFSU2_TR(0x6a2279);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a227a:{NFSU2_TR(0x6a227a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6a227d:{NFSU2_TR(0x6a227d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6a227f:{NFSU2_TR(0x6a227f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2272u);}goto L6a2272;}}
}
B6a2281:L6a2281:{c.instructions+=1;NFSU2_TR(0x6a2281);
{goto L6a22b1;}
}
B6a2283:L6a2283:{c.instructions+=3;NFSU2_TR(0x6a2283);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a2287:{NFSU2_TR(0x6a2287);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a228a:{NFSU2_TR(0x6a228a);
if(r1(R+518)){{goto L6a2293;}}
}
B6a228c:L6a228c:{c.instructions+=3;NFSU2_TR(0x6a228c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a228f:{NFSU2_TR(0x6a228f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6a2291:{NFSU2_TR(0x6a2291);
{goto L6a2299;}
}
B6a2293:L6a2293:{c.instructions+=2;NFSU2_TR(0x6a2293);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6a2296:{NFSU2_TR(0x6a2296);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a2299:L6a2299:{c.instructions+=8;NFSU2_TR(0x6a2299);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a229c:{NFSU2_TR(0x6a229c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a229f:{NFSU2_TR(0x6a229f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a22a2:{NFSU2_TR(0x6a22a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a22a5:{NFSU2_TR(0x6a22a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a22a8:{NFSU2_TR(0x6a22a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a22ab:{NFSU2_TR(0x6a22ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a22ae:{NFSU2_TR(0x6a22ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a22b1:L6a22b1:{c.instructions+=1;NFSU2_TR(0x6a22b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a22b4:L6a22b4:{c.instructions+=2;NFSU2_TR(0x6a22b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a22b8:{NFSU2_TR(0x6a22b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2316;}}
}
B6a22ba:L6a22ba:{c.instructions+=8;NFSU2_TR(0x6a22ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a22bd:{NFSU2_TR(0x6a22bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a22c0:{NFSU2_TR(0x6a22c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a22c3:{NFSU2_TR(0x6a22c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a22c6:{NFSU2_TR(0x6a22c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a22c9:{NFSU2_TR(0x6a22c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a22cc:{NFSU2_TR(0x6a22cc);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a22d0:{NFSU2_TR(0x6a22d0);
if(r1(R+518)){{goto L6a231e;}}
}
B6a22d2:L6a22d2:{c.instructions+=7;NFSU2_TR(0x6a22d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a22d5:{NFSU2_TR(0x6a22d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a22d8:{NFSU2_TR(0x6a22d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a22db:{NFSU2_TR(0x6a22db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a22dd:{NFSU2_TR(0x6a22dd);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6a22e3:{NFSU2_TR(0x6a22e3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a22e9:{NFSU2_TR(0x6a22e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a231e;}}
}
B6a22eb:L6a22eb:{c.instructions+=3;NFSU2_TR(0x6a22eb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a22ed:{NFSU2_TR(0x6a22ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a22f0:{NFSU2_TR(0x6a22f0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a2316;}}
}
B6a22f2:L6a22f2:{c.instructions+=1;NFSU2_TR(0x6a22f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a22f5:L6a22f5:{c.instructions+=2;NFSU2_TR(0x6a22f5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a22f7:{NFSU2_TR(0x6a22f7);
if(r1(R+518)){{goto L6a2304;}}
}
B6a22f9:L6a22f9:{c.instructions+=4;NFSU2_TR(0x6a22f9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a22fa:{NFSU2_TR(0x6a22fa);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6a22fd:{NFSU2_TR(0x6a22fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a2300:{NFSU2_TR(0x6a2300);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a22f5u);}goto L6a22f5;}}
}
B6a2302:L6a2302:{c.instructions+=1;NFSU2_TR(0x6a2302);
{goto L6a2316;}
}
B6a2304:L6a2304:{c.instructions+=6;NFSU2_TR(0x6a2304);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2307:{NFSU2_TR(0x6a2307);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a230a:{NFSU2_TR(0x6a230a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a230d:{NFSU2_TR(0x6a230d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2310:{NFSU2_TR(0x6a2310);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2313:{NFSU2_TR(0x6a2313);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2316:L6a2316:{c.instructions+=3;NFSU2_TR(0x6a2316);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2319:{NFSU2_TR(0x6a2319);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a231c:{NFSU2_TR(0x6a231c);
if(r1(R+518)){{goto L6a2358;}}
}
B6a231e:L6a231e:{c.instructions+=3;NFSU2_TR(0x6a231e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2321:{NFSU2_TR(0x6a2321);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x8ull))));
}
B6a2325:{NFSU2_TR(0x6a2325);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2194u);}goto L6a2194;}}
}
B6a232b:L6a232b:{c.instructions+=2;NFSU2_TR(0x6a232b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2332:{NFSU2_TR(0x6a2332);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2429;}}
}
B6a2338:L6a2338:{c.instructions+=9;NFSU2_TR(0x6a2338);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a233b:{NFSU2_TR(0x6a233b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a233d:{NFSU2_TR(0x6a233d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2340:{NFSU2_TR(0x6a2340);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2343:{NFSU2_TR(0x6a2343);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2346:{NFSU2_TR(0x6a2346);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2349:{NFSU2_TR(0x6a2349);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a234c:{NFSU2_TR(0x6a234c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a234f:{NFSU2_TR(0x6a234f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2352:L6a2352:{c.instructions+=2;NFSU2_TR(0x6a2352);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a2356:{NFSU2_TR(0x6a2356);
{goto L6a23c5;}
}
B6a2358:L6a2358:{c.instructions+=3;NFSU2_TR(0x6a2358);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a235b:{NFSU2_TR(0x6a235b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a235e:{NFSU2_TR(0x6a235e);
{goto L6a286a;}
}
B6a2363:L6a2363:{c.instructions+=7;NFSU2_TR(0x6a2363);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2366:{NFSU2_TR(0x6a2366);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2369:{NFSU2_TR(0x6a2369);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a236c:{NFSU2_TR(0x6a236c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a236e:{NFSU2_TR(0x6a236e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a2373:{NFSU2_TR(0x6a2373);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a2378:{NFSU2_TR(0x6a2378);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2380;}}
}
B6a237a:L6a237a:{c.instructions+=2;NFSU2_TR(0x6a237a);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6a237e:{NFSU2_TR(0x6a237e);
{goto L6a238b;}
}
B6a2380:L6a2380:{c.instructions+=2;NFSU2_TR(0x6a2380);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a2385:{NFSU2_TR(0x6a2385);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a23da;}}
}
B6a2387:L6a2387:{c.instructions+=1;NFSU2_TR(0x6a2387);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6a238b:L6a238b:{c.instructions+=9;NFSU2_TR(0x6a238b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a238d:{NFSU2_TR(0x6a238d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a238f:{NFSU2_TR(0x6a238f);
__builtin_memmove((R+8),(R+518),1);
}
B6a2392:{NFSU2_TR(0x6a2392);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a2394:{NFSU2_TR(0x6a2394);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2397:{NFSU2_TR(0x6a2397);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a2399:{NFSU2_TR(0x6a2399);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a239b:{NFSU2_TR(0x6a239b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a239e:{NFSU2_TR(0x6a239e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a23c0;}}
}
B6a23a0:L6a23a0:{c.instructions+=2;NFSU2_TR(0x6a23a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a23a3:{NFSU2_TR(0x6a23a3);
{goto L6a23a8;}
}
B6a23a5:L6a23a5:{c.instructions+=1;NFSU2_TR(0x6a23a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a23a8:L6a23a8:{c.instructions+=2;NFSU2_TR(0x6a23a8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a23aa:{NFSU2_TR(0x6a23aa);
if(r1(R+518)){{goto L6a23ba;}}
}
B6a23ac:L6a23ac:{c.instructions+=5;NFSU2_TR(0x6a23ac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a23ad:{NFSU2_TR(0x6a23ad);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6a23b0:{NFSU2_TR(0x6a23b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a23b3:{NFSU2_TR(0x6a23b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a23b6:{NFSU2_TR(0x6a23b6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a23a5u);}goto L6a23a5;}}
}
B6a23b8:L6a23b8:{c.instructions+=1;NFSU2_TR(0x6a23b8);
{goto L6a23c0;}
}
B6a23ba:L6a23ba:{c.instructions+=2;NFSU2_TR(0x6a23ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a23bd:{NFSU2_TR(0x6a23bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a23c0:L6a23c0:{c.instructions+=2;NFSU2_TR(0x6a23c0);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6a23c3:{NFSU2_TR(0x6a23c3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a2406;}}
}
B6a23c5:L6a23c5:{c.instructions+=7;NFSU2_TR(0x6a23c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a23c8:{NFSU2_TR(0x6a23c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a23cb:{NFSU2_TR(0x6a23cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a23ce:{NFSU2_TR(0x6a23ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a23d1:{NFSU2_TR(0x6a23d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a23d4:{NFSU2_TR(0x6a23d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a23d8:{NFSU2_TR(0x6a23d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2363u);}goto L6a2363;}}
}
B6a23da:L6a23da:{c.instructions+=4;NFSU2_TR(0x6a23da);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6a23de:{NFSU2_TR(0x6a23de);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6a23e1:{NFSU2_TR(0x6a23e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B6a23e4:{NFSU2_TR(0x6a23e4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2352u);}goto L6a2352;}}
}
B6a23ea:L6a23ea:{c.instructions+=3;NFSU2_TR(0x6a23ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a23ed:{NFSU2_TR(0x6a23ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a23f0:{NFSU2_TR(0x6a23f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2429;}}
}
B6a23f2:L6a23f2:{c.instructions+=3;NFSU2_TR(0x6a23f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a23f5:{NFSU2_TR(0x6a23f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a23f8:{NFSU2_TR(0x6a23f8);
if(r1(R+518)){{goto L6a2429;}}
}
B6a23fa:L6a23fa:{c.instructions+=3;NFSU2_TR(0x6a23fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a23fd:{NFSU2_TR(0x6a23fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2400:{NFSU2_TR(0x6a2400);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2410;}}
}
B6a2402:L6a2402:{c.instructions+=2;NFSU2_TR(0x6a2402);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6a2404:{NFSU2_TR(0x6a2404);
{goto L6a2416;}
}
B6a2406:L6a2406:{c.instructions+=2;NFSU2_TR(0x6a2406);
w4(R+0,u32(0x80004005ull));
}
B6a240b:{NFSU2_TR(0x6a240b);
{goto L6a286c;}
}
B6a2410:L6a2410:{c.instructions+=1;NFSU2_TR(0x6a2410);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2416:L6a2416:{c.instructions+=8;NFSU2_TR(0x6a2416);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2417:{NFSU2_TR(0x6a2417);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2418:{NFSU2_TR(0x6a2418);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a241b:{NFSU2_TR(0x6a241b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a241d:{NFSU2_TR(0x6a241d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a241f:{NFSU2_TR(0x6a241f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a2422:{NFSU2_TR(0x6a2422);
__builtin_memmove((R+4),(R+12),4);
}
B6a2424:{NFSU2_TR(0x6a2424);
{goto L6a283b;}
}
B6a2429:L6a2429:{c.instructions+=3;NFSU2_TR(0x6a2429);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x20200000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2430:{NFSU2_TR(0x6a2430);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2433:{NFSU2_TR(0x6a2433);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2490;}}
}
B6a2435:L6a2435:{c.instructions+=7;NFSU2_TR(0x6a2435);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2438:{NFSU2_TR(0x6a2438);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a243b:{NFSU2_TR(0x6a243b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a243e:{NFSU2_TR(0x6a243e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2441:{NFSU2_TR(0x6a2441);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a2444:{NFSU2_TR(0x6a2444);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a2448:{NFSU2_TR(0x6a2448);
if(r1(R+518)){{goto L6a2490;}}
}
B6a244a:L6a244a:{c.instructions+=2;NFSU2_TR(0x6a244a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a244e:{NFSU2_TR(0x6a244e);
if(r1(R+518)){{goto L6a2490;}}
}
B6a2450:L6a2450:{c.instructions+=7;NFSU2_TR(0x6a2450);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2453:{NFSU2_TR(0x6a2453);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2456:{NFSU2_TR(0x6a2456);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2459:{NFSU2_TR(0x6a2459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a245b:{NFSU2_TR(0x6a245b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6a2461:{NFSU2_TR(0x6a2461);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2467:{NFSU2_TR(0x6a2467);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2490;}}
}
B6a2469:L6a2469:{c.instructions+=4;NFSU2_TR(0x6a2469);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a246c:{NFSU2_TR(0x6a246c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a246e:{NFSU2_TR(0x6a246e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a2470:{NFSU2_TR(0x6a2470);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a2481;}}
}
B6a2472:L6a2472:{c.instructions+=1;NFSU2_TR(0x6a2472);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a2475:L6a2475:{c.instructions+=2;NFSU2_TR(0x6a2475);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a2477:{NFSU2_TR(0x6a2477);
if(r1(R+518)){{goto L6a2481;}}
}
B6a2479:L6a2479:{c.instructions+=4;NFSU2_TR(0x6a2479);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a247a:{NFSU2_TR(0x6a247a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6a247d:{NFSU2_TR(0x6a247d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6a247f:{NFSU2_TR(0x6a247f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2475u);}goto L6a2475;}}
}
B6a2481:L6a2481:{c.instructions+=4;NFSU2_TR(0x6a2481);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2484:{NFSU2_TR(0x6a2484);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2487:{NFSU2_TR(0x6a2487);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a248a:{NFSU2_TR(0x6a248a);
if(r1(R+518)){{goto L6a2864;}}
}
B6a2490:L6a2490:{c.instructions+=7;NFSU2_TR(0x6a2490);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2493:{NFSU2_TR(0x6a2493);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a2496:{NFSU2_TR(0x6a2496);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2499:{NFSU2_TR(0x6a2499);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a249c:{NFSU2_TR(0x6a249c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a249f:{NFSU2_TR(0x6a249f);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a24a3:{NFSU2_TR(0x6a24a3);
if(r1(R+518)){{goto L6a286a;}}
}
B6a24a9:L6a24a9:{c.instructions+=6;NFSU2_TR(0x6a24a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a24ac:{NFSU2_TR(0x6a24ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a24af:{NFSU2_TR(0x6a24af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a24b2:{NFSU2_TR(0x6a24b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a24b5:{NFSU2_TR(0x6a24b5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a24b9:{NFSU2_TR(0x6a24b9);
if(r1(R+518)){{goto L6a286a;}}
}
B6a24bf:L6a24bf:{c.instructions+=2;NFSU2_TR(0x6a24bf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a24c6:{NFSU2_TR(0x6a24c6);
if(r1(R+518)){{goto L6a24de;}}
}
B6a24c8:L6a24c8:{c.instructions+=2;NFSU2_TR(0x6a24c8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x20200000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a24cf:{NFSU2_TR(0x6a24cf);
if(r1(R+518)){{goto L6a24de;}}
}
B6a24d1:L6a24d1:{c.instructions+=2;NFSU2_TR(0x6a24d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x20300000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a24d8:{NFSU2_TR(0x6a24d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a25cc;}}
}
B6a24de:L6a24de:{c.instructions+=14;NFSU2_TR(0x6a24de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a24e1:{NFSU2_TR(0x6a24e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a24e4:{NFSU2_TR(0x6a24e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a24e7:{NFSU2_TR(0x6a24e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a24ea:{NFSU2_TR(0x6a24ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a24ed:{NFSU2_TR(0x6a24ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a24f0:{NFSU2_TR(0x6a24f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a24f3:{NFSU2_TR(0x6a24f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a24f6:{NFSU2_TR(0x6a24f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6a24f8:{NFSU2_TR(0x6a24f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a24fb:{NFSU2_TR(0x6a24fb);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfff00000ull))));
}
B6a2501:{NFSU2_TR(0x6a2501);
w4(R+0,u32(0x10100000ull));
}
B6a2506:{NFSU2_TR(0x6a2506);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2508:{NFSU2_TR(0x6a2508);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a25c9;}}
}
B6a250e:L6a250e:{c.instructions+=4;NFSU2_TR(0x6a250e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6a2510:{NFSU2_TR(0x6a2510);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfff00000ull))));
}
B6a2516:{NFSU2_TR(0x6a2516);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2518:{NFSU2_TR(0x6a2518);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a25c9;}}
}
B6a251e:L6a251e:{c.instructions+=5;NFSU2_TR(0x6a251e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2521:{NFSU2_TR(0x6a2521);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a2524:{NFSU2_TR(0x6a2524);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2528:{NFSU2_TR(0x6a2528);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a252a:{NFSU2_TR(0x6a252a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a2541;}}
}
B6a252c:L6a252c:{c.instructions+=1;NFSU2_TR(0x6a252c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a252f:L6a252f:{c.instructions+=3;NFSU2_TR(0x6a252f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2532:{NFSU2_TR(0x6a2532);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a2534:{NFSU2_TR(0x6a2534);
if(r1(R+518)){{goto L6a2541;}}
}
B6a2536:L6a2536:{c.instructions+=4;NFSU2_TR(0x6a2536);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2539:{NFSU2_TR(0x6a2539);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6a253c:{NFSU2_TR(0x6a253c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6a253f:{NFSU2_TR(0x6a253f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a252fu);}goto L6a252f;}}
}
B6a2541:L6a2541:{c.instructions+=3;NFSU2_TR(0x6a2541);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a2543:{NFSU2_TR(0x6a2543);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2546:{NFSU2_TR(0x6a2546);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a255b;}}
}
B6a2548:L6a2548:{c.instructions+=1;NFSU2_TR(0x6a2548);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a254b:L6a254b:{c.instructions+=3;NFSU2_TR(0x6a254b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a254e:{NFSU2_TR(0x6a254e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a2550:{NFSU2_TR(0x6a2550);
if(r1(R+518)){{goto L6a255b;}}
}
B6a2552:L6a2552:{c.instructions+=4;NFSU2_TR(0x6a2552);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6a2553:{NFSU2_TR(0x6a2553);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6a2556:{NFSU2_TR(0x6a2556);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6a2559:{NFSU2_TR(0x6a2559);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a254bu);}goto L6a254b;}}
}
B6a255b:L6a255b:{c.instructions+=3;NFSU2_TR(0x6a255b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a255d:{NFSU2_TR(0x6a255d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2560:{NFSU2_TR(0x6a2560);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a2578;}}
}
B6a2562:L6a2562:{c.instructions+=1;NFSU2_TR(0x6a2562);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2565:L6a2565:{c.instructions+=3;NFSU2_TR(0x6a2565);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a2568:{NFSU2_TR(0x6a2568);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+12))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a256a:{NFSU2_TR(0x6a256a);
if(r1(R+518)){{goto L6a2575;}}
}
B6a256c:L6a256c:{c.instructions+=4;NFSU2_TR(0x6a256c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6a256d:{NFSU2_TR(0x6a256d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6a2570:{NFSU2_TR(0x6a2570);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6a2573:{NFSU2_TR(0x6a2573);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2565u);}goto L6a2565;}}
}
B6a2575:L6a2575:{c.instructions+=1;NFSU2_TR(0x6a2575);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a2578:L6a2578:{c.instructions+=2;NFSU2_TR(0x6a2578);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a257f:{NFSU2_TR(0x6a257f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a258f;}}
}
B6a2581:L6a2581:{c.instructions+=5;NFSU2_TR(0x6a2581);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2584:{NFSU2_TR(0x6a2584);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2587:{NFSU2_TR(0x6a2587);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a258a:{NFSU2_TR(0x6a258a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a258d:{NFSU2_TR(0x6a258d);
{goto L6a259b;}
}
B6a258f:L6a258f:{c.instructions+=4;NFSU2_TR(0x6a258f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2592:{NFSU2_TR(0x6a2592);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2595:{NFSU2_TR(0x6a2595);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2598:{NFSU2_TR(0x6a2598);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a259b:L6a259b:{c.instructions+=15;NFSU2_TR(0x6a259b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a259e:{NFSU2_TR(0x6a259e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a25a1:{NFSU2_TR(0x6a25a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a25a4:{NFSU2_TR(0x6a25a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a25a7:{NFSU2_TR(0x6a25a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a25aa:{NFSU2_TR(0x6a25aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a25ad:{NFSU2_TR(0x6a25ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a25b0:{NFSU2_TR(0x6a25b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a25b3:{NFSU2_TR(0x6a25b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a25b6:{NFSU2_TR(0x6a25b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a25b9:{NFSU2_TR(0x6a25b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a25bc:{NFSU2_TR(0x6a25bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a25bf:{NFSU2_TR(0x6a25bf);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B6a25c1:{NFSU2_TR(0x6a25c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a25c4:{NFSU2_TR(0x6a25c4);
{goto L6a286a;}
}
B6a25c9:L6a25c9:{c.instructions+=1;NFSU2_TR(0x6a25c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a25cc:L6a25cc:{c.instructions+=2;NFSU2_TR(0x6a25cc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a25d3:{NFSU2_TR(0x6a25d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a286a;}}
}
B6a25d9:L6a25d9:{c.instructions+=2;NFSU2_TR(0x6a25d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a25dc:{NFSU2_TR(0x6a25dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a26b1;}}
}
B6a25e2:L6a25e2:{c.instructions+=8;NFSU2_TR(0x6a25e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a25e5:{NFSU2_TR(0x6a25e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a25e8:{NFSU2_TR(0x6a25e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a25eb:{NFSU2_TR(0x6a25eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a25ed:{NFSU2_TR(0x6a25ed);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a25f2:{NFSU2_TR(0x6a25f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a25f7:{NFSU2_TR(0x6a25f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a25fa:{NFSU2_TR(0x6a25fa);
if(r1(R+518)){{goto L6a2607;}}
}
B6a25fc:L6a25fc:{c.instructions+=2;NFSU2_TR(0x6a25fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a2601:{NFSU2_TR(0x6a2601);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a26b1;}}
}
B6a2607:L6a2607:{c.instructions+=3;NFSU2_TR(0x6a2607);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a2609:{NFSU2_TR(0x6a2609);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a260c:{NFSU2_TR(0x6a260c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a261e;}}
}
B6a260e:L6a260e:{c.instructions+=1;NFSU2_TR(0x6a260e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a2611:L6a2611:{c.instructions+=2;NFSU2_TR(0x6a2611);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a2613:{NFSU2_TR(0x6a2613);
if(r1(R+518)){{goto L6a261e;}}
}
B6a2615:L6a2615:{c.instructions+=4;NFSU2_TR(0x6a2615);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a2616:{NFSU2_TR(0x6a2616);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6a2619:{NFSU2_TR(0x6a2619);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a261c:{NFSU2_TR(0x6a261c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2611u);}goto L6a2611;}}
}
B6a261e:L6a261e:{c.instructions+=11;NFSU2_TR(0x6a261e);
__builtin_memmove((R+24),(R+0),4);
}
B6a2620:{NFSU2_TR(0x6a2620);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2623:{NFSU2_TR(0x6a2623);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6a2626:{NFSU2_TR(0x6a2626);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a2629:{NFSU2_TR(0x6a2629);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a262c:{NFSU2_TR(0x6a262c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a262f:{NFSU2_TR(0x6a262f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2632:{NFSU2_TR(0x6a2632);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a2635:{NFSU2_TR(0x6a2635);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a2638:{NFSU2_TR(0x6a2638);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a263c:{NFSU2_TR(0x6a263c);
if(r1(R+518)){{goto L6a26ab;}}
}
B6a263e:L6a263e:{c.instructions+=2;NFSU2_TR(0x6a263e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2642:{NFSU2_TR(0x6a2642);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a26ab;}}
}
B6a2644:L6a2644:{c.instructions+=6;NFSU2_TR(0x6a2644);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2647:{NFSU2_TR(0x6a2647);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a264a:{NFSU2_TR(0x6a264a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a264c:{NFSU2_TR(0x6a264c);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6a2652:{NFSU2_TR(0x6a2652);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2658:{NFSU2_TR(0x6a2658);
if(r1(R+518)){{goto L6a2662;}}
}
B6a265a:L6a265a:{c.instructions+=2;NFSU2_TR(0x6a265a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2660:{NFSU2_TR(0x6a2660);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a26ab;}}
}
B6a2662:L6a2662:{c.instructions+=2;NFSU2_TR(0x6a2662);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2665:{NFSU2_TR(0x6a2665);
if(r1(R+518)){{goto L6a26ab;}}
}
B6a2667:L6a2667:{c.instructions+=3;NFSU2_TR(0x6a2667);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a266b:{NFSU2_TR(0x6a266b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a266f:{NFSU2_TR(0x6a266f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a2697;}}
}
B6a2671:L6a2671:{c.instructions+=1;NFSU2_TR(0x6a2671);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2674:L6a2674:{c.instructions+=8;NFSU2_TR(0x6a2674);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a2677:{NFSU2_TR(0x6a2677);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a267a:{NFSU2_TR(0x6a267a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a267d:{NFSU2_TR(0x6a267d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6a2680:{NFSU2_TR(0x6a2680);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a2683:{NFSU2_TR(0x6a2683);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2686:{NFSU2_TR(0x6a2686);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a268a:{NFSU2_TR(0x6a268a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2697;}}
}
B6a268c:L6a268c:{c.instructions+=4;NFSU2_TR(0x6a268c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a268f:{NFSU2_TR(0x6a268f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2692:{NFSU2_TR(0x6a2692);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6a2695:{NFSU2_TR(0x6a2695);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2674u);}goto L6a2674;}}
}
B6a2697:L6a2697:{c.instructions+=6;NFSU2_TR(0x6a2697);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a269a:{NFSU2_TR(0x6a269a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a269d:{NFSU2_TR(0x6a269d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a26a0:{NFSU2_TR(0x6a26a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a26a3:{NFSU2_TR(0x6a26a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a26a6:{NFSU2_TR(0x6a26a6);
TAIL_STATIC(0x6a1eb7u,6a1);
}
B6a26ab:L6a26ab:{c.instructions+=2;NFSU2_TR(0x6a26ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a26ae:{NFSU2_TR(0x6a26ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a26b1:L6a26b1:{c.instructions+=2;NFSU2_TR(0x6a26b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a26b8:{NFSU2_TR(0x6a26b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a286a;}}
}
B6a26be:L6a26be:{c.instructions+=5;NFSU2_TR(0x6a26be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a26c1:{NFSU2_TR(0x6a26c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a26c3:{NFSU2_TR(0x6a26c3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6a26c6:{NFSU2_TR(0x6a26c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a26c9:{NFSU2_TR(0x6a26c9);
if(r1(R+518)){{goto L6a26e2;}}
}
B6a26cb:L6a26cb:{c.instructions+=4;NFSU2_TR(0x6a26cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a26ce:{NFSU2_TR(0x6a26ce);
__builtin_memmove((R+4),(R+12),4);
}
B6a26d0:{NFSU2_TR(0x6a26d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a26d1:{NFSU2_TR(0x6a26d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a26d6ull));
TAIL_STATIC(0x69b2fdu,69b);
}
B6a26d6:L6a26d6:{c.instructions+=2;NFSU2_TR(0x6a26d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a26d8:{NFSU2_TR(0x6a26d8);
if(r1(R+518)){{goto L6a26e2;}}
}
B6a26da:L6a26da:{c.instructions+=2;NFSU2_TR(0x6a26da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a26dd:{NFSU2_TR(0x6a26dd);
{goto L6a2864;}
}
B6a26e2:L6a26e2:{c.instructions+=5;NFSU2_TR(0x6a26e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a26e5:{NFSU2_TR(0x6a26e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a26e7:{NFSU2_TR(0x6a26e7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6a26ea:{NFSU2_TR(0x6a26ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a26ed:{NFSU2_TR(0x6a26ed);
if(r1(R+518)){{goto L6a2709;}}
}
B6a26ef:L6a26ef:{c.instructions+=4;NFSU2_TR(0x6a26ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a26f0:{NFSU2_TR(0x6a26f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a26f3:{NFSU2_TR(0x6a26f3);
__builtin_memmove((R+4),(R+12),4);
}
B6a26f5:{NFSU2_TR(0x6a26f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a26faull));
TAIL_STATIC(0x69b2fdu,69b);
}
B6a26fa:L6a26fa:{c.instructions+=2;NFSU2_TR(0x6a26fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a26fc:{NFSU2_TR(0x6a26fc);
if(r1(R+518)){{goto L6a2709;}}
}
B6a26fe:L6a26fe:{c.instructions+=3;NFSU2_TR(0x6a26fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2701:{NFSU2_TR(0x6a2701);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2704:{NFSU2_TR(0x6a2704);
{goto L6a286a;}
}
B6a2709:L6a2709:{c.instructions+=11;NFSU2_TR(0x6a2709);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a270d:{NFSU2_TR(0x6a270d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2711:{NFSU2_TR(0x6a2711);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a2713:{NFSU2_TR(0x6a2713);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a2714:{NFSU2_TR(0x6a2714);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2717:{NFSU2_TR(0x6a2717);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a271a:{NFSU2_TR(0x6a271a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a271d:{NFSU2_TR(0x6a271d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2720:{NFSU2_TR(0x6a2720);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2723:{NFSU2_TR(0x6a2723);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2726:{NFSU2_TR(0x6a2726);
if(r1(R+518)){{goto L6a286a;}}
}
B6a272c:L6a272c:{c.instructions+=13;NFSU2_TR(0x6a272c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a272f:{NFSU2_TR(0x6a272f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2732:{NFSU2_TR(0x6a2732);
__builtin_memmove((R+8),(R+0),4);
}
B6a2734:{NFSU2_TR(0x6a2734);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6a2737:{NFSU2_TR(0x6a2737);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a273a:{NFSU2_TR(0x6a273a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a273d:{NFSU2_TR(0x6a273d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2740:{NFSU2_TR(0x6a2740);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2743:{NFSU2_TR(0x6a2743);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a2746:{NFSU2_TR(0x6a2746);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2749:{NFSU2_TR(0x6a2749);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a274b:{NFSU2_TR(0x6a274b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a274d:{NFSU2_TR(0x6a274d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a275e;}}
}
B6a274f:L6a274f:{c.instructions+=1;NFSU2_TR(0x6a274f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2752:L6a2752:{c.instructions+=2;NFSU2_TR(0x6a2752);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a2754:{NFSU2_TR(0x6a2754);
if(r1(R+518)){{goto L6a275e;}}
}
B6a2756:L6a2756:{c.instructions+=4;NFSU2_TR(0x6a2756);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6a2757:{NFSU2_TR(0x6a2757);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6a275a:{NFSU2_TR(0x6a275a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B6a275c:{NFSU2_TR(0x6a275c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2752u);}goto L6a2752;}}
}
B6a275e:L6a275e:{c.instructions+=2;NFSU2_TR(0x6a275e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2762:{NFSU2_TR(0x6a2762);
if(r1(R+518)){{goto L6a27a4;}}
}
B6a2764:L6a2764:{c.instructions+=7;NFSU2_TR(0x6a2764);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2767:{NFSU2_TR(0x6a2767);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a276a:{NFSU2_TR(0x6a276a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a276d:{NFSU2_TR(0x6a276d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a276e:{NFSU2_TR(0x6a276e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a2771:{NFSU2_TR(0x6a2771);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2774:{NFSU2_TR(0x6a2774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a2779ull));
TAIL_STATIC(0x69b2fdu,69b);
}
B6a2779:L6a2779:{c.instructions+=2;NFSU2_TR(0x6a2779);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a277b:{NFSU2_TR(0x6a277b);
if(r1(R+518)){{goto L6a2784;}}
}
B6a277d:L6a277d:{c.instructions+=1;NFSU2_TR(0x6a277d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2784:L6a2784:{c.instructions+=2;NFSU2_TR(0x6a2784);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a2786:{NFSU2_TR(0x6a2786);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a27a4;}}
}
B6a2788:L6a2788:{c.instructions+=4;NFSU2_TR(0x6a2788);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a278b:{NFSU2_TR(0x6a278b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a278e:{NFSU2_TR(0x6a278e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a2791:{NFSU2_TR(0x6a2791);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a2796ull));
TAIL_STATIC(0x69b2fdu,69b);
}
B6a2796:L6a2796:{c.instructions+=2;NFSU2_TR(0x6a2796);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a2798:{NFSU2_TR(0x6a2798);
if(r1(R+518)){{goto L6a27a4;}}
}
B6a279a:L6a279a:{c.instructions+=2;NFSU2_TR(0x6a279a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a279d:{NFSU2_TR(0x6a279d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a27a4:L6a27a4:{c.instructions+=2;NFSU2_TR(0x6a27a4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a27a8:{NFSU2_TR(0x6a27a8);
if(r1(R+518)){{goto L6a27e9;}}
}
B6a27aa:L6a27aa:{c.instructions+=6;NFSU2_TR(0x6a27aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a27ad:{NFSU2_TR(0x6a27ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a27b0:{NFSU2_TR(0x6a27b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a27b3:{NFSU2_TR(0x6a27b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a27b4:{NFSU2_TR(0x6a27b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a27b7:{NFSU2_TR(0x6a27b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a27bcull));
TAIL_STATIC(0x69b2fdu,69b);
}
B6a27bc:L6a27bc:{c.instructions+=2;NFSU2_TR(0x6a27bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a27be:{NFSU2_TR(0x6a27be);
if(r1(R+518)){{goto L6a27c7;}}
}
B6a27c0:L6a27c0:{c.instructions+=1;NFSU2_TR(0x6a27c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a27c7:L6a27c7:{c.instructions+=3;NFSU2_TR(0x6a27c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a27c9:{NFSU2_TR(0x6a27c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a27cc:{NFSU2_TR(0x6a27cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a27ec;}}
}
B6a27ce:L6a27ce:{c.instructions+=4;NFSU2_TR(0x6a27ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a27d1:{NFSU2_TR(0x6a27d1);
__builtin_memmove((R+4),(R+24),4);
}
B6a27d3:{NFSU2_TR(0x6a27d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a27d4:{NFSU2_TR(0x6a27d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a27d9ull));
TAIL_STATIC(0x69b2fdu,69b);
}
B6a27d9:L6a27d9:{c.instructions+=2;NFSU2_TR(0x6a27d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a27db:{NFSU2_TR(0x6a27db);
if(r1(R+518)){{goto L6a27ec;}}
}
B6a27dd:L6a27dd:{c.instructions+=3;NFSU2_TR(0x6a27dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a27e0:{NFSU2_TR(0x6a27e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a27e7:{NFSU2_TR(0x6a27e7);
{goto L6a27ec;}
}
B6a27e9:L6a27e9:{c.instructions+=1;NFSU2_TR(0x6a27e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a27ec:L6a27ec:{c.instructions+=8;NFSU2_TR(0x6a27ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a27ef:{NFSU2_TR(0x6a27ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a27f2:{NFSU2_TR(0x6a27f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a27f5:{NFSU2_TR(0x6a27f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a27f8:{NFSU2_TR(0x6a27f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a27fb:{NFSU2_TR(0x6a27fb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a27fd:{NFSU2_TR(0x6a27fd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2800:{NFSU2_TR(0x6a2800);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a272cu);}goto L6a272c;}}
}
B6a2806:L6a2806:{c.instructions+=2;NFSU2_TR(0x6a2806);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2809:{NFSU2_TR(0x6a2809);
if(r1(R+518)){{goto L6a2823;}}
}
B6a280b:L6a280b:{c.instructions+=2;NFSU2_TR(0x6a280b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a280e:{NFSU2_TR(0x6a280e);
if(r1(R+518)){{goto L6a281e;}}
}
B6a2810:L6a2810:{c.instructions+=2;NFSU2_TR(0x6a2810);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2813:{NFSU2_TR(0x6a2813);
if(r1(R+518)){{goto L6a282d;}}
}
B6a2815:L6a2815:{c.instructions+=2;NFSU2_TR(0x6a2815);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2818:{NFSU2_TR(0x6a2818);
if(r1(R+518)){{goto L6a281e;}}
}
B6a281a:L6a281a:{c.instructions+=2;NFSU2_TR(0x6a281a);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6a281c:{NFSU2_TR(0x6a281c);
{goto L6a282f;}
}
B6a281e:L6a281e:{c.instructions+=2;NFSU2_TR(0x6a281e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2821:{NFSU2_TR(0x6a2821);
if(r1(R+518)){{goto L6a282d;}}
}
B6a2823:L6a2823:{c.instructions+=2;NFSU2_TR(0x6a2823);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2826:{NFSU2_TR(0x6a2826);
if(r1(R+518)){{goto L6a2842;}}
}
B6a2828:L6a2828:{c.instructions+=2;NFSU2_TR(0x6a2828);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a282b:{NFSU2_TR(0x6a282b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2842;}}
}
B6a282d:L6a282d:{c.instructions+=1;NFSU2_TR(0x6a282d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a282f:L6a282f:{c.instructions+=7;NFSU2_TR(0x6a282f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2830:{NFSU2_TR(0x6a2830);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2831:{NFSU2_TR(0x6a2831);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a2834:{NFSU2_TR(0x6a2834);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2835:{NFSU2_TR(0x6a2835);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2836:{NFSU2_TR(0x6a2836);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a2839:{NFSU2_TR(0x6a2839);
__builtin_memmove((R+4),(R+24),4);
}
B6a283b:L6a283b:{c.instructions+=1;NFSU2_TR(0x6a283b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a2840ull));
TAIL_STATIC(0x699c39u,699);
}
B6a2840:L6a2840:{c.instructions+=1;NFSU2_TR(0x6a2840);
{goto L6a2864;}
}
B6a2842:L6a2842:{c.instructions+=2;NFSU2_TR(0x6a2842);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2845:{NFSU2_TR(0x6a2845);
if(r1(R+518)){{goto L6a2857;}}
}
B6a2847:L6a2847:{c.instructions+=2;NFSU2_TR(0x6a2847);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a284a:{NFSU2_TR(0x6a284a);
if(r1(R+518)){{goto L6a2857;}}
}
B6a284c:L6a284c:{c.instructions+=4;NFSU2_TR(0x6a284c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a284f:{NFSU2_TR(0x6a284f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2852:{NFSU2_TR(0x6a2852);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2855:{NFSU2_TR(0x6a2855);
{goto L6a286a;}
}
B6a2857:L6a2857:{c.instructions+=2;NFSU2_TR(0x6a2857);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a285a:{NFSU2_TR(0x6a285a);
if(r1(R+518)){{goto L6a286a;}}
}
B6a285c:L6a285c:{c.instructions+=2;NFSU2_TR(0x6a285c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a285f:{NFSU2_TR(0x6a285f);
if(r1(R+518)){{goto L6a286a;}}
}
B6a2861:L6a2861:{c.instructions+=1;NFSU2_TR(0x6a2861);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2864:L6a2864:{c.instructions+=2;NFSU2_TR(0x6a2864);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2867:{NFSU2_TR(0x6a2867);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a286a:L6a286a:{c.instructions+=1;NFSU2_TR(0x6a286a);
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
B6a286c:L6a286c:{c.instructions+=5;NFSU2_TR(0x6a286c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a286d:{NFSU2_TR(0x6a286d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a286e:{NFSU2_TR(0x6a286e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a286f:{NFSU2_TR(0x6a286f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a2870:{NFSU2_TR(0x6a2870);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a2873:L6a2873:{c.instructions+=40;NFSU2_TR(0x6a2873);
__builtin_memmove((R+28),(R+28),4);
}
B6a2875:{NFSU2_TR(0x6a2875);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2876:{NFSU2_TR(0x6a2876);
__builtin_memmove((R+20),(R+16),4);
}
B6a2878:{NFSU2_TR(0x6a2878);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa0ull))));
}
B6a287e:{NFSU2_TR(0x6a287e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a287f:{NFSU2_TR(0x6a287f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2880:{NFSU2_TR(0x6a2880);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2881:{NFSU2_TR(0x6a2881);
__builtin_memmove((R+12),(R+4),4);
}
B6a2883:{NFSU2_TR(0x6a2883);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2886:{NFSU2_TR(0x6a2886);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2889:{NFSU2_TR(0x6a2889);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a288c:{NFSU2_TR(0x6a288c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a288f:{NFSU2_TR(0x6a288f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2892:{NFSU2_TR(0x6a2892);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2895:{NFSU2_TR(0x6a2895);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a2898:{NFSU2_TR(0x6a2898);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a289b:{NFSU2_TR(0x6a289b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a289e:{NFSU2_TR(0x6a289e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a28a1:{NFSU2_TR(0x6a28a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a28a4:{NFSU2_TR(0x6a28a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a28a7:{NFSU2_TR(0x6a28a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a28aa:{NFSU2_TR(0x6a28aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a28ad:{NFSU2_TR(0x6a28ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a28b0:{NFSU2_TR(0x6a28b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a28b3:{NFSU2_TR(0x6a28b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a28b6:{NFSU2_TR(0x6a28b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a28b9:{NFSU2_TR(0x6a28b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a28bc:{NFSU2_TR(0x6a28bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a28bf:{NFSU2_TR(0x6a28bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a28c1:{NFSU2_TR(0x6a28c1);
__builtin_memmove((R+8),(R+0),4);
}
B6a28c3:{NFSU2_TR(0x6a28c3);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x40ull))));
}
B6a28c6:{NFSU2_TR(0x6a28c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a28c9:{NFSU2_TR(0x6a28c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a28cc:{NFSU2_TR(0x6a28cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a28cf:{NFSU2_TR(0x6a28cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a28d2:{NFSU2_TR(0x6a28d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a28d5:{NFSU2_TR(0x6a28d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a28d8:{NFSU2_TR(0x6a28d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a28db:{NFSU2_TR(0x6a28db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a28de:{NFSU2_TR(0x6a28de);
if(r1(R+518)){{goto L6a2b2a;}}
}
B6a28e4:L6a28e4:{c.instructions+=2;NFSU2_TR(0x6a28e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a28e7:{NFSU2_TR(0x6a28e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2b2a;}}
}
B6a28ed:L6a28ed:{c.instructions+=2;NFSU2_TR(0x6a28ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xe000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a28f2:{NFSU2_TR(0x6a28f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2946;}}
}
B6a28f4:L6a28f4:{c.instructions+=5;NFSU2_TR(0x6a28f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a28f7:{NFSU2_TR(0x6a28f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a28f9:{NFSU2_TR(0x6a28f9);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6a28ff:{NFSU2_TR(0x6a28ff);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2905:{NFSU2_TR(0x6a2905);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2946;}}
}
B6a2907:L6a2907:{c.instructions+=5;NFSU2_TR(0x6a2907);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a2909:{NFSU2_TR(0x6a2909);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a290c:{NFSU2_TR(0x6a290c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+8,u32(u32(r4(R+8))|u32(r4(U+0))));
}
B6a290e:{NFSU2_TR(0x6a290e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x8000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a2914:{NFSU2_TR(0x6a2914);
if(r1(R+518)){{goto L6a291d;}}
}
B6a2916:L6a2916:{c.instructions+=2;NFSU2_TR(0x6a2916);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8000000ull))));
}
B6a291b:{NFSU2_TR(0x6a291b);
{goto L6a2939;}
}
B6a291d:L6a291d:{c.instructions+=2;NFSU2_TR(0x6a291d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x4000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a2923:{NFSU2_TR(0x6a2923);
if(r1(R+518)){{goto L6a292c;}}
}
B6a2925:L6a2925:{c.instructions+=2;NFSU2_TR(0x6a2925);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x4000000ull))));
}
B6a292a:{NFSU2_TR(0x6a292a);
{goto L6a2939;}
}
B6a292c:L6a292c:{c.instructions+=2;NFSU2_TR(0x6a292c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x2000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a2932:{NFSU2_TR(0x6a2932);
if(r1(R+518)){{goto L6a293b;}}
}
B6a2934:L6a2934:{c.instructions+=1;NFSU2_TR(0x6a2934);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2000000ull))));
}
B6a2939:L6a2939:{c.instructions+=1;NFSU2_TR(0x6a2939);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6a293b:L6a293b:{c.instructions+=5;NFSU2_TR(0x6a293b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a293d:{NFSU2_TR(0x6a293d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+0))));
}
B6a293f:{NFSU2_TR(0x6a293f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B6a2942:{NFSU2_TR(0x6a2942);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+0))));
s4(u32(r4(R+4)),r4(U+0));
}
B6a2944:{NFSU2_TR(0x6a2944);
{goto L6a2949;}
}
B6a2946:L6a2946:{c.instructions+=1;NFSU2_TR(0x6a2946);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2949:L6a2949:{c.instructions+=4;NFSU2_TR(0x6a2949);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a294b:{NFSU2_TR(0x6a294b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+0))));
}
B6a294d:{NFSU2_TR(0x6a294d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a294f:{NFSU2_TR(0x6a294f);
if(r1(R+518)){{goto L6a2965;}}
}
B6a2951:L6a2951:{c.instructions+=5;NFSU2_TR(0x6a2951);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2954:{NFSU2_TR(0x6a2954);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a2956:{NFSU2_TR(0x6a2956);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a295b:{NFSU2_TR(0x6a295b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a2960:{NFSU2_TR(0x6a2960);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2965;}}
}
B6a2962:L6a2962:{c.instructions+=1;NFSU2_TR(0x6a2962);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x40ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6a2965:L6a2965:{c.instructions+=5;NFSU2_TR(0x6a2965);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2968:{NFSU2_TR(0x6a2968);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a296a:{NFSU2_TR(0x6a296a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a296f:{NFSU2_TR(0x6a296f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a2974:{NFSU2_TR(0x6a2974);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a29a3;}}
}
B6a2976:L6a2976:{c.instructions+=8;NFSU2_TR(0x6a2976);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a2978:{NFSU2_TR(0x6a2978);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+0))));
}
B6a297a:{NFSU2_TR(0x6a297a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a297d:{NFSU2_TR(0x6a297d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B6a2980:{NFSU2_TR(0x6a2980);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+0))));
s4(u32(r4(R+4)),r4(U+0));
}
B6a2982:{NFSU2_TR(0x6a2982);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2985:{NFSU2_TR(0x6a2985);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a2987:{NFSU2_TR(0x6a2987);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2993;}}
}
B6a2989:L6a2989:{c.instructions+=2;NFSU2_TR(0x6a2989);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a298c:{NFSU2_TR(0x6a298c);
if(r1(R+518)){{goto L6a2993;}}
}
B6a298e:L6a298e:{c.instructions+=2;NFSU2_TR(0x6a298e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x4ull))));
}
B6a2991:{NFSU2_TR(0x6a2991);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6a2993:L6a2993:{c.instructions+=3;NFSU2_TR(0x6a2993);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2996:{NFSU2_TR(0x6a2996);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2999:{NFSU2_TR(0x6a2999);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a29a3;}}
}
B6a299b:L6a299b:{c.instructions+=2;NFSU2_TR(0x6a299b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a299e:{NFSU2_TR(0x6a299e);
if(r1(R+518)){{goto L6a29a3;}}
}
B6a29a0:L6a29a0:{c.instructions+=1;NFSU2_TR(0x6a29a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x8ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6a29a3:L6a29a3:{c.instructions+=5;NFSU2_TR(0x6a29a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a29a6:{NFSU2_TR(0x6a29a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a29a8:{NFSU2_TR(0x6a29a8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a29ad:{NFSU2_TR(0x6a29ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a29b2:{NFSU2_TR(0x6a29b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2b2a;}}
}
B6a29b8:L6a29b8:{c.instructions+=3;NFSU2_TR(0x6a29b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a29bc:{NFSU2_TR(0x6a29bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a29bf:{NFSU2_TR(0x6a29bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a29ce;}}
}
B6a29c1:L6a29c1:{c.instructions+=2;NFSU2_TR(0x6a29c1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a29c4:{NFSU2_TR(0x6a29c4);
if(r1(R+518)){{goto L6a29ce;}}
}
B6a29c6:L6a29c6:{c.instructions+=2;NFSU2_TR(0x6a29c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a29c9:{NFSU2_TR(0x6a29c9);
{goto L6a2d0c;}
}
B6a29ce:L6a29ce:{c.instructions+=7;NFSU2_TR(0x6a29ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a29d1:{NFSU2_TR(0x6a29d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a29d4:{NFSU2_TR(0x6a29d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a29d7:{NFSU2_TR(0x6a29d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a29da:{NFSU2_TR(0x6a29da);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a29dd:{NFSU2_TR(0x6a29dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a29e0:{NFSU2_TR(0x6a29e0);
if(r1(R+518)){{goto L6a2a07;}}
}
B6a29e2:L6a29e2:{c.instructions+=2;NFSU2_TR(0x6a29e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a29e6:{NFSU2_TR(0x6a29e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2a07;}}
}
B6a29e8:L6a29e8:{c.instructions+=6;NFSU2_TR(0x6a29e8);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a29eb:{NFSU2_TR(0x6a29eb);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a29f1:{NFSU2_TR(0x6a29f1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a29f3:{NFSU2_TR(0x6a29f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a29f6:{NFSU2_TR(0x6a29f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a29f9:{NFSU2_TR(0x6a29f9);
if(r1(R+518)){{goto L6a2d0c;}}
}
B6a29ff:L6a29ff:{c.instructions+=2;NFSU2_TR(0x6a29ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2a02:{NFSU2_TR(0x6a2a02);
{goto L6a2d0c;}
}
B6a2a07:L6a2a07:{c.instructions+=3;NFSU2_TR(0x6a2a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2a0a:{NFSU2_TR(0x6a2a0a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2a0d:{NFSU2_TR(0x6a2a0d);
if(r1(R+518)){{goto L6a2d0c;}}
}
B6a2a13:L6a2a13:{c.instructions+=8;NFSU2_TR(0x6a2a13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2a16:{NFSU2_TR(0x6a2a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2a19:{NFSU2_TR(0x6a2a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2a1c:{NFSU2_TR(0x6a2a1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a2a1f:{NFSU2_TR(0x6a2a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2a22:{NFSU2_TR(0x6a2a22);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x100ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6a2a28:{NFSU2_TR(0x6a2a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2a2b:{NFSU2_TR(0x6a2a2b);
if(r1(R+518)){{goto L6a2a5e;}}
}
B6a2a2d:L6a2a2d:{c.instructions+=3;NFSU2_TR(0x6a2a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2a30:{NFSU2_TR(0x6a2a30);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2a34:{NFSU2_TR(0x6a2a34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2a5e;}}
}
B6a2a36:L6a2a36:{c.instructions+=4;NFSU2_TR(0x6a2a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2a39:{NFSU2_TR(0x6a2a39);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2a3c:{NFSU2_TR(0x6a2a3c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a2a40:{NFSU2_TR(0x6a2a40);
if(r1(R+518)){{goto L6a2a5e;}}
}
B6a2a42:L6a2a42:{c.instructions+=2;NFSU2_TR(0x6a2a42);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2a46:{NFSU2_TR(0x6a2a46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2a5e;}}
}
B6a2a48:L6a2a48:{c.instructions+=7;NFSU2_TR(0x6a2a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2a4b:{NFSU2_TR(0x6a2a4b);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2a4e:{NFSU2_TR(0x6a2a4e);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2a51:{NFSU2_TR(0x6a2a51);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a2a53:{NFSU2_TR(0x6a2a53);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a2a55:{NFSU2_TR(0x6a2a55);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a2a58:{NFSU2_TR(0x6a2a58);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a29c6u);}goto L6a29c6;}}
}
B6a2a5e:L6a2a5e:{c.instructions+=2;NFSU2_TR(0x6a2a5e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2a62:{NFSU2_TR(0x6a2a62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2b2a;}}
}
B6a2a68:L6a2a68:{c.instructions+=3;NFSU2_TR(0x6a2a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2a6b:{NFSU2_TR(0x6a2a6b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2a6e:{NFSU2_TR(0x6a2a6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2b36;}}
}
B6a2a74:L6a2a74:{c.instructions+=2;NFSU2_TR(0x6a2a74);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a2a78:{NFSU2_TR(0x6a2a78);
if(r1(R+518)){{goto L6a2b36;}}
}
B6a2a7e:L6a2a7e:{c.instructions+=8;NFSU2_TR(0x6a2a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2a81:{NFSU2_TR(0x6a2a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2a84:{NFSU2_TR(0x6a2a84);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2a87:{NFSU2_TR(0x6a2a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2a8a:{NFSU2_TR(0x6a2a8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a2a8c:{NFSU2_TR(0x6a2a8c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a2a91:{NFSU2_TR(0x6a2a91);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a2a96:{NFSU2_TR(0x6a2a96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2b36;}}
}
B6a2a9c:L6a2a9c:{c.instructions+=2;NFSU2_TR(0x6a2a9c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2aa0:{NFSU2_TR(0x6a2aa0);
if(r1(R+518)){{goto L6a2b36;}}
}
B6a2aa6:L6a2aa6:{c.instructions+=3;NFSU2_TR(0x6a2aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2aa9:{NFSU2_TR(0x6a2aa9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2aad:{NFSU2_TR(0x6a2aad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2b36;}}
}
B6a2ab3:L6a2ab3:{c.instructions+=6;NFSU2_TR(0x6a2ab3);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2ab6:{NFSU2_TR(0x6a2ab6);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2abc:{NFSU2_TR(0x6a2abc);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a2abe:{NFSU2_TR(0x6a2abe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a2ac0:{NFSU2_TR(0x6a2ac0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a2ac3:{NFSU2_TR(0x6a2ac3);
if(r1(R+514)){{goto L6a2b36;}}
}
B6a2ac5:L6a2ac5:{c.instructions+=5;NFSU2_TR(0x6a2ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2ac8:{NFSU2_TR(0x6a2ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2acb:{NFSU2_TR(0x6a2acb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2ace:{NFSU2_TR(0x6a2ace);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a2ad2:{NFSU2_TR(0x6a2ad2);
if(r1(R+518)){{goto L6a2b36;}}
}
B6a2ad4:L6a2ad4:{c.instructions+=2;NFSU2_TR(0x6a2ad4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2ad8:{NFSU2_TR(0x6a2ad8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2b36;}}
}
B6a2ada:L6a2ada:{c.instructions+=6;NFSU2_TR(0x6a2ada);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2add:{NFSU2_TR(0x6a2add);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2ae3:{NFSU2_TR(0x6a2ae3);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a2ae5:{NFSU2_TR(0x6a2ae5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a2ae7:{NFSU2_TR(0x6a2ae7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a2aea:{NFSU2_TR(0x6a2aea);
if(r1(R+514)){{goto L6a2b36;}}
}
B6a2aec:L6a2aec:{c.instructions+=4;NFSU2_TR(0x6a2aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2aef:{NFSU2_TR(0x6a2aef);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a2af1:{NFSU2_TR(0x6a2af1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2af4:{NFSU2_TR(0x6a2af4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a2b10;}}
}
B6a2af6:L6a2af6:{c.instructions+=2;NFSU2_TR(0x6a2af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2af9:{NFSU2_TR(0x6a2af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2afc:L6a2afc:{c.instructions+=4;NFSU2_TR(0x6a2afc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2aff:{NFSU2_TR(0x6a2aff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a2b01:{NFSU2_TR(0x6a2b01);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2b04:{NFSU2_TR(0x6a2b04);
if(r1(R+518)){{goto L6a2b10;}}
}
B6a2b06:L6a2b06:{c.instructions+=4;NFSU2_TR(0x6a2b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2b0a:{NFSU2_TR(0x6a2b0a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a2b0b:{NFSU2_TR(0x6a2b0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6a2b0e:{NFSU2_TR(0x6a2b0e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2afcu);}goto L6a2afc;}}
}
B6a2b10:L6a2b10:{c.instructions+=8;NFSU2_TR(0x6a2b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2b13:{NFSU2_TR(0x6a2b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2b16:{NFSU2_TR(0x6a2b16);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a2b19:{NFSU2_TR(0x6a2b19);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a2b1c:{NFSU2_TR(0x6a2b1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2b1f:{NFSU2_TR(0x6a2b1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2b22:{NFSU2_TR(0x6a2b22);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a2b25:{NFSU2_TR(0x6a2b25);
if(r1(R+518)){{goto L6a2b33;}}
}
B6a2b27:L6a2b27:{c.instructions+=1;NFSU2_TR(0x6a2b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2b2a:L6a2b2a:{c.instructions+=1;NFSU2_TR(0x6a2b2a);
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
B6a2b2c:L6a2b2c:{c.instructions+=5;NFSU2_TR(0x6a2b2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a2b2d:{NFSU2_TR(0x6a2b2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a2b2e:{NFSU2_TR(0x6a2b2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a2b2f:{NFSU2_TR(0x6a2b2f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a2b30:{NFSU2_TR(0x6a2b30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a2b33:L6a2b33:{c.instructions+=1;NFSU2_TR(0x6a2b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2b36:L6a2b36:{c.instructions+=2;NFSU2_TR(0x6a2b36);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2b3a:{NFSU2_TR(0x6a2b3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2b2au);}goto L6a2b2a;}}
}
B6a2b3c:L6a2b3c:{c.instructions+=2;NFSU2_TR(0x6a2b3c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a2b40:{NFSU2_TR(0x6a2b40);
if(r1(R+518)){{goto L6a2c81;}}
}
B6a2b46:L6a2b46:{c.instructions+=7;NFSU2_TR(0x6a2b46);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2b49:{NFSU2_TR(0x6a2b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2b4c:{NFSU2_TR(0x6a2b4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a2b4f:{NFSU2_TR(0x6a2b4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a2b51:{NFSU2_TR(0x6a2b51);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a2b56:{NFSU2_TR(0x6a2b56);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a2b5b:{NFSU2_TR(0x6a2b5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2c81;}}
}
B6a2b61:L6a2b61:{c.instructions+=2;NFSU2_TR(0x6a2b61);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2b65:{NFSU2_TR(0x6a2b65);
if(r1(R+518)){{goto L6a2c81;}}
}
B6a2b6b:L6a2b6b:{c.instructions+=3;NFSU2_TR(0x6a2b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2b6e:{NFSU2_TR(0x6a2b6e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2b72:{NFSU2_TR(0x6a2b72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2c81;}}
}
B6a2b78:L6a2b78:{c.instructions+=6;NFSU2_TR(0x6a2b78);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2b7b:{NFSU2_TR(0x6a2b7b);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2b81:{NFSU2_TR(0x6a2b81);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a2b83:{NFSU2_TR(0x6a2b83);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a2b85:{NFSU2_TR(0x6a2b85);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a2b88:{NFSU2_TR(0x6a2b88);
if(r1(R+514)){{goto L6a2c81;}}
}
B6a2b8e:L6a2b8e:{c.instructions+=5;NFSU2_TR(0x6a2b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2b91:{NFSU2_TR(0x6a2b91);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2b94:{NFSU2_TR(0x6a2b94);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2b97:{NFSU2_TR(0x6a2b97);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a2b9b:{NFSU2_TR(0x6a2b9b);
if(r1(R+518)){{goto L6a2c7e;}}
}
B6a2ba1:L6a2ba1:{c.instructions+=2;NFSU2_TR(0x6a2ba1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2ba5:{NFSU2_TR(0x6a2ba5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2c7e;}}
}
B6a2bab:L6a2bab:{c.instructions+=6;NFSU2_TR(0x6a2bab);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2bae:{NFSU2_TR(0x6a2bae);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2bb4:{NFSU2_TR(0x6a2bb4);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a2bb6:{NFSU2_TR(0x6a2bb6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a2bb8:{NFSU2_TR(0x6a2bb8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a2bbb:{NFSU2_TR(0x6a2bbb);
if(r1(R+514)){{goto L6a2c7e;}}
}
B6a2bc1:L6a2bc1:{c.instructions+=4;NFSU2_TR(0x6a2bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a2bc4:{NFSU2_TR(0x6a2bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2bc8:{NFSU2_TR(0x6a2bc8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a2bca:{NFSU2_TR(0x6a2bca);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a2be1;}}
}
B6a2bcc:L6a2bcc:{c.instructions+=1;NFSU2_TR(0x6a2bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2bcf:L6a2bcf:{c.instructions+=3;NFSU2_TR(0x6a2bcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6a2bd1:{NFSU2_TR(0x6a2bd1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2bd4:{NFSU2_TR(0x6a2bd4);
if(r1(R+518)){{goto L6a2be1;}}
}
B6a2bd6:L6a2bd6:{c.instructions+=4;NFSU2_TR(0x6a2bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2bd9:{NFSU2_TR(0x6a2bd9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6a2bdc:{NFSU2_TR(0x6a2bdc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6a2bdf:{NFSU2_TR(0x6a2bdf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2bcfu);}goto L6a2bcf;}}
}
B6a2be1:L6a2be1:{c.instructions+=18;NFSU2_TR(0x6a2be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2be4:{NFSU2_TR(0x6a2be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a2be7:{NFSU2_TR(0x6a2be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2bea:{NFSU2_TR(0x6a2bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a2bed:{NFSU2_TR(0x6a2bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2bf1:{NFSU2_TR(0x6a2bf1);
__builtin_memmove((R+28),(R+0),4);
}
B6a2bf3:{NFSU2_TR(0x6a2bf3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6a2bf6:{NFSU2_TR(0x6a2bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2bf9:{NFSU2_TR(0x6a2bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6a2bfc:{NFSU2_TR(0x6a2bfc);
__builtin_memmove((R+28),(R+0),4);
}
B6a2bfe:{NFSU2_TR(0x6a2bfe);
w4(R+28,u32(0-u32(r4(R+28))));
}
B6a2c00:{NFSU2_TR(0x6a2c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2c03:{NFSU2_TR(0x6a2c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a2c06:{NFSU2_TR(0x6a2c06);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6a2c09:{NFSU2_TR(0x6a2c09);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6a2c0b:{NFSU2_TR(0x6a2c0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a2c0e:{NFSU2_TR(0x6a2c0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6a2c11:{NFSU2_TR(0x6a2c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2c14:L6a2c14:{c.instructions+=13;NFSU2_TR(0x6a2c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2c17:{NFSU2_TR(0x6a2c17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a2c19:{NFSU2_TR(0x6a2c19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a2c1b:{NFSU2_TR(0x6a2c1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2c1e:{NFSU2_TR(0x6a2c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2c21:{NFSU2_TR(0x6a2c21);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a2c24:{NFSU2_TR(0x6a2c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2c27:{NFSU2_TR(0x6a2c27);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a2c2a:{NFSU2_TR(0x6a2c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2c2d:{NFSU2_TR(0x6a2c2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2c30:{NFSU2_TR(0x6a2c30);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a2c33:{NFSU2_TR(0x6a2c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2c36:{NFSU2_TR(0x6a2c36);
if(r1(R+518)){{goto L6a2c64;}}
}
B6a2c38:L6a2c38:{c.instructions+=5;NFSU2_TR(0x6a2c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2c3b:{NFSU2_TR(0x6a2c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2c3e:{NFSU2_TR(0x6a2c3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2c41:{NFSU2_TR(0x6a2c41);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a2c45:{NFSU2_TR(0x6a2c45);
if(r1(R+518)){{goto L6a2c64;}}
}
B6a2c47:L6a2c47:{c.instructions+=3;NFSU2_TR(0x6a2c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2c4a:{NFSU2_TR(0x6a2c4a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2c4e:{NFSU2_TR(0x6a2c4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2c64;}}
}
B6a2c50:L6a2c50:{c.instructions+=5;NFSU2_TR(0x6a2c50);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2c53:{NFSU2_TR(0x6a2c53);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a2c59:{NFSU2_TR(0x6a2c59);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a2c5b:{NFSU2_TR(0x6a2c5b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a2c5e:{NFSU2_TR(0x6a2c5e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a2d09;}}
}
B6a2c64:L6a2c64:{c.instructions+=8;NFSU2_TR(0x6a2c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2c67:{NFSU2_TR(0x6a2c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2c6a:{NFSU2_TR(0x6a2c6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2c6d:{NFSU2_TR(0x6a2c6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2c70:{NFSU2_TR(0x6a2c70);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6a2c72:{NFSU2_TR(0x6a2c72);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6a2c76:{NFSU2_TR(0x6a2c76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2c79:{NFSU2_TR(0x6a2c79);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2c14u);}goto L6a2c14;}}
}
B6a2c7b:L6a2c7b:{c.instructions+=1;NFSU2_TR(0x6a2c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a2c7e:L6a2c7e:{c.instructions+=1;NFSU2_TR(0x6a2c7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2c81:L6a2c81:{c.instructions+=2;NFSU2_TR(0x6a2c81);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2c85:{NFSU2_TR(0x6a2c85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2b2au);}goto L6a2b2a;}}
}
B6a2c8b:L6a2c8b:{c.instructions+=2;NFSU2_TR(0x6a2c8b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a2c8f:{NFSU2_TR(0x6a2c8f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2b2au);}goto L6a2b2a;}}
}
B6a2c95:L6a2c95:{c.instructions+=7;NFSU2_TR(0x6a2c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2c98:{NFSU2_TR(0x6a2c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2c9b:{NFSU2_TR(0x6a2c9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a2c9e:{NFSU2_TR(0x6a2c9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a2ca0:{NFSU2_TR(0x6a2ca0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a2ca5:{NFSU2_TR(0x6a2ca5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a2caa:{NFSU2_TR(0x6a2caa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2b2au);}goto L6a2b2a;}}
}
B6a2cb0:L6a2cb0:{c.instructions+=3;NFSU2_TR(0x6a2cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2cb4:{NFSU2_TR(0x6a2cb4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2cb8:{NFSU2_TR(0x6a2cb8);
if(r1(R+518)){{goto L6a2d3f;}}
}
B6a2cbe:L6a2cbe:{c.instructions+=3;NFSU2_TR(0x6a2cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2cc1:{NFSU2_TR(0x6a2cc1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2cc5:{NFSU2_TR(0x6a2cc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2d3f;}}
}
B6a2cc7:L6a2cc7:{c.instructions+=5;NFSU2_TR(0x6a2cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2cca:{NFSU2_TR(0x6a2cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2ccd:{NFSU2_TR(0x6a2ccd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2cd0:{NFSU2_TR(0x6a2cd0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a2cd4:{NFSU2_TR(0x6a2cd4);
if(r1(R+518)){{goto L6a2d3f;}}
}
B6a2cd6:L6a2cd6:{c.instructions+=2;NFSU2_TR(0x6a2cd6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2cda:{NFSU2_TR(0x6a2cda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2d3f;}}
}
B6a2cdc:L6a2cdc:{c.instructions+=6;NFSU2_TR(0x6a2cdc);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2cdf:{NFSU2_TR(0x6a2cdf);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2ce5:{NFSU2_TR(0x6a2ce5);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a2ce7:{NFSU2_TR(0x6a2ce7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a2ce9:{NFSU2_TR(0x6a2ce9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a2cec:{NFSU2_TR(0x6a2cec);
if(r1(R+514)){{goto L6a2d14;}}
}
B6a2cee:L6a2cee:{c.instructions+=6;NFSU2_TR(0x6a2cee);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2cf1:{NFSU2_TR(0x6a2cf1);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2cf7:{NFSU2_TR(0x6a2cf7);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a2cf9:{NFSU2_TR(0x6a2cf9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a2cfb:{NFSU2_TR(0x6a2cfb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a2cfe:{NFSU2_TR(0x6a2cfe);
if(r1(R+514)){{goto L6a2d14;}}
}
B6a2d00:L6a2d00:{c.instructions+=2;NFSU2_TR(0x6a2d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x20200001ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2d07:{NFSU2_TR(0x6a2d07);
{goto L6a2d3f;}
}
B6a2d09:L6a2d09:{c.instructions+=1;NFSU2_TR(0x6a2d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2d0c:L6a2d0c:{c.instructions+=2;NFSU2_TR(0x6a2d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2d0f:{NFSU2_TR(0x6a2d0f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2b2au);}goto L6a2b2a;}
}
B6a2d14:L6a2d14:{c.instructions+=6;NFSU2_TR(0x6a2d14);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2d17:{NFSU2_TR(0x6a2d17);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2d1d:{NFSU2_TR(0x6a2d1d);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a2d1f:{NFSU2_TR(0x6a2d1f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a2d21:{NFSU2_TR(0x6a2d21);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a2d24:{NFSU2_TR(0x6a2d24);
if(r1(R+514)){{goto L6a2d3f;}}
}
B6a2d26:L6a2d26:{c.instructions+=6;NFSU2_TR(0x6a2d26);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2d29:{NFSU2_TR(0x6a2d29);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a2d2f:{NFSU2_TR(0x6a2d2f);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a2d31:{NFSU2_TR(0x6a2d31);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a2d33:{NFSU2_TR(0x6a2d33);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a2d36:{NFSU2_TR(0x6a2d36);
if(r1(R+514)){{goto L6a2d3f;}}
}
B6a2d38:L6a2d38:{c.instructions+=1;NFSU2_TR(0x6a2d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x20300001ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2d3f:L6a2d3f:{c.instructions+=4;NFSU2_TR(0x6a2d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a2d42:{NFSU2_TR(0x6a2d42);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a2d44:{NFSU2_TR(0x6a2d44);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a2d46:{NFSU2_TR(0x6a2d46);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a2d5a;}}
}
B6a2d48:L6a2d48:{c.instructions+=1;NFSU2_TR(0x6a2d48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2d4b:L6a2d4b:{c.instructions+=3;NFSU2_TR(0x6a2d4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6a2d4d:{NFSU2_TR(0x6a2d4d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2d50:{NFSU2_TR(0x6a2d50);
if(r1(R+518)){{goto L6a2d5a;}}
}
B6a2d52:L6a2d52:{c.instructions+=4;NFSU2_TR(0x6a2d52);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a2d53:{NFSU2_TR(0x6a2d53);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6a2d56:{NFSU2_TR(0x6a2d56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6a2d58:{NFSU2_TR(0x6a2d58);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2d4bu);}goto L6a2d4b;}}
}
B6a2d5a:L6a2d5a:{c.instructions+=14;NFSU2_TR(0x6a2d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2d5d:{NFSU2_TR(0x6a2d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2d60:{NFSU2_TR(0x6a2d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2d64:{NFSU2_TR(0x6a2d64);
__builtin_memmove((R+24),(R+0),4);
}
B6a2d66:{NFSU2_TR(0x6a2d66);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6a2d69:{NFSU2_TR(0x6a2d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2d6c:{NFSU2_TR(0x6a2d6c);
__builtin_memmove((R+24),(R+0),4);
}
B6a2d6e:{NFSU2_TR(0x6a2d6e);
w4(R+24,u32(0-u32(r4(R+24))));
}
B6a2d70:{NFSU2_TR(0x6a2d70);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6a2d73:{NFSU2_TR(0x6a2d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6a2d76:{NFSU2_TR(0x6a2d76);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6a2d78:{NFSU2_TR(0x6a2d78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6a2d7b:{NFSU2_TR(0x6a2d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2d7e:{NFSU2_TR(0x6a2d7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2d81:L6a2d81:{c.instructions+=11;NFSU2_TR(0x6a2d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2d84:{NFSU2_TR(0x6a2d84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a2d86:{NFSU2_TR(0x6a2d86);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a2d89:{NFSU2_TR(0x6a2d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2d8c:{NFSU2_TR(0x6a2d8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a2d8e:{NFSU2_TR(0x6a2d8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a2d91:{NFSU2_TR(0x6a2d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2d94:{NFSU2_TR(0x6a2d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2d97:{NFSU2_TR(0x6a2d97);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2d9a:{NFSU2_TR(0x6a2d9a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2d9e:{NFSU2_TR(0x6a2d9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2e1a;}}
}
B6a2da0:L6a2da0:{c.instructions+=5;NFSU2_TR(0x6a2da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2da3:{NFSU2_TR(0x6a2da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2da6:{NFSU2_TR(0x6a2da6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a2da9:{NFSU2_TR(0x6a2da9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a2dad:{NFSU2_TR(0x6a2dad);
if(r1(R+518)){{goto L6a2e1a;}}
}
B6a2daf:L6a2daf:{c.instructions+=7;NFSU2_TR(0x6a2daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2db2:{NFSU2_TR(0x6a2db2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2db5:{NFSU2_TR(0x6a2db5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2db8:{NFSU2_TR(0x6a2db8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a2dba:{NFSU2_TR(0x6a2dba);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6a2dc0:{NFSU2_TR(0x6a2dc0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2dc6:{NFSU2_TR(0x6a2dc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2e1a;}}
}
B6a2dc8:L6a2dc8:{c.instructions+=3;NFSU2_TR(0x6a2dc8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a2dca:{NFSU2_TR(0x6a2dca);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2dcd:{NFSU2_TR(0x6a2dcd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a2de7;}}
}
B6a2dcf:L6a2dcf:{c.instructions+=2;NFSU2_TR(0x6a2dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2dd2:{NFSU2_TR(0x6a2dd2);
{goto L6a2dd7;}
}
B6a2dd4:L6a2dd4:{c.instructions+=1;NFSU2_TR(0x6a2dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2dd7:L6a2dd7:{c.instructions+=2;NFSU2_TR(0x6a2dd7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a2dd9:{NFSU2_TR(0x6a2dd9);
if(r1(R+518)){{goto L6a2de7;}}
}
B6a2ddb:L6a2ddb:{c.instructions+=5;NFSU2_TR(0x6a2ddb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a2ddc:{NFSU2_TR(0x6a2ddc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6a2ddf:{NFSU2_TR(0x6a2ddf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a2de2:{NFSU2_TR(0x6a2de2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2de5:{NFSU2_TR(0x6a2de5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2dd4u);}goto L6a2dd4;}}
}
B6a2de7:L6a2de7:{c.instructions+=9;NFSU2_TR(0x6a2de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2dea:{NFSU2_TR(0x6a2dea);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2ded:{NFSU2_TR(0x6a2ded);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2df0:{NFSU2_TR(0x6a2df0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2df3:{NFSU2_TR(0x6a2df3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2df6:{NFSU2_TR(0x6a2df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2df9:{NFSU2_TR(0x6a2df9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2dfc:{NFSU2_TR(0x6a2dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2dff:{NFSU2_TR(0x6a2dff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2e4d;}}
}
B6a2e01:L6a2e01:{c.instructions+=3;NFSU2_TR(0x6a2e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2e04:{NFSU2_TR(0x6a2e04);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2e06:{NFSU2_TR(0x6a2e06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2e10;}}
}
B6a2e08:L6a2e08:{c.instructions+=3;NFSU2_TR(0x6a2e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2e0b:{NFSU2_TR(0x6a2e0b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2e0e:{NFSU2_TR(0x6a2e0e);
if(r1(R+518)){{goto L6a2e3d;}}
}
B6a2e10:L6a2e10:{c.instructions+=2;NFSU2_TR(0x6a2e10);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2e13:{NFSU2_TR(0x6a2e13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2e1a;}}
}
B6a2e15:L6a2e15:{c.instructions+=2;NFSU2_TR(0x6a2e15);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2e18:{NFSU2_TR(0x6a2e18);
if(r1(R+518)){{goto L6a2e46;}}
}
B6a2e1a:L6a2e1a:{c.instructions+=9;NFSU2_TR(0x6a2e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2e1d:{NFSU2_TR(0x6a2e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2e20:{NFSU2_TR(0x6a2e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B6a2e23:{NFSU2_TR(0x6a2e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2e26:{NFSU2_TR(0x6a2e26);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6a2e28:{NFSU2_TR(0x6a2e28);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6a2e2c:{NFSU2_TR(0x6a2e2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2e2f:{NFSU2_TR(0x6a2e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2e32:{NFSU2_TR(0x6a2e32);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2d81u);}goto L6a2d81;}}
}
B6a2e38:L6a2e38:{c.instructions+=1;NFSU2_TR(0x6a2e38);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2b2au);}goto L6a2b2a;}
}
B6a2e3d:L6a2e3d:{c.instructions+=2;NFSU2_TR(0x6a2e3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x20000001ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2e44:{NFSU2_TR(0x6a2e44);
{goto L6a2e4d;}
}
B6a2e46:L6a2e46:{c.instructions+=1;NFSU2_TR(0x6a2e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x20100001ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2e4d:L6a2e4d:{c.instructions+=2;NFSU2_TR(0x6a2e4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a2e53:{NFSU2_TR(0x6a2e53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a2e58ull));
TAIL_STATIC(0x698e7du,698);
}
B6a2e58:L6a2e58:{c.instructions+=6;NFSU2_TR(0x6a2e58);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2e5a:{NFSU2_TR(0x6a2e5a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2e5c:{NFSU2_TR(0x6a2e5c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2e5e:{NFSU2_TR(0x6a2e5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a2e61:{NFSU2_TR(0x6a2e61);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a2e67:{NFSU2_TR(0x6a2e67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a2e6cull));
TAIL_STATIC(0x699362u,699);
}
B6a2e6c:L6a2e6c:{c.instructions+=2;NFSU2_TR(0x6a2e6c);
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
B6a2e6e:{NFSU2_TR(0x6a2e6e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a2eb2;}}
}
B6a2e70:L6a2e70:{c.instructions+=3;NFSU2_TR(0x6a2e70);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a2e73:{NFSU2_TR(0x6a2e73);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a2e79:{NFSU2_TR(0x6a2e79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a2e7eull));
TAIL_STATIC(0x698eb3u,698);
}
B6a2e7e:L6a2e7e:{c.instructions+=2;NFSU2_TR(0x6a2e7e);
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
B6a2e80:{NFSU2_TR(0x6a2e80);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a2eb2;}}
}
B6a2e82:L6a2e82:{c.instructions+=15;NFSU2_TR(0x6a2e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2e88:{NFSU2_TR(0x6a2e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2e8b:{NFSU2_TR(0x6a2e8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a2e8d:{NFSU2_TR(0x6a2e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2e93:{NFSU2_TR(0x6a2e93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2e96:{NFSU2_TR(0x6a2e96);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2e97:{NFSU2_TR(0x6a2e97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2e98:{NFSU2_TR(0x6a2e98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6a2e9a:{NFSU2_TR(0x6a2e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a2ea0:{NFSU2_TR(0x6a2ea0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2ea1:{NFSU2_TR(0x6a2ea1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a2ea7:{NFSU2_TR(0x6a2ea7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2ea8:{NFSU2_TR(0x6a2ea8);
__builtin_memmove((R+4),(R+12),4);
}
B6a2eaa:{NFSU2_TR(0x6a2eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2ead:{NFSU2_TR(0x6a2ead);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a2eb2ull));
TAIL_STATIC(0x6a18f6u,6a1);
}
B6a2eb2:L6a2eb2:{c.instructions+=3;NFSU2_TR(0x6a2eb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a2eb8:{NFSU2_TR(0x6a2eb8);
__builtin_memmove((R+24),(R+0),4);
}
B6a2eba:{NFSU2_TR(0x6a2eba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a2ebfull));
TAIL_STATIC(0x6996f4u,699);
}
B6a2ebf:L6a2ebf:{c.instructions+=2;NFSU2_TR(0x6a2ebf);
__builtin_memmove((R+0),(R+24),4);
}
B6a2ec1:{NFSU2_TR(0x6a2ec1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2b2cu);}goto L6a2b2c;}
}
B6a2ec6:L6a2ec6:{c.instructions+=9;NFSU2_TR(0x6a2ec6);
__builtin_memmove((R+28),(R+28),4);
}
B6a2ec8:{NFSU2_TR(0x6a2ec8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2ec9:{NFSU2_TR(0x6a2ec9);
__builtin_memmove((R+20),(R+16),4);
}
B6a2ecb:{NFSU2_TR(0x6a2ecb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6a2ece:{NFSU2_TR(0x6a2ece);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2ecf:{NFSU2_TR(0x6a2ecf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2ed0:{NFSU2_TR(0x6a2ed0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2ed1:{NFSU2_TR(0x6a2ed1);
__builtin_memmove((R+24),(R+4),4);
}
B6a2ed3:{NFSU2_TR(0x6a2ed3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a2ed8ull));
TAIL_STATIC(0x69e219u,69e);
}
B6a2ed8:L6a2ed8:{c.instructions+=4;NFSU2_TR(0x6a2ed8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a2eda:{NFSU2_TR(0x6a2eda);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a2edc:{NFSU2_TR(0x6a2edc);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2edf:{NFSU2_TR(0x6a2edf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a2f07;}}
}
B6a2ee1:L6a2ee1:{c.instructions+=8;NFSU2_TR(0x6a2ee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2ee4:{NFSU2_TR(0x6a2ee4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2ee7:{NFSU2_TR(0x6a2ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2eea:{NFSU2_TR(0x6a2eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2eed:{NFSU2_TR(0x6a2eed);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a2ef0:{NFSU2_TR(0x6a2ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2ef3:{NFSU2_TR(0x6a2ef3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a2ef7:{NFSU2_TR(0x6a2ef7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2f01;}}
}
B6a2ef9:L6a2ef9:{c.instructions+=2;NFSU2_TR(0x6a2ef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2efd:{NFSU2_TR(0x6a2efd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2f01:L6a2f01:{c.instructions+=3;NFSU2_TR(0x6a2f01);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a2f02:{NFSU2_TR(0x6a2f02);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6a2f05:{NFSU2_TR(0x6a2f05);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2ee1u);}goto L6a2ee1;}}
}
B6a2f07:L6a2f07:{c.instructions+=3;NFSU2_TR(0x6a2f07);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a2f09:{NFSU2_TR(0x6a2f09);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a2f0c:{NFSU2_TR(0x6a2f0c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a2f26;}}
}
B6a2f0e:L6a2f0e:{c.instructions+=9;NFSU2_TR(0x6a2f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2f11:{NFSU2_TR(0x6a2f11);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a2f14:{NFSU2_TR(0x6a2f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2f17:{NFSU2_TR(0x6a2f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2f1a:{NFSU2_TR(0x6a2f1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a2f1d:{NFSU2_TR(0x6a2f1d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a2f1e:{NFSU2_TR(0x6a2f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2f21:{NFSU2_TR(0x6a2f21);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a2f24:{NFSU2_TR(0x6a2f24);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2f0eu);}goto L6a2f0e;}}
}
B6a2f26:L6a2f26:{c.instructions+=2;NFSU2_TR(0x6a2f26);
__builtin_memmove((R+4),(R+24),4);
}
B6a2f28:{NFSU2_TR(0x6a2f28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a2f2dull));
TAIL_STATIC(0x69e219u,69e);
}
B6a2f2d:L6a2f2d:{c.instructions+=4;NFSU2_TR(0x6a2f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2f30:{NFSU2_TR(0x6a2f30);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2f32:{NFSU2_TR(0x6a2f32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2f35:{NFSU2_TR(0x6a2f35);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a3004u,6a3);}
}
B6a2f3b:L6a2f3b:{c.instructions+=8;NFSU2_TR(0x6a2f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2f3e:{NFSU2_TR(0x6a2f3e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6a2f3f:{NFSU2_TR(0x6a2f3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2f42:{NFSU2_TR(0x6a2f42);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a2f45:{NFSU2_TR(0x6a2f45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a2f47:{NFSU2_TR(0x6a2f47);
__builtin_memmove((R+8),(R+4),4);
}
B6a2f49:{NFSU2_TR(0x6a2f49);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6a2f4f:{NFSU2_TR(0x6a2f4f);
if(r1(R+518)){{goto L6a2ff4;}}
}
B6a2f55:L6a2f55:{c.instructions+=4;NFSU2_TR(0x6a2f55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a2f58:{NFSU2_TR(0x6a2f58);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0000000ull))));
}
B6a2f5e:{NFSU2_TR(0x6a2f5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10000000ull))));
}
B6a2f64:{NFSU2_TR(0x6a2f64);
if(r1(R+512)){{goto L6a2f78;}}
}
B6a2f66:L6a2f66:{c.instructions+=2;NFSU2_TR(0x6a2f66);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x40000000ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2f6c:{NFSU2_TR(0x6a2f6c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a2f78;}}
}
B6a2f6e:L6a2f6e:{c.instructions+=3;NFSU2_TR(0x6a2f6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2f6f:{NFSU2_TR(0x6a2f6f);
__builtin_memmove((R+4),(R+24),4);
}
B6a2f71:{NFSU2_TR(0x6a2f71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a2f76ull));
TAIL_STATIC(0x69bdb7u,69b);
}
B6a2f76:L6a2f76:{c.instructions+=1;NFSU2_TR(0x6a2f76);
{goto L6a2f8f;}
}
B6a2f78:L6a2f78:{c.instructions+=4;NFSU2_TR(0x6a2f78);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2f7e:{NFSU2_TR(0x6a2f7e);
__builtin_memmove((R+4),(R+24),4);
}
B6a2f80:{NFSU2_TR(0x6a2f80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a2f81:{NFSU2_TR(0x6a2f81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a2f8a;}}
}
B6a2f83:L6a2f83:{c.instructions+=1;NFSU2_TR(0x6a2f83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a2f88ull));
TAIL_STATIC(0x69c1a5u,69c);
}
B6a2f88:L6a2f88:{c.instructions+=1;NFSU2_TR(0x6a2f88);
{goto L6a2f8f;}
}
B6a2f8a:L6a2f8a:{c.instructions+=1;NFSU2_TR(0x6a2f8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a2f8full));
TAIL_STATIC(0x69c66au,69c);
}
B6a2f8f:L6a2f8f:{c.instructions+=2;NFSU2_TR(0x6a2f8f);
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
B6a2f91:{NFSU2_TR(0x6a2f91);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6a30fau,6a3);}
}
B6a2f97:L6a2f97:{c.instructions+=4;NFSU2_TR(0x6a2f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a2f9a:{NFSU2_TR(0x6a2f9a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6a2f9c:{NFSU2_TR(0x6a2f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2f9f:{NFSU2_TR(0x6a2f9f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a2fc1;}}
}
B6a2fa1:L6a2fa1:{c.instructions+=5;NFSU2_TR(0x6a2fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2fa4:{NFSU2_TR(0x6a2fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2fa7:{NFSU2_TR(0x6a2fa7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a2faa:{NFSU2_TR(0x6a2faa);
__builtin_memmove((R+4),(R+24),4);
}
B6a2fac:{NFSU2_TR(0x6a2fac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a2fb1ull));
TAIL_STATIC(0x69c810u,69c);
}
B6a2fb1:L6a2fb1:{c.instructions+=2;NFSU2_TR(0x6a2fb1);
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
B6a2fb3:{NFSU2_TR(0x6a2fb3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6a30fau,6a3);}
}
B6a2fb9:L6a2fb9:{c.instructions+=3;NFSU2_TR(0x6a2fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a2fbc:{NFSU2_TR(0x6a2fbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6a2fbf:{NFSU2_TR(0x6a2fbf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2fa1u);}goto L6a2fa1;}}
}
B6a2fc1:L6a2fc1:{c.instructions+=4;NFSU2_TR(0x6a2fc1);
__builtin_memmove((R+4),(R+12),4);
}
B6a2fc3:{NFSU2_TR(0x6a2fc3);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B6a2fc5:{NFSU2_TR(0x6a2fc5);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6a2fc7:{NFSU2_TR(0x6a2fc7);
if(r1(R+518)){{goto L6a2ff4;}}
}
B6a2fc9:L6a2fc9:{c.instructions+=4;NFSU2_TR(0x6a2fc9);
__builtin_memmove((R+0),(R+12),4);
}
B6a2fcb:{NFSU2_TR(0x6a2fcb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6a2fce:{NFSU2_TR(0x6a2fce);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a2fd1:{NFSU2_TR(0x6a2fd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a2fd4:L6a2fd4:{c.instructions+=11;NFSU2_TR(0x6a2fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2fd7:{NFSU2_TR(0x6a2fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6a2fda:{NFSU2_TR(0x6a2fda);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a2fde:{NFSU2_TR(0x6a2fde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a2fe0:{NFSU2_TR(0x6a2fe0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6a2fe2:{NFSU2_TR(0x6a2fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a2fe5:{NFSU2_TR(0x6a2fe5);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6a2fe9:{NFSU2_TR(0x6a2fe9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6a2fec:{NFSU2_TR(0x6a2fec);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B6a2fef:{NFSU2_TR(0x6a2fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2ff2:{NFSU2_TR(0x6a2ff2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2fd4u);}goto L6a2fd4;}}
}
B6a2ff4:L6a2ff4:{c.instructions+=4;NFSU2_TR(0x6a2ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a2ff7:{NFSU2_TR(0x6a2ff7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a2ff9:{NFSU2_TR(0x6a2ff9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a2ffb:{NFSU2_TR(0x6a2ffb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a2f3bu);}goto L6a2f3b;}}
TAIL_STATIC(0x6a3001u,6a3);
}
XIT:NFSU2_TR_EXIT(0x6a2,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
