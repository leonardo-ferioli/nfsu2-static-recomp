#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6cc(u8* __restrict R,Cpu& c);
u32 body_6d1(u8* __restrict R,Cpu& c);
u32 body_6d3(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6d2,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6d2,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6d2(u8* __restrict R,Cpu& c);
u32 page_6d2(Cpu& c){return body_6d2(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6d2(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6d2002:goto L6d2002;
case 0x6d2004:c.instructions+=2;goto B6d2004;
case 0x6d2007:c.instructions+=1;goto B6d2007;
case 0x6d200a:goto L6d200a;
case 0x6d200c:c.instructions+=1;goto B6d200c;
case 0x6d200e:goto L6d200e;
case 0x6d2011:c.instructions+=13;goto B6d2011;
case 0x6d2013:c.instructions+=12;goto B6d2013;
case 0x6d2016:c.instructions+=11;goto B6d2016;
case 0x6d2017:c.instructions+=10;goto B6d2017;
case 0x6d201a:c.instructions+=9;goto B6d201a;
case 0x6d201b:c.instructions+=8;goto B6d201b;
case 0x6d2021:c.instructions+=7;goto B6d2021;
case 0x6d2024:c.instructions+=6;goto B6d2024;
case 0x6d2026:c.instructions+=5;goto B6d2026;
case 0x6d2029:c.instructions+=4;goto B6d2029;
case 0x6d202c:c.instructions+=3;goto B6d202c;
case 0x6d202f:c.instructions+=2;goto B6d202f;
case 0x6d2031:c.instructions+=1;goto B6d2031;
case 0x6d2034:goto L6d2034;
case 0x6d2036:c.instructions+=1;goto B6d2036;
case 0x6d2038:goto L6d2038;
case 0x6d203a:c.instructions+=10;goto B6d203a;
case 0x6d203d:c.instructions+=9;goto B6d203d;
case 0x6d203e:c.instructions+=8;goto B6d203e;
case 0x6d2044:c.instructions+=7;goto B6d2044;
case 0x6d2047:c.instructions+=6;goto B6d2047;
case 0x6d204c:c.instructions+=5;goto B6d204c;
case 0x6d204e:c.instructions+=4;goto B6d204e;
case 0x6d204f:c.instructions+=3;goto B6d204f;
case 0x6d2050:c.instructions+=2;goto B6d2050;
case 0x6d2052:c.instructions+=1;goto B6d2052;
case 0x6d2055:goto L6d2055;
case 0x6d2057:c.instructions+=1;goto B6d2057;
case 0x6d2059:goto L6d2059;
case 0x6d205c:c.instructions+=5;goto B6d205c;
case 0x6d205e:c.instructions+=4;goto B6d205e;
case 0x6d2061:c.instructions+=3;goto B6d2061;
case 0x6d2063:c.instructions+=2;goto B6d2063;
case 0x6d2066:c.instructions+=1;goto B6d2066;
case 0x6d2069:goto L6d2069;
case 0x6d206b:c.instructions+=1;goto B6d206b;
case 0x6d206d:goto L6d206d;
case 0x6d206f:c.instructions+=2;goto B6d206f;
case 0x6d2071:c.instructions+=1;goto B6d2071;
case 0x6d2074:goto L6d2074;
case 0x6d2076:c.instructions+=1;goto B6d2076;
case 0x6d2078:goto L6d2078;
case 0x6d207a:c.instructions+=1;goto B6d207a;
case 0x6d207f:goto L6d207f;
case 0x6d2081:c.instructions+=1;goto B6d2081;
case 0x6d2083:goto L6d2083;
case 0x6d2085:goto L6d2085;
case 0x6d2086:c.instructions+=4;goto B6d2086;
case 0x6d2087:c.instructions+=3;goto B6d2087;
case 0x6d2088:c.instructions+=2;goto B6d2088;
case 0x6d2089:c.instructions+=1;goto B6d2089;
case 0x6d208a:goto L6d208a;
case 0x6d208c:c.instructions+=19;goto B6d208c;
case 0x6d208d:c.instructions+=18;goto B6d208d;
case 0x6d208f:c.instructions+=17;goto B6d208f;
case 0x6d2092:c.instructions+=16;goto B6d2092;
case 0x6d2093:c.instructions+=15;goto B6d2093;
case 0x6d2094:c.instructions+=14;goto B6d2094;
case 0x6d2095:c.instructions+=13;goto B6d2095;
case 0x6d2097:c.instructions+=12;goto B6d2097;
case 0x6d209d:c.instructions+=11;goto B6d209d;
case 0x6d20a0:c.instructions+=10;goto B6d20a0;
case 0x6d20a2:c.instructions+=9;goto B6d20a2;
case 0x6d20a5:c.instructions+=8;goto B6d20a5;
case 0x6d20a8:c.instructions+=7;goto B6d20a8;
case 0x6d20ab:c.instructions+=6;goto B6d20ab;
case 0x6d20ae:c.instructions+=5;goto B6d20ae;
case 0x6d20af:c.instructions+=4;goto B6d20af;
case 0x6d20b1:c.instructions+=3;goto B6d20b1;
case 0x6d20b2:c.instructions+=2;goto B6d20b2;
case 0x6d20b8:c.instructions+=1;goto B6d20b8;
case 0x6d20bd:goto L6d20bd;
case 0x6d20c3:c.instructions+=4;goto B6d20c3;
case 0x6d20c6:c.instructions+=3;goto B6d20c6;
case 0x6d20c7:c.instructions+=2;goto B6d20c7;
case 0x6d20c9:c.instructions+=1;goto B6d20c9;
case 0x6d20ce:goto L6d20ce;
case 0x6d20cf:c.instructions+=12;goto B6d20cf;
case 0x6d20d0:c.instructions+=11;goto B6d20d0;
case 0x6d20d1:c.instructions+=10;goto B6d20d1;
case 0x6d20d2:c.instructions+=9;goto B6d20d2;
case 0x6d20d3:c.instructions+=8;goto B6d20d3;
case 0x6d20d4:c.instructions+=7;goto B6d20d4;
case 0x6d20d7:c.instructions+=6;goto B6d20d7;
case 0x6d20d9:c.instructions+=5;goto B6d20d9;
case 0x6d20dc:c.instructions+=4;goto B6d20dc;
case 0x6d20df:c.instructions+=3;goto B6d20df;
case 0x6d20e2:c.instructions+=2;goto B6d20e2;
case 0x6d20e4:c.instructions+=1;goto B6d20e4;
case 0x6d20e9:goto L6d20e9;
case 0x6d20ea:c.instructions+=4;goto B6d20ea;
case 0x6d20eb:c.instructions+=3;goto B6d20eb;
case 0x6d20ec:c.instructions+=2;goto B6d20ec;
case 0x6d20ed:c.instructions+=1;goto B6d20ed;
case 0x6d20ee:goto L6d20ee;
case 0x6d20f0:c.instructions+=16;goto B6d20f0;
case 0x6d20f1:c.instructions+=15;goto B6d20f1;
case 0x6d20f3:c.instructions+=14;goto B6d20f3;
case 0x6d20f6:c.instructions+=13;goto B6d20f6;
case 0x6d20f7:c.instructions+=12;goto B6d20f7;
case 0x6d20f8:c.instructions+=11;goto B6d20f8;
case 0x6d20fa:c.instructions+=10;goto B6d20fa;
case 0x6d2100:c.instructions+=9;goto B6d2100;
case 0x6d2103:c.instructions+=8;goto B6d2103;
case 0x6d2104:c.instructions+=7;goto B6d2104;
case 0x6d2106:c.instructions+=6;goto B6d2106;
case 0x6d2109:c.instructions+=5;goto B6d2109;
case 0x6d210c:c.instructions+=4;goto B6d210c;
case 0x6d210d:c.instructions+=3;goto B6d210d;
case 0x6d210f:c.instructions+=2;goto B6d210f;
case 0x6d2115:c.instructions+=1;goto B6d2115;
case 0x6d211a:goto L6d211a;
case 0x6d2120:c.instructions+=4;goto B6d2120;
case 0x6d2123:c.instructions+=3;goto B6d2123;
case 0x6d2124:c.instructions+=2;goto B6d2124;
case 0x6d2126:c.instructions+=1;goto B6d2126;
case 0x6d212b:goto L6d212b;
case 0x6d2131:c.instructions+=4;goto B6d2131;
case 0x6d2134:c.instructions+=3;goto B6d2134;
case 0x6d2135:c.instructions+=2;goto B6d2135;
case 0x6d2137:c.instructions+=1;goto B6d2137;
case 0x6d213c:goto L6d213c;
case 0x6d2142:c.instructions+=4;goto B6d2142;
case 0x6d2145:c.instructions+=3;goto B6d2145;
case 0x6d2146:c.instructions+=2;goto B6d2146;
case 0x6d2148:c.instructions+=1;goto B6d2148;
case 0x6d214d:goto L6d214d;
case 0x6d2153:c.instructions+=5;goto B6d2153;
case 0x6d2156:c.instructions+=4;goto B6d2156;
case 0x6d2158:c.instructions+=3;goto B6d2158;
case 0x6d215a:c.instructions+=2;goto B6d215a;
case 0x6d215c:c.instructions+=1;goto B6d215c;
case 0x6d215f:goto L6d215f;
case 0x6d2160:c.instructions+=2;goto B6d2160;
case 0x6d2162:c.instructions+=1;goto B6d2162;
case 0x6d2167:goto L6d2167;
case 0x6d2169:c.instructions+=1;goto B6d2169;
case 0x6d216f:goto L6d216f;
case 0x6d2172:c.instructions+=11;goto B6d2172;
case 0x6d2174:c.instructions+=10;goto B6d2174;
case 0x6d2177:c.instructions+=9;goto B6d2177;
case 0x6d2178:c.instructions+=8;goto B6d2178;
case 0x6d217b:c.instructions+=7;goto B6d217b;
case 0x6d217c:c.instructions+=6;goto B6d217c;
case 0x6d217f:c.instructions+=5;goto B6d217f;
case 0x6d2180:c.instructions+=4;goto B6d2180;
case 0x6d2182:c.instructions+=3;goto B6d2182;
case 0x6d2185:c.instructions+=2;goto B6d2185;
case 0x6d2187:c.instructions+=1;goto B6d2187;
case 0x6d218a:goto L6d218a;
case 0x6d218c:c.instructions+=1;goto B6d218c;
case 0x6d2192:goto L6d2192;
case 0x6d2195:c.instructions+=7;goto B6d2195;
case 0x6d2197:c.instructions+=6;goto B6d2197;
case 0x6d219a:c.instructions+=5;goto B6d219a;
case 0x6d219b:c.instructions+=4;goto B6d219b;
case 0x6d219e:c.instructions+=3;goto B6d219e;
case 0x6d21a0:c.instructions+=2;goto B6d21a0;
case 0x6d21a1:c.instructions+=1;goto B6d21a1;
case 0x6d21a4:goto L6d21a4;
case 0x6d21a6:c.instructions+=1;goto B6d21a6;
case 0x6d21ac:goto L6d21ac;
case 0x6d21af:c.instructions+=5;goto B6d21af;
case 0x6d21b1:c.instructions+=4;goto B6d21b1;
case 0x6d21b4:c.instructions+=3;goto B6d21b4;
case 0x6d21b6:c.instructions+=2;goto B6d21b6;
case 0x6d21b9:c.instructions+=1;goto B6d21b9;
case 0x6d21bc:goto L6d21bc;
case 0x6d21be:c.instructions+=1;goto B6d21be;
case 0x6d21c4:goto L6d21c4;
case 0x6d21c7:c.instructions+=10;goto B6d21c7;
case 0x6d21c9:c.instructions+=9;goto B6d21c9;
case 0x6d21cc:c.instructions+=8;goto B6d21cc;
case 0x6d21cd:c.instructions+=7;goto B6d21cd;
case 0x6d21d0:c.instructions+=6;goto B6d21d0;
case 0x6d21d1:c.instructions+=5;goto B6d21d1;
case 0x6d21d4:c.instructions+=4;goto B6d21d4;
case 0x6d21d6:c.instructions+=3;goto B6d21d6;
case 0x6d21d9:c.instructions+=2;goto B6d21d9;
case 0x6d21db:c.instructions+=1;goto B6d21db;
case 0x6d21de:goto L6d21de;
case 0x6d21e0:c.instructions+=1;goto B6d21e0;
case 0x6d21e6:goto L6d21e6;
case 0x6d21e8:c.instructions+=7;goto B6d21e8;
case 0x6d21eb:c.instructions+=6;goto B6d21eb;
case 0x6d21ec:c.instructions+=5;goto B6d21ec;
case 0x6d21ef:c.instructions+=4;goto B6d21ef;
case 0x6d21f1:c.instructions+=3;goto B6d21f1;
case 0x6d21f2:c.instructions+=2;goto B6d21f2;
case 0x6d21f5:c.instructions+=1;goto B6d21f5;
case 0x6d21f8:goto L6d21f8;
case 0x6d21fa:c.instructions+=1;goto B6d21fa;
case 0x6d2200:goto L6d2200;
case 0x6d2203:c.instructions+=5;goto B6d2203;
case 0x6d2205:c.instructions+=4;goto B6d2205;
case 0x6d2208:c.instructions+=3;goto B6d2208;
case 0x6d220a:c.instructions+=2;goto B6d220a;
case 0x6d220d:c.instructions+=1;goto B6d220d;
case 0x6d2210:goto L6d2210;
case 0x6d2212:c.instructions+=1;goto B6d2212;
case 0x6d2218:goto L6d2218;
case 0x6d221b:c.instructions+=10;goto B6d221b;
case 0x6d221d:c.instructions+=9;goto B6d221d;
case 0x6d2220:c.instructions+=8;goto B6d2220;
case 0x6d2221:c.instructions+=7;goto B6d2221;
case 0x6d2224:c.instructions+=6;goto B6d2224;
case 0x6d2225:c.instructions+=5;goto B6d2225;
case 0x6d2228:c.instructions+=4;goto B6d2228;
case 0x6d222a:c.instructions+=3;goto B6d222a;
case 0x6d222d:c.instructions+=2;goto B6d222d;
case 0x6d222f:c.instructions+=1;goto B6d222f;
case 0x6d2232:goto L6d2232;
case 0x6d2234:c.instructions+=1;goto B6d2234;
case 0x6d223a:goto L6d223a;
case 0x6d223c:c.instructions+=7;goto B6d223c;
case 0x6d223f:c.instructions+=6;goto B6d223f;
case 0x6d2240:c.instructions+=5;goto B6d2240;
case 0x6d2243:c.instructions+=4;goto B6d2243;
case 0x6d2245:c.instructions+=3;goto B6d2245;
case 0x6d2246:c.instructions+=2;goto B6d2246;
case 0x6d2249:c.instructions+=1;goto B6d2249;
case 0x6d224c:goto L6d224c;
case 0x6d224e:c.instructions+=1;goto B6d224e;
case 0x6d2254:goto L6d2254;
case 0x6d2257:c.instructions+=5;goto B6d2257;
case 0x6d2259:c.instructions+=4;goto B6d2259;
case 0x6d225c:c.instructions+=3;goto B6d225c;
case 0x6d225e:c.instructions+=2;goto B6d225e;
case 0x6d2261:c.instructions+=1;goto B6d2261;
case 0x6d2264:goto L6d2264;
case 0x6d2266:c.instructions+=1;goto B6d2266;
case 0x6d226c:goto L6d226c;
case 0x6d226f:c.instructions+=10;goto B6d226f;
case 0x6d2271:c.instructions+=9;goto B6d2271;
case 0x6d2274:c.instructions+=8;goto B6d2274;
case 0x6d2275:c.instructions+=7;goto B6d2275;
case 0x6d2278:c.instructions+=6;goto B6d2278;
case 0x6d2279:c.instructions+=5;goto B6d2279;
case 0x6d227c:c.instructions+=4;goto B6d227c;
case 0x6d227e:c.instructions+=3;goto B6d227e;
case 0x6d2281:c.instructions+=2;goto B6d2281;
case 0x6d2283:c.instructions+=1;goto B6d2283;
case 0x6d2286:goto L6d2286;
case 0x6d2288:c.instructions+=1;goto B6d2288;
case 0x6d228e:goto L6d228e;
case 0x6d2290:c.instructions+=7;goto B6d2290;
case 0x6d2293:c.instructions+=6;goto B6d2293;
case 0x6d2294:c.instructions+=5;goto B6d2294;
case 0x6d2297:c.instructions+=4;goto B6d2297;
case 0x6d2299:c.instructions+=3;goto B6d2299;
case 0x6d229a:c.instructions+=2;goto B6d229a;
case 0x6d229d:c.instructions+=1;goto B6d229d;
case 0x6d22a0:goto L6d22a0;
case 0x6d22a2:c.instructions+=1;goto B6d22a2;
case 0x6d22a4:goto L6d22a4;
case 0x6d22a7:c.instructions+=5;goto B6d22a7;
case 0x6d22a9:c.instructions+=4;goto B6d22a9;
case 0x6d22ac:c.instructions+=3;goto B6d22ac;
case 0x6d22ae:c.instructions+=2;goto B6d22ae;
case 0x6d22b1:c.instructions+=1;goto B6d22b1;
case 0x6d22b4:goto L6d22b4;
case 0x6d22b6:c.instructions+=1;goto B6d22b6;
case 0x6d22b8:goto L6d22b8;
case 0x6d22bb:c.instructions+=10;goto B6d22bb;
case 0x6d22bd:c.instructions+=9;goto B6d22bd;
case 0x6d22c0:c.instructions+=8;goto B6d22c0;
case 0x6d22c1:c.instructions+=7;goto B6d22c1;
case 0x6d22c4:c.instructions+=6;goto B6d22c4;
case 0x6d22c5:c.instructions+=5;goto B6d22c5;
case 0x6d22c8:c.instructions+=4;goto B6d22c8;
case 0x6d22ca:c.instructions+=3;goto B6d22ca;
case 0x6d22cd:c.instructions+=2;goto B6d22cd;
case 0x6d22cf:c.instructions+=1;goto B6d22cf;
case 0x6d22d2:goto L6d22d2;
case 0x6d22d4:c.instructions+=1;goto B6d22d4;
case 0x6d22d6:goto L6d22d6;
case 0x6d22d8:c.instructions+=7;goto B6d22d8;
case 0x6d22db:c.instructions+=6;goto B6d22db;
case 0x6d22dc:c.instructions+=5;goto B6d22dc;
case 0x6d22df:c.instructions+=4;goto B6d22df;
case 0x6d22e1:c.instructions+=3;goto B6d22e1;
case 0x6d22e2:c.instructions+=2;goto B6d22e2;
case 0x6d22e5:c.instructions+=1;goto B6d22e5;
case 0x6d22e8:goto L6d22e8;
case 0x6d22ea:c.instructions+=1;goto B6d22ea;
case 0x6d22ec:goto L6d22ec;
case 0x6d22ef:c.instructions+=5;goto B6d22ef;
case 0x6d22f1:c.instructions+=4;goto B6d22f1;
case 0x6d22f4:c.instructions+=3;goto B6d22f4;
case 0x6d22f6:c.instructions+=2;goto B6d22f6;
case 0x6d22f9:c.instructions+=1;goto B6d22f9;
case 0x6d22fc:goto L6d22fc;
case 0x6d22fe:c.instructions+=1;goto B6d22fe;
case 0x6d2300:goto L6d2300;
case 0x6d2302:c.instructions+=2;goto B6d2302;
case 0x6d2304:c.instructions+=1;goto B6d2304;
case 0x6d2307:goto L6d2307;
case 0x6d2309:c.instructions+=1;goto B6d2309;
case 0x6d230b:goto L6d230b;
case 0x6d230d:c.instructions+=1;goto B6d230d;
case 0x6d2312:goto L6d2312;
case 0x6d2314:c.instructions+=1;goto B6d2314;
case 0x6d2316:goto L6d2316;
case 0x6d2318:goto L6d2318;
case 0x6d2319:c.instructions+=4;goto B6d2319;
case 0x6d231a:c.instructions+=3;goto B6d231a;
case 0x6d231b:c.instructions+=2;goto B6d231b;
case 0x6d231c:c.instructions+=1;goto B6d231c;
case 0x6d231d:goto L6d231d;
case 0x6d231f:c.instructions+=19;goto B6d231f;
case 0x6d2320:c.instructions+=18;goto B6d2320;
case 0x6d2322:c.instructions+=17;goto B6d2322;
case 0x6d2325:c.instructions+=16;goto B6d2325;
case 0x6d2326:c.instructions+=15;goto B6d2326;
case 0x6d2327:c.instructions+=14;goto B6d2327;
case 0x6d2328:c.instructions+=13;goto B6d2328;
case 0x6d232a:c.instructions+=12;goto B6d232a;
case 0x6d2330:c.instructions+=11;goto B6d2330;
case 0x6d2333:c.instructions+=10;goto B6d2333;
case 0x6d2335:c.instructions+=9;goto B6d2335;
case 0x6d2338:c.instructions+=8;goto B6d2338;
case 0x6d233b:c.instructions+=7;goto B6d233b;
case 0x6d233e:c.instructions+=6;goto B6d233e;
case 0x6d2341:c.instructions+=5;goto B6d2341;
case 0x6d2342:c.instructions+=4;goto B6d2342;
case 0x6d2344:c.instructions+=3;goto B6d2344;
case 0x6d2345:c.instructions+=2;goto B6d2345;
case 0x6d234b:c.instructions+=1;goto B6d234b;
case 0x6d2350:goto L6d2350;
case 0x6d2356:c.instructions+=4;goto B6d2356;
case 0x6d2359:c.instructions+=3;goto B6d2359;
case 0x6d235a:c.instructions+=2;goto B6d235a;
case 0x6d235c:c.instructions+=1;goto B6d235c;
case 0x6d2361:goto L6d2361;
case 0x6d2362:c.instructions+=12;goto B6d2362;
case 0x6d2363:c.instructions+=11;goto B6d2363;
case 0x6d2364:c.instructions+=10;goto B6d2364;
case 0x6d2365:c.instructions+=9;goto B6d2365;
case 0x6d2366:c.instructions+=8;goto B6d2366;
case 0x6d2367:c.instructions+=7;goto B6d2367;
case 0x6d236a:c.instructions+=6;goto B6d236a;
case 0x6d236c:c.instructions+=5;goto B6d236c;
case 0x6d236f:c.instructions+=4;goto B6d236f;
case 0x6d2372:c.instructions+=3;goto B6d2372;
case 0x6d2375:c.instructions+=2;goto B6d2375;
case 0x6d237a:c.instructions+=1;goto B6d237a;
case 0x6d237f:goto L6d237f;
case 0x6d2380:c.instructions+=4;goto B6d2380;
case 0x6d2381:c.instructions+=3;goto B6d2381;
case 0x6d2382:c.instructions+=2;goto B6d2382;
case 0x6d2383:c.instructions+=1;goto B6d2383;
case 0x6d2384:goto L6d2384;
case 0x6d2386:c.instructions+=19;goto B6d2386;
case 0x6d2387:c.instructions+=18;goto B6d2387;
case 0x6d2389:c.instructions+=17;goto B6d2389;
case 0x6d238c:c.instructions+=16;goto B6d238c;
case 0x6d238d:c.instructions+=15;goto B6d238d;
case 0x6d238e:c.instructions+=14;goto B6d238e;
case 0x6d238f:c.instructions+=13;goto B6d238f;
case 0x6d2391:c.instructions+=12;goto B6d2391;
case 0x6d2397:c.instructions+=11;goto B6d2397;
case 0x6d239a:c.instructions+=10;goto B6d239a;
case 0x6d239c:c.instructions+=9;goto B6d239c;
case 0x6d239f:c.instructions+=8;goto B6d239f;
case 0x6d23a2:c.instructions+=7;goto B6d23a2;
case 0x6d23a5:c.instructions+=6;goto B6d23a5;
case 0x6d23a8:c.instructions+=5;goto B6d23a8;
case 0x6d23a9:c.instructions+=4;goto B6d23a9;
case 0x6d23ab:c.instructions+=3;goto B6d23ab;
case 0x6d23ac:c.instructions+=2;goto B6d23ac;
case 0x6d23b2:c.instructions+=1;goto B6d23b2;
case 0x6d23b7:goto L6d23b7;
case 0x6d23bd:c.instructions+=4;goto B6d23bd;
case 0x6d23c0:c.instructions+=3;goto B6d23c0;
case 0x6d23c1:c.instructions+=2;goto B6d23c1;
case 0x6d23c3:c.instructions+=1;goto B6d23c3;
case 0x6d23c8:goto L6d23c8;
case 0x6d23c9:c.instructions+=12;goto B6d23c9;
case 0x6d23ca:c.instructions+=11;goto B6d23ca;
case 0x6d23cb:c.instructions+=10;goto B6d23cb;
case 0x6d23cc:c.instructions+=9;goto B6d23cc;
case 0x6d23cd:c.instructions+=8;goto B6d23cd;
case 0x6d23ce:c.instructions+=7;goto B6d23ce;
case 0x6d23d1:c.instructions+=6;goto B6d23d1;
case 0x6d23d3:c.instructions+=5;goto B6d23d3;
case 0x6d23d6:c.instructions+=4;goto B6d23d6;
case 0x6d23d9:c.instructions+=3;goto B6d23d9;
case 0x6d23dc:c.instructions+=2;goto B6d23dc;
case 0x6d23e1:c.instructions+=1;goto B6d23e1;
case 0x6d23e6:goto L6d23e6;
case 0x6d23e7:c.instructions+=4;goto B6d23e7;
case 0x6d23e8:c.instructions+=3;goto B6d23e8;
case 0x6d23e9:c.instructions+=2;goto B6d23e9;
case 0x6d23ea:c.instructions+=1;goto B6d23ea;
case 0x6d23eb:goto L6d23eb;
case 0x6d23ed:c.instructions+=19;goto B6d23ed;
case 0x6d23ee:c.instructions+=18;goto B6d23ee;
case 0x6d23f0:c.instructions+=17;goto B6d23f0;
case 0x6d23f3:c.instructions+=16;goto B6d23f3;
case 0x6d23f4:c.instructions+=15;goto B6d23f4;
case 0x6d23f5:c.instructions+=14;goto B6d23f5;
case 0x6d23f6:c.instructions+=13;goto B6d23f6;
case 0x6d23f8:c.instructions+=12;goto B6d23f8;
case 0x6d23fe:c.instructions+=11;goto B6d23fe;
case 0x6d2401:c.instructions+=10;goto B6d2401;
case 0x6d2403:c.instructions+=9;goto B6d2403;
case 0x6d2406:c.instructions+=8;goto B6d2406;
case 0x6d2409:c.instructions+=7;goto B6d2409;
case 0x6d240c:c.instructions+=6;goto B6d240c;
case 0x6d240f:c.instructions+=5;goto B6d240f;
case 0x6d2410:c.instructions+=4;goto B6d2410;
case 0x6d2412:c.instructions+=3;goto B6d2412;
case 0x6d2413:c.instructions+=2;goto B6d2413;
case 0x6d2419:c.instructions+=1;goto B6d2419;
case 0x6d241e:goto L6d241e;
case 0x6d2424:c.instructions+=4;goto B6d2424;
case 0x6d2427:c.instructions+=3;goto B6d2427;
case 0x6d2428:c.instructions+=2;goto B6d2428;
case 0x6d242a:c.instructions+=1;goto B6d242a;
case 0x6d242f:goto L6d242f;
case 0x6d2430:c.instructions+=12;goto B6d2430;
case 0x6d2431:c.instructions+=11;goto B6d2431;
case 0x6d2432:c.instructions+=10;goto B6d2432;
case 0x6d2433:c.instructions+=9;goto B6d2433;
case 0x6d2434:c.instructions+=8;goto B6d2434;
case 0x6d2435:c.instructions+=7;goto B6d2435;
case 0x6d2438:c.instructions+=6;goto B6d2438;
case 0x6d243a:c.instructions+=5;goto B6d243a;
case 0x6d243d:c.instructions+=4;goto B6d243d;
case 0x6d2440:c.instructions+=3;goto B6d2440;
case 0x6d2443:c.instructions+=2;goto B6d2443;
case 0x6d2445:c.instructions+=1;goto B6d2445;
case 0x6d244a:goto L6d244a;
case 0x6d244b:c.instructions+=4;goto B6d244b;
case 0x6d244c:c.instructions+=3;goto B6d244c;
case 0x6d244d:c.instructions+=2;goto B6d244d;
case 0x6d244e:c.instructions+=1;goto B6d244e;
case 0x6d244f:goto L6d244f;
case 0x6d2455:c.instructions+=23;goto B6d2455;
case 0x6d2457:c.instructions+=22;goto B6d2457;
case 0x6d2458:c.instructions+=21;goto B6d2458;
case 0x6d2459:c.instructions+=20;goto B6d2459;
case 0x6d245c:c.instructions+=19;goto B6d245c;
case 0x6d245d:c.instructions+=18;goto B6d245d;
case 0x6d2460:c.instructions+=17;goto B6d2460;
case 0x6d2463:c.instructions+=16;goto B6d2463;
case 0x6d2465:c.instructions+=15;goto B6d2465;
case 0x6d2466:c.instructions+=14;goto B6d2466;
case 0x6d2467:c.instructions+=13;goto B6d2467;
case 0x6d2468:c.instructions+=12;goto B6d2468;
case 0x6d2469:c.instructions+=11;goto B6d2469;
case 0x6d246e:c.instructions+=10;goto B6d246e;
case 0x6d246f:c.instructions+=9;goto B6d246f;
case 0x6d2472:c.instructions+=8;goto B6d2472;
case 0x6d2473:c.instructions+=7;goto B6d2473;
case 0x6d2476:c.instructions+=6;goto B6d2476;
case 0x6d2477:c.instructions+=5;goto B6d2477;
case 0x6d2478:c.instructions+=4;goto B6d2478;
case 0x6d2479:c.instructions+=3;goto B6d2479;
case 0x6d247a:c.instructions+=2;goto B6d247a;
case 0x6d247c:c.instructions+=1;goto B6d247c;
case 0x6d2481:goto L6d2481;
case 0x6d2482:c.instructions+=3;goto B6d2482;
case 0x6d2483:c.instructions+=2;goto B6d2483;
case 0x6d2484:c.instructions+=1;goto B6d2484;
case 0x6d2485:goto L6d2485;
case 0x6d2487:c.instructions+=10;goto B6d2487;
case 0x6d2488:c.instructions+=9;goto B6d2488;
case 0x6d248a:c.instructions+=8;goto B6d248a;
case 0x6d248d:c.instructions+=7;goto B6d248d;
case 0x6d248e:c.instructions+=6;goto B6d248e;
case 0x6d248f:c.instructions+=5;goto B6d248f;
case 0x6d2491:c.instructions+=4;goto B6d2491;
case 0x6d2495:c.instructions+=3;goto B6d2495;
case 0x6d249b:c.instructions+=2;goto B6d249b;
case 0x6d249c:c.instructions+=1;goto B6d249c;
case 0x6d249e:goto L6d249e;
case 0x6d24a1:c.instructions+=3;goto B6d24a1;
case 0x6d24a3:c.instructions+=2;goto B6d24a3;
case 0x6d24a5:c.instructions+=1;goto B6d24a5;
case 0x6d24a7:goto L6d24a7;
case 0x6d24aa:c.instructions+=1;goto B6d24aa;
case 0x6d24ad:goto L6d24ad;
case 0x6d24af:c.instructions+=3;goto B6d24af;
case 0x6d24b2:c.instructions+=2;goto B6d24b2;
case 0x6d24b5:c.instructions+=1;goto B6d24b5;
case 0x6d24b7:goto L6d24b7;
case 0x6d24ba:c.instructions+=4;goto B6d24ba;
case 0x6d24bb:c.instructions+=3;goto B6d24bb;
case 0x6d24be:c.instructions+=2;goto B6d24be;
case 0x6d24c0:c.instructions+=1;goto B6d24c0;
case 0x6d24c2:goto L6d24c2;
case 0x6d24c5:c.instructions+=1;goto B6d24c5;
case 0x6d24c7:goto L6d24c7;
case 0x6d24cc:c.instructions+=1;goto B6d24cc;
case 0x6d24d1:goto L6d24d1;
case 0x6d24d6:c.instructions+=1;goto B6d24d6;
case 0x6d24db:goto L6d24db;
case 0x6d24df:c.instructions+=1;goto B6d24df;
case 0x6d24e1:goto L6d24e1;
case 0x6d24e6:c.instructions+=1;goto B6d24e6;
case 0x6d24eb:goto L6d24eb;
case 0x6d24ee:c.instructions+=6;goto B6d24ee;
case 0x6d24f0:c.instructions+=5;goto B6d24f0;
case 0x6d24f3:c.instructions+=4;goto B6d24f3;
case 0x6d24f6:c.instructions+=3;goto B6d24f6;
case 0x6d24f9:c.instructions+=2;goto B6d24f9;
case 0x6d24ff:c.instructions+=1;goto B6d24ff;
case 0x6d2501:goto L6d2501;
case 0x6d2503:c.instructions+=7;goto B6d2503;
case 0x6d2506:c.instructions+=6;goto B6d2506;
case 0x6d2507:c.instructions+=5;goto B6d2507;
case 0x6d250a:c.instructions+=4;goto B6d250a;
case 0x6d250b:c.instructions+=3;goto B6d250b;
case 0x6d250c:c.instructions+=2;goto B6d250c;
case 0x6d250e:c.instructions+=1;goto B6d250e;
case 0x6d2514:goto L6d2514;
case 0x6d2516:c.instructions+=1;goto B6d2516;
case 0x6d2518:goto L6d2518;
case 0x6d251d:c.instructions+=3;goto B6d251d;
case 0x6d2522:c.instructions+=2;goto B6d2522;
case 0x6d2524:c.instructions+=1;goto B6d2524;
case 0x6d2529:goto L6d2529;
case 0x6d252f:c.instructions+=1;goto B6d252f;
case 0x6d2535:goto L6d2535;
case 0x6d2537:c.instructions+=4;goto B6d2537;
case 0x6d253a:c.instructions+=3;goto B6d253a;
case 0x6d253d:c.instructions+=2;goto B6d253d;
case 0x6d2540:c.instructions+=1;goto B6d2540;
case 0x6d2542:goto L6d2542;
case 0x6d2545:c.instructions+=1;goto B6d2545;
case 0x6d2548:goto L6d2548;
case 0x6d254a:c.instructions+=10;goto B6d254a;
case 0x6d254d:c.instructions+=9;goto B6d254d;
case 0x6d2550:c.instructions+=8;goto B6d2550;
case 0x6d2553:c.instructions+=7;goto B6d2553;
case 0x6d2555:c.instructions+=6;goto B6d2555;
case 0x6d255a:c.instructions+=5;goto B6d255a;
case 0x6d255d:c.instructions+=4;goto B6d255d;
case 0x6d255f:c.instructions+=3;goto B6d255f;
case 0x6d2561:c.instructions+=2;goto B6d2561;
case 0x6d2563:c.instructions+=1;goto B6d2563;
case 0x6d2568:goto L6d2568;
case 0x6d256a:c.instructions+=1;goto B6d256a;
case 0x6d256c:goto L6d256c;
case 0x6d256f:c.instructions+=9;goto B6d256f;
case 0x6d2571:c.instructions+=8;goto B6d2571;
case 0x6d2574:c.instructions+=7;goto B6d2574;
case 0x6d2575:c.instructions+=6;goto B6d2575;
case 0x6d257b:c.instructions+=5;goto B6d257b;
case 0x6d257e:c.instructions+=4;goto B6d257e;
case 0x6d2580:c.instructions+=3;goto B6d2580;
case 0x6d2583:c.instructions+=2;goto B6d2583;
case 0x6d2585:c.instructions+=1;goto B6d2585;
case 0x6d2588:goto L6d2588;
case 0x6d258a:c.instructions+=1;goto B6d258a;
case 0x6d258c:goto L6d258c;
case 0x6d258f:c.instructions+=5;goto B6d258f;
case 0x6d2591:c.instructions+=4;goto B6d2591;
case 0x6d2596:c.instructions+=3;goto B6d2596;
case 0x6d2597:c.instructions+=2;goto B6d2597;
case 0x6d2599:c.instructions+=1;goto B6d2599;
case 0x6d259c:goto L6d259c;
case 0x6d259e:c.instructions+=1;goto B6d259e;
case 0x6d25a0:goto L6d25a0;
case 0x6d25a2:c.instructions+=2;goto B6d25a2;
case 0x6d25a4:c.instructions+=1;goto B6d25a4;
case 0x6d25a7:goto L6d25a7;
case 0x6d25a9:c.instructions+=1;goto B6d25a9;
case 0x6d25ab:goto L6d25ab;
case 0x6d25ad:c.instructions+=1;goto B6d25ad;
case 0x6d25b2:goto L6d25b2;
case 0x6d25b4:c.instructions+=1;goto B6d25b4;
case 0x6d25b6:goto L6d25b6;
case 0x6d25b8:c.instructions+=1;goto B6d25b8;
case 0x6d25ba:goto L6d25ba;
case 0x6d25bf:goto L6d25bf;
case 0x6d25c4:c.instructions+=1;goto B6d25c4;
case 0x6d25c7:goto L6d25c7;
case 0x6d25c8:c.instructions+=1;goto B6d25c8;
case 0x6d25cd:goto L6d25cd;
case 0x6d25d0:c.instructions+=1;goto B6d25d0;
case 0x6d25d5:goto L6d25d5;
case 0x6d25d6:c.instructions+=4;goto B6d25d6;
case 0x6d25d7:c.instructions+=3;goto B6d25d7;
case 0x6d25d8:c.instructions+=2;goto B6d25d8;
case 0x6d25d9:c.instructions+=1;goto B6d25d9;
case 0x6d25da:goto L6d25da;
case 0x6d25dc:c.instructions+=10;goto B6d25dc;
case 0x6d25dd:c.instructions+=9;goto B6d25dd;
case 0x6d25df:c.instructions+=8;goto B6d25df;
case 0x6d25e2:c.instructions+=7;goto B6d25e2;
case 0x6d25e6:c.instructions+=6;goto B6d25e6;
case 0x6d25ec:c.instructions+=5;goto B6d25ec;
case 0x6d25f0:c.instructions+=4;goto B6d25f0;
case 0x6d25f1:c.instructions+=3;goto B6d25f1;
case 0x6d25f4:c.instructions+=2;goto B6d25f4;
case 0x6d25f5:c.instructions+=1;goto B6d25f5;
case 0x6d25f6:goto L6d25f6;
case 0x6d25f9:c.instructions+=8;goto B6d25f9;
case 0x6d25fc:c.instructions+=7;goto B6d25fc;
case 0x6d25ff:c.instructions+=6;goto B6d25ff;
case 0x6d2602:c.instructions+=5;goto B6d2602;
case 0x6d2605:c.instructions+=4;goto B6d2605;
case 0x6d2608:c.instructions+=3;goto B6d2608;
case 0x6d260b:c.instructions+=2;goto B6d260b;
case 0x6d260f:c.instructions+=1;goto B6d260f;
case 0x6d2611:goto L6d2611;
case 0x6d2613:c.instructions+=2;goto B6d2613;
case 0x6d2616:c.instructions+=1;goto B6d2616;
case 0x6d2618:goto L6d2618;
case 0x6d261a:goto L6d261a;
case 0x6d261c:goto L6d261c;
case 0x6d261f:c.instructions+=2;goto B6d261f;
case 0x6d2622:c.instructions+=1;goto B6d2622;
case 0x6d2626:goto L6d2626;
case 0x6d262a:c.instructions+=2;goto B6d262a;
case 0x6d262e:c.instructions+=1;goto B6d262e;
case 0x6d2630:goto L6d2630;
case 0x6d2633:c.instructions+=1;goto B6d2633;
case 0x6d2635:goto L6d2635;
case 0x6d2637:c.instructions+=1;goto B6d2637;
case 0x6d2639:goto L6d2639;
case 0x6d263c:c.instructions+=23;goto B6d263c;
case 0x6d2642:c.instructions+=22;goto B6d2642;
case 0x6d2643:c.instructions+=21;goto B6d2643;
case 0x6d2645:c.instructions+=20;goto B6d2645;
case 0x6d2646:c.instructions+=19;goto B6d2646;
case 0x6d2648:c.instructions+=18;goto B6d2648;
case 0x6d2649:c.instructions+=17;goto B6d2649;
case 0x6d264b:c.instructions+=16;goto B6d264b;
case 0x6d2651:c.instructions+=15;goto B6d2651;
case 0x6d2652:c.instructions+=14;goto B6d2652;
case 0x6d2654:c.instructions+=13;goto B6d2654;
case 0x6d2656:c.instructions+=12;goto B6d2656;
case 0x6d2658:c.instructions+=11;goto B6d2658;
case 0x6d265a:c.instructions+=10;goto B6d265a;
case 0x6d2660:c.instructions+=9;goto B6d2660;
case 0x6d2662:c.instructions+=8;goto B6d2662;
case 0x6d2663:c.instructions+=7;goto B6d2663;
case 0x6d2664:c.instructions+=6;goto B6d2664;
case 0x6d2665:c.instructions+=5;goto B6d2665;
case 0x6d2668:c.instructions+=4;goto B6d2668;
case 0x6d266b:c.instructions+=3;goto B6d266b;
case 0x6d266c:c.instructions+=2;goto B6d266c;
case 0x6d266e:c.instructions+=1;goto B6d266e;
case 0x6d2673:goto L6d2673;
case 0x6d2674:c.instructions+=4;goto B6d2674;
case 0x6d2675:c.instructions+=3;goto B6d2675;
case 0x6d2676:c.instructions+=2;goto B6d2676;
case 0x6d2677:c.instructions+=1;goto B6d2677;
case 0x6d2678:goto L6d2678;
case 0x6d267a:c.instructions+=8;goto B6d267a;
case 0x6d267b:c.instructions+=7;goto B6d267b;
case 0x6d267d:c.instructions+=6;goto B6d267d;
case 0x6d2680:c.instructions+=5;goto B6d2680;
case 0x6d2681:c.instructions+=4;goto B6d2681;
case 0x6d2683:c.instructions+=3;goto B6d2683;
case 0x6d2685:c.instructions+=2;goto B6d2685;
case 0x6d2688:c.instructions+=1;goto B6d2688;
case 0x6d268a:goto L6d268a;
case 0x6d268f:c.instructions+=1;goto B6d268f;
case 0x6d2694:goto L6d2694;
case 0x6d269a:c.instructions+=9;goto B6d269a;
case 0x6d269c:c.instructions+=8;goto B6d269c;
case 0x6d269d:c.instructions+=7;goto B6d269d;
case 0x6d269e:c.instructions+=6;goto B6d269e;
case 0x6d26a0:c.instructions+=5;goto B6d26a0;
case 0x6d26a5:c.instructions+=4;goto B6d26a5;
case 0x6d26aa:c.instructions+=3;goto B6d26aa;
case 0x6d26b0:c.instructions+=2;goto B6d26b0;
case 0x6d26b2:c.instructions+=1;goto B6d26b2;
case 0x6d26b4:goto L6d26b4;
case 0x6d26b9:c.instructions+=1;goto B6d26b9;
case 0x6d26bb:goto L6d26bb;
case 0x6d26c0:c.instructions+=1;goto B6d26c0;
case 0x6d26c2:goto L6d26c2;
case 0x6d26c7:c.instructions+=1;goto B6d26c7;
case 0x6d26c9:goto L6d26c9;
case 0x6d26ce:c.instructions+=1;goto B6d26ce;
case 0x6d26d0:goto L6d26d0;
case 0x6d26d2:c.instructions+=1;goto B6d26d2;
case 0x6d26d4:goto L6d26d4;
case 0x6d26d6:c.instructions+=1;goto B6d26d6;
case 0x6d26d8:goto L6d26d8;
case 0x6d26da:c.instructions+=1;goto B6d26da;
case 0x6d26dc:goto L6d26dc;
case 0x6d26de:goto L6d26de;
case 0x6d26df:goto L6d26df;
case 0x6d26e2:c.instructions+=4;goto B6d26e2;
case 0x6d26e5:c.instructions+=3;goto B6d26e5;
case 0x6d26e6:c.instructions+=2;goto B6d26e6;
case 0x6d26e8:c.instructions+=1;goto B6d26e8;
case 0x6d26ed:goto L6d26ed;
case 0x6d26ef:c.instructions+=1;goto B6d26ef;
case 0x6d26f5:goto L6d26f5;
case 0x6d26f8:c.instructions+=12;goto B6d26f8;
case 0x6d26fa:c.instructions+=11;goto B6d26fa;
case 0x6d26fd:c.instructions+=10;goto B6d26fd;
case 0x6d26fe:c.instructions+=9;goto B6d26fe;
case 0x6d2700:c.instructions+=8;goto B6d2700;
case 0x6d2703:c.instructions+=7;goto B6d2703;
case 0x6d2704:c.instructions+=6;goto B6d2704;
case 0x6d270a:c.instructions+=5;goto B6d270a;
case 0x6d270d:c.instructions+=4;goto B6d270d;
case 0x6d270f:c.instructions+=3;goto B6d270f;
case 0x6d2712:c.instructions+=2;goto B6d2712;
case 0x6d2714:c.instructions+=1;goto B6d2714;
case 0x6d2717:goto L6d2717;
case 0x6d2719:c.instructions+=1;goto B6d2719;
case 0x6d271f:goto L6d271f;
case 0x6d2722:c.instructions+=8;goto B6d2722;
case 0x6d2728:c.instructions+=7;goto B6d2728;
case 0x6d272a:c.instructions+=6;goto B6d272a;
case 0x6d272d:c.instructions+=5;goto B6d272d;
case 0x6d272e:c.instructions+=4;goto B6d272e;
case 0x6d2731:c.instructions+=3;goto B6d2731;
case 0x6d2733:c.instructions+=2;goto B6d2733;
case 0x6d2736:c.instructions+=1;goto B6d2736;
case 0x6d2739:goto L6d2739;
case 0x6d273b:c.instructions+=1;goto B6d273b;
case 0x6d2741:goto L6d2741;
case 0x6d2743:c.instructions+=5;goto B6d2743;
case 0x6d2745:c.instructions+=4;goto B6d2745;
case 0x6d2748:c.instructions+=3;goto B6d2748;
case 0x6d274a:c.instructions+=2;goto B6d274a;
case 0x6d274d:c.instructions+=1;goto B6d274d;
case 0x6d2750:goto L6d2750;
case 0x6d2752:c.instructions+=1;goto B6d2752;
case 0x6d2758:goto L6d2758;
case 0x6d275e:c.instructions+=14;goto B6d275e;
case 0x6d2760:c.instructions+=13;goto B6d2760;
case 0x6d2763:c.instructions+=12;goto B6d2763;
case 0x6d2765:c.instructions+=11;goto B6d2765;
case 0x6d2767:c.instructions+=10;goto B6d2767;
case 0x6d276d:c.instructions+=9;goto B6d276d;
case 0x6d276f:c.instructions+=8;goto B6d276f;
case 0x6d2772:c.instructions+=7;goto B6d2772;
case 0x6d2773:c.instructions+=6;goto B6d2773;
case 0x6d2776:c.instructions+=5;goto B6d2776;
case 0x6d2777:c.instructions+=4;goto B6d2777;
case 0x6d277a:c.instructions+=3;goto B6d277a;
case 0x6d277d:c.instructions+=2;goto B6d277d;
case 0x6d277f:c.instructions+=1;goto B6d277f;
case 0x6d2781:goto L6d2781;
case 0x6d2784:goto L6d2784;
case 0x6d2786:c.instructions+=1;goto B6d2786;
case 0x6d2788:goto L6d2788;
case 0x6d278e:c.instructions+=8;goto B6d278e;
case 0x6d2790:c.instructions+=7;goto B6d2790;
case 0x6d2793:c.instructions+=6;goto B6d2793;
case 0x6d2794:c.instructions+=5;goto B6d2794;
case 0x6d2797:c.instructions+=4;goto B6d2797;
case 0x6d2799:c.instructions+=3;goto B6d2799;
case 0x6d279c:c.instructions+=2;goto B6d279c;
case 0x6d279f:c.instructions+=1;goto B6d279f;
case 0x6d27a2:goto L6d27a2;
case 0x6d27a4:c.instructions+=1;goto B6d27a4;
case 0x6d27a6:goto L6d27a6;
case 0x6d27a9:c.instructions+=5;goto B6d27a9;
case 0x6d27ab:c.instructions+=4;goto B6d27ab;
case 0x6d27ae:c.instructions+=3;goto B6d27ae;
case 0x6d27b0:c.instructions+=2;goto B6d27b0;
case 0x6d27b3:c.instructions+=1;goto B6d27b3;
case 0x6d27b6:goto L6d27b6;
case 0x6d27b8:c.instructions+=1;goto B6d27b8;
case 0x6d27ba:goto L6d27ba;
case 0x6d27bd:c.instructions+=3;goto B6d27bd;
case 0x6d27c0:c.instructions+=2;goto B6d27c0;
case 0x6d27c6:c.instructions+=1;goto B6d27c6;
case 0x6d27c7:goto L6d27c7;
case 0x6d27ca:c.instructions+=3;goto B6d27ca;
case 0x6d27cc:c.instructions+=2;goto B6d27cc;
case 0x6d27ce:c.instructions+=1;goto B6d27ce;
case 0x6d27d1:goto L6d27d1;
case 0x6d27d3:c.instructions+=1;goto B6d27d3;
case 0x6d27d5:goto L6d27d5;
case 0x6d27d7:c.instructions+=2;goto B6d27d7;
case 0x6d27d9:c.instructions+=1;goto B6d27d9;
case 0x6d27dc:goto L6d27dc;
case 0x6d27de:c.instructions+=1;goto B6d27de;
case 0x6d27e0:goto L6d27e0;
case 0x6d27e2:c.instructions+=1;goto B6d27e2;
case 0x6d27e7:goto L6d27e7;
case 0x6d27e9:c.instructions+=1;goto B6d27e9;
case 0x6d27eb:goto L6d27eb;
case 0x6d27ed:goto L6d27ed;
case 0x6d27ee:c.instructions+=1;goto B6d27ee;
case 0x6d27ef:goto L6d27ef;
case 0x6d27f0:c.instructions+=2;goto B6d27f0;
case 0x6d27f1:c.instructions+=1;goto B6d27f1;
case 0x6d27f2:goto L6d27f2;
case 0x6d27f5:goto L6d27f5;
case 0x6d27f7:c.instructions+=1;goto B6d27f7;
case 0x6d27f9:goto L6d27f9;
case 0x6d27fb:c.instructions+=8;goto B6d27fb;
case 0x6d27fe:c.instructions+=7;goto B6d27fe;
case 0x6d27ff:c.instructions+=6;goto B6d27ff;
case 0x6d2802:c.instructions+=5;goto B6d2802;
case 0x6d2808:c.instructions+=4;goto B6d2808;
case 0x6d2809:c.instructions+=3;goto B6d2809;
case 0x6d280c:c.instructions+=2;goto B6d280c;
case 0x6d280e:c.instructions+=1;goto B6d280e;
case 0x6d2811:goto L6d2811;
case 0x6d2813:c.instructions+=1;goto B6d2813;
case 0x6d2815:goto L6d2815;
case 0x6d2818:c.instructions+=5;goto B6d2818;
case 0x6d281a:c.instructions+=4;goto B6d281a;
case 0x6d281d:c.instructions+=3;goto B6d281d;
case 0x6d281f:c.instructions+=2;goto B6d281f;
case 0x6d2822:c.instructions+=1;goto B6d2822;
case 0x6d2825:goto L6d2825;
case 0x6d2827:c.instructions+=1;goto B6d2827;
case 0x6d2829:goto L6d2829;
case 0x6d282c:c.instructions+=13;goto B6d282c;
case 0x6d282e:c.instructions+=12;goto B6d282e;
case 0x6d2831:c.instructions+=11;goto B6d2831;
case 0x6d2832:c.instructions+=10;goto B6d2832;
case 0x6d2835:c.instructions+=9;goto B6d2835;
case 0x6d2836:c.instructions+=8;goto B6d2836;
case 0x6d283c:c.instructions+=7;goto B6d283c;
case 0x6d283f:c.instructions+=6;goto B6d283f;
case 0x6d2841:c.instructions+=5;goto B6d2841;
case 0x6d2844:c.instructions+=4;goto B6d2844;
case 0x6d2847:c.instructions+=3;goto B6d2847;
case 0x6d284a:c.instructions+=2;goto B6d284a;
case 0x6d284c:c.instructions+=1;goto B6d284c;
case 0x6d284f:goto L6d284f;
case 0x6d2851:c.instructions+=1;goto B6d2851;
case 0x6d2853:goto L6d2853;
case 0x6d2855:c.instructions+=10;goto B6d2855;
case 0x6d2858:c.instructions+=9;goto B6d2858;
case 0x6d2859:c.instructions+=8;goto B6d2859;
case 0x6d285c:c.instructions+=7;goto B6d285c;
case 0x6d2862:c.instructions+=6;goto B6d2862;
case 0x6d2865:c.instructions+=5;goto B6d2865;
case 0x6d2867:c.instructions+=4;goto B6d2867;
case 0x6d2868:c.instructions+=3;goto B6d2868;
case 0x6d2869:c.instructions+=2;goto B6d2869;
case 0x6d286b:c.instructions+=1;goto B6d286b;
case 0x6d286e:goto L6d286e;
case 0x6d2870:c.instructions+=1;goto B6d2870;
case 0x6d2876:goto L6d2876;
case 0x6d2879:c.instructions+=2;goto B6d2879;
case 0x6d287c:c.instructions+=1;goto B6d287c;
case 0x6d2881:goto L6d2881;
case 0x6d2883:c.instructions+=8;goto B6d2883;
case 0x6d2884:c.instructions+=7;goto B6d2884;
case 0x6d2886:c.instructions+=6;goto B6d2886;
case 0x6d2889:c.instructions+=5;goto B6d2889;
case 0x6d288a:c.instructions+=4;goto B6d288a;
case 0x6d288c:c.instructions+=3;goto B6d288c;
case 0x6d288e:c.instructions+=2;goto B6d288e;
case 0x6d2891:c.instructions+=1;goto B6d2891;
case 0x6d2893:goto L6d2893;
case 0x6d2898:c.instructions+=1;goto B6d2898;
case 0x6d289d:goto L6d289d;
case 0x6d28a3:c.instructions+=2;goto B6d28a3;
case 0x6d28a6:c.instructions+=1;goto B6d28a6;
case 0x6d28a8:goto L6d28a8;
case 0x6d28aa:c.instructions+=1;goto B6d28aa;
case 0x6d28af:goto L6d28af;
case 0x6d28b2:c.instructions+=7;goto B6d28b2;
case 0x6d28b4:c.instructions+=6;goto B6d28b4;
case 0x6d28b7:c.instructions+=5;goto B6d28b7;
case 0x6d28ba:c.instructions+=4;goto B6d28ba;
case 0x6d28bb:c.instructions+=3;goto B6d28bb;
case 0x6d28be:c.instructions+=2;goto B6d28be;
case 0x6d28c1:c.instructions+=1;goto B6d28c1;
case 0x6d28c2:goto L6d28c2;
case 0x6d28c8:c.instructions+=9;goto B6d28c8;
case 0x6d28cb:c.instructions+=8;goto B6d28cb;
case 0x6d28cf:c.instructions+=7;goto B6d28cf;
case 0x6d28d2:c.instructions+=6;goto B6d28d2;
case 0x6d28d5:c.instructions+=5;goto B6d28d5;
case 0x6d28d8:c.instructions+=4;goto B6d28d8;
case 0x6d28db:c.instructions+=3;goto B6d28db;
case 0x6d28de:c.instructions+=2;goto B6d28de;
case 0x6d28e1:c.instructions+=1;goto B6d28e1;
case 0x6d28e3:goto L6d28e3;
case 0x6d28e6:c.instructions+=2;goto B6d28e6;
case 0x6d28e9:c.instructions+=1;goto B6d28e9;
case 0x6d28eb:goto L6d28eb;
case 0x6d28ee:c.instructions+=2;goto B6d28ee;
case 0x6d28f1:c.instructions+=1;goto B6d28f1;
case 0x6d28f3:goto L6d28f3;
case 0x6d28f6:c.instructions+=2;goto B6d28f6;
case 0x6d28f9:c.instructions+=1;goto B6d28f9;
case 0x6d28ff:goto L6d28ff;
case 0x6d2901:c.instructions+=2;goto B6d2901;
case 0x6d2903:c.instructions+=1;goto B6d2903;
case 0x6d2908:goto L6d2908;
case 0x6d290a:c.instructions+=1;goto B6d290a;
case 0x6d2910:goto L6d2910;
case 0x6d2913:c.instructions+=9;goto B6d2913;
case 0x6d2916:c.instructions+=8;goto B6d2916;
case 0x6d2919:c.instructions+=7;goto B6d2919;
case 0x6d291c:c.instructions+=6;goto B6d291c;
case 0x6d291f:c.instructions+=5;goto B6d291f;
case 0x6d2925:c.instructions+=4;goto B6d2925;
case 0x6d2927:c.instructions+=3;goto B6d2927;
case 0x6d292d:c.instructions+=2;goto B6d292d;
case 0x6d292f:c.instructions+=1;goto B6d292f;
case 0x6d2931:goto L6d2931;
case 0x6d2932:c.instructions+=1;goto B6d2932;
case 0x6d2934:goto L6d2934;
case 0x6d2935:c.instructions+=1;goto B6d2935;
case 0x6d2937:goto L6d2937;
case 0x6d2938:c.instructions+=1;goto B6d2938;
case 0x6d293a:goto L6d293a;
case 0x6d2940:c.instructions+=1;goto B6d2940;
case 0x6d2942:goto L6d2942;
case 0x6d2948:c.instructions+=1;goto B6d2948;
case 0x6d294a:goto L6d294a;
case 0x6d2950:goto L6d2950;
case 0x6d2953:c.instructions+=1;goto B6d2953;
case 0x6d2955:goto L6d2955;
case 0x6d295b:goto L6d295b;
case 0x6d295d:c.instructions+=12;goto B6d295d;
case 0x6d2960:c.instructions+=11;goto B6d2960;
case 0x6d2961:c.instructions+=10;goto B6d2961;
case 0x6d2964:c.instructions+=9;goto B6d2964;
case 0x6d2965:c.instructions+=8;goto B6d2965;
case 0x6d2968:c.instructions+=7;goto B6d2968;
case 0x6d2969:c.instructions+=6;goto B6d2969;
case 0x6d296f:c.instructions+=5;goto B6d296f;
case 0x6d2972:c.instructions+=4;goto B6d2972;
case 0x6d2974:c.instructions+=3;goto B6d2974;
case 0x6d2977:c.instructions+=2;goto B6d2977;
case 0x6d2979:c.instructions+=1;goto B6d2979;
case 0x6d297c:goto L6d297c;
case 0x6d297e:c.instructions+=1;goto B6d297e;
case 0x6d2984:goto L6d2984;
case 0x6d2987:c.instructions+=8;goto B6d2987;
case 0x6d298d:c.instructions+=7;goto B6d298d;
case 0x6d298f:c.instructions+=6;goto B6d298f;
case 0x6d2992:c.instructions+=5;goto B6d2992;
case 0x6d2993:c.instructions+=4;goto B6d2993;
case 0x6d2996:c.instructions+=3;goto B6d2996;
case 0x6d2998:c.instructions+=2;goto B6d2998;
case 0x6d299b:c.instructions+=1;goto B6d299b;
case 0x6d299e:goto L6d299e;
case 0x6d29a0:c.instructions+=1;goto B6d29a0;
case 0x6d29a6:goto L6d29a6;
case 0x6d29a8:c.instructions+=5;goto B6d29a8;
case 0x6d29a9:c.instructions+=4;goto B6d29a9;
case 0x6d29ac:c.instructions+=3;goto B6d29ac;
case 0x6d29ae:c.instructions+=2;goto B6d29ae;
case 0x6d29b1:c.instructions+=1;goto B6d29b1;
case 0x6d29b4:goto L6d29b4;
case 0x6d29b6:c.instructions+=1;goto B6d29b6;
case 0x6d29bc:goto L6d29bc;
case 0x6d29c2:c.instructions+=13;goto B6d29c2;
case 0x6d29c4:c.instructions+=12;goto B6d29c4;
case 0x6d29c7:c.instructions+=11;goto B6d29c7;
case 0x6d29c8:c.instructions+=10;goto B6d29c8;
case 0x6d29cb:c.instructions+=9;goto B6d29cb;
case 0x6d29cc:c.instructions+=8;goto B6d29cc;
case 0x6d29cf:c.instructions+=7;goto B6d29cf;
case 0x6d29d3:c.instructions+=6;goto B6d29d3;
case 0x6d29d6:c.instructions+=5;goto B6d29d6;
case 0x6d29d9:c.instructions+=4;goto B6d29d9;
case 0x6d29dc:c.instructions+=3;goto B6d29dc;
case 0x6d29df:c.instructions+=2;goto B6d29df;
case 0x6d29e1:c.instructions+=1;goto B6d29e1;
case 0x6d29e4:goto L6d29e4;
case 0x6d29e6:c.instructions+=1;goto B6d29e6;
case 0x6d29e8:goto L6d29e8;
case 0x6d29ee:c.instructions+=12;goto B6d29ee;
case 0x6d29f1:c.instructions+=11;goto B6d29f1;
case 0x6d29f4:c.instructions+=10;goto B6d29f4;
case 0x6d29f6:c.instructions+=9;goto B6d29f6;
case 0x6d29f9:c.instructions+=8;goto B6d29f9;
case 0x6d29fa:c.instructions+=7;goto B6d29fa;
case 0x6d29fd:c.instructions+=6;goto B6d29fd;
case 0x6d29fe:c.instructions+=5;goto B6d29fe;
case 0x6d2a02:c.instructions+=4;goto B6d2a02;
case 0x6d2a05:c.instructions+=3;goto B6d2a05;
case 0x6d2a06:c.instructions+=2;goto B6d2a06;
case 0x6d2a08:c.instructions+=1;goto B6d2a08;
case 0x6d2a0b:goto L6d2a0b;
case 0x6d2a0d:c.instructions+=1;goto B6d2a0d;
case 0x6d2a0f:goto L6d2a0f;
case 0x6d2a12:c.instructions+=5;goto B6d2a12;
case 0x6d2a14:c.instructions+=4;goto B6d2a14;
case 0x6d2a17:c.instructions+=3;goto B6d2a17;
case 0x6d2a19:c.instructions+=2;goto B6d2a19;
case 0x6d2a1c:c.instructions+=1;goto B6d2a1c;
case 0x6d2a1f:goto L6d2a1f;
case 0x6d2a21:c.instructions+=1;goto B6d2a21;
case 0x6d2a23:goto L6d2a23;
case 0x6d2a25:c.instructions+=2;goto B6d2a25;
case 0x6d2a27:c.instructions+=1;goto B6d2a27;
case 0x6d2a2a:goto L6d2a2a;
case 0x6d2a2c:c.instructions+=1;goto B6d2a2c;
case 0x6d2a2e:goto L6d2a2e;
case 0x6d2a30:c.instructions+=1;goto B6d2a30;
case 0x6d2a35:goto L6d2a35;
case 0x6d2a37:c.instructions+=1;goto B6d2a37;
case 0x6d2a39:goto L6d2a39;
case 0x6d2a3c:goto L6d2a3c;
case 0x6d2a3f:c.instructions+=2;goto B6d2a3f;
case 0x6d2a43:c.instructions+=1;goto B6d2a43;
case 0x6d2a49:goto L6d2a49;
case 0x6d2a4b:goto L6d2a4b;
case 0x6d2a4c:c.instructions+=1;goto B6d2a4c;
case 0x6d2a4d:goto L6d2a4d;
case 0x6d2a4e:c.instructions+=2;goto B6d2a4e;
case 0x6d2a4f:c.instructions+=1;goto B6d2a4f;
case 0x6d2a50:goto L6d2a50;
case 0x6d2a52:c.instructions+=15;goto B6d2a52;
case 0x6d2a53:c.instructions+=14;goto B6d2a53;
case 0x6d2a55:c.instructions+=13;goto B6d2a55;
case 0x6d2a58:c.instructions+=12;goto B6d2a58;
case 0x6d2a59:c.instructions+=11;goto B6d2a59;
case 0x6d2a5a:c.instructions+=10;goto B6d2a5a;
case 0x6d2a5c:c.instructions+=9;goto B6d2a5c;
case 0x6d2a62:c.instructions+=8;goto B6d2a62;
case 0x6d2a64:c.instructions+=7;goto B6d2a64;
case 0x6d2a65:c.instructions+=6;goto B6d2a65;
case 0x6d2a67:c.instructions+=5;goto B6d2a67;
case 0x6d2a6c:c.instructions+=4;goto B6d2a6c;
case 0x6d2a6e:c.instructions+=3;goto B6d2a6e;
case 0x6d2a74:c.instructions+=2;goto B6d2a74;
case 0x6d2a79:c.instructions+=1;goto B6d2a79;
case 0x6d2a7b:goto L6d2a7b;
case 0x6d2a80:c.instructions+=1;goto B6d2a80;
case 0x6d2a86:goto L6d2a86;
case 0x6d2a8b:c.instructions+=1;goto B6d2a8b;
case 0x6d2a91:goto L6d2a91;
case 0x6d2a96:c.instructions+=1;goto B6d2a96;
case 0x6d2a9c:goto L6d2a9c;
case 0x6d2aa1:c.instructions+=1;goto B6d2aa1;
case 0x6d2aa3:goto L6d2aa3;
case 0x6d2aa5:goto L6d2aa5;
case 0x6d2aa6:goto L6d2aa6;
case 0x6d2aa9:c.instructions+=4;goto B6d2aa9;
case 0x6d2aac:c.instructions+=3;goto B6d2aac;
case 0x6d2aad:c.instructions+=2;goto B6d2aad;
case 0x6d2aaf:c.instructions+=1;goto B6d2aaf;
case 0x6d2ab4:goto L6d2ab4;
case 0x6d2ab6:c.instructions+=1;goto B6d2ab6;
case 0x6d2abc:goto L6d2abc;
case 0x6d2abf:c.instructions+=11;goto B6d2abf;
case 0x6d2ac1:c.instructions+=10;goto B6d2ac1;
case 0x6d2ac4:c.instructions+=9;goto B6d2ac4;
case 0x6d2ac5:c.instructions+=8;goto B6d2ac5;
case 0x6d2ac8:c.instructions+=7;goto B6d2ac8;
case 0x6d2ac9:c.instructions+=6;goto B6d2ac9;
case 0x6d2acf:c.instructions+=5;goto B6d2acf;
case 0x6d2ad2:c.instructions+=4;goto B6d2ad2;
case 0x6d2ad4:c.instructions+=3;goto B6d2ad4;
case 0x6d2ad7:c.instructions+=2;goto B6d2ad7;
case 0x6d2ad9:c.instructions+=1;goto B6d2ad9;
case 0x6d2adc:goto L6d2adc;
case 0x6d2ade:c.instructions+=1;goto B6d2ade;
case 0x6d2ae4:goto L6d2ae4;
case 0x6d2ae6:c.instructions+=8;goto B6d2ae6;
case 0x6d2ae9:c.instructions+=7;goto B6d2ae9;
case 0x6d2aea:c.instructions+=6;goto B6d2aea;
case 0x6d2af0:c.instructions+=5;goto B6d2af0;
case 0x6d2af5:c.instructions+=4;goto B6d2af5;
case 0x6d2af6:c.instructions+=3;goto B6d2af6;
case 0x6d2af9:c.instructions+=2;goto B6d2af9;
case 0x6d2afb:c.instructions+=1;goto B6d2afb;
case 0x6d2afe:goto L6d2afe;
case 0x6d2b00:c.instructions+=1;goto B6d2b00;
case 0x6d2b06:goto L6d2b06;
case 0x6d2b09:c.instructions+=5;goto B6d2b09;
case 0x6d2b0b:c.instructions+=4;goto B6d2b0b;
case 0x6d2b0e:c.instructions+=3;goto B6d2b0e;
case 0x6d2b10:c.instructions+=2;goto B6d2b10;
case 0x6d2b13:c.instructions+=1;goto B6d2b13;
case 0x6d2b16:goto L6d2b16;
case 0x6d2b18:c.instructions+=1;goto B6d2b18;
case 0x6d2b1a:goto L6d2b1a;
case 0x6d2b1d:c.instructions+=13;goto B6d2b1d;
case 0x6d2b1f:c.instructions+=12;goto B6d2b1f;
case 0x6d2b22:c.instructions+=11;goto B6d2b22;
case 0x6d2b23:c.instructions+=10;goto B6d2b23;
case 0x6d2b26:c.instructions+=9;goto B6d2b26;
case 0x6d2b27:c.instructions+=8;goto B6d2b27;
case 0x6d2b2d:c.instructions+=7;goto B6d2b2d;
case 0x6d2b30:c.instructions+=6;goto B6d2b30;
case 0x6d2b32:c.instructions+=5;goto B6d2b32;
case 0x6d2b35:c.instructions+=4;goto B6d2b35;
case 0x6d2b38:c.instructions+=3;goto B6d2b38;
case 0x6d2b3b:c.instructions+=2;goto B6d2b3b;
case 0x6d2b3d:c.instructions+=1;goto B6d2b3d;
case 0x6d2b40:goto L6d2b40;
case 0x6d2b42:c.instructions+=1;goto B6d2b42;
case 0x6d2b44:goto L6d2b44;
case 0x6d2b46:c.instructions+=10;goto B6d2b46;
case 0x6d2b49:c.instructions+=9;goto B6d2b49;
case 0x6d2b4a:c.instructions+=8;goto B6d2b4a;
case 0x6d2b50:c.instructions+=7;goto B6d2b50;
case 0x6d2b53:c.instructions+=6;goto B6d2b53;
case 0x6d2b58:c.instructions+=5;goto B6d2b58;
case 0x6d2b5a:c.instructions+=4;goto B6d2b5a;
case 0x6d2b5b:c.instructions+=3;goto B6d2b5b;
case 0x6d2b5c:c.instructions+=2;goto B6d2b5c;
case 0x6d2b5e:c.instructions+=1;goto B6d2b5e;
case 0x6d2b61:goto L6d2b61;
case 0x6d2b63:c.instructions+=1;goto B6d2b63;
case 0x6d2b65:goto L6d2b65;
case 0x6d2b68:c.instructions+=5;goto B6d2b68;
case 0x6d2b6a:c.instructions+=4;goto B6d2b6a;
case 0x6d2b6d:c.instructions+=3;goto B6d2b6d;
case 0x6d2b6f:c.instructions+=2;goto B6d2b6f;
case 0x6d2b72:c.instructions+=1;goto B6d2b72;
case 0x6d2b75:goto L6d2b75;
case 0x6d2b77:c.instructions+=1;goto B6d2b77;
case 0x6d2b79:goto L6d2b79;
case 0x6d2b7b:c.instructions+=2;goto B6d2b7b;
case 0x6d2b7d:c.instructions+=1;goto B6d2b7d;
case 0x6d2b80:goto L6d2b80;
case 0x6d2b82:c.instructions+=1;goto B6d2b82;
case 0x6d2b84:goto L6d2b84;
case 0x6d2b86:c.instructions+=1;goto B6d2b86;
case 0x6d2b8b:goto L6d2b8b;
case 0x6d2b8d:c.instructions+=1;goto B6d2b8d;
case 0x6d2b8f:goto L6d2b8f;
case 0x6d2b91:goto L6d2b91;
case 0x6d2b92:c.instructions+=4;goto B6d2b92;
case 0x6d2b93:c.instructions+=3;goto B6d2b93;
case 0x6d2b94:c.instructions+=2;goto B6d2b94;
case 0x6d2b95:c.instructions+=1;goto B6d2b95;
case 0x6d2b96:goto L6d2b96;
case 0x6d2b98:c.instructions+=1;goto B6d2b98;
case 0x6d2b9d:goto L6d2b9d;
case 0x6d2b9f:c.instructions+=1;goto B6d2b9f;
case 0x6d2ba4:goto L6d2ba4;
case 0x6d2ba6:c.instructions+=1;goto B6d2ba6;
case 0x6d2bab:goto L6d2bab;
case 0x6d2bad:c.instructions+=8;goto B6d2bad;
case 0x6d2bae:c.instructions+=7;goto B6d2bae;
case 0x6d2bb0:c.instructions+=6;goto B6d2bb0;
case 0x6d2bb1:c.instructions+=5;goto B6d2bb1;
case 0x6d2bb2:c.instructions+=4;goto B6d2bb2;
case 0x6d2bb3:c.instructions+=3;goto B6d2bb3;
case 0x6d2bb5:c.instructions+=2;goto B6d2bb5;
case 0x6d2bb7:c.instructions+=1;goto B6d2bb7;
case 0x6d2bbc:goto L6d2bbc;
case 0x6d2bbe:c.instructions+=1;goto B6d2bbe;
case 0x6d2bc0:goto L6d2bc0;
case 0x6d2bc3:c.instructions+=11;goto B6d2bc3;
case 0x6d2bc5:c.instructions+=10;goto B6d2bc5;
case 0x6d2bc8:c.instructions+=9;goto B6d2bc8;
case 0x6d2bc9:c.instructions+=8;goto B6d2bc9;
case 0x6d2bcc:c.instructions+=7;goto B6d2bcc;
case 0x6d2bcd:c.instructions+=6;goto B6d2bcd;
case 0x6d2bd3:c.instructions+=5;goto B6d2bd3;
case 0x6d2bd6:c.instructions+=4;goto B6d2bd6;
case 0x6d2bd8:c.instructions+=3;goto B6d2bd8;
case 0x6d2bdb:c.instructions+=2;goto B6d2bdb;
case 0x6d2bdd:c.instructions+=1;goto B6d2bdd;
case 0x6d2be0:goto L6d2be0;
case 0x6d2be2:c.instructions+=1;goto B6d2be2;
case 0x6d2be4:goto L6d2be4;
case 0x6d2be7:c.instructions+=10;goto B6d2be7;
case 0x6d2bea:c.instructions+=9;goto B6d2bea;
case 0x6d2bec:c.instructions+=8;goto B6d2bec;
case 0x6d2bee:c.instructions+=7;goto B6d2bee;
case 0x6d2bf0:c.instructions+=6;goto B6d2bf0;
case 0x6d2bf6:c.instructions+=5;goto B6d2bf6;
case 0x6d2bf9:c.instructions+=4;goto B6d2bf9;
case 0x6d2bfe:c.instructions+=3;goto B6d2bfe;
case 0x6d2bff:c.instructions+=2;goto B6d2bff;
case 0x6d2c01:c.instructions+=1;goto B6d2c01;
case 0x6d2c04:goto L6d2c04;
case 0x6d2c06:c.instructions+=1;goto B6d2c06;
case 0x6d2c08:goto L6d2c08;
case 0x6d2c0a:c.instructions+=2;goto B6d2c0a;
case 0x6d2c0c:c.instructions+=1;goto B6d2c0c;
case 0x6d2c0f:goto L6d2c0f;
case 0x6d2c11:c.instructions+=1;goto B6d2c11;
case 0x6d2c13:goto L6d2c13;
case 0x6d2c15:c.instructions+=1;goto B6d2c15;
case 0x6d2c1a:goto L6d2c1a;
case 0x6d2c1c:c.instructions+=1;goto B6d2c1c;
case 0x6d2c1e:goto L6d2c1e;
case 0x6d2c20:goto L6d2c20;
case 0x6d2c21:c.instructions+=2;goto B6d2c21;
case 0x6d2c22:c.instructions+=1;goto B6d2c22;
case 0x6d2c25:goto L6d2c25;
case 0x6d2c27:c.instructions+=4;goto B6d2c27;
case 0x6d2c28:c.instructions+=3;goto B6d2c28;
case 0x6d2c2a:c.instructions+=2;goto B6d2c2a;
case 0x6d2c2c:c.instructions+=1;goto B6d2c2c;
case 0x6d2c31:goto L6d2c31;
case 0x6d2c33:c.instructions+=1;goto B6d2c33;
case 0x6d2c35:goto L6d2c35;
case 0x6d2c37:c.instructions+=2;goto B6d2c37;
case 0x6d2c39:c.instructions+=1;goto B6d2c39;
case 0x6d2c3c:goto L6d2c3c;
case 0x6d2c3e:c.instructions+=1;goto B6d2c3e;
case 0x6d2c40:goto L6d2c40;
case 0x6d2c42:c.instructions+=1;goto B6d2c42;
case 0x6d2c47:goto L6d2c47;
case 0x6d2c49:c.instructions+=1;goto B6d2c49;
case 0x6d2c4b:goto L6d2c4b;
case 0x6d2c4d:goto L6d2c4d;
case 0x6d2c4e:c.instructions+=1;goto B6d2c4e;
case 0x6d2c4f:goto L6d2c4f;
case 0x6d2c51:c.instructions+=4;goto B6d2c51;
case 0x6d2c52:c.instructions+=3;goto B6d2c52;
case 0x6d2c54:c.instructions+=2;goto B6d2c54;
case 0x6d2c56:c.instructions+=1;goto B6d2c56;
case 0x6d2c5b:goto L6d2c5b;
case 0x6d2c5d:c.instructions+=1;goto B6d2c5d;
case 0x6d2c5f:goto L6d2c5f;
case 0x6d2c61:c.instructions+=2;goto B6d2c61;
case 0x6d2c63:c.instructions+=1;goto B6d2c63;
case 0x6d2c66:goto L6d2c66;
case 0x6d2c68:c.instructions+=1;goto B6d2c68;
case 0x6d2c6a:goto L6d2c6a;
case 0x6d2c6c:c.instructions+=1;goto B6d2c6c;
case 0x6d2c71:goto L6d2c71;
case 0x6d2c73:c.instructions+=1;goto B6d2c73;
case 0x6d2c75:goto L6d2c75;
case 0x6d2c77:goto L6d2c77;
case 0x6d2c78:c.instructions+=1;goto B6d2c78;
case 0x6d2c79:goto L6d2c79;
case 0x6d2c7b:c.instructions+=7;goto B6d2c7b;
case 0x6d2c7c:c.instructions+=6;goto B6d2c7c;
case 0x6d2c7e:c.instructions+=5;goto B6d2c7e;
case 0x6d2c81:c.instructions+=4;goto B6d2c81;
case 0x6d2c82:c.instructions+=3;goto B6d2c82;
case 0x6d2c84:c.instructions+=2;goto B6d2c84;
case 0x6d2c86:c.instructions+=1;goto B6d2c86;
case 0x6d2c8b:goto L6d2c8b;
case 0x6d2c8d:c.instructions+=1;goto B6d2c8d;
case 0x6d2c93:goto L6d2c93;
case 0x6d2c96:c.instructions+=13;goto B6d2c96;
case 0x6d2c98:c.instructions+=12;goto B6d2c98;
case 0x6d2c9b:c.instructions+=11;goto B6d2c9b;
case 0x6d2c9c:c.instructions+=10;goto B6d2c9c;
case 0x6d2c9f:c.instructions+=9;goto B6d2c9f;
case 0x6d2ca0:c.instructions+=8;goto B6d2ca0;
case 0x6d2ca3:c.instructions+=7;goto B6d2ca3;
case 0x6d2ca4:c.instructions+=6;goto B6d2ca4;
case 0x6d2caa:c.instructions+=5;goto B6d2caa;
case 0x6d2cad:c.instructions+=4;goto B6d2cad;
case 0x6d2caf:c.instructions+=3;goto B6d2caf;
case 0x6d2cb2:c.instructions+=2;goto B6d2cb2;
case 0x6d2cb4:c.instructions+=1;goto B6d2cb4;
case 0x6d2cb7:goto L6d2cb7;
case 0x6d2cb9:c.instructions+=1;goto B6d2cb9;
case 0x6d2cbf:goto L6d2cbf;
case 0x6d2cc2:c.instructions+=8;goto B6d2cc2;
case 0x6d2cc8:c.instructions+=7;goto B6d2cc8;
case 0x6d2cca:c.instructions+=6;goto B6d2cca;
case 0x6d2ccd:c.instructions+=5;goto B6d2ccd;
case 0x6d2cce:c.instructions+=4;goto B6d2cce;
case 0x6d2cd1:c.instructions+=3;goto B6d2cd1;
case 0x6d2cd3:c.instructions+=2;goto B6d2cd3;
case 0x6d2cd6:c.instructions+=1;goto B6d2cd6;
case 0x6d2cd9:goto L6d2cd9;
case 0x6d2cdb:c.instructions+=1;goto B6d2cdb;
case 0x6d2ce1:goto L6d2ce1;
case 0x6d2ce4:c.instructions+=5;goto B6d2ce4;
case 0x6d2ce6:c.instructions+=4;goto B6d2ce6;
case 0x6d2ce9:c.instructions+=3;goto B6d2ce9;
case 0x6d2ceb:c.instructions+=2;goto B6d2ceb;
case 0x6d2cee:c.instructions+=1;goto B6d2cee;
case 0x6d2cf1:goto L6d2cf1;
case 0x6d2cf3:c.instructions+=1;goto B6d2cf3;
case 0x6d2cf9:goto L6d2cf9;
case 0x6d2cfc:c.instructions+=11;goto B6d2cfc;
case 0x6d2cfe:c.instructions+=10;goto B6d2cfe;
case 0x6d2d01:c.instructions+=9;goto B6d2d01;
case 0x6d2d02:c.instructions+=8;goto B6d2d02;
case 0x6d2d05:c.instructions+=7;goto B6d2d05;
case 0x6d2d06:c.instructions+=6;goto B6d2d06;
case 0x6d2d0c:c.instructions+=5;goto B6d2d0c;
case 0x6d2d0f:c.instructions+=4;goto B6d2d0f;
case 0x6d2d11:c.instructions+=3;goto B6d2d11;
case 0x6d2d14:c.instructions+=2;goto B6d2d14;
case 0x6d2d16:c.instructions+=1;goto B6d2d16;
case 0x6d2d19:goto L6d2d19;
case 0x6d2d1b:c.instructions+=1;goto B6d2d1b;
case 0x6d2d1d:goto L6d2d1d;
case 0x6d2d23:c.instructions+=8;goto B6d2d23;
case 0x6d2d25:c.instructions+=7;goto B6d2d25;
case 0x6d2d28:c.instructions+=6;goto B6d2d28;
case 0x6d2d29:c.instructions+=5;goto B6d2d29;
case 0x6d2d2c:c.instructions+=4;goto B6d2d2c;
case 0x6d2d2e:c.instructions+=3;goto B6d2d2e;
case 0x6d2d31:c.instructions+=2;goto B6d2d31;
case 0x6d2d34:c.instructions+=1;goto B6d2d34;
case 0x6d2d37:goto L6d2d37;
case 0x6d2d39:c.instructions+=1;goto B6d2d39;
case 0x6d2d3b:goto L6d2d3b;
case 0x6d2d3e:c.instructions+=5;goto B6d2d3e;
case 0x6d2d43:c.instructions+=4;goto B6d2d43;
case 0x6d2d46:c.instructions+=3;goto B6d2d46;
case 0x6d2d49:c.instructions+=2;goto B6d2d49;
case 0x6d2d4b:c.instructions+=1;goto B6d2d4b;
case 0x6d2d4d:goto L6d2d4d;
case 0x6d2d53:c.instructions+=2;goto B6d2d53;
case 0x6d2d58:c.instructions+=1;goto B6d2d58;
case 0x6d2d5a:goto L6d2d5a;
case 0x6d2d60:goto L6d2d60;
case 0x6d2d61:c.instructions+=3;goto B6d2d61;
case 0x6d2d63:c.instructions+=2;goto B6d2d63;
case 0x6d2d64:c.instructions+=1;goto B6d2d64;
case 0x6d2d67:goto L6d2d67;
case 0x6d2d69:c.instructions+=1;goto B6d2d69;
case 0x6d2d6b:goto L6d2d6b;
case 0x6d2d6d:c.instructions+=2;goto B6d2d6d;
case 0x6d2d6f:c.instructions+=1;goto B6d2d6f;
case 0x6d2d72:goto L6d2d72;
case 0x6d2d74:c.instructions+=1;goto B6d2d74;
case 0x6d2d76:goto L6d2d76;
case 0x6d2d78:c.instructions+=1;goto B6d2d78;
case 0x6d2d7d:goto L6d2d7d;
case 0x6d2d7f:c.instructions+=1;goto B6d2d7f;
case 0x6d2d81:goto L6d2d81;
case 0x6d2d83:goto L6d2d83;
case 0x6d2d84:c.instructions+=2;goto B6d2d84;
case 0x6d2d85:c.instructions+=1;goto B6d2d85;
case 0x6d2d86:goto L6d2d86;
case 0x6d2d88:c.instructions+=15;goto B6d2d88;
case 0x6d2d89:c.instructions+=14;goto B6d2d89;
case 0x6d2d8b:c.instructions+=13;goto B6d2d8b;
case 0x6d2d8c:c.instructions+=12;goto B6d2d8c;
case 0x6d2d8d:c.instructions+=11;goto B6d2d8d;
case 0x6d2d8e:c.instructions+=10;goto B6d2d8e;
case 0x6d2d8f:c.instructions+=9;goto B6d2d8f;
case 0x6d2d90:c.instructions+=8;goto B6d2d90;
case 0x6d2d92:c.instructions+=7;goto B6d2d92;
case 0x6d2d98:c.instructions+=6;goto B6d2d98;
case 0x6d2d9a:c.instructions+=5;goto B6d2d9a;
case 0x6d2da0:c.instructions+=4;goto B6d2da0;
case 0x6d2da2:c.instructions+=3;goto B6d2da2;
case 0x6d2da3:c.instructions+=2;goto B6d2da3;
case 0x6d2da6:c.instructions+=1;goto B6d2da6;
case 0x6d2da8:goto L6d2da8;
case 0x6d2daa:c.instructions+=2;goto B6d2daa;
case 0x6d2dad:c.instructions+=1;goto B6d2dad;
case 0x6d2db0:goto L6d2db0;
case 0x6d2db6:c.instructions+=21;goto B6d2db6;
case 0x6d2db9:c.instructions+=20;goto B6d2db9;
case 0x6d2dbc:c.instructions+=19;goto B6d2dbc;
case 0x6d2dbf:c.instructions+=18;goto B6d2dbf;
case 0x6d2dc0:c.instructions+=17;goto B6d2dc0;
case 0x6d2dc1:c.instructions+=16;goto B6d2dc1;
case 0x6d2dc2:c.instructions+=15;goto B6d2dc2;
case 0x6d2dc3:c.instructions+=14;goto B6d2dc3;
case 0x6d2dc4:c.instructions+=13;goto B6d2dc4;
case 0x6d2dc5:c.instructions+=12;goto B6d2dc5;
case 0x6d2dc8:c.instructions+=11;goto B6d2dc8;
case 0x6d2dca:c.instructions+=10;goto B6d2dca;
case 0x6d2dcd:c.instructions+=9;goto B6d2dcd;
case 0x6d2dce:c.instructions+=8;goto B6d2dce;
case 0x6d2dd0:c.instructions+=7;goto B6d2dd0;
case 0x6d2dd1:c.instructions+=6;goto B6d2dd1;
case 0x6d2dd3:c.instructions+=5;goto B6d2dd3;
case 0x6d2dd5:c.instructions+=4;goto B6d2dd5;
case 0x6d2dd6:c.instructions+=3;goto B6d2dd6;
case 0x6d2dd8:c.instructions+=2;goto B6d2dd8;
case 0x6d2dda:c.instructions+=1;goto B6d2dda;
case 0x6d2ddf:goto L6d2ddf;
case 0x6d2de1:c.instructions+=2;goto B6d2de1;
case 0x6d2de3:c.instructions+=1;goto B6d2de3;
case 0x6d2de5:goto L6d2de5;
case 0x6d2de8:c.instructions+=3;goto B6d2de8;
case 0x6d2dec:c.instructions+=2;goto B6d2dec;
case 0x6d2def:c.instructions+=1;goto B6d2def;
case 0x6d2df1:goto L6d2df1;
case 0x6d2df3:goto L6d2df3;
case 0x6d2df4:c.instructions+=4;goto B6d2df4;
case 0x6d2df5:c.instructions+=3;goto B6d2df5;
case 0x6d2df6:c.instructions+=2;goto B6d2df6;
case 0x6d2df7:c.instructions+=1;goto B6d2df7;
case 0x6d2df8:goto L6d2df8;
case 0x6d2dfa:c.instructions+=13;goto B6d2dfa;
case 0x6d2dfb:c.instructions+=12;goto B6d2dfb;
case 0x6d2dfd:c.instructions+=11;goto B6d2dfd;
case 0x6d2e00:c.instructions+=10;goto B6d2e00;
case 0x6d2e01:c.instructions+=9;goto B6d2e01;
case 0x6d2e02:c.instructions+=8;goto B6d2e02;
case 0x6d2e04:c.instructions+=7;goto B6d2e04;
case 0x6d2e0a:c.instructions+=6;goto B6d2e0a;
case 0x6d2e0c:c.instructions+=5;goto B6d2e0c;
case 0x6d2e0e:c.instructions+=4;goto B6d2e0e;
case 0x6d2e0f:c.instructions+=3;goto B6d2e0f;
case 0x6d2e11:c.instructions+=2;goto B6d2e11;
case 0x6d2e17:c.instructions+=1;goto B6d2e17;
case 0x6d2e1a:goto L6d2e1a;
case 0x6d2e1b:c.instructions+=2;goto B6d2e1b;
case 0x6d2e1d:c.instructions+=1;goto B6d2e1d;
case 0x6d2e22:goto L6d2e22;
case 0x6d2e24:c.instructions+=1;goto B6d2e24;
case 0x6d2e2a:goto L6d2e2a;
case 0x6d2e2d:c.instructions+=13;goto B6d2e2d;
case 0x6d2e2f:c.instructions+=12;goto B6d2e2f;
case 0x6d2e32:c.instructions+=11;goto B6d2e32;
case 0x6d2e33:c.instructions+=10;goto B6d2e33;
case 0x6d2e36:c.instructions+=9;goto B6d2e36;
case 0x6d2e37:c.instructions+=8;goto B6d2e37;
case 0x6d2e3a:c.instructions+=7;goto B6d2e3a;
case 0x6d2e3b:c.instructions+=6;goto B6d2e3b;
case 0x6d2e41:c.instructions+=5;goto B6d2e41;
case 0x6d2e44:c.instructions+=4;goto B6d2e44;
case 0x6d2e46:c.instructions+=3;goto B6d2e46;
case 0x6d2e49:c.instructions+=2;goto B6d2e49;
case 0x6d2e4b:c.instructions+=1;goto B6d2e4b;
case 0x6d2e4e:goto L6d2e4e;
case 0x6d2e50:c.instructions+=1;goto B6d2e50;
case 0x6d2e56:goto L6d2e56;
case 0x6d2e59:c.instructions+=8;goto B6d2e59;
case 0x6d2e5b:c.instructions+=7;goto B6d2e5b;
case 0x6d2e5e:c.instructions+=6;goto B6d2e5e;
case 0x6d2e5f:c.instructions+=5;goto B6d2e5f;
case 0x6d2e65:c.instructions+=4;goto B6d2e65;
case 0x6d2e66:c.instructions+=3;goto B6d2e66;
case 0x6d2e69:c.instructions+=2;goto B6d2e69;
case 0x6d2e6b:c.instructions+=1;goto B6d2e6b;
case 0x6d2e6e:goto L6d2e6e;
case 0x6d2e70:c.instructions+=1;goto B6d2e70;
case 0x6d2e76:goto L6d2e76;
case 0x6d2e79:c.instructions+=5;goto B6d2e79;
case 0x6d2e7b:c.instructions+=4;goto B6d2e7b;
case 0x6d2e7e:c.instructions+=3;goto B6d2e7e;
case 0x6d2e80:c.instructions+=2;goto B6d2e80;
case 0x6d2e83:c.instructions+=1;goto B6d2e83;
case 0x6d2e86:goto L6d2e86;
case 0x6d2e88:c.instructions+=1;goto B6d2e88;
case 0x6d2e8e:goto L6d2e8e;
case 0x6d2e92:c.instructions+=1;goto B6d2e92;
case 0x6d2e96:goto L6d2e96;
case 0x6d2e9c:c.instructions+=12;goto B6d2e9c;
case 0x6d2e9f:c.instructions+=11;goto B6d2e9f;
case 0x6d2ea2:c.instructions+=10;goto B6d2ea2;
case 0x6d2ea5:c.instructions+=9;goto B6d2ea5;
case 0x6d2ea7:c.instructions+=8;goto B6d2ea7;
case 0x6d2eaa:c.instructions+=7;goto B6d2eaa;
case 0x6d2eab:c.instructions+=6;goto B6d2eab;
case 0x6d2eae:c.instructions+=5;goto B6d2eae;
case 0x6d2eaf:c.instructions+=4;goto B6d2eaf;
case 0x6d2eb1:c.instructions+=3;goto B6d2eb1;
case 0x6d2eb4:c.instructions+=2;goto B6d2eb4;
case 0x6d2eb6:c.instructions+=1;goto B6d2eb6;
case 0x6d2eb9:goto L6d2eb9;
case 0x6d2ebb:c.instructions+=1;goto B6d2ebb;
case 0x6d2ebd:goto L6d2ebd;
case 0x6d2ebf:c.instructions+=7;goto B6d2ebf;
case 0x6d2ec2:c.instructions+=6;goto B6d2ec2;
case 0x6d2ec3:c.instructions+=5;goto B6d2ec3;
case 0x6d2ec6:c.instructions+=4;goto B6d2ec6;
case 0x6d2ec8:c.instructions+=3;goto B6d2ec8;
case 0x6d2ec9:c.instructions+=2;goto B6d2ec9;
case 0x6d2eca:c.instructions+=1;goto B6d2eca;
case 0x6d2ecd:goto L6d2ecd;
case 0x6d2ecf:c.instructions+=1;goto B6d2ecf;
case 0x6d2ed1:goto L6d2ed1;
case 0x6d2ed4:c.instructions+=5;goto B6d2ed4;
case 0x6d2ed6:c.instructions+=4;goto B6d2ed6;
case 0x6d2ed9:c.instructions+=3;goto B6d2ed9;
case 0x6d2edb:c.instructions+=2;goto B6d2edb;
case 0x6d2ede:c.instructions+=1;goto B6d2ede;
case 0x6d2ee1:goto L6d2ee1;
case 0x6d2ee3:c.instructions+=1;goto B6d2ee3;
case 0x6d2ee5:goto L6d2ee5;
case 0x6d2ee8:c.instructions+=5;goto B6d2ee8;
case 0x6d2eea:c.instructions+=4;goto B6d2eea;
case 0x6d2eed:c.instructions+=3;goto B6d2eed;
case 0x6d2ef0:c.instructions+=2;goto B6d2ef0;
case 0x6d2ef4:c.instructions+=1;goto B6d2ef4;
case 0x6d2ef6:goto L6d2ef6;
case 0x6d2ef8:c.instructions+=2;goto B6d2ef8;
case 0x6d2efa:c.instructions+=1;goto B6d2efa;
case 0x6d2efd:goto L6d2efd;
case 0x6d2eff:c.instructions+=1;goto B6d2eff;
case 0x6d2f01:goto L6d2f01;
case 0x6d2f03:c.instructions+=1;goto B6d2f03;
case 0x6d2f08:goto L6d2f08;
case 0x6d2f0a:c.instructions+=1;goto B6d2f0a;
case 0x6d2f0c:goto L6d2f0c;
case 0x6d2f0e:goto L6d2f0e;
case 0x6d2f0f:c.instructions+=4;goto B6d2f0f;
case 0x6d2f10:c.instructions+=3;goto B6d2f10;
case 0x6d2f11:c.instructions+=2;goto B6d2f11;
case 0x6d2f12:c.instructions+=1;goto B6d2f12;
case 0x6d2f13:goto L6d2f13;
case 0x6d2f15:c.instructions+=19;goto B6d2f15;
case 0x6d2f16:c.instructions+=18;goto B6d2f16;
case 0x6d2f18:c.instructions+=17;goto B6d2f18;
case 0x6d2f1b:c.instructions+=16;goto B6d2f1b;
case 0x6d2f1c:c.instructions+=15;goto B6d2f1c;
case 0x6d2f1d:c.instructions+=14;goto B6d2f1d;
case 0x6d2f1f:c.instructions+=13;goto B6d2f1f;
case 0x6d2f25:c.instructions+=12;goto B6d2f25;
case 0x6d2f28:c.instructions+=11;goto B6d2f28;
case 0x6d2f2b:c.instructions+=10;goto B6d2f2b;
case 0x6d2f2c:c.instructions+=9;goto B6d2f2c;
case 0x6d2f2e:c.instructions+=8;goto B6d2f2e;
case 0x6d2f30:c.instructions+=7;goto B6d2f30;
case 0x6d2f33:c.instructions+=6;goto B6d2f33;
case 0x6d2f39:c.instructions+=5;goto B6d2f39;
case 0x6d2f3f:c.instructions+=4;goto B6d2f3f;
case 0x6d2f41:c.instructions+=3;goto B6d2f41;
case 0x6d2f44:c.instructions+=2;goto B6d2f44;
case 0x6d2f47:c.instructions+=1;goto B6d2f47;
case 0x6d2f49:goto L6d2f49;
case 0x6d2f4b:c.instructions+=8;goto B6d2f4b;
case 0x6d2f4c:c.instructions+=7;goto B6d2f4c;
case 0x6d2f4d:c.instructions+=6;goto B6d2f4d;
case 0x6d2f4e:c.instructions+=5;goto B6d2f4e;
case 0x6d2f51:c.instructions+=4;goto B6d2f51;
case 0x6d2f52:c.instructions+=3;goto B6d2f52;
case 0x6d2f58:c.instructions+=2;goto B6d2f58;
case 0x6d2f5a:c.instructions+=1;goto B6d2f5a;
case 0x6d2f60:goto L6d2f60;
case 0x6d2f62:c.instructions+=1;goto B6d2f62;
case 0x6d2f64:goto L6d2f64;
case 0x6d2f67:c.instructions+=2;goto B6d2f67;
case 0x6d2f6a:c.instructions+=1;goto B6d2f6a;
case 0x6d2f6c:goto L6d2f6c;
case 0x6d2f72:c.instructions+=13;goto B6d2f72;
case 0x6d2f73:c.instructions+=12;goto B6d2f73;
case 0x6d2f74:c.instructions+=11;goto B6d2f74;
case 0x6d2f75:c.instructions+=10;goto B6d2f75;
case 0x6d2f76:c.instructions+=9;goto B6d2f76;
case 0x6d2f77:c.instructions+=8;goto B6d2f77;
case 0x6d2f78:c.instructions+=7;goto B6d2f78;
case 0x6d2f79:c.instructions+=6;goto B6d2f79;
case 0x6d2f7c:c.instructions+=5;goto B6d2f7c;
case 0x6d2f7d:c.instructions+=4;goto B6d2f7d;
case 0x6d2f7e:c.instructions+=3;goto B6d2f7e;
case 0x6d2f80:c.instructions+=2;goto B6d2f80;
case 0x6d2f82:c.instructions+=1;goto B6d2f82;
case 0x6d2f87:goto L6d2f87;
case 0x6d2f89:c.instructions+=1;goto B6d2f89;
case 0x6d2f8b:goto L6d2f8b;
case 0x6d2f8e:c.instructions+=2;goto B6d2f8e;
case 0x6d2f91:c.instructions+=1;goto B6d2f91;
case 0x6d2f93:goto L6d2f93;
case 0x6d2f94:c.instructions+=13;goto B6d2f94;
case 0x6d2f95:c.instructions+=12;goto B6d2f95;
case 0x6d2f96:c.instructions+=11;goto B6d2f96;
case 0x6d2f97:c.instructions+=10;goto B6d2f97;
case 0x6d2f98:c.instructions+=9;goto B6d2f98;
case 0x6d2f99:c.instructions+=8;goto B6d2f99;
case 0x6d2f9a:c.instructions+=7;goto B6d2f9a;
case 0x6d2f9b:c.instructions+=6;goto B6d2f9b;
case 0x6d2fa1:c.instructions+=5;goto B6d2fa1;
case 0x6d2fa2:c.instructions+=4;goto B6d2fa2;
case 0x6d2fa5:c.instructions+=3;goto B6d2fa5;
case 0x6d2fa7:c.instructions+=2;goto B6d2fa7;
case 0x6d2fa9:c.instructions+=1;goto B6d2fa9;
case 0x6d2fae:goto L6d2fae;
case 0x6d2fb0:c.instructions+=1;goto B6d2fb0;
case 0x6d2fb2:goto L6d2fb2;
case 0x6d2fb4:goto L6d2fb4;
case 0x6d2fb5:c.instructions+=4;goto B6d2fb5;
case 0x6d2fb6:c.instructions+=3;goto B6d2fb6;
case 0x6d2fb7:c.instructions+=2;goto B6d2fb7;
case 0x6d2fb8:c.instructions+=1;goto B6d2fb8;
case 0x6d2fb9:goto L6d2fb9;
case 0x6d2fbb:c.instructions+=13;goto B6d2fbb;
case 0x6d2fbc:c.instructions+=12;goto B6d2fbc;
case 0x6d2fbe:c.instructions+=11;goto B6d2fbe;
case 0x6d2fc1:c.instructions+=10;goto B6d2fc1;
case 0x6d2fc2:c.instructions+=9;goto B6d2fc2;
case 0x6d2fc3:c.instructions+=8;goto B6d2fc3;
case 0x6d2fc5:c.instructions+=7;goto B6d2fc5;
case 0x6d2fcb:c.instructions+=6;goto B6d2fcb;
case 0x6d2fcc:c.instructions+=5;goto B6d2fcc;
case 0x6d2fce:c.instructions+=4;goto B6d2fce;
case 0x6d2fd0:c.instructions+=3;goto B6d2fd0;
case 0x6d2fd2:c.instructions+=2;goto B6d2fd2;
case 0x6d2fd8:c.instructions+=1;goto B6d2fd8;
case 0x6d2fdb:goto L6d2fdb;
case 0x6d2fdc:c.instructions+=2;goto B6d2fdc;
case 0x6d2fde:c.instructions+=1;goto B6d2fde;
case 0x6d2fe3:goto L6d2fe3;
case 0x6d2fe5:c.instructions+=1;goto B6d2fe5;
case 0x6d2feb:goto L6d2feb;
case 0x6d2fee:c.instructions+=8;goto B6d2fee;
case 0x6d2ff0:c.instructions+=7;goto B6d2ff0;
case 0x6d2ff3:c.instructions+=6;goto B6d2ff3;
case 0x6d2ff4:c.instructions+=5;goto B6d2ff4;
case 0x6d2ff7:c.instructions+=4;goto B6d2ff7;
case 0x6d2ff8:c.instructions+=3;goto B6d2ff8;
case 0x6d2ffb:c.instructions+=2;goto B6d2ffb;
case 0x6d2ffc:c.instructions+=1;goto B6d2ffc;
default:missing_instruction(c.pc);}
B6d2002:L6d2002:{c.instructions+=3;NFSU2_TR(0x6d2002);
__builtin_memmove((R+4),(R+24),4);
}
B6d2004:{NFSU2_TR(0x6d2004);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2007:{NFSU2_TR(0x6d2007);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d200aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d200a:L6d200a:{c.instructions+=2;NFSU2_TR(0x6d200a);
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
B6d200c:{NFSU2_TR(0x6d200c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2085;}}
}
B6d200e:L6d200e:{c.instructions+=14;NFSU2_TR(0x6d200e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d2011:{NFSU2_TR(0x6d2011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2013:{NFSU2_TR(0x6d2013);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2016:{NFSU2_TR(0x6d2016);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2017:{NFSU2_TR(0x6d2017);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d201a:{NFSU2_TR(0x6d201a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d201b:{NFSU2_TR(0x6d201b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2021:{NFSU2_TR(0x6d2021);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2024:{NFSU2_TR(0x6d2024);
__builtin_memmove((R+12),(R+28),4);
}
B6d2026:{NFSU2_TR(0x6d2026);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+12),4);
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+12))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6d2029:{NFSU2_TR(0x6d2029);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d202c:{NFSU2_TR(0x6d202c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d202f:{NFSU2_TR(0x6d202f);
__builtin_memmove((R+4),(R+24),4);
}
B6d2031:{NFSU2_TR(0x6d2031);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2034ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2034:L6d2034:{c.instructions+=2;NFSU2_TR(0x6d2034);
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
B6d2036:{NFSU2_TR(0x6d2036);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2085;}}
}
B6d2038:L6d2038:{c.instructions+=11;NFSU2_TR(0x6d2038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d203a:{NFSU2_TR(0x6d203a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d203d:{NFSU2_TR(0x6d203d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d203e:{NFSU2_TR(0x6d203e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2044:{NFSU2_TR(0x6d2044);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2047:{NFSU2_TR(0x6d2047);
u8 U[4];
w4(U+0,u32(0xf0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d204c:{NFSU2_TR(0x6d204c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+12)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d204e:{NFSU2_TR(0x6d204e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d204f:{NFSU2_TR(0x6d204f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2050:{NFSU2_TR(0x6d2050);
__builtin_memmove((R+4),(R+24),4);
}
B6d2052:{NFSU2_TR(0x6d2052);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2055ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2055:L6d2055:{c.instructions+=2;NFSU2_TR(0x6d2055);
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
B6d2057:{NFSU2_TR(0x6d2057);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2085;}}
}
B6d2059:L6d2059:{c.instructions+=6;NFSU2_TR(0x6d2059);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d205c:{NFSU2_TR(0x6d205c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d205e:{NFSU2_TR(0x6d205e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2061:{NFSU2_TR(0x6d2061);
__builtin_memmove((R+4),(R+24),4);
}
B6d2063:{NFSU2_TR(0x6d2063);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2066:{NFSU2_TR(0x6d2066);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2069ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2069:L6d2069:{c.instructions+=2;NFSU2_TR(0x6d2069);
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
B6d206b:{NFSU2_TR(0x6d206b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2085;}}
}
B6d206d:L6d206d:{c.instructions+=3;NFSU2_TR(0x6d206d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d206f:{NFSU2_TR(0x6d206f);
__builtin_memmove((R+4),(R+24),4);
}
B6d2071:{NFSU2_TR(0x6d2071);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2074ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2074:L6d2074:{c.instructions+=2;NFSU2_TR(0x6d2074);
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
B6d2076:{NFSU2_TR(0x6d2076);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2085;}}
}
B6d2078:L6d2078:{c.instructions+=2;NFSU2_TR(0x6d2078);
__builtin_memmove((R+4),(R+24),4);
}
B6d207a:{NFSU2_TR(0x6d207a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d207full));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d207f:L6d207f:{c.instructions+=2;NFSU2_TR(0x6d207f);
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
B6d2081:{NFSU2_TR(0x6d2081);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2085;}}
}
B6d2083:L6d2083:{c.instructions+=1;NFSU2_TR(0x6d2083);
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
B6d2085:L6d2085:{c.instructions+=5;NFSU2_TR(0x6d2085);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d2086:{NFSU2_TR(0x6d2086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d2087:{NFSU2_TR(0x6d2087);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d2088:{NFSU2_TR(0x6d2088);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d2089:{NFSU2_TR(0x6d2089);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d208a:L6d208a:{c.instructions+=20;NFSU2_TR(0x6d208a);
__builtin_memmove((R+28),(R+28),4);
}
B6d208c:{NFSU2_TR(0x6d208c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d208d:{NFSU2_TR(0x6d208d);
__builtin_memmove((R+20),(R+16),4);
}
B6d208f:{NFSU2_TR(0x6d208f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6d2092:{NFSU2_TR(0x6d2092);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2093:{NFSU2_TR(0x6d2093);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2094:{NFSU2_TR(0x6d2094);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2095:{NFSU2_TR(0x6d2095);
__builtin_memmove((R+28),(R+4),4);
}
B6d2097:{NFSU2_TR(0x6d2097);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d209d:{NFSU2_TR(0x6d209d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d20a0:{NFSU2_TR(0x6d20a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6d20a2:{NFSU2_TR(0x6d20a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d20a5:{NFSU2_TR(0x6d20a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d20a8:{NFSU2_TR(0x6d20a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d20ab:{NFSU2_TR(0x6d20ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d20ae:{NFSU2_TR(0x6d20ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d20af:{NFSU2_TR(0x6d20af);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6d20b1:{NFSU2_TR(0x6d20b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d20b2:{NFSU2_TR(0x6d20b2);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6d20b8:{NFSU2_TR(0x6d20b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d20bdull));
TAIL_STATIC(0x698ed2u,698);
}
B6d20bd:L6d20bd:{c.instructions+=5;NFSU2_TR(0x6d20bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d20c3:{NFSU2_TR(0x6d20c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d20c6:{NFSU2_TR(0x6d20c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d20c7:{NFSU2_TR(0x6d20c7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d20c9:{NFSU2_TR(0x6d20c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d20ceull));
TAIL_STATIC(0x698ed2u,698);
}
B6d20ce:L6d20ce:{c.instructions+=13;NFSU2_TR(0x6d20ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d20cf:{NFSU2_TR(0x6d20cf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d20d0:{NFSU2_TR(0x6d20d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d20d1:{NFSU2_TR(0x6d20d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d20d2:{NFSU2_TR(0x6d20d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d20d3:{NFSU2_TR(0x6d20d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d20d4:{NFSU2_TR(0x6d20d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d20d7:{NFSU2_TR(0x6d20d7);
__builtin_memmove((R+4),(R+28),4);
}
B6d20d9:{NFSU2_TR(0x6d20d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d20dc:{NFSU2_TR(0x6d20dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d20df:{NFSU2_TR(0x6d20df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d20e2:{NFSU2_TR(0x6d20e2);
u8 U[4];
w4(U+0,u32(0x42ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d20e4:{NFSU2_TR(0x6d20e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d20e9ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6d20e9:L6d20e9:{c.instructions+=5;NFSU2_TR(0x6d20e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d20ea:{NFSU2_TR(0x6d20ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d20eb:{NFSU2_TR(0x6d20eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d20ec:{NFSU2_TR(0x6d20ec);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d20ed:{NFSU2_TR(0x6d20ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d20ee:L6d20ee:{c.instructions+=17;NFSU2_TR(0x6d20ee);
__builtin_memmove((R+28),(R+28),4);
}
B6d20f0:{NFSU2_TR(0x6d20f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d20f1:{NFSU2_TR(0x6d20f1);
__builtin_memmove((R+20),(R+16),4);
}
B6d20f3:{NFSU2_TR(0x6d20f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B6d20f6:{NFSU2_TR(0x6d20f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d20f7:{NFSU2_TR(0x6d20f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d20f8:{NFSU2_TR(0x6d20f8);
__builtin_memmove((R+24),(R+4),4);
}
B6d20fa:{NFSU2_TR(0x6d20fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2100:{NFSU2_TR(0x6d2100);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2103:{NFSU2_TR(0x6d2103);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2104:{NFSU2_TR(0x6d2104);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6d2106:{NFSU2_TR(0x6d2106);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d2109:{NFSU2_TR(0x6d2109);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d210c:{NFSU2_TR(0x6d210c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d210d:{NFSU2_TR(0x6d210d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d210f:{NFSU2_TR(0x6d210f);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6d2115:{NFSU2_TR(0x6d2115);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d211aull));
TAIL_STATIC(0x698ed2u,698);
}
B6d211a:L6d211a:{c.instructions+=5;NFSU2_TR(0x6d211a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2120:{NFSU2_TR(0x6d2120);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d2123:{NFSU2_TR(0x6d2123);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2124:{NFSU2_TR(0x6d2124);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2126:{NFSU2_TR(0x6d2126);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d212bull));
TAIL_STATIC(0x698ed2u,698);
}
B6d212b:L6d212b:{c.instructions+=5;NFSU2_TR(0x6d212b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2131:{NFSU2_TR(0x6d2131);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d2134:{NFSU2_TR(0x6d2134);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2135:{NFSU2_TR(0x6d2135);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2137:{NFSU2_TR(0x6d2137);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d213cull));
TAIL_STATIC(0x698ed2u,698);
}
B6d213c:L6d213c:{c.instructions+=5;NFSU2_TR(0x6d213c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2142:{NFSU2_TR(0x6d2142);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d2145:{NFSU2_TR(0x6d2145);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2146:{NFSU2_TR(0x6d2146);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2148:{NFSU2_TR(0x6d2148);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d214dull));
TAIL_STATIC(0x698ed2u,698);
}
B6d214d:L6d214d:{c.instructions+=6;NFSU2_TR(0x6d214d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2153:{NFSU2_TR(0x6d2153);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d2156:{NFSU2_TR(0x6d2156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2158:{NFSU2_TR(0x6d2158);
u8 U[4];
w4(U+0,u32(0x5dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d215a:{NFSU2_TR(0x6d215a);
__builtin_memmove((R+4),(R+24),4);
}
B6d215c:{NFSU2_TR(0x6d215c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d215full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d215f:L6d215f:{c.instructions+=3;NFSU2_TR(0x6d215f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2160:{NFSU2_TR(0x6d2160);
__builtin_memmove((R+4),(R+24),4);
}
B6d2162:{NFSU2_TR(0x6d2162);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2167ull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6d2167:L6d2167:{c.instructions+=2;NFSU2_TR(0x6d2167);
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
B6d2169:{NFSU2_TR(0x6d2169);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2318;}}
}
B6d216f:L6d216f:{c.instructions+=12;NFSU2_TR(0x6d216f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d2172:{NFSU2_TR(0x6d2172);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2174:{NFSU2_TR(0x6d2174);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2177:{NFSU2_TR(0x6d2177);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2178:{NFSU2_TR(0x6d2178);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d217b:{NFSU2_TR(0x6d217b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d217c:{NFSU2_TR(0x6d217c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d217f:{NFSU2_TR(0x6d217f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2180:{NFSU2_TR(0x6d2180);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d2182:{NFSU2_TR(0x6d2182);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d2185:{NFSU2_TR(0x6d2185);
__builtin_memmove((R+4),(R+24),4);
}
B6d2187:{NFSU2_TR(0x6d2187);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d218aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d218a:L6d218a:{c.instructions+=2;NFSU2_TR(0x6d218a);
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
B6d218c:{NFSU2_TR(0x6d218c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2318;}}
}
B6d2192:L6d2192:{c.instructions+=8;NFSU2_TR(0x6d2192);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2195:{NFSU2_TR(0x6d2195);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2197:{NFSU2_TR(0x6d2197);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d219a:{NFSU2_TR(0x6d219a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d219b:{NFSU2_TR(0x6d219b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d219e:{NFSU2_TR(0x6d219e);
__builtin_memmove((R+4),(R+24),4);
}
B6d21a0:{NFSU2_TR(0x6d21a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d21a1:{NFSU2_TR(0x6d21a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d21a4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d21a4:L6d21a4:{c.instructions+=2;NFSU2_TR(0x6d21a4);
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
B6d21a6:{NFSU2_TR(0x6d21a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2318;}}
}
B6d21ac:L6d21ac:{c.instructions+=6;NFSU2_TR(0x6d21ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d21af:{NFSU2_TR(0x6d21af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d21b1:{NFSU2_TR(0x6d21b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d21b4:{NFSU2_TR(0x6d21b4);
__builtin_memmove((R+4),(R+24),4);
}
B6d21b6:{NFSU2_TR(0x6d21b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d21b9:{NFSU2_TR(0x6d21b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d21bcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d21bc:L6d21bc:{c.instructions+=2;NFSU2_TR(0x6d21bc);
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
B6d21be:{NFSU2_TR(0x6d21be);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2318;}}
}
B6d21c4:L6d21c4:{c.instructions+=11;NFSU2_TR(0x6d21c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d21c7:{NFSU2_TR(0x6d21c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d21c9:{NFSU2_TR(0x6d21c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d21cc:{NFSU2_TR(0x6d21cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d21cd:{NFSU2_TR(0x6d21cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d21d0:{NFSU2_TR(0x6d21d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d21d1:{NFSU2_TR(0x6d21d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d21d4:{NFSU2_TR(0x6d21d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d21d6:{NFSU2_TR(0x6d21d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d21d9:{NFSU2_TR(0x6d21d9);
__builtin_memmove((R+4),(R+24),4);
}
B6d21db:{NFSU2_TR(0x6d21db);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d21deull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d21de:L6d21de:{c.instructions+=2;NFSU2_TR(0x6d21de);
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
B6d21e0:{NFSU2_TR(0x6d21e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2318;}}
}
B6d21e6:L6d21e6:{c.instructions+=8;NFSU2_TR(0x6d21e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d21e8:{NFSU2_TR(0x6d21e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d21eb:{NFSU2_TR(0x6d21eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d21ec:{NFSU2_TR(0x6d21ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d21ef:{NFSU2_TR(0x6d21ef);
__builtin_memmove((R+4),(R+24),4);
}
B6d21f1:{NFSU2_TR(0x6d21f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d21f2:{NFSU2_TR(0x6d21f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d21f5:{NFSU2_TR(0x6d21f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d21f8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d21f8:L6d21f8:{c.instructions+=2;NFSU2_TR(0x6d21f8);
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
B6d21fa:{NFSU2_TR(0x6d21fa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2318;}}
}
B6d2200:L6d2200:{c.instructions+=6;NFSU2_TR(0x6d2200);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2203:{NFSU2_TR(0x6d2203);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2205:{NFSU2_TR(0x6d2205);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2208:{NFSU2_TR(0x6d2208);
__builtin_memmove((R+4),(R+24),4);
}
B6d220a:{NFSU2_TR(0x6d220a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d220d:{NFSU2_TR(0x6d220d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2210ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2210:L6d2210:{c.instructions+=2;NFSU2_TR(0x6d2210);
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
B6d2212:{NFSU2_TR(0x6d2212);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2318;}}
}
B6d2218:L6d2218:{c.instructions+=11;NFSU2_TR(0x6d2218);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d221b:{NFSU2_TR(0x6d221b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d221d:{NFSU2_TR(0x6d221d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2220:{NFSU2_TR(0x6d2220);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2221:{NFSU2_TR(0x6d2221);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2224:{NFSU2_TR(0x6d2224);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2225:{NFSU2_TR(0x6d2225);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2228:{NFSU2_TR(0x6d2228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d222a:{NFSU2_TR(0x6d222a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d222d:{NFSU2_TR(0x6d222d);
__builtin_memmove((R+4),(R+24),4);
}
B6d222f:{NFSU2_TR(0x6d222f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2232ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2232:L6d2232:{c.instructions+=2;NFSU2_TR(0x6d2232);
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
B6d2234:{NFSU2_TR(0x6d2234);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2318;}}
}
B6d223a:L6d223a:{c.instructions+=8;NFSU2_TR(0x6d223a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d223c:{NFSU2_TR(0x6d223c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d223f:{NFSU2_TR(0x6d223f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2240:{NFSU2_TR(0x6d2240);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2243:{NFSU2_TR(0x6d2243);
__builtin_memmove((R+4),(R+24),4);
}
B6d2245:{NFSU2_TR(0x6d2245);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2246:{NFSU2_TR(0x6d2246);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2249:{NFSU2_TR(0x6d2249);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d224cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d224c:L6d224c:{c.instructions+=2;NFSU2_TR(0x6d224c);
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
B6d224e:{NFSU2_TR(0x6d224e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2318;}}
}
B6d2254:L6d2254:{c.instructions+=6;NFSU2_TR(0x6d2254);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2257:{NFSU2_TR(0x6d2257);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2259:{NFSU2_TR(0x6d2259);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d225c:{NFSU2_TR(0x6d225c);
__builtin_memmove((R+4),(R+24),4);
}
B6d225e:{NFSU2_TR(0x6d225e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2261:{NFSU2_TR(0x6d2261);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2264ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2264:L6d2264:{c.instructions+=2;NFSU2_TR(0x6d2264);
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
B6d2266:{NFSU2_TR(0x6d2266);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2318;}}
}
B6d226c:L6d226c:{c.instructions+=11;NFSU2_TR(0x6d226c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d226f:{NFSU2_TR(0x6d226f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2271:{NFSU2_TR(0x6d2271);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2274:{NFSU2_TR(0x6d2274);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2275:{NFSU2_TR(0x6d2275);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2278:{NFSU2_TR(0x6d2278);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2279:{NFSU2_TR(0x6d2279);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d227c:{NFSU2_TR(0x6d227c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d227e:{NFSU2_TR(0x6d227e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d2281:{NFSU2_TR(0x6d2281);
__builtin_memmove((R+4),(R+24),4);
}
B6d2283:{NFSU2_TR(0x6d2283);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2286ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2286:L6d2286:{c.instructions+=2;NFSU2_TR(0x6d2286);
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
B6d2288:{NFSU2_TR(0x6d2288);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2318;}}
}
B6d228e:L6d228e:{c.instructions+=8;NFSU2_TR(0x6d228e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2290:{NFSU2_TR(0x6d2290);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2293:{NFSU2_TR(0x6d2293);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2294:{NFSU2_TR(0x6d2294);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2297:{NFSU2_TR(0x6d2297);
__builtin_memmove((R+4),(R+24),4);
}
B6d2299:{NFSU2_TR(0x6d2299);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d229a:{NFSU2_TR(0x6d229a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d229d:{NFSU2_TR(0x6d229d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d22a0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d22a0:L6d22a0:{c.instructions+=2;NFSU2_TR(0x6d22a0);
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
B6d22a2:{NFSU2_TR(0x6d22a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2318;}}
}
B6d22a4:L6d22a4:{c.instructions+=6;NFSU2_TR(0x6d22a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d22a7:{NFSU2_TR(0x6d22a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d22a9:{NFSU2_TR(0x6d22a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d22ac:{NFSU2_TR(0x6d22ac);
__builtin_memmove((R+4),(R+24),4);
}
B6d22ae:{NFSU2_TR(0x6d22ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d22b1:{NFSU2_TR(0x6d22b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d22b4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d22b4:L6d22b4:{c.instructions+=2;NFSU2_TR(0x6d22b4);
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
B6d22b6:{NFSU2_TR(0x6d22b6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2318;}}
}
B6d22b8:L6d22b8:{c.instructions+=11;NFSU2_TR(0x6d22b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d22bb:{NFSU2_TR(0x6d22bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d22bd:{NFSU2_TR(0x6d22bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d22c0:{NFSU2_TR(0x6d22c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d22c1:{NFSU2_TR(0x6d22c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d22c4:{NFSU2_TR(0x6d22c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d22c5:{NFSU2_TR(0x6d22c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d22c8:{NFSU2_TR(0x6d22c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d22ca:{NFSU2_TR(0x6d22ca);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d22cd:{NFSU2_TR(0x6d22cd);
__builtin_memmove((R+4),(R+24),4);
}
B6d22cf:{NFSU2_TR(0x6d22cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d22d2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d22d2:L6d22d2:{c.instructions+=2;NFSU2_TR(0x6d22d2);
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
B6d22d4:{NFSU2_TR(0x6d22d4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2318;}}
}
B6d22d6:L6d22d6:{c.instructions+=8;NFSU2_TR(0x6d22d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d22d8:{NFSU2_TR(0x6d22d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d22db:{NFSU2_TR(0x6d22db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d22dc:{NFSU2_TR(0x6d22dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d22df:{NFSU2_TR(0x6d22df);
__builtin_memmove((R+4),(R+24),4);
}
B6d22e1:{NFSU2_TR(0x6d22e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d22e2:{NFSU2_TR(0x6d22e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d22e5:{NFSU2_TR(0x6d22e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d22e8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d22e8:L6d22e8:{c.instructions+=2;NFSU2_TR(0x6d22e8);
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
B6d22ea:{NFSU2_TR(0x6d22ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2318;}}
}
B6d22ec:L6d22ec:{c.instructions+=6;NFSU2_TR(0x6d22ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d22ef:{NFSU2_TR(0x6d22ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d22f1:{NFSU2_TR(0x6d22f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d22f4:{NFSU2_TR(0x6d22f4);
__builtin_memmove((R+4),(R+24),4);
}
B6d22f6:{NFSU2_TR(0x6d22f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d22f9:{NFSU2_TR(0x6d22f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d22fcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d22fc:L6d22fc:{c.instructions+=2;NFSU2_TR(0x6d22fc);
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
B6d22fe:{NFSU2_TR(0x6d22fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2318;}}
}
B6d2300:L6d2300:{c.instructions+=3;NFSU2_TR(0x6d2300);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2302:{NFSU2_TR(0x6d2302);
__builtin_memmove((R+4),(R+24),4);
}
B6d2304:{NFSU2_TR(0x6d2304);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2307ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2307:L6d2307:{c.instructions+=2;NFSU2_TR(0x6d2307);
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
B6d2309:{NFSU2_TR(0x6d2309);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2318;}}
}
B6d230b:L6d230b:{c.instructions+=2;NFSU2_TR(0x6d230b);
__builtin_memmove((R+4),(R+24),4);
}
B6d230d:{NFSU2_TR(0x6d230d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2312ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d2312:L6d2312:{c.instructions+=2;NFSU2_TR(0x6d2312);
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
B6d2314:{NFSU2_TR(0x6d2314);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2318;}}
}
B6d2316:L6d2316:{c.instructions+=1;NFSU2_TR(0x6d2316);
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
B6d2318:L6d2318:{c.instructions+=5;NFSU2_TR(0x6d2318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d2319:{NFSU2_TR(0x6d2319);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d231a:{NFSU2_TR(0x6d231a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d231b:{NFSU2_TR(0x6d231b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d231c:{NFSU2_TR(0x6d231c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d231d:L6d231d:{c.instructions+=20;NFSU2_TR(0x6d231d);
__builtin_memmove((R+28),(R+28),4);
}
B6d231f:{NFSU2_TR(0x6d231f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2320:{NFSU2_TR(0x6d2320);
__builtin_memmove((R+20),(R+16),4);
}
B6d2322:{NFSU2_TR(0x6d2322);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6d2325:{NFSU2_TR(0x6d2325);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2326:{NFSU2_TR(0x6d2326);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2327:{NFSU2_TR(0x6d2327);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2328:{NFSU2_TR(0x6d2328);
__builtin_memmove((R+28),(R+4),4);
}
B6d232a:{NFSU2_TR(0x6d232a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2330:{NFSU2_TR(0x6d2330);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2333:{NFSU2_TR(0x6d2333);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6d2335:{NFSU2_TR(0x6d2335);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d2338:{NFSU2_TR(0x6d2338);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d233b:{NFSU2_TR(0x6d233b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d233e:{NFSU2_TR(0x6d233e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d2341:{NFSU2_TR(0x6d2341);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2342:{NFSU2_TR(0x6d2342);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6d2344:{NFSU2_TR(0x6d2344);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2345:{NFSU2_TR(0x6d2345);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6d234b:{NFSU2_TR(0x6d234b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2350ull));
TAIL_STATIC(0x698ed2u,698);
}
B6d2350:L6d2350:{c.instructions+=5;NFSU2_TR(0x6d2350);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2356:{NFSU2_TR(0x6d2356);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d2359:{NFSU2_TR(0x6d2359);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d235a:{NFSU2_TR(0x6d235a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d235c:{NFSU2_TR(0x6d235c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2361ull));
TAIL_STATIC(0x698ed2u,698);
}
B6d2361:L6d2361:{c.instructions+=13;NFSU2_TR(0x6d2361);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2362:{NFSU2_TR(0x6d2362);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2363:{NFSU2_TR(0x6d2363);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2364:{NFSU2_TR(0x6d2364);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2365:{NFSU2_TR(0x6d2365);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2366:{NFSU2_TR(0x6d2366);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2367:{NFSU2_TR(0x6d2367);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d236a:{NFSU2_TR(0x6d236a);
__builtin_memmove((R+4),(R+28),4);
}
B6d236c:{NFSU2_TR(0x6d236c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d236f:{NFSU2_TR(0x6d236f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2372:{NFSU2_TR(0x6d2372);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2375:{NFSU2_TR(0x6d2375);
u8 U[4];
w4(U+0,u32(0x10042ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d237a:{NFSU2_TR(0x6d237a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d237full));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6d237f:L6d237f:{c.instructions+=5;NFSU2_TR(0x6d237f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d2380:{NFSU2_TR(0x6d2380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d2381:{NFSU2_TR(0x6d2381);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d2382:{NFSU2_TR(0x6d2382);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d2383:{NFSU2_TR(0x6d2383);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d2384:L6d2384:{c.instructions+=20;NFSU2_TR(0x6d2384);
__builtin_memmove((R+28),(R+28),4);
}
B6d2386:{NFSU2_TR(0x6d2386);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2387:{NFSU2_TR(0x6d2387);
__builtin_memmove((R+20),(R+16),4);
}
B6d2389:{NFSU2_TR(0x6d2389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6d238c:{NFSU2_TR(0x6d238c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d238d:{NFSU2_TR(0x6d238d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d238e:{NFSU2_TR(0x6d238e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d238f:{NFSU2_TR(0x6d238f);
__builtin_memmove((R+28),(R+4),4);
}
B6d2391:{NFSU2_TR(0x6d2391);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2397:{NFSU2_TR(0x6d2397);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d239a:{NFSU2_TR(0x6d239a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6d239c:{NFSU2_TR(0x6d239c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d239f:{NFSU2_TR(0x6d239f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d23a2:{NFSU2_TR(0x6d23a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d23a5:{NFSU2_TR(0x6d23a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d23a8:{NFSU2_TR(0x6d23a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d23a9:{NFSU2_TR(0x6d23a9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6d23ab:{NFSU2_TR(0x6d23ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d23ac:{NFSU2_TR(0x6d23ac);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6d23b2:{NFSU2_TR(0x6d23b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d23b7ull));
TAIL_STATIC(0x698ed2u,698);
}
B6d23b7:L6d23b7:{c.instructions+=5;NFSU2_TR(0x6d23b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d23bd:{NFSU2_TR(0x6d23bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d23c0:{NFSU2_TR(0x6d23c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d23c1:{NFSU2_TR(0x6d23c1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d23c3:{NFSU2_TR(0x6d23c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d23c8ull));
TAIL_STATIC(0x698ed2u,698);
}
B6d23c8:L6d23c8:{c.instructions+=13;NFSU2_TR(0x6d23c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d23c9:{NFSU2_TR(0x6d23c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d23ca:{NFSU2_TR(0x6d23ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d23cb:{NFSU2_TR(0x6d23cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d23cc:{NFSU2_TR(0x6d23cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d23cd:{NFSU2_TR(0x6d23cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d23ce:{NFSU2_TR(0x6d23ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d23d1:{NFSU2_TR(0x6d23d1);
__builtin_memmove((R+4),(R+28),4);
}
B6d23d3:{NFSU2_TR(0x6d23d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d23d6:{NFSU2_TR(0x6d23d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d23d9:{NFSU2_TR(0x6d23d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d23dc:{NFSU2_TR(0x6d23dc);
u8 U[4];
w4(U+0,u32(0x20042ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d23e1:{NFSU2_TR(0x6d23e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d23e6ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6d23e6:L6d23e6:{c.instructions+=5;NFSU2_TR(0x6d23e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d23e7:{NFSU2_TR(0x6d23e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d23e8:{NFSU2_TR(0x6d23e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d23e9:{NFSU2_TR(0x6d23e9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d23ea:{NFSU2_TR(0x6d23ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d23eb:L6d23eb:{c.instructions+=20;NFSU2_TR(0x6d23eb);
__builtin_memmove((R+28),(R+28),4);
}
B6d23ed:{NFSU2_TR(0x6d23ed);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d23ee:{NFSU2_TR(0x6d23ee);
__builtin_memmove((R+20),(R+16),4);
}
B6d23f0:{NFSU2_TR(0x6d23f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6d23f3:{NFSU2_TR(0x6d23f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d23f4:{NFSU2_TR(0x6d23f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d23f5:{NFSU2_TR(0x6d23f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d23f6:{NFSU2_TR(0x6d23f6);
__builtin_memmove((R+28),(R+4),4);
}
B6d23f8:{NFSU2_TR(0x6d23f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d23fe:{NFSU2_TR(0x6d23fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2401:{NFSU2_TR(0x6d2401);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6d2403:{NFSU2_TR(0x6d2403);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d2406:{NFSU2_TR(0x6d2406);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2409:{NFSU2_TR(0x6d2409);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d240c:{NFSU2_TR(0x6d240c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d240f:{NFSU2_TR(0x6d240f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2410:{NFSU2_TR(0x6d2410);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6d2412:{NFSU2_TR(0x6d2412);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2413:{NFSU2_TR(0x6d2413);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6d2419:{NFSU2_TR(0x6d2419);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d241eull));
TAIL_STATIC(0x698ed2u,698);
}
B6d241e:L6d241e:{c.instructions+=5;NFSU2_TR(0x6d241e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2424:{NFSU2_TR(0x6d2424);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d2427:{NFSU2_TR(0x6d2427);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2428:{NFSU2_TR(0x6d2428);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d242a:{NFSU2_TR(0x6d242a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d242full));
TAIL_STATIC(0x698ed2u,698);
}
B6d242f:L6d242f:{c.instructions+=13;NFSU2_TR(0x6d242f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2430:{NFSU2_TR(0x6d2430);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2431:{NFSU2_TR(0x6d2431);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2432:{NFSU2_TR(0x6d2432);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2433:{NFSU2_TR(0x6d2433);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2434:{NFSU2_TR(0x6d2434);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2435:{NFSU2_TR(0x6d2435);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2438:{NFSU2_TR(0x6d2438);
__builtin_memmove((R+4),(R+28),4);
}
B6d243a:{NFSU2_TR(0x6d243a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d243d:{NFSU2_TR(0x6d243d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2440:{NFSU2_TR(0x6d2440);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2443:{NFSU2_TR(0x6d2443);
u8 U[4];
w4(U+0,u32(0x5full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2445:{NFSU2_TR(0x6d2445);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d244aull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6d244a:L6d244a:{c.instructions+=5;NFSU2_TR(0x6d244a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d244b:{NFSU2_TR(0x6d244b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d244c:{NFSU2_TR(0x6d244c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d244d:{NFSU2_TR(0x6d244d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d244e:{NFSU2_TR(0x6d244e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d244f:L6d244f:{c.instructions+=24;NFSU2_TR(0x6d244f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d2455:{NFSU2_TR(0x6d2455);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2457:{NFSU2_TR(0x6d2457);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2458:{NFSU2_TR(0x6d2458);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2459:{NFSU2_TR(0x6d2459);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d245c:{NFSU2_TR(0x6d245c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d245d:{NFSU2_TR(0x6d245d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d2460:{NFSU2_TR(0x6d2460);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d2463:{NFSU2_TR(0x6d2463);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6d2465:{NFSU2_TR(0x6d2465);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2466:{NFSU2_TR(0x6d2466);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2467:{NFSU2_TR(0x6d2467);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2468:{NFSU2_TR(0x6d2468);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2469:{NFSU2_TR(0x6d2469);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6d246e:{NFSU2_TR(0x6d246e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d246f:{NFSU2_TR(0x6d246f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6d2472:{NFSU2_TR(0x6d2472);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2473:{NFSU2_TR(0x6d2473);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d2476:{NFSU2_TR(0x6d2476);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2477:{NFSU2_TR(0x6d2477);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2478:{NFSU2_TR(0x6d2478);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2479:{NFSU2_TR(0x6d2479);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d247a:{NFSU2_TR(0x6d247a);
u8 U[4];
w4(U+0,u32(0x5aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d247c:{NFSU2_TR(0x6d247c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2481ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6d2481:L6d2481:{c.instructions+=4;NFSU2_TR(0x6d2481);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d2482:{NFSU2_TR(0x6d2482);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d2483:{NFSU2_TR(0x6d2483);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d2484:{NFSU2_TR(0x6d2484);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d2485:L6d2485:{c.instructions+=11;NFSU2_TR(0x6d2485);
__builtin_memmove((R+28),(R+28),4);
}
B6d2487:{NFSU2_TR(0x6d2487);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2488:{NFSU2_TR(0x6d2488);
__builtin_memmove((R+20),(R+16),4);
}
B6d248a:{NFSU2_TR(0x6d248a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6d248d:{NFSU2_TR(0x6d248d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d248e:{NFSU2_TR(0x6d248e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d248f:{NFSU2_TR(0x6d248f);
__builtin_memmove((R+24),(R+4),4);
}
B6d2491:{NFSU2_TR(0x6d2491);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6d2495:{NFSU2_TR(0x6d2495);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d249b:{NFSU2_TR(0x6d249b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d249c:{NFSU2_TR(0x6d249c);
if(r1(R+518)){{goto L6d24db;}}
}
B6d249e:L6d249e:{c.instructions+=4;NFSU2_TR(0x6d249e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d24a1:{NFSU2_TR(0x6d24a1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6d24a3:{NFSU2_TR(0x6d24a3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d24a5:{NFSU2_TR(0x6d24a5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d24c2;}}
}
B6d24a7:L6d24a7:{c.instructions+=2;NFSU2_TR(0x6d24a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d24aa:{NFSU2_TR(0x6d24aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d24ad:L6d24ad:{c.instructions+=4;NFSU2_TR(0x6d24ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6d24af:{NFSU2_TR(0x6d24af);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d24b2:{NFSU2_TR(0x6d24b2);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d24b5:{NFSU2_TR(0x6d24b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d24d1;}}
}
B6d24b7:L6d24b7:{c.instructions+=5;NFSU2_TR(0x6d24b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d24ba:{NFSU2_TR(0x6d24ba);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6d24bb:{NFSU2_TR(0x6d24bb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6d24be:{NFSU2_TR(0x6d24be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6d24c0:{NFSU2_TR(0x6d24c0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d24adu);}goto L6d24ad;}}
}
B6d24c2:L6d24c2:{c.instructions+=2;NFSU2_TR(0x6d24c2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d24c5:{NFSU2_TR(0x6d24c5);
if(r1(R+518)){{goto L6d24eb;}}
}
B6d24c7:L6d24c7:{c.instructions+=2;NFSU2_TR(0x6d24c7);
u8 U[4];
w4(U+0,u32(0x7bf97cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d24cc:{NFSU2_TR(0x6d24cc);
{goto L6d25bf;}
}
B6d24d1:L6d24d1:{c.instructions+=2;NFSU2_TR(0x6d24d1);
u8 U[4];
w4(U+0,u32(0x7bf958ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d24d6:{NFSU2_TR(0x6d24d6);
{goto L6d25bf;}
}
B6d24db:L6d24db:{c.instructions+=2;NFSU2_TR(0x6d24db);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d24df:{NFSU2_TR(0x6d24df);
if(r1(R+518)){{goto L6d24eb;}}
}
B6d24e1:L6d24e1:{c.instructions+=2;NFSU2_TR(0x6d24e1);
u8 U[4];
w4(U+0,u32(0x7bf918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d24e6:{NFSU2_TR(0x6d24e6);
{goto L6d25bf;}
}
B6d24eb:L6d24eb:{c.instructions+=7;NFSU2_TR(0x6d24eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d24ee:{NFSU2_TR(0x6d24ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d24f0:{NFSU2_TR(0x6d24f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d24f3:{NFSU2_TR(0x6d24f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d24f6:{NFSU2_TR(0x6d24f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d24f9:{NFSU2_TR(0x6d24f9);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d24ff:{NFSU2_TR(0x6d24ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d2529;}}
}
B6d2501:L6d2501:{c.instructions+=8;NFSU2_TR(0x6d2501);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2503:{NFSU2_TR(0x6d2503);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2506:{NFSU2_TR(0x6d2506);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2507:{NFSU2_TR(0x6d2507);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d250a:{NFSU2_TR(0x6d250a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d250b:{NFSU2_TR(0x6d250b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d250c:{NFSU2_TR(0x6d250c);
__builtin_memmove((R+4),(R+24),4);
}
B6d250e:{NFSU2_TR(0x6d250e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2514ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2514:L6d2514:{c.instructions+=2;NFSU2_TR(0x6d2514);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d2516:{NFSU2_TR(0x6d2516);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d2542;}}
}
B6d2518:L6d2518:{c.instructions+=4;NFSU2_TR(0x6d2518);
u8 U[4];
w4(U+0,u32(0x7bf3d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d251d:{NFSU2_TR(0x6d251d);
u8 U[4];
w4(U+0,u32(0x1194ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2522:{NFSU2_TR(0x6d2522);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2524:{NFSU2_TR(0x6d2524);
{goto L6d25c7;}
}
B6d2529:L6d2529:{c.instructions+=2;NFSU2_TR(0x6d2529);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d252f:{NFSU2_TR(0x6d252f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d25ba;}}
}
B6d2535:L6d2535:{c.instructions+=5;NFSU2_TR(0x6d2535);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d2537:{NFSU2_TR(0x6d2537);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d253a:{NFSU2_TR(0x6d253a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d253d:{NFSU2_TR(0x6d253d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d2540:{NFSU2_TR(0x6d2540);
{goto L6d2548;}
}
B6d2542:L6d2542:{c.instructions+=2;NFSU2_TR(0x6d2542);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2545:{NFSU2_TR(0x6d2545);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2548:L6d2548:{c.instructions+=11;NFSU2_TR(0x6d2548);
__builtin_memmove((R+28),(R+4),4);
}
B6d254a:{NFSU2_TR(0x6d254a);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xfffffff8ull))));
}
B6d254d:{NFSU2_TR(0x6d254d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6d2550:{NFSU2_TR(0x6d2550);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x18ull))));
}
B6d2553:{NFSU2_TR(0x6d2553);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+4))));
}
B6d2555:{NFSU2_TR(0x6d2555);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B6d255a:{NFSU2_TR(0x6d255a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6d255d:{NFSU2_TR(0x6d255d);
u8 U[4];
w4(U+0,u32(0x41ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d255f:{NFSU2_TR(0x6d255f);
__builtin_memmove((R+4),(R+24),4);
}
B6d2561:{NFSU2_TR(0x6d2561);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B6d2563:{NFSU2_TR(0x6d2563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2568ull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6d2568:L6d2568:{c.instructions+=2;NFSU2_TR(0x6d2568);
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
B6d256a:{NFSU2_TR(0x6d256a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d25d5;}}
}
B6d256c:L6d256c:{c.instructions+=10;NFSU2_TR(0x6d256c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d256f:{NFSU2_TR(0x6d256f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2571:{NFSU2_TR(0x6d2571);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2574:{NFSU2_TR(0x6d2574);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2575:{NFSU2_TR(0x6d2575);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d257b:{NFSU2_TR(0x6d257b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d257e:{NFSU2_TR(0x6d257e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d2580:{NFSU2_TR(0x6d2580);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d2583:{NFSU2_TR(0x6d2583);
__builtin_memmove((R+4),(R+24),4);
}
B6d2585:{NFSU2_TR(0x6d2585);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2588ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2588:L6d2588:{c.instructions+=2;NFSU2_TR(0x6d2588);
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
B6d258a:{NFSU2_TR(0x6d258a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d25d5;}}
}
B6d258c:L6d258c:{c.instructions+=6;NFSU2_TR(0x6d258c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d258f:{NFSU2_TR(0x6d258f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2591:{NFSU2_TR(0x6d2591);
u8 U[4];
w4(U+0,u32(0xf0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2596:{NFSU2_TR(0x6d2596);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2597:{NFSU2_TR(0x6d2597);
__builtin_memmove((R+4),(R+24),4);
}
B6d2599:{NFSU2_TR(0x6d2599);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d259cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d259c:L6d259c:{c.instructions+=2;NFSU2_TR(0x6d259c);
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
B6d259e:{NFSU2_TR(0x6d259e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d25d5;}}
}
B6d25a0:L6d25a0:{c.instructions+=3;NFSU2_TR(0x6d25a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d25a2:{NFSU2_TR(0x6d25a2);
__builtin_memmove((R+4),(R+24),4);
}
B6d25a4:{NFSU2_TR(0x6d25a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d25a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d25a7:L6d25a7:{c.instructions+=2;NFSU2_TR(0x6d25a7);
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
B6d25a9:{NFSU2_TR(0x6d25a9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d25d5;}}
}
B6d25ab:L6d25ab:{c.instructions+=2;NFSU2_TR(0x6d25ab);
__builtin_memmove((R+4),(R+24),4);
}
B6d25ad:{NFSU2_TR(0x6d25ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d25b2ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d25b2:L6d25b2:{c.instructions+=2;NFSU2_TR(0x6d25b2);
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
B6d25b4:{NFSU2_TR(0x6d25b4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d25d5;}}
}
B6d25b6:L6d25b6:{c.instructions+=2;NFSU2_TR(0x6d25b6);
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
B6d25b8:{NFSU2_TR(0x6d25b8);
{goto L6d25d5;}
}
B6d25ba:L6d25ba:{c.instructions+=1;NFSU2_TR(0x6d25ba);
u8 U[4];
w4(U+0,u32(0x7bf8e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d25bf:L6d25bf:{c.instructions+=2;NFSU2_TR(0x6d25bf);
u8 U[4];
w4(U+0,u32(0x1194ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d25c4:{NFSU2_TR(0x6d25c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d25c7:L6d25c7:{c.instructions+=2;NFSU2_TR(0x6d25c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d25c8:{NFSU2_TR(0x6d25c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d25cdull));
TAIL_STATIC(0x69e936u,69e);
}
B6d25cd:L6d25cd:{c.instructions+=2;NFSU2_TR(0x6d25cd);
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
B6d25d0:{NFSU2_TR(0x6d25d0);
w4(R+0,u32(0x80004005ull));
}
B6d25d5:L6d25d5:{c.instructions+=5;NFSU2_TR(0x6d25d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d25d6:{NFSU2_TR(0x6d25d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d25d7:{NFSU2_TR(0x6d25d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d25d8:{NFSU2_TR(0x6d25d8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d25d9:{NFSU2_TR(0x6d25d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d25da:L6d25da:{c.instructions+=11;NFSU2_TR(0x6d25da);
__builtin_memmove((R+28),(R+28),4);
}
B6d25dc:{NFSU2_TR(0x6d25dc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d25dd:{NFSU2_TR(0x6d25dd);
__builtin_memmove((R+20),(R+16),4);
}
B6d25df:{NFSU2_TR(0x6d25df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6d25e2:{NFSU2_TR(0x6d25e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d25e6:{NFSU2_TR(0x6d25e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d25ec:{NFSU2_TR(0x6d25ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d25f0:{NFSU2_TR(0x6d25f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d25f1:{NFSU2_TR(0x6d25f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d25f4:{NFSU2_TR(0x6d25f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d25f5:{NFSU2_TR(0x6d25f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d25f6:L6d25f6:{c.instructions+=9;NFSU2_TR(0x6d25f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d25f9:{NFSU2_TR(0x6d25f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d25fc:{NFSU2_TR(0x6d25fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d25ff:{NFSU2_TR(0x6d25ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d2602:{NFSU2_TR(0x6d2602);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d2605:{NFSU2_TR(0x6d2605);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d2608:{NFSU2_TR(0x6d2608);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d260b:{NFSU2_TR(0x6d260b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6d260f:{NFSU2_TR(0x6d260f);
if(r1(R+518)){{goto L6d261a;}}
}
B6d2611:L6d2611:{c.instructions+=3;NFSU2_TR(0x6d2611);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6d2613:{NFSU2_TR(0x6d2613);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d2616:{NFSU2_TR(0x6d2616);
if(r1(R+518)){{goto L6d2626;}}
}
B6d2618:L6d2618:{c.instructions+=1;NFSU2_TR(0x6d2618);
{goto L6d261c;}
}
B6d261a:L6d261a:{c.instructions+=1;NFSU2_TR(0x6d261a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6d261c:L6d261c:{c.instructions+=3;NFSU2_TR(0x6d261c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d261f:{NFSU2_TR(0x6d261f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d2622:{NFSU2_TR(0x6d2622);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6d2626:L6d2626:{c.instructions+=3;NFSU2_TR(0x6d2626);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d262a:{NFSU2_TR(0x6d262a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x8ull))));
}
B6d262e:{NFSU2_TR(0x6d262e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d25f6u);}goto L6d25f6;}}
}
B6d2630:L6d2630:{c.instructions+=2;NFSU2_TR(0x6d2630);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d2633:{NFSU2_TR(0x6d2633);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d2639;}}
}
B6d2635:L6d2635:{c.instructions+=2;NFSU2_TR(0x6d2635);
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
B6d2637:{NFSU2_TR(0x6d2637);
{goto L6d2673;}
}
B6d2639:L6d2639:{c.instructions+=24;NFSU2_TR(0x6d2639);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d263c:{NFSU2_TR(0x6d263c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2642:{NFSU2_TR(0x6d2642);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2643:{NFSU2_TR(0x6d2643);
__builtin_memmove((R+8),(R+0),4);
}
B6d2645:{NFSU2_TR(0x6d2645);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2646:{NFSU2_TR(0x6d2646);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B6d2648:{NFSU2_TR(0x6d2648);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2649:{NFSU2_TR(0x6d2649);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6d264b:{NFSU2_TR(0x6d264b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x190ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d2651:{NFSU2_TR(0x6d2651);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2652:{NFSU2_TR(0x6d2652);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+12))));
}
B6d2654:{NFSU2_TR(0x6d2654);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6d2656:{NFSU2_TR(0x6d2656);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2658:{NFSU2_TR(0x6d2658);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6d265a:{NFSU2_TR(0x6d265a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d2660:{NFSU2_TR(0x6d2660);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6d2662:{NFSU2_TR(0x6d2662);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2663:{NFSU2_TR(0x6d2663);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2664:{NFSU2_TR(0x6d2664);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2665:{NFSU2_TR(0x6d2665);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2668:{NFSU2_TR(0x6d2668);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d266b:{NFSU2_TR(0x6d266b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d266c:{NFSU2_TR(0x6d266c);
u8 U[4];
w4(U+0,u32(0x25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d266e:{NFSU2_TR(0x6d266e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2673ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6d2673:L6d2673:{c.instructions+=5;NFSU2_TR(0x6d2673);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d2674:{NFSU2_TR(0x6d2674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d2675:{NFSU2_TR(0x6d2675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d2676:{NFSU2_TR(0x6d2676);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d2677:{NFSU2_TR(0x6d2677);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d2678:L6d2678:{c.instructions+=9;NFSU2_TR(0x6d2678);
__builtin_memmove((R+28),(R+28),4);
}
B6d267a:{NFSU2_TR(0x6d267a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d267b:{NFSU2_TR(0x6d267b);
__builtin_memmove((R+20),(R+16),4);
}
B6d267d:{NFSU2_TR(0x6d267d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6d2680:{NFSU2_TR(0x6d2680);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2681:{NFSU2_TR(0x6d2681);
__builtin_memmove((R+24),(R+4),4);
}
B6d2683:{NFSU2_TR(0x6d2683);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d2685:{NFSU2_TR(0x6d2685);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d2688:{NFSU2_TR(0x6d2688);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d2694;}}
}
B6d268a:L6d268a:{c.instructions+=2;NFSU2_TR(0x6d268a);
w4(R+0,u32(0x80004001ull));
}
B6d268f:{NFSU2_TR(0x6d268f);
{goto L6d27ef;}
}
B6d2694:L6d2694:{c.instructions+=10;NFSU2_TR(0x6d2694);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d269a:{NFSU2_TR(0x6d269a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d269c:{NFSU2_TR(0x6d269c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d269d:{NFSU2_TR(0x6d269d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d269e:{NFSU2_TR(0x6d269e);
__builtin_memmove((R+28),(R+0),4);
}
B6d26a0:{NFSU2_TR(0x6d26a0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6d26a5:{NFSU2_TR(0x6d26a5);
w4(R+12,u32(0x10f00000ull));
}
B6d26aa:{NFSU2_TR(0x6d26aa);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6d26b0:{NFSU2_TR(0x6d26b0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d26b2:{NFSU2_TR(0x6d26b2);
if(r1(R+518)){{goto L6d26dc;}}
}
B6d26b4:L6d26b4:{c.instructions+=2;NFSU2_TR(0x6d26b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d26b9:{NFSU2_TR(0x6d26b9);
if(r1(R+518)){{goto L6d26d8;}}
}
B6d26bb:L6d26bb:{c.instructions+=2;NFSU2_TR(0x6d26bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d26c0:{NFSU2_TR(0x6d26c0);
if(r1(R+518)){{goto L6d26d4;}}
}
B6d26c2:L6d26c2:{c.instructions+=2;NFSU2_TR(0x6d26c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d26c7:{NFSU2_TR(0x6d26c7);
if(r1(R+518)){{goto L6d26dc;}}
}
B6d26c9:L6d26c9:{c.instructions+=2;NFSU2_TR(0x6d26c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d26ce:{NFSU2_TR(0x6d26ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d26df;}}
}
B6d26d0:L6d26d0:{c.instructions+=2;NFSU2_TR(0x6d26d0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d26d2:{NFSU2_TR(0x6d26d2);
{goto L6d26de;}
}
B6d26d4:L6d26d4:{c.instructions+=2;NFSU2_TR(0x6d26d4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d26d6:{NFSU2_TR(0x6d26d6);
{goto L6d26de;}
}
B6d26d8:L6d26d8:{c.instructions+=2;NFSU2_TR(0x6d26d8);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d26da:{NFSU2_TR(0x6d26da);
{goto L6d26de;}
}
B6d26dc:L6d26dc:{c.instructions+=1;NFSU2_TR(0x6d26dc);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d26de:L6d26de:{c.instructions+=1;NFSU2_TR(0x6d26de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d26df:L6d26df:{c.instructions+=5;NFSU2_TR(0x6d26df);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6d26e2:{NFSU2_TR(0x6d26e2);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x5eull))));
}
B6d26e5:{NFSU2_TR(0x6d26e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d26e6:{NFSU2_TR(0x6d26e6);
__builtin_memmove((R+4),(R+24),4);
}
B6d26e8:{NFSU2_TR(0x6d26e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d26edull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6d26ed:L6d26ed:{c.instructions+=2;NFSU2_TR(0x6d26ed);
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
B6d26ef:{NFSU2_TR(0x6d26ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d27ed;}}
}
B6d26f5:L6d26f5:{c.instructions+=13;NFSU2_TR(0x6d26f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d26f8:{NFSU2_TR(0x6d26f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d26fa:{NFSU2_TR(0x6d26fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d26fd:{NFSU2_TR(0x6d26fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d26fe:{NFSU2_TR(0x6d26fe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2700:{NFSU2_TR(0x6d2700);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2703:{NFSU2_TR(0x6d2703);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2704:{NFSU2_TR(0x6d2704);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d270a:{NFSU2_TR(0x6d270a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d270d:{NFSU2_TR(0x6d270d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d270f:{NFSU2_TR(0x6d270f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d2712:{NFSU2_TR(0x6d2712);
__builtin_memmove((R+4),(R+24),4);
}
B6d2714:{NFSU2_TR(0x6d2714);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2717ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2717:L6d2717:{c.instructions+=2;NFSU2_TR(0x6d2717);
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
B6d2719:{NFSU2_TR(0x6d2719);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d27ed;}}
}
B6d271f:L6d271f:{c.instructions+=9;NFSU2_TR(0x6d271f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2722:{NFSU2_TR(0x6d2722);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2728:{NFSU2_TR(0x6d2728);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d272a:{NFSU2_TR(0x6d272a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d272d:{NFSU2_TR(0x6d272d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d272e:{NFSU2_TR(0x6d272e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2731:{NFSU2_TR(0x6d2731);
__builtin_memmove((R+4),(R+24),4);
}
B6d2733:{NFSU2_TR(0x6d2733);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2736:{NFSU2_TR(0x6d2736);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2739ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2739:L6d2739:{c.instructions+=2;NFSU2_TR(0x6d2739);
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
B6d273b:{NFSU2_TR(0x6d273b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d27ed;}}
}
B6d2741:L6d2741:{c.instructions+=6;NFSU2_TR(0x6d2741);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2743:{NFSU2_TR(0x6d2743);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2745:{NFSU2_TR(0x6d2745);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2748:{NFSU2_TR(0x6d2748);
__builtin_memmove((R+4),(R+24),4);
}
B6d274a:{NFSU2_TR(0x6d274a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d274d:{NFSU2_TR(0x6d274d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2750ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2750:L6d2750:{c.instructions+=2;NFSU2_TR(0x6d2750);
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
B6d2752:{NFSU2_TR(0x6d2752);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d27ed;}}
}
B6d2758:L6d2758:{c.instructions+=15;NFSU2_TR(0x6d2758);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d275e:{NFSU2_TR(0x6d275e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d2760:{NFSU2_TR(0x6d2760);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2763:{NFSU2_TR(0x6d2763);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2765:{NFSU2_TR(0x6d2765);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d2767:{NFSU2_TR(0x6d2767);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6d276d:{NFSU2_TR(0x6d276d);
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
B6d276f:{NFSU2_TR(0x6d276f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2772:{NFSU2_TR(0x6d2772);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2773:{NFSU2_TR(0x6d2773);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2776:{NFSU2_TR(0x6d2776);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2777:{NFSU2_TR(0x6d2777);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d277a:{NFSU2_TR(0x6d277a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d277d:{NFSU2_TR(0x6d277d);
__builtin_memmove((R+4),(R+24),4);
}
B6d277f:{NFSU2_TR(0x6d277f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d27f2;}}
}
B6d2781:L6d2781:{c.instructions+=1;NFSU2_TR(0x6d2781);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2784ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2784:L6d2784:{c.instructions+=2;NFSU2_TR(0x6d2784);
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
B6d2786:{NFSU2_TR(0x6d2786);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d27ed;}}
}
B6d2788:L6d2788:{c.instructions+=9;NFSU2_TR(0x6d2788);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d278e:{NFSU2_TR(0x6d278e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d2790:{NFSU2_TR(0x6d2790);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2793:{NFSU2_TR(0x6d2793);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2794:{NFSU2_TR(0x6d2794);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2797:{NFSU2_TR(0x6d2797);
__builtin_memmove((R+4),(R+24),4);
}
B6d2799:{NFSU2_TR(0x6d2799);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d279c:{NFSU2_TR(0x6d279c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d279f:{NFSU2_TR(0x6d279f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d27a2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d27a2:L6d27a2:{c.instructions+=2;NFSU2_TR(0x6d27a2);
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
B6d27a4:{NFSU2_TR(0x6d27a4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d27ed;}}
}
B6d27a6:L6d27a6:{c.instructions+=6;NFSU2_TR(0x6d27a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d27a9:{NFSU2_TR(0x6d27a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d27ab:{NFSU2_TR(0x6d27ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d27ae:{NFSU2_TR(0x6d27ae);
__builtin_memmove((R+4),(R+24),4);
}
B6d27b0:{NFSU2_TR(0x6d27b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d27b3:{NFSU2_TR(0x6d27b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d27b6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d27b6:L6d27b6:{c.instructions+=2;NFSU2_TR(0x6d27b6);
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
B6d27b8:{NFSU2_TR(0x6d27b8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d27ed;}}
}
B6d27ba:L6d27ba:{c.instructions+=4;NFSU2_TR(0x6d27ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d27bd:{NFSU2_TR(0x6d27bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d27c0:{NFSU2_TR(0x6d27c0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(u32(0x1000000ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d27c6:{NFSU2_TR(0x6d27c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d27c7:L6d27c7:{c.instructions+=4;NFSU2_TR(0x6d27c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d27ca:{NFSU2_TR(0x6d27ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d27cc:{NFSU2_TR(0x6d27cc);
__builtin_memmove((R+4),(R+24),4);
}
B6d27ce:{NFSU2_TR(0x6d27ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d27d1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d27d1:L6d27d1:{c.instructions+=2;NFSU2_TR(0x6d27d1);
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
B6d27d3:{NFSU2_TR(0x6d27d3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d27ed;}}
}
B6d27d5:L6d27d5:{c.instructions+=3;NFSU2_TR(0x6d27d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d27d7:{NFSU2_TR(0x6d27d7);
__builtin_memmove((R+4),(R+24),4);
}
B6d27d9:{NFSU2_TR(0x6d27d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d27dcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d27dc:L6d27dc:{c.instructions+=2;NFSU2_TR(0x6d27dc);
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
B6d27de:{NFSU2_TR(0x6d27de);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d27ed;}}
}
B6d27e0:L6d27e0:{c.instructions+=2;NFSU2_TR(0x6d27e0);
__builtin_memmove((R+4),(R+24),4);
}
B6d27e2:{NFSU2_TR(0x6d27e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d27e7ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d27e7:L6d27e7:{c.instructions+=2;NFSU2_TR(0x6d27e7);
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
B6d27e9:{NFSU2_TR(0x6d27e9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d27ed;}}
}
B6d27eb:L6d27eb:{c.instructions+=1;NFSU2_TR(0x6d27eb);
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
B6d27ed:L6d27ed:{c.instructions+=2;NFSU2_TR(0x6d27ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d27ee:{NFSU2_TR(0x6d27ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d27ef:L6d27ef:{c.instructions+=3;NFSU2_TR(0x6d27ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d27f0:{NFSU2_TR(0x6d27f0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d27f1:{NFSU2_TR(0x6d27f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d27f2:L6d27f2:{c.instructions+=1;NFSU2_TR(0x6d27f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d27f5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d27f5:L6d27f5:{c.instructions+=2;NFSU2_TR(0x6d27f5);
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
B6d27f7:{NFSU2_TR(0x6d27f7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d27edu);}goto L6d27ed;}}
}
B6d27f9:L6d27f9:{c.instructions+=9;NFSU2_TR(0x6d27f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d27fb:{NFSU2_TR(0x6d27fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d27fe:{NFSU2_TR(0x6d27fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d27ff:{NFSU2_TR(0x6d27ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2802:{NFSU2_TR(0x6d2802);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2808:{NFSU2_TR(0x6d2808);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2809:{NFSU2_TR(0x6d2809);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d280c:{NFSU2_TR(0x6d280c);
__builtin_memmove((R+4),(R+24),4);
}
B6d280e:{NFSU2_TR(0x6d280e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2811ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2811:L6d2811:{c.instructions+=2;NFSU2_TR(0x6d2811);
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
B6d2813:{NFSU2_TR(0x6d2813);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d27edu);}goto L6d27ed;}}
}
B6d2815:L6d2815:{c.instructions+=6;NFSU2_TR(0x6d2815);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2818:{NFSU2_TR(0x6d2818);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d281a:{NFSU2_TR(0x6d281a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d281d:{NFSU2_TR(0x6d281d);
__builtin_memmove((R+4),(R+24),4);
}
B6d281f:{NFSU2_TR(0x6d281f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2822:{NFSU2_TR(0x6d2822);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2825ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2825:L6d2825:{c.instructions+=2;NFSU2_TR(0x6d2825);
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
B6d2827:{NFSU2_TR(0x6d2827);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d27edu);}goto L6d27ed;}}
}
B6d2829:L6d2829:{c.instructions+=14;NFSU2_TR(0x6d2829);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d282c:{NFSU2_TR(0x6d282c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d282e:{NFSU2_TR(0x6d282e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2831:{NFSU2_TR(0x6d2831);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2832:{NFSU2_TR(0x6d2832);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2835:{NFSU2_TR(0x6d2835);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2836:{NFSU2_TR(0x6d2836);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d283c:{NFSU2_TR(0x6d283c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d283f:{NFSU2_TR(0x6d283f);
__builtin_memmove((R+12),(R+28),4);
}
B6d2841:{NFSU2_TR(0x6d2841);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+12),4);
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+12))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6d2844:{NFSU2_TR(0x6d2844);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d2847:{NFSU2_TR(0x6d2847);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d284a:{NFSU2_TR(0x6d284a);
__builtin_memmove((R+4),(R+24),4);
}
B6d284c:{NFSU2_TR(0x6d284c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d284full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d284f:L6d284f:{c.instructions+=2;NFSU2_TR(0x6d284f);
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
B6d2851:{NFSU2_TR(0x6d2851);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d27edu);}goto L6d27ed;}}
}
B6d2853:L6d2853:{c.instructions+=11;NFSU2_TR(0x6d2853);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2855:{NFSU2_TR(0x6d2855);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2858:{NFSU2_TR(0x6d2858);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2859:{NFSU2_TR(0x6d2859);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d285c:{NFSU2_TR(0x6d285c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2862:{NFSU2_TR(0x6d2862);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2865:{NFSU2_TR(0x6d2865);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+12)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d2867:{NFSU2_TR(0x6d2867);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2868:{NFSU2_TR(0x6d2868);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2869:{NFSU2_TR(0x6d2869);
__builtin_memmove((R+4),(R+24),4);
}
B6d286b:{NFSU2_TR(0x6d286b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d286eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d286e:L6d286e:{c.instructions+=2;NFSU2_TR(0x6d286e);
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
B6d2870:{NFSU2_TR(0x6d2870);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d27edu);}goto L6d27ed;}}
}
B6d2876:L6d2876:{c.instructions+=3;NFSU2_TR(0x6d2876);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2879:{NFSU2_TR(0x6d2879);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d287c:{NFSU2_TR(0x6d287c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d27c7u);}goto L6d27c7;}
}
B6d2881:L6d2881:{c.instructions+=9;NFSU2_TR(0x6d2881);
__builtin_memmove((R+28),(R+28),4);
}
B6d2883:{NFSU2_TR(0x6d2883);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2884:{NFSU2_TR(0x6d2884);
__builtin_memmove((R+20),(R+16),4);
}
B6d2886:{NFSU2_TR(0x6d2886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B6d2889:{NFSU2_TR(0x6d2889);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d288a:{NFSU2_TR(0x6d288a);
__builtin_memmove((R+24),(R+4),4);
}
B6d288c:{NFSU2_TR(0x6d288c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d288e:{NFSU2_TR(0x6d288e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d2891:{NFSU2_TR(0x6d2891);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d289d;}}
}
B6d2893:L6d2893:{c.instructions+=2;NFSU2_TR(0x6d2893);
w4(R+0,u32(0x80004001ull));
}
B6d2898:{NFSU2_TR(0x6d2898);
{goto L6d2a4d;}
}
B6d289d:L6d289d:{c.instructions+=3;NFSU2_TR(0x6d289d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d28a3:{NFSU2_TR(0x6d28a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d28a6:{NFSU2_TR(0x6d28a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d28af;}}
}
B6d28a8:L6d28a8:{c.instructions+=2;NFSU2_TR(0x6d28a8);
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
B6d28aa:{NFSU2_TR(0x6d28aa);
{goto L6d2a4d;}
}
B6d28af:L6d28af:{c.instructions+=8;NFSU2_TR(0x6d28af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d28b2:{NFSU2_TR(0x6d28b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d28b4:{NFSU2_TR(0x6d28b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d28b7:{NFSU2_TR(0x6d28b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d28ba:{NFSU2_TR(0x6d28ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d28bb:{NFSU2_TR(0x6d28bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d28be:{NFSU2_TR(0x6d28be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d28c1:{NFSU2_TR(0x6d28c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d28c2:L6d28c2:{c.instructions+=10;NFSU2_TR(0x6d28c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d28c8:{NFSU2_TR(0x6d28c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d28cb:{NFSU2_TR(0x6d28cb);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B6d28cf:{NFSU2_TR(0x6d28cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d28d2:{NFSU2_TR(0x6d28d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d28d5:{NFSU2_TR(0x6d28d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d28d8:{NFSU2_TR(0x6d28d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d28db:{NFSU2_TR(0x6d28db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d28de:{NFSU2_TR(0x6d28de);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d28e1:{NFSU2_TR(0x6d28e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d28ff;}}
}
B6d28e3:L6d28e3:{c.instructions+=3;NFSU2_TR(0x6d28e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d28e6:{NFSU2_TR(0x6d28e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d28e9:{NFSU2_TR(0x6d28e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d28ff;}}
}
B6d28eb:L6d28eb:{c.instructions+=3;NFSU2_TR(0x6d28eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d28ee:{NFSU2_TR(0x6d28ee);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d28f1:{NFSU2_TR(0x6d28f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d28ff;}}
}
B6d28f3:L6d28f3:{c.instructions+=3;NFSU2_TR(0x6d28f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d28f6:{NFSU2_TR(0x6d28f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d28f9:{NFSU2_TR(0x6d28f9);
if(r1(R+518)){{goto L6d2a3c;}}
}
B6d28ff:L6d28ff:{c.instructions+=3;NFSU2_TR(0x6d28ff);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2901:{NFSU2_TR(0x6d2901);
__builtin_memmove((R+4),(R+24),4);
}
B6d2903:{NFSU2_TR(0x6d2903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2908ull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6d2908:L6d2908:{c.instructions+=2;NFSU2_TR(0x6d2908);
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
B6d290a:{NFSU2_TR(0x6d290a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2a4b;}}
}
B6d2910:L6d2910:{c.instructions+=10;NFSU2_TR(0x6d2910);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2913:{NFSU2_TR(0x6d2913);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2916:{NFSU2_TR(0x6d2916);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d2919:{NFSU2_TR(0x6d2919);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d291c:{NFSU2_TR(0x6d291c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d291f:{NFSU2_TR(0x6d291f);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7ffull))));
}
B6d2925:{NFSU2_TR(0x6d2925);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d2927:{NFSU2_TR(0x6d2927);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xb0001000ull))));
}
B6d292d:{NFSU2_TR(0x6d292d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6d292f:{NFSU2_TR(0x6d292f);
if(r1(R+518)){{goto L6d2950;}}
}
B6d2931:L6d2931:{c.instructions+=2;NFSU2_TR(0x6d2931);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6d2932:{NFSU2_TR(0x6d2932);
if(r1(R+518)){{goto L6d294a;}}
}
B6d2934:L6d2934:{c.instructions+=2;NFSU2_TR(0x6d2934);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6d2935:{NFSU2_TR(0x6d2935);
if(r1(R+518)){{goto L6d2942;}}
}
B6d2937:L6d2937:{c.instructions+=2;NFSU2_TR(0x6d2937);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6d2938:{NFSU2_TR(0x6d2938);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d2950;}}
}
B6d293a:L6d293a:{c.instructions+=2;NFSU2_TR(0x6d293a);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xff0000ull))));
}
B6d2940:{NFSU2_TR(0x6d2940);
{goto L6d2950;}
}
B6d2942:L6d2942:{c.instructions+=2;NFSU2_TR(0x6d2942);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xaa0000ull))));
}
B6d2948:{NFSU2_TR(0x6d2948);
{goto L6d2950;}
}
B6d294a:L6d294a:{c.instructions+=1;NFSU2_TR(0x6d294a);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x550000ull))));
}
B6d2950:L6d2950:{c.instructions+=2;NFSU2_TR(0x6d2950);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d2953:{NFSU2_TR(0x6d2953);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d295b;}}
}
B6d2955:L6d2955:{c.instructions+=1;NFSU2_TR(0x6d2955);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xd000000ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d295b:L6d295b:{c.instructions+=13;NFSU2_TR(0x6d295b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d295d:{NFSU2_TR(0x6d295d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6d2960:{NFSU2_TR(0x6d2960);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2961:{NFSU2_TR(0x6d2961);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d2964:{NFSU2_TR(0x6d2964);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2965:{NFSU2_TR(0x6d2965);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2968:{NFSU2_TR(0x6d2968);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2969:{NFSU2_TR(0x6d2969);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d296f:{NFSU2_TR(0x6d296f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2972:{NFSU2_TR(0x6d2972);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d2974:{NFSU2_TR(0x6d2974);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d2977:{NFSU2_TR(0x6d2977);
__builtin_memmove((R+4),(R+24),4);
}
B6d2979:{NFSU2_TR(0x6d2979);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d297cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d297c:L6d297c:{c.instructions+=2;NFSU2_TR(0x6d297c);
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
B6d297e:{NFSU2_TR(0x6d297e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2a4b;}}
}
B6d2984:L6d2984:{c.instructions+=9;NFSU2_TR(0x6d2984);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2987:{NFSU2_TR(0x6d2987);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d298d:{NFSU2_TR(0x6d298d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d298f:{NFSU2_TR(0x6d298f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2992:{NFSU2_TR(0x6d2992);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2993:{NFSU2_TR(0x6d2993);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2996:{NFSU2_TR(0x6d2996);
__builtin_memmove((R+4),(R+24),4);
}
B6d2998:{NFSU2_TR(0x6d2998);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d299b:{NFSU2_TR(0x6d299b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d299eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d299e:L6d299e:{c.instructions+=2;NFSU2_TR(0x6d299e);
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
B6d29a0:{NFSU2_TR(0x6d29a0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2a4b;}}
}
B6d29a6:L6d29a6:{c.instructions+=6;NFSU2_TR(0x6d29a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d29a8:{NFSU2_TR(0x6d29a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d29a9:{NFSU2_TR(0x6d29a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d29ac:{NFSU2_TR(0x6d29ac);
__builtin_memmove((R+4),(R+24),4);
}
B6d29ae:{NFSU2_TR(0x6d29ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d29b1:{NFSU2_TR(0x6d29b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d29b4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d29b4:L6d29b4:{c.instructions+=2;NFSU2_TR(0x6d29b4);
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
B6d29b6:{NFSU2_TR(0x6d29b6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2a4b;}}
}
B6d29bc:L6d29bc:{c.instructions+=14;NFSU2_TR(0x6d29bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d29c2:{NFSU2_TR(0x6d29c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d29c4:{NFSU2_TR(0x6d29c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d29c7:{NFSU2_TR(0x6d29c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d29c8:{NFSU2_TR(0x6d29c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d29cb:{NFSU2_TR(0x6d29cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d29cc:{NFSU2_TR(0x6d29cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d29cf:{NFSU2_TR(0x6d29cf);
u8 U[40];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+16,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+4,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B6d29d3:{NFSU2_TR(0x6d29d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d29d6:{NFSU2_TR(0x6d29d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d29d9:{NFSU2_TR(0x6d29d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d29dc:{NFSU2_TR(0x6d29dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d29df:{NFSU2_TR(0x6d29df);
__builtin_memmove((R+4),(R+24),4);
}
B6d29e1:{NFSU2_TR(0x6d29e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d29e4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d29e4:L6d29e4:{c.instructions+=2;NFSU2_TR(0x6d29e4);
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
B6d29e6:{NFSU2_TR(0x6d29e6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2a4b;}}
}
B6d29e8:L6d29e8:{c.instructions+=13;NFSU2_TR(0x6d29e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d29ee:{NFSU2_TR(0x6d29ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d29f1:{NFSU2_TR(0x6d29f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d29f4:{NFSU2_TR(0x6d29f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d29f6:{NFSU2_TR(0x6d29f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d29f9:{NFSU2_TR(0x6d29f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d29fa:{NFSU2_TR(0x6d29fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d29fd:{NFSU2_TR(0x6d29fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d29fe:{NFSU2_TR(0x6d29fe);
u8 U[40];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B6d2a02:{NFSU2_TR(0x6d2a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d2a05:{NFSU2_TR(0x6d2a05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2a06:{NFSU2_TR(0x6d2a06);
__builtin_memmove((R+4),(R+24),4);
}
B6d2a08:{NFSU2_TR(0x6d2a08);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2a0bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2a0b:L6d2a0b:{c.instructions+=2;NFSU2_TR(0x6d2a0b);
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
B6d2a0d:{NFSU2_TR(0x6d2a0d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2a4b;}}
}
B6d2a0f:L6d2a0f:{c.instructions+=6;NFSU2_TR(0x6d2a0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2a12:{NFSU2_TR(0x6d2a12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2a14:{NFSU2_TR(0x6d2a14);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2a17:{NFSU2_TR(0x6d2a17);
__builtin_memmove((R+4),(R+24),4);
}
B6d2a19:{NFSU2_TR(0x6d2a19);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2a1c:{NFSU2_TR(0x6d2a1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2a1full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2a1f:L6d2a1f:{c.instructions+=2;NFSU2_TR(0x6d2a1f);
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
B6d2a21:{NFSU2_TR(0x6d2a21);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2a4b;}}
}
B6d2a23:L6d2a23:{c.instructions+=3;NFSU2_TR(0x6d2a23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2a25:{NFSU2_TR(0x6d2a25);
__builtin_memmove((R+4),(R+24),4);
}
B6d2a27:{NFSU2_TR(0x6d2a27);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2a2aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2a2a:L6d2a2a:{c.instructions+=2;NFSU2_TR(0x6d2a2a);
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
B6d2a2c:{NFSU2_TR(0x6d2a2c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2a4b;}}
}
B6d2a2e:L6d2a2e:{c.instructions+=2;NFSU2_TR(0x6d2a2e);
__builtin_memmove((R+4),(R+24),4);
}
B6d2a30:{NFSU2_TR(0x6d2a30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2a35ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d2a35:L6d2a35:{c.instructions+=2;NFSU2_TR(0x6d2a35);
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
B6d2a37:{NFSU2_TR(0x6d2a37);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2a4b;}}
}
B6d2a39:L6d2a39:{c.instructions+=1;NFSU2_TR(0x6d2a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2a3c:L6d2a3c:{c.instructions+=3;NFSU2_TR(0x6d2a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d2a3f:{NFSU2_TR(0x6d2a3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6d2a43:{NFSU2_TR(0x6d2a43);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d28c2u);}goto L6d28c2;}}
}
B6d2a49:L6d2a49:{c.instructions+=1;NFSU2_TR(0x6d2a49);
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
B6d2a4b:L6d2a4b:{c.instructions+=2;NFSU2_TR(0x6d2a4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d2a4c:{NFSU2_TR(0x6d2a4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d2a4d:L6d2a4d:{c.instructions+=3;NFSU2_TR(0x6d2a4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d2a4e:{NFSU2_TR(0x6d2a4e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d2a4f:{NFSU2_TR(0x6d2a4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d2a50:L6d2a50:{c.instructions+=16;NFSU2_TR(0x6d2a50);
__builtin_memmove((R+28),(R+28),4);
}
B6d2a52:{NFSU2_TR(0x6d2a52);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2a53:{NFSU2_TR(0x6d2a53);
__builtin_memmove((R+20),(R+16),4);
}
B6d2a55:{NFSU2_TR(0x6d2a55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6d2a58:{NFSU2_TR(0x6d2a58);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2a59:{NFSU2_TR(0x6d2a59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2a5a:{NFSU2_TR(0x6d2a5a);
__builtin_memmove((R+24),(R+4),4);
}
B6d2a5c:{NFSU2_TR(0x6d2a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2a62:{NFSU2_TR(0x6d2a62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2a64:{NFSU2_TR(0x6d2a64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2a65:{NFSU2_TR(0x6d2a65);
__builtin_memmove((R+28),(R+0),4);
}
B6d2a67:{NFSU2_TR(0x6d2a67);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6d2a6c:{NFSU2_TR(0x6d2a6c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d2a6e:{NFSU2_TR(0x6d2a6e);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6d2a74:{NFSU2_TR(0x6d2a74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d2a79:{NFSU2_TR(0x6d2a79);
if(r1(R+518)){{goto L6d2aa3;}}
}
B6d2a7b:L6d2a7b:{c.instructions+=2;NFSU2_TR(0x6d2a7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d2a80:{NFSU2_TR(0x6d2a80);
if(r1(R+518)){{goto L6d2ba4;}}
}
B6d2a86:L6d2a86:{c.instructions+=2;NFSU2_TR(0x6d2a86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73a00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d2a8b:{NFSU2_TR(0x6d2a8b);
if(r1(R+518)){{goto L6d2b9d;}}
}
B6d2a91:L6d2a91:{c.instructions+=2;NFSU2_TR(0x6d2a91);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73b00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d2a96:{NFSU2_TR(0x6d2a96);
if(r1(R+518)){{goto L6d2b96;}}
}
B6d2a9c:L6d2a9c:{c.instructions+=2;NFSU2_TR(0x6d2a9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73c00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d2aa1:{NFSU2_TR(0x6d2aa1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d2aa6;}}
}
B6d2aa3:L6d2aa3:{c.instructions+=1;NFSU2_TR(0x6d2aa3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2aa5:L6d2aa5:{c.instructions+=1;NFSU2_TR(0x6d2aa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2aa6:L6d2aa6:{c.instructions+=5;NFSU2_TR(0x6d2aa6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6d2aa9:{NFSU2_TR(0x6d2aa9);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x29ull))));
}
B6d2aac:{NFSU2_TR(0x6d2aac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2aad:{NFSU2_TR(0x6d2aad);
__builtin_memmove((R+4),(R+24),4);
}
B6d2aaf:{NFSU2_TR(0x6d2aaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2ab4ull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6d2ab4:L6d2ab4:{c.instructions+=2;NFSU2_TR(0x6d2ab4);
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
B6d2ab6:{NFSU2_TR(0x6d2ab6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2b91;}}
}
B6d2abc:L6d2abc:{c.instructions+=12;NFSU2_TR(0x6d2abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d2abf:{NFSU2_TR(0x6d2abf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2ac1:{NFSU2_TR(0x6d2ac1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2ac4:{NFSU2_TR(0x6d2ac4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2ac5:{NFSU2_TR(0x6d2ac5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2ac8:{NFSU2_TR(0x6d2ac8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2ac9:{NFSU2_TR(0x6d2ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2acf:{NFSU2_TR(0x6d2acf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2ad2:{NFSU2_TR(0x6d2ad2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d2ad4:{NFSU2_TR(0x6d2ad4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d2ad7:{NFSU2_TR(0x6d2ad7);
__builtin_memmove((R+4),(R+24),4);
}
B6d2ad9:{NFSU2_TR(0x6d2ad9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2adcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2adc:L6d2adc:{c.instructions+=2;NFSU2_TR(0x6d2adc);
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
B6d2ade:{NFSU2_TR(0x6d2ade);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2b91;}}
}
B6d2ae4:L6d2ae4:{c.instructions+=9;NFSU2_TR(0x6d2ae4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2ae6:{NFSU2_TR(0x6d2ae6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2ae9:{NFSU2_TR(0x6d2ae9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2aea:{NFSU2_TR(0x6d2aea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2af0:{NFSU2_TR(0x6d2af0);
u8 U[4];
w4(U+0,u32(0xf0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2af5:{NFSU2_TR(0x6d2af5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2af6:{NFSU2_TR(0x6d2af6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2af9:{NFSU2_TR(0x6d2af9);
__builtin_memmove((R+4),(R+24),4);
}
B6d2afb:{NFSU2_TR(0x6d2afb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2afeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2afe:L6d2afe:{c.instructions+=2;NFSU2_TR(0x6d2afe);
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
B6d2b00:{NFSU2_TR(0x6d2b00);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2b91;}}
}
B6d2b06:L6d2b06:{c.instructions+=6;NFSU2_TR(0x6d2b06);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2b09:{NFSU2_TR(0x6d2b09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2b0b:{NFSU2_TR(0x6d2b0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2b0e:{NFSU2_TR(0x6d2b0e);
__builtin_memmove((R+4),(R+24),4);
}
B6d2b10:{NFSU2_TR(0x6d2b10);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2b13:{NFSU2_TR(0x6d2b13);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2b16ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2b16:L6d2b16:{c.instructions+=2;NFSU2_TR(0x6d2b16);
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
B6d2b18:{NFSU2_TR(0x6d2b18);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2b91;}}
}
B6d2b1a:L6d2b1a:{c.instructions+=14;NFSU2_TR(0x6d2b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d2b1d:{NFSU2_TR(0x6d2b1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2b1f:{NFSU2_TR(0x6d2b1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2b22:{NFSU2_TR(0x6d2b22);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2b23:{NFSU2_TR(0x6d2b23);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2b26:{NFSU2_TR(0x6d2b26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2b27:{NFSU2_TR(0x6d2b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2b2d:{NFSU2_TR(0x6d2b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2b30:{NFSU2_TR(0x6d2b30);
__builtin_memmove((R+12),(R+28),4);
}
B6d2b32:{NFSU2_TR(0x6d2b32);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+12),4);
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+12))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6d2b35:{NFSU2_TR(0x6d2b35);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d2b38:{NFSU2_TR(0x6d2b38);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d2b3b:{NFSU2_TR(0x6d2b3b);
__builtin_memmove((R+4),(R+24),4);
}
B6d2b3d:{NFSU2_TR(0x6d2b3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2b40ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2b40:L6d2b40:{c.instructions+=2;NFSU2_TR(0x6d2b40);
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
B6d2b42:{NFSU2_TR(0x6d2b42);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2b91;}}
}
B6d2b44:L6d2b44:{c.instructions+=11;NFSU2_TR(0x6d2b44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2b46:{NFSU2_TR(0x6d2b46);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2b49:{NFSU2_TR(0x6d2b49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2b4a:{NFSU2_TR(0x6d2b4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2b50:{NFSU2_TR(0x6d2b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2b53:{NFSU2_TR(0x6d2b53);
u8 U[4];
w4(U+0,u32(0xf0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2b58:{NFSU2_TR(0x6d2b58);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+12)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d2b5a:{NFSU2_TR(0x6d2b5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2b5b:{NFSU2_TR(0x6d2b5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2b5c:{NFSU2_TR(0x6d2b5c);
__builtin_memmove((R+4),(R+24),4);
}
B6d2b5e:{NFSU2_TR(0x6d2b5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2b61ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2b61:L6d2b61:{c.instructions+=2;NFSU2_TR(0x6d2b61);
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
B6d2b63:{NFSU2_TR(0x6d2b63);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2b91;}}
}
B6d2b65:L6d2b65:{c.instructions+=6;NFSU2_TR(0x6d2b65);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2b68:{NFSU2_TR(0x6d2b68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2b6a:{NFSU2_TR(0x6d2b6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2b6d:{NFSU2_TR(0x6d2b6d);
__builtin_memmove((R+4),(R+24),4);
}
B6d2b6f:{NFSU2_TR(0x6d2b6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2b72:{NFSU2_TR(0x6d2b72);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2b75ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2b75:L6d2b75:{c.instructions+=2;NFSU2_TR(0x6d2b75);
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
B6d2b77:{NFSU2_TR(0x6d2b77);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2b91;}}
}
B6d2b79:L6d2b79:{c.instructions+=3;NFSU2_TR(0x6d2b79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2b7b:{NFSU2_TR(0x6d2b7b);
__builtin_memmove((R+4),(R+24),4);
}
B6d2b7d:{NFSU2_TR(0x6d2b7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2b80ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2b80:L6d2b80:{c.instructions+=2;NFSU2_TR(0x6d2b80);
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
B6d2b82:{NFSU2_TR(0x6d2b82);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2b91;}}
}
B6d2b84:L6d2b84:{c.instructions+=2;NFSU2_TR(0x6d2b84);
__builtin_memmove((R+4),(R+24),4);
}
B6d2b86:{NFSU2_TR(0x6d2b86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2b8bull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d2b8b:L6d2b8b:{c.instructions+=2;NFSU2_TR(0x6d2b8b);
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
B6d2b8d:{NFSU2_TR(0x6d2b8d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2b91;}}
}
B6d2b8f:L6d2b8f:{c.instructions+=1;NFSU2_TR(0x6d2b8f);
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
B6d2b91:L6d2b91:{c.instructions+=5;NFSU2_TR(0x6d2b91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d2b92:{NFSU2_TR(0x6d2b92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d2b93:{NFSU2_TR(0x6d2b93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d2b94:{NFSU2_TR(0x6d2b94);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d2b95:{NFSU2_TR(0x6d2b95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d2b96:L6d2b96:{c.instructions+=2;NFSU2_TR(0x6d2b96);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2b98:{NFSU2_TR(0x6d2b98);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d2aa5u);}goto L6d2aa5;}
}
B6d2b9d:L6d2b9d:{c.instructions+=2;NFSU2_TR(0x6d2b9d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2b9f:{NFSU2_TR(0x6d2b9f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d2aa5u);}goto L6d2aa5;}
}
B6d2ba4:L6d2ba4:{c.instructions+=2;NFSU2_TR(0x6d2ba4);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2ba6:{NFSU2_TR(0x6d2ba6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d2aa5u);}goto L6d2aa5;}
}
B6d2bab:L6d2bab:{c.instructions+=9;NFSU2_TR(0x6d2bab);
__builtin_memmove((R+28),(R+28),4);
}
B6d2bad:{NFSU2_TR(0x6d2bad);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2bae:{NFSU2_TR(0x6d2bae);
__builtin_memmove((R+20),(R+16),4);
}
B6d2bb0:{NFSU2_TR(0x6d2bb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2bb1:{NFSU2_TR(0x6d2bb1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2bb2:{NFSU2_TR(0x6d2bb2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2bb3:{NFSU2_TR(0x6d2bb3);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2bb5:{NFSU2_TR(0x6d2bb5);
__builtin_memmove((R+24),(R+4),4);
}
B6d2bb7:{NFSU2_TR(0x6d2bb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2bbcull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6d2bbc:L6d2bbc:{c.instructions+=2;NFSU2_TR(0x6d2bbc);
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
B6d2bbe:{NFSU2_TR(0x6d2bbe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2c20;}}
}
B6d2bc0:L6d2bc0:{c.instructions+=12;NFSU2_TR(0x6d2bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d2bc3:{NFSU2_TR(0x6d2bc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2bc5:{NFSU2_TR(0x6d2bc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2bc8:{NFSU2_TR(0x6d2bc8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2bc9:{NFSU2_TR(0x6d2bc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2bcc:{NFSU2_TR(0x6d2bcc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2bcd:{NFSU2_TR(0x6d2bcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2bd3:{NFSU2_TR(0x6d2bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2bd6:{NFSU2_TR(0x6d2bd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d2bd8:{NFSU2_TR(0x6d2bd8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d2bdb:{NFSU2_TR(0x6d2bdb);
__builtin_memmove((R+4),(R+24),4);
}
B6d2bdd:{NFSU2_TR(0x6d2bdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2be0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2be0:L6d2be0:{c.instructions+=2;NFSU2_TR(0x6d2be0);
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
B6d2be2:{NFSU2_TR(0x6d2be2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2c20;}}
}
B6d2be4:L6d2be4:{c.instructions+=11;NFSU2_TR(0x6d2be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2be7:{NFSU2_TR(0x6d2be7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2bea:{NFSU2_TR(0x6d2bea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2bec:{NFSU2_TR(0x6d2bec);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B6d2bee:{NFSU2_TR(0x6d2bee);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6d2bf0:{NFSU2_TR(0x6d2bf0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xd000000ull))));
}
B6d2bf6:{NFSU2_TR(0x6d2bf6);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))|u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d2bf9:{NFSU2_TR(0x6d2bf9);
u8 U[4];
w4(U+0,u32(0xe40000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2bfe:{NFSU2_TR(0x6d2bfe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2bff:{NFSU2_TR(0x6d2bff);
__builtin_memmove((R+4),(R+24),4);
}
B6d2c01:{NFSU2_TR(0x6d2c01);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2c04ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2c04:L6d2c04:{c.instructions+=2;NFSU2_TR(0x6d2c04);
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
B6d2c06:{NFSU2_TR(0x6d2c06);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2c20;}}
}
B6d2c08:L6d2c08:{c.instructions+=3;NFSU2_TR(0x6d2c08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2c0a:{NFSU2_TR(0x6d2c0a);
__builtin_memmove((R+4),(R+24),4);
}
B6d2c0c:{NFSU2_TR(0x6d2c0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2c0full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2c0f:L6d2c0f:{c.instructions+=2;NFSU2_TR(0x6d2c0f);
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
B6d2c11:{NFSU2_TR(0x6d2c11);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2c20;}}
}
B6d2c13:L6d2c13:{c.instructions+=2;NFSU2_TR(0x6d2c13);
__builtin_memmove((R+4),(R+24),4);
}
B6d2c15:{NFSU2_TR(0x6d2c15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2c1aull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d2c1a:L6d2c1a:{c.instructions+=2;NFSU2_TR(0x6d2c1a);
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
B6d2c1c:{NFSU2_TR(0x6d2c1c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2c20;}}
}
B6d2c1e:L6d2c1e:{c.instructions+=1;NFSU2_TR(0x6d2c1e);
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
B6d2c20:L6d2c20:{c.instructions+=3;NFSU2_TR(0x6d2c20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d2c21:{NFSU2_TR(0x6d2c21);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d2c22:{NFSU2_TR(0x6d2c22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d2c25:L6d2c25:{c.instructions+=5;NFSU2_TR(0x6d2c25);
__builtin_memmove((R+28),(R+28),4);
}
B6d2c27:{NFSU2_TR(0x6d2c27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2c28:{NFSU2_TR(0x6d2c28);
u8 U[4];
w4(U+0,u32(0x2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2c2a:{NFSU2_TR(0x6d2c2a);
__builtin_memmove((R+24),(R+4),4);
}
B6d2c2c:{NFSU2_TR(0x6d2c2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2c31ull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6d2c31:L6d2c31:{c.instructions+=2;NFSU2_TR(0x6d2c31);
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
B6d2c33:{NFSU2_TR(0x6d2c33);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2c4d;}}
}
B6d2c35:L6d2c35:{c.instructions+=3;NFSU2_TR(0x6d2c35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2c37:{NFSU2_TR(0x6d2c37);
__builtin_memmove((R+4),(R+24),4);
}
B6d2c39:{NFSU2_TR(0x6d2c39);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2c3cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2c3c:L6d2c3c:{c.instructions+=2;NFSU2_TR(0x6d2c3c);
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
B6d2c3e:{NFSU2_TR(0x6d2c3e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2c4d;}}
}
B6d2c40:L6d2c40:{c.instructions+=2;NFSU2_TR(0x6d2c40);
__builtin_memmove((R+4),(R+24),4);
}
B6d2c42:{NFSU2_TR(0x6d2c42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2c47ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d2c47:L6d2c47:{c.instructions+=2;NFSU2_TR(0x6d2c47);
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
B6d2c49:{NFSU2_TR(0x6d2c49);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2c4d;}}
}
B6d2c4b:L6d2c4b:{c.instructions+=1;NFSU2_TR(0x6d2c4b);
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
B6d2c4d:L6d2c4d:{c.instructions+=2;NFSU2_TR(0x6d2c4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d2c4e:{NFSU2_TR(0x6d2c4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d2c4f:L6d2c4f:{c.instructions+=5;NFSU2_TR(0x6d2c4f);
__builtin_memmove((R+28),(R+28),4);
}
B6d2c51:{NFSU2_TR(0x6d2c51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2c52:{NFSU2_TR(0x6d2c52);
u8 U[4];
w4(U+0,u32(0x2bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2c54:{NFSU2_TR(0x6d2c54);
__builtin_memmove((R+24),(R+4),4);
}
B6d2c56:{NFSU2_TR(0x6d2c56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2c5bull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6d2c5b:L6d2c5b:{c.instructions+=2;NFSU2_TR(0x6d2c5b);
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
B6d2c5d:{NFSU2_TR(0x6d2c5d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2c77;}}
}
B6d2c5f:L6d2c5f:{c.instructions+=3;NFSU2_TR(0x6d2c5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2c61:{NFSU2_TR(0x6d2c61);
__builtin_memmove((R+4),(R+24),4);
}
B6d2c63:{NFSU2_TR(0x6d2c63);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2c66ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2c66:L6d2c66:{c.instructions+=2;NFSU2_TR(0x6d2c66);
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
B6d2c68:{NFSU2_TR(0x6d2c68);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2c77;}}
}
B6d2c6a:L6d2c6a:{c.instructions+=2;NFSU2_TR(0x6d2c6a);
__builtin_memmove((R+4),(R+24),4);
}
B6d2c6c:{NFSU2_TR(0x6d2c6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2c71ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d2c71:L6d2c71:{c.instructions+=2;NFSU2_TR(0x6d2c71);
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
B6d2c73:{NFSU2_TR(0x6d2c73);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2c77;}}
}
B6d2c75:L6d2c75:{c.instructions+=1;NFSU2_TR(0x6d2c75);
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
B6d2c77:L6d2c77:{c.instructions+=2;NFSU2_TR(0x6d2c77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d2c78:{NFSU2_TR(0x6d2c78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d2c79:L6d2c79:{c.instructions+=8;NFSU2_TR(0x6d2c79);
__builtin_memmove((R+28),(R+28),4);
}
B6d2c7b:{NFSU2_TR(0x6d2c7b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2c7c:{NFSU2_TR(0x6d2c7c);
__builtin_memmove((R+20),(R+16),4);
}
B6d2c7e:{NFSU2_TR(0x6d2c7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6d2c81:{NFSU2_TR(0x6d2c81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2c82:{NFSU2_TR(0x6d2c82);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2c84:{NFSU2_TR(0x6d2c84);
__builtin_memmove((R+24),(R+4),4);
}
B6d2c86:{NFSU2_TR(0x6d2c86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2c8bull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6d2c8b:L6d2c8b:{c.instructions+=2;NFSU2_TR(0x6d2c8b);
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
B6d2c8d:{NFSU2_TR(0x6d2c8d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2d83;}}
}
B6d2c93:L6d2c93:{c.instructions+=14;NFSU2_TR(0x6d2c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d2c96:{NFSU2_TR(0x6d2c96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2c98:{NFSU2_TR(0x6d2c98);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2c9b:{NFSU2_TR(0x6d2c9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2c9c:{NFSU2_TR(0x6d2c9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2c9f:{NFSU2_TR(0x6d2c9f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2ca0:{NFSU2_TR(0x6d2ca0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2ca3:{NFSU2_TR(0x6d2ca3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2ca4:{NFSU2_TR(0x6d2ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2caa:{NFSU2_TR(0x6d2caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2cad:{NFSU2_TR(0x6d2cad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d2caf:{NFSU2_TR(0x6d2caf);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d2cb2:{NFSU2_TR(0x6d2cb2);
__builtin_memmove((R+4),(R+24),4);
}
B6d2cb4:{NFSU2_TR(0x6d2cb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2cb7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2cb7:L6d2cb7:{c.instructions+=2;NFSU2_TR(0x6d2cb7);
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
B6d2cb9:{NFSU2_TR(0x6d2cb9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2d83;}}
}
B6d2cbf:L6d2cbf:{c.instructions+=9;NFSU2_TR(0x6d2cbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2cc2:{NFSU2_TR(0x6d2cc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2cc8:{NFSU2_TR(0x6d2cc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d2cca:{NFSU2_TR(0x6d2cca);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2ccd:{NFSU2_TR(0x6d2ccd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2cce:{NFSU2_TR(0x6d2cce);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2cd1:{NFSU2_TR(0x6d2cd1);
__builtin_memmove((R+4),(R+24),4);
}
B6d2cd3:{NFSU2_TR(0x6d2cd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2cd6:{NFSU2_TR(0x6d2cd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2cd9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2cd9:L6d2cd9:{c.instructions+=2;NFSU2_TR(0x6d2cd9);
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
B6d2cdb:{NFSU2_TR(0x6d2cdb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2d83;}}
}
B6d2ce1:L6d2ce1:{c.instructions+=6;NFSU2_TR(0x6d2ce1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2ce4:{NFSU2_TR(0x6d2ce4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2ce6:{NFSU2_TR(0x6d2ce6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2ce9:{NFSU2_TR(0x6d2ce9);
__builtin_memmove((R+4),(R+24),4);
}
B6d2ceb:{NFSU2_TR(0x6d2ceb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2cee:{NFSU2_TR(0x6d2cee);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2cf1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2cf1:L6d2cf1:{c.instructions+=2;NFSU2_TR(0x6d2cf1);
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
B6d2cf3:{NFSU2_TR(0x6d2cf3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2d83;}}
}
B6d2cf9:L6d2cf9:{c.instructions+=12;NFSU2_TR(0x6d2cf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d2cfc:{NFSU2_TR(0x6d2cfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2cfe:{NFSU2_TR(0x6d2cfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2d01:{NFSU2_TR(0x6d2d01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2d02:{NFSU2_TR(0x6d2d02);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2d05:{NFSU2_TR(0x6d2d05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2d06:{NFSU2_TR(0x6d2d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2d0c:{NFSU2_TR(0x6d2d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2d0f:{NFSU2_TR(0x6d2d0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d2d11:{NFSU2_TR(0x6d2d11);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d2d14:{NFSU2_TR(0x6d2d14);
__builtin_memmove((R+4),(R+24),4);
}
B6d2d16:{NFSU2_TR(0x6d2d16);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2d19ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2d19:L6d2d19:{c.instructions+=2;NFSU2_TR(0x6d2d19);
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
B6d2d1b:{NFSU2_TR(0x6d2d1b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2d83;}}
}
B6d2d1d:L6d2d1d:{c.instructions+=9;NFSU2_TR(0x6d2d1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2d23:{NFSU2_TR(0x6d2d23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d2d25:{NFSU2_TR(0x6d2d25);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2d28:{NFSU2_TR(0x6d2d28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2d29:{NFSU2_TR(0x6d2d29);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2d2c:{NFSU2_TR(0x6d2d2c);
__builtin_memmove((R+4),(R+24),4);
}
B6d2d2e:{NFSU2_TR(0x6d2d2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2d31:{NFSU2_TR(0x6d2d31);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2d34:{NFSU2_TR(0x6d2d34);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2d37ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2d37:L6d2d37:{c.instructions+=2;NFSU2_TR(0x6d2d37);
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
B6d2d39:{NFSU2_TR(0x6d2d39);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2d83;}}
}
B6d2d3b:L6d2d3b:{c.instructions+=6;NFSU2_TR(0x6d2d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2d3e:{NFSU2_TR(0x6d2d3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xb000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d2d43:{NFSU2_TR(0x6d2d43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2d46:{NFSU2_TR(0x6d2d46);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2d49:{NFSU2_TR(0x6d2d49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d2d4b:{NFSU2_TR(0x6d2d4b);
if(r1(R+518)){{goto L6d2d5a;}}
}
B6d2d4d:L6d2d4d:{c.instructions+=3;NFSU2_TR(0x6d2d4d);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xc000000ull))));
}
B6d2d53:{NFSU2_TR(0x6d2d53);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf4ffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d2d58:{NFSU2_TR(0x6d2d58);
{goto L6d2d60;}
}
B6d2d5a:L6d2d5a:{c.instructions+=1;NFSU2_TR(0x6d2d5a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000000ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d2d60:L6d2d60:{c.instructions+=4;NFSU2_TR(0x6d2d60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2d61:{NFSU2_TR(0x6d2d61);
__builtin_memmove((R+4),(R+24),4);
}
B6d2d63:{NFSU2_TR(0x6d2d63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2d64:{NFSU2_TR(0x6d2d64);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2d67ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2d67:L6d2d67:{c.instructions+=2;NFSU2_TR(0x6d2d67);
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
B6d2d69:{NFSU2_TR(0x6d2d69);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2d83;}}
}
B6d2d6b:L6d2d6b:{c.instructions+=3;NFSU2_TR(0x6d2d6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2d6d:{NFSU2_TR(0x6d2d6d);
__builtin_memmove((R+4),(R+24),4);
}
B6d2d6f:{NFSU2_TR(0x6d2d6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2d72ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2d72:L6d2d72:{c.instructions+=2;NFSU2_TR(0x6d2d72);
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
B6d2d74:{NFSU2_TR(0x6d2d74);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2d83;}}
}
B6d2d76:L6d2d76:{c.instructions+=2;NFSU2_TR(0x6d2d76);
__builtin_memmove((R+4),(R+24),4);
}
B6d2d78:{NFSU2_TR(0x6d2d78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2d7dull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d2d7d:L6d2d7d:{c.instructions+=2;NFSU2_TR(0x6d2d7d);
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
B6d2d7f:{NFSU2_TR(0x6d2d7f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2d83;}}
}
B6d2d81:L6d2d81:{c.instructions+=1;NFSU2_TR(0x6d2d81);
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
B6d2d83:L6d2d83:{c.instructions+=3;NFSU2_TR(0x6d2d83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d2d84:{NFSU2_TR(0x6d2d84);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d2d85:{NFSU2_TR(0x6d2d85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d2d86:L6d2d86:{c.instructions+=16;NFSU2_TR(0x6d2d86);
__builtin_memmove((R+28),(R+28),4);
}
B6d2d88:{NFSU2_TR(0x6d2d88);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2d89:{NFSU2_TR(0x6d2d89);
__builtin_memmove((R+20),(R+16),4);
}
B6d2d8b:{NFSU2_TR(0x6d2d8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2d8c:{NFSU2_TR(0x6d2d8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2d8d:{NFSU2_TR(0x6d2d8d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2d8e:{NFSU2_TR(0x6d2d8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2d8f:{NFSU2_TR(0x6d2d8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2d90:{NFSU2_TR(0x6d2d90);
__builtin_memmove((R+28),(R+4),4);
}
B6d2d92:{NFSU2_TR(0x6d2d92);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2d98:{NFSU2_TR(0x6d2d98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6d2d9a:{NFSU2_TR(0x6d2d9a);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6d2da0:{NFSU2_TR(0x6d2da0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2da2:{NFSU2_TR(0x6d2da2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d2da3:{NFSU2_TR(0x6d2da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d2da6:{NFSU2_TR(0x6d2da6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d2df1;}}
}
B6d2da8:L6d2da8:{c.instructions+=3;NFSU2_TR(0x6d2da8);
__builtin_memmove((R+0),(R+24),4);
}
B6d2daa:{NFSU2_TR(0x6d2daa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d2dad:{NFSU2_TR(0x6d2dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d2db0:L6d2db0:{c.instructions+=22;NFSU2_TR(0x6d2db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2db6:{NFSU2_TR(0x6d2db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2db9:{NFSU2_TR(0x6d2db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d2dbc:{NFSU2_TR(0x6d2dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2dbf:{NFSU2_TR(0x6d2dbf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2dc0:{NFSU2_TR(0x6d2dc0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2dc1:{NFSU2_TR(0x6d2dc1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2dc2:{NFSU2_TR(0x6d2dc2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2dc3:{NFSU2_TR(0x6d2dc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2dc4:{NFSU2_TR(0x6d2dc4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2dc5:{NFSU2_TR(0x6d2dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d2dc8:{NFSU2_TR(0x6d2dc8);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B6d2dca:{NFSU2_TR(0x6d2dca);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6d2dcd:{NFSU2_TR(0x6d2dcd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2dce:{NFSU2_TR(0x6d2dce);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6d2dd0:{NFSU2_TR(0x6d2dd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2dd1:{NFSU2_TR(0x6d2dd1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2dd3:{NFSU2_TR(0x6d2dd3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6d2dd5:{NFSU2_TR(0x6d2dd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2dd6:{NFSU2_TR(0x6d2dd6);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2dd8:{NFSU2_TR(0x6d2dd8);
__builtin_memmove((R+4),(R+28),4);
}
B6d2dda:{NFSU2_TR(0x6d2dda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2ddfull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6d2ddf:L6d2ddf:{c.instructions+=3;NFSU2_TR(0x6d2ddf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6d2de1:{NFSU2_TR(0x6d2de1);
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
B6d2de3:{NFSU2_TR(0x6d2de3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2df3;}}
}
B6d2de5:L6d2de5:{c.instructions+=4;NFSU2_TR(0x6d2de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d2de8:{NFSU2_TR(0x6d2de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d2dec:{NFSU2_TR(0x6d2dec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6d2def:{NFSU2_TR(0x6d2def);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d2db0u);}goto L6d2db0;}}
}
B6d2df1:L6d2df1:{c.instructions+=1;NFSU2_TR(0x6d2df1);
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
B6d2df3:L6d2df3:{c.instructions+=5;NFSU2_TR(0x6d2df3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d2df4:{NFSU2_TR(0x6d2df4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d2df5:{NFSU2_TR(0x6d2df5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d2df6:{NFSU2_TR(0x6d2df6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d2df7:{NFSU2_TR(0x6d2df7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d2df8:L6d2df8:{c.instructions+=14;NFSU2_TR(0x6d2df8);
__builtin_memmove((R+28),(R+28),4);
}
B6d2dfa:{NFSU2_TR(0x6d2dfa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2dfb:{NFSU2_TR(0x6d2dfb);
__builtin_memmove((R+20),(R+16),4);
}
B6d2dfd:{NFSU2_TR(0x6d2dfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6d2e00:{NFSU2_TR(0x6d2e00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2e01:{NFSU2_TR(0x6d2e01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2e02:{NFSU2_TR(0x6d2e02);
__builtin_memmove((R+24),(R+4),4);
}
B6d2e04:{NFSU2_TR(0x6d2e04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2e0a:{NFSU2_TR(0x6d2e0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6d2e0c:{NFSU2_TR(0x6d2e0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2e0e:{NFSU2_TR(0x6d2e0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2e0f:{NFSU2_TR(0x6d2e0f);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2e11:{NFSU2_TR(0x6d2e11);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d2e17:{NFSU2_TR(0x6d2e17);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2e1aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2e1a:L6d2e1a:{c.instructions+=3;NFSU2_TR(0x6d2e1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2e1b:{NFSU2_TR(0x6d2e1b);
__builtin_memmove((R+4),(R+24),4);
}
B6d2e1d:{NFSU2_TR(0x6d2e1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2e22ull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6d2e22:L6d2e22:{c.instructions+=2;NFSU2_TR(0x6d2e22);
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
B6d2e24:{NFSU2_TR(0x6d2e24);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2f0e;}}
}
B6d2e2a:L6d2e2a:{c.instructions+=14;NFSU2_TR(0x6d2e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d2e2d:{NFSU2_TR(0x6d2e2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2e2f:{NFSU2_TR(0x6d2e2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2e32:{NFSU2_TR(0x6d2e32);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2e33:{NFSU2_TR(0x6d2e33);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2e36:{NFSU2_TR(0x6d2e36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2e37:{NFSU2_TR(0x6d2e37);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2e3a:{NFSU2_TR(0x6d2e3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2e3b:{NFSU2_TR(0x6d2e3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2e41:{NFSU2_TR(0x6d2e41);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2e44:{NFSU2_TR(0x6d2e44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d2e46:{NFSU2_TR(0x6d2e46);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d2e49:{NFSU2_TR(0x6d2e49);
__builtin_memmove((R+4),(R+24),4);
}
B6d2e4b:{NFSU2_TR(0x6d2e4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2e4eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2e4e:L6d2e4e:{c.instructions+=2;NFSU2_TR(0x6d2e4e);
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
B6d2e50:{NFSU2_TR(0x6d2e50);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2f0e;}}
}
B6d2e56:L6d2e56:{c.instructions+=9;NFSU2_TR(0x6d2e56);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2e59:{NFSU2_TR(0x6d2e59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2e5b:{NFSU2_TR(0x6d2e5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2e5e:{NFSU2_TR(0x6d2e5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2e5f:{NFSU2_TR(0x6d2e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2e65:{NFSU2_TR(0x6d2e65);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2e66:{NFSU2_TR(0x6d2e66);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2e69:{NFSU2_TR(0x6d2e69);
__builtin_memmove((R+4),(R+24),4);
}
B6d2e6b:{NFSU2_TR(0x6d2e6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2e6eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2e6e:L6d2e6e:{c.instructions+=2;NFSU2_TR(0x6d2e6e);
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
B6d2e70:{NFSU2_TR(0x6d2e70);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2f0e;}}
}
B6d2e76:L6d2e76:{c.instructions+=6;NFSU2_TR(0x6d2e76);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2e79:{NFSU2_TR(0x6d2e79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2e7b:{NFSU2_TR(0x6d2e7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2e7e:{NFSU2_TR(0x6d2e7e);
__builtin_memmove((R+4),(R+24),4);
}
B6d2e80:{NFSU2_TR(0x6d2e80);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2e83:{NFSU2_TR(0x6d2e83);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2e86ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2e86:L6d2e86:{c.instructions+=2;NFSU2_TR(0x6d2e86);
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
B6d2e88:{NFSU2_TR(0x6d2e88);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2f0e;}}
}
B6d2e8e:L6d2e8e:{c.instructions+=2;NFSU2_TR(0x6d2e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d2e92:{NFSU2_TR(0x6d2e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d2e96:L6d2e96:{c.instructions+=13;NFSU2_TR(0x6d2e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2e9c:{NFSU2_TR(0x6d2e9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d2e9f:{NFSU2_TR(0x6d2e9f);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d2ea2:{NFSU2_TR(0x6d2ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d2ea5:{NFSU2_TR(0x6d2ea5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2ea7:{NFSU2_TR(0x6d2ea7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2eaa:{NFSU2_TR(0x6d2eaa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2eab:{NFSU2_TR(0x6d2eab);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2eae:{NFSU2_TR(0x6d2eae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2eaf:{NFSU2_TR(0x6d2eaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d2eb1:{NFSU2_TR(0x6d2eb1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d2eb4:{NFSU2_TR(0x6d2eb4);
__builtin_memmove((R+4),(R+24),4);
}
B6d2eb6:{NFSU2_TR(0x6d2eb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2eb9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2eb9:L6d2eb9:{c.instructions+=2;NFSU2_TR(0x6d2eb9);
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
B6d2ebb:{NFSU2_TR(0x6d2ebb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2f0e;}}
}
B6d2ebd:L6d2ebd:{c.instructions+=8;NFSU2_TR(0x6d2ebd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2ebf:{NFSU2_TR(0x6d2ebf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2ec2:{NFSU2_TR(0x6d2ec2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2ec3:{NFSU2_TR(0x6d2ec3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2ec6:{NFSU2_TR(0x6d2ec6);
__builtin_memmove((R+4),(R+24),4);
}
B6d2ec8:{NFSU2_TR(0x6d2ec8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2ec9:{NFSU2_TR(0x6d2ec9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2eca:{NFSU2_TR(0x6d2eca);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2ecdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2ecd:L6d2ecd:{c.instructions+=2;NFSU2_TR(0x6d2ecd);
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
B6d2ecf:{NFSU2_TR(0x6d2ecf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2f0e;}}
}
B6d2ed1:L6d2ed1:{c.instructions+=6;NFSU2_TR(0x6d2ed1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2ed4:{NFSU2_TR(0x6d2ed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2ed6:{NFSU2_TR(0x6d2ed6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2ed9:{NFSU2_TR(0x6d2ed9);
__builtin_memmove((R+4),(R+24),4);
}
B6d2edb:{NFSU2_TR(0x6d2edb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2ede:{NFSU2_TR(0x6d2ede);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2ee1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2ee1:L6d2ee1:{c.instructions+=2;NFSU2_TR(0x6d2ee1);
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
B6d2ee3:{NFSU2_TR(0x6d2ee3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2f0e;}}
}
B6d2ee5:L6d2ee5:{c.instructions+=6;NFSU2_TR(0x6d2ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d2ee8:{NFSU2_TR(0x6d2ee8);
__builtin_memmove((R+0),(R+12),4);
}
B6d2eea:{NFSU2_TR(0x6d2eea);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d2eed:{NFSU2_TR(0x6d2eed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d2ef0:{NFSU2_TR(0x6d2ef0);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d2ef4:{NFSU2_TR(0x6d2ef4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d2e96u);}goto L6d2e96;}}
}
B6d2ef6:L6d2ef6:{c.instructions+=3;NFSU2_TR(0x6d2ef6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2ef8:{NFSU2_TR(0x6d2ef8);
__builtin_memmove((R+4),(R+24),4);
}
B6d2efa:{NFSU2_TR(0x6d2efa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2efdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2efd:L6d2efd:{c.instructions+=2;NFSU2_TR(0x6d2efd);
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
B6d2eff:{NFSU2_TR(0x6d2eff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2f0e;}}
}
B6d2f01:L6d2f01:{c.instructions+=2;NFSU2_TR(0x6d2f01);
__builtin_memmove((R+4),(R+24),4);
}
B6d2f03:{NFSU2_TR(0x6d2f03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2f08ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d2f08:L6d2f08:{c.instructions+=2;NFSU2_TR(0x6d2f08);
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
B6d2f0a:{NFSU2_TR(0x6d2f0a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2f0e;}}
}
B6d2f0c:L6d2f0c:{c.instructions+=1;NFSU2_TR(0x6d2f0c);
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
B6d2f0e:L6d2f0e:{c.instructions+=5;NFSU2_TR(0x6d2f0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d2f0f:{NFSU2_TR(0x6d2f0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d2f10:{NFSU2_TR(0x6d2f10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d2f11:{NFSU2_TR(0x6d2f11);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d2f12:{NFSU2_TR(0x6d2f12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d2f13:L6d2f13:{c.instructions+=20;NFSU2_TR(0x6d2f13);
__builtin_memmove((R+28),(R+28),4);
}
B6d2f15:{NFSU2_TR(0x6d2f15);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f16:{NFSU2_TR(0x6d2f16);
__builtin_memmove((R+20),(R+16),4);
}
B6d2f18:{NFSU2_TR(0x6d2f18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6d2f1b:{NFSU2_TR(0x6d2f1b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f1c:{NFSU2_TR(0x6d2f1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f1d:{NFSU2_TR(0x6d2f1d);
__builtin_memmove((R+24),(R+4),4);
}
B6d2f1f:{NFSU2_TR(0x6d2f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2f25:{NFSU2_TR(0x6d2f25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d2f28:{NFSU2_TR(0x6d2f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d2f2b:{NFSU2_TR(0x6d2f2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f2c:{NFSU2_TR(0x6d2f2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6d2f2e:{NFSU2_TR(0x6d2f2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2f30:{NFSU2_TR(0x6d2f30);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d2f33:{NFSU2_TR(0x6d2f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d2f39:{NFSU2_TR(0x6d2f39);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6d2f3f:{NFSU2_TR(0x6d2f3f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6d2f41:{NFSU2_TR(0x6d2f41);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d2f44:{NFSU2_TR(0x6d2f44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d2f47:{NFSU2_TR(0x6d2f47);
if(r1(R+518)){{goto L6d2f6c;}}
}
B6d2f49:L6d2f49:{c.instructions+=9;NFSU2_TR(0x6d2f49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2f4b:{NFSU2_TR(0x6d2f4b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f4c:{NFSU2_TR(0x6d2f4c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f4d:{NFSU2_TR(0x6d2f4d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f4e:{NFSU2_TR(0x6d2f4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2f51:{NFSU2_TR(0x6d2f51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f52:{NFSU2_TR(0x6d2f52);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2f58:{NFSU2_TR(0x6d2f58);
__builtin_memmove((R+4),(R+24),4);
}
B6d2f5a:{NFSU2_TR(0x6d2f5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2f60ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2f60:L6d2f60:{c.instructions+=2;NFSU2_TR(0x6d2f60);
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
B6d2f62:{NFSU2_TR(0x6d2f62);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2fb4;}}
}
B6d2f64:L6d2f64:{c.instructions+=3;NFSU2_TR(0x6d2f64);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d2f67:{NFSU2_TR(0x6d2f67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d2f6a:{NFSU2_TR(0x6d2f6a);
__builtin_memmove((R+4),(R+0),4);
}
B6d2f6c:L6d2f6c:{c.instructions+=14;NFSU2_TR(0x6d2f6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2f72:{NFSU2_TR(0x6d2f72);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f73:{NFSU2_TR(0x6d2f73);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f74:{NFSU2_TR(0x6d2f74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f75:{NFSU2_TR(0x6d2f75);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f76:{NFSU2_TR(0x6d2f76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f77:{NFSU2_TR(0x6d2f77);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f78:{NFSU2_TR(0x6d2f78);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f79:{NFSU2_TR(0x6d2f79);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2f7c:{NFSU2_TR(0x6d2f7c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f7d:{NFSU2_TR(0x6d2f7d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f7e:{NFSU2_TR(0x6d2f7e);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f80:{NFSU2_TR(0x6d2f80);
__builtin_memmove((R+4),(R+24),4);
}
B6d2f82:{NFSU2_TR(0x6d2f82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2f87ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6d2f87:L6d2f87:{c.instructions+=2;NFSU2_TR(0x6d2f87);
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
B6d2f89:{NFSU2_TR(0x6d2f89);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2fb4;}}
}
B6d2f8b:L6d2f8b:{c.instructions+=3;NFSU2_TR(0x6d2f8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d2f8e:{NFSU2_TR(0x6d2f8e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d2f91:{NFSU2_TR(0x6d2f91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d2fb2;}}
}
B6d2f93:L6d2f93:{c.instructions+=14;NFSU2_TR(0x6d2f93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f94:{NFSU2_TR(0x6d2f94);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f95:{NFSU2_TR(0x6d2f95);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f96:{NFSU2_TR(0x6d2f96);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f97:{NFSU2_TR(0x6d2f97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f98:{NFSU2_TR(0x6d2f98);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f99:{NFSU2_TR(0x6d2f99);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f9a:{NFSU2_TR(0x6d2f9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2f9b:{NFSU2_TR(0x6d2f9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2fa1:{NFSU2_TR(0x6d2fa1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2fa2:{NFSU2_TR(0x6d2fa2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d2fa5:{NFSU2_TR(0x6d2fa5);
__builtin_memmove((R+4),(R+24),4);
}
B6d2fa7:{NFSU2_TR(0x6d2fa7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2fa9:{NFSU2_TR(0x6d2fa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2faeull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6d2fae:L6d2fae:{c.instructions+=2;NFSU2_TR(0x6d2fae);
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
B6d2fb0:{NFSU2_TR(0x6d2fb0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d2fb4;}}
}
B6d2fb2:L6d2fb2:{c.instructions+=1;NFSU2_TR(0x6d2fb2);
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
B6d2fb4:L6d2fb4:{c.instructions+=5;NFSU2_TR(0x6d2fb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d2fb5:{NFSU2_TR(0x6d2fb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d2fb6:{NFSU2_TR(0x6d2fb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d2fb7:{NFSU2_TR(0x6d2fb7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d2fb8:{NFSU2_TR(0x6d2fb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d2fb9:L6d2fb9:{c.instructions+=14;NFSU2_TR(0x6d2fb9);
__builtin_memmove((R+28),(R+28),4);
}
B6d2fbb:{NFSU2_TR(0x6d2fbb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2fbc:{NFSU2_TR(0x6d2fbc);
__builtin_memmove((R+20),(R+16),4);
}
B6d2fbe:{NFSU2_TR(0x6d2fbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6d2fc1:{NFSU2_TR(0x6d2fc1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2fc2:{NFSU2_TR(0x6d2fc2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2fc3:{NFSU2_TR(0x6d2fc3);
__builtin_memmove((R+24),(R+4),4);
}
B6d2fc5:{NFSU2_TR(0x6d2fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d2fcb:{NFSU2_TR(0x6d2fcb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2fcc:{NFSU2_TR(0x6d2fcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6d2fce:{NFSU2_TR(0x6d2fce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2fd0:{NFSU2_TR(0x6d2fd0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2fd2:{NFSU2_TR(0x6d2fd2);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d2fd8:{NFSU2_TR(0x6d2fd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2fdbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d2fdb:L6d2fdb:{c.instructions+=3;NFSU2_TR(0x6d2fdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2fdc:{NFSU2_TR(0x6d2fdc);
__builtin_memmove((R+4),(R+24),4);
}
B6d2fde:{NFSU2_TR(0x6d2fde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d2fe3ull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6d2fe3:L6d2fe3:{c.instructions+=2;NFSU2_TR(0x6d2fe3);
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
B6d2fe5:{NFSU2_TR(0x6d2fe5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6d30f2u,6d3);}
}
B6d2feb:L6d2feb:{c.instructions+=9;NFSU2_TR(0x6d2feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d2fee:{NFSU2_TR(0x6d2fee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d2ff0:{NFSU2_TR(0x6d2ff0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2ff3:{NFSU2_TR(0x6d2ff3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2ff4:{NFSU2_TR(0x6d2ff4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2ff7:{NFSU2_TR(0x6d2ff7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2ff8:{NFSU2_TR(0x6d2ff8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d2ffb:{NFSU2_TR(0x6d2ffb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d2ffc:{NFSU2_TR(0x6d2ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x6d3002u,6d3);
}
XIT:NFSU2_TR_EXIT(0x6d2,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
