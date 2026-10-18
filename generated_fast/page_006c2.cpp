#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 body_6c3(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6c2,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6c2,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6c2(u8* __restrict R,Cpu& c);
u32 page_6c2(Cpu& c){return body_6c2(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6c2(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6c2001:goto L6c2001;
case 0x6c2004:c.instructions+=4;goto B6c2004;
case 0x6c2007:c.instructions+=3;goto B6c2007;
case 0x6c2009:c.instructions+=2;goto B6c2009;
case 0x6c200c:c.instructions+=1;goto B6c200c;
case 0x6c200e:goto L6c200e;
case 0x6c2011:c.instructions+=3;goto B6c2011;
case 0x6c2012:c.instructions+=2;goto B6c2012;
case 0x6c2014:c.instructions+=1;goto B6c2014;
case 0x6c2015:goto L6c2015;
case 0x6c2017:c.instructions+=5;goto B6c2017;
case 0x6c201a:c.instructions+=4;goto B6c201a;
case 0x6c201d:c.instructions+=3;goto B6c201d;
case 0x6c2020:c.instructions+=2;goto B6c2020;
case 0x6c2023:c.instructions+=1;goto B6c2023;
case 0x6c2025:goto L6c2025;
case 0x6c2028:c.instructions+=1;goto B6c2028;
case 0x6c202a:goto L6c202a;
case 0x6c202d:c.instructions+=1;goto B6c202d;
case 0x6c202f:goto L6c202f;
case 0x6c2032:c.instructions+=5;goto B6c2032;
case 0x6c2035:c.instructions+=4;goto B6c2035;
case 0x6c2038:c.instructions+=3;goto B6c2038;
case 0x6c203b:c.instructions+=2;goto B6c203b;
case 0x6c203e:c.instructions+=1;goto B6c203e;
case 0x6c2040:goto L6c2040;
case 0x6c2043:c.instructions+=2;goto B6c2043;
case 0x6c2046:c.instructions+=1;goto B6c2046;
case 0x6c2048:goto L6c2048;
case 0x6c2049:c.instructions+=3;goto B6c2049;
case 0x6c204c:c.instructions+=2;goto B6c204c;
case 0x6c204f:c.instructions+=1;goto B6c204f;
case 0x6c2051:goto L6c2051;
case 0x6c2052:c.instructions+=1;goto B6c2052;
case 0x6c2053:goto L6c2053;
case 0x6c2056:c.instructions+=6;goto B6c2056;
case 0x6c2057:c.instructions+=5;goto B6c2057;
case 0x6c2059:c.instructions+=4;goto B6c2059;
case 0x6c205b:c.instructions+=3;goto B6c205b;
case 0x6c205c:c.instructions+=2;goto B6c205c;
case 0x6c205d:c.instructions+=1;goto B6c205d;
case 0x6c2060:goto L6c2060;
case 0x6c2062:c.instructions+=13;goto B6c2062;
case 0x6c2063:c.instructions+=12;goto B6c2063;
case 0x6c2065:c.instructions+=11;goto B6c2065;
case 0x6c206b:c.instructions+=10;goto B6c206b;
case 0x6c206c:c.instructions+=9;goto B6c206c;
case 0x6c206d:c.instructions+=8;goto B6c206d;
case 0x6c206e:c.instructions+=7;goto B6c206e;
case 0x6c2070:c.instructions+=6;goto B6c2070;
case 0x6c2072:c.instructions+=5;goto B6c2072;
case 0x6c2074:c.instructions+=4;goto B6c2074;
case 0x6c2077:c.instructions+=3;goto B6c2077;
case 0x6c207a:c.instructions+=2;goto B6c207a;
case 0x6c207d:c.instructions+=1;goto B6c207d;
case 0x6c207f:goto L6c207f;
case 0x6c2082:c.instructions+=8;goto B6c2082;
case 0x6c2085:c.instructions+=7;goto B6c2085;
case 0x6c2088:c.instructions+=6;goto B6c2088;
case 0x6c208b:c.instructions+=5;goto B6c208b;
case 0x6c208e:c.instructions+=4;goto B6c208e;
case 0x6c2091:c.instructions+=3;goto B6c2091;
case 0x6c2094:c.instructions+=2;goto B6c2094;
case 0x6c2096:c.instructions+=1;goto B6c2096;
case 0x6c2098:goto L6c2098;
case 0x6c209b:c.instructions+=1;goto B6c209b;
case 0x6c209d:goto L6c209d;
case 0x6c209f:c.instructions+=1;goto B6c209f;
case 0x6c20a1:goto L6c20a1;
case 0x6c20a3:c.instructions+=4;goto B6c20a3;
case 0x6c20a4:c.instructions+=3;goto B6c20a4;
case 0x6c20a5:c.instructions+=2;goto B6c20a5;
case 0x6c20a7:c.instructions+=1;goto B6c20a7;
case 0x6c20aa:goto L6c20aa;
case 0x6c20ac:c.instructions+=1;goto B6c20ac;
case 0x6c20ae:goto L6c20ae;
case 0x6c20b1:c.instructions+=3;goto B6c20b1;
case 0x6c20b2:c.instructions+=2;goto B6c20b2;
case 0x6c20b4:c.instructions+=1;goto B6c20b4;
case 0x6c20b9:goto L6c20b9;
case 0x6c20bd:c.instructions+=1;goto B6c20bd;
case 0x6c20c0:goto L6c20c0;
case 0x6c20c3:c.instructions+=3;goto B6c20c3;
case 0x6c20c6:c.instructions+=2;goto B6c20c6;
case 0x6c20c9:c.instructions+=1;goto B6c20c9;
case 0x6c20cb:goto L6c20cb;
case 0x6c20cd:c.instructions+=1;goto B6c20cd;
case 0x6c20cf:goto L6c20cf;
case 0x6c20d4:c.instructions+=1;goto B6c20d4;
case 0x6c20d9:goto L6c20d9;
case 0x6c20dc:c.instructions+=2;goto B6c20dc;
case 0x6c20df:c.instructions+=1;goto B6c20df;
case 0x6c20e5:goto L6c20e5;
case 0x6c20e8:c.instructions+=8;goto B6c20e8;
case 0x6c20eb:c.instructions+=7;goto B6c20eb;
case 0x6c20ee:c.instructions+=6;goto B6c20ee;
case 0x6c20f1:c.instructions+=5;goto B6c20f1;
case 0x6c20f4:c.instructions+=4;goto B6c20f4;
case 0x6c20f7:c.instructions+=3;goto B6c20f7;
case 0x6c20fa:c.instructions+=2;goto B6c20fa;
case 0x6c20fd:c.instructions+=1;goto B6c20fd;
case 0x6c20ff:goto L6c20ff;
case 0x6c2102:c.instructions+=1;goto B6c2102;
case 0x6c2104:goto L6c2104;
case 0x6c2107:c.instructions+=1;goto B6c2107;
case 0x6c210d:goto L6c210d;
case 0x6c2110:c.instructions+=5;goto B6c2110;
case 0x6c2111:c.instructions+=4;goto B6c2111;
case 0x6c2114:c.instructions+=3;goto B6c2114;
case 0x6c2117:c.instructions+=2;goto B6c2117;
case 0x6c211a:c.instructions+=1;goto B6c211a;
case 0x6c2120:goto L6c2120;
case 0x6c2123:c.instructions+=1;goto B6c2123;
case 0x6c2126:goto L6c2126;
case 0x6c2128:c.instructions+=2;goto B6c2128;
case 0x6c212b:c.instructions+=1;goto B6c212b;
case 0x6c212d:goto L6c212d;
case 0x6c2130:c.instructions+=2;goto B6c2130;
case 0x6c2133:c.instructions+=1;goto B6c2133;
case 0x6c2135:goto L6c2135;
case 0x6c2138:c.instructions+=2;goto B6c2138;
case 0x6c213b:c.instructions+=1;goto B6c213b;
case 0x6c213d:goto L6c213d;
case 0x6c213f:c.instructions+=3;goto B6c213f;
case 0x6c2141:c.instructions+=2;goto B6c2141;
case 0x6c2147:c.instructions+=1;goto B6c2147;
case 0x6c2149:goto L6c2149;
case 0x6c214c:c.instructions+=4;goto B6c214c;
case 0x6c214f:c.instructions+=3;goto B6c214f;
case 0x6c2152:c.instructions+=2;goto B6c2152;
case 0x6c2155:c.instructions+=1;goto B6c2155;
case 0x6c2157:goto L6c2157;
case 0x6c2159:goto L6c2159;
case 0x6c215e:c.instructions+=5;goto B6c215e;
case 0x6c2164:c.instructions+=4;goto B6c2164;
case 0x6c2165:c.instructions+=3;goto B6c2165;
case 0x6c2166:c.instructions+=2;goto B6c2166;
case 0x6c2168:c.instructions+=1;goto B6c2168;
case 0x6c216d:goto L6c216d;
case 0x6c2172:c.instructions+=5;goto B6c2172;
case 0x6c2178:c.instructions+=4;goto B6c2178;
case 0x6c2179:c.instructions+=3;goto B6c2179;
case 0x6c217a:c.instructions+=2;goto B6c217a;
case 0x6c217c:c.instructions+=1;goto B6c217c;
case 0x6c2181:goto L6c2181;
case 0x6c2187:c.instructions+=8;goto B6c2187;
case 0x6c2188:c.instructions+=7;goto B6c2188;
case 0x6c218e:c.instructions+=6;goto B6c218e;
case 0x6c218f:c.instructions+=5;goto B6c218f;
case 0x6c2194:c.instructions+=4;goto B6c2194;
case 0x6c2199:c.instructions+=3;goto B6c2199;
case 0x6c219c:c.instructions+=2;goto B6c219c;
case 0x6c219d:c.instructions+=1;goto B6c219d;
case 0x6c21a2:goto L6c21a2;
case 0x6c21a5:c.instructions+=4;goto B6c21a5;
case 0x6c21a8:c.instructions+=3;goto B6c21a8;
case 0x6c21a9:c.instructions+=2;goto B6c21a9;
case 0x6c21ab:c.instructions+=1;goto B6c21ab;
case 0x6c21b0:goto L6c21b0;
case 0x6c21b4:goto L6c21b4;
case 0x6c21b7:goto L6c21b7;
case 0x6c21ba:c.instructions+=3;goto B6c21ba;
case 0x6c21bd:c.instructions+=2;goto B6c21bd;
case 0x6c21c0:c.instructions+=1;goto B6c21c0;
case 0x6c21c6:goto L6c21c6;
case 0x6c21c8:c.instructions+=3;goto B6c21c8;
case 0x6c21ca:c.instructions+=2;goto B6c21ca;
case 0x6c21d0:c.instructions+=1;goto B6c21d0;
case 0x6c21d2:goto L6c21d2;
case 0x6c21d3:c.instructions+=4;goto B6c21d3;
case 0x6c21d4:c.instructions+=3;goto B6c21d4;
case 0x6c21d5:c.instructions+=2;goto B6c21d5;
case 0x6c21d6:c.instructions+=1;goto B6c21d6;
case 0x6c21d7:goto L6c21d7;
case 0x6c21d9:c.instructions+=10;goto B6c21d9;
case 0x6c21da:c.instructions+=9;goto B6c21da;
case 0x6c21dc:c.instructions+=8;goto B6c21dc;
case 0x6c21dd:c.instructions+=7;goto B6c21dd;
case 0x6c21de:c.instructions+=6;goto B6c21de;
case 0x6c21e1:c.instructions+=5;goto B6c21e1;
case 0x6c21e2:c.instructions+=4;goto B6c21e2;
case 0x6c21e5:c.instructions+=3;goto B6c21e5;
case 0x6c21e8:c.instructions+=2;goto B6c21e8;
case 0x6c21eb:c.instructions+=1;goto B6c21eb;
case 0x6c21ed:goto L6c21ed;
case 0x6c21ee:c.instructions+=4;goto B6c21ee;
case 0x6c21f0:c.instructions+=3;goto B6c21f0;
case 0x6c21f3:c.instructions+=2;goto B6c21f3;
case 0x6c21f6:c.instructions+=1;goto B6c21f6;
case 0x6c21f8:goto L6c21f8;
case 0x6c21fb:c.instructions+=7;goto B6c21fb;
case 0x6c21fe:c.instructions+=6;goto B6c21fe;
case 0x6c2201:c.instructions+=5;goto B6c2201;
case 0x6c2202:c.instructions+=4;goto B6c2202;
case 0x6c2205:c.instructions+=3;goto B6c2205;
case 0x6c2208:c.instructions+=2;goto B6c2208;
case 0x6c2209:c.instructions+=1;goto B6c2209;
case 0x6c220e:goto L6c220e;
case 0x6c220f:c.instructions+=2;goto B6c220f;
case 0x6c2212:c.instructions+=1;goto B6c2212;
case 0x6c2214:goto L6c2214;
case 0x6c2215:goto L6c2215;
case 0x6c2216:c.instructions+=4;goto B6c2216;
case 0x6c2218:c.instructions+=3;goto B6c2218;
case 0x6c2219:c.instructions+=2;goto B6c2219;
case 0x6c221a:c.instructions+=1;goto B6c221a;
case 0x6c221d:goto L6c221d;
case 0x6c221f:c.instructions+=10;goto B6c221f;
case 0x6c2220:c.instructions+=9;goto B6c2220;
case 0x6c2222:c.instructions+=8;goto B6c2222;
case 0x6c2223:c.instructions+=7;goto B6c2223;
case 0x6c2224:c.instructions+=6;goto B6c2224;
case 0x6c2227:c.instructions+=5;goto B6c2227;
case 0x6c2228:c.instructions+=4;goto B6c2228;
case 0x6c222b:c.instructions+=3;goto B6c222b;
case 0x6c222e:c.instructions+=2;goto B6c222e;
case 0x6c2231:c.instructions+=1;goto B6c2231;
case 0x6c2233:goto L6c2233;
case 0x6c2234:c.instructions+=4;goto B6c2234;
case 0x6c2236:c.instructions+=3;goto B6c2236;
case 0x6c2239:c.instructions+=2;goto B6c2239;
case 0x6c223c:c.instructions+=1;goto B6c223c;
case 0x6c223e:goto L6c223e;
case 0x6c2241:c.instructions+=7;goto B6c2241;
case 0x6c2244:c.instructions+=6;goto B6c2244;
case 0x6c2247:c.instructions+=5;goto B6c2247;
case 0x6c2248:c.instructions+=4;goto B6c2248;
case 0x6c224b:c.instructions+=3;goto B6c224b;
case 0x6c224e:c.instructions+=2;goto B6c224e;
case 0x6c224f:c.instructions+=1;goto B6c224f;
case 0x6c2254:goto L6c2254;
case 0x6c2255:c.instructions+=2;goto B6c2255;
case 0x6c2258:c.instructions+=1;goto B6c2258;
case 0x6c225a:goto L6c225a;
case 0x6c225b:goto L6c225b;
case 0x6c225c:c.instructions+=4;goto B6c225c;
case 0x6c225e:c.instructions+=3;goto B6c225e;
case 0x6c225f:c.instructions+=2;goto B6c225f;
case 0x6c2260:c.instructions+=1;goto B6c2260;
case 0x6c2263:goto L6c2263;
case 0x6c2265:c.instructions+=10;goto B6c2265;
case 0x6c2266:c.instructions+=9;goto B6c2266;
case 0x6c2268:c.instructions+=8;goto B6c2268;
case 0x6c2269:c.instructions+=7;goto B6c2269;
case 0x6c226a:c.instructions+=6;goto B6c226a;
case 0x6c226d:c.instructions+=5;goto B6c226d;
case 0x6c226e:c.instructions+=4;goto B6c226e;
case 0x6c2271:c.instructions+=3;goto B6c2271;
case 0x6c2274:c.instructions+=2;goto B6c2274;
case 0x6c2277:c.instructions+=1;goto B6c2277;
case 0x6c2279:goto L6c2279;
case 0x6c227a:c.instructions+=4;goto B6c227a;
case 0x6c227c:c.instructions+=3;goto B6c227c;
case 0x6c227f:c.instructions+=2;goto B6c227f;
case 0x6c2282:c.instructions+=1;goto B6c2282;
case 0x6c2284:goto L6c2284;
case 0x6c2287:c.instructions+=7;goto B6c2287;
case 0x6c228a:c.instructions+=6;goto B6c228a;
case 0x6c228d:c.instructions+=5;goto B6c228d;
case 0x6c228e:c.instructions+=4;goto B6c228e;
case 0x6c2291:c.instructions+=3;goto B6c2291;
case 0x6c2294:c.instructions+=2;goto B6c2294;
case 0x6c2295:c.instructions+=1;goto B6c2295;
case 0x6c229a:goto L6c229a;
case 0x6c229b:c.instructions+=2;goto B6c229b;
case 0x6c229e:c.instructions+=1;goto B6c229e;
case 0x6c22a0:goto L6c22a0;
case 0x6c22a1:goto L6c22a1;
case 0x6c22a2:c.instructions+=4;goto B6c22a2;
case 0x6c22a4:c.instructions+=3;goto B6c22a4;
case 0x6c22a5:c.instructions+=2;goto B6c22a5;
case 0x6c22a6:c.instructions+=1;goto B6c22a6;
case 0x6c22a9:goto L6c22a9;
case 0x6c22ab:c.instructions+=10;goto B6c22ab;
case 0x6c22ac:c.instructions+=9;goto B6c22ac;
case 0x6c22ae:c.instructions+=8;goto B6c22ae;
case 0x6c22af:c.instructions+=7;goto B6c22af;
case 0x6c22b0:c.instructions+=6;goto B6c22b0;
case 0x6c22b3:c.instructions+=5;goto B6c22b3;
case 0x6c22b4:c.instructions+=4;goto B6c22b4;
case 0x6c22b7:c.instructions+=3;goto B6c22b7;
case 0x6c22ba:c.instructions+=2;goto B6c22ba;
case 0x6c22bc:c.instructions+=1;goto B6c22bc;
case 0x6c22be:goto L6c22be;
case 0x6c22c1:c.instructions+=1;goto B6c22c1;
case 0x6c22c3:goto L6c22c3;
case 0x6c22c4:c.instructions+=1;goto B6c22c4;
case 0x6c22c7:goto L6c22c7;
case 0x6c22c8:c.instructions+=1;goto B6c22c8;
case 0x6c22cd:goto L6c22cd;
case 0x6c22cf:c.instructions+=2;goto B6c22cf;
case 0x6c22d0:c.instructions+=1;goto B6c22d0;
case 0x6c22d2:goto L6c22d2;
case 0x6c22d5:c.instructions+=2;goto B6c22d5;
case 0x6c22d6:c.instructions+=1;goto B6c22d6;
case 0x6c22db:goto L6c22db;
case 0x6c22dc:c.instructions+=3;goto B6c22dc;
case 0x6c22e0:c.instructions+=2;goto B6c22e0;
case 0x6c22e2:c.instructions+=1;goto B6c22e2;
case 0x6c22e4:goto L6c22e4;
case 0x6c22e6:c.instructions+=2;goto B6c22e6;
case 0x6c22e8:c.instructions+=1;goto B6c22e8;
case 0x6c22ea:goto L6c22ea;
case 0x6c22ed:c.instructions+=2;goto B6c22ed;
case 0x6c22ef:c.instructions+=1;goto B6c22ef;
case 0x6c22f1:goto L6c22f1;
case 0x6c22f4:c.instructions+=1;goto B6c22f4;
case 0x6c22f6:goto L6c22f6;
case 0x6c22f8:c.instructions+=3;goto B6c22f8;
case 0x6c22fb:c.instructions+=2;goto B6c22fb;
case 0x6c22fe:c.instructions+=1;goto B6c22fe;
case 0x6c2300:goto L6c2300;
case 0x6c2302:goto L6c2302;
case 0x6c2305:c.instructions+=2;goto B6c2305;
case 0x6c2306:c.instructions+=1;goto B6c2306;
case 0x6c2308:goto L6c2308;
case 0x6c230a:c.instructions+=1;goto B6c230a;
case 0x6c230c:goto L6c230c;
case 0x6c230f:c.instructions+=1;goto B6c230f;
case 0x6c2311:goto L6c2311;
case 0x6c2312:goto L6c2312;
case 0x6c2315:c.instructions+=2;goto B6c2315;
case 0x6c2316:c.instructions+=1;goto B6c2316;
case 0x6c231b:goto L6c231b;
case 0x6c231d:c.instructions+=2;goto B6c231d;
case 0x6c231e:c.instructions+=1;goto B6c231e;
case 0x6c2320:goto L6c2320;
case 0x6c2322:c.instructions+=2;goto B6c2322;
case 0x6c2324:c.instructions+=1;goto B6c2324;
case 0x6c2326:goto L6c2326;
case 0x6c232b:goto L6c232b;
case 0x6c232c:c.instructions+=4;goto B6c232c;
case 0x6c232d:c.instructions+=3;goto B6c232d;
case 0x6c232e:c.instructions+=2;goto B6c232e;
case 0x6c232f:c.instructions+=1;goto B6c232f;
case 0x6c2332:goto L6c2332;
case 0x6c2334:goto L6c2334;
case 0x6c2339:c.instructions+=4;goto B6c2339;
case 0x6c233e:c.instructions+=3;goto B6c233e;
case 0x6c233f:c.instructions+=2;goto B6c233f;
case 0x6c2340:c.instructions+=1;goto B6c2340;
case 0x6c2345:goto L6c2345;
case 0x6c2348:c.instructions+=1;goto B6c2348;
case 0x6c234a:goto L6c234a;
case 0x6c234c:c.instructions+=2;goto B6c234c;
case 0x6c234e:c.instructions+=1;goto B6c234e;
case 0x6c2350:goto L6c2350;
case 0x6c2352:c.instructions+=12;goto B6c2352;
case 0x6c2353:c.instructions+=11;goto B6c2353;
case 0x6c2355:c.instructions+=10;goto B6c2355;
case 0x6c2358:c.instructions+=9;goto B6c2358;
case 0x6c2359:c.instructions+=8;goto B6c2359;
case 0x6c235a:c.instructions+=7;goto B6c235a;
case 0x6c235c:c.instructions+=6;goto B6c235c;
case 0x6c235e:c.instructions+=5;goto B6c235e;
case 0x6c2361:c.instructions+=4;goto B6c2361;
case 0x6c2362:c.instructions+=3;goto B6c2362;
case 0x6c2365:c.instructions+=2;goto B6c2365;
case 0x6c2368:c.instructions+=1;goto B6c2368;
case 0x6c236a:goto L6c236a;
case 0x6c236d:c.instructions+=5;goto B6c236d;
case 0x6c2370:c.instructions+=4;goto B6c2370;
case 0x6c2373:c.instructions+=3;goto B6c2373;
case 0x6c2377:c.instructions+=2;goto B6c2377;
case 0x6c237a:c.instructions+=1;goto B6c237a;
case 0x6c237c:goto L6c237c;
case 0x6c237e:c.instructions+=3;goto B6c237e;
case 0x6c2381:c.instructions+=2;goto B6c2381;
case 0x6c2384:c.instructions+=1;goto B6c2384;
case 0x6c2386:goto L6c2386;
case 0x6c2389:c.instructions+=3;goto B6c2389;
case 0x6c238c:c.instructions+=2;goto B6c238c;
case 0x6c238f:c.instructions+=1;goto B6c238f;
case 0x6c2391:goto L6c2391;
case 0x6c2394:c.instructions+=3;goto B6c2394;
case 0x6c2395:c.instructions+=2;goto B6c2395;
case 0x6c2398:c.instructions+=1;goto B6c2398;
case 0x6c239a:goto L6c239a;
case 0x6c239d:goto L6c239d;
case 0x6c239e:c.instructions+=2;goto B6c239e;
case 0x6c23a1:c.instructions+=1;goto B6c23a1;
case 0x6c23a3:goto L6c23a3;
case 0x6c23a6:c.instructions+=1;goto B6c23a6;
case 0x6c23a8:goto L6c23a8;
case 0x6c23ab:c.instructions+=1;goto B6c23ab;
case 0x6c23ad:goto L6c23ad;
case 0x6c23b0:c.instructions+=1;goto B6c23b0;
case 0x6c23b3:goto L6c23b3;
case 0x6c23b6:c.instructions+=2;goto B6c23b6;
case 0x6c23b9:c.instructions+=1;goto B6c23b9;
case 0x6c23bb:goto L6c23bb;
case 0x6c23be:c.instructions+=1;goto B6c23be;
case 0x6c23c0:goto L6c23c0;
case 0x6c23c3:c.instructions+=1;goto B6c23c3;
case 0x6c23c6:goto L6c23c6;
case 0x6c23c9:c.instructions+=2;goto B6c23c9;
case 0x6c23cb:c.instructions+=1;goto B6c23cb;
case 0x6c23cd:goto L6c23cd;
case 0x6c23d0:c.instructions+=1;goto B6c23d0;
case 0x6c23d2:goto L6c23d2;
case 0x6c23d6:c.instructions+=1;goto B6c23d6;
case 0x6c23d8:goto L6c23d8;
case 0x6c23db:c.instructions+=1;goto B6c23db;
case 0x6c23de:goto L6c23de;
case 0x6c23df:c.instructions+=2;goto B6c23df;
case 0x6c23e2:c.instructions+=1;goto B6c23e2;
case 0x6c23e4:goto L6c23e4;
case 0x6c23e7:c.instructions+=3;goto B6c23e7;
case 0x6c23ea:c.instructions+=2;goto B6c23ea;
case 0x6c23eb:c.instructions+=1;goto B6c23eb;
case 0x6c23f0:goto L6c23f0;
case 0x6c23f2:c.instructions+=3;goto B6c23f2;
case 0x6c23f3:c.instructions+=2;goto B6c23f3;
case 0x6c23f6:c.instructions+=1;goto B6c23f6;
case 0x6c23fc:goto L6c23fc;
case 0x6c2400:c.instructions+=5;goto B6c2400;
case 0x6c2402:c.instructions+=4;goto B6c2402;
case 0x6c2405:c.instructions+=3;goto B6c2405;
case 0x6c2407:c.instructions+=2;goto B6c2407;
case 0x6c240a:c.instructions+=1;goto B6c240a;
case 0x6c240c:goto L6c240c;
case 0x6c240e:goto L6c240e;
case 0x6c2410:c.instructions+=1;goto B6c2410;
case 0x6c2413:goto L6c2413;
case 0x6c2415:goto L6c2415;
case 0x6c2419:c.instructions+=1;goto B6c2419;
case 0x6c241f:goto L6c241f;
case 0x6c2422:c.instructions+=7;goto B6c2422;
case 0x6c2425:c.instructions+=6;goto B6c2425;
case 0x6c2428:c.instructions+=5;goto B6c2428;
case 0x6c242b:c.instructions+=4;goto B6c242b;
case 0x6c242d:c.instructions+=3;goto B6c242d;
case 0x6c2430:c.instructions+=2;goto B6c2430;
case 0x6c2433:c.instructions+=1;goto B6c2433;
case 0x6c2439:goto L6c2439;
case 0x6c243c:c.instructions+=2;goto B6c243c;
case 0x6c243e:c.instructions+=1;goto B6c243e;
case 0x6c2444:goto L6c2444;
case 0x6c2446:c.instructions+=1;goto B6c2446;
case 0x6c244c:goto L6c244c;
case 0x6c244f:c.instructions+=1;goto B6c244f;
case 0x6c2455:goto L6c2455;
case 0x6c2459:c.instructions+=1;goto B6c2459;
case 0x6c245f:goto L6c245f;
case 0x6c2462:c.instructions+=7;goto B6c2462;
case 0x6c2466:c.instructions+=6;goto B6c2466;
case 0x6c2469:c.instructions+=5;goto B6c2469;
case 0x6c246c:c.instructions+=4;goto B6c246c;
case 0x6c246d:c.instructions+=3;goto B6c246d;
case 0x6c246f:c.instructions+=2;goto B6c246f;
case 0x6c2471:c.instructions+=1;goto B6c2471;
case 0x6c2476:goto L6c2476;
case 0x6c2478:c.instructions+=2;goto B6c2478;
case 0x6c247a:c.instructions+=1;goto B6c247a;
case 0x6c2480:goto L6c2480;
case 0x6c2483:c.instructions+=2;goto B6c2483;
case 0x6c2485:c.instructions+=1;goto B6c2485;
case 0x6c2487:goto L6c2487;
case 0x6c248a:c.instructions+=2;goto B6c248a;
case 0x6c248b:c.instructions+=1;goto B6c248b;
case 0x6c2490:goto L6c2490;
case 0x6c2491:c.instructions+=3;goto B6c2491;
case 0x6c2495:c.instructions+=2;goto B6c2495;
case 0x6c2497:c.instructions+=1;goto B6c2497;
case 0x6c2499:goto L6c2499;
case 0x6c249c:c.instructions+=4;goto B6c249c;
case 0x6c249f:c.instructions+=3;goto B6c249f;
case 0x6c24a2:c.instructions+=2;goto B6c24a2;
case 0x6c24a3:c.instructions+=1;goto B6c24a3;
case 0x6c24a8:goto L6c24a8;
case 0x6c24aa:c.instructions+=2;goto B6c24aa;
case 0x6c24ab:c.instructions+=1;goto B6c24ab;
case 0x6c24ad:goto L6c24ad;
case 0x6c24b0:c.instructions+=1;goto B6c24b0;
case 0x6c24b2:goto L6c24b2;
case 0x6c24b3:goto L6c24b3;
case 0x6c24b6:c.instructions+=2;goto B6c24b6;
case 0x6c24b7:c.instructions+=1;goto B6c24b7;
case 0x6c24bc:goto L6c24bc;
case 0x6c24be:c.instructions+=2;goto B6c24be;
case 0x6c24bf:c.instructions+=1;goto B6c24bf;
case 0x6c24c1:goto L6c24c1;
case 0x6c24c3:c.instructions+=2;goto B6c24c3;
case 0x6c24c5:c.instructions+=1;goto B6c24c5;
case 0x6c24c7:goto L6c24c7;
case 0x6c24ca:c.instructions+=1;goto B6c24ca;
case 0x6c24cc:goto L6c24cc;
case 0x6c24cf:c.instructions+=1;goto B6c24cf;
case 0x6c24d4:goto L6c24d4;
case 0x6c24d5:c.instructions+=1;goto B6c24d5;
case 0x6c24d8:goto L6c24d8;
case 0x6c24db:c.instructions+=2;goto B6c24db;
case 0x6c24de:c.instructions+=1;goto B6c24de;
case 0x6c24e4:goto L6c24e4;
case 0x6c24e8:c.instructions+=2;goto B6c24e8;
case 0x6c24ec:c.instructions+=1;goto B6c24ec;
case 0x6c24ee:goto L6c24ee;
case 0x6c24f1:c.instructions+=4;goto B6c24f1;
case 0x6c24f4:c.instructions+=3;goto B6c24f4;
case 0x6c24f6:c.instructions+=2;goto B6c24f6;
case 0x6c24f9:c.instructions+=1;goto B6c24f9;
case 0x6c24ff:goto L6c24ff;
case 0x6c2502:c.instructions+=3;goto B6c2502;
case 0x6c2505:c.instructions+=2;goto B6c2505;
case 0x6c2508:c.instructions+=1;goto B6c2508;
case 0x6c250a:goto L6c250a;
case 0x6c250b:c.instructions+=7;goto B6c250b;
case 0x6c250f:c.instructions+=6;goto B6c250f;
case 0x6c2510:c.instructions+=5;goto B6c2510;
case 0x6c2515:c.instructions+=4;goto B6c2515;
case 0x6c251a:c.instructions+=3;goto B6c251a;
case 0x6c251c:c.instructions+=2;goto B6c251c;
case 0x6c251d:c.instructions+=1;goto B6c251d;
case 0x6c2522:goto L6c2522;
case 0x6c2525:goto L6c2525;
case 0x6c2528:c.instructions+=7;goto B6c2528;
case 0x6c252a:c.instructions+=6;goto B6c252a;
case 0x6c252d:c.instructions+=5;goto B6c252d;
case 0x6c2530:c.instructions+=4;goto B6c2530;
case 0x6c2531:c.instructions+=3;goto B6c2531;
case 0x6c2534:c.instructions+=2;goto B6c2534;
case 0x6c2537:c.instructions+=1;goto B6c2537;
case 0x6c2539:goto L6c2539;
case 0x6c253c:c.instructions+=3;goto B6c253c;
case 0x6c253f:c.instructions+=2;goto B6c253f;
case 0x6c2542:c.instructions+=1;goto B6c2542;
case 0x6c2548:goto L6c2548;
case 0x6c254b:c.instructions+=3;goto B6c254b;
case 0x6c254f:c.instructions+=2;goto B6c254f;
case 0x6c2551:c.instructions+=1;goto B6c2551;
case 0x6c2553:goto L6c2553;
case 0x6c2556:c.instructions+=1;goto B6c2556;
case 0x6c2558:goto L6c2558;
case 0x6c255a:c.instructions+=5;goto B6c255a;
case 0x6c255d:c.instructions+=4;goto B6c255d;
case 0x6c255f:c.instructions+=3;goto B6c255f;
case 0x6c2562:c.instructions+=2;goto B6c2562;
case 0x6c2565:c.instructions+=1;goto B6c2565;
case 0x6c2567:goto L6c2567;
case 0x6c256a:c.instructions+=1;goto B6c256a;
case 0x6c256c:goto L6c256c;
case 0x6c256f:c.instructions+=1;goto B6c256f;
case 0x6c2571:goto L6c2571;
case 0x6c2574:c.instructions+=1;goto B6c2574;
case 0x6c2576:goto L6c2576;
case 0x6c257a:c.instructions+=1;goto B6c257a;
case 0x6c257c:goto L6c257c;
case 0x6c257f:goto L6c257f;
case 0x6c2582:c.instructions+=2;goto B6c2582;
case 0x6c2583:c.instructions+=1;goto B6c2583;
case 0x6c2585:goto L6c2585;
case 0x6c2588:c.instructions+=3;goto B6c2588;
case 0x6c258b:c.instructions+=2;goto B6c258b;
case 0x6c258c:c.instructions+=1;goto B6c258c;
case 0x6c2591:goto L6c2591;
case 0x6c2592:c.instructions+=4;goto B6c2592;
case 0x6c2594:c.instructions+=3;goto B6c2594;
case 0x6c2596:c.instructions+=2;goto B6c2596;
case 0x6c2599:c.instructions+=1;goto B6c2599;
case 0x6c259f:goto L6c259f;
case 0x6c25a2:c.instructions+=2;goto B6c25a2;
case 0x6c25a5:c.instructions+=1;goto B6c25a5;
case 0x6c25a7:goto L6c25a7;
case 0x6c25aa:c.instructions+=6;goto B6c25aa;
case 0x6c25ad:c.instructions+=5;goto B6c25ad;
case 0x6c25b0:c.instructions+=4;goto B6c25b0;
case 0x6c25b2:c.instructions+=3;goto B6c25b2;
case 0x6c25b5:c.instructions+=2;goto B6c25b5;
case 0x6c25b8:c.instructions+=1;goto B6c25b8;
case 0x6c25ba:goto L6c25ba;
case 0x6c25bd:c.instructions+=1;goto B6c25bd;
case 0x6c25bf:goto L6c25bf;
case 0x6c25c2:c.instructions+=1;goto B6c25c2;
case 0x6c25c4:goto L6c25c4;
case 0x6c25c7:c.instructions+=1;goto B6c25c7;
case 0x6c25c9:goto L6c25c9;
case 0x6c25cd:c.instructions+=1;goto B6c25cd;
case 0x6c25cf:goto L6c25cf;
case 0x6c25d2:c.instructions+=3;goto B6c25d2;
case 0x6c25d5:c.instructions+=2;goto B6c25d5;
case 0x6c25d8:c.instructions+=1;goto B6c25d8;
case 0x6c25db:goto L6c25db;
case 0x6c25dc:c.instructions+=2;goto B6c25dc;
case 0x6c25df:c.instructions+=1;goto B6c25df;
case 0x6c25e1:goto L6c25e1;
case 0x6c25e4:c.instructions+=5;goto B6c25e4;
case 0x6c25e5:c.instructions+=4;goto B6c25e5;
case 0x6c25e8:c.instructions+=3;goto B6c25e8;
case 0x6c25e9:c.instructions+=2;goto B6c25e9;
case 0x6c25ee:c.instructions+=1;goto B6c25ee;
case 0x6c25f3:goto L6c25f3;
case 0x6c25f7:c.instructions+=2;goto B6c25f7;
case 0x6c25fb:c.instructions+=1;goto B6c25fb;
case 0x6c2601:goto L6c2601;
case 0x6c2604:goto L6c2604;
case 0x6c2607:c.instructions+=6;goto B6c2607;
case 0x6c2609:c.instructions+=5;goto B6c2609;
case 0x6c260c:c.instructions+=4;goto B6c260c;
case 0x6c260f:c.instructions+=3;goto B6c260f;
case 0x6c2611:c.instructions+=2;goto B6c2611;
case 0x6c2614:c.instructions+=1;goto B6c2614;
case 0x6c261a:goto L6c261a;
case 0x6c261d:c.instructions+=1;goto B6c261d;
case 0x6c2622:goto L6c2622;
case 0x6c2625:c.instructions+=3;goto B6c2625;
case 0x6c2627:c.instructions+=2;goto B6c2627;
case 0x6c2629:c.instructions+=1;goto B6c2629;
case 0x6c262b:goto L6c262b;
case 0x6c262e:c.instructions+=1;goto B6c262e;
case 0x6c2631:goto L6c2631;
case 0x6c2633:c.instructions+=3;goto B6c2633;
case 0x6c2636:c.instructions+=2;goto B6c2636;
case 0x6c2639:c.instructions+=1;goto B6c2639;
case 0x6c263b:goto L6c263b;
case 0x6c263d:goto L6c263d;
case 0x6c2640:c.instructions+=2;goto B6c2640;
case 0x6c2643:c.instructions+=1;goto B6c2643;
case 0x6c2645:goto L6c2645;
case 0x6c2647:c.instructions+=1;goto B6c2647;
case 0x6c2649:goto L6c2649;
case 0x6c264c:c.instructions+=1;goto B6c264c;
case 0x6c264e:goto L6c264e;
case 0x6c2650:goto L6c2650;
case 0x6c2654:c.instructions+=7;goto B6c2654;
case 0x6c2655:c.instructions+=6;goto B6c2655;
case 0x6c2657:c.instructions+=5;goto B6c2657;
case 0x6c265c:c.instructions+=4;goto B6c265c;
case 0x6c2661:c.instructions+=3;goto B6c2661;
case 0x6c2662:c.instructions+=2;goto B6c2662;
case 0x6c2663:c.instructions+=1;goto B6c2663;
case 0x6c2668:goto L6c2668;
case 0x6c266b:c.instructions+=1;goto B6c266b;
case 0x6c2670:goto L6c2670;
case 0x6c2674:c.instructions+=2;goto B6c2674;
case 0x6c2677:c.instructions+=1;goto B6c2677;
case 0x6c267d:goto L6c267d;
case 0x6c267e:c.instructions+=1;goto B6c267e;
case 0x6c2684:goto L6c2684;
case 0x6c2687:c.instructions+=1;goto B6c2687;
case 0x6c268d:goto L6c268d;
case 0x6c2690:c.instructions+=1;goto B6c2690;
case 0x6c2692:goto L6c2692;
case 0x6c2695:c.instructions+=1;goto B6c2695;
case 0x6c269b:goto L6c269b;
case 0x6c26a0:goto L6c26a0;
case 0x6c26a5:c.instructions+=2;goto B6c26a5;
case 0x6c26aa:c.instructions+=1;goto B6c26aa;
case 0x6c26af:goto L6c26af;
case 0x6c26b2:c.instructions+=2;goto B6c26b2;
case 0x6c26b6:c.instructions+=1;goto B6c26b6;
case 0x6c26b8:goto L6c26b8;
case 0x6c26b9:goto L6c26b9;
case 0x6c26bc:c.instructions+=1;goto B6c26bc;
case 0x6c26be:goto L6c26be;
case 0x6c26c1:c.instructions+=2;goto B6c26c1;
case 0x6c26c3:c.instructions+=1;goto B6c26c3;
case 0x6c26c5:goto L6c26c5;
case 0x6c26c8:c.instructions+=2;goto B6c26c8;
case 0x6c26cc:c.instructions+=1;goto B6c26cc;
case 0x6c26ce:goto L6c26ce;
case 0x6c26cf:c.instructions+=2;goto B6c26cf;
case 0x6c26d2:c.instructions+=1;goto B6c26d2;
case 0x6c26d4:goto L6c26d4;
case 0x6c26d6:c.instructions+=3;goto B6c26d6;
case 0x6c26d8:c.instructions+=2;goto B6c26d8;
case 0x6c26da:c.instructions+=1;goto B6c26da;
case 0x6c26dc:goto L6c26dc;
case 0x6c26df:c.instructions+=2;goto B6c26df;
case 0x6c26e1:c.instructions+=1;goto B6c26e1;
case 0x6c26e3:goto L6c26e3;
case 0x6c26e6:c.instructions+=3;goto B6c26e6;
case 0x6c26e9:c.instructions+=2;goto B6c26e9;
case 0x6c26ec:c.instructions+=1;goto B6c26ec;
case 0x6c26f2:goto L6c26f2;
case 0x6c26f4:c.instructions+=2;goto B6c26f4;
case 0x6c26f6:c.instructions+=1;goto B6c26f6;
case 0x6c26f8:goto L6c26f8;
case 0x6c26fb:c.instructions+=1;goto B6c26fb;
case 0x6c26fe:goto L6c26fe;
case 0x6c2701:c.instructions+=7;goto B6c2701;
case 0x6c2703:c.instructions+=6;goto B6c2703;
case 0x6c2706:c.instructions+=5;goto B6c2706;
case 0x6c2708:c.instructions+=4;goto B6c2708;
case 0x6c2709:c.instructions+=3;goto B6c2709;
case 0x6c270c:c.instructions+=2;goto B6c270c;
case 0x6c270f:c.instructions+=1;goto B6c270f;
case 0x6c2711:goto L6c2711;
case 0x6c2714:c.instructions+=5;goto B6c2714;
case 0x6c2718:c.instructions+=4;goto B6c2718;
case 0x6c271b:c.instructions+=3;goto B6c271b;
case 0x6c271e:c.instructions+=2;goto B6c271e;
case 0x6c2721:c.instructions+=1;goto B6c2721;
case 0x6c2727:goto L6c2727;
case 0x6c2729:c.instructions+=3;goto B6c2729;
case 0x6c272b:c.instructions+=2;goto B6c272b;
case 0x6c272e:c.instructions+=1;goto B6c272e;
case 0x6c2730:goto L6c2730;
case 0x6c2733:c.instructions+=9;goto B6c2733;
case 0x6c2736:c.instructions+=8;goto B6c2736;
case 0x6c2739:c.instructions+=7;goto B6c2739;
case 0x6c273c:c.instructions+=6;goto B6c273c;
case 0x6c273f:c.instructions+=5;goto B6c273f;
case 0x6c2742:c.instructions+=4;goto B6c2742;
case 0x6c2745:c.instructions+=3;goto B6c2745;
case 0x6c2746:c.instructions+=2;goto B6c2746;
case 0x6c2749:c.instructions+=1;goto B6c2749;
case 0x6c274b:goto L6c274b;
case 0x6c274d:c.instructions+=2;goto B6c274d;
case 0x6c2750:c.instructions+=1;goto B6c2750;
case 0x6c2752:goto L6c2752;
case 0x6c2755:c.instructions+=7;goto B6c2755;
case 0x6c2758:c.instructions+=6;goto B6c2758;
case 0x6c275b:c.instructions+=5;goto B6c275b;
case 0x6c275e:c.instructions+=4;goto B6c275e;
case 0x6c275f:c.instructions+=3;goto B6c275f;
case 0x6c2762:c.instructions+=2;goto B6c2762;
case 0x6c2765:c.instructions+=1;goto B6c2765;
case 0x6c2767:goto L6c2767;
case 0x6c276a:c.instructions+=2;goto B6c276a;
case 0x6c276d:c.instructions+=1;goto B6c276d;
case 0x6c2773:goto L6c2773;
case 0x6c2776:c.instructions+=7;goto B6c2776;
case 0x6c2779:c.instructions+=6;goto B6c2779;
case 0x6c277c:c.instructions+=5;goto B6c277c;
case 0x6c277f:c.instructions+=4;goto B6c277f;
case 0x6c2781:c.instructions+=3;goto B6c2781;
case 0x6c2784:c.instructions+=2;goto B6c2784;
case 0x6c2787:c.instructions+=1;goto B6c2787;
case 0x6c278d:goto L6c278d;
case 0x6c2790:c.instructions+=2;goto B6c2790;
case 0x6c2792:c.instructions+=1;goto B6c2792;
case 0x6c2798:goto L6c2798;
case 0x6c279a:c.instructions+=1;goto B6c279a;
case 0x6c27a0:goto L6c27a0;
case 0x6c27a3:c.instructions+=1;goto B6c27a3;
case 0x6c27a9:goto L6c27a9;
case 0x6c27ac:c.instructions+=2;goto B6c27ac;
case 0x6c27ae:c.instructions+=1;goto B6c27ae;
case 0x6c27b4:goto L6c27b4;
case 0x6c27b7:c.instructions+=2;goto B6c27b7;
case 0x6c27b8:c.instructions+=1;goto B6c27b8;
case 0x6c27bd:goto L6c27bd;
case 0x6c27bf:c.instructions+=4;goto B6c27bf;
case 0x6c27c1:c.instructions+=3;goto B6c27c1;
case 0x6c27c2:c.instructions+=2;goto B6c27c2;
case 0x6c27c5:c.instructions+=1;goto B6c27c5;
case 0x6c27cb:goto L6c27cb;
case 0x6c27ce:c.instructions+=5;goto B6c27ce;
case 0x6c27d1:c.instructions+=4;goto B6c27d1;
case 0x6c27d3:c.instructions+=3;goto B6c27d3;
case 0x6c27d6:c.instructions+=2;goto B6c27d6;
case 0x6c27d9:c.instructions+=1;goto B6c27d9;
case 0x6c27db:goto L6c27db;
case 0x6c27dd:goto L6c27dd;
case 0x6c27df:c.instructions+=2;goto B6c27df;
case 0x6c27e2:c.instructions+=1;goto B6c27e2;
case 0x6c27e4:goto L6c27e4;
case 0x6c27e6:goto L6c27e6;
case 0x6c27e9:c.instructions+=2;goto B6c27e9;
case 0x6c27ec:c.instructions+=1;goto B6c27ec;
case 0x6c27ee:goto L6c27ee;
case 0x6c27f1:c.instructions+=5;goto B6c27f1;
case 0x6c27f4:c.instructions+=4;goto B6c27f4;
case 0x6c27f7:c.instructions+=3;goto B6c27f7;
case 0x6c27fa:c.instructions+=2;goto B6c27fa;
case 0x6c27fd:c.instructions+=1;goto B6c27fd;
case 0x6c27ff:goto L6c27ff;
case 0x6c2802:c.instructions+=2;goto B6c2802;
case 0x6c2806:c.instructions+=1;goto B6c2806;
case 0x6c2808:goto L6c2808;
case 0x6c280a:c.instructions+=2;goto B6c280a;
case 0x6c280d:c.instructions+=1;goto B6c280d;
case 0x6c2813:goto L6c2813;
case 0x6c2816:goto L6c2816;
case 0x6c281a:c.instructions+=1;goto B6c281a;
case 0x6c281c:goto L6c281c;
case 0x6c281d:c.instructions+=2;goto B6c281d;
case 0x6c2820:c.instructions+=1;goto B6c2820;
case 0x6c2822:goto L6c2822;
case 0x6c2825:c.instructions+=1;goto B6c2825;
case 0x6c282b:goto L6c282b;
case 0x6c282e:c.instructions+=6;goto B6c282e;
case 0x6c2831:c.instructions+=5;goto B6c2831;
case 0x6c2833:c.instructions+=4;goto B6c2833;
case 0x6c2836:c.instructions+=3;goto B6c2836;
case 0x6c2839:c.instructions+=2;goto B6c2839;
case 0x6c283c:c.instructions+=1;goto B6c283c;
case 0x6c283f:goto L6c283f;
case 0x6c2842:c.instructions+=3;goto B6c2842;
case 0x6c2845:c.instructions+=2;goto B6c2845;
case 0x6c2848:c.instructions+=1;goto B6c2848;
case 0x6c284a:goto L6c284a;
case 0x6c284d:c.instructions+=3;goto B6c284d;
case 0x6c2850:c.instructions+=2;goto B6c2850;
case 0x6c2853:c.instructions+=1;goto B6c2853;
case 0x6c2855:goto L6c2855;
case 0x6c2856:c.instructions+=1;goto B6c2856;
case 0x6c285b:goto L6c285b;
case 0x6c285c:c.instructions+=1;goto B6c285c;
case 0x6c285f:goto L6c285f;
case 0x6c2862:c.instructions+=3;goto B6c2862;
case 0x6c2865:c.instructions+=2;goto B6c2865;
case 0x6c2868:c.instructions+=1;goto B6c2868;
case 0x6c286e:goto L6c286e;
case 0x6c2871:c.instructions+=2;goto B6c2871;
case 0x6c2874:c.instructions+=1;goto B6c2874;
case 0x6c287a:goto L6c287a;
case 0x6c287c:c.instructions+=2;goto B6c287c;
case 0x6c287f:c.instructions+=1;goto B6c287f;
case 0x6c2885:goto L6c2885;
case 0x6c2888:c.instructions+=9;goto B6c2888;
case 0x6c288b:c.instructions+=8;goto B6c288b;
case 0x6c288e:c.instructions+=7;goto B6c288e;
case 0x6c2891:c.instructions+=6;goto B6c2891;
case 0x6c2894:c.instructions+=5;goto B6c2894;
case 0x6c2897:c.instructions+=4;goto B6c2897;
case 0x6c2899:c.instructions+=3;goto B6c2899;
case 0x6c289c:c.instructions+=2;goto B6c289c;
case 0x6c289f:c.instructions+=1;goto B6c289f;
case 0x6c28a5:goto L6c28a5;
case 0x6c28a8:c.instructions+=2;goto B6c28a8;
case 0x6c28aa:c.instructions+=1;goto B6c28aa;
case 0x6c28b0:goto L6c28b0;
case 0x6c28b3:c.instructions+=1;goto B6c28b3;
case 0x6c28b9:goto L6c28b9;
case 0x6c28bf:c.instructions+=1;goto B6c28bf;
case 0x6c28c5:goto L6c28c5;
case 0x6c28cb:goto L6c28cb;
case 0x6c28ce:c.instructions+=1;goto B6c28ce;
case 0x6c28d3:goto L6c28d3;
case 0x6c28d6:c.instructions+=2;goto B6c28d6;
case 0x6c28d8:c.instructions+=1;goto B6c28d8;
case 0x6c28da:goto L6c28da;
case 0x6c28dc:c.instructions+=1;goto B6c28dc;
case 0x6c28de:goto L6c28de;
case 0x6c28e0:c.instructions+=1;goto B6c28e0;
case 0x6c28e2:goto L6c28e2;
case 0x6c28e4:c.instructions+=1;goto B6c28e4;
case 0x6c28e6:goto L6c28e6;
case 0x6c28e8:c.instructions+=1;goto B6c28e8;
case 0x6c28ea:goto L6c28ea;
case 0x6c28ef:c.instructions+=1;goto B6c28ef;
case 0x6c28f1:goto L6c28f1;
case 0x6c28f6:c.instructions+=1;goto B6c28f6;
case 0x6c28fb:goto L6c28fb;
case 0x6c28fe:c.instructions+=2;goto B6c28fe;
case 0x6c2900:c.instructions+=1;goto B6c2900;
case 0x6c2902:goto L6c2902;
case 0x6c2907:c.instructions+=2;goto B6c2907;
case 0x6c290c:c.instructions+=1;goto B6c290c;
case 0x6c290e:goto L6c290e;
case 0x6c2910:c.instructions+=1;goto B6c2910;
case 0x6c2912:goto L6c2912;
case 0x6c2917:c.instructions+=2;goto B6c2917;
case 0x6c291c:c.instructions+=1;goto B6c291c;
case 0x6c291e:goto L6c291e;
case 0x6c2920:c.instructions+=1;goto B6c2920;
case 0x6c2922:goto L6c2922;
case 0x6c2927:c.instructions+=2;goto B6c2927;
case 0x6c292c:c.instructions+=1;goto B6c292c;
case 0x6c292e:goto L6c292e;
case 0x6c2930:c.instructions+=1;goto B6c2930;
case 0x6c2932:goto L6c2932;
case 0x6c2937:c.instructions+=2;goto B6c2937;
case 0x6c293c:c.instructions+=1;goto B6c293c;
case 0x6c293e:goto L6c293e;
case 0x6c2940:c.instructions+=1;goto B6c2940;
case 0x6c2942:goto L6c2942;
case 0x6c2947:goto L6c2947;
case 0x6c294c:goto L6c294c;
case 0x6c294e:c.instructions+=2;goto B6c294e;
case 0x6c294f:c.instructions+=1;goto B6c294f;
case 0x6c2954:goto L6c2954;
case 0x6c2957:goto L6c2957;
case 0x6c295c:c.instructions+=1;goto B6c295c;
case 0x6c295e:goto L6c295e;
case 0x6c2961:c.instructions+=1;goto B6c2961;
case 0x6c2963:goto L6c2963;
case 0x6c2966:c.instructions+=1;goto B6c2966;
case 0x6c296b:goto L6c296b;
case 0x6c296e:goto L6c296e;
case 0x6c296f:c.instructions+=2;goto B6c296f;
case 0x6c2972:c.instructions+=1;goto B6c2972;
case 0x6c2978:goto L6c2978;
case 0x6c297b:c.instructions+=8;goto B6c297b;
case 0x6c297e:c.instructions+=7;goto B6c297e;
case 0x6c2982:c.instructions+=6;goto B6c2982;
case 0x6c2985:c.instructions+=5;goto B6c2985;
case 0x6c2988:c.instructions+=4;goto B6c2988;
case 0x6c298b:c.instructions+=3;goto B6c298b;
case 0x6c298e:c.instructions+=2;goto B6c298e;
case 0x6c2991:c.instructions+=1;goto B6c2991;
case 0x6c2993:goto L6c2993;
case 0x6c2996:c.instructions+=7;goto B6c2996;
case 0x6c2999:c.instructions+=6;goto B6c2999;
case 0x6c299c:c.instructions+=5;goto B6c299c;
case 0x6c29a0:c.instructions+=4;goto B6c29a0;
case 0x6c29a3:c.instructions+=3;goto B6c29a3;
case 0x6c29a6:c.instructions+=2;goto B6c29a6;
case 0x6c29a9:c.instructions+=1;goto B6c29a9;
case 0x6c29ac:goto L6c29ac;
case 0x6c29ae:goto L6c29ae;
case 0x6c29b1:c.instructions+=1;goto B6c29b1;
case 0x6c29b6:goto L6c29b6;
case 0x6c29b9:c.instructions+=1;goto B6c29b9;
case 0x6c29be:goto L6c29be;
case 0x6c29c1:c.instructions+=1;goto B6c29c1;
case 0x6c29c6:goto L6c29c6;
case 0x6c29c9:c.instructions+=6;goto B6c29c9;
case 0x6c29ca:c.instructions+=5;goto B6c29ca;
case 0x6c29cb:c.instructions+=4;goto B6c29cb;
case 0x6c29cd:c.instructions+=3;goto B6c29cd;
case 0x6c29ce:c.instructions+=2;goto B6c29ce;
case 0x6c29cf:c.instructions+=1;goto B6c29cf;
case 0x6c29d2:goto L6c29d2;
case 0x6c29d4:c.instructions+=11;goto B6c29d4;
case 0x6c29d5:c.instructions+=10;goto B6c29d5;
case 0x6c29d8:c.instructions+=9;goto B6c29d8;
case 0x6c29de:c.instructions+=8;goto B6c29de;
case 0x6c29e4:c.instructions+=7;goto B6c29e4;
case 0x6c29e5:c.instructions+=6;goto B6c29e5;
case 0x6c29e6:c.instructions+=5;goto B6c29e6;
case 0x6c29e7:c.instructions+=4;goto B6c29e7;
case 0x6c29e8:c.instructions+=3;goto B6c29e8;
case 0x6c29ef:c.instructions+=2;goto B6c29ef;
case 0x6c29f6:c.instructions+=1;goto B6c29f6;
case 0x6c29fb:goto L6c29fb;
case 0x6c29fd:c.instructions+=2;goto B6c29fd;
case 0x6c29fe:c.instructions+=1;goto B6c29fe;
case 0x6c2a00:goto L6c2a00;
case 0x6c2a02:goto L6c2a02;
case 0x6c2a03:goto L6c2a03;
case 0x6c2a08:c.instructions+=1;goto B6c2a08;
case 0x6c2a09:goto L6c2a09;
case 0x6c2a0b:c.instructions+=19;goto B6c2a0b;
case 0x6c2a0c:c.instructions+=18;goto B6c2a0c;
case 0x6c2a0e:c.instructions+=17;goto B6c2a0e;
case 0x6c2a11:c.instructions+=16;goto B6c2a11;
case 0x6c2a15:c.instructions+=15;goto B6c2a15;
case 0x6c2a16:c.instructions+=14;goto B6c2a16;
case 0x6c2a19:c.instructions+=13;goto B6c2a19;
case 0x6c2a1c:c.instructions+=12;goto B6c2a1c;
case 0x6c2a1d:c.instructions+=11;goto B6c2a1d;
case 0x6c2a20:c.instructions+=10;goto B6c2a20;
case 0x6c2a23:c.instructions+=9;goto B6c2a23;
case 0x6c2a27:c.instructions+=8;goto B6c2a27;
case 0x6c2a28:c.instructions+=7;goto B6c2a28;
case 0x6c2a2b:c.instructions+=6;goto B6c2a2b;
case 0x6c2a2d:c.instructions+=5;goto B6c2a2d;
case 0x6c2a30:c.instructions+=4;goto B6c2a30;
case 0x6c2a31:c.instructions+=3;goto B6c2a31;
case 0x6c2a32:c.instructions+=2;goto B6c2a32;
case 0x6c2a35:c.instructions+=1;goto B6c2a35;
case 0x6c2a3a:goto L6c2a3a;
case 0x6c2a3d:c.instructions+=4;goto B6c2a3d;
case 0x6c2a41:c.instructions+=3;goto B6c2a41;
case 0x6c2a45:c.instructions+=2;goto B6c2a45;
case 0x6c2a48:c.instructions+=1;goto B6c2a48;
case 0x6c2a4a:goto L6c2a4a;
case 0x6c2a4d:c.instructions+=1;goto B6c2a4d;
case 0x6c2a4f:goto L6c2a4f;
case 0x6c2a50:c.instructions+=2;goto B6c2a50;
case 0x6c2a53:c.instructions+=1;goto B6c2a53;
case 0x6c2a55:goto L6c2a55;
case 0x6c2a58:c.instructions+=1;goto B6c2a58;
case 0x6c2a5a:goto L6c2a5a;
case 0x6c2a5d:c.instructions+=4;goto B6c2a5d;
case 0x6c2a5e:c.instructions+=3;goto B6c2a5e;
case 0x6c2a63:c.instructions+=2;goto B6c2a63;
case 0x6c2a64:c.instructions+=1;goto B6c2a64;
case 0x6c2a69:goto L6c2a69;
case 0x6c2a6b:c.instructions+=3;goto B6c2a6b;
case 0x6c2a6c:c.instructions+=2;goto B6c2a6c;
case 0x6c2a6d:c.instructions+=1;goto B6c2a6d;
case 0x6c2a6f:goto L6c2a6f;
case 0x6c2a76:goto L6c2a76;
case 0x6c2a7a:c.instructions+=2;goto B6c2a7a;
case 0x6c2a7d:c.instructions+=1;goto B6c2a7d;
case 0x6c2a7f:goto L6c2a7f;
case 0x6c2a82:c.instructions+=2;goto B6c2a82;
case 0x6c2a83:c.instructions+=1;goto B6c2a83;
case 0x6c2a88:goto L6c2a88;
case 0x6c2a8a:c.instructions+=2;goto B6c2a8a;
case 0x6c2a8b:c.instructions+=1;goto B6c2a8b;
case 0x6c2a8d:goto L6c2a8d;
case 0x6c2a8e:c.instructions+=2;goto B6c2a8e;
case 0x6c2a91:c.instructions+=1;goto B6c2a91;
case 0x6c2a93:goto L6c2a93;
case 0x6c2a96:c.instructions+=1;goto B6c2a96;
case 0x6c2a98:goto L6c2a98;
case 0x6c2a99:c.instructions+=1;goto B6c2a99;
case 0x6c2a9e:goto L6c2a9e;
case 0x6c2a9f:c.instructions+=2;goto B6c2a9f;
case 0x6c2aa2:c.instructions+=1;goto B6c2aa2;
case 0x6c2aa4:goto L6c2aa4;
case 0x6c2aa5:c.instructions+=7;goto B6c2aa5;
case 0x6c2aaa:c.instructions+=6;goto B6c2aaa;
case 0x6c2ab0:c.instructions+=5;goto B6c2ab0;
case 0x6c2ab4:c.instructions+=4;goto B6c2ab4;
case 0x6c2ab9:c.instructions+=3;goto B6c2ab9;
case 0x6c2abc:c.instructions+=2;goto B6c2abc;
case 0x6c2abf:c.instructions+=1;goto B6c2abf;
case 0x6c2ac4:goto L6c2ac4;
case 0x6c2ac7:c.instructions+=1;goto B6c2ac7;
case 0x6c2acc:goto L6c2acc;
case 0x6c2ad0:goto L6c2ad0;
case 0x6c2ad3:c.instructions+=1;goto B6c2ad3;
case 0x6c2ad5:goto L6c2ad5;
case 0x6c2ad8:c.instructions+=1;goto B6c2ad8;
case 0x6c2ad9:goto L6c2ad9;
case 0x6c2adb:c.instructions+=2;goto B6c2adb;
case 0x6c2add:c.instructions+=1;goto B6c2add;
case 0x6c2adf:goto L6c2adf;
case 0x6c2ae2:c.instructions+=2;goto B6c2ae2;
case 0x6c2ae3:c.instructions+=1;goto B6c2ae3;
case 0x6c2ae8:goto L6c2ae8;
case 0x6c2aea:c.instructions+=2;goto B6c2aea;
case 0x6c2aeb:c.instructions+=1;goto B6c2aeb;
case 0x6c2aed:goto L6c2aed;
case 0x6c2aee:c.instructions+=3;goto B6c2aee;
case 0x6c2af0:c.instructions+=2;goto B6c2af0;
case 0x6c2af2:c.instructions+=1;goto B6c2af2;
case 0x6c2af4:goto L6c2af4;
case 0x6c2af7:c.instructions+=1;goto B6c2af7;
case 0x6c2af9:goto L6c2af9;
case 0x6c2afd:c.instructions+=1;goto B6c2afd;
case 0x6c2aff:goto L6c2aff;
case 0x6c2b02:c.instructions+=2;goto B6c2b02;
case 0x6c2b05:c.instructions+=1;goto B6c2b05;
case 0x6c2b08:goto L6c2b08;
case 0x6c2b0b:c.instructions+=2;goto B6c2b0b;
case 0x6c2b0c:c.instructions+=1;goto B6c2b0c;
case 0x6c2b11:goto L6c2b11;
case 0x6c2b14:c.instructions+=4;goto B6c2b14;
case 0x6c2b16:c.instructions+=3;goto B6c2b16;
case 0x6c2b1a:c.instructions+=2;goto B6c2b1a;
case 0x6c2b1d:c.instructions+=1;goto B6c2b1d;
case 0x6c2b23:goto L6c2b23;
case 0x6c2b26:c.instructions+=3;goto B6c2b26;
case 0x6c2b27:c.instructions+=2;goto B6c2b27;
case 0x6c2b29:c.instructions+=1;goto B6c2b29;
case 0x6c2b2e:goto L6c2b2e;
case 0x6c2b30:c.instructions+=3;goto B6c2b30;
case 0x6c2b31:c.instructions+=2;goto B6c2b31;
case 0x6c2b32:c.instructions+=1;goto B6c2b32;
case 0x6c2b34:goto L6c2b34;
case 0x6c2b38:c.instructions+=4;goto B6c2b38;
case 0x6c2b3a:c.instructions+=3;goto B6c2b3a;
case 0x6c2b3d:c.instructions+=2;goto B6c2b3d;
case 0x6c2b40:c.instructions+=1;goto B6c2b40;
case 0x6c2b42:goto L6c2b42;
case 0x6c2b45:c.instructions+=2;goto B6c2b45;
case 0x6c2b49:c.instructions+=1;goto B6c2b49;
case 0x6c2b4b:goto L6c2b4b;
case 0x6c2b4d:c.instructions+=1;goto B6c2b4d;
case 0x6c2b53:goto L6c2b53;
case 0x6c2b57:c.instructions+=1;goto B6c2b57;
case 0x6c2b5d:goto L6c2b5d;
case 0x6c2b61:c.instructions+=1;goto B6c2b61;
case 0x6c2b63:goto L6c2b63;
case 0x6c2b67:c.instructions+=1;goto B6c2b67;
case 0x6c2b69:goto L6c2b69;
case 0x6c2b6e:c.instructions+=2;goto B6c2b6e;
case 0x6c2b70:c.instructions+=1;goto B6c2b70;
case 0x6c2b72:goto L6c2b72;
case 0x6c2b77:goto L6c2b77;
case 0x6c2b7a:c.instructions+=2;goto B6c2b7a;
case 0x6c2b7c:c.instructions+=1;goto B6c2b7c;
case 0x6c2b7e:goto L6c2b7e;
case 0x6c2b81:c.instructions+=9;goto B6c2b81;
case 0x6c2b84:c.instructions+=8;goto B6c2b84;
case 0x6c2b85:c.instructions+=7;goto B6c2b85;
case 0x6c2b86:c.instructions+=6;goto B6c2b86;
case 0x6c2b89:c.instructions+=5;goto B6c2b89;
case 0x6c2b8e:c.instructions+=4;goto B6c2b8e;
case 0x6c2b93:c.instructions+=3;goto B6c2b93;
case 0x6c2b96:c.instructions+=2;goto B6c2b96;
case 0x6c2b99:c.instructions+=1;goto B6c2b99;
case 0x6c2b9e:goto L6c2b9e;
case 0x6c2ba1:c.instructions+=1;goto B6c2ba1;
case 0x6c2ba6:goto L6c2ba6;
case 0x6c2ba9:c.instructions+=2;goto B6c2ba9;
case 0x6c2bac:c.instructions+=1;goto B6c2bac;
case 0x6c2bae:goto L6c2bae;
case 0x6c2bb1:c.instructions+=1;goto B6c2bb1;
case 0x6c2bb3:goto L6c2bb3;
case 0x6c2bb5:goto L6c2bb5;
case 0x6c2bb8:c.instructions+=2;goto B6c2bb8;
case 0x6c2bbb:c.instructions+=1;goto B6c2bbb;
case 0x6c2bbd:goto L6c2bbd;
case 0x6c2bbf:c.instructions+=10;goto B6c2bbf;
case 0x6c2bc2:c.instructions+=9;goto B6c2bc2;
case 0x6c2bc5:c.instructions+=8;goto B6c2bc5;
case 0x6c2bcb:c.instructions+=7;goto B6c2bcb;
case 0x6c2bce:c.instructions+=6;goto B6c2bce;
case 0x6c2bcf:c.instructions+=5;goto B6c2bcf;
case 0x6c2bd4:c.instructions+=4;goto B6c2bd4;
case 0x6c2bd9:c.instructions+=3;goto B6c2bd9;
case 0x6c2bdc:c.instructions+=2;goto B6c2bdc;
case 0x6c2bdf:c.instructions+=1;goto B6c2bdf;
case 0x6c2be4:goto L6c2be4;
case 0x6c2be7:c.instructions+=1;goto B6c2be7;
case 0x6c2be9:goto L6c2be9;
case 0x6c2beb:c.instructions+=4;goto B6c2beb;
case 0x6c2bef:c.instructions+=3;goto B6c2bef;
case 0x6c2bf2:c.instructions+=2;goto B6c2bf2;
case 0x6c2bf5:c.instructions+=1;goto B6c2bf5;
case 0x6c2bf7:goto L6c2bf7;
case 0x6c2bf9:goto L6c2bf9;
case 0x6c2bfc:c.instructions+=8;goto B6c2bfc;
case 0x6c2bfe:c.instructions+=7;goto B6c2bfe;
case 0x6c2c01:c.instructions+=6;goto B6c2c01;
case 0x6c2c04:c.instructions+=5;goto B6c2c04;
case 0x6c2c0a:c.instructions+=4;goto B6c2c0a;
case 0x6c2c0c:c.instructions+=3;goto B6c2c0c;
case 0x6c2c10:c.instructions+=2;goto B6c2c10;
case 0x6c2c13:c.instructions+=1;goto B6c2c13;
case 0x6c2c15:goto L6c2c15;
case 0x6c2c19:c.instructions+=1;goto B6c2c19;
case 0x6c2c1b:goto L6c2c1b;
case 0x6c2c1f:c.instructions+=1;goto B6c2c1f;
case 0x6c2c23:goto L6c2c23;
case 0x6c2c26:c.instructions+=8;goto B6c2c26;
case 0x6c2c28:c.instructions+=7;goto B6c2c28;
case 0x6c2c2a:c.instructions+=6;goto B6c2c2a;
case 0x6c2c2b:c.instructions+=5;goto B6c2c2b;
case 0x6c2c2c:c.instructions+=4;goto B6c2c2c;
case 0x6c2c2f:c.instructions+=3;goto B6c2c2f;
case 0x6c2c30:c.instructions+=2;goto B6c2c30;
case 0x6c2c31:c.instructions+=1;goto B6c2c31;
case 0x6c2c34:goto L6c2c34;
case 0x6c2c36:c.instructions+=7;goto B6c2c36;
case 0x6c2c37:c.instructions+=6;goto B6c2c37;
case 0x6c2c39:c.instructions+=5;goto B6c2c39;
case 0x6c2c3c:c.instructions+=4;goto B6c2c3c;
case 0x6c2c3d:c.instructions+=3;goto B6c2c3d;
case 0x6c2c3e:c.instructions+=2;goto B6c2c3e;
case 0x6c2c3f:c.instructions+=1;goto B6c2c3f;
case 0x6c2c44:goto L6c2c44;
case 0x6c2c46:c.instructions+=4;goto B6c2c46;
case 0x6c2c49:c.instructions+=3;goto B6c2c49;
case 0x6c2c4c:c.instructions+=2;goto B6c2c4c;
case 0x6c2c4f:c.instructions+=1;goto B6c2c4f;
case 0x6c2c55:goto L6c2c55;
case 0x6c2c58:c.instructions+=6;goto B6c2c58;
case 0x6c2c5b:c.instructions+=5;goto B6c2c5b;
case 0x6c2c5e:c.instructions+=4;goto B6c2c5e;
case 0x6c2c61:c.instructions+=3;goto B6c2c61;
case 0x6c2c65:c.instructions+=2;goto B6c2c65;
case 0x6c2c67:c.instructions+=1;goto B6c2c67;
case 0x6c2c69:goto L6c2c69;
case 0x6c2c6c:c.instructions+=3;goto B6c2c6c;
case 0x6c2c6f:c.instructions+=2;goto B6c2c6f;
case 0x6c2c72:c.instructions+=1;goto B6c2c72;
case 0x6c2c75:goto L6c2c75;
case 0x6c2c78:c.instructions+=4;goto B6c2c78;
case 0x6c2c7a:c.instructions+=3;goto B6c2c7a;
case 0x6c2c7d:c.instructions+=2;goto B6c2c7d;
case 0x6c2c7f:c.instructions+=1;goto B6c2c7f;
case 0x6c2c81:goto L6c2c81;
case 0x6c2c88:goto L6c2c88;
case 0x6c2c8b:c.instructions+=2;goto B6c2c8b;
case 0x6c2c8e:c.instructions+=1;goto B6c2c8e;
case 0x6c2c90:goto L6c2c90;
case 0x6c2c93:goto L6c2c93;
case 0x6c2c95:c.instructions+=1;goto B6c2c95;
case 0x6c2c97:goto L6c2c97;
case 0x6c2c9e:goto L6c2c9e;
case 0x6c2ca2:c.instructions+=2;goto B6c2ca2;
case 0x6c2ca5:c.instructions+=1;goto B6c2ca5;
case 0x6c2ca7:goto L6c2ca7;
case 0x6c2ca9:c.instructions+=2;goto B6c2ca9;
case 0x6c2cac:c.instructions+=1;goto B6c2cac;
case 0x6c2cae:goto L6c2cae;
case 0x6c2cb1:c.instructions+=1;goto B6c2cb1;
case 0x6c2cb3:goto L6c2cb3;
case 0x6c2cb6:c.instructions+=6;goto B6c2cb6;
case 0x6c2cb9:c.instructions+=5;goto B6c2cb9;
case 0x6c2cbc:c.instructions+=4;goto B6c2cbc;
case 0x6c2cbf:c.instructions+=3;goto B6c2cbf;
case 0x6c2cc1:c.instructions+=2;goto B6c2cc1;
case 0x6c2cc3:c.instructions+=1;goto B6c2cc3;
case 0x6c2cc5:goto L6c2cc5;
case 0x6c2cc7:c.instructions+=2;goto B6c2cc7;
case 0x6c2cc9:c.instructions+=1;goto B6c2cc9;
case 0x6c2cd0:goto L6c2cd0;
case 0x6c2cd1:c.instructions+=2;goto B6c2cd1;
case 0x6c2cd4:c.instructions+=1;goto B6c2cd4;
case 0x6c2cd6:goto L6c2cd6;
case 0x6c2cd9:c.instructions+=3;goto B6c2cd9;
case 0x6c2cdc:c.instructions+=2;goto B6c2cdc;
case 0x6c2cdf:c.instructions+=1;goto B6c2cdf;
case 0x6c2ce5:goto L6c2ce5;
case 0x6c2ce7:c.instructions+=2;goto B6c2ce7;
case 0x6c2cea:c.instructions+=1;goto B6c2cea;
case 0x6c2cf0:goto L6c2cf0;
case 0x6c2cf3:c.instructions+=1;goto B6c2cf3;
case 0x6c2cf5:goto L6c2cf5;
case 0x6c2cf8:c.instructions+=4;goto B6c2cf8;
case 0x6c2cfb:c.instructions+=3;goto B6c2cfb;
case 0x6c2cfe:c.instructions+=2;goto B6c2cfe;
case 0x6c2d01:c.instructions+=1;goto B6c2d01;
case 0x6c2d03:goto L6c2d03;
case 0x6c2d06:c.instructions+=2;goto B6c2d06;
case 0x6c2d08:c.instructions+=1;goto B6c2d08;
case 0x6c2d0a:goto L6c2d0a;
case 0x6c2d0c:goto L6c2d0c;
case 0x6c2d0d:c.instructions+=2;goto B6c2d0d;
case 0x6c2d10:c.instructions+=1;goto B6c2d10;
case 0x6c2d12:goto L6c2d12;
case 0x6c2d13:c.instructions+=5;goto B6c2d13;
case 0x6c2d14:c.instructions+=4;goto B6c2d14;
case 0x6c2d16:c.instructions+=3;goto B6c2d16;
case 0x6c2d17:c.instructions+=2;goto B6c2d17;
case 0x6c2d18:c.instructions+=1;goto B6c2d18;
case 0x6c2d19:goto L6c2d19;
case 0x6c2d1b:c.instructions+=14;goto B6c2d1b;
case 0x6c2d1c:c.instructions+=13;goto B6c2d1c;
case 0x6c2d1e:c.instructions+=12;goto B6c2d1e;
case 0x6c2d1f:c.instructions+=11;goto B6c2d1f;
case 0x6c2d20:c.instructions+=10;goto B6c2d20;
case 0x6c2d21:c.instructions+=9;goto B6c2d21;
case 0x6c2d22:c.instructions+=8;goto B6c2d22;
case 0x6c2d24:c.instructions+=7;goto B6c2d24;
case 0x6c2d2a:c.instructions+=6;goto B6c2d2a;
case 0x6c2d2c:c.instructions+=5;goto B6c2d2c;
case 0x6c2d2e:c.instructions+=4;goto B6c2d2e;
case 0x6c2d34:c.instructions+=3;goto B6c2d34;
case 0x6c2d3a:c.instructions+=2;goto B6c2d3a;
case 0x6c2d3b:c.instructions+=1;goto B6c2d3b;
case 0x6c2d41:goto L6c2d41;
case 0x6c2d46:c.instructions+=2;goto B6c2d46;
case 0x6c2d49:c.instructions+=1;goto B6c2d49;
case 0x6c2d4f:goto L6c2d4f;
case 0x6c2d53:c.instructions+=1;goto B6c2d53;
case 0x6c2d55:goto L6c2d55;
case 0x6c2d5b:c.instructions+=5;goto B6c2d5b;
case 0x6c2d60:c.instructions+=4;goto B6c2d60;
case 0x6c2d65:c.instructions+=3;goto B6c2d65;
case 0x6c2d68:c.instructions+=2;goto B6c2d68;
case 0x6c2d69:c.instructions+=1;goto B6c2d69;
case 0x6c2d6e:goto L6c2d6e;
case 0x6c2d71:c.instructions+=2;goto B6c2d71;
case 0x6c2d76:c.instructions+=1;goto B6c2d76;
case 0x6c2d7b:goto L6c2d7b;
case 0x6c2d7d:c.instructions+=1;goto B6c2d7d;
case 0x6c2d82:goto L6c2d82;
case 0x6c2d84:c.instructions+=2;goto B6c2d84;
case 0x6c2d86:c.instructions+=1;goto B6c2d86;
case 0x6c2d88:goto L6c2d88;
case 0x6c2d8a:c.instructions+=1;goto B6c2d8a;
case 0x6c2d8f:goto L6c2d8f;
case 0x6c2d91:c.instructions+=1;goto B6c2d91;
case 0x6c2d93:goto L6c2d93;
case 0x6c2d95:goto L6c2d95;
case 0x6c2d97:c.instructions+=1;goto B6c2d97;
case 0x6c2d99:goto L6c2d99;
case 0x6c2d9e:c.instructions+=1;goto B6c2d9e;
case 0x6c2da3:goto L6c2da3;
case 0x6c2da4:c.instructions+=5;goto B6c2da4;
case 0x6c2da6:c.instructions+=4;goto B6c2da6;
case 0x6c2da8:c.instructions+=3;goto B6c2da8;
case 0x6c2dad:c.instructions+=2;goto B6c2dad;
case 0x6c2daf:c.instructions+=1;goto B6c2daf;
case 0x6c2db4:goto L6c2db4;
case 0x6c2db6:c.instructions+=3;goto B6c2db6;
case 0x6c2db9:c.instructions+=2;goto B6c2db9;
case 0x6c2dbb:c.instructions+=1;goto B6c2dbb;
case 0x6c2dbd:goto L6c2dbd;
case 0x6c2dc3:c.instructions+=1;goto B6c2dc3;
case 0x6c2dc8:goto L6c2dc8;
case 0x6c2dca:c.instructions+=2;goto B6c2dca;
case 0x6c2dcd:c.instructions+=1;goto B6c2dcd;
case 0x6c2dcf:goto L6c2dcf;
case 0x6c2dd0:c.instructions+=8;goto B6c2dd0;
case 0x6c2dd2:c.instructions+=7;goto B6c2dd2;
case 0x6c2dd3:c.instructions+=6;goto B6c2dd3;
case 0x6c2dd6:c.instructions+=5;goto B6c2dd6;
case 0x6c2dd7:c.instructions+=4;goto B6c2dd7;
case 0x6c2dd8:c.instructions+=3;goto B6c2dd8;
case 0x6c2dd9:c.instructions+=2;goto B6c2dd9;
case 0x6c2ddb:c.instructions+=1;goto B6c2ddb;
case 0x6c2de0:goto L6c2de0;
case 0x6c2de3:c.instructions+=2;goto B6c2de3;
case 0x6c2de6:c.instructions+=1;goto B6c2de6;
case 0x6c2de8:goto L6c2de8;
case 0x6c2dea:goto L6c2dea;
case 0x6c2dec:c.instructions+=1;goto B6c2dec;
case 0x6c2df1:goto L6c2df1;
case 0x6c2df4:c.instructions+=1;goto B6c2df4;
case 0x6c2df9:goto L6c2df9;
case 0x6c2dfc:c.instructions+=7;goto B6c2dfc;
case 0x6c2dff:c.instructions+=6;goto B6c2dff;
case 0x6c2e05:c.instructions+=5;goto B6c2e05;
case 0x6c2e08:c.instructions+=4;goto B6c2e08;
case 0x6c2e0a:c.instructions+=3;goto B6c2e0a;
case 0x6c2e0d:c.instructions+=2;goto B6c2e0d;
case 0x6c2e0f:c.instructions+=1;goto B6c2e0f;
case 0x6c2e14:goto L6c2e14;
case 0x6c2e1a:c.instructions+=14;goto B6c2e1a;
case 0x6c2e1d:c.instructions+=13;goto B6c2e1d;
case 0x6c2e1f:c.instructions+=12;goto B6c2e1f;
case 0x6c2e22:c.instructions+=11;goto B6c2e22;
case 0x6c2e24:c.instructions+=10;goto B6c2e24;
case 0x6c2e2a:c.instructions+=9;goto B6c2e2a;
case 0x6c2e2d:c.instructions+=8;goto B6c2e2d;
case 0x6c2e30:c.instructions+=7;goto B6c2e30;
case 0x6c2e32:c.instructions+=6;goto B6c2e32;
case 0x6c2e34:c.instructions+=5;goto B6c2e34;
case 0x6c2e37:c.instructions+=4;goto B6c2e37;
case 0x6c2e3a:c.instructions+=3;goto B6c2e3a;
case 0x6c2e3d:c.instructions+=2;goto B6c2e3d;
case 0x6c2e41:c.instructions+=1;goto B6c2e41;
case 0x6c2e43:goto L6c2e43;
case 0x6c2e49:c.instructions+=5;goto B6c2e49;
case 0x6c2e4c:c.instructions+=4;goto B6c2e4c;
case 0x6c2e4e:c.instructions+=3;goto B6c2e4e;
case 0x6c2e52:c.instructions+=2;goto B6c2e52;
case 0x6c2e55:c.instructions+=1;goto B6c2e55;
case 0x6c2e57:goto L6c2e57;
case 0x6c2e5e:goto L6c2e5e;
case 0x6c2e64:c.instructions+=2;goto B6c2e64;
case 0x6c2e65:c.instructions+=1;goto B6c2e65;
case 0x6c2e6a:goto L6c2e6a;
case 0x6c2e6c:c.instructions+=3;goto B6c2e6c;
case 0x6c2e6e:c.instructions+=2;goto B6c2e6e;
case 0x6c2e70:c.instructions+=1;goto B6c2e70;
case 0x6c2e75:goto L6c2e75;
case 0x6c2e77:c.instructions+=1;goto B6c2e77;
case 0x6c2e79:goto L6c2e79;
case 0x6c2e7b:c.instructions+=1;goto B6c2e7b;
case 0x6c2e7c:goto L6c2e7c;
case 0x6c2e7d:c.instructions+=4;goto B6c2e7d;
case 0x6c2e7e:c.instructions+=3;goto B6c2e7e;
case 0x6c2e7f:c.instructions+=2;goto B6c2e7f;
case 0x6c2e80:c.instructions+=1;goto B6c2e80;
case 0x6c2e81:goto L6c2e81;
case 0x6c2e83:c.instructions+=14;goto B6c2e83;
case 0x6c2e84:c.instructions+=13;goto B6c2e84;
case 0x6c2e86:c.instructions+=12;goto B6c2e86;
case 0x6c2e89:c.instructions+=11;goto B6c2e89;
case 0x6c2e8a:c.instructions+=10;goto B6c2e8a;
case 0x6c2e8c:c.instructions+=9;goto B6c2e8c;
case 0x6c2e92:c.instructions+=8;goto B6c2e92;
case 0x6c2e94:c.instructions+=7;goto B6c2e94;
case 0x6c2e95:c.instructions+=6;goto B6c2e95;
case 0x6c2e97:c.instructions+=5;goto B6c2e97;
case 0x6c2e9d:c.instructions+=4;goto B6c2e9d;
case 0x6c2ea2:c.instructions+=3;goto B6c2ea2;
case 0x6c2ea7:c.instructions+=2;goto B6c2ea7;
case 0x6c2eaa:c.instructions+=1;goto B6c2eaa;
case 0x6c2eac:goto L6c2eac;
case 0x6c2eae:c.instructions+=2;goto B6c2eae;
case 0x6c2eaf:c.instructions+=1;goto B6c2eaf;
case 0x6c2eb4:goto L6c2eb4;
case 0x6c2eb6:c.instructions+=7;goto B6c2eb6;
case 0x6c2eb9:c.instructions+=6;goto B6c2eb9;
case 0x6c2ebc:c.instructions+=5;goto B6c2ebc;
case 0x6c2ebf:c.instructions+=4;goto B6c2ebf;
case 0x6c2ec0:c.instructions+=3;goto B6c2ec0;
case 0x6c2ec4:c.instructions+=2;goto B6c2ec4;
case 0x6c2ec6:c.instructions+=1;goto B6c2ec6;
case 0x6c2ec8:goto L6c2ec8;
case 0x6c2ece:c.instructions+=4;goto B6c2ece;
case 0x6c2ed1:c.instructions+=3;goto B6c2ed1;
case 0x6c2ed4:c.instructions+=2;goto B6c2ed4;
case 0x6c2ed7:c.instructions+=1;goto B6c2ed7;
case 0x6c2eda:goto L6c2eda;
case 0x6c2edd:c.instructions+=8;goto B6c2edd;
case 0x6c2ee0:c.instructions+=7;goto B6c2ee0;
case 0x6c2ee2:c.instructions+=6;goto B6c2ee2;
case 0x6c2ee4:c.instructions+=5;goto B6c2ee4;
case 0x6c2ee7:c.instructions+=4;goto B6c2ee7;
case 0x6c2eea:c.instructions+=3;goto B6c2eea;
case 0x6c2eed:c.instructions+=2;goto B6c2eed;
case 0x6c2ef0:c.instructions+=1;goto B6c2ef0;
case 0x6c2ef2:goto L6c2ef2;
case 0x6c2ef5:c.instructions+=2;goto B6c2ef5;
case 0x6c2ef8:c.instructions+=1;goto B6c2ef8;
case 0x6c2efa:goto L6c2efa;
case 0x6c2efd:c.instructions+=2;goto B6c2efd;
case 0x6c2f00:c.instructions+=1;goto B6c2f00;
case 0x6c2f02:goto L6c2f02;
case 0x6c2f05:c.instructions+=2;goto B6c2f05;
case 0x6c2f08:c.instructions+=1;goto B6c2f08;
case 0x6c2f0a:goto L6c2f0a;
case 0x6c2f0d:c.instructions+=4;goto B6c2f0d;
case 0x6c2f11:c.instructions+=3;goto B6c2f11;
case 0x6c2f14:c.instructions+=2;goto B6c2f14;
case 0x6c2f17:c.instructions+=1;goto B6c2f17;
case 0x6c2f19:goto L6c2f19;
case 0x6c2f1c:c.instructions+=1;goto B6c2f1c;
case 0x6c2f22:goto L6c2f22;
case 0x6c2f23:c.instructions+=7;goto B6c2f23;
case 0x6c2f25:c.instructions+=6;goto B6c2f25;
case 0x6c2f2a:c.instructions+=5;goto B6c2f2a;
case 0x6c2f2b:c.instructions+=4;goto B6c2f2b;
case 0x6c2f30:c.instructions+=3;goto B6c2f30;
case 0x6c2f31:c.instructions+=2;goto B6c2f31;
case 0x6c2f33:c.instructions+=1;goto B6c2f33;
case 0x6c2f38:goto L6c2f38;
case 0x6c2f3b:c.instructions+=2;goto B6c2f3b;
case 0x6c2f3e:c.instructions+=1;goto B6c2f3e;
case 0x6c2f44:goto L6c2f44;
case 0x6c2f47:c.instructions+=4;goto B6c2f47;
case 0x6c2f4b:c.instructions+=3;goto B6c2f4b;
case 0x6c2f4d:c.instructions+=2;goto B6c2f4d;
case 0x6c2f50:c.instructions+=1;goto B6c2f50;
case 0x6c2f56:goto L6c2f56;
case 0x6c2f59:c.instructions+=16;goto B6c2f59;
case 0x6c2f5c:c.instructions+=15;goto B6c2f5c;
case 0x6c2f62:c.instructions+=14;goto B6c2f62;
case 0x6c2f65:c.instructions+=13;goto B6c2f65;
case 0x6c2f68:c.instructions+=12;goto B6c2f68;
case 0x6c2f6b:c.instructions+=11;goto B6c2f6b;
case 0x6c2f6e:c.instructions+=10;goto B6c2f6e;
case 0x6c2f71:c.instructions+=9;goto B6c2f71;
case 0x6c2f74:c.instructions+=8;goto B6c2f74;
case 0x6c2f77:c.instructions+=7;goto B6c2f77;
case 0x6c2f7d:c.instructions+=6;goto B6c2f7d;
case 0x6c2f80:c.instructions+=5;goto B6c2f80;
case 0x6c2f83:c.instructions+=4;goto B6c2f83;
case 0x6c2f86:c.instructions+=3;goto B6c2f86;
case 0x6c2f89:c.instructions+=2;goto B6c2f89;
case 0x6c2f8b:c.instructions+=1;goto B6c2f8b;
case 0x6c2f90:goto L6c2f90;
case 0x6c2f96:c.instructions+=11;goto B6c2f96;
case 0x6c2f99:c.instructions+=10;goto B6c2f99;
case 0x6c2f9c:c.instructions+=9;goto B6c2f9c;
case 0x6c2f9f:c.instructions+=8;goto B6c2f9f;
case 0x6c2fa5:c.instructions+=7;goto B6c2fa5;
case 0x6c2fa8:c.instructions+=6;goto B6c2fa8;
case 0x6c2fab:c.instructions+=5;goto B6c2fab;
case 0x6c2fae:c.instructions+=4;goto B6c2fae;
case 0x6c2fb1:c.instructions+=3;goto B6c2fb1;
case 0x6c2fb4:c.instructions+=2;goto B6c2fb4;
case 0x6c2fb8:c.instructions+=1;goto B6c2fb8;
case 0x6c2fbe:goto L6c2fbe;
case 0x6c2fc1:c.instructions+=21;goto B6c2fc1;
case 0x6c2fc4:c.instructions+=20;goto B6c2fc4;
case 0x6c2fc7:c.instructions+=19;goto B6c2fc7;
case 0x6c2fca:c.instructions+=18;goto B6c2fca;
case 0x6c2fcd:c.instructions+=17;goto B6c2fcd;
case 0x6c2fd0:c.instructions+=16;goto B6c2fd0;
case 0x6c2fd3:c.instructions+=15;goto B6c2fd3;
case 0x6c2fd6:c.instructions+=14;goto B6c2fd6;
case 0x6c2fd9:c.instructions+=13;goto B6c2fd9;
case 0x6c2fdd:c.instructions+=12;goto B6c2fdd;
case 0x6c2fe0:c.instructions+=11;goto B6c2fe0;
case 0x6c2fe3:c.instructions+=10;goto B6c2fe3;
case 0x6c2fe6:c.instructions+=9;goto B6c2fe6;
case 0x6c2fe9:c.instructions+=8;goto B6c2fe9;
case 0x6c2fec:c.instructions+=7;goto B6c2fec;
case 0x6c2fef:c.instructions+=6;goto B6c2fef;
case 0x6c2ff2:c.instructions+=5;goto B6c2ff2;
case 0x6c2ff5:c.instructions+=4;goto B6c2ff5;
case 0x6c2ff8:c.instructions+=3;goto B6c2ff8;
case 0x6c2ffb:c.instructions+=2;goto B6c2ffb;
case 0x6c2ffe:c.instructions+=1;goto B6c2ffe;
default:missing_instruction(c.pc);}
B6c2001:L6c2001:{c.instructions+=5;NFSU2_TR(0x6c2001);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2004:{NFSU2_TR(0x6c2004);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c2007:{NFSU2_TR(0x6c2007);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6c2009:{NFSU2_TR(0x6c2009);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c200c:{NFSU2_TR(0x6c200c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c2053;}}
}
B6c200e:L6c200e:{c.instructions+=4;NFSU2_TR(0x6c200e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2011:{NFSU2_TR(0x6c2011);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2012:{NFSU2_TR(0x6c2012);
__builtin_memmove((R+28),(R+8),4);
}
B6c2014:{NFSU2_TR(0x6c2014);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2015:L6c2015:{c.instructions+=6;NFSU2_TR(0x6c2015);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c2017:{NFSU2_TR(0x6c2017);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c201a:{NFSU2_TR(0x6c201a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c201d:{NFSU2_TR(0x6c201d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c2020:{NFSU2_TR(0x6c2020);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c2023:{NFSU2_TR(0x6c2023);
if(r1(R+518)){{goto L6c202a;}}
}
B6c2025:L6c2025:{c.instructions+=2;NFSU2_TR(0x6c2025);
u8 U[1];
w1(U+0,u8(u32(r1(R+13))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c2028:{NFSU2_TR(0x6c2028);
if(r1(R+518)){{goto L6c202f;}}
}
B6c202a:L6c202a:{c.instructions+=2;NFSU2_TR(0x6c202a);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c202d:{NFSU2_TR(0x6c202d);
if(r1(R+518)){{goto L6c2051;}}
}
B6c202f:L6c202f:{c.instructions+=6;NFSU2_TR(0x6c202f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c2032:{NFSU2_TR(0x6c2032);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c2035:{NFSU2_TR(0x6c2035);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c2038:{NFSU2_TR(0x6c2038);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c203b:{NFSU2_TR(0x6c203b);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c203e:{NFSU2_TR(0x6c203e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2051;}}
}
B6c2040:L6c2040:{c.instructions+=3;NFSU2_TR(0x6c2040);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c2043:{NFSU2_TR(0x6c2043);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2046:{NFSU2_TR(0x6c2046);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2051;}}
}
B6c2048:L6c2048:{c.instructions+=4;NFSU2_TR(0x6c2048);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c2049:{NFSU2_TR(0x6c2049);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6c204c:{NFSU2_TR(0x6c204c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c204f:{NFSU2_TR(0x6c204f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2015u);}goto L6c2015;}}
}
B6c2051:L6c2051:{c.instructions+=2;NFSU2_TR(0x6c2051);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c2052:{NFSU2_TR(0x6c2052);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c2053:L6c2053:{c.instructions+=7;NFSU2_TR(0x6c2053);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2056:{NFSU2_TR(0x6c2056);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6c2057:{NFSU2_TR(0x6c2057);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c2059:{NFSU2_TR(0x6c2059);
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
B6c205b:{NFSU2_TR(0x6c205b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c205c:{NFSU2_TR(0x6c205c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c205d:{NFSU2_TR(0x6c205d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c2060:L6c2060:{c.instructions+=14;NFSU2_TR(0x6c2060);
__builtin_memmove((R+28),(R+28),4);
}
B6c2062:{NFSU2_TR(0x6c2062);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2063:{NFSU2_TR(0x6c2063);
__builtin_memmove((R+20),(R+16),4);
}
B6c2065:{NFSU2_TR(0x6c2065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20cull))));
}
B6c206b:{NFSU2_TR(0x6c206b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c206c:{NFSU2_TR(0x6c206c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c206d:{NFSU2_TR(0x6c206d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c206e:{NFSU2_TR(0x6c206e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c2070:{NFSU2_TR(0x6c2070);
__builtin_memmove((R+24),(R+4),4);
}
B6c2072:{NFSU2_TR(0x6c2072);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B6c2074:{NFSU2_TR(0x6c2074);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2077:{NFSU2_TR(0x6c2077);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6c207a:{NFSU2_TR(0x6c207a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c207d:{NFSU2_TR(0x6c207d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c20d9;}}
}
B6c207f:L6c207f:{c.instructions+=9;NFSU2_TR(0x6c207f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2082:{NFSU2_TR(0x6c2082);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2085:{NFSU2_TR(0x6c2085);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c2088:{NFSU2_TR(0x6c2088);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c208b:{NFSU2_TR(0x6c208b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c208e:{NFSU2_TR(0x6c208e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c2091:{NFSU2_TR(0x6c2091);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2094:{NFSU2_TR(0x6c2094);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c2096:{NFSU2_TR(0x6c2096);
if(r1(R+518)){{goto L6c209d;}}
}
B6c2098:L6c2098:{c.instructions+=2;NFSU2_TR(0x6c2098);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c209b:{NFSU2_TR(0x6c209b);
if(r1(R+518)){{goto L6c20a1;}}
}
B6c209d:L6c209d:{c.instructions+=2;NFSU2_TR(0x6c209d);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c209f:{NFSU2_TR(0x6c209f);
if(r1(R+518)){{goto L6c20c0;}}
}
B6c20a1:L6c20a1:{c.instructions+=5;NFSU2_TR(0x6c20a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c20a3:{NFSU2_TR(0x6c20a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c20a4:{NFSU2_TR(0x6c20a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c20a5:{NFSU2_TR(0x6c20a5);
__builtin_memmove((R+4),(R+24),4);
}
B6c20a7:{NFSU2_TR(0x6c20a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c20aaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6c20aa:L6c20aa:{c.instructions+=2;NFSU2_TR(0x6c20aa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c20ac:{NFSU2_TR(0x6c20ac);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6c20c0;}}
}
B6c20ae:L6c20ae:{c.instructions+=4;NFSU2_TR(0x6c20ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c20b1:{NFSU2_TR(0x6c20b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c20b2:{NFSU2_TR(0x6c20b2);
__builtin_memmove((R+4),(R+24),4);
}
B6c20b4:{NFSU2_TR(0x6c20b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c20b9ull));
TAIL_STATIC(0x6c1febu,6c1);
}
B6c20b9:L6c20b9:{c.instructions+=2;NFSU2_TR(0x6c20b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6c20bd:{NFSU2_TR(0x6c20bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6c20c0:L6c20c0:{c.instructions+=4;NFSU2_TR(0x6c20c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c20c3:{NFSU2_TR(0x6c20c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c20c6:{NFSU2_TR(0x6c20c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c20c9:{NFSU2_TR(0x6c20c9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c207fu);}goto L6c207f;}}
}
B6c20cb:L6c20cb:{c.instructions+=2;NFSU2_TR(0x6c20cb);
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
B6c20cd:{NFSU2_TR(0x6c20cd);
if(r1(R+518)){{goto L6c20d9;}}
}
B6c20cf:L6c20cf:{c.instructions+=2;NFSU2_TR(0x6c20cf);
w4(R+0,u32(0x80004005ull));
}
B6c20d4:{NFSU2_TR(0x6c20d4);
{goto L6c21d2;}
}
B6c20d9:L6c20d9:{c.instructions+=3;NFSU2_TR(0x6c20d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c20dc:{NFSU2_TR(0x6c20dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c20df:{NFSU2_TR(0x6c20df);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c21c6;}}
}
B6c20e5:L6c20e5:{c.instructions+=9;NFSU2_TR(0x6c20e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c20e8:{NFSU2_TR(0x6c20e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c20eb:{NFSU2_TR(0x6c20eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c20ee:{NFSU2_TR(0x6c20ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c20f1:{NFSU2_TR(0x6c20f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c20f4:{NFSU2_TR(0x6c20f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c20f7:{NFSU2_TR(0x6c20f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c20fa:{NFSU2_TR(0x6c20fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c20fd:{NFSU2_TR(0x6c20fd);
if(r1(R+518)){{goto L6c2104;}}
}
B6c20ff:L6c20ff:{c.instructions+=2;NFSU2_TR(0x6c20ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c2102:{NFSU2_TR(0x6c2102);
if(r1(R+518)){{goto L6c210d;}}
}
B6c2104:L6c2104:{c.instructions+=2;NFSU2_TR(0x6c2104);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c2107:{NFSU2_TR(0x6c2107);
if(r1(R+518)){{goto L6c21b7;}}
}
B6c210d:L6c210d:{c.instructions+=6;NFSU2_TR(0x6c210d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2110:{NFSU2_TR(0x6c2110);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c2111:{NFSU2_TR(0x6c2111);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2114:{NFSU2_TR(0x6c2114);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2117:{NFSU2_TR(0x6c2117);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6c211a:{NFSU2_TR(0x6c211a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c21b7;}}
}
B6c2120:L6c2120:{c.instructions+=2;NFSU2_TR(0x6c2120);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2123:{NFSU2_TR(0x6c2123);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c2126:L6c2126:{c.instructions+=3;NFSU2_TR(0x6c2126);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6c2128:{NFSU2_TR(0x6c2128);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c212b:{NFSU2_TR(0x6c212b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2149;}}
}
B6c212d:L6c212d:{c.instructions+=3;NFSU2_TR(0x6c212d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2130:{NFSU2_TR(0x6c2130);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2133:{NFSU2_TR(0x6c2133);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2149;}}
}
B6c2135:L6c2135:{c.instructions+=3;NFSU2_TR(0x6c2135);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2138:{NFSU2_TR(0x6c2138);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c213b:{NFSU2_TR(0x6c213b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2149;}}
}
B6c213d:L6c213d:{c.instructions+=4;NFSU2_TR(0x6c213d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c213f:{NFSU2_TR(0x6c213f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+0))));
}
B6c2141:{NFSU2_TR(0x6c2141);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x1000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c2147:{NFSU2_TR(0x6c2147);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2159;}}
}
B6c2149:L6c2149:{c.instructions+=5;NFSU2_TR(0x6c2149);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c214c:{NFSU2_TR(0x6c214c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c214f:{NFSU2_TR(0x6c214f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c2152:{NFSU2_TR(0x6c2152);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6c2155:{NFSU2_TR(0x6c2155);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2126u);}goto L6c2126;}}
}
B6c2157:L6c2157:{c.instructions+=1;NFSU2_TR(0x6c2157);
{goto L6c21b4;}
}
B6c2159:L6c2159:{c.instructions+=6;NFSU2_TR(0x6c2159);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c215e:{NFSU2_TR(0x6c215e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c2164:{NFSU2_TR(0x6c2164);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2165:{NFSU2_TR(0x6c2165);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2166:{NFSU2_TR(0x6c2166);
__builtin_memmove((R+4),(R+24),4);
}
B6c2168:{NFSU2_TR(0x6c2168);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c216dull));
TAIL_STATIC(0x699f6fu,699);
}
B6c216d:L6c216d:{c.instructions+=6;NFSU2_TR(0x6c216d);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2172:{NFSU2_TR(0x6c2172);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c2178:{NFSU2_TR(0x6c2178);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2179:{NFSU2_TR(0x6c2179);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c217a:{NFSU2_TR(0x6c217a);
__builtin_memmove((R+4),(R+24),4);
}
B6c217c:{NFSU2_TR(0x6c217c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2181ull));
TAIL_STATIC(0x699f6fu,699);
}
B6c2181:L6c2181:{c.instructions+=9;NFSU2_TR(0x6c2181);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c2187:{NFSU2_TR(0x6c2187);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2188:{NFSU2_TR(0x6c2188);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c218e:{NFSU2_TR(0x6c218e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c218f:{NFSU2_TR(0x6c218f);
u8 U[4];
w4(U+0,u32(0x7bee20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2194:{NFSU2_TR(0x6c2194);
u8 U[4];
w4(U+0,u32(0x1195ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2199:{NFSU2_TR(0x6c2199);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c219c:{NFSU2_TR(0x6c219c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c219d:{NFSU2_TR(0x6c219d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c21a2ull));
TAIL_STATIC(0x69e936u,69e);
}
B6c21a2:L6c21a2:{c.instructions+=5;NFSU2_TR(0x6c21a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6c21a5:{NFSU2_TR(0x6c21a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c21a8:{NFSU2_TR(0x6c21a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c21a9:{NFSU2_TR(0x6c21a9);
__builtin_memmove((R+4),(R+24),4);
}
B6c21ab:{NFSU2_TR(0x6c21ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c21b0ull));
TAIL_STATIC(0x6c1febu,6c1);
}
B6c21b0:L6c21b0:{c.instructions+=1;NFSU2_TR(0x6c21b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6c21b4:L6c21b4:{c.instructions+=1;NFSU2_TR(0x6c21b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6c21b7:L6c21b7:{c.instructions+=4;NFSU2_TR(0x6c21b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c21ba:{NFSU2_TR(0x6c21ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c21bd:{NFSU2_TR(0x6c21bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c21c0:{NFSU2_TR(0x6c21c0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c20e5u);}goto L6c20e5;}}
}
B6c21c6:L6c21c6:{c.instructions+=4;NFSU2_TR(0x6c21c6);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B6c21c8:{NFSU2_TR(0x6c21c8);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6c21ca:{NFSU2_TR(0x6c21ca);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x80004005ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c21d0:{NFSU2_TR(0x6c21d0);
__builtin_memmove((R+0),(R+12),4);
}
B6c21d2:L6c21d2:{c.instructions+=5;NFSU2_TR(0x6c21d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c21d3:{NFSU2_TR(0x6c21d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c21d4:{NFSU2_TR(0x6c21d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c21d5:{NFSU2_TR(0x6c21d5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c21d6:{NFSU2_TR(0x6c21d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c21d7:L6c21d7:{c.instructions+=11;NFSU2_TR(0x6c21d7);
__builtin_memmove((R+28),(R+28),4);
}
B6c21d9:{NFSU2_TR(0x6c21d9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c21da:{NFSU2_TR(0x6c21da);
__builtin_memmove((R+20),(R+16),4);
}
B6c21dc:{NFSU2_TR(0x6c21dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c21dd:{NFSU2_TR(0x6c21dd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c21de:{NFSU2_TR(0x6c21de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c21e1:{NFSU2_TR(0x6c21e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c21e2:{NFSU2_TR(0x6c21e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c21e5:{NFSU2_TR(0x6c21e5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c21e8:{NFSU2_TR(0x6c21e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c21eb:{NFSU2_TR(0x6c21eb);
if(r1(R+518)){{goto L6c2215;}}
}
B6c21ed:L6c21ed:{c.instructions+=5;NFSU2_TR(0x6c21ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c21ee:{NFSU2_TR(0x6c21ee);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c21f0:{NFSU2_TR(0x6c21f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c21f3:{NFSU2_TR(0x6c21f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c21f6:{NFSU2_TR(0x6c21f6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c2214;}}
}
B6c21f8:L6c21f8:{c.instructions+=8;NFSU2_TR(0x6c21f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c21fb:{NFSU2_TR(0x6c21fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c21fe:{NFSU2_TR(0x6c21fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2201:{NFSU2_TR(0x6c2201);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2202:{NFSU2_TR(0x6c2202);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6c2205:{NFSU2_TR(0x6c2205);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2208:{NFSU2_TR(0x6c2208);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2209:{NFSU2_TR(0x6c2209);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c220eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c21d7u);}goto L6c21d7;}
}
B6c220e:L6c220e:{c.instructions+=3;NFSU2_TR(0x6c220e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c220f:{NFSU2_TR(0x6c220f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c2212:{NFSU2_TR(0x6c2212);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c21f8u);}goto L6c21f8;}}
}
B6c2214:L6c2214:{c.instructions+=1;NFSU2_TR(0x6c2214);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c2215:L6c2215:{c.instructions+=5;NFSU2_TR(0x6c2215);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c2216:{NFSU2_TR(0x6c2216);
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
B6c2218:{NFSU2_TR(0x6c2218);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c2219:{NFSU2_TR(0x6c2219);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c221a:{NFSU2_TR(0x6c221a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c221d:L6c221d:{c.instructions+=11;NFSU2_TR(0x6c221d);
__builtin_memmove((R+28),(R+28),4);
}
B6c221f:{NFSU2_TR(0x6c221f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2220:{NFSU2_TR(0x6c2220);
__builtin_memmove((R+20),(R+16),4);
}
B6c2222:{NFSU2_TR(0x6c2222);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2223:{NFSU2_TR(0x6c2223);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2224:{NFSU2_TR(0x6c2224);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c2227:{NFSU2_TR(0x6c2227);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2228:{NFSU2_TR(0x6c2228);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c222b:{NFSU2_TR(0x6c222b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c222e:{NFSU2_TR(0x6c222e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2231:{NFSU2_TR(0x6c2231);
if(r1(R+518)){{goto L6c225b;}}
}
B6c2233:L6c2233:{c.instructions+=5;NFSU2_TR(0x6c2233);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2234:{NFSU2_TR(0x6c2234);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c2236:{NFSU2_TR(0x6c2236);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2239:{NFSU2_TR(0x6c2239);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c223c:{NFSU2_TR(0x6c223c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c225a;}}
}
B6c223e:L6c223e:{c.instructions+=8;NFSU2_TR(0x6c223e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2241:{NFSU2_TR(0x6c2241);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c2244:{NFSU2_TR(0x6c2244);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2247:{NFSU2_TR(0x6c2247);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2248:{NFSU2_TR(0x6c2248);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6c224b:{NFSU2_TR(0x6c224b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c224e:{NFSU2_TR(0x6c224e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c224f:{NFSU2_TR(0x6c224f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2254ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c221du);}goto L6c221d;}
}
B6c2254:L6c2254:{c.instructions+=3;NFSU2_TR(0x6c2254);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c2255:{NFSU2_TR(0x6c2255);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c2258:{NFSU2_TR(0x6c2258);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c223eu);}goto L6c223e;}}
}
B6c225a:L6c225a:{c.instructions+=1;NFSU2_TR(0x6c225a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c225b:L6c225b:{c.instructions+=5;NFSU2_TR(0x6c225b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c225c:{NFSU2_TR(0x6c225c);
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
B6c225e:{NFSU2_TR(0x6c225e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c225f:{NFSU2_TR(0x6c225f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c2260:{NFSU2_TR(0x6c2260);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c2263:L6c2263:{c.instructions+=11;NFSU2_TR(0x6c2263);
__builtin_memmove((R+28),(R+28),4);
}
B6c2265:{NFSU2_TR(0x6c2265);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2266:{NFSU2_TR(0x6c2266);
__builtin_memmove((R+20),(R+16),4);
}
B6c2268:{NFSU2_TR(0x6c2268);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2269:{NFSU2_TR(0x6c2269);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c226a:{NFSU2_TR(0x6c226a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c226d:{NFSU2_TR(0x6c226d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c226e:{NFSU2_TR(0x6c226e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c2271:{NFSU2_TR(0x6c2271);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2274:{NFSU2_TR(0x6c2274);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2277:{NFSU2_TR(0x6c2277);
if(r1(R+518)){{goto L6c22a1;}}
}
B6c2279:L6c2279:{c.instructions+=5;NFSU2_TR(0x6c2279);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c227a:{NFSU2_TR(0x6c227a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c227c:{NFSU2_TR(0x6c227c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c227f:{NFSU2_TR(0x6c227f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2282:{NFSU2_TR(0x6c2282);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c22a0;}}
}
B6c2284:L6c2284:{c.instructions+=8;NFSU2_TR(0x6c2284);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2287:{NFSU2_TR(0x6c2287);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c228a:{NFSU2_TR(0x6c228a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c228d:{NFSU2_TR(0x6c228d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c228e:{NFSU2_TR(0x6c228e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6c2291:{NFSU2_TR(0x6c2291);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2294:{NFSU2_TR(0x6c2294);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2295:{NFSU2_TR(0x6c2295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c229aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2263u);}goto L6c2263;}
}
B6c229a:L6c229a:{c.instructions+=3;NFSU2_TR(0x6c229a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c229b:{NFSU2_TR(0x6c229b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c229e:{NFSU2_TR(0x6c229e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2284u);}goto L6c2284;}}
}
B6c22a0:L6c22a0:{c.instructions+=1;NFSU2_TR(0x6c22a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c22a1:L6c22a1:{c.instructions+=5;NFSU2_TR(0x6c22a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c22a2:{NFSU2_TR(0x6c22a2);
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
B6c22a4:{NFSU2_TR(0x6c22a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c22a5:{NFSU2_TR(0x6c22a5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c22a6:{NFSU2_TR(0x6c22a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c22a9:L6c22a9:{c.instructions+=11;NFSU2_TR(0x6c22a9);
__builtin_memmove((R+28),(R+28),4);
}
B6c22ab:{NFSU2_TR(0x6c22ab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c22ac:{NFSU2_TR(0x6c22ac);
__builtin_memmove((R+20),(R+16),4);
}
B6c22ae:{NFSU2_TR(0x6c22ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c22af:{NFSU2_TR(0x6c22af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c22b0:{NFSU2_TR(0x6c22b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c22b3:{NFSU2_TR(0x6c22b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c22b4:{NFSU2_TR(0x6c22b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c22b7:{NFSU2_TR(0x6c22b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6c22ba:{NFSU2_TR(0x6c22ba);
__builtin_memmove((R+12),(R+4),4);
}
B6c22bc:{NFSU2_TR(0x6c22bc);
{goto L6c2320;}
}
B6c22be:L6c22be:{c.instructions+=2;NFSU2_TR(0x6c22be);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B6c22c1:{NFSU2_TR(0x6c22c1);
{goto L6c22c7;}
}
B6c22c3:L6c22c3:{c.instructions+=2;NFSU2_TR(0x6c22c3);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c22c4:{NFSU2_TR(0x6c22c4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6c22c7:L6c22c7:{c.instructions+=2;NFSU2_TR(0x6c22c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c22c8:{NFSU2_TR(0x6c22c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c22cdull));
TAIL_STATIC(0x75dfecu,75d);
}
B6c22cd:L6c22cd:{c.instructions+=3;NFSU2_TR(0x6c22cd);
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
B6c22cf:{NFSU2_TR(0x6c22cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c22d0:{NFSU2_TR(0x6c22d0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c22c3u);}goto L6c22c3;}}
}
B6c22d2:L6c22d2:{c.instructions+=3;NFSU2_TR(0x6c22d2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6c22d5:{NFSU2_TR(0x6c22d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c22d6:{NFSU2_TR(0x6c22d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c22dbull));
TAIL_STATIC(0x75ded8u,75d);
}
B6c22db:L6c22db:{c.instructions+=4;NFSU2_TR(0x6c22db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c22dc:{NFSU2_TR(0x6c22dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B6c22e0:{NFSU2_TR(0x6c22e0);
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
B6c22e2:{NFSU2_TR(0x6c22e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2312;}}
}
B6c22e4:L6c22e4:{c.instructions+=3;NFSU2_TR(0x6c22e4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c22e6:{NFSU2_TR(0x6c22e6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c22e8:{NFSU2_TR(0x6c22e8);
if(r1(R+518)){{goto L6c234a;}}
}
B6c22ea:L6c22ea:{c.instructions+=3;NFSU2_TR(0x6c22ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c22ed:{NFSU2_TR(0x6c22ed);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c22ef:{NFSU2_TR(0x6c22ef);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c2332;}}
}
B6c22f1:L6c22f1:{c.instructions+=2;NFSU2_TR(0x6c22f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c22f4:{NFSU2_TR(0x6c22f4);
__builtin_memmove((R+24),(R+4),4);
}
B6c22f6:L6c22f6:{c.instructions+=4;NFSU2_TR(0x6c22f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c22f8:{NFSU2_TR(0x6c22f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c22fb:{NFSU2_TR(0x6c22fb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c22fe:{NFSU2_TR(0x6c22fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2302;}}
}
B6c2300:L6c2300:{c.instructions+=1;NFSU2_TR(0x6c2300);
__builtin_memmove((R+8),(R+4),4);
}
B6c2302:L6c2302:{c.instructions+=3;NFSU2_TR(0x6c2302);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c2305:{NFSU2_TR(0x6c2305);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6c2306:{NFSU2_TR(0x6c2306);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c22f6u);}goto L6c22f6;}}
}
B6c2308:L6c2308:{c.instructions+=2;NFSU2_TR(0x6c2308);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c230a:{NFSU2_TR(0x6c230a);
if(r1(R+518)){{goto L6c2332;}}
}
B6c230c:L6c230c:{c.instructions+=2;NFSU2_TR(0x6c230c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c230f:{NFSU2_TR(0x6c230f);
{goto L6c2334;}
}
B6c2311:L6c2311:{c.instructions+=1;NFSU2_TR(0x6c2311);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c2312:L6c2312:{c.instructions+=3;NFSU2_TR(0x6c2312);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6c2315:{NFSU2_TR(0x6c2315);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2316:{NFSU2_TR(0x6c2316);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c231bull));
TAIL_STATIC(0x75dfecu,75d);
}
B6c231b:L6c231b:{c.instructions+=3;NFSU2_TR(0x6c231b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c231d:{NFSU2_TR(0x6c231d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c231e:{NFSU2_TR(0x6c231e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2311u);}goto L6c2311;}}
}
B6c2320:L6c2320:{c.instructions+=3;NFSU2_TR(0x6c2320);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6c2322:{NFSU2_TR(0x6c2322);
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
B6c2324:{NFSU2_TR(0x6c2324);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c22beu);}goto L6c22be;}}
}
B6c2326:L6c2326:{c.instructions+=1;NFSU2_TR(0x6c2326);
w4(R+0,u32(0x80004005ull));
}
B6c232b:L6c232b:{c.instructions+=5;NFSU2_TR(0x6c232b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c232c:{NFSU2_TR(0x6c232c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c232d:{NFSU2_TR(0x6c232d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c232e:{NFSU2_TR(0x6c232e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6c232f:{NFSU2_TR(0x6c232f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c2332:L6c2332:{c.instructions+=1;NFSU2_TR(0x6c2332);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c2334:L6c2334:{c.instructions+=5;NFSU2_TR(0x6c2334);
u8 U[4];
w4(U+0,u32(0x7bee50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2339:{NFSU2_TR(0x6c2339);
u8 U[4];
w4(U+0,u32(0x119dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c233e:{NFSU2_TR(0x6c233e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c233f:{NFSU2_TR(0x6c233f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2340:{NFSU2_TR(0x6c2340);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2345ull));
TAIL_STATIC(0x69e936u,69e);
}
B6c2345:L6c2345:{c.instructions+=2;NFSU2_TR(0x6c2345);
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
B6c2348:{NFSU2_TR(0x6c2348);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2326u);}goto L6c2326;}
}
B6c234a:L6c234a:{c.instructions+=3;NFSU2_TR(0x6c234a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6c234c:{NFSU2_TR(0x6c234c);
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
B6c234e:{NFSU2_TR(0x6c234e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c232bu);}goto L6c232b;}
}
B6c2350:L6c2350:{c.instructions+=13;NFSU2_TR(0x6c2350);
__builtin_memmove((R+28),(R+28),4);
}
B6c2352:{NFSU2_TR(0x6c2352);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2353:{NFSU2_TR(0x6c2353);
__builtin_memmove((R+20),(R+16),4);
}
B6c2355:{NFSU2_TR(0x6c2355);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6c2358:{NFSU2_TR(0x6c2358);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2359:{NFSU2_TR(0x6c2359);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c235a:{NFSU2_TR(0x6c235a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c235c:{NFSU2_TR(0x6c235c);
__builtin_memmove((R+24),(R+4),4);
}
B6c235e:{NFSU2_TR(0x6c235e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2361:{NFSU2_TR(0x6c2361);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2362:{NFSU2_TR(0x6c2362);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2365:{NFSU2_TR(0x6c2365);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2368:{NFSU2_TR(0x6c2368);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c23e4;}}
}
B6c236a:L6c236a:{c.instructions+=6;NFSU2_TR(0x6c236a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c236d:{NFSU2_TR(0x6c236d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c2370:{NFSU2_TR(0x6c2370);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c2373:{NFSU2_TR(0x6c2373);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2377:{NFSU2_TR(0x6c2377);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c237a:{NFSU2_TR(0x6c237a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c23de;}}
}
B6c237c:L6c237c:{c.instructions+=4;NFSU2_TR(0x6c237c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c237e:{NFSU2_TR(0x6c237e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2381:{NFSU2_TR(0x6c2381);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2384:{NFSU2_TR(0x6c2384);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c23a3;}}
}
B6c2386:L6c2386:{c.instructions+=4;NFSU2_TR(0x6c2386);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2389:{NFSU2_TR(0x6c2389);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c238c:{NFSU2_TR(0x6c238c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c238f:{NFSU2_TR(0x6c238f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c239d;}}
}
B6c2391:L6c2391:{c.instructions+=4;NFSU2_TR(0x6c2391);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2394:{NFSU2_TR(0x6c2394);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c2395:{NFSU2_TR(0x6c2395);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2398:{NFSU2_TR(0x6c2398);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c239d;}}
}
B6c239a:L6c239a:{c.instructions+=1;NFSU2_TR(0x6c239a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c239d:L6c239d:{c.instructions+=3;NFSU2_TR(0x6c239d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c239e:{NFSU2_TR(0x6c239e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c23a1:{NFSU2_TR(0x6c23a1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2386u);}goto L6c2386;}}
}
B6c23a3:L6c23a3:{c.instructions+=2;NFSU2_TR(0x6c23a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c23a6:{NFSU2_TR(0x6c23a6);
if(r1(R+518)){{goto L6c23b3;}}
}
B6c23a8:L6c23a8:{c.instructions+=2;NFSU2_TR(0x6c23a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c23ab:{NFSU2_TR(0x6c23ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c23b3;}}
}
B6c23ad:L6c23ad:{c.instructions+=2;NFSU2_TR(0x6c23ad);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffffbfull))));
}
B6c23b0:{NFSU2_TR(0x6c23b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c23b3:L6c23b3:{c.instructions+=3;NFSU2_TR(0x6c23b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c23b6:{NFSU2_TR(0x6c23b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c23b9:{NFSU2_TR(0x6c23b9);
if(r1(R+518)){{goto L6c23c6;}}
}
B6c23bb:L6c23bb:{c.instructions+=2;NFSU2_TR(0x6c23bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xaull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c23be:{NFSU2_TR(0x6c23be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c23c6;}}
}
B6c23c0:L6c23c0:{c.instructions+=2;NFSU2_TR(0x6c23c0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffffbfull))));
}
B6c23c3:{NFSU2_TR(0x6c23c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c23c6:L6c23c6:{c.instructions+=3;NFSU2_TR(0x6c23c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c23c9:{NFSU2_TR(0x6c23c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6c23cb:{NFSU2_TR(0x6c23cb);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6c23de;}}
}
B6c23cd:L6c23cd:{c.instructions+=2;NFSU2_TR(0x6c23cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c23d0:{NFSU2_TR(0x6c23d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c23de;}}
}
B6c23d2:L6c23d2:{c.instructions+=2;NFSU2_TR(0x6c23d2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c23d6:{NFSU2_TR(0x6c23d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c23de;}}
}
B6c23d8:L6c23d8:{c.instructions+=2;NFSU2_TR(0x6c23d8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffffbfull))));
}
B6c23db:{NFSU2_TR(0x6c23db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c23de:L6c23de:{c.instructions+=3;NFSU2_TR(0x6c23de);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6c23df:{NFSU2_TR(0x6c23df);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6c23e2:{NFSU2_TR(0x6c23e2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c236au);}goto L6c236a;}}
}
B6c23e4:L6c23e4:{c.instructions+=4;NFSU2_TR(0x6c23e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c23e7:{NFSU2_TR(0x6c23e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6c23ea:{NFSU2_TR(0x6c23ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c23eb:{NFSU2_TR(0x6c23eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c23f0ull));
TAIL_STATIC(0x575620u,575);
}
B6c23f0:L6c23f0:{c.instructions+=4;NFSU2_TR(0x6c23f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c23f2:{NFSU2_TR(0x6c23f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c23f3:{NFSU2_TR(0x6c23f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c23f6:{NFSU2_TR(0x6c23f6);
if(r1(R+518)){{goto L6c28f1;}}
}
B6c23fc:L6c23fc:{c.instructions+=6;NFSU2_TR(0x6c23fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2400:{NFSU2_TR(0x6c2400);
__builtin_memmove((R+4),(R+28),4);
}
B6c2402:{NFSU2_TR(0x6c2402);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c2405:{NFSU2_TR(0x6c2405);
__builtin_memmove((R+8),(R+4),4);
}
B6c2407:{NFSU2_TR(0x6c2407);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c240a:{NFSU2_TR(0x6c240a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c240c:L6c240c:{c.instructions+=1;NFSU2_TR(0x6c240c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c240e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c240cu);}goto L6c240c;}
}
B6c240e:L6c240e:{c.instructions+=2;NFSU2_TR(0x6c240e);
__builtin_memmove((R+4),(R+8),4);
}
B6c2410:{NFSU2_TR(0x6c2410);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c2413:L6c2413:{c.instructions+=1;NFSU2_TR(0x6c2413);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6c2415;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2413u);}goto L6c2413;}
}
B6c2415:L6c2415:{c.instructions+=2;NFSU2_TR(0x6c2415);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2419:{NFSU2_TR(0x6c2419);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c2548;}}
}
B6c241f:L6c241f:{c.instructions+=8;NFSU2_TR(0x6c241f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2422:{NFSU2_TR(0x6c2422);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2425:{NFSU2_TR(0x6c2425);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c2428:{NFSU2_TR(0x6c2428);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c242b:{NFSU2_TR(0x6c242b);
__builtin_memmove((R+4),(R+0),4);
}
B6c242d:{NFSU2_TR(0x6c242d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(U+4))));
}
B6c2430:{NFSU2_TR(0x6c2430);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2433:{NFSU2_TR(0x6c2433);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2539;}}
}
B6c2439:L6c2439:{c.instructions+=3;NFSU2_TR(0x6c2439);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c243c:{NFSU2_TR(0x6c243c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c243e:{NFSU2_TR(0x6c243e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2539;}}
}
B6c2444:L6c2444:{c.instructions+=2;NFSU2_TR(0x6c2444);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c2446:{NFSU2_TR(0x6c2446);
if(r1(R+518)){{goto L6c2539;}}
}
B6c244c:L6c244c:{c.instructions+=2;NFSU2_TR(0x6c244c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c244f:{NFSU2_TR(0x6c244f);
if(r1(R+518)){{goto L6c2539;}}
}
B6c2455:L6c2455:{c.instructions+=2;NFSU2_TR(0x6c2455);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2459:{NFSU2_TR(0x6c2459);
if(r1(R+518)){{goto L6c2539;}}
}
B6c245f:L6c245f:{c.instructions+=8;NFSU2_TR(0x6c245f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c2462:{NFSU2_TR(0x6c2462);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2466:{NFSU2_TR(0x6c2466);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c2469:{NFSU2_TR(0x6c2469);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c246c:{NFSU2_TR(0x6c246c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c246d:{NFSU2_TR(0x6c246d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6c246f:{NFSU2_TR(0x6c246f);
__builtin_memmove((R+4),(R+24),4);
}
B6c2471:{NFSU2_TR(0x6c2471);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2476ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c22a9u);}goto L6c22a9;}
}
B6c2476:L6c2476:{c.instructions+=3;NFSU2_TR(0x6c2476);
__builtin_memmove((R+12),(R+0),4);
}
B6c2478:{NFSU2_TR(0x6c2478);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c247a:{NFSU2_TR(0x6c247a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c29ae;}}
}
B6c2480:L6c2480:{c.instructions+=3;NFSU2_TR(0x6c2480);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c2483:{NFSU2_TR(0x6c2483);
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
B6c2485:{NFSU2_TR(0x6c2485);
if(r1(R+518)){{goto L6c24d8;}}
}
B6c2487:L6c2487:{c.instructions+=3;NFSU2_TR(0x6c2487);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6c248a:{NFSU2_TR(0x6c248a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c248b:{NFSU2_TR(0x6c248b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2490ull));
TAIL_STATIC(0x75ded8u,75d);
}
B6c2490:L6c2490:{c.instructions+=4;NFSU2_TR(0x6c2490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c2491:{NFSU2_TR(0x6c2491);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B6c2495:{NFSU2_TR(0x6c2495);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6c2497:{NFSU2_TR(0x6c2497);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c24d8;}}
}
B6c2499:L6c2499:{c.instructions+=5;NFSU2_TR(0x6c2499);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c249c:{NFSU2_TR(0x6c249c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c249f:{NFSU2_TR(0x6c249f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6c24a2:{NFSU2_TR(0x6c24a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c24a3:{NFSU2_TR(0x6c24a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c24a8ull));
TAIL_STATIC(0x75df39u,75d);
}
B6c24a8:L6c24a8:{c.instructions+=3;NFSU2_TR(0x6c24a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c24aa:{NFSU2_TR(0x6c24aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c24ab:{NFSU2_TR(0x6c24ab);
if(r1(R+518)){{goto L6c24d8;}}
}
B6c24ad:L6c24ad:{c.instructions+=2;NFSU2_TR(0x6c24ad);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x2ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x2ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c24b0:{NFSU2_TR(0x6c24b0);
{goto L6c24b3;}
}
B6c24b2:L6c24b2:{c.instructions+=1;NFSU2_TR(0x6c24b2);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c24b3:L6c24b3:{c.instructions+=3;NFSU2_TR(0x6c24b3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6c24b6:{NFSU2_TR(0x6c24b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c24b7:{NFSU2_TR(0x6c24b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c24bcull));
TAIL_STATIC(0x75df39u,75d);
}
B6c24bc:L6c24bc:{c.instructions+=3;NFSU2_TR(0x6c24bc);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c24be:{NFSU2_TR(0x6c24be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c24bf:{NFSU2_TR(0x6c24bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c24b2u);}goto L6c24b2;}}
}
B6c24c1:L6c24c1:{c.instructions+=3;NFSU2_TR(0x6c24c1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6c24c3:{NFSU2_TR(0x6c24c3);
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
B6c24c5:{NFSU2_TR(0x6c24c5);
if(r1(R+518)){{goto L6c24cc;}}
}
B6c24c7:L6c24c7:{c.instructions+=2;NFSU2_TR(0x6c24c7);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(U+3))<(u8(0x3bull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x3bull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x3bull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c24ca:{NFSU2_TR(0x6c24ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c24d8;}}
}
B6c24cc:L6c24cc:{c.instructions+=2;NFSU2_TR(0x6c24cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c24cf:{NFSU2_TR(0x6c24cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c24d4ull));
TAIL_STATIC(0x75d65bu,75d);
}
B6c24d4:L6c24d4:{c.instructions+=2;NFSU2_TR(0x6c24d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c24d5:{NFSU2_TR(0x6c24d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c24d8:L6c24d8:{c.instructions+=3;NFSU2_TR(0x6c24d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c24db:{NFSU2_TR(0x6c24db);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6c24de:{NFSU2_TR(0x6c24de);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c2622;}}
}
B6c24e4:L6c24e4:{c.instructions+=3;NFSU2_TR(0x6c24e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c24e8:{NFSU2_TR(0x6c24e8);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c24ec:{NFSU2_TR(0x6c24ec);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c2539;}}
}
B6c24ee:L6c24ee:{c.instructions+=5;NFSU2_TR(0x6c24ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c24f1:{NFSU2_TR(0x6c24f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c24f4:{NFSU2_TR(0x6c24f4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6c24f6:{NFSU2_TR(0x6c24f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c24f9:{NFSU2_TR(0x6c24f9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c2670;}}
}
B6c24ff:L6c24ff:{c.instructions+=4;NFSU2_TR(0x6c24ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2502:{NFSU2_TR(0x6c2502);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6c2505:{NFSU2_TR(0x6c2505);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c2508:{NFSU2_TR(0x6c2508);
if(r1(R+518)){{goto L6c2525;}}
}
B6c250a:L6c250a:{c.instructions+=8;NFSU2_TR(0x6c250a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c250b:{NFSU2_TR(0x6c250b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B6c250f:{NFSU2_TR(0x6c250f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2510:{NFSU2_TR(0x6c2510);
u8 U[4];
w4(U+0,u32(0x7bf0bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2515:{NFSU2_TR(0x6c2515);
u8 U[4];
w4(U+0,u32(0x1194ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c251a:{NFSU2_TR(0x6c251a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c251c:{NFSU2_TR(0x6c251c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c251d:{NFSU2_TR(0x6c251d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2522ull));
TAIL_STATIC(0x69e936u,69e);
}
B6c2522:L6c2522:{c.instructions+=1;NFSU2_TR(0x6c2522);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6c2525:L6c2525:{c.instructions+=8;NFSU2_TR(0x6c2525);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2528:{NFSU2_TR(0x6c2528);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6c252a:{NFSU2_TR(0x6c252a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c252d:{NFSU2_TR(0x6c252d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2530:{NFSU2_TR(0x6c2530);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c2531:{NFSU2_TR(0x6c2531);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c2534:{NFSU2_TR(0x6c2534);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2537:{NFSU2_TR(0x6c2537);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c24eeu);}goto L6c24ee;}}
}
B6c2539:L6c2539:{c.instructions+=4;NFSU2_TR(0x6c2539);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c253c:{NFSU2_TR(0x6c253c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c253f:{NFSU2_TR(0x6c253f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c2542:{NFSU2_TR(0x6c2542);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c241fu);}goto L6c241f;}}
}
B6c2548:L6c2548:{c.instructions+=4;NFSU2_TR(0x6c2548);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c254b:{NFSU2_TR(0x6c254b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c254f:{NFSU2_TR(0x6c254f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c2551:{NFSU2_TR(0x6c2551);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c2585;}}
}
B6c2553:L6c2553:{c.instructions+=2;NFSU2_TR(0x6c2553);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c2556:{NFSU2_TR(0x6c2556);
__builtin_memmove((R+28),(R+0),4);
}
B6c2558:L6c2558:{c.instructions+=6;NFSU2_TR(0x6c2558);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c255a:{NFSU2_TR(0x6c255a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c255d:{NFSU2_TR(0x6c255d);
__builtin_memmove((R+12),(R+4),4);
}
B6c255f:{NFSU2_TR(0x6c255f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))&u32(r4(U+4))));
}
B6c2562:{NFSU2_TR(0x6c2562);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2565:{NFSU2_TR(0x6c2565);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c257f;}}
}
B6c2567:L6c2567:{c.instructions+=2;NFSU2_TR(0x6c2567);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c256a:{NFSU2_TR(0x6c256a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c257f;}}
}
B6c256c:L6c256c:{c.instructions+=2;NFSU2_TR(0x6c256c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c256f:{NFSU2_TR(0x6c256f);
if(r1(R+518)){{goto L6c257f;}}
}
B6c2571:L6c2571:{c.instructions+=2;NFSU2_TR(0x6c2571);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c2574:{NFSU2_TR(0x6c2574);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c257f;}}
}
B6c2576:L6c2576:{c.instructions+=2;NFSU2_TR(0x6c2576);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c257a:{NFSU2_TR(0x6c257a);
if(r1(R+518)){{goto L6c257f;}}
}
B6c257c:L6c257c:{c.instructions+=1;NFSU2_TR(0x6c257c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c257f:L6c257f:{c.instructions+=3;NFSU2_TR(0x6c257f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6c2582:{NFSU2_TR(0x6c2582);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6c2583:{NFSU2_TR(0x6c2583);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2558u);}goto L6c2558;}}
}
B6c2585:L6c2585:{c.instructions+=4;NFSU2_TR(0x6c2585);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2588:{NFSU2_TR(0x6c2588);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c258b:{NFSU2_TR(0x6c258b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c258c:{NFSU2_TR(0x6c258c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2591ull));
TAIL_STATIC(0x575620u,575);
}
B6c2591:L6c2591:{c.instructions+=5;NFSU2_TR(0x6c2591);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c2592:{NFSU2_TR(0x6c2592);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c2594:{NFSU2_TR(0x6c2594);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c2596:{NFSU2_TR(0x6c2596);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2599:{NFSU2_TR(0x6c2599);
if(r1(R+518)){{goto L6c28f1;}}
}
B6c259f:L6c259f:{c.instructions+=3;NFSU2_TR(0x6c259f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c25a2:{NFSU2_TR(0x6c25a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c25a5:{NFSU2_TR(0x6c25a5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c25e1;}}
}
B6c25a7:L6c25a7:{c.instructions+=7;NFSU2_TR(0x6c25a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c25aa:{NFSU2_TR(0x6c25aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c25ad:{NFSU2_TR(0x6c25ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c25b0:{NFSU2_TR(0x6c25b0);
__builtin_memmove((R+28),(R+8),4);
}
B6c25b2:{NFSU2_TR(0x6c25b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))&u32(r4(U+4))));
}
B6c25b5:{NFSU2_TR(0x6c25b5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c25b8:{NFSU2_TR(0x6c25b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c25db;}}
}
B6c25ba:L6c25ba:{c.instructions+=2;NFSU2_TR(0x6c25ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c25bd:{NFSU2_TR(0x6c25bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c25db;}}
}
B6c25bf:L6c25bf:{c.instructions+=2;NFSU2_TR(0x6c25bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c25c2:{NFSU2_TR(0x6c25c2);
if(r1(R+518)){{goto L6c25db;}}
}
B6c25c4:L6c25c4:{c.instructions+=2;NFSU2_TR(0x6c25c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c25c7:{NFSU2_TR(0x6c25c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c25db;}}
}
B6c25c9:L6c25c9:{c.instructions+=2;NFSU2_TR(0x6c25c9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c25cd:{NFSU2_TR(0x6c25cd);
if(r1(R+518)){{goto L6c25db;}}
}
B6c25cf:L6c25cf:{c.instructions+=4;NFSU2_TR(0x6c25cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c25d2:{NFSU2_TR(0x6c25d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c25d5:{NFSU2_TR(0x6c25d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c25d8:{NFSU2_TR(0x6c25d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c25db:L6c25db:{c.instructions+=3;NFSU2_TR(0x6c25db);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c25dc:{NFSU2_TR(0x6c25dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6c25df:{NFSU2_TR(0x6c25df);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c25a7u);}goto L6c25a7;}}
}
B6c25e1:L6c25e1:{c.instructions+=6;NFSU2_TR(0x6c25e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c25e4:{NFSU2_TR(0x6c25e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c25e5:{NFSU2_TR(0x6c25e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c25e8:{NFSU2_TR(0x6c25e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c25e9:{NFSU2_TR(0x6c25e9);
u8 U[4];
w4(U+0,u32(0x6c1875ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c25ee:{NFSU2_TR(0x6c25ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c25f3ull));
TAIL_STATIC(0x69a41du,69a);
}
B6c25f3:L6c25f3:{c.instructions+=3;NFSU2_TR(0x6c25f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c25f7:{NFSU2_TR(0x6c25f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c25fb:{NFSU2_TR(0x6c25fb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c2727;}}
}
B6c2601:L6c2601:{c.instructions+=1;NFSU2_TR(0x6c2601);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2604:L6c2604:{c.instructions+=7;NFSU2_TR(0x6c2604);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2607:{NFSU2_TR(0x6c2607);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c2609:{NFSU2_TR(0x6c2609);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c260c:{NFSU2_TR(0x6c260c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c260f:{NFSU2_TR(0x6c260f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c2611:{NFSU2_TR(0x6c2611);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2614:{NFSU2_TR(0x6c2614);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c26e3;}}
}
B6c261a:L6c261a:{c.instructions+=2;NFSU2_TR(0x6c261a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c261d:{NFSU2_TR(0x6c261d);
{goto L6c26b9;}
}
B6c2622:L6c2622:{c.instructions+=4;NFSU2_TR(0x6c2622);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2625:{NFSU2_TR(0x6c2625);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c2627:{NFSU2_TR(0x6c2627);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c2629:{NFSU2_TR(0x6c2629);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c264e;}}
}
B6c262b:L6c262b:{c.instructions+=2;NFSU2_TR(0x6c262b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c262e:{NFSU2_TR(0x6c262e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2631:L6c2631:{c.instructions+=4;NFSU2_TR(0x6c2631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c2633:{NFSU2_TR(0x6c2633);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c2636:{NFSU2_TR(0x6c2636);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2639:{NFSU2_TR(0x6c2639);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c263d;}}
}
B6c263b:L6c263b:{c.instructions+=1;NFSU2_TR(0x6c263b);
__builtin_memmove((R+8),(R+4),4);
}
B6c263d:L6c263d:{c.instructions+=3;NFSU2_TR(0x6c263d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c2640:{NFSU2_TR(0x6c2640);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c2643:{NFSU2_TR(0x6c2643);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2631u);}goto L6c2631;}}
}
B6c2645:L6c2645:{c.instructions+=2;NFSU2_TR(0x6c2645);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c2647:{NFSU2_TR(0x6c2647);
if(r1(R+518)){{goto L6c264e;}}
}
B6c2649:L6c2649:{c.instructions+=2;NFSU2_TR(0x6c2649);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c264c:{NFSU2_TR(0x6c264c);
{goto L6c2650;}
}
B6c264e:L6c264e:{c.instructions+=1;NFSU2_TR(0x6c264e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c2650:L6c2650:{c.instructions+=8;NFSU2_TR(0x6c2650);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B6c2654:{NFSU2_TR(0x6c2654);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2655:{NFSU2_TR(0x6c2655);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6c2657:{NFSU2_TR(0x6c2657);
u8 U[4];
w4(U+0,u32(0x7bf048ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c265c:{NFSU2_TR(0x6c265c);
u8 U[4];
w4(U+0,u32(0x119dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2661:{NFSU2_TR(0x6c2661);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2662:{NFSU2_TR(0x6c2662);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2663:{NFSU2_TR(0x6c2663);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2668ull));
TAIL_STATIC(0x69e936u,69e);
}
B6c2668:L6c2668:{c.instructions+=2;NFSU2_TR(0x6c2668);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6c266b:{NFSU2_TR(0x6c266b);
{goto L6c2957;}
}
B6c2670:L6c2670:{c.instructions+=3;NFSU2_TR(0x6c2670);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B6c2674:{NFSU2_TR(0x6c2674);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x62ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6c2677:{NFSU2_TR(0x6c2677);
if(r1(R+518)){{goto L6c2932;}}
}
B6c267d:L6c267d:{c.instructions+=2;NFSU2_TR(0x6c267d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6c267e:{NFSU2_TR(0x6c267e);
if(r1(R+518)){{goto L6c2912;}}
}
B6c2684:L6c2684:{c.instructions+=2;NFSU2_TR(0x6c2684);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6c2687:{NFSU2_TR(0x6c2687);
if(r1(R+518)){{goto L6c28ea;}}
}
B6c268d:L6c268d:{c.instructions+=2;NFSU2_TR(0x6c268d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6c2690:{NFSU2_TR(0x6c2690);
if(r1(R+518)){{goto L6c26a0;}}
}
B6c2692:L6c2692:{c.instructions+=2;NFSU2_TR(0x6c2692);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6c2695:{NFSU2_TR(0x6c2695);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2957;}}
}
B6c269b:L6c269b:{c.instructions+=1;NFSU2_TR(0x6c269b);
{goto L6c2902;}
}
B6c26a0:L6c26a0:{c.instructions+=3;NFSU2_TR(0x6c26a0);
u8 U[4];
w4(U+0,u32(0x7bf020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c26a5:{NFSU2_TR(0x6c26a5);
u8 U[4];
w4(U+0,u32(0x119eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c26aa:{NFSU2_TR(0x6c26aa);
{goto L6c294c;}
}
B6c26af:L6c26af:{c.instructions+=3;NFSU2_TR(0x6c26af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c26b2:{NFSU2_TR(0x6c26b2);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6c26b6:{NFSU2_TR(0x6c26b6);
if(r1(R+518)){{goto L6c26be;}}
}
B6c26b8:L6c26b8:{c.instructions+=1;NFSU2_TR(0x6c26b8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c26b9:L6c26b9:{c.instructions+=2;NFSU2_TR(0x6c26b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c26bc:{NFSU2_TR(0x6c26bc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c26afu);}goto L6c26af;}}
}
B6c26be:L6c26be:{c.instructions+=3;NFSU2_TR(0x6c26be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c26c1:{NFSU2_TR(0x6c26c1);
__builtin_memmove((R+8),(R+0),4);
}
B6c26c3:{NFSU2_TR(0x6c26c3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c26d4;}}
}
B6c26c5:L6c26c5:{c.instructions+=3;NFSU2_TR(0x6c26c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c26c8:{NFSU2_TR(0x6c26c8);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6c26cc:{NFSU2_TR(0x6c26cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c26d4;}}
}
B6c26ce:L6c26ce:{c.instructions+=3;NFSU2_TR(0x6c26ce);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c26cf:{NFSU2_TR(0x6c26cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c26d2:{NFSU2_TR(0x6c26d2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c26c5u);}goto L6c26c5;}}
}
B6c26d4:L6c26d4:{c.instructions+=4;NFSU2_TR(0x6c26d4);
__builtin_memmove((R+12),(R+8),4);
}
B6c26d6:{NFSU2_TR(0x6c26d6);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B6c26d8:{NFSU2_TR(0x6c26d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B6c26da:{NFSU2_TR(0x6c26da);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c26e3;}}
}
B6c26dc:L6c26dc:{c.instructions+=3;NFSU2_TR(0x6c26dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c26df:{NFSU2_TR(0x6c26df);
__builtin_memmove((R+0),(R+8),4);
}
B6c26e1:{NFSU2_TR(0x6c26e1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c26b9u);}goto L6c26b9;}}
}
B6c26e3:L6c26e3:{c.instructions+=4;NFSU2_TR(0x6c26e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c26e6:{NFSU2_TR(0x6c26e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6c26e9:{NFSU2_TR(0x6c26e9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c26ec:{NFSU2_TR(0x6c26ec);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6c28d3;}}
}
B6c26f2:L6c26f2:{c.instructions+=3;NFSU2_TR(0x6c26f2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c26f4:{NFSU2_TR(0x6c26f4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c26f6:{NFSU2_TR(0x6c26f6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c2711;}}
}
B6c26f8:L6c26f8:{c.instructions+=2;NFSU2_TR(0x6c26f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c26fb:{NFSU2_TR(0x6c26fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6c26fe:L6c26fe:{c.instructions+=8;NFSU2_TR(0x6c26fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c2701:{NFSU2_TR(0x6c2701);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6c2703:{NFSU2_TR(0x6c2703);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2706:{NFSU2_TR(0x6c2706);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6c2708:{NFSU2_TR(0x6c2708);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c2709:{NFSU2_TR(0x6c2709);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B6c270c:{NFSU2_TR(0x6c270c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c270f:{NFSU2_TR(0x6c270f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c26feu);}goto L6c26fe;}}
}
B6c2711:L6c2711:{c.instructions+=6;NFSU2_TR(0x6c2711);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2714:{NFSU2_TR(0x6c2714);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2718:{NFSU2_TR(0x6c2718);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c271b:{NFSU2_TR(0x6c271b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c271e:{NFSU2_TR(0x6c271e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c2721:{NFSU2_TR(0x6c2721);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2604u);}goto L6c2604;}}
}
B6c2727:L6c2727:{c.instructions+=4;NFSU2_TR(0x6c2727);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c2729:{NFSU2_TR(0x6c2729);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c272b:{NFSU2_TR(0x6c272b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c272e:{NFSU2_TR(0x6c272e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c274b;}}
}
B6c2730:L6c2730:{c.instructions+=10;NFSU2_TR(0x6c2730);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2733:{NFSU2_TR(0x6c2733);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c2736:{NFSU2_TR(0x6c2736);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c2739:{NFSU2_TR(0x6c2739);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c273c:{NFSU2_TR(0x6c273c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c273f:{NFSU2_TR(0x6c273f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c2742:{NFSU2_TR(0x6c2742);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2745:{NFSU2_TR(0x6c2745);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c2746:{NFSU2_TR(0x6c2746);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6c2749:{NFSU2_TR(0x6c2749);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2730u);}goto L6c2730;}}
}
B6c274b:L6c274b:{c.instructions+=3;NFSU2_TR(0x6c274b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c274d:{NFSU2_TR(0x6c274d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2750:{NFSU2_TR(0x6c2750);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c2767;}}
}
B6c2752:L6c2752:{c.instructions+=8;NFSU2_TR(0x6c2752);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2755:{NFSU2_TR(0x6c2755);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c2758:{NFSU2_TR(0x6c2758);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c275b:{NFSU2_TR(0x6c275b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c275e:{NFSU2_TR(0x6c275e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c275f:{NFSU2_TR(0x6c275f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2762:{NFSU2_TR(0x6c2762);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6c2765:{NFSU2_TR(0x6c2765);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2752u);}goto L6c2752;}}
}
B6c2767:L6c2767:{c.instructions+=3;NFSU2_TR(0x6c2767);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c276a:{NFSU2_TR(0x6c276a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c276d:{NFSU2_TR(0x6c276d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c286e;}}
}
B6c2773:L6c2773:{c.instructions+=8;NFSU2_TR(0x6c2773);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2776:{NFSU2_TR(0x6c2776);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2779:{NFSU2_TR(0x6c2779);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c277c:{NFSU2_TR(0x6c277c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c277f:{NFSU2_TR(0x6c277f);
__builtin_memmove((R+4),(R+0),4);
}
B6c2781:{NFSU2_TR(0x6c2781);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(U+4))));
}
B6c2784:{NFSU2_TR(0x6c2784);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2787:{NFSU2_TR(0x6c2787);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c285f;}}
}
B6c278d:L6c278d:{c.instructions+=3;NFSU2_TR(0x6c278d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2790:{NFSU2_TR(0x6c2790);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c2792:{NFSU2_TR(0x6c2792);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c285f;}}
}
B6c2798:L6c2798:{c.instructions+=2;NFSU2_TR(0x6c2798);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c279a:{NFSU2_TR(0x6c279a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c285f;}}
}
B6c27a0:L6c27a0:{c.instructions+=2;NFSU2_TR(0x6c27a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c27a3:{NFSU2_TR(0x6c27a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c285f;}}
}
B6c27a9:L6c27a9:{c.instructions+=3;NFSU2_TR(0x6c27a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c27ac:{NFSU2_TR(0x6c27ac);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c27ae:{NFSU2_TR(0x6c27ae);
if(r1(R+518)){{goto L6c285f;}}
}
B6c27b4:L6c27b4:{c.instructions+=3;NFSU2_TR(0x6c27b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c27b7:{NFSU2_TR(0x6c27b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c27b8:{NFSU2_TR(0x6c27b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c27bdull));
TAIL_STATIC(0x575620u,575);
}
B6c27bd:L6c27bd:{c.instructions+=5;NFSU2_TR(0x6c27bd);
__builtin_memmove((R+8),(R+0),4);
}
B6c27bf:{NFSU2_TR(0x6c27bf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c27c1:{NFSU2_TR(0x6c27c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c27c2:{NFSU2_TR(0x6c27c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c27c5:{NFSU2_TR(0x6c27c5);
if(r1(R+518)){{goto L6c28f1;}}
}
B6c27cb:L6c27cb:{c.instructions+=6;NFSU2_TR(0x6c27cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c27ce:{NFSU2_TR(0x6c27ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c27d1:{NFSU2_TR(0x6c27d1);
__builtin_memmove((R+12),(R+4),4);
}
B6c27d3:{NFSU2_TR(0x6c27d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c27d6:{NFSU2_TR(0x6c27d6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6c27d9:{NFSU2_TR(0x6c27d9);
__builtin_memmove((R+28),(R+8),4);
}
B6c27db:L6c27db:{c.instructions+=1;NFSU2_TR(0x6c27db);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c27dd;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c27dbu);}goto L6c27db;}
}
B6c27dd:L6c27dd:{c.instructions+=3;NFSU2_TR(0x6c27dd);
__builtin_memmove((R+4),(R+12),4);
}
B6c27df:{NFSU2_TR(0x6c27df);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c27e2:{NFSU2_TR(0x6c27e2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c27e4:L6c27e4:{c.instructions+=1;NFSU2_TR(0x6c27e4);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6c27e6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c27e4u);}goto L6c27e4;}
}
B6c27e6:L6c27e6:{c.instructions+=3;NFSU2_TR(0x6c27e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c27e9:{NFSU2_TR(0x6c27e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c27ec:{NFSU2_TR(0x6c27ec);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c2855;}}
}
B6c27ee:L6c27ee:{c.instructions+=6;NFSU2_TR(0x6c27ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c27f1:{NFSU2_TR(0x6c27f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c27f4:{NFSU2_TR(0x6c27f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c27f7:{NFSU2_TR(0x6c27f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c27fa:{NFSU2_TR(0x6c27fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c27fd:{NFSU2_TR(0x6c27fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c284a;}}
}
B6c27ff:L6c27ff:{c.instructions+=3;NFSU2_TR(0x6c27ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2802:{NFSU2_TR(0x6c2802);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6c2806:{NFSU2_TR(0x6c2806);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c283f;}}
}
B6c2808:L6c2808:{c.instructions+=3;NFSU2_TR(0x6c2808);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c280a:{NFSU2_TR(0x6c280a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c280d:{NFSU2_TR(0x6c280d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c28fb;}}
}
B6c2813:L6c2813:{c.instructions+=1;NFSU2_TR(0x6c2813);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c2816:L6c2816:{c.instructions+=2;NFSU2_TR(0x6c2816);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6c281a:{NFSU2_TR(0x6c281a);
if(r1(R+518)){{goto L6c2822;}}
}
B6c281c:L6c281c:{c.instructions+=3;NFSU2_TR(0x6c281c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c281d:{NFSU2_TR(0x6c281d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6c2820:{NFSU2_TR(0x6c2820);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2816u);}goto L6c2816;}}
}
B6c2822:L6c2822:{c.instructions+=2;NFSU2_TR(0x6c2822);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6c2825:{NFSU2_TR(0x6c2825);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c28fb;}}
}
B6c282b:L6c282b:{c.instructions+=7;NFSU2_TR(0x6c282b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c282e:{NFSU2_TR(0x6c282e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6c2831:{NFSU2_TR(0x6c2831);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6c2833:{NFSU2_TR(0x6c2833);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c2836:{NFSU2_TR(0x6c2836);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2839:{NFSU2_TR(0x6c2839);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c283c:{NFSU2_TR(0x6c283c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c283f:L6c283f:{c.instructions+=4;NFSU2_TR(0x6c283f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2842:{NFSU2_TR(0x6c2842);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c2845:{NFSU2_TR(0x6c2845);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2848:{NFSU2_TR(0x6c2848);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c284a:L6c284a:{c.instructions+=4;NFSU2_TR(0x6c284a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c284d:{NFSU2_TR(0x6c284d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2850:{NFSU2_TR(0x6c2850);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c2853:{NFSU2_TR(0x6c2853);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c27eeu);}goto L6c27ee;}}
}
B6c2855:L6c2855:{c.instructions+=2;NFSU2_TR(0x6c2855);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2856:{NFSU2_TR(0x6c2856);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c285bull));
TAIL_STATIC(0x575630u,575);
}
B6c285b:L6c285b:{c.instructions+=2;NFSU2_TR(0x6c285b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c285c:{NFSU2_TR(0x6c285c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c285f:L6c285f:{c.instructions+=4;NFSU2_TR(0x6c285f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2862:{NFSU2_TR(0x6c2862);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2865:{NFSU2_TR(0x6c2865);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c2868:{NFSU2_TR(0x6c2868);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2773u);}goto L6c2773;}}
}
B6c286e:L6c286e:{c.instructions+=3;NFSU2_TR(0x6c286e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c2871:{NFSU2_TR(0x6c2871);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c2874:{NFSU2_TR(0x6c2874);
if(r1(R+518)){{goto L6c29ac;}}
}
B6c287a:L6c287a:{c.instructions+=3;NFSU2_TR(0x6c287a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c287c:{NFSU2_TR(0x6c287c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c287f:{NFSU2_TR(0x6c287f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c2978;}}
}
B6c2885:L6c2885:{c.instructions+=10;NFSU2_TR(0x6c2885);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2888:{NFSU2_TR(0x6c2888);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c288b:{NFSU2_TR(0x6c288b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c288e:{NFSU2_TR(0x6c288e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2891:{NFSU2_TR(0x6c2891);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c2894:{NFSU2_TR(0x6c2894);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2897:{NFSU2_TR(0x6c2897);
__builtin_memmove((R+12),(R+4),4);
}
B6c2899:{NFSU2_TR(0x6c2899);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))&u32(r4(U+4))));
}
B6c289c:{NFSU2_TR(0x6c289c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c289f:{NFSU2_TR(0x6c289f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c296e;}}
}
B6c28a5:L6c28a5:{c.instructions+=3;NFSU2_TR(0x6c28a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c28a8:{NFSU2_TR(0x6c28a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c28aa:{NFSU2_TR(0x6c28aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c296e;}}
}
B6c28b0:L6c28b0:{c.instructions+=2;NFSU2_TR(0x6c28b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c28b3:{NFSU2_TR(0x6c28b3);
if(r1(R+518)){{goto L6c296b;}}
}
B6c28b9:L6c28b9:{c.instructions+=2;NFSU2_TR(0x6c28b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x40000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c28bf:{NFSU2_TR(0x6c28bf);
if(r1(R+518)){{goto L6c295e;}}
}
B6c28c5:L6c28c5:{c.instructions+=1;NFSU2_TR(0x6c28c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c28cb:L6c28cb:{c.instructions+=2;NFSU2_TR(0x6c28cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c28ce:{NFSU2_TR(0x6c28ce);
{goto L6c296e;}
}
B6c28d3:L6c28d3:{c.instructions+=3;NFSU2_TR(0x6c28d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6c28d6:{NFSU2_TR(0x6c28d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x76ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c28d8:{NFSU2_TR(0x6c28d8);
if(r1(R+518)){{goto L6c2902;}}
}
B6c28da:L6c28da:{c.instructions+=2;NFSU2_TR(0x6c28da);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x63ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c28dc:{NFSU2_TR(0x6c28dc);
if(r1(R+518)){{goto L6c2912;}}
}
B6c28de:L6c28de:{c.instructions+=2;NFSU2_TR(0x6c28de);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x73ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c28e0:{NFSU2_TR(0x6c28e0);
if(r1(R+518)){{goto L6c2922;}}
}
B6c28e2:L6c28e2:{c.instructions+=2;NFSU2_TR(0x6c28e2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x62ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c28e4:{NFSU2_TR(0x6c28e4);
if(r1(R+518)){{goto L6c2932;}}
}
B6c28e6:L6c28e6:{c.instructions+=2;NFSU2_TR(0x6c28e6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x69ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c28e8:{NFSU2_TR(0x6c28e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2957;}}
}
B6c28ea:L6c28ea:{c.instructions+=2;NFSU2_TR(0x6c28ea);
u8 U[4];
w4(U+0,u32(0x7befd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c28ef:{NFSU2_TR(0x6c28ef);
{goto L6c2947;}
}
B6c28f1:L6c28f1:{c.instructions+=2;NFSU2_TR(0x6c28f1);
w4(R+12,u32(0x8007000eull));
}
B6c28f6:{NFSU2_TR(0x6c28f6);
{goto L6c29ae;}
}
B6c28fb:L6c28fb:{c.instructions+=3;NFSU2_TR(0x6c28fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6c28fe:{NFSU2_TR(0x6c28fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x76ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c2900:{NFSU2_TR(0x6c2900);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c290e;}}
}
B6c2902:L6c2902:{c.instructions+=3;NFSU2_TR(0x6c2902);
u8 U[4];
w4(U+0,u32(0x7befb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2907:{NFSU2_TR(0x6c2907);
u8 U[4];
w4(U+0,u32(0x119aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c290c:{NFSU2_TR(0x6c290c);
{goto L6c294c;}
}
B6c290e:L6c290e:{c.instructions+=2;NFSU2_TR(0x6c290e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x63ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c2910:{NFSU2_TR(0x6c2910);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c291e;}}
}
B6c2912:L6c2912:{c.instructions+=3;NFSU2_TR(0x6c2912);
u8 U[4];
w4(U+0,u32(0x7bef58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2917:{NFSU2_TR(0x6c2917);
u8 U[4];
w4(U+0,u32(0x119bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c291c:{NFSU2_TR(0x6c291c);
{goto L6c294c;}
}
B6c291e:L6c291e:{c.instructions+=2;NFSU2_TR(0x6c291e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x73ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c2920:{NFSU2_TR(0x6c2920);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c292e;}}
}
B6c2922:L6c2922:{c.instructions+=3;NFSU2_TR(0x6c2922);
u8 U[4];
w4(U+0,u32(0x7bf020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2927:{NFSU2_TR(0x6c2927);
u8 U[4];
w4(U+0,u32(0x11c2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c292c:{NFSU2_TR(0x6c292c);
{goto L6c294c;}
}
B6c292e:L6c292e:{c.instructions+=2;NFSU2_TR(0x6c292e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x62ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c2930:{NFSU2_TR(0x6c2930);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c293e;}}
}
B6c2932:L6c2932:{c.instructions+=3;NFSU2_TR(0x6c2932);
u8 U[4];
w4(U+0,u32(0x7bef00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2937:{NFSU2_TR(0x6c2937);
u8 U[4];
w4(U+0,u32(0x11c6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c293c:{NFSU2_TR(0x6c293c);
{goto L6c294c;}
}
B6c293e:L6c293e:{c.instructions+=2;NFSU2_TR(0x6c293e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x69ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c2940:{NFSU2_TR(0x6c2940);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2957;}}
}
B6c2942:L6c2942:{c.instructions+=1;NFSU2_TR(0x6c2942);
u8 U[4];
w4(U+0,u32(0x7beea0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2947:L6c2947:{c.instructions+=1;NFSU2_TR(0x6c2947);
u8 U[4];
w4(U+0,u32(0x11c7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c294c:L6c294c:{c.instructions+=3;NFSU2_TR(0x6c294c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c294e:{NFSU2_TR(0x6c294e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c294f:{NFSU2_TR(0x6c294f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2954ull));
TAIL_STATIC(0x69e936u,69e);
}
B6c2954:L6c2954:{c.instructions+=1;NFSU2_TR(0x6c2954);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6c2957:L6c2957:{c.instructions+=2;NFSU2_TR(0x6c2957);
w4(R+12,u32(0x80004005ull));
}
B6c295c:{NFSU2_TR(0x6c295c);
{goto L6c29ae;}
}
B6c295e:L6c295e:{c.instructions+=2;NFSU2_TR(0x6c295e);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c2961:{NFSU2_TR(0x6c2961);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c296e;}}
}
B6c2963:L6c2963:{c.instructions+=2;NFSU2_TR(0x6c2963);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2966:{NFSU2_TR(0x6c2966);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c28cbu);}goto L6c28cb;}
}
B6c296b:L6c296b:{c.instructions+=1;NFSU2_TR(0x6c296b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c296e:L6c296e:{c.instructions+=3;NFSU2_TR(0x6c296e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c296f:{NFSU2_TR(0x6c296f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c2972:{NFSU2_TR(0x6c2972);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2885u);}goto L6c2885;}}
}
B6c2978:L6c2978:{c.instructions+=9;NFSU2_TR(0x6c2978);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c297b:{NFSU2_TR(0x6c297b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c297e:{NFSU2_TR(0x6c297e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2982:{NFSU2_TR(0x6c2982);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2985:{NFSU2_TR(0x6c2985);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c2988:{NFSU2_TR(0x6c2988);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c298b:{NFSU2_TR(0x6c298b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c298e:{NFSU2_TR(0x6c298e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2991:{NFSU2_TR(0x6c2991);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c29ac;}}
}
B6c2993:L6c2993:{c.instructions+=8;NFSU2_TR(0x6c2993);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c2996:{NFSU2_TR(0x6c2996);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2999:{NFSU2_TR(0x6c2999);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c299c:{NFSU2_TR(0x6c299c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c29a0:{NFSU2_TR(0x6c29a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c29a3:{NFSU2_TR(0x6c29a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c29a6:{NFSU2_TR(0x6c29a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c29a9:{NFSU2_TR(0x6c29a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c29ac:L6c29ac:{c.instructions+=1;NFSU2_TR(0x6c29ac);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c29ae:L6c29ae:{c.instructions+=2;NFSU2_TR(0x6c29ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c29b1:{NFSU2_TR(0x6c29b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c29b6ull));
TAIL_STATIC(0x575630u,575);
}
B6c29b6:L6c29b6:{c.instructions+=2;NFSU2_TR(0x6c29b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c29b9:{NFSU2_TR(0x6c29b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c29beull));
TAIL_STATIC(0x575630u,575);
}
B6c29be:L6c29be:{c.instructions+=2;NFSU2_TR(0x6c29be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c29c1:{NFSU2_TR(0x6c29c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c29c6ull));
TAIL_STATIC(0x575630u,575);
}
B6c29c6:L6c29c6:{c.instructions+=7;NFSU2_TR(0x6c29c6);
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
B6c29c9:{NFSU2_TR(0x6c29c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c29ca:{NFSU2_TR(0x6c29ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c29cb:{NFSU2_TR(0x6c29cb);
__builtin_memmove((R+0),(R+12),4);
}
B6c29cd:{NFSU2_TR(0x6c29cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c29ce:{NFSU2_TR(0x6c29ce);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c29cf:{NFSU2_TR(0x6c29cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c29d2:L6c29d2:{c.instructions+=12;NFSU2_TR(0x6c29d2);
__builtin_memmove((R+28),(R+28),4);
}
B6c29d4:{NFSU2_TR(0x6c29d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c29d5:{NFSU2_TR(0x6c29d5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6c29d8:{NFSU2_TR(0x6c29d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c29de:{NFSU2_TR(0x6c29de);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c29e4:{NFSU2_TR(0x6c29e4);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c29e5:{NFSU2_TR(0x6c29e5);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c29e6:{NFSU2_TR(0x6c29e6);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c29e7:{NFSU2_TR(0x6c29e7);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c29e8:{NFSU2_TR(0x6c29e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c29ef:{NFSU2_TR(0x6c29ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c29f6:{NFSU2_TR(0x6c29f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c29fbull));
TAIL_STATIC(0x69e219u,69e);
}
B6c29fb:L6c29fb:{c.instructions+=3;NFSU2_TR(0x6c29fb);
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
B6c29fd:{NFSU2_TR(0x6c29fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c29fe:{NFSU2_TR(0x6c29fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c2a02;}}
}
B6c2a00:L6c2a00:{c.instructions+=1;NFSU2_TR(0x6c2a00);
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
B6c2a02:L6c2a02:{c.instructions+=1;NFSU2_TR(0x6c2a02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c2a03:L6c2a03:{c.instructions+=2;NFSU2_TR(0x6c2a03);
w4(R+0,u32(0x80004005ull));
}
B6c2a08:{NFSU2_TR(0x6c2a08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c2a09:L6c2a09:{c.instructions+=20;NFSU2_TR(0x6c2a09);
__builtin_memmove((R+28),(R+28),4);
}
B6c2a0b:{NFSU2_TR(0x6c2a0b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2a0c:{NFSU2_TR(0x6c2a0c);
__builtin_memmove((R+20),(R+16),4);
}
B6c2a0e:{NFSU2_TR(0x6c2a0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4cull))));
}
B6c2a11:{NFSU2_TR(0x6c2a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2a15:{NFSU2_TR(0x6c2a15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2a16:{NFSU2_TR(0x6c2a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c2a19:{NFSU2_TR(0x6c2a19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B6c2a1c:{NFSU2_TR(0x6c2a1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2a1d:{NFSU2_TR(0x6c2a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c2a20:{NFSU2_TR(0x6c2a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2a23:{NFSU2_TR(0x6c2a23);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xbfull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6c2a27:{NFSU2_TR(0x6c2a27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2a28:{NFSU2_TR(0x6c2a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c2a2b:{NFSU2_TR(0x6c2a2b);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2a2d:{NFSU2_TR(0x6c2a2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c2a30:{NFSU2_TR(0x6c2a30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2a31:{NFSU2_TR(0x6c2a31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2a32:{NFSU2_TR(0x6c2a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2a35:{NFSU2_TR(0x6c2a35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2a3aull));
TAIL_STATIC(0x75c840u,75c);
}
B6c2a3a:L6c2a3a:{c.instructions+=5;NFSU2_TR(0x6c2a3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6c2a3d:{NFSU2_TR(0x6c2a3d);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6c2a41:{NFSU2_TR(0x6c2a41);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff3ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6c2a45:{NFSU2_TR(0x6c2a45);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c2a48:{NFSU2_TR(0x6c2a48);
if(r1(R+518)){{goto L6c2a55;}}
}
B6c2a4a:L6c2a4a:{c.instructions+=2;NFSU2_TR(0x6c2a4a);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(U+1))<(u8(0x5full))));
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6c2a4d:{NFSU2_TR(0x6c2a4d);
if(r1(R+518)){{goto L6c2a5a;}}
}
B6c2a4f:L6c2a4f:{c.instructions+=3;NFSU2_TR(0x6c2a4f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c2a50:{NFSU2_TR(0x6c2a50);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6c2a53:{NFSU2_TR(0x6c2a53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2a4au);}goto L6c2a4a;}}
}
B6c2a55:L6c2a55:{c.instructions+=2;NFSU2_TR(0x6c2a55);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(U+1))<(u8(0x5full))));
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6c2a58:{NFSU2_TR(0x6c2a58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2a76;}}
}
B6c2a5a:L6c2a5a:{c.instructions+=5;NFSU2_TR(0x6c2a5a);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B6c2a5d:{NFSU2_TR(0x6c2a5d);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c2a5e:{NFSU2_TR(0x6c2a5e);
u8 U[4];
w4(U+0,u32(0x7b9ee8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2a63:{NFSU2_TR(0x6c2a63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2a64:{NFSU2_TR(0x6c2a64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2a69ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B6c2a69:L6c2a69:{c.instructions+=4;NFSU2_TR(0x6c2a69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c2a6b:{NFSU2_TR(0x6c2a6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c2a6c:{NFSU2_TR(0x6c2a6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c2a6d:{NFSU2_TR(0x6c2a6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2aa4;}}
}
B6c2a6f:L6c2a6f:{c.instructions+=1;NFSU2_TR(0x6c2a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2a76:L6c2a76:{c.instructions+=3;NFSU2_TR(0x6c2a76);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6c2a7a:{NFSU2_TR(0x6c2a7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c2a7d:{NFSU2_TR(0x6c2a7d);
if(r1(R+518)){{goto L6c2acc;}}
}
B6c2a7f:L6c2a7f:{c.instructions+=3;NFSU2_TR(0x6c2a7f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6c2a82:{NFSU2_TR(0x6c2a82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2a83:{NFSU2_TR(0x6c2a83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2a88ull));
TAIL_STATIC(0x75defau,75d);
}
B6c2a88:L6c2a88:{c.instructions+=3;NFSU2_TR(0x6c2a88);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c2a8a:{NFSU2_TR(0x6c2a8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c2a8b:{NFSU2_TR(0x6c2a8b);
if(r1(R+518)){{goto L6c2a93;}}
}
B6c2a8d:L6c2a8d:{c.instructions+=3;NFSU2_TR(0x6c2a8d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c2a8e:{NFSU2_TR(0x6c2a8e);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6c2a91:{NFSU2_TR(0x6c2a91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2a7fu);}goto L6c2a7f;}}
}
B6c2a93:L6c2a93:{c.instructions+=2;NFSU2_TR(0x6c2a93);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6c2a96:{NFSU2_TR(0x6c2a96);
if(r1(R+518)){{goto L6c2acc;}}
}
B6c2a98:L6c2a98:{c.instructions+=2;NFSU2_TR(0x6c2a98);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2a99:{NFSU2_TR(0x6c2a99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2a9eull));
TAIL_STATIC(0x75d65bu,75d);
}
B6c2a9e:L6c2a9e:{c.instructions+=3;NFSU2_TR(0x6c2a9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c2a9f:{NFSU2_TR(0x6c2a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2aa2:{NFSU2_TR(0x6c2aa2);
{goto L6c2ad0;}
}
B6c2aa4:L6c2aa4:{c.instructions+=8;NFSU2_TR(0x6c2aa4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2aa5:{NFSU2_TR(0x6c2aa5);
u8 U[4];
w4(U+0,u32(0x7bf15cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2aaa:{NFSU2_TR(0x6c2aaa);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+12)),r4(U+0));
}
B6c2ab0:{NFSU2_TR(0x6c2ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2ab4:{NFSU2_TR(0x6c2ab4);
u8 U[4];
w4(U+0,u32(0x1196ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2ab9:{NFSU2_TR(0x6c2ab9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c2abc:{NFSU2_TR(0x6c2abc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c2abf:{NFSU2_TR(0x6c2abf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2ac4ull));
TAIL_STATIC(0x69e936u,69e);
}
B6c2ac4:L6c2ac4:{c.instructions+=2;NFSU2_TR(0x6c2ac4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6c2ac7:{NFSU2_TR(0x6c2ac7);
{goto L6c2c23;}
}
B6c2acc:L6c2acc:{c.instructions+=1;NFSU2_TR(0x6c2acc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2ad0:L6c2ad0:{c.instructions+=2;NFSU2_TR(0x6c2ad0);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6c2ad3:{NFSU2_TR(0x6c2ad3);
if(r1(R+518)){{goto L6c2ad9;}}
}
B6c2ad5:L6c2ad5:{c.instructions+=2;NFSU2_TR(0x6c2ad5);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B6c2ad8:{NFSU2_TR(0x6c2ad8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c2ad9:L6c2ad9:{c.instructions+=3;NFSU2_TR(0x6c2ad9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6c2adb:{NFSU2_TR(0x6c2adb);
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
B6c2add:{NFSU2_TR(0x6c2add);
if(r1(R+518)){{goto L6c2aff;}}
}
B6c2adf:L6c2adf:{c.instructions+=3;NFSU2_TR(0x6c2adf);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B6c2ae2:{NFSU2_TR(0x6c2ae2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2ae3:{NFSU2_TR(0x6c2ae3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2ae8ull));
TAIL_STATIC(0x75df39u,75d);
}
B6c2ae8:L6c2ae8:{c.instructions+=3;NFSU2_TR(0x6c2ae8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c2aea:{NFSU2_TR(0x6c2aea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c2aeb:{NFSU2_TR(0x6c2aeb);
if(r1(R+518)){{goto L6c2af4;}}
}
B6c2aed:L6c2aed:{c.instructions+=4;NFSU2_TR(0x6c2aed);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c2aee:{NFSU2_TR(0x6c2aee);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6c2af0:{NFSU2_TR(0x6c2af0);
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
B6c2af2:{NFSU2_TR(0x6c2af2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2adfu);}goto L6c2adf;}}
}
B6c2af4:L6c2af4:{c.instructions+=2;NFSU2_TR(0x6c2af4);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6c2af7:{NFSU2_TR(0x6c2af7);
if(r1(R+518)){{goto L6c2aff;}}
}
B6c2af9:L6c2af9:{c.instructions+=2;NFSU2_TR(0x6c2af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2afd:{NFSU2_TR(0x6c2afd);
{goto L6c2b08;}
}
B6c2aff:L6c2aff:{c.instructions+=3;NFSU2_TR(0x6c2aff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2b02:{NFSU2_TR(0x6c2b02);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6c2b05:{NFSU2_TR(0x6c2b05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2b08:L6c2b08:{c.instructions+=3;NFSU2_TR(0x6c2b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2b0b:{NFSU2_TR(0x6c2b0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2b0c:{NFSU2_TR(0x6c2b0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2b11ull));
TAIL_STATIC(0x699de1u,699);
}
B6c2b11:L6c2b11:{c.instructions+=5;NFSU2_TR(0x6c2b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c2b14:{NFSU2_TR(0x6c2b14);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c2b16:{NFSU2_TR(0x6c2b16);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6c2b1a:{NFSU2_TR(0x6c2b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2b1d:{NFSU2_TR(0x6c2b1d);
if(r1(R+518)){{goto L6c2c1b;}}
}
B6c2b23:L6c2b23:{c.instructions+=4;NFSU2_TR(0x6c2b23);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c2b26:{NFSU2_TR(0x6c2b26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2b27:{NFSU2_TR(0x6c2b27);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6c2b29:{NFSU2_TR(0x6c2b29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2b2eull));
TAIL_STATIC(0x75dd6fu,75d);
}
B6c2b2e:L6c2b2e:{c.instructions+=4;NFSU2_TR(0x6c2b2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c2b30:{NFSU2_TR(0x6c2b30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c2b31:{NFSU2_TR(0x6c2b31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c2b32:{NFSU2_TR(0x6c2b32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2b42;}}
}
B6c2b34:L6c2b34:{c.instructions+=5;NFSU2_TR(0x6c2b34);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6c2b38:{NFSU2_TR(0x6c2b38);
__builtin_memmove((R+12),(R+28),4);
}
B6c2b3a:{NFSU2_TR(0x6c2b3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B6c2b3d:{NFSU2_TR(0x6c2b3d);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6c2b40:{NFSU2_TR(0x6c2b40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2b4b;}}
}
B6c2b42:L6c2b42:{c.instructions+=3;NFSU2_TR(0x6c2b42);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x24ull))));
}
B6c2b45:{NFSU2_TR(0x6c2b45);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6c2b49:{NFSU2_TR(0x6c2b49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2b23u);}goto L6c2b23;}}
}
B6c2b4b:L6c2b4b:{c.instructions+=2;NFSU2_TR(0x6c2b4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c2b4d:{NFSU2_TR(0x6c2b4d);
if(r1(R+518)){{goto L6c2c1b;}}
}
B6c2b53:L6c2b53:{c.instructions+=2;NFSU2_TR(0x6c2b53);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2b57:{NFSU2_TR(0x6c2b57);
if(r1(R+518)){{goto L6c2c1b;}}
}
B6c2b5d:L6c2b5d:{c.instructions+=2;NFSU2_TR(0x6c2b5d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2b61:{NFSU2_TR(0x6c2b61);
if(r1(R+518)){{goto L6c2b72;}}
}
B6c2b63:L6c2b63:{c.instructions+=2;NFSU2_TR(0x6c2b63);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c2b67:{NFSU2_TR(0x6c2b67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2b72;}}
}
B6c2b69:L6c2b69:{c.instructions+=3;NFSU2_TR(0x6c2b69);
w4(R+0,u32(0x40000000ull));
}
B6c2b6e:{NFSU2_TR(0x6c2b6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
}
B6c2b70:{NFSU2_TR(0x6c2b70);
{goto L6c2b77;}
}
B6c2b72:L6c2b72:{c.instructions+=1;NFSU2_TR(0x6c2b72);
w4(R+0,u32(0x40000000ull));
}
B6c2b77:L6c2b77:{c.instructions+=3;NFSU2_TR(0x6c2b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2b7a:{NFSU2_TR(0x6c2b7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c2b7c:{NFSU2_TR(0x6c2b7c);
if(r1(R+518)){{goto L6c2ba6;}}
}
B6c2b7e:L6c2b7e:{c.instructions+=10;NFSU2_TR(0x6c2b7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c2b81:{NFSU2_TR(0x6c2b81);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c2b84:{NFSU2_TR(0x6c2b84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2b85:{NFSU2_TR(0x6c2b85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2b86:{NFSU2_TR(0x6c2b86);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c2b89:{NFSU2_TR(0x6c2b89);
u8 U[4];
w4(U+0,u32(0x7bf120ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2b8e:{NFSU2_TR(0x6c2b8e);
u8 U[4];
w4(U+0,u32(0x1261ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2b93:{NFSU2_TR(0x6c2b93);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c2b96:{NFSU2_TR(0x6c2b96);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c2b99:{NFSU2_TR(0x6c2b99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2b9eull));
TAIL_STATIC(0x69e9bbu,69e);
}
B6c2b9e:L6c2b9e:{c.instructions+=2;NFSU2_TR(0x6c2b9e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B6c2ba1:{NFSU2_TR(0x6c2ba1);
w4(R+0,u32(0x40000000ull));
}
B6c2ba6:L6c2ba6:{c.instructions+=3;NFSU2_TR(0x6c2ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2ba9:{NFSU2_TR(0x6c2ba9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6c2bac:{NFSU2_TR(0x6c2bac);
if(r1(R+512)){{goto L6c2bb3;}}
}
B6c2bae:L6c2bae:{c.instructions+=2;NFSU2_TR(0x6c2bae);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6c2bb1:{NFSU2_TR(0x6c2bb1);
if(r1(R+512)){{goto L6c2bb5;}}
}
B6c2bb3:L6c2bb3:{c.instructions+=1;NFSU2_TR(0x6c2bb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
}
B6c2bb5:L6c2bb5:{c.instructions+=3;NFSU2_TR(0x6c2bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c2bb8:{NFSU2_TR(0x6c2bb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c2bbb:{NFSU2_TR(0x6c2bbb);
if(r1(R+512)){{goto L6c2be9;}}
}
B6c2bbd:L6c2bbd:{c.instructions+=11;NFSU2_TR(0x6c2bbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
}
B6c2bbf:{NFSU2_TR(0x6c2bbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c2bc2:{NFSU2_TR(0x6c2bc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2bc5:{NFSU2_TR(0x6c2bc5);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6c2bcb:{NFSU2_TR(0x6c2bcb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c2bce:{NFSU2_TR(0x6c2bce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2bcf:{NFSU2_TR(0x6c2bcf);
u8 U[4];
w4(U+0,u32(0x7bf0f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2bd4:{NFSU2_TR(0x6c2bd4);
u8 U[4];
w4(U+0,u32(0x11cbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2bd9:{NFSU2_TR(0x6c2bd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c2bdc:{NFSU2_TR(0x6c2bdc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c2bdf:{NFSU2_TR(0x6c2bdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2be4ull));
TAIL_STATIC(0x69e936u,69e);
}
B6c2be4:L6c2be4:{c.instructions+=2;NFSU2_TR(0x6c2be4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6c2be7:{NFSU2_TR(0x6c2be7);
{goto L6c2c23;}
}
B6c2be9:L6c2be9:{c.instructions+=5;NFSU2_TR(0x6c2be9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c2beb:{NFSU2_TR(0x6c2beb);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B6c2bef:{NFSU2_TR(0x6c2bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))&u32(r4(U+4))));
}
B6c2bf2:{NFSU2_TR(0x6c2bf2);
u8 U[2];
w2(U+0,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6c2bf5:{NFSU2_TR(0x6c2bf5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2bf9;}}
}
B6c2bf7:L6c2bf7:{c.instructions+=1;NFSU2_TR(0x6c2bf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
}
B6c2bf9:L6c2bf9:{c.instructions+=9;NFSU2_TR(0x6c2bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2bfc:{NFSU2_TR(0x6c2bfc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6c2bfe:{NFSU2_TR(0x6c2bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2c01:{NFSU2_TR(0x6c2c01);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c2c04:{NFSU2_TR(0x6c2c04);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffull))));
}
B6c2c0a:{NFSU2_TR(0x6c2c0a);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B6c2c0c:{NFSU2_TR(0x6c2c0c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2c10:{NFSU2_TR(0x6c2c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2c13:{NFSU2_TR(0x6c2c13);
if(r1(R+518)){{goto L6c2c23;}}
}
B6c2c15:L6c2c15:{c.instructions+=2;NFSU2_TR(0x6c2c15);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6c2c19:{NFSU2_TR(0x6c2c19);
{goto L6c2c23;}
}
B6c2c1b:L6c2c1b:{c.instructions+=2;NFSU2_TR(0x6c2c1b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x40ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6c2c1f:{NFSU2_TR(0x6c2c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2c23:L6c2c23:{c.instructions+=9;NFSU2_TR(0x6c2c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2c26:{NFSU2_TR(0x6c2c26);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c2c28:{NFSU2_TR(0x6c2c28);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+0)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6c2c2a:{NFSU2_TR(0x6c2c2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c2c2b:{NFSU2_TR(0x6c2c2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c2c2c:{NFSU2_TR(0x6c2c2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B6c2c2f:{NFSU2_TR(0x6c2c2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c2c30:{NFSU2_TR(0x6c2c30);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c2c31:{NFSU2_TR(0x6c2c31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c2c34:L6c2c34:{c.instructions+=8;NFSU2_TR(0x6c2c34);
__builtin_memmove((R+28),(R+28),4);
}
B6c2c36:{NFSU2_TR(0x6c2c36);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2c37:{NFSU2_TR(0x6c2c37);
__builtin_memmove((R+20),(R+16),4);
}
B6c2c39:{NFSU2_TR(0x6c2c39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6c2c3c:{NFSU2_TR(0x6c2c3c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2c3d:{NFSU2_TR(0x6c2c3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2c3e:{NFSU2_TR(0x6c2c3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2c3f:{NFSU2_TR(0x6c2c3f);
w4(R+28,u32(0x1000000ull));
}
B6c2c44:L6c2c44:{c.instructions+=5;NFSU2_TR(0x6c2c44);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c2c46:{NFSU2_TR(0x6c2c46);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2c49:{NFSU2_TR(0x6c2c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2c4c:{NFSU2_TR(0x6c2c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2c4f:{NFSU2_TR(0x6c2c4f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c2cf0;}}
}
B6c2c55:L6c2c55:{c.instructions+=7;NFSU2_TR(0x6c2c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2c58:{NFSU2_TR(0x6c2c58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c2c5b:{NFSU2_TR(0x6c2c5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c2c5e:{NFSU2_TR(0x6c2c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2c61:{NFSU2_TR(0x6c2c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2c65:{NFSU2_TR(0x6c2c65);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c2c67:{NFSU2_TR(0x6c2c67);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c2cd6;}}
}
B6c2c69:L6c2c69:{c.instructions+=4;NFSU2_TR(0x6c2c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c2c6c:{NFSU2_TR(0x6c2c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c2c6f:{NFSU2_TR(0x6c2c6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2c72:{NFSU2_TR(0x6c2c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2c75:L6c2c75:{c.instructions+=5;NFSU2_TR(0x6c2c75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2c78:{NFSU2_TR(0x6c2c78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c2c7a:{NFSU2_TR(0x6c2c7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c2c7d:{NFSU2_TR(0x6c2c7d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c2c7f:{NFSU2_TR(0x6c2c7f);
if(r1(R+518)){{goto L6c2c88;}}
}
B6c2c81:L6c2c81:{c.instructions+=1;NFSU2_TR(0x6c2c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2c88:L6c2c88:{c.instructions+=3;NFSU2_TR(0x6c2c88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c2c8b:{NFSU2_TR(0x6c2c8b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c2c8e:{NFSU2_TR(0x6c2c8e);
if(r1(R+518)){{goto L6c2c93;}}
}
B6c2c90:L6c2c90:{c.instructions+=1;NFSU2_TR(0x6c2c90);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c2c93:L6c2c93:{c.instructions+=2;NFSU2_TR(0x6c2c93);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c2c95:{NFSU2_TR(0x6c2c95);
if(r1(R+518)){{goto L6c2c9e;}}
}
B6c2c97:L6c2c97:{c.instructions+=1;NFSU2_TR(0x6c2c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2c9e:L6c2c9e:{c.instructions+=3;NFSU2_TR(0x6c2c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2ca2:{NFSU2_TR(0x6c2ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c2ca5:{NFSU2_TR(0x6c2ca5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2c75u);}goto L6c2c75;}}
}
B6c2ca7:L6c2ca7:{c.instructions+=3;NFSU2_TR(0x6c2ca7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c2ca9:{NFSU2_TR(0x6c2ca9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2cac:{NFSU2_TR(0x6c2cac);
if(r1(R+518)){{goto L6c2cd6;}}
}
B6c2cae:L6c2cae:{c.instructions+=2;NFSU2_TR(0x6c2cae);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2cb1:{NFSU2_TR(0x6c2cb1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c2cd6;}}
}
B6c2cb3:L6c2cb3:{c.instructions+=7;NFSU2_TR(0x6c2cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2cb6:{NFSU2_TR(0x6c2cb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c2cb9:{NFSU2_TR(0x6c2cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c2cbc:{NFSU2_TR(0x6c2cbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c2cbf:{NFSU2_TR(0x6c2cbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c2cc1:{NFSU2_TR(0x6c2cc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c2cc3:{NFSU2_TR(0x6c2cc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2cd0;}}
}
B6c2cc5:L6c2cc5:{c.instructions+=3;NFSU2_TR(0x6c2cc5);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B6c2cc7:{NFSU2_TR(0x6c2cc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6c2cc9:{NFSU2_TR(0x6c2cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2cd0:L6c2cd0:{c.instructions+=3;NFSU2_TR(0x6c2cd0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6c2cd1:{NFSU2_TR(0x6c2cd1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6c2cd4:{NFSU2_TR(0x6c2cd4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2cb3u);}goto L6c2cb3;}}
}
B6c2cd6:L6c2cd6:{c.instructions+=4;NFSU2_TR(0x6c2cd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2cd9:{NFSU2_TR(0x6c2cd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2cdc:{NFSU2_TR(0x6c2cdc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c2cdf:{NFSU2_TR(0x6c2cdf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2c55u);}goto L6c2c55;}}
}
B6c2ce5:L6c2ce5:{c.instructions+=3;NFSU2_TR(0x6c2ce5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c2ce7:{NFSU2_TR(0x6c2ce7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2cea:{NFSU2_TR(0x6c2cea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2c44u);}goto L6c2c44;}}
}
B6c2cf0:L6c2cf0:{c.instructions+=2;NFSU2_TR(0x6c2cf0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2cf3:{NFSU2_TR(0x6c2cf3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c2d12;}}
}
B6c2cf5:L6c2cf5:{c.instructions+=5;NFSU2_TR(0x6c2cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2cf8:{NFSU2_TR(0x6c2cf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c2cfb:{NFSU2_TR(0x6c2cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c2cfe:{NFSU2_TR(0x6c2cfe);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c2d01:{NFSU2_TR(0x6c2d01);
if(r1(R+518)){{goto L6c2d0c;}}
}
B6c2d03:L6c2d03:{c.instructions+=3;NFSU2_TR(0x6c2d03);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c2d06:{NFSU2_TR(0x6c2d06);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c2d08:{NFSU2_TR(0x6c2d08);
if(r1(R+518)){{goto L6c2d0c;}}
}
B6c2d0a:L6c2d0a:{c.instructions+=1;NFSU2_TR(0x6c2d0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+28))));
s4(u32(r4(R+8)),r4(U+0));
}
B6c2d0c:L6c2d0c:{c.instructions+=3;NFSU2_TR(0x6c2d0c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6c2d0d:{NFSU2_TR(0x6c2d0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6c2d10:{NFSU2_TR(0x6c2d10);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2cf5u);}goto L6c2cf5;}}
}
B6c2d12:L6c2d12:{c.instructions+=6;NFSU2_TR(0x6c2d12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c2d13:{NFSU2_TR(0x6c2d13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c2d14:{NFSU2_TR(0x6c2d14);
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
B6c2d16:{NFSU2_TR(0x6c2d16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c2d17:{NFSU2_TR(0x6c2d17);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c2d18:{NFSU2_TR(0x6c2d18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c2d19:L6c2d19:{c.instructions+=15;NFSU2_TR(0x6c2d19);
__builtin_memmove((R+28),(R+28),4);
}
B6c2d1b:{NFSU2_TR(0x6c2d1b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2d1c:{NFSU2_TR(0x6c2d1c);
__builtin_memmove((R+20),(R+16),4);
}
B6c2d1e:{NFSU2_TR(0x6c2d1e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2d1f:{NFSU2_TR(0x6c2d1f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2d20:{NFSU2_TR(0x6c2d20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2d21:{NFSU2_TR(0x6c2d21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2d22:{NFSU2_TR(0x6c2d22);
__builtin_memmove((R+24),(R+4),4);
}
B6c2d24:{NFSU2_TR(0x6c2d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2d2a:{NFSU2_TR(0x6c2d2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c2d2c:{NFSU2_TR(0x6c2d2c);
__builtin_memmove((R+4),(R+0),4);
}
B6c2d2e:{NFSU2_TR(0x6c2d2e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6c2d34:{NFSU2_TR(0x6c2d34);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c2d3a:{NFSU2_TR(0x6c2d3a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2d3b:{NFSU2_TR(0x6c2d3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2e79;}}
}
B6c2d41:L6c2d41:{c.instructions+=3;NFSU2_TR(0x6c2d41);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c2d46:{NFSU2_TR(0x6c2d46);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c2d49:{NFSU2_TR(0x6c2d49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2e79;}}
}
B6c2d4f:L6c2d4f:{c.instructions+=2;NFSU2_TR(0x6c2d4f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c2d53:{NFSU2_TR(0x6c2d53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2d7b;}}
}
B6c2d55:L6c2d55:{c.instructions+=6;NFSU2_TR(0x6c2d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2d5b:{NFSU2_TR(0x6c2d5b);
u8 U[4];
w4(U+0,u32(0x7bf190ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2d60:{NFSU2_TR(0x6c2d60);
u8 U[4];
w4(U+0,u32(0x11c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2d65:{NFSU2_TR(0x6c2d65);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c2d68:{NFSU2_TR(0x6c2d68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2d69:{NFSU2_TR(0x6c2d69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2d6eull));
TAIL_STATIC(0x69e936u,69e);
}
B6c2d6e:L6c2d6e:{c.instructions+=3;NFSU2_TR(0x6c2d6e);
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
B6c2d71:{NFSU2_TR(0x6c2d71);
w4(R+0,u32(0x80004005ull));
}
B6c2d76:{NFSU2_TR(0x6c2d76);
{goto L6c2e7c;}
}
B6c2d7b:L6c2d7b:{c.instructions+=2;NFSU2_TR(0x6c2d7b);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2d7d:{NFSU2_TR(0x6c2d7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2d82ull));
TAIL_STATIC(0x699317u,699);
}
B6c2d82:L6c2d82:{c.instructions+=3;NFSU2_TR(0x6c2d82);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c2d84:{NFSU2_TR(0x6c2d84);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c2d86:{NFSU2_TR(0x6c2d86);
if(r1(R+518)){{goto L6c2d93;}}
}
B6c2d88:L6c2d88:{c.instructions+=2;NFSU2_TR(0x6c2d88);
__builtin_memmove((R+4),(R+0),4);
}
B6c2d8a:{NFSU2_TR(0x6c2d8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2d8full));
TAIL_STATIC(0x698e7du,698);
}
B6c2d8f:L6c2d8f:{c.instructions+=2;NFSU2_TR(0x6c2d8f);
__builtin_memmove((R+28),(R+0),4);
}
B6c2d91:{NFSU2_TR(0x6c2d91);
{goto L6c2d95;}
}
B6c2d93:L6c2d93:{c.instructions+=1;NFSU2_TR(0x6c2d93);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c2d95:L6c2d95:{c.instructions+=2;NFSU2_TR(0x6c2d95);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6c2d97:{NFSU2_TR(0x6c2d97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2da3;}}
}
B6c2d99:L6c2d99:{c.instructions+=2;NFSU2_TR(0x6c2d99);
w4(R+0,u32(0x8007000eull));
}
B6c2d9e:{NFSU2_TR(0x6c2d9e);
{goto L6c2e7c;}
}
B6c2da3:L6c2da3:{c.instructions+=6;NFSU2_TR(0x6c2da3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2da4:{NFSU2_TR(0x6c2da4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2da6:{NFSU2_TR(0x6c2da6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2da8:{NFSU2_TR(0x6c2da8);
u8 U[4];
w4(U+0,u32(0x74500001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2dad:{NFSU2_TR(0x6c2dad);
__builtin_memmove((R+4),(R+28),4);
}
B6c2daf:{NFSU2_TR(0x6c2daf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2db4ull));
TAIL_STATIC(0x699362u,699);
}
B6c2db4:L6c2db4:{c.instructions+=4;NFSU2_TR(0x6c2db4);
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
B6c2db6:{NFSU2_TR(0x6c2db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2db9:{NFSU2_TR(0x6c2db9);
__builtin_memmove((R+4),(R+28),4);
}
B6c2dbb:{NFSU2_TR(0x6c2dbb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c2dea;}}
}
B6c2dbd:L6c2dbd:{c.instructions+=2;NFSU2_TR(0x6c2dbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c2dc3:{NFSU2_TR(0x6c2dc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2dc8ull));
TAIL_STATIC(0x698eb3u,698);
}
B6c2dc8:L6c2dc8:{c.instructions+=3;NFSU2_TR(0x6c2dc8);
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
B6c2dca:{NFSU2_TR(0x6c2dca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2dcd:{NFSU2_TR(0x6c2dcd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c2de8;}}
}
B6c2dcf:L6c2dcf:{c.instructions+=9;NFSU2_TR(0x6c2dcf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2dd0:{NFSU2_TR(0x6c2dd0);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6c2dd2:{NFSU2_TR(0x6c2dd2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2dd3:{NFSU2_TR(0x6c2dd3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c2dd6:{NFSU2_TR(0x6c2dd6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2dd7:{NFSU2_TR(0x6c2dd7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2dd8:{NFSU2_TR(0x6c2dd8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2dd9:{NFSU2_TR(0x6c2dd9);
__builtin_memmove((R+4),(R+24),4);
}
B6c2ddb:{NFSU2_TR(0x6c2ddb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2de0ull));
TAIL_STATIC(0x699c39u,699);
}
B6c2de0:L6c2de0:{c.instructions+=3;NFSU2_TR(0x6c2de0);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c2de3:{NFSU2_TR(0x6c2de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2de6:{NFSU2_TR(0x6c2de6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2df9;}}
}
B6c2de8:L6c2de8:{c.instructions+=1;NFSU2_TR(0x6c2de8);
__builtin_memmove((R+4),(R+28),4);
}
B6c2dea:L6c2dea:{c.instructions+=2;NFSU2_TR(0x6c2dea);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2dec:{NFSU2_TR(0x6c2dec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2df1ull));
TAIL_STATIC(0x6739efu,673);
}
B6c2df1:L6c2df1:{c.instructions+=2;NFSU2_TR(0x6c2df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2df4:{NFSU2_TR(0x6c2df4);
{goto L6c2e7c;}
}
B6c2df9:L6c2df9:{c.instructions+=8;NFSU2_TR(0x6c2df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2dfc:{NFSU2_TR(0x6c2dfc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c2dff:{NFSU2_TR(0x6c2dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2e05:{NFSU2_TR(0x6c2e05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2e08:{NFSU2_TR(0x6c2e08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c2e0a:{NFSU2_TR(0x6c2e0a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6c2e0d:{NFSU2_TR(0x6c2e0d);
__builtin_memmove((R+4),(R+12),4);
}
B6c2e0f:{NFSU2_TR(0x6c2e0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2e14ull));
TAIL_STATIC(0x699765u,699);
}
B6c2e14:L6c2e14:{c.instructions+=15;NFSU2_TR(0x6c2e14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2e1a:{NFSU2_TR(0x6c2e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2e1d:{NFSU2_TR(0x6c2e1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c2e1f:{NFSU2_TR(0x6c2e1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2e22:{NFSU2_TR(0x6c2e22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c2e24:{NFSU2_TR(0x6c2e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2e2a:{NFSU2_TR(0x6c2e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2e2d:{NFSU2_TR(0x6c2e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2e30:{NFSU2_TR(0x6c2e30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c2e32:{NFSU2_TR(0x6c2e32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c2e34:{NFSU2_TR(0x6c2e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2e37:{NFSU2_TR(0x6c2e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2e3a:{NFSU2_TR(0x6c2e3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2e3d:{NFSU2_TR(0x6c2e3d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2e41:{NFSU2_TR(0x6c2e41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2e57;}}
}
B6c2e43:L6c2e43:{c.instructions+=6;NFSU2_TR(0x6c2e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2e49:{NFSU2_TR(0x6c2e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2e4c:{NFSU2_TR(0x6c2e4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c2e4e:{NFSU2_TR(0x6c2e4e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x8ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6c2e52:{NFSU2_TR(0x6c2e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2e55:{NFSU2_TR(0x6c2e55);
{goto L6c2e5e;}
}
B6c2e57:L6c2e57:{c.instructions+=1;NFSU2_TR(0x6c2e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(u32(0x80000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2e5e:L6c2e5e:{c.instructions+=3;NFSU2_TR(0x6c2e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2e64:{NFSU2_TR(0x6c2e64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2e65:{NFSU2_TR(0x6c2e65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2e6aull));
TAIL_STATIC(0x6995c1u,699);
}
B6c2e6a:L6c2e6a:{c.instructions+=4;NFSU2_TR(0x6c2e6a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2e6c:{NFSU2_TR(0x6c2e6c);
__builtin_memmove((R+4),(R+28),4);
}
B6c2e6e:{NFSU2_TR(0x6c2e6e);
__builtin_memmove((R+24),(R+0),4);
}
B6c2e70:{NFSU2_TR(0x6c2e70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2e75ull));
TAIL_STATIC(0x6739efu,673);
}
B6c2e75:L6c2e75:{c.instructions+=2;NFSU2_TR(0x6c2e75);
__builtin_memmove((R+0),(R+24),4);
}
B6c2e77:{NFSU2_TR(0x6c2e77);
{goto L6c2e7c;}
}
B6c2e79:L6c2e79:{c.instructions+=2;NFSU2_TR(0x6c2e79);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c2e7b:{NFSU2_TR(0x6c2e7b);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c2e7c:L6c2e7c:{c.instructions+=5;NFSU2_TR(0x6c2e7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c2e7d:{NFSU2_TR(0x6c2e7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c2e7e:{NFSU2_TR(0x6c2e7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c2e7f:{NFSU2_TR(0x6c2e7f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c2e80:{NFSU2_TR(0x6c2e80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c2e81:L6c2e81:{c.instructions+=15;NFSU2_TR(0x6c2e81);
__builtin_memmove((R+28),(R+28),4);
}
B6c2e83:{NFSU2_TR(0x6c2e83);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2e84:{NFSU2_TR(0x6c2e84);
__builtin_memmove((R+20),(R+16),4);
}
B6c2e86:{NFSU2_TR(0x6c2e86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6c2e89:{NFSU2_TR(0x6c2e89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2e8a:{NFSU2_TR(0x6c2e8a);
__builtin_memmove((R+24),(R+4),4);
}
B6c2e8c:{NFSU2_TR(0x6c2e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2e92:{NFSU2_TR(0x6c2e92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c2e94:{NFSU2_TR(0x6c2e94);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2e95:{NFSU2_TR(0x6c2e95);
__builtin_memmove((R+28),(R+0),4);
}
B6c2e97:{NFSU2_TR(0x6c2e97);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6c2e9d:{NFSU2_TR(0x6c2e9d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6c2ea2:{NFSU2_TR(0x6c2ea2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c2ea7:{NFSU2_TR(0x6c2ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2eaa:{NFSU2_TR(0x6c2eaa);
if(r1(R+518)){{goto L6c2eb4;}}
}
B6c2eac:L6c2eac:{c.instructions+=3;NFSU2_TR(0x6c2eac);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c2eae:{NFSU2_TR(0x6c2eae);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c2eaf:{NFSU2_TR(0x6c2eaf);
TAIL_STATIC(0x6c306fu,6c3);
}
B6c2eb4:L6c2eb4:{c.instructions+=8;NFSU2_TR(0x6c2eb4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c2eb6:{NFSU2_TR(0x6c2eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2eb9:{NFSU2_TR(0x6c2eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2ebc:{NFSU2_TR(0x6c2ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2ebf:{NFSU2_TR(0x6c2ebf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2ec0:{NFSU2_TR(0x6c2ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2ec4:{NFSU2_TR(0x6c2ec4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c2ec6:{NFSU2_TR(0x6c2ec6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c2f19;}}
}
B6c2ec8:L6c2ec8:{c.instructions+=5;NFSU2_TR(0x6c2ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2ece:{NFSU2_TR(0x6c2ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2ed1:{NFSU2_TR(0x6c2ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2ed4:{NFSU2_TR(0x6c2ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6c2ed7:{NFSU2_TR(0x6c2ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2eda:L6c2eda:{c.instructions+=9;NFSU2_TR(0x6c2eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2edd:{NFSU2_TR(0x6c2edd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c2ee0:{NFSU2_TR(0x6c2ee0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c2ee2:{NFSU2_TR(0x6c2ee2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6c2ee4:{NFSU2_TR(0x6c2ee4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c2ee7:{NFSU2_TR(0x6c2ee7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c2eea:{NFSU2_TR(0x6c2eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c2eed:{NFSU2_TR(0x6c2eed);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2ef0:{NFSU2_TR(0x6c2ef0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2f19;}}
}
B6c2ef2:L6c2ef2:{c.instructions+=3;NFSU2_TR(0x6c2ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c2ef5:{NFSU2_TR(0x6c2ef5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2ef8:{NFSU2_TR(0x6c2ef8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2f19;}}
}
B6c2efa:L6c2efa:{c.instructions+=3;NFSU2_TR(0x6c2efa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c2efd:{NFSU2_TR(0x6c2efd);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2f00:{NFSU2_TR(0x6c2f00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2f19;}}
}
B6c2f02:L6c2f02:{c.instructions+=3;NFSU2_TR(0x6c2f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c2f05:{NFSU2_TR(0x6c2f05);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2f08:{NFSU2_TR(0x6c2f08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c2f19;}}
}
B6c2f0a:L6c2f0a:{c.instructions+=5;NFSU2_TR(0x6c2f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2f0d:{NFSU2_TR(0x6c2f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2f11:{NFSU2_TR(0x6c2f11);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c2f14:{NFSU2_TR(0x6c2f14);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6c2f17:{NFSU2_TR(0x6c2f17);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c2edau);}goto L6c2eda;}}
}
B6c2f19:L6c2f19:{c.instructions+=2;NFSU2_TR(0x6c2f19);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c2f1c:{NFSU2_TR(0x6c2f1c);
if(r1(R+518)){TAIL_STATIC(0x6c3051u,6c3);}
}
B6c2f22:L6c2f22:{c.instructions+=8;NFSU2_TR(0x6c2f22);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2f23:{NFSU2_TR(0x6c2f23);
__builtin_memmove((R+0),(R+28),4);
}
B6c2f25:{NFSU2_TR(0x6c2f25);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c2f2a:{NFSU2_TR(0x6c2f2a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2f2b:{NFSU2_TR(0x6c2f2b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6c2f30:{NFSU2_TR(0x6c2f30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c2f31:{NFSU2_TR(0x6c2f31);
__builtin_memmove((R+4),(R+24),4);
}
B6c2f33:{NFSU2_TR(0x6c2f33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2f38ull));
TAIL_STATIC(0x699c99u,699);
}
B6c2f38:L6c2f38:{c.instructions+=3;NFSU2_TR(0x6c2f38);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c2f3b:{NFSU2_TR(0x6c2f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2f3e:{NFSU2_TR(0x6c2f3e);
if(r1(R+518)){TAIL_STATIC(0x6c3073u,6c3);}
}
B6c2f44:L6c2f44:{c.instructions+=5;NFSU2_TR(0x6c2f44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2f47:{NFSU2_TR(0x6c2f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2f4b:{NFSU2_TR(0x6c2f4b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c2f4d:{NFSU2_TR(0x6c2f4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c2f50:{NFSU2_TR(0x6c2f50);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c300du,6c3);}
}
B6c2f56:L6c2f56:{c.instructions+=17;NFSU2_TR(0x6c2f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2f59:{NFSU2_TR(0x6c2f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2f5c:{NFSU2_TR(0x6c2f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2f62:{NFSU2_TR(0x6c2f62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2f65:{NFSU2_TR(0x6c2f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c2f68:{NFSU2_TR(0x6c2f68);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c2f6b:{NFSU2_TR(0x6c2f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c2f6e:{NFSU2_TR(0x6c2f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2f71:{NFSU2_TR(0x6c2f71);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6c2f74:{NFSU2_TR(0x6c2f74);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c2f77:{NFSU2_TR(0x6c2f77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2f7d:{NFSU2_TR(0x6c2f7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2f80:{NFSU2_TR(0x6c2f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2f83:{NFSU2_TR(0x6c2f83);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c2f86:{NFSU2_TR(0x6c2f86);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6c2f89:{NFSU2_TR(0x6c2f89);
__builtin_memmove((R+4),(R+24),4);
}
B6c2f8b:{NFSU2_TR(0x6c2f8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c2f90ull));
TAIL_STATIC(0x699d40u,699);
}
B6c2f90:L6c2f90:{c.instructions+=12;NFSU2_TR(0x6c2f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2f96:{NFSU2_TR(0x6c2f96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c2f99:{NFSU2_TR(0x6c2f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2f9c:{NFSU2_TR(0x6c2f9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c2f9f:{NFSU2_TR(0x6c2f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2fa5:{NFSU2_TR(0x6c2fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2fa8:{NFSU2_TR(0x6c2fa8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c2fab:{NFSU2_TR(0x6c2fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c2fae:{NFSU2_TR(0x6c2fae);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c2fb1:{NFSU2_TR(0x6c2fb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2fb4:{NFSU2_TR(0x6c2fb4);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0xffffffffull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6c2fb8:{NFSU2_TR(0x6c2fb8);
if(r1(R+518)){TAIL_STATIC(0x6c3073u,6c3);}
}
B6c2fbe:L6c2fbe:{c.instructions+=22;NFSU2_TR(0x6c2fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2fc1:{NFSU2_TR(0x6c2fc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c2fc4:{NFSU2_TR(0x6c2fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2fc7:{NFSU2_TR(0x6c2fc7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c2fca:{NFSU2_TR(0x6c2fca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c2fcd:{NFSU2_TR(0x6c2fcd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c2fd0:{NFSU2_TR(0x6c2fd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c2fd3:{NFSU2_TR(0x6c2fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2fd6:{NFSU2_TR(0x6c2fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2fd9:{NFSU2_TR(0x6c2fd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c2fdd:{NFSU2_TR(0x6c2fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2fe0:{NFSU2_TR(0x6c2fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2fe3:{NFSU2_TR(0x6c2fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2fe6:{NFSU2_TR(0x6c2fe6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c2fe9:{NFSU2_TR(0x6c2fe9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c2fec:{NFSU2_TR(0x6c2fec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c2fef:{NFSU2_TR(0x6c2fef);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c2ff2:{NFSU2_TR(0x6c2ff2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c2ff5:{NFSU2_TR(0x6c2ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c2ff8:{NFSU2_TR(0x6c2ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c2ffb:{NFSU2_TR(0x6c2ffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c2ffe:{NFSU2_TR(0x6c2ffe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
TAIL_STATIC(0x6c3001u,6c3);
}
XIT:NFSU2_TR_EXIT(0x6c2,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
