#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_4a5(u8* __restrict R,Cpu& c);
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_4c1(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52f(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4c2,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4c2,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4c2(u8* __restrict R,Cpu& c);
u32 page_4c2(Cpu& c){return body_4c2(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4c2(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4c2002:goto L4c2002;
case 0x4c2006:c.instructions+=6;goto B4c2006;
case 0x4c2009:c.instructions+=5;goto B4c2009;
case 0x4c200e:c.instructions+=4;goto B4c200e;
case 0x4c2010:c.instructions+=3;goto B4c2010;
case 0x4c2011:c.instructions+=2;goto B4c2011;
case 0x4c2012:c.instructions+=1;goto B4c2012;
case 0x4c2017:goto L4c2017;
case 0x4c201a:c.instructions+=5;goto B4c201a;
case 0x4c201b:c.instructions+=4;goto B4c201b;
case 0x4c2022:c.instructions+=3;goto B4c2022;
case 0x4c2023:c.instructions+=2;goto B4c2023;
case 0x4c2024:c.instructions+=1;goto B4c2024;
case 0x4c2030:goto L4c2030;
case 0x4c2035:c.instructions+=1;goto B4c2035;
case 0x4c203a:goto L4c203a;
case 0x4c203c:c.instructions+=5;goto B4c203c;
case 0x4c2042:c.instructions+=4;goto B4c2042;
case 0x4c2045:c.instructions+=3;goto B4c2045;
case 0x4c2047:c.instructions+=2;goto B4c2047;
case 0x4c204a:c.instructions+=1;goto B4c204a;
case 0x4c204c:goto L4c204c;
case 0x4c2052:c.instructions+=3;goto B4c2052;
case 0x4c2058:c.instructions+=2;goto B4c2058;
case 0x4c205a:c.instructions+=1;goto B4c205a;
case 0x4c205c:goto L4c205c;
case 0x4c2062:c.instructions+=2;goto B4c2062;
case 0x4c2064:c.instructions+=1;goto B4c2064;
case 0x4c2066:goto L4c2066;
case 0x4c2068:goto L4c2068;
case 0x4c2070:goto L4c2070;
case 0x4c2074:c.instructions+=3;goto B4c2074;
case 0x4c2075:c.instructions+=2;goto B4c2075;
case 0x4c2076:c.instructions+=1;goto B4c2076;
case 0x4c207b:goto L4c207b;
case 0x4c207d:c.instructions+=3;goto B4c207d;
case 0x4c2080:c.instructions+=2;goto B4c2080;
case 0x4c2082:c.instructions+=1;goto B4c2082;
case 0x4c2084:goto L4c2084;
case 0x4c2086:c.instructions+=3;goto B4c2086;
case 0x4c2088:c.instructions+=2;goto B4c2088;
case 0x4c208f:c.instructions+=1;goto B4c208f;
case 0x4c2094:goto L4c2094;
case 0x4c2098:c.instructions+=29;goto B4c2098;
case 0x4c209c:c.instructions+=28;goto B4c209c;
case 0x4c20a2:c.instructions+=27;goto B4c20a2;
case 0x4c20a4:c.instructions+=26;goto B4c20a4;
case 0x4c20aa:c.instructions+=25;goto B4c20aa;
case 0x4c20ac:c.instructions+=24;goto B4c20ac;
case 0x4c20b0:c.instructions+=23;goto B4c20b0;
case 0x4c20b1:c.instructions+=22;goto B4c20b1;
case 0x4c20b5:c.instructions+=21;goto B4c20b5;
case 0x4c20bb:c.instructions+=20;goto B4c20bb;
case 0x4c20bf:c.instructions+=19;goto B4c20bf;
case 0x4c20c0:c.instructions+=18;goto B4c20c0;
case 0x4c20c4:c.instructions+=17;goto B4c20c4;
case 0x4c20ca:c.instructions+=16;goto B4c20ca;
case 0x4c20ce:c.instructions+=15;goto B4c20ce;
case 0x4c20cf:c.instructions+=14;goto B4c20cf;
case 0x4c20d3:c.instructions+=13;goto B4c20d3;
case 0x4c20d4:c.instructions+=12;goto B4c20d4;
case 0x4c20d8:c.instructions+=11;goto B4c20d8;
case 0x4c20d9:c.instructions+=10;goto B4c20d9;
case 0x4c20dd:c.instructions+=9;goto B4c20dd;
case 0x4c20de:c.instructions+=8;goto B4c20de;
case 0x4c20e2:c.instructions+=7;goto B4c20e2;
case 0x4c20e3:c.instructions+=6;goto B4c20e3;
case 0x4c20e7:c.instructions+=5;goto B4c20e7;
case 0x4c20e8:c.instructions+=4;goto B4c20e8;
case 0x4c20e9:c.instructions+=3;goto B4c20e9;
case 0x4c20ea:c.instructions+=2;goto B4c20ea;
case 0x4c20ec:c.instructions+=1;goto B4c20ec;
case 0x4c20f1:goto L4c20f1;
case 0x4c20f2:c.instructions+=1;goto B4c20f2;
case 0x4c2100:goto L4c2100;
case 0x4c2104:c.instructions+=2;goto B4c2104;
case 0x4c2105:c.instructions+=1;goto B4c2105;
case 0x4c210a:goto L4c210a;
case 0x4c210d:c.instructions+=2;goto B4c210d;
case 0x4c210f:c.instructions+=1;goto B4c210f;
case 0x4c2111:goto L4c2111;
case 0x4c2115:c.instructions+=9;goto B4c2115;
case 0x4c2119:c.instructions+=8;goto B4c2119;
case 0x4c211b:c.instructions+=7;goto B4c211b;
case 0x4c211c:c.instructions+=6;goto B4c211c;
case 0x4c2120:c.instructions+=5;goto B4c2120;
case 0x4c2121:c.instructions+=4;goto B4c2121;
case 0x4c2122:c.instructions+=3;goto B4c2122;
case 0x4c2124:c.instructions+=2;goto B4c2124;
case 0x4c212b:c.instructions+=1;goto B4c212b;
case 0x4c2130:goto L4c2130;
case 0x4c2140:goto L4c2140;
case 0x4c2144:c.instructions+=2;goto B4c2144;
case 0x4c2145:c.instructions+=1;goto B4c2145;
case 0x4c214a:goto L4c214a;
case 0x4c214d:c.instructions+=2;goto B4c214d;
case 0x4c214f:c.instructions+=1;goto B4c214f;
case 0x4c2151:goto L4c2151;
case 0x4c2155:c.instructions+=3;goto B4c2155;
case 0x4c2156:c.instructions+=2;goto B4c2156;
case 0x4c2158:c.instructions+=1;goto B4c2158;
case 0x4c215d:goto L4c215d;
case 0x4c2160:goto L4c2160;
case 0x4c2164:c.instructions+=2;goto B4c2164;
case 0x4c2167:c.instructions+=1;goto B4c2167;
case 0x4c2170:goto L4c2170;
case 0x4c2171:c.instructions+=10;goto B4c2171;
case 0x4c2175:c.instructions+=9;goto B4c2175;
case 0x4c2176:c.instructions+=8;goto B4c2176;
case 0x4c217a:c.instructions+=7;goto B4c217a;
case 0x4c217b:c.instructions+=6;goto B4c217b;
case 0x4c217d:c.instructions+=5;goto B4c217d;
case 0x4c2183:c.instructions+=4;goto B4c2183;
case 0x4c2189:c.instructions+=3;goto B4c2189;
case 0x4c218a:c.instructions+=2;goto B4c218a;
case 0x4c218e:c.instructions+=1;goto B4c218e;
case 0x4c2190:goto L4c2190;
case 0x4c2196:c.instructions+=3;goto B4c2196;
case 0x4c2199:c.instructions+=2;goto B4c2199;
case 0x4c219a:c.instructions+=1;goto B4c219a;
case 0x4c219f:goto L4c219f;
case 0x4c21a2:c.instructions+=2;goto B4c21a2;
case 0x4c21a4:c.instructions+=1;goto B4c21a4;
case 0x4c21a6:goto L4c21a6;
case 0x4c21aa:c.instructions+=6;goto B4c21aa;
case 0x4c21ab:c.instructions+=5;goto B4c21ab;
case 0x4c21ac:c.instructions+=4;goto B4c21ac;
case 0x4c21ad:c.instructions+=3;goto B4c21ad;
case 0x4c21ae:c.instructions+=2;goto B4c21ae;
case 0x4c21b0:c.instructions+=1;goto B4c21b0;
case 0x4c21b5:goto L4c21b5;
case 0x4c21bb:c.instructions+=1;goto B4c21bb;
case 0x4c21c1:goto L4c21c1;
case 0x4c21c7:goto L4c21c7;
case 0x4c21cd:c.instructions+=1;goto B4c21cd;
case 0x4c21d3:goto L4c21d3;
case 0x4c21d9:goto L4c21d9;
case 0x4c21df:c.instructions+=1;goto B4c21df;
case 0x4c21e1:goto L4c21e1;
case 0x4c21e7:c.instructions+=1;goto B4c21e7;
case 0x4c21e9:goto L4c21e9;
case 0x4c21ef:c.instructions+=1;goto B4c21ef;
case 0x4c21f5:goto L4c21f5;
case 0x4c21f7:c.instructions+=1;goto B4c21f7;
case 0x4c21fc:goto L4c21fc;
case 0x4c21fd:c.instructions+=4;goto B4c21fd;
case 0x4c21fe:c.instructions+=3;goto B4c21fe;
case 0x4c21ff:c.instructions+=2;goto B4c21ff;
case 0x4c2200:c.instructions+=1;goto B4c2200;
case 0x4c2203:goto L4c2203;
case 0x4c2206:c.instructions+=3;goto B4c2206;
case 0x4c2207:c.instructions+=2;goto B4c2207;
case 0x4c220c:c.instructions+=1;goto B4c220c;
case 0x4c2211:goto L4c2211;
case 0x4c2214:c.instructions+=5;goto B4c2214;
case 0x4c2215:c.instructions+=4;goto B4c2215;
case 0x4c2216:c.instructions+=3;goto B4c2216;
case 0x4c2217:c.instructions+=2;goto B4c2217;
case 0x4c2218:c.instructions+=1;goto B4c2218;
case 0x4c221b:goto L4c221b;
case 0x4c221d:c.instructions+=1;goto B4c221d;
case 0x4c2222:goto L4c2222;
case 0x4c2224:c.instructions+=1;goto B4c2224;
case 0x4c222a:goto L4c222a;
case 0x4c222d:c.instructions+=4;goto B4c222d;
case 0x4c2232:c.instructions+=3;goto B4c2232;
case 0x4c2237:c.instructions+=2;goto B4c2237;
case 0x4c2238:c.instructions+=1;goto B4c2238;
case 0x4c223d:goto L4c223d;
case 0x4c2240:c.instructions+=2;goto B4c2240;
case 0x4c2242:c.instructions+=1;goto B4c2242;
case 0x4c2248:goto L4c2248;
case 0x4c224b:c.instructions+=5;goto B4c224b;
case 0x4c224d:c.instructions+=4;goto B4c224d;
case 0x4c2252:c.instructions+=3;goto B4c2252;
case 0x4c2257:c.instructions+=2;goto B4c2257;
case 0x4c2258:c.instructions+=1;goto B4c2258;
case 0x4c225d:goto L4c225d;
case 0x4c2262:goto L4c2262;
case 0x4c2263:c.instructions+=1;goto B4c2263;
case 0x4c2268:goto L4c2268;
case 0x4c226b:c.instructions+=1;goto B4c226b;
case 0x4c226d:goto L4c226d;
case 0x4c2273:c.instructions+=1;goto B4c2273;
case 0x4c2275:goto L4c2275;
case 0x4c227b:c.instructions+=1;goto B4c227b;
case 0x4c2281:goto L4c2281;
case 0x4c2283:c.instructions+=1;goto B4c2283;
case 0x4c2288:goto L4c2288;
case 0x4c2289:c.instructions+=4;goto B4c2289;
case 0x4c228a:c.instructions+=3;goto B4c228a;
case 0x4c228b:c.instructions+=2;goto B4c228b;
case 0x4c228c:c.instructions+=1;goto B4c228c;
case 0x4c228f:goto L4c228f;
case 0x4c2291:c.instructions+=1;goto B4c2291;
case 0x4c2296:goto L4c2296;
case 0x4c2297:c.instructions+=4;goto B4c2297;
case 0x4c2298:c.instructions+=3;goto B4c2298;
case 0x4c2299:c.instructions+=2;goto B4c2299;
case 0x4c229a:c.instructions+=1;goto B4c229a;
case 0x4c229d:goto L4c229d;
case 0x4c22a3:c.instructions+=3;goto B4c22a3;
case 0x4c22a5:c.instructions+=2;goto B4c22a5;
case 0x4c22a7:c.instructions+=1;goto B4c22a7;
case 0x4c22ac:goto L4c22ac;
case 0x4c22b1:goto L4c22b1;
case 0x4c22b2:c.instructions+=1;goto B4c22b2;
case 0x4c22b7:goto L4c22b7;
case 0x4c22ba:goto L4c22ba;
case 0x4c22bc:c.instructions+=1;goto B4c22bc;
case 0x4c22c2:goto L4c22c2;
case 0x4c22c7:goto L4c22c7;
case 0x4c22c8:c.instructions+=1;goto B4c22c8;
case 0x4c22cd:goto L4c22cd;
case 0x4c22d0:c.instructions+=5;goto B4c22d0;
case 0x4c22d1:c.instructions+=4;goto B4c22d1;
case 0x4c22d2:c.instructions+=3;goto B4c22d2;
case 0x4c22d3:c.instructions+=2;goto B4c22d3;
case 0x4c22d4:c.instructions+=1;goto B4c22d4;
case 0x4c22d7:goto L4c22d7;
case 0x4c22dd:c.instructions+=1;goto B4c22dd;
case 0x4c22e3:goto L4c22e3;
case 0x4c22e9:goto L4c22e9;
case 0x4c22ef:c.instructions+=1;goto B4c22ef;
case 0x4c22f1:goto L4c22f1;
case 0x4c22f7:c.instructions+=1;goto B4c22f7;
case 0x4c22fd:goto L4c22fd;
case 0x4c2303:c.instructions+=1;goto B4c2303;
case 0x4c2309:goto L4c2309;
case 0x4c230c:c.instructions+=3;goto B4c230c;
case 0x4c230d:c.instructions+=2;goto B4c230d;
case 0x4c2312:c.instructions+=1;goto B4c2312;
case 0x4c2317:goto L4c2317;
case 0x4c231c:goto L4c231c;
case 0x4c231d:c.instructions+=1;goto B4c231d;
case 0x4c2322:goto L4c2322;
case 0x4c2325:c.instructions+=2;goto B4c2325;
case 0x4c2327:c.instructions+=1;goto B4c2327;
case 0x4c2329:goto L4c2329;
case 0x4c232c:c.instructions+=4;goto B4c232c;
case 0x4c232e:c.instructions+=3;goto B4c232e;
case 0x4c2333:c.instructions+=2;goto B4c2333;
case 0x4c2334:c.instructions+=1;goto B4c2334;
case 0x4c2339:goto L4c2339;
case 0x4c233a:c.instructions+=1;goto B4c233a;
case 0x4c233f:goto L4c233f;
case 0x4c2342:goto L4c2342;
case 0x4c2348:c.instructions+=1;goto B4c2348;
case 0x4c234d:goto L4c234d;
case 0x4c2350:c.instructions+=5;goto B4c2350;
case 0x4c2353:c.instructions+=4;goto B4c2353;
case 0x4c2354:c.instructions+=3;goto B4c2354;
case 0x4c2355:c.instructions+=2;goto B4c2355;
case 0x4c235b:c.instructions+=1;goto B4c235b;
case 0x4c2360:goto L4c2360;
case 0x4c2361:c.instructions+=4;goto B4c2361;
case 0x4c2362:c.instructions+=3;goto B4c2362;
case 0x4c2363:c.instructions+=2;goto B4c2363;
case 0x4c2364:c.instructions+=1;goto B4c2364;
case 0x4c2367:goto L4c2367;
case 0x4c236a:c.instructions+=3;goto B4c236a;
case 0x4c236b:c.instructions+=2;goto B4c236b;
case 0x4c2370:c.instructions+=1;goto B4c2370;
case 0x4c2375:goto L4c2375;
case 0x4c2378:c.instructions+=5;goto B4c2378;
case 0x4c2379:c.instructions+=4;goto B4c2379;
case 0x4c237a:c.instructions+=3;goto B4c237a;
case 0x4c237b:c.instructions+=2;goto B4c237b;
case 0x4c237c:c.instructions+=1;goto B4c237c;
case 0x4c237f:goto L4c237f;
case 0x4c2381:c.instructions+=1;goto B4c2381;
case 0x4c2386:goto L4c2386;
case 0x4c2388:c.instructions+=1;goto B4c2388;
case 0x4c238e:goto L4c238e;
case 0x4c2391:c.instructions+=4;goto B4c2391;
case 0x4c2396:c.instructions+=3;goto B4c2396;
case 0x4c239b:c.instructions+=2;goto B4c239b;
case 0x4c239c:c.instructions+=1;goto B4c239c;
case 0x4c23a1:goto L4c23a1;
case 0x4c23a4:c.instructions+=2;goto B4c23a4;
case 0x4c23a6:c.instructions+=1;goto B4c23a6;
case 0x4c23ac:goto L4c23ac;
case 0x4c23b1:goto L4c23b1;
case 0x4c23b2:c.instructions+=1;goto B4c23b2;
case 0x4c23b7:goto L4c23b7;
case 0x4c23ba:c.instructions+=2;goto B4c23ba;
case 0x4c23bc:c.instructions+=1;goto B4c23bc;
case 0x4c23be:goto L4c23be;
case 0x4c23c3:goto L4c23c3;
case 0x4c23c4:c.instructions+=1;goto B4c23c4;
case 0x4c23c9:goto L4c23c9;
case 0x4c23cc:goto L4c23cc;
case 0x4c23ce:c.instructions+=1;goto B4c23ce;
case 0x4c23d3:goto L4c23d3;
case 0x4c23d7:c.instructions+=6;goto B4c23d7;
case 0x4c23d8:c.instructions+=5;goto B4c23d8;
case 0x4c23d9:c.instructions+=4;goto B4c23d9;
case 0x4c23da:c.instructions+=3;goto B4c23da;
case 0x4c23db:c.instructions+=2;goto B4c23db;
case 0x4c23dd:c.instructions+=1;goto B4c23dd;
case 0x4c23e2:goto L4c23e2;
case 0x4c23e5:c.instructions+=5;goto B4c23e5;
case 0x4c23e7:c.instructions+=4;goto B4c23e7;
case 0x4c23ec:c.instructions+=3;goto B4c23ec;
case 0x4c23f1:c.instructions+=2;goto B4c23f1;
case 0x4c23f2:c.instructions+=1;goto B4c23f2;
case 0x4c23f7:goto L4c23f7;
case 0x4c23fa:c.instructions+=3;goto B4c23fa;
case 0x4c23fc:c.instructions+=2;goto B4c23fc;
case 0x4c23fd:c.instructions+=1;goto B4c23fd;
case 0x4c2402:goto L4c2402;
case 0x4c2405:c.instructions+=5;goto B4c2405;
case 0x4c2406:c.instructions+=4;goto B4c2406;
case 0x4c2407:c.instructions+=3;goto B4c2407;
case 0x4c2408:c.instructions+=2;goto B4c2408;
case 0x4c2409:c.instructions+=1;goto B4c2409;
case 0x4c240c:goto L4c240c;
case 0x4c2412:c.instructions+=1;goto B4c2412;
case 0x4c2414:goto L4c2414;
case 0x4c241a:c.instructions+=1;goto B4c241a;
case 0x4c241c:goto L4c241c;
case 0x4c2422:c.instructions+=2;goto B4c2422;
case 0x4c2427:c.instructions+=1;goto B4c2427;
case 0x4c2429:goto L4c2429;
case 0x4c242b:goto L4c242b;
case 0x4c2430:c.instructions+=1;goto B4c2430;
case 0x4c2432:goto L4c2432;
case 0x4c2434:goto L4c2434;
case 0x4c2439:c.instructions+=1;goto B4c2439;
case 0x4c243b:goto L4c243b;
case 0x4c2440:c.instructions+=1;goto B4c2440;
case 0x4c2442:goto L4c2442;
case 0x4c2444:c.instructions+=1;goto B4c2444;
case 0x4c2449:goto L4c2449;
case 0x4c244a:c.instructions+=4;goto B4c244a;
case 0x4c244b:c.instructions+=3;goto B4c244b;
case 0x4c244c:c.instructions+=2;goto B4c244c;
case 0x4c244d:c.instructions+=1;goto B4c244d;
case 0x4c2450:goto L4c2450;
case 0x4c2456:c.instructions+=2;goto B4c2456;
case 0x4c2458:c.instructions+=1;goto B4c2458;
case 0x4c245d:goto L4c245d;
case 0x4c245e:c.instructions+=4;goto B4c245e;
case 0x4c245f:c.instructions+=3;goto B4c245f;
case 0x4c2460:c.instructions+=2;goto B4c2460;
case 0x4c2461:c.instructions+=1;goto B4c2461;
case 0x4c2464:goto L4c2464;
case 0x4c2469:c.instructions+=1;goto B4c2469;
case 0x4c246b:goto L4c246b;
case 0x4c246d:c.instructions+=1;goto B4c246d;
case 0x4c2472:goto L4c2472;
case 0x4c2473:c.instructions+=4;goto B4c2473;
case 0x4c2474:c.instructions+=3;goto B4c2474;
case 0x4c2475:c.instructions+=2;goto B4c2475;
case 0x4c2476:c.instructions+=1;goto B4c2476;
case 0x4c2479:goto L4c2479;
case 0x4c247e:c.instructions+=1;goto B4c247e;
case 0x4c2480:goto L4c2480;
case 0x4c2485:c.instructions+=1;goto B4c2485;
case 0x4c2487:goto L4c2487;
case 0x4c248c:c.instructions+=1;goto B4c248c;
case 0x4c248e:goto L4c248e;
case 0x4c2494:c.instructions+=2;goto B4c2494;
case 0x4c2496:c.instructions+=1;goto B4c2496;
case 0x4c249b:goto L4c249b;
case 0x4c249c:c.instructions+=4;goto B4c249c;
case 0x4c249d:c.instructions+=3;goto B4c249d;
case 0x4c249e:c.instructions+=2;goto B4c249e;
case 0x4c249f:c.instructions+=1;goto B4c249f;
case 0x4c24a2:goto L4c24a2;
case 0x4c24a8:c.instructions+=2;goto B4c24a8;
case 0x4c24aa:c.instructions+=1;goto B4c24aa;
case 0x4c24af:goto L4c24af;
case 0x4c24b0:c.instructions+=4;goto B4c24b0;
case 0x4c24b1:c.instructions+=3;goto B4c24b1;
case 0x4c24b2:c.instructions+=2;goto B4c24b2;
case 0x4c24b3:c.instructions+=1;goto B4c24b3;
case 0x4c24c0:goto L4c24c0;
case 0x4c24c8:c.instructions+=1;goto B4c24c8;
case 0x4c24ca:goto L4c24ca;
case 0x4c24d0:c.instructions+=2;goto B4c24d0;
case 0x4c24d2:c.instructions+=1;goto B4c24d2;
case 0x4c24d7:goto L4c24d7;
case 0x4c24db:c.instructions+=3;goto B4c24db;
case 0x4c24dd:c.instructions+=2;goto B4c24dd;
case 0x4c24de:c.instructions+=1;goto B4c24de;
case 0x4c24e3:goto L4c24e3;
case 0x4c24e8:goto L4c24e8;
case 0x4c24e9:c.instructions+=1;goto B4c24e9;
case 0x4c24ee:goto L4c24ee;
case 0x4c24f1:c.instructions+=2;goto B4c24f1;
case 0x4c24f3:c.instructions+=1;goto B4c24f3;
case 0x4c24f5:goto L4c24f5;
case 0x4c24fa:goto L4c24fa;
case 0x4c24fb:c.instructions+=1;goto B4c24fb;
case 0x4c2500:goto L4c2500;
case 0x4c2501:goto L4c2501;
case 0x4c2510:goto L4c2510;
case 0x4c2518:c.instructions+=1;goto B4c2518;
case 0x4c251a:goto L4c251a;
case 0x4c2520:c.instructions+=2;goto B4c2520;
case 0x4c2522:c.instructions+=1;goto B4c2522;
case 0x4c2527:goto L4c2527;
case 0x4c252b:c.instructions+=3;goto B4c252b;
case 0x4c252d:c.instructions+=2;goto B4c252d;
case 0x4c252e:c.instructions+=1;goto B4c252e;
case 0x4c2533:goto L4c2533;
case 0x4c2538:goto L4c2538;
case 0x4c2539:c.instructions+=1;goto B4c2539;
case 0x4c253e:goto L4c253e;
case 0x4c2541:c.instructions+=2;goto B4c2541;
case 0x4c2543:c.instructions+=1;goto B4c2543;
case 0x4c2545:goto L4c2545;
case 0x4c254a:goto L4c254a;
case 0x4c254b:c.instructions+=1;goto B4c254b;
case 0x4c2550:goto L4c2550;
case 0x4c2551:goto L4c2551;
case 0x4c2560:goto L4c2560;
case 0x4c2568:c.instructions+=1;goto B4c2568;
case 0x4c256a:goto L4c256a;
case 0x4c256f:c.instructions+=2;goto B4c256f;
case 0x4c2572:c.instructions+=1;goto B4c2572;
case 0x4c2574:goto L4c2574;
case 0x4c2578:c.instructions+=1;goto B4c2578;
case 0x4c257a:goto L4c257a;
case 0x4c257f:c.instructions+=1;goto B4c257f;
case 0x4c2581:goto L4c2581;
case 0x4c2583:goto L4c2583;
case 0x4c2585:c.instructions+=15;goto B4c2585;
case 0x4c2586:c.instructions+=14;goto B4c2586;
case 0x4c258a:c.instructions+=13;goto B4c258a;
case 0x4c258c:c.instructions+=12;goto B4c258c;
case 0x4c2591:c.instructions+=11;goto B4c2591;
case 0x4c2596:c.instructions+=10;goto B4c2596;
case 0x4c2597:c.instructions+=9;goto B4c2597;
case 0x4c2599:c.instructions+=8;goto B4c2599;
case 0x4c259e:c.instructions+=7;goto B4c259e;
case 0x4c25a3:c.instructions+=6;goto B4c25a3;
case 0x4c25a8:c.instructions+=5;goto B4c25a8;
case 0x4c25ad:c.instructions+=4;goto B4c25ad;
case 0x4c25b2:c.instructions+=3;goto B4c25b2;
case 0x4c25b7:c.instructions+=2;goto B4c25b7;
case 0x4c25b8:c.instructions+=1;goto B4c25b8;
case 0x4c25bd:goto L4c25bd;
case 0x4c25be:c.instructions+=2;goto B4c25be;
case 0x4c25c3:c.instructions+=1;goto B4c25c3;
case 0x4c25c8:goto L4c25c8;
case 0x4c25cb:c.instructions+=1;goto B4c25cb;
case 0x4c25cc:goto L4c25cc;
case 0x4c25d0:goto L4c25d0;
case 0x4c25d5:c.instructions+=2;goto B4c25d5;
case 0x4c25d8:c.instructions+=1;goto B4c25d8;
case 0x4c25da:goto L4c25da;
case 0x4c25de:c.instructions+=1;goto B4c25de;
case 0x4c25e0:goto L4c25e0;
case 0x4c25e5:c.instructions+=1;goto B4c25e5;
case 0x4c25e7:goto L4c25e7;
case 0x4c25e9:goto L4c25e9;
case 0x4c25f1:c.instructions+=1;goto B4c25f1;
case 0x4c25f3:goto L4c25f3;
case 0x4c25f5:c.instructions+=15;goto B4c25f5;
case 0x4c25f6:c.instructions+=14;goto B4c25f6;
case 0x4c25fa:c.instructions+=13;goto B4c25fa;
case 0x4c25fc:c.instructions+=12;goto B4c25fc;
case 0x4c2601:c.instructions+=11;goto B4c2601;
case 0x4c2606:c.instructions+=10;goto B4c2606;
case 0x4c2607:c.instructions+=9;goto B4c2607;
case 0x4c2609:c.instructions+=8;goto B4c2609;
case 0x4c260e:c.instructions+=7;goto B4c260e;
case 0x4c2613:c.instructions+=6;goto B4c2613;
case 0x4c2618:c.instructions+=5;goto B4c2618;
case 0x4c261d:c.instructions+=4;goto B4c261d;
case 0x4c2622:c.instructions+=3;goto B4c2622;
case 0x4c2627:c.instructions+=2;goto B4c2627;
case 0x4c2628:c.instructions+=1;goto B4c2628;
case 0x4c262d:goto L4c262d;
case 0x4c262e:c.instructions+=2;goto B4c262e;
case 0x4c2633:c.instructions+=1;goto B4c2633;
case 0x4c2638:goto L4c2638;
case 0x4c263b:c.instructions+=1;goto B4c263b;
case 0x4c263c:goto L4c263c;
case 0x4c2640:goto L4c2640;
case 0x4c2644:c.instructions+=9;goto B4c2644;
case 0x4c2648:c.instructions+=8;goto B4c2648;
case 0x4c2649:c.instructions+=7;goto B4c2649;
case 0x4c264b:c.instructions+=6;goto B4c264b;
case 0x4c264f:c.instructions+=5;goto B4c264f;
case 0x4c2650:c.instructions+=4;goto B4c2650;
case 0x4c2651:c.instructions+=3;goto B4c2651;
case 0x4c2652:c.instructions+=2;goto B4c2652;
case 0x4c2654:c.instructions+=1;goto B4c2654;
case 0x4c2659:goto L4c2659;
case 0x4c265f:c.instructions+=4;goto B4c265f;
case 0x4c2664:c.instructions+=3;goto B4c2664;
case 0x4c266a:c.instructions+=2;goto B4c266a;
case 0x4c266c:c.instructions+=1;goto B4c266c;
case 0x4c266e:goto L4c266e;
case 0x4c2674:c.instructions+=2;goto B4c2674;
case 0x4c2676:c.instructions+=1;goto B4c2676;
case 0x4c2678:goto L4c2678;
case 0x4c267d:c.instructions+=2;goto B4c267d;
case 0x4c267f:c.instructions+=1;goto B4c267f;
case 0x4c2681:goto L4c2681;
case 0x4c2686:c.instructions+=6;goto B4c2686;
case 0x4c2688:c.instructions+=5;goto B4c2688;
case 0x4c268b:c.instructions+=4;goto B4c268b;
case 0x4c268e:c.instructions+=3;goto B4c268e;
case 0x4c2690:c.instructions+=2;goto B4c2690;
case 0x4c2691:c.instructions+=1;goto B4c2691;
case 0x4c2694:goto L4c2694;
case 0x4c2696:c.instructions+=6;goto B4c2696;
case 0x4c2698:c.instructions+=5;goto B4c2698;
case 0x4c269b:c.instructions+=4;goto B4c269b;
case 0x4c269e:c.instructions+=3;goto B4c269e;
case 0x4c26a0:c.instructions+=2;goto B4c26a0;
case 0x4c26a1:c.instructions+=1;goto B4c26a1;
case 0x4c26b0:goto L4c26b0;
case 0x4c26b8:c.instructions+=1;goto B4c26b8;
case 0x4c26ba:goto L4c26ba;
case 0x4c26bf:c.instructions+=3;goto B4c26bf;
case 0x4c26c5:c.instructions+=2;goto B4c26c5;
case 0x4c26c7:c.instructions+=1;goto B4c26c7;
case 0x4c26c9:goto L4c26c9;
case 0x4c26cf:c.instructions+=2;goto B4c26cf;
case 0x4c26d1:c.instructions+=1;goto B4c26d1;
case 0x4c26d3:goto L4c26d3;
case 0x4c26d8:c.instructions+=2;goto B4c26d8;
case 0x4c26da:c.instructions+=1;goto B4c26da;
case 0x4c26dc:goto L4c26dc;
case 0x4c26dd:c.instructions+=5;goto B4c26dd;
case 0x4c26e1:c.instructions+=4;goto B4c26e1;
case 0x4c26e3:c.instructions+=3;goto B4c26e3;
case 0x4c26e8:c.instructions+=2;goto B4c26e8;
case 0x4c26e9:c.instructions+=1;goto B4c26e9;
case 0x4c26ee:goto L4c26ee;
case 0x4c26f1:c.instructions+=2;goto B4c26f1;
case 0x4c26f7:c.instructions+=1;goto B4c26f7;
case 0x4c26f8:goto L4c26f8;
case 0x4c2700:goto L4c2700;
case 0x4c2708:c.instructions+=1;goto B4c2708;
case 0x4c270a:goto L4c270a;
case 0x4c270e:c.instructions+=4;goto B4c270e;
case 0x4c2710:c.instructions+=3;goto B4c2710;
case 0x4c2715:c.instructions+=2;goto B4c2715;
case 0x4c2716:c.instructions+=1;goto B4c2716;
case 0x4c271b:goto L4c271b;
case 0x4c271e:goto L4c271e;
case 0x4c2730:goto L4c2730;
case 0x4c2738:c.instructions+=1;goto B4c2738;
case 0x4c273a:goto L4c273a;
case 0x4c273b:c.instructions+=11;goto B4c273b;
case 0x4c273f:c.instructions+=10;goto B4c273f;
case 0x4c2744:c.instructions+=9;goto B4c2744;
case 0x4c2746:c.instructions+=8;goto B4c2746;
case 0x4c274b:c.instructions+=7;goto B4c274b;
case 0x4c2750:c.instructions+=6;goto B4c2750;
case 0x4c2755:c.instructions+=5;goto B4c2755;
case 0x4c275a:c.instructions+=4;goto B4c275a;
case 0x4c275f:c.instructions+=3;goto B4c275f;
case 0x4c2764:c.instructions+=2;goto B4c2764;
case 0x4c2765:c.instructions+=1;goto B4c2765;
case 0x4c276a:goto L4c276a;
case 0x4c276b:c.instructions+=2;goto B4c276b;
case 0x4c2770:c.instructions+=1;goto B4c2770;
case 0x4c2775:goto L4c2775;
case 0x4c2778:c.instructions+=1;goto B4c2778;
case 0x4c2779:goto L4c2779;
case 0x4c2780:goto L4c2780;
case 0x4c2788:c.instructions+=1;goto B4c2788;
case 0x4c278a:goto L4c278a;
case 0x4c278f:c.instructions+=2;goto B4c278f;
case 0x4c2792:c.instructions+=1;goto B4c2792;
case 0x4c2794:goto L4c2794;
case 0x4c2798:c.instructions+=1;goto B4c2798;
case 0x4c279a:goto L4c279a;
case 0x4c279f:c.instructions+=1;goto B4c279f;
case 0x4c27a1:goto L4c27a1;
case 0x4c27a3:goto L4c27a3;
case 0x4c27a5:c.instructions+=15;goto B4c27a5;
case 0x4c27a6:c.instructions+=14;goto B4c27a6;
case 0x4c27aa:c.instructions+=13;goto B4c27aa;
case 0x4c27ac:c.instructions+=12;goto B4c27ac;
case 0x4c27b1:c.instructions+=11;goto B4c27b1;
case 0x4c27b6:c.instructions+=10;goto B4c27b6;
case 0x4c27b7:c.instructions+=9;goto B4c27b7;
case 0x4c27b9:c.instructions+=8;goto B4c27b9;
case 0x4c27be:c.instructions+=7;goto B4c27be;
case 0x4c27c3:c.instructions+=6;goto B4c27c3;
case 0x4c27c8:c.instructions+=5;goto B4c27c8;
case 0x4c27cd:c.instructions+=4;goto B4c27cd;
case 0x4c27d2:c.instructions+=3;goto B4c27d2;
case 0x4c27d7:c.instructions+=2;goto B4c27d7;
case 0x4c27d8:c.instructions+=1;goto B4c27d8;
case 0x4c27dd:goto L4c27dd;
case 0x4c27de:c.instructions+=2;goto B4c27de;
case 0x4c27e3:c.instructions+=1;goto B4c27e3;
case 0x4c27e8:goto L4c27e8;
case 0x4c27eb:c.instructions+=1;goto B4c27eb;
case 0x4c27ec:goto L4c27ec;
case 0x4c27f0:goto L4c27f0;
case 0x4c27f4:c.instructions+=9;goto B4c27f4;
case 0x4c27f8:c.instructions+=8;goto B4c27f8;
case 0x4c27f9:c.instructions+=7;goto B4c27f9;
case 0x4c27fb:c.instructions+=6;goto B4c27fb;
case 0x4c27ff:c.instructions+=5;goto B4c27ff;
case 0x4c2800:c.instructions+=4;goto B4c2800;
case 0x4c2801:c.instructions+=3;goto B4c2801;
case 0x4c2802:c.instructions+=2;goto B4c2802;
case 0x4c2804:c.instructions+=1;goto B4c2804;
case 0x4c2809:goto L4c2809;
case 0x4c280f:c.instructions+=4;goto B4c280f;
case 0x4c2813:c.instructions+=3;goto B4c2813;
case 0x4c2815:c.instructions+=2;goto B4c2815;
case 0x4c2816:c.instructions+=1;goto B4c2816;
case 0x4c2820:goto L4c2820;
case 0x4c2828:c.instructions+=1;goto B4c2828;
case 0x4c282e:goto L4c282e;
case 0x4c2833:c.instructions+=2;goto B4c2833;
case 0x4c2836:c.instructions+=1;goto B4c2836;
case 0x4c2838:goto L4c2838;
case 0x4c283d:c.instructions+=1;goto B4c283d;
case 0x4c2842:goto L4c2842;
case 0x4c2844:c.instructions+=2;goto B4c2844;
case 0x4c2849:c.instructions+=1;goto B4c2849;
case 0x4c284b:goto L4c284b;
case 0x4c284d:c.instructions+=4;goto B4c284d;
case 0x4c284f:c.instructions+=3;goto B4c284f;
case 0x4c2854:c.instructions+=2;goto B4c2854;
case 0x4c2859:c.instructions+=1;goto B4c2859;
case 0x4c285b:goto L4c285b;
case 0x4c285d:c.instructions+=4;goto B4c285d;
case 0x4c285f:c.instructions+=3;goto B4c285f;
case 0x4c2864:c.instructions+=2;goto B4c2864;
case 0x4c2869:c.instructions+=1;goto B4c2869;
case 0x4c286b:goto L4c286b;
case 0x4c2870:c.instructions+=1;goto B4c2870;
case 0x4c2872:goto L4c2872;
case 0x4c2877:c.instructions+=1;goto B4c2877;
case 0x4c287c:goto L4c287c;
case 0x4c287e:c.instructions+=4;goto B4c287e;
case 0x4c2880:c.instructions+=3;goto B4c2880;
case 0x4c2885:c.instructions+=2;goto B4c2885;
case 0x4c288a:c.instructions+=1;goto B4c288a;
case 0x4c288c:goto L4c288c;
case 0x4c2892:c.instructions+=2;goto B4c2892;
case 0x4c2895:c.instructions+=1;goto B4c2895;
case 0x4c2897:goto L4c2897;
case 0x4c289b:c.instructions+=1;goto B4c289b;
case 0x4c289d:goto L4c289d;
case 0x4c28a2:c.instructions+=1;goto B4c28a2;
case 0x4c28a4:goto L4c28a4;
case 0x4c28a5:c.instructions+=4;goto B4c28a5;
case 0x4c28a7:c.instructions+=3;goto B4c28a7;
case 0x4c28a9:c.instructions+=2;goto B4c28a9;
case 0x4c28ae:c.instructions+=1;goto B4c28ae;
case 0x4c28b3:goto L4c28b3;
case 0x4c28b4:c.instructions+=11;goto B4c28b4;
case 0x4c28b8:c.instructions+=10;goto B4c28b8;
case 0x4c28b9:c.instructions+=9;goto B4c28b9;
case 0x4c28bb:c.instructions+=8;goto B4c28bb;
case 0x4c28c0:c.instructions+=7;goto B4c28c0;
case 0x4c28c5:c.instructions+=6;goto B4c28c5;
case 0x4c28ca:c.instructions+=5;goto B4c28ca;
case 0x4c28cf:c.instructions+=4;goto B4c28cf;
case 0x4c28d4:c.instructions+=3;goto B4c28d4;
case 0x4c28d9:c.instructions+=2;goto B4c28d9;
case 0x4c28da:c.instructions+=1;goto B4c28da;
case 0x4c28df:goto L4c28df;
case 0x4c28e0:c.instructions+=2;goto B4c28e0;
case 0x4c28e5:c.instructions+=1;goto B4c28e5;
case 0x4c28ea:goto L4c28ea;
case 0x4c28ed:c.instructions+=1;goto B4c28ed;
case 0x4c28ee:goto L4c28ee;
case 0x4c2900:goto L4c2900;
case 0x4c2902:c.instructions+=13;goto B4c2902;
case 0x4c2907:c.instructions+=12;goto B4c2907;
case 0x4c290d:c.instructions+=11;goto B4c290d;
case 0x4c290e:c.instructions+=10;goto B4c290e;
case 0x4c2915:c.instructions+=9;goto B4c2915;
case 0x4c2916:c.instructions+=8;goto B4c2916;
case 0x4c2917:c.instructions+=7;goto B4c2917;
case 0x4c2918:c.instructions+=6;goto B4c2918;
case 0x4c291e:c.instructions+=5;goto B4c291e;
case 0x4c2923:c.instructions+=4;goto B4c2923;
case 0x4c2925:c.instructions+=3;goto B4c2925;
case 0x4c2926:c.instructions+=2;goto B4c2926;
case 0x4c2928:c.instructions+=1;goto B4c2928;
case 0x4c292a:goto L4c292a;
case 0x4c2931:c.instructions+=1;goto B4c2931;
case 0x4c2937:goto L4c2937;
case 0x4c2939:c.instructions+=1;goto B4c2939;
case 0x4c293e:goto L4c293e;
case 0x4c2940:c.instructions+=5;goto B4c2940;
case 0x4c2943:c.instructions+=4;goto B4c2943;
case 0x4c2947:c.instructions+=3;goto B4c2947;
case 0x4c2949:c.instructions+=2;goto B4c2949;
case 0x4c2951:c.instructions+=1;goto B4c2951;
case 0x4c2953:goto L4c2953;
case 0x4c2955:c.instructions+=4;goto B4c2955;
case 0x4c295a:c.instructions+=3;goto B4c295a;
case 0x4c295f:c.instructions+=2;goto B4c295f;
case 0x4c2961:c.instructions+=1;goto B4c2961;
case 0x4c2966:goto L4c2966;
case 0x4c296c:c.instructions+=1;goto B4c296c;
case 0x4c296e:goto L4c296e;
case 0x4c2970:goto L4c2970;
case 0x4c2972:c.instructions+=4;goto B4c2972;
case 0x4c2973:c.instructions+=3;goto B4c2973;
case 0x4c2975:c.instructions+=2;goto B4c2975;
case 0x4c297d:c.instructions+=1;goto B4c297d;
case 0x4c2980:goto L4c2980;
case 0x4c2982:goto L4c2982;
case 0x4c2984:c.instructions+=1;goto B4c2984;
case 0x4c2989:goto L4c2989;
case 0x4c298b:c.instructions+=5;goto B4c298b;
case 0x4c298e:c.instructions+=4;goto B4c298e;
case 0x4c2992:c.instructions+=3;goto B4c2992;
case 0x4c2994:c.instructions+=2;goto B4c2994;
case 0x4c2998:c.instructions+=1;goto B4c2998;
case 0x4c299a:goto L4c299a;
case 0x4c299c:c.instructions+=4;goto B4c299c;
case 0x4c29a1:c.instructions+=3;goto B4c29a1;
case 0x4c29a6:c.instructions+=2;goto B4c29a6;
case 0x4c29a8:c.instructions+=1;goto B4c29a8;
case 0x4c29ad:goto L4c29ad;
case 0x4c29b3:c.instructions+=1;goto B4c29b3;
case 0x4c29b5:goto L4c29b5;
case 0x4c29b7:goto L4c29b7;
case 0x4c29b9:c.instructions+=4;goto B4c29b9;
case 0x4c29ba:c.instructions+=3;goto B4c29ba;
case 0x4c29bc:c.instructions+=2;goto B4c29bc;
case 0x4c29c4:c.instructions+=1;goto B4c29c4;
case 0x4c29c7:goto L4c29c7;
case 0x4c29cd:c.instructions+=2;goto B4c29cd;
case 0x4c29cf:c.instructions+=1;goto B4c29cf;
case 0x4c29d1:goto L4c29d1;
case 0x4c29d6:c.instructions+=2;goto B4c29d6;
case 0x4c29d8:c.instructions+=1;goto B4c29d8;
case 0x4c29da:goto L4c29da;
case 0x4c29dc:c.instructions+=1;goto B4c29dc;
case 0x4c29e1:goto L4c29e1;
case 0x4c29e3:c.instructions+=5;goto B4c29e3;
case 0x4c29e6:c.instructions+=4;goto B4c29e6;
case 0x4c29ea:c.instructions+=3;goto B4c29ea;
case 0x4c29ec:c.instructions+=2;goto B4c29ec;
case 0x4c29f4:c.instructions+=1;goto B4c29f4;
case 0x4c29f6:goto L4c29f6;
case 0x4c29f8:c.instructions+=4;goto B4c29f8;
case 0x4c29fd:c.instructions+=3;goto B4c29fd;
case 0x4c2a02:c.instructions+=2;goto B4c2a02;
case 0x4c2a04:c.instructions+=1;goto B4c2a04;
case 0x4c2a09:goto L4c2a09;
case 0x4c2a0f:c.instructions+=2;goto B4c2a0f;
case 0x4c2a12:c.instructions+=1;goto B4c2a12;
case 0x4c2a14:goto L4c2a14;
case 0x4c2a16:goto L4c2a16;
case 0x4c2a18:c.instructions+=4;goto B4c2a18;
case 0x4c2a19:c.instructions+=3;goto B4c2a19;
case 0x4c2a1b:c.instructions+=2;goto B4c2a1b;
case 0x4c2a23:c.instructions+=1;goto B4c2a23;
case 0x4c2a26:goto L4c2a26;
case 0x4c2a2c:goto L4c2a2c;
case 0x4c2a2e:c.instructions+=1;goto B4c2a2e;
case 0x4c2a33:goto L4c2a33;
case 0x4c2a35:c.instructions+=1;goto B4c2a35;
case 0x4c2a37:goto L4c2a37;
case 0x4c2a39:c.instructions+=1;goto B4c2a39;
case 0x4c2a3e:goto L4c2a3e;
case 0x4c2a40:c.instructions+=5;goto B4c2a40;
case 0x4c2a43:c.instructions+=4;goto B4c2a43;
case 0x4c2a47:c.instructions+=3;goto B4c2a47;
case 0x4c2a49:c.instructions+=2;goto B4c2a49;
case 0x4c2a51:c.instructions+=1;goto B4c2a51;
case 0x4c2a53:goto L4c2a53;
case 0x4c2a55:c.instructions+=4;goto B4c2a55;
case 0x4c2a5a:c.instructions+=3;goto B4c2a5a;
case 0x4c2a5f:c.instructions+=2;goto B4c2a5f;
case 0x4c2a61:c.instructions+=1;goto B4c2a61;
case 0x4c2a66:goto L4c2a66;
case 0x4c2a6c:c.instructions+=1;goto B4c2a6c;
case 0x4c2a6e:goto L4c2a6e;
case 0x4c2a70:goto L4c2a70;
case 0x4c2a72:c.instructions+=4;goto B4c2a72;
case 0x4c2a73:c.instructions+=3;goto B4c2a73;
case 0x4c2a75:c.instructions+=2;goto B4c2a75;
case 0x4c2a7d:c.instructions+=1;goto B4c2a7d;
case 0x4c2a80:goto L4c2a80;
case 0x4c2a86:goto L4c2a86;
case 0x4c2a89:c.instructions+=1;goto B4c2a89;
case 0x4c2a8b:goto L4c2a8b;
case 0x4c2a8e:c.instructions+=1;goto B4c2a8e;
case 0x4c2a90:goto L4c2a90;
case 0x4c2a96:c.instructions+=1;goto B4c2a96;
case 0x4c2a98:goto L4c2a98;
case 0x4c2a9a:c.instructions+=1;goto B4c2a9a;
case 0x4c2a9f:goto L4c2a9f;
case 0x4c2aa2:c.instructions+=4;goto B4c2aa2;
case 0x4c2aa6:c.instructions+=3;goto B4c2aa6;
case 0x4c2aa8:c.instructions+=2;goto B4c2aa8;
case 0x4c2ab0:c.instructions+=1;goto B4c2ab0;
case 0x4c2ab2:goto L4c2ab2;
case 0x4c2ab4:c.instructions+=4;goto B4c2ab4;
case 0x4c2ab9:c.instructions+=3;goto B4c2ab9;
case 0x4c2abe:c.instructions+=2;goto B4c2abe;
case 0x4c2ac0:c.instructions+=1;goto B4c2ac0;
case 0x4c2ac5:goto L4c2ac5;
case 0x4c2ac7:goto L4c2ac7;
case 0x4c2ac9:goto L4c2ac9;
case 0x4c2acb:c.instructions+=4;goto B4c2acb;
case 0x4c2acc:c.instructions+=3;goto B4c2acc;
case 0x4c2ace:c.instructions+=2;goto B4c2ace;
case 0x4c2ad6:c.instructions+=1;goto B4c2ad6;
case 0x4c2ad9:goto L4c2ad9;
case 0x4c2adf:goto L4c2adf;
case 0x4c2ae2:c.instructions+=1;goto B4c2ae2;
case 0x4c2ae4:goto L4c2ae4;
case 0x4c2ae6:c.instructions+=1;goto B4c2ae6;
case 0x4c2aeb:goto L4c2aeb;
case 0x4c2aed:c.instructions+=5;goto B4c2aed;
case 0x4c2af0:c.instructions+=4;goto B4c2af0;
case 0x4c2af4:c.instructions+=3;goto B4c2af4;
case 0x4c2af6:c.instructions+=2;goto B4c2af6;
case 0x4c2afe:c.instructions+=1;goto B4c2afe;
case 0x4c2b04:goto L4c2b04;
case 0x4c2b06:c.instructions+=1;goto B4c2b06;
case 0x4c2b0b:goto L4c2b0b;
case 0x4c2b10:c.instructions+=2;goto B4c2b10;
case 0x4c2b12:c.instructions+=1;goto B4c2b12;
case 0x4c2b17:goto L4c2b17;
case 0x4c2b1d:c.instructions+=2;goto B4c2b1d;
case 0x4c2b20:c.instructions+=1;goto B4c2b20;
case 0x4c2b25:goto L4c2b25;
case 0x4c2b27:c.instructions+=1;goto B4c2b27;
case 0x4c2b2c:goto L4c2b2c;
case 0x4c2b2f:c.instructions+=4;goto B4c2b2f;
case 0x4c2b35:c.instructions+=3;goto B4c2b35;
case 0x4c2b37:c.instructions+=2;goto B4c2b37;
case 0x4c2b3b:c.instructions+=1;goto B4c2b3b;
case 0x4c2b3d:goto L4c2b3d;
case 0x4c2b3f:c.instructions+=2;goto B4c2b3f;
case 0x4c2b47:c.instructions+=1;goto B4c2b47;
case 0x4c2b49:goto L4c2b49;
case 0x4c2b4b:c.instructions+=4;goto B4c2b4b;
case 0x4c2b50:c.instructions+=3;goto B4c2b50;
case 0x4c2b55:c.instructions+=2;goto B4c2b55;
case 0x4c2b57:c.instructions+=1;goto B4c2b57;
case 0x4c2b5c:goto L4c2b5c;
case 0x4c2b62:c.instructions+=2;goto B4c2b62;
case 0x4c2b65:c.instructions+=1;goto B4c2b65;
case 0x4c2b67:goto L4c2b67;
case 0x4c2b69:goto L4c2b69;
case 0x4c2b6b:c.instructions+=4;goto B4c2b6b;
case 0x4c2b6c:c.instructions+=3;goto B4c2b6c;
case 0x4c2b6e:c.instructions+=2;goto B4c2b6e;
case 0x4c2b76:c.instructions+=1;goto B4c2b76;
case 0x4c2b79:goto L4c2b79;
case 0x4c2b7a:c.instructions+=6;goto B4c2b7a;
case 0x4c2b7b:c.instructions+=5;goto B4c2b7b;
case 0x4c2b7c:c.instructions+=4;goto B4c2b7c;
case 0x4c2b80:c.instructions+=3;goto B4c2b80;
case 0x4c2b87:c.instructions+=2;goto B4c2b87;
case 0x4c2b8a:c.instructions+=1;goto B4c2b8a;
case 0x4c2b8b:goto L4c2b8b;
case 0x4c2b8d:c.instructions+=2;goto B4c2b8d;
case 0x4c2b95:c.instructions+=1;goto B4c2b95;
case 0x4c2b97:goto L4c2b97;
case 0x4c2b99:c.instructions+=2;goto B4c2b99;
case 0x4c2b9e:c.instructions+=1;goto B4c2b9e;
case 0x4c2ba3:goto L4c2ba3;
case 0x4c2ba5:goto L4c2ba5;
case 0x4c2ba7:c.instructions+=4;goto B4c2ba7;
case 0x4c2ba9:c.instructions+=3;goto B4c2ba9;
case 0x4c2baa:c.instructions+=2;goto B4c2baa;
case 0x4c2bb2:c.instructions+=1;goto B4c2bb2;
case 0x4c2bb5:goto L4c2bb5;
case 0x4c2bb9:c.instructions+=6;goto B4c2bb9;
case 0x4c2bba:c.instructions+=5;goto B4c2bba;
case 0x4c2bbb:c.instructions+=4;goto B4c2bbb;
case 0x4c2bbc:c.instructions+=3;goto B4c2bbc;
case 0x4c2bc3:c.instructions+=2;goto B4c2bc3;
case 0x4c2bc6:c.instructions+=1;goto B4c2bc6;
case 0x4c2bd0:goto L4c2bd0;
case 0x4c2bd2:c.instructions+=13;goto B4c2bd2;
case 0x4c2bd7:c.instructions+=12;goto B4c2bd7;
case 0x4c2bdd:c.instructions+=11;goto B4c2bdd;
case 0x4c2bde:c.instructions+=10;goto B4c2bde;
case 0x4c2be5:c.instructions+=9;goto B4c2be5;
case 0x4c2be6:c.instructions+=8;goto B4c2be6;
case 0x4c2beb:c.instructions+=7;goto B4c2beb;
case 0x4c2bec:c.instructions+=6;goto B4c2bec;
case 0x4c2bed:c.instructions+=5;goto B4c2bed;
case 0x4c2bf2:c.instructions+=4;goto B4c2bf2;
case 0x4c2bf4:c.instructions+=3;goto B4c2bf4;
case 0x4c2bf5:c.instructions+=2;goto B4c2bf5;
case 0x4c2bf7:c.instructions+=1;goto B4c2bf7;
case 0x4c2bfd:goto L4c2bfd;
case 0x4c2c04:c.instructions+=1;goto B4c2c04;
case 0x4c2c06:goto L4c2c06;
case 0x4c2c0b:c.instructions+=2;goto B4c2c0b;
case 0x4c2c0d:c.instructions+=1;goto B4c2c0d;
case 0x4c2c0f:goto L4c2c0f;
case 0x4c2c11:c.instructions+=1;goto B4c2c11;
case 0x4c2c16:goto L4c2c16;
case 0x4c2c18:c.instructions+=5;goto B4c2c18;
case 0x4c2c1b:c.instructions+=4;goto B4c2c1b;
case 0x4c2c1f:c.instructions+=3;goto B4c2c1f;
case 0x4c2c21:c.instructions+=2;goto B4c2c21;
case 0x4c2c29:c.instructions+=1;goto B4c2c29;
case 0x4c2c2b:goto L4c2c2b;
case 0x4c2c2d:c.instructions+=4;goto B4c2c2d;
case 0x4c2c32:c.instructions+=3;goto B4c2c32;
case 0x4c2c37:c.instructions+=2;goto B4c2c37;
case 0x4c2c39:c.instructions+=1;goto B4c2c39;
case 0x4c2c3e:goto L4c2c3e;
case 0x4c2c44:c.instructions+=2;goto B4c2c44;
case 0x4c2c48:c.instructions+=1;goto B4c2c48;
case 0x4c2c4a:goto L4c2c4a;
case 0x4c2c4c:goto L4c2c4c;
case 0x4c2c4e:c.instructions+=4;goto B4c2c4e;
case 0x4c2c4f:c.instructions+=3;goto B4c2c4f;
case 0x4c2c51:c.instructions+=2;goto B4c2c51;
case 0x4c2c59:c.instructions+=1;goto B4c2c59;
case 0x4c2c5c:goto L4c2c5c;
case 0x4c2c5e:c.instructions+=1;goto B4c2c5e;
case 0x4c2c63:goto L4c2c63;
case 0x4c2c65:c.instructions+=5;goto B4c2c65;
case 0x4c2c68:c.instructions+=4;goto B4c2c68;
case 0x4c2c6c:c.instructions+=3;goto B4c2c6c;
case 0x4c2c6e:c.instructions+=2;goto B4c2c6e;
case 0x4c2c76:c.instructions+=1;goto B4c2c76;
case 0x4c2c78:goto L4c2c78;
case 0x4c2c7a:c.instructions+=4;goto B4c2c7a;
case 0x4c2c7f:c.instructions+=3;goto B4c2c7f;
case 0x4c2c84:c.instructions+=2;goto B4c2c84;
case 0x4c2c86:c.instructions+=1;goto B4c2c86;
case 0x4c2c8b:goto L4c2c8b;
case 0x4c2c91:c.instructions+=2;goto B4c2c91;
case 0x4c2c95:c.instructions+=1;goto B4c2c95;
case 0x4c2c97:goto L4c2c97;
case 0x4c2c99:goto L4c2c99;
case 0x4c2c9b:c.instructions+=4;goto B4c2c9b;
case 0x4c2c9c:c.instructions+=3;goto B4c2c9c;
case 0x4c2c9e:c.instructions+=2;goto B4c2c9e;
case 0x4c2ca6:c.instructions+=1;goto B4c2ca6;
case 0x4c2ca9:goto L4c2ca9;
case 0x4c2cb0:c.instructions+=2;goto B4c2cb0;
case 0x4c2cb6:c.instructions+=1;goto B4c2cb6;
case 0x4c2cb8:goto L4c2cb8;
case 0x4c2cbb:c.instructions+=1;goto B4c2cbb;
case 0x4c2cbd:goto L4c2cbd;
case 0x4c2cc3:c.instructions+=1;goto B4c2cc3;
case 0x4c2cc5:goto L4c2cc5;
case 0x4c2cc7:c.instructions+=1;goto B4c2cc7;
case 0x4c2ccc:goto L4c2ccc;
case 0x4c2cce:c.instructions+=5;goto B4c2cce;
case 0x4c2cd1:c.instructions+=4;goto B4c2cd1;
case 0x4c2cd5:c.instructions+=3;goto B4c2cd5;
case 0x4c2cd7:c.instructions+=2;goto B4c2cd7;
case 0x4c2cdf:c.instructions+=1;goto B4c2cdf;
case 0x4c2ce1:goto L4c2ce1;
case 0x4c2ce3:c.instructions+=4;goto B4c2ce3;
case 0x4c2ce8:c.instructions+=3;goto B4c2ce8;
case 0x4c2ced:c.instructions+=2;goto B4c2ced;
case 0x4c2cef:c.instructions+=1;goto B4c2cef;
case 0x4c2cf4:goto L4c2cf4;
case 0x4c2cfa:c.instructions+=2;goto B4c2cfa;
case 0x4c2cfe:c.instructions+=1;goto B4c2cfe;
case 0x4c2d00:goto L4c2d00;
case 0x4c2d02:goto L4c2d02;
case 0x4c2d04:c.instructions+=4;goto B4c2d04;
case 0x4c2d05:c.instructions+=3;goto B4c2d05;
case 0x4c2d07:c.instructions+=2;goto B4c2d07;
case 0x4c2d0f:c.instructions+=1;goto B4c2d0f;
case 0x4c2d12:goto L4c2d12;
case 0x4c2d18:goto L4c2d18;
case 0x4c2d1b:c.instructions+=1;goto B4c2d1b;
case 0x4c2d1d:goto L4c2d1d;
case 0x4c2d24:c.instructions+=1;goto B4c2d24;
case 0x4c2d26:goto L4c2d26;
case 0x4c2d28:c.instructions+=1;goto B4c2d28;
case 0x4c2d2d:goto L4c2d2d;
case 0x4c2d2f:c.instructions+=5;goto B4c2d2f;
case 0x4c2d32:c.instructions+=4;goto B4c2d32;
case 0x4c2d36:c.instructions+=3;goto B4c2d36;
case 0x4c2d38:c.instructions+=2;goto B4c2d38;
case 0x4c2d3c:c.instructions+=1;goto B4c2d3c;
case 0x4c2d3e:goto L4c2d3e;
case 0x4c2d40:c.instructions+=4;goto B4c2d40;
case 0x4c2d45:c.instructions+=3;goto B4c2d45;
case 0x4c2d4a:c.instructions+=2;goto B4c2d4a;
case 0x4c2d4c:c.instructions+=1;goto B4c2d4c;
case 0x4c2d51:goto L4c2d51;
case 0x4c2d57:c.instructions+=2;goto B4c2d57;
case 0x4c2d5b:c.instructions+=1;goto B4c2d5b;
case 0x4c2d5d:goto L4c2d5d;
case 0x4c2d5f:goto L4c2d5f;
case 0x4c2d61:c.instructions+=5;goto B4c2d61;
case 0x4c2d64:c.instructions+=4;goto B4c2d64;
case 0x4c2d65:c.instructions+=3;goto B4c2d65;
case 0x4c2d67:c.instructions+=2;goto B4c2d67;
case 0x4c2d6b:c.instructions+=1;goto B4c2d6b;
case 0x4c2d6e:goto L4c2d6e;
case 0x4c2d74:c.instructions+=1;goto B4c2d74;
case 0x4c2d76:goto L4c2d76;
case 0x4c2d79:goto L4c2d79;
case 0x4c2d7b:c.instructions+=1;goto B4c2d7b;
case 0x4c2d80:goto L4c2d80;
case 0x4c2d82:c.instructions+=1;goto B4c2d82;
case 0x4c2d84:goto L4c2d84;
case 0x4c2d86:c.instructions+=1;goto B4c2d86;
case 0x4c2d8b:goto L4c2d8b;
case 0x4c2d8d:c.instructions+=5;goto B4c2d8d;
case 0x4c2d90:c.instructions+=4;goto B4c2d90;
case 0x4c2d94:c.instructions+=3;goto B4c2d94;
case 0x4c2d96:c.instructions+=2;goto B4c2d96;
case 0x4c2d9e:c.instructions+=1;goto B4c2d9e;
case 0x4c2da0:goto L4c2da0;
case 0x4c2da2:c.instructions+=4;goto B4c2da2;
case 0x4c2da7:c.instructions+=3;goto B4c2da7;
case 0x4c2dac:c.instructions+=2;goto B4c2dac;
case 0x4c2dae:c.instructions+=1;goto B4c2dae;
case 0x4c2db3:goto L4c2db3;
case 0x4c2db9:c.instructions+=1;goto B4c2db9;
case 0x4c2dbb:goto L4c2dbb;
case 0x4c2dbd:goto L4c2dbd;
case 0x4c2dbf:c.instructions+=4;goto B4c2dbf;
case 0x4c2dc0:c.instructions+=3;goto B4c2dc0;
case 0x4c2dc2:c.instructions+=2;goto B4c2dc2;
case 0x4c2dc6:c.instructions+=1;goto B4c2dc6;
case 0x4c2dc9:goto L4c2dc9;
case 0x4c2dcf:goto L4c2dcf;
case 0x4c2dd2:c.instructions+=1;goto B4c2dd2;
case 0x4c2dd4:goto L4c2dd4;
case 0x4c2dd7:c.instructions+=1;goto B4c2dd7;
case 0x4c2dd9:goto L4c2dd9;
case 0x4c2ddf:c.instructions+=1;goto B4c2ddf;
case 0x4c2de1:goto L4c2de1;
case 0x4c2de3:c.instructions+=1;goto B4c2de3;
case 0x4c2de8:goto L4c2de8;
case 0x4c2deb:c.instructions+=4;goto B4c2deb;
case 0x4c2def:c.instructions+=3;goto B4c2def;
case 0x4c2df1:c.instructions+=2;goto B4c2df1;
case 0x4c2df9:c.instructions+=1;goto B4c2df9;
case 0x4c2dfb:goto L4c2dfb;
case 0x4c2dfd:c.instructions+=4;goto B4c2dfd;
case 0x4c2e02:c.instructions+=3;goto B4c2e02;
case 0x4c2e07:c.instructions+=2;goto B4c2e07;
case 0x4c2e09:c.instructions+=1;goto B4c2e09;
case 0x4c2e0e:goto L4c2e0e;
case 0x4c2e10:goto L4c2e10;
case 0x4c2e12:goto L4c2e12;
case 0x4c2e14:c.instructions+=4;goto B4c2e14;
case 0x4c2e15:c.instructions+=3;goto B4c2e15;
case 0x4c2e17:c.instructions+=2;goto B4c2e17;
case 0x4c2e1b:c.instructions+=1;goto B4c2e1b;
case 0x4c2e1e:goto L4c2e1e;
case 0x4c2e24:goto L4c2e24;
case 0x4c2e27:c.instructions+=1;goto B4c2e27;
case 0x4c2e29:goto L4c2e29;
case 0x4c2e2b:c.instructions+=1;goto B4c2e2b;
case 0x4c2e30:goto L4c2e30;
case 0x4c2e32:c.instructions+=5;goto B4c2e32;
case 0x4c2e35:c.instructions+=4;goto B4c2e35;
case 0x4c2e39:c.instructions+=3;goto B4c2e39;
case 0x4c2e3b:c.instructions+=2;goto B4c2e3b;
case 0x4c2e43:c.instructions+=1;goto B4c2e43;
case 0x4c2e45:goto L4c2e45;
case 0x4c2e47:c.instructions+=4;goto B4c2e47;
case 0x4c2e4c:c.instructions+=3;goto B4c2e4c;
case 0x4c2e51:c.instructions+=2;goto B4c2e51;
case 0x4c2e53:c.instructions+=1;goto B4c2e53;
case 0x4c2e58:goto L4c2e58;
case 0x4c2e5e:c.instructions+=6;goto B4c2e5e;
case 0x4c2e62:c.instructions+=5;goto B4c2e62;
case 0x4c2e64:c.instructions+=4;goto B4c2e64;
case 0x4c2e65:c.instructions+=3;goto B4c2e65;
case 0x4c2e67:c.instructions+=2;goto B4c2e67;
case 0x4c2e6b:c.instructions+=1;goto B4c2e6b;
case 0x4c2e6e:goto L4c2e6e;
case 0x4c2e6f:c.instructions+=6;goto B4c2e6f;
case 0x4c2e70:c.instructions+=5;goto B4c2e70;
case 0x4c2e71:c.instructions+=4;goto B4c2e71;
case 0x4c2e75:c.instructions+=3;goto B4c2e75;
case 0x4c2e7c:c.instructions+=2;goto B4c2e7c;
case 0x4c2e7f:c.instructions+=1;goto B4c2e7f;
case 0x4c2e80:goto L4c2e80;
case 0x4c2e82:c.instructions+=5;goto B4c2e82;
case 0x4c2e84:c.instructions+=4;goto B4c2e84;
case 0x4c2e85:c.instructions+=3;goto B4c2e85;
case 0x4c2e87:c.instructions+=2;goto B4c2e87;
case 0x4c2e8b:c.instructions+=1;goto B4c2e8b;
case 0x4c2e8e:goto L4c2e8e;
case 0x4c2e8f:c.instructions+=6;goto B4c2e8f;
case 0x4c2e90:c.instructions+=5;goto B4c2e90;
case 0x4c2e91:c.instructions+=4;goto B4c2e91;
case 0x4c2e95:c.instructions+=3;goto B4c2e95;
case 0x4c2e9c:c.instructions+=2;goto B4c2e9c;
case 0x4c2e9f:c.instructions+=1;goto B4c2e9f;
case 0x4c2ea0:goto L4c2ea0;
case 0x4c2ea2:c.instructions+=1;goto B4c2ea2;
case 0x4c2ea7:goto L4c2ea7;
case 0x4c2eaa:c.instructions+=3;goto B4c2eaa;
case 0x4c2eb0:c.instructions+=2;goto B4c2eb0;
case 0x4c2eb4:c.instructions+=1;goto B4c2eb4;
case 0x4c2eb6:goto L4c2eb6;
case 0x4c2eb8:c.instructions+=2;goto B4c2eb8;
case 0x4c2ec0:c.instructions+=1;goto B4c2ec0;
case 0x4c2ec2:goto L4c2ec2;
case 0x4c2ec4:c.instructions+=4;goto B4c2ec4;
case 0x4c2ec9:c.instructions+=3;goto B4c2ec9;
case 0x4c2ece:c.instructions+=2;goto B4c2ece;
case 0x4c2ed0:c.instructions+=1;goto B4c2ed0;
case 0x4c2ed5:goto L4c2ed5;
case 0x4c2ed9:c.instructions+=1;goto B4c2ed9;
case 0x4c2ede:goto L4c2ede;
case 0x4c2ee0:c.instructions+=2;goto B4c2ee0;
case 0x4c2ee8:c.instructions+=1;goto B4c2ee8;
case 0x4c2eea:goto L4c2eea;
case 0x4c2eec:c.instructions+=4;goto B4c2eec;
case 0x4c2ef1:c.instructions+=3;goto B4c2ef1;
case 0x4c2ef6:c.instructions+=2;goto B4c2ef6;
case 0x4c2ef8:c.instructions+=1;goto B4c2ef8;
case 0x4c2efd:goto L4c2efd;
case 0x4c2f01:c.instructions+=1;goto B4c2f01;
case 0x4c2f06:goto L4c2f06;
case 0x4c2f08:c.instructions+=2;goto B4c2f08;
case 0x4c2f0c:c.instructions+=1;goto B4c2f0c;
case 0x4c2f11:goto L4c2f11;
case 0x4c2f16:c.instructions+=3;goto B4c2f16;
case 0x4c2f19:c.instructions+=2;goto B4c2f19;
case 0x4c2f1b:c.instructions+=1;goto B4c2f1b;
case 0x4c2f1d:goto L4c2f1d;
case 0x4c2f22:goto L4c2f22;
case 0x4c2f24:c.instructions+=5;goto B4c2f24;
case 0x4c2f27:c.instructions+=4;goto B4c2f27;
case 0x4c2f2b:c.instructions+=3;goto B4c2f2b;
case 0x4c2f2d:c.instructions+=2;goto B4c2f2d;
case 0x4c2f35:c.instructions+=1;goto B4c2f35;
case 0x4c2f37:goto L4c2f37;
case 0x4c2f39:c.instructions+=4;goto B4c2f39;
case 0x4c2f3e:c.instructions+=3;goto B4c2f3e;
case 0x4c2f43:c.instructions+=2;goto B4c2f43;
case 0x4c2f45:c.instructions+=1;goto B4c2f45;
case 0x4c2f4a:goto L4c2f4a;
case 0x4c2f50:c.instructions+=2;goto B4c2f50;
case 0x4c2f54:c.instructions+=1;goto B4c2f54;
case 0x4c2f56:goto L4c2f56;
case 0x4c2f58:goto L4c2f58;
case 0x4c2f5a:c.instructions+=4;goto B4c2f5a;
case 0x4c2f5b:c.instructions+=3;goto B4c2f5b;
case 0x4c2f5d:c.instructions+=2;goto B4c2f5d;
case 0x4c2f65:c.instructions+=1;goto B4c2f65;
case 0x4c2f68:goto L4c2f68;
case 0x4c2f69:c.instructions+=6;goto B4c2f69;
case 0x4c2f6a:c.instructions+=5;goto B4c2f6a;
case 0x4c2f6b:c.instructions+=4;goto B4c2f6b;
case 0x4c2f6f:c.instructions+=3;goto B4c2f6f;
case 0x4c2f76:c.instructions+=2;goto B4c2f76;
case 0x4c2f79:c.instructions+=1;goto B4c2f79;
case 0x4c2f7a:goto L4c2f7a;
case 0x4c2f7f:c.instructions+=1;goto B4c2f7f;
case 0x4c2f81:goto L4c2f81;
case 0x4c2f86:goto L4c2f86;
case 0x4c2f89:c.instructions+=4;goto B4c2f89;
case 0x4c2f8d:c.instructions+=3;goto B4c2f8d;
case 0x4c2f8f:c.instructions+=2;goto B4c2f8f;
case 0x4c2f97:c.instructions+=1;goto B4c2f97;
case 0x4c2f99:goto L4c2f99;
case 0x4c2f9b:c.instructions+=4;goto B4c2f9b;
case 0x4c2fa0:c.instructions+=3;goto B4c2fa0;
case 0x4c2fa5:c.instructions+=2;goto B4c2fa5;
case 0x4c2fa7:c.instructions+=1;goto B4c2fa7;
case 0x4c2fac:goto L4c2fac;
case 0x4c2fae:goto L4c2fae;
case 0x4c2fb3:goto L4c2fb3;
case 0x4c2fb6:c.instructions+=4;goto B4c2fb6;
case 0x4c2fba:c.instructions+=3;goto B4c2fba;
case 0x4c2fbc:c.instructions+=2;goto B4c2fbc;
case 0x4c2fc4:c.instructions+=1;goto B4c2fc4;
case 0x4c2fc6:goto L4c2fc6;
case 0x4c2fc8:c.instructions+=4;goto B4c2fc8;
case 0x4c2fcd:c.instructions+=3;goto B4c2fcd;
case 0x4c2fd2:c.instructions+=2;goto B4c2fd2;
case 0x4c2fd4:c.instructions+=1;goto B4c2fd4;
case 0x4c2fd9:goto L4c2fd9;
case 0x4c2fdb:goto L4c2fdb;
case 0x4c2fdd:goto L4c2fdd;
case 0x4c2fe5:goto L4c2fe5;
case 0x4c2fe7:c.instructions+=3;goto B4c2fe7;
case 0x4c2fe9:c.instructions+=2;goto B4c2fe9;
case 0x4c2fea:c.instructions+=1;goto B4c2fea;
case 0x4c2fed:goto L4c2fed;
case 0x4c2ff1:c.instructions+=6;goto B4c2ff1;
case 0x4c2ff2:c.instructions+=5;goto B4c2ff2;
case 0x4c2ff3:c.instructions+=4;goto B4c2ff3;
case 0x4c2ff4:c.instructions+=3;goto B4c2ff4;
case 0x4c2ffb:c.instructions+=2;goto B4c2ffb;
case 0x4c2ffe:c.instructions+=1;goto B4c2ffe;
default:missing_instruction(c.pc);}
B4c2002:L4c2002:{c.instructions+=7;NFSU2_TR(0x4c2002);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4c2006:{NFSU2_TR(0x4c2006);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c2009:{NFSU2_TR(0x4c2009);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c200e:{NFSU2_TR(0x4c200e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2010:{NFSU2_TR(0x4c2010);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2011:{NFSU2_TR(0x4c2011);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2012:{NFSU2_TR(0x4c2012);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2017ull));
TAIL_STATIC(0x61f820u,61f);
}
B4c2017:L4c2017:{c.instructions+=6;NFSU2_TR(0x4c2017);
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
B4c201a:{NFSU2_TR(0x4c201a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c201b:{NFSU2_TR(0x4c201b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x160ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c2022:{NFSU2_TR(0x4c2022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c2023:{NFSU2_TR(0x4c2023);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c2024:{NFSU2_TR(0x4c2024);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2030:L4c2030:{c.instructions+=2;NFSU2_TR(0x4c2030);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2035:{NFSU2_TR(0x4c2035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c203aull));
TAIL_STATIC(0x51bd10u,51b);
}
B4c203a:L4c203a:{c.instructions+=6;NFSU2_TR(0x4c203a);
__builtin_memmove((R+4),(R+0),4);
}
B4c203c:{NFSU2_TR(0x4c203c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c2042:{NFSU2_TR(0x4c2042);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c2045:{NFSU2_TR(0x4c2045);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4c2047:{NFSU2_TR(0x4c2047);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B4c204a:{NFSU2_TR(0x4c204a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c2068;}}
}
B4c204c:L4c204c:{c.instructions+=4;NFSU2_TR(0x4c204c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c2052:{NFSU2_TR(0x4c2052);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c2058:{NFSU2_TR(0x4c2058);
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
B4c205a:{NFSU2_TR(0x4c205a);
if(r1(R+518)){{goto L4c2068;}}
}
B4c205c:L4c205c:{c.instructions+=3;NFSU2_TR(0x4c205c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ce0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c2062:{NFSU2_TR(0x4c2062);
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
B4c2064:{NFSU2_TR(0x4c2064);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c2068;}}
}
B4c2066:L4c2066:{c.instructions+=1;NFSU2_TR(0x4c2066);
w1(R+0,u8(0x1ull));
}
B4c2068:L4c2068:{c.instructions+=1;NFSU2_TR(0x4c2068);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2070:L4c2070:{c.instructions+=4;NFSU2_TR(0x4c2070);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c2074:{NFSU2_TR(0x4c2074);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2075:{NFSU2_TR(0x4c2075);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2076:{NFSU2_TR(0x4c2076);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c207bull));
TAIL_STATIC(0x4a7830u,4a7);
}
B4c207b:L4c207b:{c.instructions+=4;NFSU2_TR(0x4c207b);
__builtin_memmove((R+24),(R+0),4);
}
B4c207d:{NFSU2_TR(0x4c207d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c2080:{NFSU2_TR(0x4c2080);
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
B4c2082:{NFSU2_TR(0x4c2082);
if(r1(R+518)){{goto L4c20f1;}}
}
B4c2084:L4c2084:{c.instructions+=4;NFSU2_TR(0x4c2084);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2086:{NFSU2_TR(0x4c2086);
__builtin_memmove((R+4),(R+24),4);
}
B4c2088:{NFSU2_TR(0x4c2088);
s1(0x8363fc,u8(0x0ull));
}
B4c208f:{NFSU2_TR(0x4c208f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2094ull));
TAIL_STATIC(0x4c1fa0u,4c1);
}
B4c2094:L4c2094:{c.instructions+=30;NFSU2_TR(0x4c2094);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c2098:{NFSU2_TR(0x4c2098);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c209c:{NFSU2_TR(0x4c209c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c20a2:{NFSU2_TR(0x4c20a2);
__builtin_memmove((R+0),(R+4),4);
}
B4c20a4:{NFSU2_TR(0x4c20a4);
__builtin_memmove(gp(0x7f45a4),(R+8),4);
}
B4c20aa:{NFSU2_TR(0x4c20aa);
__builtin_memmove((R+4),(R+8),4);
}
B4c20ac:{NFSU2_TR(0x4c20ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c20b0:{NFSU2_TR(0x4c20b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c20b1:{NFSU2_TR(0x4c20b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c20b5:{NFSU2_TR(0x4c20b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c20bb:{NFSU2_TR(0x4c20bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c20bf:{NFSU2_TR(0x4c20bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c20c0:{NFSU2_TR(0x4c20c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c20c4:{NFSU2_TR(0x4c20c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c20ca:{NFSU2_TR(0x4c20ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c20ce:{NFSU2_TR(0x4c20ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c20cf:{NFSU2_TR(0x4c20cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c20d3:{NFSU2_TR(0x4c20d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c20d4:{NFSU2_TR(0x4c20d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c20d8:{NFSU2_TR(0x4c20d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c20d9:{NFSU2_TR(0x4c20d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c20dd:{NFSU2_TR(0x4c20dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c20de:{NFSU2_TR(0x4c20de);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c20e2:{NFSU2_TR(0x4c20e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c20e3:{NFSU2_TR(0x4c20e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c20e7:{NFSU2_TR(0x4c20e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c20e8:{NFSU2_TR(0x4c20e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c20e9:{NFSU2_TR(0x4c20e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c20ea:{NFSU2_TR(0x4c20ea);
__builtin_memmove((R+4),(R+24),4);
}
B4c20ec:{NFSU2_TR(0x4c20ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c20f1ull));
TAIL_STATIC(0x4a5b70u,4a5);
}
B4c20f1:L4c20f1:{c.instructions+=2;NFSU2_TR(0x4c20f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c20f2:{NFSU2_TR(0x4c20f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2100:L4c2100:{c.instructions+=3;NFSU2_TR(0x4c2100);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c2104:{NFSU2_TR(0x4c2104);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2105:{NFSU2_TR(0x4c2105);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c210aull));
TAIL_STATIC(0x4a7830u,4a7);
}
B4c210a:L4c210a:{c.instructions+=3;NFSU2_TR(0x4c210a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c210d:{NFSU2_TR(0x4c210d);
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
B4c210f:{NFSU2_TR(0x4c210f);
if(r1(R+518)){{goto L4c2130;}}
}
B4c2111:L4c2111:{c.instructions+=10;NFSU2_TR(0x4c2111);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c2115:{NFSU2_TR(0x4c2115);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c2119:{NFSU2_TR(0x4c2119);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c211b:{NFSU2_TR(0x4c211b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c211c:{NFSU2_TR(0x4c211c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c2120:{NFSU2_TR(0x4c2120);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2121:{NFSU2_TR(0x4c2121);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2122:{NFSU2_TR(0x4c2122);
__builtin_memmove((R+4),(R+0),4);
}
B4c2124:{NFSU2_TR(0x4c2124);
s1(0x8363fc,u8(0x0ull));
}
B4c212b:{NFSU2_TR(0x4c212b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2130ull));
TAIL_STATIC(0x4c1d40u,4c1);
}
B4c2130:L4c2130:{c.instructions+=1;NFSU2_TR(0x4c2130);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2140:L4c2140:{c.instructions+=3;NFSU2_TR(0x4c2140);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c2144:{NFSU2_TR(0x4c2144);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2145:{NFSU2_TR(0x4c2145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c214aull));
TAIL_STATIC(0x4a7830u,4a7);
}
B4c214a:L4c214a:{c.instructions+=3;NFSU2_TR(0x4c214a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c214d:{NFSU2_TR(0x4c214d);
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
B4c214f:{NFSU2_TR(0x4c214f);
if(r1(R+518)){{goto L4c215d;}}
}
B4c2151:L4c2151:{c.instructions+=4;NFSU2_TR(0x4c2151);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c2155:{NFSU2_TR(0x4c2155);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2156:{NFSU2_TR(0x4c2156);
__builtin_memmove((R+4),(R+0),4);
}
B4c2158:{NFSU2_TR(0x4c2158);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c215dull));
TAIL_STATIC(0x4c1fa0u,4c1);
}
B4c215d:L4c215d:{c.instructions+=1;NFSU2_TR(0x4c215d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2160:L4c2160:{c.instructions+=3;NFSU2_TR(0x4c2160);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c2164:{NFSU2_TR(0x4c2164);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffbull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c2167:{NFSU2_TR(0x4c2167);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2170:L4c2170:{c.instructions+=11;NFSU2_TR(0x4c2170);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2171:{NFSU2_TR(0x4c2171);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c2175:{NFSU2_TR(0x4c2175);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2176:{NFSU2_TR(0x4c2176);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4c217a:{NFSU2_TR(0x4c217a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c217b:{NFSU2_TR(0x4c217b);
__builtin_memmove((R+24),(R+4),4);
}
B4c217d:{NFSU2_TR(0x4c217d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c2183:{NFSU2_TR(0x4c2183);
u8 U[8];
__builtin_memmove((U+0),gp(0x8651ac),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2189:{NFSU2_TR(0x4c2189);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c218a:{NFSU2_TR(0x4c218a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c218e:{NFSU2_TR(0x4c218e);
if(r1(R+518)){{goto L4c21b5;}}
}
B4c2190:L4c2190:{c.instructions+=4;NFSU2_TR(0x4c2190);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c2196:{NFSU2_TR(0x4c2196);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c2199:{NFSU2_TR(0x4c2199);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c219a:{NFSU2_TR(0x4c219a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c219full));
TAIL_STATIC(0x571a60u,571);
}
B4c219f:L4c219f:{c.instructions+=3;NFSU2_TR(0x4c219f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c21a2:{NFSU2_TR(0x4c21a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c21a4:{NFSU2_TR(0x4c21a4);
if(r1(R+518)){{goto L4c21b5;}}
}
B4c21a6:L4c21a6:{c.instructions+=7;NFSU2_TR(0x4c21a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c21aa:{NFSU2_TR(0x4c21aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c21ab:{NFSU2_TR(0x4c21ab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c21ac:{NFSU2_TR(0x4c21ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c21ad:{NFSU2_TR(0x4c21ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c21ae:{NFSU2_TR(0x4c21ae);
__builtin_memmove((R+4),(R+24),4);
}
B4c21b0:{NFSU2_TR(0x4c21b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c21b5ull));
TAIL_STATIC(0x543d40u,543);
}
B4c21b5:L4c21b5:{c.instructions+=2;NFSU2_TR(0x4c21b5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x451e768eull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x451e768eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c21bb:{NFSU2_TR(0x4c21bb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4c22d7;}}
}
B4c21c1:L4c21c1:{c.instructions+=1;NFSU2_TR(0x4c21c1);
if(r1(R+518)){{goto L4c229d;}}
}
B4c21c7:L4c21c7:{c.instructions+=2;NFSU2_TR(0x4c21c7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x30f32a49ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30f32a49ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c21cd:{NFSU2_TR(0x4c21cd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4c226d;}}
}
B4c21d3:L4c21d3:{c.instructions+=1;NFSU2_TR(0x4c21d3);
if(r1(R+518)){{goto L4c2450;}}
}
B4c21d9:L4c21d9:{c.instructions+=2;NFSU2_TR(0x4c21d9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c21df:{NFSU2_TR(0x4c21df);
if(r1(R+518)){{goto L4c221b;}}
}
B4c21e1:L4c21e1:{c.instructions+=2;NFSU2_TR(0x4c21e1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13999fc2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c21e7:{NFSU2_TR(0x4c21e7);
if(r1(R+518)){{goto L4c2203;}}
}
B4c21e9:L4c21e9:{c.instructions+=2;NFSU2_TR(0x4c21e9);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x30ed2368ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x30ed2368ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x30ed2368ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c21ef:{NFSU2_TR(0x4c21ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c249b;}}
}
B4c21f5:L4c21f5:{c.instructions+=2;NFSU2_TR(0x4c21f5);
__builtin_memmove((R+4),(R+24),4);
}
B4c21f7:{NFSU2_TR(0x4c21f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c21fcull));
TAIL_STATIC(0x4a7cf0u,4a7);
}
B4c21fc:L4c21fc:{c.instructions+=5;NFSU2_TR(0x4c21fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c21fd:{NFSU2_TR(0x4c21fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c21fe:{NFSU2_TR(0x4c21fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c21ff:{NFSU2_TR(0x4c21ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c2200:{NFSU2_TR(0x4c2200);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2203:L4c2203:{c.instructions+=4;NFSU2_TR(0x4c2203);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c2206:{NFSU2_TR(0x4c2206);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2207:{NFSU2_TR(0x4c2207);
u8 U[4];
w4(U+0,u32(0x251bf83eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c220c:{NFSU2_TR(0x4c220c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2211ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4c2211:L4c2211:{c.instructions+=6;NFSU2_TR(0x4c2211);
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
B4c2214:{NFSU2_TR(0x4c2214);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c2215:{NFSU2_TR(0x4c2215);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c2216:{NFSU2_TR(0x4c2216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c2217:{NFSU2_TR(0x4c2217);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c2218:{NFSU2_TR(0x4c2218);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c221b:L4c221b:{c.instructions+=2;NFSU2_TR(0x4c221b);
__builtin_memmove((R+4),(R+24),4);
}
B4c221d:{NFSU2_TR(0x4c221d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2222ull));
TAIL_STATIC(0x4a7bc0u,4a7);
}
B4c2222:L4c2222:{c.instructions+=2;NFSU2_TR(0x4c2222);
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
B4c2224:{NFSU2_TR(0x4c2224);
if(r1(R+518)){{goto L4c249b;}}
}
B4c222a:L4c222a:{c.instructions+=5;NFSU2_TR(0x4c222a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c222d:{NFSU2_TR(0x4c222d);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2232:{NFSU2_TR(0x4c2232);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2237:{NFSU2_TR(0x4c2237);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2238:{NFSU2_TR(0x4c2238);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c223dull));
TAIL_STATIC(0x537cc0u,537);
}
B4c223d:L4c223d:{c.instructions+=3;NFSU2_TR(0x4c223d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c2240:{NFSU2_TR(0x4c2240);
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
B4c2242:{NFSU2_TR(0x4c2242);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c249b;}}
}
B4c2248:L4c2248:{c.instructions+=6;NFSU2_TR(0x4c2248);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c224b:{NFSU2_TR(0x4c224b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c224d:{NFSU2_TR(0x4c224d);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2252:{NFSU2_TR(0x4c2252);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2257:{NFSU2_TR(0x4c2257);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2258:{NFSU2_TR(0x4c2258);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c225dull));
TAIL_STATIC(0x537c00u,537);
}
B4c225d:L4c225d:{c.instructions+=1;NFSU2_TR(0x4c225d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2262ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4c2262:L4c2262:{c.instructions+=2;NFSU2_TR(0x4c2262);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2263:{NFSU2_TR(0x4c2263);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2268ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4c2268:L4c2268:{c.instructions+=2;NFSU2_TR(0x4c2268);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4c226b:{NFSU2_TR(0x4c226b);
{goto L4c22ba;}
}
B4c226d:L4c226d:{c.instructions+=2;NFSU2_TR(0x4c226d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x33c42e03ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2273:{NFSU2_TR(0x4c2273);
if(r1(R+518)){{goto L4c228f;}}
}
B4c2275:L4c2275:{c.instructions+=2;NFSU2_TR(0x4c2275);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x43da9fd0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43da9fd0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43da9fd0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c227b:{NFSU2_TR(0x4c227b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c249b;}}
}
B4c2281:L4c2281:{c.instructions+=2;NFSU2_TR(0x4c2281);
__builtin_memmove((R+4),(R+24),4);
}
B4c2283:{NFSU2_TR(0x4c2283);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2288ull));
TAIL_STATIC(0x4a7c70u,4a7);
}
B4c2288:L4c2288:{c.instructions+=5;NFSU2_TR(0x4c2288);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c2289:{NFSU2_TR(0x4c2289);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c228a:{NFSU2_TR(0x4c228a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c228b:{NFSU2_TR(0x4c228b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c228c:{NFSU2_TR(0x4c228c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c228f:L4c228f:{c.instructions+=2;NFSU2_TR(0x4c228f);
__builtin_memmove((R+4),(R+24),4);
}
B4c2291:{NFSU2_TR(0x4c2291);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2296ull));
TAIL_STATIC(0x4a7cc0u,4a7);
}
B4c2296:L4c2296:{c.instructions+=5;NFSU2_TR(0x4c2296);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c2297:{NFSU2_TR(0x4c2297);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c2298:{NFSU2_TR(0x4c2298);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c2299:{NFSU2_TR(0x4c2299);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c229a:{NFSU2_TR(0x4c229a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c229d:L4c229d:{c.instructions+=4;NFSU2_TR(0x4c229d);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c22a3:{NFSU2_TR(0x4c22a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c22a5:{NFSU2_TR(0x4c22a5);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c22a7:{NFSU2_TR(0x4c22a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c22acull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B4c22ac:L4c22ac:{c.instructions+=1;NFSU2_TR(0x4c22ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c22b1ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4c22b1:L4c22b1:{c.instructions+=2;NFSU2_TR(0x4c22b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c22b2:{NFSU2_TR(0x4c22b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c22b7ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4c22b7:L4c22b7:{c.instructions+=1;NFSU2_TR(0x4c22b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c22ba:L4c22ba:{c.instructions+=2;NFSU2_TR(0x4c22ba);
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
B4c22bc:{NFSU2_TR(0x4c22bc);
if(r1(R+518)){{goto L4c249b;}}
}
B4c22c2:L4c22c2:{c.instructions+=1;NFSU2_TR(0x4c22c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c22c7ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4c22c7:L4c22c7:{c.instructions+=2;NFSU2_TR(0x4c22c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c22c8:{NFSU2_TR(0x4c22c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c22cdull));
TAIL_STATIC(0x5379a0u,537);
}
B4c22cd:L4c22cd:{c.instructions+=6;NFSU2_TR(0x4c22cd);
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
B4c22d0:{NFSU2_TR(0x4c22d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c22d1:{NFSU2_TR(0x4c22d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c22d2:{NFSU2_TR(0x4c22d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c22d3:{NFSU2_TR(0x4c22d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c22d4:{NFSU2_TR(0x4c22d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c22d7:L4c22d7:{c.instructions+=2;NFSU2_TR(0x4c22d7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xb5af2461ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5af2461ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c22dd:{NFSU2_TR(0x4c22dd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4c240c;}}
}
B4c22e3:L4c22e3:{c.instructions+=1;NFSU2_TR(0x4c22e3);
if(r1(R+518)){{goto L4c237f;}}
}
B4c22e9:L4c22e9:{c.instructions+=2;NFSU2_TR(0x4c22e9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4a05ae7full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c22ef:{NFSU2_TR(0x4c22ef);
if(r1(R+518)){{goto L4c2367;}}
}
B4c22f1:L4c22f1:{c.instructions+=2;NFSU2_TR(0x4c22f1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c22f7:{NFSU2_TR(0x4c22f7);
if(r1(R+518)){{goto L4c237f;}}
}
B4c22fd:L4c22fd:{c.instructions+=2;NFSU2_TR(0x4c22fd);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xb4623f67ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb4623f67ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb4623f67ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c2303:{NFSU2_TR(0x4c2303);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c249b;}}
}
B4c2309:L4c2309:{c.instructions+=4;NFSU2_TR(0x4c2309);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c230c:{NFSU2_TR(0x4c230c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c230d:{NFSU2_TR(0x4c230d);
u8 U[4];
w4(U+0,u32(0x251bf83eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2312:{NFSU2_TR(0x4c2312);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2317ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4c2317:L4c2317:{c.instructions+=1;NFSU2_TR(0x4c2317);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c231cull));
TAIL_STATIC(0x50cea0u,50c);
}
B4c231c:L4c231c:{c.instructions+=2;NFSU2_TR(0x4c231c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c231d:{NFSU2_TR(0x4c231d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2322ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4c2322:L4c2322:{c.instructions+=3;NFSU2_TR(0x4c2322);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c2325:{NFSU2_TR(0x4c2325);
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
B4c2327:{NFSU2_TR(0x4c2327);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c2342;}}
}
B4c2329:L4c2329:{c.instructions+=5;NFSU2_TR(0x4c2329);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c232c:{NFSU2_TR(0x4c232c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c232e:{NFSU2_TR(0x4c232e);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2333:{NFSU2_TR(0x4c2333);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2334:{NFSU2_TR(0x4c2334);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2339ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4c2339:L4c2339:{c.instructions+=2;NFSU2_TR(0x4c2339);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c233a:{NFSU2_TR(0x4c233a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c233full));
TAIL_STATIC(0x555f10u,555);
}
B4c233f:L4c233f:{c.instructions+=1;NFSU2_TR(0x4c233f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c2342:L4c2342:{c.instructions+=2;NFSU2_TR(0x4c2342);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4c2348:{NFSU2_TR(0x4c2348);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c234dull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4c234d:L4c234d:{c.instructions+=6;NFSU2_TR(0x4c234d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c2350:{NFSU2_TR(0x4c2350);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c2353:{NFSU2_TR(0x4c2353);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2354:{NFSU2_TR(0x4c2354);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2355:{NFSU2_TR(0x4c2355);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4c235b:{NFSU2_TR(0x4c235b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2360ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4c2360:L4c2360:{c.instructions+=5;NFSU2_TR(0x4c2360);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c2361:{NFSU2_TR(0x4c2361);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c2362:{NFSU2_TR(0x4c2362);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c2363:{NFSU2_TR(0x4c2363);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c2364:{NFSU2_TR(0x4c2364);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2367:L4c2367:{c.instructions+=4;NFSU2_TR(0x4c2367);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c236a:{NFSU2_TR(0x4c236a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c236b:{NFSU2_TR(0x4c236b);
u8 U[4];
w4(U+0,u32(0x251bf83eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2370:{NFSU2_TR(0x4c2370);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2375ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4c2375:L4c2375:{c.instructions+=6;NFSU2_TR(0x4c2375);
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
B4c2378:{NFSU2_TR(0x4c2378);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c2379:{NFSU2_TR(0x4c2379);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c237a:{NFSU2_TR(0x4c237a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c237b:{NFSU2_TR(0x4c237b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c237c:{NFSU2_TR(0x4c237c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c237f:L4c237f:{c.instructions+=2;NFSU2_TR(0x4c237f);
__builtin_memmove((R+4),(R+24),4);
}
B4c2381:{NFSU2_TR(0x4c2381);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2386ull));
TAIL_STATIC(0x4a7bc0u,4a7);
}
B4c2386:L4c2386:{c.instructions+=2;NFSU2_TR(0x4c2386);
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
B4c2388:{NFSU2_TR(0x4c2388);
if(r1(R+518)){{goto L4c249b;}}
}
B4c238e:L4c238e:{c.instructions+=5;NFSU2_TR(0x4c238e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c2391:{NFSU2_TR(0x4c2391);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2396:{NFSU2_TR(0x4c2396);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c239b:{NFSU2_TR(0x4c239b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c239c:{NFSU2_TR(0x4c239c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c23a1ull));
TAIL_STATIC(0x537cc0u,537);
}
B4c23a1:L4c23a1:{c.instructions+=3;NFSU2_TR(0x4c23a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c23a4:{NFSU2_TR(0x4c23a4);
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
B4c23a6:{NFSU2_TR(0x4c23a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c249b;}}
}
B4c23ac:L4c23ac:{c.instructions+=1;NFSU2_TR(0x4c23ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c23b1ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4c23b1:L4c23b1:{c.instructions+=2;NFSU2_TR(0x4c23b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c23b2:{NFSU2_TR(0x4c23b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c23b7ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4c23b7:L4c23b7:{c.instructions+=3;NFSU2_TR(0x4c23b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c23ba:{NFSU2_TR(0x4c23ba);
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
B4c23bc:{NFSU2_TR(0x4c23bc);
if(r1(R+518)){{goto L4c23cc;}}
}
B4c23be:L4c23be:{c.instructions+=1;NFSU2_TR(0x4c23be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c23c3ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4c23c3:L4c23c3:{c.instructions+=2;NFSU2_TR(0x4c23c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c23c4:{NFSU2_TR(0x4c23c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c23c9ull));
TAIL_STATIC(0x5379a0u,537);
}
B4c23c9:L4c23c9:{c.instructions+=1;NFSU2_TR(0x4c23c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c23cc:L4c23cc:{c.instructions+=2;NFSU2_TR(0x4c23cc);
__builtin_memmove((R+4),(R+24),4);
}
B4c23ce:{NFSU2_TR(0x4c23ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c23d3ull));
TAIL_STATIC(0x52fbf0u,52f);
}
B4c23d3:L4c23d3:{c.instructions+=7;NFSU2_TR(0x4c23d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c23d7:{NFSU2_TR(0x4c23d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c23d8:{NFSU2_TR(0x4c23d8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c23d9:{NFSU2_TR(0x4c23d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c23da:{NFSU2_TR(0x4c23da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c23db:{NFSU2_TR(0x4c23db);
__builtin_memmove((R+4),(R+24),4);
}
B4c23dd:{NFSU2_TR(0x4c23dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c23e2ull));
TAIL_STATIC(0x50da20u,50d);
}
B4c23e2:L4c23e2:{c.instructions+=6;NFSU2_TR(0x4c23e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c23e5:{NFSU2_TR(0x4c23e5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c23e7:{NFSU2_TR(0x4c23e7);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c23ec:{NFSU2_TR(0x4c23ec);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c23f1:{NFSU2_TR(0x4c23f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c23f2:{NFSU2_TR(0x4c23f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c23f7ull));
TAIL_STATIC(0x537c00u,537);
}
B4c23f7:L4c23f7:{c.instructions+=4;NFSU2_TR(0x4c23f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c23fa:{NFSU2_TR(0x4c23fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c23fc:{NFSU2_TR(0x4c23fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c23fd:{NFSU2_TR(0x4c23fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2402ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4c2402:L4c2402:{c.instructions+=6;NFSU2_TR(0x4c2402);
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
B4c2405:{NFSU2_TR(0x4c2405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c2406:{NFSU2_TR(0x4c2406);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c2407:{NFSU2_TR(0x4c2407);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c2408:{NFSU2_TR(0x4c2408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c2409:{NFSU2_TR(0x4c2409);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c240c:L4c240c:{c.instructions+=2;NFSU2_TR(0x4c240c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xe1a57d51ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2412:{NFSU2_TR(0x4c2412);
if(r1(R+518)){{goto L4c248e;}}
}
B4c2414:L4c2414:{c.instructions+=2;NFSU2_TR(0x4c2414);
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
B4c241a:{NFSU2_TR(0x4c241a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c249b;}}
}
B4c241c:L4c241c:{c.instructions+=3;NFSU2_TR(0x4c241c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c2422:{NFSU2_TR(0x4c2422);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x4a05ae7full))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4a05ae7full)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x4a05ae7full))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c2427:{NFSU2_TR(0x4c2427);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4c2479;}}
}
B4c2429:L4c2429:{c.instructions+=1;NFSU2_TR(0x4c2429);
if(r1(R+518)){{goto L4c249b;}}
}
B4c242b:L4c242b:{c.instructions+=2;NFSU2_TR(0x4c242b);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x30f32a49ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30f32a49ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2430:{NFSU2_TR(0x4c2430);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4c2464;}}
}
B4c2432:L4c2432:{c.instructions+=1;NFSU2_TR(0x4c2432);
if(r1(R+518)){{goto L4c2450;}}
}
B4c2434:L4c2434:{c.instructions+=2;NFSU2_TR(0x4c2434);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x13999fc2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x13999fc2ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x13999fc2ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c2439:{NFSU2_TR(0x4c2439);
if(r1(R+518)){{goto L4c249b;}}
}
B4c243b:L4c243b:{c.instructions+=2;NFSU2_TR(0x4c243b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x30ed2368ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x30ed2368ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x30ed2368ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c2440:{NFSU2_TR(0x4c2440);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c249b;}}
}
B4c2442:L4c2442:{c.instructions+=2;NFSU2_TR(0x4c2442);
__builtin_memmove((R+4),(R+24),4);
}
B4c2444:{NFSU2_TR(0x4c2444);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2449ull));
TAIL_STATIC(0x4a7cf0u,4a7);
}
B4c2449:L4c2449:{c.instructions+=5;NFSU2_TR(0x4c2449);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c244a:{NFSU2_TR(0x4c244a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c244b:{NFSU2_TR(0x4c244b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c244c:{NFSU2_TR(0x4c244c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c244d:{NFSU2_TR(0x4c244d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2450:L4c2450:{c.instructions+=3;NFSU2_TR(0x4c2450);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c2456:{NFSU2_TR(0x4c2456);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2458:{NFSU2_TR(0x4c2458);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c245dull));
TAIL_STATIC(0x5f4240u,5f4);
}
B4c245d:L4c245d:{c.instructions+=5;NFSU2_TR(0x4c245d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c245e:{NFSU2_TR(0x4c245e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c245f:{NFSU2_TR(0x4c245f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c2460:{NFSU2_TR(0x4c2460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c2461:{NFSU2_TR(0x4c2461);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2464:L4c2464:{c.instructions+=2;NFSU2_TR(0x4c2464);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x43da9fd0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x43da9fd0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x43da9fd0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c2469:{NFSU2_TR(0x4c2469);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c249b;}}
}
B4c246b:L4c246b:{c.instructions+=2;NFSU2_TR(0x4c246b);
__builtin_memmove((R+4),(R+24),4);
}
B4c246d:{NFSU2_TR(0x4c246d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2472ull));
TAIL_STATIC(0x4a7c70u,4a7);
}
B4c2472:L4c2472:{c.instructions+=5;NFSU2_TR(0x4c2472);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c2473:{NFSU2_TR(0x4c2473);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c2474:{NFSU2_TR(0x4c2474);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c2475:{NFSU2_TR(0x4c2475);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c2476:{NFSU2_TR(0x4c2476);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2479:L4c2479:{c.instructions+=2;NFSU2_TR(0x4c2479);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c247e:{NFSU2_TR(0x4c247e);
if(r1(R+518)){{goto L4c24a2;}}
}
B4c2480:L4c2480:{c.instructions+=2;NFSU2_TR(0x4c2480);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5af2461ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2485:{NFSU2_TR(0x4c2485);
if(r1(R+518)){{goto L4c24a2;}}
}
B4c2487:L4c2487:{c.instructions+=2;NFSU2_TR(0x4c2487);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe1a57d51ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe1a57d51ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe1a57d51ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c248c:{NFSU2_TR(0x4c248c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c249b;}}
}
B4c248e:L4c248e:{c.instructions+=3;NFSU2_TR(0x4c248e);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c2494:{NFSU2_TR(0x4c2494);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2496:{NFSU2_TR(0x4c2496);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c249bull));
TAIL_STATIC(0x5f4240u,5f4);
}
B4c249b:L4c249b:{c.instructions+=5;NFSU2_TR(0x4c249b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c249c:{NFSU2_TR(0x4c249c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c249d:{NFSU2_TR(0x4c249d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c249e:{NFSU2_TR(0x4c249e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c249f:{NFSU2_TR(0x4c249f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c24a2:L4c24a2:{c.instructions+=3;NFSU2_TR(0x4c24a2);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c24a8:{NFSU2_TR(0x4c24a8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c24aa:{NFSU2_TR(0x4c24aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c24afull));
TAIL_STATIC(0x5f4240u,5f4);
}
B4c24af:L4c24af:{c.instructions+=5;NFSU2_TR(0x4c24af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c24b0:{NFSU2_TR(0x4c24b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c24b1:{NFSU2_TR(0x4c24b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c24b2:{NFSU2_TR(0x4c24b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c24b3:{NFSU2_TR(0x4c24b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c24c0:L4c24c0:{c.instructions+=2;NFSU2_TR(0x4c24c0);
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
B4c24c8:{NFSU2_TR(0x4c24c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c2501;}}
}
B4c24ca:L4c24ca:{c.instructions+=3;NFSU2_TR(0x4c24ca);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c24d0:{NFSU2_TR(0x4c24d0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c24d2:{NFSU2_TR(0x4c24d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c24d7ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B4c24d7:L4c24d7:{c.instructions+=4;NFSU2_TR(0x4c24d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c24db:{NFSU2_TR(0x4c24db);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c24dd:{NFSU2_TR(0x4c24dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c24de:{NFSU2_TR(0x4c24de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c24e3ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4c24e3:L4c24e3:{c.instructions+=1;NFSU2_TR(0x4c24e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c24e8ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4c24e8:L4c24e8:{c.instructions+=2;NFSU2_TR(0x4c24e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c24e9:{NFSU2_TR(0x4c24e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c24eeull));
TAIL_STATIC(0x52cf60u,52c);
}
B4c24ee:L4c24ee:{c.instructions+=3;NFSU2_TR(0x4c24ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c24f1:{NFSU2_TR(0x4c24f1);
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
B4c24f3:{NFSU2_TR(0x4c24f3);
if(r1(R+518)){{goto L4c2501;}}
}
B4c24f5:L4c24f5:{c.instructions+=1;NFSU2_TR(0x4c24f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c24faull));
TAIL_STATIC(0x50cea0u,50c);
}
B4c24fa:L4c24fa:{c.instructions+=2;NFSU2_TR(0x4c24fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c24fb:{NFSU2_TR(0x4c24fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2500ull));
TAIL_STATIC(0x5379a0u,537);
}
B4c2500:L4c2500:{c.instructions+=1;NFSU2_TR(0x4c2500);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c2501:L4c2501:{c.instructions+=1;NFSU2_TR(0x4c2501);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2510:L4c2510:{c.instructions+=2;NFSU2_TR(0x4c2510);
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
B4c2518:{NFSU2_TR(0x4c2518);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c2551;}}
}
B4c251a:L4c251a:{c.instructions+=3;NFSU2_TR(0x4c251a);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c2520:{NFSU2_TR(0x4c2520);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2522:{NFSU2_TR(0x4c2522);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2527ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B4c2527:L4c2527:{c.instructions+=4;NFSU2_TR(0x4c2527);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c252b:{NFSU2_TR(0x4c252b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c252d:{NFSU2_TR(0x4c252d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c252e:{NFSU2_TR(0x4c252e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2533ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4c2533:L4c2533:{c.instructions+=1;NFSU2_TR(0x4c2533);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2538ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4c2538:L4c2538:{c.instructions+=2;NFSU2_TR(0x4c2538);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2539:{NFSU2_TR(0x4c2539);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c253eull));
TAIL_STATIC(0x52cf60u,52c);
}
B4c253e:L4c253e:{c.instructions+=3;NFSU2_TR(0x4c253e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c2541:{NFSU2_TR(0x4c2541);
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
B4c2543:{NFSU2_TR(0x4c2543);
if(r1(R+518)){{goto L4c2551;}}
}
B4c2545:L4c2545:{c.instructions+=1;NFSU2_TR(0x4c2545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c254aull));
TAIL_STATIC(0x50cea0u,50c);
}
B4c254a:L4c254a:{c.instructions+=2;NFSU2_TR(0x4c254a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c254b:{NFSU2_TR(0x4c254b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2550ull));
TAIL_STATIC(0x5379a0u,537);
}
B4c2550:L4c2550:{c.instructions+=1;NFSU2_TR(0x4c2550);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c2551:L4c2551:{c.instructions+=1;NFSU2_TR(0x4c2551);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2560:L4c2560:{c.instructions+=2;NFSU2_TR(0x4c2560);
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
B4c2568:{NFSU2_TR(0x4c2568);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c25cc;}}
}
B4c256a:L4c256a:{c.instructions+=3;NFSU2_TR(0x4c256a);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B4c256f:{NFSU2_TR(0x4c256f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4c2572:{NFSU2_TR(0x4c2572);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c2581;}}
}
B4c2574:L4c2574:{c.instructions+=2;NFSU2_TR(0x4c2574);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c2578:{NFSU2_TR(0x4c2578);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c2581;}}
}
B4c257a:L4c257a:{c.instructions+=2;NFSU2_TR(0x4c257a);
w4(R+0,u32(0x1ull));
}
B4c257f:{NFSU2_TR(0x4c257f);
{goto L4c2583;}
}
B4c2581:L4c2581:{c.instructions+=1;NFSU2_TR(0x4c2581);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c2583:L4c2583:{c.instructions+=16;NFSU2_TR(0x4c2583);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4c2585:{NFSU2_TR(0x4c2585);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2586:{NFSU2_TR(0x4c2586);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c258a:{NFSU2_TR(0x4c258a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4c258c:{NFSU2_TR(0x4c258c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xb39d9ab5ull))));
}
B4c2591:{NFSU2_TR(0x4c2591);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x33c42e03ull))));
}
B4c2596:{NFSU2_TR(0x4c2596);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2597:{NFSU2_TR(0x4c2597);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2599:{NFSU2_TR(0x4c2599);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c259e:{NFSU2_TR(0x4c259e);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c25a3:{NFSU2_TR(0x4c25a3);
u8 U[4];
w4(U+0,u32(0x33c42e03ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c25a8:{NFSU2_TR(0x4c25a8);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c25ad:{NFSU2_TR(0x4c25ad);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c25b2:{NFSU2_TR(0x4c25b2);
u8 U[4];
w4(U+0,u32(0x795000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c25b7:{NFSU2_TR(0x4c25b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c25b8:{NFSU2_TR(0x4c25b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c25bdull));
TAIL_STATIC(0x558790u,558);
}
B4c25bd:L4c25bd:{c.instructions+=3;NFSU2_TR(0x4c25bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c25be:{NFSU2_TR(0x4c25be);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c25c3:{NFSU2_TR(0x4c25c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c25c8ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4c25c8:L4c25c8:{c.instructions+=2;NFSU2_TR(0x4c25c8);
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
B4c25cb:{NFSU2_TR(0x4c25cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c25cc:L4c25cc:{c.instructions+=1;NFSU2_TR(0x4c25cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c25d0:L4c25d0:{c.instructions+=3;NFSU2_TR(0x4c25d0);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B4c25d5:{NFSU2_TR(0x4c25d5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4c25d8:{NFSU2_TR(0x4c25d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c25e7;}}
}
B4c25da:L4c25da:{c.instructions+=2;NFSU2_TR(0x4c25da);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c25de:{NFSU2_TR(0x4c25de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c25e7;}}
}
B4c25e0:L4c25e0:{c.instructions+=2;NFSU2_TR(0x4c25e0);
w4(R+0,u32(0x1ull));
}
B4c25e5:{NFSU2_TR(0x4c25e5);
{goto L4c25e9;}
}
B4c25e7:L4c25e7:{c.instructions+=1;NFSU2_TR(0x4c25e7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c25e9:L4c25e9:{c.instructions+=2;NFSU2_TR(0x4c25e9);
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
B4c25f1:{NFSU2_TR(0x4c25f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c263c;}}
}
B4c25f3:L4c25f3:{c.instructions+=16;NFSU2_TR(0x4c25f3);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4c25f5:{NFSU2_TR(0x4c25f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c25f6:{NFSU2_TR(0x4c25f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c25fa:{NFSU2_TR(0x4c25fa);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4c25fc:{NFSU2_TR(0x4c25fc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xa0de05b7ull))));
}
B4c2601:{NFSU2_TR(0x4c2601);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x972a44bull))));
}
B4c2606:{NFSU2_TR(0x4c2606);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2607:{NFSU2_TR(0x4c2607);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2609:{NFSU2_TR(0x4c2609);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c260e:{NFSU2_TR(0x4c260e);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2613:{NFSU2_TR(0x4c2613);
u8 U[4];
w4(U+0,u32(0xe1a57d51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2618:{NFSU2_TR(0x4c2618);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c261d:{NFSU2_TR(0x4c261d);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2622:{NFSU2_TR(0x4c2622);
u8 U[4];
w4(U+0,u32(0x795000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2627:{NFSU2_TR(0x4c2627);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2628:{NFSU2_TR(0x4c2628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c262dull));
TAIL_STATIC(0x558790u,558);
}
B4c262d:L4c262d:{c.instructions+=3;NFSU2_TR(0x4c262d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c262e:{NFSU2_TR(0x4c262e);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2633:{NFSU2_TR(0x4c2633);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2638ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4c2638:L4c2638:{c.instructions+=2;NFSU2_TR(0x4c2638);
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
B4c263b:{NFSU2_TR(0x4c263b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c263c:L4c263c:{c.instructions+=1;NFSU2_TR(0x4c263c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2640:L4c2640:{c.instructions+=10;NFSU2_TR(0x4c2640);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c2644:{NFSU2_TR(0x4c2644);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c2648:{NFSU2_TR(0x4c2648);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2649:{NFSU2_TR(0x4c2649);
__builtin_memmove((R+24),(R+4),4);
}
B4c264b:{NFSU2_TR(0x4c264b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c264f:{NFSU2_TR(0x4c264f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2650:{NFSU2_TR(0x4c2650);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2651:{NFSU2_TR(0x4c2651);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2652:{NFSU2_TR(0x4c2652);
__builtin_memmove((R+4),(R+24),4);
}
B4c2654:{NFSU2_TR(0x4c2654);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2659ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c2659:L4c2659:{c.instructions+=5;NFSU2_TR(0x4c2659);
u8 U[4];
w4(U+0,u32(0x7954f0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c265f:{NFSU2_TR(0x4c265f);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B4c2664:{NFSU2_TR(0x4c2664);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c266a:{NFSU2_TR(0x4c266a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c266c:{NFSU2_TR(0x4c266c);
if(r1(R+518)){{goto L4c2694;}}
}
B4c266e:L4c266e:{c.instructions+=3;NFSU2_TR(0x4c266e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c2674:{NFSU2_TR(0x4c2674);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2676:{NFSU2_TR(0x4c2676);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c2694;}}
}
B4c2678:L4c2678:{c.instructions+=3;NFSU2_TR(0x4c2678);
__builtin_memmove((R+0),gp(0x88f1a8),4);
}
B4c267d:{NFSU2_TR(0x4c267d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c267f:{NFSU2_TR(0x4c267f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c2694;}}
}
B4c2681:L4c2681:{c.instructions+=7;NFSU2_TR(0x4c2681);
w4(R+0,u32(0x1ull));
}
B4c2686:{NFSU2_TR(0x4c2686);
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
B4c2688:{NFSU2_TR(0x4c2688);
__builtin_memmove((R+0),(R+518),1);
}
B4c268b:{NFSU2_TR(0x4c268b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c268e:{NFSU2_TR(0x4c268e);
__builtin_memmove((R+0),(R+24),4);
}
B4c2690:{NFSU2_TR(0x4c2690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c2691:{NFSU2_TR(0x4c2691);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2694:L4c2694:{c.instructions+=7;NFSU2_TR(0x4c2694);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c2696:{NFSU2_TR(0x4c2696);
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
B4c2698:{NFSU2_TR(0x4c2698);
__builtin_memmove((R+0),(R+518),1);
}
B4c269b:{NFSU2_TR(0x4c269b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c269e:{NFSU2_TR(0x4c269e);
__builtin_memmove((R+0),(R+24),4);
}
B4c26a0:{NFSU2_TR(0x4c26a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c26a1:{NFSU2_TR(0x4c26a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c26b0:L4c26b0:{c.instructions+=2;NFSU2_TR(0x4c26b0);
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
B4c26b8:{NFSU2_TR(0x4c26b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c26f8;}}
}
B4c26ba:L4c26ba:{c.instructions+=4;NFSU2_TR(0x4c26ba);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B4c26bf:{NFSU2_TR(0x4c26bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c26c5:{NFSU2_TR(0x4c26c5);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c26c7:{NFSU2_TR(0x4c26c7);
if(r1(R+518)){{goto L4c26f8;}}
}
B4c26c9:L4c26c9:{c.instructions+=3;NFSU2_TR(0x4c26c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c26cf:{NFSU2_TR(0x4c26cf);
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
B4c26d1:{NFSU2_TR(0x4c26d1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c26f8;}}
}
B4c26d3:L4c26d3:{c.instructions+=3;NFSU2_TR(0x4c26d3);
__builtin_memmove((R+0),gp(0x88f1a8),4);
}
B4c26d8:{NFSU2_TR(0x4c26d8);
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
B4c26da:{NFSU2_TR(0x4c26da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c26f8;}}
}
B4c26dc:L4c26dc:{c.instructions+=6;NFSU2_TR(0x4c26dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c26dd:{NFSU2_TR(0x4c26dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c26e1:{NFSU2_TR(0x4c26e1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c26e3:{NFSU2_TR(0x4c26e3);
u8 U[4];
w4(U+0,u32(0x7954f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c26e8:{NFSU2_TR(0x4c26e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c26e9:{NFSU2_TR(0x4c26e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c26eeull));
TAIL_STATIC(0x537980u,537);
}
B4c26ee:L4c26ee:{c.instructions+=3;NFSU2_TR(0x4c26ee);
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
B4c26f1:{NFSU2_TR(0x4c26f1);
__builtin_memmove(gp(0x8363e4),(R+24),4);
}
B4c26f7:{NFSU2_TR(0x4c26f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c26f8:L4c26f8:{c.instructions+=1;NFSU2_TR(0x4c26f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2700:L4c2700:{c.instructions+=2;NFSU2_TR(0x4c2700);
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
B4c2708:{NFSU2_TR(0x4c2708);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c271e;}}
}
B4c270a:L4c270a:{c.instructions+=5;NFSU2_TR(0x4c270a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c270e:{NFSU2_TR(0x4c270e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2710:{NFSU2_TR(0x4c2710);
u8 U[4];
w4(U+0,u32(0x79071cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2715:{NFSU2_TR(0x4c2715);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2716:{NFSU2_TR(0x4c2716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c271bull));
TAIL_STATIC(0x537980u,537);
}
B4c271b:L4c271b:{c.instructions+=1;NFSU2_TR(0x4c271b);
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
B4c271e:L4c271e:{c.instructions+=1;NFSU2_TR(0x4c271e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2730:L4c2730:{c.instructions+=2;NFSU2_TR(0x4c2730);
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
B4c2738:{NFSU2_TR(0x4c2738);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c2779;}}
}
B4c273a:L4c273a:{c.instructions+=12;NFSU2_TR(0x4c273a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c273b:{NFSU2_TR(0x4c273b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c273f:{NFSU2_TR(0x4c273f);
u8 U[4];
w4(U+0,u32(0xc9ba9e3eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2744:{NFSU2_TR(0x4c2744);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2746:{NFSU2_TR(0x4c2746);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c274b:{NFSU2_TR(0x4c274b);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2750:{NFSU2_TR(0x4c2750);
u8 U[4];
w4(U+0,u32(0x43da9fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2755:{NFSU2_TR(0x4c2755);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c275a:{NFSU2_TR(0x4c275a);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c275f:{NFSU2_TR(0x4c275f);
u8 U[4];
w4(U+0,u32(0x795000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2764:{NFSU2_TR(0x4c2764);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2765:{NFSU2_TR(0x4c2765);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c276aull));
TAIL_STATIC(0x558790u,558);
}
B4c276a:L4c276a:{c.instructions+=3;NFSU2_TR(0x4c276a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c276b:{NFSU2_TR(0x4c276b);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2770:{NFSU2_TR(0x4c2770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2775ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4c2775:L4c2775:{c.instructions+=2;NFSU2_TR(0x4c2775);
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
B4c2778:{NFSU2_TR(0x4c2778);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c2779:L4c2779:{c.instructions+=1;NFSU2_TR(0x4c2779);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2780:L4c2780:{c.instructions+=2;NFSU2_TR(0x4c2780);
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
B4c2788:{NFSU2_TR(0x4c2788);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c27ec;}}
}
B4c278a:L4c278a:{c.instructions+=3;NFSU2_TR(0x4c278a);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B4c278f:{NFSU2_TR(0x4c278f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4c2792:{NFSU2_TR(0x4c2792);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c27a1;}}
}
B4c2794:L4c2794:{c.instructions+=2;NFSU2_TR(0x4c2794);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c2798:{NFSU2_TR(0x4c2798);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c27a1;}}
}
B4c279a:L4c279a:{c.instructions+=2;NFSU2_TR(0x4c279a);
w4(R+0,u32(0x1ull));
}
B4c279f:{NFSU2_TR(0x4c279f);
{goto L4c27a3;}
}
B4c27a1:L4c27a1:{c.instructions+=1;NFSU2_TR(0x4c27a1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c27a3:L4c27a3:{c.instructions+=16;NFSU2_TR(0x4c27a3);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4c27a5:{NFSU2_TR(0x4c27a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c27a6:{NFSU2_TR(0x4c27a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c27aa:{NFSU2_TR(0x4c27aa);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4c27ac:{NFSU2_TR(0x4c27ac);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xa718ecb5ull))));
}
B4c27b1:{NFSU2_TR(0x4c27b1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60b42afbull))));
}
B4c27b6:{NFSU2_TR(0x4c27b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c27b7:{NFSU2_TR(0x4c27b7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c27b9:{NFSU2_TR(0x4c27b9);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c27be:{NFSU2_TR(0x4c27be);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c27c3:{NFSU2_TR(0x4c27c3);
u8 U[4];
w4(U+0,u32(0x451e768eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c27c8:{NFSU2_TR(0x4c27c8);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c27cd:{NFSU2_TR(0x4c27cd);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c27d2:{NFSU2_TR(0x4c27d2);
u8 U[4];
w4(U+0,u32(0x795000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c27d7:{NFSU2_TR(0x4c27d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c27d8:{NFSU2_TR(0x4c27d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c27ddull));
TAIL_STATIC(0x558790u,558);
}
B4c27dd:L4c27dd:{c.instructions+=3;NFSU2_TR(0x4c27dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c27de:{NFSU2_TR(0x4c27de);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c27e3:{NFSU2_TR(0x4c27e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c27e8ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4c27e8:L4c27e8:{c.instructions+=2;NFSU2_TR(0x4c27e8);
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
B4c27eb:{NFSU2_TR(0x4c27eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c27ec:L4c27ec:{c.instructions+=1;NFSU2_TR(0x4c27ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c27f0:L4c27f0:{c.instructions+=10;NFSU2_TR(0x4c27f0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c27f4:{NFSU2_TR(0x4c27f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c27f8:{NFSU2_TR(0x4c27f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c27f9:{NFSU2_TR(0x4c27f9);
__builtin_memmove((R+24),(R+4),4);
}
B4c27fb:{NFSU2_TR(0x4c27fb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c27ff:{NFSU2_TR(0x4c27ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2800:{NFSU2_TR(0x4c2800);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2801:{NFSU2_TR(0x4c2801);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2802:{NFSU2_TR(0x4c2802);
__builtin_memmove((R+4),(R+24),4);
}
B4c2804:{NFSU2_TR(0x4c2804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2809ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c2809:L4c2809:{c.instructions+=5;NFSU2_TR(0x4c2809);
u8 U[4];
w4(U+0,u32(0x795528ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c280f:{NFSU2_TR(0x4c280f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c2813:{NFSU2_TR(0x4c2813);
__builtin_memmove((R+0),(R+24),4);
}
B4c2815:{NFSU2_TR(0x4c2815);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c2816:{NFSU2_TR(0x4c2816);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2820:L4c2820:{c.instructions+=2;NFSU2_TR(0x4c2820);
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
B4c2828:{NFSU2_TR(0x4c2828);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c28ee;}}
}
B4c282e:L4c282e:{c.instructions+=3;NFSU2_TR(0x4c282e);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4c2833:{NFSU2_TR(0x4c2833);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2836:{NFSU2_TR(0x4c2836);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c286b;}}
}
B4c2838:L4c2838:{c.instructions+=2;NFSU2_TR(0x4c2838);
w4(R+4,u32(0x89cf48ull));
}
B4c283d:{NFSU2_TR(0x4c283d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2842ull));
TAIL_STATIC(0x5f0120u,5f0);
}
B4c2842:L4c2842:{c.instructions+=3;NFSU2_TR(0x4c2842);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c2844:{NFSU2_TR(0x4c2844);
__builtin_memmove((R+0),gp(0x850098),1);
}
B4c2849:{NFSU2_TR(0x4c2849);
if(r1(R+518)){{goto L4c285b;}}
}
B4c284b:L4c284b:{c.instructions+=5;NFSU2_TR(0x4c284b);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4c284d:{NFSU2_TR(0x4c284d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4c284f:{NFSU2_TR(0x4c284f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x244c7f5dull))));
}
B4c2854:{NFSU2_TR(0x4c2854);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x555bd5b6ull))));
}
B4c2859:{NFSU2_TR(0x4c2859);
{goto L4c28b3;}
}
B4c285b:L4c285b:{c.instructions+=5;NFSU2_TR(0x4c285b);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4c285d:{NFSU2_TR(0x4c285d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4c285f:{NFSU2_TR(0x4c285f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xedd4ec9dull))));
}
B4c2864:{NFSU2_TR(0x4c2864);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xce50da14ull))));
}
B4c2869:{NFSU2_TR(0x4c2869);
{goto L4c28b3;}
}
B4c286b:L4c286b:{c.instructions+=2;NFSU2_TR(0x4c286b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2870:{NFSU2_TR(0x4c2870);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c288c;}}
}
B4c2872:L4c2872:{c.instructions+=2;NFSU2_TR(0x4c2872);
w4(R+4,u32(0x89cf48ull));
}
B4c2877:{NFSU2_TR(0x4c2877);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c287cull));
TAIL_STATIC(0x5f0120u,5f0);
}
B4c287c:L4c287c:{c.instructions+=5;NFSU2_TR(0x4c287c);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4c287e:{NFSU2_TR(0x4c287e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4c2880:{NFSU2_TR(0x4c2880);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7f206c34ull))));
}
B4c2885:{NFSU2_TR(0x4c2885);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd63b6982ull))));
}
B4c288a:{NFSU2_TR(0x4c288a);
{goto L4c28b3;}
}
B4c288c:L4c288c:{c.instructions+=3;NFSU2_TR(0x4c288c);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c2892:{NFSU2_TR(0x4c2892);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4c2895:{NFSU2_TR(0x4c2895);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c28a4;}}
}
B4c2897:L4c2897:{c.instructions+=2;NFSU2_TR(0x4c2897);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c289b:{NFSU2_TR(0x4c289b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c28a4;}}
}
B4c289d:L4c289d:{c.instructions+=2;NFSU2_TR(0x4c289d);
w4(R+0,u32(0xe15b558aull));
}
B4c28a2:{NFSU2_TR(0x4c28a2);
{goto L4c28b3;}
}
B4c28a4:L4c28a4:{c.instructions+=5;NFSU2_TR(0x4c28a4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4c28a5:{NFSU2_TR(0x4c28a5);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4c28a7:{NFSU2_TR(0x4c28a7);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4c28a9:{NFSU2_TR(0x4c28a9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xc1a58cc2ull))));
}
B4c28ae:{NFSU2_TR(0x4c28ae);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x6f4796a6ull))));
}
B4c28b3:L4c28b3:{c.instructions+=12;NFSU2_TR(0x4c28b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c28b4:{NFSU2_TR(0x4c28b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c28b8:{NFSU2_TR(0x4c28b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c28b9:{NFSU2_TR(0x4c28b9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c28bb:{NFSU2_TR(0x4c28bb);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c28c0:{NFSU2_TR(0x4c28c0);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c28c5:{NFSU2_TR(0x4c28c5);
u8 U[4];
w4(U+0,u32(0x30ed2368ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c28ca:{NFSU2_TR(0x4c28ca);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c28cf:{NFSU2_TR(0x4c28cf);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c28d4:{NFSU2_TR(0x4c28d4);
u8 U[4];
w4(U+0,u32(0x795000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c28d9:{NFSU2_TR(0x4c28d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c28da:{NFSU2_TR(0x4c28da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c28dfull));
TAIL_STATIC(0x558790u,558);
}
B4c28df:L4c28df:{c.instructions+=3;NFSU2_TR(0x4c28df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c28e0:{NFSU2_TR(0x4c28e0);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c28e5:{NFSU2_TR(0x4c28e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c28eaull));
TAIL_STATIC(0x55dda0u,55d);
}
B4c28ea:L4c28ea:{c.instructions+=2;NFSU2_TR(0x4c28ea);
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
B4c28ed:{NFSU2_TR(0x4c28ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c28ee:L4c28ee:{c.instructions+=1;NFSU2_TR(0x4c28ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2900:L4c2900:{c.instructions+=14;NFSU2_TR(0x4c2900);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2902:{NFSU2_TR(0x4c2902);
u8 U[4];
w4(U+0,u32(0x773bd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2907:{NFSU2_TR(0x4c2907);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c290d:{NFSU2_TR(0x4c290d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c290e:{NFSU2_TR(0x4c290e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2915:{NFSU2_TR(0x4c2915);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2916:{NFSU2_TR(0x4c2916);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2917:{NFSU2_TR(0x4c2917);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2918:{NFSU2_TR(0x4c2918);
__builtin_memmove((R+24),gp(0x850078),4);
}
B4c291e:{NFSU2_TR(0x4c291e);
w4(R+12,u32(0x1ull));
}
B4c2923:{NFSU2_TR(0x4c2923);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2925:{NFSU2_TR(0x4c2925);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2926:{NFSU2_TR(0x4c2926);
__builtin_memmove((R+28),(R+4),4);
}
B4c2928:{NFSU2_TR(0x4c2928);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c2982;}}
}
B4c292a:L4c292a:{c.instructions+=2;NFSU2_TR(0x4c292a);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2931:{NFSU2_TR(0x4c2931);
if(r1(R+518)){{goto L4c29d1;}}
}
B4c2937:L4c2937:{c.instructions+=2;NFSU2_TR(0x4c2937);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2939:{NFSU2_TR(0x4c2939);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c293eull));
TAIL_STATIC(0x575620u,575);
}
B4c293e:L4c293e:{c.instructions+=6;NFSU2_TR(0x4c293e);
__builtin_memmove((R+24),(R+0),4);
}
B4c2940:{NFSU2_TR(0x4c2940);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c2943:{NFSU2_TR(0x4c2943);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2947:{NFSU2_TR(0x4c2947);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2949:{NFSU2_TR(0x4c2949);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2951:{NFSU2_TR(0x4c2951);
if(r1(R+518)){{goto L4c296e;}}
}
B4c2953:L4c2953:{c.instructions+=5;NFSU2_TR(0x4c2953);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2955:{NFSU2_TR(0x4c2955);
u8 U[4];
w4(U+0,u32(0xc3e5bcdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c295a:{NFSU2_TR(0x4c295a);
u8 U[4];
w4(U+0,u32(0x62aa0df6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c295f:{NFSU2_TR(0x4c295f);
__builtin_memmove((R+4),(R+24),4);
}
B4c2961:{NFSU2_TR(0x4c2961);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2966ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c2966:L4c2966:{c.instructions+=2;NFSU2_TR(0x4c2966);
u8 U[4];
w4(U+0,u32(0x7954d8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c296c:{NFSU2_TR(0x4c296c);
{goto L4c2970;}
}
B4c296e:L4c296e:{c.instructions+=1;NFSU2_TR(0x4c296e);
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
B4c2970:L4c2970:{c.instructions+=5;NFSU2_TR(0x4c2970);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c2972:{NFSU2_TR(0x4c2972);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2973:{NFSU2_TR(0x4c2973);
__builtin_memmove((R+4),(R+28),4);
}
B4c2975:{NFSU2_TR(0x4c2975);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c297d:{NFSU2_TR(0x4c297d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2980ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c2980:L4c2980:{c.instructions+=1;NFSU2_TR(0x4c2980);
{goto L4c29c7;}
}
B4c2982:L4c2982:{c.instructions+=2;NFSU2_TR(0x4c2982);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2984:{NFSU2_TR(0x4c2984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2989ull));
TAIL_STATIC(0x575620u,575);
}
B4c2989:L4c2989:{c.instructions+=6;NFSU2_TR(0x4c2989);
__builtin_memmove((R+24),(R+0),4);
}
B4c298b:{NFSU2_TR(0x4c298b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c298e:{NFSU2_TR(0x4c298e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2992:{NFSU2_TR(0x4c2992);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2994:{NFSU2_TR(0x4c2994);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2998:{NFSU2_TR(0x4c2998);
if(r1(R+518)){{goto L4c29b5;}}
}
B4c299a:L4c299a:{c.instructions+=5;NFSU2_TR(0x4c299a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c299c:{NFSU2_TR(0x4c299c);
u8 U[4];
w4(U+0,u32(0xc44a6515ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c29a1:{NFSU2_TR(0x4c29a1);
u8 U[4];
w4(U+0,u32(0x62aa0df6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c29a6:{NFSU2_TR(0x4c29a6);
__builtin_memmove((R+4),(R+24),4);
}
B4c29a8:{NFSU2_TR(0x4c29a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c29adull));
TAIL_STATIC(0x51f670u,51f);
}
B4c29ad:L4c29ad:{c.instructions+=2;NFSU2_TR(0x4c29ad);
u8 U[4];
w4(U+0,u32(0x7954d8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c29b3:{NFSU2_TR(0x4c29b3);
{goto L4c29b7;}
}
B4c29b5:L4c29b5:{c.instructions+=1;NFSU2_TR(0x4c29b5);
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
B4c29b7:L4c29b7:{c.instructions+=5;NFSU2_TR(0x4c29b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c29b9:{NFSU2_TR(0x4c29b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c29ba:{NFSU2_TR(0x4c29ba);
__builtin_memmove((R+4),(R+28),4);
}
B4c29bc:{NFSU2_TR(0x4c29bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c29c4:{NFSU2_TR(0x4c29c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c29c7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c29c7:L4c29c7:{c.instructions+=3;NFSU2_TR(0x4c29c7);
__builtin_memmove((R+24),gp(0x850078),4);
}
B4c29cd:{NFSU2_TR(0x4c29cd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c29cf:{NFSU2_TR(0x4c29cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c2a2c;}}
}
B4c29d1:L4c29d1:{c.instructions+=3;NFSU2_TR(0x4c29d1);
__builtin_memmove((R+0),gp(0x8635a8),1);
}
B4c29d6:{NFSU2_TR(0x4c29d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c29d8:{NFSU2_TR(0x4c29d8);
if(r1(R+518)){{goto L4c2a2c;}}
}
B4c29da:L4c29da:{c.instructions+=2;NFSU2_TR(0x4c29da);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c29dc:{NFSU2_TR(0x4c29dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c29e1ull));
TAIL_STATIC(0x575620u,575);
}
B4c29e1:L4c29e1:{c.instructions+=6;NFSU2_TR(0x4c29e1);
__builtin_memmove((R+24),(R+0),4);
}
B4c29e3:{NFSU2_TR(0x4c29e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c29e6:{NFSU2_TR(0x4c29e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c29ea:{NFSU2_TR(0x4c29ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c29ec:{NFSU2_TR(0x4c29ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c29f4:{NFSU2_TR(0x4c29f4);
if(r1(R+518)){{goto L4c2a14;}}
}
B4c29f6:L4c29f6:{c.instructions+=5;NFSU2_TR(0x4c29f6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c29f8:{NFSU2_TR(0x4c29f8);
u8 U[4];
w4(U+0,u32(0x453890e1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c29fd:{NFSU2_TR(0x4c29fd);
u8 U[4];
w4(U+0,u32(0xb8038ac0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2a02:{NFSU2_TR(0x4c2a02);
__builtin_memmove((R+4),(R+24),4);
}
B4c2a04:{NFSU2_TR(0x4c2a04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2a09ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c2a09:L4c2a09:{c.instructions+=3;NFSU2_TR(0x4c2a09);
u8 U[4];
w4(U+0,u32(0x795518ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c2a0f:{NFSU2_TR(0x4c2a0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c2a12:{NFSU2_TR(0x4c2a12);
{goto L4c2a16;}
}
B4c2a14:L4c2a14:{c.instructions+=1;NFSU2_TR(0x4c2a14);
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
B4c2a16:L4c2a16:{c.instructions+=5;NFSU2_TR(0x4c2a16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c2a18:{NFSU2_TR(0x4c2a18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2a19:{NFSU2_TR(0x4c2a19);
__builtin_memmove((R+4),(R+28),4);
}
B4c2a1b:{NFSU2_TR(0x4c2a1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2a23:{NFSU2_TR(0x4c2a23);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2a26ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c2a26:L4c2a26:{c.instructions+=1;NFSU2_TR(0x4c2a26);
__builtin_memmove((R+24),gp(0x850078),4);
}
B4c2a2c:L4c2a2c:{c.instructions+=2;NFSU2_TR(0x4c2a2c);
__builtin_memmove((R+4),(R+28),4);
}
B4c2a2e:{NFSU2_TR(0x4c2a2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2a33ull));
TAIL_STATIC(0x4a7bf0u,4a7);
}
B4c2a33:L4c2a33:{c.instructions+=2;NFSU2_TR(0x4c2a33);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c2a35:{NFSU2_TR(0x4c2a35);
if(r1(R+518)){{goto L4c2a86;}}
}
B4c2a37:L4c2a37:{c.instructions+=2;NFSU2_TR(0x4c2a37);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2a39:{NFSU2_TR(0x4c2a39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2a3eull));
TAIL_STATIC(0x575620u,575);
}
B4c2a3e:L4c2a3e:{c.instructions+=6;NFSU2_TR(0x4c2a3e);
__builtin_memmove((R+24),(R+0),4);
}
B4c2a40:{NFSU2_TR(0x4c2a40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c2a43:{NFSU2_TR(0x4c2a43);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2a47:{NFSU2_TR(0x4c2a47);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2a49:{NFSU2_TR(0x4c2a49);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2a51:{NFSU2_TR(0x4c2a51);
if(r1(R+518)){{goto L4c2a6e;}}
}
B4c2a53:L4c2a53:{c.instructions+=5;NFSU2_TR(0x4c2a53);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2a55:{NFSU2_TR(0x4c2a55);
u8 U[4];
w4(U+0,u32(0xb34993c9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2a5a:{NFSU2_TR(0x4c2a5a);
u8 U[4];
w4(U+0,u32(0x520de4e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2a5f:{NFSU2_TR(0x4c2a5f);
__builtin_memmove((R+4),(R+24),4);
}
B4c2a61:{NFSU2_TR(0x4c2a61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2a66ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c2a66:L4c2a66:{c.instructions+=2;NFSU2_TR(0x4c2a66);
u8 U[4];
w4(U+0,u32(0x795510ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c2a6c:{NFSU2_TR(0x4c2a6c);
{goto L4c2a70;}
}
B4c2a6e:L4c2a6e:{c.instructions+=1;NFSU2_TR(0x4c2a6e);
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
B4c2a70:L4c2a70:{c.instructions+=5;NFSU2_TR(0x4c2a70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c2a72:{NFSU2_TR(0x4c2a72);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2a73:{NFSU2_TR(0x4c2a73);
__builtin_memmove((R+4),(R+28),4);
}
B4c2a75:{NFSU2_TR(0x4c2a75);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2a7d:{NFSU2_TR(0x4c2a7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2a80ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c2a80:L4c2a80:{c.instructions+=1;NFSU2_TR(0x4c2a80);
__builtin_memmove((R+24),gp(0x850078),4);
}
B4c2a86:L4c2a86:{c.instructions+=2;NFSU2_TR(0x4c2a86);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2a89:{NFSU2_TR(0x4c2a89);
if(r1(R+518)){{goto L4c2adf;}}
}
B4c2a8b:L4c2a8b:{c.instructions+=2;NFSU2_TR(0x4c2a8b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2a8e:{NFSU2_TR(0x4c2a8e);
if(r1(R+518)){{goto L4c2ae4;}}
}
B4c2a90:L4c2a90:{c.instructions+=2;NFSU2_TR(0x4c2a90);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2a96:{NFSU2_TR(0x4c2a96);
if(r1(R+518)){{goto L4c2adf;}}
}
B4c2a98:L4c2a98:{c.instructions+=2;NFSU2_TR(0x4c2a98);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2a9a:{NFSU2_TR(0x4c2a9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2a9full));
TAIL_STATIC(0x575620u,575);
}
B4c2a9f:L4c2a9f:{c.instructions+=5;NFSU2_TR(0x4c2a9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c2aa2:{NFSU2_TR(0x4c2aa2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2aa6:{NFSU2_TR(0x4c2aa6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2aa8:{NFSU2_TR(0x4c2aa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2ab0:{NFSU2_TR(0x4c2ab0);
if(r1(R+518)){{goto L4c2ac7;}}
}
B4c2ab2:L4c2ab2:{c.instructions+=5;NFSU2_TR(0x4c2ab2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2ab4:{NFSU2_TR(0x4c2ab4);
u8 U[4];
w4(U+0,u32(0x7840428aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2ab9:{NFSU2_TR(0x4c2ab9);
u8 U[4];
w4(U+0,u32(0x84d1d864ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2abe:{NFSU2_TR(0x4c2abe);
__builtin_memmove((R+4),(R+0),4);
}
B4c2ac0:{NFSU2_TR(0x4c2ac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2ac5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c2640u);}goto L4c2640;}
}
B4c2ac5:L4c2ac5:{c.instructions+=1;NFSU2_TR(0x4c2ac5);
{goto L4c2ac9;}
}
B4c2ac7:L4c2ac7:{c.instructions+=1;NFSU2_TR(0x4c2ac7);
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
B4c2ac9:L4c2ac9:{c.instructions+=5;NFSU2_TR(0x4c2ac9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c2acb:{NFSU2_TR(0x4c2acb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2acc:{NFSU2_TR(0x4c2acc);
__builtin_memmove((R+4),(R+28),4);
}
B4c2ace:{NFSU2_TR(0x4c2ace);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2ad6:{NFSU2_TR(0x4c2ad6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2ad9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c2ad9:L4c2ad9:{c.instructions+=1;NFSU2_TR(0x4c2ad9);
__builtin_memmove((R+24),gp(0x850078),4);
}
B4c2adf:L4c2adf:{c.instructions+=2;NFSU2_TR(0x4c2adf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2ae2:{NFSU2_TR(0x4c2ae2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c2b25;}}
}
B4c2ae4:L4c2ae4:{c.instructions+=2;NFSU2_TR(0x4c2ae4);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2ae6:{NFSU2_TR(0x4c2ae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2aebull));
TAIL_STATIC(0x575620u,575);
}
B4c2aeb:L4c2aeb:{c.instructions+=6;NFSU2_TR(0x4c2aeb);
__builtin_memmove((R+24),(R+0),4);
}
B4c2aed:{NFSU2_TR(0x4c2aed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c2af0:{NFSU2_TR(0x4c2af0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2af4:{NFSU2_TR(0x4c2af4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2af6:{NFSU2_TR(0x4c2af6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2afe:{NFSU2_TR(0x4c2afe);
if(r1(R+518)){{goto L4c2ba3;}}
}
B4c2b04:L4c2b04:{c.instructions+=2;NFSU2_TR(0x4c2b04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2b06:{NFSU2_TR(0x4c2b06);
u8 U[4];
w4(U+0,u32(0xff956af2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2b0b:L4c2b0b:{c.instructions+=3;NFSU2_TR(0x4c2b0b);
u8 U[4];
w4(U+0,u32(0x4c9e34e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2b10:{NFSU2_TR(0x4c2b10);
__builtin_memmove((R+4),(R+24),4);
}
B4c2b12:{NFSU2_TR(0x4c2b12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2b17ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c2b17:L4c2b17:{c.instructions+=3;NFSU2_TR(0x4c2b17);
u8 U[4];
w4(U+0,u32(0x795528ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c2b1d:{NFSU2_TR(0x4c2b1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c2b20:{NFSU2_TR(0x4c2b20);
{goto L4c2ba5;}
}
B4c2b25:L4c2b25:{c.instructions+=2;NFSU2_TR(0x4c2b25);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2b27:{NFSU2_TR(0x4c2b27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2b2cull));
TAIL_STATIC(0x575620u,575);
}
B4c2b2c:L4c2b2c:{c.instructions+=5;NFSU2_TR(0x4c2b2c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c2b2f:{NFSU2_TR(0x4c2b2f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2b35:{NFSU2_TR(0x4c2b35);
__builtin_memmove((R+24),(R+0),4);
}
B4c2b37:{NFSU2_TR(0x4c2b37);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2b3b:{NFSU2_TR(0x4c2b3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c2b8b;}}
}
B4c2b3d:L4c2b3d:{c.instructions+=3;NFSU2_TR(0x4c2b3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2b3f:{NFSU2_TR(0x4c2b3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2b47:{NFSU2_TR(0x4c2b47);
if(r1(R+518)){{goto L4c2b67;}}
}
B4c2b49:L4c2b49:{c.instructions+=5;NFSU2_TR(0x4c2b49);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2b4b:{NFSU2_TR(0x4c2b4b);
u8 U[4];
w4(U+0,u32(0xf39723a1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2b50:{NFSU2_TR(0x4c2b50);
u8 U[4];
w4(U+0,u32(0x4c9e34e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2b55:{NFSU2_TR(0x4c2b55);
__builtin_memmove((R+4),(R+24),4);
}
B4c2b57:{NFSU2_TR(0x4c2b57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2b5cull));
TAIL_STATIC(0x51f670u,51f);
}
B4c2b5c:L4c2b5c:{c.instructions+=3;NFSU2_TR(0x4c2b5c);
u8 U[4];
w4(U+0,u32(0x795528ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c2b62:{NFSU2_TR(0x4c2b62);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c2b65:{NFSU2_TR(0x4c2b65);
{goto L4c2b69;}
}
B4c2b67:L4c2b67:{c.instructions+=1;NFSU2_TR(0x4c2b67);
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
B4c2b69:L4c2b69:{c.instructions+=5;NFSU2_TR(0x4c2b69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c2b6b:{NFSU2_TR(0x4c2b6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2b6c:{NFSU2_TR(0x4c2b6c);
__builtin_memmove((R+4),(R+28),4);
}
B4c2b6e:{NFSU2_TR(0x4c2b6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2b76:{NFSU2_TR(0x4c2b76);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2b79ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c2b79:L4c2b79:{c.instructions+=7;NFSU2_TR(0x4c2b79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c2b7a:{NFSU2_TR(0x4c2b7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c2b7b:{NFSU2_TR(0x4c2b7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c2b7c:{NFSU2_TR(0x4c2b7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c2b80:{NFSU2_TR(0x4c2b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2b87:{NFSU2_TR(0x4c2b87);
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
B4c2b8a:{NFSU2_TR(0x4c2b8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2b8b:L4c2b8b:{c.instructions+=3;NFSU2_TR(0x4c2b8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2b8d:{NFSU2_TR(0x4c2b8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2b95:{NFSU2_TR(0x4c2b95);
if(r1(R+518)){{goto L4c2ba3;}}
}
B4c2b97:L4c2b97:{c.instructions+=3;NFSU2_TR(0x4c2b97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2b99:{NFSU2_TR(0x4c2b99);
u8 U[4];
w4(U+0,u32(0xc7e1420cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2b9e:{NFSU2_TR(0x4c2b9e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c2b0bu);}goto L4c2b0b;}
}
B4c2ba3:L4c2ba3:{c.instructions+=1;NFSU2_TR(0x4c2ba3);
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
B4c2ba5:L4c2ba5:{c.instructions+=5;NFSU2_TR(0x4c2ba5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c2ba7:{NFSU2_TR(0x4c2ba7);
__builtin_memmove((R+4),(R+28),4);
}
B4c2ba9:{NFSU2_TR(0x4c2ba9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2baa:{NFSU2_TR(0x4c2baa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2bb2:{NFSU2_TR(0x4c2bb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2bb5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c2bb5:L4c2bb5:{c.instructions+=7;NFSU2_TR(0x4c2bb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c2bb9:{NFSU2_TR(0x4c2bb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c2bba:{NFSU2_TR(0x4c2bba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c2bbb:{NFSU2_TR(0x4c2bbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c2bbc:{NFSU2_TR(0x4c2bbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2bc3:{NFSU2_TR(0x4c2bc3);
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
B4c2bc6:{NFSU2_TR(0x4c2bc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2bd0:L4c2bd0:{c.instructions+=14;NFSU2_TR(0x4c2bd0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2bd2:{NFSU2_TR(0x4c2bd2);
u8 U[4];
w4(U+0,u32(0x773cd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2bd7:{NFSU2_TR(0x4c2bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c2bdd:{NFSU2_TR(0x4c2bdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2bde:{NFSU2_TR(0x4c2bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2be5:{NFSU2_TR(0x4c2be5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2be6:{NFSU2_TR(0x4c2be6);
__builtin_memmove((R+0),gp(0x8500d0),4);
}
B4c2beb:{NFSU2_TR(0x4c2beb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2bec:{NFSU2_TR(0x4c2bec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2bed:{NFSU2_TR(0x4c2bed);
w4(R+12,u32(0x3ull));
}
B4c2bf2:{NFSU2_TR(0x4c2bf2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c2bf4:{NFSU2_TR(0x4c2bf4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2bf5:{NFSU2_TR(0x4c2bf5);
__builtin_memmove((R+28),(R+4),4);
}
B4c2bf7:{NFSU2_TR(0x4c2bf7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4c2f11;}}
}
B4c2bfd:L4c2bfd:{c.instructions+=2;NFSU2_TR(0x4c2bfd);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2c04:{NFSU2_TR(0x4c2c04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c2c5c;}}
}
B4c2c06:L4c2c06:{c.instructions+=3;NFSU2_TR(0x4c2c06);
__builtin_memmove((R+0),gp(0x85ba67),1);
}
B4c2c0b:{NFSU2_TR(0x4c2c0b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c2c0d:{NFSU2_TR(0x4c2c0d);
if(r1(R+518)){{goto L4c2c5c;}}
}
B4c2c0f:L4c2c0f:{c.instructions+=2;NFSU2_TR(0x4c2c0f);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2c11:{NFSU2_TR(0x4c2c11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2c16ull));
TAIL_STATIC(0x575620u,575);
}
B4c2c16:L4c2c16:{c.instructions+=6;NFSU2_TR(0x4c2c16);
__builtin_memmove((R+24),(R+0),4);
}
B4c2c18:{NFSU2_TR(0x4c2c18);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c2c1b:{NFSU2_TR(0x4c2c1b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2c1f:{NFSU2_TR(0x4c2c1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2c21:{NFSU2_TR(0x4c2c21);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2c29:{NFSU2_TR(0x4c2c29);
if(r1(R+518)){{goto L4c2c4a;}}
}
B4c2c2b:L4c2c2b:{c.instructions+=5;NFSU2_TR(0x4c2c2b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2c2d:{NFSU2_TR(0x4c2c2d);
u8 U[4];
w4(U+0,u32(0x5e670a9eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2c32:{NFSU2_TR(0x4c2c32);
u8 U[4];
w4(U+0,u32(0x3109913cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2c37:{NFSU2_TR(0x4c2c37);
__builtin_memmove((R+4),(R+24),4);
}
B4c2c39:{NFSU2_TR(0x4c2c39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2c3eull));
TAIL_STATIC(0x51f670u,51f);
}
B4c2c3e:L4c2c3e:{c.instructions+=3;NFSU2_TR(0x4c2c3e);
u8 U[4];
w4(U+0,u32(0x7954e0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c2c44:{NFSU2_TR(0x4c2c44);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c2c48:{NFSU2_TR(0x4c2c48);
{goto L4c2c4c;}
}
B4c2c4a:L4c2c4a:{c.instructions+=1;NFSU2_TR(0x4c2c4a);
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
B4c2c4c:L4c2c4c:{c.instructions+=5;NFSU2_TR(0x4c2c4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c2c4e:{NFSU2_TR(0x4c2c4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2c4f:{NFSU2_TR(0x4c2c4f);
__builtin_memmove((R+4),(R+28),4);
}
B4c2c51:{NFSU2_TR(0x4c2c51);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2c59:{NFSU2_TR(0x4c2c59);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2c5cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c2c5c:L4c2c5c:{c.instructions+=2;NFSU2_TR(0x4c2c5c);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2c5e:{NFSU2_TR(0x4c2c5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2c63ull));
TAIL_STATIC(0x575620u,575);
}
B4c2c63:L4c2c63:{c.instructions+=6;NFSU2_TR(0x4c2c63);
__builtin_memmove((R+24),(R+0),4);
}
B4c2c65:{NFSU2_TR(0x4c2c65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c2c68:{NFSU2_TR(0x4c2c68);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2c6c:{NFSU2_TR(0x4c2c6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2c6e:{NFSU2_TR(0x4c2c6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2c76:{NFSU2_TR(0x4c2c76);
if(r1(R+518)){{goto L4c2c97;}}
}
B4c2c78:L4c2c78:{c.instructions+=5;NFSU2_TR(0x4c2c78);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2c7a:{NFSU2_TR(0x4c2c7a);
u8 U[4];
w4(U+0,u32(0xf6601088ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2c7f:{NFSU2_TR(0x4c2c7f);
u8 U[4];
w4(U+0,u32(0x12bb5ea2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2c84:{NFSU2_TR(0x4c2c84);
__builtin_memmove((R+4),(R+24),4);
}
B4c2c86:{NFSU2_TR(0x4c2c86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2c8bull));
TAIL_STATIC(0x51f670u,51f);
}
B4c2c8b:L4c2c8b:{c.instructions+=3;NFSU2_TR(0x4c2c8b);
u8 U[4];
w4(U+0,u32(0x7954d0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c2c91:{NFSU2_TR(0x4c2c91);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c2c95:{NFSU2_TR(0x4c2c95);
{goto L4c2c99;}
}
B4c2c97:L4c2c97:{c.instructions+=1;NFSU2_TR(0x4c2c97);
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
B4c2c99:L4c2c99:{c.instructions+=5;NFSU2_TR(0x4c2c99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c2c9b:{NFSU2_TR(0x4c2c9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2c9c:{NFSU2_TR(0x4c2c9c);
__builtin_memmove((R+4),(R+28),4);
}
B4c2c9e:{NFSU2_TR(0x4c2c9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2ca6:{NFSU2_TR(0x4c2ca6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2ca9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c2ca9:L4c2ca9:{c.instructions+=3;NFSU2_TR(0x4c2ca9);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2cb0:{NFSU2_TR(0x4c2cb0);
__builtin_memmove((R+24),gp(0x850078),4);
}
B4c2cb6:{NFSU2_TR(0x4c2cb6);
if(r1(R+518)){{goto L4c2d18;}}
}
B4c2cb8:L4c2cb8:{c.instructions+=2;NFSU2_TR(0x4c2cb8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2cbb:{NFSU2_TR(0x4c2cbb);
if(r1(R+518)){{goto L4c2d18;}}
}
B4c2cbd:L4c2cbd:{c.instructions+=2;NFSU2_TR(0x4c2cbd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2cc3:{NFSU2_TR(0x4c2cc3);
if(r1(R+518)){{goto L4c2d18;}}
}
B4c2cc5:L4c2cc5:{c.instructions+=2;NFSU2_TR(0x4c2cc5);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2cc7:{NFSU2_TR(0x4c2cc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2cccull));
TAIL_STATIC(0x575620u,575);
}
B4c2ccc:L4c2ccc:{c.instructions+=6;NFSU2_TR(0x4c2ccc);
__builtin_memmove((R+24),(R+0),4);
}
B4c2cce:{NFSU2_TR(0x4c2cce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c2cd1:{NFSU2_TR(0x4c2cd1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2cd5:{NFSU2_TR(0x4c2cd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2cd7:{NFSU2_TR(0x4c2cd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2cdf:{NFSU2_TR(0x4c2cdf);
if(r1(R+518)){{goto L4c2d00;}}
}
B4c2ce1:L4c2ce1:{c.instructions+=5;NFSU2_TR(0x4c2ce1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2ce3:{NFSU2_TR(0x4c2ce3);
u8 U[4];
w4(U+0,u32(0x80833fc2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2ce8:{NFSU2_TR(0x4c2ce8);
u8 U[4];
w4(U+0,u32(0xb295a6b6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2ced:{NFSU2_TR(0x4c2ced);
__builtin_memmove((R+4),(R+24),4);
}
B4c2cef:{NFSU2_TR(0x4c2cef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2cf4ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c2cf4:L4c2cf4:{c.instructions+=3;NFSU2_TR(0x4c2cf4);
u8 U[4];
w4(U+0,u32(0x7954e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c2cfa:{NFSU2_TR(0x4c2cfa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c2cfe:{NFSU2_TR(0x4c2cfe);
{goto L4c2d02;}
}
B4c2d00:L4c2d00:{c.instructions+=1;NFSU2_TR(0x4c2d00);
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
B4c2d02:L4c2d02:{c.instructions+=5;NFSU2_TR(0x4c2d02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c2d04:{NFSU2_TR(0x4c2d04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2d05:{NFSU2_TR(0x4c2d05);
__builtin_memmove((R+4),(R+28),4);
}
B4c2d07:{NFSU2_TR(0x4c2d07);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2d0f:{NFSU2_TR(0x4c2d0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2d12ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c2d12:L4c2d12:{c.instructions+=1;NFSU2_TR(0x4c2d12);
__builtin_memmove((R+24),gp(0x850078),4);
}
B4c2d18:L4c2d18:{c.instructions+=2;NFSU2_TR(0x4c2d18);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2d1b:{NFSU2_TR(0x4c2d1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c2d76;}}
}
B4c2d1d:L4c2d1d:{c.instructions+=2;NFSU2_TR(0x4c2d1d);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2d24:{NFSU2_TR(0x4c2d24);
if(r1(R+518)){{goto L4c2d76;}}
}
B4c2d26:L4c2d26:{c.instructions+=2;NFSU2_TR(0x4c2d26);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2d28:{NFSU2_TR(0x4c2d28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2d2dull));
TAIL_STATIC(0x575620u,575);
}
B4c2d2d:L4c2d2d:{c.instructions+=6;NFSU2_TR(0x4c2d2d);
__builtin_memmove((R+24),(R+0),4);
}
B4c2d2f:{NFSU2_TR(0x4c2d2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c2d32:{NFSU2_TR(0x4c2d32);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2d36:{NFSU2_TR(0x4c2d36);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2d38:{NFSU2_TR(0x4c2d38);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2d3c:{NFSU2_TR(0x4c2d3c);
if(r1(R+518)){{goto L4c2d5d;}}
}
B4c2d3e:L4c2d3e:{c.instructions+=5;NFSU2_TR(0x4c2d3e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2d40:{NFSU2_TR(0x4c2d40);
u8 U[4];
w4(U+0,u32(0xdb4e3c0dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2d45:{NFSU2_TR(0x4c2d45);
u8 U[4];
w4(U+0,u32(0x62aa0df6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2d4a:{NFSU2_TR(0x4c2d4a);
__builtin_memmove((R+4),(R+24),4);
}
B4c2d4c:{NFSU2_TR(0x4c2d4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2d51ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c2d51:L4c2d51:{c.instructions+=3;NFSU2_TR(0x4c2d51);
u8 U[4];
w4(U+0,u32(0x795520ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c2d57:{NFSU2_TR(0x4c2d57);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c2d5b:{NFSU2_TR(0x4c2d5b);
{goto L4c2d5f;}
}
B4c2d5d:L4c2d5d:{c.instructions+=1;NFSU2_TR(0x4c2d5d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4c2d5f:L4c2d5f:{c.instructions+=6;NFSU2_TR(0x4c2d5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c2d61:{NFSU2_TR(0x4c2d61);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c2d64:{NFSU2_TR(0x4c2d64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2d65:{NFSU2_TR(0x4c2d65);
__builtin_memmove((R+4),(R+28),4);
}
B4c2d67:{NFSU2_TR(0x4c2d67);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2d6b:{NFSU2_TR(0x4c2d6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2d6eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c2d6e:L4c2d6e:{c.instructions+=2;NFSU2_TR(0x4c2d6e);
__builtin_memmove((R+24),gp(0x850078),4);
}
B4c2d74:{NFSU2_TR(0x4c2d74);
{goto L4c2d79;}
}
B4c2d76:L4c2d76:{c.instructions+=1;NFSU2_TR(0x4c2d76);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B4c2d79:L4c2d79:{c.instructions+=2;NFSU2_TR(0x4c2d79);
__builtin_memmove((R+4),(R+28),4);
}
B4c2d7b:{NFSU2_TR(0x4c2d7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2d80ull));
TAIL_STATIC(0x4a7bf0u,4a7);
}
B4c2d80:L4c2d80:{c.instructions+=2;NFSU2_TR(0x4c2d80);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c2d82:{NFSU2_TR(0x4c2d82);
if(r1(R+518)){{goto L4c2dcf;}}
}
B4c2d84:L4c2d84:{c.instructions+=2;NFSU2_TR(0x4c2d84);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2d86:{NFSU2_TR(0x4c2d86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2d8bull));
TAIL_STATIC(0x575620u,575);
}
B4c2d8b:L4c2d8b:{c.instructions+=6;NFSU2_TR(0x4c2d8b);
__builtin_memmove((R+24),(R+0),4);
}
B4c2d8d:{NFSU2_TR(0x4c2d8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c2d90:{NFSU2_TR(0x4c2d90);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2d94:{NFSU2_TR(0x4c2d94);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2d96:{NFSU2_TR(0x4c2d96);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2d9e:{NFSU2_TR(0x4c2d9e);
if(r1(R+518)){{goto L4c2dbb;}}
}
B4c2da0:L4c2da0:{c.instructions+=5;NFSU2_TR(0x4c2da0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2da2:{NFSU2_TR(0x4c2da2);
u8 U[4];
w4(U+0,u32(0xb34993c9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2da7:{NFSU2_TR(0x4c2da7);
u8 U[4];
w4(U+0,u32(0x520de4e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2dac:{NFSU2_TR(0x4c2dac);
__builtin_memmove((R+4),(R+24),4);
}
B4c2dae:{NFSU2_TR(0x4c2dae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2db3ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c2db3:L4c2db3:{c.instructions+=2;NFSU2_TR(0x4c2db3);
u8 U[4];
w4(U+0,u32(0x795510ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c2db9:{NFSU2_TR(0x4c2db9);
{goto L4c2dbd;}
}
B4c2dbb:L4c2dbb:{c.instructions+=1;NFSU2_TR(0x4c2dbb);
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
B4c2dbd:L4c2dbd:{c.instructions+=5;NFSU2_TR(0x4c2dbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c2dbf:{NFSU2_TR(0x4c2dbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2dc0:{NFSU2_TR(0x4c2dc0);
__builtin_memmove((R+4),(R+28),4);
}
B4c2dc2:{NFSU2_TR(0x4c2dc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2dc6:{NFSU2_TR(0x4c2dc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2dc9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c2dc9:L4c2dc9:{c.instructions+=1;NFSU2_TR(0x4c2dc9);
__builtin_memmove((R+24),gp(0x850078),4);
}
B4c2dcf:L4c2dcf:{c.instructions+=2;NFSU2_TR(0x4c2dcf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2dd2:{NFSU2_TR(0x4c2dd2);
if(r1(R+518)){{goto L4c2e24;}}
}
B4c2dd4:L4c2dd4:{c.instructions+=2;NFSU2_TR(0x4c2dd4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2dd7:{NFSU2_TR(0x4c2dd7);
if(r1(R+518)){{goto L4c2e29;}}
}
B4c2dd9:L4c2dd9:{c.instructions+=2;NFSU2_TR(0x4c2dd9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2ddf:{NFSU2_TR(0x4c2ddf);
if(r1(R+518)){{goto L4c2e24;}}
}
B4c2de1:L4c2de1:{c.instructions+=2;NFSU2_TR(0x4c2de1);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2de3:{NFSU2_TR(0x4c2de3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2de8ull));
TAIL_STATIC(0x575620u,575);
}
B4c2de8:L4c2de8:{c.instructions+=5;NFSU2_TR(0x4c2de8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c2deb:{NFSU2_TR(0x4c2deb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2def:{NFSU2_TR(0x4c2def);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2df1:{NFSU2_TR(0x4c2df1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2df9:{NFSU2_TR(0x4c2df9);
if(r1(R+518)){{goto L4c2e10;}}
}
B4c2dfb:L4c2dfb:{c.instructions+=5;NFSU2_TR(0x4c2dfb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2dfd:{NFSU2_TR(0x4c2dfd);
u8 U[4];
w4(U+0,u32(0x7840428aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2e02:{NFSU2_TR(0x4c2e02);
u8 U[4];
w4(U+0,u32(0x84d1d864ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2e07:{NFSU2_TR(0x4c2e07);
__builtin_memmove((R+4),(R+0),4);
}
B4c2e09:{NFSU2_TR(0x4c2e09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2e0eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c2640u);}goto L4c2640;}
}
B4c2e0e:L4c2e0e:{c.instructions+=1;NFSU2_TR(0x4c2e0e);
{goto L4c2e12;}
}
B4c2e10:L4c2e10:{c.instructions+=1;NFSU2_TR(0x4c2e10);
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
B4c2e12:L4c2e12:{c.instructions+=5;NFSU2_TR(0x4c2e12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c2e14:{NFSU2_TR(0x4c2e14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2e15:{NFSU2_TR(0x4c2e15);
__builtin_memmove((R+4),(R+28),4);
}
B4c2e17:{NFSU2_TR(0x4c2e17);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2e1b:{NFSU2_TR(0x4c2e1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2e1eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c2e1e:L4c2e1e:{c.instructions+=1;NFSU2_TR(0x4c2e1e);
__builtin_memmove((R+24),gp(0x850078),4);
}
B4c2e24:L4c2e24:{c.instructions+=2;NFSU2_TR(0x4c2e24);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2e27:{NFSU2_TR(0x4c2e27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c2ea0;}}
}
B4c2e29:L4c2e29:{c.instructions+=2;NFSU2_TR(0x4c2e29);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2e2b:{NFSU2_TR(0x4c2e2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2e30ull));
TAIL_STATIC(0x575620u,575);
}
B4c2e30:L4c2e30:{c.instructions+=6;NFSU2_TR(0x4c2e30);
__builtin_memmove((R+24),(R+0),4);
}
B4c2e32:{NFSU2_TR(0x4c2e32);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c2e35:{NFSU2_TR(0x4c2e35);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2e39:{NFSU2_TR(0x4c2e39);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2e3b:{NFSU2_TR(0x4c2e3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2e43:{NFSU2_TR(0x4c2e43);
if(r1(R+518)){{goto L4c2e80;}}
}
B4c2e45:L4c2e45:{c.instructions+=5;NFSU2_TR(0x4c2e45);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2e47:{NFSU2_TR(0x4c2e47);
u8 U[4];
w4(U+0,u32(0xff956af2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2e4c:{NFSU2_TR(0x4c2e4c);
u8 U[4];
w4(U+0,u32(0x4c9e34e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2e51:{NFSU2_TR(0x4c2e51);
__builtin_memmove((R+4),(R+24),4);
}
B4c2e53:{NFSU2_TR(0x4c2e53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2e58ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c2e58:L4c2e58:{c.instructions+=7;NFSU2_TR(0x4c2e58);
u8 U[4];
w4(U+0,u32(0x795528ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c2e5e:{NFSU2_TR(0x4c2e5e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c2e62:{NFSU2_TR(0x4c2e62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c2e64:{NFSU2_TR(0x4c2e64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2e65:{NFSU2_TR(0x4c2e65);
__builtin_memmove((R+4),(R+28),4);
}
B4c2e67:{NFSU2_TR(0x4c2e67);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2e6b:{NFSU2_TR(0x4c2e6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2e6eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c2e6e:L4c2e6e:{c.instructions+=7;NFSU2_TR(0x4c2e6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c2e6f:{NFSU2_TR(0x4c2e6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c2e70:{NFSU2_TR(0x4c2e70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c2e71:{NFSU2_TR(0x4c2e71);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c2e75:{NFSU2_TR(0x4c2e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2e7c:{NFSU2_TR(0x4c2e7c);
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
B4c2e7f:{NFSU2_TR(0x4c2e7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2e80:L4c2e80:{c.instructions+=6;NFSU2_TR(0x4c2e80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c2e82:{NFSU2_TR(0x4c2e82);
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
B4c2e84:{NFSU2_TR(0x4c2e84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2e85:{NFSU2_TR(0x4c2e85);
__builtin_memmove((R+4),(R+28),4);
}
B4c2e87:{NFSU2_TR(0x4c2e87);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2e8b:{NFSU2_TR(0x4c2e8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2e8eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c2e8e:L4c2e8e:{c.instructions+=7;NFSU2_TR(0x4c2e8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c2e8f:{NFSU2_TR(0x4c2e8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c2e90:{NFSU2_TR(0x4c2e90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c2e91:{NFSU2_TR(0x4c2e91);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c2e95:{NFSU2_TR(0x4c2e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2e9c:{NFSU2_TR(0x4c2e9c);
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
B4c2e9f:{NFSU2_TR(0x4c2e9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2ea0:L4c2ea0:{c.instructions+=2;NFSU2_TR(0x4c2ea0);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2ea2:{NFSU2_TR(0x4c2ea2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2ea7ull));
TAIL_STATIC(0x575620u,575);
}
B4c2ea7:L4c2ea7:{c.instructions+=4;NFSU2_TR(0x4c2ea7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c2eaa:{NFSU2_TR(0x4c2eaa);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2eb0:{NFSU2_TR(0x4c2eb0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2eb4:{NFSU2_TR(0x4c2eb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c2ede;}}
}
B4c2eb6:L4c2eb6:{c.instructions+=3;NFSU2_TR(0x4c2eb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2eb8:{NFSU2_TR(0x4c2eb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2ec0:{NFSU2_TR(0x4c2ec0);
if(r1(R+518)){{goto L4c2f06;}}
}
B4c2ec2:L4c2ec2:{c.instructions+=5;NFSU2_TR(0x4c2ec2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2ec4:{NFSU2_TR(0x4c2ec4);
u8 U[4];
w4(U+0,u32(0xf39723a1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2ec9:{NFSU2_TR(0x4c2ec9);
u8 U[4];
w4(U+0,u32(0x4c9e34e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2ece:{NFSU2_TR(0x4c2ece);
__builtin_memmove((R+4),(R+0),4);
}
B4c2ed0:{NFSU2_TR(0x4c2ed0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2ed5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c27f0u);}goto L4c27f0;}
}
B4c2ed5:L4c2ed5:{c.instructions+=2;NFSU2_TR(0x4c2ed5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2ed9:{NFSU2_TR(0x4c2ed9);
{goto L4c2fe5;}
}
B4c2ede:L4c2ede:{c.instructions+=3;NFSU2_TR(0x4c2ede);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2ee0:{NFSU2_TR(0x4c2ee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2ee8:{NFSU2_TR(0x4c2ee8);
if(r1(R+518)){{goto L4c2f06;}}
}
B4c2eea:L4c2eea:{c.instructions+=5;NFSU2_TR(0x4c2eea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2eec:{NFSU2_TR(0x4c2eec);
u8 U[4];
w4(U+0,u32(0xc7e1420cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2ef1:{NFSU2_TR(0x4c2ef1);
u8 U[4];
w4(U+0,u32(0x4c9e34e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2ef6:{NFSU2_TR(0x4c2ef6);
__builtin_memmove((R+4),(R+0),4);
}
B4c2ef8:{NFSU2_TR(0x4c2ef8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2efdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c27f0u);}goto L4c27f0;}
}
B4c2efd:L4c2efd:{c.instructions+=2;NFSU2_TR(0x4c2efd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2f01:{NFSU2_TR(0x4c2f01);
{goto L4c2fe5;}
}
B4c2f06:L4c2f06:{c.instructions+=3;NFSU2_TR(0x4c2f06);
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
B4c2f08:{NFSU2_TR(0x4c2f08);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2f0c:{NFSU2_TR(0x4c2f0c);
{goto L4c2fe5;}
}
B4c2f11:L4c2f11:{c.instructions+=4;NFSU2_TR(0x4c2f11);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4c2f16:{NFSU2_TR(0x4c2f16);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c2f19:{NFSU2_TR(0x4c2f19);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2f1b:{NFSU2_TR(0x4c2f1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c2f7a;}}
}
B4c2f1d:L4c2f1d:{c.instructions+=1;NFSU2_TR(0x4c2f1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2f22ull));
TAIL_STATIC(0x575620u,575);
}
B4c2f22:L4c2f22:{c.instructions+=6;NFSU2_TR(0x4c2f22);
__builtin_memmove((R+24),(R+0),4);
}
B4c2f24:{NFSU2_TR(0x4c2f24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c2f27:{NFSU2_TR(0x4c2f27);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2f2b:{NFSU2_TR(0x4c2f2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2f2d:{NFSU2_TR(0x4c2f2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2f35:{NFSU2_TR(0x4c2f35);
if(r1(R+518)){{goto L4c2f56;}}
}
B4c2f37:L4c2f37:{c.instructions+=5;NFSU2_TR(0x4c2f37);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2f39:{NFSU2_TR(0x4c2f39);
u8 U[4];
w4(U+0,u32(0xff956af2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2f3e:{NFSU2_TR(0x4c2f3e);
u8 U[4];
w4(U+0,u32(0x4c9e34e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2f43:{NFSU2_TR(0x4c2f43);
__builtin_memmove((R+4),(R+24),4);
}
B4c2f45:{NFSU2_TR(0x4c2f45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2f4aull));
TAIL_STATIC(0x51f670u,51f);
}
B4c2f4a:L4c2f4a:{c.instructions+=3;NFSU2_TR(0x4c2f4a);
u8 U[4];
w4(U+0,u32(0x795528ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c2f50:{NFSU2_TR(0x4c2f50);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c2f54:{NFSU2_TR(0x4c2f54);
{goto L4c2f58;}
}
B4c2f56:L4c2f56:{c.instructions+=1;NFSU2_TR(0x4c2f56);
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
B4c2f58:L4c2f58:{c.instructions+=5;NFSU2_TR(0x4c2f58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c2f5a:{NFSU2_TR(0x4c2f5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2f5b:{NFSU2_TR(0x4c2f5b);
__builtin_memmove((R+4),(R+28),4);
}
B4c2f5d:{NFSU2_TR(0x4c2f5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2f65:{NFSU2_TR(0x4c2f65);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2f68ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c2f68:L4c2f68:{c.instructions+=7;NFSU2_TR(0x4c2f68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c2f69:{NFSU2_TR(0x4c2f69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c2f6a:{NFSU2_TR(0x4c2f6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c2f6b:{NFSU2_TR(0x4c2f6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c2f6f:{NFSU2_TR(0x4c2f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2f76:{NFSU2_TR(0x4c2f76);
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
B4c2f79:{NFSU2_TR(0x4c2f79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c2f7a:L4c2f7a:{c.instructions+=2;NFSU2_TR(0x4c2f7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2f7f:{NFSU2_TR(0x4c2f7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c2fae;}}
}
B4c2f81:L4c2f81:{c.instructions+=1;NFSU2_TR(0x4c2f81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2f86ull));
TAIL_STATIC(0x575620u,575);
}
B4c2f86:L4c2f86:{c.instructions+=5;NFSU2_TR(0x4c2f86);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c2f89:{NFSU2_TR(0x4c2f89);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2f8d:{NFSU2_TR(0x4c2f8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2f8f:{NFSU2_TR(0x4c2f8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2f97:{NFSU2_TR(0x4c2f97);
if(r1(R+518)){{goto L4c2fdb;}}
}
B4c2f99:L4c2f99:{c.instructions+=5;NFSU2_TR(0x4c2f99);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2f9b:{NFSU2_TR(0x4c2f9b);
u8 U[4];
w4(U+0,u32(0xf39723a1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2fa0:{NFSU2_TR(0x4c2fa0);
u8 U[4];
w4(U+0,u32(0x4c9e34e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2fa5:{NFSU2_TR(0x4c2fa5);
__builtin_memmove((R+4),(R+0),4);
}
B4c2fa7:{NFSU2_TR(0x4c2fa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2facull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c27f0u);}goto L4c27f0;}
}
B4c2fac:L4c2fac:{c.instructions+=1;NFSU2_TR(0x4c2fac);
{goto L4c2fdd;}
}
B4c2fae:L4c2fae:{c.instructions+=1;NFSU2_TR(0x4c2fae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2fb3ull));
TAIL_STATIC(0x575620u,575);
}
B4c2fb3:L4c2fb3:{c.instructions+=5;NFSU2_TR(0x4c2fb3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c2fb6:{NFSU2_TR(0x4c2fb6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2fba:{NFSU2_TR(0x4c2fba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c2fbc:{NFSU2_TR(0x4c2fbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2fc4:{NFSU2_TR(0x4c2fc4);
if(r1(R+518)){{goto L4c2fdb;}}
}
B4c2fc6:L4c2fc6:{c.instructions+=5;NFSU2_TR(0x4c2fc6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2fc8:{NFSU2_TR(0x4c2fc8);
u8 U[4];
w4(U+0,u32(0xc7e1420cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2fcd:{NFSU2_TR(0x4c2fcd);
u8 U[4];
w4(U+0,u32(0x4c9e34e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2fd2:{NFSU2_TR(0x4c2fd2);
__builtin_memmove((R+4),(R+0),4);
}
B4c2fd4:{NFSU2_TR(0x4c2fd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2fd9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c27f0u);}goto L4c27f0;}
}
B4c2fd9:L4c2fd9:{c.instructions+=1;NFSU2_TR(0x4c2fd9);
{goto L4c2fdd;}
}
B4c2fdb:L4c2fdb:{c.instructions+=1;NFSU2_TR(0x4c2fdb);
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
B4c2fdd:L4c2fdd:{c.instructions+=1;NFSU2_TR(0x4c2fdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c2fe5:L4c2fe5:{c.instructions+=4;NFSU2_TR(0x4c2fe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c2fe7:{NFSU2_TR(0x4c2fe7);
__builtin_memmove((R+4),(R+28),4);
}
B4c2fe9:{NFSU2_TR(0x4c2fe9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c2fea:{NFSU2_TR(0x4c2fea);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c2fedull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c2fed:L4c2fed:{c.instructions+=7;NFSU2_TR(0x4c2fed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c2ff1:{NFSU2_TR(0x4c2ff1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c2ff2:{NFSU2_TR(0x4c2ff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c2ff3:{NFSU2_TR(0x4c2ff3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c2ff4:{NFSU2_TR(0x4c2ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c2ffb:{NFSU2_TR(0x4c2ffb);
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
B4c2ffe:{NFSU2_TR(0x4c2ffe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x4c2,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
