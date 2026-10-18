#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_59c(u8* __restrict R,Cpu& c);
u32 body_59d(u8* __restrict R,Cpu& c);
u32 body_5a3(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5a2,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5a2,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5a2(u8* __restrict R,Cpu& c);
u32 page_5a2(Cpu& c){return body_5a2(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5a2(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5a2001:goto L5a2001;
case 0x5a2002:c.instructions+=5;goto B5a2002;
case 0x5a2003:c.instructions+=4;goto B5a2003;
case 0x5a2004:c.instructions+=3;goto B5a2004;
case 0x5a2006:c.instructions+=2;goto B5a2006;
case 0x5a2007:c.instructions+=1;goto B5a2007;
case 0x5a2010:goto L5a2010;
case 0x5a2014:c.instructions+=20;goto B5a2014;
case 0x5a2017:c.instructions+=19;goto B5a2017;
case 0x5a201a:c.instructions+=18;goto B5a201a;
case 0x5a201f:c.instructions+=17;goto B5a201f;
case 0x5a2023:c.instructions+=16;goto B5a2023;
case 0x5a2027:c.instructions+=15;goto B5a2027;
case 0x5a202b:c.instructions+=14;goto B5a202b;
case 0x5a202f:c.instructions+=13;goto B5a202f;
case 0x5a2033:c.instructions+=12;goto B5a2033;
case 0x5a2037:c.instructions+=11;goto B5a2037;
case 0x5a203b:c.instructions+=10;goto B5a203b;
case 0x5a203f:c.instructions+=9;goto B5a203f;
case 0x5a2043:c.instructions+=8;goto B5a2043;
case 0x5a2046:c.instructions+=7;goto B5a2046;
case 0x5a2049:c.instructions+=6;goto B5a2049;
case 0x5a204c:c.instructions+=5;goto B5a204c;
case 0x5a204e:c.instructions+=4;goto B5a204e;
case 0x5a2051:c.instructions+=3;goto B5a2051;
case 0x5a2054:c.instructions+=2;goto B5a2054;
case 0x5a2057:c.instructions+=1;goto B5a2057;
case 0x5a2060:goto L5a2060;
case 0x5a2061:c.instructions+=17;goto B5a2061;
case 0x5a2063:c.instructions+=16;goto B5a2063;
case 0x5a2066:c.instructions+=15;goto B5a2066;
case 0x5a2069:c.instructions+=14;goto B5a2069;
case 0x5a206b:c.instructions+=13;goto B5a206b;
case 0x5a2071:c.instructions+=12;goto B5a2071;
case 0x5a2072:c.instructions+=11;goto B5a2072;
case 0x5a2078:c.instructions+=10;goto B5a2078;
case 0x5a2079:c.instructions+=9;goto B5a2079;
case 0x5a207b:c.instructions+=8;goto B5a207b;
case 0x5a207c:c.instructions+=7;goto B5a207c;
case 0x5a207f:c.instructions+=6;goto B5a207f;
case 0x5a2081:c.instructions+=5;goto B5a2081;
case 0x5a2085:c.instructions+=4;goto B5a2085;
case 0x5a208d:c.instructions+=3;goto B5a208d;
case 0x5a2090:c.instructions+=2;goto B5a2090;
case 0x5a2094:c.instructions+=1;goto B5a2094;
case 0x5a2096:goto L5a2096;
case 0x5a209c:c.instructions+=2;goto B5a209c;
case 0x5a209e:c.instructions+=1;goto B5a209e;
case 0x5a20a0:goto L5a20a0;
case 0x5a20a2:c.instructions+=5;goto B5a20a2;
case 0x5a20a3:c.instructions+=4;goto B5a20a3;
case 0x5a20a5:c.instructions+=3;goto B5a20a5;
case 0x5a20a9:c.instructions+=2;goto B5a20a9;
case 0x5a20ab:c.instructions+=1;goto B5a20ab;
case 0x5a20ad:goto L5a20ad;
case 0x5a20b0:c.instructions+=3;goto B5a20b0;
case 0x5a20b2:c.instructions+=2;goto B5a20b2;
case 0x5a20b5:c.instructions+=1;goto B5a20b5;
case 0x5a20bb:goto L5a20bb;
case 0x5a20c0:c.instructions+=1;goto B5a20c0;
case 0x5a20c3:goto L5a20c3;
case 0x5a20c6:c.instructions+=11;goto B5a20c6;
case 0x5a20c8:c.instructions+=10;goto B5a20c8;
case 0x5a20cb:c.instructions+=9;goto B5a20cb;
case 0x5a20ce:c.instructions+=8;goto B5a20ce;
case 0x5a20d0:c.instructions+=7;goto B5a20d0;
case 0x5a20d3:c.instructions+=6;goto B5a20d3;
case 0x5a20d5:c.instructions+=5;goto B5a20d5;
case 0x5a20d7:c.instructions+=4;goto B5a20d7;
case 0x5a20db:c.instructions+=3;goto B5a20db;
case 0x5a20dd:c.instructions+=2;goto B5a20dd;
case 0x5a20e0:c.instructions+=1;goto B5a20e0;
case 0x5a20e2:goto L5a20e2;
case 0x5a20e6:c.instructions+=4;goto B5a20e6;
case 0x5a20ec:c.instructions+=3;goto B5a20ec;
case 0x5a20ee:c.instructions+=2;goto B5a20ee;
case 0x5a20f1:c.instructions+=1;goto B5a20f1;
case 0x5a20f3:goto L5a20f3;
case 0x5a20f6:c.instructions+=3;goto B5a20f6;
case 0x5a20fa:c.instructions+=2;goto B5a20fa;
case 0x5a20fe:c.instructions+=1;goto B5a20fe;
case 0x5a2100:goto L5a2100;
case 0x5a2102:goto L5a2102;
case 0x5a2105:c.instructions+=11;goto B5a2105;
case 0x5a2108:c.instructions+=10;goto B5a2108;
case 0x5a210b:c.instructions+=9;goto B5a210b;
case 0x5a210e:c.instructions+=8;goto B5a210e;
case 0x5a2110:c.instructions+=7;goto B5a2110;
case 0x5a2113:c.instructions+=6;goto B5a2113;
case 0x5a2115:c.instructions+=5;goto B5a2115;
case 0x5a2117:c.instructions+=4;goto B5a2117;
case 0x5a211b:c.instructions+=3;goto B5a211b;
case 0x5a211d:c.instructions+=2;goto B5a211d;
case 0x5a2120:c.instructions+=1;goto B5a2120;
case 0x5a2122:goto L5a2122;
case 0x5a2126:c.instructions+=4;goto B5a2126;
case 0x5a212c:c.instructions+=3;goto B5a212c;
case 0x5a212e:c.instructions+=2;goto B5a212e;
case 0x5a2131:c.instructions+=1;goto B5a2131;
case 0x5a2133:goto L5a2133;
case 0x5a2136:c.instructions+=3;goto B5a2136;
case 0x5a213a:c.instructions+=2;goto B5a213a;
case 0x5a213e:c.instructions+=1;goto B5a213e;
case 0x5a2140:goto L5a2140;
case 0x5a2142:goto L5a2142;
case 0x5a2145:c.instructions+=11;goto B5a2145;
case 0x5a2148:c.instructions+=10;goto B5a2148;
case 0x5a214b:c.instructions+=9;goto B5a214b;
case 0x5a214e:c.instructions+=8;goto B5a214e;
case 0x5a2150:c.instructions+=7;goto B5a2150;
case 0x5a2153:c.instructions+=6;goto B5a2153;
case 0x5a2155:c.instructions+=5;goto B5a2155;
case 0x5a2157:c.instructions+=4;goto B5a2157;
case 0x5a215b:c.instructions+=3;goto B5a215b;
case 0x5a215d:c.instructions+=2;goto B5a215d;
case 0x5a2160:c.instructions+=1;goto B5a2160;
case 0x5a2162:goto L5a2162;
case 0x5a2166:c.instructions+=4;goto B5a2166;
case 0x5a216c:c.instructions+=3;goto B5a216c;
case 0x5a216e:c.instructions+=2;goto B5a216e;
case 0x5a2171:c.instructions+=1;goto B5a2171;
case 0x5a2173:goto L5a2173;
case 0x5a2176:c.instructions+=3;goto B5a2176;
case 0x5a217a:c.instructions+=2;goto B5a217a;
case 0x5a217e:c.instructions+=1;goto B5a217e;
case 0x5a2180:goto L5a2180;
case 0x5a2182:goto L5a2182;
case 0x5a2188:c.instructions+=11;goto B5a2188;
case 0x5a218b:c.instructions+=10;goto B5a218b;
case 0x5a2191:c.instructions+=9;goto B5a2191;
case 0x5a2194:c.instructions+=8;goto B5a2194;
case 0x5a2196:c.instructions+=7;goto B5a2196;
case 0x5a219c:c.instructions+=6;goto B5a219c;
case 0x5a219e:c.instructions+=5;goto B5a219e;
case 0x5a21a0:c.instructions+=4;goto B5a21a0;
case 0x5a21a4:c.instructions+=3;goto B5a21a4;
case 0x5a21a6:c.instructions+=2;goto B5a21a6;
case 0x5a21a9:c.instructions+=1;goto B5a21a9;
case 0x5a21ab:goto L5a21ab;
case 0x5a21af:c.instructions+=4;goto B5a21af;
case 0x5a21b5:c.instructions+=3;goto B5a21b5;
case 0x5a21b7:c.instructions+=2;goto B5a21b7;
case 0x5a21ba:c.instructions+=1;goto B5a21ba;
case 0x5a21bc:goto L5a21bc;
case 0x5a21bf:c.instructions+=3;goto B5a21bf;
case 0x5a21c3:c.instructions+=2;goto B5a21c3;
case 0x5a21c7:c.instructions+=1;goto B5a21c7;
case 0x5a21c9:goto L5a21c9;
case 0x5a21cb:goto L5a21cb;
case 0x5a21ce:c.instructions+=4;goto B5a21ce;
case 0x5a21d1:c.instructions+=3;goto B5a21d1;
case 0x5a21d7:c.instructions+=2;goto B5a21d7;
case 0x5a21d9:c.instructions+=1;goto B5a21d9;
case 0x5a21df:goto L5a21df;
case 0x5a21e3:c.instructions+=1;goto B5a21e3;
case 0x5a21e7:goto L5a21e7;
case 0x5a21e9:c.instructions+=1;goto B5a21e9;
case 0x5a21eb:goto L5a21eb;
case 0x5a21ee:c.instructions+=3;goto B5a21ee;
case 0x5a21f1:c.instructions+=2;goto B5a21f1;
case 0x5a21f5:c.instructions+=1;goto B5a21f5;
case 0x5a21f7:goto L5a21f7;
case 0x5a21fa:c.instructions+=11;goto B5a21fa;
case 0x5a21fc:c.instructions+=10;goto B5a21fc;
case 0x5a21ff:c.instructions+=9;goto B5a21ff;
case 0x5a2202:c.instructions+=8;goto B5a2202;
case 0x5a2204:c.instructions+=7;goto B5a2204;
case 0x5a2206:c.instructions+=6;goto B5a2206;
case 0x5a2209:c.instructions+=5;goto B5a2209;
case 0x5a220b:c.instructions+=4;goto B5a220b;
case 0x5a220f:c.instructions+=3;goto B5a220f;
case 0x5a2211:c.instructions+=2;goto B5a2211;
case 0x5a2214:c.instructions+=1;goto B5a2214;
case 0x5a2216:goto L5a2216;
case 0x5a221a:c.instructions+=4;goto B5a221a;
case 0x5a2220:c.instructions+=3;goto B5a2220;
case 0x5a2222:c.instructions+=2;goto B5a2222;
case 0x5a2225:c.instructions+=1;goto B5a2225;
case 0x5a2227:goto L5a2227;
case 0x5a222a:c.instructions+=3;goto B5a222a;
case 0x5a222e:c.instructions+=2;goto B5a222e;
case 0x5a2232:c.instructions+=1;goto B5a2232;
case 0x5a2234:goto L5a2234;
case 0x5a2236:goto L5a2236;
case 0x5a2239:c.instructions+=2;goto B5a2239;
case 0x5a223a:c.instructions+=1;goto B5a223a;
case 0x5a223c:goto L5a223c;
case 0x5a2240:goto L5a2240;
case 0x5a2242:c.instructions+=2;goto B5a2242;
case 0x5a2245:c.instructions+=1;goto B5a2245;
case 0x5a2247:goto L5a2247;
case 0x5a224a:c.instructions+=9;goto B5a224a;
case 0x5a224d:c.instructions+=8;goto B5a224d;
case 0x5a2250:c.instructions+=7;goto B5a2250;
case 0x5a2253:c.instructions+=6;goto B5a2253;
case 0x5a2255:c.instructions+=5;goto B5a2255;
case 0x5a225c:c.instructions+=4;goto B5a225c;
case 0x5a225f:c.instructions+=3;goto B5a225f;
case 0x5a2262:c.instructions+=2;goto B5a2262;
case 0x5a2266:c.instructions+=1;goto B5a2266;
case 0x5a226a:goto L5a226a;
case 0x5a226b:c.instructions+=5;goto B5a226b;
case 0x5a226c:c.instructions+=4;goto B5a226c;
case 0x5a226d:c.instructions+=3;goto B5a226d;
case 0x5a226f:c.instructions+=2;goto B5a226f;
case 0x5a2270:c.instructions+=1;goto B5a2270;
case 0x5a2280:goto L5a2280;
case 0x5a2281:c.instructions+=14;goto B5a2281;
case 0x5a2283:c.instructions+=13;goto B5a2283;
case 0x5a2286:c.instructions+=12;goto B5a2286;
case 0x5a2289:c.instructions+=11;goto B5a2289;
case 0x5a228c:c.instructions+=10;goto B5a228c;
case 0x5a228d:c.instructions+=9;goto B5a228d;
case 0x5a228e:c.instructions+=8;goto B5a228e;
case 0x5a2290:c.instructions+=7;goto B5a2290;
case 0x5a2293:c.instructions+=6;goto B5a2293;
case 0x5a2294:c.instructions+=5;goto B5a2294;
case 0x5a2295:c.instructions+=4;goto B5a2295;
case 0x5a2299:c.instructions+=3;goto B5a2299;
case 0x5a229a:c.instructions+=2;goto B5a229a;
case 0x5a229c:c.instructions+=1;goto B5a229c;
case 0x5a22a1:goto L5a22a1;
case 0x5a22a4:c.instructions+=8;goto B5a22a4;
case 0x5a22a7:c.instructions+=7;goto B5a22a7;
case 0x5a22aa:c.instructions+=6;goto B5a22aa;
case 0x5a22ad:c.instructions+=5;goto B5a22ad;
case 0x5a22b1:c.instructions+=4;goto B5a22b1;
case 0x5a22b7:c.instructions+=3;goto B5a22b7;
case 0x5a22b9:c.instructions+=2;goto B5a22b9;
case 0x5a22bc:c.instructions+=1;goto B5a22bc;
case 0x5a22be:goto L5a22be;
case 0x5a22c0:c.instructions+=3;goto B5a22c0;
case 0x5a22c5:c.instructions+=2;goto B5a22c5;
case 0x5a22c7:c.instructions+=1;goto B5a22c7;
case 0x5a22c9:goto L5a22c9;
case 0x5a22cd:c.instructions+=4;goto B5a22cd;
case 0x5a22d3:c.instructions+=3;goto B5a22d3;
case 0x5a22d5:c.instructions+=2;goto B5a22d5;
case 0x5a22d8:c.instructions+=1;goto B5a22d8;
case 0x5a22da:goto L5a22da;
case 0x5a22dc:c.instructions+=3;goto B5a22dc;
case 0x5a22df:c.instructions+=2;goto B5a22df;
case 0x5a22e1:c.instructions+=1;goto B5a22e1;
case 0x5a22e3:goto L5a22e3;
case 0x5a22e7:c.instructions+=4;goto B5a22e7;
case 0x5a22ed:c.instructions+=3;goto B5a22ed;
case 0x5a22ef:c.instructions+=2;goto B5a22ef;
case 0x5a22f2:c.instructions+=1;goto B5a22f2;
case 0x5a22f4:goto L5a22f4;
case 0x5a22f7:c.instructions+=1;goto B5a22f7;
case 0x5a22f9:goto L5a22f9;
case 0x5a22fc:c.instructions+=17;goto B5a22fc;
case 0x5a22fe:c.instructions+=16;goto B5a22fe;
case 0x5a2301:c.instructions+=15;goto B5a2301;
case 0x5a2305:c.instructions+=14;goto B5a2305;
case 0x5a2306:c.instructions+=13;goto B5a2306;
case 0x5a2307:c.instructions+=12;goto B5a2307;
case 0x5a230b:c.instructions+=11;goto B5a230b;
case 0x5a230f:c.instructions+=10;goto B5a230f;
case 0x5a2312:c.instructions+=9;goto B5a2312;
case 0x5a2313:c.instructions+=8;goto B5a2313;
case 0x5a2315:c.instructions+=7;goto B5a2315;
case 0x5a2319:c.instructions+=6;goto B5a2319;
case 0x5a231c:c.instructions+=5;goto B5a231c;
case 0x5a231e:c.instructions+=4;goto B5a231e;
case 0x5a2322:c.instructions+=3;goto B5a2322;
case 0x5a2324:c.instructions+=2;goto B5a2324;
case 0x5a2326:c.instructions+=1;goto B5a2326;
case 0x5a232b:goto L5a232b;
case 0x5a232e:c.instructions+=14;goto B5a232e;
case 0x5a2332:c.instructions+=13;goto B5a2332;
case 0x5a2336:c.instructions+=12;goto B5a2336;
case 0x5a2339:c.instructions+=11;goto B5a2339;
case 0x5a233d:c.instructions+=10;goto B5a233d;
case 0x5a2340:c.instructions+=9;goto B5a2340;
case 0x5a2343:c.instructions+=8;goto B5a2343;
case 0x5a2346:c.instructions+=7;goto B5a2346;
case 0x5a234d:c.instructions+=6;goto B5a234d;
case 0x5a2351:c.instructions+=5;goto B5a2351;
case 0x5a2352:c.instructions+=4;goto B5a2352;
case 0x5a2353:c.instructions+=3;goto B5a2353;
case 0x5a2355:c.instructions+=2;goto B5a2355;
case 0x5a2356:c.instructions+=1;goto B5a2356;
case 0x5a2360:goto L5a2360;
case 0x5a2361:c.instructions+=18;goto B5a2361;
case 0x5a2363:c.instructions+=17;goto B5a2363;
case 0x5a2366:c.instructions+=16;goto B5a2366;
case 0x5a2369:c.instructions+=15;goto B5a2369;
case 0x5a236c:c.instructions+=14;goto B5a236c;
case 0x5a236d:c.instructions+=13;goto B5a236d;
case 0x5a236f:c.instructions+=12;goto B5a236f;
case 0x5a2372:c.instructions+=11;goto B5a2372;
case 0x5a2375:c.instructions+=10;goto B5a2375;
case 0x5a2379:c.instructions+=9;goto B5a2379;
case 0x5a237a:c.instructions+=8;goto B5a237a;
case 0x5a237e:c.instructions+=7;goto B5a237e;
case 0x5a2382:c.instructions+=6;goto B5a2382;
case 0x5a2385:c.instructions+=5;goto B5a2385;
case 0x5a2386:c.instructions+=4;goto B5a2386;
case 0x5a238a:c.instructions+=3;goto B5a238a;
case 0x5a238e:c.instructions+=2;goto B5a238e;
case 0x5a238f:c.instructions+=1;goto B5a238f;
case 0x5a2394:goto L5a2394;
case 0x5a2397:c.instructions+=14;goto B5a2397;
case 0x5a239b:c.instructions+=13;goto B5a239b;
case 0x5a239f:c.instructions+=12;goto B5a239f;
case 0x5a23a2:c.instructions+=11;goto B5a23a2;
case 0x5a23a6:c.instructions+=10;goto B5a23a6;
case 0x5a23a9:c.instructions+=9;goto B5a23a9;
case 0x5a23ac:c.instructions+=8;goto B5a23ac;
case 0x5a23b3:c.instructions+=7;goto B5a23b3;
case 0x5a23b7:c.instructions+=6;goto B5a23b7;
case 0x5a23ba:c.instructions+=5;goto B5a23ba;
case 0x5a23be:c.instructions+=4;goto B5a23be;
case 0x5a23bf:c.instructions+=3;goto B5a23bf;
case 0x5a23c1:c.instructions+=2;goto B5a23c1;
case 0x5a23c2:c.instructions+=1;goto B5a23c2;
case 0x5a23d0:goto L5a23d0;
case 0x5a23d1:c.instructions+=14;goto B5a23d1;
case 0x5a23d3:c.instructions+=13;goto B5a23d3;
case 0x5a23d6:c.instructions+=12;goto B5a23d6;
case 0x5a23d9:c.instructions+=11;goto B5a23d9;
case 0x5a23dc:c.instructions+=10;goto B5a23dc;
case 0x5a23dd:c.instructions+=9;goto B5a23dd;
case 0x5a23de:c.instructions+=8;goto B5a23de;
case 0x5a23df:c.instructions+=7;goto B5a23df;
case 0x5a23e1:c.instructions+=6;goto B5a23e1;
case 0x5a23e4:c.instructions+=5;goto B5a23e4;
case 0x5a23e5:c.instructions+=4;goto B5a23e5;
case 0x5a23e6:c.instructions+=3;goto B5a23e6;
case 0x5a23ea:c.instructions+=2;goto B5a23ea;
case 0x5a23eb:c.instructions+=1;goto B5a23eb;
case 0x5a23f0:goto L5a23f0;
case 0x5a23f3:c.instructions+=36;goto B5a23f3;
case 0x5a23f6:c.instructions+=35;goto B5a23f6;
case 0x5a23f9:c.instructions+=34;goto B5a23f9;
case 0x5a23ff:c.instructions+=33;goto B5a23ff;
case 0x5a2405:c.instructions+=32;goto B5a2405;
case 0x5a2408:c.instructions+=31;goto B5a2408;
case 0x5a240c:c.instructions+=30;goto B5a240c;
case 0x5a240f:c.instructions+=29;goto B5a240f;
case 0x5a2413:c.instructions+=28;goto B5a2413;
case 0x5a2417:c.instructions+=27;goto B5a2417;
case 0x5a2419:c.instructions+=26;goto B5a2419;
case 0x5a241d:c.instructions+=25;goto B5a241d;
case 0x5a241f:c.instructions+=24;goto B5a241f;
case 0x5a2423:c.instructions+=23;goto B5a2423;
case 0x5a2425:c.instructions+=22;goto B5a2425;
case 0x5a2428:c.instructions+=21;goto B5a2428;
case 0x5a242a:c.instructions+=20;goto B5a242a;
case 0x5a242e:c.instructions+=19;goto B5a242e;
case 0x5a2430:c.instructions+=18;goto B5a2430;
case 0x5a2432:c.instructions+=17;goto B5a2432;
case 0x5a2434:c.instructions+=16;goto B5a2434;
case 0x5a2436:c.instructions+=15;goto B5a2436;
case 0x5a243c:c.instructions+=14;goto B5a243c;
case 0x5a2440:c.instructions+=13;goto B5a2440;
case 0x5a2442:c.instructions+=12;goto B5a2442;
case 0x5a2446:c.instructions+=11;goto B5a2446;
case 0x5a244a:c.instructions+=10;goto B5a244a;
case 0x5a244e:c.instructions+=9;goto B5a244e;
case 0x5a2450:c.instructions+=8;goto B5a2450;
case 0x5a2452:c.instructions+=7;goto B5a2452;
case 0x5a2456:c.instructions+=6;goto B5a2456;
case 0x5a2458:c.instructions+=5;goto B5a2458;
case 0x5a245c:c.instructions+=4;goto B5a245c;
case 0x5a2460:c.instructions+=3;goto B5a2460;
case 0x5a2462:c.instructions+=2;goto B5a2462;
case 0x5a2465:c.instructions+=1;goto B5a2465;
case 0x5a246b:goto L5a246b;
case 0x5a246f:c.instructions+=2;goto B5a246f;
case 0x5a2475:c.instructions+=1;goto B5a2475;
case 0x5a247a:goto L5a247a;
case 0x5a247e:c.instructions+=6;goto B5a247e;
case 0x5a2484:c.instructions+=5;goto B5a2484;
case 0x5a2486:c.instructions+=4;goto B5a2486;
case 0x5a248a:c.instructions+=3;goto B5a248a;
case 0x5a248c:c.instructions+=2;goto B5a248c;
case 0x5a248f:c.instructions+=1;goto B5a248f;
case 0x5a2491:goto L5a2491;
case 0x5a2494:c.instructions+=1;goto B5a2494;
case 0x5a2496:goto L5a2496;
case 0x5a249b:c.instructions+=1;goto B5a249b;
case 0x5a249f:goto L5a249f;
case 0x5a24a2:c.instructions+=1;goto B5a24a2;
case 0x5a24a4:goto L5a24a4;
case 0x5a24a7:c.instructions+=1;goto B5a24a7;
case 0x5a24a9:goto L5a24a9;
case 0x5a24ae:c.instructions+=1;goto B5a24ae;
case 0x5a24b2:goto L5a24b2;
case 0x5a24b5:goto L5a24b5;
case 0x5a24b9:c.instructions+=31;goto B5a24b9;
case 0x5a24bd:c.instructions+=30;goto B5a24bd;
case 0x5a24c3:c.instructions+=29;goto B5a24c3;
case 0x5a24c7:c.instructions+=28;goto B5a24c7;
case 0x5a24cb:c.instructions+=27;goto B5a24cb;
case 0x5a24d1:c.instructions+=26;goto B5a24d1;
case 0x5a24d3:c.instructions+=25;goto B5a24d3;
case 0x5a24d7:c.instructions+=24;goto B5a24d7;
case 0x5a24db:c.instructions+=23;goto B5a24db;
case 0x5a24e1:c.instructions+=22;goto B5a24e1;
case 0x5a24e5:c.instructions+=21;goto B5a24e5;
case 0x5a24e9:c.instructions+=20;goto B5a24e9;
case 0x5a24ef:c.instructions+=19;goto B5a24ef;
case 0x5a24f1:c.instructions+=18;goto B5a24f1;
case 0x5a24f5:c.instructions+=17;goto B5a24f5;
case 0x5a24f9:c.instructions+=16;goto B5a24f9;
case 0x5a24fb:c.instructions+=15;goto B5a24fb;
case 0x5a24ff:c.instructions+=14;goto B5a24ff;
case 0x5a2503:c.instructions+=13;goto B5a2503;
case 0x5a2505:c.instructions+=12;goto B5a2505;
case 0x5a2509:c.instructions+=11;goto B5a2509;
case 0x5a250b:c.instructions+=10;goto B5a250b;
case 0x5a250f:c.instructions+=9;goto B5a250f;
case 0x5a2513:c.instructions+=8;goto B5a2513;
case 0x5a2515:c.instructions+=7;goto B5a2515;
case 0x5a2517:c.instructions+=6;goto B5a2517;
case 0x5a2519:c.instructions+=5;goto B5a2519;
case 0x5a251b:c.instructions+=4;goto B5a251b;
case 0x5a2521:c.instructions+=3;goto B5a2521;
case 0x5a2524:c.instructions+=2;goto B5a2524;
case 0x5a2526:c.instructions+=1;goto B5a2526;
case 0x5a2528:goto L5a2528;
case 0x5a252b:c.instructions+=3;goto B5a252b;
case 0x5a252f:c.instructions+=2;goto B5a252f;
case 0x5a2532:c.instructions+=1;goto B5a2532;
case 0x5a2534:goto L5a2534;
case 0x5a2536:c.instructions+=7;goto B5a2536;
case 0x5a253a:c.instructions+=6;goto B5a253a;
case 0x5a253f:c.instructions+=5;goto B5a253f;
case 0x5a2543:c.instructions+=4;goto B5a2543;
case 0x5a2545:c.instructions+=3;goto B5a2545;
case 0x5a2548:c.instructions+=2;goto B5a2548;
case 0x5a254c:c.instructions+=1;goto B5a254c;
case 0x5a2551:goto L5a2551;
case 0x5a2555:c.instructions+=3;goto B5a2555;
case 0x5a2558:c.instructions+=2;goto B5a2558;
case 0x5a255e:c.instructions+=1;goto B5a255e;
case 0x5a2560:goto L5a2560;
case 0x5a2561:c.instructions+=2;goto B5a2561;
case 0x5a2564:c.instructions+=1;goto B5a2564;
case 0x5a2565:goto L5a2565;
case 0x5a2569:c.instructions+=3;goto B5a2569;
case 0x5a256c:c.instructions+=2;goto B5a256c;
case 0x5a2570:c.instructions+=1;goto B5a2570;
case 0x5a2575:goto L5a2575;
case 0x5a2578:c.instructions+=3;goto B5a2578;
case 0x5a257c:c.instructions+=2;goto B5a257c;
case 0x5a257f:c.instructions+=1;goto B5a257f;
case 0x5a2581:goto L5a2581;
case 0x5a2583:c.instructions+=7;goto B5a2583;
case 0x5a2587:c.instructions+=6;goto B5a2587;
case 0x5a258c:c.instructions+=5;goto B5a258c;
case 0x5a2590:c.instructions+=4;goto B5a2590;
case 0x5a2592:c.instructions+=3;goto B5a2592;
case 0x5a2595:c.instructions+=2;goto B5a2595;
case 0x5a2599:c.instructions+=1;goto B5a2599;
case 0x5a259e:goto L5a259e;
case 0x5a25a2:c.instructions+=3;goto B5a25a2;
case 0x5a25a5:c.instructions+=2;goto B5a25a5;
case 0x5a25ab:c.instructions+=1;goto B5a25ab;
case 0x5a25ad:goto L5a25ad;
case 0x5a25ae:c.instructions+=2;goto B5a25ae;
case 0x5a25b1:c.instructions+=1;goto B5a25b1;
case 0x5a25b2:goto L5a25b2;
case 0x5a25b6:c.instructions+=3;goto B5a25b6;
case 0x5a25b9:c.instructions+=2;goto B5a25b9;
case 0x5a25bd:c.instructions+=1;goto B5a25bd;
case 0x5a25c2:goto L5a25c2;
case 0x5a25c4:c.instructions+=3;goto B5a25c4;
case 0x5a25ca:c.instructions+=2;goto B5a25ca;
case 0x5a25cc:c.instructions+=1;goto B5a25cc;
case 0x5a25d1:goto L5a25d1;
case 0x5a25d7:c.instructions+=5;goto B5a25d7;
case 0x5a25d9:c.instructions+=4;goto B5a25d9;
case 0x5a25dd:c.instructions+=3;goto B5a25dd;
case 0x5a25df:c.instructions+=2;goto B5a25df;
case 0x5a25e2:c.instructions+=1;goto B5a25e2;
case 0x5a25e4:goto L5a25e4;
case 0x5a25e7:c.instructions+=1;goto B5a25e7;
case 0x5a25e9:goto L5a25e9;
case 0x5a25ee:c.instructions+=1;goto B5a25ee;
case 0x5a25f2:goto L5a25f2;
case 0x5a25f5:c.instructions+=1;goto B5a25f5;
case 0x5a25f7:goto L5a25f7;
case 0x5a25fa:c.instructions+=1;goto B5a25fa;
case 0x5a25fc:goto L5a25fc;
case 0x5a2601:c.instructions+=1;goto B5a2601;
case 0x5a2605:goto L5a2605;
case 0x5a2608:goto L5a2608;
case 0x5a260c:c.instructions+=28;goto B5a260c;
case 0x5a2610:c.instructions+=27;goto B5a2610;
case 0x5a2614:c.instructions+=26;goto B5a2614;
case 0x5a261a:c.instructions+=25;goto B5a261a;
case 0x5a261c:c.instructions+=24;goto B5a261c;
case 0x5a261e:c.instructions+=23;goto B5a261e;
case 0x5a2624:c.instructions+=22;goto B5a2624;
case 0x5a2626:c.instructions+=21;goto B5a2626;
case 0x5a262a:c.instructions+=20;goto B5a262a;
case 0x5a2630:c.instructions+=19;goto B5a2630;
case 0x5a2634:c.instructions+=18;goto B5a2634;
case 0x5a2638:c.instructions+=17;goto B5a2638;
case 0x5a263e:c.instructions+=16;goto B5a263e;
case 0x5a2640:c.instructions+=15;goto B5a2640;
case 0x5a2644:c.instructions+=14;goto B5a2644;
case 0x5a2648:c.instructions+=13;goto B5a2648;
case 0x5a264a:c.instructions+=12;goto B5a264a;
case 0x5a264c:c.instructions+=11;goto B5a264c;
case 0x5a264e:c.instructions+=10;goto B5a264e;
case 0x5a2650:c.instructions+=9;goto B5a2650;
case 0x5a2654:c.instructions+=8;goto B5a2654;
case 0x5a2658:c.instructions+=7;goto B5a2658;
case 0x5a265c:c.instructions+=6;goto B5a265c;
case 0x5a265e:c.instructions+=5;goto B5a265e;
case 0x5a2660:c.instructions+=4;goto B5a2660;
case 0x5a2662:c.instructions+=3;goto B5a2662;
case 0x5a2664:c.instructions+=2;goto B5a2664;
case 0x5a2667:c.instructions+=1;goto B5a2667;
case 0x5a2669:goto L5a2669;
case 0x5a266d:c.instructions+=5;goto B5a266d;
case 0x5a2673:c.instructions+=4;goto B5a2673;
case 0x5a2676:c.instructions+=3;goto B5a2676;
case 0x5a2678:c.instructions+=2;goto B5a2678;
case 0x5a267b:c.instructions+=1;goto B5a267b;
case 0x5a267d:goto L5a267d;
case 0x5a2681:c.instructions+=6;goto B5a2681;
case 0x5a2683:c.instructions+=5;goto B5a2683;
case 0x5a2687:c.instructions+=4;goto B5a2687;
case 0x5a268a:c.instructions+=3;goto B5a268a;
case 0x5a268d:c.instructions+=2;goto B5a268d;
case 0x5a2691:c.instructions+=1;goto B5a2691;
case 0x5a2693:goto L5a2693;
case 0x5a2697:c.instructions+=6;goto B5a2697;
case 0x5a269b:c.instructions+=5;goto B5a269b;
case 0x5a26a0:c.instructions+=4;goto B5a26a0;
case 0x5a26a3:c.instructions+=3;goto B5a26a3;
case 0x5a26a5:c.instructions+=2;goto B5a26a5;
case 0x5a26a9:c.instructions+=1;goto B5a26a9;
case 0x5a26ab:goto L5a26ab;
case 0x5a26ad:c.instructions+=8;goto B5a26ad;
case 0x5a26af:c.instructions+=7;goto B5a26af;
case 0x5a26b3:c.instructions+=6;goto B5a26b3;
case 0x5a26b9:c.instructions+=5;goto B5a26b9;
case 0x5a26bd:c.instructions+=4;goto B5a26bd;
case 0x5a26c0:c.instructions+=3;goto B5a26c0;
case 0x5a26c2:c.instructions+=2;goto B5a26c2;
case 0x5a26c5:c.instructions+=1;goto B5a26c5;
case 0x5a26c7:goto L5a26c7;
case 0x5a26c9:c.instructions+=2;goto B5a26c9;
case 0x5a26cc:c.instructions+=1;goto B5a26cc;
case 0x5a26ce:goto L5a26ce;
case 0x5a26d3:c.instructions+=1;goto B5a26d3;
case 0x5a26d5:goto L5a26d5;
case 0x5a26d9:c.instructions+=4;goto B5a26d9;
case 0x5a26dd:c.instructions+=3;goto B5a26dd;
case 0x5a26e1:c.instructions+=2;goto B5a26e1;
case 0x5a26e4:c.instructions+=1;goto B5a26e4;
case 0x5a26e8:goto L5a26e8;
case 0x5a26ec:c.instructions+=7;goto B5a26ec;
case 0x5a26f2:c.instructions+=6;goto B5a26f2;
case 0x5a26f5:c.instructions+=5;goto B5a26f5;
case 0x5a26f9:c.instructions+=4;goto B5a26f9;
case 0x5a26ff:c.instructions+=3;goto B5a26ff;
case 0x5a2701:c.instructions+=2;goto B5a2701;
case 0x5a2704:c.instructions+=1;goto B5a2704;
case 0x5a2706:goto L5a2706;
case 0x5a2709:c.instructions+=3;goto B5a2709;
case 0x5a270c:c.instructions+=2;goto B5a270c;
case 0x5a2710:c.instructions+=1;goto B5a2710;
case 0x5a2712:goto L5a2712;
case 0x5a2715:c.instructions+=2;goto B5a2715;
case 0x5a2717:c.instructions+=1;goto B5a2717;
case 0x5a271b:goto L5a271b;
case 0x5a271f:c.instructions+=15;goto B5a271f;
case 0x5a2722:c.instructions+=14;goto B5a2722;
case 0x5a2725:c.instructions+=13;goto B5a2725;
case 0x5a2729:c.instructions+=12;goto B5a2729;
case 0x5a272a:c.instructions+=11;goto B5a272a;
case 0x5a272b:c.instructions+=10;goto B5a272b;
case 0x5a272f:c.instructions+=9;goto B5a272f;
case 0x5a2733:c.instructions+=8;goto B5a2733;
case 0x5a2736:c.instructions+=7;goto B5a2736;
case 0x5a2737:c.instructions+=6;goto B5a2737;
case 0x5a273b:c.instructions+=5;goto B5a273b;
case 0x5a273f:c.instructions+=4;goto B5a273f;
case 0x5a2742:c.instructions+=3;goto B5a2742;
case 0x5a2746:c.instructions+=2;goto B5a2746;
case 0x5a274a:c.instructions+=1;goto B5a274a;
case 0x5a274f:goto L5a274f;
case 0x5a2752:c.instructions+=15;goto B5a2752;
case 0x5a2756:c.instructions+=14;goto B5a2756;
case 0x5a275a:c.instructions+=13;goto B5a275a;
case 0x5a275d:c.instructions+=12;goto B5a275d;
case 0x5a2760:c.instructions+=11;goto B5a2760;
case 0x5a2764:c.instructions+=10;goto B5a2764;
case 0x5a2765:c.instructions+=9;goto B5a2765;
case 0x5a2768:c.instructions+=8;goto B5a2768;
case 0x5a276b:c.instructions+=7;goto B5a276b;
case 0x5a2772:c.instructions+=6;goto B5a2772;
case 0x5a2776:c.instructions+=5;goto B5a2776;
case 0x5a2777:c.instructions+=4;goto B5a2777;
case 0x5a2778:c.instructions+=3;goto B5a2778;
case 0x5a277a:c.instructions+=2;goto B5a277a;
case 0x5a277b:c.instructions+=1;goto B5a277b;
case 0x5a2780:goto L5a2780;
case 0x5a2781:c.instructions+=12;goto B5a2781;
case 0x5a2783:c.instructions+=11;goto B5a2783;
case 0x5a2786:c.instructions+=10;goto B5a2786;
case 0x5a2789:c.instructions+=9;goto B5a2789;
case 0x5a278c:c.instructions+=8;goto B5a278c;
case 0x5a278f:c.instructions+=7;goto B5a278f;
case 0x5a2792:c.instructions+=6;goto B5a2792;
case 0x5a2793:c.instructions+=5;goto B5a2793;
case 0x5a2796:c.instructions+=4;goto B5a2796;
case 0x5a2799:c.instructions+=3;goto B5a2799;
case 0x5a279f:c.instructions+=2;goto B5a279f;
case 0x5a27a0:c.instructions+=1;goto B5a27a0;
case 0x5a27a2:goto L5a27a2;
case 0x5a27a5:c.instructions+=3;goto B5a27a5;
case 0x5a27a9:c.instructions+=2;goto B5a27a9;
case 0x5a27ac:c.instructions+=1;goto B5a27ac;
case 0x5a27ae:goto L5a27ae;
case 0x5a27b1:c.instructions+=2;goto B5a27b1;
case 0x5a27b3:c.instructions+=1;goto B5a27b3;
case 0x5a27b7:goto L5a27b7;
case 0x5a27ba:c.instructions+=1;goto B5a27ba;
case 0x5a27bc:goto L5a27bc;
case 0x5a27bf:c.instructions+=1;goto B5a27bf;
case 0x5a27c1:goto L5a27c1;
case 0x5a27c6:c.instructions+=17;goto B5a27c6;
case 0x5a27c8:c.instructions+=16;goto B5a27c8;
case 0x5a27ce:c.instructions+=15;goto B5a27ce;
case 0x5a27d2:c.instructions+=14;goto B5a27d2;
case 0x5a27d6:c.instructions+=13;goto B5a27d6;
case 0x5a27da:c.instructions+=12;goto B5a27da;
case 0x5a27e0:c.instructions+=11;goto B5a27e0;
case 0x5a27e6:c.instructions+=10;goto B5a27e6;
case 0x5a27e8:c.instructions+=9;goto B5a27e8;
case 0x5a27ea:c.instructions+=8;goto B5a27ea;
case 0x5a27ec:c.instructions+=7;goto B5a27ec;
case 0x5a27f2:c.instructions+=6;goto B5a27f2;
case 0x5a27f4:c.instructions+=5;goto B5a27f4;
case 0x5a27f7:c.instructions+=4;goto B5a27f7;
case 0x5a27fb:c.instructions+=3;goto B5a27fb;
case 0x5a27fd:c.instructions+=2;goto B5a27fd;
case 0x5a2800:c.instructions+=1;goto B5a2800;
case 0x5a2805:goto L5a2805;
case 0x5a280a:c.instructions+=14;goto B5a280a;
case 0x5a280c:c.instructions+=13;goto B5a280c;
case 0x5a2812:c.instructions+=12;goto B5a2812;
case 0x5a2816:c.instructions+=11;goto B5a2816;
case 0x5a281a:c.instructions+=10;goto B5a281a;
case 0x5a281e:c.instructions+=9;goto B5a281e;
case 0x5a2824:c.instructions+=8;goto B5a2824;
case 0x5a2826:c.instructions+=7;goto B5a2826;
case 0x5a2828:c.instructions+=6;goto B5a2828;
case 0x5a282a:c.instructions+=5;goto B5a282a;
case 0x5a2830:c.instructions+=4;goto B5a2830;
case 0x5a2832:c.instructions+=3;goto B5a2832;
case 0x5a2835:c.instructions+=2;goto B5a2835;
case 0x5a2837:c.instructions+=1;goto B5a2837;
case 0x5a2839:goto L5a2839;
case 0x5a283c:c.instructions+=1;goto B5a283c;
case 0x5a283e:goto L5a283e;
case 0x5a2841:c.instructions+=17;goto B5a2841;
case 0x5a2845:c.instructions+=16;goto B5a2845;
case 0x5a2849:c.instructions+=15;goto B5a2849;
case 0x5a284f:c.instructions+=14;goto B5a284f;
case 0x5a2853:c.instructions+=13;goto B5a2853;
case 0x5a2859:c.instructions+=12;goto B5a2859;
case 0x5a285f:c.instructions+=11;goto B5a285f;
case 0x5a2861:c.instructions+=10;goto B5a2861;
case 0x5a2863:c.instructions+=9;goto B5a2863;
case 0x5a2865:c.instructions+=8;goto B5a2865;
case 0x5a286b:c.instructions+=7;goto B5a286b;
case 0x5a286d:c.instructions+=6;goto B5a286d;
case 0x5a2870:c.instructions+=5;goto B5a2870;
case 0x5a2872:c.instructions+=4;goto B5a2872;
case 0x5a2876:c.instructions+=3;goto B5a2876;
case 0x5a2878:c.instructions+=2;goto B5a2878;
case 0x5a287b:c.instructions+=1;goto B5a287b;
case 0x5a287d:goto L5a287d;
case 0x5a2880:c.instructions+=11;goto B5a2880;
case 0x5a2884:c.instructions+=10;goto B5a2884;
case 0x5a2888:c.instructions+=9;goto B5a2888;
case 0x5a288e:c.instructions+=8;goto B5a288e;
case 0x5a2892:c.instructions+=7;goto B5a2892;
case 0x5a2898:c.instructions+=6;goto B5a2898;
case 0x5a289a:c.instructions+=5;goto B5a289a;
case 0x5a289c:c.instructions+=4;goto B5a289c;
case 0x5a289e:c.instructions+=3;goto B5a289e;
case 0x5a28a4:c.instructions+=2;goto B5a28a4;
case 0x5a28a6:c.instructions+=1;goto B5a28a6;
case 0x5a28a9:goto L5a28a9;
case 0x5a28af:c.instructions+=3;goto B5a28af;
case 0x5a28b3:c.instructions+=2;goto B5a28b3;
case 0x5a28b6:c.instructions+=1;goto B5a28b6;
case 0x5a28b8:goto L5a28b8;
case 0x5a28bb:c.instructions+=19;goto B5a28bb;
case 0x5a28bd:c.instructions+=18;goto B5a28bd;
case 0x5a28c1:c.instructions+=17;goto B5a28c1;
case 0x5a28c2:c.instructions+=16;goto B5a28c2;
case 0x5a28c5:c.instructions+=15;goto B5a28c5;
case 0x5a28c6:c.instructions+=14;goto B5a28c6;
case 0x5a28c9:c.instructions+=13;goto B5a28c9;
case 0x5a28cd:c.instructions+=12;goto B5a28cd;
case 0x5a28d0:c.instructions+=11;goto B5a28d0;
case 0x5a28d7:c.instructions+=10;goto B5a28d7;
case 0x5a28db:c.instructions+=9;goto B5a28db;
case 0x5a28df:c.instructions+=8;goto B5a28df;
case 0x5a28e3:c.instructions+=7;goto B5a28e3;
case 0x5a28e5:c.instructions+=6;goto B5a28e5;
case 0x5a28e8:c.instructions+=5;goto B5a28e8;
case 0x5a28eb:c.instructions+=4;goto B5a28eb;
case 0x5a28ee:c.instructions+=3;goto B5a28ee;
case 0x5a28f0:c.instructions+=2;goto B5a28f0;
case 0x5a28f1:c.instructions+=1;goto B5a28f1;
case 0x5a2900:goto L5a2900;
case 0x5a2901:c.instructions+=12;goto B5a2901;
case 0x5a2903:c.instructions+=11;goto B5a2903;
case 0x5a2906:c.instructions+=10;goto B5a2906;
case 0x5a2907:c.instructions+=9;goto B5a2907;
case 0x5a2908:c.instructions+=8;goto B5a2908;
case 0x5a2909:c.instructions+=7;goto B5a2909;
case 0x5a290c:c.instructions+=6;goto B5a290c;
case 0x5a290d:c.instructions+=5;goto B5a290d;
case 0x5a290f:c.instructions+=4;goto B5a290f;
case 0x5a2914:c.instructions+=3;goto B5a2914;
case 0x5a2915:c.instructions+=2;goto B5a2915;
case 0x5a2917:c.instructions+=1;goto B5a2917;
case 0x5a291c:goto L5a291c;
case 0x5a291f:c.instructions+=2;goto B5a291f;
case 0x5a2920:c.instructions+=1;goto B5a2920;
case 0x5a2925:goto L5a2925;
case 0x5a2928:c.instructions+=2;goto B5a2928;
case 0x5a2929:c.instructions+=1;goto B5a2929;
case 0x5a292e:goto L5a292e;
case 0x5a2931:c.instructions+=3;goto B5a2931;
case 0x5a2934:c.instructions+=2;goto B5a2934;
case 0x5a2937:c.instructions+=1;goto B5a2937;
case 0x5a2939:goto L5a2939;
case 0x5a293b:c.instructions+=9;goto B5a293b;
case 0x5a2940:c.instructions+=8;goto B5a2940;
case 0x5a2943:c.instructions+=7;goto B5a2943;
case 0x5a2946:c.instructions+=6;goto B5a2946;
case 0x5a2949:c.instructions+=5;goto B5a2949;
case 0x5a294c:c.instructions+=4;goto B5a294c;
case 0x5a294f:c.instructions+=3;goto B5a294f;
case 0x5a2952:c.instructions+=2;goto B5a2952;
case 0x5a2955:c.instructions+=1;goto B5a2955;
case 0x5a2958:goto L5a2958;
case 0x5a295b:c.instructions+=1;goto B5a295b;
case 0x5a2963:goto L5a2963;
case 0x5a2966:c.instructions+=2;goto B5a2966;
case 0x5a2967:c.instructions+=1;goto B5a2967;
case 0x5a296c:goto L5a296c;
case 0x5a296e:c.instructions+=5;goto B5a296e;
case 0x5a2970:c.instructions+=4;goto B5a2970;
case 0x5a2972:c.instructions+=3;goto B5a2972;
case 0x5a2973:c.instructions+=2;goto B5a2973;
case 0x5a2975:c.instructions+=1;goto B5a2975;
case 0x5a297a:goto L5a297a;
case 0x5a297e:c.instructions+=4;goto B5a297e;
case 0x5a2981:c.instructions+=3;goto B5a2981;
case 0x5a2982:c.instructions+=2;goto B5a2982;
case 0x5a2986:c.instructions+=1;goto B5a2986;
case 0x5a2988:goto L5a2988;
case 0x5a2989:c.instructions+=2;goto B5a2989;
case 0x5a298b:c.instructions+=1;goto B5a298b;
case 0x5a2990:goto L5a2990;
case 0x5a2992:c.instructions+=1;goto B5a2992;
case 0x5a2997:goto L5a2997;
case 0x5a2998:c.instructions+=5;goto B5a2998;
case 0x5a2999:c.instructions+=4;goto B5a2999;
case 0x5a299a:c.instructions+=3;goto B5a299a;
case 0x5a299c:c.instructions+=2;goto B5a299c;
case 0x5a299d:c.instructions+=1;goto B5a299d;
case 0x5a29a0:goto L5a29a0;
case 0x5a29a1:c.instructions+=4;goto B5a29a1;
case 0x5a29a3:c.instructions+=3;goto B5a29a3;
case 0x5a29a6:c.instructions+=2;goto B5a29a6;
case 0x5a29a8:c.instructions+=1;goto B5a29a8;
case 0x5a29aa:goto L5a29aa;
case 0x5a29ad:c.instructions+=8;goto B5a29ad;
case 0x5a29b0:c.instructions+=7;goto B5a29b0;
case 0x5a29b3:c.instructions+=6;goto B5a29b3;
case 0x5a29b5:c.instructions+=5;goto B5a29b5;
case 0x5a29ba:c.instructions+=4;goto B5a29ba;
case 0x5a29bc:c.instructions+=3;goto B5a29bc;
case 0x5a29bf:c.instructions+=2;goto B5a29bf;
case 0x5a29c1:c.instructions+=1;goto B5a29c1;
case 0x5a29c4:goto L5a29c4;
case 0x5a29c7:c.instructions+=1;goto B5a29c7;
case 0x5a29cc:goto L5a29cc;
case 0x5a29cf:c.instructions+=23;goto B5a29cf;
case 0x5a29d5:c.instructions+=22;goto B5a29d5;
case 0x5a29d8:c.instructions+=21;goto B5a29d8;
case 0x5a29de:c.instructions+=20;goto B5a29de;
case 0x5a29e1:c.instructions+=19;goto B5a29e1;
case 0x5a29e7:c.instructions+=18;goto B5a29e7;
case 0x5a29ea:c.instructions+=17;goto B5a29ea;
case 0x5a29f0:c.instructions+=16;goto B5a29f0;
case 0x5a29f3:c.instructions+=15;goto B5a29f3;
case 0x5a29f9:c.instructions+=14;goto B5a29f9;
case 0x5a29fc:c.instructions+=13;goto B5a29fc;
case 0x5a2a02:c.instructions+=12;goto B5a2a02;
case 0x5a2a05:c.instructions+=11;goto B5a2a05;
case 0x5a2a0b:c.instructions+=10;goto B5a2a0b;
case 0x5a2a0e:c.instructions+=9;goto B5a2a0e;
case 0x5a2a14:c.instructions+=8;goto B5a2a14;
case 0x5a2a17:c.instructions+=7;goto B5a2a17;
case 0x5a2a1d:c.instructions+=6;goto B5a2a1d;
case 0x5a2a20:c.instructions+=5;goto B5a2a20;
case 0x5a2a26:c.instructions+=4;goto B5a2a26;
case 0x5a2a28:c.instructions+=3;goto B5a2a28;
case 0x5a2a2a:c.instructions+=2;goto B5a2a2a;
case 0x5a2a2d:c.instructions+=1;goto B5a2a2d;
case 0x5a2a2f:goto L5a2a2f;
case 0x5a2a31:c.instructions+=1;goto B5a2a31;
case 0x5a2a37:goto L5a2a37;
case 0x5a2a39:c.instructions+=9;goto B5a2a39;
case 0x5a2a3c:c.instructions+=8;goto B5a2a3c;
case 0x5a2a3d:c.instructions+=7;goto B5a2a3d;
case 0x5a2a40:c.instructions+=6;goto B5a2a40;
case 0x5a2a43:c.instructions+=5;goto B5a2a43;
case 0x5a2a46:c.instructions+=4;goto B5a2a46;
case 0x5a2a48:c.instructions+=3;goto B5a2a48;
case 0x5a2a4b:c.instructions+=2;goto B5a2a4b;
case 0x5a2a4d:c.instructions+=1;goto B5a2a4d;
case 0x5a2a52:goto L5a2a52;
case 0x5a2a53:c.instructions+=1;goto B5a2a53;
case 0x5a2a60:goto L5a2a60;
case 0x5a2a61:c.instructions+=12;goto B5a2a61;
case 0x5a2a63:c.instructions+=11;goto B5a2a63;
case 0x5a2a66:c.instructions+=10;goto B5a2a66;
case 0x5a2a6d:c.instructions+=9;goto B5a2a6d;
case 0x5a2a70:c.instructions+=8;goto B5a2a70;
case 0x5a2a77:c.instructions+=7;goto B5a2a77;
case 0x5a2a7a:c.instructions+=6;goto B5a2a7a;
case 0x5a2a80:c.instructions+=5;goto B5a2a80;
case 0x5a2a83:c.instructions+=4;goto B5a2a83;
case 0x5a2a89:c.instructions+=3;goto B5a2a89;
case 0x5a2a8c:c.instructions+=2;goto B5a2a8c;
case 0x5a2a8e:c.instructions+=1;goto B5a2a8e;
case 0x5a2a91:goto L5a2a91;
case 0x5a2a94:c.instructions+=17;goto B5a2a94;
case 0x5a2a9a:c.instructions+=16;goto B5a2a9a;
case 0x5a2a9d:c.instructions+=15;goto B5a2a9d;
case 0x5a2aa3:c.instructions+=14;goto B5a2aa3;
case 0x5a2aa6:c.instructions+=13;goto B5a2aa6;
case 0x5a2aac:c.instructions+=12;goto B5a2aac;
case 0x5a2aaf:c.instructions+=11;goto B5a2aaf;
case 0x5a2ab1:c.instructions+=10;goto B5a2ab1;
case 0x5a2ab7:c.instructions+=9;goto B5a2ab7;
case 0x5a2ab8:c.instructions+=8;goto B5a2ab8;
case 0x5a2abb:c.instructions+=7;goto B5a2abb;
case 0x5a2abe:c.instructions+=6;goto B5a2abe;
case 0x5a2abf:c.instructions+=5;goto B5a2abf;
case 0x5a2ac0:c.instructions+=4;goto B5a2ac0;
case 0x5a2ac3:c.instructions+=3;goto B5a2ac3;
case 0x5a2ac6:c.instructions+=2;goto B5a2ac6;
case 0x5a2ac7:c.instructions+=1;goto B5a2ac7;
case 0x5a2acc:goto L5a2acc;
case 0x5a2acf:c.instructions+=11;goto B5a2acf;
case 0x5a2ad5:c.instructions+=10;goto B5a2ad5;
case 0x5a2ad8:c.instructions+=9;goto B5a2ad8;
case 0x5a2adb:c.instructions+=8;goto B5a2adb;
case 0x5a2adf:c.instructions+=7;goto B5a2adf;
case 0x5a2ae5:c.instructions+=6;goto B5a2ae5;
case 0x5a2ae9:c.instructions+=5;goto B5a2ae9;
case 0x5a2aef:c.instructions+=4;goto B5a2aef;
case 0x5a2af3:c.instructions+=3;goto B5a2af3;
case 0x5a2af9:c.instructions+=2;goto B5a2af9;
case 0x5a2afc:c.instructions+=1;goto B5a2afc;
case 0x5a2b01:goto L5a2b01;
case 0x5a2b04:c.instructions+=8;goto B5a2b04;
case 0x5a2b07:c.instructions+=7;goto B5a2b07;
case 0x5a2b0d:c.instructions+=6;goto B5a2b0d;
case 0x5a2b13:c.instructions+=5;goto B5a2b13;
case 0x5a2b19:c.instructions+=4;goto B5a2b19;
case 0x5a2b1f:c.instructions+=3;goto B5a2b1f;
case 0x5a2b21:c.instructions+=2;goto B5a2b21;
case 0x5a2b24:c.instructions+=1;goto B5a2b24;
case 0x5a2b26:goto L5a2b26;
case 0x5a2b2c:c.instructions+=1;goto B5a2b2c;
case 0x5a2b2e:goto L5a2b2e;
case 0x5a2b31:c.instructions+=1;goto B5a2b31;
case 0x5a2b37:goto L5a2b37;
case 0x5a2b3a:c.instructions+=5;goto B5a2b3a;
case 0x5a2b3d:c.instructions+=4;goto B5a2b3d;
case 0x5a2b43:c.instructions+=3;goto B5a2b43;
case 0x5a2b45:c.instructions+=2;goto B5a2b45;
case 0x5a2b47:c.instructions+=1;goto B5a2b47;
case 0x5a2b4a:goto L5a2b4a;
case 0x5a2b4c:c.instructions+=3;goto B5a2b4c;
case 0x5a2b4e:c.instructions+=2;goto B5a2b4e;
case 0x5a2b4f:c.instructions+=1;goto B5a2b4f;
case 0x5a2b60:goto L5a2b60;
case 0x5a2b61:c.instructions+=25;goto B5a2b61;
case 0x5a2b63:c.instructions+=24;goto B5a2b63;
case 0x5a2b66:c.instructions+=23;goto B5a2b66;
case 0x5a2b69:c.instructions+=22;goto B5a2b69;
case 0x5a2b6a:c.instructions+=21;goto B5a2b6a;
case 0x5a2b6b:c.instructions+=20;goto B5a2b6b;
case 0x5a2b6c:c.instructions+=19;goto B5a2b6c;
case 0x5a2b6e:c.instructions+=18;goto B5a2b6e;
case 0x5a2b71:c.instructions+=17;goto B5a2b71;
case 0x5a2b78:c.instructions+=16;goto B5a2b78;
case 0x5a2b7b:c.instructions+=15;goto B5a2b7b;
case 0x5a2b82:c.instructions+=14;goto B5a2b82;
case 0x5a2b86:c.instructions+=13;goto B5a2b86;
case 0x5a2b8a:c.instructions+=12;goto B5a2b8a;
case 0x5a2b8e:c.instructions+=11;goto B5a2b8e;
case 0x5a2b94:c.instructions+=10;goto B5a2b94;
case 0x5a2b98:c.instructions+=9;goto B5a2b98;
case 0x5a2b9c:c.instructions+=8;goto B5a2b9c;
case 0x5a2ba2:c.instructions+=7;goto B5a2ba2;
case 0x5a2ba5:c.instructions+=6;goto B5a2ba5;
case 0x5a2bab:c.instructions+=5;goto B5a2bab;
case 0x5a2baf:c.instructions+=4;goto B5a2baf;
case 0x5a2bb5:c.instructions+=3;goto B5a2bb5;
case 0x5a2bb7:c.instructions+=2;goto B5a2bb7;
case 0x5a2bba:c.instructions+=1;goto B5a2bba;
case 0x5a2bbc:goto L5a2bbc;
case 0x5a2bc2:goto L5a2bc2;
case 0x5a2bc4:c.instructions+=4;goto B5a2bc4;
case 0x5a2bca:c.instructions+=3;goto B5a2bca;
case 0x5a2bcc:c.instructions+=2;goto B5a2bcc;
case 0x5a2bcf:c.instructions+=1;goto B5a2bcf;
case 0x5a2bd1:goto L5a2bd1;
case 0x5a2bd3:c.instructions+=2;goto B5a2bd3;
case 0x5a2bd9:c.instructions+=1;goto B5a2bd9;
case 0x5a2bdb:goto L5a2bdb;
case 0x5a2bdd:c.instructions+=9;goto B5a2bdd;
case 0x5a2bdf:c.instructions+=8;goto B5a2bdf;
case 0x5a2be3:c.instructions+=7;goto B5a2be3;
case 0x5a2be5:c.instructions+=6;goto B5a2be5;
case 0x5a2be9:c.instructions+=5;goto B5a2be9;
case 0x5a2beb:c.instructions+=4;goto B5a2beb;
case 0x5a2bef:c.instructions+=3;goto B5a2bef;
case 0x5a2bf1:c.instructions+=2;goto B5a2bf1;
case 0x5a2bf4:c.instructions+=1;goto B5a2bf4;
case 0x5a2bf6:goto L5a2bf6;
case 0x5a2bf8:c.instructions+=1;goto B5a2bf8;
case 0x5a2bfc:goto L5a2bfc;
case 0x5a2c00:c.instructions+=4;goto B5a2c00;
case 0x5a2c02:c.instructions+=3;goto B5a2c02;
case 0x5a2c04:c.instructions+=2;goto B5a2c04;
case 0x5a2c07:c.instructions+=1;goto B5a2c07;
case 0x5a2c09:goto L5a2c09;
case 0x5a2c0b:c.instructions+=1;goto B5a2c0b;
case 0x5a2c0f:goto L5a2c0f;
case 0x5a2c15:c.instructions+=1;goto B5a2c15;
case 0x5a2c1a:goto L5a2c1a;
case 0x5a2c1c:c.instructions+=23;goto B5a2c1c;
case 0x5a2c21:c.instructions+=22;goto B5a2c21;
case 0x5a2c23:c.instructions+=21;goto B5a2c23;
case 0x5a2c25:c.instructions+=20;goto B5a2c25;
case 0x5a2c28:c.instructions+=19;goto B5a2c28;
case 0x5a2c2a:c.instructions+=18;goto B5a2c2a;
case 0x5a2c2d:c.instructions+=17;goto B5a2c2d;
case 0x5a2c2f:c.instructions+=16;goto B5a2c2f;
case 0x5a2c36:c.instructions+=15;goto B5a2c36;
case 0x5a2c39:c.instructions+=14;goto B5a2c39;
case 0x5a2c3c:c.instructions+=13;goto B5a2c3c;
case 0x5a2c3f:c.instructions+=12;goto B5a2c3f;
case 0x5a2c42:c.instructions+=11;goto B5a2c42;
case 0x5a2c45:c.instructions+=10;goto B5a2c45;
case 0x5a2c48:c.instructions+=9;goto B5a2c48;
case 0x5a2c4b:c.instructions+=8;goto B5a2c4b;
case 0x5a2c4d:c.instructions+=7;goto B5a2c4d;
case 0x5a2c50:c.instructions+=6;goto B5a2c50;
case 0x5a2c53:c.instructions+=5;goto B5a2c53;
case 0x5a2c56:c.instructions+=4;goto B5a2c56;
case 0x5a2c59:c.instructions+=3;goto B5a2c59;
case 0x5a2c5a:c.instructions+=2;goto B5a2c5a;
case 0x5a2c5b:c.instructions+=1;goto B5a2c5b;
case 0x5a2c60:goto L5a2c60;
case 0x5a2c62:c.instructions+=5;goto B5a2c62;
case 0x5a2c63:c.instructions+=4;goto B5a2c63;
case 0x5a2c67:c.instructions+=3;goto B5a2c67;
case 0x5a2c68:c.instructions+=2;goto B5a2c68;
case 0x5a2c69:c.instructions+=1;goto B5a2c69;
case 0x5a2c6e:goto L5a2c6e;
case 0x5a2c71:c.instructions+=15;goto B5a2c71;
case 0x5a2c75:c.instructions+=14;goto B5a2c75;
case 0x5a2c7b:c.instructions+=13;goto B5a2c7b;
case 0x5a2c7e:c.instructions+=12;goto B5a2c7e;
case 0x5a2c7f:c.instructions+=11;goto B5a2c7f;
case 0x5a2c83:c.instructions+=10;goto B5a2c83;
case 0x5a2c86:c.instructions+=9;goto B5a2c86;
case 0x5a2c87:c.instructions+=8;goto B5a2c87;
case 0x5a2c8b:c.instructions+=7;goto B5a2c8b;
case 0x5a2c8f:c.instructions+=6;goto B5a2c8f;
case 0x5a2c93:c.instructions+=5;goto B5a2c93;
case 0x5a2c95:c.instructions+=4;goto B5a2c95;
case 0x5a2c98:c.instructions+=3;goto B5a2c98;
case 0x5a2c9b:c.instructions+=2;goto B5a2c9b;
case 0x5a2c9e:c.instructions+=1;goto B5a2c9e;
case 0x5a2ca3:goto L5a2ca3;
case 0x5a2ca6:c.instructions+=40;goto B5a2ca6;
case 0x5a2cac:c.instructions+=39;goto B5a2cac;
case 0x5a2cb2:c.instructions+=38;goto B5a2cb2;
case 0x5a2cb8:c.instructions+=37;goto B5a2cb8;
case 0x5a2cbd:c.instructions+=36;goto B5a2cbd;
case 0x5a2cbf:c.instructions+=35;goto B5a2cbf;
case 0x5a2cc2:c.instructions+=34;goto B5a2cc2;
case 0x5a2cc5:c.instructions+=33;goto B5a2cc5;
case 0x5a2cc8:c.instructions+=32;goto B5a2cc8;
case 0x5a2ccb:c.instructions+=31;goto B5a2ccb;
case 0x5a2cce:c.instructions+=30;goto B5a2cce;
case 0x5a2cd0:c.instructions+=29;goto B5a2cd0;
case 0x5a2cd7:c.instructions+=28;goto B5a2cd7;
case 0x5a2cd9:c.instructions+=27;goto B5a2cd9;
case 0x5a2cdb:c.instructions+=26;goto B5a2cdb;
case 0x5a2cdd:c.instructions+=25;goto B5a2cdd;
case 0x5a2cdf:c.instructions+=24;goto B5a2cdf;
case 0x5a2ce1:c.instructions+=23;goto B5a2ce1;
case 0x5a2ce3:c.instructions+=22;goto B5a2ce3;
case 0x5a2ce5:c.instructions+=21;goto B5a2ce5;
case 0x5a2ce7:c.instructions+=20;goto B5a2ce7;
case 0x5a2ce9:c.instructions+=19;goto B5a2ce9;
case 0x5a2ceb:c.instructions+=18;goto B5a2ceb;
case 0x5a2ced:c.instructions+=17;goto B5a2ced;
case 0x5a2cef:c.instructions+=16;goto B5a2cef;
case 0x5a2cf5:c.instructions+=15;goto B5a2cf5;
case 0x5a2cf8:c.instructions+=14;goto B5a2cf8;
case 0x5a2cfe:c.instructions+=13;goto B5a2cfe;
case 0x5a2d04:c.instructions+=12;goto B5a2d04;
case 0x5a2d0a:c.instructions+=11;goto B5a2d0a;
case 0x5a2d0f:c.instructions+=10;goto B5a2d0f;
case 0x5a2d11:c.instructions+=9;goto B5a2d11;
case 0x5a2d17:c.instructions+=8;goto B5a2d17;
case 0x5a2d1d:c.instructions+=7;goto B5a2d1d;
case 0x5a2d23:c.instructions+=6;goto B5a2d23;
case 0x5a2d26:c.instructions+=5;goto B5a2d26;
case 0x5a2d29:c.instructions+=4;goto B5a2d29;
case 0x5a2d2c:c.instructions+=3;goto B5a2d2c;
case 0x5a2d2d:c.instructions+=2;goto B5a2d2d;
case 0x5a2d2e:c.instructions+=1;goto B5a2d2e;
case 0x5a2d33:goto L5a2d33;
case 0x5a2d3a:c.instructions+=36;goto B5a2d3a;
case 0x5a2d3d:c.instructions+=35;goto B5a2d3d;
case 0x5a2d40:c.instructions+=34;goto B5a2d40;
case 0x5a2d43:c.instructions+=33;goto B5a2d43;
case 0x5a2d46:c.instructions+=32;goto B5a2d46;
case 0x5a2d49:c.instructions+=31;goto B5a2d49;
case 0x5a2d4f:c.instructions+=30;goto B5a2d4f;
case 0x5a2d52:c.instructions+=29;goto B5a2d52;
case 0x5a2d56:c.instructions+=28;goto B5a2d56;
case 0x5a2d5b:c.instructions+=27;goto B5a2d5b;
case 0x5a2d5d:c.instructions+=26;goto B5a2d5d;
case 0x5a2d5f:c.instructions+=25;goto B5a2d5f;
case 0x5a2d63:c.instructions+=24;goto B5a2d63;
case 0x5a2d65:c.instructions+=23;goto B5a2d65;
case 0x5a2d67:c.instructions+=22;goto B5a2d67;
case 0x5a2d6a:c.instructions+=21;goto B5a2d6a;
case 0x5a2d70:c.instructions+=20;goto B5a2d70;
case 0x5a2d76:c.instructions+=19;goto B5a2d76;
case 0x5a2d7a:c.instructions+=18;goto B5a2d7a;
case 0x5a2d7d:c.instructions+=17;goto B5a2d7d;
case 0x5a2d7f:c.instructions+=16;goto B5a2d7f;
case 0x5a2d83:c.instructions+=15;goto B5a2d83;
case 0x5a2d88:c.instructions+=14;goto B5a2d88;
case 0x5a2d8d:c.instructions+=13;goto B5a2d8d;
case 0x5a2d8f:c.instructions+=12;goto B5a2d8f;
case 0x5a2d91:c.instructions+=11;goto B5a2d91;
case 0x5a2d96:c.instructions+=10;goto B5a2d96;
case 0x5a2d99:c.instructions+=9;goto B5a2d99;
case 0x5a2d9b:c.instructions+=8;goto B5a2d9b;
case 0x5a2da1:c.instructions+=7;goto B5a2da1;
case 0x5a2dab:c.instructions+=6;goto B5a2dab;
case 0x5a2db3:c.instructions+=5;goto B5a2db3;
case 0x5a2db9:c.instructions+=4;goto B5a2db9;
case 0x5a2dbd:c.instructions+=3;goto B5a2dbd;
case 0x5a2dc1:c.instructions+=2;goto B5a2dc1;
case 0x5a2dc5:c.instructions+=1;goto B5a2dc5;
case 0x5a2dc7:goto L5a2dc7;
case 0x5a2dcb:c.instructions+=2;goto B5a2dcb;
case 0x5a2dcf:c.instructions+=1;goto B5a2dcf;
case 0x5a2dd0:goto L5a2dd0;
case 0x5a2dd3:c.instructions+=22;goto B5a2dd3;
case 0x5a2dd5:c.instructions+=21;goto B5a2dd5;
case 0x5a2dd8:c.instructions+=20;goto B5a2dd8;
case 0x5a2ddc:c.instructions+=19;goto B5a2ddc;
case 0x5a2de0:c.instructions+=18;goto B5a2de0;
case 0x5a2de2:c.instructions+=17;goto B5a2de2;
case 0x5a2de8:c.instructions+=16;goto B5a2de8;
case 0x5a2de9:c.instructions+=15;goto B5a2de9;
case 0x5a2ded:c.instructions+=14;goto B5a2ded;
case 0x5a2df0:c.instructions+=13;goto B5a2df0;
case 0x5a2df2:c.instructions+=12;goto B5a2df2;
case 0x5a2df4:c.instructions+=11;goto B5a2df4;
case 0x5a2df7:c.instructions+=10;goto B5a2df7;
case 0x5a2df9:c.instructions+=9;goto B5a2df9;
case 0x5a2dfd:c.instructions+=8;goto B5a2dfd;
case 0x5a2e00:c.instructions+=7;goto B5a2e00;
case 0x5a2e03:c.instructions+=6;goto B5a2e03;
case 0x5a2e0a:c.instructions+=5;goto B5a2e0a;
case 0x5a2e0e:c.instructions+=4;goto B5a2e0e;
case 0x5a2e12:c.instructions+=3;goto B5a2e12;
case 0x5a2e14:c.instructions+=2;goto B5a2e14;
case 0x5a2e17:c.instructions+=1;goto B5a2e17;
case 0x5a2e19:goto L5a2e19;
case 0x5a2e1b:c.instructions+=1;goto B5a2e1b;
case 0x5a2e1f:goto L5a2e1f;
case 0x5a2e21:c.instructions+=13;goto B5a2e21;
case 0x5a2e25:c.instructions+=12;goto B5a2e25;
case 0x5a2e27:c.instructions+=11;goto B5a2e27;
case 0x5a2e2e:c.instructions+=10;goto B5a2e2e;
case 0x5a2e2f:c.instructions+=9;goto B5a2e2f;
case 0x5a2e33:c.instructions+=8;goto B5a2e33;
case 0x5a2e36:c.instructions+=7;goto B5a2e36;
case 0x5a2e38:c.instructions+=6;goto B5a2e38;
case 0x5a2e39:c.instructions+=5;goto B5a2e39;
case 0x5a2e3d:c.instructions+=4;goto B5a2e3d;
case 0x5a2e3e:c.instructions+=3;goto B5a2e3e;
case 0x5a2e3f:c.instructions+=2;goto B5a2e3f;
case 0x5a2e40:c.instructions+=1;goto B5a2e40;
case 0x5a2e45:goto L5a2e45;
case 0x5a2e49:c.instructions+=11;goto B5a2e49;
case 0x5a2e4c:c.instructions+=10;goto B5a2e4c;
case 0x5a2e4f:c.instructions+=9;goto B5a2e4f;
case 0x5a2e53:c.instructions+=8;goto B5a2e53;
case 0x5a2e5a:c.instructions+=7;goto B5a2e5a;
case 0x5a2e5d:c.instructions+=6;goto B5a2e5d;
case 0x5a2e61:c.instructions+=5;goto B5a2e61;
case 0x5a2e65:c.instructions+=4;goto B5a2e65;
case 0x5a2e6c:c.instructions+=3;goto B5a2e6c;
case 0x5a2e70:c.instructions+=2;goto B5a2e70;
case 0x5a2e72:c.instructions+=1;goto B5a2e72;
case 0x5a2e74:goto L5a2e74;
case 0x5a2e76:c.instructions+=1;goto B5a2e76;
case 0x5a2e78:goto L5a2e78;
case 0x5a2e7e:c.instructions+=2;goto B5a2e7e;
case 0x5a2e7f:c.instructions+=1;goto B5a2e7f;
case 0x5a2e81:goto L5a2e81;
case 0x5a2e83:c.instructions+=1;goto B5a2e83;
case 0x5a2e85:goto L5a2e85;
case 0x5a2e8b:c.instructions+=1;goto B5a2e8b;
case 0x5a2e8c:goto L5a2e8c;
case 0x5a2e92:goto L5a2e92;
case 0x5a2e95:c.instructions+=17;goto B5a2e95;
case 0x5a2e99:c.instructions+=16;goto B5a2e99;
case 0x5a2e9d:c.instructions+=15;goto B5a2e9d;
case 0x5a2e9f:c.instructions+=14;goto B5a2e9f;
case 0x5a2ea1:c.instructions+=13;goto B5a2ea1;
case 0x5a2ea5:c.instructions+=12;goto B5a2ea5;
case 0x5a2ea7:c.instructions+=11;goto B5a2ea7;
case 0x5a2eaa:c.instructions+=10;goto B5a2eaa;
case 0x5a2eae:c.instructions+=9;goto B5a2eae;
case 0x5a2eb5:c.instructions+=8;goto B5a2eb5;
case 0x5a2eb8:c.instructions+=7;goto B5a2eb8;
case 0x5a2eba:c.instructions+=6;goto B5a2eba;
case 0x5a2ebd:c.instructions+=5;goto B5a2ebd;
case 0x5a2ec1:c.instructions+=4;goto B5a2ec1;
case 0x5a2ec7:c.instructions+=3;goto B5a2ec7;
case 0x5a2ec9:c.instructions+=2;goto B5a2ec9;
case 0x5a2ed0:c.instructions+=1;goto B5a2ed0;
case 0x5a2ed2:goto L5a2ed2;
case 0x5a2ed8:c.instructions+=1;goto B5a2ed8;
case 0x5a2eda:goto L5a2eda;
case 0x5a2ee0:goto L5a2ee0;
case 0x5a2ee6:c.instructions+=24;goto B5a2ee6;
case 0x5a2ee9:c.instructions+=23;goto B5a2ee9;
case 0x5a2eec:c.instructions+=22;goto B5a2eec;
case 0x5a2eee:c.instructions+=21;goto B5a2eee;
case 0x5a2ef2:c.instructions+=20;goto B5a2ef2;
case 0x5a2ef8:c.instructions+=19;goto B5a2ef8;
case 0x5a2efb:c.instructions+=18;goto B5a2efb;
case 0x5a2eff:c.instructions+=17;goto B5a2eff;
case 0x5a2f03:c.instructions+=16;goto B5a2f03;
case 0x5a2f05:c.instructions+=15;goto B5a2f05;
case 0x5a2f07:c.instructions+=14;goto B5a2f07;
case 0x5a2f09:c.instructions+=13;goto B5a2f09;
case 0x5a2f0f:c.instructions+=12;goto B5a2f0f;
case 0x5a2f15:c.instructions+=11;goto B5a2f15;
case 0x5a2f17:c.instructions+=10;goto B5a2f17;
case 0x5a2f1b:c.instructions+=9;goto B5a2f1b;
case 0x5a2f21:c.instructions+=8;goto B5a2f21;
case 0x5a2f23:c.instructions+=7;goto B5a2f23;
case 0x5a2f26:c.instructions+=6;goto B5a2f26;
case 0x5a2f2a:c.instructions+=5;goto B5a2f2a;
case 0x5a2f31:c.instructions+=4;goto B5a2f31;
case 0x5a2f37:c.instructions+=3;goto B5a2f37;
case 0x5a2f3c:c.instructions+=2;goto B5a2f3c;
case 0x5a2f41:c.instructions+=1;goto B5a2f41;
case 0x5a2f43:goto L5a2f43;
case 0x5a2f48:c.instructions+=1;goto B5a2f48;
case 0x5a2f4a:goto L5a2f4a;
case 0x5a2f4d:c.instructions+=1;goto B5a2f4d;
case 0x5a2f52:goto L5a2f52;
case 0x5a2f54:c.instructions+=1;goto B5a2f54;
case 0x5a2f56:goto L5a2f56;
case 0x5a2f59:c.instructions+=6;goto B5a2f59;
case 0x5a2f5c:c.instructions+=5;goto B5a2f5c;
case 0x5a2f60:c.instructions+=4;goto B5a2f60;
case 0x5a2f62:c.instructions+=3;goto B5a2f62;
case 0x5a2f63:c.instructions+=2;goto B5a2f63;
case 0x5a2f64:c.instructions+=1;goto B5a2f64;
case 0x5a2f69:goto L5a2f69;
case 0x5a2f6d:c.instructions+=12;goto B5a2f6d;
case 0x5a2f71:c.instructions+=11;goto B5a2f71;
case 0x5a2f72:c.instructions+=10;goto B5a2f72;
case 0x5a2f76:c.instructions+=9;goto B5a2f76;
case 0x5a2f7b:c.instructions+=8;goto B5a2f7b;
case 0x5a2f7f:c.instructions+=7;goto B5a2f7f;
case 0x5a2f82:c.instructions+=6;goto B5a2f82;
case 0x5a2f85:c.instructions+=5;goto B5a2f85;
case 0x5a2f88:c.instructions+=4;goto B5a2f88;
case 0x5a2f8d:c.instructions+=3;goto B5a2f8d;
case 0x5a2f91:c.instructions+=2;goto B5a2f91;
case 0x5a2f95:c.instructions+=1;goto B5a2f95;
case 0x5a2f9b:goto L5a2f9b;
case 0x5a2f9e:c.instructions+=11;goto B5a2f9e;
case 0x5a2fa4:c.instructions+=10;goto B5a2fa4;
case 0x5a2faa:c.instructions+=9;goto B5a2faa;
case 0x5a2fad:c.instructions+=8;goto B5a2fad;
case 0x5a2fb3:c.instructions+=7;goto B5a2fb3;
case 0x5a2fb4:c.instructions+=6;goto B5a2fb4;
case 0x5a2fba:c.instructions+=5;goto B5a2fba;
case 0x5a2fbb:c.instructions+=4;goto B5a2fbb;
case 0x5a2fbc:c.instructions+=3;goto B5a2fbc;
case 0x5a2fbe:c.instructions+=2;goto B5a2fbe;
case 0x5a2fbf:c.instructions+=1;goto B5a2fbf;
case 0x5a2fd0:goto L5a2fd0;
case 0x5a2fd1:c.instructions+=12;goto B5a2fd1;
case 0x5a2fd3:c.instructions+=11;goto B5a2fd3;
case 0x5a2fd6:c.instructions+=10;goto B5a2fd6;
case 0x5a2fd9:c.instructions+=9;goto B5a2fd9;
case 0x5a2fda:c.instructions+=8;goto B5a2fda;
case 0x5a2fdb:c.instructions+=7;goto B5a2fdb;
case 0x5a2fdd:c.instructions+=6;goto B5a2fdd;
case 0x5a2fe0:c.instructions+=5;goto B5a2fe0;
case 0x5a2fe3:c.instructions+=4;goto B5a2fe3;
case 0x5a2fe6:c.instructions+=3;goto B5a2fe6;
case 0x5a2fe8:c.instructions+=2;goto B5a2fe8;
case 0x5a2fe9:c.instructions+=1;goto B5a2fe9;
case 0x5a2fef:goto L5a2fef;
case 0x5a2ff2:c.instructions+=3;goto B5a2ff2;
case 0x5a2ff8:c.instructions+=2;goto B5a2ff8;
case 0x5a2ffa:c.instructions+=1;goto B5a2ffa;
default:missing_instruction(c.pc);}
B5a2001:L5a2001:{c.instructions+=6;NFSU2_TR(0x5a2001);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a2002:{NFSU2_TR(0x5a2002);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a2003:{NFSU2_TR(0x5a2003);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a2004:{NFSU2_TR(0x5a2004);
__builtin_memmove((R+16),(R+20),4);
}
B5a2006:{NFSU2_TR(0x5a2006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a2007:{NFSU2_TR(0x5a2007);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a2010:L5a2010:{c.instructions+=21;NFSU2_TR(0x5a2010);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2014:{NFSU2_TR(0x5a2014);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5a2017:{NFSU2_TR(0x5a2017);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B5a201a:{NFSU2_TR(0x5a201a);
u8 U[14];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
}
B5a201f:{NFSU2_TR(0x5a201f);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5a2023:{NFSU2_TR(0x5a2023);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2027:{NFSU2_TR(0x5a2027);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a202b:{NFSU2_TR(0x5a202b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5a202f:{NFSU2_TR(0x5a202f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a2033:{NFSU2_TR(0x5a2033);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5a2037:{NFSU2_TR(0x5a2037);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a203b:{NFSU2_TR(0x5a203b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5a203f:{NFSU2_TR(0x5a203f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a2043:{NFSU2_TR(0x5a2043);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2046:{NFSU2_TR(0x5a2046);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2049:{NFSU2_TR(0x5a2049);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a204c:{NFSU2_TR(0x5a204c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a204e:{NFSU2_TR(0x5a204e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2051:{NFSU2_TR(0x5a2051);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2054:{NFSU2_TR(0x5a2054);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2057:{NFSU2_TR(0x5a2057);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a2060:L5a2060:{c.instructions+=18;NFSU2_TR(0x5a2060);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2061:{NFSU2_TR(0x5a2061);
__builtin_memmove((R+20),(R+16),4);
}
B5a2063:{NFSU2_TR(0x5a2063);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a2066:{NFSU2_TR(0x5a2066);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5a2069:{NFSU2_TR(0x5a2069);
__builtin_memmove((R+8),(R+4),4);
}
B5a206b:{NFSU2_TR(0x5a206b);
{u32 ea_=u32(r4(R+8)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2071:{NFSU2_TR(0x5a2071);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2072:{NFSU2_TR(0x5a2072);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a2078:{NFSU2_TR(0x5a2078);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2079:{NFSU2_TR(0x5a2079);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5a207b:{NFSU2_TR(0x5a207b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a207c:{NFSU2_TR(0x5a207c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a207f:{NFSU2_TR(0x5a207f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a2081:{NFSU2_TR(0x5a2081);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2085:{NFSU2_TR(0x5a2085);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xfcdc84dcull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a208d:{NFSU2_TR(0x5a208d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2090:{NFSU2_TR(0x5a2090);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2094:{NFSU2_TR(0x5a2094);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a20ad;}}
}
B5a2096:L5a2096:{c.instructions+=3;NFSU2_TR(0x5a2096);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a209c:{NFSU2_TR(0x5a209c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a209e:{NFSU2_TR(0x5a209e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a20ad;}}
}
B5a20a0:L5a20a0:{c.instructions+=6;NFSU2_TR(0x5a20a0);
__builtin_memmove((R+0),(R+28),4);
}
B5a20a2:{NFSU2_TR(0x5a20a2);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5a20a3:{NFSU2_TR(0x5a20a3);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5a20a5:{NFSU2_TR(0x5a20a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a20a9:{NFSU2_TR(0x5a20a9);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5a20ab:{NFSU2_TR(0x5a20ab);
__builtin_memmove((R+28),(R+0),4);
}
B5a20ad:L5a20ad:{c.instructions+=4;NFSU2_TR(0x5a20ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a20b0:{NFSU2_TR(0x5a20b0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5a20b2:{NFSU2_TR(0x5a20b2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a20b5:{NFSU2_TR(0x5a20b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5a21e7;}}
}
B5a20bb:L5a20bb:{c.instructions+=2;NFSU2_TR(0x5a20bb);
w4(R+4,u32(0x3ull));
}
B5a20c0:{NFSU2_TR(0x5a20c0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x34ull))));
}
B5a20c3:L5a20c3:{c.instructions+=12;NFSU2_TR(0x5a20c3);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a20c6:{NFSU2_TR(0x5a20c6);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a20c8:{NFSU2_TR(0x5a20c8);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a20cb:{NFSU2_TR(0x5a20cb);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a20ce:{NFSU2_TR(0x5a20ce);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a20d0:{NFSU2_TR(0x5a20d0);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a20d3:{NFSU2_TR(0x5a20d3);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a20d5:{NFSU2_TR(0x5a20d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a20d7:{NFSU2_TR(0x5a20d7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a20db:{NFSU2_TR(0x5a20db);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a20dd:{NFSU2_TR(0x5a20dd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a20e0:{NFSU2_TR(0x5a20e0);
if(r1(R+518)){{goto L5a20f3;}}
}
B5a20e2:L5a20e2:{c.instructions+=5;NFSU2_TR(0x5a20e2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a20e6:{NFSU2_TR(0x5a20e6);
{u32 ea_=u32(u32(8003692u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a20ec:{NFSU2_TR(0x5a20ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a20ee:{NFSU2_TR(0x5a20ee);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a20f1:{NFSU2_TR(0x5a20f1);
if(r1(R+514)){{goto L5a2100;}}
}
B5a20f3:L5a20f3:{c.instructions+=4;NFSU2_TR(0x5a20f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a20f6:{NFSU2_TR(0x5a20f6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a20fa:{NFSU2_TR(0x5a20fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a20fe:{NFSU2_TR(0x5a20fe);
{goto L5a2102;}
}
B5a2100:L5a2100:{c.instructions+=1;NFSU2_TR(0x5a2100);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2102:L5a2102:{c.instructions+=12;NFSU2_TR(0x5a2102);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2105:{NFSU2_TR(0x5a2105);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2108:{NFSU2_TR(0x5a2108);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a210b:{NFSU2_TR(0x5a210b);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a210e:{NFSU2_TR(0x5a210e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2110:{NFSU2_TR(0x5a2110);
{u32 ea_=u32(r4(R+8)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2113:{NFSU2_TR(0x5a2113);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2115:{NFSU2_TR(0x5a2115);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2117:{NFSU2_TR(0x5a2117);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a211b:{NFSU2_TR(0x5a211b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a211d:{NFSU2_TR(0x5a211d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2120:{NFSU2_TR(0x5a2120);
if(r1(R+518)){{goto L5a2133;}}
}
B5a2122:L5a2122:{c.instructions+=5;NFSU2_TR(0x5a2122);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2126:{NFSU2_TR(0x5a2126);
{u32 ea_=u32(u32(8003692u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a212c:{NFSU2_TR(0x5a212c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a212e:{NFSU2_TR(0x5a212e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a2131:{NFSU2_TR(0x5a2131);
if(r1(R+514)){{goto L5a2140;}}
}
B5a2133:L5a2133:{c.instructions+=4;NFSU2_TR(0x5a2133);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a2136:{NFSU2_TR(0x5a2136);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a213a:{NFSU2_TR(0x5a213a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a213e:{NFSU2_TR(0x5a213e);
{goto L5a2142;}
}
B5a2140:L5a2140:{c.instructions+=1;NFSU2_TR(0x5a2140);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2142:L5a2142:{c.instructions+=12;NFSU2_TR(0x5a2142);
{u32 ea_=u32(r4(R+8)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2145:{NFSU2_TR(0x5a2145);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2148:{NFSU2_TR(0x5a2148);
{u32 ea_=u32(r4(R+8)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a214b:{NFSU2_TR(0x5a214b);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a214e:{NFSU2_TR(0x5a214e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2150:{NFSU2_TR(0x5a2150);
{u32 ea_=u32(r4(R+8)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2153:{NFSU2_TR(0x5a2153);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2155:{NFSU2_TR(0x5a2155);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2157:{NFSU2_TR(0x5a2157);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a215b:{NFSU2_TR(0x5a215b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a215d:{NFSU2_TR(0x5a215d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2160:{NFSU2_TR(0x5a2160);
if(r1(R+518)){{goto L5a2173;}}
}
B5a2162:L5a2162:{c.instructions+=5;NFSU2_TR(0x5a2162);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2166:{NFSU2_TR(0x5a2166);
{u32 ea_=u32(u32(8003692u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a216c:{NFSU2_TR(0x5a216c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a216e:{NFSU2_TR(0x5a216e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a2171:{NFSU2_TR(0x5a2171);
if(r1(R+514)){{goto L5a2180;}}
}
B5a2173:L5a2173:{c.instructions+=4;NFSU2_TR(0x5a2173);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a2176:{NFSU2_TR(0x5a2176);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a217a:{NFSU2_TR(0x5a217a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a217e:{NFSU2_TR(0x5a217e);
{goto L5a2182;}
}
B5a2180:L5a2180:{c.instructions+=1;NFSU2_TR(0x5a2180);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2182:L5a2182:{c.instructions+=12;NFSU2_TR(0x5a2182);
{u32 ea_=u32(r4(R+8)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2188:{NFSU2_TR(0x5a2188);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a218b:{NFSU2_TR(0x5a218b);
{u32 ea_=u32(r4(R+8)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2191:{NFSU2_TR(0x5a2191);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2194:{NFSU2_TR(0x5a2194);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2196:{NFSU2_TR(0x5a2196);
{u32 ea_=u32(r4(R+8)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a219c:{NFSU2_TR(0x5a219c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a219e:{NFSU2_TR(0x5a219e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a21a0:{NFSU2_TR(0x5a21a0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a21a4:{NFSU2_TR(0x5a21a4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a21a6:{NFSU2_TR(0x5a21a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a21a9:{NFSU2_TR(0x5a21a9);
if(r1(R+518)){{goto L5a21bc;}}
}
B5a21ab:L5a21ab:{c.instructions+=5;NFSU2_TR(0x5a21ab);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a21af:{NFSU2_TR(0x5a21af);
{u32 ea_=u32(u32(8003692u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a21b5:{NFSU2_TR(0x5a21b5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a21b7:{NFSU2_TR(0x5a21b7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a21ba:{NFSU2_TR(0x5a21ba);
if(r1(R+514)){{goto L5a21c9;}}
}
B5a21bc:L5a21bc:{c.instructions+=4;NFSU2_TR(0x5a21bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a21bf:{NFSU2_TR(0x5a21bf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a21c3:{NFSU2_TR(0x5a21c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a21c7:{NFSU2_TR(0x5a21c7);
{goto L5a21cb;}
}
B5a21c9:L5a21c9:{c.instructions+=1;NFSU2_TR(0x5a21c9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a21cb:L5a21cb:{c.instructions+=5;NFSU2_TR(0x5a21cb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5a21ce:{NFSU2_TR(0x5a21ce);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5a21d1:{NFSU2_TR(0x5a21d1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xc0ull))));
}
B5a21d7:{NFSU2_TR(0x5a21d7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a21d9:{NFSU2_TR(0x5a21d9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a20c3u);}goto L5a20c3;}}
}
B5a21df:L5a21df:{c.instructions+=2;NFSU2_TR(0x5a21df);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a21e3:{NFSU2_TR(0x5a21e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a21e7:L5a21e7:{c.instructions+=2;NFSU2_TR(0x5a21e7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a21e9:{NFSU2_TR(0x5a21e9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5a2240;}}
}
B5a21eb:L5a21eb:{c.instructions+=4;NFSU2_TR(0x5a21eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5a21ee:{NFSU2_TR(0x5a21ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5a21f1:{NFSU2_TR(0x5a21f1);
u8 U[12];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5a21f5:{NFSU2_TR(0x5a21f5);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B5a21f7:L5a21f7:{c.instructions+=12;NFSU2_TR(0x5a21f7);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a21fa:{NFSU2_TR(0x5a21fa);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a21fc:{NFSU2_TR(0x5a21fc);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a21ff:{NFSU2_TR(0x5a21ff);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2202:{NFSU2_TR(0x5a2202);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2204:{NFSU2_TR(0x5a2204);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2206:{NFSU2_TR(0x5a2206);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2209:{NFSU2_TR(0x5a2209);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a220b:{NFSU2_TR(0x5a220b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a220f:{NFSU2_TR(0x5a220f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a2211:{NFSU2_TR(0x5a2211);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2214:{NFSU2_TR(0x5a2214);
if(r1(R+518)){{goto L5a2227;}}
}
B5a2216:L5a2216:{c.instructions+=5;NFSU2_TR(0x5a2216);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a221a:{NFSU2_TR(0x5a221a);
{u32 ea_=u32(u32(8003692u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a2220:{NFSU2_TR(0x5a2220);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a2222:{NFSU2_TR(0x5a2222);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a2225:{NFSU2_TR(0x5a2225);
if(r1(R+514)){{goto L5a2234;}}
}
B5a2227:L5a2227:{c.instructions+=4;NFSU2_TR(0x5a2227);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffecull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a222a:{NFSU2_TR(0x5a222a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a222e:{NFSU2_TR(0x5a222e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2232:{NFSU2_TR(0x5a2232);
{goto L5a2236;}
}
B5a2234:L5a2234:{c.instructions+=1;NFSU2_TR(0x5a2234);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2236:L5a2236:{c.instructions+=3;NFSU2_TR(0x5a2236);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B5a2239:{NFSU2_TR(0x5a2239);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5a223a:{NFSU2_TR(0x5a223a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a21f7u);}goto L5a21f7;}}
}
B5a223c:L5a223c:{c.instructions+=1;NFSU2_TR(0x5a223c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2240:L5a2240:{c.instructions+=3;NFSU2_TR(0x5a2240);
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
B5a2242:{NFSU2_TR(0x5a2242);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2245:{NFSU2_TR(0x5a2245);
if(r1(R+518)){{goto L5a226a;}}
}
B5a2247:L5a2247:{c.instructions+=10;NFSU2_TR(0x5a2247);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a224a:{NFSU2_TR(0x5a224a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a224d:{NFSU2_TR(0x5a224d);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2250:{NFSU2_TR(0x5a2250);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2253:{NFSU2_TR(0x5a2253);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a2255:{NFSU2_TR(0x5a2255);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a225c:{NFSU2_TR(0x5a225c);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a225f:{NFSU2_TR(0x5a225f);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2262:{NFSU2_TR(0x5a2262);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5a2266:{NFSU2_TR(0x5a2266);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a226a:L5a226a:{c.instructions+=6;NFSU2_TR(0x5a226a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a226b:{NFSU2_TR(0x5a226b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a226c:{NFSU2_TR(0x5a226c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a226d:{NFSU2_TR(0x5a226d);
__builtin_memmove((R+16),(R+20),4);
}
B5a226f:{NFSU2_TR(0x5a226f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a2270:{NFSU2_TR(0x5a2270);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a2280:L5a2280:{c.instructions+=15;NFSU2_TR(0x5a2280);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2281:{NFSU2_TR(0x5a2281);
__builtin_memmove((R+20),(R+16),4);
}
B5a2283:{NFSU2_TR(0x5a2283);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a2286:{NFSU2_TR(0x5a2286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B5a2289:{NFSU2_TR(0x5a2289);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a228c:{NFSU2_TR(0x5a228c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a228d:{NFSU2_TR(0x5a228d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a228e:{NFSU2_TR(0x5a228e);
__builtin_memmove((R+24),(R+4),4);
}
B5a2290:{NFSU2_TR(0x5a2290);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2293:{NFSU2_TR(0x5a2293);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2294:{NFSU2_TR(0x5a2294);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2295:{NFSU2_TR(0x5a2295);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a2299:{NFSU2_TR(0x5a2299);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a229a:{NFSU2_TR(0x5a229a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5a229c:{NFSU2_TR(0x5a229c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a22a1ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5a22a1:L5a22a1:{c.instructions+=9;NFSU2_TR(0x5a22a1);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a22a4:{NFSU2_TR(0x5a22a4);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a22a7:{NFSU2_TR(0x5a22a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5a22aa:{NFSU2_TR(0x5a22aa);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a22ad:{NFSU2_TR(0x5a22ad);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a22b1:{NFSU2_TR(0x5a22b1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a22b7:{NFSU2_TR(0x5a22b7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a22b9:{NFSU2_TR(0x5a22b9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a22bc:{NFSU2_TR(0x5a22bc);
if(r1(R+514)){{goto L5a22c9;}}
}
B5a22be:L5a22be:{c.instructions+=4;NFSU2_TR(0x5a22be);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5a22c0:{NFSU2_TR(0x5a22c0);
w4(R+28,u32(0x1ull));
}
B5a22c5:{NFSU2_TR(0x5a22c5);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a22c7:{NFSU2_TR(0x5a22c7);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5a22c9:L5a22c9:{c.instructions+=5;NFSU2_TR(0x5a22c9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a22cd:{NFSU2_TR(0x5a22cd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a22d3:{NFSU2_TR(0x5a22d3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a22d5:{NFSU2_TR(0x5a22d5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a22d8:{NFSU2_TR(0x5a22d8);
if(r1(R+514)){{goto L5a22e3;}}
}
B5a22da:L5a22da:{c.instructions+=4;NFSU2_TR(0x5a22da);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a22dc:{NFSU2_TR(0x5a22dc);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x2ull))));
}
B5a22df:{NFSU2_TR(0x5a22df);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a22e1:{NFSU2_TR(0x5a22e1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a22e3:L5a22e3:{c.instructions+=5;NFSU2_TR(0x5a22e3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a22e7:{NFSU2_TR(0x5a22e7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a22ed:{NFSU2_TR(0x5a22ed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a22ef:{NFSU2_TR(0x5a22ef);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a22f2:{NFSU2_TR(0x5a22f2);
if(r1(R+514)){{goto L5a22f9;}}
}
B5a22f4:L5a22f4:{c.instructions+=2;NFSU2_TR(0x5a22f4);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x4ull))));
}
B5a22f7:{NFSU2_TR(0x5a22f7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a22f9:L5a22f9:{c.instructions+=18;NFSU2_TR(0x5a22f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a22fc:{NFSU2_TR(0x5a22fc);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5a22fe:{NFSU2_TR(0x5a22fe);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a2301:{NFSU2_TR(0x5a2301);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a2305:{NFSU2_TR(0x5a2305);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2306:{NFSU2_TR(0x5a2306);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2307:{NFSU2_TR(0x5a2307);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a230b:{NFSU2_TR(0x5a230b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a230f:{NFSU2_TR(0x5a230f);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2312:{NFSU2_TR(0x5a2312);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2313:{NFSU2_TR(0x5a2313);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a2315:{NFSU2_TR(0x5a2315);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2319:{NFSU2_TR(0x5a2319);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a231c:{NFSU2_TR(0x5a231c);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5a231e:{NFSU2_TR(0x5a231e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2322:{NFSU2_TR(0x5a2322);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5a2324:{NFSU2_TR(0x5a2324);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2326:{NFSU2_TR(0x5a2326);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a232bull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5a232b:L5a232b:{c.instructions+=15;NFSU2_TR(0x5a232b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a232e:{NFSU2_TR(0x5a232e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2332:{NFSU2_TR(0x5a2332);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2336:{NFSU2_TR(0x5a2336);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2339:{NFSU2_TR(0x5a2339);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a233d:{NFSU2_TR(0x5a233d);
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
B5a2340:{NFSU2_TR(0x5a2340);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2343:{NFSU2_TR(0x5a2343);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2346:{NFSU2_TR(0x5a2346);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a234d:{NFSU2_TR(0x5a234d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a2351:{NFSU2_TR(0x5a2351);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a2352:{NFSU2_TR(0x5a2352);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a2353:{NFSU2_TR(0x5a2353);
__builtin_memmove((R+16),(R+20),4);
}
B5a2355:{NFSU2_TR(0x5a2355);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a2356:{NFSU2_TR(0x5a2356);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a2360:L5a2360:{c.instructions+=19;NFSU2_TR(0x5a2360);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2361:{NFSU2_TR(0x5a2361);
__builtin_memmove((R+20),(R+16),4);
}
B5a2363:{NFSU2_TR(0x5a2363);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a2366:{NFSU2_TR(0x5a2366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B5a2369:{NFSU2_TR(0x5a2369);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a236c:{NFSU2_TR(0x5a236c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a236d:{NFSU2_TR(0x5a236d);
__builtin_memmove((R+24),(R+4),4);
}
B5a236f:{NFSU2_TR(0x5a236f);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2372:{NFSU2_TR(0x5a2372);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2375:{NFSU2_TR(0x5a2375);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a2379:{NFSU2_TR(0x5a2379);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a237a:{NFSU2_TR(0x5a237a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a237e:{NFSU2_TR(0x5a237e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2382:{NFSU2_TR(0x5a2382);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2385:{NFSU2_TR(0x5a2385);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2386:{NFSU2_TR(0x5a2386);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a238a:{NFSU2_TR(0x5a238a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a238e:{NFSU2_TR(0x5a238e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a238f:{NFSU2_TR(0x5a238f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a2394ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5a2394:L5a2394:{c.instructions+=15;NFSU2_TR(0x5a2394);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2397:{NFSU2_TR(0x5a2397);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a239b:{NFSU2_TR(0x5a239b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a239f:{NFSU2_TR(0x5a239f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a23a2:{NFSU2_TR(0x5a23a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a23a6:{NFSU2_TR(0x5a23a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a23a9:{NFSU2_TR(0x5a23a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a23ac:{NFSU2_TR(0x5a23ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a23b3:{NFSU2_TR(0x5a23b3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5a23b7:{NFSU2_TR(0x5a23b7);
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
B5a23ba:{NFSU2_TR(0x5a23ba);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a23be:{NFSU2_TR(0x5a23be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a23bf:{NFSU2_TR(0x5a23bf);
__builtin_memmove((R+16),(R+20),4);
}
B5a23c1:{NFSU2_TR(0x5a23c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a23c2:{NFSU2_TR(0x5a23c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a23d0:L5a23d0:{c.instructions+=15;NFSU2_TR(0x5a23d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a23d1:{NFSU2_TR(0x5a23d1);
__builtin_memmove((R+20),(R+16),4);
}
B5a23d3:{NFSU2_TR(0x5a23d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a23d6:{NFSU2_TR(0x5a23d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B5a23d9:{NFSU2_TR(0x5a23d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a23dc:{NFSU2_TR(0x5a23dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a23dd:{NFSU2_TR(0x5a23dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a23de:{NFSU2_TR(0x5a23de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a23df:{NFSU2_TR(0x5a23df);
__builtin_memmove((R+28),(R+4),4);
}
B5a23e1:{NFSU2_TR(0x5a23e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a23e4:{NFSU2_TR(0x5a23e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a23e5:{NFSU2_TR(0x5a23e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a23e6:{NFSU2_TR(0x5a23e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a23ea:{NFSU2_TR(0x5a23ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a23eb:{NFSU2_TR(0x5a23eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a23f0ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5a23f0:L5a23f0:{c.instructions+=37;NFSU2_TR(0x5a23f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a23f3:{NFSU2_TR(0x5a23f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5a23f6:{NFSU2_TR(0x5a23f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5a23f9:{NFSU2_TR(0x5a23f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7a1930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a23ff:{NFSU2_TR(0x5a23ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7a1934ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a2405:{NFSU2_TR(0x5a2405);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5a2408:{NFSU2_TR(0x5a2408);
{u32 ea_=u32(r4(R+12)+r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a240c:{NFSU2_TR(0x5a240c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5a240f:{NFSU2_TR(0x5a240f);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2413:{NFSU2_TR(0x5a2413);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2417:{NFSU2_TR(0x5a2417);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a2419:{NFSU2_TR(0x5a2419);
u8 U[12];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5a241d:{NFSU2_TR(0x5a241d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a241f:{NFSU2_TR(0x5a241f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2423:{NFSU2_TR(0x5a2423);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5a2425:{NFSU2_TR(0x5a2425);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5a2428:{NFSU2_TR(0x5a2428);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5a242a:{NFSU2_TR(0x5a242a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a242e:{NFSU2_TR(0x5a242e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2430:{NFSU2_TR(0x5a2430);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a2432:{NFSU2_TR(0x5a2432);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5a2434:{NFSU2_TR(0x5a2434);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2436:{NFSU2_TR(0x5a2436);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5a243c:{NFSU2_TR(0x5a243c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a2440:{NFSU2_TR(0x5a2440);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2442:{NFSU2_TR(0x5a2442);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2446:{NFSU2_TR(0x5a2446);
{u32 ea_=u32(r4(R+12)+r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a244a:{NFSU2_TR(0x5a244a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a244e:{NFSU2_TR(0x5a244e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2450:{NFSU2_TR(0x5a2450);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a2452:{NFSU2_TR(0x5a2452);
{u32 ea_=u32(r4(R+12)+r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2456:{NFSU2_TR(0x5a2456);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a2458:{NFSU2_TR(0x5a2458);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a245c:{NFSU2_TR(0x5a245c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a2460:{NFSU2_TR(0x5a2460);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a2462:{NFSU2_TR(0x5a2462);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2465:{NFSU2_TR(0x5a2465);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a25c2;}}
}
B5a246b:L5a246b:{c.instructions+=3;NFSU2_TR(0x5a246b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a246f:{NFSU2_TR(0x5a246f);
{u32 ea_=u32(u32(8003700u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2475:{NFSU2_TR(0x5a2475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a247aull));
TAIL_STATIC(0x75bed4u,75b);
}
B5a247a:L5a247a:{c.instructions+=7;NFSU2_TR(0x5a247a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a247e:{NFSU2_TR(0x5a247e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a2484:{NFSU2_TR(0x5a2484);
__builtin_memmove((R+4),(R+0),4);
}
B5a2486:{NFSU2_TR(0x5a2486);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a248a:{NFSU2_TR(0x5a248a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a248c:{NFSU2_TR(0x5a248c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a248f:{NFSU2_TR(0x5a248f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a24a4;}}
}
B5a2491:L5a2491:{c.instructions+=2;NFSU2_TR(0x5a2491);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a2494:{NFSU2_TR(0x5a2494);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a249f;}}
}
B5a2496:L5a2496:{c.instructions+=2;NFSU2_TR(0x5a2496);
w4(R+4,u32(0x7ull));
}
B5a249b:{NFSU2_TR(0x5a249b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a249f:L5a249f:{c.instructions+=2;NFSU2_TR(0x5a249f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a24a2:{NFSU2_TR(0x5a24a2);
{goto L5a24b5;}
}
B5a24a4:L5a24a4:{c.instructions+=2;NFSU2_TR(0x5a24a4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfffffff9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffff9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a24a7:{NFSU2_TR(0x5a24a7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5a24b2;}}
}
B5a24a9:L5a24a9:{c.instructions+=2;NFSU2_TR(0x5a24a9);
w4(R+4,u32(0xfffffff9ull));
}
B5a24ae:{NFSU2_TR(0x5a24ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a24b2:L5a24b2:{c.instructions+=1;NFSU2_TR(0x5a24b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a24b5:L5a24b5:{c.instructions+=32;NFSU2_TR(0x5a24b5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a24b9:{NFSU2_TR(0x5a24b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a24bd:{NFSU2_TR(0x5a24bd);
{u32 ea_=u32(u32(8003696u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a24c3:{NFSU2_TR(0x5a24c3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a24c7:{NFSU2_TR(0x5a24c7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a24cb:{NFSU2_TR(0x5a24cb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a24d1:{NFSU2_TR(0x5a24d1);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a24d3:{NFSU2_TR(0x5a24d3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a24d7:{NFSU2_TR(0x5a24d7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a24db:{NFSU2_TR(0x5a24db);
{u32 ea_=u32(u32(8003696u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a24e1:{NFSU2_TR(0x5a24e1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a24e5:{NFSU2_TR(0x5a24e5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a24e9:{NFSU2_TR(0x5a24e9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a24ef:{NFSU2_TR(0x5a24ef);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a24f1:{NFSU2_TR(0x5a24f1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a24f5:{NFSU2_TR(0x5a24f5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a24f9:{NFSU2_TR(0x5a24f9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a24fb:{NFSU2_TR(0x5a24fb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a24ff:{NFSU2_TR(0x5a24ff);
{u32 ea_=u32(r4(R+12)+r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2503:{NFSU2_TR(0x5a2503);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2505:{NFSU2_TR(0x5a2505);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2509:{NFSU2_TR(0x5a2509);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a250b:{NFSU2_TR(0x5a250b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a250f:{NFSU2_TR(0x5a250f);
{u32 ea_=u32(r4(R+12)+r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2513:{NFSU2_TR(0x5a2513);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2515:{NFSU2_TR(0x5a2515);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5a2517:{NFSU2_TR(0x5a2517);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a2519:{NFSU2_TR(0x5a2519);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a251b:{NFSU2_TR(0x5a251b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a2521:{NFSU2_TR(0x5a2521);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a2524:{NFSU2_TR(0x5a2524);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a2526:{NFSU2_TR(0x5a2526);
if(r1(R+514)){{goto L5a2575;}}
}
B5a2528:L5a2528:{c.instructions+=4;NFSU2_TR(0x5a2528);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a252b:{NFSU2_TR(0x5a252b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a252f:{NFSU2_TR(0x5a252f);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2532:{NFSU2_TR(0x5a2532);
if(r1(R+514)){{goto L5a2551;}}
}
B5a2534:L5a2534:{c.instructions+=8;NFSU2_TR(0x5a2534);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a2536:{NFSU2_TR(0x5a2536);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a253a:{NFSU2_TR(0x5a253a);
w4(R+24,u32(0x18ull));
}
B5a253f:{NFSU2_TR(0x5a253f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2543:{NFSU2_TR(0x5a2543);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B5a2545:{NFSU2_TR(0x5a2545);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2548:{NFSU2_TR(0x5a2548);
{u32 ea_=u32(r4(R+12)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a254c:{NFSU2_TR(0x5a254c);
{goto L5a26e8;}
}
B5a2551:L5a2551:{c.instructions+=4;NFSU2_TR(0x5a2551);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2555:{NFSU2_TR(0x5a2555);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a2558:{NFSU2_TR(0x5a2558);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x8000003full))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B5a255e:{NFSU2_TR(0x5a255e);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5a2565;}}
}
B5a2560:L5a2560:{c.instructions+=3;NFSU2_TR(0x5a2560);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B5a2561:{NFSU2_TR(0x5a2561);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffc0ull))));
}
B5a2564:{NFSU2_TR(0x5a2564);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5a2565:L5a2565:{c.instructions+=4;NFSU2_TR(0x5a2565);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2569:{NFSU2_TR(0x5a2569);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a256c:{NFSU2_TR(0x5a256c);
{u32 ea_=u32(r4(R+12)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2570:{NFSU2_TR(0x5a2570);
{goto L5a26e8;}
}
B5a2575:L5a2575:{c.instructions+=4;NFSU2_TR(0x5a2575);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a2578:{NFSU2_TR(0x5a2578);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a257c:{NFSU2_TR(0x5a257c);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a257f:{NFSU2_TR(0x5a257f);
if(r1(R+514)){{goto L5a259e;}}
}
B5a2581:L5a2581:{c.instructions+=8;NFSU2_TR(0x5a2581);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a2583:{NFSU2_TR(0x5a2583);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2587:{NFSU2_TR(0x5a2587);
w4(R+24,u32(0x18ull));
}
B5a258c:{NFSU2_TR(0x5a258c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2590:{NFSU2_TR(0x5a2590);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B5a2592:{NFSU2_TR(0x5a2592);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2595:{NFSU2_TR(0x5a2595);
{u32 ea_=u32(r4(R+12)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2599:{NFSU2_TR(0x5a2599);
{goto L5a26e8;}
}
B5a259e:L5a259e:{c.instructions+=4;NFSU2_TR(0x5a259e);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a25a2:{NFSU2_TR(0x5a25a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a25a5:{NFSU2_TR(0x5a25a5);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x8000003full))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B5a25ab:{NFSU2_TR(0x5a25ab);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5a25b2;}}
}
B5a25ad:L5a25ad:{c.instructions+=3;NFSU2_TR(0x5a25ad);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B5a25ae:{NFSU2_TR(0x5a25ae);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffc0ull))));
}
B5a25b1:{NFSU2_TR(0x5a25b1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5a25b2:L5a25b2:{c.instructions+=4;NFSU2_TR(0x5a25b2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a25b6:{NFSU2_TR(0x5a25b6);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a25b9:{NFSU2_TR(0x5a25b9);
{u32 ea_=u32(r4(R+12)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a25bd:{NFSU2_TR(0x5a25bd);
{goto L5a26e8;}
}
B5a25c2:L5a25c2:{c.instructions+=4;NFSU2_TR(0x5a25c2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a25c4:{NFSU2_TR(0x5a25c4);
{u32 ea_=u32(u32(8003700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a25ca:{NFSU2_TR(0x5a25ca);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a25cc:{NFSU2_TR(0x5a25cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a25d1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5a25d1:L5a25d1:{c.instructions+=6;NFSU2_TR(0x5a25d1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a25d7:{NFSU2_TR(0x5a25d7);
__builtin_memmove((R+4),(R+0),4);
}
B5a25d9:{NFSU2_TR(0x5a25d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a25dd:{NFSU2_TR(0x5a25dd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a25df:{NFSU2_TR(0x5a25df);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a25e2:{NFSU2_TR(0x5a25e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a25f7;}}
}
B5a25e4:L5a25e4:{c.instructions+=2;NFSU2_TR(0x5a25e4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a25e7:{NFSU2_TR(0x5a25e7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a25f2;}}
}
B5a25e9:L5a25e9:{c.instructions+=2;NFSU2_TR(0x5a25e9);
w4(R+4,u32(0x7ull));
}
B5a25ee:{NFSU2_TR(0x5a25ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a25f2:L5a25f2:{c.instructions+=2;NFSU2_TR(0x5a25f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a25f5:{NFSU2_TR(0x5a25f5);
{goto L5a2608;}
}
B5a25f7:L5a25f7:{c.instructions+=2;NFSU2_TR(0x5a25f7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfffffff9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffff9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a25fa:{NFSU2_TR(0x5a25fa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5a2605;}}
}
B5a25fc:L5a25fc:{c.instructions+=2;NFSU2_TR(0x5a25fc);
w4(R+4,u32(0xfffffff9ull));
}
B5a2601:{NFSU2_TR(0x5a2601);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2605:L5a2605:{c.instructions+=1;NFSU2_TR(0x5a2605);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a2608:L5a2608:{c.instructions+=29;NFSU2_TR(0x5a2608);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a260c:{NFSU2_TR(0x5a260c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2610:{NFSU2_TR(0x5a2610);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2614:{NFSU2_TR(0x5a2614);
{u32 ea_=u32(u32(8003696u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a261a:{NFSU2_TR(0x5a261a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a261c:{NFSU2_TR(0x5a261c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a261e:{NFSU2_TR(0x5a261e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a2624:{NFSU2_TR(0x5a2624);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a2626:{NFSU2_TR(0x5a2626);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a262a:{NFSU2_TR(0x5a262a);
{u32 ea_=u32(u32(8003696u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2630:{NFSU2_TR(0x5a2630);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a2634:{NFSU2_TR(0x5a2634);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2638:{NFSU2_TR(0x5a2638);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a263e:{NFSU2_TR(0x5a263e);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a2640:{NFSU2_TR(0x5a2640);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2644:{NFSU2_TR(0x5a2644);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2648:{NFSU2_TR(0x5a2648);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a264a:{NFSU2_TR(0x5a264a);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5a264c:{NFSU2_TR(0x5a264c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a264e:{NFSU2_TR(0x5a264e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2650:{NFSU2_TR(0x5a2650);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2654:{NFSU2_TR(0x5a2654);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2658:{NFSU2_TR(0x5a2658);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a265c:{NFSU2_TR(0x5a265c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a265e:{NFSU2_TR(0x5a265e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2660:{NFSU2_TR(0x5a2660);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5a2662:{NFSU2_TR(0x5a2662);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a2664:{NFSU2_TR(0x5a2664);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a2667:{NFSU2_TR(0x5a2667);
if(r1(R+514)){{goto L5a26ab;}}
}
B5a2669:L5a2669:{c.instructions+=6;NFSU2_TR(0x5a2669);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a266d:{NFSU2_TR(0x5a266d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a2673:{NFSU2_TR(0x5a2673);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2676:{NFSU2_TR(0x5a2676);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a2678:{NFSU2_TR(0x5a2678);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a267b:{NFSU2_TR(0x5a267b);
if(r1(R+514)){{goto L5a2693;}}
}
B5a267d:L5a267d:{c.instructions+=7;NFSU2_TR(0x5a267d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2681:{NFSU2_TR(0x5a2681);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a2683:{NFSU2_TR(0x5a2683);
{u32 ea_=u32(r4(R+12)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2687:{NFSU2_TR(0x5a2687);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a268a:{NFSU2_TR(0x5a268a);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a268d:{NFSU2_TR(0x5a268d);
{u32 ea_=u32(r4(R+0)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2691:{NFSU2_TR(0x5a2691);
{goto L5a26e8;}
}
B5a2693:L5a2693:{c.instructions+=7;NFSU2_TR(0x5a2693);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2697:{NFSU2_TR(0x5a2697);
{u32 ea_=u32(r4(R+12)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a269b:{NFSU2_TR(0x5a269b);
w4(R+24,u32(0x8ull));
}
B5a26a0:{NFSU2_TR(0x5a26a0);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a26a3:{NFSU2_TR(0x5a26a3);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B5a26a5:{NFSU2_TR(0x5a26a5);
{u32 ea_=u32(r4(R+0)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a26a9:{NFSU2_TR(0x5a26a9);
{goto L5a26e8;}
}
B5a26ab:L5a26ab:{c.instructions+=9;NFSU2_TR(0x5a26ab);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a26ad:{NFSU2_TR(0x5a26ad);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a26af:{NFSU2_TR(0x5a26af);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a26b3:{NFSU2_TR(0x5a26b3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a26b9:{NFSU2_TR(0x5a26b9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a26bd:{NFSU2_TR(0x5a26bd);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a26c0:{NFSU2_TR(0x5a26c0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a26c2:{NFSU2_TR(0x5a26c2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a26c5:{NFSU2_TR(0x5a26c5);
if(r1(R+514)){{goto L5a26ce;}}
}
B5a26c7:L5a26c7:{c.instructions+=3;NFSU2_TR(0x5a26c7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a26c9:{NFSU2_TR(0x5a26c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a26cc:{NFSU2_TR(0x5a26cc);
{goto L5a26d5;}
}
B5a26ce:L5a26ce:{c.instructions+=2;NFSU2_TR(0x5a26ce);
w4(R+24,u32(0x8ull));
}
B5a26d3:{NFSU2_TR(0x5a26d3);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B5a26d5:L5a26d5:{c.instructions+=5;NFSU2_TR(0x5a26d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a26d9:{NFSU2_TR(0x5a26d9);
{u32 ea_=u32(r4(R+12)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a26dd:{NFSU2_TR(0x5a26dd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a26e1:{NFSU2_TR(0x5a26e1);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a26e4:{NFSU2_TR(0x5a26e4);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a26e8:L5a26e8:{c.instructions+=8;NFSU2_TR(0x5a26e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a26ec:{NFSU2_TR(0x5a26ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7a1938ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a26f2:{NFSU2_TR(0x5a26f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5a26f5:{NFSU2_TR(0x5a26f5);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a26f9:{NFSU2_TR(0x5a26f9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a26ff:{NFSU2_TR(0x5a26ff);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a2701:{NFSU2_TR(0x5a2701);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2704:{NFSU2_TR(0x5a2704);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a2712;}}
}
B5a2706:L5a2706:{c.instructions+=4;NFSU2_TR(0x5a2706);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2709:{NFSU2_TR(0x5a2709);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B5a270c:{NFSU2_TR(0x5a270c);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5a2710:{NFSU2_TR(0x5a2710);
{goto L5a271b;}
}
B5a2712:L5a2712:{c.instructions+=3;NFSU2_TR(0x5a2712);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2715:{NFSU2_TR(0x5a2715);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a2717:{NFSU2_TR(0x5a2717);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a271b:L5a271b:{c.instructions+=16;NFSU2_TR(0x5a271b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a271f:{NFSU2_TR(0x5a271f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2722:{NFSU2_TR(0x5a2722);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a2725:{NFSU2_TR(0x5a2725);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a2729:{NFSU2_TR(0x5a2729);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a272a:{NFSU2_TR(0x5a272a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a272b:{NFSU2_TR(0x5a272b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a272f:{NFSU2_TR(0x5a272f);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a2733:{NFSU2_TR(0x5a2733);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2736:{NFSU2_TR(0x5a2736);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2737:{NFSU2_TR(0x5a2737);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a273b:{NFSU2_TR(0x5a273b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a273f:{NFSU2_TR(0x5a273f);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2742:{NFSU2_TR(0x5a2742);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a2746:{NFSU2_TR(0x5a2746);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a274a:{NFSU2_TR(0x5a274a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a274full));
TAIL_STATIC(0x43c9c0u,43c);
}
B5a274f:L5a274f:{c.instructions+=16;NFSU2_TR(0x5a274f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2752:{NFSU2_TR(0x5a2752);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2756:{NFSU2_TR(0x5a2756);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a275a:{NFSU2_TR(0x5a275a);
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
B5a275d:{NFSU2_TR(0x5a275d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2760:{NFSU2_TR(0x5a2760);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2764:{NFSU2_TR(0x5a2764);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a2765:{NFSU2_TR(0x5a2765);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2768:{NFSU2_TR(0x5a2768);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a276b:{NFSU2_TR(0x5a276b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a2772:{NFSU2_TR(0x5a2772);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a2776:{NFSU2_TR(0x5a2776);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a2777:{NFSU2_TR(0x5a2777);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a2778:{NFSU2_TR(0x5a2778);
__builtin_memmove((R+16),(R+20),4);
}
B5a277a:{NFSU2_TR(0x5a277a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a277b:{NFSU2_TR(0x5a277b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a2780:L5a2780:{c.instructions+=13;NFSU2_TR(0x5a2780);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2781:{NFSU2_TR(0x5a2781);
__builtin_memmove((R+20),(R+16),4);
}
B5a2783:{NFSU2_TR(0x5a2783);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a2786:{NFSU2_TR(0x5a2786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B5a2789:{NFSU2_TR(0x5a2789);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a278c:{NFSU2_TR(0x5a278c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a278f:{NFSU2_TR(0x5a278f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5a2792:{NFSU2_TR(0x5a2792);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2793:{NFSU2_TR(0x5a2793);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5a2796:{NFSU2_TR(0x5a2796);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a2799:{NFSU2_TR(0x5a2799);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7a1938ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a279f:{NFSU2_TR(0x5a279f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a27a0:{NFSU2_TR(0x5a27a0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5a27ae;}}
}
B5a27a2:L5a27a2:{c.instructions+=4;NFSU2_TR(0x5a27a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a27a5:{NFSU2_TR(0x5a27a5);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5a27a9:{NFSU2_TR(0x5a27a9);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x40ull))));
}
B5a27ac:{NFSU2_TR(0x5a27ac);
{goto L5a27b7;}
}
B5a27ae:L5a27ae:{c.instructions+=3;NFSU2_TR(0x5a27ae);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a27b1:{NFSU2_TR(0x5a27b1);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a27b3:{NFSU2_TR(0x5a27b3);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a27b7:L5a27b7:{c.instructions+=2;NFSU2_TR(0x5a27b7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a27ba:{NFSU2_TR(0x5a27ba);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5a2839;}}
}
B5a27bc:L5a27bc:{c.instructions+=2;NFSU2_TR(0x5a27bc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a27bf:{NFSU2_TR(0x5a27bf);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5a2805;}}
}
B5a27c1:L5a27c1:{c.instructions+=18;NFSU2_TR(0x5a27c1);
w4(R+24,u32(0x8ull));
}
B5a27c6:{NFSU2_TR(0x5a27c6);
u8 U[6];
w1(R+512,u8((r4(R+24))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+24),r4(R+8)));
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a27c8:{NFSU2_TR(0x5a27c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7a1930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a27ce:{NFSU2_TR(0x5a27ce);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a27d2:{NFSU2_TR(0x5a27d2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a27d6:{NFSU2_TR(0x5a27d6);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5a27da:{NFSU2_TR(0x5a27da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7a1934ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a27e0:{NFSU2_TR(0x5a27e0);
{u32 ea_=u32(u32(8003696u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a27e6:{NFSU2_TR(0x5a27e6);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a27e8:{NFSU2_TR(0x5a27e8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a27ea:{NFSU2_TR(0x5a27ea);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a27ec:{NFSU2_TR(0x5a27ec);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a27f2:{NFSU2_TR(0x5a27f2);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a27f4:{NFSU2_TR(0x5a27f4);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a27f7:{NFSU2_TR(0x5a27f7);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a27fb:{NFSU2_TR(0x5a27fb);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a27fd:{NFSU2_TR(0x5a27fd);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2800:{NFSU2_TR(0x5a2800);
{goto L5a28b8;}
}
B5a2805:L5a2805:{c.instructions+=15;NFSU2_TR(0x5a2805);
w4(R+24,u32(0x18ull));
}
B5a280a:{NFSU2_TR(0x5a280a);
u8 U[6];
w1(R+512,u8((r4(R+24))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+24),r4(R+8)));
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a280c:{NFSU2_TR(0x5a280c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7a1934ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2812:{NFSU2_TR(0x5a2812);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2816:{NFSU2_TR(0x5a2816);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a281a:{NFSU2_TR(0x5a281a);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5a281e:{NFSU2_TR(0x5a281e);
{u32 ea_=u32(u32(8003696u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2824:{NFSU2_TR(0x5a2824);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a2826:{NFSU2_TR(0x5a2826);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a2828:{NFSU2_TR(0x5a2828);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a282a:{NFSU2_TR(0x5a282a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a2830:{NFSU2_TR(0x5a2830);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a2832:{NFSU2_TR(0x5a2832);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2835:{NFSU2_TR(0x5a2835);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a2837:{NFSU2_TR(0x5a2837);
{goto L5a28a9;}
}
B5a2839:L5a2839:{c.instructions+=2;NFSU2_TR(0x5a2839);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x30ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a283c:{NFSU2_TR(0x5a283c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5a287d;}}
}
B5a283e:L5a283e:{c.instructions+=18;NFSU2_TR(0x5a283e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0xffffffd8ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0xffffffd8ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xffffffd8ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a2841:{NFSU2_TR(0x5a2841);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2845:{NFSU2_TR(0x5a2845);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a2849:{NFSU2_TR(0x5a2849);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7a1930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a284f:{NFSU2_TR(0x5a284f);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5a2853:{NFSU2_TR(0x5a2853);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7a1934ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2859:{NFSU2_TR(0x5a2859);
{u32 ea_=u32(u32(8003696u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a285f:{NFSU2_TR(0x5a285f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a2861:{NFSU2_TR(0x5a2861);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a2863:{NFSU2_TR(0x5a2863);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a2865:{NFSU2_TR(0x5a2865);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a286b:{NFSU2_TR(0x5a286b);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a286d:{NFSU2_TR(0x5a286d);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2870:{NFSU2_TR(0x5a2870);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a2872:{NFSU2_TR(0x5a2872);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2876:{NFSU2_TR(0x5a2876);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2878:{NFSU2_TR(0x5a2878);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a287b:{NFSU2_TR(0x5a287b);
{goto L5a28b8;}
}
B5a287d:L5a287d:{c.instructions+=12;NFSU2_TR(0x5a287d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0xffffffc8ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0xffffffc8ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xffffffc8ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a2880:{NFSU2_TR(0x5a2880);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2884:{NFSU2_TR(0x5a2884);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a2888:{NFSU2_TR(0x5a2888);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7a1934ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a288e:{NFSU2_TR(0x5a288e);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5a2892:{NFSU2_TR(0x5a2892);
{u32 ea_=u32(u32(8003696u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2898:{NFSU2_TR(0x5a2898);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a289a:{NFSU2_TR(0x5a289a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a289c:{NFSU2_TR(0x5a289c);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a289e:{NFSU2_TR(0x5a289e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a28a4:{NFSU2_TR(0x5a28a4);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a28a6:{NFSU2_TR(0x5a28a6);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a28a9:L5a28a9:{c.instructions+=4;NFSU2_TR(0x5a28a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7a1930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a28af:{NFSU2_TR(0x5a28af);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a28b3:{NFSU2_TR(0x5a28b3);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a28b6:{NFSU2_TR(0x5a28b6);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a28b8:L5a28b8:{c.instructions+=20;NFSU2_TR(0x5a28b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a28bb:{NFSU2_TR(0x5a28bb);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a28bd:{NFSU2_TR(0x5a28bd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a28c1:{NFSU2_TR(0x5a28c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a28c2:{NFSU2_TR(0x5a28c2);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a28c5:{NFSU2_TR(0x5a28c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a28c6:{NFSU2_TR(0x5a28c6);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a28c9:{NFSU2_TR(0x5a28c9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a28cd:{NFSU2_TR(0x5a28cd);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a28d0:{NFSU2_TR(0x5a28d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a28d7:{NFSU2_TR(0x5a28d7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a28db:{NFSU2_TR(0x5a28db);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a28df:{NFSU2_TR(0x5a28df);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a28e3:{NFSU2_TR(0x5a28e3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a28e5:{NFSU2_TR(0x5a28e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a28e8:{NFSU2_TR(0x5a28e8);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a28eb:{NFSU2_TR(0x5a28eb);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a28ee:{NFSU2_TR(0x5a28ee);
__builtin_memmove((R+16),(R+20),4);
}
B5a28f0:{NFSU2_TR(0x5a28f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a28f1:{NFSU2_TR(0x5a28f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a2900:L5a2900:{c.instructions+=13;NFSU2_TR(0x5a2900);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2901:{NFSU2_TR(0x5a2901);
__builtin_memmove((R+20),(R+16),4);
}
B5a2903:{NFSU2_TR(0x5a2903);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a2906:{NFSU2_TR(0x5a2906);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2907:{NFSU2_TR(0x5a2907);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2908:{NFSU2_TR(0x5a2908);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2909:{NFSU2_TR(0x5a2909);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a290c:{NFSU2_TR(0x5a290c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a290d:{NFSU2_TR(0x5a290d);
__builtin_memmove((R+12),(R+4),4);
}
B5a290f:{NFSU2_TR(0x5a290f);
u8 U[4];
w4(U+0,u32(0x7a2078ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2914:{NFSU2_TR(0x5a2914);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2915:{NFSU2_TR(0x5a2915);
__builtin_memmove((R+4),(R+24),4);
}
B5a2917:{NFSU2_TR(0x5a2917);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a291cull));
TAIL_STATIC(0x578ce0u,578);
}
B5a291c:L5a291c:{c.instructions+=3;NFSU2_TR(0x5a291c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a291f:{NFSU2_TR(0x5a291f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2920:{NFSU2_TR(0x5a2920);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a2925ull));
TAIL_STATIC(0x59b6f0u,59b);
}
B5a2925:L5a2925:{c.instructions+=3;NFSU2_TR(0x5a2925);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2928:{NFSU2_TR(0x5a2928);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2929:{NFSU2_TR(0x5a2929);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a292eull));
TAIL_STATIC(0x598840u,598);
}
B5a292e:L5a292e:{c.instructions+=4;NFSU2_TR(0x5a292e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5a2931:{NFSU2_TR(0x5a2931);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+4,u8(u32(r1(R+4))|u32(r1(U+4))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B5a2934:{NFSU2_TR(0x5a2934);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2937:{NFSU2_TR(0x5a2937);
if(r1(R+518)){{goto L5a2958;}}
}
B5a2939:L5a2939:{c.instructions+=10;NFSU2_TR(0x5a2939);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5a293b:{NFSU2_TR(0x5a293b);
w4(R+8,u32(0x3f800000ull));
}
B5a2940:{NFSU2_TR(0x5a2940);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2943:{NFSU2_TR(0x5a2943);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2946:{NFSU2_TR(0x5a2946);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2949:{NFSU2_TR(0x5a2949);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a294c:{NFSU2_TR(0x5a294c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a294f:{NFSU2_TR(0x5a294f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2952:{NFSU2_TR(0x5a2952);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2955:{NFSU2_TR(0x5a2955);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2958:L5a2958:{c.instructions+=2;NFSU2_TR(0x5a2958);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a295b:{NFSU2_TR(0x5a295b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a2963:L5a2963:{c.instructions+=3;NFSU2_TR(0x5a2963);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2966:{NFSU2_TR(0x5a2966);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2967:{NFSU2_TR(0x5a2967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a296cull));
TAIL_STATIC(0x59c980u,59c);
}
B5a296c:L5a296c:{c.instructions+=6;NFSU2_TR(0x5a296c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a296e:{NFSU2_TR(0x5a296e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2970:{NFSU2_TR(0x5a2970);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2972:{NFSU2_TR(0x5a2972);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2973:{NFSU2_TR(0x5a2973);
__builtin_memmove((R+4),(R+24),4);
}
B5a2975:{NFSU2_TR(0x5a2975);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a297aull));
TAIL_STATIC(0x571640u,571);
}
B5a297a:L5a297a:{c.instructions+=5;NFSU2_TR(0x5a297a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a297e:{NFSU2_TR(0x5a297e);
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5a2981:{NFSU2_TR(0x5a2981);
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
B5a2982:{NFSU2_TR(0x5a2982);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2986:{NFSU2_TR(0x5a2986);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a2963u);}goto L5a2963;}}
}
B5a2988:L5a2988:{c.instructions+=3;NFSU2_TR(0x5a2988);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2989:{NFSU2_TR(0x5a2989);
__builtin_memmove((R+4),(R+12),4);
}
B5a298b:{NFSU2_TR(0x5a298b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a2990ull));
TAIL_STATIC(0x4031c0u,403);
}
B5a2990:L5a2990:{c.instructions+=2;NFSU2_TR(0x5a2990);
__builtin_memmove((R+4),(R+24),4);
}
B5a2992:{NFSU2_TR(0x5a2992);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a2997ull));
TAIL_STATIC(0x578d90u,578);
}
B5a2997:L5a2997:{c.instructions+=6;NFSU2_TR(0x5a2997);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a2998:{NFSU2_TR(0x5a2998);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a2999:{NFSU2_TR(0x5a2999);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a299a:{NFSU2_TR(0x5a299a);
__builtin_memmove((R+16),(R+20),4);
}
B5a299c:{NFSU2_TR(0x5a299c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a299d:{NFSU2_TR(0x5a299d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a29a0:L5a29a0:{c.instructions+=5;NFSU2_TR(0x5a29a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a29a1:{NFSU2_TR(0x5a29a1);
__builtin_memmove((R+24),(R+4),4);
}
B5a29a3:{NFSU2_TR(0x5a29a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a29a6:{NFSU2_TR(0x5a29a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a29a8:{NFSU2_TR(0x5a29a8);
if(r1(R+518)){{goto L5a29c4;}}
}
B5a29aa:L5a29aa:{c.instructions+=9;NFSU2_TR(0x5a29aa);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a29ad:{NFSU2_TR(0x5a29ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a29b0:{NFSU2_TR(0x5a29b0);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a29b3:{NFSU2_TR(0x5a29b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a29b5:{NFSU2_TR(0x5a29b5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
}
B5a29ba:{NFSU2_TR(0x5a29ba);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a29bc:{NFSU2_TR(0x5a29bc);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a29bf:{NFSU2_TR(0x5a29bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a29c1:{NFSU2_TR(0x5a29c1);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a29c4:L5a29c4:{c.instructions+=2;NFSU2_TR(0x5a29c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a29c7:{NFSU2_TR(0x5a29c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a29ccull));
TAIL_STATIC(0x59b940u,59b);
}
B5a29cc:L5a29cc:{c.instructions+=24;NFSU2_TR(0x5a29cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a29cf:{NFSU2_TR(0x5a29cf);
{u32 ea_=u32(r4(R+8)+u32(952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a29d5:{NFSU2_TR(0x5a29d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a29d8:{NFSU2_TR(0x5a29d8);
{u32 ea_=u32(r4(R+0)+u32(488u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a29de:{NFSU2_TR(0x5a29de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a29e1:{NFSU2_TR(0x5a29e1);
{u32 ea_=u32(r4(R+4)+u32(956u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a29e7:{NFSU2_TR(0x5a29e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a29ea:{NFSU2_TR(0x5a29ea);
{u32 ea_=u32(r4(R+8)+u32(492u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a29f0:{NFSU2_TR(0x5a29f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a29f3:{NFSU2_TR(0x5a29f3);
{u32 ea_=u32(r4(R+0)+u32(960u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a29f9:{NFSU2_TR(0x5a29f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a29fc:{NFSU2_TR(0x5a29fc);
{u32 ea_=u32(r4(R+4)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2a02:{NFSU2_TR(0x5a2a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2a05:{NFSU2_TR(0x5a2a05);
{u32 ea_=u32(r4(R+8)+u32(964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2a0b:{NFSU2_TR(0x5a2a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2a0e:{NFSU2_TR(0x5a2a0e);
{u32 ea_=u32(r4(R+0)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2a14:{NFSU2_TR(0x5a2a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2a17:{NFSU2_TR(0x5a2a17);
{u32 ea_=u32(r4(R+4)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2a1d:{NFSU2_TR(0x5a2a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2a20:{NFSU2_TR(0x5a2a20);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2a26:{NFSU2_TR(0x5a2a26);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a2a28:{NFSU2_TR(0x5a2a28);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a2a2a:{NFSU2_TR(0x5a2a2a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2a2d:{NFSU2_TR(0x5a2a2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a2a37;}}
}
B5a2a2f:L5a2a2f:{c.instructions+=2;NFSU2_TR(0x5a2a2f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2a31:{NFSU2_TR(0x5a2a31);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2a37:L5a2a37:{c.instructions+=10;NFSU2_TR(0x5a2a37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a2a39:{NFSU2_TR(0x5a2a39);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2a3c:{NFSU2_TR(0x5a2a3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2a3d:{NFSU2_TR(0x5a2a3d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a2a40:{NFSU2_TR(0x5a2a40);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2a43:{NFSU2_TR(0x5a2a43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2a46:{NFSU2_TR(0x5a2a46);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a2a48:{NFSU2_TR(0x5a2a48);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2a4b:{NFSU2_TR(0x5a2a4b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2a4d:{NFSU2_TR(0x5a2a4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a2a52ull));
TAIL_STATIC(0x5989f0u,598);
}
B5a2a52:L5a2a52:{c.instructions+=2;NFSU2_TR(0x5a2a52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a2a53:{NFSU2_TR(0x5a2a53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a2a60:L5a2a60:{c.instructions+=13;NFSU2_TR(0x5a2a60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2a61:{NFSU2_TR(0x5a2a61);
__builtin_memmove((R+24),(R+4),4);
}
B5a2a63:{NFSU2_TR(0x5a2a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2a66:{NFSU2_TR(0x5a2a66);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5a2a6d:{NFSU2_TR(0x5a2a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2a70:{NFSU2_TR(0x5a2a70);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a2a77:{NFSU2_TR(0x5a2a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2a7a:{NFSU2_TR(0x5a2a7a);
{u32 ea_=u32(r4(R+0)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2a80:{NFSU2_TR(0x5a2a80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2a83:{NFSU2_TR(0x5a2a83);
{u32 ea_=u32(r4(R+4)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2a89:{NFSU2_TR(0x5a2a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2a8c:{NFSU2_TR(0x5a2a8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a2a8e:{NFSU2_TR(0x5a2a8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a2a91ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5a2a91:L5a2a91:{c.instructions+=18;NFSU2_TR(0x5a2a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2a94:{NFSU2_TR(0x5a2a94);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2a9a:{NFSU2_TR(0x5a2a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2a9d:{NFSU2_TR(0x5a2a9d);
{u32 ea_=u32(r4(R+8)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2aa3:{NFSU2_TR(0x5a2aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2aa6:{NFSU2_TR(0x5a2aa6);
{u32 ea_=u32(r4(R+0)+u32(300u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2aac:{NFSU2_TR(0x5a2aac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2aaf:{NFSU2_TR(0x5a2aaf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2ab1:{NFSU2_TR(0x5a2ab1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a2ab7:{NFSU2_TR(0x5a2ab7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2ab8:{NFSU2_TR(0x5a2ab8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a2abb:{NFSU2_TR(0x5a2abb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a2abe:{NFSU2_TR(0x5a2abe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2abf:{NFSU2_TR(0x5a2abf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2ac0:{NFSU2_TR(0x5a2ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2ac3:{NFSU2_TR(0x5a2ac3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B5a2ac6:{NFSU2_TR(0x5a2ac6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2ac7:{NFSU2_TR(0x5a2ac7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a2accull));
TAIL_STATIC(0x59b9b0u,59b);
}
B5a2acc:L5a2acc:{c.instructions+=12;NFSU2_TR(0x5a2acc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2acf:{NFSU2_TR(0x5a2acf);
{u32 ea_=u32(r4(R+0)+u32(764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2ad5:{NFSU2_TR(0x5a2ad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2ad8:{NFSU2_TR(0x5a2ad8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5a2adb:{NFSU2_TR(0x5a2adb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2adf:{NFSU2_TR(0x5a2adf);
{u32 ea_=u32(r4(R+0)+u32(760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2ae5:{NFSU2_TR(0x5a2ae5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2ae9:{NFSU2_TR(0x5a2ae9);
{u32 ea_=u32(r4(R+0)+u32(756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2aef:{NFSU2_TR(0x5a2aef);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2af3:{NFSU2_TR(0x5a2af3);
{u32 ea_=u32(r4(R+0)+u32(752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2af9:{NFSU2_TR(0x5a2af9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2afc:{NFSU2_TR(0x5a2afc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a2b01ull));
TAIL_STATIC(0x598a70u,598);
}
B5a2b01:L5a2b01:{c.instructions+=9;NFSU2_TR(0x5a2b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2b04:{NFSU2_TR(0x5a2b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2b07:{NFSU2_TR(0x5a2b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2b0d:{NFSU2_TR(0x5a2b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2b13:{NFSU2_TR(0x5a2b13);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2b19:{NFSU2_TR(0x5a2b19);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a2b1f:{NFSU2_TR(0x5a2b1f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a2b21:{NFSU2_TR(0x5a2b21);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a2b24:{NFSU2_TR(0x5a2b24);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a2b2e;}}
}
B5a2b26:L5a2b26:{c.instructions+=2;NFSU2_TR(0x5a2b26);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2b2c:{NFSU2_TR(0x5a2b2c);
{goto L5a2b37;}
}
B5a2b2e:L5a2b2e:{c.instructions+=2;NFSU2_TR(0x5a2b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2b31:{NFSU2_TR(0x5a2b31);
{u32 ea_=u32(r4(R+8)+u32(1024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2b37:L5a2b37:{c.instructions+=6;NFSU2_TR(0x5a2b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2b3a:{NFSU2_TR(0x5a2b3a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a2b3d:{NFSU2_TR(0x5a2b3d);
{u32 ea_=u32(r4(R+0)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2b43:{NFSU2_TR(0x5a2b43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a2b45:{NFSU2_TR(0x5a2b45);
__builtin_memmove((R+4),(R+24),4);
}
B5a2b47:{NFSU2_TR(0x5a2b47);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a2b4aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5a2b4a:L5a2b4a:{c.instructions+=4;NFSU2_TR(0x5a2b4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a2b4c:{NFSU2_TR(0x5a2b4c);
__builtin_memmove((R+4),(R+24),4);
}
B5a2b4e:{NFSU2_TR(0x5a2b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a2b4f:{NFSU2_TR(0x5a2b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5a2b60:L5a2b60:{c.instructions+=26;NFSU2_TR(0x5a2b60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2b61:{NFSU2_TR(0x5a2b61);
__builtin_memmove((R+20),(R+16),4);
}
B5a2b63:{NFSU2_TR(0x5a2b63);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a2b66:{NFSU2_TR(0x5a2b66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B5a2b69:{NFSU2_TR(0x5a2b69);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2b6a:{NFSU2_TR(0x5a2b6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2b6b:{NFSU2_TR(0x5a2b6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2b6c:{NFSU2_TR(0x5a2b6c);
__builtin_memmove((R+28),(R+4),4);
}
B5a2b6e:{NFSU2_TR(0x5a2b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a2b71:{NFSU2_TR(0x5a2b71);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ceull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5a2b78:{NFSU2_TR(0x5a2b78);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2b7b:{NFSU2_TR(0x5a2b7b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5a2b82:{NFSU2_TR(0x5a2b82);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2b86:{NFSU2_TR(0x5a2b86);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a2b8a:{NFSU2_TR(0x5a2b8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2b8e:{NFSU2_TR(0x5a2b8e);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2b94:{NFSU2_TR(0x5a2b94);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2b98:{NFSU2_TR(0x5a2b98);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a2b9c:{NFSU2_TR(0x5a2b9c);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2ba2:{NFSU2_TR(0x5a2ba2);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2ba5:{NFSU2_TR(0x5a2ba5);
{u32 ea_=u32(u32(7909248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2bab:{NFSU2_TR(0x5a2bab);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2baf:{NFSU2_TR(0x5a2baf);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a2bb5:{NFSU2_TR(0x5a2bb5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a2bb7:{NFSU2_TR(0x5a2bb7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2bba:{NFSU2_TR(0x5a2bba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a2bc2;}}
}
B5a2bbc:L5a2bbc:{c.instructions+=1;NFSU2_TR(0x5a2bbc);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a2bc2:L5a2bc2:{c.instructions+=5;NFSU2_TR(0x5a2bc2);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5a2bc4:{NFSU2_TR(0x5a2bc4);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a2bca:{NFSU2_TR(0x5a2bca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a2bcc:{NFSU2_TR(0x5a2bcc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2bcf:{NFSU2_TR(0x5a2bcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a2bdb;}}
}
B5a2bd1:L5a2bd1:{c.instructions+=3;NFSU2_TR(0x5a2bd1);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5a2bd3:{NFSU2_TR(0x5a2bd3);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a2bd9:{NFSU2_TR(0x5a2bd9);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5a2bdb:L5a2bdb:{c.instructions+=10;NFSU2_TR(0x5a2bdb);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5a2bdd:{NFSU2_TR(0x5a2bdd);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a2bdf:{NFSU2_TR(0x5a2bdf);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2be3:{NFSU2_TR(0x5a2be3);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a2be5:{NFSU2_TR(0x5a2be5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2be9:{NFSU2_TR(0x5a2be9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2beb:{NFSU2_TR(0x5a2beb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a2bef:{NFSU2_TR(0x5a2bef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a2bf1:{NFSU2_TR(0x5a2bf1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2bf4:{NFSU2_TR(0x5a2bf4);
if(r1(R+518)){{goto L5a2bfc;}}
}
B5a2bf6:L5a2bf6:{c.instructions+=2;NFSU2_TR(0x5a2bf6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2bf8:{NFSU2_TR(0x5a2bf8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2bfc:L5a2bfc:{c.instructions+=5;NFSU2_TR(0x5a2bfc);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2c00:{NFSU2_TR(0x5a2c00);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a2c02:{NFSU2_TR(0x5a2c02);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a2c04:{NFSU2_TR(0x5a2c04);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a2c07:{NFSU2_TR(0x5a2c07);
if(r1(R+514)){{goto L5a2c0f;}}
}
B5a2c09:L5a2c09:{c.instructions+=2;NFSU2_TR(0x5a2c09);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2c0b:{NFSU2_TR(0x5a2c0b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2c0f:L5a2c0f:{c.instructions+=2;NFSU2_TR(0x5a2c0f);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2c15:{NFSU2_TR(0x5a2c15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a2c1aull));
TAIL_STATIC(0x75bed4u,75b);
}
B5a2c1a:L5a2c1a:{c.instructions+=24;NFSU2_TR(0x5a2c1a);
__builtin_memmove((R+4),(R+0),4);
}
B5a2c1c:{NFSU2_TR(0x5a2c1c);
w4(R+0,u32(0xb60b60b7ull));
}
B5a2c21:{NFSU2_TR(0x5a2c21);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5a2c23:{NFSU2_TR(0x5a2c23);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5a2c25:{NFSU2_TR(0x5a2c25);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5a2c28:{NFSU2_TR(0x5a2c28);
__builtin_memmove((R+0),(R+8),4);
}
B5a2c2a:{NFSU2_TR(0x5a2c2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5a2c2d:{NFSU2_TR(0x5a2c2d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5a2c2f:{NFSU2_TR(0x5a2c2f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ceull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a2c36:{NFSU2_TR(0x5a2c36);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2c39:{NFSU2_TR(0x5a2c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2c3c:{NFSU2_TR(0x5a2c3c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B5a2c3f:{NFSU2_TR(0x5a2c3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a2c42:{NFSU2_TR(0x5a2c42);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2c45:{NFSU2_TR(0x5a2c45);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2c48:{NFSU2_TR(0x5a2c48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2c4b:{NFSU2_TR(0x5a2c4b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a2c4d:{NFSU2_TR(0x5a2c4d);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2c50:{NFSU2_TR(0x5a2c50);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2c53:{NFSU2_TR(0x5a2c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2c56:{NFSU2_TR(0x5a2c56);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x30ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a2c59:{NFSU2_TR(0x5a2c59);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2c5a:{NFSU2_TR(0x5a2c5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2c5b:{NFSU2_TR(0x5a2c5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a2c60ull));
TAIL_STATIC(0x4012b0u,401);
}
B5a2c60:L5a2c60:{c.instructions+=6;NFSU2_TR(0x5a2c60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a2c62:{NFSU2_TR(0x5a2c62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2c63:{NFSU2_TR(0x5a2c63);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a2c67:{NFSU2_TR(0x5a2c67);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2c68:{NFSU2_TR(0x5a2c68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2c69:{NFSU2_TR(0x5a2c69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a2c6eull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5a2c6e:L5a2c6e:{c.instructions+=16;NFSU2_TR(0x5a2c6e);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2c71:{NFSU2_TR(0x5a2c71);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a2c75:{NFSU2_TR(0x5a2c75);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a2c7b:{NFSU2_TR(0x5a2c7b);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2c7e:{NFSU2_TR(0x5a2c7e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2c7f:{NFSU2_TR(0x5a2c7f);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a2c83:{NFSU2_TR(0x5a2c83);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2c86:{NFSU2_TR(0x5a2c86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2c87:{NFSU2_TR(0x5a2c87);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a2c8b:{NFSU2_TR(0x5a2c8b);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2c8f:{NFSU2_TR(0x5a2c8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2c93:{NFSU2_TR(0x5a2c93);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a2c95:{NFSU2_TR(0x5a2c95);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2c98:{NFSU2_TR(0x5a2c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2c9b:{NFSU2_TR(0x5a2c9b);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2c9e:{NFSU2_TR(0x5a2c9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a2ca3ull));
TAIL_STATIC(0x4012b0u,401);
}
B5a2ca3:L5a2ca3:{c.instructions+=41;NFSU2_TR(0x5a2ca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2ca6:{NFSU2_TR(0x5a2ca6);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2cac:{NFSU2_TR(0x5a2cac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2cb2:{NFSU2_TR(0x5a2cb2);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2cb8:{NFSU2_TR(0x5a2cb8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
}
B5a2cbd:{NFSU2_TR(0x5a2cbd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a2cbf:{NFSU2_TR(0x5a2cbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2cc2:{NFSU2_TR(0x5a2cc2);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2cc5:{NFSU2_TR(0x5a2cc5);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2cc8:{NFSU2_TR(0x5a2cc8);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2ccb:{NFSU2_TR(0x5a2ccb);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2cce:{NFSU2_TR(0x5a2cce);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2cd0:{NFSU2_TR(0x5a2cd0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x480ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a2cd7:{NFSU2_TR(0x5a2cd7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a2cd9:{NFSU2_TR(0x5a2cd9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a2cdb:{NFSU2_TR(0x5a2cdb);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5a2cdd:{NFSU2_TR(0x5a2cdd);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5a2cdf:{NFSU2_TR(0x5a2cdf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2ce1:{NFSU2_TR(0x5a2ce1);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5a2ce3:{NFSU2_TR(0x5a2ce3);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5a2ce5:{NFSU2_TR(0x5a2ce5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2ce7:{NFSU2_TR(0x5a2ce7);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a2ce9:{NFSU2_TR(0x5a2ce9);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5a2ceb:{NFSU2_TR(0x5a2ceb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2ced:{NFSU2_TR(0x5a2ced);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2cef:{NFSU2_TR(0x5a2cef);
{u32 ea_=u32(r4(R+24)+u32(1008u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2cf5:{NFSU2_TR(0x5a2cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2cf8:{NFSU2_TR(0x5a2cf8);
{u32 ea_=u32(r4(R+0)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2cfe:{NFSU2_TR(0x5a2cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2d04:{NFSU2_TR(0x5a2d04);
{u32 ea_=u32(r4(R+0)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2d0a:{NFSU2_TR(0x5a2d0a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
}
B5a2d0f:{NFSU2_TR(0x5a2d0f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a2d11:{NFSU2_TR(0x5a2d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2d17:{NFSU2_TR(0x5a2d17);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2d1d:{NFSU2_TR(0x5a2d1d);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2d23:{NFSU2_TR(0x5a2d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2d26:{NFSU2_TR(0x5a2d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2d29:{NFSU2_TR(0x5a2d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2d2c:{NFSU2_TR(0x5a2d2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2d2d:{NFSU2_TR(0x5a2d2d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2d2e:{NFSU2_TR(0x5a2d2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a2d33ull));
TAIL_STATIC(0x43c570u,43c);
}
B5a2d33:L5a2d33:{c.instructions+=37;NFSU2_TR(0x5a2d33);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ccull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a2d3a:{NFSU2_TR(0x5a2d3a);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2d3d:{NFSU2_TR(0x5a2d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2d40:{NFSU2_TR(0x5a2d40);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2d43:{NFSU2_TR(0x5a2d43);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5a2d46:{NFSU2_TR(0x5a2d46);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2d49:{NFSU2_TR(0x5a2d49);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x374ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a2d4f:{NFSU2_TR(0x5a2d4f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2d52:{NFSU2_TR(0x5a2d52);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2d56:{NFSU2_TR(0x5a2d56);
w4(R+4,u32(0xfffffc98ull));
}
B5a2d5b:{NFSU2_TR(0x5a2d5b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B5a2d5d:{NFSU2_TR(0x5a2d5d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2d5f:{NFSU2_TR(0x5a2d5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2d63:{NFSU2_TR(0x5a2d63);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2d65:{NFSU2_TR(0x5a2d65);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a2d67:{NFSU2_TR(0x5a2d67);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2d6a:{NFSU2_TR(0x5a2d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2d70:{NFSU2_TR(0x5a2d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2d76:{NFSU2_TR(0x5a2d76);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2d7a:{NFSU2_TR(0x5a2d7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a2d7d:{NFSU2_TR(0x5a2d7d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2d7f:{NFSU2_TR(0x5a2d7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2d83:{NFSU2_TR(0x5a2d83);
w4(R+0,u32(0xfffffc68ull));
}
B5a2d88:{NFSU2_TR(0x5a2d88);
w4(R+8,u32(0xfffffc78ull));
}
B5a2d8d:{NFSU2_TR(0x5a2d8d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B5a2d8f:{NFSU2_TR(0x5a2d8f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B5a2d91:{NFSU2_TR(0x5a2d91);
w4(R+4,u32(0xfffffca8ull));
}
B5a2d96:{NFSU2_TR(0x5a2d96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B5a2d99:{NFSU2_TR(0x5a2d99);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B5a2d9b:{NFSU2_TR(0x5a2d9b);
{u32 ea_=u32(r4(R+24)+u32(1004u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2da1:{NFSU2_TR(0x5a2da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x408ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a2dab:{NFSU2_TR(0x5a2dab);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x90ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a2db3:{NFSU2_TR(0x5a2db3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a2db9:{NFSU2_TR(0x5a2db9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2dbd:{NFSU2_TR(0x5a2dbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2dc1:{NFSU2_TR(0x5a2dc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2dc5:{NFSU2_TR(0x5a2dc5);
{goto L5a2dd0;}
}
B5a2dc7:L5a2dc7:{c.instructions+=3;NFSU2_TR(0x5a2dc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2dcb:{NFSU2_TR(0x5a2dcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2dcf:{NFSU2_TR(0x5a2dcf);
}
B5a2dd0:L5a2dd0:{c.instructions+=23;NFSU2_TR(0x5a2dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2dd3:{NFSU2_TR(0x5a2dd3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5a2dd5:{NFSU2_TR(0x5a2dd5);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2dd8:{NFSU2_TR(0x5a2dd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2ddc:{NFSU2_TR(0x5a2ddc);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2de0:{NFSU2_TR(0x5a2de0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5a2de2:{NFSU2_TR(0x5a2de2);
{u32 ea_=u32(r4(R+12)+u32(4294967112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2de8:{NFSU2_TR(0x5a2de8);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5a2de9:{NFSU2_TR(0x5a2de9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2ded:{NFSU2_TR(0x5a2ded);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2df0:{NFSU2_TR(0x5a2df0);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5a2df2:{NFSU2_TR(0x5a2df2);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5a2df4:{NFSU2_TR(0x5a2df4);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5a2df7:{NFSU2_TR(0x5a2df7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2df9:{NFSU2_TR(0x5a2df9);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2dfd:{NFSU2_TR(0x5a2dfd);
{u32 ea_=u32(r4(R+12)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2e00:{NFSU2_TR(0x5a2e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2e03:{NFSU2_TR(0x5a2e03);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2e0a:{NFSU2_TR(0x5a2e0a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2e0e:{NFSU2_TR(0x5a2e0e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a2e12:{NFSU2_TR(0x5a2e12);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a2e14:{NFSU2_TR(0x5a2e14);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2e17:{NFSU2_TR(0x5a2e17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a2e1f;}}
}
B5a2e19:L5a2e19:{c.instructions+=2;NFSU2_TR(0x5a2e19);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2e1b:{NFSU2_TR(0x5a2e1b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2e1f:L5a2e1f:{c.instructions+=14;NFSU2_TR(0x5a2e1f);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a2e21:{NFSU2_TR(0x5a2e21);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2e25:{NFSU2_TR(0x5a2e25);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a2e27:{NFSU2_TR(0x5a2e27);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ceull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5a2e2e:{NFSU2_TR(0x5a2e2e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2e2f:{NFSU2_TR(0x5a2e2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2e33:{NFSU2_TR(0x5a2e33);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2e36:{NFSU2_TR(0x5a2e36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a2e38:{NFSU2_TR(0x5a2e38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2e39:{NFSU2_TR(0x5a2e39);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2e3d:{NFSU2_TR(0x5a2e3d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2e3e:{NFSU2_TR(0x5a2e3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2e3f:{NFSU2_TR(0x5a2e3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2e40:{NFSU2_TR(0x5a2e40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a2e45ull));
TAIL_STATIC(0x59cb90u,59c);
}
B5a2e45:L5a2e45:{c.instructions+=12;NFSU2_TR(0x5a2e45);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2e49:{NFSU2_TR(0x5a2e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2e4c:{NFSU2_TR(0x5a2e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5a2e4f:{NFSU2_TR(0x5a2e4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2e53:{NFSU2_TR(0x5a2e53);
u8 U[13];
w4(U+0,u32(u32(u32(0x350ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B5a2e5a:{NFSU2_TR(0x5a2e5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5a2e5d:{NFSU2_TR(0x5a2e5d);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a2e61:{NFSU2_TR(0x5a2e61);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2e65:{NFSU2_TR(0x5a2e65);
u8 U[13];
w4(U+0,u32(u32(u32(0x350ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5a2e6c:{NFSU2_TR(0x5a2e6c);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5a2e70:{NFSU2_TR(0x5a2e70);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2e72:{NFSU2_TR(0x5a2e72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a2e81;}}
}
B5a2e74:L5a2e74:{c.instructions+=2;NFSU2_TR(0x5a2e74);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2e76:{NFSU2_TR(0x5a2e76);
if(r1(R+518)){{goto L5a2e92;}}
}
B5a2e78:L5a2e78:{c.instructions+=3;NFSU2_TR(0x5a2e78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2e7e:{NFSU2_TR(0x5a2e7e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5a2e7f:{NFSU2_TR(0x5a2e7f);
{goto L5a2e8c;}
}
B5a2e81:L5a2e81:{c.instructions+=2;NFSU2_TR(0x5a2e81);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2e83:{NFSU2_TR(0x5a2e83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a2e92;}}
}
B5a2e85:L5a2e85:{c.instructions+=2;NFSU2_TR(0x5a2e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2e8b:{NFSU2_TR(0x5a2e8b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5a2e8c:L5a2e8c:{c.instructions+=1;NFSU2_TR(0x5a2e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2e92:L5a2e92:{c.instructions+=18;NFSU2_TR(0x5a2e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2e95:{NFSU2_TR(0x5a2e95);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2e99:{NFSU2_TR(0x5a2e99);
{u32 ea_=u32(r4(R+8)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2e9d:{NFSU2_TR(0x5a2e9d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5a2e9f:{NFSU2_TR(0x5a2e9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a2ea1:{NFSU2_TR(0x5a2ea1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2ea5:{NFSU2_TR(0x5a2ea5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a2ea7:{NFSU2_TR(0x5a2ea7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2eaa:{NFSU2_TR(0x5a2eaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2eae:{NFSU2_TR(0x5a2eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a2eb5:{NFSU2_TR(0x5a2eb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2eb8:{NFSU2_TR(0x5a2eb8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5a2eba:{NFSU2_TR(0x5a2eba);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2ebd:{NFSU2_TR(0x5a2ebd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2ec1:{NFSU2_TR(0x5a2ec1);
{u32 ea_=u32(r4(R+12)+u32(4294967128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2ec7:{NFSU2_TR(0x5a2ec7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a2ec9:{NFSU2_TR(0x5a2ec9);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5a2ed0:{NFSU2_TR(0x5a2ed0);
if(r1(R+518)){{goto L5a2eda;}}
}
B5a2ed2:L5a2ed2:{c.instructions+=2;NFSU2_TR(0x5a2ed2);
{u32 ea_=u32(r4(R+0)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2ed8:{NFSU2_TR(0x5a2ed8);
{goto L5a2ee0;}
}
B5a2eda:L5a2eda:{c.instructions+=1;NFSU2_TR(0x5a2eda);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2ee0:L5a2ee0:{c.instructions+=25;NFSU2_TR(0x5a2ee0);
{u32 ea_=u32(r4(R+12)+u32(4294967144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2ee6:{NFSU2_TR(0x5a2ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2ee9:{NFSU2_TR(0x5a2ee9);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B5a2eec:{NFSU2_TR(0x5a2eec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a2eee:{NFSU2_TR(0x5a2eee);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2ef2:{NFSU2_TR(0x5a2ef2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a2ef8:{NFSU2_TR(0x5a2ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2efb:{NFSU2_TR(0x5a2efb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2eff:{NFSU2_TR(0x5a2eff);
{u32 ea_=u32(r4(R+8)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2f03:{NFSU2_TR(0x5a2f03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a2f05:{NFSU2_TR(0x5a2f05);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5a2f07:{NFSU2_TR(0x5a2f07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a2f09:{NFSU2_TR(0x5a2f09);
{u32 ea_=u32(r4(R+4)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2f0f:{NFSU2_TR(0x5a2f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2f15:{NFSU2_TR(0x5a2f15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a2f17:{NFSU2_TR(0x5a2f17);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2f1b:{NFSU2_TR(0x5a2f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2f21:{NFSU2_TR(0x5a2f21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a2f23:{NFSU2_TR(0x5a2f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2f26:{NFSU2_TR(0x5a2f26);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2f2a:{NFSU2_TR(0x5a2f2a);
u8 U[13];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B5a2f31:{NFSU2_TR(0x5a2f31);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a2f37:{NFSU2_TR(0x5a2f37);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B5a2f3c:{NFSU2_TR(0x5a2f3c);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1130ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1130ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5a2f41:{NFSU2_TR(0x5a2f41);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5a2f4a;}}
}
B5a2f43:L5a2f43:{c.instructions+=2;NFSU2_TR(0x5a2f43);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1194ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1194ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5a2f48:{NFSU2_TR(0x5a2f48);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5a2f69;}}
}
B5a2f4a:L5a2f4a:{c.instructions+=2;NFSU2_TR(0x5a2f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2f4d:{NFSU2_TR(0x5a2f4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a2f52ull));
TAIL_STATIC(0x5f67f0u,5f6);
}
B5a2f52:L5a2f52:{c.instructions+=2;NFSU2_TR(0x5a2f52);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2f54:{NFSU2_TR(0x5a2f54);
if(r1(R+518)){{goto L5a2f69;}}
}
B5a2f56:L5a2f56:{c.instructions+=7;NFSU2_TR(0x5a2f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2f59:{NFSU2_TR(0x5a2f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2f5c:{NFSU2_TR(0x5a2f5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2f60:{NFSU2_TR(0x5a2f60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a2f62:{NFSU2_TR(0x5a2f62);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2f63:{NFSU2_TR(0x5a2f63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2f64:{NFSU2_TR(0x5a2f64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a2f69ull));
TAIL_STATIC(0x59dbb0u,59d);
}
B5a2f69:L5a2f69:{c.instructions+=13;NFSU2_TR(0x5a2f69);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2f6d:{NFSU2_TR(0x5a2f6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2f71:{NFSU2_TR(0x5a2f71);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5a2f72:{NFSU2_TR(0x5a2f72);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2f76:{NFSU2_TR(0x5a2f76);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5a2f7b:{NFSU2_TR(0x5a2f7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2f7f:{NFSU2_TR(0x5a2f7f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5a2f82:{NFSU2_TR(0x5a2f82);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5a2f85:{NFSU2_TR(0x5a2f85);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5a2f88:{NFSU2_TR(0x5a2f88);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a2f8d:{NFSU2_TR(0x5a2f8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2f91:{NFSU2_TR(0x5a2f91);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2f95:{NFSU2_TR(0x5a2f95);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a2dc7u);}goto L5a2dc7;}}
}
B5a2f9b:L5a2f9b:{c.instructions+=12;NFSU2_TR(0x5a2f9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2f9e:{NFSU2_TR(0x5a2f9e);
{u32 ea_=u32(r4(R+8)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2fa4:{NFSU2_TR(0x5a2fa4);
{u32 ea_=u32(r4(R+24)+u32(1024u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2faa:{NFSU2_TR(0x5a2faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2fad:{NFSU2_TR(0x5a2fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2fb3:{NFSU2_TR(0x5a2fb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a2fb4:{NFSU2_TR(0x5a2fb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3f4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2fba:{NFSU2_TR(0x5a2fba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a2fbb:{NFSU2_TR(0x5a2fbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a2fbc:{NFSU2_TR(0x5a2fbc);
__builtin_memmove((R+16),(R+20),4);
}
B5a2fbe:{NFSU2_TR(0x5a2fbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a2fbf:{NFSU2_TR(0x5a2fbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a2fd0:L5a2fd0:{c.instructions+=13;NFSU2_TR(0x5a2fd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2fd1:{NFSU2_TR(0x5a2fd1);
__builtin_memmove((R+20),(R+16),4);
}
B5a2fd3:{NFSU2_TR(0x5a2fd3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a2fd6:{NFSU2_TR(0x5a2fd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x74ull))));
}
B5a2fd9:{NFSU2_TR(0x5a2fd9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2fda:{NFSU2_TR(0x5a2fda);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2fdb:{NFSU2_TR(0x5a2fdb);
__builtin_memmove((R+24),(R+4),4);
}
B5a2fdd:{NFSU2_TR(0x5a2fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a2fe0:{NFSU2_TR(0x5a2fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a2fe3:{NFSU2_TR(0x5a2fe3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a2fe6:{NFSU2_TR(0x5a2fe6);
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
B5a2fe8:{NFSU2_TR(0x5a2fe8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a2fe9:{NFSU2_TR(0x5a2fe9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x5a3373u,5a3);}
}
B5a2fef:L5a2fef:{c.instructions+=4;NFSU2_TR(0x5a2fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2ff2:{NFSU2_TR(0x5a2ff2);
{u32 ea_=u32(r4(R+8)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2ff8:{NFSU2_TR(0x5a2ff8);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B5a2ffa:{NFSU2_TR(0x5a2ffa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
TAIL_STATIC(0x5a3000u,5a3);
}
XIT:NFSU2_TR_EXIT(0x5a2,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
