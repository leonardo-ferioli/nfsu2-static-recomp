#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4a2(u8* __restrict R,Cpu& c);
u32 body_4d3(u8* __restrict R,Cpu& c);
u32 body_4d4(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4df(u8* __restrict R,Cpu& c);
u32 body_4e2(u8* __restrict R,Cpu& c);
u32 body_4e6(u8* __restrict R,Cpu& c);
u32 body_4e7(u8* __restrict R,Cpu& c);
u32 body_4e8(u8* __restrict R,Cpu& c);
u32 body_4f1(u8* __restrict R,Cpu& c);
u32 body_4f3(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_58d(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_740(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4f2,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4f2,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4f2(u8* __restrict R,Cpu& c);
u32 page_4f2(Cpu& c){return body_4f2(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4f2(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4f2000:goto L4f2000;
case 0x4f2006:c.instructions+=3;goto B4f2006;
case 0x4f2008:c.instructions+=2;goto B4f2008;
case 0x4f200a:c.instructions+=1;goto B4f200a;
case 0x4f200f:goto L4f200f;
case 0x4f2011:c.instructions+=3;goto B4f2011;
case 0x4f2013:c.instructions+=2;goto B4f2013;
case 0x4f2015:c.instructions+=1;goto B4f2015;
case 0x4f201a:goto L4f201a;
case 0x4f201b:c.instructions+=1;goto B4f201b;
case 0x4f201e:goto L4f201e;
case 0x4f2020:c.instructions+=2;goto B4f2020;
case 0x4f2022:c.instructions+=1;goto B4f2022;
case 0x4f2027:goto L4f2027;
case 0x4f2028:c.instructions+=1;goto B4f2028;
case 0x4f202b:goto L4f202b;
case 0x4f2031:c.instructions+=1;goto B4f2031;
case 0x4f2036:goto L4f2036;
case 0x4f203c:c.instructions+=1;goto B4f203c;
case 0x4f2041:goto L4f2041;
case 0x4f2047:c.instructions+=2;goto B4f2047;
case 0x4f2048:c.instructions+=1;goto B4f2048;
case 0x4f204d:goto L4f204d;
case 0x4f2050:c.instructions+=2;goto B4f2050;
case 0x4f2052:c.instructions+=1;goto B4f2052;
case 0x4f2054:goto L4f2054;
case 0x4f2057:c.instructions+=5;goto B4f2057;
case 0x4f2059:c.instructions+=4;goto B4f2059;
case 0x4f205e:c.instructions+=3;goto B4f205e;
case 0x4f2063:c.instructions+=2;goto B4f2063;
case 0x4f2064:c.instructions+=1;goto B4f2064;
case 0x4f2069:goto L4f2069;
case 0x4f206c:c.instructions+=3;goto B4f206c;
case 0x4f206d:c.instructions+=2;goto B4f206d;
case 0x4f2072:c.instructions+=1;goto B4f2072;
case 0x4f2077:goto L4f2077;
case 0x4f207a:c.instructions+=2;goto B4f207a;
case 0x4f207b:c.instructions+=1;goto B4f207b;
case 0x4f207e:goto L4f207e;
case 0x4f2084:c.instructions+=2;goto B4f2084;
case 0x4f2085:c.instructions+=1;goto B4f2085;
case 0x4f208a:goto L4f208a;
case 0x4f208d:c.instructions+=2;goto B4f208d;
case 0x4f208f:c.instructions+=1;goto B4f208f;
case 0x4f2091:goto L4f2091;
case 0x4f2094:c.instructions+=5;goto B4f2094;
case 0x4f2096:c.instructions+=4;goto B4f2096;
case 0x4f209b:c.instructions+=3;goto B4f209b;
case 0x4f20a0:c.instructions+=2;goto B4f20a0;
case 0x4f20a1:c.instructions+=1;goto B4f20a1;
case 0x4f20a6:goto L4f20a6;
case 0x4f20a9:c.instructions+=3;goto B4f20a9;
case 0x4f20aa:c.instructions+=2;goto B4f20aa;
case 0x4f20af:c.instructions+=1;goto B4f20af;
case 0x4f20b4:goto L4f20b4;
case 0x4f20b7:c.instructions+=2;goto B4f20b7;
case 0x4f20b8:c.instructions+=1;goto B4f20b8;
case 0x4f20bb:goto L4f20bb;
case 0x4f20c1:c.instructions+=2;goto B4f20c1;
case 0x4f20c2:c.instructions+=1;goto B4f20c2;
case 0x4f20c7:goto L4f20c7;
case 0x4f20ca:c.instructions+=2;goto B4f20ca;
case 0x4f20cc:c.instructions+=1;goto B4f20cc;
case 0x4f20ce:goto L4f20ce;
case 0x4f20d1:c.instructions+=5;goto B4f20d1;
case 0x4f20d3:c.instructions+=4;goto B4f20d3;
case 0x4f20d8:c.instructions+=3;goto B4f20d8;
case 0x4f20dd:c.instructions+=2;goto B4f20dd;
case 0x4f20de:c.instructions+=1;goto B4f20de;
case 0x4f20e3:goto L4f20e3;
case 0x4f20e6:c.instructions+=3;goto B4f20e6;
case 0x4f20e7:c.instructions+=2;goto B4f20e7;
case 0x4f20ec:c.instructions+=1;goto B4f20ec;
case 0x4f20f1:goto L4f20f1;
case 0x4f20f4:c.instructions+=2;goto B4f20f4;
case 0x4f20f5:c.instructions+=1;goto B4f20f5;
case 0x4f20f8:goto L4f20f8;
case 0x4f20fe:c.instructions+=2;goto B4f20fe;
case 0x4f20ff:c.instructions+=1;goto B4f20ff;
case 0x4f2104:goto L4f2104;
case 0x4f2107:c.instructions+=2;goto B4f2107;
case 0x4f2109:c.instructions+=1;goto B4f2109;
case 0x4f210b:goto L4f210b;
case 0x4f210e:c.instructions+=5;goto B4f210e;
case 0x4f2110:c.instructions+=4;goto B4f2110;
case 0x4f2115:c.instructions+=3;goto B4f2115;
case 0x4f211a:c.instructions+=2;goto B4f211a;
case 0x4f211b:c.instructions+=1;goto B4f211b;
case 0x4f2120:goto L4f2120;
case 0x4f2123:c.instructions+=3;goto B4f2123;
case 0x4f2124:c.instructions+=2;goto B4f2124;
case 0x4f2129:c.instructions+=1;goto B4f2129;
case 0x4f212e:goto L4f212e;
case 0x4f2131:c.instructions+=2;goto B4f2131;
case 0x4f2132:c.instructions+=1;goto B4f2132;
case 0x4f2135:goto L4f2135;
case 0x4f213b:c.instructions+=2;goto B4f213b;
case 0x4f213c:c.instructions+=1;goto B4f213c;
case 0x4f2141:goto L4f2141;
case 0x4f2144:c.instructions+=2;goto B4f2144;
case 0x4f2146:c.instructions+=1;goto B4f2146;
case 0x4f2148:goto L4f2148;
case 0x4f214b:c.instructions+=5;goto B4f214b;
case 0x4f214d:c.instructions+=4;goto B4f214d;
case 0x4f2152:c.instructions+=3;goto B4f2152;
case 0x4f2157:c.instructions+=2;goto B4f2157;
case 0x4f2158:c.instructions+=1;goto B4f2158;
case 0x4f215d:goto L4f215d;
case 0x4f2160:c.instructions+=3;goto B4f2160;
case 0x4f2161:c.instructions+=2;goto B4f2161;
case 0x4f2166:c.instructions+=1;goto B4f2166;
case 0x4f216b:goto L4f216b;
case 0x4f216e:c.instructions+=2;goto B4f216e;
case 0x4f216f:c.instructions+=1;goto B4f216f;
case 0x4f2172:goto L4f2172;
case 0x4f2178:c.instructions+=2;goto B4f2178;
case 0x4f2179:c.instructions+=1;goto B4f2179;
case 0x4f217e:goto L4f217e;
case 0x4f2181:c.instructions+=2;goto B4f2181;
case 0x4f2183:c.instructions+=1;goto B4f2183;
case 0x4f2185:goto L4f2185;
case 0x4f2188:c.instructions+=5;goto B4f2188;
case 0x4f218a:c.instructions+=4;goto B4f218a;
case 0x4f218f:c.instructions+=3;goto B4f218f;
case 0x4f2194:c.instructions+=2;goto B4f2194;
case 0x4f2195:c.instructions+=1;goto B4f2195;
case 0x4f219a:goto L4f219a;
case 0x4f219d:c.instructions+=3;goto B4f219d;
case 0x4f219e:c.instructions+=2;goto B4f219e;
case 0x4f21a3:c.instructions+=1;goto B4f21a3;
case 0x4f21a8:goto L4f21a8;
case 0x4f21ab:c.instructions+=2;goto B4f21ab;
case 0x4f21ac:c.instructions+=1;goto B4f21ac;
case 0x4f21af:goto L4f21af;
case 0x4f21b5:c.instructions+=2;goto B4f21b5;
case 0x4f21b8:c.instructions+=1;goto B4f21b8;
case 0x4f21ba:goto L4f21ba;
case 0x4f21bd:c.instructions+=1;goto B4f21bd;
case 0x4f21bf:goto L4f21bf;
case 0x4f21c2:c.instructions+=3;goto B4f21c2;
case 0x4f21c3:c.instructions+=2;goto B4f21c3;
case 0x4f21c8:c.instructions+=1;goto B4f21c8;
case 0x4f21ca:goto L4f21ca;
case 0x4f21cd:c.instructions+=2;goto B4f21cd;
case 0x4f21ce:c.instructions+=1;goto B4f21ce;
case 0x4f21d3:goto L4f21d3;
case 0x4f21d8:goto L4f21d8;
case 0x4f21db:goto L4f21db;
case 0x4f21e1:c.instructions+=1;goto B4f21e1;
case 0x4f21e6:goto L4f21e6;
case 0x4f21ec:c.instructions+=2;goto B4f21ec;
case 0x4f21ef:c.instructions+=1;goto B4f21ef;
case 0x4f21f1:goto L4f21f1;
case 0x4f21f4:c.instructions+=1;goto B4f21f4;
case 0x4f21f6:goto L4f21f6;
case 0x4f21f9:c.instructions+=3;goto B4f21f9;
case 0x4f21fa:c.instructions+=2;goto B4f21fa;
case 0x4f21ff:c.instructions+=1;goto B4f21ff;
case 0x4f2201:goto L4f2201;
case 0x4f2204:c.instructions+=2;goto B4f2204;
case 0x4f2205:c.instructions+=1;goto B4f2205;
case 0x4f220a:goto L4f220a;
case 0x4f220f:goto L4f220f;
case 0x4f2212:goto L4f2212;
case 0x4f2215:c.instructions+=3;goto B4f2215;
case 0x4f221a:c.instructions+=2;goto B4f221a;
case 0x4f221b:c.instructions+=1;goto B4f221b;
case 0x4f2220:goto L4f2220;
case 0x4f2221:c.instructions+=1;goto B4f2221;
case 0x4f2226:goto L4f2226;
case 0x4f2229:c.instructions+=2;goto B4f2229;
case 0x4f222b:c.instructions+=1;goto B4f222b;
case 0x4f2231:goto L4f2231;
case 0x4f2236:c.instructions+=1;goto B4f2236;
case 0x4f223b:goto L4f223b;
case 0x4f223c:c.instructions+=3;goto B4f223c;
case 0x4f223e:c.instructions+=2;goto B4f223e;
case 0x4f2243:c.instructions+=1;goto B4f2243;
case 0x4f2248:goto L4f2248;
case 0x4f224b:c.instructions+=5;goto B4f224b;
case 0x4f224d:c.instructions+=4;goto B4f224d;
case 0x4f2252:c.instructions+=3;goto B4f2252;
case 0x4f2253:c.instructions+=2;goto B4f2253;
case 0x4f2258:c.instructions+=1;goto B4f2258;
case 0x4f225d:goto L4f225d;
case 0x4f2260:c.instructions+=2;goto B4f2260;
case 0x4f2261:c.instructions+=1;goto B4f2261;
case 0x4f2264:goto L4f2264;
case 0x4f2269:c.instructions+=1;goto B4f2269;
case 0x4f226b:goto L4f226b;
case 0x4f2270:c.instructions+=1;goto B4f2270;
case 0x4f2272:goto L4f2272;
case 0x4f2275:c.instructions+=5;goto B4f2275;
case 0x4f2276:c.instructions+=4;goto B4f2276;
case 0x4f2278:c.instructions+=3;goto B4f2278;
case 0x4f227b:c.instructions+=2;goto B4f227b;
case 0x4f227e:c.instructions+=1;goto B4f227e;
case 0x4f2284:goto L4f2284;
case 0x4f228b:c.instructions+=2;goto B4f228b;
case 0x4f228c:c.instructions+=1;goto B4f228c;
case 0x4f228f:goto L4f228f;
case 0x4f2295:c.instructions+=5;goto B4f2295;
case 0x4f2296:c.instructions+=4;goto B4f2296;
case 0x4f2298:c.instructions+=3;goto B4f2298;
case 0x4f229b:c.instructions+=2;goto B4f229b;
case 0x4f22a1:c.instructions+=1;goto B4f22a1;
case 0x4f22a3:goto L4f22a3;
case 0x4f22ad:goto L4f22ad;
case 0x4f22b3:c.instructions+=4;goto B4f22b3;
case 0x4f22b9:c.instructions+=3;goto B4f22b9;
case 0x4f22bb:c.instructions+=2;goto B4f22bb;
case 0x4f22bd:c.instructions+=1;goto B4f22bd;
case 0x4f22c2:goto L4f22c2;
case 0x4f22c4:c.instructions+=4;goto B4f22c4;
case 0x4f22ca:c.instructions+=3;goto B4f22ca;
case 0x4f22cc:c.instructions+=2;goto B4f22cc;
case 0x4f22ce:c.instructions+=1;goto B4f22ce;
case 0x4f22d3:goto L4f22d3;
case 0x4f22d5:c.instructions+=3;goto B4f22d5;
case 0x4f22d7:c.instructions+=2;goto B4f22d7;
case 0x4f22d9:c.instructions+=1;goto B4f22d9;
case 0x4f22de:goto L4f22de;
case 0x4f22df:c.instructions+=1;goto B4f22df;
case 0x4f22f0:goto L4f22f0;
case 0x4f22f2:c.instructions+=7;goto B4f22f2;
case 0x4f22f7:c.instructions+=6;goto B4f22f7;
case 0x4f22fd:c.instructions+=5;goto B4f22fd;
case 0x4f22fe:c.instructions+=4;goto B4f22fe;
case 0x4f2305:c.instructions+=3;goto B4f2305;
case 0x4f2306:c.instructions+=2;goto B4f2306;
case 0x4f230b:c.instructions+=1;goto B4f230b;
case 0x4f2310:goto L4f2310;
case 0x4f2313:c.instructions+=4;goto B4f2313;
case 0x4f2317:c.instructions+=3;goto B4f2317;
case 0x4f2319:c.instructions+=2;goto B4f2319;
case 0x4f2321:c.instructions+=1;goto B4f2321;
case 0x4f2323:goto L4f2323;
case 0x4f2327:c.instructions+=3;goto B4f2327;
case 0x4f2328:c.instructions+=2;goto B4f2328;
case 0x4f232a:c.instructions+=1;goto B4f232a;
case 0x4f232f:goto L4f232f;
case 0x4f2333:c.instructions+=3;goto B4f2333;
case 0x4f233a:c.instructions+=2;goto B4f233a;
case 0x4f233d:c.instructions+=1;goto B4f233d;
case 0x4f233e:goto L4f233e;
case 0x4f2342:c.instructions+=4;goto B4f2342;
case 0x4f2344:c.instructions+=3;goto B4f2344;
case 0x4f234b:c.instructions+=2;goto B4f234b;
case 0x4f234e:c.instructions+=1;goto B4f234e;
case 0x4f2350:goto L4f2350;
case 0x4f2352:c.instructions+=14;goto B4f2352;
case 0x4f2357:c.instructions+=13;goto B4f2357;
case 0x4f235d:c.instructions+=12;goto B4f235d;
case 0x4f235e:c.instructions+=11;goto B4f235e;
case 0x4f2365:c.instructions+=10;goto B4f2365;
case 0x4f2366:c.instructions+=9;goto B4f2366;
case 0x4f2367:c.instructions+=8;goto B4f2367;
case 0x4f2368:c.instructions+=7;goto B4f2368;
case 0x4f236c:c.instructions+=6;goto B4f236c;
case 0x4f236d:c.instructions+=5;goto B4f236d;
case 0x4f236e:c.instructions+=4;goto B4f236e;
case 0x4f2370:c.instructions+=3;goto B4f2370;
case 0x4f2371:c.instructions+=2;goto B4f2371;
case 0x4f2375:c.instructions+=1;goto B4f2375;
case 0x4f237a:goto L4f237a;
case 0x4f237d:c.instructions+=15;goto B4f237d;
case 0x4f237f:c.instructions+=14;goto B4f237f;
case 0x4f2381:c.instructions+=13;goto B4f2381;
case 0x4f2382:c.instructions+=12;goto B4f2382;
case 0x4f2384:c.instructions+=11;goto B4f2384;
case 0x4f2386:c.instructions+=10;goto B4f2386;
case 0x4f238b:c.instructions+=9;goto B4f238b;
case 0x4f2390:c.instructions+=8;goto B4f2390;
case 0x4f2393:c.instructions+=7;goto B4f2393;
case 0x4f2394:c.instructions+=6;goto B4f2394;
case 0x4f2396:c.instructions+=5;goto B4f2396;
case 0x4f239a:c.instructions+=4;goto B4f239a;
case 0x4f23a0:c.instructions+=3;goto B4f23a0;
case 0x4f23a3:c.instructions+=2;goto B4f23a3;
case 0x4f23a6:c.instructions+=1;goto B4f23a6;
case 0x4f23ab:goto L4f23ab;
case 0x4f23b1:c.instructions+=12;goto B4f23b1;
case 0x4f23b7:c.instructions+=11;goto B4f23b7;
case 0x4f23bd:c.instructions+=10;goto B4f23bd;
case 0x4f23c3:c.instructions+=9;goto B4f23c3;
case 0x4f23c9:c.instructions+=8;goto B4f23c9;
case 0x4f23cf:c.instructions+=7;goto B4f23cf;
case 0x4f23d5:c.instructions+=6;goto B4f23d5;
case 0x4f23db:c.instructions+=5;goto B4f23db;
case 0x4f23e1:c.instructions+=4;goto B4f23e1;
case 0x4f23e4:c.instructions+=3;goto B4f23e4;
case 0x4f23e5:c.instructions+=2;goto B4f23e5;
case 0x4f23ea:c.instructions+=1;goto B4f23ea;
case 0x4f23ef:goto L4f23ef;
case 0x4f23f4:goto L4f23f4;
case 0x4f23fa:c.instructions+=6;goto B4f23fa;
case 0x4f23fc:c.instructions+=5;goto B4f23fc;
case 0x4f2401:c.instructions+=4;goto B4f2401;
case 0x4f2406:c.instructions+=3;goto B4f2406;
case 0x4f240b:c.instructions+=2;goto B4f240b;
case 0x4f2411:c.instructions+=1;goto B4f2411;
case 0x4f2416:goto L4f2416;
case 0x4f2417:c.instructions+=2;goto B4f2417;
case 0x4f241c:c.instructions+=1;goto B4f241c;
case 0x4f2421:goto L4f2421;
case 0x4f2424:c.instructions+=2;goto B4f2424;
case 0x4f2426:c.instructions+=1;goto B4f2426;
case 0x4f242b:goto L4f242b;
case 0x4f242e:c.instructions+=4;goto B4f242e;
case 0x4f2433:c.instructions+=3;goto B4f2433;
case 0x4f2438:c.instructions+=2;goto B4f2438;
case 0x4f243d:c.instructions+=1;goto B4f243d;
case 0x4f2442:goto L4f2442;
case 0x4f2445:c.instructions+=3;goto B4f2445;
case 0x4f2446:c.instructions+=2;goto B4f2446;
case 0x4f2447:c.instructions+=1;goto B4f2447;
case 0x4f244c:goto L4f244c;
case 0x4f244f:c.instructions+=3;goto B4f244f;
case 0x4f2452:c.instructions+=2;goto B4f2452;
case 0x4f2454:c.instructions+=1;goto B4f2454;
case 0x4f2456:goto L4f2456;
case 0x4f2459:c.instructions+=3;goto B4f2459;
case 0x4f245e:c.instructions+=2;goto B4f245e;
case 0x4f245f:c.instructions+=1;goto B4f245f;
case 0x4f2464:goto L4f2464;
case 0x4f2466:c.instructions+=2;goto B4f2466;
case 0x4f2468:c.instructions+=1;goto B4f2468;
case 0x4f246d:goto L4f246d;
case 0x4f246e:c.instructions+=2;goto B4f246e;
case 0x4f2473:c.instructions+=1;goto B4f2473;
case 0x4f2478:goto L4f2478;
case 0x4f2479:c.instructions+=2;goto B4f2479;
case 0x4f247e:c.instructions+=1;goto B4f247e;
case 0x4f2483:goto L4f2483;
case 0x4f2489:c.instructions+=2;goto B4f2489;
case 0x4f248c:c.instructions+=1;goto B4f248c;
case 0x4f2491:goto L4f2491;
case 0x4f2494:c.instructions+=4;goto B4f2494;
case 0x4f2499:c.instructions+=3;goto B4f2499;
case 0x4f24a3:c.instructions+=2;goto B4f24a3;
case 0x4f24aa:c.instructions+=1;goto B4f24aa;
case 0x4f24af:goto L4f24af;
case 0x4f24b0:c.instructions+=2;goto B4f24b0;
case 0x4f24b1:c.instructions+=1;goto B4f24b1;
case 0x4f24b6:goto L4f24b6;
case 0x4f24ba:c.instructions+=10;goto B4f24ba;
case 0x4f24bd:c.instructions+=9;goto B4f24bd;
case 0x4f24c3:c.instructions+=8;goto B4f24c3;
case 0x4f24c4:c.instructions+=7;goto B4f24c4;
case 0x4f24c6:c.instructions+=6;goto B4f24c6;
case 0x4f24c7:c.instructions+=5;goto B4f24c7;
case 0x4f24c8:c.instructions+=4;goto B4f24c8;
case 0x4f24c9:c.instructions+=3;goto B4f24c9;
case 0x4f24d0:c.instructions+=2;goto B4f24d0;
case 0x4f24d3:c.instructions+=1;goto B4f24d3;
case 0x4f24e0:goto L4f24e0;
case 0x4f24e2:c.instructions+=7;goto B4f24e2;
case 0x4f24e7:c.instructions+=6;goto B4f24e7;
case 0x4f24ed:c.instructions+=5;goto B4f24ed;
case 0x4f24ee:c.instructions+=4;goto B4f24ee;
case 0x4f24f5:c.instructions+=3;goto B4f24f5;
case 0x4f24f6:c.instructions+=2;goto B4f24f6;
case 0x4f24fb:c.instructions+=1;goto B4f24fb;
case 0x4f2500:goto L4f2500;
case 0x4f2503:c.instructions+=4;goto B4f2503;
case 0x4f2507:c.instructions+=3;goto B4f2507;
case 0x4f2509:c.instructions+=2;goto B4f2509;
case 0x4f2511:c.instructions+=1;goto B4f2511;
case 0x4f2513:goto L4f2513;
case 0x4f2517:c.instructions+=3;goto B4f2517;
case 0x4f2518:c.instructions+=2;goto B4f2518;
case 0x4f251a:c.instructions+=1;goto B4f251a;
case 0x4f251f:goto L4f251f;
case 0x4f2523:c.instructions+=3;goto B4f2523;
case 0x4f252a:c.instructions+=2;goto B4f252a;
case 0x4f252d:c.instructions+=1;goto B4f252d;
case 0x4f252e:goto L4f252e;
case 0x4f2532:c.instructions+=4;goto B4f2532;
case 0x4f2534:c.instructions+=3;goto B4f2534;
case 0x4f253b:c.instructions+=2;goto B4f253b;
case 0x4f253e:c.instructions+=1;goto B4f253e;
case 0x4f2540:goto L4f2540;
case 0x4f2542:c.instructions+=7;goto B4f2542;
case 0x4f2547:c.instructions+=6;goto B4f2547;
case 0x4f254d:c.instructions+=5;goto B4f254d;
case 0x4f254e:c.instructions+=4;goto B4f254e;
case 0x4f2555:c.instructions+=3;goto B4f2555;
case 0x4f2556:c.instructions+=2;goto B4f2556;
case 0x4f255b:c.instructions+=1;goto B4f255b;
case 0x4f2560:goto L4f2560;
case 0x4f2563:c.instructions+=4;goto B4f2563;
case 0x4f2567:c.instructions+=3;goto B4f2567;
case 0x4f2569:c.instructions+=2;goto B4f2569;
case 0x4f2571:c.instructions+=1;goto B4f2571;
case 0x4f2573:goto L4f2573;
case 0x4f2577:c.instructions+=3;goto B4f2577;
case 0x4f2578:c.instructions+=2;goto B4f2578;
case 0x4f257a:c.instructions+=1;goto B4f257a;
case 0x4f257f:goto L4f257f;
case 0x4f2583:c.instructions+=3;goto B4f2583;
case 0x4f258a:c.instructions+=2;goto B4f258a;
case 0x4f258d:c.instructions+=1;goto B4f258d;
case 0x4f258e:goto L4f258e;
case 0x4f2592:c.instructions+=4;goto B4f2592;
case 0x4f2594:c.instructions+=3;goto B4f2594;
case 0x4f259b:c.instructions+=2;goto B4f259b;
case 0x4f259e:c.instructions+=1;goto B4f259e;
case 0x4f25a0:goto L4f25a0;
case 0x4f25a2:c.instructions+=7;goto B4f25a2;
case 0x4f25a7:c.instructions+=6;goto B4f25a7;
case 0x4f25ad:c.instructions+=5;goto B4f25ad;
case 0x4f25ae:c.instructions+=4;goto B4f25ae;
case 0x4f25b5:c.instructions+=3;goto B4f25b5;
case 0x4f25b6:c.instructions+=2;goto B4f25b6;
case 0x4f25bb:c.instructions+=1;goto B4f25bb;
case 0x4f25c0:goto L4f25c0;
case 0x4f25c3:c.instructions+=4;goto B4f25c3;
case 0x4f25c7:c.instructions+=3;goto B4f25c7;
case 0x4f25c9:c.instructions+=2;goto B4f25c9;
case 0x4f25d1:c.instructions+=1;goto B4f25d1;
case 0x4f25d3:goto L4f25d3;
case 0x4f25d7:c.instructions+=3;goto B4f25d7;
case 0x4f25d8:c.instructions+=2;goto B4f25d8;
case 0x4f25da:c.instructions+=1;goto B4f25da;
case 0x4f25df:goto L4f25df;
case 0x4f25e3:c.instructions+=3;goto B4f25e3;
case 0x4f25ea:c.instructions+=2;goto B4f25ea;
case 0x4f25ed:c.instructions+=1;goto B4f25ed;
case 0x4f25ee:goto L4f25ee;
case 0x4f25f2:c.instructions+=4;goto B4f25f2;
case 0x4f25f4:c.instructions+=3;goto B4f25f4;
case 0x4f25fb:c.instructions+=2;goto B4f25fb;
case 0x4f25fe:c.instructions+=1;goto B4f25fe;
case 0x4f2600:goto L4f2600;
case 0x4f2602:c.instructions+=12;goto B4f2602;
case 0x4f2607:c.instructions+=11;goto B4f2607;
case 0x4f260d:c.instructions+=10;goto B4f260d;
case 0x4f260e:c.instructions+=9;goto B4f260e;
case 0x4f2615:c.instructions+=8;goto B4f2615;
case 0x4f2616:c.instructions+=7;goto B4f2616;
case 0x4f261a:c.instructions+=6;goto B4f261a;
case 0x4f261b:c.instructions+=5;goto B4f261b;
case 0x4f261c:c.instructions+=4;goto B4f261c;
case 0x4f261e:c.instructions+=3;goto B4f261e;
case 0x4f261f:c.instructions+=2;goto B4f261f;
case 0x4f2623:c.instructions+=1;goto B4f2623;
case 0x4f2628:goto L4f2628;
case 0x4f262a:c.instructions+=6;goto B4f262a;
case 0x4f262d:c.instructions+=5;goto B4f262d;
case 0x4f2631:c.instructions+=4;goto B4f2631;
case 0x4f2637:c.instructions+=3;goto B4f2637;
case 0x4f263a:c.instructions+=2;goto B4f263a;
case 0x4f263d:c.instructions+=1;goto B4f263d;
case 0x4f2642:goto L4f2642;
case 0x4f2648:c.instructions+=2;goto B4f2648;
case 0x4f264d:c.instructions+=1;goto B4f264d;
case 0x4f2652:goto L4f2652;
case 0x4f2658:c.instructions+=2;goto B4f2658;
case 0x4f265d:c.instructions+=1;goto B4f265d;
case 0x4f2662:goto L4f2662;
case 0x4f2669:c.instructions+=10;goto B4f2669;
case 0x4f266f:c.instructions+=9;goto B4f266f;
case 0x4f2676:c.instructions+=8;goto B4f2676;
case 0x4f267c:c.instructions+=7;goto B4f267c;
case 0x4f2682:c.instructions+=6;goto B4f2682;
case 0x4f2685:c.instructions+=5;goto B4f2685;
case 0x4f268a:c.instructions+=4;goto B4f268a;
case 0x4f268b:c.instructions+=3;goto B4f268b;
case 0x4f2690:c.instructions+=2;goto B4f2690;
case 0x4f2696:c.instructions+=1;goto B4f2696;
case 0x4f269b:goto L4f269b;
case 0x4f269c:c.instructions+=1;goto B4f269c;
case 0x4f26a1:goto L4f26a1;
case 0x4f26a4:c.instructions+=4;goto B4f26a4;
case 0x4f26a9:c.instructions+=3;goto B4f26a9;
case 0x4f26ae:c.instructions+=2;goto B4f26ae;
case 0x4f26af:c.instructions+=1;goto B4f26af;
case 0x4f26b4:goto L4f26b4;
case 0x4f26b7:c.instructions+=2;goto B4f26b7;
case 0x4f26b9:c.instructions+=1;goto B4f26b9;
case 0x4f26be:goto L4f26be;
case 0x4f26c0:c.instructions+=1;goto B4f26c0;
case 0x4f26c5:goto L4f26c5;
case 0x4f26c9:c.instructions+=4;goto B4f26c9;
case 0x4f26ce:c.instructions+=3;goto B4f26ce;
case 0x4f26cf:c.instructions+=2;goto B4f26cf;
case 0x4f26d0:c.instructions+=1;goto B4f26d0;
case 0x4f26d5:goto L4f26d5;
case 0x4f26d9:c.instructions+=7;goto B4f26d9;
case 0x4f26dc:c.instructions+=6;goto B4f26dc;
case 0x4f26de:c.instructions+=5;goto B4f26de;
case 0x4f26df:c.instructions+=4;goto B4f26df;
case 0x4f26e0:c.instructions+=3;goto B4f26e0;
case 0x4f26e7:c.instructions+=2;goto B4f26e7;
case 0x4f26ea:c.instructions+=1;goto B4f26ea;
case 0x4f26f0:goto L4f26f0;
case 0x4f26f2:c.instructions+=11;goto B4f26f2;
case 0x4f26f7:c.instructions+=10;goto B4f26f7;
case 0x4f26fd:c.instructions+=9;goto B4f26fd;
case 0x4f26fe:c.instructions+=8;goto B4f26fe;
case 0x4f2705:c.instructions+=7;goto B4f2705;
case 0x4f2706:c.instructions+=6;goto B4f2706;
case 0x4f270a:c.instructions+=5;goto B4f270a;
case 0x4f270b:c.instructions+=4;goto B4f270b;
case 0x4f270d:c.instructions+=3;goto B4f270d;
case 0x4f270e:c.instructions+=2;goto B4f270e;
case 0x4f2712:c.instructions+=1;goto B4f2712;
case 0x4f2717:goto L4f2717;
case 0x4f2719:c.instructions+=8;goto B4f2719;
case 0x4f271f:c.instructions+=7;goto B4f271f;
case 0x4f2725:c.instructions+=6;goto B4f2725;
case 0x4f272b:c.instructions+=5;goto B4f272b;
case 0x4f272c:c.instructions+=4;goto B4f272c;
case 0x4f272d:c.instructions+=3;goto B4f272d;
case 0x4f2731:c.instructions+=2;goto B4f2731;
case 0x4f2736:c.instructions+=1;goto B4f2736;
case 0x4f273b:goto L4f273b;
case 0x4f273e:c.instructions+=2;goto B4f273e;
case 0x4f2740:c.instructions+=1;goto B4f2740;
case 0x4f2745:goto L4f2745;
case 0x4f2749:c.instructions+=5;goto B4f2749;
case 0x4f274b:c.instructions+=4;goto B4f274b;
case 0x4f274c:c.instructions+=3;goto B4f274c;
case 0x4f2753:c.instructions+=2;goto B4f2753;
case 0x4f2756:c.instructions+=1;goto B4f2756;
case 0x4f2760:goto L4f2760;
case 0x4f2761:c.instructions+=2;goto B4f2761;
case 0x4f2763:c.instructions+=1;goto B4f2763;
case 0x4f2768:goto L4f2768;
case 0x4f276d:c.instructions+=1;goto B4f276d;
case 0x4f276f:goto L4f276f;
case 0x4f2770:c.instructions+=1;goto B4f2770;
case 0x4f2775:goto L4f2775;
case 0x4f2778:goto L4f2778;
case 0x4f277a:c.instructions+=2;goto B4f277a;
case 0x4f277b:c.instructions+=1;goto B4f277b;
case 0x4f2780:goto L4f2780;
case 0x4f2782:c.instructions+=14;goto B4f2782;
case 0x4f2787:c.instructions+=13;goto B4f2787;
case 0x4f278d:c.instructions+=12;goto B4f278d;
case 0x4f278e:c.instructions+=11;goto B4f278e;
case 0x4f2795:c.instructions+=10;goto B4f2795;
case 0x4f2796:c.instructions+=9;goto B4f2796;
case 0x4f2797:c.instructions+=8;goto B4f2797;
case 0x4f2799:c.instructions+=7;goto B4f2799;
case 0x4f279d:c.instructions+=6;goto B4f279d;
case 0x4f27a3:c.instructions+=5;goto B4f27a3;
case 0x4f27a8:c.instructions+=4;goto B4f27a8;
case 0x4f27aa:c.instructions+=3;goto B4f27aa;
case 0x4f27ab:c.instructions+=2;goto B4f27ab;
case 0x4f27b3:c.instructions+=1;goto B4f27b3;
case 0x4f27b8:goto L4f27b8;
case 0x4f27bb:c.instructions+=3;goto B4f27bb;
case 0x4f27bd:c.instructions+=2;goto B4f27bd;
case 0x4f27c5:c.instructions+=1;goto B4f27c5;
case 0x4f27ca:goto L4f27ca;
case 0x4f27ce:c.instructions+=4;goto B4f27ce;
case 0x4f27cf:c.instructions+=3;goto B4f27cf;
case 0x4f27d6:c.instructions+=2;goto B4f27d6;
case 0x4f27d9:c.instructions+=1;goto B4f27d9;
case 0x4f27e0:goto L4f27e0;
case 0x4f27e2:c.instructions+=7;goto B4f27e2;
case 0x4f27e7:c.instructions+=6;goto B4f27e7;
case 0x4f27ed:c.instructions+=5;goto B4f27ed;
case 0x4f27ee:c.instructions+=4;goto B4f27ee;
case 0x4f27f5:c.instructions+=3;goto B4f27f5;
case 0x4f27f6:c.instructions+=2;goto B4f27f6;
case 0x4f27fb:c.instructions+=1;goto B4f27fb;
case 0x4f2800:goto L4f2800;
case 0x4f2803:c.instructions+=4;goto B4f2803;
case 0x4f2807:c.instructions+=3;goto B4f2807;
case 0x4f2809:c.instructions+=2;goto B4f2809;
case 0x4f2811:c.instructions+=1;goto B4f2811;
case 0x4f2813:goto L4f2813;
case 0x4f2817:c.instructions+=3;goto B4f2817;
case 0x4f2818:c.instructions+=2;goto B4f2818;
case 0x4f281a:c.instructions+=1;goto B4f281a;
case 0x4f281f:goto L4f281f;
case 0x4f2823:c.instructions+=3;goto B4f2823;
case 0x4f282a:c.instructions+=2;goto B4f282a;
case 0x4f282d:c.instructions+=1;goto B4f282d;
case 0x4f282e:goto L4f282e;
case 0x4f2832:c.instructions+=4;goto B4f2832;
case 0x4f2834:c.instructions+=3;goto B4f2834;
case 0x4f283b:c.instructions+=2;goto B4f283b;
case 0x4f283e:c.instructions+=1;goto B4f283e;
case 0x4f2840:goto L4f2840;
case 0x4f2841:c.instructions+=9;goto B4f2841;
case 0x4f2843:c.instructions+=8;goto B4f2843;
case 0x4f2846:c.instructions+=7;goto B4f2846;
case 0x4f284c:c.instructions+=6;goto B4f284c;
case 0x4f284f:c.instructions+=5;goto B4f284f;
case 0x4f2854:c.instructions+=4;goto B4f2854;
case 0x4f2855:c.instructions+=3;goto B4f2855;
case 0x4f2856:c.instructions+=2;goto B4f2856;
case 0x4f2858:c.instructions+=1;goto B4f2858;
case 0x4f285e:goto L4f285e;
case 0x4f2864:goto L4f2864;
case 0x4f2869:c.instructions+=1;goto B4f2869;
case 0x4f286f:goto L4f286f;
case 0x4f2875:goto L4f2875;
case 0x4f287a:c.instructions+=1;goto B4f287a;
case 0x4f287c:goto L4f287c;
case 0x4f2881:c.instructions+=1;goto B4f2881;
case 0x4f2887:goto L4f2887;
case 0x4f288a:c.instructions+=5;goto B4f288a;
case 0x4f288c:c.instructions+=4;goto B4f288c;
case 0x4f2891:c.instructions+=3;goto B4f2891;
case 0x4f2896:c.instructions+=2;goto B4f2896;
case 0x4f2897:c.instructions+=1;goto B4f2897;
case 0x4f289c:goto L4f289c;
case 0x4f289f:c.instructions+=5;goto B4f289f;
case 0x4f28a0:c.instructions+=4;goto B4f28a0;
case 0x4f28a1:c.instructions+=3;goto B4f28a1;
case 0x4f28a3:c.instructions+=2;goto B4f28a3;
case 0x4f28a4:c.instructions+=1;goto B4f28a4;
case 0x4f28a7:goto L4f28a7;
case 0x4f28aa:c.instructions+=2;goto B4f28aa;
case 0x4f28ac:c.instructions+=1;goto B4f28ac;
case 0x4f28b2:goto L4f28b2;
case 0x4f28b5:c.instructions+=2;goto B4f28b5;
case 0x4f28ba:c.instructions+=1;goto B4f28ba;
case 0x4f28c0:goto L4f28c0;
case 0x4f28c5:c.instructions+=1;goto B4f28c5;
case 0x4f28c7:goto L4f28c7;
case 0x4f28cc:c.instructions+=1;goto B4f28cc;
case 0x4f28d2:goto L4f28d2;
case 0x4f28d8:c.instructions+=6;goto B4f28d8;
case 0x4f28db:c.instructions+=5;goto B4f28db;
case 0x4f28dd:c.instructions+=4;goto B4f28dd;
case 0x4f28de:c.instructions+=3;goto B4f28de;
case 0x4f28e1:c.instructions+=2;goto B4f28e1;
case 0x4f28e2:c.instructions+=1;goto B4f28e2;
case 0x4f28e7:goto L4f28e7;
case 0x4f28e9:c.instructions+=1;goto B4f28e9;
case 0x4f28ee:goto L4f28ee;
case 0x4f28f1:c.instructions+=5;goto B4f28f1;
case 0x4f28f3:c.instructions+=4;goto B4f28f3;
case 0x4f28f8:c.instructions+=3;goto B4f28f8;
case 0x4f28fd:c.instructions+=2;goto B4f28fd;
case 0x4f28fe:c.instructions+=1;goto B4f28fe;
case 0x4f2903:goto L4f2903;
case 0x4f2906:c.instructions+=2;goto B4f2906;
case 0x4f2910:c.instructions+=1;goto B4f2910;
case 0x4f2915:goto L4f2915;
case 0x4f2917:c.instructions+=2;goto B4f2917;
case 0x4f291a:c.instructions+=1;goto B4f291a;
case 0x4f291f:goto L4f291f;
case 0x4f2921:c.instructions+=1;goto B4f2921;
case 0x4f2927:goto L4f2927;
case 0x4f2928:c.instructions+=2;goto B4f2928;
case 0x4f292a:c.instructions+=1;goto B4f292a;
case 0x4f292f:goto L4f292f;
case 0x4f2931:c.instructions+=2;goto B4f2931;
case 0x4f2936:c.instructions+=1;goto B4f2936;
case 0x4f293b:goto L4f293b;
case 0x4f293e:c.instructions+=5;goto B4f293e;
case 0x4f293f:c.instructions+=4;goto B4f293f;
case 0x4f2940:c.instructions+=3;goto B4f2940;
case 0x4f2942:c.instructions+=2;goto B4f2942;
case 0x4f2943:c.instructions+=1;goto B4f2943;
case 0x4f2946:goto L4f2946;
case 0x4f294e:c.instructions+=3;goto B4f294e;
case 0x4f2950:c.instructions+=2;goto B4f2950;
case 0x4f2955:c.instructions+=1;goto B4f2955;
case 0x4f295c:goto L4f295c;
case 0x4f295e:goto L4f295e;
case 0x4f2960:c.instructions+=4;goto B4f2960;
case 0x4f2965:c.instructions+=3;goto B4f2965;
case 0x4f296a:c.instructions+=2;goto B4f296a;
case 0x4f296b:c.instructions+=1;goto B4f296b;
case 0x4f2970:goto L4f2970;
case 0x4f2973:c.instructions+=5;goto B4f2973;
case 0x4f2974:c.instructions+=4;goto B4f2974;
case 0x4f297b:c.instructions+=3;goto B4f297b;
case 0x4f2980:c.instructions+=2;goto B4f2980;
case 0x4f2981:c.instructions+=1;goto B4f2981;
case 0x4f2986:goto L4f2986;
case 0x4f2989:c.instructions+=11;goto B4f2989;
case 0x4f2990:c.instructions+=10;goto B4f2990;
case 0x4f2991:c.instructions+=9;goto B4f2991;
case 0x4f2993:c.instructions+=8;goto B4f2993;
case 0x4f2995:c.instructions+=7;goto B4f2995;
case 0x4f2997:c.instructions+=6;goto B4f2997;
case 0x4f299c:c.instructions+=5;goto B4f299c;
case 0x4f29a1:c.instructions+=4;goto B4f29a1;
case 0x4f29a6:c.instructions+=3;goto B4f29a6;
case 0x4f29ab:c.instructions+=2;goto B4f29ab;
case 0x4f29ac:c.instructions+=1;goto B4f29ac;
case 0x4f29b1:goto L4f29b1;
case 0x4f29b4:c.instructions+=5;goto B4f29b4;
case 0x4f29b5:c.instructions+=4;goto B4f29b5;
case 0x4f29b6:c.instructions+=3;goto B4f29b6;
case 0x4f29b8:c.instructions+=2;goto B4f29b8;
case 0x4f29b9:c.instructions+=1;goto B4f29b9;
case 0x4f29bc:goto L4f29bc;
case 0x4f29be:c.instructions+=3;goto B4f29be;
case 0x4f29c0:c.instructions+=2;goto B4f29c0;
case 0x4f29ca:c.instructions+=1;goto B4f29ca;
case 0x4f29cf:goto L4f29cf;
case 0x4f29d1:c.instructions+=2;goto B4f29d1;
case 0x4f29d6:c.instructions+=1;goto B4f29d6;
case 0x4f29db:goto L4f29db;
case 0x4f29e0:c.instructions+=3;goto B4f29e0;
case 0x4f29e3:c.instructions+=2;goto B4f29e3;
case 0x4f29e5:c.instructions+=1;goto B4f29e5;
case 0x4f29e7:goto L4f29e7;
case 0x4f29ea:c.instructions+=1;goto B4f29ea;
case 0x4f29eb:goto L4f29eb;
case 0x4f29f0:c.instructions+=1;goto B4f29f0;
case 0x4f29f5:goto L4f29f5;
case 0x4f29f8:c.instructions+=5;goto B4f29f8;
case 0x4f29f9:c.instructions+=4;goto B4f29f9;
case 0x4f29fa:c.instructions+=3;goto B4f29fa;
case 0x4f29fc:c.instructions+=2;goto B4f29fc;
case 0x4f29fd:c.instructions+=1;goto B4f29fd;
case 0x4f2a00:goto L4f2a00;
case 0x4f2a03:c.instructions+=7;goto B4f2a03;
case 0x4f2a08:c.instructions+=6;goto B4f2a08;
case 0x4f2a0d:c.instructions+=5;goto B4f2a0d;
case 0x4f2a12:c.instructions+=4;goto B4f2a12;
case 0x4f2a17:c.instructions+=3;goto B4f2a17;
case 0x4f2a1c:c.instructions+=2;goto B4f2a1c;
case 0x4f2a1d:c.instructions+=1;goto B4f2a1d;
case 0x4f2a22:goto L4f2a22;
case 0x4f2a25:c.instructions+=5;goto B4f2a25;
case 0x4f2a26:c.instructions+=4;goto B4f2a26;
case 0x4f2a27:c.instructions+=3;goto B4f2a27;
case 0x4f2a29:c.instructions+=2;goto B4f2a29;
case 0x4f2a2a:c.instructions+=1;goto B4f2a2a;
case 0x4f2a2d:goto L4f2a2d;
case 0x4f2a2f:c.instructions+=4;goto B4f2a2f;
case 0x4f2a34:c.instructions+=3;goto B4f2a34;
case 0x4f2a39:c.instructions+=2;goto B4f2a39;
case 0x4f2a3e:c.instructions+=1;goto B4f2a3e;
case 0x4f2a43:goto L4f2a43;
case 0x4f2a45:c.instructions+=4;goto B4f2a45;
case 0x4f2a4a:c.instructions+=3;goto B4f2a4a;
case 0x4f2a4f:c.instructions+=2;goto B4f2a4f;
case 0x4f2a54:c.instructions+=1;goto B4f2a54;
case 0x4f2a59:goto L4f2a59;
case 0x4f2a5b:c.instructions+=4;goto B4f2a5b;
case 0x4f2a60:c.instructions+=3;goto B4f2a60;
case 0x4f2a65:c.instructions+=2;goto B4f2a65;
case 0x4f2a6a:c.instructions+=1;goto B4f2a6a;
case 0x4f2a6f:goto L4f2a6f;
case 0x4f2a72:c.instructions+=3;goto B4f2a72;
case 0x4f2a77:c.instructions+=2;goto B4f2a77;
case 0x4f2a78:c.instructions+=1;goto B4f2a78;
case 0x4f2a7d:goto L4f2a7d;
case 0x4f2a80:c.instructions+=5;goto B4f2a80;
case 0x4f2a82:c.instructions+=4;goto B4f2a82;
case 0x4f2a87:c.instructions+=3;goto B4f2a87;
case 0x4f2a8c:c.instructions+=2;goto B4f2a8c;
case 0x4f2a8d:c.instructions+=1;goto B4f2a8d;
case 0x4f2a92:goto L4f2a92;
case 0x4f2a95:c.instructions+=5;goto B4f2a95;
case 0x4f2a96:c.instructions+=4;goto B4f2a96;
case 0x4f2a97:c.instructions+=3;goto B4f2a97;
case 0x4f2a99:c.instructions+=2;goto B4f2a99;
case 0x4f2a9a:c.instructions+=1;goto B4f2a9a;
case 0x4f2a9d:goto L4f2a9d;
case 0x4f2aa2:c.instructions+=1;goto B4f2aa2;
case 0x4f2aa4:goto L4f2aa4;
case 0x4f2aa9:c.instructions+=1;goto B4f2aa9;
case 0x4f2aaf:goto L4f2aaf;
case 0x4f2ab1:c.instructions+=1;goto B4f2ab1;
case 0x4f2ab6:goto L4f2ab6;
case 0x4f2aba:c.instructions+=7;goto B4f2aba;
case 0x4f2ac1:c.instructions+=6;goto B4f2ac1;
case 0x4f2ac8:c.instructions+=5;goto B4f2ac8;
case 0x4f2ac9:c.instructions+=4;goto B4f2ac9;
case 0x4f2aca:c.instructions+=3;goto B4f2aca;
case 0x4f2acc:c.instructions+=2;goto B4f2acc;
case 0x4f2acd:c.instructions+=1;goto B4f2acd;
case 0x4f2ad0:goto L4f2ad0;
case 0x4f2ad6:c.instructions+=6;goto B4f2ad6;
case 0x4f2ad9:c.instructions+=5;goto B4f2ad9;
case 0x4f2adb:c.instructions+=4;goto B4f2adb;
case 0x4f2adc:c.instructions+=3;goto B4f2adc;
case 0x4f2adf:c.instructions+=2;goto B4f2adf;
case 0x4f2ae0:c.instructions+=1;goto B4f2ae0;
case 0x4f2ae5:goto L4f2ae5;
case 0x4f2ae7:c.instructions+=1;goto B4f2ae7;
case 0x4f2aec:goto L4f2aec;
case 0x4f2af1:goto L4f2af1;
case 0x4f2af7:c.instructions+=5;goto B4f2af7;
case 0x4f2af9:c.instructions+=4;goto B4f2af9;
case 0x4f2afb:c.instructions+=3;goto B4f2afb;
case 0x4f2b00:c.instructions+=2;goto B4f2b00;
case 0x4f2b01:c.instructions+=1;goto B4f2b01;
case 0x4f2b06:goto L4f2b06;
case 0x4f2b09:c.instructions+=5;goto B4f2b09;
case 0x4f2b0b:c.instructions+=4;goto B4f2b0b;
case 0x4f2b10:c.instructions+=3;goto B4f2b10;
case 0x4f2b15:c.instructions+=2;goto B4f2b15;
case 0x4f2b16:c.instructions+=1;goto B4f2b16;
case 0x4f2b1b:goto L4f2b1b;
case 0x4f2b1e:c.instructions+=2;goto B4f2b1e;
case 0x4f2b28:c.instructions+=1;goto B4f2b28;
case 0x4f2b2d:goto L4f2b2d;
case 0x4f2b2f:c.instructions+=2;goto B4f2b2f;
case 0x4f2b32:c.instructions+=1;goto B4f2b32;
case 0x4f2b37:goto L4f2b37;
case 0x4f2b39:c.instructions+=1;goto B4f2b39;
case 0x4f2b3f:goto L4f2b3f;
case 0x4f2b40:c.instructions+=2;goto B4f2b40;
case 0x4f2b42:c.instructions+=1;goto B4f2b42;
case 0x4f2b47:goto L4f2b47;
case 0x4f2b49:c.instructions+=2;goto B4f2b49;
case 0x4f2b4e:c.instructions+=1;goto B4f2b4e;
case 0x4f2b53:goto L4f2b53;
case 0x4f2b56:c.instructions+=5;goto B4f2b56;
case 0x4f2b57:c.instructions+=4;goto B4f2b57;
case 0x4f2b58:c.instructions+=3;goto B4f2b58;
case 0x4f2b5a:c.instructions+=2;goto B4f2b5a;
case 0x4f2b5b:c.instructions+=1;goto B4f2b5b;
case 0x4f2b5e:goto L4f2b5e;
case 0x4f2b61:c.instructions+=5;goto B4f2b61;
case 0x4f2b63:c.instructions+=4;goto B4f2b63;
case 0x4f2b68:c.instructions+=3;goto B4f2b68;
case 0x4f2b6d:c.instructions+=2;goto B4f2b6d;
case 0x4f2b6e:c.instructions+=1;goto B4f2b6e;
case 0x4f2b73:goto L4f2b73;
case 0x4f2b76:c.instructions+=5;goto B4f2b76;
case 0x4f2b77:c.instructions+=4;goto B4f2b77;
case 0x4f2b78:c.instructions+=3;goto B4f2b78;
case 0x4f2b7a:c.instructions+=2;goto B4f2b7a;
case 0x4f2b7b:c.instructions+=1;goto B4f2b7b;
case 0x4f2b7e:goto L4f2b7e;
case 0x4f2b83:c.instructions+=1;goto B4f2b83;
case 0x4f2b89:goto L4f2b89;
case 0x4f2b8b:goto L4f2b8b;
case 0x4f2b90:c.instructions+=1;goto B4f2b90;
case 0x4f2b96:goto L4f2b96;
case 0x4f2b9b:c.instructions+=1;goto B4f2b9b;
case 0x4f2ba1:goto L4f2ba1;
case 0x4f2ba6:goto L4f2ba6;
case 0x4f2ba8:c.instructions+=1;goto B4f2ba8;
case 0x4f2bad:goto L4f2bad;
case 0x4f2bb0:c.instructions+=2;goto B4f2bb0;
case 0x4f2bb2:c.instructions+=1;goto B4f2bb2;
case 0x4f2bb8:goto L4f2bb8;
case 0x4f2bbb:c.instructions+=2;goto B4f2bbb;
case 0x4f2bbc:c.instructions+=1;goto B4f2bbc;
case 0x4f2bc1:goto L4f2bc1;
case 0x4f2bcb:c.instructions+=6;goto B4f2bcb;
case 0x4f2bd1:c.instructions+=5;goto B4f2bd1;
case 0x4f2bd4:c.instructions+=4;goto B4f2bd4;
case 0x4f2bd6:c.instructions+=3;goto B4f2bd6;
case 0x4f2bda:c.instructions+=2;goto B4f2bda;
case 0x4f2bdf:c.instructions+=1;goto B4f2bdf;
case 0x4f2be5:goto L4f2be5;
case 0x4f2bea:c.instructions+=1;goto B4f2bea;
case 0x4f2bef:goto L4f2bef;
case 0x4f2bf2:c.instructions+=5;goto B4f2bf2;
case 0x4f2bf3:c.instructions+=4;goto B4f2bf3;
case 0x4f2bf4:c.instructions+=3;goto B4f2bf4;
case 0x4f2bf6:c.instructions+=2;goto B4f2bf6;
case 0x4f2bf7:c.instructions+=1;goto B4f2bf7;
case 0x4f2bfa:goto L4f2bfa;
case 0x4f2bfc:c.instructions+=4;goto B4f2bfc;
case 0x4f2c01:c.instructions+=3;goto B4f2c01;
case 0x4f2c06:c.instructions+=2;goto B4f2c06;
case 0x4f2c0b:c.instructions+=1;goto B4f2c0b;
case 0x4f2c10:goto L4f2c10;
case 0x4f2c13:c.instructions+=6;goto B4f2c13;
case 0x4f2c17:c.instructions+=5;goto B4f2c17;
case 0x4f2c18:c.instructions+=4;goto B4f2c18;
case 0x4f2c19:c.instructions+=3;goto B4f2c19;
case 0x4f2c1b:c.instructions+=2;goto B4f2c1b;
case 0x4f2c1c:c.instructions+=1;goto B4f2c1c;
case 0x4f2c1f:goto L4f2c1f;
case 0x4f2c24:c.instructions+=1;goto B4f2c24;
case 0x4f2c26:goto L4f2c26;
case 0x4f2c2b:c.instructions+=2;goto B4f2c2b;
case 0x4f2c30:c.instructions+=1;goto B4f2c30;
case 0x4f2c35:goto L4f2c35;
case 0x4f2c38:c.instructions+=5;goto B4f2c38;
case 0x4f2c39:c.instructions+=4;goto B4f2c39;
case 0x4f2c3d:c.instructions+=3;goto B4f2c3d;
case 0x4f2c42:c.instructions+=2;goto B4f2c42;
case 0x4f2c43:c.instructions+=1;goto B4f2c43;
case 0x4f2c48:goto L4f2c48;
case 0x4f2c4b:c.instructions+=8;goto B4f2c4b;
case 0x4f2c4f:c.instructions+=7;goto B4f2c4f;
case 0x4f2c50:c.instructions+=6;goto B4f2c50;
case 0x4f2c55:c.instructions+=5;goto B4f2c55;
case 0x4f2c5a:c.instructions+=4;goto B4f2c5a;
case 0x4f2c5f:c.instructions+=3;goto B4f2c5f;
case 0x4f2c64:c.instructions+=2;goto B4f2c64;
case 0x4f2c65:c.instructions+=1;goto B4f2c65;
case 0x4f2c6a:goto L4f2c6a;
case 0x4f2c6d:goto L4f2c6d;
case 0x4f2c6e:c.instructions+=4;goto B4f2c6e;
case 0x4f2c6f:c.instructions+=3;goto B4f2c6f;
case 0x4f2c71:c.instructions+=2;goto B4f2c71;
case 0x4f2c72:c.instructions+=1;goto B4f2c72;
case 0x4f2c80:goto L4f2c80;
case 0x4f2c81:c.instructions+=2;goto B4f2c81;
case 0x4f2c83:c.instructions+=1;goto B4f2c83;
case 0x4f2c88:goto L4f2c88;
case 0x4f2c8d:c.instructions+=1;goto B4f2c8d;
case 0x4f2c8f:goto L4f2c8f;
case 0x4f2c90:c.instructions+=1;goto B4f2c90;
case 0x4f2c95:goto L4f2c95;
case 0x4f2c98:goto L4f2c98;
case 0x4f2c9a:c.instructions+=2;goto B4f2c9a;
case 0x4f2c9b:c.instructions+=1;goto B4f2c9b;
case 0x4f2ca0:goto L4f2ca0;
case 0x4f2ca4:c.instructions+=5;goto B4f2ca4;
case 0x4f2ca9:c.instructions+=4;goto B4f2ca9;
case 0x4f2caa:c.instructions+=3;goto B4f2caa;
case 0x4f2cab:c.instructions+=2;goto B4f2cab;
case 0x4f2cad:c.instructions+=1;goto B4f2cad;
case 0x4f2cb3:goto L4f2cb3;
case 0x4f2cb9:goto L4f2cb9;
case 0x4f2cbe:c.instructions+=1;goto B4f2cbe;
case 0x4f2cc0:goto L4f2cc0;
case 0x4f2cc2:goto L4f2cc2;
case 0x4f2cc7:c.instructions+=1;goto B4f2cc7;
case 0x4f2cc9:goto L4f2cc9;
case 0x4f2cce:c.instructions+=1;goto B4f2cce;
case 0x4f2cd4:goto L4f2cd4;
case 0x4f2cd7:c.instructions+=3;goto B4f2cd7;
case 0x4f2cda:c.instructions+=2;goto B4f2cda;
case 0x4f2ce2:c.instructions+=1;goto B4f2ce2;
case 0x4f2ce4:goto L4f2ce4;
case 0x4f2ce6:c.instructions+=1;goto B4f2ce6;
case 0x4f2ceb:goto L4f2ceb;
case 0x4f2cec:c.instructions+=2;goto B4f2cec;
case 0x4f2ced:c.instructions+=1;goto B4f2ced;
case 0x4f2cf0:goto L4f2cf0;
case 0x4f2cf5:c.instructions+=1;goto B4f2cf5;
case 0x4f2cf7:goto L4f2cf7;
case 0x4f2cf8:c.instructions+=1;goto B4f2cf8;
case 0x4f2cfe:goto L4f2cfe;
case 0x4f2d01:c.instructions+=3;goto B4f2d01;
case 0x4f2d07:c.instructions+=2;goto B4f2d07;
case 0x4f2d0d:c.instructions+=1;goto B4f2d0d;
case 0x4f2d12:goto L4f2d12;
case 0x4f2d14:c.instructions+=1;goto B4f2d14;
case 0x4f2d19:goto L4f2d19;
case 0x4f2d1a:c.instructions+=2;goto B4f2d1a;
case 0x4f2d1b:c.instructions+=1;goto B4f2d1b;
case 0x4f2d1e:goto L4f2d1e;
case 0x4f2d21:c.instructions+=2;goto B4f2d21;
case 0x4f2d27:c.instructions+=1;goto B4f2d27;
case 0x4f2d2d:goto L4f2d2d;
case 0x4f2d32:goto L4f2d32;
case 0x4f2d34:c.instructions+=1;goto B4f2d34;
case 0x4f2d39:goto L4f2d39;
case 0x4f2d3a:c.instructions+=2;goto B4f2d3a;
case 0x4f2d3b:c.instructions+=1;goto B4f2d3b;
case 0x4f2d3e:goto L4f2d3e;
case 0x4f2d41:c.instructions+=2;goto B4f2d41;
case 0x4f2d44:c.instructions+=1;goto B4f2d44;
case 0x4f2d4c:goto L4f2d4c;
case 0x4f2d4f:c.instructions+=3;goto B4f2d4f;
case 0x4f2d50:c.instructions+=2;goto B4f2d50;
case 0x4f2d55:c.instructions+=1;goto B4f2d55;
case 0x4f2d5a:goto L4f2d5a;
case 0x4f2d5d:c.instructions+=3;goto B4f2d5d;
case 0x4f2d5e:c.instructions+=2;goto B4f2d5e;
case 0x4f2d5f:c.instructions+=1;goto B4f2d5f;
case 0x4f2d62:goto L4f2d62;
case 0x4f2d67:c.instructions+=1;goto B4f2d67;
case 0x4f2d6d:goto L4f2d6d;
case 0x4f2d6f:goto L4f2d6f;
case 0x4f2d74:c.instructions+=1;goto B4f2d74;
case 0x4f2d76:goto L4f2d76;
case 0x4f2d7b:c.instructions+=1;goto B4f2d7b;
case 0x4f2d7d:goto L4f2d7d;
case 0x4f2d7e:c.instructions+=2;goto B4f2d7e;
case 0x4f2d80:c.instructions+=1;goto B4f2d80;
case 0x4f2d85:goto L4f2d85;
case 0x4f2d86:c.instructions+=2;goto B4f2d86;
case 0x4f2d87:c.instructions+=1;goto B4f2d87;
case 0x4f2d8a:goto L4f2d8a;
case 0x4f2d8d:c.instructions+=1;goto B4f2d8d;
case 0x4f2d92:goto L4f2d92;
case 0x4f2d98:c.instructions+=3;goto B4f2d98;
case 0x4f2d9b:c.instructions+=2;goto B4f2d9b;
case 0x4f2d9e:c.instructions+=1;goto B4f2d9e;
case 0x4f2da0:goto L4f2da0;
case 0x4f2da7:c.instructions+=1;goto B4f2da7;
case 0x4f2dae:goto L4f2dae;
case 0x4f2db3:c.instructions+=2;goto B4f2db3;
case 0x4f2db5:c.instructions+=1;goto B4f2db5;
case 0x4f2dba:goto L4f2dba;
case 0x4f2dbb:c.instructions+=2;goto B4f2dbb;
case 0x4f2dbc:c.instructions+=1;goto B4f2dbc;
case 0x4f2dbf:goto L4f2dbf;
case 0x4f2dc4:c.instructions+=2;goto B4f2dc4;
case 0x4f2dc6:c.instructions+=1;goto B4f2dc6;
case 0x4f2dcb:goto L4f2dcb;
case 0x4f2dcc:c.instructions+=2;goto B4f2dcc;
case 0x4f2dcd:c.instructions+=1;goto B4f2dcd;
case 0x4f2dd0:goto L4f2dd0;
case 0x4f2dd5:c.instructions+=3;goto B4f2dd5;
case 0x4f2dd7:c.instructions+=2;goto B4f2dd7;
case 0x4f2dd9:c.instructions+=1;goto B4f2dd9;
case 0x4f2ddb:goto L4f2ddb;
case 0x4f2de0:goto L4f2de0;
case 0x4f2de5:c.instructions+=2;goto B4f2de5;
case 0x4f2de7:c.instructions+=1;goto B4f2de7;
case 0x4f2dec:goto L4f2dec;
case 0x4f2df1:c.instructions+=3;goto B4f2df1;
case 0x4f2df2:c.instructions+=2;goto B4f2df2;
case 0x4f2df4:c.instructions+=1;goto B4f2df4;
case 0x4f2df6:goto L4f2df6;
case 0x4f2df7:c.instructions+=2;goto B4f2df7;
case 0x4f2df8:c.instructions+=1;goto B4f2df8;
case 0x4f2dfb:goto L4f2dfb;
case 0x4f2e00:c.instructions+=3;goto B4f2e00;
case 0x4f2e02:c.instructions+=2;goto B4f2e02;
case 0x4f2e04:c.instructions+=1;goto B4f2e04;
case 0x4f2e0a:goto L4f2e0a;
case 0x4f2e10:goto L4f2e10;
case 0x4f2e15:c.instructions+=2;goto B4f2e15;
case 0x4f2e17:c.instructions+=1;goto B4f2e17;
case 0x4f2e1c:goto L4f2e1c;
case 0x4f2e21:c.instructions+=3;goto B4f2e21;
case 0x4f2e22:c.instructions+=2;goto B4f2e22;
case 0x4f2e24:c.instructions+=1;goto B4f2e24;
case 0x4f2e26:goto L4f2e26;
case 0x4f2e27:c.instructions+=2;goto B4f2e27;
case 0x4f2e28:c.instructions+=1;goto B4f2e28;
case 0x4f2e2b:goto L4f2e2b;
case 0x4f2e30:c.instructions+=1;goto B4f2e30;
case 0x4f2e36:goto L4f2e36;
case 0x4f2e3b:c.instructions+=1;goto B4f2e3b;
case 0x4f2e41:goto L4f2e41;
case 0x4f2e47:c.instructions+=2;goto B4f2e47;
case 0x4f2e49:c.instructions+=1;goto B4f2e49;
case 0x4f2e4f:goto L4f2e4f;
case 0x4f2e54:c.instructions+=1;goto B4f2e54;
case 0x4f2e5a:goto L4f2e5a;
case 0x4f2e5f:c.instructions+=8;goto B4f2e5f;
case 0x4f2e65:c.instructions+=7;goto B4f2e65;
case 0x4f2e69:c.instructions+=6;goto B4f2e69;
case 0x4f2e6d:c.instructions+=5;goto B4f2e6d;
case 0x4f2e73:c.instructions+=4;goto B4f2e73;
case 0x4f2e79:c.instructions+=3;goto B4f2e79;
case 0x4f2e7b:c.instructions+=2;goto B4f2e7b;
case 0x4f2e7e:c.instructions+=1;goto B4f2e7e;
case 0x4f2e84:goto L4f2e84;
case 0x4f2e87:c.instructions+=1;goto B4f2e87;
case 0x4f2e8c:goto L4f2e8c;
case 0x4f2e8e:c.instructions+=3;goto B4f2e8e;
case 0x4f2e90:c.instructions+=2;goto B4f2e90;
case 0x4f2e91:c.instructions+=1;goto B4f2e91;
case 0x4f2e96:goto L4f2e96;
case 0x4f2e99:c.instructions+=4;goto B4f2e99;
case 0x4f2e9a:c.instructions+=3;goto B4f2e9a;
case 0x4f2ea4:c.instructions+=2;goto B4f2ea4;
case 0x4f2ea5:c.instructions+=1;goto B4f2ea5;
case 0x4f2ee0:goto L4f2ee0;
case 0x4f2ee3:c.instructions+=8;goto B4f2ee3;
case 0x4f2ee4:c.instructions+=7;goto B4f2ee4;
case 0x4f2ee5:c.instructions+=6;goto B4f2ee5;
case 0x4f2ee6:c.instructions+=5;goto B4f2ee6;
case 0x4f2ee8:c.instructions+=4;goto B4f2ee8;
case 0x4f2ee9:c.instructions+=3;goto B4f2ee9;
case 0x4f2eed:c.instructions+=2;goto B4f2eed;
case 0x4f2ef2:c.instructions+=1;goto B4f2ef2;
case 0x4f2ef4:goto L4f2ef4;
case 0x4f2ef8:goto L4f2ef8;
case 0x4f2efa:c.instructions+=1;goto B4f2efa;
case 0x4f2eff:goto L4f2eff;
case 0x4f2f01:c.instructions+=3;goto B4f2f01;
case 0x4f2f04:c.instructions+=2;goto B4f2f04;
case 0x4f2f06:c.instructions+=1;goto B4f2f06;
case 0x4f2f08:goto L4f2f08;
case 0x4f2f0b:c.instructions+=12;goto B4f2f0b;
case 0x4f2f11:c.instructions+=11;goto B4f2f11;
case 0x4f2f13:c.instructions+=10;goto B4f2f13;
case 0x4f2f16:c.instructions+=9;goto B4f2f16;
case 0x4f2f19:c.instructions+=8;goto B4f2f19;
case 0x4f2f1c:c.instructions+=7;goto B4f2f1c;
case 0x4f2f1f:c.instructions+=6;goto B4f2f1f;
case 0x4f2f22:c.instructions+=5;goto B4f2f22;
case 0x4f2f25:c.instructions+=4;goto B4f2f25;
case 0x4f2f29:c.instructions+=3;goto B4f2f29;
case 0x4f2f30:c.instructions+=2;goto B4f2f30;
case 0x4f2f37:c.instructions+=1;goto B4f2f37;
case 0x4f2f39:goto L4f2f39;
case 0x4f2f3a:c.instructions+=5;goto B4f2f3a;
case 0x4f2f3f:c.instructions+=4;goto B4f2f3f;
case 0x4f2f43:c.instructions+=3;goto B4f2f43;
case 0x4f2f45:c.instructions+=2;goto B4f2f45;
case 0x4f2f46:c.instructions+=1;goto B4f2f46;
case 0x4f2f4b:goto L4f2f4b;
case 0x4f2f4e:c.instructions+=3;goto B4f2f4e;
case 0x4f2f52:c.instructions+=2;goto B4f2f52;
case 0x4f2f53:c.instructions+=1;goto B4f2f53;
case 0x4f2f58:goto L4f2f58;
case 0x4f2f59:c.instructions+=2;goto B4f2f59;
case 0x4f2f5a:c.instructions+=1;goto B4f2f5a;
case 0x4f2f5f:goto L4f2f5f;
case 0x4f2f61:c.instructions+=2;goto B4f2f61;
case 0x4f2f63:c.instructions+=1;goto B4f2f63;
case 0x4f2f68:goto L4f2f68;
case 0x4f2f6b:c.instructions+=2;goto B4f2f6b;
case 0x4f2f6d:c.instructions+=1;goto B4f2f6d;
case 0x4f2f6f:goto L4f2f6f;
case 0x4f2f75:c.instructions+=3;goto B4f2f75;
case 0x4f2f78:c.instructions+=2;goto B4f2f78;
case 0x4f2f7b:c.instructions+=1;goto B4f2f7b;
case 0x4f2f7d:goto L4f2f7d;
case 0x4f2f7f:goto L4f2f7f;
case 0x4f2f82:c.instructions+=11;goto B4f2f82;
case 0x4f2f83:c.instructions+=10;goto B4f2f83;
case 0x4f2f86:c.instructions+=9;goto B4f2f86;
case 0x4f2f8b:c.instructions+=8;goto B4f2f8b;
case 0x4f2f8d:c.instructions+=7;goto B4f2f8d;
case 0x4f2f91:c.instructions+=6;goto B4f2f91;
case 0x4f2f94:c.instructions+=5;goto B4f2f94;
case 0x4f2f96:c.instructions+=4;goto B4f2f96;
case 0x4f2f97:c.instructions+=3;goto B4f2f97;
case 0x4f2f9a:c.instructions+=2;goto B4f2f9a;
case 0x4f2f9c:c.instructions+=1;goto B4f2f9c;
case 0x4f2fa1:goto L4f2fa1;
case 0x4f2fa4:c.instructions+=3;goto B4f2fa4;
case 0x4f2fa8:c.instructions+=2;goto B4f2fa8;
case 0x4f2fa9:c.instructions+=1;goto B4f2fa9;
case 0x4f2fae:goto L4f2fae;
case 0x4f2faf:c.instructions+=2;goto B4f2faf;
case 0x4f2fb0:c.instructions+=1;goto B4f2fb0;
case 0x4f2fb5:goto L4f2fb5;
case 0x4f2fb7:c.instructions+=2;goto B4f2fb7;
case 0x4f2fb9:c.instructions+=1;goto B4f2fb9;
case 0x4f2fbe:goto L4f2fbe;
case 0x4f2fc1:c.instructions+=2;goto B4f2fc1;
case 0x4f2fc3:c.instructions+=1;goto B4f2fc3;
case 0x4f2fc5:goto L4f2fc5;
case 0x4f2fcb:c.instructions+=3;goto B4f2fcb;
case 0x4f2fce:c.instructions+=2;goto B4f2fce;
case 0x4f2fd1:c.instructions+=1;goto B4f2fd1;
case 0x4f2fd3:goto L4f2fd3;
case 0x4f2fd5:goto L4f2fd5;
case 0x4f2fd8:c.instructions+=10;goto B4f2fd8;
case 0x4f2fda:c.instructions+=9;goto B4f2fda;
case 0x4f2fdb:c.instructions+=8;goto B4f2fdb;
case 0x4f2fde:c.instructions+=7;goto B4f2fde;
case 0x4f2fe3:c.instructions+=6;goto B4f2fe3;
case 0x4f2fe6:c.instructions+=5;goto B4f2fe6;
case 0x4f2fea:c.instructions+=4;goto B4f2fea;
case 0x4f2fec:c.instructions+=3;goto B4f2fec;
case 0x4f2fed:c.instructions+=2;goto B4f2fed;
case 0x4f2fef:c.instructions+=1;goto B4f2fef;
case 0x4f2ff4:goto L4f2ff4;
case 0x4f2ff8:c.instructions+=3;goto B4f2ff8;
case 0x4f2ffb:c.instructions+=2;goto B4f2ffb;
case 0x4f2fff:c.instructions+=1;goto B4f2fff;
default:missing_instruction(c.pc);}
B4f2000:L4f2000:{c.instructions+=4;NFSU2_TR(0x4f2000);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
}
B4f2006:{NFSU2_TR(0x4f2006);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2008:{NFSU2_TR(0x4f2008);
__builtin_memmove((R+4),(R+24),4);
}
B4f200a:{NFSU2_TR(0x4f200a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f200full));
TAIL_STATIC(0x50d820u,50d);
}
B4f200f:L4f200f:{c.instructions+=4;NFSU2_TR(0x4f200f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2011:{NFSU2_TR(0x4f2011);
__builtin_memmove((R+4),(R+24),4);
}
B4f2013:{NFSU2_TR(0x4f2013);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2015:{NFSU2_TR(0x4f2015);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f201aull));
TAIL_STATIC(0x50d820u,50d);
}
B4f201a:L4f201a:{c.instructions+=2;NFSU2_TR(0x4f201a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f201b:{NFSU2_TR(0x4f201b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f201e:L4f201e:{c.instructions+=3;NFSU2_TR(0x4f201e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2020:{NFSU2_TR(0x4f2020);
__builtin_memmove((R+4),(R+24),4);
}
B4f2022:{NFSU2_TR(0x4f2022);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2027ull));
TAIL_STATIC(0x4d40e0u,4d4);
}
B4f2027:L4f2027:{c.instructions+=2;NFSU2_TR(0x4f2027);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2028:{NFSU2_TR(0x4f2028);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f202b:L4f202b:{c.instructions+=2;NFSU2_TR(0x4f202b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f2031:{NFSU2_TR(0x4f2031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2036ull));
TAIL_STATIC(0x54eb80u,54e);
}
B4f2036:L4f2036:{c.instructions+=2;NFSU2_TR(0x4f2036);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f203c:{NFSU2_TR(0x4f203c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2041ull));
TAIL_STATIC(0x538130u,538);
}
B4f2041:L4f2041:{c.instructions+=3;NFSU2_TR(0x4f2041);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x358ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f2047:{NFSU2_TR(0x4f2047);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2048:{NFSU2_TR(0x4f2048);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f204dull));
TAIL_STATIC(0x52d100u,52d);
}
B4f204d:L4f204d:{c.instructions+=3;NFSU2_TR(0x4f204d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f2050:{NFSU2_TR(0x4f2050);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f2052:{NFSU2_TR(0x4f2052);
if(r1(R+518)){{goto L4f207e;}}
}
B4f2054:L4f2054:{c.instructions+=6;NFSU2_TR(0x4f2054);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f2057:{NFSU2_TR(0x4f2057);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2059:{NFSU2_TR(0x4f2059);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f205e:{NFSU2_TR(0x4f205e);
u8 U[4];
w4(U+0,u32(0xcf6f0439ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2063:{NFSU2_TR(0x4f2063);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2064:{NFSU2_TR(0x4f2064);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2069ull));
TAIL_STATIC(0x537c00u,537);
}
B4f2069:L4f2069:{c.instructions+=4;NFSU2_TR(0x4f2069);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f206c:{NFSU2_TR(0x4f206c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f206d:{NFSU2_TR(0x4f206d);
u8 U[4];
w4(U+0,u32(0x5073ef13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2072:{NFSU2_TR(0x4f2072);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2077ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f2077:L4f2077:{c.instructions+=3;NFSU2_TR(0x4f2077);
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
B4f207a:{NFSU2_TR(0x4f207a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f207b:{NFSU2_TR(0x4f207b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f207e:L4f207e:{c.instructions+=3;NFSU2_TR(0x4f207e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x35cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f2084:{NFSU2_TR(0x4f2084);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2085:{NFSU2_TR(0x4f2085);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f208aull));
TAIL_STATIC(0x52d100u,52d);
}
B4f208a:L4f208a:{c.instructions+=3;NFSU2_TR(0x4f208a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f208d:{NFSU2_TR(0x4f208d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f208f:{NFSU2_TR(0x4f208f);
if(r1(R+518)){{goto L4f20bb;}}
}
B4f2091:L4f2091:{c.instructions+=6;NFSU2_TR(0x4f2091);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f2094:{NFSU2_TR(0x4f2094);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2096:{NFSU2_TR(0x4f2096);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f209b:{NFSU2_TR(0x4f209b);
u8 U[4];
w4(U+0,u32(0xaba93d3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f20a0:{NFSU2_TR(0x4f20a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f20a1:{NFSU2_TR(0x4f20a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f20a6ull));
TAIL_STATIC(0x537c00u,537);
}
B4f20a6:L4f20a6:{c.instructions+=4;NFSU2_TR(0x4f20a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f20a9:{NFSU2_TR(0x4f20a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f20aa:{NFSU2_TR(0x4f20aa);
u8 U[4];
w4(U+0,u32(0xd9feec59ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f20af:{NFSU2_TR(0x4f20af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f20b4ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f20b4:L4f20b4:{c.instructions+=3;NFSU2_TR(0x4f20b4);
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
B4f20b7:{NFSU2_TR(0x4f20b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f20b8:{NFSU2_TR(0x4f20b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f20bb:L4f20bb:{c.instructions+=3;NFSU2_TR(0x4f20bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x360ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f20c1:{NFSU2_TR(0x4f20c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f20c2:{NFSU2_TR(0x4f20c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f20c7ull));
TAIL_STATIC(0x52d100u,52d);
}
B4f20c7:L4f20c7:{c.instructions+=3;NFSU2_TR(0x4f20c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f20ca:{NFSU2_TR(0x4f20ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f20cc:{NFSU2_TR(0x4f20cc);
if(r1(R+518)){{goto L4f20f8;}}
}
B4f20ce:L4f20ce:{c.instructions+=6;NFSU2_TR(0x4f20ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f20d1:{NFSU2_TR(0x4f20d1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f20d3:{NFSU2_TR(0x4f20d3);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f20d8:{NFSU2_TR(0x4f20d8);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f20dd:{NFSU2_TR(0x4f20dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f20de:{NFSU2_TR(0x4f20de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f20e3ull));
TAIL_STATIC(0x537c00u,537);
}
B4f20e3:L4f20e3:{c.instructions+=4;NFSU2_TR(0x4f20e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f20e6:{NFSU2_TR(0x4f20e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f20e7:{NFSU2_TR(0x4f20e7);
u8 U[4];
w4(U+0,u32(0x72619778ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f20ec:{NFSU2_TR(0x4f20ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f20f1ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f20f1:L4f20f1:{c.instructions+=3;NFSU2_TR(0x4f20f1);
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
B4f20f4:{NFSU2_TR(0x4f20f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f20f5:{NFSU2_TR(0x4f20f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f20f8:L4f20f8:{c.instructions+=3;NFSU2_TR(0x4f20f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x364ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f20fe:{NFSU2_TR(0x4f20fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f20ff:{NFSU2_TR(0x4f20ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2104ull));
TAIL_STATIC(0x52d100u,52d);
}
B4f2104:L4f2104:{c.instructions+=3;NFSU2_TR(0x4f2104);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f2107:{NFSU2_TR(0x4f2107);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f2109:{NFSU2_TR(0x4f2109);
if(r1(R+518)){{goto L4f2135;}}
}
B4f210b:L4f210b:{c.instructions+=6;NFSU2_TR(0x4f210b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f210e:{NFSU2_TR(0x4f210e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2110:{NFSU2_TR(0x4f2110);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2115:{NFSU2_TR(0x4f2115);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f211a:{NFSU2_TR(0x4f211a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f211b:{NFSU2_TR(0x4f211b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2120ull));
TAIL_STATIC(0x537c00u,537);
}
B4f2120:L4f2120:{c.instructions+=4;NFSU2_TR(0x4f2120);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2123:{NFSU2_TR(0x4f2123);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2124:{NFSU2_TR(0x4f2124);
u8 U[4];
w4(U+0,u32(0x911c0a4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2129:{NFSU2_TR(0x4f2129);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f212eull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f212e:L4f212e:{c.instructions+=3;NFSU2_TR(0x4f212e);
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
B4f2131:{NFSU2_TR(0x4f2131);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2132:{NFSU2_TR(0x4f2132);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2135:L4f2135:{c.instructions+=3;NFSU2_TR(0x4f2135);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x368ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f213b:{NFSU2_TR(0x4f213b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f213c:{NFSU2_TR(0x4f213c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2141ull));
TAIL_STATIC(0x52d100u,52d);
}
B4f2141:L4f2141:{c.instructions+=3;NFSU2_TR(0x4f2141);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f2144:{NFSU2_TR(0x4f2144);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f2146:{NFSU2_TR(0x4f2146);
if(r1(R+518)){{goto L4f2172;}}
}
B4f2148:L4f2148:{c.instructions+=6;NFSU2_TR(0x4f2148);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f214b:{NFSU2_TR(0x4f214b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f214d:{NFSU2_TR(0x4f214d);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2152:{NFSU2_TR(0x4f2152);
u8 U[4];
w4(U+0,u32(0x7ddbca44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2157:{NFSU2_TR(0x4f2157);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2158:{NFSU2_TR(0x4f2158);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f215dull));
TAIL_STATIC(0x537c00u,537);
}
B4f215d:L4f215d:{c.instructions+=4;NFSU2_TR(0x4f215d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2160:{NFSU2_TR(0x4f2160);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2161:{NFSU2_TR(0x4f2161);
u8 U[4];
w4(U+0,u32(0x9120409eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2166:{NFSU2_TR(0x4f2166);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f216bull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f216b:L4f216b:{c.instructions+=3;NFSU2_TR(0x4f216b);
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
B4f216e:{NFSU2_TR(0x4f216e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f216f:{NFSU2_TR(0x4f216f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2172:L4f2172:{c.instructions+=3;NFSU2_TR(0x4f2172);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f2178:{NFSU2_TR(0x4f2178);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2179:{NFSU2_TR(0x4f2179);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f217eull));
TAIL_STATIC(0x52d100u,52d);
}
B4f217e:L4f217e:{c.instructions+=3;NFSU2_TR(0x4f217e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f2181:{NFSU2_TR(0x4f2181);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f2183:{NFSU2_TR(0x4f2183);
if(r1(R+518)){{goto L4f21af;}}
}
B4f2185:L4f2185:{c.instructions+=6;NFSU2_TR(0x4f2185);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f2188:{NFSU2_TR(0x4f2188);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f218a:{NFSU2_TR(0x4f218a);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f218f:{NFSU2_TR(0x4f218f);
u8 U[4];
w4(U+0,u32(0x7ddbca45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2194:{NFSU2_TR(0x4f2194);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2195:{NFSU2_TR(0x4f2195);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f219aull));
TAIL_STATIC(0x537c00u,537);
}
B4f219a:L4f219a:{c.instructions+=4;NFSU2_TR(0x4f219a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f219d:{NFSU2_TR(0x4f219d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f219e:{NFSU2_TR(0x4f219e);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f21a3:{NFSU2_TR(0x4f21a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f21a8ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f21a8:L4f21a8:{c.instructions+=3;NFSU2_TR(0x4f21a8);
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
B4f21ab:{NFSU2_TR(0x4f21ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f21ac:{NFSU2_TR(0x4f21ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f21af:L4f21af:{c.instructions+=3;NFSU2_TR(0x4f21af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f21b5:{NFSU2_TR(0x4f21b5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f21b8:{NFSU2_TR(0x4f21b8);
if(r1(R+518)){{goto L4f21ca;}}
}
B4f21ba:L4f21ba:{c.instructions+=2;NFSU2_TR(0x4f21ba);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f21bd:{NFSU2_TR(0x4f21bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f21db;}}
}
B4f21bf:L4f21bf:{c.instructions+=4;NFSU2_TR(0x4f21bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f21c2:{NFSU2_TR(0x4f21c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f21c3:{NFSU2_TR(0x4f21c3);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f21c8:{NFSU2_TR(0x4f21c8);
{goto L4f21d3;}
}
B4f21ca:L4f21ca:{c.instructions+=3;NFSU2_TR(0x4f21ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f21cd:{NFSU2_TR(0x4f21cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f21ce:{NFSU2_TR(0x4f21ce);
u8 U[4];
w4(U+0,u32(0x9120409eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f21d3:L4f21d3:{c.instructions+=1;NFSU2_TR(0x4f21d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f21d8ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f21d8:L4f21d8:{c.instructions+=1;NFSU2_TR(0x4f21d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f21db:L4f21db:{c.instructions+=2;NFSU2_TR(0x4f21db);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x300ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f21e1:{NFSU2_TR(0x4f21e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f21e6ull));
TAIL_STATIC(0x538130u,538);
}
B4f21e6:L4f21e6:{c.instructions+=3;NFSU2_TR(0x4f21e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f21ec:{NFSU2_TR(0x4f21ec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f21ef:{NFSU2_TR(0x4f21ef);
if(r1(R+518)){{goto L4f2201;}}
}
B4f21f1:L4f21f1:{c.instructions+=2;NFSU2_TR(0x4f21f1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f21f4:{NFSU2_TR(0x4f21f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f2212;}}
}
B4f21f6:L4f21f6:{c.instructions+=4;NFSU2_TR(0x4f21f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f21f9:{NFSU2_TR(0x4f21f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f21fa:{NFSU2_TR(0x4f21fa);
u8 U[4];
w4(U+0,u32(0x911c0a4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f21ff:{NFSU2_TR(0x4f21ff);
{goto L4f220a;}
}
B4f2201:L4f2201:{c.instructions+=3;NFSU2_TR(0x4f2201);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f2204:{NFSU2_TR(0x4f2204);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2205:{NFSU2_TR(0x4f2205);
u8 U[4];
w4(U+0,u32(0x72619778ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f220a:L4f220a:{c.instructions+=1;NFSU2_TR(0x4f220a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f220full));
TAIL_STATIC(0x55dda0u,55d);
}
B4f220f:L4f220f:{c.instructions+=1;NFSU2_TR(0x4f220f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f2212:L4f2212:{c.instructions+=4;NFSU2_TR(0x4f2212);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f2215:{NFSU2_TR(0x4f2215);
u8 U[4];
w4(U+0,u32(0x798260ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f221a:{NFSU2_TR(0x4f221a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f221b:{NFSU2_TR(0x4f221b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2220ull));
TAIL_STATIC(0x4953a0u,495);
}
B4f2220:L4f2220:{c.instructions+=2;NFSU2_TR(0x4f2220);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2221:{NFSU2_TR(0x4f2221);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2226ull));
TAIL_STATIC(0x52d100u,52d);
}
B4f2226:L4f2226:{c.instructions+=3;NFSU2_TR(0x4f2226);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f2229:{NFSU2_TR(0x4f2229);
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
B4f222b:{NFSU2_TR(0x4f222b);
if(r1(R+518)){{goto L4f22de;}}
}
B4f2231:L4f2231:{c.instructions+=2;NFSU2_TR(0x4f2231);
w4(R+4,u32(0x850080ull));
}
B4f2236:{NFSU2_TR(0x4f2236);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f223bull));
TAIL_STATIC(0x5031f0u,503);
}
B4f223b:L4f223b:{c.instructions+=4;NFSU2_TR(0x4f223b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f223c:{NFSU2_TR(0x4f223c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f223e:{NFSU2_TR(0x4f223e);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2243:{NFSU2_TR(0x4f2243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2248ull));
TAIL_STATIC(0x50c960u,50c);
}
B4f2248:L4f2248:{c.instructions+=6;NFSU2_TR(0x4f2248);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f224b:{NFSU2_TR(0x4f224b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f224d:{NFSU2_TR(0x4f224d);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2252:{NFSU2_TR(0x4f2252);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2253:{NFSU2_TR(0x4f2253);
u8 U[4];
w4(U+0,u32(0x7962d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2258:{NFSU2_TR(0x4f2258);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f225dull));
TAIL_STATIC(0x555eb0u,555);
}
B4f225d:L4f225d:{c.instructions+=3;NFSU2_TR(0x4f225d);
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
B4f2260:{NFSU2_TR(0x4f2260);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2261:{NFSU2_TR(0x4f2261);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2264:L4f2264:{c.instructions+=2;NFSU2_TR(0x4f2264);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f2269:{NFSU2_TR(0x4f2269);
if(r1(R+518)){{goto L4f228f;}}
}
B4f226b:L4f226b:{c.instructions+=2;NFSU2_TR(0x4f226b);
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
B4f2270:{NFSU2_TR(0x4f2270);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f22de;}}
}
B4f2272:L4f2272:{c.instructions+=6;NFSU2_TR(0x4f2272);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2275:{NFSU2_TR(0x4f2275);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4f2276:{NFSU2_TR(0x4f2276);
__builtin_memmove((R+0),(R+4),4);
}
B4f2278:{NFSU2_TR(0x4f2278);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f227b:{NFSU2_TR(0x4f227b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f227e:{NFSU2_TR(0x4f227e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4f1f6cu,4f1);}
}
B4f2284:L4f2284:{c.instructions+=3;NFSU2_TR(0x4f2284);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f228b:{NFSU2_TR(0x4f228b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f228c:{NFSU2_TR(0x4f228c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f228f:L4f228f:{c.instructions+=6;NFSU2_TR(0x4f228f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f2295:{NFSU2_TR(0x4f2295);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4f2296:{NFSU2_TR(0x4f2296);
__builtin_memmove((R+0),(R+8),4);
}
B4f2298:{NFSU2_TR(0x4f2298);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f229b:{NFSU2_TR(0x4f229b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f22a1:{NFSU2_TR(0x4f22a1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4f22ad;}}
}
B4f22a3:L4f22a3:{c.instructions+=1;NFSU2_TR(0x4f22a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f22ad:L4f22ad:{c.instructions+=5;NFSU2_TR(0x4f22ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f22b3:{NFSU2_TR(0x4f22b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x378ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f22b9:{NFSU2_TR(0x4f22b9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f22bb:{NFSU2_TR(0x4f22bb);
__builtin_memmove((R+4),(R+24),4);
}
B4f22bd:{NFSU2_TR(0x4f22bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f22c2ull));
TAIL_STATIC(0x4d39b0u,4d3);
}
B4f22c2:L4f22c2:{c.instructions+=5;NFSU2_TR(0x4f22c2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f22c4:{NFSU2_TR(0x4f22c4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
}
B4f22ca:{NFSU2_TR(0x4f22ca);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f22cc:{NFSU2_TR(0x4f22cc);
__builtin_memmove((R+4),(R+24),4);
}
B4f22ce:{NFSU2_TR(0x4f22ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f22d3ull));
TAIL_STATIC(0x50d820u,50d);
}
B4f22d3:L4f22d3:{c.instructions+=4;NFSU2_TR(0x4f22d3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f22d5:{NFSU2_TR(0x4f22d5);
__builtin_memmove((R+4),(R+24),4);
}
B4f22d7:{NFSU2_TR(0x4f22d7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f22d9:{NFSU2_TR(0x4f22d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f22deull));
TAIL_STATIC(0x50d820u,50d);
}
B4f22de:L4f22de:{c.instructions+=2;NFSU2_TR(0x4f22de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f22df:{NFSU2_TR(0x4f22df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f22f0:L4f22f0:{c.instructions+=8;NFSU2_TR(0x4f22f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f22f2:{NFSU2_TR(0x4f22f2);
u8 U[4];
w4(U+0,u32(0x776664ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f22f7:{NFSU2_TR(0x4f22f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f22fd:{NFSU2_TR(0x4f22fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f22fe:{NFSU2_TR(0x4f22fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2305:{NFSU2_TR(0x4f2305);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2306:{NFSU2_TR(0x4f2306);
u8 U[4];
w4(U+0,u32(0x1ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f230b:{NFSU2_TR(0x4f230b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2310ull));
TAIL_STATIC(0x575620u,575);
}
B4f2310:L4f2310:{c.instructions+=5;NFSU2_TR(0x4f2310);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f2313:{NFSU2_TR(0x4f2313);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4f2317:{NFSU2_TR(0x4f2317);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f2319:{NFSU2_TR(0x4f2319);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f2321:{NFSU2_TR(0x4f2321);
if(r1(R+518)){{goto L4f233e;}}
}
B4f2323:L4f2323:{c.instructions+=4;NFSU2_TR(0x4f2323);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2327:{NFSU2_TR(0x4f2327);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2328:{NFSU2_TR(0x4f2328);
__builtin_memmove((R+4),(R+0),4);
}
B4f232a:{NFSU2_TR(0x4f232a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f232full));
TAIL_STATIC(0x4e65b0u,4e6);
}
B4f232f:L4f232f:{c.instructions+=4;NFSU2_TR(0x4f232f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2333:{NFSU2_TR(0x4f2333);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f233a:{NFSU2_TR(0x4f233a);
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
B4f233d:{NFSU2_TR(0x4f233d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f233e:L4f233e:{c.instructions+=5;NFSU2_TR(0x4f233e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2342:{NFSU2_TR(0x4f2342);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f2344:{NFSU2_TR(0x4f2344);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f234b:{NFSU2_TR(0x4f234b);
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
B4f234e:{NFSU2_TR(0x4f234e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2350:L4f2350:{c.instructions+=15;NFSU2_TR(0x4f2350);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2352:{NFSU2_TR(0x4f2352);
u8 U[4];
w4(U+0,u32(0x7749d3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2357:{NFSU2_TR(0x4f2357);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f235d:{NFSU2_TR(0x4f235d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f235e:{NFSU2_TR(0x4f235e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2365:{NFSU2_TR(0x4f2365);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2366:{NFSU2_TR(0x4f2366);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2367:{NFSU2_TR(0x4f2367);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2368:{NFSU2_TR(0x4f2368);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4f236c:{NFSU2_TR(0x4f236c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f236d:{NFSU2_TR(0x4f236d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f236e:{NFSU2_TR(0x4f236e);
__builtin_memmove((R+24),(R+4),4);
}
B4f2370:{NFSU2_TR(0x4f2370);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2371:{NFSU2_TR(0x4f2371);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2375:{NFSU2_TR(0x4f2375);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f237aull));
TAIL_STATIC(0x551de0u,551);
}
B4f237a:L4f237a:{c.instructions+=16;NFSU2_TR(0x4f237a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f237d:{NFSU2_TR(0x4f237d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f237f:{NFSU2_TR(0x4f237f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f2381:{NFSU2_TR(0x4f2381);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2382:{NFSU2_TR(0x4f2382);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2384:{NFSU2_TR(0x4f2384);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2386:{NFSU2_TR(0x4f2386);
u8 U[4];
w4(U+0,u32(0x7978e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f238b:{NFSU2_TR(0x4f238b);
u8 U[4];
w4(U+0,u32(0x7976c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2390:{NFSU2_TR(0x4f2390);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f2393:{NFSU2_TR(0x4f2393);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2394:{NFSU2_TR(0x4f2394);
__builtin_memmove((R+4),(R+28),4);
}
B4f2396:{NFSU2_TR(0x4f2396);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f239a:{NFSU2_TR(0x4f239a);
u8 U[4];
w4(U+0,u32(0x7962acull));
s4(u32(r4(R+24)),r4(U+0));
}
B4f23a0:{NFSU2_TR(0x4f23a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f23a3:{NFSU2_TR(0x4f23a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f23a6:{NFSU2_TR(0x4f23a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f23abull));
TAIL_STATIC(0x542ca0u,542);
}
B4f23ab:L4f23ab:{c.instructions+=13;NFSU2_TR(0x4f23ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f23b1:{NFSU2_TR(0x4f23b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f23b7:{NFSU2_TR(0x4f23b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f23bd:{NFSU2_TR(0x4f23bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f23c3:{NFSU2_TR(0x4f23c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10eull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f23c9:{NFSU2_TR(0x4f23c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10full))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f23cf:{NFSU2_TR(0x4f23cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f23d5:{NFSU2_TR(0x4f23d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x111ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f23db:{NFSU2_TR(0x4f23db);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x112ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f23e1:{NFSU2_TR(0x4f23e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f23e4:{NFSU2_TR(0x4f23e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f23e5:{NFSU2_TR(0x4f23e5);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f23ea:{NFSU2_TR(0x4f23ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f23efull));
TAIL_STATIC(0x504820u,504);
}
B4f23ef:L4f23ef:{c.instructions+=1;NFSU2_TR(0x4f23ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f23f4ull));
TAIL_STATIC(0x582b60u,582);
}
B4f23f4:L4f23f4:{c.instructions+=7;NFSU2_TR(0x4f23f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f23fa:{NFSU2_TR(0x4f23fa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f23fc:{NFSU2_TR(0x4f23fc);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2401:{NFSU2_TR(0x4f2401);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2406:{NFSU2_TR(0x4f2406);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f240b:{NFSU2_TR(0x4f240b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2411:{NFSU2_TR(0x4f2411);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2416ull));
TAIL_STATIC(0x537c00u,537);
}
B4f2416:L4f2416:{c.instructions+=3;NFSU2_TR(0x4f2416);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2417:{NFSU2_TR(0x4f2417);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f241c:{NFSU2_TR(0x4f241c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2421ull));
TAIL_STATIC(0x537950u,537);
}
B4f2421:L4f2421:{c.instructions+=3;NFSU2_TR(0x4f2421);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4f2424:{NFSU2_TR(0x4f2424);
__builtin_memmove((R+4),(R+24),4);
}
B4f2426:{NFSU2_TR(0x4f2426);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f242bull));
TAIL_STATIC(0x4e7430u,4e7);
}
B4f242b:L4f242b:{c.instructions+=5;NFSU2_TR(0x4f242b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4f242e:{NFSU2_TR(0x4f242e);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2433:{NFSU2_TR(0x4f2433);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2438:{NFSU2_TR(0x4f2438);
u8 U[4];
w4(U+0,u32(0x79828cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f243d:{NFSU2_TR(0x4f243d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2442ull));
TAIL_STATIC(0x50b990u,50b);
}
B4f2442:L4f2442:{c.instructions+=4;NFSU2_TR(0x4f2442);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f2445:{NFSU2_TR(0x4f2445);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2446:{NFSU2_TR(0x4f2446);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2447:{NFSU2_TR(0x4f2447);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f244cull));
TAIL_STATIC(0x537b80u,537);
}
B4f244c:L4f244c:{c.instructions+=4;NFSU2_TR(0x4f244c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f244f:{NFSU2_TR(0x4f244f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f2452:{NFSU2_TR(0x4f2452);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f2454:{NFSU2_TR(0x4f2454);
if(r1(R+518)){{goto L4f2464;}}
}
B4f2456:L4f2456:{c.instructions+=4;NFSU2_TR(0x4f2456);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f2459:{NFSU2_TR(0x4f2459);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f245e:{NFSU2_TR(0x4f245e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f245f:{NFSU2_TR(0x4f245f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2464ull));
TAIL_STATIC(0x51ee80u,51e);
}
B4f2464:L4f2464:{c.instructions+=3;NFSU2_TR(0x4f2464);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2466:{NFSU2_TR(0x4f2466);
__builtin_memmove((R+4),(R+28),4);
}
B4f2468:{NFSU2_TR(0x4f2468);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f246dull));
TAIL_STATIC(0x538500u,538);
}
B4f246d:L4f246d:{c.instructions+=3;NFSU2_TR(0x4f246d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f246e:{NFSU2_TR(0x4f246e);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2473:{NFSU2_TR(0x4f2473);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2478ull));
TAIL_STATIC(0x537950u,537);
}
B4f2478:L4f2478:{c.instructions+=3;NFSU2_TR(0x4f2478);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2479:{NFSU2_TR(0x4f2479);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f247e:{NFSU2_TR(0x4f247e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2483ull));
TAIL_STATIC(0x537950u,537);
}
B4f2483:L4f2483:{c.instructions+=3;NFSU2_TR(0x4f2483);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4f2489:{NFSU2_TR(0x4f2489);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f248c:{NFSU2_TR(0x4f248c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2491ull));
TAIL_STATIC(0x54e6b0u,54e);
}
B4f2491:L4f2491:{c.instructions+=5;NFSU2_TR(0x4f2491);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f2494:{NFSU2_TR(0x4f2494);
u8 U[4];
w4(U+0,u32(0x796404ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2499:{NFSU2_TR(0x4f2499);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
w4(U+4,u32(0xc407210ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f24a3:{NFSU2_TR(0x4f24a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f24aa:{NFSU2_TR(0x4f24aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f24afull));
TAIL_STATIC(0x505450u,505);
}
B4f24af:L4f24af:{c.instructions+=3;NFSU2_TR(0x4f24af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f24b0:{NFSU2_TR(0x4f24b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f24b1:{NFSU2_TR(0x4f24b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f24b6ull));
TAIL_STATIC(0x537a60u,537);
}
B4f24b6:L4f24b6:{c.instructions+=11;NFSU2_TR(0x4f24b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f24ba:{NFSU2_TR(0x4f24ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f24bd:{NFSU2_TR(0x4f24bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f24c3:{NFSU2_TR(0x4f24c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f24c4:{NFSU2_TR(0x4f24c4);
__builtin_memmove((R+0),(R+24),4);
}
B4f24c6:{NFSU2_TR(0x4f24c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f24c7:{NFSU2_TR(0x4f24c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f24c8:{NFSU2_TR(0x4f24c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f24c9:{NFSU2_TR(0x4f24c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f24d0:{NFSU2_TR(0x4f24d0);
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
B4f24d3:{NFSU2_TR(0x4f24d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f24e0:L4f24e0:{c.instructions+=8;NFSU2_TR(0x4f24e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f24e2:{NFSU2_TR(0x4f24e2);
u8 U[4];
w4(U+0,u32(0x776684ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f24e7:{NFSU2_TR(0x4f24e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f24ed:{NFSU2_TR(0x4f24ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f24ee:{NFSU2_TR(0x4f24ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f24f5:{NFSU2_TR(0x4f24f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f24f6:{NFSU2_TR(0x4f24f6);
u8 U[4];
w4(U+0,u32(0x1384ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f24fb:{NFSU2_TR(0x4f24fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2500ull));
TAIL_STATIC(0x575620u,575);
}
B4f2500:L4f2500:{c.instructions+=5;NFSU2_TR(0x4f2500);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f2503:{NFSU2_TR(0x4f2503);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4f2507:{NFSU2_TR(0x4f2507);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f2509:{NFSU2_TR(0x4f2509);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f2511:{NFSU2_TR(0x4f2511);
if(r1(R+518)){{goto L4f252e;}}
}
B4f2513:L4f2513:{c.instructions+=4;NFSU2_TR(0x4f2513);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2517:{NFSU2_TR(0x4f2517);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2518:{NFSU2_TR(0x4f2518);
__builtin_memmove((R+4),(R+0),4);
}
B4f251a:{NFSU2_TR(0x4f251a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f251full));
TAIL_STATIC(0x4e7540u,4e7);
}
B4f251f:L4f251f:{c.instructions+=4;NFSU2_TR(0x4f251f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2523:{NFSU2_TR(0x4f2523);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f252a:{NFSU2_TR(0x4f252a);
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
B4f252d:{NFSU2_TR(0x4f252d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f252e:L4f252e:{c.instructions+=5;NFSU2_TR(0x4f252e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2532:{NFSU2_TR(0x4f2532);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f2534:{NFSU2_TR(0x4f2534);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f253b:{NFSU2_TR(0x4f253b);
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
B4f253e:{NFSU2_TR(0x4f253e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2540:L4f2540:{c.instructions+=8;NFSU2_TR(0x4f2540);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2542:{NFSU2_TR(0x4f2542);
u8 U[4];
w4(U+0,u32(0x7766a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2547:{NFSU2_TR(0x4f2547);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f254d:{NFSU2_TR(0x4f254d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f254e:{NFSU2_TR(0x4f254e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2555:{NFSU2_TR(0x4f2555);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2556:{NFSU2_TR(0x4f2556);
u8 U[4];
w4(U+0,u32(0x150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f255b:{NFSU2_TR(0x4f255b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2560ull));
TAIL_STATIC(0x575620u,575);
}
B4f2560:L4f2560:{c.instructions+=5;NFSU2_TR(0x4f2560);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f2563:{NFSU2_TR(0x4f2563);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4f2567:{NFSU2_TR(0x4f2567);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f2569:{NFSU2_TR(0x4f2569);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f2571:{NFSU2_TR(0x4f2571);
if(r1(R+518)){{goto L4f258e;}}
}
B4f2573:L4f2573:{c.instructions+=4;NFSU2_TR(0x4f2573);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2577:{NFSU2_TR(0x4f2577);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2578:{NFSU2_TR(0x4f2578);
__builtin_memmove((R+4),(R+0),4);
}
B4f257a:{NFSU2_TR(0x4f257a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f257full));
TAIL_STATIC(0x4e7d90u,4e7);
}
B4f257f:L4f257f:{c.instructions+=4;NFSU2_TR(0x4f257f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2583:{NFSU2_TR(0x4f2583);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f258a:{NFSU2_TR(0x4f258a);
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
B4f258d:{NFSU2_TR(0x4f258d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f258e:L4f258e:{c.instructions+=5;NFSU2_TR(0x4f258e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2592:{NFSU2_TR(0x4f2592);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f2594:{NFSU2_TR(0x4f2594);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f259b:{NFSU2_TR(0x4f259b);
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
B4f259e:{NFSU2_TR(0x4f259e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f25a0:L4f25a0:{c.instructions+=8;NFSU2_TR(0x4f25a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f25a2:{NFSU2_TR(0x4f25a2);
u8 U[4];
w4(U+0,u32(0x7766c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f25a7:{NFSU2_TR(0x4f25a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f25ad:{NFSU2_TR(0x4f25ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f25ae:{NFSU2_TR(0x4f25ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f25b5:{NFSU2_TR(0x4f25b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f25b6:{NFSU2_TR(0x4f25b6);
u8 U[4];
w4(U+0,u32(0x178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f25bb:{NFSU2_TR(0x4f25bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f25c0ull));
TAIL_STATIC(0x575620u,575);
}
B4f25c0:L4f25c0:{c.instructions+=5;NFSU2_TR(0x4f25c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f25c3:{NFSU2_TR(0x4f25c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4f25c7:{NFSU2_TR(0x4f25c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f25c9:{NFSU2_TR(0x4f25c9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f25d1:{NFSU2_TR(0x4f25d1);
if(r1(R+518)){{goto L4f25ee;}}
}
B4f25d3:L4f25d3:{c.instructions+=4;NFSU2_TR(0x4f25d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f25d7:{NFSU2_TR(0x4f25d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f25d8:{NFSU2_TR(0x4f25d8);
__builtin_memmove((R+4),(R+0),4);
}
B4f25da:{NFSU2_TR(0x4f25da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f25dfull));
TAIL_STATIC(0x4e7e10u,4e7);
}
B4f25df:L4f25df:{c.instructions+=4;NFSU2_TR(0x4f25df);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f25e3:{NFSU2_TR(0x4f25e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f25ea:{NFSU2_TR(0x4f25ea);
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
B4f25ed:{NFSU2_TR(0x4f25ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f25ee:L4f25ee:{c.instructions+=5;NFSU2_TR(0x4f25ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f25f2:{NFSU2_TR(0x4f25f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f25f4:{NFSU2_TR(0x4f25f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f25fb:{NFSU2_TR(0x4f25fb);
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
B4f25fe:{NFSU2_TR(0x4f25fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2600:L4f2600:{c.instructions+=13;NFSU2_TR(0x4f2600);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2602:{NFSU2_TR(0x4f2602);
u8 U[4];
w4(U+0,u32(0x7766ffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2607:{NFSU2_TR(0x4f2607);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f260d:{NFSU2_TR(0x4f260d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f260e:{NFSU2_TR(0x4f260e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2615:{NFSU2_TR(0x4f2615);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2616:{NFSU2_TR(0x4f2616);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f261a:{NFSU2_TR(0x4f261a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f261b:{NFSU2_TR(0x4f261b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f261c:{NFSU2_TR(0x4f261c);
__builtin_memmove((R+24),(R+4),4);
}
B4f261e:{NFSU2_TR(0x4f261e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f261f:{NFSU2_TR(0x4f261f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2623:{NFSU2_TR(0x4f2623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2628ull));
TAIL_STATIC(0x551de0u,551);
}
B4f2628:L4f2628:{c.instructions+=7;NFSU2_TR(0x4f2628);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f262a:{NFSU2_TR(0x4f262a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f262d:{NFSU2_TR(0x4f262d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2631:{NFSU2_TR(0x4f2631);
u8 U[4];
w4(U+0,u32(0x79030cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4f2637:{NFSU2_TR(0x4f2637);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f263a:{NFSU2_TR(0x4f263a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f263d:{NFSU2_TR(0x4f263d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2642ull));
TAIL_STATIC(0x4ff430u,4ff);
}
B4f2642:L4f2642:{c.instructions+=3;NFSU2_TR(0x4f2642);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f2648:{NFSU2_TR(0x4f2648);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f264d:{NFSU2_TR(0x4f264d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2652ull));
TAIL_STATIC(0x4ff430u,4ff);
}
B4f2652:L4f2652:{c.instructions+=3;NFSU2_TR(0x4f2652);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f2658:{NFSU2_TR(0x4f2658);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f265d:{NFSU2_TR(0x4f265d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2662ull));
TAIL_STATIC(0x4ff430u,4ff);
}
B4f2662:L4f2662:{c.instructions+=11;NFSU2_TR(0x4f2662);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f2669:{NFSU2_TR(0x4f2669);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f266f:{NFSU2_TR(0x4f266f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xfb226531ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f2676:{NFSU2_TR(0x4f2676);
__builtin_memmove((R+4),gp(0x8363c0),4);
}
B4f267c:{NFSU2_TR(0x4f267c);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B4f2682:{NFSU2_TR(0x4f2682);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f2685:{NFSU2_TR(0x4f2685);
u8 U[4];
w4(U+0,u32(0xf5a9d520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f268a:{NFSU2_TR(0x4f268a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f268b:{NFSU2_TR(0x4f268b);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f2690:{NFSU2_TR(0x4f2690);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2696:{NFSU2_TR(0x4f2696);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f269bull));
TAIL_STATIC(0x5379c0u,537);
}
B4f269b:L4f269b:{c.instructions+=2;NFSU2_TR(0x4f269b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f269c:{NFSU2_TR(0x4f269c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f26a1ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4f26a1:L4f26a1:{c.instructions+=5;NFSU2_TR(0x4f26a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f26a4:{NFSU2_TR(0x4f26a4);
u8 U[4];
w4(U+0,u32(0x7f4500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f26a9:{NFSU2_TR(0x4f26a9);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f26ae:{NFSU2_TR(0x4f26ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f26af:{NFSU2_TR(0x4f26af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f26b4ull));
TAIL_STATIC(0x537b80u,537);
}
B4f26b4:L4f26b4:{c.instructions+=3;NFSU2_TR(0x4f26b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4f26b7:{NFSU2_TR(0x4f26b7);
__builtin_memmove((R+4),(R+24),4);
}
B4f26b9:{NFSU2_TR(0x4f26b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f26beull));
TAIL_STATIC(0x4a22a0u,4a2);
}
B4f26be:L4f26be:{c.instructions+=2;NFSU2_TR(0x4f26be);
__builtin_memmove((R+4),(R+24),4);
}
B4f26c0:{NFSU2_TR(0x4f26c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f26c5ull));
TAIL_STATIC(0x4e7f50u,4e7);
}
B4f26c5:L4f26c5:{c.instructions+=5;NFSU2_TR(0x4f26c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f26c9:{NFSU2_TR(0x4f26c9);
__builtin_memmove((R+0),gp(0x7f44fc),4);
}
B4f26ce:{NFSU2_TR(0x4f26ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f26cf:{NFSU2_TR(0x4f26cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f26d0:{NFSU2_TR(0x4f26d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f26d5ull));
TAIL_STATIC(0x51ce80u,51c);
}
B4f26d5:L4f26d5:{c.instructions+=8;NFSU2_TR(0x4f26d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f26d9:{NFSU2_TR(0x4f26d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f26dc:{NFSU2_TR(0x4f26dc);
__builtin_memmove((R+0),(R+24),4);
}
B4f26de:{NFSU2_TR(0x4f26de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f26df:{NFSU2_TR(0x4f26df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f26e0:{NFSU2_TR(0x4f26e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f26e7:{NFSU2_TR(0x4f26e7);
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
B4f26ea:{NFSU2_TR(0x4f26ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f26f0:L4f26f0:{c.instructions+=12;NFSU2_TR(0x4f26f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f26f2:{NFSU2_TR(0x4f26f2);
u8 U[4];
w4(U+0,u32(0x776718ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f26f7:{NFSU2_TR(0x4f26f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f26fd:{NFSU2_TR(0x4f26fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f26fe:{NFSU2_TR(0x4f26fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2705:{NFSU2_TR(0x4f2705);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2706:{NFSU2_TR(0x4f2706);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f270a:{NFSU2_TR(0x4f270a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f270b:{NFSU2_TR(0x4f270b);
__builtin_memmove((R+24),(R+4),4);
}
B4f270d:{NFSU2_TR(0x4f270d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f270e:{NFSU2_TR(0x4f270e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2712:{NFSU2_TR(0x4f2712);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2717ull));
TAIL_STATIC(0x4e2f30u,4e2);
}
B4f2717:L4f2717:{c.instructions+=9;NFSU2_TR(0x4f2717);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f2719:{NFSU2_TR(0x4f2719);
u8 U[4];
w4(U+0,u32(0x7982e0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4f271f:{NFSU2_TR(0x4f271f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f2725:{NFSU2_TR(0x4f2725);
__builtin_memmove((R+4),gp(0x7f44fc),4);
}
B4f272b:{NFSU2_TR(0x4f272b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f272c:{NFSU2_TR(0x4f272c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f272d:{NFSU2_TR(0x4f272d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2731:{NFSU2_TR(0x4f2731);
__builtin_memmove(gp(0x838528),(R+0),1);
}
B4f2736:{NFSU2_TR(0x4f2736);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f273bull));
TAIL_STATIC(0x51ce80u,51c);
}
B4f273b:L4f273b:{c.instructions+=3;NFSU2_TR(0x4f273b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f273e:{NFSU2_TR(0x4f273e);
__builtin_memmove((R+4),(R+24),4);
}
B4f2740:{NFSU2_TR(0x4f2740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2745ull));
TAIL_STATIC(0x4e8010u,4e8);
}
B4f2745:L4f2745:{c.instructions+=6;NFSU2_TR(0x4f2745);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2749:{NFSU2_TR(0x4f2749);
__builtin_memmove((R+0),(R+24),4);
}
B4f274b:{NFSU2_TR(0x4f274b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f274c:{NFSU2_TR(0x4f274c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2753:{NFSU2_TR(0x4f2753);
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
B4f2756:{NFSU2_TR(0x4f2756);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2760:L4f2760:{c.instructions+=3;NFSU2_TR(0x4f2760);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2761:{NFSU2_TR(0x4f2761);
__builtin_memmove((R+24),(R+4),4);
}
B4f2763:{NFSU2_TR(0x4f2763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2768ull));
{goto L4f2780;}
}
B4f2768:L4f2768:{c.instructions+=2;NFSU2_TR(0x4f2768);
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
B4f276d:{NFSU2_TR(0x4f276d);
if(r1(R+518)){{goto L4f2778;}}
}
B4f276f:L4f276f:{c.instructions+=2;NFSU2_TR(0x4f276f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2770:{NFSU2_TR(0x4f2770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2775ull));
TAIL_STATIC(0x575630u,575);
}
B4f2775:L4f2775:{c.instructions+=1;NFSU2_TR(0x4f2775);
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
B4f2778:L4f2778:{c.instructions+=3;NFSU2_TR(0x4f2778);
__builtin_memmove((R+0),(R+24),4);
}
B4f277a:{NFSU2_TR(0x4f277a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f277b:{NFSU2_TR(0x4f277b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2780:L4f2780:{c.instructions+=15;NFSU2_TR(0x4f2780);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2782:{NFSU2_TR(0x4f2782);
u8 U[4];
w4(U+0,u32(0x776718ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2787:{NFSU2_TR(0x4f2787);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f278d:{NFSU2_TR(0x4f278d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f278e:{NFSU2_TR(0x4f278e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2795:{NFSU2_TR(0x4f2795);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2796:{NFSU2_TR(0x4f2796);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2797:{NFSU2_TR(0x4f2797);
__builtin_memmove((R+24),(R+4),4);
}
B4f2799:{NFSU2_TR(0x4f2799);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f279d:{NFSU2_TR(0x4f279d);
u8 U[4];
w4(U+0,u32(0x7982e0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4f27a3:{NFSU2_TR(0x4f27a3);
__builtin_memmove((R+0),gp(0x7f44fc),4);
}
B4f27a8:{NFSU2_TR(0x4f27a8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f27aa:{NFSU2_TR(0x4f27aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f27ab:{NFSU2_TR(0x4f27ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f27b3:{NFSU2_TR(0x4f27b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f27b8ull));
TAIL_STATIC(0x51ce80u,51c);
}
B4f27b8:L4f27b8:{c.instructions+=4;NFSU2_TR(0x4f27b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f27bb:{NFSU2_TR(0x4f27bb);
__builtin_memmove((R+4),(R+24),4);
}
B4f27bd:{NFSU2_TR(0x4f27bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f27c5:{NFSU2_TR(0x4f27c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f27caull));
TAIL_STATIC(0x4df030u,4df);
}
B4f27ca:L4f27ca:{c.instructions+=5;NFSU2_TR(0x4f27ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f27ce:{NFSU2_TR(0x4f27ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f27cf:{NFSU2_TR(0x4f27cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f27d6:{NFSU2_TR(0x4f27d6);
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
B4f27d9:{NFSU2_TR(0x4f27d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f27e0:L4f27e0:{c.instructions+=8;NFSU2_TR(0x4f27e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f27e2:{NFSU2_TR(0x4f27e2);
u8 U[4];
w4(U+0,u32(0x776744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f27e7:{NFSU2_TR(0x4f27e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f27ed:{NFSU2_TR(0x4f27ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f27ee:{NFSU2_TR(0x4f27ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f27f5:{NFSU2_TR(0x4f27f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f27f6:{NFSU2_TR(0x4f27f6);
u8 U[4];
w4(U+0,u32(0x108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f27fb:{NFSU2_TR(0x4f27fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2800ull));
TAIL_STATIC(0x575620u,575);
}
B4f2800:L4f2800:{c.instructions+=5;NFSU2_TR(0x4f2800);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f2803:{NFSU2_TR(0x4f2803);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4f2807:{NFSU2_TR(0x4f2807);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f2809:{NFSU2_TR(0x4f2809);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f2811:{NFSU2_TR(0x4f2811);
if(r1(R+518)){{goto L4f282e;}}
}
B4f2813:L4f2813:{c.instructions+=4;NFSU2_TR(0x4f2813);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2817:{NFSU2_TR(0x4f2817);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2818:{NFSU2_TR(0x4f2818);
__builtin_memmove((R+4),(R+0),4);
}
B4f281a:{NFSU2_TR(0x4f281a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f281full));
TAIL_STATIC(0x4e8090u,4e8);
}
B4f281f:L4f281f:{c.instructions+=4;NFSU2_TR(0x4f281f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2823:{NFSU2_TR(0x4f2823);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f282a:{NFSU2_TR(0x4f282a);
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
B4f282d:{NFSU2_TR(0x4f282d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f282e:L4f282e:{c.instructions+=5;NFSU2_TR(0x4f282e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2832:{NFSU2_TR(0x4f2832);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f2834:{NFSU2_TR(0x4f2834);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f283b:{NFSU2_TR(0x4f283b);
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
B4f283e:{NFSU2_TR(0x4f283e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2840:L4f2840:{c.instructions+=10;NFSU2_TR(0x4f2840);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2841:{NFSU2_TR(0x4f2841);
__builtin_memmove((R+20),(R+16),4);
}
B4f2843:{NFSU2_TR(0x4f2843);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4f2846:{NFSU2_TR(0x4f2846);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x280ull))));
}
B4f284c:{NFSU2_TR(0x4f284c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f284f:{NFSU2_TR(0x4f284f);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f2854:{NFSU2_TR(0x4f2854);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2855:{NFSU2_TR(0x4f2855);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2856:{NFSU2_TR(0x4f2856);
__builtin_memmove((R+24),(R+4),4);
}
B4f2858:{NFSU2_TR(0x4f2858);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f2b7e;}}
}
B4f285e:L4f285e:{c.instructions+=1;NFSU2_TR(0x4f285e);
if(r1(R+518)){{goto L4f2b5e;}}
}
B4f2864:L4f2864:{c.instructions+=2;NFSU2_TR(0x4f2864);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f2869:{NFSU2_TR(0x4f2869);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f2a9d;}}
}
B4f286f:L4f286f:{c.instructions+=1;NFSU2_TR(0x4f286f);
if(r1(R+518)){{goto L4f2a2d;}}
}
B4f2875:L4f2875:{c.instructions+=2;NFSU2_TR(0x4f2875);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f287a:{NFSU2_TR(0x4f287a);
if(r1(R+518)){{goto L4f28a7;}}
}
B4f287c:L4f287c:{c.instructions+=2;NFSU2_TR(0x4f287c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x34dc1becull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x34dc1becull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x34dc1becull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f2881:{NFSU2_TR(0x4f2881);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f2c6d;}}
}
B4f2887:L4f2887:{c.instructions+=6;NFSU2_TR(0x4f2887);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f288a:{NFSU2_TR(0x4f288a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f288c:{NFSU2_TR(0x4f288c);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2891:{NFSU2_TR(0x4f2891);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2896:{NFSU2_TR(0x4f2896);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2897:{NFSU2_TR(0x4f2897);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f289cull));
TAIL_STATIC(0x537c00u,537);
}
B4f289c:L4f289c:{c.instructions+=6;NFSU2_TR(0x4f289c);
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
B4f289f:{NFSU2_TR(0x4f289f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f28a0:{NFSU2_TR(0x4f28a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f28a1:{NFSU2_TR(0x4f28a1);
__builtin_memmove((R+16),(R+20),4);
}
B4f28a3:{NFSU2_TR(0x4f28a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f28a4:{NFSU2_TR(0x4f28a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f28a7:L4f28a7:{c.instructions+=3;NFSU2_TR(0x4f28a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f28aa:{NFSU2_TR(0x4f28aa);
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
B4f28ac:{NFSU2_TR(0x4f28ac);
if(r1(R+518)){{goto L4f2c6d;}}
}
B4f28b2:L4f28b2:{c.instructions+=3;NFSU2_TR(0x4f28b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f28b5:{NFSU2_TR(0x4f28b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xda473d2full))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f28ba:{NFSU2_TR(0x4f28ba);
if(r1(R+518)){{goto L4f29bc;}}
}
B4f28c0:L4f28c0:{c.instructions+=2;NFSU2_TR(0x4f28c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xda473d30ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f28c5:{NFSU2_TR(0x4f28c5);
if(r1(R+518)){{goto L4f2946;}}
}
B4f28c7:L4f28c7:{c.instructions+=2;NFSU2_TR(0x4f28c7);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xda473d31ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xda473d31ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xda473d31ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f28cc:{NFSU2_TR(0x4f28cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f2c6d;}}
}
B4f28d2:L4f28d2:{c.instructions+=7;NFSU2_TR(0x4f28d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f28d8:{NFSU2_TR(0x4f28d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f28db:{NFSU2_TR(0x4f28db);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f28dd:{NFSU2_TR(0x4f28dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f28de:{NFSU2_TR(0x4f28de);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B4f28e1:{NFSU2_TR(0x4f28e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f28e2:{NFSU2_TR(0x4f28e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f28e7ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4f28e7:L4f28e7:{c.instructions+=2;NFSU2_TR(0x4f28e7);
__builtin_memmove((R+4),(R+0),4);
}
B4f28e9:{NFSU2_TR(0x4f28e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f28eeull));
TAIL_STATIC(0x58d150u,58d);
}
B4f28ee:L4f28ee:{c.instructions+=6;NFSU2_TR(0x4f28ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f28f1:{NFSU2_TR(0x4f28f1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f28f3:{NFSU2_TR(0x4f28f3);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f28f8:{NFSU2_TR(0x4f28f8);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f28fd:{NFSU2_TR(0x4f28fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f28fe:{NFSU2_TR(0x4f28fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2903ull));
TAIL_STATIC(0x537c00u,537);
}
B4f2903:L4f2903:{c.instructions+=3;NFSU2_TR(0x4f2903);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f2906:{NFSU2_TR(0x4f2906);
s4(0x8667dc,u32(0x0ull));
}
B4f2910:{NFSU2_TR(0x4f2910);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2915ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4f2915:L4f2915:{c.instructions+=3;NFSU2_TR(0x4f2915);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2917:{NFSU2_TR(0x4f2917);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f291a:{NFSU2_TR(0x4f291a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f291full));
TAIL_STATIC(0x43be80u,43b);
}
B4f291f:L4f291f:{c.instructions+=2;NFSU2_TR(0x4f291f);
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
B4f2921:{NFSU2_TR(0x4f2921);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f2c6d;}}
}
B4f2927:L4f2927:{c.instructions+=3;NFSU2_TR(0x4f2927);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2928:{NFSU2_TR(0x4f2928);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f292a:{NFSU2_TR(0x4f292a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f292full));
TAIL_STATIC(0x50cee0u,50c);
}
B4f292f:L4f292f:{c.instructions+=3;NFSU2_TR(0x4f292f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2931:{NFSU2_TR(0x4f2931);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2936:{NFSU2_TR(0x4f2936);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f293bull));
TAIL_STATIC(0x55dde0u,55d);
}
B4f293b:L4f293b:{c.instructions+=6;NFSU2_TR(0x4f293b);
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
B4f293e:{NFSU2_TR(0x4f293e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f293f:{NFSU2_TR(0x4f293f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2940:{NFSU2_TR(0x4f2940);
__builtin_memmove((R+16),(R+20),4);
}
B4f2942:{NFSU2_TR(0x4f2942);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f2943:{NFSU2_TR(0x4f2943);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2946:L4f2946:{c.instructions+=4;NFSU2_TR(0x4f2946);
u8 U[5];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f294e:{NFSU2_TR(0x4f294e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f2950:{NFSU2_TR(0x4f2950);
w4(R+4,u32(0x7full));
}
B4f2955:{NFSU2_TR(0x4f2955);
u8 U[4];
w4(U+0,u32(u32(u32(0x89ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4f295c:L4f295c:{c.instructions+=1;NFSU2_TR(0x4f295c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4f295e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f295cu);}goto L4f295c;}
}
B4f295e:L4f295e:{c.instructions+=5;NFSU2_TR(0x4f295e);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4f2960:{NFSU2_TR(0x4f2960);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2965:{NFSU2_TR(0x4f2965);
u8 U[4];
w4(U+0,u32(0x8d0a8371ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f296a:{NFSU2_TR(0x4f296a);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4f296b:{NFSU2_TR(0x4f296b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2970ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f2970:L4f2970:{c.instructions+=6;NFSU2_TR(0x4f2970);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f2973:{NFSU2_TR(0x4f2973);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2974:{NFSU2_TR(0x4f2974);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f297b:{NFSU2_TR(0x4f297b);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2980:{NFSU2_TR(0x4f2980);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2981:{NFSU2_TR(0x4f2981);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2986ull));
TAIL_STATIC(0x50c960u,50c);
}
B4f2986:L4f2986:{c.instructions+=12;NFSU2_TR(0x4f2986);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f2989:{NFSU2_TR(0x4f2989);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f2990:{NFSU2_TR(0x4f2990);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2991:{NFSU2_TR(0x4f2991);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2993:{NFSU2_TR(0x4f2993);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2995:{NFSU2_TR(0x4f2995);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2997:{NFSU2_TR(0x4f2997);
u8 U[4];
w4(U+0,u32(0x427304a6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f299c:{NFSU2_TR(0x4f299c);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f29a1:{NFSU2_TR(0x4f29a1);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f29a6:{NFSU2_TR(0x4f29a6);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f29ab:{NFSU2_TR(0x4f29ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f29ac:{NFSU2_TR(0x4f29ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f29b1ull));
TAIL_STATIC(0x558750u,558);
}
B4f29b1:L4f29b1:{c.instructions+=6;NFSU2_TR(0x4f29b1);
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
B4f29b4:{NFSU2_TR(0x4f29b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f29b5:{NFSU2_TR(0x4f29b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f29b6:{NFSU2_TR(0x4f29b6);
__builtin_memmove((R+16),(R+20),4);
}
B4f29b8:{NFSU2_TR(0x4f29b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f29b9:{NFSU2_TR(0x4f29b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f29bc:L4f29bc:{c.instructions+=4;NFSU2_TR(0x4f29bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f29be:{NFSU2_TR(0x4f29be);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f29c0:{NFSU2_TR(0x4f29c0);
s4(0x8667dc,u32(0x0ull));
}
B4f29ca:{NFSU2_TR(0x4f29ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f29cfull));
TAIL_STATIC(0x50cee0u,50c);
}
B4f29cf:L4f29cf:{c.instructions+=3;NFSU2_TR(0x4f29cf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f29d1:{NFSU2_TR(0x4f29d1);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f29d6:{NFSU2_TR(0x4f29d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f29dbull));
TAIL_STATIC(0x55dde0u,55d);
}
B4f29db:L4f29db:{c.instructions+=4;NFSU2_TR(0x4f29db);
__builtin_memmove((R+0),gp(0x835fbc),4);
}
B4f29e0:{NFSU2_TR(0x4f29e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f29e3:{NFSU2_TR(0x4f29e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f29e5:{NFSU2_TR(0x4f29e5);
if(r1(R+518)){{goto L4f2a00;}}
}
B4f29e7:L4f29e7:{c.instructions+=2;NFSU2_TR(0x4f29e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f29ea:{NFSU2_TR(0x4f29ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f29eb:L4f29eb:{c.instructions+=2;NFSU2_TR(0x4f29eb);
u8 U[4];
w4(U+0,u32(0x4fbee42aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f29f0:{NFSU2_TR(0x4f29f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f29f5ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f29f5:L4f29f5:{c.instructions+=6;NFSU2_TR(0x4f29f5);
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
B4f29f8:{NFSU2_TR(0x4f29f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f29f9:{NFSU2_TR(0x4f29f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f29fa:{NFSU2_TR(0x4f29fa);
__builtin_memmove((R+16),(R+20),4);
}
B4f29fc:{NFSU2_TR(0x4f29fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f29fd:{NFSU2_TR(0x4f29fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2a00:L4f2a00:{c.instructions+=8;NFSU2_TR(0x4f2a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2a03:{NFSU2_TR(0x4f2a03);
u8 U[4];
w4(U+0,u32(0x88a7cf05ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a08:{NFSU2_TR(0x4f2a08);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a0d:{NFSU2_TR(0x4f2a0d);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a12:{NFSU2_TR(0x4f2a12);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a17:{NFSU2_TR(0x4f2a17);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a1c:{NFSU2_TR(0x4f2a1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a1d:{NFSU2_TR(0x4f2a1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2a22ull));
TAIL_STATIC(0x558570u,558);
}
B4f2a22:L4f2a22:{c.instructions+=6;NFSU2_TR(0x4f2a22);
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
B4f2a25:{NFSU2_TR(0x4f2a25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f2a26:{NFSU2_TR(0x4f2a26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2a27:{NFSU2_TR(0x4f2a27);
__builtin_memmove((R+16),(R+20),4);
}
B4f2a29:{NFSU2_TR(0x4f2a29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f2a2a:{NFSU2_TR(0x4f2a2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2a2d:L4f2a2d:{c.instructions+=5;NFSU2_TR(0x4f2a2d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a2f:{NFSU2_TR(0x4f2a2f);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a34:{NFSU2_TR(0x4f2a34);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a39:{NFSU2_TR(0x4f2a39);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a3e:{NFSU2_TR(0x4f2a3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2a43ull));
TAIL_STATIC(0x537c00u,537);
}
B4f2a43:L4f2a43:{c.instructions+=5;NFSU2_TR(0x4f2a43);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a45:{NFSU2_TR(0x4f2a45);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a4a:{NFSU2_TR(0x4f2a4a);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a4f:{NFSU2_TR(0x4f2a4f);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a54:{NFSU2_TR(0x4f2a54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2a59ull));
TAIL_STATIC(0x537c00u,537);
}
B4f2a59:L4f2a59:{c.instructions+=5;NFSU2_TR(0x4f2a59);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a5b:{NFSU2_TR(0x4f2a5b);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a60:{NFSU2_TR(0x4f2a60);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a65:{NFSU2_TR(0x4f2a65);
u8 U[4];
w4(U+0,u32(0x790210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a6a:{NFSU2_TR(0x4f2a6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2a6full));
TAIL_STATIC(0x537c00u,537);
}
B4f2a6f:L4f2a6f:{c.instructions+=4;NFSU2_TR(0x4f2a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f2a72:{NFSU2_TR(0x4f2a72);
u8 U[4];
w4(U+0,u32(0xda473d31ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a77:{NFSU2_TR(0x4f2a77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a78:{NFSU2_TR(0x4f2a78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2a7dull));
TAIL_STATIC(0x52cea0u,52c);
}
B4f2a7d:L4f2a7d:{c.instructions+=6;NFSU2_TR(0x4f2a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f2a80:{NFSU2_TR(0x4f2a80);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a82:{NFSU2_TR(0x4f2a82);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a87:{NFSU2_TR(0x4f2a87);
u8 U[4];
w4(U+0,u32(0xda473d31ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a8c:{NFSU2_TR(0x4f2a8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2a8d:{NFSU2_TR(0x4f2a8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2a92ull));
TAIL_STATIC(0x537c00u,537);
}
B4f2a92:L4f2a92:{c.instructions+=6;NFSU2_TR(0x4f2a92);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f2a95:{NFSU2_TR(0x4f2a95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f2a96:{NFSU2_TR(0x4f2a96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2a97:{NFSU2_TR(0x4f2a97);
__builtin_memmove((R+16),(R+20),4);
}
B4f2a99:{NFSU2_TR(0x4f2a99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f2a9a:{NFSU2_TR(0x4f2a9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2a9d:L4f2a9d:{c.instructions+=2;NFSU2_TR(0x4f2a9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x427304a6ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f2aa2:{NFSU2_TR(0x4f2aa2);
if(r1(R+518)){{goto L4f2ad0;}}
}
B4f2aa4:L4f2aa4:{c.instructions+=2;NFSU2_TR(0x4f2aa4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x4fbee42aull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4fbee42aull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x4fbee42aull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f2aa9:{NFSU2_TR(0x4f2aa9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f2c6d;}}
}
B4f2aaf:L4f2aaf:{c.instructions+=2;NFSU2_TR(0x4f2aaf);
__builtin_memmove((R+4),(R+24),4);
}
B4f2ab1:{NFSU2_TR(0x4f2ab1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2ab6ull));
TAIL_STATIC(0x4e8230u,4e8);
}
B4f2ab6:L4f2ab6:{c.instructions+=8;NFSU2_TR(0x4f2ab6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f2aba:{NFSU2_TR(0x4f2aba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f2ac1:{NFSU2_TR(0x4f2ac1);
s1(0x838521,u8(0x1ull));
}
B4f2ac8:{NFSU2_TR(0x4f2ac8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f2ac9:{NFSU2_TR(0x4f2ac9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2aca:{NFSU2_TR(0x4f2aca);
__builtin_memmove((R+16),(R+20),4);
}
B4f2acc:{NFSU2_TR(0x4f2acc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f2acd:{NFSU2_TR(0x4f2acd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2ad0:L4f2ad0:{c.instructions+=7;NFSU2_TR(0x4f2ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f2ad6:{NFSU2_TR(0x4f2ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2ad9:{NFSU2_TR(0x4f2ad9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2adb:{NFSU2_TR(0x4f2adb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2adc:{NFSU2_TR(0x4f2adc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B4f2adf:{NFSU2_TR(0x4f2adf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2ae0:{NFSU2_TR(0x4f2ae0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2ae5ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4f2ae5:L4f2ae5:{c.instructions+=2;NFSU2_TR(0x4f2ae5);
__builtin_memmove((R+4),(R+0),4);
}
B4f2ae7:{NFSU2_TR(0x4f2ae7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2aecull));
TAIL_STATIC(0x58d150u,58d);
}
B4f2aec:L4f2aec:{c.instructions+=1;NFSU2_TR(0x4f2aec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2af1ull));
TAIL_STATIC(0x582b60u,582);
}
B4f2af1:L4f2af1:{c.instructions+=6;NFSU2_TR(0x4f2af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f2af7:{NFSU2_TR(0x4f2af7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2af9:{NFSU2_TR(0x4f2af9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2afb:{NFSU2_TR(0x4f2afb);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2b00:{NFSU2_TR(0x4f2b00);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2b01:{NFSU2_TR(0x4f2b01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2b06ull));
TAIL_STATIC(0x7406e0u,740);
}
B4f2b06:L4f2b06:{c.instructions+=6;NFSU2_TR(0x4f2b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f2b09:{NFSU2_TR(0x4f2b09);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2b0b:{NFSU2_TR(0x4f2b0b);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2b10:{NFSU2_TR(0x4f2b10);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2b15:{NFSU2_TR(0x4f2b15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2b16:{NFSU2_TR(0x4f2b16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2b1bull));
TAIL_STATIC(0x537c00u,537);
}
B4f2b1b:L4f2b1b:{c.instructions+=3;NFSU2_TR(0x4f2b1b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4f2b1e:{NFSU2_TR(0x4f2b1e);
s4(0x8667dc,u32(0x0ull));
}
B4f2b28:{NFSU2_TR(0x4f2b28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2b2dull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4f2b2d:L4f2b2d:{c.instructions+=3;NFSU2_TR(0x4f2b2d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2b2f:{NFSU2_TR(0x4f2b2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f2b32:{NFSU2_TR(0x4f2b32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2b37ull));
TAIL_STATIC(0x43be80u,43b);
}
B4f2b37:L4f2b37:{c.instructions+=2;NFSU2_TR(0x4f2b37);
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
B4f2b39:{NFSU2_TR(0x4f2b39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f2c6d;}}
}
B4f2b3f:L4f2b3f:{c.instructions+=3;NFSU2_TR(0x4f2b3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2b40:{NFSU2_TR(0x4f2b40);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2b42:{NFSU2_TR(0x4f2b42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2b47ull));
TAIL_STATIC(0x50cee0u,50c);
}
B4f2b47:L4f2b47:{c.instructions+=3;NFSU2_TR(0x4f2b47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2b49:{NFSU2_TR(0x4f2b49);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2b4e:{NFSU2_TR(0x4f2b4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2b53ull));
TAIL_STATIC(0x55dde0u,55d);
}
B4f2b53:L4f2b53:{c.instructions+=6;NFSU2_TR(0x4f2b53);
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
B4f2b56:{NFSU2_TR(0x4f2b56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f2b57:{NFSU2_TR(0x4f2b57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2b58:{NFSU2_TR(0x4f2b58);
__builtin_memmove((R+16),(R+20),4);
}
B4f2b5a:{NFSU2_TR(0x4f2b5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f2b5b:{NFSU2_TR(0x4f2b5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2b5e:L4f2b5e:{c.instructions+=6;NFSU2_TR(0x4f2b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2b61:{NFSU2_TR(0x4f2b61);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2b63:{NFSU2_TR(0x4f2b63);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2b68:{NFSU2_TR(0x4f2b68);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2b6d:{NFSU2_TR(0x4f2b6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2b6e:{NFSU2_TR(0x4f2b6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2b73ull));
TAIL_STATIC(0x537c00u,537);
}
B4f2b73:L4f2b73:{c.instructions+=6;NFSU2_TR(0x4f2b73);
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
B4f2b76:{NFSU2_TR(0x4f2b76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f2b77:{NFSU2_TR(0x4f2b77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2b78:{NFSU2_TR(0x4f2b78);
__builtin_memmove((R+16),(R+20),4);
}
B4f2b7a:{NFSU2_TR(0x4f2b7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f2b7b:{NFSU2_TR(0x4f2b7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2b7e:L4f2b7e:{c.instructions+=2;NFSU2_TR(0x4f2b7e);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xe1fde1d1ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xe1fde1d1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f2b83:{NFSU2_TR(0x4f2b83);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f2c1f;}}
}
B4f2b89:L4f2b89:{c.instructions+=1;NFSU2_TR(0x4f2b89);
if(r1(R+518)){{goto L4f2bfa;}}
}
B4f2b8b:L4f2b8b:{c.instructions+=2;NFSU2_TR(0x4f2b8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x97c1b72full))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f2b90:{NFSU2_TR(0x4f2b90);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f2887u);}goto L4f2887;}}
}
B4f2b96:L4f2b96:{c.instructions+=2;NFSU2_TR(0x4f2b96);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc98356baull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f2b9b:{NFSU2_TR(0x4f2b9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f2c6d;}}
}
B4f2ba1:L4f2ba1:{c.instructions+=1;NFSU2_TR(0x4f2ba1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2ba6ull));
TAIL_STATIC(0x582b60u,582);
}
B4f2ba6:L4f2ba6:{c.instructions+=2;NFSU2_TR(0x4f2ba6);
__builtin_memmove((R+4),(R+0),4);
}
B4f2ba8:{NFSU2_TR(0x4f2ba8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2badull));
TAIL_STATIC(0x584f10u,584);
}
B4f2bad:L4f2bad:{c.instructions+=3;NFSU2_TR(0x4f2bad);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f2bb0:{NFSU2_TR(0x4f2bb0);
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
B4f2bb2:{NFSU2_TR(0x4f2bb2);
if(r1(R+518)){{goto L4f2c6d;}}
}
B4f2bb8:L4f2bb8:{c.instructions+=3;NFSU2_TR(0x4f2bb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f2bbb:{NFSU2_TR(0x4f2bbb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2bbc:{NFSU2_TR(0x4f2bbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2bc1ull));
TAIL_STATIC(0x5379a0u,537);
}
B4f2bc1:L4f2bc1:{c.instructions+=7;NFSU2_TR(0x4f2bc1);
s4(0x83637c,u32(0x1ull));
}
B4f2bcb:{NFSU2_TR(0x4f2bcb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f2bd1:{NFSU2_TR(0x4f2bd1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f2bd4:{NFSU2_TR(0x4f2bd4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f2bd6:{NFSU2_TR(0x4f2bd6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f2bda:{NFSU2_TR(0x4f2bda);
u8 U[4];
w4(U+0,u32(0x790210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2bdf:{NFSU2_TR(0x4f2bdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f29ebu);}goto L4f29eb;}}
}
B4f2be5:L4f2be5:{c.instructions+=2;NFSU2_TR(0x4f2be5);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2bea:{NFSU2_TR(0x4f2bea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2befull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f2bef:L4f2bef:{c.instructions+=6;NFSU2_TR(0x4f2bef);
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
B4f2bf2:{NFSU2_TR(0x4f2bf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f2bf3:{NFSU2_TR(0x4f2bf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2bf4:{NFSU2_TR(0x4f2bf4);
__builtin_memmove((R+16),(R+20),4);
}
B4f2bf6:{NFSU2_TR(0x4f2bf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f2bf7:{NFSU2_TR(0x4f2bf7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2bfa:L4f2bfa:{c.instructions+=5;NFSU2_TR(0x4f2bfa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2bfc:{NFSU2_TR(0x4f2bfc);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2c01:{NFSU2_TR(0x4f2c01);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2c06:{NFSU2_TR(0x4f2c06);
u8 U[4];
w4(U+0,u32(0x790210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2c0b:{NFSU2_TR(0x4f2c0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2c10ull));
TAIL_STATIC(0x537c00u,537);
}
B4f2c10:L4f2c10:{c.instructions+=7;NFSU2_TR(0x4f2c10);
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
B4f2c13:{NFSU2_TR(0x4f2c13);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f2c17:{NFSU2_TR(0x4f2c17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f2c18:{NFSU2_TR(0x4f2c18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2c19:{NFSU2_TR(0x4f2c19);
__builtin_memmove((R+16),(R+20),4);
}
B4f2c1b:{NFSU2_TR(0x4f2c1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f2c1c:{NFSU2_TR(0x4f2c1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2c1f:L4f2c1f:{c.instructions+=2;NFSU2_TR(0x4f2c1f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xf9e94d58ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xf9e94d58ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xf9e94d58ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f2c24:{NFSU2_TR(0x4f2c24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f2c6d;}}
}
B4f2c26:L4f2c26:{c.instructions+=3;NFSU2_TR(0x4f2c26);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2c2b:{NFSU2_TR(0x4f2c2b);
u8 U[4];
w4(U+0,u32(0xc9e362a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2c30:{NFSU2_TR(0x4f2c30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2c35ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f2c35:L4f2c35:{c.instructions+=6;NFSU2_TR(0x4f2c35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f2c38:{NFSU2_TR(0x4f2c38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2c39:{NFSU2_TR(0x4f2c39);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f2c3d:{NFSU2_TR(0x4f2c3d);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2c42:{NFSU2_TR(0x4f2c42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2c43:{NFSU2_TR(0x4f2c43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2c48ull));
TAIL_STATIC(0x50c960u,50c);
}
B4f2c48:L4f2c48:{c.instructions+=9;NFSU2_TR(0x4f2c48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f2c4b:{NFSU2_TR(0x4f2c4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4f2c4f:{NFSU2_TR(0x4f2c4f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2c50:{NFSU2_TR(0x4f2c50);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2c55:{NFSU2_TR(0x4f2c55);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2c5a:{NFSU2_TR(0x4f2c5a);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2c5f:{NFSU2_TR(0x4f2c5f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2c64:{NFSU2_TR(0x4f2c64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2c65:{NFSU2_TR(0x4f2c65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2c6aull));
TAIL_STATIC(0x558540u,558);
}
B4f2c6a:L4f2c6a:{c.instructions+=1;NFSU2_TR(0x4f2c6a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f2c6d:L4f2c6d:{c.instructions+=5;NFSU2_TR(0x4f2c6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f2c6e:{NFSU2_TR(0x4f2c6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2c6f:{NFSU2_TR(0x4f2c6f);
__builtin_memmove((R+16),(R+20),4);
}
B4f2c71:{NFSU2_TR(0x4f2c71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f2c72:{NFSU2_TR(0x4f2c72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2c80:L4f2c80:{c.instructions+=3;NFSU2_TR(0x4f2c80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2c81:{NFSU2_TR(0x4f2c81);
__builtin_memmove((R+24),(R+4),4);
}
B4f2c83:{NFSU2_TR(0x4f2c83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2c88ull));
TAIL_STATIC(0x4e83a0u,4e8);
}
B4f2c88:L4f2c88:{c.instructions+=2;NFSU2_TR(0x4f2c88);
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
B4f2c8d:{NFSU2_TR(0x4f2c8d);
if(r1(R+518)){{goto L4f2c98;}}
}
B4f2c8f:L4f2c8f:{c.instructions+=2;NFSU2_TR(0x4f2c8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2c90:{NFSU2_TR(0x4f2c90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2c95ull));
TAIL_STATIC(0x575630u,575);
}
B4f2c95:L4f2c95:{c.instructions+=1;NFSU2_TR(0x4f2c95);
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
B4f2c98:L4f2c98:{c.instructions+=3;NFSU2_TR(0x4f2c98);
__builtin_memmove((R+0),(R+24),4);
}
B4f2c9a:{NFSU2_TR(0x4f2c9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2c9b:{NFSU2_TR(0x4f2c9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2ca0:L4f2ca0:{c.instructions+=6;NFSU2_TR(0x4f2ca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f2ca4:{NFSU2_TR(0x4f2ca4);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x5f5e3886ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5f5e3886ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f2ca9:{NFSU2_TR(0x4f2ca9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2caa:{NFSU2_TR(0x4f2caa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2cab:{NFSU2_TR(0x4f2cab);
__builtin_memmove((R+24),(R+4),4);
}
B4f2cad:{NFSU2_TR(0x4f2cad);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f2d62;}}
}
B4f2cb3:L4f2cb3:{c.instructions+=1;NFSU2_TR(0x4f2cb3);
if(r1(R+518)){{goto L4f2d3e;}}
}
B4f2cb9:L4f2cb9:{c.instructions+=2;NFSU2_TR(0x4f2cb9);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x406415e3ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f2cbe:{NFSU2_TR(0x4f2cbe);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f2cf0;}}
}
B4f2cc0:L4f2cc0:{c.instructions+=1;NFSU2_TR(0x4f2cc0);
if(r1(R+518)){{goto L4f2ce4;}}
}
B4f2cc2:L4f2cc2:{c.instructions+=2;NFSU2_TR(0x4f2cc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f2cc7:{NFSU2_TR(0x4f2cc7);
if(r1(R+518)){{goto L4f2ce4;}}
}
B4f2cc9:L4f2cc9:{c.instructions+=2;NFSU2_TR(0x4f2cc9);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1a2826e1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1a2826e1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1a2826e1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f2cce:{NFSU2_TR(0x4f2cce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f2d85;}}
}
B4f2cd4:L4f2cd4:{c.instructions+=4;NFSU2_TR(0x4f2cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f2cd7:{NFSU2_TR(0x4f2cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4f2cda:{NFSU2_TR(0x4f2cda);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa79ull))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B4f2ce2:{NFSU2_TR(0x4f2ce2);
{goto L4f2d4c;}
}
B4f2ce4:L4f2ce4:{c.instructions+=2;NFSU2_TR(0x4f2ce4);
__builtin_memmove((R+4),(R+24),4);
}
B4f2ce6:{NFSU2_TR(0x4f2ce6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2cebull));
TAIL_STATIC(0x4a2b70u,4a2);
}
B4f2ceb:L4f2ceb:{c.instructions+=3;NFSU2_TR(0x4f2ceb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f2cec:{NFSU2_TR(0x4f2cec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2ced:{NFSU2_TR(0x4f2ced);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2cf0:L4f2cf0:{c.instructions+=2;NFSU2_TR(0x4f2cf0);
w1(R+512,u8((r4(R+0))<(u32(0x43a743aaull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x43a743aaull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4f2cf5:{NFSU2_TR(0x4f2cf5);
if(r1(R+518)){{goto L4f2d1e;}}
}
B4f2cf7:L4f2cf7:{c.instructions+=2;NFSU2_TR(0x4f2cf7);
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
B4f2cf8:{NFSU2_TR(0x4f2cf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f2d85;}}
}
B4f2cfe:L4f2cfe:{c.instructions+=4;NFSU2_TR(0x4f2cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f2d01:{NFSU2_TR(0x4f2d01);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f2d07:{NFSU2_TR(0x4f2d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2d0d:{NFSU2_TR(0x4f2d0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2d12ull));
TAIL_STATIC(0x54f980u,54f);
}
B4f2d12:L4f2d12:{c.instructions+=2;NFSU2_TR(0x4f2d12);
__builtin_memmove((R+4),(R+0),4);
}
B4f2d14:{NFSU2_TR(0x4f2d14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2d19ull));
TAIL_STATIC(0x55bdf0u,55b);
}
B4f2d19:L4f2d19:{c.instructions+=3;NFSU2_TR(0x4f2d19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f2d1a:{NFSU2_TR(0x4f2d1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2d1b:{NFSU2_TR(0x4f2d1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2d1e:L4f2d1e:{c.instructions+=3;NFSU2_TR(0x4f2d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2d21:{NFSU2_TR(0x4f2d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f2d27:{NFSU2_TR(0x4f2d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2d2d:L4f2d2d:{c.instructions+=1;NFSU2_TR(0x4f2d2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2d32ull));
TAIL_STATIC(0x54f980u,54f);
}
B4f2d32:L4f2d32:{c.instructions+=2;NFSU2_TR(0x4f2d32);
__builtin_memmove((R+4),(R+0),4);
}
B4f2d34:{NFSU2_TR(0x4f2d34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2d39ull));
TAIL_STATIC(0x55bdf0u,55b);
}
B4f2d39:L4f2d39:{c.instructions+=3;NFSU2_TR(0x4f2d39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f2d3a:{NFSU2_TR(0x4f2d3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2d3b:{NFSU2_TR(0x4f2d3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2d3e:L4f2d3e:{c.instructions+=3;NFSU2_TR(0x4f2d3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f2d41:{NFSU2_TR(0x4f2d41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4f2d44:{NFSU2_TR(0x4f2d44);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa79ull))+u32(r4(U+0))));
w1(U+8,u8(0x1ull));
s1(u32(r4(U+4)),r1(U+8));
}
B4f2d4c:L4f2d4c:{c.instructions+=4;NFSU2_TR(0x4f2d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2d4f:{NFSU2_TR(0x4f2d4f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2d50:{NFSU2_TR(0x4f2d50);
u8 U[4];
w4(U+0,u32(0xba5b5fceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2d55:{NFSU2_TR(0x4f2d55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2d5aull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f2d5a:L4f2d5a:{c.instructions+=4;NFSU2_TR(0x4f2d5a);
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
B4f2d5d:{NFSU2_TR(0x4f2d5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f2d5e:{NFSU2_TR(0x4f2d5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2d5f:{NFSU2_TR(0x4f2d5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2d62:L4f2d62:{c.instructions+=2;NFSU2_TR(0x4f2d62);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f2d67:{NFSU2_TR(0x4f2d67);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f2e2b;}}
}
B4f2d6d:L4f2d6d:{c.instructions+=1;NFSU2_TR(0x4f2d6d);
if(r1(R+518)){{goto L4f2d8a;}}
}
B4f2d6f:L4f2d6f:{c.instructions+=2;NFSU2_TR(0x4f2d6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f2d74:{NFSU2_TR(0x4f2d74);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f2d2du);}goto L4f2d2d;}}
}
B4f2d76:L4f2d76:{c.instructions+=2;NFSU2_TR(0x4f2d76);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f2d7b:{NFSU2_TR(0x4f2d7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f2d85;}}
}
B4f2d7d:L4f2d7d:{c.instructions+=3;NFSU2_TR(0x4f2d7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2d7e:{NFSU2_TR(0x4f2d7e);
__builtin_memmove((R+4),(R+24),4);
}
B4f2d80:{NFSU2_TR(0x4f2d80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2d85ull));
TAIL_STATIC(0x4e8530u,4e8);
}
B4f2d85:L4f2d85:{c.instructions+=3;NFSU2_TR(0x4f2d85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f2d86:{NFSU2_TR(0x4f2d86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2d87:{NFSU2_TR(0x4f2d87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2d8a:L4f2d8a:{c.instructions+=2;NFSU2_TR(0x4f2d8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f2d8d:{NFSU2_TR(0x4f2d8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2d92ull));
TAIL_STATIC(0x538130u,538);
}
B4f2d92:L4f2d92:{c.instructions+=4;NFSU2_TR(0x4f2d92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f2d98:{NFSU2_TR(0x4f2d98);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
}
B4f2d9b:{NFSU2_TR(0x4f2d9b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f2d9e:{NFSU2_TR(0x4f2d9e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f2d85u);}goto L4f2d85;}}
}
B4f2da0:L4f2da0:{c.instructions+=2;NFSU2_TR(0x4f2da0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4f2ebcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B4f2da7:{NFSU2_TR(0x4f2da7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4f2ea8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f2dae:L4f2dae:{c.instructions+=3;NFSU2_TR(0x4f2dae);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2db3:{NFSU2_TR(0x4f2db3);
__builtin_memmove((R+4),(R+24),4);
}
B4f2db5:{NFSU2_TR(0x4f2db5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2dbaull));
TAIL_STATIC(0x4e8530u,4e8);
}
B4f2dba:L4f2dba:{c.instructions+=3;NFSU2_TR(0x4f2dba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f2dbb:{NFSU2_TR(0x4f2dbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2dbc:{NFSU2_TR(0x4f2dbc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2dbf:L4f2dbf:{c.instructions+=3;NFSU2_TR(0x4f2dbf);
u8 U[4];
w4(U+0,u32(0x9120409eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2dc4:{NFSU2_TR(0x4f2dc4);
__builtin_memmove((R+4),(R+24),4);
}
B4f2dc6:{NFSU2_TR(0x4f2dc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2dcbull));
TAIL_STATIC(0x4e8530u,4e8);
}
B4f2dcb:L4f2dcb:{c.instructions+=3;NFSU2_TR(0x4f2dcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f2dcc:{NFSU2_TR(0x4f2dcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2dcd:{NFSU2_TR(0x4f2dcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2dd0:L4f2dd0:{c.instructions+=4;NFSU2_TR(0x4f2dd0);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4f2dd5:{NFSU2_TR(0x4f2dd5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4f2dd7:{NFSU2_TR(0x4f2dd7);
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
B4f2dd9:{NFSU2_TR(0x4f2dd9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f2d85u);}goto L4f2d85;}}
}
B4f2ddb:L4f2ddb:{c.instructions+=1;NFSU2_TR(0x4f2ddb);
{goto L4f2de0;}
}
B4f2de0:L4f2de0:{c.instructions+=3;NFSU2_TR(0x4f2de0);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2de5:{NFSU2_TR(0x4f2de5);
__builtin_memmove((R+4),(R+24),4);
}
B4f2de7:{NFSU2_TR(0x4f2de7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2decull));
TAIL_STATIC(0x4e8530u,4e8);
}
B4f2dec:L4f2dec:{c.instructions+=4;NFSU2_TR(0x4f2dec);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4f2df1:{NFSU2_TR(0x4f2df1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4f2df2:{NFSU2_TR(0x4f2df2);
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
B4f2df4:{NFSU2_TR(0x4f2df4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f2de0u);}goto L4f2de0;}}
}
B4f2df6:L4f2df6:{c.instructions+=3;NFSU2_TR(0x4f2df6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f2df7:{NFSU2_TR(0x4f2df7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2df8:{NFSU2_TR(0x4f2df8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2dfb:L4f2dfb:{c.instructions+=4;NFSU2_TR(0x4f2dfb);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4f2e00:{NFSU2_TR(0x4f2e00);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4f2e02:{NFSU2_TR(0x4f2e02);
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
B4f2e04:{NFSU2_TR(0x4f2e04);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f2d85u);}goto L4f2d85;}}
}
B4f2e0a:L4f2e0a:{c.instructions+=1;NFSU2_TR(0x4f2e0a);
__builtin_memmove((R+12),(R+12),4);
}
B4f2e10:L4f2e10:{c.instructions+=3;NFSU2_TR(0x4f2e10);
u8 U[4];
w4(U+0,u32(0x9120409eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2e15:{NFSU2_TR(0x4f2e15);
__builtin_memmove((R+4),(R+24),4);
}
B4f2e17:{NFSU2_TR(0x4f2e17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2e1cull));
TAIL_STATIC(0x4e8530u,4e8);
}
B4f2e1c:L4f2e1c:{c.instructions+=4;NFSU2_TR(0x4f2e1c);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4f2e21:{NFSU2_TR(0x4f2e21);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4f2e22:{NFSU2_TR(0x4f2e22);
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
B4f2e24:{NFSU2_TR(0x4f2e24);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f2e10u);}goto L4f2e10;}}
}
B4f2e26:L4f2e26:{c.instructions+=3;NFSU2_TR(0x4f2e26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f2e27:{NFSU2_TR(0x4f2e27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2e28:{NFSU2_TR(0x4f2e28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2e2b:L4f2e2b:{c.instructions+=2;NFSU2_TR(0x4f2e2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f2e30:{NFSU2_TR(0x4f2e30);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f2d7du);}goto L4f2d7d;}}
}
B4f2e36:L4f2e36:{c.instructions+=2;NFSU2_TR(0x4f2e36);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc98356baull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f2e3b:{NFSU2_TR(0x4f2e3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f2d85u);}goto L4f2d85;}}
}
B4f2e41:L4f2e41:{c.instructions+=3;NFSU2_TR(0x4f2e41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f2e47:{NFSU2_TR(0x4f2e47);
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
B4f2e49:{NFSU2_TR(0x4f2e49);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f2d85u);}goto L4f2d85;}}
}
B4f2e4f:L4f2e4f:{c.instructions+=2;NFSU2_TR(0x4f2e4f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f2e54:{NFSU2_TR(0x4f2e54);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f2d85u);}goto L4f2d85;}}
}
B4f2e5a:L4f2e5a:{c.instructions+=9;NFSU2_TR(0x4f2e5a);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4f2e5f:{NFSU2_TR(0x4f2e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4f2e65:{NFSU2_TR(0x4f2e65);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2e69:{NFSU2_TR(0x4f2e69);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4f2e6d:{NFSU2_TR(0x4f2e6d);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4f2e73:{NFSU2_TR(0x4f2e73);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4f2e79:{NFSU2_TR(0x4f2e79);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4f2e7b:{NFSU2_TR(0x4f2e7b);
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
B4f2e7e:{NFSU2_TR(0x4f2e7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f2d85u);}goto L4f2d85;}}
}
B4f2e84:L4f2e84:{c.instructions+=2;NFSU2_TR(0x4f2e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2e87:{NFSU2_TR(0x4f2e87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2e8cull));
TAIL_STATIC(0x511e00u,511);
}
B4f2e8c:L4f2e8c:{c.instructions+=4;NFSU2_TR(0x4f2e8c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2e8e:{NFSU2_TR(0x4f2e8e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2e90:{NFSU2_TR(0x4f2e90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2e91:{NFSU2_TR(0x4f2e91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2e96ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B4f2e96:L4f2e96:{c.instructions+=5;NFSU2_TR(0x4f2e96);
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
B4f2e99:{NFSU2_TR(0x4f2e99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f2e9a:{NFSU2_TR(0x4f2e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f2ea4:{NFSU2_TR(0x4f2ea4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2ea5:{NFSU2_TR(0x4f2ea5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f2ee0:L4f2ee0:{c.instructions+=9;NFSU2_TR(0x4f2ee0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4f2ee3:{NFSU2_TR(0x4f2ee3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2ee4:{NFSU2_TR(0x4f2ee4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2ee5:{NFSU2_TR(0x4f2ee5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2ee6:{NFSU2_TR(0x4f2ee6);
__builtin_memmove((R+12),(R+4),4);
}
B4f2ee8:{NFSU2_TR(0x4f2ee8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2ee9:{NFSU2_TR(0x4f2ee9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2eed:{NFSU2_TR(0x4f2eed);
w4(R+28,u32(0x1ull));
}
B4f2ef2:{NFSU2_TR(0x4f2ef2);
{goto L4f2ef8;}
}
B4f2ef4:L4f2ef4:{c.instructions+=1;NFSU2_TR(0x4f2ef4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4f2ef8:L4f2ef8:{c.instructions+=2;NFSU2_TR(0x4f2ef8);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2efa:{NFSU2_TR(0x4f2efa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2effull));
TAIL_STATIC(0x575620u,575);
}
B4f2eff:L4f2eff:{c.instructions+=4;NFSU2_TR(0x4f2eff);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4f2f01:{NFSU2_TR(0x4f2f01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f2f04:{NFSU2_TR(0x4f2f04);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f2f06:{NFSU2_TR(0x4f2f06);
if(r1(R+518)){{goto L4f2f39;}}
}
B4f2f08:L4f2f08:{c.instructions+=13;NFSU2_TR(0x4f2f08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f2f0b:{NFSU2_TR(0x4f2f0b);
u8 U[4];
w4(U+0,u32(0x79b9d4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4f2f11:{NFSU2_TR(0x4f2f11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f2f13:{NFSU2_TR(0x4f2f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2f16:{NFSU2_TR(0x4f2f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2f19:{NFSU2_TR(0x4f2f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2f1c:{NFSU2_TR(0x4f2f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2f1f:{NFSU2_TR(0x4f2f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2f22:{NFSU2_TR(0x4f2f22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2f25:{NFSU2_TR(0x4f2f25);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f2f29:{NFSU2_TR(0x4f2f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x78f228ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f2f30:{NFSU2_TR(0x4f2f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w4(U+4,u32(0x78f21cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f2f37:{NFSU2_TR(0x4f2f37);
__builtin_memmove((R+20),(R+0),4);
}
B4f2f39:L4f2f39:{c.instructions+=6;NFSU2_TR(0x4f2f39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2f3a:{NFSU2_TR(0x4f2f3a);
u8 U[4];
w4(U+0,u32(0x7978a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2f3f:{NFSU2_TR(0x4f2f3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f2f43:{NFSU2_TR(0x4f2f43);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2f45:{NFSU2_TR(0x4f2f45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2f46:{NFSU2_TR(0x4f2f46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2f4bull));
TAIL_STATIC(0x50c960u,50c);
}
B4f2f4b:L4f2f4b:{c.instructions+=4;NFSU2_TR(0x4f2f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4f2f4e:{NFSU2_TR(0x4f2f4e);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f2f52:{NFSU2_TR(0x4f2f52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2f53:{NFSU2_TR(0x4f2f53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2f58ull));
TAIL_STATIC(0x505450u,505);
}
B4f2f58:L4f2f58:{c.instructions+=3;NFSU2_TR(0x4f2f58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2f59:{NFSU2_TR(0x4f2f59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2f5a:{NFSU2_TR(0x4f2f5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2f5full));
TAIL_STATIC(0x537a10u,537);
}
B4f2f5f:L4f2f5f:{c.instructions+=3;NFSU2_TR(0x4f2f5f);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2f61:{NFSU2_TR(0x4f2f61);
__builtin_memmove((R+24),(R+0),4);
}
B4f2f63:{NFSU2_TR(0x4f2f63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2f68ull));
TAIL_STATIC(0x575620u,575);
}
B4f2f68:L4f2f68:{c.instructions+=3;NFSU2_TR(0x4f2f68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4f2f6b:{NFSU2_TR(0x4f2f6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f2f6d:{NFSU2_TR(0x4f2f6d);
if(r1(R+518)){{goto L4f2f7d;}}
}
B4f2f6f:L4f2f6f:{c.instructions+=4;NFSU2_TR(0x4f2f6f);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4f2f75:{NFSU2_TR(0x4f2f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2f78:{NFSU2_TR(0x4f2f78);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4f2f7b:{NFSU2_TR(0x4f2f7b);
{goto L4f2f7f;}
}
B4f2f7d:L4f2f7d:{c.instructions+=1;NFSU2_TR(0x4f2f7d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f2f7f:L4f2f7f:{c.instructions+=12;NFSU2_TR(0x4f2f7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2f82:{NFSU2_TR(0x4f2f82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2f83:{NFSU2_TR(0x4f2f83);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f2f86:{NFSU2_TR(0x4f2f86);
u8 U[4];
w4(U+0,u32(0x797880ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2f8b:{NFSU2_TR(0x4f2f8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f2f8d:{NFSU2_TR(0x4f2f8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4f2f91:{NFSU2_TR(0x4f2f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2f94:{NFSU2_TR(0x4f2f94);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2f96:{NFSU2_TR(0x4f2f96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2f97:{NFSU2_TR(0x4f2f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2f9a:{NFSU2_TR(0x4f2f9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f2f9c:{NFSU2_TR(0x4f2f9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2fa1ull));
TAIL_STATIC(0x50c960u,50c);
}
B4f2fa1:L4f2fa1:{c.instructions+=4;NFSU2_TR(0x4f2fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4f2fa4:{NFSU2_TR(0x4f2fa4);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f2fa8:{NFSU2_TR(0x4f2fa8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2fa9:{NFSU2_TR(0x4f2fa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2faeull));
TAIL_STATIC(0x505450u,505);
}
B4f2fae:L4f2fae:{c.instructions+=3;NFSU2_TR(0x4f2fae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2faf:{NFSU2_TR(0x4f2faf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2fb0:{NFSU2_TR(0x4f2fb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2fb5ull));
TAIL_STATIC(0x537a10u,537);
}
B4f2fb5:L4f2fb5:{c.instructions+=3;NFSU2_TR(0x4f2fb5);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2fb7:{NFSU2_TR(0x4f2fb7);
__builtin_memmove((R+12),(R+0),4);
}
B4f2fb9:{NFSU2_TR(0x4f2fb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2fbeull));
TAIL_STATIC(0x575620u,575);
}
B4f2fbe:L4f2fbe:{c.instructions+=3;NFSU2_TR(0x4f2fbe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4f2fc1:{NFSU2_TR(0x4f2fc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f2fc3:{NFSU2_TR(0x4f2fc3);
if(r1(R+518)){{goto L4f2fd3;}}
}
B4f2fc5:L4f2fc5:{c.instructions+=4;NFSU2_TR(0x4f2fc5);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4f2fcb:{NFSU2_TR(0x4f2fcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2fce:{NFSU2_TR(0x4f2fce);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4f2fd1:{NFSU2_TR(0x4f2fd1);
{goto L4f2fd5;}
}
B4f2fd3:L4f2fd3:{c.instructions+=1;NFSU2_TR(0x4f2fd3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f2fd5:L4f2fd5:{c.instructions+=11;NFSU2_TR(0x4f2fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f2fd8:{NFSU2_TR(0x4f2fd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f2fda:{NFSU2_TR(0x4f2fda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2fdb:{NFSU2_TR(0x4f2fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2fde:{NFSU2_TR(0x4f2fde);
u8 U[4];
w4(U+0,u32(0x79603cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2fe3:{NFSU2_TR(0x4f2fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f2fe6:{NFSU2_TR(0x4f2fe6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f2fea:{NFSU2_TR(0x4f2fea);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2fec:{NFSU2_TR(0x4f2fec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f2fed:{NFSU2_TR(0x4f2fed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f2fef:{NFSU2_TR(0x4f2fef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f2ff4ull));
TAIL_STATIC(0x50c960u,50c);
}
B4f2ff4:L4f2ff4:{c.instructions+=4;NFSU2_TR(0x4f2ff4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4f2ff8:{NFSU2_TR(0x4f2ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4f2ffb:{NFSU2_TR(0x4f2ffb);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4f2fff:{NFSU2_TR(0x4f2fff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x4f3000u,4f3);
}
XIT:NFSU2_TR_EXIT(0x4f2,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
