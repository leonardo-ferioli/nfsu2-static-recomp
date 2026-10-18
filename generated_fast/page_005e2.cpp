#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5da(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 body_5de(u8* __restrict R,Cpu& c);
u32 body_5e1(u8* __restrict R,Cpu& c);
u32 body_5e3(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5e2,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5e2,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5e2(u8* __restrict R,Cpu& c);
u32 page_5e2(Cpu& c){return body_5e2(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5e2(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5e2000:goto L5e2000;
case 0x5e2001:c.instructions+=4;goto B5e2001;
case 0x5e2002:c.instructions+=3;goto B5e2002;
case 0x5e2003:c.instructions+=2;goto B5e2003;
case 0x5e2007:c.instructions+=1;goto B5e2007;
case 0x5e200c:goto L5e200c;
case 0x5e2010:c.instructions+=10;goto B5e2010;
case 0x5e2011:c.instructions+=9;goto B5e2011;
case 0x5e2015:c.instructions+=8;goto B5e2015;
case 0x5e2016:c.instructions+=7;goto B5e2016;
case 0x5e2018:c.instructions+=6;goto B5e2018;
case 0x5e201c:c.instructions+=5;goto B5e201c;
case 0x5e201d:c.instructions+=4;goto B5e201d;
case 0x5e201e:c.instructions+=3;goto B5e201e;
case 0x5e201f:c.instructions+=2;goto B5e201f;
case 0x5e2021:c.instructions+=1;goto B5e2021;
case 0x5e2026:goto L5e2026;
case 0x5e2028:c.instructions+=1;goto B5e2028;
case 0x5e202a:goto L5e202a;
case 0x5e202c:c.instructions+=1;goto B5e202c;
case 0x5e202e:goto L5e202e;
case 0x5e2033:c.instructions+=1;goto B5e2033;
case 0x5e2035:goto L5e2035;
case 0x5e2038:c.instructions+=2;goto B5e2038;
case 0x5e203d:c.instructions+=1;goto B5e203d;
case 0x5e203f:goto L5e203f;
case 0x5e2040:c.instructions+=1;goto B5e2040;
case 0x5e2046:goto L5e2046;
case 0x5e2047:c.instructions+=1;goto B5e2047;
case 0x5e2049:goto L5e2049;
case 0x5e204c:c.instructions+=4;goto B5e204c;
case 0x5e204f:c.instructions+=3;goto B5e204f;
case 0x5e2052:c.instructions+=2;goto B5e2052;
case 0x5e2055:c.instructions+=1;goto B5e2055;
case 0x5e2057:goto L5e2057;
case 0x5e2059:c.instructions+=1;goto B5e2059;
case 0x5e205b:goto L5e205b;
case 0x5e205f:c.instructions+=4;goto B5e205f;
case 0x5e2061:c.instructions+=3;goto B5e2061;
case 0x5e2064:c.instructions+=2;goto B5e2064;
case 0x5e2069:c.instructions+=1;goto B5e2069;
case 0x5e206f:goto L5e206f;
case 0x5e2070:c.instructions+=1;goto B5e2070;
case 0x5e2072:goto L5e2072;
case 0x5e2073:c.instructions+=1;goto B5e2073;
case 0x5e2075:goto L5e2075;
case 0x5e2079:c.instructions+=2;goto B5e2079;
case 0x5e207b:c.instructions+=1;goto B5e207b;
case 0x5e207d:goto L5e207d;
case 0x5e207f:c.instructions+=3;goto B5e207f;
case 0x5e2080:c.instructions+=2;goto B5e2080;
case 0x5e2082:c.instructions+=1;goto B5e2082;
case 0x5e2087:goto L5e2087;
case 0x5e208b:c.instructions+=12;goto B5e208b;
case 0x5e208f:c.instructions+=11;goto B5e208f;
case 0x5e2093:c.instructions+=10;goto B5e2093;
case 0x5e2097:c.instructions+=9;goto B5e2097;
case 0x5e2099:c.instructions+=8;goto B5e2099;
case 0x5e209b:c.instructions+=7;goto B5e209b;
case 0x5e209d:c.instructions+=6;goto B5e209d;
case 0x5e20a1:c.instructions+=5;goto B5e20a1;
case 0x5e20a5:c.instructions+=4;goto B5e20a5;
case 0x5e20a6:c.instructions+=3;goto B5e20a6;
case 0x5e20a9:c.instructions+=2;goto B5e20a9;
case 0x5e20ad:c.instructions+=1;goto B5e20ad;
case 0x5e20b3:goto L5e20b3;
case 0x5e20b7:c.instructions+=8;goto B5e20b7;
case 0x5e20bb:c.instructions+=7;goto B5e20bb;
case 0x5e20c1:c.instructions+=6;goto B5e20c1;
case 0x5e20c2:c.instructions+=5;goto B5e20c2;
case 0x5e20c5:c.instructions+=4;goto B5e20c5;
case 0x5e20c7:c.instructions+=3;goto B5e20c7;
case 0x5e20cb:c.instructions+=2;goto B5e20cb;
case 0x5e20cf:c.instructions+=1;goto B5e20cf;
case 0x5e20d5:goto L5e20d5;
case 0x5e20d9:c.instructions+=6;goto B5e20d9;
case 0x5e20da:c.instructions+=5;goto B5e20da;
case 0x5e20db:c.instructions+=4;goto B5e20db;
case 0x5e20dc:c.instructions+=3;goto B5e20dc;
case 0x5e20dd:c.instructions+=2;goto B5e20dd;
case 0x5e20e0:c.instructions+=1;goto B5e20e0;
case 0x5e20e1:goto L5e20e1;
case 0x5e20e4:c.instructions+=4;goto B5e20e4;
case 0x5e20ea:c.instructions+=3;goto B5e20ea;
case 0x5e20ed:c.instructions+=2;goto B5e20ed;
case 0x5e20f0:c.instructions+=1;goto B5e20f0;
case 0x5e20f2:goto L5e20f2;
case 0x5e20f5:c.instructions+=4;goto B5e20f5;
case 0x5e20f8:c.instructions+=3;goto B5e20f8;
case 0x5e20fb:c.instructions+=2;goto B5e20fb;
case 0x5e20fe:c.instructions+=1;goto B5e20fe;
case 0x5e2103:goto L5e2103;
case 0x5e2106:c.instructions+=4;goto B5e2106;
case 0x5e210b:c.instructions+=3;goto B5e210b;
case 0x5e210e:c.instructions+=2;goto B5e210e;
case 0x5e2111:c.instructions+=1;goto B5e2111;
case 0x5e2130:goto L5e2130;
case 0x5e2133:c.instructions+=7;goto B5e2133;
case 0x5e2139:c.instructions+=6;goto B5e2139;
case 0x5e213b:c.instructions+=5;goto B5e213b;
case 0x5e213d:c.instructions+=4;goto B5e213d;
case 0x5e213f:c.instructions+=3;goto B5e213f;
case 0x5e2143:c.instructions+=2;goto B5e2143;
case 0x5e2147:c.instructions+=1;goto B5e2147;
case 0x5e214d:goto L5e214d;
case 0x5e214e:c.instructions+=5;goto B5e214e;
case 0x5e214f:c.instructions+=4;goto B5e214f;
case 0x5e2150:c.instructions+=3;goto B5e2150;
case 0x5e2152:c.instructions+=2;goto B5e2152;
case 0x5e2153:c.instructions+=1;goto B5e2153;
case 0x5e2157:goto L5e2157;
case 0x5e215a:c.instructions+=1;goto B5e215a;
case 0x5e215c:goto L5e215c;
case 0x5e2161:goto L5e2161;
case 0x5e2166:c.instructions+=4;goto B5e2166;
case 0x5e2168:c.instructions+=3;goto B5e2168;
case 0x5e216a:c.instructions+=2;goto B5e216a;
case 0x5e216e:c.instructions+=1;goto B5e216e;
case 0x5e2170:goto L5e2170;
case 0x5e2172:c.instructions+=2;goto B5e2172;
case 0x5e2175:c.instructions+=1;goto B5e2175;
case 0x5e2177:goto L5e2177;
case 0x5e2178:c.instructions+=1;goto B5e2178;
case 0x5e217a:goto L5e217a;
case 0x5e217b:c.instructions+=1;goto B5e217b;
case 0x5e217d:goto L5e217d;
case 0x5e2180:c.instructions+=2;goto B5e2180;
case 0x5e2183:c.instructions+=1;goto B5e2183;
case 0x5e2186:goto L5e2186;
case 0x5e2189:c.instructions+=2;goto B5e2189;
case 0x5e218b:c.instructions+=1;goto B5e218b;
case 0x5e2191:goto L5e2191;
case 0x5e2195:c.instructions+=3;goto B5e2195;
case 0x5e2198:c.instructions+=2;goto B5e2198;
case 0x5e219a:c.instructions+=1;goto B5e219a;
case 0x5e219c:goto L5e219c;
case 0x5e21a3:c.instructions+=1;goto B5e21a3;
case 0x5e21a5:goto L5e21a5;
case 0x5e21a8:c.instructions+=4;goto B5e21a8;
case 0x5e21ab:c.instructions+=3;goto B5e21ab;
case 0x5e21ad:c.instructions+=2;goto B5e21ad;
case 0x5e21af:c.instructions+=1;goto B5e21af;
case 0x5e21b1:goto L5e21b1;
case 0x5e21b4:c.instructions+=3;goto B5e21b4;
case 0x5e21b6:c.instructions+=2;goto B5e21b6;
case 0x5e21b8:c.instructions+=1;goto B5e21b8;
case 0x5e21be:goto L5e21be;
case 0x5e21c0:c.instructions+=1;goto B5e21c0;
case 0x5e21c2:goto L5e21c2;
case 0x5e21c7:goto L5e21c7;
case 0x5e21c9:goto L5e21c9;
case 0x5e21cd:c.instructions+=8;goto B5e21cd;
case 0x5e21d0:c.instructions+=7;goto B5e21d0;
case 0x5e21d3:c.instructions+=6;goto B5e21d3;
case 0x5e21da:c.instructions+=5;goto B5e21da;
case 0x5e21dd:c.instructions+=4;goto B5e21dd;
case 0x5e21df:c.instructions+=3;goto B5e21df;
case 0x5e21e2:c.instructions+=2;goto B5e21e2;
case 0x5e21e5:c.instructions+=1;goto B5e21e5;
case 0x5e21e7:goto L5e21e7;
case 0x5e21e9:c.instructions+=1;goto B5e21e9;
case 0x5e21eb:goto L5e21eb;
case 0x5e21ef:goto L5e21ef;
case 0x5e21f2:c.instructions+=1;goto B5e21f2;
case 0x5e21f4:goto L5e21f4;
case 0x5e21f6:c.instructions+=1;goto B5e21f6;
case 0x5e21f8:goto L5e21f8;
case 0x5e21fc:goto L5e21fc;
case 0x5e21ff:c.instructions+=2;goto B5e21ff;
case 0x5e2201:c.instructions+=1;goto B5e2201;
case 0x5e2203:goto L5e2203;
case 0x5e220a:c.instructions+=1;goto B5e220a;
case 0x5e220c:goto L5e220c;
case 0x5e220e:goto L5e220e;
case 0x5e2211:c.instructions+=19;goto B5e2211;
case 0x5e2214:c.instructions+=18;goto B5e2214;
case 0x5e221b:c.instructions+=17;goto B5e221b;
case 0x5e221d:c.instructions+=16;goto B5e221d;
case 0x5e2220:c.instructions+=15;goto B5e2220;
case 0x5e2222:c.instructions+=14;goto B5e2222;
case 0x5e2224:c.instructions+=13;goto B5e2224;
case 0x5e2227:c.instructions+=12;goto B5e2227;
case 0x5e2229:c.instructions+=11;goto B5e2229;
case 0x5e222c:c.instructions+=10;goto B5e222c;
case 0x5e222e:c.instructions+=9;goto B5e222e;
case 0x5e2232:c.instructions+=8;goto B5e2232;
case 0x5e2236:c.instructions+=7;goto B5e2236;
case 0x5e2239:c.instructions+=6;goto B5e2239;
case 0x5e223d:c.instructions+=5;goto B5e223d;
case 0x5e2242:c.instructions+=4;goto B5e2242;
case 0x5e2247:c.instructions+=3;goto B5e2247;
case 0x5e224c:c.instructions+=2;goto B5e224c;
case 0x5e224e:c.instructions+=1;goto B5e224e;
case 0x5e2250:goto L5e2250;
case 0x5e2251:c.instructions+=1;goto B5e2251;
case 0x5e2253:goto L5e2253;
case 0x5e2254:c.instructions+=1;goto B5e2254;
case 0x5e2256:goto L5e2256;
case 0x5e2258:goto L5e2258;
case 0x5e225b:c.instructions+=2;goto B5e225b;
case 0x5e225e:c.instructions+=1;goto B5e225e;
case 0x5e2264:goto L5e2264;
case 0x5e226b:c.instructions+=1;goto B5e226b;
case 0x5e2272:goto L5e2272;
case 0x5e2275:c.instructions+=3;goto B5e2275;
case 0x5e2278:c.instructions+=2;goto B5e2278;
case 0x5e227a:c.instructions+=1;goto B5e227a;
case 0x5e227c:goto L5e227c;
case 0x5e2280:c.instructions+=7;goto B5e2280;
case 0x5e2284:c.instructions+=6;goto B5e2284;
case 0x5e2285:c.instructions+=5;goto B5e2285;
case 0x5e2286:c.instructions+=4;goto B5e2286;
case 0x5e2287:c.instructions+=3;goto B5e2287;
case 0x5e2288:c.instructions+=2;goto B5e2288;
case 0x5e228a:c.instructions+=1;goto B5e228a;
case 0x5e228f:goto L5e228f;
case 0x5e2291:c.instructions+=1;goto B5e2291;
case 0x5e2297:goto L5e2297;
case 0x5e229c:c.instructions+=1;goto B5e229c;
case 0x5e229e:goto L5e229e;
case 0x5e22a2:c.instructions+=7;goto B5e22a2;
case 0x5e22a6:c.instructions+=6;goto B5e22a6;
case 0x5e22a8:c.instructions+=5;goto B5e22a8;
case 0x5e22a9:c.instructions+=4;goto B5e22a9;
case 0x5e22aa:c.instructions+=3;goto B5e22aa;
case 0x5e22ab:c.instructions+=2;goto B5e22ab;
case 0x5e22ad:c.instructions+=1;goto B5e22ad;
case 0x5e22b2:goto L5e22b2;
case 0x5e22b6:c.instructions+=8;goto B5e22b6;
case 0x5e22b7:c.instructions+=7;goto B5e22b7;
case 0x5e22bb:c.instructions+=6;goto B5e22bb;
case 0x5e22bc:c.instructions+=5;goto B5e22bc;
case 0x5e22bd:c.instructions+=4;goto B5e22bd;
case 0x5e22be:c.instructions+=3;goto B5e22be;
case 0x5e22c0:c.instructions+=2;goto B5e22c0;
case 0x5e22c2:c.instructions+=1;goto B5e22c2;
case 0x5e22c7:goto L5e22c7;
case 0x5e22c9:c.instructions+=1;goto B5e22c9;
case 0x5e22cb:goto L5e22cb;
case 0x5e22cd:c.instructions+=1;goto B5e22cd;
case 0x5e22cf:goto L5e22cf;
case 0x5e22d4:c.instructions+=1;goto B5e22d4;
case 0x5e22d6:goto L5e22d6;
case 0x5e22d8:c.instructions+=3;goto B5e22d8;
case 0x5e22db:c.instructions+=2;goto B5e22db;
case 0x5e22e0:c.instructions+=1;goto B5e22e0;
case 0x5e22e2:goto L5e22e2;
case 0x5e22e3:c.instructions+=1;goto B5e22e3;
case 0x5e22e9:goto L5e22e9;
case 0x5e22ea:c.instructions+=1;goto B5e22ea;
case 0x5e22ec:goto L5e22ec;
case 0x5e22ef:c.instructions+=4;goto B5e22ef;
case 0x5e22f2:c.instructions+=3;goto B5e22f2;
case 0x5e22f5:c.instructions+=2;goto B5e22f5;
case 0x5e22f8:c.instructions+=1;goto B5e22f8;
case 0x5e22fa:goto L5e22fa;
case 0x5e22fc:c.instructions+=1;goto B5e22fc;
case 0x5e22fe:goto L5e22fe;
case 0x5e2302:c.instructions+=4;goto B5e2302;
case 0x5e2304:c.instructions+=3;goto B5e2304;
case 0x5e2307:c.instructions+=2;goto B5e2307;
case 0x5e230c:c.instructions+=1;goto B5e230c;
case 0x5e2312:goto L5e2312;
case 0x5e2313:c.instructions+=1;goto B5e2313;
case 0x5e2315:goto L5e2315;
case 0x5e2316:c.instructions+=1;goto B5e2316;
case 0x5e2318:goto L5e2318;
case 0x5e231c:c.instructions+=2;goto B5e231c;
case 0x5e231e:c.instructions+=1;goto B5e231e;
case 0x5e2320:goto L5e2320;
case 0x5e2322:c.instructions+=3;goto B5e2322;
case 0x5e2323:c.instructions+=2;goto B5e2323;
case 0x5e2325:c.instructions+=1;goto B5e2325;
case 0x5e232a:goto L5e232a;
case 0x5e232e:c.instructions+=8;goto B5e232e;
case 0x5e2332:c.instructions+=7;goto B5e2332;
case 0x5e2336:c.instructions+=6;goto B5e2336;
case 0x5e233a:c.instructions+=5;goto B5e233a;
case 0x5e233c:c.instructions+=4;goto B5e233c;
case 0x5e233e:c.instructions+=3;goto B5e233e;
case 0x5e2340:c.instructions+=2;goto B5e2340;
case 0x5e2344:c.instructions+=1;goto B5e2344;
case 0x5e2348:goto L5e2348;
case 0x5e2349:c.instructions+=3;goto B5e2349;
case 0x5e234c:c.instructions+=2;goto B5e234c;
case 0x5e2350:c.instructions+=1;goto B5e2350;
case 0x5e2356:goto L5e2356;
case 0x5e235a:c.instructions+=8;goto B5e235a;
case 0x5e235e:c.instructions+=7;goto B5e235e;
case 0x5e2363:c.instructions+=6;goto B5e2363;
case 0x5e2364:c.instructions+=5;goto B5e2364;
case 0x5e2367:c.instructions+=4;goto B5e2367;
case 0x5e2369:c.instructions+=3;goto B5e2369;
case 0x5e236d:c.instructions+=2;goto B5e236d;
case 0x5e2371:c.instructions+=1;goto B5e2371;
case 0x5e2377:goto L5e2377;
case 0x5e237b:c.instructions+=4;goto B5e237b;
case 0x5e237c:c.instructions+=3;goto B5e237c;
case 0x5e237d:c.instructions+=2;goto B5e237d;
case 0x5e237e:c.instructions+=1;goto B5e237e;
case 0x5e237f:goto L5e237f;
case 0x5e2382:c.instructions+=1;goto B5e2382;
case 0x5e2383:goto L5e2383;
case 0x5e2386:c.instructions+=4;goto B5e2386;
case 0x5e238b:c.instructions+=3;goto B5e238b;
case 0x5e238e:c.instructions+=2;goto B5e238e;
case 0x5e2391:c.instructions+=1;goto B5e2391;
case 0x5e2393:goto L5e2393;
case 0x5e2396:c.instructions+=4;goto B5e2396;
case 0x5e2399:c.instructions+=3;goto B5e2399;
case 0x5e239c:c.instructions+=2;goto B5e239c;
case 0x5e239f:c.instructions+=1;goto B5e239f;
case 0x5e23a4:goto L5e23a4;
case 0x5e23a7:c.instructions+=4;goto B5e23a7;
case 0x5e23ac:c.instructions+=3;goto B5e23ac;
case 0x5e23af:c.instructions+=2;goto B5e23af;
case 0x5e23b2:c.instructions+=1;goto B5e23b2;
case 0x5e23d0:goto L5e23d0;
case 0x5e23d3:c.instructions+=9;goto B5e23d3;
case 0x5e23d4:c.instructions+=8;goto B5e23d4;
case 0x5e23da:c.instructions+=7;goto B5e23da;
case 0x5e23db:c.instructions+=6;goto B5e23db;
case 0x5e23dd:c.instructions+=5;goto B5e23dd;
case 0x5e23df:c.instructions+=4;goto B5e23df;
case 0x5e23e1:c.instructions+=3;goto B5e23e1;
case 0x5e23e5:c.instructions+=2;goto B5e23e5;
case 0x5e23e9:c.instructions+=1;goto B5e23e9;
case 0x5e23ef:goto L5e23ef;
case 0x5e23f0:c.instructions+=1;goto B5e23f0;
case 0x5e23f1:goto L5e23f1;
case 0x5e23f6:c.instructions+=4;goto B5e23f6;
case 0x5e23f9:c.instructions+=3;goto B5e23f9;
case 0x5e23fb:c.instructions+=2;goto B5e23fb;
case 0x5e23ff:c.instructions+=1;goto B5e23ff;
case 0x5e2401:goto L5e2401;
case 0x5e2404:c.instructions+=1;goto B5e2404;
case 0x5e240a:goto L5e240a;
case 0x5e240c:c.instructions+=2;goto B5e240c;
case 0x5e240f:c.instructions+=1;goto B5e240f;
case 0x5e2411:goto L5e2411;
case 0x5e2412:c.instructions+=1;goto B5e2412;
case 0x5e2414:goto L5e2414;
case 0x5e2415:c.instructions+=1;goto B5e2415;
case 0x5e2417:goto L5e2417;
case 0x5e241a:c.instructions+=2;goto B5e241a;
case 0x5e241c:c.instructions+=1;goto B5e241c;
case 0x5e241e:goto L5e241e;
case 0x5e2421:c.instructions+=2;goto B5e2421;
case 0x5e2423:c.instructions+=1;goto B5e2423;
case 0x5e2429:goto L5e2429;
case 0x5e242c:c.instructions+=4;goto B5e242c;
case 0x5e242e:c.instructions+=3;goto B5e242e;
case 0x5e2431:c.instructions+=2;goto B5e2431;
case 0x5e2434:c.instructions+=1;goto B5e2434;
case 0x5e243a:goto L5e243a;
case 0x5e243c:c.instructions+=3;goto B5e243c;
case 0x5e243f:c.instructions+=2;goto B5e243f;
case 0x5e2442:c.instructions+=1;goto B5e2442;
case 0x5e2444:goto L5e2444;
case 0x5e2448:c.instructions+=1;goto B5e2448;
case 0x5e244a:goto L5e244a;
case 0x5e244d:c.instructions+=4;goto B5e244d;
case 0x5e2450:c.instructions+=3;goto B5e2450;
case 0x5e2453:c.instructions+=2;goto B5e2453;
case 0x5e2456:c.instructions+=1;goto B5e2456;
case 0x5e2458:goto L5e2458;
case 0x5e245b:c.instructions+=3;goto B5e245b;
case 0x5e245d:c.instructions+=2;goto B5e245d;
case 0x5e245f:c.instructions+=1;goto B5e245f;
case 0x5e2465:goto L5e2465;
case 0x5e2467:c.instructions+=1;goto B5e2467;
case 0x5e2469:goto L5e2469;
case 0x5e246e:goto L5e246e;
case 0x5e2472:goto L5e2472;
case 0x5e2475:c.instructions+=1;goto B5e2475;
case 0x5e2477:goto L5e2477;
case 0x5e247b:c.instructions+=1;goto B5e247b;
case 0x5e247d:goto L5e247d;
case 0x5e2481:goto L5e2481;
case 0x5e2484:c.instructions+=2;goto B5e2484;
case 0x5e2486:c.instructions+=1;goto B5e2486;
case 0x5e2488:goto L5e2488;
case 0x5e248f:c.instructions+=1;goto B5e248f;
case 0x5e2491:goto L5e2491;
case 0x5e2493:goto L5e2493;
case 0x5e2496:c.instructions+=12;goto B5e2496;
case 0x5e2499:c.instructions+=11;goto B5e2499;
case 0x5e24a0:c.instructions+=10;goto B5e24a0;
case 0x5e24a2:c.instructions+=9;goto B5e24a2;
case 0x5e24a5:c.instructions+=8;goto B5e24a5;
case 0x5e24a7:c.instructions+=7;goto B5e24a7;
case 0x5e24aa:c.instructions+=6;goto B5e24aa;
case 0x5e24ac:c.instructions+=5;goto B5e24ac;
case 0x5e24af:c.instructions+=4;goto B5e24af;
case 0x5e24b1:c.instructions+=3;goto B5e24b1;
case 0x5e24b5:c.instructions+=2;goto B5e24b5;
case 0x5e24bd:c.instructions+=1;goto B5e24bd;
case 0x5e24c3:goto L5e24c3;
case 0x5e24c7:c.instructions+=2;goto B5e24c7;
case 0x5e24c9:c.instructions+=1;goto B5e24c9;
case 0x5e24cb:goto L5e24cb;
case 0x5e24cf:c.instructions+=5;goto B5e24cf;
case 0x5e24d2:c.instructions+=4;goto B5e24d2;
case 0x5e24d6:c.instructions+=3;goto B5e24d6;
case 0x5e24da:c.instructions+=2;goto B5e24da;
case 0x5e24e0:c.instructions+=1;goto B5e24e0;
case 0x5e24e2:goto L5e24e2;
case 0x5e24e4:c.instructions+=1;goto B5e24e4;
case 0x5e24e9:goto L5e24e9;
case 0x5e24ed:c.instructions+=5;goto B5e24ed;
case 0x5e24f1:c.instructions+=4;goto B5e24f1;
case 0x5e24f7:c.instructions+=3;goto B5e24f7;
case 0x5e24f9:c.instructions+=2;goto B5e24f9;
case 0x5e24fc:c.instructions+=1;goto B5e24fc;
case 0x5e2502:goto L5e2502;
case 0x5e2507:c.instructions+=2;goto B5e2507;
case 0x5e250f:c.instructions+=1;goto B5e250f;
case 0x5e2510:goto L5e2510;
case 0x5e2514:c.instructions+=4;goto B5e2514;
case 0x5e2517:c.instructions+=3;goto B5e2517;
case 0x5e2519:c.instructions+=2;goto B5e2519;
case 0x5e251e:c.instructions+=1;goto B5e251e;
case 0x5e2520:goto L5e2520;
case 0x5e2522:c.instructions+=1;goto B5e2522;
case 0x5e2524:goto L5e2524;
case 0x5e2529:goto L5e2529;
case 0x5e252d:c.instructions+=2;goto B5e252d;
case 0x5e2532:c.instructions+=1;goto B5e2532;
case 0x5e2534:goto L5e2534;
case 0x5e2536:c.instructions+=1;goto B5e2536;
case 0x5e2538:goto L5e2538;
case 0x5e2539:goto L5e2539;
case 0x5e253d:c.instructions+=1;goto B5e253d;
case 0x5e2543:goto L5e2543;
case 0x5e2545:c.instructions+=2;goto B5e2545;
case 0x5e2547:c.instructions+=1;goto B5e2547;
case 0x5e2549:goto L5e2549;
case 0x5e254f:c.instructions+=1;goto B5e254f;
case 0x5e2550:goto L5e2550;
case 0x5e2553:c.instructions+=2;goto B5e2553;
case 0x5e2558:c.instructions+=1;goto B5e2558;
case 0x5e255a:goto L5e255a;
case 0x5e255c:c.instructions+=1;goto B5e255c;
case 0x5e255e:goto L5e255e;
case 0x5e2562:c.instructions+=1;goto B5e2562;
case 0x5e2568:goto L5e2568;
case 0x5e2569:goto L5e2569;
case 0x5e256a:c.instructions+=3;goto B5e256a;
case 0x5e256d:c.instructions+=2;goto B5e256d;
case 0x5e2570:c.instructions+=1;goto B5e2570;
case 0x5e2572:goto L5e2572;
case 0x5e2574:goto L5e2574;
case 0x5e2577:c.instructions+=6;goto B5e2577;
case 0x5e257b:c.instructions+=5;goto B5e257b;
case 0x5e257d:c.instructions+=4;goto B5e257d;
case 0x5e2580:c.instructions+=3;goto B5e2580;
case 0x5e2583:c.instructions+=2;goto B5e2583;
case 0x5e2585:c.instructions+=1;goto B5e2585;
case 0x5e2587:goto L5e2587;
case 0x5e2589:c.instructions+=2;goto B5e2589;
case 0x5e258c:c.instructions+=1;goto B5e258c;
case 0x5e2592:goto L5e2592;
case 0x5e2593:c.instructions+=1;goto B5e2593;
case 0x5e2595:goto L5e2595;
case 0x5e2596:c.instructions+=1;goto B5e2596;
case 0x5e2598:goto L5e2598;
case 0x5e259a:c.instructions+=2;goto B5e259a;
case 0x5e259d:c.instructions+=1;goto B5e259d;
case 0x5e25a0:goto L5e25a0;
case 0x5e25a3:c.instructions+=2;goto B5e25a3;
case 0x5e25a5:c.instructions+=1;goto B5e25a5;
case 0x5e25a7:goto L5e25a7;
case 0x5e25a9:c.instructions+=3;goto B5e25a9;
case 0x5e25ac:c.instructions+=2;goto B5e25ac;
case 0x5e25af:c.instructions+=1;goto B5e25af;
case 0x5e25b1:goto L5e25b1;
case 0x5e25b3:c.instructions+=2;goto B5e25b3;
case 0x5e25b6:c.instructions+=1;goto B5e25b6;
case 0x5e25b8:goto L5e25b8;
case 0x5e25b9:c.instructions+=1;goto B5e25b9;
case 0x5e25bb:goto L5e25bb;
case 0x5e25bc:c.instructions+=1;goto B5e25bc;
case 0x5e25c2:goto L5e25c2;
case 0x5e25c4:c.instructions+=3;goto B5e25c4;
case 0x5e25c7:c.instructions+=2;goto B5e25c7;
case 0x5e25ca:c.instructions+=1;goto B5e25ca;
case 0x5e25cc:goto L5e25cc;
case 0x5e25cf:c.instructions+=1;goto B5e25cf;
case 0x5e25d1:goto L5e25d1;
case 0x5e25d6:goto L5e25d6;
case 0x5e25da:c.instructions+=5;goto B5e25da;
case 0x5e25e0:c.instructions+=4;goto B5e25e0;
case 0x5e25e4:c.instructions+=3;goto B5e25e4;
case 0x5e25e5:c.instructions+=2;goto B5e25e5;
case 0x5e25e9:c.instructions+=1;goto B5e25e9;
case 0x5e25ee:goto L5e25ee;
case 0x5e25f4:c.instructions+=4;goto B5e25f4;
case 0x5e25f7:c.instructions+=3;goto B5e25f7;
case 0x5e25f9:c.instructions+=2;goto B5e25f9;
case 0x5e25fb:c.instructions+=1;goto B5e25fb;
case 0x5e2600:goto L5e2600;
case 0x5e2602:c.instructions+=4;goto B5e2602;
case 0x5e2605:c.instructions+=3;goto B5e2605;
case 0x5e2608:c.instructions+=2;goto B5e2608;
case 0x5e260b:c.instructions+=1;goto B5e260b;
case 0x5e260d:goto L5e260d;
case 0x5e260f:c.instructions+=3;goto B5e260f;
case 0x5e2612:c.instructions+=2;goto B5e2612;
case 0x5e2615:c.instructions+=1;goto B5e2615;
case 0x5e2617:goto L5e2617;
case 0x5e261a:c.instructions+=1;goto B5e261a;
case 0x5e261c:goto L5e261c;
case 0x5e261e:goto L5e261e;
case 0x5e2620:c.instructions+=4;goto B5e2620;
case 0x5e2623:c.instructions+=3;goto B5e2623;
case 0x5e2626:c.instructions+=2;goto B5e2626;
case 0x5e2629:c.instructions+=1;goto B5e2629;
case 0x5e262b:goto L5e262b;
case 0x5e262d:c.instructions+=2;goto B5e262d;
case 0x5e2630:c.instructions+=1;goto B5e2630;
case 0x5e2633:goto L5e2633;
case 0x5e2636:c.instructions+=2;goto B5e2636;
case 0x5e2638:c.instructions+=1;goto B5e2638;
case 0x5e263a:goto L5e263a;
case 0x5e263c:c.instructions+=3;goto B5e263c;
case 0x5e263e:c.instructions+=2;goto B5e263e;
case 0x5e2641:c.instructions+=1;goto B5e2641;
case 0x5e2643:goto L5e2643;
case 0x5e2644:c.instructions+=1;goto B5e2644;
case 0x5e2646:goto L5e2646;
case 0x5e2647:c.instructions+=1;goto B5e2647;
case 0x5e2649:goto L5e2649;
case 0x5e264b:c.instructions+=3;goto B5e264b;
case 0x5e264e:c.instructions+=2;goto B5e264e;
case 0x5e2651:c.instructions+=1;goto B5e2651;
case 0x5e2653:goto L5e2653;
case 0x5e2656:c.instructions+=1;goto B5e2656;
case 0x5e2658:goto L5e2658;
case 0x5e265a:c.instructions+=1;goto B5e265a;
case 0x5e265c:goto L5e265c;
case 0x5e265e:c.instructions+=4;goto B5e265e;
case 0x5e2661:c.instructions+=3;goto B5e2661;
case 0x5e2664:c.instructions+=2;goto B5e2664;
case 0x5e2667:c.instructions+=1;goto B5e2667;
case 0x5e2669:goto L5e2669;
case 0x5e266b:c.instructions+=2;goto B5e266b;
case 0x5e266e:c.instructions+=1;goto B5e266e;
case 0x5e2671:goto L5e2671;
case 0x5e2674:goto L5e2674;
case 0x5e2676:c.instructions+=2;goto B5e2676;
case 0x5e2679:c.instructions+=1;goto B5e2679;
case 0x5e267b:goto L5e267b;
case 0x5e267c:c.instructions+=1;goto B5e267c;
case 0x5e267e:goto L5e267e;
case 0x5e267f:c.instructions+=1;goto B5e267f;
case 0x5e2681:goto L5e2681;
case 0x5e2684:c.instructions+=1;goto B5e2684;
case 0x5e2687:goto L5e2687;
case 0x5e268a:goto L5e268a;
case 0x5e268c:c.instructions+=1;goto B5e268c;
case 0x5e268e:goto L5e268e;
case 0x5e2690:c.instructions+=3;goto B5e2690;
case 0x5e2691:c.instructions+=2;goto B5e2691;
case 0x5e2693:c.instructions+=1;goto B5e2693;
case 0x5e2698:goto L5e2698;
case 0x5e269d:c.instructions+=1;goto B5e269d;
case 0x5e26a2:goto L5e26a2;
case 0x5e26a7:c.instructions+=2;goto B5e26a7;
case 0x5e26aa:c.instructions+=1;goto B5e26aa;
case 0x5e26ac:goto L5e26ac;
case 0x5e26b0:c.instructions+=2;goto B5e26b0;
case 0x5e26b2:c.instructions+=1;goto B5e26b2;
case 0x5e26b4:goto L5e26b4;
case 0x5e26b7:c.instructions+=8;goto B5e26b7;
case 0x5e26bc:c.instructions+=7;goto B5e26bc;
case 0x5e26c3:c.instructions+=6;goto B5e26c3;
case 0x5e26c7:c.instructions+=5;goto B5e26c7;
case 0x5e26c9:c.instructions+=4;goto B5e26c9;
case 0x5e26cf:c.instructions+=3;goto B5e26cf;
case 0x5e26d1:c.instructions+=2;goto B5e26d1;
case 0x5e26d6:c.instructions+=1;goto B5e26d6;
case 0x5e26d8:goto L5e26d8;
case 0x5e26da:c.instructions+=9;goto B5e26da;
case 0x5e26dc:c.instructions+=8;goto B5e26dc;
case 0x5e26df:c.instructions+=7;goto B5e26df;
case 0x5e26e1:c.instructions+=6;goto B5e26e1;
case 0x5e26e4:c.instructions+=5;goto B5e26e4;
case 0x5e26e6:c.instructions+=4;goto B5e26e6;
case 0x5e26ea:c.instructions+=3;goto B5e26ea;
case 0x5e26ed:c.instructions+=2;goto B5e26ed;
case 0x5e26ef:c.instructions+=1;goto B5e26ef;
case 0x5e26f1:goto L5e26f1;
case 0x5e26f4:c.instructions+=2;goto B5e26f4;
case 0x5e26fb:c.instructions+=1;goto B5e26fb;
case 0x5e26fd:goto L5e26fd;
case 0x5e26ff:c.instructions+=6;goto B5e26ff;
case 0x5e2701:c.instructions+=5;goto B5e2701;
case 0x5e2704:c.instructions+=4;goto B5e2704;
case 0x5e2706:c.instructions+=3;goto B5e2706;
case 0x5e2709:c.instructions+=2;goto B5e2709;
case 0x5e270b:c.instructions+=1;goto B5e270b;
case 0x5e270d:goto L5e270d;
case 0x5e2710:c.instructions+=1;goto B5e2710;
case 0x5e2714:goto L5e2714;
case 0x5e2716:c.instructions+=1;goto B5e2716;
case 0x5e271c:goto L5e271c;
case 0x5e271d:c.instructions+=2;goto B5e271d;
case 0x5e2720:c.instructions+=1;goto B5e2720;
case 0x5e2726:goto L5e2726;
case 0x5e272a:c.instructions+=4;goto B5e272a;
case 0x5e272b:c.instructions+=3;goto B5e272b;
case 0x5e272d:c.instructions+=2;goto B5e272d;
case 0x5e2731:c.instructions+=1;goto B5e2731;
case 0x5e2737:goto L5e2737;
case 0x5e273b:c.instructions+=2;goto B5e273b;
case 0x5e273c:c.instructions+=1;goto B5e273c;
case 0x5e273d:goto L5e273d;
case 0x5e273e:c.instructions+=3;goto B5e273e;
case 0x5e273f:c.instructions+=2;goto B5e273f;
case 0x5e2742:c.instructions+=1;goto B5e2742;
case 0x5e2750:goto L5e2750;
case 0x5e2755:c.instructions+=6;goto B5e2755;
case 0x5e2756:c.instructions+=5;goto B5e2756;
case 0x5e2757:c.instructions+=4;goto B5e2757;
case 0x5e2759:c.instructions+=3;goto B5e2759;
case 0x5e275b:c.instructions+=2;goto B5e275b;
case 0x5e275d:c.instructions+=1;goto B5e275d;
case 0x5e275f:goto L5e275f;
case 0x5e2760:c.instructions+=2;goto B5e2760;
case 0x5e2761:c.instructions+=1;goto B5e2761;
case 0x5e2763:goto L5e2763;
case 0x5e2768:c.instructions+=6;goto B5e2768;
case 0x5e276b:c.instructions+=5;goto B5e276b;
case 0x5e276e:c.instructions+=4;goto B5e276e;
case 0x5e2770:c.instructions+=3;goto B5e2770;
case 0x5e2773:c.instructions+=2;goto B5e2773;
case 0x5e2776:c.instructions+=1;goto B5e2776;
case 0x5e2778:goto L5e2778;
case 0x5e277a:c.instructions+=2;goto B5e277a;
case 0x5e277c:c.instructions+=1;goto B5e277c;
case 0x5e277e:goto L5e277e;
case 0x5e2780:c.instructions+=1;goto B5e2780;
case 0x5e2782:goto L5e2782;
case 0x5e2784:c.instructions+=1;goto B5e2784;
case 0x5e2789:goto L5e2789;
case 0x5e278b:c.instructions+=1;goto B5e278b;
case 0x5e278d:goto L5e278d;
case 0x5e2790:c.instructions+=9;goto B5e2790;
case 0x5e2792:c.instructions+=8;goto B5e2792;
case 0x5e2795:c.instructions+=7;goto B5e2795;
case 0x5e2798:c.instructions+=6;goto B5e2798;
case 0x5e279b:c.instructions+=5;goto B5e279b;
case 0x5e279e:c.instructions+=4;goto B5e279e;
case 0x5e27a1:c.instructions+=3;goto B5e27a1;
case 0x5e27a3:c.instructions+=2;goto B5e27a3;
case 0x5e27a6:c.instructions+=1;goto B5e27a6;
case 0x5e27a8:goto L5e27a8;
case 0x5e27aa:c.instructions+=3;goto B5e27aa;
case 0x5e27ac:c.instructions+=2;goto B5e27ac;
case 0x5e27ae:c.instructions+=1;goto B5e27ae;
case 0x5e27b3:goto L5e27b3;
case 0x5e27b5:goto L5e27b5;
case 0x5e27ba:c.instructions+=4;goto B5e27ba;
case 0x5e27bb:c.instructions+=3;goto B5e27bb;
case 0x5e27be:c.instructions+=2;goto B5e27be;
case 0x5e27c0:c.instructions+=1;goto B5e27c0;
case 0x5e27c2:goto L5e27c2;
case 0x5e27c3:c.instructions+=1;goto B5e27c3;
case 0x5e27c4:goto L5e27c4;
case 0x5e27c5:c.instructions+=3;goto B5e27c5;
case 0x5e27c7:c.instructions+=2;goto B5e27c7;
case 0x5e27c8:c.instructions+=1;goto B5e27c8;
case 0x5e27d0:goto L5e27d0;
case 0x5e27d6:c.instructions+=4;goto B5e27d6;
case 0x5e27d7:c.instructions+=3;goto B5e27d7;
case 0x5e27d8:c.instructions+=2;goto B5e27d8;
case 0x5e27dc:c.instructions+=1;goto B5e27dc;
case 0x5e27e1:goto L5e27e1;
case 0x5e27e6:c.instructions+=6;goto B5e27e6;
case 0x5e27e8:c.instructions+=5;goto B5e27e8;
case 0x5e27ea:c.instructions+=4;goto B5e27ea;
case 0x5e27ec:c.instructions+=3;goto B5e27ec;
case 0x5e27f0:c.instructions+=2;goto B5e27f0;
case 0x5e27f4:c.instructions+=1;goto B5e27f4;
case 0x5e27fa:goto L5e27fa;
case 0x5e27fb:c.instructions+=2;goto B5e27fb;
case 0x5e27ff:c.instructions+=1;goto B5e27ff;
case 0x5e2800:goto L5e2800;
case 0x5e2805:c.instructions+=5;goto B5e2805;
case 0x5e2807:c.instructions+=4;goto B5e2807;
case 0x5e280b:c.instructions+=3;goto B5e280b;
case 0x5e280e:c.instructions+=2;goto B5e280e;
case 0x5e2810:c.instructions+=1;goto B5e2810;
case 0x5e2812:goto L5e2812;
case 0x5e2819:c.instructions+=2;goto B5e2819;
case 0x5e281d:c.instructions+=1;goto B5e281d;
case 0x5e281f:goto L5e281f;
case 0x5e2827:goto L5e2827;
case 0x5e282a:c.instructions+=3;goto B5e282a;
case 0x5e282d:c.instructions+=2;goto B5e282d;
case 0x5e2830:c.instructions+=1;goto B5e2830;
case 0x5e2832:goto L5e2832;
case 0x5e2836:goto L5e2836;
case 0x5e2839:c.instructions+=2;goto B5e2839;
case 0x5e283b:c.instructions+=1;goto B5e283b;
case 0x5e283d:goto L5e283d;
case 0x5e2844:c.instructions+=1;goto B5e2844;
case 0x5e2846:goto L5e2846;
case 0x5e2848:goto L5e2848;
case 0x5e284a:c.instructions+=1;goto B5e284a;
case 0x5e284c:goto L5e284c;
case 0x5e2853:c.instructions+=1;goto B5e2853;
case 0x5e2855:goto L5e2855;
case 0x5e2857:goto L5e2857;
case 0x5e285b:c.instructions+=16;goto B5e285b;
case 0x5e285e:c.instructions+=15;goto B5e285e;
case 0x5e2865:c.instructions+=14;goto B5e2865;
case 0x5e2869:c.instructions+=13;goto B5e2869;
case 0x5e2870:c.instructions+=12;goto B5e2870;
case 0x5e2878:c.instructions+=11;goto B5e2878;
case 0x5e287a:c.instructions+=10;goto B5e287a;
case 0x5e287c:c.instructions+=9;goto B5e287c;
case 0x5e2880:c.instructions+=8;goto B5e2880;
case 0x5e2882:c.instructions+=7;goto B5e2882;
case 0x5e2884:c.instructions+=6;goto B5e2884;
case 0x5e2886:c.instructions+=5;goto B5e2886;
case 0x5e2888:c.instructions+=4;goto B5e2888;
case 0x5e288c:c.instructions+=3;goto B5e288c;
case 0x5e288e:c.instructions+=2;goto B5e288e;
case 0x5e2891:c.instructions+=1;goto B5e2891;
case 0x5e2893:goto L5e2893;
case 0x5e2895:c.instructions+=5;goto B5e2895;
case 0x5e2896:c.instructions+=4;goto B5e2896;
case 0x5e289a:c.instructions+=3;goto B5e289a;
case 0x5e289b:c.instructions+=2;goto B5e289b;
case 0x5e28a0:c.instructions+=1;goto B5e28a0;
case 0x5e28a5:goto L5e28a5;
case 0x5e28a9:c.instructions+=7;goto B5e28a9;
case 0x5e28ad:c.instructions+=6;goto B5e28ad;
case 0x5e28af:c.instructions+=5;goto B5e28af;
case 0x5e28b2:c.instructions+=4;goto B5e28b2;
case 0x5e28b4:c.instructions+=3;goto B5e28b4;
case 0x5e28b7:c.instructions+=2;goto B5e28b7;
case 0x5e28ba:c.instructions+=1;goto B5e28ba;
case 0x5e28bc:goto L5e28bc;
case 0x5e28bf:c.instructions+=9;goto B5e28bf;
case 0x5e28c5:c.instructions+=8;goto B5e28c5;
case 0x5e28c8:c.instructions+=7;goto B5e28c8;
case 0x5e28ca:c.instructions+=6;goto B5e28ca;
case 0x5e28cd:c.instructions+=5;goto B5e28cd;
case 0x5e28d3:c.instructions+=4;goto B5e28d3;
case 0x5e28d9:c.instructions+=3;goto B5e28d9;
case 0x5e28dd:c.instructions+=2;goto B5e28dd;
case 0x5e28e1:c.instructions+=1;goto B5e28e1;
case 0x5e28e3:goto L5e28e3;
case 0x5e28e9:goto L5e28e9;
case 0x5e28ed:c.instructions+=5;goto B5e28ed;
case 0x5e28ef:c.instructions+=4;goto B5e28ef;
case 0x5e28f0:c.instructions+=3;goto B5e28f0;
case 0x5e28f4:c.instructions+=2;goto B5e28f4;
case 0x5e28f6:c.instructions+=1;goto B5e28f6;
case 0x5e28fb:goto L5e28fb;
case 0x5e28fe:c.instructions+=4;goto B5e28fe;
case 0x5e2900:c.instructions+=3;goto B5e2900;
case 0x5e2903:c.instructions+=2;goto B5e2903;
case 0x5e2906:c.instructions+=1;goto B5e2906;
case 0x5e290c:goto L5e290c;
case 0x5e290e:c.instructions+=1;goto B5e290e;
case 0x5e2910:goto L5e2910;
case 0x5e2912:c.instructions+=3;goto B5e2912;
case 0x5e2915:c.instructions+=2;goto B5e2915;
case 0x5e2917:c.instructions+=1;goto B5e2917;
case 0x5e2919:goto L5e2919;
case 0x5e291a:c.instructions+=1;goto B5e291a;
case 0x5e291c:goto L5e291c;
case 0x5e291d:c.instructions+=1;goto B5e291d;
case 0x5e291f:goto L5e291f;
case 0x5e2922:goto L5e2922;
case 0x5e2924:goto L5e2924;
case 0x5e2927:c.instructions+=2;goto B5e2927;
case 0x5e292a:c.instructions+=1;goto B5e292a;
case 0x5e2930:goto L5e2930;
case 0x5e2937:c.instructions+=1;goto B5e2937;
case 0x5e293e:goto L5e293e;
case 0x5e2941:c.instructions+=2;goto B5e2941;
case 0x5e2944:c.instructions+=1;goto B5e2944;
case 0x5e2946:goto L5e2946;
case 0x5e2948:c.instructions+=2;goto B5e2948;
case 0x5e294b:c.instructions+=1;goto B5e294b;
case 0x5e294d:goto L5e294d;
case 0x5e294e:c.instructions+=1;goto B5e294e;
case 0x5e2950:goto L5e2950;
case 0x5e2951:c.instructions+=1;goto B5e2951;
case 0x5e2957:goto L5e2957;
case 0x5e295a:c.instructions+=4;goto B5e295a;
case 0x5e295d:c.instructions+=3;goto B5e295d;
case 0x5e2960:c.instructions+=2;goto B5e2960;
case 0x5e2963:c.instructions+=1;goto B5e2963;
case 0x5e2968:goto L5e2968;
case 0x5e296b:c.instructions+=4;goto B5e296b;
case 0x5e2970:c.instructions+=3;goto B5e2970;
case 0x5e2973:c.instructions+=2;goto B5e2973;
case 0x5e2976:c.instructions+=1;goto B5e2976;
case 0x5e2978:goto L5e2978;
case 0x5e297c:c.instructions+=4;goto B5e297c;
case 0x5e297f:c.instructions+=3;goto B5e297f;
case 0x5e2982:c.instructions+=2;goto B5e2982;
case 0x5e2984:c.instructions+=1;goto B5e2984;
case 0x5e2986:goto L5e2986;
case 0x5e2989:c.instructions+=1;goto B5e2989;
case 0x5e298b:goto L5e298b;
case 0x5e298d:c.instructions+=3;goto B5e298d;
case 0x5e298e:c.instructions+=2;goto B5e298e;
case 0x5e2990:c.instructions+=1;goto B5e2990;
case 0x5e2995:goto L5e2995;
case 0x5e2997:c.instructions+=2;goto B5e2997;
case 0x5e2998:c.instructions+=1;goto B5e2998;
case 0x5e299d:goto L5e299d;
case 0x5e299f:goto L5e299f;
case 0x5e29a2:c.instructions+=6;goto B5e29a2;
case 0x5e29a6:c.instructions+=5;goto B5e29a6;
case 0x5e29ac:c.instructions+=4;goto B5e29ac;
case 0x5e29af:c.instructions+=3;goto B5e29af;
case 0x5e29b1:c.instructions+=2;goto B5e29b1;
case 0x5e29b4:c.instructions+=1;goto B5e29b4;
case 0x5e29b6:goto L5e29b6;
case 0x5e29bd:c.instructions+=1;goto B5e29bd;
case 0x5e29bf:goto L5e29bf;
case 0x5e29c1:goto L5e29c1;
case 0x5e29c5:c.instructions+=5;goto B5e29c5;
case 0x5e29c8:c.instructions+=4;goto B5e29c8;
case 0x5e29cf:c.instructions+=3;goto B5e29cf;
case 0x5e29d0:c.instructions+=2;goto B5e29d0;
case 0x5e29d4:c.instructions+=1;goto B5e29d4;
case 0x5e29d9:goto L5e29d9;
case 0x5e29dd:c.instructions+=1;goto B5e29dd;
case 0x5e29e2:goto L5e29e2;
case 0x5e29e4:c.instructions+=3;goto B5e29e4;
case 0x5e29e7:c.instructions+=2;goto B5e29e7;
case 0x5e29e9:c.instructions+=1;goto B5e29e9;
case 0x5e29eb:goto L5e29eb;
case 0x5e29ec:c.instructions+=1;goto B5e29ec;
case 0x5e29ee:goto L5e29ee;
case 0x5e29ef:c.instructions+=1;goto B5e29ef;
case 0x5e29f1:goto L5e29f1;
case 0x5e29f4:goto L5e29f4;
case 0x5e29f6:goto L5e29f6;
case 0x5e29f8:c.instructions+=5;goto B5e29f8;
case 0x5e29fb:c.instructions+=4;goto B5e29fb;
case 0x5e29fd:c.instructions+=3;goto B5e29fd;
case 0x5e29fe:c.instructions+=2;goto B5e29fe;
case 0x5e2a01:c.instructions+=1;goto B5e2a01;
case 0x5e2a07:goto L5e2a07;
case 0x5e2a09:c.instructions+=1;goto B5e2a09;
case 0x5e2a0f:goto L5e2a0f;
case 0x5e2a15:c.instructions+=5;goto B5e2a15;
case 0x5e2a19:c.instructions+=4;goto B5e2a19;
case 0x5e2a1b:c.instructions+=3;goto B5e2a1b;
case 0x5e2a21:c.instructions+=2;goto B5e2a21;
case 0x5e2a25:c.instructions+=1;goto B5e2a25;
case 0x5e2a2b:goto L5e2a2b;
case 0x5e2a31:c.instructions+=6;goto B5e2a31;
case 0x5e2a35:c.instructions+=5;goto B5e2a35;
case 0x5e2a36:c.instructions+=4;goto B5e2a36;
case 0x5e2a3a:c.instructions+=3;goto B5e2a3a;
case 0x5e2a3c:c.instructions+=2;goto B5e2a3c;
case 0x5e2a3e:c.instructions+=1;goto B5e2a3e;
case 0x5e2a43:goto L5e2a43;
case 0x5e2a46:c.instructions+=2;goto B5e2a46;
case 0x5e2a49:c.instructions+=1;goto B5e2a49;
case 0x5e2a4b:goto L5e2a4b;
case 0x5e2a4e:c.instructions+=2;goto B5e2a4e;
case 0x5e2a50:c.instructions+=1;goto B5e2a50;
case 0x5e2a56:goto L5e2a56;
case 0x5e2a59:c.instructions+=6;goto B5e2a59;
case 0x5e2a5b:c.instructions+=5;goto B5e2a5b;
case 0x5e2a5d:c.instructions+=4;goto B5e2a5d;
case 0x5e2a60:c.instructions+=3;goto B5e2a60;
case 0x5e2a62:c.instructions+=2;goto B5e2a62;
case 0x5e2a65:c.instructions+=1;goto B5e2a65;
case 0x5e2a6b:goto L5e2a6b;
case 0x5e2a6e:c.instructions+=1;goto B5e2a6e;
case 0x5e2a74:goto L5e2a74;
case 0x5e2a77:c.instructions+=1;goto B5e2a77;
case 0x5e2a7d:goto L5e2a7d;
case 0x5e2a7f:c.instructions+=1;goto B5e2a7f;
case 0x5e2a84:goto L5e2a84;
case 0x5e2a8a:c.instructions+=7;goto B5e2a8a;
case 0x5e2a8d:c.instructions+=6;goto B5e2a8d;
case 0x5e2a8e:c.instructions+=5;goto B5e2a8e;
case 0x5e2a90:c.instructions+=4;goto B5e2a90;
case 0x5e2a92:c.instructions+=3;goto B5e2a92;
case 0x5e2a93:c.instructions+=2;goto B5e2a93;
case 0x5e2a97:c.instructions+=1;goto B5e2a97;
case 0x5e2a9c:goto L5e2a9c;
case 0x5e2aa0:c.instructions+=4;goto B5e2aa0;
case 0x5e2aa3:c.instructions+=3;goto B5e2aa3;
case 0x5e2aa5:c.instructions+=2;goto B5e2aa5;
case 0x5e2aa8:c.instructions+=1;goto B5e2aa8;
case 0x5e2aaa:goto L5e2aaa;
case 0x5e2aac:c.instructions+=1;goto B5e2aac;
case 0x5e2aae:goto L5e2aae;
case 0x5e2ab0:goto L5e2ab0;
case 0x5e2ab2:c.instructions+=3;goto B5e2ab2;
case 0x5e2ab5:c.instructions+=2;goto B5e2ab5;
case 0x5e2ab8:c.instructions+=1;goto B5e2ab8;
case 0x5e2aba:goto L5e2aba;
case 0x5e2abd:c.instructions+=3;goto B5e2abd;
case 0x5e2ac0:c.instructions+=2;goto B5e2ac0;
case 0x5e2ac3:c.instructions+=1;goto B5e2ac3;
case 0x5e2ac8:goto L5e2ac8;
case 0x5e2aca:c.instructions+=3;goto B5e2aca;
case 0x5e2acd:c.instructions+=2;goto B5e2acd;
case 0x5e2ad0:c.instructions+=1;goto B5e2ad0;
case 0x5e2ad2:goto L5e2ad2;
case 0x5e2ad4:c.instructions+=1;goto B5e2ad4;
case 0x5e2ad6:goto L5e2ad6;
case 0x5e2ad9:c.instructions+=3;goto B5e2ad9;
case 0x5e2adc:c.instructions+=2;goto B5e2adc;
case 0x5e2adf:c.instructions+=1;goto B5e2adf;
case 0x5e2ae4:goto L5e2ae4;
case 0x5e2ae7:c.instructions+=4;goto B5e2ae7;
case 0x5e2aea:c.instructions+=3;goto B5e2aea;
case 0x5e2aed:c.instructions+=2;goto B5e2aed;
case 0x5e2af0:c.instructions+=1;goto B5e2af0;
case 0x5e2af6:goto L5e2af6;
case 0x5e2afb:goto L5e2afb;
case 0x5e2afd:c.instructions+=3;goto B5e2afd;
case 0x5e2b00:c.instructions+=2;goto B5e2b00;
case 0x5e2b02:c.instructions+=1;goto B5e2b02;
case 0x5e2b04:goto L5e2b04;
case 0x5e2b07:c.instructions+=5;goto B5e2b07;
case 0x5e2b09:c.instructions+=4;goto B5e2b09;
case 0x5e2b0b:c.instructions+=3;goto B5e2b0b;
case 0x5e2b0e:c.instructions+=2;goto B5e2b0e;
case 0x5e2b11:c.instructions+=1;goto B5e2b11;
case 0x5e2b13:goto L5e2b13;
case 0x5e2b16:c.instructions+=1;goto B5e2b16;
case 0x5e2b18:goto L5e2b18;
case 0x5e2b1b:c.instructions+=1;goto B5e2b1b;
case 0x5e2b1d:goto L5e2b1d;
case 0x5e2b20:c.instructions+=3;goto B5e2b20;
case 0x5e2b23:c.instructions+=2;goto B5e2b23;
case 0x5e2b26:c.instructions+=1;goto B5e2b26;
case 0x5e2b28:goto L5e2b28;
case 0x5e2b2d:c.instructions+=2;goto B5e2b2d;
case 0x5e2b2f:c.instructions+=1;goto B5e2b2f;
case 0x5e2b31:goto L5e2b31;
case 0x5e2b33:c.instructions+=1;goto B5e2b33;
case 0x5e2b38:goto L5e2b38;
case 0x5e2b3b:c.instructions+=3;goto B5e2b3b;
case 0x5e2b3e:c.instructions+=2;goto B5e2b3e;
case 0x5e2b41:c.instructions+=1;goto B5e2b41;
case 0x5e2b43:goto L5e2b43;
case 0x5e2b45:c.instructions+=1;goto B5e2b45;
case 0x5e2b4a:goto L5e2b4a;
case 0x5e2b4d:c.instructions+=3;goto B5e2b4d;
case 0x5e2b50:c.instructions+=2;goto B5e2b50;
case 0x5e2b52:c.instructions+=1;goto B5e2b52;
case 0x5e2b54:goto L5e2b54;
case 0x5e2b57:c.instructions+=4;goto B5e2b57;
case 0x5e2b59:c.instructions+=3;goto B5e2b59;
case 0x5e2b5c:c.instructions+=2;goto B5e2b5c;
case 0x5e2b5f:c.instructions+=1;goto B5e2b5f;
case 0x5e2b61:goto L5e2b61;
case 0x5e2b64:c.instructions+=6;goto B5e2b64;
case 0x5e2b67:c.instructions+=5;goto B5e2b67;
case 0x5e2b6a:c.instructions+=4;goto B5e2b6a;
case 0x5e2b6d:c.instructions+=3;goto B5e2b6d;
case 0x5e2b6f:c.instructions+=2;goto B5e2b6f;
case 0x5e2b72:c.instructions+=1;goto B5e2b72;
case 0x5e2b74:goto L5e2b74;
case 0x5e2b76:c.instructions+=3;goto B5e2b76;
case 0x5e2b78:c.instructions+=2;goto B5e2b78;
case 0x5e2b7a:c.instructions+=1;goto B5e2b7a;
case 0x5e2b7f:goto L5e2b7f;
case 0x5e2b83:c.instructions+=8;goto B5e2b83;
case 0x5e2b87:c.instructions+=7;goto B5e2b87;
case 0x5e2b8c:c.instructions+=6;goto B5e2b8c;
case 0x5e2b8d:c.instructions+=5;goto B5e2b8d;
case 0x5e2b90:c.instructions+=4;goto B5e2b90;
case 0x5e2b92:c.instructions+=3;goto B5e2b92;
case 0x5e2b96:c.instructions+=2;goto B5e2b96;
case 0x5e2b9a:c.instructions+=1;goto B5e2b9a;
case 0x5e2ba0:goto L5e2ba0;
case 0x5e2ba1:c.instructions+=1;goto B5e2ba1;
case 0x5e2ba2:goto L5e2ba2;
case 0x5e2ba6:c.instructions+=1;goto B5e2ba6;
case 0x5e2bab:goto L5e2bab;
case 0x5e2baf:c.instructions+=4;goto B5e2baf;
case 0x5e2bb0:c.instructions+=3;goto B5e2bb0;
case 0x5e2bb1:c.instructions+=2;goto B5e2bb1;
case 0x5e2bb7:c.instructions+=1;goto B5e2bb7;
case 0x5e2bd0:goto L5e2bd0;
case 0x5e2bd5:c.instructions+=1;goto B5e2bd5;
case 0x5e2bda:goto L5e2bda;
case 0x5e2bdf:c.instructions+=7;goto B5e2bdf;
case 0x5e2be0:c.instructions+=6;goto B5e2be0;
case 0x5e2be1:c.instructions+=5;goto B5e2be1;
case 0x5e2be2:c.instructions+=4;goto B5e2be2;
case 0x5e2be5:c.instructions+=3;goto B5e2be5;
case 0x5e2be6:c.instructions+=2;goto B5e2be6;
case 0x5e2be7:c.instructions+=1;goto B5e2be7;
case 0x5e2bec:goto L5e2bec;
case 0x5e2bf2:c.instructions+=6;goto B5e2bf2;
case 0x5e2bf4:c.instructions+=5;goto B5e2bf4;
case 0x5e2bf7:c.instructions+=4;goto B5e2bf7;
case 0x5e2bf9:c.instructions+=3;goto B5e2bf9;
case 0x5e2bfb:c.instructions+=2;goto B5e2bfb;
case 0x5e2bff:c.instructions+=1;goto B5e2bff;
case 0x5e2c01:goto L5e2c01;
case 0x5e2c03:goto L5e2c03;
case 0x5e2c09:c.instructions+=8;goto B5e2c09;
case 0x5e2c0b:c.instructions+=7;goto B5e2c0b;
case 0x5e2c0f:c.instructions+=6;goto B5e2c0f;
case 0x5e2c13:c.instructions+=5;goto B5e2c13;
case 0x5e2c19:c.instructions+=4;goto B5e2c19;
case 0x5e2c1a:c.instructions+=3;goto B5e2c1a;
case 0x5e2c1d:c.instructions+=2;goto B5e2c1d;
case 0x5e2c1f:c.instructions+=1;goto B5e2c1f;
case 0x5e2c21:goto L5e2c21;
case 0x5e2c26:c.instructions+=4;goto B5e2c26;
case 0x5e2c28:c.instructions+=3;goto B5e2c28;
case 0x5e2c29:c.instructions+=2;goto B5e2c29;
case 0x5e2c2a:c.instructions+=1;goto B5e2c2a;
case 0x5e2c2f:goto L5e2c2f;
case 0x5e2c35:c.instructions+=4;goto B5e2c35;
case 0x5e2c38:c.instructions+=3;goto B5e2c38;
case 0x5e2c3a:c.instructions+=2;goto B5e2c3a;
case 0x5e2c3c:c.instructions+=1;goto B5e2c3c;
case 0x5e2c3e:goto L5e2c3e;
case 0x5e2c41:goto L5e2c41;
case 0x5e2c43:c.instructions+=5;goto B5e2c43;
case 0x5e2c48:c.instructions+=4;goto B5e2c48;
case 0x5e2c49:c.instructions+=3;goto B5e2c49;
case 0x5e2c4c:c.instructions+=2;goto B5e2c4c;
case 0x5e2c4e:c.instructions+=1;goto B5e2c4e;
case 0x5e2c50:goto L5e2c50;
case 0x5e2c52:goto L5e2c52;
case 0x5e2c54:c.instructions+=1;goto B5e2c54;
case 0x5e2c56:goto L5e2c56;
case 0x5e2c5c:c.instructions+=2;goto B5e2c5c;
case 0x5e2c5e:c.instructions+=1;goto B5e2c5e;
case 0x5e2c60:goto L5e2c60;
case 0x5e2c62:c.instructions+=2;goto B5e2c62;
case 0x5e2c66:c.instructions+=1;goto B5e2c66;
case 0x5e2c68:goto L5e2c68;
case 0x5e2c6e:c.instructions+=1;goto B5e2c6e;
case 0x5e2c70:goto L5e2c70;
case 0x5e2c74:c.instructions+=2;goto B5e2c74;
case 0x5e2c7a:c.instructions+=1;goto B5e2c7a;
case 0x5e2c7c:goto L5e2c7c;
case 0x5e2c7e:c.instructions+=1;goto B5e2c7e;
case 0x5e2c80:goto L5e2c80;
case 0x5e2c85:c.instructions+=2;goto B5e2c85;
case 0x5e2c89:c.instructions+=1;goto B5e2c89;
case 0x5e2c8f:goto L5e2c8f;
case 0x5e2c92:c.instructions+=2;goto B5e2c92;
case 0x5e2c98:c.instructions+=1;goto B5e2c98;
case 0x5e2c9a:goto L5e2c9a;
case 0x5e2c9c:c.instructions+=1;goto B5e2c9c;
case 0x5e2c9e:goto L5e2c9e;
case 0x5e2ca3:c.instructions+=2;goto B5e2ca3;
case 0x5e2ca6:c.instructions+=1;goto B5e2ca6;
case 0x5e2cac:goto L5e2cac;
case 0x5e2cb0:c.instructions+=4;goto B5e2cb0;
case 0x5e2cb1:c.instructions+=3;goto B5e2cb1;
case 0x5e2cb4:c.instructions+=2;goto B5e2cb4;
case 0x5e2cb6:c.instructions+=1;goto B5e2cb6;
case 0x5e2cb8:goto L5e2cb8;
case 0x5e2cbb:c.instructions+=2;goto B5e2cbb;
case 0x5e2cc1:c.instructions+=1;goto B5e2cc1;
case 0x5e2cc3:goto L5e2cc3;
case 0x5e2cc5:c.instructions+=3;goto B5e2cc5;
case 0x5e2cc8:c.instructions+=2;goto B5e2cc8;
case 0x5e2cc9:c.instructions+=1;goto B5e2cc9;
case 0x5e2cce:goto L5e2cce;
case 0x5e2cd0:c.instructions+=4;goto B5e2cd0;
case 0x5e2cd3:c.instructions+=3;goto B5e2cd3;
case 0x5e2cd5:c.instructions+=2;goto B5e2cd5;
case 0x5e2cd9:c.instructions+=1;goto B5e2cd9;
case 0x5e2cdb:goto L5e2cdb;
case 0x5e2cde:c.instructions+=2;goto B5e2cde;
case 0x5e2ce0:c.instructions+=1;goto B5e2ce0;
case 0x5e2ce2:goto L5e2ce2;
case 0x5e2ce5:c.instructions+=3;goto B5e2ce5;
case 0x5e2ce8:c.instructions+=2;goto B5e2ce8;
case 0x5e2ceb:c.instructions+=1;goto B5e2ceb;
case 0x5e2cf0:goto L5e2cf0;
case 0x5e2cf2:c.instructions+=2;goto B5e2cf2;
case 0x5e2cf5:c.instructions+=1;goto B5e2cf5;
case 0x5e2cfa:goto L5e2cfa;
case 0x5e2cfc:goto L5e2cfc;
case 0x5e2cff:c.instructions+=9;goto B5e2cff;
case 0x5e2d01:c.instructions+=8;goto B5e2d01;
case 0x5e2d05:c.instructions+=7;goto B5e2d05;
case 0x5e2d08:c.instructions+=6;goto B5e2d08;
case 0x5e2d0c:c.instructions+=5;goto B5e2d0c;
case 0x5e2d10:c.instructions+=4;goto B5e2d10;
case 0x5e2d13:c.instructions+=3;goto B5e2d13;
case 0x5e2d16:c.instructions+=2;goto B5e2d16;
case 0x5e2d17:c.instructions+=1;goto B5e2d17;
case 0x5e2d19:goto L5e2d19;
case 0x5e2d1d:c.instructions+=1;goto B5e2d1d;
case 0x5e2d21:goto L5e2d21;
case 0x5e2d23:c.instructions+=1;goto B5e2d23;
case 0x5e2d25:goto L5e2d25;
case 0x5e2d27:goto L5e2d27;
case 0x5e2d2d:c.instructions+=3;goto B5e2d2d;
case 0x5e2d2f:c.instructions+=2;goto B5e2d2f;
case 0x5e2d31:c.instructions+=1;goto B5e2d31;
case 0x5e2d33:goto L5e2d33;
case 0x5e2d35:c.instructions+=1;goto B5e2d35;
case 0x5e2d37:goto L5e2d37;
case 0x5e2d3b:c.instructions+=1;goto B5e2d3b;
case 0x5e2d40:goto L5e2d40;
case 0x5e2d44:c.instructions+=2;goto B5e2d44;
case 0x5e2d46:c.instructions+=1;goto B5e2d46;
case 0x5e2d4b:goto L5e2d4b;
case 0x5e2d4d:goto L5e2d4d;
case 0x5e2d53:c.instructions+=4;goto B5e2d53;
case 0x5e2d54:c.instructions+=3;goto B5e2d54;
case 0x5e2d57:c.instructions+=2;goto B5e2d57;
case 0x5e2d59:c.instructions+=1;goto B5e2d59;
case 0x5e2d5b:goto L5e2d5b;
case 0x5e2d61:c.instructions+=5;goto B5e2d61;
case 0x5e2d65:c.instructions+=4;goto B5e2d65;
case 0x5e2d68:c.instructions+=3;goto B5e2d68;
case 0x5e2d6a:c.instructions+=2;goto B5e2d6a;
case 0x5e2d6d:c.instructions+=1;goto B5e2d6d;
case 0x5e2d6f:goto L5e2d6f;
case 0x5e2d71:goto L5e2d71;
case 0x5e2d73:c.instructions+=2;goto B5e2d73;
case 0x5e2d76:c.instructions+=1;goto B5e2d76;
case 0x5e2d77:goto L5e2d77;
case 0x5e2d79:goto L5e2d79;
case 0x5e2d7e:goto L5e2d7e;
case 0x5e2d7f:c.instructions+=1;goto B5e2d7f;
case 0x5e2d84:goto L5e2d84;
case 0x5e2d87:c.instructions+=6;goto B5e2d87;
case 0x5e2d88:c.instructions+=5;goto B5e2d88;
case 0x5e2d89:c.instructions+=4;goto B5e2d89;
case 0x5e2d8a:c.instructions+=3;goto B5e2d8a;
case 0x5e2d8b:c.instructions+=2;goto B5e2d8b;
case 0x5e2d91:c.instructions+=1;goto B5e2d91;
case 0x5e2da0:goto L5e2da0;
case 0x5e2da3:c.instructions+=6;goto B5e2da3;
case 0x5e2da4:c.instructions+=5;goto B5e2da4;
case 0x5e2da5:c.instructions+=4;goto B5e2da5;
case 0x5e2da9:c.instructions+=3;goto B5e2da9;
case 0x5e2daa:c.instructions+=2;goto B5e2daa;
case 0x5e2dac:c.instructions+=1;goto B5e2dac;
case 0x5e2db1:goto L5e2db1;
case 0x5e2db4:c.instructions+=2;goto B5e2db4;
case 0x5e2db6:c.instructions+=1;goto B5e2db6;
case 0x5e2db8:goto L5e2db8;
case 0x5e2db9:c.instructions+=1;goto B5e2db9;
case 0x5e2dbe:goto L5e2dbe;
case 0x5e2dc1:c.instructions+=2;goto B5e2dc1;
case 0x5e2dc3:c.instructions+=1;goto B5e2dc3;
case 0x5e2dc5:goto L5e2dc5;
case 0x5e2dc6:c.instructions+=2;goto B5e2dc6;
case 0x5e2dc8:c.instructions+=1;goto B5e2dc8;
case 0x5e2dcd:goto L5e2dcd;
case 0x5e2dce:c.instructions+=6;goto B5e2dce;
case 0x5e2dd1:c.instructions+=5;goto B5e2dd1;
case 0x5e2dd3:c.instructions+=4;goto B5e2dd3;
case 0x5e2dd7:c.instructions+=3;goto B5e2dd7;
case 0x5e2dd8:c.instructions+=2;goto B5e2dd8;
case 0x5e2dda:c.instructions+=1;goto B5e2dda;
case 0x5e2ddf:goto L5e2ddf;
case 0x5e2de3:c.instructions+=20;goto B5e2de3;
case 0x5e2de7:c.instructions+=19;goto B5e2de7;
case 0x5e2deb:c.instructions+=18;goto B5e2deb;
case 0x5e2dec:c.instructions+=17;goto B5e2dec;
case 0x5e2df0:c.instructions+=16;goto B5e2df0;
case 0x5e2df4:c.instructions+=15;goto B5e2df4;
case 0x5e2dfa:c.instructions+=14;goto B5e2dfa;
case 0x5e2dfe:c.instructions+=13;goto B5e2dfe;
case 0x5e2e04:c.instructions+=12;goto B5e2e04;
case 0x5e2e08:c.instructions+=11;goto B5e2e08;
case 0x5e2e0a:c.instructions+=10;goto B5e2e0a;
case 0x5e2e0c:c.instructions+=9;goto B5e2e0c;
case 0x5e2e10:c.instructions+=8;goto B5e2e10;
case 0x5e2e13:c.instructions+=7;goto B5e2e13;
case 0x5e2e14:c.instructions+=6;goto B5e2e14;
case 0x5e2e16:c.instructions+=5;goto B5e2e16;
case 0x5e2e18:c.instructions+=4;goto B5e2e18;
case 0x5e2e1a:c.instructions+=3;goto B5e2e1a;
case 0x5e2e1c:c.instructions+=2;goto B5e2e1c;
case 0x5e2e1f:c.instructions+=1;goto B5e2e1f;
case 0x5e2e22:goto L5e2e22;
case 0x5e2e23:c.instructions+=2;goto B5e2e23;
case 0x5e2e25:c.instructions+=1;goto B5e2e25;
case 0x5e2e2a:goto L5e2e2a;
case 0x5e2e2b:c.instructions+=3;goto B5e2e2b;
case 0x5e2e2c:c.instructions+=2;goto B5e2e2c;
case 0x5e2e2f:c.instructions+=1;goto B5e2e2f;
case 0x5e2e40:goto L5e2e40;
case 0x5e2e41:c.instructions+=17;goto B5e2e41;
case 0x5e2e43:c.instructions+=16;goto B5e2e43;
case 0x5e2e46:c.instructions+=15;goto B5e2e46;
case 0x5e2e49:c.instructions+=14;goto B5e2e49;
case 0x5e2e4c:c.instructions+=13;goto B5e2e4c;
case 0x5e2e4d:c.instructions+=12;goto B5e2e4d;
case 0x5e2e4e:c.instructions+=11;goto B5e2e4e;
case 0x5e2e4f:c.instructions+=10;goto B5e2e4f;
case 0x5e2e51:c.instructions+=9;goto B5e2e51;
case 0x5e2e54:c.instructions+=8;goto B5e2e54;
case 0x5e2e55:c.instructions+=7;goto B5e2e55;
case 0x5e2e56:c.instructions+=6;goto B5e2e56;
case 0x5e2e59:c.instructions+=5;goto B5e2e59;
case 0x5e2e5a:c.instructions+=4;goto B5e2e5a;
case 0x5e2e5d:c.instructions+=3;goto B5e2e5d;
case 0x5e2e5e:c.instructions+=2;goto B5e2e5e;
case 0x5e2e62:c.instructions+=1;goto B5e2e62;
case 0x5e2e67:goto L5e2e67;
case 0x5e2e6a:c.instructions+=2;goto B5e2e6a;
case 0x5e2e6c:c.instructions+=1;goto B5e2e6c;
case 0x5e2e6e:goto L5e2e6e;
case 0x5e2e6f:c.instructions+=5;goto B5e2e6f;
case 0x5e2e70:c.instructions+=4;goto B5e2e70;
case 0x5e2e71:c.instructions+=3;goto B5e2e71;
case 0x5e2e73:c.instructions+=2;goto B5e2e73;
case 0x5e2e74:c.instructions+=1;goto B5e2e74;
case 0x5e2e77:goto L5e2e77;
case 0x5e2e7a:c.instructions+=2;goto B5e2e7a;
case 0x5e2e7d:c.instructions+=1;goto B5e2e7d;
case 0x5e2e7f:goto L5e2e7f;
case 0x5e2e84:c.instructions+=3;goto B5e2e84;
case 0x5e2e86:c.instructions+=2;goto B5e2e86;
case 0x5e2e8b:c.instructions+=1;goto B5e2e8b;
case 0x5e2e8d:goto L5e2e8d;
case 0x5e2e92:goto L5e2e92;
case 0x5e2e95:c.instructions+=5;goto B5e2e95;
case 0x5e2e97:c.instructions+=4;goto B5e2e97;
case 0x5e2e9b:c.instructions+=3;goto B5e2e9b;
case 0x5e2e9f:c.instructions+=2;goto B5e2e9f;
case 0x5e2ea3:c.instructions+=1;goto B5e2ea3;
case 0x5e2ea9:goto L5e2ea9;
case 0x5e2eab:c.instructions+=3;goto B5e2eab;
case 0x5e2eae:c.instructions+=2;goto B5e2eae;
case 0x5e2eb2:c.instructions+=1;goto B5e2eb2;
case 0x5e2eb4:goto L5e2eb4;
case 0x5e2eb8:c.instructions+=1;goto B5e2eb8;
case 0x5e2ec0:goto L5e2ec0;
case 0x5e2ec4:c.instructions+=5;goto B5e2ec4;
case 0x5e2ec6:c.instructions+=4;goto B5e2ec6;
case 0x5e2ec9:c.instructions+=3;goto B5e2ec9;
case 0x5e2ecb:c.instructions+=2;goto B5e2ecb;
case 0x5e2ed2:c.instructions+=1;goto B5e2ed2;
case 0x5e2ed4:goto L5e2ed4;
case 0x5e2ed7:c.instructions+=5;goto B5e2ed7;
case 0x5e2eda:c.instructions+=4;goto B5e2eda;
case 0x5e2edb:c.instructions+=3;goto B5e2edb;
case 0x5e2edc:c.instructions+=2;goto B5e2edc;
case 0x5e2ede:c.instructions+=1;goto B5e2ede;
case 0x5e2ee3:goto L5e2ee3;
case 0x5e2ee6:c.instructions+=4;goto B5e2ee6;
case 0x5e2eeb:c.instructions+=3;goto B5e2eeb;
case 0x5e2eed:c.instructions+=2;goto B5e2eed;
case 0x5e2ef0:c.instructions+=1;goto B5e2ef0;
case 0x5e2ef6:goto L5e2ef6;
case 0x5e2efc:c.instructions+=6;goto B5e2efc;
case 0x5e2efe:c.instructions+=5;goto B5e2efe;
case 0x5e2f00:c.instructions+=4;goto B5e2f00;
case 0x5e2f02:c.instructions+=3;goto B5e2f02;
case 0x5e2f04:c.instructions+=2;goto B5e2f04;
case 0x5e2f07:c.instructions+=1;goto B5e2f07;
case 0x5e2f09:goto L5e2f09;
case 0x5e2f0f:c.instructions+=1;goto B5e2f0f;
case 0x5e2f14:goto L5e2f14;
case 0x5e2f1a:c.instructions+=3;goto B5e2f1a;
case 0x5e2f1c:c.instructions+=2;goto B5e2f1c;
case 0x5e2f1f:c.instructions+=1;goto B5e2f1f;
case 0x5e2f21:goto L5e2f21;
case 0x5e2f27:c.instructions+=1;goto B5e2f27;
case 0x5e2f29:goto L5e2f29;
case 0x5e2f2b:c.instructions+=14;goto B5e2f2b;
case 0x5e2f2f:c.instructions+=13;goto B5e2f2f;
case 0x5e2f32:c.instructions+=12;goto B5e2f32;
case 0x5e2f35:c.instructions+=11;goto B5e2f35;
case 0x5e2f39:c.instructions+=10;goto B5e2f39;
case 0x5e2f3d:c.instructions+=9;goto B5e2f3d;
case 0x5e2f40:c.instructions+=8;goto B5e2f40;
case 0x5e2f44:c.instructions+=7;goto B5e2f44;
case 0x5e2f45:c.instructions+=6;goto B5e2f45;
case 0x5e2f49:c.instructions+=5;goto B5e2f49;
case 0x5e2f4d:c.instructions+=4;goto B5e2f4d;
case 0x5e2f4e:c.instructions+=3;goto B5e2f4e;
case 0x5e2f54:c.instructions+=2;goto B5e2f54;
case 0x5e2f58:c.instructions+=1;goto B5e2f58;
case 0x5e2f5d:goto L5e2f5d;
case 0x5e2f61:c.instructions+=19;goto B5e2f61;
case 0x5e2f65:c.instructions+=18;goto B5e2f65;
case 0x5e2f68:c.instructions+=17;goto B5e2f68;
case 0x5e2f6c:c.instructions+=16;goto B5e2f6c;
case 0x5e2f6f:c.instructions+=15;goto B5e2f6f;
case 0x5e2f73:c.instructions+=14;goto B5e2f73;
case 0x5e2f77:c.instructions+=13;goto B5e2f77;
case 0x5e2f7d:c.instructions+=12;goto B5e2f7d;
case 0x5e2f81:c.instructions+=11;goto B5e2f81;
case 0x5e2f87:c.instructions+=10;goto B5e2f87;
case 0x5e2f8a:c.instructions+=9;goto B5e2f8a;
case 0x5e2f8d:c.instructions+=8;goto B5e2f8d;
case 0x5e2f8f:c.instructions+=7;goto B5e2f8f;
case 0x5e2f91:c.instructions+=6;goto B5e2f91;
case 0x5e2f93:c.instructions+=5;goto B5e2f93;
case 0x5e2f95:c.instructions+=4;goto B5e2f95;
case 0x5e2f97:c.instructions+=3;goto B5e2f97;
case 0x5e2f99:c.instructions+=2;goto B5e2f99;
case 0x5e2f9b:c.instructions+=1;goto B5e2f9b;
case 0x5e2f9d:goto L5e2f9d;
case 0x5e2fa1:c.instructions+=2;goto B5e2fa1;
case 0x5e2fa3:c.instructions+=1;goto B5e2fa3;
case 0x5e2fa5:goto L5e2fa5;
case 0x5e2fab:c.instructions+=3;goto B5e2fab;
case 0x5e2fad:c.instructions+=2;goto B5e2fad;
case 0x5e2fb0:c.instructions+=1;goto B5e2fb0;
case 0x5e2fb2:goto L5e2fb2;
case 0x5e2fb5:c.instructions+=1;goto B5e2fb5;
case 0x5e2fb7:goto L5e2fb7;
case 0x5e2fbd:c.instructions+=3;goto B5e2fbd;
case 0x5e2fbf:c.instructions+=2;goto B5e2fbf;
case 0x5e2fc2:c.instructions+=1;goto B5e2fc2;
case 0x5e2fc4:goto L5e2fc4;
case 0x5e2fc6:goto L5e2fc6;
case 0x5e2fc8:goto L5e2fc8;
case 0x5e2fcc:c.instructions+=3;goto B5e2fcc;
case 0x5e2fce:c.instructions+=2;goto B5e2fce;
case 0x5e2fd1:c.instructions+=1;goto B5e2fd1;
case 0x5e2fd3:goto L5e2fd3;
case 0x5e2fd6:c.instructions+=1;goto B5e2fd6;
case 0x5e2fd8:goto L5e2fd8;
case 0x5e2fdb:c.instructions+=2;goto B5e2fdb;
case 0x5e2fde:c.instructions+=1;goto B5e2fde;
case 0x5e2fe0:goto L5e2fe0;
case 0x5e2fe3:c.instructions+=1;goto B5e2fe3;
case 0x5e2fe5:goto L5e2fe5;
case 0x5e2fec:c.instructions+=1;goto B5e2fec;
case 0x5e2fee:goto L5e2fee;
case 0x5e2ff1:c.instructions+=1;goto B5e2ff1;
case 0x5e2ff3:goto L5e2ff3;
case 0x5e2ffa:c.instructions+=1;goto B5e2ffa;
case 0x5e2ffc:goto L5e2ffc;
default:missing_instruction(c.pc);}
B5e2000:L5e2000:{c.instructions+=5;NFSU2_TR(0x5e2000);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2001:{NFSU2_TR(0x5e2001);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2002:{NFSU2_TR(0x5e2002);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2003:{NFSU2_TR(0x5e2003);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e2007:{NFSU2_TR(0x5e2007);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e200cull));
TAIL_STATIC(0x5e19e0u,5e1);
}
B5e200c:L5e200c:{c.instructions+=11;NFSU2_TR(0x5e200c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e2010:{NFSU2_TR(0x5e2010);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2011:{NFSU2_TR(0x5e2011);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e2015:{NFSU2_TR(0x5e2015);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2016:{NFSU2_TR(0x5e2016);
__builtin_memmove((R+12),(R+0),1);
}
B5e2018:{NFSU2_TR(0x5e2018);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e201c:{NFSU2_TR(0x5e201c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e201d:{NFSU2_TR(0x5e201d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e201e:{NFSU2_TR(0x5e201e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e201f:{NFSU2_TR(0x5e201f);
__builtin_memmove((R+4),(R+28),4);
}
B5e2021:{NFSU2_TR(0x5e2021);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2026ull));
TAIL_STATIC(0x5e19e0u,5e1);
}
B5e2026:L5e2026:{c.instructions+=2;NFSU2_TR(0x5e2026);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2028:{NFSU2_TR(0x5e2028);
if(r1(R+518)){{goto L5e2057;}}
}
B5e202a:L5e202a:{c.instructions+=2;NFSU2_TR(0x5e202a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e202c:{NFSU2_TR(0x5e202c);
if(r1(R+518)){{goto L5e2035;}}
}
B5e202e:L5e202e:{c.instructions+=2;NFSU2_TR(0x5e202e);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e2033:{NFSU2_TR(0x5e2033);
{goto L5e205b;}
}
B5e2035:L5e2035:{c.instructions+=3;NFSU2_TR(0x5e2035);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B5e2038:{NFSU2_TR(0x5e2038);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e203d:{NFSU2_TR(0x5e203d);
if(r1(R+518)){{goto L5e2049;}}
}
B5e203f:L5e203f:{c.instructions+=2;NFSU2_TR(0x5e203f);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B5e2040:{NFSU2_TR(0x5e2040);
if(r1(R+518)){{goto L5e2103;}}
}
B5e2046:L5e2046:{c.instructions+=2;NFSU2_TR(0x5e2046);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B5e2047:{NFSU2_TR(0x5e2047);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e2087;}}
}
B5e2049:L5e2049:{c.instructions+=5;NFSU2_TR(0x5e2049);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e204c:{NFSU2_TR(0x5e204c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff2ull))));
}
B5e204f:{NFSU2_TR(0x5e204f);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x2ull))));
}
B5e2052:{NFSU2_TR(0x5e2052);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2055:{NFSU2_TR(0x5e2055);
{goto L5e2087;}
}
B5e2057:L5e2057:{c.instructions+=2;NFSU2_TR(0x5e2057);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2059:{NFSU2_TR(0x5e2059);
if(r1(R+518)){{goto L5e2087;}}
}
B5e205b:L5e205b:{c.instructions+=5;NFSU2_TR(0x5e205b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e205f:{NFSU2_TR(0x5e205f);
__builtin_memmove((R+0),(R+20),4);
}
B5e2061:{NFSU2_TR(0x5e2061);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e2064:{NFSU2_TR(0x5e2064);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e2069:{NFSU2_TR(0x5e2069);
if(r1(R+518)){{goto L5e20f2;}}
}
B5e206f:L5e206f:{c.instructions+=2;NFSU2_TR(0x5e206f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e2070:{NFSU2_TR(0x5e2070);
if(r1(R+518)){{goto L5e20e1;}}
}
B5e2072:L5e2072:{c.instructions+=2;NFSU2_TR(0x5e2072);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e2073:{NFSU2_TR(0x5e2073);
if(r1(R+518)){{goto L5e20f2;}}
}
B5e2075:L5e2075:{c.instructions+=3;NFSU2_TR(0x5e2075);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e2079:{NFSU2_TR(0x5e2079);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e207b:{NFSU2_TR(0x5e207b);
if(r1(R+518)){{goto L5e2087;}}
}
B5e207d:L5e207d:{c.instructions+=4;NFSU2_TR(0x5e207d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e207f:{NFSU2_TR(0x5e207f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2080:{NFSU2_TR(0x5e2080);
__builtin_memmove((R+4),(R+24),4);
}
B5e2082:{NFSU2_TR(0x5e2082);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2087ull));
TAIL_STATIC(0x5e15f0u,5e1);
}
B5e2087:L5e2087:{c.instructions+=13;NFSU2_TR(0x5e2087);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e208b:{NFSU2_TR(0x5e208b);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5e208f:{NFSU2_TR(0x5e208f);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e2093:{NFSU2_TR(0x5e2093);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5e2097:{NFSU2_TR(0x5e2097);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+12))));
}
B5e2099:{NFSU2_TR(0x5e2099);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+8))));
}
B5e209b:{NFSU2_TR(0x5e209b);
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+0))));
}
B5e209d:{NFSU2_TR(0x5e209d);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e20a1:{NFSU2_TR(0x5e20a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e20a5:{NFSU2_TR(0x5e20a5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5e20a6:{NFSU2_TR(0x5e20a6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e20a9:{NFSU2_TR(0x5e20a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e20ad:{NFSU2_TR(0x5e20ad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5e1eb2u,5e1);}
}
B5e20b3:L5e20b3:{c.instructions+=9;NFSU2_TR(0x5e20b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e20b7:{NFSU2_TR(0x5e20b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e20bb:{NFSU2_TR(0x5e20bb);
__builtin_memmove((R+4),gp(0x883db4),4);
}
B5e20c1:{NFSU2_TR(0x5e20c1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e20c2:{NFSU2_TR(0x5e20c2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B5e20c5:{NFSU2_TR(0x5e20c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5e20c7:{NFSU2_TR(0x5e20c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e20cb:{NFSU2_TR(0x5e20cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e20cf:{NFSU2_TR(0x5e20cf);
if(r1(R+512)){TAIL_STATIC(0x5e1ea5u,5e1);}
}
B5e20d5:L5e20d5:{c.instructions+=7;NFSU2_TR(0x5e20d5);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e20d9:{NFSU2_TR(0x5e20d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e20da:{NFSU2_TR(0x5e20da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e20db:{NFSU2_TR(0x5e20db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e20dc:{NFSU2_TR(0x5e20dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e20dd:{NFSU2_TR(0x5e20dd);
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
B5e20e0:{NFSU2_TR(0x5e20e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e20e1:L5e20e1:{c.instructions+=5;NFSU2_TR(0x5e20e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e20e4:{NFSU2_TR(0x5e20e4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffff7full))));
}
B5e20ea:{NFSU2_TR(0x5e20ea);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x70ull))));
}
B5e20ed:{NFSU2_TR(0x5e20ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e20f0:{NFSU2_TR(0x5e20f0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2075u);}goto L5e2075;}
}
B5e20f2:L5e20f2:{c.instructions+=5;NFSU2_TR(0x5e20f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e20f5:{NFSU2_TR(0x5e20f5);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffff7ull))));
}
B5e20f8:{NFSU2_TR(0x5e20f8);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x7ull))));
}
B5e20fb:{NFSU2_TR(0x5e20fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e20fe:{NFSU2_TR(0x5e20fe);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2075u);}goto L5e2075;}
}
B5e2103:L5e2103:{c.instructions+=5;NFSU2_TR(0x5e2103);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e2106:{NFSU2_TR(0x5e2106);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff2full))));
}
B5e210b:{NFSU2_TR(0x5e210b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20ull))));
}
B5e210e:{NFSU2_TR(0x5e210e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2111:{NFSU2_TR(0x5e2111);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2087u);}goto L5e2087;}
}
B5e2130:L5e2130:{c.instructions+=8;NFSU2_TR(0x5e2130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B5e2133:{NFSU2_TR(0x5e2133);
__builtin_memmove((R+8),gp(0x883db4),4);
}
B5e2139:{NFSU2_TR(0x5e2139);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5e213b:{NFSU2_TR(0x5e213b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e213d:{NFSU2_TR(0x5e213d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e213f:{NFSU2_TR(0x5e213f);
u8 U[5];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e2143:{NFSU2_TR(0x5e2143);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2147:{NFSU2_TR(0x5e2147);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5e237f;}}
}
B5e214d:L5e214d:{c.instructions+=6;NFSU2_TR(0x5e214d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e214e:{NFSU2_TR(0x5e214e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e214f:{NFSU2_TR(0x5e214f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2150:{NFSU2_TR(0x5e2150);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e2152:{NFSU2_TR(0x5e2152);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2153:{NFSU2_TR(0x5e2153);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2157:L5e2157:{c.instructions+=2;NFSU2_TR(0x5e2157);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x7ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e215a:{NFSU2_TR(0x5e215a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e2161;}}
}
B5e215c:L5e215c:{c.instructions+=1;NFSU2_TR(0x5e215c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2161ull));
TAIL_STATIC(0x4022c0u,402);
}
B5e2161:L5e2161:{c.instructions+=5;NFSU2_TR(0x5e2161);
__builtin_memmove((R+0),gp(0x883db0),4);
}
B5e2166:{NFSU2_TR(0x5e2166);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5e2168:{NFSU2_TR(0x5e2168);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e216a:{NFSU2_TR(0x5e216a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e216e:{NFSU2_TR(0x5e216e);
__builtin_memmove((R+28),(R+28),4);
}
B5e2170:L5e2170:{c.instructions+=3;NFSU2_TR(0x5e2170);
__builtin_memmove((R+0),(R+4),4);
}
B5e2172:{NFSU2_TR(0x5e2172);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e2175:{NFSU2_TR(0x5e2175);
if(r1(R+518)){{goto L5e21b1;}}
}
B5e2177:L5e2177:{c.instructions+=2;NFSU2_TR(0x5e2177);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e2178:{NFSU2_TR(0x5e2178);
if(r1(R+518)){{goto L5e21a5;}}
}
B5e217a:L5e217a:{c.instructions+=2;NFSU2_TR(0x5e217a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e217b:{NFSU2_TR(0x5e217b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e2191;}}
}
B5e217d:L5e217d:{c.instructions+=3;NFSU2_TR(0x5e217d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e2180:{NFSU2_TR(0x5e2180);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e2183:{NFSU2_TR(0x5e2183);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e2186:L5e2186:{c.instructions+=3;NFSU2_TR(0x5e2186);
__builtin_memmove((R+0),(R+518),1);
}
B5e2189:{NFSU2_TR(0x5e2189);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e218b:{NFSU2_TR(0x5e218b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e2348;}}
}
B5e2191:L5e2191:{c.instructions+=4;NFSU2_TR(0x5e2191);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B5e2195:{NFSU2_TR(0x5e2195);
w4(R+0,u32(s32(s16(r2(R+28)))));
}
B5e2198:{NFSU2_TR(0x5e2198);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e219a:{NFSU2_TR(0x5e219a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e21c7;}}
}
B5e219c:L5e219c:{c.instructions+=2;NFSU2_TR(0x5e219c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e21a3:{NFSU2_TR(0x5e21a3);
{goto L5e21c9;}
}
B5e21a5:L5e21a5:{c.instructions+=5;NFSU2_TR(0x5e21a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e21a8:{NFSU2_TR(0x5e21a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e21ab:{NFSU2_TR(0x5e21ab);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5e21ad:{NFSU2_TR(0x5e21ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e21af:{NFSU2_TR(0x5e21af);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2186u);}goto L5e2186;}
}
B5e21b1:L5e21b1:{c.instructions+=4;NFSU2_TR(0x5e21b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e21b4:{NFSU2_TR(0x5e21b4);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5e21b6:{NFSU2_TR(0x5e21b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e21b8:{NFSU2_TR(0x5e21b8);
if(r1(R+518)){{goto L5e2348;}}
}
B5e21be:L5e21be:{c.instructions+=2;NFSU2_TR(0x5e21be);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e21c0:{NFSU2_TR(0x5e21c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2191u);}goto L5e2191;}}
}
B5e21c2:L5e21c2:{c.instructions+=1;NFSU2_TR(0x5e21c2);
{goto L5e2348;}
}
B5e21c7:L5e21c7:{c.instructions+=1;NFSU2_TR(0x5e21c7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e21c9:L5e21c9:{c.instructions+=9;NFSU2_TR(0x5e21c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5e21cd:{NFSU2_TR(0x5e21cd);
w4(R+8,u32(s32(s16(r2(R+0)))));
}
B5e21d0:{NFSU2_TR(0x5e21d0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e21d3:{NFSU2_TR(0x5e21d3);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B5e21da:{NFSU2_TR(0x5e21da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e21dd:{NFSU2_TR(0x5e21dd);
__builtin_memmove((R+12),(R+4),1);
}
B5e21df:{NFSU2_TR(0x5e21df);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xfull))));
}
B5e21e2:{NFSU2_TR(0x5e21e2);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e21e5:{NFSU2_TR(0x5e21e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e21eb;}}
}
B5e21e7:L5e21e7:{c.instructions+=2;NFSU2_TR(0x5e21e7);
__builtin_memmove((R+8),(R+0),4);
}
B5e21e9:{NFSU2_TR(0x5e21e9);
{goto L5e21ef;}
}
B5e21eb:L5e21eb:{c.instructions+=1;NFSU2_TR(0x5e21eb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5e21ef:L5e21ef:{c.instructions+=2;NFSU2_TR(0x5e21ef);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e21f2:{NFSU2_TR(0x5e21f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e21f8;}}
}
B5e21f4:L5e21f4:{c.instructions+=2;NFSU2_TR(0x5e21f4);
__builtin_memmove((R+0),(R+28),4);
}
B5e21f6:{NFSU2_TR(0x5e21f6);
{goto L5e21fc;}
}
B5e21f8:L5e21f8:{c.instructions+=1;NFSU2_TR(0x5e21f8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5e21fc:L5e21fc:{c.instructions+=3;NFSU2_TR(0x5e21fc);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5e21ff:{NFSU2_TR(0x5e21ff);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e2201:{NFSU2_TR(0x5e2201);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e220c;}}
}
B5e2203:L5e2203:{c.instructions+=2;NFSU2_TR(0x5e2203);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5e220a:{NFSU2_TR(0x5e220a);
{goto L5e220e;}
}
B5e220c:L5e220c:{c.instructions+=1;NFSU2_TR(0x5e220c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e220e:L5e220e:{c.instructions+=20;NFSU2_TR(0x5e220e);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B5e2211:{NFSU2_TR(0x5e2211);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e2214:{NFSU2_TR(0x5e2214);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5e221b:{NFSU2_TR(0x5e221b);
__builtin_memmove((R+0),(R+4),4);
}
B5e221d:{NFSU2_TR(0x5e221d);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e2220:{NFSU2_TR(0x5e2220);
w1(R+0,u8(~u32(r1(R+0))));
}
B5e2222:{NFSU2_TR(0x5e2222);
__builtin_memmove((R+8),(R+4),4);
}
B5e2224:{NFSU2_TR(0x5e2224);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e2227:{NFSU2_TR(0x5e2227);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B5e2229:{NFSU2_TR(0x5e2229);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B5e222c:{NFSU2_TR(0x5e222c);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+0))));
}
B5e222e:{NFSU2_TR(0x5e222e);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e2232:{NFSU2_TR(0x5e2232);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e2236:{NFSU2_TR(0x5e2236);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e2239:{NFSU2_TR(0x5e2239);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e223d:{NFSU2_TR(0x5e223d);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e2242:{NFSU2_TR(0x5e2242);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e2247:{NFSU2_TR(0x5e2247);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e224c:{NFSU2_TR(0x5e224c);
w1(R+8,u8(0x7ull));
}
B5e224e:{NFSU2_TR(0x5e224e);
if(r1(R+518)){{goto L5e2256;}}
}
B5e2250:L5e2250:{c.instructions+=2;NFSU2_TR(0x5e2250);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e2251:{NFSU2_TR(0x5e2251);
if(r1(R+518)){{goto L5e2272;}}
}
B5e2253:L5e2253:{c.instructions+=2;NFSU2_TR(0x5e2253);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e2254:{NFSU2_TR(0x5e2254);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e2258;}}
}
B5e2256:L5e2256:{c.instructions+=1;NFSU2_TR(0x5e2256);
__builtin_memmove((R+8),(R+12),1);
}
B5e2258:L5e2258:{c.instructions+=3;NFSU2_TR(0x5e2258);
w4(R+0,u32(r1(R+8)));
}
B5e225b:{NFSU2_TR(0x5e225b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5e225e:{NFSU2_TR(0x5e225e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5e232a;}}
}
B5e2264:L5e2264:{c.instructions+=2;NFSU2_TR(0x5e2264);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5e23c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5e226b:{NFSU2_TR(0x5e226b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5e23b8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5e2272:L5e2272:{c.instructions+=4;NFSU2_TR(0x5e2272);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e2275:{NFSU2_TR(0x5e2275);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e2278:{NFSU2_TR(0x5e2278);
__builtin_memmove((R+8),(R+4),1);
}
B5e227a:{NFSU2_TR(0x5e227a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2258u);}goto L5e2258;}
}
B5e227c:L5e227c:{c.instructions+=8;NFSU2_TR(0x5e227c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e2280:{NFSU2_TR(0x5e2280);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e2284:{NFSU2_TR(0x5e2284);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2285:{NFSU2_TR(0x5e2285);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2286:{NFSU2_TR(0x5e2286);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2287:{NFSU2_TR(0x5e2287);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2288:{NFSU2_TR(0x5e2288);
__builtin_memmove((R+4),(R+28),4);
}
B5e228a:{NFSU2_TR(0x5e228a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e228full));
TAIL_STATIC(0x5e1ca0u,5e1);
}
B5e228f:L5e228f:{c.instructions+=2;NFSU2_TR(0x5e228f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2291:{NFSU2_TR(0x5e2291);
if(r1(R+518)){{goto L5e232a;}}
}
B5e2297:L5e2297:{c.instructions+=2;NFSU2_TR(0x5e2297);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e229c:{NFSU2_TR(0x5e229c);
{goto L5e22fe;}
}
B5e229e:L5e229e:{c.instructions+=8;NFSU2_TR(0x5e229e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e22a2:{NFSU2_TR(0x5e22a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e22a6:{NFSU2_TR(0x5e22a6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e22a8:{NFSU2_TR(0x5e22a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e22a9:{NFSU2_TR(0x5e22a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e22aa:{NFSU2_TR(0x5e22aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e22ab:{NFSU2_TR(0x5e22ab);
__builtin_memmove((R+4),(R+20),4);
}
B5e22ad:{NFSU2_TR(0x5e22ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e22b2ull));
TAIL_STATIC(0x5e1ca0u,5e1);
}
B5e22b2:L5e22b2:{c.instructions+=9;NFSU2_TR(0x5e22b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e22b6:{NFSU2_TR(0x5e22b6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e22b7:{NFSU2_TR(0x5e22b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e22bb:{NFSU2_TR(0x5e22bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e22bc:{NFSU2_TR(0x5e22bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e22bd:{NFSU2_TR(0x5e22bd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e22be:{NFSU2_TR(0x5e22be);
__builtin_memmove((R+4),(R+28),4);
}
B5e22c0:{NFSU2_TR(0x5e22c0);
__builtin_memmove((R+12),(R+0),1);
}
B5e22c2:{NFSU2_TR(0x5e22c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e22c7ull));
TAIL_STATIC(0x5e1ca0u,5e1);
}
B5e22c7:L5e22c7:{c.instructions+=2;NFSU2_TR(0x5e22c7);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e22c9:{NFSU2_TR(0x5e22c9);
if(r1(R+518)){{goto L5e22fa;}}
}
B5e22cb:L5e22cb:{c.instructions+=2;NFSU2_TR(0x5e22cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e22cd:{NFSU2_TR(0x5e22cd);
if(r1(R+518)){{goto L5e22d6;}}
}
B5e22cf:L5e22cf:{c.instructions+=2;NFSU2_TR(0x5e22cf);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e22d4:{NFSU2_TR(0x5e22d4);
{goto L5e22fe;}
}
B5e22d6:L5e22d6:{c.instructions+=4;NFSU2_TR(0x5e22d6);
__builtin_memmove((R+0),(R+20),4);
}
B5e22d8:{NFSU2_TR(0x5e22d8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e22db:{NFSU2_TR(0x5e22db);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e22e0:{NFSU2_TR(0x5e22e0);
if(r1(R+518)){{goto L5e22ec;}}
}
B5e22e2:L5e22e2:{c.instructions+=2;NFSU2_TR(0x5e22e2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e22e3:{NFSU2_TR(0x5e22e3);
if(r1(R+518)){{goto L5e23a4;}}
}
B5e22e9:L5e22e9:{c.instructions+=2;NFSU2_TR(0x5e22e9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e22ea:{NFSU2_TR(0x5e22ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e232a;}}
}
B5e22ec:L5e22ec:{c.instructions+=5;NFSU2_TR(0x5e22ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e22ef:{NFSU2_TR(0x5e22ef);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff2ull))));
}
B5e22f2:{NFSU2_TR(0x5e22f2);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x2ull))));
}
B5e22f5:{NFSU2_TR(0x5e22f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e22f8:{NFSU2_TR(0x5e22f8);
{goto L5e232a;}
}
B5e22fa:L5e22fa:{c.instructions+=2;NFSU2_TR(0x5e22fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e22fc:{NFSU2_TR(0x5e22fc);
if(r1(R+518)){{goto L5e232a;}}
}
B5e22fe:L5e22fe:{c.instructions+=5;NFSU2_TR(0x5e22fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e2302:{NFSU2_TR(0x5e2302);
__builtin_memmove((R+0),(R+4),4);
}
B5e2304:{NFSU2_TR(0x5e2304);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e2307:{NFSU2_TR(0x5e2307);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e230c:{NFSU2_TR(0x5e230c);
if(r1(R+518)){{goto L5e2393;}}
}
B5e2312:L5e2312:{c.instructions+=2;NFSU2_TR(0x5e2312);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e2313:{NFSU2_TR(0x5e2313);
if(r1(R+518)){{goto L5e2383;}}
}
B5e2315:L5e2315:{c.instructions+=2;NFSU2_TR(0x5e2315);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e2316:{NFSU2_TR(0x5e2316);
if(r1(R+518)){{goto L5e2393;}}
}
B5e2318:L5e2318:{c.instructions+=3;NFSU2_TR(0x5e2318);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e231c:{NFSU2_TR(0x5e231c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e231e:{NFSU2_TR(0x5e231e);
if(r1(R+518)){{goto L5e232a;}}
}
B5e2320:L5e2320:{c.instructions+=4;NFSU2_TR(0x5e2320);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2322:{NFSU2_TR(0x5e2322);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2323:{NFSU2_TR(0x5e2323);
__builtin_memmove((R+4),(R+24),4);
}
B5e2325:{NFSU2_TR(0x5e2325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e232aull));
TAIL_STATIC(0x5e15f0u,5e1);
}
B5e232a:L5e232a:{c.instructions+=9;NFSU2_TR(0x5e232a);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e232e:{NFSU2_TR(0x5e232e);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5e2332:{NFSU2_TR(0x5e2332);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e2336:{NFSU2_TR(0x5e2336);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5e233a:{NFSU2_TR(0x5e233a);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+12))));
}
B5e233c:{NFSU2_TR(0x5e233c);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+8))));
}
B5e233e:{NFSU2_TR(0x5e233e);
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+0))));
}
B5e2340:{NFSU2_TR(0x5e2340);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e2344:{NFSU2_TR(0x5e2344);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e2348:L5e2348:{c.instructions+=4;NFSU2_TR(0x5e2348);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5e2349:{NFSU2_TR(0x5e2349);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e234c:{NFSU2_TR(0x5e234c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2350:{NFSU2_TR(0x5e2350);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2170u);}goto L5e2170;}}
}
B5e2356:L5e2356:{c.instructions+=9;NFSU2_TR(0x5e2356);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e235a:{NFSU2_TR(0x5e235a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e235e:{NFSU2_TR(0x5e235e);
__builtin_memmove((R+0),gp(0x883db4),4);
}
B5e2363:{NFSU2_TR(0x5e2363);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5e2364:{NFSU2_TR(0x5e2364);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B5e2367:{NFSU2_TR(0x5e2367);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B5e2369:{NFSU2_TR(0x5e2369);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e236d:{NFSU2_TR(0x5e236d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2371:{NFSU2_TR(0x5e2371);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2157u);}goto L5e2157;}}
}
B5e2377:L5e2377:{c.instructions+=5;NFSU2_TR(0x5e2377);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e237b:{NFSU2_TR(0x5e237b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e237c:{NFSU2_TR(0x5e237c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e237d:{NFSU2_TR(0x5e237d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e237e:{NFSU2_TR(0x5e237e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e237f:L5e237f:{c.instructions+=2;NFSU2_TR(0x5e237f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e2382:{NFSU2_TR(0x5e2382);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e2383:L5e2383:{c.instructions+=5;NFSU2_TR(0x5e2383);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e2386:{NFSU2_TR(0x5e2386);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff7full))));
}
B5e238b:{NFSU2_TR(0x5e238b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x70ull))));
}
B5e238e:{NFSU2_TR(0x5e238e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2391:{NFSU2_TR(0x5e2391);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2318u);}goto L5e2318;}
}
B5e2393:L5e2393:{c.instructions+=5;NFSU2_TR(0x5e2393);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e2396:{NFSU2_TR(0x5e2396);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffff7ull))));
}
B5e2399:{NFSU2_TR(0x5e2399);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x7ull))));
}
B5e239c:{NFSU2_TR(0x5e239c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e239f:{NFSU2_TR(0x5e239f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2318u);}goto L5e2318;}
}
B5e23a4:L5e23a4:{c.instructions+=5;NFSU2_TR(0x5e23a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e23a7:{NFSU2_TR(0x5e23a7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff2full))));
}
B5e23ac:{NFSU2_TR(0x5e23ac);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20ull))));
}
B5e23af:{NFSU2_TR(0x5e23af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e23b2:{NFSU2_TR(0x5e23b2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e232au);}goto L5e232a;}
}
B5e23d0:L5e23d0:{c.instructions+=10;NFSU2_TR(0x5e23d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5e23d3:{NFSU2_TR(0x5e23d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e23d4:{NFSU2_TR(0x5e23d4);
__builtin_memmove((R+12),gp(0x883db4),4);
}
B5e23da:{NFSU2_TR(0x5e23da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e23db:{NFSU2_TR(0x5e23db);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5e23dd:{NFSU2_TR(0x5e23dd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e23df:{NFSU2_TR(0x5e23df);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e23e1:{NFSU2_TR(0x5e23e1);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e23e5:{NFSU2_TR(0x5e23e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e23e9:{NFSU2_TR(0x5e23e9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5e273d;}}
}
B5e23ef:L5e23ef:{c.instructions+=2;NFSU2_TR(0x5e23ef);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e23f0:{NFSU2_TR(0x5e23f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e23f1:L5e23f1:{c.instructions+=5;NFSU2_TR(0x5e23f1);
__builtin_memmove((R+0),gp(0x883db0),4);
}
B5e23f6:{NFSU2_TR(0x5e23f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B5e23f9:{NFSU2_TR(0x5e23f9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B5e23fb:{NFSU2_TR(0x5e23fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e23ff:{NFSU2_TR(0x5e23ff);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5e2401:L5e2401:{c.instructions+=2;NFSU2_TR(0x5e2401);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e2404:{NFSU2_TR(0x5e2404);
if(r1(R+518)){{goto L5e271c;}}
}
B5e240a:L5e240a:{c.instructions+=3;NFSU2_TR(0x5e240a);
__builtin_memmove((R+0),(R+20),4);
}
B5e240c:{NFSU2_TR(0x5e240c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e240f:{NFSU2_TR(0x5e240f);
if(r1(R+518)){{goto L5e2458;}}
}
B5e2411:L5e2411:{c.instructions+=2;NFSU2_TR(0x5e2411);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e2412:{NFSU2_TR(0x5e2412);
if(r1(R+518)){{goto L5e244a;}}
}
B5e2414:L5e2414:{c.instructions+=2;NFSU2_TR(0x5e2414);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e2415:{NFSU2_TR(0x5e2415);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e2429;}}
}
B5e2417:L5e2417:{c.instructions+=3;NFSU2_TR(0x5e2417);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e241a:{NFSU2_TR(0x5e241a);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5e241c:{NFSU2_TR(0x5e241c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e241e:L5e241e:{c.instructions+=3;NFSU2_TR(0x5e241e);
__builtin_memmove((R+0),(R+518),1);
}
B5e2421:{NFSU2_TR(0x5e2421);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2423:{NFSU2_TR(0x5e2423);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e271c;}}
}
B5e2429:L5e2429:{c.instructions+=5;NFSU2_TR(0x5e2429);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e242c:{NFSU2_TR(0x5e242c);
__builtin_memmove((R+8),(R+0),4);
}
B5e242e:{NFSU2_TR(0x5e242e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e2431:{NFSU2_TR(0x5e2431);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2434:{NFSU2_TR(0x5e2434);
if(r1(R+518)){{goto L5e271c;}}
}
B5e243a:L5e243a:{c.instructions+=4;NFSU2_TR(0x5e243a);
__builtin_memmove((R+4),(R+0),1);
}
B5e243c:{NFSU2_TR(0x5e243c);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e243f:{NFSU2_TR(0x5e243f);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e2442:{NFSU2_TR(0x5e2442);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e246e;}}
}
B5e2444:L5e2444:{c.instructions+=2;NFSU2_TR(0x5e2444);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5e2448:{NFSU2_TR(0x5e2448);
{goto L5e2472;}
}
B5e244a:L5e244a:{c.instructions+=5;NFSU2_TR(0x5e244a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e244d:{NFSU2_TR(0x5e244d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e2450:{NFSU2_TR(0x5e2450);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e2453:{NFSU2_TR(0x5e2453);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e2456:{NFSU2_TR(0x5e2456);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e241eu);}goto L5e241e;}
}
B5e2458:L5e2458:{c.instructions+=4;NFSU2_TR(0x5e2458);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e245b:{NFSU2_TR(0x5e245b);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5e245d:{NFSU2_TR(0x5e245d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e245f:{NFSU2_TR(0x5e245f);
if(r1(R+518)){{goto L5e271c;}}
}
B5e2465:L5e2465:{c.instructions+=2;NFSU2_TR(0x5e2465);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2467:{NFSU2_TR(0x5e2467);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2429u);}goto L5e2429;}}
}
B5e2469:L5e2469:{c.instructions+=1;NFSU2_TR(0x5e2469);
{goto L5e271c;}
}
B5e246e:L5e246e:{c.instructions+=1;NFSU2_TR(0x5e246e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5e2472:L5e2472:{c.instructions+=2;NFSU2_TR(0x5e2472);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e2475:{NFSU2_TR(0x5e2475);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e247d;}}
}
B5e2477:L5e2477:{c.instructions+=2;NFSU2_TR(0x5e2477);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5e247b:{NFSU2_TR(0x5e247b);
{goto L5e2481;}
}
B5e247d:L5e247d:{c.instructions+=1;NFSU2_TR(0x5e247d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5e2481:L5e2481:{c.instructions+=3;NFSU2_TR(0x5e2481);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B5e2484:{NFSU2_TR(0x5e2484);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e2486:{NFSU2_TR(0x5e2486);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e2491;}}
}
B5e2488:L5e2488:{c.instructions+=2;NFSU2_TR(0x5e2488);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e248f:{NFSU2_TR(0x5e248f);
{goto L5e2493;}
}
B5e2491:L5e2491:{c.instructions+=1;NFSU2_TR(0x5e2491);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e2493:L5e2493:{c.instructions+=13;NFSU2_TR(0x5e2493);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B5e2496:{NFSU2_TR(0x5e2496);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e2499:{NFSU2_TR(0x5e2499);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5e24a0:{NFSU2_TR(0x5e24a0);
__builtin_memmove((R+4),(R+0),4);
}
B5e24a2:{NFSU2_TR(0x5e24a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e24a5:{NFSU2_TR(0x5e24a5);
w1(R+4,u8(~u32(r1(R+4))));
}
B5e24a7:{NFSU2_TR(0x5e24a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e24aa:{NFSU2_TR(0x5e24aa);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+0))));
}
B5e24ac:{NFSU2_TR(0x5e24ac);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B5e24af:{NFSU2_TR(0x5e24af);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e24b1:{NFSU2_TR(0x5e24b1);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e24b5:{NFSU2_TR(0x5e24b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e24bd:{NFSU2_TR(0x5e24bd);
if(r1(R+518)){{goto L5e271c;}}
}
B5e24c3:L5e24c3:{c.instructions+=3;NFSU2_TR(0x5e24c3);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e24c7:{NFSU2_TR(0x5e24c7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e24c9:{NFSU2_TR(0x5e24c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e24e2;}}
}
B5e24cb:L5e24cb:{c.instructions+=6;NFSU2_TR(0x5e24cb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e24cf:{NFSU2_TR(0x5e24cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e24d2:{NFSU2_TR(0x5e24d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e24d6:{NFSU2_TR(0x5e24d6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e24da:{NFSU2_TR(0x5e24da);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e24e0:{NFSU2_TR(0x5e24e0);
{goto L5e24e9;}
}
B5e24e2:L5e24e2:{c.instructions+=2;NFSU2_TR(0x5e24e2);
__builtin_memmove((R+4),(R+24),4);
}
B5e24e4:{NFSU2_TR(0x5e24e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e24e9ull));
TAIL_STATIC(0x40ccc0u,40c);
}
B5e24e9:L5e24e9:{c.instructions+=6;NFSU2_TR(0x5e24e9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e24ed:{NFSU2_TR(0x5e24ed);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e24f1:{NFSU2_TR(0x5e24f1);
{u32 ea_=u32(u32(7881848u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e24f7:{NFSU2_TR(0x5e24f7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e24f9:{NFSU2_TR(0x5e24f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e24fc:{NFSU2_TR(0x5e24fc);
if(r1(R+518)){{goto L5e271c;}}
}
B5e2502:L5e2502:{c.instructions+=3;NFSU2_TR(0x5e2502);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e2507:{NFSU2_TR(0x5e2507);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e250f:{NFSU2_TR(0x5e250f);
}
B5e2510:L5e2510:{c.instructions+=5;NFSU2_TR(0x5e2510);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e2514:{NFSU2_TR(0x5e2514);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e2517:{NFSU2_TR(0x5e2517);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5e2519:{NFSU2_TR(0x5e2519);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e251e:{NFSU2_TR(0x5e251e);
if(r1(R+518)){{goto L5e2529;}}
}
B5e2520:L5e2520:{c.instructions+=2;NFSU2_TR(0x5e2520);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e2522:{NFSU2_TR(0x5e2522);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e2529;}}
}
B5e2524:L5e2524:{c.instructions+=1;NFSU2_TR(0x5e2524);
w4(R+8,u32(0x1ull));
}
B5e2529:L5e2529:{c.instructions+=3;NFSU2_TR(0x5e2529);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e252d:{NFSU2_TR(0x5e252d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e2532:{NFSU2_TR(0x5e2532);
if(r1(R+518)){{goto L5e2539;}}
}
B5e2534:L5e2534:{c.instructions+=2;NFSU2_TR(0x5e2534);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e2536:{NFSU2_TR(0x5e2536);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e2539;}}
}
B5e2538:L5e2538:{c.instructions+=1;NFSU2_TR(0x5e2538);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5e2539:L5e2539:{c.instructions+=2;NFSU2_TR(0x5e2539);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+8)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5e253d:{NFSU2_TR(0x5e253d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e26ac;}}
}
B5e2543:L5e2543:{c.instructions+=3;NFSU2_TR(0x5e2543);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e2545:{NFSU2_TR(0x5e2545);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5e2547:{NFSU2_TR(0x5e2547);
{goto L5e2550;}
}
B5e2549:L5e2549:{c.instructions+=2;NFSU2_TR(0x5e2549);
__builtin_memmove((R+12),gp(0x883db4),4);
}
B5e254f:{NFSU2_TR(0x5e254f);
}
B5e2550:L5e2550:{c.instructions+=3;NFSU2_TR(0x5e2550);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B5e2553:{NFSU2_TR(0x5e2553);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e2558:{NFSU2_TR(0x5e2558);
if(r1(R+518)){{goto L5e2569;}}
}
B5e255a:L5e255a:{c.instructions+=2;NFSU2_TR(0x5e255a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e255c:{NFSU2_TR(0x5e255c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e2569;}}
}
B5e255e:L5e255e:{c.instructions+=2;NFSU2_TR(0x5e255e);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e2562:{NFSU2_TR(0x5e2562);
if(r1(R+518)){{goto L5e25ee;}}
}
B5e2568:L5e2568:{c.instructions+=1;NFSU2_TR(0x5e2568);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e2569:L5e2569:{c.instructions+=4;NFSU2_TR(0x5e2569);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5e256a:{NFSU2_TR(0x5e256a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5e256d:{NFSU2_TR(0x5e256d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e2570:{NFSU2_TR(0x5e2570);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2549u);}goto L5e2549;}}
}
B5e2572:L5e2572:{c.instructions+=1;NFSU2_TR(0x5e2572);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e2574:L5e2574:{c.instructions+=7;NFSU2_TR(0x5e2574);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e2577:{NFSU2_TR(0x5e2577);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e257b:{NFSU2_TR(0x5e257b);
__builtin_memmove((R+4),(R+0),4);
}
B5e257d:{NFSU2_TR(0x5e257d);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e2580:{NFSU2_TR(0x5e2580);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B5e2583:{NFSU2_TR(0x5e2583);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+8))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B5e2585:{NFSU2_TR(0x5e2585);
if(r1(R+518)){{goto L5e25d6;}}
}
B5e2587:L5e2587:{c.instructions+=3;NFSU2_TR(0x5e2587);
__builtin_memmove((R+8),(R+20),4);
}
B5e2589:{NFSU2_TR(0x5e2589);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5e258c:{NFSU2_TR(0x5e258c);
if(r1(R+518)){{goto L5e260d;}}
}
B5e2592:L5e2592:{c.instructions+=2;NFSU2_TR(0x5e2592);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5e2593:{NFSU2_TR(0x5e2593);
if(r1(R+518)){{goto L5e2600;}}
}
B5e2595:L5e2595:{c.instructions+=2;NFSU2_TR(0x5e2595);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5e2596:{NFSU2_TR(0x5e2596);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e25a7;}}
}
B5e2598:L5e2598:{c.instructions+=3;NFSU2_TR(0x5e2598);
__builtin_memmove((R+8),(R+0),1);
}
B5e259a:{NFSU2_TR(0x5e259a);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e259d:{NFSU2_TR(0x5e259d);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e25a0:L5e25a0:{c.instructions+=3;NFSU2_TR(0x5e25a0);
__builtin_memmove((R+8),(R+518),1);
}
B5e25a3:{NFSU2_TR(0x5e25a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e25a5:{NFSU2_TR(0x5e25a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e25d6;}}
}
B5e25a7:L5e25a7:{c.instructions+=4;NFSU2_TR(0x5e25a7);
__builtin_memmove((R+8),(R+0),4);
}
B5e25a9:{NFSU2_TR(0x5e25a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e25ac:{NFSU2_TR(0x5e25ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e25af:{NFSU2_TR(0x5e25af);
if(r1(R+518)){{goto L5e25d1;}}
}
B5e25b1:L5e25b1:{c.instructions+=3;NFSU2_TR(0x5e25b1);
__builtin_memmove((R+8),(R+20),4);
}
B5e25b3:{NFSU2_TR(0x5e25b3);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5e25b6:{NFSU2_TR(0x5e25b6);
if(r1(R+518)){{goto L5e262b;}}
}
B5e25b8:L5e25b8:{c.instructions+=2;NFSU2_TR(0x5e25b8);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5e25b9:{NFSU2_TR(0x5e25b9);
if(r1(R+518)){{goto L5e261e;}}
}
B5e25bb:L5e25bb:{c.instructions+=2;NFSU2_TR(0x5e25bb);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5e25bc:{NFSU2_TR(0x5e25bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e263a;}}
}
B5e25c2:L5e25c2:{c.instructions+=4;NFSU2_TR(0x5e25c2);
__builtin_memmove((R+8),(R+0),1);
}
B5e25c4:{NFSU2_TR(0x5e25c4);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e25c7:{NFSU2_TR(0x5e25c7);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e25ca:{NFSU2_TR(0x5e25ca);
if(r1(R+518)){{goto L5e25d1;}}
}
B5e25cc:L5e25cc:{c.instructions+=2;NFSU2_TR(0x5e25cc);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e25cf:{NFSU2_TR(0x5e25cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e263a;}}
}
B5e25d1:L5e25d1:{c.instructions+=1;NFSU2_TR(0x5e25d1);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e25d6:L5e25d6:{c.instructions+=6;NFSU2_TR(0x5e25d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e25da:{NFSU2_TR(0x5e25da);
__builtin_memmove((R+12),gp(0x883db4),4);
}
B5e25e0:{NFSU2_TR(0x5e25e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e25e4:{NFSU2_TR(0x5e25e4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e25e5:{NFSU2_TR(0x5e25e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e25e9:{NFSU2_TR(0x5e25e9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2510u);}goto L5e2510;}
}
B5e25ee:L5e25ee:{c.instructions+=5;NFSU2_TR(0x5e25ee);
__builtin_memmove((R+4),gp(0x883db0),4);
}
B5e25f4:{NFSU2_TR(0x5e25f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e25f7:{NFSU2_TR(0x5e25f7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5e25f9:{NFSU2_TR(0x5e25f9);
__builtin_memmove((R+28),(R+0),4);
}
B5e25fb:{NFSU2_TR(0x5e25fb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2574u);}goto L5e2574;}
}
B5e2600:L5e2600:{c.instructions+=5;NFSU2_TR(0x5e2600);
__builtin_memmove((R+4),(R+0),4);
}
B5e2602:{NFSU2_TR(0x5e2602);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e2605:{NFSU2_TR(0x5e2605);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e2608:{NFSU2_TR(0x5e2608);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e260b:{NFSU2_TR(0x5e260b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e25a0u);}goto L5e25a0;}
}
B5e260d:L5e260d:{c.instructions+=4;NFSU2_TR(0x5e260d);
__builtin_memmove((R+8),(R+0),1);
}
B5e260f:{NFSU2_TR(0x5e260f);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e2612:{NFSU2_TR(0x5e2612);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e2615:{NFSU2_TR(0x5e2615);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e25d6u);}goto L5e25d6;}}
}
B5e2617:L5e2617:{c.instructions+=2;NFSU2_TR(0x5e2617);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e261a:{NFSU2_TR(0x5e261a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e25a7u);}goto L5e25a7;}}
}
B5e261c:L5e261c:{c.instructions+=1;NFSU2_TR(0x5e261c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e25d6u);}goto L5e25d6;}
}
B5e261e:L5e261e:{c.instructions+=5;NFSU2_TR(0x5e261e);
__builtin_memmove((R+4),(R+0),4);
}
B5e2620:{NFSU2_TR(0x5e2620);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e2623:{NFSU2_TR(0x5e2623);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e2626:{NFSU2_TR(0x5e2626);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e2629:{NFSU2_TR(0x5e2629);
{goto L5e2633;}
}
B5e262b:L5e262b:{c.instructions+=3;NFSU2_TR(0x5e262b);
__builtin_memmove((R+8),(R+0),1);
}
B5e262d:{NFSU2_TR(0x5e262d);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e2630:{NFSU2_TR(0x5e2630);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e2633:L5e2633:{c.instructions+=3;NFSU2_TR(0x5e2633);
__builtin_memmove((R+8),(R+518),1);
}
B5e2636:{NFSU2_TR(0x5e2636);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2638:{NFSU2_TR(0x5e2638);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e25d1u);}goto L5e25d1;}}
}
B5e263a:L5e263a:{c.instructions+=4;NFSU2_TR(0x5e263a);
__builtin_memmove((R+8),(R+20),4);
}
B5e263c:{NFSU2_TR(0x5e263c);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B5e263e:{NFSU2_TR(0x5e263e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5e2641:{NFSU2_TR(0x5e2641);
if(r1(R+518)){{goto L5e2669;}}
}
B5e2643:L5e2643:{c.instructions+=2;NFSU2_TR(0x5e2643);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5e2644:{NFSU2_TR(0x5e2644);
if(r1(R+518)){{goto L5e265c;}}
}
B5e2646:L5e2646:{c.instructions+=2;NFSU2_TR(0x5e2646);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5e2647:{NFSU2_TR(0x5e2647);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e2674;}}
}
B5e2649:L5e2649:{c.instructions+=4;NFSU2_TR(0x5e2649);
__builtin_memmove((R+8),(R+0),1);
}
B5e264b:{NFSU2_TR(0x5e264b);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e264e:{NFSU2_TR(0x5e264e);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e2651:{NFSU2_TR(0x5e2651);
if(r1(R+518)){{goto L5e2658;}}
}
B5e2653:L5e2653:{c.instructions+=2;NFSU2_TR(0x5e2653);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e2656:{NFSU2_TR(0x5e2656);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e2674;}}
}
B5e2658:L5e2658:{c.instructions+=2;NFSU2_TR(0x5e2658);
w1(R+4,u8(0x1ull));
}
B5e265a:{NFSU2_TR(0x5e265a);
{goto L5e2674;}
}
B5e265c:L5e265c:{c.instructions+=5;NFSU2_TR(0x5e265c);
__builtin_memmove((R+4),(R+0),4);
}
B5e265e:{NFSU2_TR(0x5e265e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e2661:{NFSU2_TR(0x5e2661);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e2664:{NFSU2_TR(0x5e2664);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e2667:{NFSU2_TR(0x5e2667);
{goto L5e2671;}
}
B5e2669:L5e2669:{c.instructions+=3;NFSU2_TR(0x5e2669);
__builtin_memmove((R+8),(R+0),1);
}
B5e266b:{NFSU2_TR(0x5e266b);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e266e:{NFSU2_TR(0x5e266e);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e2671:L5e2671:{c.instructions+=1;NFSU2_TR(0x5e2671);
__builtin_memmove((R+4),(R+518),1);
}
B5e2674:L5e2674:{c.instructions+=3;NFSU2_TR(0x5e2674);
__builtin_memmove((R+8),(R+20),4);
}
B5e2676:{NFSU2_TR(0x5e2676);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5e2679:{NFSU2_TR(0x5e2679);
if(r1(R+518)){{goto L5e2681;}}
}
B5e267b:L5e267b:{c.instructions+=2;NFSU2_TR(0x5e267b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5e267c:{NFSU2_TR(0x5e267c);
if(r1(R+518)){{goto L5e26a2;}}
}
B5e267e:L5e267e:{c.instructions+=2;NFSU2_TR(0x5e267e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5e267f:{NFSU2_TR(0x5e267f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e268a;}}
}
B5e2681:L5e2681:{c.instructions+=2;NFSU2_TR(0x5e2681);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff7ull))));
}
B5e2684:{NFSU2_TR(0x5e2684);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x7ull))));
}
B5e2687:L5e2687:{c.instructions+=1;NFSU2_TR(0x5e2687);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e268a:L5e268a:{c.instructions+=2;NFSU2_TR(0x5e268a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e268c:{NFSU2_TR(0x5e268c);
if(r1(R+518)){{goto L5e2698;}}
}
B5e268e:L5e268e:{c.instructions+=4;NFSU2_TR(0x5e268e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2690:{NFSU2_TR(0x5e2690);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2691:{NFSU2_TR(0x5e2691);
__builtin_memmove((R+4),(R+28),4);
}
B5e2693:{NFSU2_TR(0x5e2693);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2698ull));
TAIL_STATIC(0x5e15f0u,5e1);
}
B5e2698:L5e2698:{c.instructions+=2;NFSU2_TR(0x5e2698);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e269d:{NFSU2_TR(0x5e269d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e25d6u);}goto L5e25d6;}
}
B5e26a2:L5e26a2:{c.instructions+=3;NFSU2_TR(0x5e26a2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff7full))));
}
B5e26a7:{NFSU2_TR(0x5e26a7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x70ull))));
}
B5e26aa:{NFSU2_TR(0x5e26aa);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2687u);}goto L5e2687;}
}
B5e26ac:L5e26ac:{c.instructions+=3;NFSU2_TR(0x5e26ac);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e26b0:{NFSU2_TR(0x5e26b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e26b2:{NFSU2_TR(0x5e26b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e271c;}}
}
B5e26b4:L5e26b4:{c.instructions+=9;NFSU2_TR(0x5e26b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e26b7:{NFSU2_TR(0x5e26b7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B5e26bc:{NFSU2_TR(0x5e26bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e26c3:{NFSU2_TR(0x5e26c3);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e26c7:{NFSU2_TR(0x5e26c7);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B5e26c9:{NFSU2_TR(0x5e26c9);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x8cull))));
}
B5e26cf:{NFSU2_TR(0x5e26cf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e26d1:{NFSU2_TR(0x5e26d1);
w4(R+0,u32(0x92492493ull));
}
B5e26d6:{NFSU2_TR(0x5e26d6);
if(r1(R+518)){{goto L5e26fd;}}
}
B5e26d8:L5e26d8:{c.instructions+=10;NFSU2_TR(0x5e26d8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5e26da:{NFSU2_TR(0x5e26da);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5e26dc:{NFSU2_TR(0x5e26dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5e26df:{NFSU2_TR(0x5e26df);
__builtin_memmove((R+0),(R+8),4);
}
B5e26e1:{NFSU2_TR(0x5e26e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e26e4:{NFSU2_TR(0x5e26e4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5e26e6:{NFSU2_TR(0x5e26e6);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e26ea:{NFSU2_TR(0x5e26ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e26ed:{NFSU2_TR(0x5e26ed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e26ef:{NFSU2_TR(0x5e26ef);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e271c;}}
}
B5e26f1:L5e26f1:{c.instructions+=3;NFSU2_TR(0x5e26f1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e26f4:{NFSU2_TR(0x5e26f4);
u8 U[12];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5e26fb:{NFSU2_TR(0x5e26fb);
{goto L5e2714;}
}
B5e26fd:L5e26fd:{c.instructions+=7;NFSU2_TR(0x5e26fd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5e26ff:{NFSU2_TR(0x5e26ff);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5e2701:{NFSU2_TR(0x5e2701);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5e2704:{NFSU2_TR(0x5e2704);
__builtin_memmove((R+0),(R+8),4);
}
B5e2706:{NFSU2_TR(0x5e2706);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e2709:{NFSU2_TR(0x5e2709);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5e270b:{NFSU2_TR(0x5e270b);
if(r1(R+518)){{goto L5e271c;}}
}
B5e270d:L5e270d:{c.instructions+=2;NFSU2_TR(0x5e270d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e2710:{NFSU2_TR(0x5e2710);
u8 U[12];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5e2714:L5e2714:{c.instructions+=2;NFSU2_TR(0x5e2714);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e2716:{NFSU2_TR(0x5e2716);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e24c3u);}goto L5e24c3;}}
}
B5e271c:L5e271c:{c.instructions+=3;NFSU2_TR(0x5e271c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5e271d:{NFSU2_TR(0x5e271d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e2720:{NFSU2_TR(0x5e2720);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2401u);}goto L5e2401;}}
}
B5e2726:L5e2726:{c.instructions+=5;NFSU2_TR(0x5e2726);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e272a:{NFSU2_TR(0x5e272a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e272b:{NFSU2_TR(0x5e272b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B5e272d:{NFSU2_TR(0x5e272d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2731:{NFSU2_TR(0x5e2731);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e23f1u);}goto L5e23f1;}}
}
B5e2737:L5e2737:{c.instructions+=3;NFSU2_TR(0x5e2737);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e273b:{NFSU2_TR(0x5e273b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e273c:{NFSU2_TR(0x5e273c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e273d:L5e273d:{c.instructions+=4;NFSU2_TR(0x5e273d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e273e:{NFSU2_TR(0x5e273e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e273f:{NFSU2_TR(0x5e273f);
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
B5e2742:{NFSU2_TR(0x5e2742);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e2750:L5e2750:{c.instructions+=7;NFSU2_TR(0x5e2750);
__builtin_memmove((R+0),gp(0x883db4),4);
}
B5e2755:{NFSU2_TR(0x5e2755);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2756:{NFSU2_TR(0x5e2756);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2757:{NFSU2_TR(0x5e2757);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5e2759:{NFSU2_TR(0x5e2759);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5e275b:{NFSU2_TR(0x5e275b);
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
B5e275d:{NFSU2_TR(0x5e275d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5e27c4;}}
}
B5e275f:L5e275f:{c.instructions+=3;NFSU2_TR(0x5e275f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2760:{NFSU2_TR(0x5e2760);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2761:{NFSU2_TR(0x5e2761);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e2763:L5e2763:{c.instructions+=7;NFSU2_TR(0x5e2763);
__builtin_memmove((R+0),gp(0x883db0),4);
}
B5e2768:{NFSU2_TR(0x5e2768);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5e276b:{NFSU2_TR(0x5e276b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e276e:{NFSU2_TR(0x5e276e);
__builtin_memmove((R+4),(R+0),4);
}
B5e2770:{NFSU2_TR(0x5e2770);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e2773:{NFSU2_TR(0x5e2773);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2776:{NFSU2_TR(0x5e2776);
if(r1(R+518)){{goto L5e27b5;}}
}
B5e2778:L5e2778:{c.instructions+=3;NFSU2_TR(0x5e2778);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5e277a:{NFSU2_TR(0x5e277a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e277c:{NFSU2_TR(0x5e277c);
if(r1(R+518)){{goto L5e27b5;}}
}
B5e277e:L5e277e:{c.instructions+=2;NFSU2_TR(0x5e277e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2780:{NFSU2_TR(0x5e2780);
if(r1(R+518)){{goto L5e27b5;}}
}
B5e2782:L5e2782:{c.instructions+=2;NFSU2_TR(0x5e2782);
__builtin_memmove((R+4),(R+24),4);
}
B5e2784:{NFSU2_TR(0x5e2784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2789ull));
TAIL_STATIC(0x5dccc0u,5dc);
}
B5e2789:L5e2789:{c.instructions+=2;NFSU2_TR(0x5e2789);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e278b:{NFSU2_TR(0x5e278b);
if(r1(R+518)){{goto L5e27b5;}}
}
B5e278d:L5e278d:{c.instructions+=10;NFSU2_TR(0x5e278d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e2790:{NFSU2_TR(0x5e2790);
__builtin_memmove((R+8),(R+0),1);
}
B5e2792:{NFSU2_TR(0x5e2792);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e2795:{NFSU2_TR(0x5e2795);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e2798:{NFSU2_TR(0x5e2798);
__builtin_memmove((R+4),(R+518),1);
}
B5e279b:{NFSU2_TR(0x5e279b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff7ull))));
}
B5e279e:{NFSU2_TR(0x5e279e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x7ull))));
}
B5e27a1:{NFSU2_TR(0x5e27a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e27a3:{NFSU2_TR(0x5e27a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e27a6:{NFSU2_TR(0x5e27a6);
if(r1(R+518)){{goto L5e27b3;}}
}
B5e27a8:L5e27a8:{c.instructions+=4;NFSU2_TR(0x5e27a8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e27aa:{NFSU2_TR(0x5e27aa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e27ac:{NFSU2_TR(0x5e27ac);
__builtin_memmove((R+4),(R+24),4);
}
B5e27ae:{NFSU2_TR(0x5e27ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e27b3ull));
TAIL_STATIC(0x5e15f0u,5e1);
}
B5e27b3:L5e27b3:{c.instructions+=1;NFSU2_TR(0x5e27b3);
w1(R+12,u8(0x1ull));
}
B5e27b5:L5e27b5:{c.instructions+=5;NFSU2_TR(0x5e27b5);
__builtin_memmove((R+0),gp(0x883db4),4);
}
B5e27ba:{NFSU2_TR(0x5e27ba);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5e27bb:{NFSU2_TR(0x5e27bb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B5e27be:{NFSU2_TR(0x5e27be);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e27c0:{NFSU2_TR(0x5e27c0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2763u);}goto L5e2763;}}
}
B5e27c2:L5e27c2:{c.instructions+=2;NFSU2_TR(0x5e27c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e27c3:{NFSU2_TR(0x5e27c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e27c4:L5e27c4:{c.instructions+=4;NFSU2_TR(0x5e27c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e27c5:{NFSU2_TR(0x5e27c5);
__builtin_memmove((R+0),(R+12),1);
}
B5e27c7:{NFSU2_TR(0x5e27c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e27c8:{NFSU2_TR(0x5e27c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e27d0:L5e27d0:{c.instructions+=5;NFSU2_TR(0x5e27d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8cull))));
}
B5e27d6:{NFSU2_TR(0x5e27d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e27d7:{NFSU2_TR(0x5e27d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e27d8:{NFSU2_TR(0x5e27d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e27dc:{NFSU2_TR(0x5e27dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e27e1ull));
TAIL_STATIC(0x5da2f0u,5da);
}
B5e27e1:L5e27e1:{c.instructions+=7;NFSU2_TR(0x5e27e1);
__builtin_memmove((R+0),gp(0x883db4),4);
}
B5e27e6:{NFSU2_TR(0x5e27e6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e27e8:{NFSU2_TR(0x5e27e8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5e27ea:{NFSU2_TR(0x5e27ea);
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
B5e27ec:{NFSU2_TR(0x5e27ec);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e27f0:{NFSU2_TR(0x5e27f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e27f4:{NFSU2_TR(0x5e27f4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5e2ba2;}}
}
B5e27fa:L5e27fa:{c.instructions+=3;NFSU2_TR(0x5e27fa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e27fb:{NFSU2_TR(0x5e27fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e27ff:{NFSU2_TR(0x5e27ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2800:L5e2800:{c.instructions+=6;NFSU2_TR(0x5e2800);
__builtin_memmove((R+0),gp(0x883db0),4);
}
B5e2805:{NFSU2_TR(0x5e2805);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5e2807:{NFSU2_TR(0x5e2807);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5e280b:{NFSU2_TR(0x5e280b);
w4(R+4,u32(s32(s16(r2(R+0)))));
}
B5e280e:{NFSU2_TR(0x5e280e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e2810:{NFSU2_TR(0x5e2810);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e281f;}}
}
B5e2812:L5e2812:{c.instructions+=3;NFSU2_TR(0x5e2812);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5e2819:{NFSU2_TR(0x5e2819);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e281d:{NFSU2_TR(0x5e281d);
{goto L5e2827;}
}
B5e281f:L5e281f:{c.instructions+=1;NFSU2_TR(0x5e281f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e2827:L5e2827:{c.instructions+=4;NFSU2_TR(0x5e2827);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e282a:{NFSU2_TR(0x5e282a);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e282d:{NFSU2_TR(0x5e282d);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e2830:{NFSU2_TR(0x5e2830);
if(r1(R+518)){{goto L5e2836;}}
}
B5e2832:L5e2832:{c.instructions+=1;NFSU2_TR(0x5e2832);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5e2836:L5e2836:{c.instructions+=3;NFSU2_TR(0x5e2836);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5e2839:{NFSU2_TR(0x5e2839);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e283b:{NFSU2_TR(0x5e283b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e2846;}}
}
B5e283d:L5e283d:{c.instructions+=2;NFSU2_TR(0x5e283d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B5e2844:{NFSU2_TR(0x5e2844);
{goto L5e2848;}
}
B5e2846:L5e2846:{c.instructions+=1;NFSU2_TR(0x5e2846);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e2848:L5e2848:{c.instructions+=2;NFSU2_TR(0x5e2848);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e284a:{NFSU2_TR(0x5e284a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e2855;}}
}
B5e284c:L5e284c:{c.instructions+=2;NFSU2_TR(0x5e284c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e2853:{NFSU2_TR(0x5e2853);
{goto L5e2857;}
}
B5e2855:L5e2855:{c.instructions+=1;NFSU2_TR(0x5e2855);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e2857:L5e2857:{c.instructions+=17;NFSU2_TR(0x5e2857);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e285b:{NFSU2_TR(0x5e285b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5e285e:{NFSU2_TR(0x5e285e);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e2865:{NFSU2_TR(0x5e2865);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e2869:{NFSU2_TR(0x5e2869);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5e2870:{NFSU2_TR(0x5e2870);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e2878:{NFSU2_TR(0x5e2878);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e287a:{NFSU2_TR(0x5e287a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e287c:{NFSU2_TR(0x5e287c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e2880:{NFSU2_TR(0x5e2880);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e2882:{NFSU2_TR(0x5e2882);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e2884:{NFSU2_TR(0x5e2884);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e2886:{NFSU2_TR(0x5e2886);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e2888:{NFSU2_TR(0x5e2888);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e288c:{NFSU2_TR(0x5e288c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e288e:{NFSU2_TR(0x5e288e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2891:{NFSU2_TR(0x5e2891);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e28a5;}}
}
B5e2893:L5e2893:{c.instructions+=6;NFSU2_TR(0x5e2893);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2895:{NFSU2_TR(0x5e2895);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2896:{NFSU2_TR(0x5e2896);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e289a:{NFSU2_TR(0x5e289a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e289b:{NFSU2_TR(0x5e289b);
w4(R+4,u32(0x88f298ull));
}
B5e28a0:{NFSU2_TR(0x5e28a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e28a5ull));
TAIL_STATIC(0x5d9e30u,5d9);
}
B5e28a5:L5e28a5:{c.instructions+=8;NFSU2_TR(0x5e28a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e28a9:{NFSU2_TR(0x5e28a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e28ad:{NFSU2_TR(0x5e28ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5e28af:{NFSU2_TR(0x5e28af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e28b2:{NFSU2_TR(0x5e28b2);
__builtin_memmove((R+4),(R+20),4);
}
B5e28b4:{NFSU2_TR(0x5e28b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e28b7:{NFSU2_TR(0x5e28b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e28ba:{NFSU2_TR(0x5e28ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e28fb;}}
}
B5e28bc:L5e28bc:{c.instructions+=10;NFSU2_TR(0x5e28bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e28bf:{NFSU2_TR(0x5e28bf);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffff77ull))));
}
B5e28c5:{NFSU2_TR(0x5e28c5);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x77ull))));
}
B5e28c8:{NFSU2_TR(0x5e28c8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e28ca:{NFSU2_TR(0x5e28ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e28cd:{NFSU2_TR(0x5e28cd);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e28d3:{NFSU2_TR(0x5e28d3);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e28d9:{NFSU2_TR(0x5e28d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e28dd:{NFSU2_TR(0x5e28dd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e28e1:{NFSU2_TR(0x5e28e1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e28e9;}}
}
B5e28e3:L5e28e3:{c.instructions+=1;NFSU2_TR(0x5e28e3);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e28e9:L5e28e9:{c.instructions+=6;NFSU2_TR(0x5e28e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e28ed:{NFSU2_TR(0x5e28ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e28ef:{NFSU2_TR(0x5e28ef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e28f0:{NFSU2_TR(0x5e28f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e28f4:{NFSU2_TR(0x5e28f4);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e28f6:{NFSU2_TR(0x5e28f6);
{goto L5e2b7f;}
}
B5e28fb:L5e28fb:{c.instructions+=5;NFSU2_TR(0x5e28fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e28fe:{NFSU2_TR(0x5e28fe);
__builtin_memmove((R+4),(R+0),4);
}
B5e2900:{NFSU2_TR(0x5e2900);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e2903:{NFSU2_TR(0x5e2903);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2906:{NFSU2_TR(0x5e2906);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e2a4b;}}
}
B5e290c:L5e290c:{c.instructions+=2;NFSU2_TR(0x5e290c);
w1(R+12,u8(0x1ull));
}
B5e290e:{NFSU2_TR(0x5e290e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e2910:L5e2910:{c.instructions+=4;NFSU2_TR(0x5e2910);
__builtin_memmove((R+4),(R+28),4);
}
B5e2912:{NFSU2_TR(0x5e2912);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e2915:{NFSU2_TR(0x5e2915);
w1(R+0,u8(0x7ull));
}
B5e2917:{NFSU2_TR(0x5e2917);
if(r1(R+518)){{goto L5e291f;}}
}
B5e2919:L5e2919:{c.instructions+=2;NFSU2_TR(0x5e2919);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e291a:{NFSU2_TR(0x5e291a);
if(r1(R+518)){{goto L5e293e;}}
}
B5e291c:L5e291c:{c.instructions+=2;NFSU2_TR(0x5e291c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e291d:{NFSU2_TR(0x5e291d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e2924;}}
}
B5e291f:L5e291f:{c.instructions+=1;NFSU2_TR(0x5e291f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e2922:L5e2922:{c.instructions+=1;NFSU2_TR(0x5e2922);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5e2924:L5e2924:{c.instructions+=3;NFSU2_TR(0x5e2924);
w4(R+0,u32(r1(R+0)));
}
B5e2927:{NFSU2_TR(0x5e2927);
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
B5e292a:{NFSU2_TR(0x5e292a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5e29e2;}}
}
B5e2930:L5e2930:{c.instructions+=2;NFSU2_TR(0x5e2930);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5e2bc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5e2937:{NFSU2_TR(0x5e2937);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5e2bb8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5e293e:L5e293e:{c.instructions+=3;NFSU2_TR(0x5e293e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e2941:{NFSU2_TR(0x5e2941);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e2944:{NFSU2_TR(0x5e2944);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2922u);}goto L5e2922;}
}
B5e2946:L5e2946:{c.instructions+=3;NFSU2_TR(0x5e2946);
__builtin_memmove((R+0),(R+28),4);
}
B5e2948:{NFSU2_TR(0x5e2948);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e294b:{NFSU2_TR(0x5e294b);
if(r1(R+518)){{goto L5e2957;}}
}
B5e294d:L5e294d:{c.instructions+=2;NFSU2_TR(0x5e294d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e294e:{NFSU2_TR(0x5e294e);
if(r1(R+518)){{goto L5e2968;}}
}
B5e2950:L5e2950:{c.instructions+=2;NFSU2_TR(0x5e2950);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e2951:{NFSU2_TR(0x5e2951);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e29e2;}}
}
B5e2957:L5e2957:{c.instructions+=5;NFSU2_TR(0x5e2957);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e295a:{NFSU2_TR(0x5e295a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff7ull))));
}
B5e295d:{NFSU2_TR(0x5e295d);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x7ull))));
}
B5e2960:{NFSU2_TR(0x5e2960);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2963:{NFSU2_TR(0x5e2963);
{goto L5e29e2;}
}
B5e2968:L5e2968:{c.instructions+=5;NFSU2_TR(0x5e2968);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e296b:{NFSU2_TR(0x5e296b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff7full))));
}
B5e2970:{NFSU2_TR(0x5e2970);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x70ull))));
}
B5e2973:{NFSU2_TR(0x5e2973);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2976:{NFSU2_TR(0x5e2976);
{goto L5e29e2;}
}
B5e2978:L5e2978:{c.instructions+=5;NFSU2_TR(0x5e2978);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e297c:{NFSU2_TR(0x5e297c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e297f:{NFSU2_TR(0x5e297f);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e2982:{NFSU2_TR(0x5e2982);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2984:{NFSU2_TR(0x5e2984);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e299f;}}
}
B5e2986:L5e2986:{c.instructions+=2;NFSU2_TR(0x5e2986);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e2989:{NFSU2_TR(0x5e2989);
if(r1(R+518)){{goto L5e299f;}}
}
B5e298b:L5e298b:{c.instructions+=4;NFSU2_TR(0x5e298b);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e298d:{NFSU2_TR(0x5e298d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e298e:{NFSU2_TR(0x5e298e);
__builtin_memmove((R+4),(R+24),4);
}
B5e2990:{NFSU2_TR(0x5e2990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2995ull));
TAIL_STATIC(0x5d8720u,5d8);
}
B5e2995:L5e2995:{c.instructions+=3;NFSU2_TR(0x5e2995);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2997:{NFSU2_TR(0x5e2997);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2998:{NFSU2_TR(0x5e2998);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e299dull));
TAIL_STATIC(0x5e15f0u,5e1);
}
B5e299d:L5e299d:{c.instructions+=1;NFSU2_TR(0x5e299d);
{goto L5e29e2;}
}
B5e299f:L5e299f:{c.instructions+=7;NFSU2_TR(0x5e299f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e29a2:{NFSU2_TR(0x5e29a2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e29a6:{NFSU2_TR(0x5e29a6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffff33ull))));
}
B5e29ac:{NFSU2_TR(0x5e29ac);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x33ull))));
}
B5e29af:{NFSU2_TR(0x5e29af);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e29b1:{NFSU2_TR(0x5e29b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e29b4:{NFSU2_TR(0x5e29b4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e29bf;}}
}
B5e29b6:L5e29b6:{c.instructions+=2;NFSU2_TR(0x5e29b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5e29bd:{NFSU2_TR(0x5e29bd);
{goto L5e29c1;}
}
B5e29bf:L5e29bf:{c.instructions+=1;NFSU2_TR(0x5e29bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e29c1:L5e29c1:{c.instructions+=6;NFSU2_TR(0x5e29c1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5e29c5:{NFSU2_TR(0x5e29c5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e29c8:{NFSU2_TR(0x5e29c8);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5e29cf:{NFSU2_TR(0x5e29cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e29d0:{NFSU2_TR(0x5e29d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e29d4:{NFSU2_TR(0x5e29d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e29d9ull));
TAIL_STATIC(0x5ded90u,5de);
}
B5e29d9:L5e29d9:{c.instructions+=2;NFSU2_TR(0x5e29d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e29dd:{NFSU2_TR(0x5e29dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e29e2ull));
TAIL_STATIC(0x4022c0u,402);
}
B5e29e2:L5e29e2:{c.instructions+=4;NFSU2_TR(0x5e29e2);
__builtin_memmove((R+4),(R+28),4);
}
B5e29e4:{NFSU2_TR(0x5e29e4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e29e7:{NFSU2_TR(0x5e29e7);
w1(R+0,u8(0x7ull));
}
B5e29e9:{NFSU2_TR(0x5e29e9);
if(r1(R+518)){{goto L5e29f1;}}
}
B5e29eb:L5e29eb:{c.instructions+=2;NFSU2_TR(0x5e29eb);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e29ec:{NFSU2_TR(0x5e29ec);
if(r1(R+518)){{goto L5e2a43;}}
}
B5e29ee:L5e29ee:{c.instructions+=2;NFSU2_TR(0x5e29ee);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e29ef:{NFSU2_TR(0x5e29ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e29f6;}}
}
B5e29f1:L5e29f1:{c.instructions+=1;NFSU2_TR(0x5e29f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e29f4:L5e29f4:{c.instructions+=1;NFSU2_TR(0x5e29f4);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5e29f6:L5e29f6:{c.instructions+=6;NFSU2_TR(0x5e29f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e29f8:{NFSU2_TR(0x5e29f8);
__builtin_memmove((R+4),(R+518),1);
}
B5e29fb:{NFSU2_TR(0x5e29fb);
w1(R+12,u8(u32(r1(R+12))&u32(r1(R+4))));
}
B5e29fd:{NFSU2_TR(0x5e29fd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e29fe:{NFSU2_TR(0x5e29fe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e2a01:{NFSU2_TR(0x5e2a01);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2910u);}goto L5e2910;}}
}
B5e2a07:L5e2a07:{c.instructions+=2;NFSU2_TR(0x5e2a07);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2a09:{NFSU2_TR(0x5e2a09);
if(r1(R+518)){{goto L5e2b7f;}}
}
B5e2a0f:L5e2a0f:{c.instructions+=6;NFSU2_TR(0x5e2a0f);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e2a15:{NFSU2_TR(0x5e2a15);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e2a19:{NFSU2_TR(0x5e2a19);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e2a1b:{NFSU2_TR(0x5e2a1b);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e2a21:{NFSU2_TR(0x5e2a21);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e2a25:{NFSU2_TR(0x5e2a25);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e28e9u);}goto L5e28e9;}}
}
B5e2a2b:L5e2a2b:{c.instructions+=7;NFSU2_TR(0x5e2a2b);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e2a31:{NFSU2_TR(0x5e2a31);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e2a35:{NFSU2_TR(0x5e2a35);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e2a36:{NFSU2_TR(0x5e2a36);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2a3a:{NFSU2_TR(0x5e2a3a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e2a3c:{NFSU2_TR(0x5e2a3c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e2a3e:{NFSU2_TR(0x5e2a3e);
{goto L5e2b7f;}
}
B5e2a43:L5e2a43:{c.instructions+=3;NFSU2_TR(0x5e2a43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e2a46:{NFSU2_TR(0x5e2a46);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e2a49:{NFSU2_TR(0x5e2a49);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e29f4u);}goto L5e29f4;}
}
B5e2a4b:L5e2a4b:{c.instructions+=3;NFSU2_TR(0x5e2a4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e2a4e:{NFSU2_TR(0x5e2a4e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2a50:{NFSU2_TR(0x5e2a50);
if(r1(R+518)){{goto L5e2afb;}}
}
B5e2a56:L5e2a56:{c.instructions+=7;NFSU2_TR(0x5e2a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e2a59:{NFSU2_TR(0x5e2a59);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e2a5b:{NFSU2_TR(0x5e2a5b);
__builtin_memmove((R+0),(R+12),1);
}
B5e2a5d:{NFSU2_TR(0x5e2a5d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B5e2a60:{NFSU2_TR(0x5e2a60);
__builtin_memmove((R+28),(R+0),4);
}
B5e2a62:{NFSU2_TR(0x5e2a62);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e2a65:{NFSU2_TR(0x5e2a65);
if(r1(R+518)){{goto L5e2b7f;}}
}
B5e2a6b:L5e2a6b:{c.instructions+=2;NFSU2_TR(0x5e2a6b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e2a6e:{NFSU2_TR(0x5e2a6e);
if(r1(R+518)){{goto L5e2b7f;}}
}
B5e2a74:L5e2a74:{c.instructions+=2;NFSU2_TR(0x5e2a74);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e2a77:{NFSU2_TR(0x5e2a77);
if(r1(R+518)){{goto L5e2b7f;}}
}
B5e2a7d:L5e2a7d:{c.instructions+=2;NFSU2_TR(0x5e2a7d);
__builtin_memmove((R+4),(R+24),4);
}
B5e2a7f:{NFSU2_TR(0x5e2a7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2a84ull));
TAIL_STATIC(0x5d3f80u,5d3);
}
B5e2a84:L5e2a84:{c.instructions+=8;NFSU2_TR(0x5e2a84);
__builtin_memmove((R+8),gp(0x88f2b0),4);
}
B5e2a8a:{NFSU2_TR(0x5e2a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e2a8d:{NFSU2_TR(0x5e2a8d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2a8e:{NFSU2_TR(0x5e2a8e);
__builtin_memmove((R+0),(R+4),4);
}
B5e2a90:{NFSU2_TR(0x5e2a90);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2a92:{NFSU2_TR(0x5e2a92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2a93:{NFSU2_TR(0x5e2a93);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2a97:{NFSU2_TR(0x5e2a97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2a9cull));
TAIL_STATIC(0x401090u,401);
}
B5e2a9c:L5e2a9c:{c.instructions+=5;NFSU2_TR(0x5e2a9c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e2aa0:{NFSU2_TR(0x5e2aa0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5e2aa3:{NFSU2_TR(0x5e2aa3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e2aa5:{NFSU2_TR(0x5e2aa5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e2aa8:{NFSU2_TR(0x5e2aa8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5e2aae;}}
}
B5e2aaa:L5e2aaa:{c.instructions+=2;NFSU2_TR(0x5e2aaa);
w1(R+0,u8(0x1ull));
}
B5e2aac:{NFSU2_TR(0x5e2aac);
{goto L5e2ab0;}
}
B5e2aae:L5e2aae:{c.instructions+=1;NFSU2_TR(0x5e2aae);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5e2ab0:L5e2ab0:{c.instructions+=4;NFSU2_TR(0x5e2ab0);
__builtin_memmove((R+4),(R+20),4);
}
B5e2ab2:{NFSU2_TR(0x5e2ab2);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e2ab5:{NFSU2_TR(0x5e2ab5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2ab8:{NFSU2_TR(0x5e2ab8);
if(r1(R+518)){{goto L5e2ac8;}}
}
B5e2aba:L5e2aba:{c.instructions+=4;NFSU2_TR(0x5e2aba);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffff7ull))));
}
B5e2abd:{NFSU2_TR(0x5e2abd);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x7ull))));
}
B5e2ac0:{NFSU2_TR(0x5e2ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2ac3:{NFSU2_TR(0x5e2ac3);
{goto L5e2b7f;}
}
B5e2ac8:L5e2ac8:{c.instructions+=4;NFSU2_TR(0x5e2ac8);
__builtin_memmove((R+8),(R+20),4);
}
B5e2aca:{NFSU2_TR(0x5e2aca);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e2acd:{NFSU2_TR(0x5e2acd);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2ad0:{NFSU2_TR(0x5e2ad0);
if(r1(R+518)){{goto L5e2ae4;}}
}
B5e2ad2:L5e2ad2:{c.instructions+=2;NFSU2_TR(0x5e2ad2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2ad4:{NFSU2_TR(0x5e2ad4);
if(r1(R+518)){{goto L5e2ae4;}}
}
B5e2ad6:L5e2ad6:{c.instructions+=4;NFSU2_TR(0x5e2ad6);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffff3ull))));
}
B5e2ad9:{NFSU2_TR(0x5e2ad9);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x3ull))));
}
B5e2adc:{NFSU2_TR(0x5e2adc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2adf:{NFSU2_TR(0x5e2adf);
{goto L5e2b7f;}
}
B5e2ae4:L5e2ae4:{c.instructions+=5;NFSU2_TR(0x5e2ae4);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffff7ull))));
}
B5e2ae7:{NFSU2_TR(0x5e2ae7);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x7ull))));
}
B5e2aea:{NFSU2_TR(0x5e2aea);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e2aed:{NFSU2_TR(0x5e2aed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2af0:{NFSU2_TR(0x5e2af0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e2b7f;}}
}
B5e2af6:L5e2af6:{c.instructions+=1;NFSU2_TR(0x5e2af6);
{goto L5e2b74;}
}
B5e2afb:L5e2afb:{c.instructions+=4;NFSU2_TR(0x5e2afb);
__builtin_memmove((R+0),(R+20),4);
}
B5e2afd:{NFSU2_TR(0x5e2afd);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e2b00:{NFSU2_TR(0x5e2b00);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2b02:{NFSU2_TR(0x5e2b02);
if(r1(R+518)){{goto L5e2b28;}}
}
B5e2b04:L5e2b04:{c.instructions+=6;NFSU2_TR(0x5e2b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e2b07:{NFSU2_TR(0x5e2b07);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e2b09:{NFSU2_TR(0x5e2b09);
__builtin_memmove((R+4),(R+0),1);
}
B5e2b0b:{NFSU2_TR(0x5e2b0b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B5e2b0e:{NFSU2_TR(0x5e2b0e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e2b11:{NFSU2_TR(0x5e2b11);
if(r1(R+518)){{goto L5e2b7f;}}
}
B5e2b13:L5e2b13:{c.instructions+=2;NFSU2_TR(0x5e2b13);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e2b16:{NFSU2_TR(0x5e2b16);
if(r1(R+518)){{goto L5e2b7f;}}
}
B5e2b18:L5e2b18:{c.instructions+=2;NFSU2_TR(0x5e2b18);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e2b1b:{NFSU2_TR(0x5e2b1b);
if(r1(R+518)){{goto L5e2b7f;}}
}
B5e2b1d:L5e2b1d:{c.instructions+=4;NFSU2_TR(0x5e2b1d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff7ull))));
}
B5e2b20:{NFSU2_TR(0x5e2b20);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x7ull))));
}
B5e2b23:{NFSU2_TR(0x5e2b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2b26:{NFSU2_TR(0x5e2b26);
{goto L5e2b7f;}
}
B5e2b28:L5e2b28:{c.instructions+=3;NFSU2_TR(0x5e2b28);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B5e2b2d:{NFSU2_TR(0x5e2b2d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2b2f:{NFSU2_TR(0x5e2b2f);
if(r1(R+518)){{goto L5e2b7f;}}
}
B5e2b31:L5e2b31:{c.instructions+=2;NFSU2_TR(0x5e2b31);
__builtin_memmove((R+4),(R+24),4);
}
B5e2b33:{NFSU2_TR(0x5e2b33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2b38ull));
TAIL_STATIC(0x5d3f80u,5d3);
}
B5e2b38:L5e2b38:{c.instructions+=4;NFSU2_TR(0x5e2b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e2b3b:{NFSU2_TR(0x5e2b3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e2b3e:{NFSU2_TR(0x5e2b3e);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2b41:{NFSU2_TR(0x5e2b41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e2b7f;}}
}
B5e2b43:L5e2b43:{c.instructions+=2;NFSU2_TR(0x5e2b43);
__builtin_memmove((R+4),(R+24),4);
}
B5e2b45:{NFSU2_TR(0x5e2b45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2b4aull));
TAIL_STATIC(0x5d86d0u,5d8);
}
B5e2b4a:L5e2b4a:{c.instructions+=4;NFSU2_TR(0x5e2b4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e2b4d:{NFSU2_TR(0x5e2b4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e2b50:{NFSU2_TR(0x5e2b50);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2b52:{NFSU2_TR(0x5e2b52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e2b7f;}}
}
B5e2b54:L5e2b54:{c.instructions+=5;NFSU2_TR(0x5e2b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e2b57:{NFSU2_TR(0x5e2b57);
__builtin_memmove((R+4),(R+0),1);
}
B5e2b59:{NFSU2_TR(0x5e2b59);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e2b5c:{NFSU2_TR(0x5e2b5c);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e2b5f:{NFSU2_TR(0x5e2b5f);
if(r1(R+518)){{goto L5e2b7f;}}
}
B5e2b61:L5e2b61:{c.instructions+=7;NFSU2_TR(0x5e2b61);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e2b64:{NFSU2_TR(0x5e2b64);
__builtin_memmove((R+4),(R+518),1);
}
B5e2b67:{NFSU2_TR(0x5e2b67);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff7ull))));
}
B5e2b6a:{NFSU2_TR(0x5e2b6a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x7ull))));
}
B5e2b6d:{NFSU2_TR(0x5e2b6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2b6f:{NFSU2_TR(0x5e2b6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2b72:{NFSU2_TR(0x5e2b72);
if(r1(R+518)){{goto L5e2b7f;}}
}
B5e2b74:L5e2b74:{c.instructions+=4;NFSU2_TR(0x5e2b74);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2b76:{NFSU2_TR(0x5e2b76);
__builtin_memmove((R+4),(R+24),4);
}
B5e2b78:{NFSU2_TR(0x5e2b78);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2b7a:{NFSU2_TR(0x5e2b7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2b7full));
TAIL_STATIC(0x5e15f0u,5e1);
}
B5e2b7f:L5e2b7f:{c.instructions+=9;NFSU2_TR(0x5e2b7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e2b83:{NFSU2_TR(0x5e2b83);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e2b87:{NFSU2_TR(0x5e2b87);
__builtin_memmove((R+0),gp(0x883db4),4);
}
B5e2b8c:{NFSU2_TR(0x5e2b8c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5e2b8d:{NFSU2_TR(0x5e2b8d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B5e2b90:{NFSU2_TR(0x5e2b90);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e2b92:{NFSU2_TR(0x5e2b92);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2b96:{NFSU2_TR(0x5e2b96);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2b9a:{NFSU2_TR(0x5e2b9a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2800u);}goto L5e2800;}}
}
B5e2ba0:L5e2ba0:{c.instructions+=2;NFSU2_TR(0x5e2ba0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e2ba1:{NFSU2_TR(0x5e2ba1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e2ba2:L5e2ba2:{c.instructions+=2;NFSU2_TR(0x5e2ba2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e2ba6:{NFSU2_TR(0x5e2ba6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2babull));
TAIL_STATIC(0x4022c0u,402);
}
B5e2bab:L5e2bab:{c.instructions+=5;NFSU2_TR(0x5e2bab);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e2baf:{NFSU2_TR(0x5e2baf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e2bb0:{NFSU2_TR(0x5e2bb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e2bb1:{NFSU2_TR(0x5e2bb1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e2bb7:{NFSU2_TR(0x5e2bb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e2bd0:L5e2bd0:{c.instructions+=2;NFSU2_TR(0x5e2bd0);
w4(R+0,u32(0x1f48ull));
}
B5e2bd5:{NFSU2_TR(0x5e2bd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2bdaull));
TAIL_STATIC(0x75c4d0u,75c);
}
B5e2bda:L5e2bda:{c.instructions+=8;NFSU2_TR(0x5e2bda);
__builtin_memmove((R+0),gp(0x883db8),4);
}
B5e2bdf:{NFSU2_TR(0x5e2bdf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2be0:{NFSU2_TR(0x5e2be0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2be1:{NFSU2_TR(0x5e2be1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2be2:{NFSU2_TR(0x5e2be2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e2be5:{NFSU2_TR(0x5e2be5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2be6:{NFSU2_TR(0x5e2be6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2be7:{NFSU2_TR(0x5e2be7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2becull));
TAIL_STATIC(0x575620u,575);
}
B5e2bec:L5e2bec:{c.instructions+=7;NFSU2_TR(0x5e2bec);
__builtin_memmove((R+8),gp(0x883db8),4);
}
B5e2bf2:{NFSU2_TR(0x5e2bf2);
__builtin_memmove((R+20),(R+0),4);
}
B5e2bf4:{NFSU2_TR(0x5e2bf4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e2bf7:{NFSU2_TR(0x5e2bf7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e2bf9:{NFSU2_TR(0x5e2bf9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e2bfb:{NFSU2_TR(0x5e2bfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2bff:{NFSU2_TR(0x5e2bff);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5e2c21;}}
}
B5e2c01:L5e2c01:{c.instructions+=1;NFSU2_TR(0x5e2c01);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e2c03:L5e2c03:{c.instructions+=9;NFSU2_TR(0x5e2c03);
__builtin_memmove((R+8),gp(0x883db0),4);
}
B5e2c09:{NFSU2_TR(0x5e2c09);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5e2c0b:{NFSU2_TR(0x5e2c0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5e2c0f:{NFSU2_TR(0x5e2c0f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5e2c13:{NFSU2_TR(0x5e2c13);
__builtin_memmove((R+8),gp(0x883db8),4);
}
B5e2c19:{NFSU2_TR(0x5e2c19);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e2c1a:{NFSU2_TR(0x5e2c1a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B5e2c1d:{NFSU2_TR(0x5e2c1d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5e2c1f:{NFSU2_TR(0x5e2c1f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2c03u);}goto L5e2c03;}}
}
B5e2c21:L5e2c21:{c.instructions+=5;NFSU2_TR(0x5e2c21);
u8 U[4];
w4(U+0,u32(0x5d42b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2c26:{NFSU2_TR(0x5e2c26);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2c28:{NFSU2_TR(0x5e2c28);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2c29:{NFSU2_TR(0x5e2c29);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2c2a:{NFSU2_TR(0x5e2c2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2c2full));
TAIL_STATIC(0x5d40f0u,5d4);
}
B5e2c2f:L5e2c2f:{c.instructions+=5;NFSU2_TR(0x5e2c2f);
__builtin_memmove((R+8),gp(0x883db8),4);
}
B5e2c35:{NFSU2_TR(0x5e2c35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5e2c38:{NFSU2_TR(0x5e2c38);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e2c3a:{NFSU2_TR(0x5e2c3a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e2c3c:{NFSU2_TR(0x5e2c3c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5e2c50;}}
}
B5e2c3e:L5e2c3e:{c.instructions+=1;NFSU2_TR(0x5e2c3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e2c41:L5e2c41:{c.instructions+=6;NFSU2_TR(0x5e2c41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e2c43:{NFSU2_TR(0x5e2c43);
u8 U[14];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B5e2c48:{NFSU2_TR(0x5e2c48);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e2c49:{NFSU2_TR(0x5e2c49);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B5e2c4c:{NFSU2_TR(0x5e2c4c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5e2c4e:{NFSU2_TR(0x5e2c4e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2c41u);}goto L5e2c41;}}
}
B5e2c50:L5e2c50:{c.instructions+=1;NFSU2_TR(0x5e2c50);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5e2c52:L5e2c52:{c.instructions+=2;NFSU2_TR(0x5e2c52);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e2c54:{NFSU2_TR(0x5e2c54);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e2cb8;}}
}
B5e2c56:L5e2c56:{c.instructions+=3;NFSU2_TR(0x5e2c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88a334ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e2c5c:{NFSU2_TR(0x5e2c5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e2c5e:{NFSU2_TR(0x5e2c5e);
if(r1(R+518)){{goto L5e2cb8;}}
}
B5e2c60:L5e2c60:{c.instructions+=3;NFSU2_TR(0x5e2c60);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e2c62:{NFSU2_TR(0x5e2c62);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),r2(R+28)));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+28))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5e2c66:{NFSU2_TR(0x5e2c66);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e2cb8;}}
}
B5e2c68:L5e2c68:{c.instructions+=2;NFSU2_TR(0x5e2c68);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaaull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e2c6e:{NFSU2_TR(0x5e2c6e);
__builtin_memmove((R+28),(R+28),4);
}
B5e2c70:L5e2c70:{c.instructions+=3;NFSU2_TR(0x5e2c70);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5e2c74:{NFSU2_TR(0x5e2c74);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e2c7a:{NFSU2_TR(0x5e2c7a);
if(r1(R+518)){{goto L5e2c8f;}}
}
B5e2c7c:L5e2c7c:{c.instructions+=2;NFSU2_TR(0x5e2c7c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B5e2c7e:{NFSU2_TR(0x5e2c7e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5e2c8f;}}
}
B5e2c80:L5e2c80:{c.instructions+=3;NFSU2_TR(0x5e2c80);
u8 U[14];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+4),(U+12),2);
}
B5e2c85:{NFSU2_TR(0x5e2c85);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5e2c89:{NFSU2_TR(0x5e2c89);
__builtin_memmove((R+8),gp(0x883db8),4);
}
B5e2c8f:L5e2c8f:{c.instructions+=3;NFSU2_TR(0x5e2c8f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B5e2c92:{NFSU2_TR(0x5e2c92);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e2c98:{NFSU2_TR(0x5e2c98);
if(r1(R+518)){{goto L5e2cac;}}
}
B5e2c9a:L5e2c9a:{c.instructions+=2;NFSU2_TR(0x5e2c9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B5e2c9c:{NFSU2_TR(0x5e2c9c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5e2cac;}}
}
B5e2c9e:L5e2c9e:{c.instructions+=3;NFSU2_TR(0x5e2c9e);
u8 U[14];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
}
B5e2ca3:{NFSU2_TR(0x5e2ca3);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B5e2ca6:{NFSU2_TR(0x5e2ca6);
__builtin_memmove((R+8),gp(0x883db8),4);
}
B5e2cac:L5e2cac:{c.instructions+=5;NFSU2_TR(0x5e2cac);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5e2cb0:{NFSU2_TR(0x5e2cb0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e2cb1:{NFSU2_TR(0x5e2cb1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
}
B5e2cb4:{NFSU2_TR(0x5e2cb4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e2cb6:{NFSU2_TR(0x5e2cb6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2c70u);}goto L5e2c70;}}
}
B5e2cb8:L5e2cb8:{c.instructions+=3;NFSU2_TR(0x5e2cb8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5e2cbb:{NFSU2_TR(0x5e2cbb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x1770ull))));
}
B5e2cc1:{NFSU2_TR(0x5e2cc1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2c52u);}goto L5e2c52;}}
}
B5e2cc3:L5e2cc3:{c.instructions+=4;NFSU2_TR(0x5e2cc3);
__builtin_memmove((R+24),(R+8),4);
}
B5e2cc5:{NFSU2_TR(0x5e2cc5);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5e2cc8:{NFSU2_TR(0x5e2cc8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2cc9:{NFSU2_TR(0x5e2cc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2cceull));
TAIL_STATIC(0x575620u,575);
}
B5e2cce:L5e2cce:{c.instructions+=5;NFSU2_TR(0x5e2cce);
__builtin_memmove((R+8),(R+0),4);
}
B5e2cd0:{NFSU2_TR(0x5e2cd0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e2cd3:{NFSU2_TR(0x5e2cd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e2cd5:{NFSU2_TR(0x5e2cd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2cd9:{NFSU2_TR(0x5e2cd9);
if(r1(R+518)){{goto L5e2d25;}}
}
B5e2cdb:L5e2cdb:{c.instructions+=3;NFSU2_TR(0x5e2cdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e2cde:{NFSU2_TR(0x5e2cde);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e2ce0:{NFSU2_TR(0x5e2ce0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e2d21;}}
}
B5e2ce2:L5e2ce2:{c.instructions+=4;NFSU2_TR(0x5e2ce2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1cull))));
}
B5e2ce5:{NFSU2_TR(0x5e2ce5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e2ce8:{NFSU2_TR(0x5e2ce8);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B5e2ceb:{NFSU2_TR(0x5e2ceb);
w4(R+20,u32(0xfcfcffffull));
}
B5e2cf0:L5e2cf0:{c.instructions+=3;NFSU2_TR(0x5e2cf0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e2cf2:{NFSU2_TR(0x5e2cf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e2cf5:{NFSU2_TR(0x5e2cf5);
w4(R+4,u32(0x8ull));
}
B5e2cfa:L5e2cfa:{c.instructions+=1;NFSU2_TR(0x5e2cfa);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5e2cfc;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2cfau);}goto L5e2cfa;}
}
B5e2cfc:L5e2cfc:{c.instructions+=10;NFSU2_TR(0x5e2cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e2cff:{NFSU2_TR(0x5e2cff);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+20))));
}
B5e2d01:{NFSU2_TR(0x5e2d01);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5e2d05:{NFSU2_TR(0x5e2d05);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+8)),r2(U+0));
}
B5e2d08:{NFSU2_TR(0x5e2d08);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5e2d0c:{NFSU2_TR(0x5e2d0c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5e2d10:{NFSU2_TR(0x5e2d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2d13:{NFSU2_TR(0x5e2d13);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B5e2d16:{NFSU2_TR(0x5e2d16);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5e2d17:{NFSU2_TR(0x5e2d17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2cf0u);}goto L5e2cf0;}}
}
B5e2d19:L5e2d19:{c.instructions+=2;NFSU2_TR(0x5e2d19);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e2d1d:{NFSU2_TR(0x5e2d1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e2d21:L5e2d21:{c.instructions+=2;NFSU2_TR(0x5e2d21);
__builtin_memmove((R+12),(R+8),4);
}
B5e2d23:{NFSU2_TR(0x5e2d23);
{goto L5e2d27;}
}
B5e2d25:L5e2d25:{c.instructions+=1;NFSU2_TR(0x5e2d25);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5e2d27:L5e2d27:{c.instructions+=4;NFSU2_TR(0x5e2d27);
__builtin_memmove((R+4),gp(0x883db8),4);
}
B5e2d2d:{NFSU2_TR(0x5e2d2d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e2d2f:{NFSU2_TR(0x5e2d2f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e2d31:{NFSU2_TR(0x5e2d31);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5e2d5b;}}
}
B5e2d33:L5e2d33:{c.instructions+=2;NFSU2_TR(0x5e2d33);
__builtin_memmove((R+8),(R+12),4);
}
B5e2d35:{NFSU2_TR(0x5e2d35);
{goto L5e2d40;}
}
B5e2d37:L5e2d37:{c.instructions+=2;NFSU2_TR(0x5e2d37);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e2d3b:{NFSU2_TR(0x5e2d3b);
{goto L5e2d40;}
}
B5e2d40:L5e2d40:{c.instructions+=3;NFSU2_TR(0x5e2d40);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B5e2d44:{NFSU2_TR(0x5e2d44);
__builtin_memmove((R+28),(R+8),4);
}
B5e2d46:{NFSU2_TR(0x5e2d46);
w4(R+4,u32(0x8ull));
}
B5e2d4b:L5e2d4b:{c.instructions+=1;NFSU2_TR(0x5e2d4b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5e2d4d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2d4bu);}goto L5e2d4b;}
}
B5e2d4d:L5e2d4d:{c.instructions+=5;NFSU2_TR(0x5e2d4d);
__builtin_memmove((R+4),gp(0x883db8),4);
}
B5e2d53:{NFSU2_TR(0x5e2d53);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e2d54:{NFSU2_TR(0x5e2d54);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B5e2d57:{NFSU2_TR(0x5e2d57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5e2d59:{NFSU2_TR(0x5e2d59);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2d37u);}goto L5e2d37;}}
}
B5e2d5b:L5e2d5b:{c.instructions+=6;NFSU2_TR(0x5e2d5b);
__builtin_memmove((R+28),gp(0x883db0),4);
}
B5e2d61:{NFSU2_TR(0x5e2d61);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e2d65:{NFSU2_TR(0x5e2d65);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5e2d68:{NFSU2_TR(0x5e2d68);
__builtin_memmove((R+8),(R+4),4);
}
B5e2d6a:{NFSU2_TR(0x5e2d6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e2d6d:{NFSU2_TR(0x5e2d6d);
__builtin_memmove((R+24),(R+12),4);
}
B5e2d6f:L5e2d6f:{c.instructions+=1;NFSU2_TR(0x5e2d6f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5e2d71;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2d6fu);}goto L5e2d6f;}
}
B5e2d71:L5e2d71:{c.instructions+=3;NFSU2_TR(0x5e2d71);
__builtin_memmove((R+4),(R+8),4);
}
B5e2d73:{NFSU2_TR(0x5e2d73);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5e2d76:{NFSU2_TR(0x5e2d76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2d77:L5e2d77:{c.instructions+=1;NFSU2_TR(0x5e2d77);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5e2d79;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e2d77u);}goto L5e2d77;}
}
B5e2d79:L5e2d79:{c.instructions+=1;NFSU2_TR(0x5e2d79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2d7eull));
TAIL_STATIC(0x575630u,575);
}
B5e2d7e:L5e2d7e:{c.instructions+=2;NFSU2_TR(0x5e2d7e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2d7f:{NFSU2_TR(0x5e2d7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2d84ull));
TAIL_STATIC(0x575630u,575);
}
B5e2d84:L5e2d84:{c.instructions+=7;NFSU2_TR(0x5e2d84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e2d87:{NFSU2_TR(0x5e2d87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e2d88:{NFSU2_TR(0x5e2d88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e2d89:{NFSU2_TR(0x5e2d89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e2d8a:{NFSU2_TR(0x5e2d8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e2d8b:{NFSU2_TR(0x5e2d8b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1f48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1f48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1f48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e2d91:{NFSU2_TR(0x5e2d91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e2da0:L5e2da0:{c.instructions+=7;NFSU2_TR(0x5e2da0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5e2da3:{NFSU2_TR(0x5e2da3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2da4:{NFSU2_TR(0x5e2da4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2da5:{NFSU2_TR(0x5e2da5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e2da9:{NFSU2_TR(0x5e2da9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2daa:{NFSU2_TR(0x5e2daa);
__builtin_memmove((R+24),(R+4),4);
}
B5e2dac:{NFSU2_TR(0x5e2dac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2db1ull));
TAIL_STATIC(0x403d80u,403);
}
B5e2db1:L5e2db1:{c.instructions+=3;NFSU2_TR(0x5e2db1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e2db4:{NFSU2_TR(0x5e2db4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2db6:{NFSU2_TR(0x5e2db6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e2e22;}}
}
B5e2db8:L5e2db8:{c.instructions+=2;NFSU2_TR(0x5e2db8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2db9:{NFSU2_TR(0x5e2db9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2dbeull));
TAIL_STATIC(0x403d60u,403);
}
B5e2dbe:L5e2dbe:{c.instructions+=3;NFSU2_TR(0x5e2dbe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e2dc1:{NFSU2_TR(0x5e2dc1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2dc3:{NFSU2_TR(0x5e2dc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e2e22;}}
}
B5e2dc5:L5e2dc5:{c.instructions+=3;NFSU2_TR(0x5e2dc5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2dc6:{NFSU2_TR(0x5e2dc6);
__builtin_memmove((R+4),(R+24),4);
}
B5e2dc8:{NFSU2_TR(0x5e2dc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2dcdull));
TAIL_STATIC(0x401c40u,401);
}
B5e2dcd:L5e2dcd:{c.instructions+=7;NFSU2_TR(0x5e2dcd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2dce:{NFSU2_TR(0x5e2dce);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e2dd1:{NFSU2_TR(0x5e2dd1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2dd3:{NFSU2_TR(0x5e2dd3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e2dd7:{NFSU2_TR(0x5e2dd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2dd8:{NFSU2_TR(0x5e2dd8);
__builtin_memmove((R+4),(R+24),4);
}
B5e2dda:{NFSU2_TR(0x5e2dda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2ddfull));
TAIL_STATIC(0x5dd430u,5dd);
}
B5e2ddf:L5e2ddf:{c.instructions+=21;NFSU2_TR(0x5e2ddf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5e2de3:{NFSU2_TR(0x5e2de3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5e2de7:{NFSU2_TR(0x5e2de7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2deb:{NFSU2_TR(0x5e2deb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e2dec:{NFSU2_TR(0x5e2dec);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e2df0:{NFSU2_TR(0x5e2df0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2df4:{NFSU2_TR(0x5e2df4);
{u32 ea_=u32(u32(8972912u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e2dfa:{NFSU2_TR(0x5e2dfa);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e2dfe:{NFSU2_TR(0x5e2dfe);
{u32 ea_=u32(u32(8972912u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e2e04:{NFSU2_TR(0x5e2e04);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e2e08:{NFSU2_TR(0x5e2e08);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e2e0a:{NFSU2_TR(0x5e2e0a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e2e0c:{NFSU2_TR(0x5e2e0c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e2e10:{NFSU2_TR(0x5e2e10);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e2e13:{NFSU2_TR(0x5e2e13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e2e14:{NFSU2_TR(0x5e2e14);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5e2e16:{NFSU2_TR(0x5e2e16);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5e2e18:{NFSU2_TR(0x5e2e18);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5e2e1a:{NFSU2_TR(0x5e2e1a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e2e1c:{NFSU2_TR(0x5e2e1c);
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
B5e2e1f:{NFSU2_TR(0x5e2e1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e2e22:L5e2e22:{c.instructions+=3;NFSU2_TR(0x5e2e22);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2e23:{NFSU2_TR(0x5e2e23);
__builtin_memmove((R+4),(R+24),4);
}
B5e2e25:{NFSU2_TR(0x5e2e25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2e2aull));
TAIL_STATIC(0x401c40u,401);
}
B5e2e2a:L5e2e2a:{c.instructions+=4;NFSU2_TR(0x5e2e2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e2e2b:{NFSU2_TR(0x5e2e2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e2e2c:{NFSU2_TR(0x5e2e2c);
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
B5e2e2f:{NFSU2_TR(0x5e2e2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e2e40:L5e2e40:{c.instructions+=18;NFSU2_TR(0x5e2e40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2e41:{NFSU2_TR(0x5e2e41);
__builtin_memmove((R+20),(R+16),4);
}
B5e2e43:{NFSU2_TR(0x5e2e43);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5e2e46:{NFSU2_TR(0x5e2e46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B5e2e49:{NFSU2_TR(0x5e2e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e2e4c:{NFSU2_TR(0x5e2e4c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2e4d:{NFSU2_TR(0x5e2e4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2e4e:{NFSU2_TR(0x5e2e4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2e4f:{NFSU2_TR(0x5e2e4f);
__builtin_memmove((R+24),(R+4),4);
}
B5e2e51:{NFSU2_TR(0x5e2e51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e2e54:{NFSU2_TR(0x5e2e54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2e55:{NFSU2_TR(0x5e2e55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2e56:{NFSU2_TR(0x5e2e56);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e2e59:{NFSU2_TR(0x5e2e59);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2e5a:{NFSU2_TR(0x5e2e5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e2e5d:{NFSU2_TR(0x5e2e5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2e5e:{NFSU2_TR(0x5e2e5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2e62:{NFSU2_TR(0x5e2e62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2e67ull));
TAIL_STATIC(0x43d410u,43d);
}
B5e2e67:L5e2e67:{c.instructions+=3;NFSU2_TR(0x5e2e67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5e2e6a:{NFSU2_TR(0x5e2e6a);
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
B5e2e6c:{NFSU2_TR(0x5e2e6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e2e77;}}
}
B5e2e6e:L5e2e6e:{c.instructions+=6;NFSU2_TR(0x5e2e6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e2e6f:{NFSU2_TR(0x5e2e6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e2e70:{NFSU2_TR(0x5e2e70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e2e71:{NFSU2_TR(0x5e2e71);
__builtin_memmove((R+16),(R+20),4);
}
B5e2e73:{NFSU2_TR(0x5e2e73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e2e74:{NFSU2_TR(0x5e2e74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e2e77:L5e2e77:{c.instructions+=3;NFSU2_TR(0x5e2e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e2e7a:{NFSU2_TR(0x5e2e7a);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2e7d:{NFSU2_TR(0x5e2e7d);
if(r1(R+518)){{goto L5e2e8d;}}
}
B5e2e7f:L5e2e7f:{c.instructions+=4;NFSU2_TR(0x5e2e7f);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B5e2e84:{NFSU2_TR(0x5e2e84);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2e86:{NFSU2_TR(0x5e2e86);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e2e8b:{NFSU2_TR(0x5e2e8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e2e92;}}
}
B5e2e8d:L5e2e8d:{c.instructions+=1;NFSU2_TR(0x5e2e8d);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e2e92:L5e2e92:{c.instructions+=6;NFSU2_TR(0x5e2e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e2e95:{NFSU2_TR(0x5e2e95);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e2e97:{NFSU2_TR(0x5e2e97);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+28))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+28)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+28))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5e2e9b:{NFSU2_TR(0x5e2e9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2e9f:{NFSU2_TR(0x5e2e9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2ea3:{NFSU2_TR(0x5e2ea3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5e3031u,5e3);}
}
B5e2ea9:L5e2ea9:{c.instructions+=4;NFSU2_TR(0x5e2ea9);
__builtin_memmove((R+0),(R+12),4);
}
B5e2eab:{NFSU2_TR(0x5e2eab);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B5e2eae:{NFSU2_TR(0x5e2eae);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2eb2:{NFSU2_TR(0x5e2eb2);
{goto L5e2ec0;}
}
B5e2eb4:L5e2eb4:{c.instructions+=2;NFSU2_TR(0x5e2eb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e2eb8:{NFSU2_TR(0x5e2eb8);
{goto L5e2ec0;}
}
B5e2ec0:L5e2ec0:{c.instructions+=6;NFSU2_TR(0x5e2ec0);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e2ec4:{NFSU2_TR(0x5e2ec4);
__builtin_memmove((R+8),(R+28),4);
}
B5e2ec6:{NFSU2_TR(0x5e2ec6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e2ec9:{NFSU2_TR(0x5e2ec9);
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
B5e2ecb:{NFSU2_TR(0x5e2ecb);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5e2ed2:{NFSU2_TR(0x5e2ed2);
if(r1(R+518)){{goto L5e2f29;}}
}
B5e2ed4:L5e2ed4:{c.instructions+=6;NFSU2_TR(0x5e2ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e2ed7:{NFSU2_TR(0x5e2ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e2eda:{NFSU2_TR(0x5e2eda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2edb:{NFSU2_TR(0x5e2edb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2edc:{NFSU2_TR(0x5e2edc);
__builtin_memmove((R+4),(R+24),4);
}
B5e2ede:{NFSU2_TR(0x5e2ede);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2ee3ull));
TAIL_STATIC(0x5d8b00u,5d8);
}
B5e2ee3:L5e2ee3:{c.instructions+=5;NFSU2_TR(0x5e2ee3);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e2ee6:{NFSU2_TR(0x5e2ee6);
__builtin_memmove((R+0),gp(0x88f2bc),1);
}
B5e2eeb:{NFSU2_TR(0x5e2eeb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2eed:{NFSU2_TR(0x5e2eed);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e2ef0:{NFSU2_TR(0x5e2ef0);
if(r1(R+518)){{goto L5e2f9d;}}
}
B5e2ef6:L5e2ef6:{c.instructions+=7;NFSU2_TR(0x5e2ef6);
{u32 ea_=u32(u32(8975028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e2efc:{NFSU2_TR(0x5e2efc);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5e2efe:{NFSU2_TR(0x5e2efe);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5e2f00:{NFSU2_TR(0x5e2f00);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5e2f02:{NFSU2_TR(0x5e2f02);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e2f04:{NFSU2_TR(0x5e2f04);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e2f07:{NFSU2_TR(0x5e2f07);
if(r1(R+514)){{goto L5e2f14;}}
}
B5e2f09:L5e2f09:{c.instructions+=2;NFSU2_TR(0x5e2f09);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e2f0f:{NFSU2_TR(0x5e2f0f);
{goto L5e2f9d;}
}
B5e2f14:L5e2f14:{c.instructions+=4;NFSU2_TR(0x5e2f14);
{u32 ea_=u32(u32(8975028u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e2f1a:{NFSU2_TR(0x5e2f1a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e2f1c:{NFSU2_TR(0x5e2f1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2f1f:{NFSU2_TR(0x5e2f1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e2f9d;}}
}
B5e2f21:L5e2f21:{c.instructions+=2;NFSU2_TR(0x5e2f21);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e2f27:{NFSU2_TR(0x5e2f27);
{goto L5e2f9d;}
}
B5e2f29:L5e2f29:{c.instructions+=15;NFSU2_TR(0x5e2f29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e2f2b:{NFSU2_TR(0x5e2f2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2f2f:{NFSU2_TR(0x5e2f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e2f32:{NFSU2_TR(0x5e2f32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e2f35:{NFSU2_TR(0x5e2f35);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2f39:{NFSU2_TR(0x5e2f39);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5e2f3d:{NFSU2_TR(0x5e2f3d);
u8 U[45];
w4(U+37,u32(u32(u32(0xdull))&u32(u32(0x1full))));
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
B5e2f40:{NFSU2_TR(0x5e2f40);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2f44:{NFSU2_TR(0x5e2f44);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2f45:{NFSU2_TR(0x5e2f45);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e2f49:{NFSU2_TR(0x5e2f49);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e2f4d:{NFSU2_TR(0x5e2f4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e2f4e:{NFSU2_TR(0x5e2f4e);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e2f54:{NFSU2_TR(0x5e2f54);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e2f58:{NFSU2_TR(0x5e2f58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e2f5dull));
TAIL_STATIC(0x43ce10u,43c);
}
B5e2f5d:L5e2f5d:{c.instructions+=20;NFSU2_TR(0x5e2f5d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5e2f61:{NFSU2_TR(0x5e2f61);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5e2f65:{NFSU2_TR(0x5e2f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e2f68:{NFSU2_TR(0x5e2f68);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2f6c:{NFSU2_TR(0x5e2f6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e2f6f:{NFSU2_TR(0x5e2f6f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e2f73:{NFSU2_TR(0x5e2f73);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e2f77:{NFSU2_TR(0x5e2f77);
{u32 ea_=u32(u32(8972912u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e2f7d:{NFSU2_TR(0x5e2f7d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e2f81:{NFSU2_TR(0x5e2f81);
{u32 ea_=u32(u32(8972912u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e2f87:{NFSU2_TR(0x5e2f87);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e2f8a:{NFSU2_TR(0x5e2f8a);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e2f8d:{NFSU2_TR(0x5e2f8d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e2f8f:{NFSU2_TR(0x5e2f8f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e2f91:{NFSU2_TR(0x5e2f91);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e2f93:{NFSU2_TR(0x5e2f93);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5e2f95:{NFSU2_TR(0x5e2f95);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e2f97:{NFSU2_TR(0x5e2f97);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5e2f99:{NFSU2_TR(0x5e2f99);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5e2f9b:{NFSU2_TR(0x5e2f9b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e2f9d:L5e2f9d:{c.instructions+=3;NFSU2_TR(0x5e2f9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e2fa1:{NFSU2_TR(0x5e2fa1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e2fa3:{NFSU2_TR(0x5e2fa3);
if(r1(R+518)){{goto L5e2fb2;}}
}
B5e2fa5:L5e2fa5:{c.instructions+=4;NFSU2_TR(0x5e2fa5);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e2fab:{NFSU2_TR(0x5e2fab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e2fad:{NFSU2_TR(0x5e2fad);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2fb0:{NFSU2_TR(0x5e2fb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5e3006u,5e3);}
}
B5e2fb2:L5e2fb2:{c.instructions+=2;NFSU2_TR(0x5e2fb2);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2fb5:{NFSU2_TR(0x5e2fb5);
if(r1(R+518)){{goto L5e2fc6;}}
}
B5e2fb7:L5e2fb7:{c.instructions+=4;NFSU2_TR(0x5e2fb7);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e2fbd:{NFSU2_TR(0x5e2fbd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e2fbf:{NFSU2_TR(0x5e2fbf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e2fc2:{NFSU2_TR(0x5e2fc2);
if(r1(R+514)){TAIL_STATIC(0x5e3008u,5e3);}
}
B5e2fc4:L5e2fc4:{c.instructions+=1;NFSU2_TR(0x5e2fc4);
{goto L5e2fc8;}
}
B5e2fc6:L5e2fc6:{c.instructions+=1;NFSU2_TR(0x5e2fc6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e2fc8:L5e2fc8:{c.instructions+=4;NFSU2_TR(0x5e2fc8);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e2fcc:{NFSU2_TR(0x5e2fcc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e2fce:{NFSU2_TR(0x5e2fce);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e2fd1:{NFSU2_TR(0x5e2fd1);
if(r1(R+514)){TAIL_STATIC(0x5e3008u,5e3);}
}
B5e2fd3:L5e2fd3:{c.instructions+=2;NFSU2_TR(0x5e2fd3);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2fd6:{NFSU2_TR(0x5e2fd6);
if(r1(R+518)){{goto L5e2fe0;}}
}
B5e2fd8:L5e2fd8:{c.instructions+=3;NFSU2_TR(0x5e2fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e2fdb:{NFSU2_TR(0x5e2fdb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2fde:{NFSU2_TR(0x5e2fde);
if(r1(R+518)){TAIL_STATIC(0x5e3008u,5e3);}
}
B5e2fe0:L5e2fe0:{c.instructions+=2;NFSU2_TR(0x5e2fe0);
u8 U[1];
w1(U+0,u8(u32(r1(R+13))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2fe3:{NFSU2_TR(0x5e2fe3);
if(r1(R+518)){{goto L5e2fee;}}
}
B5e2fe5:L5e2fe5:{c.instructions+=2;NFSU2_TR(0x5e2fe5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x2000000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5e2fec:{NFSU2_TR(0x5e2fec);
if(r1(R+518)){TAIL_STATIC(0x5e3008u,5e3);}
}
B5e2fee:L5e2fee:{c.instructions+=2;NFSU2_TR(0x5e2fee);
u8 U[1];
w1(U+0,u8(u32(r1(R+13))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e2ff1:{NFSU2_TR(0x5e2ff1);
if(r1(R+518)){{goto L5e2ffc;}}
}
B5e2ff3:L5e2ff3:{c.instructions+=2;NFSU2_TR(0x5e2ff3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x8000000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5e2ffa:{NFSU2_TR(0x5e2ffa);
if(r1(R+518)){TAIL_STATIC(0x5e3008u,5e3);}
}
B5e2ffc:L5e2ffc:{c.instructions+=1;NFSU2_TR(0x5e2ffc);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
TAIL_STATIC(0x5e3000u,5e3);
}
XIT:NFSU2_TR_EXIT(0x5e2,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
