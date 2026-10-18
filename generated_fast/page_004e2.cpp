#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_497(u8* __restrict R,Cpu& c);
u32 body_4a5(u8* __restrict R,Cpu& c);
u32 body_4b2(u8* __restrict R,Cpu& c);
u32 body_4b4(u8* __restrict R,Cpu& c);
u32 body_4cc(u8* __restrict R,Cpu& c);
u32 body_4cd(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_4e1(u8* __restrict R,Cpu& c);
u32 body_4e3(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_534(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_587(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_58e(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4e2,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4e2,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4e2(u8* __restrict R,Cpu& c);
u32 page_4e2(Cpu& c){return body_4e2(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4e2(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4e2001:goto L4e2001;
case 0x4e2004:c.instructions+=8;goto B4e2004;
case 0x4e2005:c.instructions+=7;goto B4e2005;
case 0x4e2007:c.instructions+=6;goto B4e2007;
case 0x4e2008:c.instructions+=5;goto B4e2008;
case 0x4e2009:c.instructions+=4;goto B4e2009;
case 0x4e2010:c.instructions+=3;goto B4e2010;
case 0x4e2012:c.instructions+=2;goto B4e2012;
case 0x4e2013:c.instructions+=1;goto B4e2013;
case 0x4e2030:goto L4e2030;
case 0x4e2031:c.instructions+=2;goto B4e2031;
case 0x4e2033:c.instructions+=1;goto B4e2033;
case 0x4e2038:goto L4e2038;
case 0x4e203d:c.instructions+=1;goto B4e203d;
case 0x4e203f:goto L4e203f;
case 0x4e2040:c.instructions+=1;goto B4e2040;
case 0x4e2045:goto L4e2045;
case 0x4e2048:goto L4e2048;
case 0x4e204a:c.instructions+=2;goto B4e204a;
case 0x4e204b:c.instructions+=1;goto B4e204b;
case 0x4e2050:goto L4e2050;
case 0x4e2052:c.instructions+=7;goto B4e2052;
case 0x4e2057:c.instructions+=6;goto B4e2057;
case 0x4e205d:c.instructions+=5;goto B4e205d;
case 0x4e205e:c.instructions+=4;goto B4e205e;
case 0x4e2065:c.instructions+=3;goto B4e2065;
case 0x4e2066:c.instructions+=2;goto B4e2066;
case 0x4e206b:c.instructions+=1;goto B4e206b;
case 0x4e2070:goto L4e2070;
case 0x4e2073:c.instructions+=4;goto B4e2073;
case 0x4e2077:c.instructions+=3;goto B4e2077;
case 0x4e2079:c.instructions+=2;goto B4e2079;
case 0x4e2081:c.instructions+=1;goto B4e2081;
case 0x4e2083:goto L4e2083;
case 0x4e2087:c.instructions+=3;goto B4e2087;
case 0x4e2088:c.instructions+=2;goto B4e2088;
case 0x4e208a:c.instructions+=1;goto B4e208a;
case 0x4e208f:goto L4e208f;
case 0x4e2093:c.instructions+=3;goto B4e2093;
case 0x4e209a:c.instructions+=2;goto B4e209a;
case 0x4e209d:c.instructions+=1;goto B4e209d;
case 0x4e209e:goto L4e209e;
case 0x4e20a2:c.instructions+=4;goto B4e20a2;
case 0x4e20a4:c.instructions+=3;goto B4e20a4;
case 0x4e20ab:c.instructions+=2;goto B4e20ab;
case 0x4e20ae:c.instructions+=1;goto B4e20ae;
case 0x4e20b0:goto L4e20b0;
case 0x4e20b1:c.instructions+=16;goto B4e20b1;
case 0x4e20b3:c.instructions+=15;goto B4e20b3;
case 0x4e20b6:c.instructions+=14;goto B4e20b6;
case 0x4e20b8:c.instructions+=13;goto B4e20b8;
case 0x4e20bd:c.instructions+=12;goto B4e20bd;
case 0x4e20c3:c.instructions+=11;goto B4e20c3;
case 0x4e20c4:c.instructions+=10;goto B4e20c4;
case 0x4e20cb:c.instructions+=9;goto B4e20cb;
case 0x4e20d1:c.instructions+=8;goto B4e20d1;
case 0x4e20d2:c.instructions+=7;goto B4e20d2;
case 0x4e20d4:c.instructions+=6;goto B4e20d4;
case 0x4e20d5:c.instructions+=5;goto B4e20d5;
case 0x4e20d9:c.instructions+=4;goto B4e20d9;
case 0x4e20df:c.instructions+=3;goto B4e20df;
case 0x4e20e6:c.instructions+=2;goto B4e20e6;
case 0x4e20f1:c.instructions+=1;goto B4e20f1;
case 0x4e20f3:goto L4e20f3;
case 0x4e20f6:c.instructions+=3;goto B4e20f6;
case 0x4e20fb:c.instructions+=2;goto B4e20fb;
case 0x4e20fc:c.instructions+=1;goto B4e20fc;
case 0x4e2101:goto L4e2101;
case 0x4e2104:c.instructions+=2;goto B4e2104;
case 0x4e2106:c.instructions+=1;goto B4e2106;
case 0x4e2108:goto L4e2108;
case 0x4e2112:c.instructions+=1;goto B4e2112;
case 0x4e2118:goto L4e2118;
case 0x4e211b:c.instructions+=3;goto B4e211b;
case 0x4e2120:c.instructions+=2;goto B4e2120;
case 0x4e2121:c.instructions+=1;goto B4e2121;
case 0x4e2126:goto L4e2126;
case 0x4e2129:c.instructions+=2;goto B4e2129;
case 0x4e212b:c.instructions+=1;goto B4e212b;
case 0x4e2131:goto L4e2131;
case 0x4e2135:c.instructions+=1;goto B4e2135;
case 0x4e213a:goto L4e213a;
case 0x4e2140:c.instructions+=4;goto B4e2140;
case 0x4e2141:c.instructions+=3;goto B4e2141;
case 0x4e2146:c.instructions+=2;goto B4e2146;
case 0x4e214e:c.instructions+=1;goto B4e214e;
case 0x4e2153:goto L4e2153;
case 0x4e2155:c.instructions+=6;goto B4e2155;
case 0x4e2157:c.instructions+=5;goto B4e2157;
case 0x4e215b:c.instructions+=4;goto B4e215b;
case 0x4e215c:c.instructions+=3;goto B4e215c;
case 0x4e215e:c.instructions+=2;goto B4e215e;
case 0x4e2160:c.instructions+=1;goto B4e2160;
case 0x4e2163:goto L4e2163;
case 0x4e2169:c.instructions+=4;goto B4e2169;
case 0x4e216b:c.instructions+=3;goto B4e216b;
case 0x4e216c:c.instructions+=2;goto B4e216c;
case 0x4e2171:c.instructions+=1;goto B4e2171;
case 0x4e2176:goto L4e2176;
case 0x4e217b:c.instructions+=1;goto B4e217b;
case 0x4e2180:goto L4e2180;
case 0x4e2183:c.instructions+=2;goto B4e2183;
case 0x4e2185:c.instructions+=1;goto B4e2185;
case 0x4e2187:goto L4e2187;
case 0x4e218c:c.instructions+=1;goto B4e218c;
case 0x4e2191:goto L4e2191;
case 0x4e2194:c.instructions+=2;goto B4e2194;
case 0x4e2196:c.instructions+=1;goto B4e2196;
case 0x4e2198:goto L4e2198;
case 0x4e219d:c.instructions+=1;goto B4e219d;
case 0x4e21a2:goto L4e21a2;
case 0x4e21a5:c.instructions+=2;goto B4e21a5;
case 0x4e21a7:c.instructions+=1;goto B4e21a7;
case 0x4e21a9:goto L4e21a9;
case 0x4e21ae:c.instructions+=1;goto B4e21ae;
case 0x4e21b3:goto L4e21b3;
case 0x4e21b6:c.instructions+=2;goto B4e21b6;
case 0x4e21b8:c.instructions+=1;goto B4e21b8;
case 0x4e21ba:goto L4e21ba;
case 0x4e21bd:c.instructions+=1;goto B4e21bd;
case 0x4e21bf:goto L4e21bf;
case 0x4e21c1:goto L4e21c1;
case 0x4e21c5:c.instructions+=3;goto B4e21c5;
case 0x4e21c6:c.instructions+=2;goto B4e21c6;
case 0x4e21cb:c.instructions+=1;goto B4e21cb;
case 0x4e21d0:goto L4e21d0;
case 0x4e21d2:c.instructions+=2;goto B4e21d2;
case 0x4e21dc:c.instructions+=1;goto B4e21dc;
case 0x4e21de:goto L4e21de;
case 0x4e21e0:c.instructions+=3;goto B4e21e0;
case 0x4e21e5:c.instructions+=2;goto B4e21e5;
case 0x4e21e7:c.instructions+=1;goto B4e21e7;
case 0x4e21ec:goto L4e21ec;
case 0x4e21f1:c.instructions+=2;goto B4e21f1;
case 0x4e21f3:c.instructions+=1;goto B4e21f3;
case 0x4e21f5:goto L4e21f5;
case 0x4e21f9:c.instructions+=2;goto B4e21f9;
case 0x4e21fa:c.instructions+=1;goto B4e21fa;
case 0x4e21ff:goto L4e21ff;
case 0x4e2201:c.instructions+=1;goto B4e2201;
case 0x4e2206:goto L4e2206;
case 0x4e2208:c.instructions+=2;goto B4e2208;
case 0x4e220a:c.instructions+=1;goto B4e220a;
case 0x4e220f:goto L4e220f;
case 0x4e2211:c.instructions+=1;goto B4e2211;
case 0x4e2216:goto L4e2216;
case 0x4e221d:c.instructions+=2;goto B4e221d;
case 0x4e2225:c.instructions+=1;goto B4e2225;
case 0x4e222a:goto L4e222a;
case 0x4e222f:c.instructions+=6;goto B4e222f;
case 0x4e2232:c.instructions+=5;goto B4e2232;
case 0x4e2238:c.instructions+=4;goto B4e2238;
case 0x4e223e:c.instructions+=3;goto B4e223e;
case 0x4e2244:c.instructions+=2;goto B4e2244;
case 0x4e224c:c.instructions+=1;goto B4e224c;
case 0x4e2251:goto L4e2251;
case 0x4e2253:c.instructions+=2;goto B4e2253;
case 0x4e225e:c.instructions+=1;goto B4e225e;
case 0x4e2263:goto L4e2263;
case 0x4e226a:c.instructions+=6;goto B4e226a;
case 0x4e226b:c.instructions+=5;goto B4e226b;
case 0x4e2272:c.instructions+=4;goto B4e2272;
case 0x4e2273:c.instructions+=3;goto B4e2273;
case 0x4e2275:c.instructions+=2;goto B4e2275;
case 0x4e2276:c.instructions+=1;goto B4e2276;
case 0x4e2280:goto L4e2280;
case 0x4e2287:c.instructions+=1;goto B4e2287;
case 0x4e2289:goto L4e2289;
case 0x4e228c:c.instructions+=4;goto B4e228c;
case 0x4e2290:c.instructions+=3;goto B4e2290;
case 0x4e2291:c.instructions+=2;goto B4e2291;
case 0x4e2293:c.instructions+=1;goto B4e2293;
case 0x4e2295:goto L4e2295;
case 0x4e2299:c.instructions+=2;goto B4e2299;
case 0x4e229e:c.instructions+=1;goto B4e229e;
case 0x4e22a0:goto L4e22a0;
case 0x4e22a2:goto L4e22a2;
case 0x4e22a7:c.instructions+=1;goto B4e22a7;
case 0x4e22a9:goto L4e22a9;
case 0x4e22ae:c.instructions+=1;goto B4e22ae;
case 0x4e22b0:goto L4e22b0;
case 0x4e22b2:c.instructions+=1;goto B4e22b2;
case 0x4e22b5:goto L4e22b5;
case 0x4e22ba:c.instructions+=1;goto B4e22ba;
case 0x4e22bd:goto L4e22bd;
case 0x4e22c2:c.instructions+=1;goto B4e22c2;
case 0x4e22c4:goto L4e22c4;
case 0x4e22c8:c.instructions+=4;goto B4e22c8;
case 0x4e22ca:c.instructions+=3;goto B4e22ca;
case 0x4e22cb:c.instructions+=2;goto B4e22cb;
case 0x4e22cc:c.instructions+=1;goto B4e22cc;
case 0x4e22d1:goto L4e22d1;
case 0x4e22d4:c.instructions+=1;goto B4e22d4;
case 0x4e22d7:goto L4e22d7;
case 0x4e22dc:c.instructions+=1;goto B4e22dc;
case 0x4e22e0:goto L4e22e0;
case 0x4e22e1:c.instructions+=14;goto B4e22e1;
case 0x4e22e3:c.instructions+=13;goto B4e22e3;
case 0x4e22e5:c.instructions+=12;goto B4e22e5;
case 0x4e22ea:c.instructions+=11;goto B4e22ea;
case 0x4e22f0:c.instructions+=10;goto B4e22f0;
case 0x4e22f1:c.instructions+=9;goto B4e22f1;
case 0x4e22f8:c.instructions+=8;goto B4e22f8;
case 0x4e22fb:c.instructions+=7;goto B4e22fb;
case 0x4e22fc:c.instructions+=6;goto B4e22fc;
case 0x4e22fd:c.instructions+=5;goto B4e22fd;
case 0x4e22fe:c.instructions+=4;goto B4e22fe;
case 0x4e2300:c.instructions+=3;goto B4e2300;
case 0x4e2303:c.instructions+=2;goto B4e2303;
case 0x4e2305:c.instructions+=1;goto B4e2305;
case 0x4e2307:goto L4e2307;
case 0x4e230a:c.instructions+=1;goto B4e230a;
case 0x4e230c:goto L4e230c;
case 0x4e2312:c.instructions+=3;goto B4e2312;
case 0x4e2317:c.instructions+=2;goto B4e2317;
case 0x4e231a:c.instructions+=1;goto B4e231a;
case 0x4e231c:goto L4e231c;
case 0x4e2323:goto L4e2323;
case 0x4e2326:c.instructions+=4;goto B4e2326;
case 0x4e2329:c.instructions+=3;goto B4e2329;
case 0x4e232b:c.instructions+=2;goto B4e232b;
case 0x4e232c:c.instructions+=1;goto B4e232c;
case 0x4e2331:goto L4e2331;
case 0x4e2333:c.instructions+=2;goto B4e2333;
case 0x4e2335:c.instructions+=1;goto B4e2335;
case 0x4e233a:goto L4e233a;
case 0x4e233c:c.instructions+=2;goto B4e233c;
case 0x4e233f:c.instructions+=1;goto B4e233f;
case 0x4e2345:goto L4e2345;
case 0x4e2347:c.instructions+=2;goto B4e2347;
case 0x4e2349:c.instructions+=1;goto B4e2349;
case 0x4e234c:goto L4e234c;
case 0x4e234f:c.instructions+=1;goto B4e234f;
case 0x4e2355:goto L4e2355;
case 0x4e235b:c.instructions+=4;goto B4e235b;
case 0x4e2361:c.instructions+=3;goto B4e2361;
case 0x4e2363:c.instructions+=2;goto B4e2363;
case 0x4e2366:c.instructions+=1;goto B4e2366;
case 0x4e2368:goto L4e2368;
case 0x4e236e:c.instructions+=2;goto B4e236e;
case 0x4e2371:c.instructions+=1;goto B4e2371;
case 0x4e2373:goto L4e2373;
case 0x4e2374:c.instructions+=1;goto B4e2374;
case 0x4e2379:goto L4e2379;
case 0x4e237c:c.instructions+=2;goto B4e237c;
case 0x4e237e:c.instructions+=1;goto B4e237e;
case 0x4e2380:goto L4e2380;
case 0x4e2383:c.instructions+=1;goto B4e2383;
case 0x4e2388:goto L4e2388;
case 0x4e238a:c.instructions+=1;goto B4e238a;
case 0x4e238c:goto L4e238c;
case 0x4e238f:c.instructions+=6;goto B4e238f;
case 0x4e2392:c.instructions+=5;goto B4e2392;
case 0x4e2395:c.instructions+=4;goto B4e2395;
case 0x4e2396:c.instructions+=3;goto B4e2396;
case 0x4e2397:c.instructions+=2;goto B4e2397;
case 0x4e2398:c.instructions+=1;goto B4e2398;
case 0x4e239d:goto L4e239d;
case 0x4e23a0:c.instructions+=2;goto B4e23a0;
case 0x4e23a2:c.instructions+=1;goto B4e23a2;
case 0x4e23a4:goto L4e23a4;
case 0x4e23a6:c.instructions+=1;goto B4e23a6;
case 0x4e23a8:goto L4e23a8;
case 0x4e23aa:goto L4e23aa;
case 0x4e23ad:c.instructions+=3;goto B4e23ad;
case 0x4e23b0:c.instructions+=2;goto B4e23b0;
case 0x4e23b1:c.instructions+=1;goto B4e23b1;
case 0x4e23b6:goto L4e23b6;
case 0x4e23b8:c.instructions+=1;goto B4e23b8;
case 0x4e23ba:goto L4e23ba;
case 0x4e23c0:c.instructions+=2;goto B4e23c0;
case 0x4e23c2:c.instructions+=1;goto B4e23c2;
case 0x4e23c4:goto L4e23c4;
case 0x4e23c6:c.instructions+=1;goto B4e23c6;
case 0x4e23c8:goto L4e23c8;
case 0x4e23cd:c.instructions+=1;goto B4e23cd;
case 0x4e23d2:goto L4e23d2;
case 0x4e23d5:c.instructions+=4;goto B4e23d5;
case 0x4e23d8:c.instructions+=3;goto B4e23d8;
case 0x4e23da:c.instructions+=2;goto B4e23da;
case 0x4e23e1:c.instructions+=1;goto B4e23e1;
case 0x4e23e3:goto L4e23e3;
case 0x4e23e6:c.instructions+=12;goto B4e23e6;
case 0x4e23e9:c.instructions+=11;goto B4e23e9;
case 0x4e23ec:c.instructions+=10;goto B4e23ec;
case 0x4e23ef:c.instructions+=9;goto B4e23ef;
case 0x4e23f1:c.instructions+=8;goto B4e23f1;
case 0x4e23f2:c.instructions+=7;goto B4e23f2;
case 0x4e23f5:c.instructions+=6;goto B4e23f5;
case 0x4e23f6:c.instructions+=5;goto B4e23f6;
case 0x4e23f9:c.instructions+=4;goto B4e23f9;
case 0x4e23fa:c.instructions+=3;goto B4e23fa;
case 0x4e23fb:c.instructions+=2;goto B4e23fb;
case 0x4e23fd:c.instructions+=1;goto B4e23fd;
case 0x4e2402:goto L4e2402;
case 0x4e2404:goto L4e2404;
case 0x4e2406:goto L4e2406;
case 0x4e2408:c.instructions+=2;goto B4e2408;
case 0x4e240f:c.instructions+=1;goto B4e240f;
case 0x4e2411:goto L4e2411;
case 0x4e2414:c.instructions+=1;goto B4e2414;
case 0x4e2416:goto L4e2416;
case 0x4e2418:goto L4e2418;
case 0x4e241b:c.instructions+=6;goto B4e241b;
case 0x4e241e:c.instructions+=5;goto B4e241e;
case 0x4e2420:c.instructions+=4;goto B4e2420;
case 0x4e2423:c.instructions+=3;goto B4e2423;
case 0x4e2426:c.instructions+=2;goto B4e2426;
case 0x4e2428:c.instructions+=1;goto B4e2428;
case 0x4e242b:goto L4e242b;
case 0x4e242e:c.instructions+=4;goto B4e242e;
case 0x4e2431:c.instructions+=3;goto B4e2431;
case 0x4e2432:c.instructions+=2;goto B4e2432;
case 0x4e2433:c.instructions+=1;goto B4e2433;
case 0x4e2438:goto L4e2438;
case 0x4e243a:c.instructions+=2;goto B4e243a;
case 0x4e243c:c.instructions+=1;goto B4e243c;
case 0x4e2442:goto L4e2442;
case 0x4e2445:c.instructions+=3;goto B4e2445;
case 0x4e244a:c.instructions+=2;goto B4e244a;
case 0x4e244c:c.instructions+=1;goto B4e244c;
case 0x4e2451:goto L4e2451;
case 0x4e2454:c.instructions+=3;goto B4e2454;
case 0x4e245b:c.instructions+=2;goto B4e245b;
case 0x4e245d:c.instructions+=1;goto B4e245d;
case 0x4e245f:goto L4e245f;
case 0x4e2461:c.instructions+=2;goto B4e2461;
case 0x4e2463:c.instructions+=1;goto B4e2463;
case 0x4e2465:goto L4e2465;
case 0x4e2468:c.instructions+=1;goto B4e2468;
case 0x4e246a:goto L4e246a;
case 0x4e246c:goto L4e246c;
case 0x4e246d:c.instructions+=4;goto B4e246d;
case 0x4e2473:c.instructions+=3;goto B4e2473;
case 0x4e2474:c.instructions+=2;goto B4e2474;
case 0x4e2479:c.instructions+=1;goto B4e2479;
case 0x4e247e:goto L4e247e;
case 0x4e2480:c.instructions+=2;goto B4e2480;
case 0x4e2482:c.instructions+=1;goto B4e2482;
case 0x4e2484:goto L4e2484;
case 0x4e2487:c.instructions+=1;goto B4e2487;
case 0x4e2489:goto L4e2489;
case 0x4e248b:goto L4e248b;
case 0x4e248d:c.instructions+=5;goto B4e248d;
case 0x4e2490:c.instructions+=4;goto B4e2490;
case 0x4e2493:c.instructions+=3;goto B4e2493;
case 0x4e249a:c.instructions+=2;goto B4e249a;
case 0x4e249d:c.instructions+=1;goto B4e249d;
case 0x4e249f:goto L4e249f;
case 0x4e24a2:c.instructions+=1;goto B4e24a2;
case 0x4e24a4:goto L4e24a4;
case 0x4e24a6:goto L4e24a6;
case 0x4e24a8:c.instructions+=1;goto B4e24a8;
case 0x4e24aa:goto L4e24aa;
case 0x4e24ad:c.instructions+=1;goto B4e24ad;
case 0x4e24af:goto L4e24af;
case 0x4e24b1:goto L4e24b1;
case 0x4e24b3:c.instructions+=1;goto B4e24b3;
case 0x4e24b5:goto L4e24b5;
case 0x4e24b8:c.instructions+=2;goto B4e24b8;
case 0x4e24be:c.instructions+=1;goto B4e24be;
case 0x4e24c0:goto L4e24c0;
case 0x4e24c3:c.instructions+=3;goto B4e24c3;
case 0x4e24c6:c.instructions+=2;goto B4e24c6;
case 0x4e24c8:c.instructions+=1;goto B4e24c8;
case 0x4e24ca:goto L4e24ca;
case 0x4e24cd:c.instructions+=1;goto B4e24cd;
case 0x4e24cf:goto L4e24cf;
case 0x4e24d2:goto L4e24d2;
case 0x4e24d4:c.instructions+=1;goto B4e24d4;
case 0x4e24d6:goto L4e24d6;
case 0x4e24d9:c.instructions+=1;goto B4e24d9;
case 0x4e24db:goto L4e24db;
case 0x4e24dd:goto L4e24dd;
case 0x4e24e0:c.instructions+=2;goto B4e24e0;
case 0x4e24e2:c.instructions+=1;goto B4e24e2;
case 0x4e24e4:goto L4e24e4;
case 0x4e24eb:goto L4e24eb;
case 0x4e24f1:c.instructions+=4;goto B4e24f1;
case 0x4e24f2:c.instructions+=3;goto B4e24f2;
case 0x4e24f3:c.instructions+=2;goto B4e24f3;
case 0x4e24f8:c.instructions+=1;goto B4e24f8;
case 0x4e24fd:goto L4e24fd;
case 0x4e2500:c.instructions+=1;goto B4e2500;
case 0x4e2505:goto L4e2505;
case 0x4e250a:c.instructions+=2;goto B4e250a;
case 0x4e250c:c.instructions+=1;goto B4e250c;
case 0x4e2511:goto L4e2511;
case 0x4e2514:c.instructions+=2;goto B4e2514;
case 0x4e2516:c.instructions+=1;goto B4e2516;
case 0x4e2518:goto L4e2518;
case 0x4e251d:c.instructions+=1;goto B4e251d;
case 0x4e2522:goto L4e2522;
case 0x4e2525:c.instructions+=2;goto B4e2525;
case 0x4e2527:c.instructions+=1;goto B4e2527;
case 0x4e2529:goto L4e2529;
case 0x4e252e:c.instructions+=1;goto B4e252e;
case 0x4e2533:goto L4e2533;
case 0x4e2536:c.instructions+=2;goto B4e2536;
case 0x4e2538:c.instructions+=1;goto B4e2538;
case 0x4e253a:goto L4e253a;
case 0x4e253f:c.instructions+=1;goto B4e253f;
case 0x4e2544:goto L4e2544;
case 0x4e2547:c.instructions+=2;goto B4e2547;
case 0x4e2549:c.instructions+=1;goto B4e2549;
case 0x4e254b:goto L4e254b;
case 0x4e254e:c.instructions+=1;goto B4e254e;
case 0x4e2550:goto L4e2550;
case 0x4e2552:goto L4e2552;
case 0x4e2553:c.instructions+=2;goto B4e2553;
case 0x4e2558:c.instructions+=1;goto B4e2558;
case 0x4e255d:goto L4e255d;
case 0x4e255f:c.instructions+=2;goto B4e255f;
case 0x4e2569:c.instructions+=1;goto B4e2569;
case 0x4e256b:goto L4e256b;
case 0x4e256d:c.instructions+=3;goto B4e256d;
case 0x4e2572:c.instructions+=2;goto B4e2572;
case 0x4e2574:c.instructions+=1;goto B4e2574;
case 0x4e2579:goto L4e2579;
case 0x4e257c:c.instructions+=7;goto B4e257c;
case 0x4e257d:c.instructions+=6;goto B4e257d;
case 0x4e257e:c.instructions+=5;goto B4e257e;
case 0x4e257f:c.instructions+=4;goto B4e257f;
case 0x4e2586:c.instructions+=3;goto B4e2586;
case 0x4e2588:c.instructions+=2;goto B4e2588;
case 0x4e2589:c.instructions+=1;goto B4e2589;
case 0x4e2590:goto L4e2590;
case 0x4e2591:c.instructions+=16;goto B4e2591;
case 0x4e2593:c.instructions+=15;goto B4e2593;
case 0x4e2596:c.instructions+=14;goto B4e2596;
case 0x4e2598:c.instructions+=13;goto B4e2598;
case 0x4e259d:c.instructions+=12;goto B4e259d;
case 0x4e25a3:c.instructions+=11;goto B4e25a3;
case 0x4e25a4:c.instructions+=10;goto B4e25a4;
case 0x4e25ab:c.instructions+=9;goto B4e25ab;
case 0x4e25b1:c.instructions+=8;goto B4e25b1;
case 0x4e25b2:c.instructions+=7;goto B4e25b2;
case 0x4e25b4:c.instructions+=6;goto B4e25b4;
case 0x4e25b7:c.instructions+=5;goto B4e25b7;
case 0x4e25bd:c.instructions+=4;goto B4e25bd;
case 0x4e25c0:c.instructions+=3;goto B4e25c0;
case 0x4e25c1:c.instructions+=2;goto B4e25c1;
case 0x4e25c3:c.instructions+=1;goto B4e25c3;
case 0x4e25c9:goto L4e25c9;
case 0x4e25cc:c.instructions+=2;goto B4e25cc;
case 0x4e25ce:c.instructions+=1;goto B4e25ce;
case 0x4e25d0:goto L4e25d0;
case 0x4e25d3:c.instructions+=1;goto B4e25d3;
case 0x4e25d5:goto L4e25d5;
case 0x4e25d7:goto L4e25d7;
case 0x4e25d9:c.instructions+=1;goto B4e25d9;
case 0x4e25df:goto L4e25df;
case 0x4e25e2:c.instructions+=5;goto B4e25e2;
case 0x4e25e4:c.instructions+=4;goto B4e25e4;
case 0x4e25e9:c.instructions+=3;goto B4e25e9;
case 0x4e25ee:c.instructions+=2;goto B4e25ee;
case 0x4e25ef:c.instructions+=1;goto B4e25ef;
case 0x4e25f4:goto L4e25f4;
case 0x4e25f7:c.instructions+=4;goto B4e25f7;
case 0x4e25fa:c.instructions+=3;goto B4e25fa;
case 0x4e25fd:c.instructions+=2;goto B4e25fd;
case 0x4e25ff:c.instructions+=1;goto B4e25ff;
case 0x4e2601:goto L4e2601;
case 0x4e2604:c.instructions+=1;goto B4e2604;
case 0x4e2606:goto L4e2606;
case 0x4e2608:goto L4e2608;
case 0x4e260b:c.instructions+=6;goto B4e260b;
case 0x4e260e:c.instructions+=5;goto B4e260e;
case 0x4e2614:c.instructions+=4;goto B4e2614;
case 0x4e2615:c.instructions+=3;goto B4e2615;
case 0x4e2616:c.instructions+=2;goto B4e2616;
case 0x4e261b:c.instructions+=1;goto B4e261b;
case 0x4e2620:goto L4e2620;
case 0x4e2623:c.instructions+=4;goto B4e2623;
case 0x4e2624:c.instructions+=3;goto B4e2624;
case 0x4e2629:c.instructions+=2;goto B4e2629;
case 0x4e262c:c.instructions+=1;goto B4e262c;
case 0x4e2631:goto L4e2631;
case 0x4e2634:c.instructions+=2;goto B4e2634;
case 0x4e2636:c.instructions+=1;goto B4e2636;
case 0x4e2638:goto L4e2638;
case 0x4e263d:c.instructions+=1;goto B4e263d;
case 0x4e2642:goto L4e2642;
case 0x4e2645:c.instructions+=2;goto B4e2645;
case 0x4e264f:c.instructions+=1;goto B4e264f;
case 0x4e2654:goto L4e2654;
case 0x4e2659:c.instructions+=1;goto B4e2659;
case 0x4e265e:goto L4e265e;
case 0x4e2661:c.instructions+=2;goto B4e2661;
case 0x4e2663:c.instructions+=1;goto B4e2663;
case 0x4e2665:goto L4e2665;
case 0x4e266a:c.instructions+=1;goto B4e266a;
case 0x4e266f:goto L4e266f;
case 0x4e2672:c.instructions+=2;goto B4e2672;
case 0x4e2674:c.instructions+=1;goto B4e2674;
case 0x4e2676:goto L4e2676;
case 0x4e2679:c.instructions+=2;goto B4e2679;
case 0x4e2683:c.instructions+=1;goto B4e2683;
case 0x4e2688:goto L4e2688;
case 0x4e268a:c.instructions+=2;goto B4e268a;
case 0x4e2694:c.instructions+=1;goto B4e2694;
case 0x4e2699:goto L4e2699;
case 0x4e269f:c.instructions+=1;goto B4e269f;
case 0x4e26a5:goto L4e26a5;
case 0x4e26a8:c.instructions+=2;goto B4e26a8;
case 0x4e26aa:c.instructions+=1;goto B4e26aa;
case 0x4e26ac:goto L4e26ac;
case 0x4e26af:c.instructions+=1;goto B4e26af;
case 0x4e26b1:goto L4e26b1;
case 0x4e26b3:goto L4e26b3;
case 0x4e26b5:c.instructions+=1;goto B4e26b5;
case 0x4e26bb:goto L4e26bb;
case 0x4e26be:c.instructions+=5;goto B4e26be;
case 0x4e26c0:c.instructions+=4;goto B4e26c0;
case 0x4e26c5:c.instructions+=3;goto B4e26c5;
case 0x4e26ca:c.instructions+=2;goto B4e26ca;
case 0x4e26cb:c.instructions+=1;goto B4e26cb;
case 0x4e26d0:goto L4e26d0;
case 0x4e26d3:c.instructions+=4;goto B4e26d3;
case 0x4e26d6:c.instructions+=3;goto B4e26d6;
case 0x4e26d9:c.instructions+=2;goto B4e26d9;
case 0x4e26db:c.instructions+=1;goto B4e26db;
case 0x4e26dd:goto L4e26dd;
case 0x4e26e0:c.instructions+=1;goto B4e26e0;
case 0x4e26e2:goto L4e26e2;
case 0x4e26e4:goto L4e26e4;
case 0x4e26e7:c.instructions+=6;goto B4e26e7;
case 0x4e26ea:c.instructions+=5;goto B4e26ea;
case 0x4e26f0:c.instructions+=4;goto B4e26f0;
case 0x4e26f1:c.instructions+=3;goto B4e26f1;
case 0x4e26f2:c.instructions+=2;goto B4e26f2;
case 0x4e26f7:c.instructions+=1;goto B4e26f7;
case 0x4e26fc:goto L4e26fc;
case 0x4e26ff:c.instructions+=4;goto B4e26ff;
case 0x4e2700:c.instructions+=3;goto B4e2700;
case 0x4e2705:c.instructions+=2;goto B4e2705;
case 0x4e2708:c.instructions+=1;goto B4e2708;
case 0x4e270d:goto L4e270d;
case 0x4e2710:c.instructions+=2;goto B4e2710;
case 0x4e2712:c.instructions+=1;goto B4e2712;
case 0x4e2714:goto L4e2714;
case 0x4e2719:c.instructions+=1;goto B4e2719;
case 0x4e271e:goto L4e271e;
case 0x4e2721:c.instructions+=1;goto B4e2721;
case 0x4e2723:goto L4e2723;
case 0x4e2728:c.instructions+=1;goto B4e2728;
case 0x4e272d:goto L4e272d;
case 0x4e2730:c.instructions+=2;goto B4e2730;
case 0x4e2732:c.instructions+=1;goto B4e2732;
case 0x4e2734:goto L4e2734;
case 0x4e2739:c.instructions+=1;goto B4e2739;
case 0x4e273e:goto L4e273e;
case 0x4e2741:c.instructions+=2;goto B4e2741;
case 0x4e2743:c.instructions+=1;goto B4e2743;
case 0x4e2745:goto L4e2745;
case 0x4e2748:c.instructions+=1;goto B4e2748;
case 0x4e274a:goto L4e274a;
case 0x4e274c:goto L4e274c;
case 0x4e2756:goto L4e2756;
case 0x4e2759:c.instructions+=2;goto B4e2759;
case 0x4e275b:c.instructions+=1;goto B4e275b;
case 0x4e2761:goto L4e2761;
case 0x4e2767:c.instructions+=3;goto B4e2767;
case 0x4e276d:c.instructions+=2;goto B4e276d;
case 0x4e276f:c.instructions+=1;goto B4e276f;
case 0x4e2775:goto L4e2775;
case 0x4e2777:c.instructions+=3;goto B4e2777;
case 0x4e277d:c.instructions+=2;goto B4e277d;
case 0x4e2782:c.instructions+=1;goto B4e2782;
case 0x4e2787:goto L4e2787;
case 0x4e278a:c.instructions+=2;goto B4e278a;
case 0x4e278c:c.instructions+=1;goto B4e278c;
case 0x4e278e:goto L4e278e;
case 0x4e2793:c.instructions+=1;goto B4e2793;
case 0x4e2798:goto L4e2798;
case 0x4e279b:c.instructions+=1;goto B4e279b;
case 0x4e279d:goto L4e279d;
case 0x4e27a2:c.instructions+=1;goto B4e27a2;
case 0x4e27a7:goto L4e27a7;
case 0x4e27aa:c.instructions+=2;goto B4e27aa;
case 0x4e27ac:c.instructions+=1;goto B4e27ac;
case 0x4e27ae:goto L4e27ae;
case 0x4e27b3:c.instructions+=1;goto B4e27b3;
case 0x4e27b8:goto L4e27b8;
case 0x4e27bb:c.instructions+=2;goto B4e27bb;
case 0x4e27bd:c.instructions+=1;goto B4e27bd;
case 0x4e27bf:goto L4e27bf;
case 0x4e27c2:goto L4e27c2;
case 0x4e27c4:c.instructions+=1;goto B4e27c4;
case 0x4e27c6:goto L4e27c6;
case 0x4e27c7:c.instructions+=2;goto B4e27c7;
case 0x4e27c9:c.instructions+=1;goto B4e27c9;
case 0x4e27ce:goto L4e27ce;
case 0x4e27d5:c.instructions+=1;goto B4e27d5;
case 0x4e27d7:goto L4e27d7;
case 0x4e27da:c.instructions+=4;goto B4e27da;
case 0x4e27e0:c.instructions+=3;goto B4e27e0;
case 0x4e27e1:c.instructions+=2;goto B4e27e1;
case 0x4e27e6:c.instructions+=1;goto B4e27e6;
case 0x4e27eb:goto L4e27eb;
case 0x4e27ec:c.instructions+=2;goto B4e27ec;
case 0x4e27ee:c.instructions+=1;goto B4e27ee;
case 0x4e27f3:goto L4e27f3;
case 0x4e27f9:c.instructions+=2;goto B4e27f9;
case 0x4e27ff:c.instructions+=1;goto B4e27ff;
case 0x4e2804:goto L4e2804;
case 0x4e2808:c.instructions+=1;goto B4e2808;
case 0x4e280d:goto L4e280d;
case 0x4e2810:c.instructions+=9;goto B4e2810;
case 0x4e2816:c.instructions+=8;goto B4e2816;
case 0x4e281c:c.instructions+=7;goto B4e281c;
case 0x4e281e:c.instructions+=6;goto B4e281e;
case 0x4e2820:c.instructions+=5;goto B4e2820;
case 0x4e2822:c.instructions+=4;goto B4e2822;
case 0x4e2823:c.instructions+=3;goto B4e2823;
case 0x4e2827:c.instructions+=2;goto B4e2827;
case 0x4e2832:c.instructions+=1;goto B4e2832;
case 0x4e2837:goto L4e2837;
case 0x4e2839:c.instructions+=2;goto B4e2839;
case 0x4e283d:c.instructions+=1;goto B4e283d;
case 0x4e2842:goto L4e2842;
case 0x4e2846:c.instructions+=1;goto B4e2846;
case 0x4e284b:goto L4e284b;
case 0x4e284f:c.instructions+=1;goto B4e284f;
case 0x4e2854:goto L4e2854;
case 0x4e2859:c.instructions+=1;goto B4e2859;
case 0x4e285e:goto L4e285e;
case 0x4e2861:c.instructions+=2;goto B4e2861;
case 0x4e2863:c.instructions+=1;goto B4e2863;
case 0x4e2865:goto L4e2865;
case 0x4e286a:c.instructions+=1;goto B4e286a;
case 0x4e286f:goto L4e286f;
case 0x4e2872:c.instructions+=2;goto B4e2872;
case 0x4e2874:c.instructions+=1;goto B4e2874;
case 0x4e2876:goto L4e2876;
case 0x4e287b:c.instructions+=1;goto B4e287b;
case 0x4e2880:goto L4e2880;
case 0x4e2883:c.instructions+=2;goto B4e2883;
case 0x4e2885:c.instructions+=1;goto B4e2885;
case 0x4e2887:goto L4e2887;
case 0x4e288c:c.instructions+=1;goto B4e288c;
case 0x4e2891:goto L4e2891;
case 0x4e2894:c.instructions+=2;goto B4e2894;
case 0x4e2896:c.instructions+=1;goto B4e2896;
case 0x4e2898:goto L4e2898;
case 0x4e289b:c.instructions+=1;goto B4e289b;
case 0x4e289d:goto L4e289d;
case 0x4e289f:goto L4e289f;
case 0x4e28a3:c.instructions+=3;goto B4e28a3;
case 0x4e28a4:c.instructions+=2;goto B4e28a4;
case 0x4e28a9:c.instructions+=1;goto B4e28a9;
case 0x4e28ae:goto L4e28ae;
case 0x4e28b0:c.instructions+=2;goto B4e28b0;
case 0x4e28ba:c.instructions+=1;goto B4e28ba;
case 0x4e28bc:goto L4e28bc;
case 0x4e28be:c.instructions+=3;goto B4e28be;
case 0x4e28c3:c.instructions+=2;goto B4e28c3;
case 0x4e28c5:c.instructions+=1;goto B4e28c5;
case 0x4e28ca:goto L4e28ca;
case 0x4e28d1:c.instructions+=2;goto B4e28d1;
case 0x4e28dc:c.instructions+=1;goto B4e28dc;
case 0x4e28e1:goto L4e28e1;
case 0x4e28e3:c.instructions+=1;goto B4e28e3;
case 0x4e28e8:goto L4e28e8;
case 0x4e28ef:c.instructions+=6;goto B4e28ef;
case 0x4e28f0:c.instructions+=5;goto B4e28f0;
case 0x4e28f7:c.instructions+=4;goto B4e28f7;
case 0x4e28f8:c.instructions+=3;goto B4e28f8;
case 0x4e28fa:c.instructions+=2;goto B4e28fa;
case 0x4e28fb:c.instructions+=1;goto B4e28fb;
case 0x4e2900:goto L4e2900;
case 0x4e2902:c.instructions+=19;goto B4e2902;
case 0x4e2907:c.instructions+=18;goto B4e2907;
case 0x4e290d:c.instructions+=17;goto B4e290d;
case 0x4e290e:c.instructions+=16;goto B4e290e;
case 0x4e2915:c.instructions+=15;goto B4e2915;
case 0x4e2916:c.instructions+=14;goto B4e2916;
case 0x4e2917:c.instructions+=13;goto B4e2917;
case 0x4e2918:c.instructions+=12;goto B4e2918;
case 0x4e2919:c.instructions+=11;goto B4e2919;
case 0x4e291b:c.instructions+=10;goto B4e291b;
case 0x4e291e:c.instructions+=9;goto B4e291e;
case 0x4e2924:c.instructions+=8;goto B4e2924;
case 0x4e2928:c.instructions+=7;goto B4e2928;
case 0x4e292a:c.instructions+=6;goto B4e292a;
case 0x4e292d:c.instructions+=5;goto B4e292d;
case 0x4e2932:c.instructions+=4;goto B4e2932;
case 0x4e2933:c.instructions+=3;goto B4e2933;
case 0x4e293b:c.instructions+=2;goto B4e293b;
case 0x4e293d:c.instructions+=1;goto B4e293d;
case 0x4e2942:goto L4e2942;
case 0x4e2944:c.instructions+=1;goto B4e2944;
case 0x4e2946:goto L4e2946;
case 0x4e2948:c.instructions+=1;goto B4e2948;
case 0x4e294d:goto L4e294d;
case 0x4e2950:c.instructions+=2;goto B4e2950;
case 0x4e2952:c.instructions+=1;goto B4e2952;
case 0x4e2954:goto L4e2954;
case 0x4e2957:c.instructions+=3;goto B4e2957;
case 0x4e295e:c.instructions+=2;goto B4e295e;
case 0x4e2965:c.instructions+=1;goto B4e2965;
case 0x4e2967:goto L4e2967;
case 0x4e2969:goto L4e2969;
case 0x4e296c:c.instructions+=4;goto B4e296c;
case 0x4e296e:c.instructions+=3;goto B4e296e;
case 0x4e2971:c.instructions+=2;goto B4e2971;
case 0x4e2974:c.instructions+=1;goto B4e2974;
case 0x4e2976:goto L4e2976;
case 0x4e297b:c.instructions+=4;goto B4e297b;
case 0x4e297c:c.instructions+=3;goto B4e297c;
case 0x4e297e:c.instructions+=2;goto B4e297e;
case 0x4e2980:c.instructions+=1;goto B4e2980;
case 0x4e2985:goto L4e2985;
case 0x4e2987:c.instructions+=1;goto B4e2987;
case 0x4e2989:goto L4e2989;
case 0x4e298b:c.instructions+=1;goto B4e298b;
case 0x4e2990:goto L4e2990;
case 0x4e2993:c.instructions+=2;goto B4e2993;
case 0x4e2995:c.instructions+=1;goto B4e2995;
case 0x4e2997:goto L4e2997;
case 0x4e299a:c.instructions+=3;goto B4e299a;
case 0x4e29a1:c.instructions+=2;goto B4e29a1;
case 0x4e29a8:c.instructions+=1;goto B4e29a8;
case 0x4e29aa:goto L4e29aa;
case 0x4e29ac:goto L4e29ac;
case 0x4e29af:c.instructions+=4;goto B4e29af;
case 0x4e29b1:c.instructions+=3;goto B4e29b1;
case 0x4e29b4:c.instructions+=2;goto B4e29b4;
case 0x4e29b7:c.instructions+=1;goto B4e29b7;
case 0x4e29b9:goto L4e29b9;
case 0x4e29be:c.instructions+=4;goto B4e29be;
case 0x4e29bf:c.instructions+=3;goto B4e29bf;
case 0x4e29c1:c.instructions+=2;goto B4e29c1;
case 0x4e29c3:c.instructions+=1;goto B4e29c3;
case 0x4e29c8:goto L4e29c8;
case 0x4e29ca:c.instructions+=1;goto B4e29ca;
case 0x4e29cc:goto L4e29cc;
case 0x4e29ce:c.instructions+=1;goto B4e29ce;
case 0x4e29d3:goto L4e29d3;
case 0x4e29d6:c.instructions+=2;goto B4e29d6;
case 0x4e29d8:c.instructions+=1;goto B4e29d8;
case 0x4e29da:goto L4e29da;
case 0x4e29dd:c.instructions+=3;goto B4e29dd;
case 0x4e29e4:c.instructions+=2;goto B4e29e4;
case 0x4e29eb:c.instructions+=1;goto B4e29eb;
case 0x4e29ed:goto L4e29ed;
case 0x4e29ef:goto L4e29ef;
case 0x4e29f2:c.instructions+=4;goto B4e29f2;
case 0x4e29f4:c.instructions+=3;goto B4e29f4;
case 0x4e29f7:c.instructions+=2;goto B4e29f7;
case 0x4e29fa:c.instructions+=1;goto B4e29fa;
case 0x4e29fc:goto L4e29fc;
case 0x4e2a00:c.instructions+=11;goto B4e2a00;
case 0x4e2a04:c.instructions+=10;goto B4e2a04;
case 0x4e2a07:c.instructions+=9;goto B4e2a07;
case 0x4e2a0a:c.instructions+=8;goto B4e2a0a;
case 0x4e2a0e:c.instructions+=7;goto B4e2a0e;
case 0x4e2a10:c.instructions+=6;goto B4e2a10;
case 0x4e2a11:c.instructions+=5;goto B4e2a11;
case 0x4e2a12:c.instructions+=4;goto B4e2a12;
case 0x4e2a13:c.instructions+=3;goto B4e2a13;
case 0x4e2a1a:c.instructions+=2;goto B4e2a1a;
case 0x4e2a1d:c.instructions+=1;goto B4e2a1d;
case 0x4e2a20:goto L4e2a20;
case 0x4e2a21:c.instructions+=5;goto B4e2a21;
case 0x4e2a24:c.instructions+=4;goto B4e2a24;
case 0x4e2a2a:c.instructions+=3;goto B4e2a2a;
case 0x4e2a2c:c.instructions+=2;goto B4e2a2c;
case 0x4e2a2e:c.instructions+=1;goto B4e2a2e;
case 0x4e2a30:goto L4e2a30;
case 0x4e2a32:c.instructions+=5;goto B4e2a32;
case 0x4e2a35:c.instructions+=4;goto B4e2a35;
case 0x4e2a37:c.instructions+=3;goto B4e2a37;
case 0x4e2a38:c.instructions+=2;goto B4e2a38;
case 0x4e2a3b:c.instructions+=1;goto B4e2a3b;
case 0x4e2a40:goto L4e2a40;
case 0x4e2a42:c.instructions+=3;goto B4e2a42;
case 0x4e2a45:c.instructions+=2;goto B4e2a45;
case 0x4e2a47:c.instructions+=1;goto B4e2a47;
case 0x4e2a49:goto L4e2a49;
case 0x4e2a4a:c.instructions+=1;goto B4e2a4a;
case 0x4e2a50:goto L4e2a50;
case 0x4e2a52:c.instructions+=11;goto B4e2a52;
case 0x4e2a57:c.instructions+=10;goto B4e2a57;
case 0x4e2a5d:c.instructions+=9;goto B4e2a5d;
case 0x4e2a5e:c.instructions+=8;goto B4e2a5e;
case 0x4e2a65:c.instructions+=7;goto B4e2a65;
case 0x4e2a66:c.instructions+=6;goto B4e2a66;
case 0x4e2a6a:c.instructions+=5;goto B4e2a6a;
case 0x4e2a6b:c.instructions+=4;goto B4e2a6b;
case 0x4e2a6d:c.instructions+=3;goto B4e2a6d;
case 0x4e2a6e:c.instructions+=2;goto B4e2a6e;
case 0x4e2a72:c.instructions+=1;goto B4e2a72;
case 0x4e2a77:goto L4e2a77;
case 0x4e2a79:c.instructions+=3;goto B4e2a79;
case 0x4e2a81:c.instructions+=2;goto B4e2a81;
case 0x4e2a87:c.instructions+=1;goto B4e2a87;
case 0x4e2a8c:goto L4e2a8c;
case 0x4e2a8e:c.instructions+=1;goto B4e2a8e;
case 0x4e2a93:goto L4e2a93;
case 0x4e2a98:c.instructions+=2;goto B4e2a98;
case 0x4e2a9b:c.instructions+=1;goto B4e2a9b;
case 0x4e2aa1:goto L4e2aa1;
case 0x4e2aa6:c.instructions+=1;goto B4e2aa6;
case 0x4e2aac:goto L4e2aac;
case 0x4e2aaf:c.instructions+=1;goto B4e2aaf;
case 0x4e2ab1:goto L4e2ab1;
case 0x4e2ab4:c.instructions+=5;goto B4e2ab4;
case 0x4e2ab6:c.instructions+=4;goto B4e2ab6;
case 0x4e2abb:c.instructions+=3;goto B4e2abb;
case 0x4e2ac0:c.instructions+=2;goto B4e2ac0;
case 0x4e2ac1:c.instructions+=1;goto B4e2ac1;
case 0x4e2ac6:goto L4e2ac6;
case 0x4e2ac9:c.instructions+=3;goto B4e2ac9;
case 0x4e2ace:c.instructions+=2;goto B4e2ace;
case 0x4e2acf:c.instructions+=1;goto B4e2acf;
case 0x4e2ad4:goto L4e2ad4;
case 0x4e2ad5:c.instructions+=1;goto B4e2ad5;
case 0x4e2ada:goto L4e2ada;
case 0x4e2add:c.instructions+=5;goto B4e2add;
case 0x4e2ae0:c.instructions+=4;goto B4e2ae0;
case 0x4e2ae5:c.instructions+=3;goto B4e2ae5;
case 0x4e2aea:c.instructions+=2;goto B4e2aea;
case 0x4e2aeb:c.instructions+=1;goto B4e2aeb;
case 0x4e2af0:goto L4e2af0;
case 0x4e2af3:c.instructions+=2;goto B4e2af3;
case 0x4e2af4:c.instructions+=1;goto B4e2af4;
case 0x4e2af9:goto L4e2af9;
case 0x4e2afc:c.instructions+=6;goto B4e2afc;
case 0x4e2afe:c.instructions+=5;goto B4e2afe;
case 0x4e2aff:c.instructions+=4;goto B4e2aff;
case 0x4e2b03:c.instructions+=3;goto B4e2b03;
case 0x4e2b0a:c.instructions+=2;goto B4e2b0a;
case 0x4e2b0d:c.instructions+=1;goto B4e2b0d;
case 0x4e2b10:goto L4e2b10;
case 0x4e2b13:c.instructions+=4;goto B4e2b13;
case 0x4e2b18:c.instructions+=3;goto B4e2b18;
case 0x4e2b1d:c.instructions+=2;goto B4e2b1d;
case 0x4e2b1e:c.instructions+=1;goto B4e2b1e;
case 0x4e2b23:goto L4e2b23;
case 0x4e2b26:c.instructions+=2;goto B4e2b26;
case 0x4e2b27:c.instructions+=1;goto B4e2b27;
case 0x4e2b2c:goto L4e2b2c;
case 0x4e2b2f:c.instructions+=5;goto B4e2b2f;
case 0x4e2b31:c.instructions+=4;goto B4e2b31;
case 0x4e2b36:c.instructions+=3;goto B4e2b36;
case 0x4e2b3b:c.instructions+=2;goto B4e2b3b;
case 0x4e2b3c:c.instructions+=1;goto B4e2b3c;
case 0x4e2b41:goto L4e2b41;
case 0x4e2b44:c.instructions+=3;goto B4e2b44;
case 0x4e2b49:c.instructions+=2;goto B4e2b49;
case 0x4e2b4a:c.instructions+=1;goto B4e2b4a;
case 0x4e2b4f:goto L4e2b4f;
case 0x4e2b50:c.instructions+=1;goto B4e2b50;
case 0x4e2b55:goto L4e2b55;
case 0x4e2b58:c.instructions+=6;goto B4e2b58;
case 0x4e2b5a:c.instructions+=5;goto B4e2b5a;
case 0x4e2b5b:c.instructions+=4;goto B4e2b5b;
case 0x4e2b5f:c.instructions+=3;goto B4e2b5f;
case 0x4e2b66:c.instructions+=2;goto B4e2b66;
case 0x4e2b69:c.instructions+=1;goto B4e2b69;
case 0x4e2b6c:goto L4e2b6c;
case 0x4e2b73:c.instructions+=3;goto B4e2b73;
case 0x4e2b7d:c.instructions+=2;goto B4e2b7d;
case 0x4e2b80:c.instructions+=1;goto B4e2b80;
case 0x4e2b82:goto L4e2b82;
case 0x4e2b87:c.instructions+=1;goto B4e2b87;
case 0x4e2b89:goto L4e2b89;
case 0x4e2b8e:goto L4e2b8e;
case 0x4e2b93:c.instructions+=2;goto B4e2b93;
case 0x4e2b94:c.instructions+=1;goto B4e2b94;
case 0x4e2b99:goto L4e2b99;
case 0x4e2b9c:c.instructions+=2;goto B4e2b9c;
case 0x4e2b9d:c.instructions+=1;goto B4e2b9d;
case 0x4e2ba2:goto L4e2ba2;
case 0x4e2ba7:c.instructions+=3;goto B4e2ba7;
case 0x4e2baa:c.instructions+=2;goto B4e2baa;
case 0x4e2bad:c.instructions+=1;goto B4e2bad;
case 0x4e2baf:goto L4e2baf;
case 0x4e2bb2:c.instructions+=5;goto B4e2bb2;
case 0x4e2bb4:c.instructions+=4;goto B4e2bb4;
case 0x4e2bb9:c.instructions+=3;goto B4e2bb9;
case 0x4e2bbe:c.instructions+=2;goto B4e2bbe;
case 0x4e2bbf:c.instructions+=1;goto B4e2bbf;
case 0x4e2bc4:goto L4e2bc4;
case 0x4e2bc7:goto L4e2bc7;
case 0x4e2bca:c.instructions+=5;goto B4e2bca;
case 0x4e2bcc:c.instructions+=4;goto B4e2bcc;
case 0x4e2bd1:c.instructions+=3;goto B4e2bd1;
case 0x4e2bd6:c.instructions+=2;goto B4e2bd6;
case 0x4e2bd7:c.instructions+=1;goto B4e2bd7;
case 0x4e2bdc:goto L4e2bdc;
case 0x4e2bdf:c.instructions+=3;goto B4e2bdf;
case 0x4e2be4:c.instructions+=2;goto B4e2be4;
case 0x4e2be5:c.instructions+=1;goto B4e2be5;
case 0x4e2bea:goto L4e2bea;
case 0x4e2beb:c.instructions+=1;goto B4e2beb;
case 0x4e2bf0:goto L4e2bf0;
case 0x4e2bf3:c.instructions+=3;goto B4e2bf3;
case 0x4e2bf8:c.instructions+=2;goto B4e2bf8;
case 0x4e2bf9:c.instructions+=1;goto B4e2bf9;
case 0x4e2bfe:goto L4e2bfe;
case 0x4e2bff:c.instructions+=1;goto B4e2bff;
case 0x4e2c04:goto L4e2c04;
case 0x4e2c07:c.instructions+=7;goto B4e2c07;
case 0x4e2c0a:c.instructions+=6;goto B4e2c0a;
case 0x4e2c10:c.instructions+=5;goto B4e2c10;
case 0x4e2c13:c.instructions+=4;goto B4e2c13;
case 0x4e2c14:c.instructions+=3;goto B4e2c14;
case 0x4e2c19:c.instructions+=2;goto B4e2c19;
case 0x4e2c1a:c.instructions+=1;goto B4e2c1a;
case 0x4e2c1f:goto L4e2c1f;
case 0x4e2c23:c.instructions+=5;goto B4e2c23;
case 0x4e2c25:c.instructions+=4;goto B4e2c25;
case 0x4e2c26:c.instructions+=3;goto B4e2c26;
case 0x4e2c2d:c.instructions+=2;goto B4e2c2d;
case 0x4e2c30:c.instructions+=1;goto B4e2c30;
case 0x4e2c40:goto L4e2c40;
case 0x4e2c41:c.instructions+=2;goto B4e2c41;
case 0x4e2c43:c.instructions+=1;goto B4e2c43;
case 0x4e2c48:goto L4e2c48;
case 0x4e2c4d:c.instructions+=1;goto B4e2c4d;
case 0x4e2c4f:goto L4e2c4f;
case 0x4e2c50:c.instructions+=1;goto B4e2c50;
case 0x4e2c55:goto L4e2c55;
case 0x4e2c58:goto L4e2c58;
case 0x4e2c5a:c.instructions+=2;goto B4e2c5a;
case 0x4e2c5b:c.instructions+=1;goto B4e2c5b;
case 0x4e2c60:goto L4e2c60;
case 0x4e2c66:c.instructions+=1;goto B4e2c66;
case 0x4e2c70:goto L4e2c70;
case 0x4e2c75:c.instructions+=4;goto B4e2c75;
case 0x4e2c78:c.instructions+=3;goto B4e2c78;
case 0x4e2c79:c.instructions+=2;goto B4e2c79;
case 0x4e2c7b:c.instructions+=1;goto B4e2c7b;
case 0x4e2c81:goto L4e2c81;
case 0x4e2c86:c.instructions+=1;goto B4e2c86;
case 0x4e2c8c:goto L4e2c8c;
case 0x4e2c91:c.instructions+=2;goto B4e2c91;
case 0x4e2c94:c.instructions+=1;goto B4e2c94;
case 0x4e2c9a:goto L4e2c9a;
case 0x4e2ca1:goto L4e2ca1;
case 0x4e2ca3:c.instructions+=1;goto B4e2ca3;
case 0x4e2ca8:goto L4e2ca8;
case 0x4e2caa:c.instructions+=2;goto B4e2caa;
case 0x4e2cac:c.instructions+=1;goto B4e2cac;
case 0x4e2cb1:goto L4e2cb1;
case 0x4e2cb2:c.instructions+=1;goto B4e2cb2;
case 0x4e2cb3:goto L4e2cb3;
case 0x4e2cb5:c.instructions+=1;goto B4e2cb5;
case 0x4e2cba:goto L4e2cba;
case 0x4e2cbc:c.instructions+=2;goto B4e2cbc;
case 0x4e2cbe:c.instructions+=1;goto B4e2cbe;
case 0x4e2cc3:goto L4e2cc3;
case 0x4e2cc4:c.instructions+=1;goto B4e2cc4;
case 0x4e2cc5:goto L4e2cc5;
case 0x4e2cc7:c.instructions+=1;goto B4e2cc7;
case 0x4e2ccc:goto L4e2ccc;
case 0x4e2cce:c.instructions+=2;goto B4e2cce;
case 0x4e2cd0:c.instructions+=1;goto B4e2cd0;
case 0x4e2cd5:goto L4e2cd5;
case 0x4e2cd6:c.instructions+=1;goto B4e2cd6;
case 0x4e2cd7:goto L4e2cd7;
case 0x4e2cd9:c.instructions+=1;goto B4e2cd9;
case 0x4e2cde:goto L4e2cde;
case 0x4e2ce0:c.instructions+=2;goto B4e2ce0;
case 0x4e2ce2:c.instructions+=1;goto B4e2ce2;
case 0x4e2ce7:goto L4e2ce7;
case 0x4e2ce8:c.instructions+=1;goto B4e2ce8;
case 0x4e2ce9:goto L4e2ce9;
case 0x4e2ceb:c.instructions+=1;goto B4e2ceb;
case 0x4e2cf0:goto L4e2cf0;
case 0x4e2cf2:c.instructions+=2;goto B4e2cf2;
case 0x4e2cf4:c.instructions+=1;goto B4e2cf4;
case 0x4e2cf9:goto L4e2cf9;
case 0x4e2cfa:c.instructions+=1;goto B4e2cfa;
case 0x4e2cfb:goto L4e2cfb;
case 0x4e2cfd:c.instructions+=1;goto B4e2cfd;
case 0x4e2d02:goto L4e2d02;
case 0x4e2d04:c.instructions+=2;goto B4e2d04;
case 0x4e2d06:c.instructions+=1;goto B4e2d06;
case 0x4e2d0b:goto L4e2d0b;
case 0x4e2d0c:c.instructions+=1;goto B4e2d0c;
case 0x4e2d0d:goto L4e2d0d;
case 0x4e2d0f:c.instructions+=1;goto B4e2d0f;
case 0x4e2d14:goto L4e2d14;
case 0x4e2d16:c.instructions+=2;goto B4e2d16;
case 0x4e2d18:c.instructions+=1;goto B4e2d18;
case 0x4e2d1d:goto L4e2d1d;
case 0x4e2d1e:c.instructions+=1;goto B4e2d1e;
case 0x4e2d1f:goto L4e2d1f;
case 0x4e2d21:c.instructions+=1;goto B4e2d21;
case 0x4e2d26:goto L4e2d26;
case 0x4e2d28:c.instructions+=2;goto B4e2d28;
case 0x4e2d2a:c.instructions+=1;goto B4e2d2a;
case 0x4e2d2f:goto L4e2d2f;
case 0x4e2d30:c.instructions+=1;goto B4e2d30;
case 0x4e2d31:goto L4e2d31;
case 0x4e2d36:c.instructions+=2;goto B4e2d36;
case 0x4e2d39:c.instructions+=1;goto B4e2d39;
case 0x4e2d3b:goto L4e2d3b;
case 0x4e2d42:goto L4e2d42;
case 0x4e2d44:c.instructions+=1;goto B4e2d44;
case 0x4e2d49:goto L4e2d49;
case 0x4e2d4b:c.instructions+=2;goto B4e2d4b;
case 0x4e2d4d:c.instructions+=1;goto B4e2d4d;
case 0x4e2d52:goto L4e2d52;
case 0x4e2d53:c.instructions+=1;goto B4e2d53;
case 0x4e2d54:goto L4e2d54;
case 0x4e2d56:c.instructions+=1;goto B4e2d56;
case 0x4e2d5b:goto L4e2d5b;
case 0x4e2d5d:c.instructions+=2;goto B4e2d5d;
case 0x4e2d5f:c.instructions+=1;goto B4e2d5f;
case 0x4e2d64:goto L4e2d64;
case 0x4e2d65:c.instructions+=1;goto B4e2d65;
case 0x4e2dc0:goto L4e2dc0;
case 0x4e2dc1:c.instructions+=11;goto B4e2dc1;
case 0x4e2dc3:c.instructions+=10;goto B4e2dc3;
case 0x4e2dc6:c.instructions+=9;goto B4e2dc6;
case 0x4e2dc8:c.instructions+=8;goto B4e2dc8;
case 0x4e2dcd:c.instructions+=7;goto B4e2dcd;
case 0x4e2dd3:c.instructions+=6;goto B4e2dd3;
case 0x4e2dd4:c.instructions+=5;goto B4e2dd4;
case 0x4e2ddb:c.instructions+=4;goto B4e2ddb;
case 0x4e2de1:c.instructions+=3;goto B4e2de1;
case 0x4e2de8:c.instructions+=2;goto B4e2de8;
case 0x4e2de9:c.instructions+=1;goto B4e2de9;
case 0x4e2def:goto L4e2def;
case 0x4e2df4:c.instructions+=2;goto B4e2df4;
case 0x4e2df6:c.instructions+=1;goto B4e2df6;
case 0x4e2dfc:goto L4e2dfc;
case 0x4e2dfe:c.instructions+=3;goto B4e2dfe;
case 0x4e2e00:c.instructions+=2;goto B4e2e00;
case 0x4e2e05:c.instructions+=1;goto B4e2e05;
case 0x4e2e0a:goto L4e2e0a;
case 0x4e2e0c:c.instructions+=2;goto B4e2e0c;
case 0x4e2e0e:c.instructions+=1;goto B4e2e0e;
case 0x4e2e10:goto L4e2e10;
case 0x4e2e16:c.instructions+=2;goto B4e2e16;
case 0x4e2e1c:c.instructions+=1;goto B4e2e1c;
case 0x4e2e1e:goto L4e2e1e;
case 0x4e2e1f:c.instructions+=3;goto B4e2e1f;
case 0x4e2e21:c.instructions+=2;goto B4e2e21;
case 0x4e2e26:c.instructions+=1;goto B4e2e26;
case 0x4e2e2b:goto L4e2e2b;
case 0x4e2e2d:c.instructions+=2;goto B4e2e2d;
case 0x4e2e2f:c.instructions+=1;goto B4e2e2f;
case 0x4e2e31:goto L4e2e31;
case 0x4e2e35:c.instructions+=1;goto B4e2e35;
case 0x4e2e3a:goto L4e2e3a;
case 0x4e2e3c:c.instructions+=7;goto B4e2e3c;
case 0x4e2e3e:c.instructions+=6;goto B4e2e3e;
case 0x4e2e42:c.instructions+=5;goto B4e2e42;
case 0x4e2e43:c.instructions+=4;goto B4e2e43;
case 0x4e2e45:c.instructions+=3;goto B4e2e45;
case 0x4e2e47:c.instructions+=2;goto B4e2e47;
case 0x4e2e52:c.instructions+=1;goto B4e2e52;
case 0x4e2e55:goto L4e2e55;
case 0x4e2e58:c.instructions+=4;goto B4e2e58;
case 0x4e2e5a:c.instructions+=3;goto B4e2e5a;
case 0x4e2e5b:c.instructions+=2;goto B4e2e5b;
case 0x4e2e60:c.instructions+=1;goto B4e2e60;
case 0x4e2e65:goto L4e2e65;
case 0x4e2e6a:c.instructions+=1;goto B4e2e6a;
case 0x4e2e6f:goto L4e2e6f;
case 0x4e2e72:c.instructions+=2;goto B4e2e72;
case 0x4e2e74:c.instructions+=1;goto B4e2e74;
case 0x4e2e76:goto L4e2e76;
case 0x4e2e7b:c.instructions+=1;goto B4e2e7b;
case 0x4e2e80:goto L4e2e80;
case 0x4e2e83:c.instructions+=2;goto B4e2e83;
case 0x4e2e85:c.instructions+=1;goto B4e2e85;
case 0x4e2e87:goto L4e2e87;
case 0x4e2e8c:c.instructions+=1;goto B4e2e8c;
case 0x4e2e91:goto L4e2e91;
case 0x4e2e94:c.instructions+=2;goto B4e2e94;
case 0x4e2e96:c.instructions+=1;goto B4e2e96;
case 0x4e2e98:goto L4e2e98;
case 0x4e2e9d:c.instructions+=1;goto B4e2e9d;
case 0x4e2ea2:goto L4e2ea2;
case 0x4e2ea5:c.instructions+=2;goto B4e2ea5;
case 0x4e2ea7:c.instructions+=1;goto B4e2ea7;
case 0x4e2ea9:goto L4e2ea9;
case 0x4e2eac:c.instructions+=1;goto B4e2eac;
case 0x4e2eae:goto L4e2eae;
case 0x4e2eb0:goto L4e2eb0;
case 0x4e2eb4:c.instructions+=3;goto B4e2eb4;
case 0x4e2eb5:c.instructions+=2;goto B4e2eb5;
case 0x4e2eba:c.instructions+=1;goto B4e2eba;
case 0x4e2ebf:goto L4e2ebf;
case 0x4e2ec1:c.instructions+=2;goto B4e2ec1;
case 0x4e2ecb:c.instructions+=1;goto B4e2ecb;
case 0x4e2ecd:goto L4e2ecd;
case 0x4e2ecf:c.instructions+=3;goto B4e2ecf;
case 0x4e2ed4:c.instructions+=2;goto B4e2ed4;
case 0x4e2ed6:c.instructions+=1;goto B4e2ed6;
case 0x4e2edb:goto L4e2edb;
case 0x4e2edf:c.instructions+=2;goto B4e2edf;
case 0x4e2ee0:c.instructions+=1;goto B4e2ee0;
case 0x4e2ee5:goto L4e2ee5;
case 0x4e2ee7:c.instructions+=1;goto B4e2ee7;
case 0x4e2eec:goto L4e2eec;
case 0x4e2eee:c.instructions+=2;goto B4e2eee;
case 0x4e2ef0:c.instructions+=1;goto B4e2ef0;
case 0x4e2ef5:goto L4e2ef5;
case 0x4e2ef7:c.instructions+=1;goto B4e2ef7;
case 0x4e2efc:goto L4e2efc;
case 0x4e2f03:c.instructions+=2;goto B4e2f03;
case 0x4e2f0e:c.instructions+=1;goto B4e2f0e;
case 0x4e2f13:goto L4e2f13;
case 0x4e2f1a:c.instructions+=5;goto B4e2f1a;
case 0x4e2f21:c.instructions+=4;goto B4e2f21;
case 0x4e2f22:c.instructions+=3;goto B4e2f22;
case 0x4e2f24:c.instructions+=2;goto B4e2f24;
case 0x4e2f25:c.instructions+=1;goto B4e2f25;
case 0x4e2f30:goto L4e2f30;
case 0x4e2f32:c.instructions+=14;goto B4e2f32;
case 0x4e2f37:c.instructions+=13;goto B4e2f37;
case 0x4e2f3d:c.instructions+=12;goto B4e2f3d;
case 0x4e2f3e:c.instructions+=11;goto B4e2f3e;
case 0x4e2f45:c.instructions+=10;goto B4e2f45;
case 0x4e2f46:c.instructions+=9;goto B4e2f46;
case 0x4e2f4a:c.instructions+=8;goto B4e2f4a;
case 0x4e2f4b:c.instructions+=7;goto B4e2f4b;
case 0x4e2f4c:c.instructions+=6;goto B4e2f4c;
case 0x4e2f4d:c.instructions+=5;goto B4e2f4d;
case 0x4e2f4e:c.instructions+=4;goto B4e2f4e;
case 0x4e2f50:c.instructions+=3;goto B4e2f50;
case 0x4e2f51:c.instructions+=2;goto B4e2f51;
case 0x4e2f55:c.instructions+=1;goto B4e2f55;
case 0x4e2f5a:goto L4e2f5a;
case 0x4e2f5d:c.instructions+=17;goto B4e2f5d;
case 0x4e2f5f:c.instructions+=16;goto B4e2f5f;
case 0x4e2f65:c.instructions+=15;goto B4e2f65;
case 0x4e2f69:c.instructions+=14;goto B4e2f69;
case 0x4e2f6c:c.instructions+=13;goto B4e2f6c;
case 0x4e2f6f:c.instructions+=12;goto B4e2f6f;
case 0x4e2f72:c.instructions+=11;goto B4e2f72;
case 0x4e2f77:c.instructions+=10;goto B4e2f77;
case 0x4e2f7c:c.instructions+=9;goto B4e2f7c;
case 0x4e2f7e:c.instructions+=8;goto B4e2f7e;
case 0x4e2f83:c.instructions+=7;goto B4e2f83;
case 0x4e2f88:c.instructions+=6;goto B4e2f88;
case 0x4e2f89:c.instructions+=5;goto B4e2f89;
case 0x4e2f8c:c.instructions+=4;goto B4e2f8c;
case 0x4e2f91:c.instructions+=3;goto B4e2f91;
case 0x4e2f94:c.instructions+=2;goto B4e2f94;
case 0x4e2f97:c.instructions+=1;goto B4e2f97;
case 0x4e2f9c:goto L4e2f9c;
case 0x4e2f9f:c.instructions+=8;goto B4e2f9f;
case 0x4e2fa0:c.instructions+=7;goto B4e2fa0;
case 0x4e2fa1:c.instructions+=6;goto B4e2fa1;
case 0x4e2fa2:c.instructions+=5;goto B4e2fa2;
case 0x4e2fa7:c.instructions+=4;goto B4e2fa7;
case 0x4e2fa8:c.instructions+=3;goto B4e2fa8;
case 0x4e2fae:c.instructions+=2;goto B4e2fae;
case 0x4e2fb3:c.instructions+=1;goto B4e2fb3;
case 0x4e2fb8:goto L4e2fb8;
case 0x4e2fbb:c.instructions+=3;goto B4e2fbb;
case 0x4e2fc0:c.instructions+=2;goto B4e2fc0;
case 0x4e2fc1:c.instructions+=1;goto B4e2fc1;
case 0x4e2fc6:goto L4e2fc6;
case 0x4e2fcc:c.instructions+=10;goto B4e2fcc;
case 0x4e2fcf:c.instructions+=9;goto B4e2fcf;
case 0x4e2fd5:c.instructions+=8;goto B4e2fd5;
case 0x4e2fd8:c.instructions+=7;goto B4e2fd8;
case 0x4e2fdb:c.instructions+=6;goto B4e2fdb;
case 0x4e2fde:c.instructions+=5;goto B4e2fde;
case 0x4e2fe1:c.instructions+=4;goto B4e2fe1;
case 0x4e2fe7:c.instructions+=3;goto B4e2fe7;
case 0x4e2fea:c.instructions+=2;goto B4e2fea;
case 0x4e2feb:c.instructions+=1;goto B4e2feb;
case 0x4e2ff0:goto L4e2ff0;
case 0x4e2ff3:c.instructions+=5;goto B4e2ff3;
case 0x4e2ff6:c.instructions+=4;goto B4e2ff6;
case 0x4e2ff9:c.instructions+=3;goto B4e2ff9;
case 0x4e2ffc:c.instructions+=2;goto B4e2ffc;
case 0x4e2fff:c.instructions+=1;goto B4e2fff;
default:missing_instruction(c.pc);}
B4e2001:L4e2001:{c.instructions+=9;NFSU2_TR(0x4e2001);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e2004:{NFSU2_TR(0x4e2004);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e2005:{NFSU2_TR(0x4e2005);
__builtin_memmove((R+0),(R+24),4);
}
B4e2007:{NFSU2_TR(0x4e2007);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2008:{NFSU2_TR(0x4e2008);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e2009:{NFSU2_TR(0x4e2009);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2010:{NFSU2_TR(0x4e2010);
__builtin_memmove((R+16),(R+20),4);
}
B4e2012:{NFSU2_TR(0x4e2012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e2013:{NFSU2_TR(0x4e2013);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2030:L4e2030:{c.instructions+=3;NFSU2_TR(0x4e2030);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2031:{NFSU2_TR(0x4e2031);
__builtin_memmove((R+24),(R+4),4);
}
B4e2033:{NFSU2_TR(0x4e2033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2038ull));
TAIL_STATIC(0x4cc860u,4cc);
}
B4e2038:L4e2038:{c.instructions+=2;NFSU2_TR(0x4e2038);
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
B4e203d:{NFSU2_TR(0x4e203d);
if(r1(R+518)){{goto L4e2048;}}
}
B4e203f:L4e203f:{c.instructions+=2;NFSU2_TR(0x4e203f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2040:{NFSU2_TR(0x4e2040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2045ull));
TAIL_STATIC(0x575630u,575);
}
B4e2045:L4e2045:{c.instructions+=1;NFSU2_TR(0x4e2045);
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
B4e2048:L4e2048:{c.instructions+=3;NFSU2_TR(0x4e2048);
__builtin_memmove((R+0),(R+24),4);
}
B4e204a:{NFSU2_TR(0x4e204a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e204b:{NFSU2_TR(0x4e204b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2050:L4e2050:{c.instructions+=8;NFSU2_TR(0x4e2050);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2052:{NFSU2_TR(0x4e2052);
u8 U[4];
w4(U+0,u32(0x775b44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2057:{NFSU2_TR(0x4e2057);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e205d:{NFSU2_TR(0x4e205d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e205e:{NFSU2_TR(0x4e205e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2065:{NFSU2_TR(0x4e2065);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2066:{NFSU2_TR(0x4e2066);
u8 U[4];
w4(U+0,u32(0x1b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e206b:{NFSU2_TR(0x4e206b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2070ull));
TAIL_STATIC(0x575620u,575);
}
B4e2070:L4e2070:{c.instructions+=5;NFSU2_TR(0x4e2070);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2073:{NFSU2_TR(0x4e2073);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4e2077:{NFSU2_TR(0x4e2077);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e2079:{NFSU2_TR(0x4e2079);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e2081:{NFSU2_TR(0x4e2081);
if(r1(R+518)){{goto L4e209e;}}
}
B4e2083:L4e2083:{c.instructions+=4;NFSU2_TR(0x4e2083);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e2087:{NFSU2_TR(0x4e2087);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2088:{NFSU2_TR(0x4e2088);
__builtin_memmove((R+4),(R+0),4);
}
B4e208a:{NFSU2_TR(0x4e208a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e208full));
TAIL_STATIC(0x4e1bf0u,4e1);
}
B4e208f:L4e208f:{c.instructions+=4;NFSU2_TR(0x4e208f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e2093:{NFSU2_TR(0x4e2093);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e209a:{NFSU2_TR(0x4e209a);
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
B4e209d:{NFSU2_TR(0x4e209d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e209e:L4e209e:{c.instructions+=5;NFSU2_TR(0x4e209e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e20a2:{NFSU2_TR(0x4e20a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e20a4:{NFSU2_TR(0x4e20a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e20ab:{NFSU2_TR(0x4e20ab);
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
B4e20ae:{NFSU2_TR(0x4e20ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e20b0:L4e20b0:{c.instructions+=17;NFSU2_TR(0x4e20b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e20b1:{NFSU2_TR(0x4e20b1);
__builtin_memmove((R+20),(R+16),4);
}
B4e20b3:{NFSU2_TR(0x4e20b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4e20b6:{NFSU2_TR(0x4e20b6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e20b8:{NFSU2_TR(0x4e20b8);
u8 U[4];
w4(U+0,u32(0x775ba7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e20bd:{NFSU2_TR(0x4e20bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e20c3:{NFSU2_TR(0x4e20c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e20c4:{NFSU2_TR(0x4e20c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e20cb:{NFSU2_TR(0x4e20cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8fcull))));
}
B4e20d1:{NFSU2_TR(0x4e20d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e20d2:{NFSU2_TR(0x4e20d2);
__builtin_memmove((R+24),(R+4),4);
}
B4e20d4:{NFSU2_TR(0x4e20d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e20d5:{NFSU2_TR(0x4e20d5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e20d9:{NFSU2_TR(0x4e20d9);
u8 U[4];
w4(U+0,u32(0x79770cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e20df:{NFSU2_TR(0x4e20df);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e20e6:{NFSU2_TR(0x4e20e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e20f1:{NFSU2_TR(0x4e20f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e2108;}}
}
B4e20f3:L4e20f3:{c.instructions+=4;NFSU2_TR(0x4e20f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e20f6:{NFSU2_TR(0x4e20f6);
u8 U[4];
w4(U+0,u32(0x7976fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e20fb:{NFSU2_TR(0x4e20fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e20fc:{NFSU2_TR(0x4e20fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2101ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4e2101:L4e2101:{c.instructions+=3;NFSU2_TR(0x4e2101);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e2104:{NFSU2_TR(0x4e2104);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e2106:{NFSU2_TR(0x4e2106);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e2131;}}
}
B4e2108:L4e2108:{c.instructions+=2;NFSU2_TR(0x4e2108);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e2112:{NFSU2_TR(0x4e2112);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e222a;}}
}
B4e2118:L4e2118:{c.instructions+=4;NFSU2_TR(0x4e2118);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e211b:{NFSU2_TR(0x4e211b);
u8 U[4];
w4(U+0,u32(0x78f354ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2120:{NFSU2_TR(0x4e2120);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2121:{NFSU2_TR(0x4e2121);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2126ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4e2126:L4e2126:{c.instructions+=3;NFSU2_TR(0x4e2126);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e2129:{NFSU2_TR(0x4e2129);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e212b:{NFSU2_TR(0x4e212b);
if(r1(R+518)){{goto L4e222a;}}
}
B4e2131:L4e2131:{c.instructions+=2;NFSU2_TR(0x4e2131);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e2135:{NFSU2_TR(0x4e2135);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e213aull));
TAIL_STATIC(0x40c910u,40c);
}
B4e213a:L4e213a:{c.instructions+=5;NFSU2_TR(0x4e213a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2140:{NFSU2_TR(0x4e2140);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2141:{NFSU2_TR(0x4e2141);
w4(R+4,u32(0x83ad90ull));
}
B4e2146:{NFSU2_TR(0x4e2146);
u8 U[5];
w4(U+0,u32(u32(u32(0x910ull))+u32(r4(R+16))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e214e:{NFSU2_TR(0x4e214e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2153ull));
TAIL_STATIC(0x503510u,503);
}
B4e2153:L4e2153:{c.instructions+=7;NFSU2_TR(0x4e2153);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4e2155:{NFSU2_TR(0x4e2155);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2157:{NFSU2_TR(0x4e2157);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e215b:{NFSU2_TR(0x4e215b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e215c:{NFSU2_TR(0x4e215c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e215e:{NFSU2_TR(0x4e215e);
__builtin_memmove((R+4),(R+0),4);
}
B4e2160:{NFSU2_TR(0x4e2160);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2163ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e2163:L4e2163:{c.instructions+=5;NFSU2_TR(0x4e2163);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e2169:{NFSU2_TR(0x4e2169);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e216b:{NFSU2_TR(0x4e216b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e216c:{NFSU2_TR(0x4e216c);
w4(R+4,u32(0x83aab4ull));
}
B4e2171:{NFSU2_TR(0x4e2171);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2176ull));
TAIL_STATIC(0x502a40u,502);
}
B4e2176:L4e2176:{c.instructions+=2;NFSU2_TR(0x4e2176);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e217b:{NFSU2_TR(0x4e217b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2180ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e2180:L4e2180:{c.instructions+=3;NFSU2_TR(0x4e2180);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2183:{NFSU2_TR(0x4e2183);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e2185:{NFSU2_TR(0x4e2185);
if(r1(R+518)){{goto L4e2198;}}
}
B4e2187:L4e2187:{c.instructions+=2;NFSU2_TR(0x4e2187);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e218c:{NFSU2_TR(0x4e218c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2191ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e2191:L4e2191:{c.instructions+=3;NFSU2_TR(0x4e2191);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2194:{NFSU2_TR(0x4e2194);
__builtin_memmove((R+28),(R+0),4);
}
B4e2196:{NFSU2_TR(0x4e2196);
{goto L4e21c1;}
}
B4e2198:L4e2198:{c.instructions+=2;NFSU2_TR(0x4e2198);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e219d:{NFSU2_TR(0x4e219d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e21a2ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e21a2:L4e21a2:{c.instructions+=3;NFSU2_TR(0x4e21a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e21a5:{NFSU2_TR(0x4e21a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e21a7:{NFSU2_TR(0x4e21a7);
if(r1(R+518)){{goto L4e21bf;}}
}
B4e21a9:L4e21a9:{c.instructions+=2;NFSU2_TR(0x4e21a9);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e21ae:{NFSU2_TR(0x4e21ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e21b3ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e21b3:L4e21b3:{c.instructions+=3;NFSU2_TR(0x4e21b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e21b6:{NFSU2_TR(0x4e21b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e21b8:{NFSU2_TR(0x4e21b8);
if(r1(R+518)){{goto L4e21bf;}}
}
B4e21ba:L4e21ba:{c.instructions+=2;NFSU2_TR(0x4e21ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e21bd:{NFSU2_TR(0x4e21bd);
{goto L4e21c1;}
}
B4e21bf:L4e21bf:{c.instructions+=1;NFSU2_TR(0x4e21bf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e21c1:L4e21c1:{c.instructions+=4;NFSU2_TR(0x4e21c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e21c5:{NFSU2_TR(0x4e21c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e21c6:{NFSU2_TR(0x4e21c6);
w4(R+4,u32(0x8371b0ull));
}
B4e21cb:{NFSU2_TR(0x4e21cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e21d0ull));
TAIL_STATIC(0x413440u,413);
}
B4e21d0:L4e21d0:{c.instructions+=3;NFSU2_TR(0x4e21d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e21d2:{NFSU2_TR(0x4e21d2);
s4(0x83623c,u32(0x1ull));
}
B4e21dc:{NFSU2_TR(0x4e21dc);
if(r1(R+518)){{goto L4e21ec;}}
}
B4e21de:L4e21de:{c.instructions+=4;NFSU2_TR(0x4e21de);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e21e0:{NFSU2_TR(0x4e21e0);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e21e5:{NFSU2_TR(0x4e21e5);
__builtin_memmove((R+4),(R+28),4);
}
B4e21e7:{NFSU2_TR(0x4e21e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e21ecull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4e21ec:L4e21ec:{c.instructions+=3;NFSU2_TR(0x4e21ec);
__builtin_memmove((R+0),gp(0x8500cc),1);
}
B4e21f1:{NFSU2_TR(0x4e21f1);
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
B4e21f3:{NFSU2_TR(0x4e21f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e2216;}}
}
B4e21f5:L4e21f5:{c.instructions+=3;NFSU2_TR(0x4e21f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e21f9:{NFSU2_TR(0x4e21f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e21fa:{NFSU2_TR(0x4e21fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e21ffull));
TAIL_STATIC(0x58b9a0u,58b);
}
B4e21ff:L4e21ff:{c.instructions+=2;NFSU2_TR(0x4e21ff);
__builtin_memmove((R+4),(R+0),4);
}
B4e2201:{NFSU2_TR(0x4e2201);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2206ull));
TAIL_STATIC(0x587630u,587);
}
B4e2206:L4e2206:{c.instructions+=3;NFSU2_TR(0x4e2206);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2208:{NFSU2_TR(0x4e2208);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e220a:{NFSU2_TR(0x4e220a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e220full));
TAIL_STATIC(0x58b9a0u,58b);
}
B4e220f:L4e220f:{c.instructions+=2;NFSU2_TR(0x4e220f);
__builtin_memmove((R+4),(R+0),4);
}
B4e2211:{NFSU2_TR(0x4e2211);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2216ull));
TAIL_STATIC(0x58e080u,58e);
}
B4e2216:L4e2216:{c.instructions+=3;NFSU2_TR(0x4e2216);
u8 U[4];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e221d:{NFSU2_TR(0x4e221d);
u8 U[5];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e2225:{NFSU2_TR(0x4e2225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e222aull));
TAIL_STATIC(0x4022c0u,402);
}
B4e222a:L4e222a:{c.instructions+=7;NFSU2_TR(0x4e222a);
w4(R+0,u32(0x78f544ull));
}
B4e222f:{NFSU2_TR(0x4e222f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e2232:{NFSU2_TR(0x4e2232);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2238:{NFSU2_TR(0x4e2238);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e223e:{NFSU2_TR(0x4e223e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2244:{NFSU2_TR(0x4e2244);
u8 U[5];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e224c:{NFSU2_TR(0x4e224c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2251ull));
TAIL_STATIC(0x479100u,479);
}
B4e2251:L4e2251:{c.instructions+=3;NFSU2_TR(0x4e2251);
__builtin_memmove((R+4),(R+24),4);
}
B4e2253:{NFSU2_TR(0x4e2253);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e225e:{NFSU2_TR(0x4e225e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2263ull));
TAIL_STATIC(0x510d40u,510);
}
B4e2263:L4e2263:{c.instructions+=7;NFSU2_TR(0x4e2263);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e226a:{NFSU2_TR(0x4e226a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e226b:{NFSU2_TR(0x4e226b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2272:{NFSU2_TR(0x4e2272);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2273:{NFSU2_TR(0x4e2273);
__builtin_memmove((R+16),(R+20),4);
}
B4e2275:{NFSU2_TR(0x4e2275);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e2276:{NFSU2_TR(0x4e2276);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2280:L4e2280:{c.instructions+=2;NFSU2_TR(0x4e2280);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e2287:{NFSU2_TR(0x4e2287);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e2295;}}
}
B4e2289:L4e2289:{c.instructions+=5;NFSU2_TR(0x4e2289);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e228c:{NFSU2_TR(0x4e228c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e2290:{NFSU2_TR(0x4e2290);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4e2291:{NFSU2_TR(0x4e2291);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e2293:{NFSU2_TR(0x4e2293);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e22b0;}}
}
B4e2295:L4e2295:{c.instructions+=3;NFSU2_TR(0x4e2295);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2299:{NFSU2_TR(0x4e2299);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x5073ef13ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x5073ef13ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x5073ef13ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e229e:{NFSU2_TR(0x4e229e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e22bd;}}
}
B4e22a0:L4e22a0:{c.instructions+=1;NFSU2_TR(0x4e22a0);
if(r1(R+518)){{goto L4e22b5;}}
}
B4e22a2:L4e22a2:{c.instructions+=2;NFSU2_TR(0x4e22a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e22a7:{NFSU2_TR(0x4e22a7);
if(r1(R+518)){{goto L4e22b0;}}
}
B4e22a9:L4e22a9:{c.instructions+=2;NFSU2_TR(0x4e22a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e22ae:{NFSU2_TR(0x4e22ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e22c4;}}
}
B4e22b0:L4e22b0:{c.instructions+=2;NFSU2_TR(0x4e22b0);
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
B4e22b2:{NFSU2_TR(0x4e22b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e22b5:L4e22b5:{c.instructions+=2;NFSU2_TR(0x4e22b5);
w4(R+0,u32(0x6ull));
}
B4e22ba:{NFSU2_TR(0x4e22ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e22bd:L4e22bd:{c.instructions+=2;NFSU2_TR(0x4e22bd);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xd9feec59ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xd9feec59ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xd9feec59ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e22c2:{NFSU2_TR(0x4e22c2);
if(r1(R+518)){{goto L4e22d7;}}
}
B4e22c4:L4e22c4:{c.instructions+=5;NFSU2_TR(0x4e22c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e22c8:{NFSU2_TR(0x4e22c8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e22ca:{NFSU2_TR(0x4e22ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e22cb:{NFSU2_TR(0x4e22cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e22cc:{NFSU2_TR(0x4e22cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e22d1ull));
TAIL_STATIC(0x50d1a0u,50d);
}
B4e22d1:L4e22d1:{c.instructions+=2;NFSU2_TR(0x4e22d1);
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
B4e22d4:{NFSU2_TR(0x4e22d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e22d7:L4e22d7:{c.instructions+=2;NFSU2_TR(0x4e22d7);
w4(R+0,u32(0x7ull));
}
B4e22dc:{NFSU2_TR(0x4e22dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e22e0:L4e22e0:{c.instructions+=15;NFSU2_TR(0x4e22e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e22e1:{NFSU2_TR(0x4e22e1);
__builtin_memmove((R+20),(R+16),4);
}
B4e22e3:{NFSU2_TR(0x4e22e3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e22e5:{NFSU2_TR(0x4e22e5);
u8 U[4];
w4(U+0,u32(0x775bd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e22ea:{NFSU2_TR(0x4e22ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e22f0:{NFSU2_TR(0x4e22f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e22f1:{NFSU2_TR(0x4e22f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e22f8:{NFSU2_TR(0x4e22f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B4e22fb:{NFSU2_TR(0x4e22fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e22fc:{NFSU2_TR(0x4e22fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e22fd:{NFSU2_TR(0x4e22fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e22fe:{NFSU2_TR(0x4e22fe);
__builtin_memmove((R+28),(R+4),4);
}
B4e2300:{NFSU2_TR(0x4e2300);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2303:{NFSU2_TR(0x4e2303);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4e2305:{NFSU2_TR(0x4e2305);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4e231c;}}
}
B4e2307:L4e2307:{c.instructions+=2;NFSU2_TR(0x4e2307);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4e230a:{NFSU2_TR(0x4e230a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4e231c;}}
}
B4e230c:L4e230c:{c.instructions+=4;NFSU2_TR(0x4e230c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4e2312:{NFSU2_TR(0x4e2312);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x83ad90ull))));
}
B4e2317:{NFSU2_TR(0x4e2317);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e231a:{NFSU2_TR(0x4e231a);
{goto L4e2323;}
}
B4e231c:L4e231c:{c.instructions+=1;NFSU2_TR(0x4e231c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e2323:L4e2323:{c.instructions+=5;NFSU2_TR(0x4e2323);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2326:{NFSU2_TR(0x4e2326);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e2329:{NFSU2_TR(0x4e2329);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e232b:{NFSU2_TR(0x4e232b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e232c:{NFSU2_TR(0x4e232c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2331ull));
TAIL_STATIC(0x5162d0u,516);
}
B4e2331:L4e2331:{c.instructions+=3;NFSU2_TR(0x4e2331);
__builtin_memmove((R+4),(R+28),4);
}
B4e2333:{NFSU2_TR(0x4e2333);
__builtin_memmove((R+24),(R+0),4);
}
B4e2335:{NFSU2_TR(0x4e2335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e233aull));
TAIL_STATIC(0x497da0u,497);
}
B4e233a:L4e233a:{c.instructions+=3;NFSU2_TR(0x4e233a);
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
B4e233c:{NFSU2_TR(0x4e233c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e233f:{NFSU2_TR(0x4e233f);
if(r1(R+518)){{goto L4e2442;}}
}
B4e2345:L4e2345:{c.instructions+=3;NFSU2_TR(0x4e2345);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4e2347:{NFSU2_TR(0x4e2347);
__builtin_memmove((R+4),(R+24),4);
}
B4e2349:{NFSU2_TR(0x4e2349);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e234cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e234c:L4e234c:{c.instructions+=2;NFSU2_TR(0x4e234c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e234f:{NFSU2_TR(0x4e234f);
if(r1(R+518)){{goto L4e242b;}}
}
B4e2355:L4e2355:{c.instructions+=5;NFSU2_TR(0x4e2355);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B4e235b:{NFSU2_TR(0x4e235b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4e2361:{NFSU2_TR(0x4e2361);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4e2363:{NFSU2_TR(0x4e2363);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2366:{NFSU2_TR(0x4e2366);
if(r1(R+518)){{goto L4e23a8;}}
}
B4e2368:L4e2368:{c.instructions+=3;NFSU2_TR(0x4e2368);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e236e:{NFSU2_TR(0x4e236e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e2371:{NFSU2_TR(0x4e2371);
if(r1(R+518)){{goto L4e23a8;}}
}
B4e2373:L4e2373:{c.instructions+=2;NFSU2_TR(0x4e2373);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2374:{NFSU2_TR(0x4e2374);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2379ull));
TAIL_STATIC(0x5022c0u,502);
}
B4e2379:L4e2379:{c.instructions+=3;NFSU2_TR(0x4e2379);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e237c:{NFSU2_TR(0x4e237c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e237e:{NFSU2_TR(0x4e237e);
if(r1(R+518)){{goto L4e23a8;}}
}
B4e2380:L4e2380:{c.instructions+=2;NFSU2_TR(0x4e2380);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e2383:{NFSU2_TR(0x4e2383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2388ull));
TAIL_STATIC(0x610180u,610);
}
B4e2388:L4e2388:{c.instructions+=2;NFSU2_TR(0x4e2388);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e238a:{NFSU2_TR(0x4e238a);
if(r1(R+518)){{goto L4e23a8;}}
}
B4e238c:L4e238c:{c.instructions+=7;NFSU2_TR(0x4e238c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e238f:{NFSU2_TR(0x4e238f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2392:{NFSU2_TR(0x4e2392);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e2395:{NFSU2_TR(0x4e2395);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2396:{NFSU2_TR(0x4e2396);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2397:{NFSU2_TR(0x4e2397);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2398:{NFSU2_TR(0x4e2398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e239dull));
TAIL_STATIC(0x534180u,534);
}
B4e239d:L4e239d:{c.instructions+=3;NFSU2_TR(0x4e239d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e23a0:{NFSU2_TR(0x4e23a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e23a2:{NFSU2_TR(0x4e23a2);
if(r1(R+518)){{goto L4e23a8;}}
}
B4e23a4:L4e23a4:{c.instructions+=2;NFSU2_TR(0x4e23a4);
w1(R+12,u8(0x1ull));
}
B4e23a6:{NFSU2_TR(0x4e23a6);
{goto L4e23aa;}
}
B4e23a8:L4e23a8:{c.instructions+=1;NFSU2_TR(0x4e23a8);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4e23aa:L4e23aa:{c.instructions+=4;NFSU2_TR(0x4e23aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e23ad:{NFSU2_TR(0x4e23ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e23b0:{NFSU2_TR(0x4e23b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e23b1:{NFSU2_TR(0x4e23b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e23b6ull));
TAIL_STATIC(0x516340u,516);
}
B4e23b6:L4e23b6:{c.instructions+=2;NFSU2_TR(0x4e23b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e23b8:{NFSU2_TR(0x4e23b8);
if(r1(R+518)){{goto L4e23c4;}}
}
B4e23ba:L4e23ba:{c.instructions+=3;NFSU2_TR(0x4e23ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7f5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e23c0:{NFSU2_TR(0x4e23c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e23c2:{NFSU2_TR(0x4e23c2);
if(r1(R+518)){{goto L4e242b;}}
}
B4e23c4:L4e23c4:{c.instructions+=2;NFSU2_TR(0x4e23c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e23c6:{NFSU2_TR(0x4e23c6);
if(r1(R+518)){{goto L4e242b;}}
}
B4e23c8:L4e23c8:{c.instructions+=2;NFSU2_TR(0x4e23c8);
u8 U[4];
w4(U+0,u32(0x930ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e23cd:{NFSU2_TR(0x4e23cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e23d2ull));
TAIL_STATIC(0x575620u,575);
}
B4e23d2:L4e23d2:{c.instructions+=5;NFSU2_TR(0x4e23d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e23d5:{NFSU2_TR(0x4e23d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e23d8:{NFSU2_TR(0x4e23d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e23da:{NFSU2_TR(0x4e23da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e23e1:{NFSU2_TR(0x4e23e1);
if(r1(R+518)){{goto L4e2404;}}
}
B4e23e3:L4e23e3:{c.instructions+=13;NFSU2_TR(0x4e23e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e23e6:{NFSU2_TR(0x4e23e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e23e9:{NFSU2_TR(0x4e23e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e23ec:{NFSU2_TR(0x4e23ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e23ef:{NFSU2_TR(0x4e23ef);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e23f1:{NFSU2_TR(0x4e23f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e23f2:{NFSU2_TR(0x4e23f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e23f5:{NFSU2_TR(0x4e23f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e23f6:{NFSU2_TR(0x4e23f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e23f9:{NFSU2_TR(0x4e23f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e23fa:{NFSU2_TR(0x4e23fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e23fb:{NFSU2_TR(0x4e23fb);
__builtin_memmove((R+4),(R+0),4);
}
B4e23fd:{NFSU2_TR(0x4e23fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2402ull));
TAIL_STATIC(0x511db0u,511);
}
B4e2402:L4e2402:{c.instructions+=1;NFSU2_TR(0x4e2402);
{goto L4e2406;}
}
B4e2404:L4e2404:{c.instructions+=1;NFSU2_TR(0x4e2404);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e2406:L4e2406:{c.instructions+=3;NFSU2_TR(0x4e2406);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e2408:{NFSU2_TR(0x4e2408);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e240f:{NFSU2_TR(0x4e240f);
if(r1(R+518)){{goto L4e2416;}}
}
B4e2411:L4e2411:{c.instructions+=2;NFSU2_TR(0x4e2411);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B4e2414:{NFSU2_TR(0x4e2414);
{goto L4e2418;}
}
B4e2416:L4e2416:{c.instructions+=1;NFSU2_TR(0x4e2416);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e2418:L4e2418:{c.instructions+=7;NFSU2_TR(0x4e2418);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e241b:{NFSU2_TR(0x4e241b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e241e:{NFSU2_TR(0x4e241e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4e2420:{NFSU2_TR(0x4e2420);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2423:{NFSU2_TR(0x4e2423);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2426:{NFSU2_TR(0x4e2426);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e2428:{NFSU2_TR(0x4e2428);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4e242b:L4e242b:{c.instructions+=5;NFSU2_TR(0x4e242b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e242e:{NFSU2_TR(0x4e242e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e2431:{NFSU2_TR(0x4e2431);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2432:{NFSU2_TR(0x4e2432);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2433:{NFSU2_TR(0x4e2433);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2438ull));
TAIL_STATIC(0x5162d0u,516);
}
B4e2438:L4e2438:{c.instructions+=3;NFSU2_TR(0x4e2438);
__builtin_memmove((R+24),(R+0),4);
}
B4e243a:{NFSU2_TR(0x4e243a);
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
B4e243c:{NFSU2_TR(0x4e243c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e2345u);}goto L4e2345;}}
}
B4e2442:L4e2442:{c.instructions+=4;NFSU2_TR(0x4e2442);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2445:{NFSU2_TR(0x4e2445);
u8 U[4];
w4(U+0,u32(0x40cb20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e244a:{NFSU2_TR(0x4e244a);
__builtin_memmove((R+4),(R+24),4);
}
B4e244c:{NFSU2_TR(0x4e244c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2451ull));
TAIL_STATIC(0x43e650u,43e);
}
B4e2451:L4e2451:{c.instructions+=4;NFSU2_TR(0x4e2451);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2454:{NFSU2_TR(0x4e2454);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aab8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4e245b:{NFSU2_TR(0x4e245b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e245d:{NFSU2_TR(0x4e245d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e247e;}}
}
B4e245f:L4e245f:{c.instructions+=3;NFSU2_TR(0x4e245f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4e2461:{NFSU2_TR(0x4e2461);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e2463:{NFSU2_TR(0x4e2463);
if(r1(R+518)){{goto L4e246a;}}
}
B4e2465:L4e2465:{c.instructions+=2;NFSU2_TR(0x4e2465);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xfffffff0ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xfffffff0ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e2468:{NFSU2_TR(0x4e2468);
{goto L4e246c;}
}
B4e246a:L4e246a:{c.instructions+=1;NFSU2_TR(0x4e246a);
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
B4e246c:L4e246c:{c.instructions+=5;NFSU2_TR(0x4e246c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e246d:{NFSU2_TR(0x4e246d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2473:{NFSU2_TR(0x4e2473);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2474:{NFSU2_TR(0x4e2474);
w4(R+4,u32(0x83aab4ull));
}
B4e2479:{NFSU2_TR(0x4e2479);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e247eull));
TAIL_STATIC(0x502a40u,502);
}
B4e247e:L4e247e:{c.instructions+=3;NFSU2_TR(0x4e247e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4e2480:{NFSU2_TR(0x4e2480);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e2482:{NFSU2_TR(0x4e2482);
if(r1(R+518)){{goto L4e2489;}}
}
B4e2484:L4e2484:{c.instructions+=2;NFSU2_TR(0x4e2484);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e2487:{NFSU2_TR(0x4e2487);
{goto L4e248b;}
}
B4e2489:L4e2489:{c.instructions+=1;NFSU2_TR(0x4e2489);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e248b:L4e248b:{c.instructions+=6;NFSU2_TR(0x4e248b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e248d:{NFSU2_TR(0x4e248d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4e2490:{NFSU2_TR(0x4e2490);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2493:{NFSU2_TR(0x4e2493);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aab8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4e249a:{NFSU2_TR(0x4e249a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e249d:{NFSU2_TR(0x4e249d);
if(r1(R+518)){{goto L4e24a4;}}
}
B4e249f:L4e249f:{c.instructions+=2;NFSU2_TR(0x4e249f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e24a2:{NFSU2_TR(0x4e24a2);
{goto L4e24a6;}
}
B4e24a4:L4e24a4:{c.instructions+=1;NFSU2_TR(0x4e24a4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e24a6:L4e24a6:{c.instructions+=2;NFSU2_TR(0x4e24a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e24a8:{NFSU2_TR(0x4e24a8);
if(r1(R+518)){{goto L4e24af;}}
}
B4e24aa:L4e24aa:{c.instructions+=2;NFSU2_TR(0x4e24aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e24ad:{NFSU2_TR(0x4e24ad);
{goto L4e24b1;}
}
B4e24af:L4e24af:{c.instructions+=1;NFSU2_TR(0x4e24af);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4e24b1:L4e24b1:{c.instructions+=2;NFSU2_TR(0x4e24b1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e24b3:{NFSU2_TR(0x4e24b3);
if(r1(R+518)){{goto L4e24d2;}}
}
B4e24b5:L4e24b5:{c.instructions+=3;NFSU2_TR(0x4e24b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e24b8:{NFSU2_TR(0x4e24b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4e24be:{NFSU2_TR(0x4e24be);
if(r1(R+518)){{goto L4e24cf;}}
}
B4e24c0:L4e24c0:{c.instructions+=4;NFSU2_TR(0x4e24c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4e24c3:{NFSU2_TR(0x4e24c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e24c6:{NFSU2_TR(0x4e24c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e24c8:{NFSU2_TR(0x4e24c8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e24a4u);}goto L4e24a4;}}
}
B4e24ca:L4e24ca:{c.instructions+=2;NFSU2_TR(0x4e24ca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4e24cd:{NFSU2_TR(0x4e24cd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e24a6u);}goto L4e24a6;}
}
B4e24cf:L4e24cf:{c.instructions+=1;NFSU2_TR(0x4e24cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e24d2:L4e24d2:{c.instructions+=2;NFSU2_TR(0x4e24d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e24d4:{NFSU2_TR(0x4e24d4);
if(r1(R+518)){{goto L4e24db;}}
}
B4e24d6:L4e24d6:{c.instructions+=2;NFSU2_TR(0x4e24d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e24d9:{NFSU2_TR(0x4e24d9);
{goto L4e24dd;}
}
B4e24db:L4e24db:{c.instructions+=1;NFSU2_TR(0x4e24db);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4e24dd:L4e24dd:{c.instructions+=3;NFSU2_TR(0x4e24dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e24e0:{NFSU2_TR(0x4e24e0);
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
B4e24e2:{NFSU2_TR(0x4e24e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e24eb;}}
}
B4e24e4:L4e24e4:{c.instructions+=1;NFSU2_TR(0x4e24e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e24eb:L4e24eb:{c.instructions+=5;NFSU2_TR(0x4e24eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e24f1:{NFSU2_TR(0x4e24f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e24f2:{NFSU2_TR(0x4e24f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e24f3:{NFSU2_TR(0x4e24f3);
w4(R+4,u32(0x83aab4ull));
}
B4e24f8:{NFSU2_TR(0x4e24f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e24fdull));
TAIL_STATIC(0x502a40u,502);
}
B4e24fd:L4e24fd:{c.instructions+=2;NFSU2_TR(0x4e24fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e2500:{NFSU2_TR(0x4e2500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2505ull));
TAIL_STATIC(0x511e00u,511);
}
B4e2505:L4e2505:{c.instructions+=3;NFSU2_TR(0x4e2505);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e250a:{NFSU2_TR(0x4e250a);
__builtin_memmove((R+28),(R+0),4);
}
B4e250c:{NFSU2_TR(0x4e250c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2511ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e2511:L4e2511:{c.instructions+=3;NFSU2_TR(0x4e2511);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2514:{NFSU2_TR(0x4e2514);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e2516:{NFSU2_TR(0x4e2516);
if(r1(R+518)){{goto L4e2529;}}
}
B4e2518:L4e2518:{c.instructions+=2;NFSU2_TR(0x4e2518);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e251d:{NFSU2_TR(0x4e251d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2522ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e2522:L4e2522:{c.instructions+=3;NFSU2_TR(0x4e2522);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2525:{NFSU2_TR(0x4e2525);
__builtin_memmove((R+24),(R+0),4);
}
B4e2527:{NFSU2_TR(0x4e2527);
{goto L4e2552;}
}
B4e2529:L4e2529:{c.instructions+=2;NFSU2_TR(0x4e2529);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e252e:{NFSU2_TR(0x4e252e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2533ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e2533:L4e2533:{c.instructions+=3;NFSU2_TR(0x4e2533);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2536:{NFSU2_TR(0x4e2536);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e2538:{NFSU2_TR(0x4e2538);
if(r1(R+518)){{goto L4e2550;}}
}
B4e253a:L4e253a:{c.instructions+=2;NFSU2_TR(0x4e253a);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e253f:{NFSU2_TR(0x4e253f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2544ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e2544:L4e2544:{c.instructions+=3;NFSU2_TR(0x4e2544);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2547:{NFSU2_TR(0x4e2547);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e2549:{NFSU2_TR(0x4e2549);
if(r1(R+518)){{goto L4e2550;}}
}
B4e254b:L4e254b:{c.instructions+=2;NFSU2_TR(0x4e254b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e254e:{NFSU2_TR(0x4e254e);
{goto L4e2552;}
}
B4e2550:L4e2550:{c.instructions+=1;NFSU2_TR(0x4e2550);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4e2552:L4e2552:{c.instructions+=3;NFSU2_TR(0x4e2552);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2553:{NFSU2_TR(0x4e2553);
w4(R+4,u32(0x8371b0ull));
}
B4e2558:{NFSU2_TR(0x4e2558);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e255dull));
TAIL_STATIC(0x413440u,413);
}
B4e255d:L4e255d:{c.instructions+=3;NFSU2_TR(0x4e255d);
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
B4e255f:{NFSU2_TR(0x4e255f);
s4(0x83623c,u32(0x1ull));
}
B4e2569:{NFSU2_TR(0x4e2569);
if(r1(R+518)){{goto L4e2579;}}
}
B4e256b:L4e256b:{c.instructions+=4;NFSU2_TR(0x4e256b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e256d:{NFSU2_TR(0x4e256d);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2572:{NFSU2_TR(0x4e2572);
__builtin_memmove((R+4),(R+24),4);
}
B4e2574:{NFSU2_TR(0x4e2574);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2579ull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4e2579:L4e2579:{c.instructions+=8;NFSU2_TR(0x4e2579);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e257c:{NFSU2_TR(0x4e257c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e257d:{NFSU2_TR(0x4e257d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e257e:{NFSU2_TR(0x4e257e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e257f:{NFSU2_TR(0x4e257f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2586:{NFSU2_TR(0x4e2586);
__builtin_memmove((R+16),(R+20),4);
}
B4e2588:{NFSU2_TR(0x4e2588);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e2589:{NFSU2_TR(0x4e2589);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2590:L4e2590:{c.instructions+=17;NFSU2_TR(0x4e2590);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2591:{NFSU2_TR(0x4e2591);
__builtin_memmove((R+20),(R+16),4);
}
B4e2593:{NFSU2_TR(0x4e2593);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4e2596:{NFSU2_TR(0x4e2596);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2598:{NFSU2_TR(0x4e2598);
u8 U[4];
w4(U+0,u32(0x77389bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e259d:{NFSU2_TR(0x4e259d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e25a3:{NFSU2_TR(0x4e25a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e25a4:{NFSU2_TR(0x4e25a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e25ab:{NFSU2_TR(0x4e25ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8fcull))));
}
B4e25b1:{NFSU2_TR(0x4e25b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e25b2:{NFSU2_TR(0x4e25b2);
__builtin_memmove((R+24),(R+4),4);
}
B4e25b4:{NFSU2_TR(0x4e25b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e25b7:{NFSU2_TR(0x4e25b7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e25bd:{NFSU2_TR(0x4e25bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e25c0:{NFSU2_TR(0x4e25c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e25c1:{NFSU2_TR(0x4e25c1);
__builtin_memmove((R+28),(R+0),4);
}
B4e25c3:{NFSU2_TR(0x4e25c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e2699;}}
}
B4e25c9:L4e25c9:{c.instructions+=3;NFSU2_TR(0x4e25c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e25cc:{NFSU2_TR(0x4e25cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e25ce:{NFSU2_TR(0x4e25ce);
if(r1(R+518)){{goto L4e25d5;}}
}
B4e25d0:L4e25d0:{c.instructions+=2;NFSU2_TR(0x4e25d0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
}
B4e25d3:{NFSU2_TR(0x4e25d3);
{goto L4e25d7;}
}
B4e25d5:L4e25d5:{c.instructions+=1;NFSU2_TR(0x4e25d5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4e25d7:L4e25d7:{c.instructions+=2;NFSU2_TR(0x4e25d7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e25d9:{NFSU2_TR(0x4e25d9);
if(r1(R+518)){{goto L4e2756;}}
}
B4e25df:L4e25df:{c.instructions+=6;NFSU2_TR(0x4e25df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e25e2:{NFSU2_TR(0x4e25e2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e25e4:{NFSU2_TR(0x4e25e4);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e25e9:{NFSU2_TR(0x4e25e9);
u8 U[4];
w4(U+0,u32(0x790e98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e25ee:{NFSU2_TR(0x4e25ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e25ef:{NFSU2_TR(0x4e25ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e25f4ull));
TAIL_STATIC(0x5426c0u,542);
}
B4e25f4:L4e25f4:{c.instructions+=5;NFSU2_TR(0x4e25f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e25f7:{NFSU2_TR(0x4e25f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e25fa:{NFSU2_TR(0x4e25fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e25fd:{NFSU2_TR(0x4e25fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e25ff:{NFSU2_TR(0x4e25ff);
if(r1(R+518)){{goto L4e2606;}}
}
B4e2601:L4e2601:{c.instructions+=2;NFSU2_TR(0x4e2601);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffff0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffff0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e2604:{NFSU2_TR(0x4e2604);
{goto L4e2608;}
}
B4e2606:L4e2606:{c.instructions+=1;NFSU2_TR(0x4e2606);
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
B4e2608:L4e2608:{c.instructions+=7;NFSU2_TR(0x4e2608);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e260b:{NFSU2_TR(0x4e260b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e260e:{NFSU2_TR(0x4e260e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2614:{NFSU2_TR(0x4e2614);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2615:{NFSU2_TR(0x4e2615);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2616:{NFSU2_TR(0x4e2616);
w4(R+4,u32(0x83aab4ull));
}
B4e261b:{NFSU2_TR(0x4e261b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2620ull));
TAIL_STATIC(0x502a40u,502);
}
B4e2620:L4e2620:{c.instructions+=5;NFSU2_TR(0x4e2620);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e2623:{NFSU2_TR(0x4e2623);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4e2624:{NFSU2_TR(0x4e2624);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2629:{NFSU2_TR(0x4e2629);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e262c:{NFSU2_TR(0x4e262c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2631ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e2631:L4e2631:{c.instructions+=3;NFSU2_TR(0x4e2631);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2634:{NFSU2_TR(0x4e2634);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e2636:{NFSU2_TR(0x4e2636);
if(r1(R+518)){{goto L4e2654;}}
}
B4e2638:L4e2638:{c.instructions+=2;NFSU2_TR(0x4e2638);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e263d:{NFSU2_TR(0x4e263d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2642ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e2642:L4e2642:{c.instructions+=3;NFSU2_TR(0x4e2642);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2645:{NFSU2_TR(0x4e2645);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x148ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e264f:{NFSU2_TR(0x4e264f);
{goto L4e2756;}
}
B4e2654:L4e2654:{c.instructions+=2;NFSU2_TR(0x4e2654);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2659:{NFSU2_TR(0x4e2659);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e265eull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e265e:L4e265e:{c.instructions+=3;NFSU2_TR(0x4e265e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2661:{NFSU2_TR(0x4e2661);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e2663:{NFSU2_TR(0x4e2663);
if(r1(R+518)){{goto L4e2688;}}
}
B4e2665:L4e2665:{c.instructions+=2;NFSU2_TR(0x4e2665);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e266a:{NFSU2_TR(0x4e266a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e266full));
TAIL_STATIC(0x51bd10u,51b);
}
B4e266f:L4e266f:{c.instructions+=3;NFSU2_TR(0x4e266f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2672:{NFSU2_TR(0x4e2672);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e2674:{NFSU2_TR(0x4e2674);
if(r1(R+518)){{goto L4e2688;}}
}
B4e2676:L4e2676:{c.instructions+=3;NFSU2_TR(0x4e2676);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2679:{NFSU2_TR(0x4e2679);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x148ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e2683:{NFSU2_TR(0x4e2683);
{goto L4e2756;}
}
B4e2688:L4e2688:{c.instructions+=3;NFSU2_TR(0x4e2688);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e268a:{NFSU2_TR(0x4e268a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x148ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e2694:{NFSU2_TR(0x4e2694);
{goto L4e2756;}
}
B4e2699:L4e2699:{c.instructions+=2;NFSU2_TR(0x4e2699);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e269f:{NFSU2_TR(0x4e269f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e2756;}}
}
B4e26a5:L4e26a5:{c.instructions+=3;NFSU2_TR(0x4e26a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e26a8:{NFSU2_TR(0x4e26a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e26aa:{NFSU2_TR(0x4e26aa);
if(r1(R+518)){{goto L4e26b1;}}
}
B4e26ac:L4e26ac:{c.instructions+=2;NFSU2_TR(0x4e26ac);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
}
B4e26af:{NFSU2_TR(0x4e26af);
{goto L4e26b3;}
}
B4e26b1:L4e26b1:{c.instructions+=1;NFSU2_TR(0x4e26b1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4e26b3:L4e26b3:{c.instructions+=2;NFSU2_TR(0x4e26b3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e26b5:{NFSU2_TR(0x4e26b5);
if(r1(R+518)){{goto L4e2756;}}
}
B4e26bb:L4e26bb:{c.instructions+=6;NFSU2_TR(0x4e26bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e26be:{NFSU2_TR(0x4e26be);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e26c0:{NFSU2_TR(0x4e26c0);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e26c5:{NFSU2_TR(0x4e26c5);
u8 U[4];
w4(U+0,u32(0x790e84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e26ca:{NFSU2_TR(0x4e26ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e26cb:{NFSU2_TR(0x4e26cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e26d0ull));
TAIL_STATIC(0x5426c0u,542);
}
B4e26d0:L4e26d0:{c.instructions+=5;NFSU2_TR(0x4e26d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e26d3:{NFSU2_TR(0x4e26d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e26d6:{NFSU2_TR(0x4e26d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e26d9:{NFSU2_TR(0x4e26d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e26db:{NFSU2_TR(0x4e26db);
if(r1(R+518)){{goto L4e26e2;}}
}
B4e26dd:L4e26dd:{c.instructions+=2;NFSU2_TR(0x4e26dd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffff0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffff0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e26e0:{NFSU2_TR(0x4e26e0);
{goto L4e26e4;}
}
B4e26e2:L4e26e2:{c.instructions+=1;NFSU2_TR(0x4e26e2);
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
B4e26e4:L4e26e4:{c.instructions+=7;NFSU2_TR(0x4e26e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e26e7:{NFSU2_TR(0x4e26e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e26ea:{NFSU2_TR(0x4e26ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e26f0:{NFSU2_TR(0x4e26f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e26f1:{NFSU2_TR(0x4e26f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e26f2:{NFSU2_TR(0x4e26f2);
w4(R+4,u32(0x83aab4ull));
}
B4e26f7:{NFSU2_TR(0x4e26f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e26fcull));
TAIL_STATIC(0x502a40u,502);
}
B4e26fc:L4e26fc:{c.instructions+=5;NFSU2_TR(0x4e26fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e26ff:{NFSU2_TR(0x4e26ff);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4e2700:{NFSU2_TR(0x4e2700);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2705:{NFSU2_TR(0x4e2705);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2708:{NFSU2_TR(0x4e2708);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e270dull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e270d:L4e270d:{c.instructions+=3;NFSU2_TR(0x4e270d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2710:{NFSU2_TR(0x4e2710);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e2712:{NFSU2_TR(0x4e2712);
if(r1(R+518)){{goto L4e2723;}}
}
B4e2714:L4e2714:{c.instructions+=2;NFSU2_TR(0x4e2714);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2719:{NFSU2_TR(0x4e2719);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e271eull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e271e:L4e271e:{c.instructions+=2;NFSU2_TR(0x4e271e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2721:{NFSU2_TR(0x4e2721);
{goto L4e274c;}
}
B4e2723:L4e2723:{c.instructions+=2;NFSU2_TR(0x4e2723);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2728:{NFSU2_TR(0x4e2728);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e272dull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e272d:L4e272d:{c.instructions+=3;NFSU2_TR(0x4e272d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2730:{NFSU2_TR(0x4e2730);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e2732:{NFSU2_TR(0x4e2732);
if(r1(R+518)){{goto L4e274a;}}
}
B4e2734:L4e2734:{c.instructions+=2;NFSU2_TR(0x4e2734);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2739:{NFSU2_TR(0x4e2739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e273eull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e273e:L4e273e:{c.instructions+=3;NFSU2_TR(0x4e273e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2741:{NFSU2_TR(0x4e2741);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e2743:{NFSU2_TR(0x4e2743);
if(r1(R+518)){{goto L4e274a;}}
}
B4e2745:L4e2745:{c.instructions+=2;NFSU2_TR(0x4e2745);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2748:{NFSU2_TR(0x4e2748);
{goto L4e274c;}
}
B4e274a:L4e274a:{c.instructions+=1;NFSU2_TR(0x4e274a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e274c:L4e274c:{c.instructions+=1;NFSU2_TR(0x4e274c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x148ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e2756:L4e2756:{c.instructions+=3;NFSU2_TR(0x4e2756);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2759:{NFSU2_TR(0x4e2759);
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
B4e275b:{NFSU2_TR(0x4e275b);
if(r1(R+518)){{goto L4e28e8;}}
}
B4e2761:L4e2761:{c.instructions+=4;NFSU2_TR(0x4e2761);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e2767:{NFSU2_TR(0x4e2767);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x844ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e276d:{NFSU2_TR(0x4e276d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e276f:{NFSU2_TR(0x4e276f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e2804;}}
}
B4e2775:L4e2775:{c.instructions+=4;NFSU2_TR(0x4e2775);
__builtin_memmove((R+8),(R+4),4);
}
B4e2777:{NFSU2_TR(0x4e2777);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e277d:{NFSU2_TR(0x4e277d);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2782:{NFSU2_TR(0x4e2782);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2787ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e2787:L4e2787:{c.instructions+=3;NFSU2_TR(0x4e2787);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e278a:{NFSU2_TR(0x4e278a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e278c:{NFSU2_TR(0x4e278c);
if(r1(R+518)){{goto L4e279d;}}
}
B4e278e:L4e278e:{c.instructions+=2;NFSU2_TR(0x4e278e);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2793:{NFSU2_TR(0x4e2793);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2798ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e2798:L4e2798:{c.instructions+=2;NFSU2_TR(0x4e2798);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e279b:{NFSU2_TR(0x4e279b);
{goto L4e27c2;}
}
B4e279d:L4e279d:{c.instructions+=2;NFSU2_TR(0x4e279d);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e27a2:{NFSU2_TR(0x4e27a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e27a7ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e27a7:L4e27a7:{c.instructions+=3;NFSU2_TR(0x4e27a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e27aa:{NFSU2_TR(0x4e27aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e27ac:{NFSU2_TR(0x4e27ac);
if(r1(R+518)){{goto L4e27ce;}}
}
B4e27ae:L4e27ae:{c.instructions+=2;NFSU2_TR(0x4e27ae);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e27b3:{NFSU2_TR(0x4e27b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e27b8ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e27b8:L4e27b8:{c.instructions+=3;NFSU2_TR(0x4e27b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e27bb:{NFSU2_TR(0x4e27bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e27bd:{NFSU2_TR(0x4e27bd);
if(r1(R+518)){{goto L4e27ce;}}
}
B4e27bf:L4e27bf:{c.instructions+=1;NFSU2_TR(0x4e27bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e27c2:L4e27c2:{c.instructions+=2;NFSU2_TR(0x4e27c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e27c4:{NFSU2_TR(0x4e27c4);
if(r1(R+518)){{goto L4e27ce;}}
}
B4e27c6:L4e27c6:{c.instructions+=3;NFSU2_TR(0x4e27c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e27c7:{NFSU2_TR(0x4e27c7);
__builtin_memmove((R+4),(R+0),4);
}
B4e27c9:{NFSU2_TR(0x4e27c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e27ceull));
TAIL_STATIC(0x4a5ee0u,4a5);
}
B4e27ce:L4e27ce:{c.instructions+=2;NFSU2_TR(0x4e27ce);
u8 U[8];
__builtin_memmove((U+0),gp(0x7f444c),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e27d5:{NFSU2_TR(0x4e27d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e27f3;}}
}
B4e27d7:L4e27d7:{c.instructions+=5;NFSU2_TR(0x4e27d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e27da:{NFSU2_TR(0x4e27da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e27e0:{NFSU2_TR(0x4e27e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e27e1:{NFSU2_TR(0x4e27e1);
w4(R+4,u32(0x83ad90ull));
}
B4e27e6:{NFSU2_TR(0x4e27e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e27ebull));
TAIL_STATIC(0x503510u,503);
}
B4e27eb:L4e27eb:{c.instructions+=3;NFSU2_TR(0x4e27eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e27ec:{NFSU2_TR(0x4e27ec);
__builtin_memmove((R+4),(R+24),4);
}
B4e27ee:{NFSU2_TR(0x4e27ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e27f3ull));
TAIL_STATIC(0x497f20u,497);
}
B4e27f3:L4e27f3:{c.instructions+=3;NFSU2_TR(0x4e27f3);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4e27f9:{NFSU2_TR(0x4e27f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e27ff:{NFSU2_TR(0x4e27ff);
{goto L4e28e1;}
}
B4e2804:L4e2804:{c.instructions+=2;NFSU2_TR(0x4e2804);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e2808:{NFSU2_TR(0x4e2808);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e280dull));
TAIL_STATIC(0x40c910u,40c);
}
B4e280d:L4e280d:{c.instructions+=10;NFSU2_TR(0x4e280d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2810:{NFSU2_TR(0x4e2810);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e2816:{NFSU2_TR(0x4e2816);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e281c:{NFSU2_TR(0x4e281c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e281e:{NFSU2_TR(0x4e281e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2820:{NFSU2_TR(0x4e2820);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2822:{NFSU2_TR(0x4e2822);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2823:{NFSU2_TR(0x4e2823);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e2827:{NFSU2_TR(0x4e2827);
u8 U[8];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e2832:{NFSU2_TR(0x4e2832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2837ull));
TAIL_STATIC(0x610270u,610);
}
B4e2837:L4e2837:{c.instructions+=3;NFSU2_TR(0x4e2837);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2839:{NFSU2_TR(0x4e2839);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e283d:{NFSU2_TR(0x4e283d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2842ull));
TAIL_STATIC(0x61c280u,61c);
}
B4e2842:L4e2842:{c.instructions+=2;NFSU2_TR(0x4e2842);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e2846:{NFSU2_TR(0x4e2846);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e284bull));
TAIL_STATIC(0x637190u,637);
}
B4e284b:L4e284b:{c.instructions+=2;NFSU2_TR(0x4e284b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e284f:{NFSU2_TR(0x4e284f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2854ull));
TAIL_STATIC(0x6371e0u,637);
}
B4e2854:L4e2854:{c.instructions+=2;NFSU2_TR(0x4e2854);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2859:{NFSU2_TR(0x4e2859);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e285eull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e285e:L4e285e:{c.instructions+=3;NFSU2_TR(0x4e285e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2861:{NFSU2_TR(0x4e2861);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e2863:{NFSU2_TR(0x4e2863);
if(r1(R+518)){{goto L4e2876;}}
}
B4e2865:L4e2865:{c.instructions+=2;NFSU2_TR(0x4e2865);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e286a:{NFSU2_TR(0x4e286a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e286full));
TAIL_STATIC(0x51bd10u,51b);
}
B4e286f:L4e286f:{c.instructions+=3;NFSU2_TR(0x4e286f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2872:{NFSU2_TR(0x4e2872);
__builtin_memmove((R+28),(R+0),4);
}
B4e2874:{NFSU2_TR(0x4e2874);
{goto L4e289f;}
}
B4e2876:L4e2876:{c.instructions+=2;NFSU2_TR(0x4e2876);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e287b:{NFSU2_TR(0x4e287b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2880ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e2880:L4e2880:{c.instructions+=3;NFSU2_TR(0x4e2880);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2883:{NFSU2_TR(0x4e2883);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e2885:{NFSU2_TR(0x4e2885);
if(r1(R+518)){{goto L4e289d;}}
}
B4e2887:L4e2887:{c.instructions+=2;NFSU2_TR(0x4e2887);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e288c:{NFSU2_TR(0x4e288c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2891ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e2891:L4e2891:{c.instructions+=3;NFSU2_TR(0x4e2891);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2894:{NFSU2_TR(0x4e2894);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e2896:{NFSU2_TR(0x4e2896);
if(r1(R+518)){{goto L4e289d;}}
}
B4e2898:L4e2898:{c.instructions+=2;NFSU2_TR(0x4e2898);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e289b:{NFSU2_TR(0x4e289b);
{goto L4e289f;}
}
B4e289d:L4e289d:{c.instructions+=1;NFSU2_TR(0x4e289d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e289f:L4e289f:{c.instructions+=4;NFSU2_TR(0x4e289f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e28a3:{NFSU2_TR(0x4e28a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e28a4:{NFSU2_TR(0x4e28a4);
w4(R+4,u32(0x8371b0ull));
}
B4e28a9:{NFSU2_TR(0x4e28a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e28aeull));
TAIL_STATIC(0x413440u,413);
}
B4e28ae:L4e28ae:{c.instructions+=3;NFSU2_TR(0x4e28ae);
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
B4e28b0:{NFSU2_TR(0x4e28b0);
s4(0x83623c,u32(0x1ull));
}
B4e28ba:{NFSU2_TR(0x4e28ba);
if(r1(R+518)){{goto L4e28ca;}}
}
B4e28bc:L4e28bc:{c.instructions+=4;NFSU2_TR(0x4e28bc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e28be:{NFSU2_TR(0x4e28be);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e28c3:{NFSU2_TR(0x4e28c3);
__builtin_memmove((R+4),(R+28),4);
}
B4e28c5:{NFSU2_TR(0x4e28c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e28caull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4e28ca:L4e28ca:{c.instructions+=3;NFSU2_TR(0x4e28ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e28d1:{NFSU2_TR(0x4e28d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e28dc:{NFSU2_TR(0x4e28dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e28e1ull));
TAIL_STATIC(0x4022c0u,402);
}
B4e28e1:L4e28e1:{c.instructions+=2;NFSU2_TR(0x4e28e1);
__builtin_memmove((R+4),(R+24),4);
}
B4e28e3:{NFSU2_TR(0x4e28e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e28e8ull));
TAIL_STATIC(0x4b2310u,4b2);
}
B4e28e8:L4e28e8:{c.instructions+=7;NFSU2_TR(0x4e28e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e28ef:{NFSU2_TR(0x4e28ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e28f0:{NFSU2_TR(0x4e28f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e28f7:{NFSU2_TR(0x4e28f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e28f8:{NFSU2_TR(0x4e28f8);
__builtin_memmove((R+16),(R+20),4);
}
B4e28fa:{NFSU2_TR(0x4e28fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e28fb:{NFSU2_TR(0x4e28fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2900:L4e2900:{c.instructions+=20;NFSU2_TR(0x4e2900);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2902:{NFSU2_TR(0x4e2902);
u8 U[4];
w4(U+0,u32(0x775a1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2907:{NFSU2_TR(0x4e2907);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e290d:{NFSU2_TR(0x4e290d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e290e:{NFSU2_TR(0x4e290e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2915:{NFSU2_TR(0x4e2915);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2916:{NFSU2_TR(0x4e2916);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2917:{NFSU2_TR(0x4e2917);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2918:{NFSU2_TR(0x4e2918);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2919:{NFSU2_TR(0x4e2919);
__builtin_memmove((R+28),(R+4),4);
}
B4e291b:{NFSU2_TR(0x4e291b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e291e:{NFSU2_TR(0x4e291e);
u8 U[4];
w4(U+0,u32(0x79771cull));
s4(u32(r4(R+28)),r4(U+0));
}
B4e2924:{NFSU2_TR(0x4e2924);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2928:{NFSU2_TR(0x4e2928);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4e292a:{NFSU2_TR(0x4e292a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e292d:{NFSU2_TR(0x4e292d);
__builtin_memmove((R+0),gp(0x7f445c),4);
}
B4e2932:{NFSU2_TR(0x4e2932);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2933:{NFSU2_TR(0x4e2933);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e293b:{NFSU2_TR(0x4e293b);
__builtin_memmove((R+12),(R+0),4);
}
B4e293d:{NFSU2_TR(0x4e293d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2942ull));
TAIL_STATIC(0x4b2960u,4b2);
}
B4e2942:L4e2942:{c.instructions+=2;NFSU2_TR(0x4e2942);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e2944:{NFSU2_TR(0x4e2944);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e2976;}}
}
B4e2946:L4e2946:{c.instructions+=2;NFSU2_TR(0x4e2946);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2948:{NFSU2_TR(0x4e2948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e294dull));
TAIL_STATIC(0x575620u,575);
}
B4e294d:L4e294d:{c.instructions+=3;NFSU2_TR(0x4e294d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2950:{NFSU2_TR(0x4e2950);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e2952:{NFSU2_TR(0x4e2952);
if(r1(R+518)){{goto L4e2967;}}
}
B4e2954:L4e2954:{c.instructions+=4;NFSU2_TR(0x4e2954);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2957:{NFSU2_TR(0x4e2957);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x4b2a80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e295e:{NFSU2_TR(0x4e295e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x498290ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e2965:{NFSU2_TR(0x4e2965);
{goto L4e2969;}
}
B4e2967:L4e2967:{c.instructions+=1;NFSU2_TR(0x4e2967);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e2969:L4e2969:{c.instructions+=5;NFSU2_TR(0x4e2969);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e296c:{NFSU2_TR(0x4e296c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e296e:{NFSU2_TR(0x4e296e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2971:{NFSU2_TR(0x4e2971);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2974:{NFSU2_TR(0x4e2974);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e2976:L4e2976:{c.instructions+=5;NFSU2_TR(0x4e2976);
__builtin_memmove((R+0),gp(0x7f4460),4);
}
B4e297b:{NFSU2_TR(0x4e297b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e297c:{NFSU2_TR(0x4e297c);
__builtin_memmove((R+4),(R+28),4);
}
B4e297e:{NFSU2_TR(0x4e297e);
__builtin_memmove((R+12),(R+0),4);
}
B4e2980:{NFSU2_TR(0x4e2980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2985ull));
TAIL_STATIC(0x4b2960u,4b2);
}
B4e2985:L4e2985:{c.instructions+=2;NFSU2_TR(0x4e2985);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e2987:{NFSU2_TR(0x4e2987);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e29b9;}}
}
B4e2989:L4e2989:{c.instructions+=2;NFSU2_TR(0x4e2989);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e298b:{NFSU2_TR(0x4e298b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2990ull));
TAIL_STATIC(0x575620u,575);
}
B4e2990:L4e2990:{c.instructions+=3;NFSU2_TR(0x4e2990);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2993:{NFSU2_TR(0x4e2993);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e2995:{NFSU2_TR(0x4e2995);
if(r1(R+518)){{goto L4e29aa;}}
}
B4e2997:L4e2997:{c.instructions+=4;NFSU2_TR(0x4e2997);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e299a:{NFSU2_TR(0x4e299a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x498220ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e29a1:{NFSU2_TR(0x4e29a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x4b2af0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e29a8:{NFSU2_TR(0x4e29a8);
{goto L4e29ac;}
}
B4e29aa:L4e29aa:{c.instructions+=1;NFSU2_TR(0x4e29aa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e29ac:L4e29ac:{c.instructions+=5;NFSU2_TR(0x4e29ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e29af:{NFSU2_TR(0x4e29af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e29b1:{NFSU2_TR(0x4e29b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e29b4:{NFSU2_TR(0x4e29b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e29b7:{NFSU2_TR(0x4e29b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e29b9:L4e29b9:{c.instructions+=5;NFSU2_TR(0x4e29b9);
__builtin_memmove((R+0),gp(0x7f4464),4);
}
B4e29be:{NFSU2_TR(0x4e29be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e29bf:{NFSU2_TR(0x4e29bf);
__builtin_memmove((R+4),(R+28),4);
}
B4e29c1:{NFSU2_TR(0x4e29c1);
__builtin_memmove((R+12),(R+0),4);
}
B4e29c3:{NFSU2_TR(0x4e29c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e29c8ull));
TAIL_STATIC(0x4b2960u,4b2);
}
B4e29c8:L4e29c8:{c.instructions+=2;NFSU2_TR(0x4e29c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e29ca:{NFSU2_TR(0x4e29ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e29fc;}}
}
B4e29cc:L4e29cc:{c.instructions+=2;NFSU2_TR(0x4e29cc);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e29ce:{NFSU2_TR(0x4e29ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e29d3ull));
TAIL_STATIC(0x575620u,575);
}
B4e29d3:L4e29d3:{c.instructions+=3;NFSU2_TR(0x4e29d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e29d6:{NFSU2_TR(0x4e29d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e29d8:{NFSU2_TR(0x4e29d8);
if(r1(R+518)){{goto L4e29ed;}}
}
B4e29da:L4e29da:{c.instructions+=4;NFSU2_TR(0x4e29da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e29dd:{NFSU2_TR(0x4e29dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x498240ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e29e4:{NFSU2_TR(0x4e29e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x4982b0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e29eb:{NFSU2_TR(0x4e29eb);
{goto L4e29ef;}
}
B4e29ed:L4e29ed:{c.instructions+=1;NFSU2_TR(0x4e29ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e29ef:L4e29ef:{c.instructions+=5;NFSU2_TR(0x4e29ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e29f2:{NFSU2_TR(0x4e29f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e29f4:{NFSU2_TR(0x4e29f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e29f7:{NFSU2_TR(0x4e29f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e29fa:{NFSU2_TR(0x4e29fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e29fc:L4e29fc:{c.instructions+=12;NFSU2_TR(0x4e29fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2a00:{NFSU2_TR(0x4e2a00);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e2a04:{NFSU2_TR(0x4e2a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2a07:{NFSU2_TR(0x4e2a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2a0a:{NFSU2_TR(0x4e2a0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e2a0e:{NFSU2_TR(0x4e2a0e);
__builtin_memmove((R+0),(R+28),4);
}
B4e2a10:{NFSU2_TR(0x4e2a10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e2a11:{NFSU2_TR(0x4e2a11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2a12:{NFSU2_TR(0x4e2a12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e2a13:{NFSU2_TR(0x4e2a13);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2a1a:{NFSU2_TR(0x4e2a1a);
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
B4e2a1d:{NFSU2_TR(0x4e2a1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2a20:L4e2a20:{c.instructions+=6;NFSU2_TR(0x4e2a20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2a21:{NFSU2_TR(0x4e2a21);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2a24:{NFSU2_TR(0x4e2a24);
u8 U[4];
w4(U+0,u32(0x79771cull));
s4(u32(r4(R+4)),r4(U+0));
}
B4e2a2a:{NFSU2_TR(0x4e2a2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e2a2c:{NFSU2_TR(0x4e2a2c);
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
B4e2a2e:{NFSU2_TR(0x4e2a2e);
if(r1(R+518)){{goto L4e2a49;}}
}
B4e2a30:L4e2a30:{c.instructions+=6;NFSU2_TR(0x4e2a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4e2a32:{NFSU2_TR(0x4e2a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e2a35:{NFSU2_TR(0x4e2a35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4e2a37:{NFSU2_TR(0x4e2a37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2a38:{NFSU2_TR(0x4e2a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2a3b:{NFSU2_TR(0x4e2a3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2a40ull));
TAIL_STATIC(0x575630u,575);
}
B4e2a40:L4e2a40:{c.instructions+=4;NFSU2_TR(0x4e2a40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e2a42:{NFSU2_TR(0x4e2a42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2a45:{NFSU2_TR(0x4e2a45);
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
B4e2a47:{NFSU2_TR(0x4e2a47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e2a30u);}goto L4e2a30;}}
}
B4e2a49:L4e2a49:{c.instructions+=2;NFSU2_TR(0x4e2a49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2a4a:{NFSU2_TR(0x4e2a4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2a50:L4e2a50:{c.instructions+=12;NFSU2_TR(0x4e2a50);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2a52:{NFSU2_TR(0x4e2a52);
u8 U[4];
w4(U+0,u32(0x776178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2a57:{NFSU2_TR(0x4e2a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2a5d:{NFSU2_TR(0x4e2a5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2a5e:{NFSU2_TR(0x4e2a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2a65:{NFSU2_TR(0x4e2a65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2a66:{NFSU2_TR(0x4e2a66);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2a6a:{NFSU2_TR(0x4e2a6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2a6b:{NFSU2_TR(0x4e2a6b);
__builtin_memmove((R+24),(R+4),4);
}
B4e2a6d:{NFSU2_TR(0x4e2a6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2a6e:{NFSU2_TR(0x4e2a6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2a72:{NFSU2_TR(0x4e2a72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2a77ull));
TAIL_STATIC(0x552330u,552);
}
B4e2a77:L4e2a77:{c.instructions+=4;NFSU2_TR(0x4e2a77);
__builtin_memmove((R+4),(R+24),4);
}
B4e2a79:{NFSU2_TR(0x4e2a79);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e2a81:{NFSU2_TR(0x4e2a81);
u8 U[4];
w4(U+0,u32(0x797734ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e2a87:{NFSU2_TR(0x4e2a87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2a8cull));
TAIL_STATIC(0x4b2d60u,4b2);
}
B4e2a8c:L4e2a8c:{c.instructions+=2;NFSU2_TR(0x4e2a8c);
__builtin_memmove((R+4),(R+24),4);
}
B4e2a8e:{NFSU2_TR(0x4e2a8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2a93ull));
TAIL_STATIC(0x50da50u,50d);
}
B4e2a93:L4e2a93:{c.instructions+=3;NFSU2_TR(0x4e2a93);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4e2a98:{NFSU2_TR(0x4e2a98);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e2a9b:{NFSU2_TR(0x4e2a9b);
if(r1(R+518)){{goto L4e2b6c;}}
}
B4e2aa1:L4e2aa1:{c.instructions+=2;NFSU2_TR(0x4e2aa1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e2aa6:{NFSU2_TR(0x4e2aa6);
if(r1(R+518)){{goto L4e2b6c;}}
}
B4e2aac:L4e2aac:{c.instructions+=2;NFSU2_TR(0x4e2aac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e2aaf:{NFSU2_TR(0x4e2aaf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e2b10;}}
}
B4e2ab1:L4e2ab1:{c.instructions+=6;NFSU2_TR(0x4e2ab1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e2ab4:{NFSU2_TR(0x4e2ab4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2ab6:{NFSU2_TR(0x4e2ab6);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2abb:{NFSU2_TR(0x4e2abb);
u8 U[4];
w4(U+0,u32(0x2bac0ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2ac0:{NFSU2_TR(0x4e2ac0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2ac1:{NFSU2_TR(0x4e2ac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2ac6ull));
TAIL_STATIC(0x537c00u,537);
}
B4e2ac6:L4e2ac6:{c.instructions+=4;NFSU2_TR(0x4e2ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2ac9:{NFSU2_TR(0x4e2ac9);
u8 U[4];
w4(U+0,u32(0x4fd28546ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2ace:{NFSU2_TR(0x4e2ace);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2acf:{NFSU2_TR(0x4e2acf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2ad4ull));
TAIL_STATIC(0x5379c0u,537);
}
B4e2ad4:L4e2ad4:{c.instructions+=2;NFSU2_TR(0x4e2ad4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2ad5:{NFSU2_TR(0x4e2ad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2adaull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e2ada:L4e2ada:{c.instructions+=6;NFSU2_TR(0x4e2ada);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2add:{NFSU2_TR(0x4e2add);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4e2ae0:{NFSU2_TR(0x4e2ae0);
u8 U[4];
w4(U+0,u32(0xef9f780dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2ae5:{NFSU2_TR(0x4e2ae5);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2aea:{NFSU2_TR(0x4e2aea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2aeb:{NFSU2_TR(0x4e2aeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2af0ull));
TAIL_STATIC(0x537a10u,537);
}
B4e2af0:L4e2af0:{c.instructions+=3;NFSU2_TR(0x4e2af0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e2af3:{NFSU2_TR(0x4e2af3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2af4:{NFSU2_TR(0x4e2af4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2af9ull));
TAIL_STATIC(0x50c900u,50c);
}
B4e2af9:L4e2af9:{c.instructions+=7;NFSU2_TR(0x4e2af9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e2afc:{NFSU2_TR(0x4e2afc);
__builtin_memmove((R+0),(R+24),4);
}
B4e2afe:{NFSU2_TR(0x4e2afe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2aff:{NFSU2_TR(0x4e2aff);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e2b03:{NFSU2_TR(0x4e2b03);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2b0a:{NFSU2_TR(0x4e2b0a);
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
B4e2b0d:{NFSU2_TR(0x4e2b0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2b10:L4e2b10:{c.instructions+=5;NFSU2_TR(0x4e2b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2b13:{NFSU2_TR(0x4e2b13);
u8 U[4];
w4(U+0,u32(0x5416105ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2b18:{NFSU2_TR(0x4e2b18);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2b1d:{NFSU2_TR(0x4e2b1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2b1e:{NFSU2_TR(0x4e2b1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2b23ull));
TAIL_STATIC(0x537a10u,537);
}
B4e2b23:L4e2b23:{c.instructions+=3;NFSU2_TR(0x4e2b23);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e2b26:{NFSU2_TR(0x4e2b26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2b27:{NFSU2_TR(0x4e2b27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2b2cull));
TAIL_STATIC(0x50c900u,50c);
}
B4e2b2c:L4e2b2c:{c.instructions+=6;NFSU2_TR(0x4e2b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e2b2f:{NFSU2_TR(0x4e2b2f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2b31:{NFSU2_TR(0x4e2b31);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2b36:{NFSU2_TR(0x4e2b36);
u8 U[4];
w4(U+0,u32(0x2bac0ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2b3b:{NFSU2_TR(0x4e2b3b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2b3c:{NFSU2_TR(0x4e2b3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2b41ull));
TAIL_STATIC(0x537c00u,537);
}
B4e2b41:L4e2b41:{c.instructions+=4;NFSU2_TR(0x4e2b41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2b44:{NFSU2_TR(0x4e2b44);
u8 U[4];
w4(U+0,u32(0x4fd28546ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2b49:{NFSU2_TR(0x4e2b49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2b4a:{NFSU2_TR(0x4e2b4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2b4full));
TAIL_STATIC(0x5379c0u,537);
}
B4e2b4f:L4e2b4f:{c.instructions+=2;NFSU2_TR(0x4e2b4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2b50:{NFSU2_TR(0x4e2b50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2b55ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e2b55:L4e2b55:{c.instructions+=7;NFSU2_TR(0x4e2b55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4e2b58:{NFSU2_TR(0x4e2b58);
__builtin_memmove((R+0),(R+24),4);
}
B4e2b5a:{NFSU2_TR(0x4e2b5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2b5b:{NFSU2_TR(0x4e2b5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e2b5f:{NFSU2_TR(0x4e2b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2b66:{NFSU2_TR(0x4e2b66);
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
B4e2b69:{NFSU2_TR(0x4e2b69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2b6c:L4e2b6c:{c.instructions+=4;NFSU2_TR(0x4e2b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x36bec45full));
s4(u32(r4(U+0)),r4(U+4));
}
B4e2b73:{NFSU2_TR(0x4e2b73);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e2b7d:{NFSU2_TR(0x4e2b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2b80:{NFSU2_TR(0x4e2b80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e2b89;}}
}
B4e2b82:L4e2b82:{c.instructions+=2;NFSU2_TR(0x4e2b82);
u8 U[4];
w4(U+0,u32(0x47b276efull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2b87:{NFSU2_TR(0x4e2b87);
{goto L4e2b8e;}
}
B4e2b89:L4e2b89:{c.instructions+=1;NFSU2_TR(0x4e2b89);
u8 U[4];
w4(U+0,u32(0xb6068c57ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2b8e:L4e2b8e:{c.instructions+=3;NFSU2_TR(0x4e2b8e);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2b93:{NFSU2_TR(0x4e2b93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2b94:{NFSU2_TR(0x4e2b94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2b99ull));
TAIL_STATIC(0x537a10u,537);
}
B4e2b99:L4e2b99:{c.instructions+=3;NFSU2_TR(0x4e2b99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e2b9c:{NFSU2_TR(0x4e2b9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2b9d:{NFSU2_TR(0x4e2b9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2ba2ull));
TAIL_STATIC(0x50c900u,50c);
}
B4e2ba2:L4e2ba2:{c.instructions+=4;NFSU2_TR(0x4e2ba2);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4e2ba7:{NFSU2_TR(0x4e2ba7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e2baa:{NFSU2_TR(0x4e2baa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e2bad:{NFSU2_TR(0x4e2bad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e2bc7;}}
}
B4e2baf:L4e2baf:{c.instructions+=6;NFSU2_TR(0x4e2baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2bb2:{NFSU2_TR(0x4e2bb2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2bb4:{NFSU2_TR(0x4e2bb4);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2bb9:{NFSU2_TR(0x4e2bb9);
u8 U[4];
w4(U+0,u32(0x797720ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2bbe:{NFSU2_TR(0x4e2bbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2bbf:{NFSU2_TR(0x4e2bbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2bc4ull));
TAIL_STATIC(0x5426c0u,542);
}
B4e2bc4:L4e2bc4:{c.instructions+=1;NFSU2_TR(0x4e2bc4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e2bc7:L4e2bc7:{c.instructions+=6;NFSU2_TR(0x4e2bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e2bca:{NFSU2_TR(0x4e2bca);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2bcc:{NFSU2_TR(0x4e2bcc);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2bd1:{NFSU2_TR(0x4e2bd1);
u8 U[4];
w4(U+0,u32(0x2bac0ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2bd6:{NFSU2_TR(0x4e2bd6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2bd7:{NFSU2_TR(0x4e2bd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2bdcull));
TAIL_STATIC(0x537c00u,537);
}
B4e2bdc:L4e2bdc:{c.instructions+=4;NFSU2_TR(0x4e2bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2bdf:{NFSU2_TR(0x4e2bdf);
u8 U[4];
w4(U+0,u32(0x4fd28546ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2be4:{NFSU2_TR(0x4e2be4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2be5:{NFSU2_TR(0x4e2be5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2beaull));
TAIL_STATIC(0x5379c0u,537);
}
B4e2bea:L4e2bea:{c.instructions+=2;NFSU2_TR(0x4e2bea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2beb:{NFSU2_TR(0x4e2beb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2bf0ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4e2bf0:L4e2bf0:{c.instructions+=4;NFSU2_TR(0x4e2bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2bf3:{NFSU2_TR(0x4e2bf3);
u8 U[4];
w4(U+0,u32(0xeb406fecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2bf8:{NFSU2_TR(0x4e2bf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2bf9:{NFSU2_TR(0x4e2bf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2bfeull));
TAIL_STATIC(0x5379c0u,537);
}
B4e2bfe:L4e2bfe:{c.instructions+=2;NFSU2_TR(0x4e2bfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2bff:{NFSU2_TR(0x4e2bff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2c04ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e2c04:L4e2c04:{c.instructions+=8;NFSU2_TR(0x4e2c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e2c07:{NFSU2_TR(0x4e2c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2c0a:{NFSU2_TR(0x4e2c0a);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4e2c10:{NFSU2_TR(0x4e2c10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4e2c13:{NFSU2_TR(0x4e2c13);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2c14:{NFSU2_TR(0x4e2c14);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x4000ull))));
}
B4e2c19:{NFSU2_TR(0x4e2c19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2c1a:{NFSU2_TR(0x4e2c1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2c1full));
TAIL_STATIC(0x54e6e0u,54e);
}
B4e2c1f:L4e2c1f:{c.instructions+=6;NFSU2_TR(0x4e2c1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e2c23:{NFSU2_TR(0x4e2c23);
__builtin_memmove((R+0),(R+24),4);
}
B4e2c25:{NFSU2_TR(0x4e2c25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2c26:{NFSU2_TR(0x4e2c26);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2c2d:{NFSU2_TR(0x4e2c2d);
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
B4e2c30:{NFSU2_TR(0x4e2c30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2c40:L4e2c40:{c.instructions+=3;NFSU2_TR(0x4e2c40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2c41:{NFSU2_TR(0x4e2c41);
__builtin_memmove((R+24),(R+4),4);
}
B4e2c43:{NFSU2_TR(0x4e2c43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2c48ull));
{goto L4e2c60;}
}
B4e2c48:L4e2c48:{c.instructions+=2;NFSU2_TR(0x4e2c48);
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
B4e2c4d:{NFSU2_TR(0x4e2c4d);
if(r1(R+518)){{goto L4e2c58;}}
}
B4e2c4f:L4e2c4f:{c.instructions+=2;NFSU2_TR(0x4e2c4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2c50:{NFSU2_TR(0x4e2c50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2c55ull));
TAIL_STATIC(0x575630u,575);
}
B4e2c55:L4e2c55:{c.instructions+=1;NFSU2_TR(0x4e2c55);
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
B4e2c58:L4e2c58:{c.instructions+=3;NFSU2_TR(0x4e2c58);
__builtin_memmove((R+0),(R+24),4);
}
B4e2c5a:{NFSU2_TR(0x4e2c5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2c5b:{NFSU2_TR(0x4e2c5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2c60:L4e2c60:{c.instructions+=2;NFSU2_TR(0x4e2c60);
u8 U[4];
w4(U+0,u32(0x797734ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4e2c66:{NFSU2_TR(0x4e2c66);
TAIL_STATIC(0x4defb0u,4de);
}
B4e2c70:L4e2c70:{c.instructions+=5;NFSU2_TR(0x4e2c70);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4e2c75:{NFSU2_TR(0x4e2c75);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e2c78:{NFSU2_TR(0x4e2c78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2c79:{NFSU2_TR(0x4e2c79);
__builtin_memmove((R+24),(R+4),4);
}
B4e2c7b:{NFSU2_TR(0x4e2c7b);
if(r1(R+518)){{goto L4e2d31;}}
}
B4e2c81:L4e2c81:{c.instructions+=2;NFSU2_TR(0x4e2c81);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e2c86:{NFSU2_TR(0x4e2c86);
if(r1(R+518)){{goto L4e2d31;}}
}
B4e2c8c:L4e2c8c:{c.instructions+=3;NFSU2_TR(0x4e2c8c);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B4e2c91:{NFSU2_TR(0x4e2c91);
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
B4e2c94:{NFSU2_TR(0x4e2c94);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e2d5b;}}
}
B4e2c9a:L4e2c9a:{c.instructions+=1;NFSU2_TR(0x4e2c9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4e2d68ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e2ca1:L4e2ca1:{c.instructions+=2;NFSU2_TR(0x4e2ca1);
__builtin_memmove((R+4),(R+24),4);
}
B4e2ca3:{NFSU2_TR(0x4e2ca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2ca8ull));
TAIL_STATIC(0x4ccf60u,4cc);
}
B4e2ca8:L4e2ca8:{c.instructions+=3;NFSU2_TR(0x4e2ca8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2caa:{NFSU2_TR(0x4e2caa);
__builtin_memmove((R+4),(R+24),4);
}
B4e2cac:{NFSU2_TR(0x4e2cac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2cb1ull));
TAIL_STATIC(0x539650u,539);
}
B4e2cb1:L4e2cb1:{c.instructions+=2;NFSU2_TR(0x4e2cb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2cb2:{NFSU2_TR(0x4e2cb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2cb3:L4e2cb3:{c.instructions+=2;NFSU2_TR(0x4e2cb3);
__builtin_memmove((R+4),(R+24),4);
}
B4e2cb5:{NFSU2_TR(0x4e2cb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2cbaull));
TAIL_STATIC(0x4cd2d0u,4cd);
}
B4e2cba:L4e2cba:{c.instructions+=3;NFSU2_TR(0x4e2cba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2cbc:{NFSU2_TR(0x4e2cbc);
__builtin_memmove((R+4),(R+24),4);
}
B4e2cbe:{NFSU2_TR(0x4e2cbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2cc3ull));
TAIL_STATIC(0x539650u,539);
}
B4e2cc3:L4e2cc3:{c.instructions+=2;NFSU2_TR(0x4e2cc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2cc4:{NFSU2_TR(0x4e2cc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2cc5:L4e2cc5:{c.instructions+=2;NFSU2_TR(0x4e2cc5);
__builtin_memmove((R+4),(R+24),4);
}
B4e2cc7:{NFSU2_TR(0x4e2cc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2cccull));
TAIL_STATIC(0x4cd530u,4cd);
}
B4e2ccc:L4e2ccc:{c.instructions+=3;NFSU2_TR(0x4e2ccc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2cce:{NFSU2_TR(0x4e2cce);
__builtin_memmove((R+4),(R+24),4);
}
B4e2cd0:{NFSU2_TR(0x4e2cd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2cd5ull));
TAIL_STATIC(0x539650u,539);
}
B4e2cd5:L4e2cd5:{c.instructions+=2;NFSU2_TR(0x4e2cd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2cd6:{NFSU2_TR(0x4e2cd6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2cd7:L4e2cd7:{c.instructions+=2;NFSU2_TR(0x4e2cd7);
__builtin_memmove((R+4),(R+24),4);
}
B4e2cd9:{NFSU2_TR(0x4e2cd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2cdeull));
TAIL_STATIC(0x4cd7a0u,4cd);
}
B4e2cde:L4e2cde:{c.instructions+=3;NFSU2_TR(0x4e2cde);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2ce0:{NFSU2_TR(0x4e2ce0);
__builtin_memmove((R+4),(R+24),4);
}
B4e2ce2:{NFSU2_TR(0x4e2ce2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2ce7ull));
TAIL_STATIC(0x539650u,539);
}
B4e2ce7:L4e2ce7:{c.instructions+=2;NFSU2_TR(0x4e2ce7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2ce8:{NFSU2_TR(0x4e2ce8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2ce9:L4e2ce9:{c.instructions+=2;NFSU2_TR(0x4e2ce9);
__builtin_memmove((R+4),(R+24),4);
}
B4e2ceb:{NFSU2_TR(0x4e2ceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2cf0ull));
TAIL_STATIC(0x4b47b0u,4b4);
}
B4e2cf0:L4e2cf0:{c.instructions+=3;NFSU2_TR(0x4e2cf0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2cf2:{NFSU2_TR(0x4e2cf2);
__builtin_memmove((R+4),(R+24),4);
}
B4e2cf4:{NFSU2_TR(0x4e2cf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2cf9ull));
TAIL_STATIC(0x539650u,539);
}
B4e2cf9:L4e2cf9:{c.instructions+=2;NFSU2_TR(0x4e2cf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2cfa:{NFSU2_TR(0x4e2cfa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2cfb:L4e2cfb:{c.instructions+=2;NFSU2_TR(0x4e2cfb);
__builtin_memmove((R+4),(R+24),4);
}
B4e2cfd:{NFSU2_TR(0x4e2cfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2d02ull));
TAIL_STATIC(0x4cdb40u,4cd);
}
B4e2d02:L4e2d02:{c.instructions+=3;NFSU2_TR(0x4e2d02);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2d04:{NFSU2_TR(0x4e2d04);
__builtin_memmove((R+4),(R+24),4);
}
B4e2d06:{NFSU2_TR(0x4e2d06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2d0bull));
TAIL_STATIC(0x539650u,539);
}
B4e2d0b:L4e2d0b:{c.instructions+=2;NFSU2_TR(0x4e2d0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2d0c:{NFSU2_TR(0x4e2d0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2d0d:L4e2d0d:{c.instructions+=2;NFSU2_TR(0x4e2d0d);
__builtin_memmove((R+4),(R+24),4);
}
B4e2d0f:{NFSU2_TR(0x4e2d0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2d14ull));
TAIL_STATIC(0x4b47b0u,4b4);
}
B4e2d14:L4e2d14:{c.instructions+=3;NFSU2_TR(0x4e2d14);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2d16:{NFSU2_TR(0x4e2d16);
__builtin_memmove((R+4),(R+24),4);
}
B4e2d18:{NFSU2_TR(0x4e2d18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2d1dull));
TAIL_STATIC(0x539650u,539);
}
B4e2d1d:L4e2d1d:{c.instructions+=2;NFSU2_TR(0x4e2d1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2d1e:{NFSU2_TR(0x4e2d1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2d1f:L4e2d1f:{c.instructions+=2;NFSU2_TR(0x4e2d1f);
__builtin_memmove((R+4),(R+24),4);
}
B4e2d21:{NFSU2_TR(0x4e2d21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2d26ull));
TAIL_STATIC(0x4b4a10u,4b4);
}
B4e2d26:L4e2d26:{c.instructions+=3;NFSU2_TR(0x4e2d26);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2d28:{NFSU2_TR(0x4e2d28);
__builtin_memmove((R+4),(R+24),4);
}
B4e2d2a:{NFSU2_TR(0x4e2d2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2d2full));
TAIL_STATIC(0x539650u,539);
}
B4e2d2f:L4e2d2f:{c.instructions+=2;NFSU2_TR(0x4e2d2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2d30:{NFSU2_TR(0x4e2d30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2d31:L4e2d31:{c.instructions+=3;NFSU2_TR(0x4e2d31);
__builtin_memmove((R+0),gp(0x850088),4);
}
B4e2d36:{NFSU2_TR(0x4e2d36);
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
B4e2d39:{NFSU2_TR(0x4e2d39);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e2d5b;}}
}
B4e2d3b:L4e2d3b:{c.instructions+=1;NFSU2_TR(0x4e2d3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4e2d94ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e2d42:L4e2d42:{c.instructions+=2;NFSU2_TR(0x4e2d42);
__builtin_memmove((R+4),(R+24),4);
}
B4e2d44:{NFSU2_TR(0x4e2d44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2d49ull));
TAIL_STATIC(0x4b47b0u,4b4);
}
B4e2d49:L4e2d49:{c.instructions+=3;NFSU2_TR(0x4e2d49);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2d4b:{NFSU2_TR(0x4e2d4b);
__builtin_memmove((R+4),(R+24),4);
}
B4e2d4d:{NFSU2_TR(0x4e2d4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2d52ull));
TAIL_STATIC(0x539650u,539);
}
B4e2d52:L4e2d52:{c.instructions+=2;NFSU2_TR(0x4e2d52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2d53:{NFSU2_TR(0x4e2d53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2d54:L4e2d54:{c.instructions+=2;NFSU2_TR(0x4e2d54);
__builtin_memmove((R+4),(R+24),4);
}
B4e2d56:{NFSU2_TR(0x4e2d56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2d5bull));
TAIL_STATIC(0x4cda20u,4cd);
}
B4e2d5b:L4e2d5b:{c.instructions+=3;NFSU2_TR(0x4e2d5b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2d5d:{NFSU2_TR(0x4e2d5d);
__builtin_memmove((R+4),(R+24),4);
}
B4e2d5f:{NFSU2_TR(0x4e2d5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2d64ull));
TAIL_STATIC(0x539650u,539);
}
B4e2d64:L4e2d64:{c.instructions+=2;NFSU2_TR(0x4e2d64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2d65:{NFSU2_TR(0x4e2d65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2dc0:L4e2dc0:{c.instructions+=12;NFSU2_TR(0x4e2dc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2dc1:{NFSU2_TR(0x4e2dc1);
__builtin_memmove((R+20),(R+16),4);
}
B4e2dc3:{NFSU2_TR(0x4e2dc3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4e2dc6:{NFSU2_TR(0x4e2dc6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2dc8:{NFSU2_TR(0x4e2dc8);
u8 U[4];
w4(U+0,u32(0x77389bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2dcd:{NFSU2_TR(0x4e2dcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2dd3:{NFSU2_TR(0x4e2dd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2dd4:{NFSU2_TR(0x4e2dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2ddb:{NFSU2_TR(0x4e2ddb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x900ull))));
}
B4e2de1:{NFSU2_TR(0x4e2de1);
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
B4e2de8:{NFSU2_TR(0x4e2de8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2de9:{NFSU2_TR(0x4e2de9);
if(r1(R+518)){{goto L4e2f13;}}
}
B4e2def:L4e2def:{c.instructions+=3;NFSU2_TR(0x4e2def);
__builtin_memmove((R+0),gp(0x850098),1);
}
B4e2df4:{NFSU2_TR(0x4e2df4);
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
B4e2df6:{NFSU2_TR(0x4e2df6);
if(r1(R+518)){{goto L4e2f13;}}
}
B4e2dfc:L4e2dfc:{c.instructions+=4;NFSU2_TR(0x4e2dfc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2dfe:{NFSU2_TR(0x4e2dfe);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2e00:{NFSU2_TR(0x4e2e00);
w4(R+4,u32(0x83ad90ull));
}
B4e2e05:{NFSU2_TR(0x4e2e05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2e0aull));
TAIL_STATIC(0x5162d0u,516);
}
B4e2e0a:L4e2e0a:{c.instructions+=3;NFSU2_TR(0x4e2e0a);
__builtin_memmove((R+24),(R+0),4);
}
B4e2e0c:{NFSU2_TR(0x4e2e0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e2e0e:{NFSU2_TR(0x4e2e0e);
if(r1(R+518)){{goto L4e2e31;}}
}
B4e2e10:L4e2e10:{c.instructions+=3;NFSU2_TR(0x4e2e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2e16:{NFSU2_TR(0x4e2e16);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e2e1c:{NFSU2_TR(0x4e2e1c);
if(r1(R+518)){{goto L4e2e31;}}
}
B4e2e1e:L4e2e1e:{c.instructions+=4;NFSU2_TR(0x4e2e1e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2e1f:{NFSU2_TR(0x4e2e1f);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2e21:{NFSU2_TR(0x4e2e21);
w4(R+4,u32(0x83ad90ull));
}
B4e2e26:{NFSU2_TR(0x4e2e26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2e2bull));
TAIL_STATIC(0x5162d0u,516);
}
B4e2e2b:L4e2e2b:{c.instructions+=3;NFSU2_TR(0x4e2e2b);
__builtin_memmove((R+24),(R+0),4);
}
B4e2e2d:{NFSU2_TR(0x4e2e2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e2e2f:{NFSU2_TR(0x4e2e2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e2e10u);}goto L4e2e10;}}
}
B4e2e31:L4e2e31:{c.instructions+=2;NFSU2_TR(0x4e2e31);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e2e35:{NFSU2_TR(0x4e2e35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2e3aull));
TAIL_STATIC(0x40c910u,40c);
}
B4e2e3a:L4e2e3a:{c.instructions+=8;NFSU2_TR(0x4e2e3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e2e3c:{NFSU2_TR(0x4e2e3c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2e3e:{NFSU2_TR(0x4e2e3e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e2e42:{NFSU2_TR(0x4e2e42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2e43:{NFSU2_TR(0x4e2e43);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2e45:{NFSU2_TR(0x4e2e45);
__builtin_memmove((R+4),(R+24),4);
}
B4e2e47:{NFSU2_TR(0x4e2e47);
u8 U[8];
w4(U+0,u32(u32(u32(0x918ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e2e52:{NFSU2_TR(0x4e2e52);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2e55ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e2e55:L4e2e55:{c.instructions+=5;NFSU2_TR(0x4e2e55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e2e58:{NFSU2_TR(0x4e2e58);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2e5a:{NFSU2_TR(0x4e2e5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2e5b:{NFSU2_TR(0x4e2e5b);
w4(R+4,u32(0x83aab4ull));
}
B4e2e60:{NFSU2_TR(0x4e2e60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2e65ull));
TAIL_STATIC(0x502a40u,502);
}
B4e2e65:L4e2e65:{c.instructions+=2;NFSU2_TR(0x4e2e65);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2e6a:{NFSU2_TR(0x4e2e6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2e6full));
TAIL_STATIC(0x52cf60u,52c);
}
B4e2e6f:L4e2e6f:{c.instructions+=3;NFSU2_TR(0x4e2e6f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2e72:{NFSU2_TR(0x4e2e72);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e2e74:{NFSU2_TR(0x4e2e74);
if(r1(R+518)){{goto L4e2e87;}}
}
B4e2e76:L4e2e76:{c.instructions+=2;NFSU2_TR(0x4e2e76);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2e7b:{NFSU2_TR(0x4e2e7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2e80ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e2e80:L4e2e80:{c.instructions+=3;NFSU2_TR(0x4e2e80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2e83:{NFSU2_TR(0x4e2e83);
__builtin_memmove((R+24),(R+0),4);
}
B4e2e85:{NFSU2_TR(0x4e2e85);
{goto L4e2eb0;}
}
B4e2e87:L4e2e87:{c.instructions+=2;NFSU2_TR(0x4e2e87);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2e8c:{NFSU2_TR(0x4e2e8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2e91ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e2e91:L4e2e91:{c.instructions+=3;NFSU2_TR(0x4e2e91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2e94:{NFSU2_TR(0x4e2e94);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e2e96:{NFSU2_TR(0x4e2e96);
if(r1(R+518)){{goto L4e2eae;}}
}
B4e2e98:L4e2e98:{c.instructions+=2;NFSU2_TR(0x4e2e98);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2e9d:{NFSU2_TR(0x4e2e9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2ea2ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e2ea2:L4e2ea2:{c.instructions+=3;NFSU2_TR(0x4e2ea2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e2ea5:{NFSU2_TR(0x4e2ea5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e2ea7:{NFSU2_TR(0x4e2ea7);
if(r1(R+518)){{goto L4e2eae;}}
}
B4e2ea9:L4e2ea9:{c.instructions+=2;NFSU2_TR(0x4e2ea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e2eac:{NFSU2_TR(0x4e2eac);
{goto L4e2eb0;}
}
B4e2eae:L4e2eae:{c.instructions+=1;NFSU2_TR(0x4e2eae);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4e2eb0:L4e2eb0:{c.instructions+=4;NFSU2_TR(0x4e2eb0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e2eb4:{NFSU2_TR(0x4e2eb4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2eb5:{NFSU2_TR(0x4e2eb5);
w4(R+4,u32(0x8371b0ull));
}
B4e2eba:{NFSU2_TR(0x4e2eba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2ebfull));
TAIL_STATIC(0x413440u,413);
}
B4e2ebf:L4e2ebf:{c.instructions+=3;NFSU2_TR(0x4e2ebf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e2ec1:{NFSU2_TR(0x4e2ec1);
s4(0x83623c,u32(0x1ull));
}
B4e2ecb:{NFSU2_TR(0x4e2ecb);
if(r1(R+518)){{goto L4e2edb;}}
}
B4e2ecd:L4e2ecd:{c.instructions+=4;NFSU2_TR(0x4e2ecd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2ecf:{NFSU2_TR(0x4e2ecf);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2ed4:{NFSU2_TR(0x4e2ed4);
__builtin_memmove((R+4),(R+24),4);
}
B4e2ed6:{NFSU2_TR(0x4e2ed6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2edbull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4e2edb:L4e2edb:{c.instructions+=3;NFSU2_TR(0x4e2edb);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e2edf:{NFSU2_TR(0x4e2edf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2ee0:{NFSU2_TR(0x4e2ee0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2ee5ull));
TAIL_STATIC(0x58b9a0u,58b);
}
B4e2ee5:L4e2ee5:{c.instructions+=2;NFSU2_TR(0x4e2ee5);
__builtin_memmove((R+4),(R+0),4);
}
B4e2ee7:{NFSU2_TR(0x4e2ee7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2eecull));
TAIL_STATIC(0x587630u,587);
}
B4e2eec:L4e2eec:{c.instructions+=3;NFSU2_TR(0x4e2eec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2eee:{NFSU2_TR(0x4e2eee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2ef0:{NFSU2_TR(0x4e2ef0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2ef5ull));
TAIL_STATIC(0x58b9a0u,58b);
}
B4e2ef5:L4e2ef5:{c.instructions+=2;NFSU2_TR(0x4e2ef5);
__builtin_memmove((R+4),(R+0),4);
}
B4e2ef7:{NFSU2_TR(0x4e2ef7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2efcull));
TAIL_STATIC(0x58e080u,58e);
}
B4e2efc:L4e2efc:{c.instructions+=3;NFSU2_TR(0x4e2efc);
u8 U[4];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e2f03:{NFSU2_TR(0x4e2f03);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e2f0e:{NFSU2_TR(0x4e2f0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2f13ull));
TAIL_STATIC(0x4022c0u,402);
}
B4e2f13:L4e2f13:{c.instructions+=6;NFSU2_TR(0x4e2f13);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e2f1a:{NFSU2_TR(0x4e2f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2f21:{NFSU2_TR(0x4e2f21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e2f22:{NFSU2_TR(0x4e2f22);
__builtin_memmove((R+16),(R+20),4);
}
B4e2f24:{NFSU2_TR(0x4e2f24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e2f25:{NFSU2_TR(0x4e2f25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e2f30:L4e2f30:{c.instructions+=15;NFSU2_TR(0x4e2f30);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2f32:{NFSU2_TR(0x4e2f32);
u8 U[4];
w4(U+0,u32(0x775c0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2f37:{NFSU2_TR(0x4e2f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2f3d:{NFSU2_TR(0x4e2f3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2f3e:{NFSU2_TR(0x4e2f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2f45:{NFSU2_TR(0x4e2f45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2f46:{NFSU2_TR(0x4e2f46);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2f4a:{NFSU2_TR(0x4e2f4a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2f4b:{NFSU2_TR(0x4e2f4b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2f4c:{NFSU2_TR(0x4e2f4c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2f4d:{NFSU2_TR(0x4e2f4d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2f4e:{NFSU2_TR(0x4e2f4e);
__builtin_memmove((R+24),(R+4),4);
}
B4e2f50:{NFSU2_TR(0x4e2f50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2f51:{NFSU2_TR(0x4e2f51);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2f55:{NFSU2_TR(0x4e2f55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2f5aull));
TAIL_STATIC(0x551de0u,551);
}
B4e2f5a:L4e2f5a:{c.instructions+=18;NFSU2_TR(0x4e2f5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e2f5d:{NFSU2_TR(0x4e2f5d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4e2f5f:{NFSU2_TR(0x4e2f5f);
u8 U[4];
w4(U+0,u32(0x7974f0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e2f65:{NFSU2_TR(0x4e2f65);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2f69:{NFSU2_TR(0x4e2f69);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+20)),r4(U+0));
}
B4e2f6c:{NFSU2_TR(0x4e2f6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2f6f:{NFSU2_TR(0x4e2f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2f72:{NFSU2_TR(0x4e2f72);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2f77:{NFSU2_TR(0x4e2f77);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2f7c:{NFSU2_TR(0x4e2f7c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2f7e:{NFSU2_TR(0x4e2f7e);
u8 U[4];
w4(U+0,u32(0x79775cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2f83:{NFSU2_TR(0x4e2f83);
u8 U[4];
w4(U+0,u32(0x797750ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2f88:{NFSU2_TR(0x4e2f88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2f89:{NFSU2_TR(0x4e2f89);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e2f8c:{NFSU2_TR(0x4e2f8c);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e2f91:{NFSU2_TR(0x4e2f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2f94:{NFSU2_TR(0x4e2f94);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e2f97:{NFSU2_TR(0x4e2f97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2f9cull));
TAIL_STATIC(0x5435d0u,543);
}
B4e2f9c:L4e2f9c:{c.instructions+=9;NFSU2_TR(0x4e2f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2f9f:{NFSU2_TR(0x4e2f9f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2fa0:{NFSU2_TR(0x4e2fa0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2fa1:{NFSU2_TR(0x4e2fa1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2fa2:{NFSU2_TR(0x4e2fa2);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2fa7:{NFSU2_TR(0x4e2fa7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2fa8:{NFSU2_TR(0x4e2fa8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e2fae:{NFSU2_TR(0x4e2fae);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e2fb3:{NFSU2_TR(0x4e2fb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2fb8ull));
TAIL_STATIC(0x542ac0u,542);
}
B4e2fb8:L4e2fb8:{c.instructions+=4;NFSU2_TR(0x4e2fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e2fbb:{NFSU2_TR(0x4e2fbb);
u8 U[4];
w4(U+0,u32(0x90fe80f3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2fc0:{NFSU2_TR(0x4e2fc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2fc1:{NFSU2_TR(0x4e2fc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2fc6ull));
TAIL_STATIC(0x537a60u,537);
}
B4e2fc6:L4e2fc6:{c.instructions+=11;NFSU2_TR(0x4e2fc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e2fcc:{NFSU2_TR(0x4e2fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2fcf:{NFSU2_TR(0x4e2fcf);
u8 U[4];
w4(U+0,u32(0x78f8c8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4e2fd5:{NFSU2_TR(0x4e2fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2fd8:{NFSU2_TR(0x4e2fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2fdb:{NFSU2_TR(0x4e2fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2fde:{NFSU2_TR(0x4e2fde);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e2fe1:{NFSU2_TR(0x4e2fe1);
__builtin_memmove(gp(0x836344),(R+28),4);
}
B4e2fe7:{NFSU2_TR(0x4e2fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e2fea:{NFSU2_TR(0x4e2fea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e2feb:{NFSU2_TR(0x4e2feb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2ff0ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e2ff0:L4e2ff0:{c.instructions+=6;NFSU2_TR(0x4e2ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2ff3:{NFSU2_TR(0x4e2ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2ff6:{NFSU2_TR(0x4e2ff6);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e2ff9:{NFSU2_TR(0x4e2ff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2ffc:{NFSU2_TR(0x4e2ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e2fff:{NFSU2_TR(0x4e2fff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x4e3002u,4e3);
}
XIT:NFSU2_TR_EXIT(0x4e2,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
