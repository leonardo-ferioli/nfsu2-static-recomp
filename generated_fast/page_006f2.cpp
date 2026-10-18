#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6e3(u8* __restrict R,Cpu& c);
u32 body_6f1(u8* __restrict R,Cpu& c);
u32 body_6f3(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6f2,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6f2,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6f2(u8* __restrict R,Cpu& c);
u32 page_6f2(Cpu& c){return body_6f2(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6f2(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6f2000:goto L6f2000;
case 0x6f2002:goto L6f2002;
case 0x6f2008:c.instructions+=4;goto B6f2008;
case 0x6f200c:c.instructions+=3;goto B6f200c;
case 0x6f2010:c.instructions+=2;goto B6f2010;
case 0x6f2014:c.instructions+=1;goto B6f2014;
case 0x6f2016:goto L6f2016;
case 0x6f201c:c.instructions+=3;goto B6f201c;
case 0x6f2020:c.instructions+=2;goto B6f2020;
case 0x6f2024:c.instructions+=1;goto B6f2024;
case 0x6f2028:goto L6f2028;
case 0x6f202b:c.instructions+=5;goto B6f202b;
case 0x6f202d:c.instructions+=4;goto B6f202d;
case 0x6f2031:c.instructions+=3;goto B6f2031;
case 0x6f2035:c.instructions+=2;goto B6f2035;
case 0x6f203d:c.instructions+=1;goto B6f203d;
case 0x6f203f:goto L6f203f;
case 0x6f2041:c.instructions+=1;goto B6f2041;
case 0x6f2043:goto L6f2043;
case 0x6f2045:c.instructions+=1;goto B6f2045;
case 0x6f2047:goto L6f2047;
case 0x6f204b:c.instructions+=2;goto B6f204b;
case 0x6f204d:c.instructions+=1;goto B6f204d;
case 0x6f204f:goto L6f204f;
case 0x6f2052:goto L6f2052;
case 0x6f2056:c.instructions+=5;goto B6f2056;
case 0x6f205a:c.instructions+=4;goto B6f205a;
case 0x6f205c:c.instructions+=3;goto B6f205c;
case 0x6f205e:c.instructions+=2;goto B6f205e;
case 0x6f2061:c.instructions+=1;goto B6f2061;
case 0x6f2063:goto L6f2063;
case 0x6f2067:c.instructions+=4;goto B6f2067;
case 0x6f2069:c.instructions+=3;goto B6f2069;
case 0x6f206d:c.instructions+=2;goto B6f206d;
case 0x6f206f:c.instructions+=1;goto B6f206f;
case 0x6f2074:goto L6f2074;
case 0x6f2078:c.instructions+=4;goto B6f2078;
case 0x6f207a:c.instructions+=3;goto B6f207a;
case 0x6f207e:c.instructions+=2;goto B6f207e;
case 0x6f2080:c.instructions+=1;goto B6f2080;
case 0x6f2085:goto L6f2085;
case 0x6f2088:c.instructions+=3;goto B6f2088;
case 0x6f208a:c.instructions+=2;goto B6f208a;
case 0x6f208e:c.instructions+=1;goto B6f208e;
case 0x6f2090:goto L6f2090;
case 0x6f2092:c.instructions+=1;goto B6f2092;
case 0x6f2094:goto L6f2094;
case 0x6f2098:c.instructions+=3;goto B6f2098;
case 0x6f209c:c.instructions+=2;goto B6f209c;
case 0x6f20a0:c.instructions+=1;goto B6f20a0;
case 0x6f20a2:goto L6f20a2;
case 0x6f20a4:c.instructions+=1;goto B6f20a4;
case 0x6f20a6:goto L6f20a6;
case 0x6f20a9:c.instructions+=1;goto B6f20a9;
case 0x6f20aa:goto L6f20aa;
case 0x6f20ae:c.instructions+=3;goto B6f20ae;
case 0x6f20b0:c.instructions+=2;goto B6f20b0;
case 0x6f20b3:c.instructions+=1;goto B6f20b3;
case 0x6f20b5:goto L6f20b5;
case 0x6f20b9:c.instructions+=3;goto B6f20b9;
case 0x6f20bc:c.instructions+=2;goto B6f20bc;
case 0x6f20be:c.instructions+=1;goto B6f20be;
case 0x6f20c0:goto L6f20c0;
case 0x6f20c3:goto L6f20c3;
case 0x6f20c6:c.instructions+=2;goto B6f20c6;
case 0x6f20c8:c.instructions+=1;goto B6f20c8;
case 0x6f20ca:goto L6f20ca;
case 0x6f20cb:c.instructions+=3;goto B6f20cb;
case 0x6f20ce:c.instructions+=2;goto B6f20ce;
case 0x6f20d0:c.instructions+=1;goto B6f20d0;
case 0x6f20d2:goto L6f20d2;
case 0x6f20d4:goto L6f20d4;
case 0x6f20d6:c.instructions+=1;goto B6f20d6;
case 0x6f20d8:goto L6f20d8;
case 0x6f20db:c.instructions+=2;goto B6f20db;
case 0x6f20dd:c.instructions+=1;goto B6f20dd;
case 0x6f20df:goto L6f20df;
case 0x6f20e0:c.instructions+=3;goto B6f20e0;
case 0x6f20e3:c.instructions+=2;goto B6f20e3;
case 0x6f20e5:c.instructions+=1;goto B6f20e5;
case 0x6f20e7:goto L6f20e7;
case 0x6f20ea:c.instructions+=2;goto B6f20ea;
case 0x6f20ec:c.instructions+=1;goto B6f20ec;
case 0x6f20ee:goto L6f20ee;
case 0x6f20f2:c.instructions+=4;goto B6f20f2;
case 0x6f20f8:c.instructions+=3;goto B6f20f8;
case 0x6f20fa:c.instructions+=2;goto B6f20fa;
case 0x6f20fd:c.instructions+=1;goto B6f20fd;
case 0x6f20ff:goto L6f20ff;
case 0x6f2103:c.instructions+=5;goto B6f2103;
case 0x6f2105:c.instructions+=4;goto B6f2105;
case 0x6f2109:c.instructions+=3;goto B6f2109;
case 0x6f210d:c.instructions+=2;goto B6f210d;
case 0x6f2111:c.instructions+=1;goto B6f2111;
case 0x6f2113:goto L6f2113;
case 0x6f2115:c.instructions+=2;goto B6f2115;
case 0x6f2119:c.instructions+=1;goto B6f2119;
case 0x6f211b:goto L6f211b;
case 0x6f2120:c.instructions+=7;goto B6f2120;
case 0x6f2124:c.instructions+=6;goto B6f2124;
case 0x6f2128:c.instructions+=5;goto B6f2128;
case 0x6f212c:c.instructions+=4;goto B6f212c;
case 0x6f212e:c.instructions+=3;goto B6f212e;
case 0x6f2130:c.instructions+=2;goto B6f2130;
case 0x6f2133:c.instructions+=1;goto B6f2133;
case 0x6f2139:goto L6f2139;
case 0x6f213d:c.instructions+=8;goto B6f213d;
case 0x6f2141:c.instructions+=7;goto B6f2141;
case 0x6f2143:c.instructions+=6;goto B6f2143;
case 0x6f2147:c.instructions+=5;goto B6f2147;
case 0x6f2149:c.instructions+=4;goto B6f2149;
case 0x6f214d:c.instructions+=3;goto B6f214d;
case 0x6f2151:c.instructions+=2;goto B6f2151;
case 0x6f2153:c.instructions+=1;goto B6f2153;
case 0x6f2155:goto L6f2155;
case 0x6f2159:goto L6f2159;
case 0x6f215b:goto L6f215b;
case 0x6f215f:c.instructions+=3;goto B6f215f;
case 0x6f2160:c.instructions+=2;goto B6f2160;
case 0x6f2162:c.instructions+=1;goto B6f2162;
case 0x6f2164:goto L6f2164;
case 0x6f2166:c.instructions+=1;goto B6f2166;
case 0x6f216a:goto L6f216a;
case 0x6f216e:c.instructions+=4;goto B6f216e;
case 0x6f2172:c.instructions+=3;goto B6f2172;
case 0x6f2176:c.instructions+=2;goto B6f2176;
case 0x6f2178:c.instructions+=1;goto B6f2178;
case 0x6f217e:goto L6f217e;
case 0x6f2182:c.instructions+=12;goto B6f2182;
case 0x6f2185:c.instructions+=11;goto B6f2185;
case 0x6f2187:c.instructions+=10;goto B6f2187;
case 0x6f218a:c.instructions+=9;goto B6f218a;
case 0x6f218e:c.instructions+=8;goto B6f218e;
case 0x6f2190:c.instructions+=7;goto B6f2190;
case 0x6f2193:c.instructions+=6;goto B6f2193;
case 0x6f2195:c.instructions+=5;goto B6f2195;
case 0x6f2198:c.instructions+=4;goto B6f2198;
case 0x6f219c:c.instructions+=3;goto B6f219c;
case 0x6f21a0:c.instructions+=2;goto B6f21a0;
case 0x6f21a3:c.instructions+=1;goto B6f21a3;
case 0x6f21a9:goto L6f21a9;
case 0x6f21ac:c.instructions+=7;goto B6f21ac;
case 0x6f21af:c.instructions+=6;goto B6f21af;
case 0x6f21b2:c.instructions+=5;goto B6f21b2;
case 0x6f21b5:c.instructions+=4;goto B6f21b5;
case 0x6f21b7:c.instructions+=3;goto B6f21b7;
case 0x6f21ba:c.instructions+=2;goto B6f21ba;
case 0x6f21be:c.instructions+=1;goto B6f21be;
case 0x6f21c4:goto L6f21c4;
case 0x6f21cc:c.instructions+=2;goto B6f21cc;
case 0x6f21cf:c.instructions+=1;goto B6f21cf;
case 0x6f21d2:goto L6f21d2;
case 0x6f21d5:c.instructions+=199;goto B6f21d5;
case 0x6f21d9:c.instructions+=198;goto B6f21d9;
case 0x6f21dd:c.instructions+=197;goto B6f21dd;
case 0x6f21e1:c.instructions+=196;goto B6f21e1;
case 0x6f21e5:c.instructions+=195;goto B6f21e5;
case 0x6f21e9:c.instructions+=194;goto B6f21e9;
case 0x6f21ec:c.instructions+=193;goto B6f21ec;
case 0x6f21f0:c.instructions+=192;goto B6f21f0;
case 0x6f21f4:c.instructions+=191;goto B6f21f4;
case 0x6f21f7:c.instructions+=190;goto B6f21f7;
case 0x6f21fa:c.instructions+=189;goto B6f21fa;
case 0x6f21fe:c.instructions+=188;goto B6f21fe;
case 0x6f2202:c.instructions+=187;goto B6f2202;
case 0x6f2206:c.instructions+=186;goto B6f2206;
case 0x6f2209:c.instructions+=185;goto B6f2209;
case 0x6f220d:c.instructions+=184;goto B6f220d;
case 0x6f2211:c.instructions+=183;goto B6f2211;
case 0x6f2215:c.instructions+=182;goto B6f2215;
case 0x6f2219:c.instructions+=181;goto B6f2219;
case 0x6f221d:c.instructions+=180;goto B6f221d;
case 0x6f2220:c.instructions+=179;goto B6f2220;
case 0x6f2224:c.instructions+=178;goto B6f2224;
case 0x6f2228:c.instructions+=177;goto B6f2228;
case 0x6f222c:c.instructions+=176;goto B6f222c;
case 0x6f222f:c.instructions+=175;goto B6f222f;
case 0x6f2233:c.instructions+=174;goto B6f2233;
case 0x6f2237:c.instructions+=173;goto B6f2237;
case 0x6f223a:c.instructions+=172;goto B6f223a;
case 0x6f223e:c.instructions+=171;goto B6f223e;
case 0x6f2240:c.instructions+=170;goto B6f2240;
case 0x6f2244:c.instructions+=169;goto B6f2244;
case 0x6f2246:c.instructions+=168;goto B6f2246;
case 0x6f224a:c.instructions+=167;goto B6f224a;
case 0x6f224e:c.instructions+=166;goto B6f224e;
case 0x6f2252:c.instructions+=165;goto B6f2252;
case 0x6f2254:c.instructions+=164;goto B6f2254;
case 0x6f2258:c.instructions+=163;goto B6f2258;
case 0x6f225a:c.instructions+=162;goto B6f225a;
case 0x6f225e:c.instructions+=161;goto B6f225e;
case 0x6f2262:c.instructions+=160;goto B6f2262;
case 0x6f2264:c.instructions+=159;goto B6f2264;
case 0x6f2266:c.instructions+=158;goto B6f2266;
case 0x6f226a:c.instructions+=157;goto B6f226a;
case 0x6f226e:c.instructions+=156;goto B6f226e;
case 0x6f2272:c.instructions+=155;goto B6f2272;
case 0x6f2276:c.instructions+=154;goto B6f2276;
case 0x6f227a:c.instructions+=153;goto B6f227a;
case 0x6f227e:c.instructions+=152;goto B6f227e;
case 0x6f2282:c.instructions+=151;goto B6f2282;
case 0x6f2286:c.instructions+=150;goto B6f2286;
case 0x6f228a:c.instructions+=149;goto B6f228a;
case 0x6f228e:c.instructions+=148;goto B6f228e;
case 0x6f2292:c.instructions+=147;goto B6f2292;
case 0x6f2295:c.instructions+=146;goto B6f2295;
case 0x6f2299:c.instructions+=145;goto B6f2299;
case 0x6f229d:c.instructions+=144;goto B6f229d;
case 0x6f22a1:c.instructions+=143;goto B6f22a1;
case 0x6f22a3:c.instructions+=142;goto B6f22a3;
case 0x6f22a7:c.instructions+=141;goto B6f22a7;
case 0x6f22ab:c.instructions+=140;goto B6f22ab;
case 0x6f22af:c.instructions+=139;goto B6f22af;
case 0x6f22b2:c.instructions+=138;goto B6f22b2;
case 0x6f22b6:c.instructions+=137;goto B6f22b6;
case 0x6f22ba:c.instructions+=136;goto B6f22ba;
case 0x6f22be:c.instructions+=135;goto B6f22be;
case 0x6f22c2:c.instructions+=134;goto B6f22c2;
case 0x6f22c5:c.instructions+=133;goto B6f22c5;
case 0x6f22c9:c.instructions+=132;goto B6f22c9;
case 0x6f22cd:c.instructions+=131;goto B6f22cd;
case 0x6f22d1:c.instructions+=130;goto B6f22d1;
case 0x6f22d3:c.instructions+=129;goto B6f22d3;
case 0x6f22d7:c.instructions+=128;goto B6f22d7;
case 0x6f22db:c.instructions+=127;goto B6f22db;
case 0x6f22de:c.instructions+=126;goto B6f22de;
case 0x6f22e2:c.instructions+=125;goto B6f22e2;
case 0x6f22e4:c.instructions+=124;goto B6f22e4;
case 0x6f22e8:c.instructions+=123;goto B6f22e8;
case 0x6f22ea:c.instructions+=122;goto B6f22ea;
case 0x6f22ee:c.instructions+=121;goto B6f22ee;
case 0x6f22f2:c.instructions+=120;goto B6f22f2;
case 0x6f22f6:c.instructions+=119;goto B6f22f6;
case 0x6f22fa:c.instructions+=118;goto B6f22fa;
case 0x6f22fc:c.instructions+=117;goto B6f22fc;
case 0x6f2300:c.instructions+=116;goto B6f2300;
case 0x6f2302:c.instructions+=115;goto B6f2302;
case 0x6f2306:c.instructions+=114;goto B6f2306;
case 0x6f230a:c.instructions+=113;goto B6f230a;
case 0x6f230c:c.instructions+=112;goto B6f230c;
case 0x6f230e:c.instructions+=111;goto B6f230e;
case 0x6f2312:c.instructions+=110;goto B6f2312;
case 0x6f2316:c.instructions+=109;goto B6f2316;
case 0x6f231a:c.instructions+=108;goto B6f231a;
case 0x6f231e:c.instructions+=107;goto B6f231e;
case 0x6f2322:c.instructions+=106;goto B6f2322;
case 0x6f2326:c.instructions+=105;goto B6f2326;
case 0x6f232a:c.instructions+=104;goto B6f232a;
case 0x6f232e:c.instructions+=103;goto B6f232e;
case 0x6f2332:c.instructions+=102;goto B6f2332;
case 0x6f2336:c.instructions+=101;goto B6f2336;
case 0x6f233a:c.instructions+=100;goto B6f233a;
case 0x6f233d:c.instructions+=99;goto B6f233d;
case 0x6f2341:c.instructions+=98;goto B6f2341;
case 0x6f2345:c.instructions+=97;goto B6f2345;
case 0x6f2349:c.instructions+=96;goto B6f2349;
case 0x6f234c:c.instructions+=95;goto B6f234c;
case 0x6f2350:c.instructions+=94;goto B6f2350;
case 0x6f2354:c.instructions+=93;goto B6f2354;
case 0x6f2358:c.instructions+=92;goto B6f2358;
case 0x6f235b:c.instructions+=91;goto B6f235b;
case 0x6f235f:c.instructions+=90;goto B6f235f;
case 0x6f2363:c.instructions+=89;goto B6f2363;
case 0x6f2367:c.instructions+=88;goto B6f2367;
case 0x6f236b:c.instructions+=87;goto B6f236b;
case 0x6f236f:c.instructions+=86;goto B6f236f;
case 0x6f2372:c.instructions+=85;goto B6f2372;
case 0x6f2376:c.instructions+=84;goto B6f2376;
case 0x6f237a:c.instructions+=83;goto B6f237a;
case 0x6f237d:c.instructions+=82;goto B6f237d;
case 0x6f2380:c.instructions+=81;goto B6f2380;
case 0x6f2384:c.instructions+=80;goto B6f2384;
case 0x6f2388:c.instructions+=79;goto B6f2388;
case 0x6f238b:c.instructions+=78;goto B6f238b;
case 0x6f238f:c.instructions+=77;goto B6f238f;
case 0x6f2391:c.instructions+=76;goto B6f2391;
case 0x6f2395:c.instructions+=75;goto B6f2395;
case 0x6f2397:c.instructions+=74;goto B6f2397;
case 0x6f239b:c.instructions+=73;goto B6f239b;
case 0x6f239f:c.instructions+=72;goto B6f239f;
case 0x6f23a3:c.instructions+=71;goto B6f23a3;
case 0x6f23a5:c.instructions+=70;goto B6f23a5;
case 0x6f23a9:c.instructions+=69;goto B6f23a9;
case 0x6f23ab:c.instructions+=68;goto B6f23ab;
case 0x6f23af:c.instructions+=67;goto B6f23af;
case 0x6f23b3:c.instructions+=66;goto B6f23b3;
case 0x6f23b5:c.instructions+=65;goto B6f23b5;
case 0x6f23b7:c.instructions+=64;goto B6f23b7;
case 0x6f23bb:c.instructions+=63;goto B6f23bb;
case 0x6f23bf:c.instructions+=62;goto B6f23bf;
case 0x6f23c3:c.instructions+=61;goto B6f23c3;
case 0x6f23c7:c.instructions+=60;goto B6f23c7;
case 0x6f23cb:c.instructions+=59;goto B6f23cb;
case 0x6f23cf:c.instructions+=58;goto B6f23cf;
case 0x6f23d3:c.instructions+=57;goto B6f23d3;
case 0x6f23d7:c.instructions+=56;goto B6f23d7;
case 0x6f23db:c.instructions+=55;goto B6f23db;
case 0x6f23df:c.instructions+=54;goto B6f23df;
case 0x6f23e3:c.instructions+=53;goto B6f23e3;
case 0x6f23e6:c.instructions+=52;goto B6f23e6;
case 0x6f23ea:c.instructions+=51;goto B6f23ea;
case 0x6f23ee:c.instructions+=50;goto B6f23ee;
case 0x6f23f1:c.instructions+=49;goto B6f23f1;
case 0x6f23f5:c.instructions+=48;goto B6f23f5;
case 0x6f23f8:c.instructions+=47;goto B6f23f8;
case 0x6f23fc:c.instructions+=46;goto B6f23fc;
case 0x6f2400:c.instructions+=45;goto B6f2400;
case 0x6f2404:c.instructions+=44;goto B6f2404;
case 0x6f2408:c.instructions+=43;goto B6f2408;
case 0x6f240c:c.instructions+=42;goto B6f240c;
case 0x6f2410:c.instructions+=41;goto B6f2410;
case 0x6f2414:c.instructions+=40;goto B6f2414;
case 0x6f2417:c.instructions+=39;goto B6f2417;
case 0x6f241b:c.instructions+=38;goto B6f241b;
case 0x6f241f:c.instructions+=37;goto B6f241f;
case 0x6f2423:c.instructions+=36;goto B6f2423;
case 0x6f2426:c.instructions+=35;goto B6f2426;
case 0x6f242a:c.instructions+=34;goto B6f242a;
case 0x6f242e:c.instructions+=33;goto B6f242e;
case 0x6f2434:c.instructions+=32;goto B6f2434;
case 0x6f2438:c.instructions+=31;goto B6f2438;
case 0x6f243b:c.instructions+=30;goto B6f243b;
case 0x6f243e:c.instructions+=29;goto B6f243e;
case 0x6f2441:c.instructions+=28;goto B6f2441;
case 0x6f2444:c.instructions+=27;goto B6f2444;
case 0x6f2448:c.instructions+=26;goto B6f2448;
case 0x6f244a:c.instructions+=25;goto B6f244a;
case 0x6f244e:c.instructions+=24;goto B6f244e;
case 0x6f2450:c.instructions+=23;goto B6f2450;
case 0x6f2454:c.instructions+=22;goto B6f2454;
case 0x6f2458:c.instructions+=21;goto B6f2458;
case 0x6f245c:c.instructions+=20;goto B6f245c;
case 0x6f245e:c.instructions+=19;goto B6f245e;
case 0x6f2462:c.instructions+=18;goto B6f2462;
case 0x6f2464:c.instructions+=17;goto B6f2464;
case 0x6f2468:c.instructions+=16;goto B6f2468;
case 0x6f246c:c.instructions+=15;goto B6f246c;
case 0x6f246e:c.instructions+=14;goto B6f246e;
case 0x6f2470:c.instructions+=13;goto B6f2470;
case 0x6f2474:c.instructions+=12;goto B6f2474;
case 0x6f2478:c.instructions+=11;goto B6f2478;
case 0x6f247c:c.instructions+=10;goto B6f247c;
case 0x6f2480:c.instructions+=9;goto B6f2480;
case 0x6f2484:c.instructions+=8;goto B6f2484;
case 0x6f2488:c.instructions+=7;goto B6f2488;
case 0x6f248c:c.instructions+=6;goto B6f248c;
case 0x6f248f:c.instructions+=5;goto B6f248f;
case 0x6f2492:c.instructions+=4;goto B6f2492;
case 0x6f2494:c.instructions+=3;goto B6f2494;
case 0x6f2498:c.instructions+=2;goto B6f2498;
case 0x6f249c:c.instructions+=1;goto B6f249c;
case 0x6f24a2:goto L6f24a2;
case 0x6f24a6:goto L6f24a6;
case 0x6f24a8:c.instructions+=1;goto B6f24a8;
case 0x6f24ae:goto L6f24ae;
case 0x6f24b0:c.instructions+=3;goto B6f24b0;
case 0x6f24b3:c.instructions+=2;goto B6f24b3;
case 0x6f24b7:c.instructions+=1;goto B6f24b7;
case 0x6f24c0:goto L6f24c0;
case 0x6f24c3:c.instructions+=53;goto B6f24c3;
case 0x6f24c7:c.instructions+=52;goto B6f24c7;
case 0x6f24cb:c.instructions+=51;goto B6f24cb;
case 0x6f24cf:c.instructions+=50;goto B6f24cf;
case 0x6f24d3:c.instructions+=49;goto B6f24d3;
case 0x6f24d7:c.instructions+=48;goto B6f24d7;
case 0x6f24da:c.instructions+=47;goto B6f24da;
case 0x6f24de:c.instructions+=46;goto B6f24de;
case 0x6f24e2:c.instructions+=45;goto B6f24e2;
case 0x6f24e5:c.instructions+=44;goto B6f24e5;
case 0x6f24e7:c.instructions+=43;goto B6f24e7;
case 0x6f24eb:c.instructions+=42;goto B6f24eb;
case 0x6f24ef:c.instructions+=41;goto B6f24ef;
case 0x6f24f3:c.instructions+=40;goto B6f24f3;
case 0x6f24f6:c.instructions+=39;goto B6f24f6;
case 0x6f24fa:c.instructions+=38;goto B6f24fa;
case 0x6f24fe:c.instructions+=37;goto B6f24fe;
case 0x6f2501:c.instructions+=36;goto B6f2501;
case 0x6f2505:c.instructions+=35;goto B6f2505;
case 0x6f2509:c.instructions+=34;goto B6f2509;
case 0x6f250d:c.instructions+=33;goto B6f250d;
case 0x6f2510:c.instructions+=32;goto B6f2510;
case 0x6f2514:c.instructions+=31;goto B6f2514;
case 0x6f2518:c.instructions+=30;goto B6f2518;
case 0x6f251c:c.instructions+=29;goto B6f251c;
case 0x6f2520:c.instructions+=28;goto B6f2520;
case 0x6f2522:c.instructions+=27;goto B6f2522;
case 0x6f2525:c.instructions+=26;goto B6f2525;
case 0x6f2529:c.instructions+=25;goto B6f2529;
case 0x6f252a:c.instructions+=24;goto B6f252a;
case 0x6f252e:c.instructions+=23;goto B6f252e;
case 0x6f2531:c.instructions+=22;goto B6f2531;
case 0x6f2533:c.instructions+=21;goto B6f2533;
case 0x6f2536:c.instructions+=20;goto B6f2536;
case 0x6f253a:c.instructions+=19;goto B6f253a;
case 0x6f253c:c.instructions+=18;goto B6f253c;
case 0x6f2540:c.instructions+=17;goto B6f2540;
case 0x6f2542:c.instructions+=16;goto B6f2542;
case 0x6f2546:c.instructions+=15;goto B6f2546;
case 0x6f254a:c.instructions+=14;goto B6f254a;
case 0x6f254e:c.instructions+=13;goto B6f254e;
case 0x6f2550:c.instructions+=12;goto B6f2550;
case 0x6f2554:c.instructions+=11;goto B6f2554;
case 0x6f2556:c.instructions+=10;goto B6f2556;
case 0x6f255a:c.instructions+=9;goto B6f255a;
case 0x6f255e:c.instructions+=8;goto B6f255e;
case 0x6f2560:c.instructions+=7;goto B6f2560;
case 0x6f2562:c.instructions+=6;goto B6f2562;
case 0x6f2566:c.instructions+=5;goto B6f2566;
case 0x6f256a:c.instructions+=4;goto B6f256a;
case 0x6f256e:c.instructions+=3;goto B6f256e;
case 0x6f2572:c.instructions+=2;goto B6f2572;
case 0x6f2576:c.instructions+=1;goto B6f2576;
case 0x6f257c:goto L6f257c;
case 0x6f2580:c.instructions+=1;goto B6f2580;
case 0x6f2585:goto L6f2585;
case 0x6f2587:c.instructions+=2;goto B6f2587;
case 0x6f258b:c.instructions+=1;goto B6f258b;
case 0x6f2590:goto L6f2590;
case 0x6f2592:c.instructions+=2;goto B6f2592;
case 0x6f2595:c.instructions+=1;goto B6f2595;
case 0x6f259b:goto L6f259b;
case 0x6f25a3:c.instructions+=2;goto B6f25a3;
case 0x6f25a6:c.instructions+=1;goto B6f25a6;
case 0x6f25a9:goto L6f25a9;
case 0x6f25ac:c.instructions+=84;goto B6f25ac;
case 0x6f25b0:c.instructions+=83;goto B6f25b0;
case 0x6f25b4:c.instructions+=82;goto B6f25b4;
case 0x6f25b8:c.instructions+=81;goto B6f25b8;
case 0x6f25bb:c.instructions+=80;goto B6f25bb;
case 0x6f25bf:c.instructions+=79;goto B6f25bf;
case 0x6f25c2:c.instructions+=78;goto B6f25c2;
case 0x6f25c8:c.instructions+=77;goto B6f25c8;
case 0x6f25ce:c.instructions+=76;goto B6f25ce;
case 0x6f25d2:c.instructions+=75;goto B6f25d2;
case 0x6f25d6:c.instructions+=74;goto B6f25d6;
case 0x6f25da:c.instructions+=73;goto B6f25da;
case 0x6f25de:c.instructions+=72;goto B6f25de;
case 0x6f25e2:c.instructions+=71;goto B6f25e2;
case 0x6f25e8:c.instructions+=70;goto B6f25e8;
case 0x6f25ec:c.instructions+=69;goto B6f25ec;
case 0x6f25f0:c.instructions+=68;goto B6f25f0;
case 0x6f25f4:c.instructions+=67;goto B6f25f4;
case 0x6f25f8:c.instructions+=66;goto B6f25f8;
case 0x6f25fc:c.instructions+=65;goto B6f25fc;
case 0x6f25ff:c.instructions+=64;goto B6f25ff;
case 0x6f2603:c.instructions+=63;goto B6f2603;
case 0x6f2607:c.instructions+=62;goto B6f2607;
case 0x6f260b:c.instructions+=61;goto B6f260b;
case 0x6f260f:c.instructions+=60;goto B6f260f;
case 0x6f2613:c.instructions+=59;goto B6f2613;
case 0x6f2617:c.instructions+=58;goto B6f2617;
case 0x6f261a:c.instructions+=57;goto B6f261a;
case 0x6f261e:c.instructions+=56;goto B6f261e;
case 0x6f2622:c.instructions+=55;goto B6f2622;
case 0x6f2626:c.instructions+=54;goto B6f2626;
case 0x6f262a:c.instructions+=53;goto B6f262a;
case 0x6f262e:c.instructions+=52;goto B6f262e;
case 0x6f2631:c.instructions+=51;goto B6f2631;
case 0x6f2635:c.instructions+=50;goto B6f2635;
case 0x6f2639:c.instructions+=49;goto B6f2639;
case 0x6f263d:c.instructions+=48;goto B6f263d;
case 0x6f2641:c.instructions+=47;goto B6f2641;
case 0x6f2645:c.instructions+=46;goto B6f2645;
case 0x6f2648:c.instructions+=45;goto B6f2648;
case 0x6f264c:c.instructions+=44;goto B6f264c;
case 0x6f2650:c.instructions+=43;goto B6f2650;
case 0x6f2654:c.instructions+=42;goto B6f2654;
case 0x6f2658:c.instructions+=41;goto B6f2658;
case 0x6f265c:c.instructions+=40;goto B6f265c;
case 0x6f2660:c.instructions+=39;goto B6f2660;
case 0x6f2663:c.instructions+=38;goto B6f2663;
case 0x6f2667:c.instructions+=37;goto B6f2667;
case 0x6f266b:c.instructions+=36;goto B6f266b;
case 0x6f266f:c.instructions+=35;goto B6f266f;
case 0x6f2673:c.instructions+=34;goto B6f2673;
case 0x6f2677:c.instructions+=33;goto B6f2677;
case 0x6f267a:c.instructions+=32;goto B6f267a;
case 0x6f267e:c.instructions+=31;goto B6f267e;
case 0x6f2682:c.instructions+=30;goto B6f2682;
case 0x6f2686:c.instructions+=29;goto B6f2686;
case 0x6f268a:c.instructions+=28;goto B6f268a;
case 0x6f268e:c.instructions+=27;goto B6f268e;
case 0x6f2691:c.instructions+=26;goto B6f2691;
case 0x6f2695:c.instructions+=25;goto B6f2695;
case 0x6f2699:c.instructions+=24;goto B6f2699;
case 0x6f269d:c.instructions+=23;goto B6f269d;
case 0x6f26a1:c.instructions+=22;goto B6f26a1;
case 0x6f26a5:c.instructions+=21;goto B6f26a5;
case 0x6f26a9:c.instructions+=20;goto B6f26a9;
case 0x6f26ac:c.instructions+=19;goto B6f26ac;
case 0x6f26b0:c.instructions+=18;goto B6f26b0;
case 0x6f26b4:c.instructions+=17;goto B6f26b4;
case 0x6f26b8:c.instructions+=16;goto B6f26b8;
case 0x6f26bc:c.instructions+=15;goto B6f26bc;
case 0x6f26c0:c.instructions+=14;goto B6f26c0;
case 0x6f26c3:c.instructions+=13;goto B6f26c3;
case 0x6f26c7:c.instructions+=12;goto B6f26c7;
case 0x6f26cb:c.instructions+=11;goto B6f26cb;
case 0x6f26cf:c.instructions+=10;goto B6f26cf;
case 0x6f26d3:c.instructions+=9;goto B6f26d3;
case 0x6f26d7:c.instructions+=8;goto B6f26d7;
case 0x6f26da:c.instructions+=7;goto B6f26da;
case 0x6f26de:c.instructions+=6;goto B6f26de;
case 0x6f26e2:c.instructions+=5;goto B6f26e2;
case 0x6f26e5:c.instructions+=4;goto B6f26e5;
case 0x6f26e8:c.instructions+=3;goto B6f26e8;
case 0x6f26ea:c.instructions+=2;goto B6f26ea;
case 0x6f26ee:c.instructions+=1;goto B6f26ee;
case 0x6f26f4:goto L6f26f4;
case 0x6f26f8:goto L6f26f8;
case 0x6f26fa:c.instructions+=1;goto B6f26fa;
case 0x6f26fc:goto L6f26fc;
case 0x6f26fe:c.instructions+=2;goto B6f26fe;
case 0x6f2701:c.instructions+=1;goto B6f2701;
case 0x6f2705:goto L6f2705;
case 0x6f2708:c.instructions+=24;goto B6f2708;
case 0x6f270c:c.instructions+=23;goto B6f270c;
case 0x6f2710:c.instructions+=22;goto B6f2710;
case 0x6f2714:c.instructions+=21;goto B6f2714;
case 0x6f2718:c.instructions+=20;goto B6f2718;
case 0x6f271b:c.instructions+=19;goto B6f271b;
case 0x6f271f:c.instructions+=18;goto B6f271f;
case 0x6f2720:c.instructions+=17;goto B6f2720;
case 0x6f2723:c.instructions+=16;goto B6f2723;
case 0x6f2725:c.instructions+=15;goto B6f2725;
case 0x6f2728:c.instructions+=14;goto B6f2728;
case 0x6f272c:c.instructions+=13;goto B6f272c;
case 0x6f2730:c.instructions+=12;goto B6f2730;
case 0x6f2734:c.instructions+=11;goto B6f2734;
case 0x6f2738:c.instructions+=10;goto B6f2738;
case 0x6f273c:c.instructions+=9;goto B6f273c;
case 0x6f273f:c.instructions+=8;goto B6f273f;
case 0x6f2743:c.instructions+=7;goto B6f2743;
case 0x6f2747:c.instructions+=6;goto B6f2747;
case 0x6f274b:c.instructions+=5;goto B6f274b;
case 0x6f274f:c.instructions+=4;goto B6f274f;
case 0x6f2753:c.instructions+=3;goto B6f2753;
case 0x6f2756:c.instructions+=2;goto B6f2756;
case 0x6f275a:c.instructions+=1;goto B6f275a;
case 0x6f275c:goto L6f275c;
case 0x6f275f:c.instructions+=2;goto B6f275f;
case 0x6f2761:c.instructions+=1;goto B6f2761;
case 0x6f2763:goto L6f2763;
case 0x6f2767:c.instructions+=11;goto B6f2767;
case 0x6f276a:c.instructions+=10;goto B6f276a;
case 0x6f276d:c.instructions+=9;goto B6f276d;
case 0x6f2771:c.instructions+=8;goto B6f2771;
case 0x6f2774:c.instructions+=7;goto B6f2774;
case 0x6f2777:c.instructions+=6;goto B6f2777;
case 0x6f277b:c.instructions+=5;goto B6f277b;
case 0x6f277f:c.instructions+=4;goto B6f277f;
case 0x6f2782:c.instructions+=3;goto B6f2782;
case 0x6f2784:c.instructions+=2;goto B6f2784;
case 0x6f2786:c.instructions+=1;goto B6f2786;
case 0x6f2788:goto L6f2788;
case 0x6f278b:c.instructions+=1;goto B6f278b;
case 0x6f2790:goto L6f2790;
case 0x6f2794:c.instructions+=14;goto B6f2794;
case 0x6f2797:c.instructions+=13;goto B6f2797;
case 0x6f279b:c.instructions+=12;goto B6f279b;
case 0x6f279f:c.instructions+=11;goto B6f279f;
case 0x6f27a2:c.instructions+=10;goto B6f27a2;
case 0x6f27a6:c.instructions+=9;goto B6f27a6;
case 0x6f27aa:c.instructions+=8;goto B6f27aa;
case 0x6f27ac:c.instructions+=7;goto B6f27ac;
case 0x6f27b0:c.instructions+=6;goto B6f27b0;
case 0x6f27b4:c.instructions+=5;goto B6f27b4;
case 0x6f27b8:c.instructions+=4;goto B6f27b8;
case 0x6f27b9:c.instructions+=3;goto B6f27b9;
case 0x6f27bc:c.instructions+=2;goto B6f27bc;
case 0x6f27be:c.instructions+=1;goto B6f27be;
case 0x6f27c0:goto L6f27c0;
case 0x6f27c1:c.instructions+=6;goto B6f27c1;
case 0x6f27c2:c.instructions+=5;goto B6f27c2;
case 0x6f27c3:c.instructions+=4;goto B6f27c3;
case 0x6f27c5:c.instructions+=3;goto B6f27c5;
case 0x6f27c6:c.instructions+=2;goto B6f27c6;
case 0x6f27c9:c.instructions+=1;goto B6f27c9;
case 0x6f27cc:goto L6f27cc;
case 0x6f27d0:c.instructions+=11;goto B6f27d0;
case 0x6f27d4:c.instructions+=10;goto B6f27d4;
case 0x6f27d5:c.instructions+=9;goto B6f27d5;
case 0x6f27d9:c.instructions+=8;goto B6f27d9;
case 0x6f27da:c.instructions+=7;goto B6f27da;
case 0x6f27db:c.instructions+=6;goto B6f27db;
case 0x6f27dc:c.instructions+=5;goto B6f27dc;
case 0x6f27e0:c.instructions+=4;goto B6f27e0;
case 0x6f27e1:c.instructions+=3;goto B6f27e1;
case 0x6f27e2:c.instructions+=2;goto B6f27e2;
case 0x6f27e6:c.instructions+=1;goto B6f27e6;
case 0x6f27eb:goto L6f27eb;
case 0x6f27ec:c.instructions+=5;goto B6f27ec;
case 0x6f27ed:c.instructions+=4;goto B6f27ed;
case 0x6f27ee:c.instructions+=3;goto B6f27ee;
case 0x6f27ef:c.instructions+=2;goto B6f27ef;
case 0x6f27f2:c.instructions+=1;goto B6f27f2;
case 0x6f2800:goto L6f2800;
case 0x6f2801:c.instructions+=2;goto B6f2801;
case 0x6f2803:c.instructions+=1;goto B6f2803;
case 0x6f2808:goto L6f2808;
case 0x6f280e:c.instructions+=5;goto B6f280e;
case 0x6f2815:c.instructions+=4;goto B6f2815;
case 0x6f281b:c.instructions+=3;goto B6f281b;
case 0x6f281d:c.instructions+=2;goto B6f281d;
case 0x6f281e:c.instructions+=1;goto B6f281e;
case 0x6f2820:goto L6f2820;
case 0x6f2823:c.instructions+=2;goto B6f2823;
case 0x6f2827:c.instructions+=1;goto B6f2827;
case 0x6f2830:goto L6f2830;
case 0x6f2836:c.instructions+=1;goto B6f2836;
case 0x6f2840:goto L6f2840;
case 0x6f2841:c.instructions+=4;goto B6f2841;
case 0x6f2844:c.instructions+=3;goto B6f2844;
case 0x6f2847:c.instructions+=2;goto B6f2847;
case 0x6f2849:c.instructions+=1;goto B6f2849;
case 0x6f284b:goto L6f284b;
case 0x6f284f:c.instructions+=7;goto B6f284f;
case 0x6f2853:c.instructions+=6;goto B6f2853;
case 0x6f2857:c.instructions+=5;goto B6f2857;
case 0x6f2859:c.instructions+=4;goto B6f2859;
case 0x6f285d:c.instructions+=3;goto B6f285d;
case 0x6f285f:c.instructions+=2;goto B6f285f;
case 0x6f2860:c.instructions+=1;goto B6f2860;
case 0x6f2863:goto L6f2863;
case 0x6f2867:c.instructions+=9;goto B6f2867;
case 0x6f286c:c.instructions+=8;goto B6f286c;
case 0x6f2870:c.instructions+=7;goto B6f2870;
case 0x6f2871:c.instructions+=6;goto B6f2871;
case 0x6f2875:c.instructions+=5;goto B6f2875;
case 0x6f2877:c.instructions+=4;goto B6f2877;
case 0x6f287b:c.instructions+=3;goto B6f287b;
case 0x6f287d:c.instructions+=2;goto B6f287d;
case 0x6f287e:c.instructions+=1;goto B6f287e;
case 0x6f2890:goto L6f2890;
case 0x6f2893:c.instructions+=2;goto B6f2893;
case 0x6f2896:c.instructions+=1;goto B6f2896;
case 0x6f28a0:goto L6f28a0;
case 0x6f28a4:c.instructions+=6;goto B6f28a4;
case 0x6f28a6:c.instructions+=5;goto B6f28a6;
case 0x6f28a8:c.instructions+=4;goto B6f28a8;
case 0x6f28a9:c.instructions+=3;goto B6f28a9;
case 0x6f28ad:c.instructions+=2;goto B6f28ad;
case 0x6f28ae:c.instructions+=1;goto B6f28ae;
case 0x6f28b1:goto L6f28b1;
case 0x6f28c0:goto L6f28c0;
case 0x6f28c4:c.instructions+=4;goto B6f28c4;
case 0x6f28c7:c.instructions+=3;goto B6f28c7;
case 0x6f28ca:c.instructions+=2;goto B6f28ca;
case 0x6f28cc:c.instructions+=1;goto B6f28cc;
case 0x6f28ce:goto L6f28ce;
case 0x6f28d1:goto L6f28d1;
case 0x6f28d2:c.instructions+=18;goto B6f28d2;
case 0x6f28d6:c.instructions+=17;goto B6f28d6;
case 0x6f28d7:c.instructions+=16;goto B6f28d7;
case 0x6f28d8:c.instructions+=15;goto B6f28d8;
case 0x6f28d9:c.instructions+=14;goto B6f28d9;
case 0x6f28dc:c.instructions+=13;goto B6f28dc;
case 0x6f28e0:c.instructions+=12;goto B6f28e0;
case 0x6f28e4:c.instructions+=11;goto B6f28e4;
case 0x6f28e7:c.instructions+=10;goto B6f28e7;
case 0x6f28e9:c.instructions+=9;goto B6f28e9;
case 0x6f28ec:c.instructions+=8;goto B6f28ec;
case 0x6f28f0:c.instructions+=7;goto B6f28f0;
case 0x6f28f4:c.instructions+=6;goto B6f28f4;
case 0x6f28f6:c.instructions+=5;goto B6f28f6;
case 0x6f28fa:c.instructions+=4;goto B6f28fa;
case 0x6f28fe:c.instructions+=3;goto B6f28fe;
case 0x6f2902:c.instructions+=2;goto B6f2902;
case 0x6f2906:c.instructions+=1;goto B6f2906;
case 0x6f290c:goto L6f290c;
case 0x6f2910:c.instructions+=3;goto B6f2910;
case 0x6f2911:c.instructions+=2;goto B6f2911;
case 0x6f2913:c.instructions+=1;goto B6f2913;
case 0x6f2919:goto L6f2919;
case 0x6f291a:c.instructions+=7;goto B6f291a;
case 0x6f291d:c.instructions+=6;goto B6f291d;
case 0x6f2921:c.instructions+=5;goto B6f2921;
case 0x6f2923:c.instructions+=4;goto B6f2923;
case 0x6f2926:c.instructions+=3;goto B6f2926;
case 0x6f292a:c.instructions+=2;goto B6f292a;
case 0x6f292e:c.instructions+=1;goto B6f292e;
case 0x6f2934:goto L6f2934;
case 0x6f2938:c.instructions+=9;goto B6f2938;
case 0x6f293c:c.instructions+=8;goto B6f293c;
case 0x6f2940:c.instructions+=7;goto B6f2940;
case 0x6f2945:c.instructions+=6;goto B6f2945;
case 0x6f2948:c.instructions+=5;goto B6f2948;
case 0x6f294b:c.instructions+=4;goto B6f294b;
case 0x6f294e:c.instructions+=3;goto B6f294e;
case 0x6f2950:c.instructions+=2;goto B6f2950;
case 0x6f2954:c.instructions+=1;goto B6f2954;
case 0x6f2958:goto L6f2958;
case 0x6f295c:c.instructions+=9;goto B6f295c;
case 0x6f2960:c.instructions+=8;goto B6f2960;
case 0x6f2962:c.instructions+=7;goto B6f2962;
case 0x6f2965:c.instructions+=6;goto B6f2965;
case 0x6f296a:c.instructions+=5;goto B6f296a;
case 0x6f296c:c.instructions+=4;goto B6f296c;
case 0x6f296e:c.instructions+=3;goto B6f296e;
case 0x6f2971:c.instructions+=2;goto B6f2971;
case 0x6f2974:c.instructions+=1;goto B6f2974;
case 0x6f297a:goto L6f297a;
case 0x6f297e:c.instructions+=85;goto B6f297e;
case 0x6f2980:c.instructions+=84;goto B6f2980;
case 0x6f2986:c.instructions+=83;goto B6f2986;
case 0x6f2988:c.instructions+=82;goto B6f2988;
case 0x6f298e:c.instructions+=81;goto B6f298e;
case 0x6f2990:c.instructions+=80;goto B6f2990;
case 0x6f2993:c.instructions+=79;goto B6f2993;
case 0x6f2997:c.instructions+=78;goto B6f2997;
case 0x6f299b:c.instructions+=77;goto B6f299b;
case 0x6f299d:c.instructions+=76;goto B6f299d;
case 0x6f29a3:c.instructions+=75;goto B6f29a3;
case 0x6f29a5:c.instructions+=74;goto B6f29a5;
case 0x6f29ab:c.instructions+=73;goto B6f29ab;
case 0x6f29ad:c.instructions+=72;goto B6f29ad;
case 0x6f29b1:c.instructions+=71;goto B6f29b1;
case 0x6f29b4:c.instructions+=70;goto B6f29b4;
case 0x6f29b8:c.instructions+=69;goto B6f29b8;
case 0x6f29ba:c.instructions+=68;goto B6f29ba;
case 0x6f29c0:c.instructions+=67;goto B6f29c0;
case 0x6f29c2:c.instructions+=66;goto B6f29c2;
case 0x6f29c8:c.instructions+=65;goto B6f29c8;
case 0x6f29ca:c.instructions+=64;goto B6f29ca;
case 0x6f29ce:c.instructions+=63;goto B6f29ce;
case 0x6f29d1:c.instructions+=62;goto B6f29d1;
case 0x6f29d5:c.instructions+=61;goto B6f29d5;
case 0x6f29d7:c.instructions+=60;goto B6f29d7;
case 0x6f29dd:c.instructions+=59;goto B6f29dd;
case 0x6f29df:c.instructions+=58;goto B6f29df;
case 0x6f29e5:c.instructions+=57;goto B6f29e5;
case 0x6f29e7:c.instructions+=56;goto B6f29e7;
case 0x6f29eb:c.instructions+=55;goto B6f29eb;
case 0x6f29ee:c.instructions+=54;goto B6f29ee;
case 0x6f29f2:c.instructions+=53;goto B6f29f2;
case 0x6f29f4:c.instructions+=52;goto B6f29f4;
case 0x6f29fa:c.instructions+=51;goto B6f29fa;
case 0x6f29fc:c.instructions+=50;goto B6f29fc;
case 0x6f2a02:c.instructions+=49;goto B6f2a02;
case 0x6f2a04:c.instructions+=48;goto B6f2a04;
case 0x6f2a08:c.instructions+=47;goto B6f2a08;
case 0x6f2a0b:c.instructions+=46;goto B6f2a0b;
case 0x6f2a0f:c.instructions+=45;goto B6f2a0f;
case 0x6f2a11:c.instructions+=44;goto B6f2a11;
case 0x6f2a17:c.instructions+=43;goto B6f2a17;
case 0x6f2a1b:c.instructions+=42;goto B6f2a1b;
case 0x6f2a1d:c.instructions+=41;goto B6f2a1d;
case 0x6f2a21:c.instructions+=40;goto B6f2a21;
case 0x6f2a27:c.instructions+=39;goto B6f2a27;
case 0x6f2a29:c.instructions+=38;goto B6f2a29;
case 0x6f2a2d:c.instructions+=37;goto B6f2a2d;
case 0x6f2a30:c.instructions+=36;goto B6f2a30;
case 0x6f2a34:c.instructions+=35;goto B6f2a34;
case 0x6f2a36:c.instructions+=34;goto B6f2a36;
case 0x6f2a3c:c.instructions+=33;goto B6f2a3c;
case 0x6f2a3e:c.instructions+=32;goto B6f2a3e;
case 0x6f2a44:c.instructions+=31;goto B6f2a44;
case 0x6f2a46:c.instructions+=30;goto B6f2a46;
case 0x6f2a4a:c.instructions+=29;goto B6f2a4a;
case 0x6f2a4d:c.instructions+=28;goto B6f2a4d;
case 0x6f2a51:c.instructions+=27;goto B6f2a51;
case 0x6f2a53:c.instructions+=26;goto B6f2a53;
case 0x6f2a59:c.instructions+=25;goto B6f2a59;
case 0x6f2a5b:c.instructions+=24;goto B6f2a5b;
case 0x6f2a61:c.instructions+=23;goto B6f2a61;
case 0x6f2a63:c.instructions+=22;goto B6f2a63;
case 0x6f2a67:c.instructions+=21;goto B6f2a67;
case 0x6f2a6a:c.instructions+=20;goto B6f2a6a;
case 0x6f2a6d:c.instructions+=19;goto B6f2a6d;
case 0x6f2a70:c.instructions+=18;goto B6f2a70;
case 0x6f2a74:c.instructions+=17;goto B6f2a74;
case 0x6f2a78:c.instructions+=16;goto B6f2a78;
case 0x6f2a7c:c.instructions+=15;goto B6f2a7c;
case 0x6f2a80:c.instructions+=14;goto B6f2a80;
case 0x6f2a84:c.instructions+=13;goto B6f2a84;
case 0x6f2a88:c.instructions+=12;goto B6f2a88;
case 0x6f2a8c:c.instructions+=11;goto B6f2a8c;
case 0x6f2a90:c.instructions+=10;goto B6f2a90;
case 0x6f2a94:c.instructions+=9;goto B6f2a94;
case 0x6f2a98:c.instructions+=8;goto B6f2a98;
case 0x6f2a9c:c.instructions+=7;goto B6f2a9c;
case 0x6f2aa0:c.instructions+=6;goto B6f2aa0;
case 0x6f2aa4:c.instructions+=5;goto B6f2aa4;
case 0x6f2aa8:c.instructions+=4;goto B6f2aa8;
case 0x6f2aac:c.instructions+=3;goto B6f2aac;
case 0x6f2ab0:c.instructions+=2;goto B6f2ab0;
case 0x6f2ab4:c.instructions+=1;goto B6f2ab4;
case 0x6f2ab8:goto L6f2ab8;
case 0x6f2abc:c.instructions+=9;goto B6f2abc;
case 0x6f2abf:c.instructions+=8;goto B6f2abf;
case 0x6f2ac1:c.instructions+=7;goto B6f2ac1;
case 0x6f2ac4:c.instructions+=6;goto B6f2ac4;
case 0x6f2ac9:c.instructions+=5;goto B6f2ac9;
case 0x6f2acb:c.instructions+=4;goto B6f2acb;
case 0x6f2acd:c.instructions+=3;goto B6f2acd;
case 0x6f2ad0:c.instructions+=2;goto B6f2ad0;
case 0x6f2ad3:c.instructions+=1;goto B6f2ad3;
case 0x6f2ad9:goto L6f2ad9;
case 0x6f2add:c.instructions+=86;goto B6f2add;
case 0x6f2adf:c.instructions+=85;goto B6f2adf;
case 0x6f2ae5:c.instructions+=84;goto B6f2ae5;
case 0x6f2ae7:c.instructions+=83;goto B6f2ae7;
case 0x6f2aed:c.instructions+=82;goto B6f2aed;
case 0x6f2aef:c.instructions+=81;goto B6f2aef;
case 0x6f2af2:c.instructions+=80;goto B6f2af2;
case 0x6f2af6:c.instructions+=79;goto B6f2af6;
case 0x6f2afa:c.instructions+=78;goto B6f2afa;
case 0x6f2afc:c.instructions+=77;goto B6f2afc;
case 0x6f2b02:c.instructions+=76;goto B6f2b02;
case 0x6f2b04:c.instructions+=75;goto B6f2b04;
case 0x6f2b0a:c.instructions+=74;goto B6f2b0a;
case 0x6f2b0c:c.instructions+=73;goto B6f2b0c;
case 0x6f2b10:c.instructions+=72;goto B6f2b10;
case 0x6f2b13:c.instructions+=71;goto B6f2b13;
case 0x6f2b17:c.instructions+=70;goto B6f2b17;
case 0x6f2b19:c.instructions+=69;goto B6f2b19;
case 0x6f2b1f:c.instructions+=68;goto B6f2b1f;
case 0x6f2b21:c.instructions+=67;goto B6f2b21;
case 0x6f2b27:c.instructions+=66;goto B6f2b27;
case 0x6f2b29:c.instructions+=65;goto B6f2b29;
case 0x6f2b2d:c.instructions+=64;goto B6f2b2d;
case 0x6f2b31:c.instructions+=63;goto B6f2b31;
case 0x6f2b34:c.instructions+=62;goto B6f2b34;
case 0x6f2b38:c.instructions+=61;goto B6f2b38;
case 0x6f2b3a:c.instructions+=60;goto B6f2b3a;
case 0x6f2b40:c.instructions+=59;goto B6f2b40;
case 0x6f2b42:c.instructions+=58;goto B6f2b42;
case 0x6f2b48:c.instructions+=57;goto B6f2b48;
case 0x6f2b4a:c.instructions+=56;goto B6f2b4a;
case 0x6f2b4e:c.instructions+=55;goto B6f2b4e;
case 0x6f2b51:c.instructions+=54;goto B6f2b51;
case 0x6f2b55:c.instructions+=53;goto B6f2b55;
case 0x6f2b57:c.instructions+=52;goto B6f2b57;
case 0x6f2b5d:c.instructions+=51;goto B6f2b5d;
case 0x6f2b5f:c.instructions+=50;goto B6f2b5f;
case 0x6f2b65:c.instructions+=49;goto B6f2b65;
case 0x6f2b67:c.instructions+=48;goto B6f2b67;
case 0x6f2b6b:c.instructions+=47;goto B6f2b6b;
case 0x6f2b6e:c.instructions+=46;goto B6f2b6e;
case 0x6f2b72:c.instructions+=45;goto B6f2b72;
case 0x6f2b74:c.instructions+=44;goto B6f2b74;
case 0x6f2b7a:c.instructions+=43;goto B6f2b7a;
case 0x6f2b7e:c.instructions+=42;goto B6f2b7e;
case 0x6f2b80:c.instructions+=41;goto B6f2b80;
case 0x6f2b84:c.instructions+=40;goto B6f2b84;
case 0x6f2b8a:c.instructions+=39;goto B6f2b8a;
case 0x6f2b8c:c.instructions+=38;goto B6f2b8c;
case 0x6f2b90:c.instructions+=37;goto B6f2b90;
case 0x6f2b93:c.instructions+=36;goto B6f2b93;
case 0x6f2b97:c.instructions+=35;goto B6f2b97;
case 0x6f2b99:c.instructions+=34;goto B6f2b99;
case 0x6f2b9f:c.instructions+=33;goto B6f2b9f;
case 0x6f2ba1:c.instructions+=32;goto B6f2ba1;
case 0x6f2ba7:c.instructions+=31;goto B6f2ba7;
case 0x6f2ba9:c.instructions+=30;goto B6f2ba9;
case 0x6f2bac:c.instructions+=29;goto B6f2bac;
case 0x6f2baf:c.instructions+=28;goto B6f2baf;
case 0x6f2bb3:c.instructions+=27;goto B6f2bb3;
case 0x6f2bb5:c.instructions+=26;goto B6f2bb5;
case 0x6f2bbb:c.instructions+=25;goto B6f2bbb;
case 0x6f2bbd:c.instructions+=24;goto B6f2bbd;
case 0x6f2bc3:c.instructions+=23;goto B6f2bc3;
case 0x6f2bc5:c.instructions+=22;goto B6f2bc5;
case 0x6f2bc9:c.instructions+=21;goto B6f2bc9;
case 0x6f2bcc:c.instructions+=20;goto B6f2bcc;
case 0x6f2bcf:c.instructions+=19;goto B6f2bcf;
case 0x6f2bd2:c.instructions+=18;goto B6f2bd2;
case 0x6f2bd6:c.instructions+=17;goto B6f2bd6;
case 0x6f2bda:c.instructions+=16;goto B6f2bda;
case 0x6f2bde:c.instructions+=15;goto B6f2bde;
case 0x6f2be2:c.instructions+=14;goto B6f2be2;
case 0x6f2be6:c.instructions+=13;goto B6f2be6;
case 0x6f2bea:c.instructions+=12;goto B6f2bea;
case 0x6f2bee:c.instructions+=11;goto B6f2bee;
case 0x6f2bf2:c.instructions+=10;goto B6f2bf2;
case 0x6f2bf6:c.instructions+=9;goto B6f2bf6;
case 0x6f2bfa:c.instructions+=8;goto B6f2bfa;
case 0x6f2bfe:c.instructions+=7;goto B6f2bfe;
case 0x6f2c02:c.instructions+=6;goto B6f2c02;
case 0x6f2c06:c.instructions+=5;goto B6f2c06;
case 0x6f2c0a:c.instructions+=4;goto B6f2c0a;
case 0x6f2c0e:c.instructions+=3;goto B6f2c0e;
case 0x6f2c12:c.instructions+=2;goto B6f2c12;
case 0x6f2c16:c.instructions+=1;goto B6f2c16;
case 0x6f2c1a:goto L6f2c1a;
case 0x6f2c1e:c.instructions+=9;goto B6f2c1e;
case 0x6f2c22:c.instructions+=8;goto B6f2c22;
case 0x6f2c24:c.instructions+=7;goto B6f2c24;
case 0x6f2c27:c.instructions+=6;goto B6f2c27;
case 0x6f2c2c:c.instructions+=5;goto B6f2c2c;
case 0x6f2c2e:c.instructions+=4;goto B6f2c2e;
case 0x6f2c30:c.instructions+=3;goto B6f2c30;
case 0x6f2c33:c.instructions+=2;goto B6f2c33;
case 0x6f2c36:c.instructions+=1;goto B6f2c36;
case 0x6f2c3c:goto L6f2c3c;
case 0x6f2c40:c.instructions+=85;goto B6f2c40;
case 0x6f2c42:c.instructions+=84;goto B6f2c42;
case 0x6f2c48:c.instructions+=83;goto B6f2c48;
case 0x6f2c4a:c.instructions+=82;goto B6f2c4a;
case 0x6f2c50:c.instructions+=81;goto B6f2c50;
case 0x6f2c52:c.instructions+=80;goto B6f2c52;
case 0x6f2c55:c.instructions+=79;goto B6f2c55;
case 0x6f2c59:c.instructions+=78;goto B6f2c59;
case 0x6f2c5d:c.instructions+=77;goto B6f2c5d;
case 0x6f2c5f:c.instructions+=76;goto B6f2c5f;
case 0x6f2c65:c.instructions+=75;goto B6f2c65;
case 0x6f2c67:c.instructions+=74;goto B6f2c67;
case 0x6f2c6d:c.instructions+=73;goto B6f2c6d;
case 0x6f2c6f:c.instructions+=72;goto B6f2c6f;
case 0x6f2c73:c.instructions+=71;goto B6f2c73;
case 0x6f2c76:c.instructions+=70;goto B6f2c76;
case 0x6f2c7a:c.instructions+=69;goto B6f2c7a;
case 0x6f2c7c:c.instructions+=68;goto B6f2c7c;
case 0x6f2c82:c.instructions+=67;goto B6f2c82;
case 0x6f2c84:c.instructions+=66;goto B6f2c84;
case 0x6f2c8a:c.instructions+=65;goto B6f2c8a;
case 0x6f2c8c:c.instructions+=64;goto B6f2c8c;
case 0x6f2c90:c.instructions+=63;goto B6f2c90;
case 0x6f2c93:c.instructions+=62;goto B6f2c93;
case 0x6f2c97:c.instructions+=61;goto B6f2c97;
case 0x6f2c99:c.instructions+=60;goto B6f2c99;
case 0x6f2c9f:c.instructions+=59;goto B6f2c9f;
case 0x6f2ca1:c.instructions+=58;goto B6f2ca1;
case 0x6f2ca7:c.instructions+=57;goto B6f2ca7;
case 0x6f2ca9:c.instructions+=56;goto B6f2ca9;
case 0x6f2cad:c.instructions+=55;goto B6f2cad;
case 0x6f2cb0:c.instructions+=54;goto B6f2cb0;
case 0x6f2cb4:c.instructions+=53;goto B6f2cb4;
case 0x6f2cb6:c.instructions+=52;goto B6f2cb6;
case 0x6f2cbc:c.instructions+=51;goto B6f2cbc;
case 0x6f2cbe:c.instructions+=50;goto B6f2cbe;
case 0x6f2cc4:c.instructions+=49;goto B6f2cc4;
case 0x6f2cc6:c.instructions+=48;goto B6f2cc6;
case 0x6f2cca:c.instructions+=47;goto B6f2cca;
case 0x6f2ccd:c.instructions+=46;goto B6f2ccd;
case 0x6f2cd1:c.instructions+=45;goto B6f2cd1;
case 0x6f2cd3:c.instructions+=44;goto B6f2cd3;
case 0x6f2cd9:c.instructions+=43;goto B6f2cd9;
case 0x6f2cdd:c.instructions+=42;goto B6f2cdd;
case 0x6f2cdf:c.instructions+=41;goto B6f2cdf;
case 0x6f2ce3:c.instructions+=40;goto B6f2ce3;
case 0x6f2ce9:c.instructions+=39;goto B6f2ce9;
case 0x6f2ceb:c.instructions+=38;goto B6f2ceb;
case 0x6f2cef:c.instructions+=37;goto B6f2cef;
case 0x6f2cf2:c.instructions+=36;goto B6f2cf2;
case 0x6f2cf6:c.instructions+=35;goto B6f2cf6;
case 0x6f2cf8:c.instructions+=34;goto B6f2cf8;
case 0x6f2cfe:c.instructions+=33;goto B6f2cfe;
case 0x6f2d00:c.instructions+=32;goto B6f2d00;
case 0x6f2d06:c.instructions+=31;goto B6f2d06;
case 0x6f2d08:c.instructions+=30;goto B6f2d08;
case 0x6f2d0c:c.instructions+=29;goto B6f2d0c;
case 0x6f2d0f:c.instructions+=28;goto B6f2d0f;
case 0x6f2d13:c.instructions+=27;goto B6f2d13;
case 0x6f2d15:c.instructions+=26;goto B6f2d15;
case 0x6f2d1b:c.instructions+=25;goto B6f2d1b;
case 0x6f2d1d:c.instructions+=24;goto B6f2d1d;
case 0x6f2d23:c.instructions+=23;goto B6f2d23;
case 0x6f2d25:c.instructions+=22;goto B6f2d25;
case 0x6f2d29:c.instructions+=21;goto B6f2d29;
case 0x6f2d2c:c.instructions+=20;goto B6f2d2c;
case 0x6f2d2f:c.instructions+=19;goto B6f2d2f;
case 0x6f2d32:c.instructions+=18;goto B6f2d32;
case 0x6f2d36:c.instructions+=17;goto B6f2d36;
case 0x6f2d3a:c.instructions+=16;goto B6f2d3a;
case 0x6f2d3e:c.instructions+=15;goto B6f2d3e;
case 0x6f2d42:c.instructions+=14;goto B6f2d42;
case 0x6f2d46:c.instructions+=13;goto B6f2d46;
case 0x6f2d4a:c.instructions+=12;goto B6f2d4a;
case 0x6f2d4e:c.instructions+=11;goto B6f2d4e;
case 0x6f2d52:c.instructions+=10;goto B6f2d52;
case 0x6f2d56:c.instructions+=9;goto B6f2d56;
case 0x6f2d5a:c.instructions+=8;goto B6f2d5a;
case 0x6f2d5e:c.instructions+=7;goto B6f2d5e;
case 0x6f2d62:c.instructions+=6;goto B6f2d62;
case 0x6f2d66:c.instructions+=5;goto B6f2d66;
case 0x6f2d6a:c.instructions+=4;goto B6f2d6a;
case 0x6f2d6e:c.instructions+=3;goto B6f2d6e;
case 0x6f2d72:c.instructions+=2;goto B6f2d72;
case 0x6f2d76:c.instructions+=1;goto B6f2d76;
case 0x6f2d7a:goto L6f2d7a;
case 0x6f2d7e:c.instructions+=9;goto B6f2d7e;
case 0x6f2d82:c.instructions+=8;goto B6f2d82;
case 0x6f2d84:c.instructions+=7;goto B6f2d84;
case 0x6f2d87:c.instructions+=6;goto B6f2d87;
case 0x6f2d8c:c.instructions+=5;goto B6f2d8c;
case 0x6f2d8e:c.instructions+=4;goto B6f2d8e;
case 0x6f2d90:c.instructions+=3;goto B6f2d90;
case 0x6f2d93:c.instructions+=2;goto B6f2d93;
case 0x6f2d96:c.instructions+=1;goto B6f2d96;
case 0x6f2d9c:goto L6f2d9c;
case 0x6f2da0:c.instructions+=85;goto B6f2da0;
case 0x6f2da2:c.instructions+=84;goto B6f2da2;
case 0x6f2da8:c.instructions+=83;goto B6f2da8;
case 0x6f2daa:c.instructions+=82;goto B6f2daa;
case 0x6f2db0:c.instructions+=81;goto B6f2db0;
case 0x6f2db2:c.instructions+=80;goto B6f2db2;
case 0x6f2db5:c.instructions+=79;goto B6f2db5;
case 0x6f2db9:c.instructions+=78;goto B6f2db9;
case 0x6f2dbd:c.instructions+=77;goto B6f2dbd;
case 0x6f2dbf:c.instructions+=76;goto B6f2dbf;
case 0x6f2dc5:c.instructions+=75;goto B6f2dc5;
case 0x6f2dc7:c.instructions+=74;goto B6f2dc7;
case 0x6f2dcd:c.instructions+=73;goto B6f2dcd;
case 0x6f2dcf:c.instructions+=72;goto B6f2dcf;
case 0x6f2dd3:c.instructions+=71;goto B6f2dd3;
case 0x6f2dd6:c.instructions+=70;goto B6f2dd6;
case 0x6f2dda:c.instructions+=69;goto B6f2dda;
case 0x6f2ddc:c.instructions+=68;goto B6f2ddc;
case 0x6f2de2:c.instructions+=67;goto B6f2de2;
case 0x6f2de4:c.instructions+=66;goto B6f2de4;
case 0x6f2dea:c.instructions+=65;goto B6f2dea;
case 0x6f2dec:c.instructions+=64;goto B6f2dec;
case 0x6f2def:c.instructions+=63;goto B6f2def;
case 0x6f2df2:c.instructions+=62;goto B6f2df2;
case 0x6f2df6:c.instructions+=61;goto B6f2df6;
case 0x6f2df8:c.instructions+=60;goto B6f2df8;
case 0x6f2dfe:c.instructions+=59;goto B6f2dfe;
case 0x6f2e00:c.instructions+=58;goto B6f2e00;
case 0x6f2e06:c.instructions+=57;goto B6f2e06;
case 0x6f2e08:c.instructions+=56;goto B6f2e08;
case 0x6f2e0c:c.instructions+=55;goto B6f2e0c;
case 0x6f2e0f:c.instructions+=54;goto B6f2e0f;
case 0x6f2e13:c.instructions+=53;goto B6f2e13;
case 0x6f2e15:c.instructions+=52;goto B6f2e15;
case 0x6f2e1b:c.instructions+=51;goto B6f2e1b;
case 0x6f2e1d:c.instructions+=50;goto B6f2e1d;
case 0x6f2e23:c.instructions+=49;goto B6f2e23;
case 0x6f2e25:c.instructions+=48;goto B6f2e25;
case 0x6f2e29:c.instructions+=47;goto B6f2e29;
case 0x6f2e2c:c.instructions+=46;goto B6f2e2c;
case 0x6f2e30:c.instructions+=45;goto B6f2e30;
case 0x6f2e32:c.instructions+=44;goto B6f2e32;
case 0x6f2e38:c.instructions+=43;goto B6f2e38;
case 0x6f2e3c:c.instructions+=42;goto B6f2e3c;
case 0x6f2e3e:c.instructions+=41;goto B6f2e3e;
case 0x6f2e42:c.instructions+=40;goto B6f2e42;
case 0x6f2e48:c.instructions+=39;goto B6f2e48;
case 0x6f2e4a:c.instructions+=38;goto B6f2e4a;
case 0x6f2e4e:c.instructions+=37;goto B6f2e4e;
case 0x6f2e51:c.instructions+=36;goto B6f2e51;
case 0x6f2e55:c.instructions+=35;goto B6f2e55;
case 0x6f2e57:c.instructions+=34;goto B6f2e57;
case 0x6f2e5d:c.instructions+=33;goto B6f2e5d;
case 0x6f2e5f:c.instructions+=32;goto B6f2e5f;
case 0x6f2e65:c.instructions+=31;goto B6f2e65;
case 0x6f2e67:c.instructions+=30;goto B6f2e67;
case 0x6f2e6b:c.instructions+=29;goto B6f2e6b;
case 0x6f2e6e:c.instructions+=28;goto B6f2e6e;
case 0x6f2e72:c.instructions+=27;goto B6f2e72;
case 0x6f2e74:c.instructions+=26;goto B6f2e74;
case 0x6f2e7a:c.instructions+=25;goto B6f2e7a;
case 0x6f2e7c:c.instructions+=24;goto B6f2e7c;
case 0x6f2e82:c.instructions+=23;goto B6f2e82;
case 0x6f2e84:c.instructions+=22;goto B6f2e84;
case 0x6f2e88:c.instructions+=21;goto B6f2e88;
case 0x6f2e8b:c.instructions+=20;goto B6f2e8b;
case 0x6f2e8e:c.instructions+=19;goto B6f2e8e;
case 0x6f2e91:c.instructions+=18;goto B6f2e91;
case 0x6f2e95:c.instructions+=17;goto B6f2e95;
case 0x6f2e99:c.instructions+=16;goto B6f2e99;
case 0x6f2e9d:c.instructions+=15;goto B6f2e9d;
case 0x6f2ea1:c.instructions+=14;goto B6f2ea1;
case 0x6f2ea5:c.instructions+=13;goto B6f2ea5;
case 0x6f2ea9:c.instructions+=12;goto B6f2ea9;
case 0x6f2ead:c.instructions+=11;goto B6f2ead;
case 0x6f2eb1:c.instructions+=10;goto B6f2eb1;
case 0x6f2eb5:c.instructions+=9;goto B6f2eb5;
case 0x6f2eb9:c.instructions+=8;goto B6f2eb9;
case 0x6f2ebd:c.instructions+=7;goto B6f2ebd;
case 0x6f2ec1:c.instructions+=6;goto B6f2ec1;
case 0x6f2ec5:c.instructions+=5;goto B6f2ec5;
case 0x6f2ec9:c.instructions+=4;goto B6f2ec9;
case 0x6f2ecd:c.instructions+=3;goto B6f2ecd;
case 0x6f2ed1:c.instructions+=2;goto B6f2ed1;
case 0x6f2ed5:c.instructions+=1;goto B6f2ed5;
case 0x6f2ed9:goto L6f2ed9;
case 0x6f2edd:c.instructions+=12;goto B6f2edd;
case 0x6f2ee1:c.instructions+=11;goto B6f2ee1;
case 0x6f2ee5:c.instructions+=10;goto B6f2ee5;
case 0x6f2ee8:c.instructions+=9;goto B6f2ee8;
case 0x6f2eeb:c.instructions+=8;goto B6f2eeb;
case 0x6f2eef:c.instructions+=7;goto B6f2eef;
case 0x6f2ef2:c.instructions+=6;goto B6f2ef2;
case 0x6f2ef5:c.instructions+=5;goto B6f2ef5;
case 0x6f2ef8:c.instructions+=4;goto B6f2ef8;
case 0x6f2efa:c.instructions+=3;goto B6f2efa;
case 0x6f2efe:c.instructions+=2;goto B6f2efe;
case 0x6f2f02:c.instructions+=1;goto B6f2f02;
case 0x6f2f08:goto L6f2f08;
case 0x6f2f0c:c.instructions+=3;goto B6f2f0c;
case 0x6f2f10:c.instructions+=2;goto B6f2f10;
case 0x6f2f14:c.instructions+=1;goto B6f2f14;
case 0x6f2f18:goto L6f2f18;
case 0x6f2f1a:c.instructions+=1;goto B6f2f1a;
case 0x6f2f20:goto L6f2f20;
case 0x6f2f24:c.instructions+=5;goto B6f2f24;
case 0x6f2f28:c.instructions+=4;goto B6f2f28;
case 0x6f2f2c:c.instructions+=3;goto B6f2f2c;
case 0x6f2f30:c.instructions+=2;goto B6f2f30;
case 0x6f2f34:c.instructions+=1;goto B6f2f34;
case 0x6f2f36:goto L6f2f36;
case 0x6f2f3a:c.instructions+=1;goto B6f2f3a;
case 0x6f2f40:goto L6f2f40;
case 0x6f2f44:c.instructions+=9;goto B6f2f44;
case 0x6f2f48:c.instructions+=8;goto B6f2f48;
case 0x6f2f4a:c.instructions+=7;goto B6f2f4a;
case 0x6f2f4d:c.instructions+=6;goto B6f2f4d;
case 0x6f2f52:c.instructions+=5;goto B6f2f52;
case 0x6f2f54:c.instructions+=4;goto B6f2f54;
case 0x6f2f56:c.instructions+=3;goto B6f2f56;
case 0x6f2f59:c.instructions+=2;goto B6f2f59;
case 0x6f2f5d:c.instructions+=1;goto B6f2f5d;
case 0x6f2f63:goto L6f2f63;
case 0x6f2f67:c.instructions+=43;goto B6f2f67;
case 0x6f2f69:c.instructions+=42;goto B6f2f69;
case 0x6f2f6f:c.instructions+=41;goto B6f2f6f;
case 0x6f2f71:c.instructions+=40;goto B6f2f71;
case 0x6f2f77:c.instructions+=39;goto B6f2f77;
case 0x6f2f79:c.instructions+=38;goto B6f2f79;
case 0x6f2f7c:c.instructions+=37;goto B6f2f7c;
case 0x6f2f7f:c.instructions+=36;goto B6f2f7f;
case 0x6f2f83:c.instructions+=35;goto B6f2f83;
case 0x6f2f85:c.instructions+=34;goto B6f2f85;
case 0x6f2f8b:c.instructions+=33;goto B6f2f8b;
case 0x6f2f8d:c.instructions+=32;goto B6f2f8d;
case 0x6f2f93:c.instructions+=31;goto B6f2f93;
case 0x6f2f95:c.instructions+=30;goto B6f2f95;
case 0x6f2f99:c.instructions+=29;goto B6f2f99;
case 0x6f2f9c:c.instructions+=28;goto B6f2f9c;
case 0x6f2fa0:c.instructions+=27;goto B6f2fa0;
case 0x6f2fa2:c.instructions+=26;goto B6f2fa2;
case 0x6f2fa8:c.instructions+=25;goto B6f2fa8;
case 0x6f2faa:c.instructions+=24;goto B6f2faa;
case 0x6f2fb0:c.instructions+=23;goto B6f2fb0;
case 0x6f2fb2:c.instructions+=22;goto B6f2fb2;
case 0x6f2fb6:c.instructions+=21;goto B6f2fb6;
case 0x6f2fba:c.instructions+=20;goto B6f2fba;
case 0x6f2fbd:c.instructions+=19;goto B6f2fbd;
case 0x6f2fc1:c.instructions+=18;goto B6f2fc1;
case 0x6f2fc3:c.instructions+=17;goto B6f2fc3;
case 0x6f2fc9:c.instructions+=16;goto B6f2fc9;
case 0x6f2fcb:c.instructions+=15;goto B6f2fcb;
case 0x6f2fd1:c.instructions+=14;goto B6f2fd1;
case 0x6f2fd3:c.instructions+=13;goto B6f2fd3;
case 0x6f2fd7:c.instructions+=12;goto B6f2fd7;
case 0x6f2fda:c.instructions+=11;goto B6f2fda;
case 0x6f2fde:c.instructions+=10;goto B6f2fde;
case 0x6f2fe0:c.instructions+=9;goto B6f2fe0;
case 0x6f2fe6:c.instructions+=8;goto B6f2fe6;
case 0x6f2fe8:c.instructions+=7;goto B6f2fe8;
case 0x6f2fee:c.instructions+=6;goto B6f2fee;
case 0x6f2ff0:c.instructions+=5;goto B6f2ff0;
case 0x6f2ff4:c.instructions+=4;goto B6f2ff4;
case 0x6f2ff7:c.instructions+=3;goto B6f2ff7;
case 0x6f2ffb:c.instructions+=2;goto B6f2ffb;
case 0x6f2ffd:c.instructions+=1;goto B6f2ffd;
default:missing_instruction(c.pc);}
B6f2000:L6f2000:{c.instructions+=1;NFSU2_TR(0x6f2000);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f2016;}}
}
B6f2002:L6f2002:{c.instructions+=5;NFSU2_TR(0x6f2002);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f2008:{NFSU2_TR(0x6f2008);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f200c:{NFSU2_TR(0x6f200c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2010:{NFSU2_TR(0x6f2010);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6f2014:{NFSU2_TR(0x6f2014);
{goto L6f2028;}
}
B6f2016:L6f2016:{c.instructions+=4;NFSU2_TR(0x6f2016);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f201c:{NFSU2_TR(0x6f201c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2020:{NFSU2_TR(0x6f2020);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2024:{NFSU2_TR(0x6f2024);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6f2028:L6f2028:{c.instructions+=6;NFSU2_TR(0x6f2028);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f202b:{NFSU2_TR(0x6f202b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f202d:{NFSU2_TR(0x6f202d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f2031:{NFSU2_TR(0x6f2031);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2035:{NFSU2_TR(0x6f2035);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f203d:{NFSU2_TR(0x6f203d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f2085;}}
}
B6f203f:L6f203f:{c.instructions+=2;NFSU2_TR(0x6f203f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6f2041:{NFSU2_TR(0x6f2041);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f2047;}}
}
B6f2043:L6f2043:{c.instructions+=2;NFSU2_TR(0x6f2043);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6f2045:{NFSU2_TR(0x6f2045);
{goto L6f2052;}
}
B6f2047:L6f2047:{c.instructions+=3;NFSU2_TR(0x6f2047);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6f204b:{NFSU2_TR(0x6f204b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f204d:{NFSU2_TR(0x6f204d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f2052;}}
}
B6f204f:L6f204f:{c.instructions+=1;NFSU2_TR(0x6f204f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f2052:L6f2052:{c.instructions+=6;NFSU2_TR(0x6f2052);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2056:{NFSU2_TR(0x6f2056);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f205a:{NFSU2_TR(0x6f205a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6f205c:{NFSU2_TR(0x6f205c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6f205e:{NFSU2_TR(0x6f205e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f2061:{NFSU2_TR(0x6f2061);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6f2074;}}
}
B6f2063:L6f2063:{c.instructions+=5;NFSU2_TR(0x6f2063);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2067:{NFSU2_TR(0x6f2067);
w1(R+8,u8(0x1ull));
}
B6f2069:{NFSU2_TR(0x6f2069);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f206d:{NFSU2_TR(0x6f206d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f206f:{NFSU2_TR(0x6f206f);
{goto L6f2155;}
}
B6f2074:L6f2074:{c.instructions+=5;NFSU2_TR(0x6f2074);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2078:{NFSU2_TR(0x6f2078);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B6f207a:{NFSU2_TR(0x6f207a);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f207e:{NFSU2_TR(0x6f207e);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f2080:{NFSU2_TR(0x6f2080);
{goto L6f2155;}
}
B6f2085:L6f2085:{c.instructions+=4;NFSU2_TR(0x6f2085);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+0,u32(r2(U+0)));
}
B6f2088:{NFSU2_TR(0x6f2088);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f208a:{NFSU2_TR(0x6f208a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f208e:{NFSU2_TR(0x6f208e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f2094;}}
}
B6f2090:L6f2090:{c.instructions+=2;NFSU2_TR(0x6f2090);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6f2092:{NFSU2_TR(0x6f2092);
{goto L6f20ee;}
}
B6f2094:L6f2094:{c.instructions+=4;NFSU2_TR(0x6f2094);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f2098:{NFSU2_TR(0x6f2098);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6f209c:{NFSU2_TR(0x6f209c);
w1(R+512,u8((r2(R+0))<(u16(0x1ull))));
}
B6f20a0:{NFSU2_TR(0x6f20a0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6f20a6;}}
}
B6f20a2:L6f20a2:{c.instructions+=2;NFSU2_TR(0x6f20a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f20a4:{NFSU2_TR(0x6f20a4);
{goto L6f20aa;}
}
B6f20a6:L6f20a6:{c.instructions+=2;NFSU2_TR(0x6f20a6);
w4(R+0,u32(r2(R+0)));
}
B6f20a9:{NFSU2_TR(0x6f20a9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6f20aa:L6f20aa:{c.instructions+=4;NFSU2_TR(0x6f20aa);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(r2(U+8)));
}
B6f20ae:{NFSU2_TR(0x6f20ae);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f20b0:{NFSU2_TR(0x6f20b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6f20b3:{NFSU2_TR(0x6f20b3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6f20d4;}}
}
B6f20b5:L6f20b5:{c.instructions+=4;NFSU2_TR(0x6f20b5);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6f20b9:{NFSU2_TR(0x6f20b9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
}
B6f20bc:{NFSU2_TR(0x6f20bc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f20be:{NFSU2_TR(0x6f20be);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f20e7;}}
}
B6f20c0:L6f20c0:{c.instructions+=1;NFSU2_TR(0x6f20c0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6f20c3:L6f20c3:{c.instructions+=3;NFSU2_TR(0x6f20c3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+20,u32(r2(U+0)));
}
B6f20c6:{NFSU2_TR(0x6f20c6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f20c8:{NFSU2_TR(0x6f20c8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6f20e7;}}
}
B6f20ca:L6f20ca:{c.instructions+=4;NFSU2_TR(0x6f20ca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f20cb:{NFSU2_TR(0x6f20cb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6f20ce:{NFSU2_TR(0x6f20ce);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f20d0:{NFSU2_TR(0x6f20d0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f20c3u);}goto L6f20c3;}}
}
B6f20d2:L6f20d2:{c.instructions+=1;NFSU2_TR(0x6f20d2);
{goto L6f20e7;}
}
B6f20d4:L6f20d4:{c.instructions+=2;NFSU2_TR(0x6f20d4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f20d6:{NFSU2_TR(0x6f20d6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f20e7;}}
}
B6f20d8:L6f20d8:{c.instructions+=3;NFSU2_TR(0x6f20d8);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+28,u32(r2(U+0)));
}
B6f20db:{NFSU2_TR(0x6f20db);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f20dd:{NFSU2_TR(0x6f20dd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f20e7;}}
}
B6f20df:L6f20df:{c.instructions+=4;NFSU2_TR(0x6f20df);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6f20e0:{NFSU2_TR(0x6f20e0);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
}
B6f20e3:{NFSU2_TR(0x6f20e3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f20e5:{NFSU2_TR(0x6f20e5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f20d8u);}goto L6f20d8;}}
}
B6f20e7:L6f20e7:{c.instructions+=3;NFSU2_TR(0x6f20e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f20ea:{NFSU2_TR(0x6f20ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f20ec:{NFSU2_TR(0x6f20ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f211b;}}
}
B6f20ee:L6f20ee:{c.instructions+=5;NFSU2_TR(0x6f20ee);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f20f2:{NFSU2_TR(0x6f20f2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6f20f8:{NFSU2_TR(0x6f20f8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6f20fa:{NFSU2_TR(0x6f20fa);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f20fd:{NFSU2_TR(0x6f20fd);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6f2113;}}
}
B6f20ff:L6f20ff:{c.instructions+=6;NFSU2_TR(0x6f20ff);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2103:{NFSU2_TR(0x6f2103);
w1(R+8,u8(0x1ull));
}
B6f2105:{NFSU2_TR(0x6f2105);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f2109:{NFSU2_TR(0x6f2109);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6f210d:{NFSU2_TR(0x6f210d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2111:{NFSU2_TR(0x6f2111);
{goto L6f215b;}
}
B6f2113:L6f2113:{c.instructions+=3;NFSU2_TR(0x6f2113);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B6f2115:{NFSU2_TR(0x6f2115);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f2119:{NFSU2_TR(0x6f2119);
{goto L6f215b;}
}
B6f211b:L6f211b:{c.instructions+=8;NFSU2_TR(0x6f211b);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6f2120:{NFSU2_TR(0x6f2120);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2124:{NFSU2_TR(0x6f2124);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2128:{NFSU2_TR(0x6f2128);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f212c:{NFSU2_TR(0x6f212c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6f212e:{NFSU2_TR(0x6f212e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6f2130:{NFSU2_TR(0x6f2130);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f2133:{NFSU2_TR(0x6f2133);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6f2585;}}
}
B6f2139:L6f2139:{c.instructions+=9;NFSU2_TR(0x6f2139);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B6f213d:{NFSU2_TR(0x6f213d);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2141:{NFSU2_TR(0x6f2141);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f2143:{NFSU2_TR(0x6f2143);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2147:{NFSU2_TR(0x6f2147);
w1(R+8,u8(0x1ull));
}
B6f2149:{NFSU2_TR(0x6f2149);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f214d:{NFSU2_TR(0x6f214d);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f2151:{NFSU2_TR(0x6f2151);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6f2153:{NFSU2_TR(0x6f2153);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B6f2155:L6f2155:{c.instructions+=1;NFSU2_TR(0x6f2155);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2159:L6f2159:{c.instructions+=1;NFSU2_TR(0x6f2159);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f215b:L6f215b:{c.instructions+=4;NFSU2_TR(0x6f215b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6f215f:{NFSU2_TR(0x6f215f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6f2160:{NFSU2_TR(0x6f2160);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f2162:{NFSU2_TR(0x6f2162);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f216a;}}
}
B6f2164:L6f2164:{c.instructions+=2;NFSU2_TR(0x6f2164);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B6f2166:{NFSU2_TR(0x6f2166);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f216a:L6f216a:{c.instructions+=5;NFSU2_TR(0x6f216a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f216e:{NFSU2_TR(0x6f216e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6f2172:{NFSU2_TR(0x6f2172);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f2176:{NFSU2_TR(0x6f2176);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f2178:{NFSU2_TR(0x6f2178);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f27cc;}}
}
B6f217e:L6f217e:{c.instructions+=13;NFSU2_TR(0x6f217e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6f2182:{NFSU2_TR(0x6f2182);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f2185:{NFSU2_TR(0x6f2185);
__builtin_memmove((R+0),(R+28),4);
}
B6f2187:{NFSU2_TR(0x6f2187);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6f218a:{NFSU2_TR(0x6f218a);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B6f218e:{NFSU2_TR(0x6f218e);
__builtin_memmove((R+0),(R+28),4);
}
B6f2190:{NFSU2_TR(0x6f2190);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6f2193:{NFSU2_TR(0x6f2193);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f2195:{NFSU2_TR(0x6f2195);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f2198:{NFSU2_TR(0x6f2198);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f219c:{NFSU2_TR(0x6f219c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f21a0:{NFSU2_TR(0x6f21a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f21a3:{NFSU2_TR(0x6f21a3);
if(r1(R+518)){{goto L6f2590;}}
}
B6f21a9:L6f21a9:{c.instructions+=8;NFSU2_TR(0x6f21a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f21ac:{NFSU2_TR(0x6f21ac);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6f21af:{NFSU2_TR(0x6f21af);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6f21b2:{NFSU2_TR(0x6f21b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6f21b5:{NFSU2_TR(0x6f21b5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f21b7:{NFSU2_TR(0x6f21b7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f21ba:{NFSU2_TR(0x6f21ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f21be:{NFSU2_TR(0x6f21be);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f24a6;}}
}
B6f21c4:L6f21c4:{c.instructions+=3;NFSU2_TR(0x6f21c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f21cc:{NFSU2_TR(0x6f21cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f21cf:{NFSU2_TR(0x6f21cf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B6f21d2:L6f21d2:{c.instructions+=200;NFSU2_TR(0x6f21d2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+12,u32(s32(s16(r2(U+0)))));
}
B6f21d5:{NFSU2_TR(0x6f21d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f21d9:{NFSU2_TR(0x6f21d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f21dd:{NFSU2_TR(0x6f21dd);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f21e1:{NFSU2_TR(0x6f21e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f21e5:{NFSU2_TR(0x6f21e5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f21e9:{NFSU2_TR(0x6f21e9);
{u32 ea_=u32(r4(R+4)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f21ec:{NFSU2_TR(0x6f21ec);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f21f0:{NFSU2_TR(0x6f21f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f21f4:{NFSU2_TR(0x6f21f4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+12,u32(s32(s16(r2(U+0)))));
}
B6f21f7:{NFSU2_TR(0x6f21f7);
{u32 ea_=u32(r4(R+4)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f21fa:{NFSU2_TR(0x6f21fa);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f21fe:{NFSU2_TR(0x6f21fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2202:{NFSU2_TR(0x6f2202);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f2206:{NFSU2_TR(0x6f2206);
{u32 ea_=u32(r4(R+4)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2209:{NFSU2_TR(0x6f2209);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f220d:{NFSU2_TR(0x6f220d);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2211:{NFSU2_TR(0x6f2211);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2215:{NFSU2_TR(0x6f2215);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2219:{NFSU2_TR(0x6f2219);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f221d:{NFSU2_TR(0x6f221d);
{u32 ea_=u32(r4(R+4)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2220:{NFSU2_TR(0x6f2220);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2224:{NFSU2_TR(0x6f2224);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2228:{NFSU2_TR(0x6f2228);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6f222c:{NFSU2_TR(0x6f222c);
{u32 ea_=u32(r4(R+4)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f222f:{NFSU2_TR(0x6f222f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2233:{NFSU2_TR(0x6f2233);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2237:{NFSU2_TR(0x6f2237);
{u32 ea_=u32(r4(R+4)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f223a:{NFSU2_TR(0x6f223a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f223e:{NFSU2_TR(0x6f223e);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6f2240:{NFSU2_TR(0x6f2240);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2244:{NFSU2_TR(0x6f2244);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6f2246:{NFSU2_TR(0x6f2246);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f224a:{NFSU2_TR(0x6f224a);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f224e:{NFSU2_TR(0x6f224e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2252:{NFSU2_TR(0x6f2252);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f2254:{NFSU2_TR(0x6f2254);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2258:{NFSU2_TR(0x6f2258);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6f225a:{NFSU2_TR(0x6f225a);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f225e:{NFSU2_TR(0x6f225e);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f2262:{NFSU2_TR(0x6f2262);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f2264:{NFSU2_TR(0x6f2264);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f2266:{NFSU2_TR(0x6f2266);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f226a:{NFSU2_TR(0x6f226a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f226e:{NFSU2_TR(0x6f226e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2272:{NFSU2_TR(0x6f2272);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f2276:{NFSU2_TR(0x6f2276);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f227a:{NFSU2_TR(0x6f227a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f227e:{NFSU2_TR(0x6f227e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2282:{NFSU2_TR(0x6f2282);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f2286:{NFSU2_TR(0x6f2286);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f228a:{NFSU2_TR(0x6f228a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f228e:{NFSU2_TR(0x6f228e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f2292:{NFSU2_TR(0x6f2292);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2295:{NFSU2_TR(0x6f2295);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2299:{NFSU2_TR(0x6f2299);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f229d:{NFSU2_TR(0x6f229d);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f22a1:{NFSU2_TR(0x6f22a1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f22a3:{NFSU2_TR(0x6f22a3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f22a7:{NFSU2_TR(0x6f22a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f22ab:{NFSU2_TR(0x6f22ab);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f22af:{NFSU2_TR(0x6f22af);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f22b2:{NFSU2_TR(0x6f22b2);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f22b6:{NFSU2_TR(0x6f22b6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f22ba:{NFSU2_TR(0x6f22ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f22be:{NFSU2_TR(0x6f22be);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f22c2:{NFSU2_TR(0x6f22c2);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f22c5:{NFSU2_TR(0x6f22c5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f22c9:{NFSU2_TR(0x6f22c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f22cd:{NFSU2_TR(0x6f22cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6f22d1:{NFSU2_TR(0x6f22d1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f22d3:{NFSU2_TR(0x6f22d3);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f22d7:{NFSU2_TR(0x6f22d7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f22db:{NFSU2_TR(0x6f22db);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f22de:{NFSU2_TR(0x6f22de);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f22e2:{NFSU2_TR(0x6f22e2);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6f22e4:{NFSU2_TR(0x6f22e4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f22e8:{NFSU2_TR(0x6f22e8);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6f22ea:{NFSU2_TR(0x6f22ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f22ee:{NFSU2_TR(0x6f22ee);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f22f2:{NFSU2_TR(0x6f22f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f22f6:{NFSU2_TR(0x6f22f6);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f22fa:{NFSU2_TR(0x6f22fa);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f22fc:{NFSU2_TR(0x6f22fc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2300:{NFSU2_TR(0x6f2300);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6f2302:{NFSU2_TR(0x6f2302);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2306:{NFSU2_TR(0x6f2306);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f230a:{NFSU2_TR(0x6f230a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f230c:{NFSU2_TR(0x6f230c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f230e:{NFSU2_TR(0x6f230e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2312:{NFSU2_TR(0x6f2312);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f2316:{NFSU2_TR(0x6f2316);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f231a:{NFSU2_TR(0x6f231a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f231e:{NFSU2_TR(0x6f231e);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2322:{NFSU2_TR(0x6f2322);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f2326:{NFSU2_TR(0x6f2326);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f232a:{NFSU2_TR(0x6f232a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f232e:{NFSU2_TR(0x6f232e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2332:{NFSU2_TR(0x6f2332);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2336:{NFSU2_TR(0x6f2336);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f233a:{NFSU2_TR(0x6f233a);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f233d:{NFSU2_TR(0x6f233d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2341:{NFSU2_TR(0x6f2341);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2345:{NFSU2_TR(0x6f2345);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f2349:{NFSU2_TR(0x6f2349);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f234c:{NFSU2_TR(0x6f234c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2350:{NFSU2_TR(0x6f2350);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2354:{NFSU2_TR(0x6f2354);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f2358:{NFSU2_TR(0x6f2358);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f235b:{NFSU2_TR(0x6f235b);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f235f:{NFSU2_TR(0x6f235f);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2363:{NFSU2_TR(0x6f2363);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2367:{NFSU2_TR(0x6f2367);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f236b:{NFSU2_TR(0x6f236b);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f236f:{NFSU2_TR(0x6f236f);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2372:{NFSU2_TR(0x6f2372);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2376:{NFSU2_TR(0x6f2376);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f237a:{NFSU2_TR(0x6f237a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+12,u32(r2(U+0)));
}
B6f237d:{NFSU2_TR(0x6f237d);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2380:{NFSU2_TR(0x6f2380);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2384:{NFSU2_TR(0x6f2384);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2388:{NFSU2_TR(0x6f2388);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f238b:{NFSU2_TR(0x6f238b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f238f:{NFSU2_TR(0x6f238f);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6f2391:{NFSU2_TR(0x6f2391);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2395:{NFSU2_TR(0x6f2395);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6f2397:{NFSU2_TR(0x6f2397);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f239b:{NFSU2_TR(0x6f239b);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f239f:{NFSU2_TR(0x6f239f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f23a3:{NFSU2_TR(0x6f23a3);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f23a5:{NFSU2_TR(0x6f23a5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f23a9:{NFSU2_TR(0x6f23a9);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6f23ab:{NFSU2_TR(0x6f23ab);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f23af:{NFSU2_TR(0x6f23af);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f23b3:{NFSU2_TR(0x6f23b3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f23b5:{NFSU2_TR(0x6f23b5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f23b7:{NFSU2_TR(0x6f23b7);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f23bb:{NFSU2_TR(0x6f23bb);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f23bf:{NFSU2_TR(0x6f23bf);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f23c3:{NFSU2_TR(0x6f23c3);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f23c7:{NFSU2_TR(0x6f23c7);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f23cb:{NFSU2_TR(0x6f23cb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f23cf:{NFSU2_TR(0x6f23cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f23d3:{NFSU2_TR(0x6f23d3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f23d7:{NFSU2_TR(0x6f23d7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f23db:{NFSU2_TR(0x6f23db);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f23df:{NFSU2_TR(0x6f23df);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f23e3:{NFSU2_TR(0x6f23e3);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f23e6:{NFSU2_TR(0x6f23e6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f23ea:{NFSU2_TR(0x6f23ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f23ee:{NFSU2_TR(0x6f23ee);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f23f1:{NFSU2_TR(0x6f23f1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f23f5:{NFSU2_TR(0x6f23f5);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f23f8:{NFSU2_TR(0x6f23f8);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f23fc:{NFSU2_TR(0x6f23fc);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2400:{NFSU2_TR(0x6f2400);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2404:{NFSU2_TR(0x6f2404);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f2408:{NFSU2_TR(0x6f2408);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f240c:{NFSU2_TR(0x6f240c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2410:{NFSU2_TR(0x6f2410);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f2414:{NFSU2_TR(0x6f2414);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2417:{NFSU2_TR(0x6f2417);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f241b:{NFSU2_TR(0x6f241b);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f241f:{NFSU2_TR(0x6f241f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2423:{NFSU2_TR(0x6f2423);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2426:{NFSU2_TR(0x6f2426);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6f242a:{NFSU2_TR(0x6f242a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f242e:{NFSU2_TR(0x6f242e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x80ull))));
}
B6f2434:{NFSU2_TR(0x6f2434);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2438:{NFSU2_TR(0x6f2438);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6f243b:{NFSU2_TR(0x6f243b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B6f243e:{NFSU2_TR(0x6f243e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B6f2441:{NFSU2_TR(0x6f2441);
{u32 ea_=u32(r4(R+4)+u32(4294967236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2444:{NFSU2_TR(0x6f2444);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2448:{NFSU2_TR(0x6f2448);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6f244a:{NFSU2_TR(0x6f244a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f244e:{NFSU2_TR(0x6f244e);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6f2450:{NFSU2_TR(0x6f2450);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2454:{NFSU2_TR(0x6f2454);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f2458:{NFSU2_TR(0x6f2458);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f245c:{NFSU2_TR(0x6f245c);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f245e:{NFSU2_TR(0x6f245e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2462:{NFSU2_TR(0x6f2462);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6f2464:{NFSU2_TR(0x6f2464);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2468:{NFSU2_TR(0x6f2468);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f246c:{NFSU2_TR(0x6f246c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f246e:{NFSU2_TR(0x6f246e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f2470:{NFSU2_TR(0x6f2470);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2474:{NFSU2_TR(0x6f2474);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f2478:{NFSU2_TR(0x6f2478);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f247c:{NFSU2_TR(0x6f247c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f2480:{NFSU2_TR(0x6f2480);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2484:{NFSU2_TR(0x6f2484);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f2488:{NFSU2_TR(0x6f2488);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f248c:{NFSU2_TR(0x6f248c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6f248f:{NFSU2_TR(0x6f248f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6f2492:{NFSU2_TR(0x6f2492);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f2494:{NFSU2_TR(0x6f2494);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2498:{NFSU2_TR(0x6f2498);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f249c:{NFSU2_TR(0x6f249c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f21d2u);}goto L6f21d2;}}
}
B6f24a2:L6f24a2:{c.instructions+=1;NFSU2_TR(0x6f24a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f24a6:L6f24a6:{c.instructions+=2;NFSU2_TR(0x6f24a6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f24a8:{NFSU2_TR(0x6f24a8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f275c;}}
}
B6f24ae:L6f24ae:{c.instructions+=4;NFSU2_TR(0x6f24ae);
__builtin_memmove((R+24),(R+12),4);
}
B6f24b0:{NFSU2_TR(0x6f24b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6f24b3:{NFSU2_TR(0x6f24b3);
u8 U[12];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6f24b7:{NFSU2_TR(0x6f24b7);
{goto L6f24c0;}
}
B6f24c0:L6f24c0:{c.instructions+=54;NFSU2_TR(0x6f24c0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+24,u32(s32(s16(r2(U+0)))));
}
B6f24c3:{NFSU2_TR(0x6f24c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f24c7:{NFSU2_TR(0x6f24c7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B6f24cb:{NFSU2_TR(0x6f24cb);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f24cf:{NFSU2_TR(0x6f24cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f24d3:{NFSU2_TR(0x6f24d3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B6f24d7:{NFSU2_TR(0x6f24d7);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f24da:{NFSU2_TR(0x6f24da);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f24de:{NFSU2_TR(0x6f24de);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f24e2:{NFSU2_TR(0x6f24e2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+24,u32(s32(s16(r2(U+0)))));
}
B6f24e5:{NFSU2_TR(0x6f24e5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f24e7:{NFSU2_TR(0x6f24e7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f24eb:{NFSU2_TR(0x6f24eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f24ef:{NFSU2_TR(0x6f24ef);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B6f24f3:{NFSU2_TR(0x6f24f3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f24f6:{NFSU2_TR(0x6f24f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f24fa:{NFSU2_TR(0x6f24fa);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f24fe:{NFSU2_TR(0x6f24fe);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x6ull))));
}
B6f2501:{NFSU2_TR(0x6f2501);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2505:{NFSU2_TR(0x6f2505);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2509:{NFSU2_TR(0x6f2509);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B6f250d:{NFSU2_TR(0x6f250d);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2510:{NFSU2_TR(0x6f2510);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2514:{NFSU2_TR(0x6f2514);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2518:{NFSU2_TR(0x6f2518);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f251c:{NFSU2_TR(0x6f251c);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+24,u32(r2(U+8)));
}
B6f2520:{NFSU2_TR(0x6f2520);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2522:{NFSU2_TR(0x6f2522);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
}
B6f2525:{NFSU2_TR(0x6f2525);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2529:{NFSU2_TR(0x6f2529);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6f252a:{NFSU2_TR(0x6f252a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f252e:{NFSU2_TR(0x6f252e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B6f2531:{NFSU2_TR(0x6f2531);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f2533:{NFSU2_TR(0x6f2533);
{u32 ea_=u32(r4(R+4)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2536:{NFSU2_TR(0x6f2536);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f253a:{NFSU2_TR(0x6f253a);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6f253c:{NFSU2_TR(0x6f253c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2540:{NFSU2_TR(0x6f2540);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6f2542:{NFSU2_TR(0x6f2542);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2546:{NFSU2_TR(0x6f2546);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f254a:{NFSU2_TR(0x6f254a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f254e:{NFSU2_TR(0x6f254e);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f2550:{NFSU2_TR(0x6f2550);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2554:{NFSU2_TR(0x6f2554);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6f2556:{NFSU2_TR(0x6f2556);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f255a:{NFSU2_TR(0x6f255a);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f255e:{NFSU2_TR(0x6f255e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f2560:{NFSU2_TR(0x6f2560);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f2562:{NFSU2_TR(0x6f2562);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2566:{NFSU2_TR(0x6f2566);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f256a:{NFSU2_TR(0x6f256a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f256e:{NFSU2_TR(0x6f256e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f2572:{NFSU2_TR(0x6f2572);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2576:{NFSU2_TR(0x6f2576);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f24c0u);}goto L6f24c0;}}
}
B6f257c:L6f257c:{c.instructions+=2;NFSU2_TR(0x6f257c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f2580:{NFSU2_TR(0x6f2580);
{goto L6f275c;}
}
B6f2585:L6f2585:{c.instructions+=3;NFSU2_TR(0x6f2585);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B6f2587:{NFSU2_TR(0x6f2587);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f258b:{NFSU2_TR(0x6f258b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f2159u);}goto L6f2159;}
}
B6f2590:L6f2590:{c.instructions+=3;NFSU2_TR(0x6f2590);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6f2592:{NFSU2_TR(0x6f2592);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f2595:{NFSU2_TR(0x6f2595);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f26f8;}}
}
B6f259b:L6f259b:{c.instructions+=3;NFSU2_TR(0x6f259b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f25a3:{NFSU2_TR(0x6f25a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f25a6:{NFSU2_TR(0x6f25a6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B6f25a9:L6f25a9:{c.instructions+=85;NFSU2_TR(0x6f25a9);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+20,u32(s32(s16(r2(U+0)))));
}
B6f25ac:{NFSU2_TR(0x6f25ac);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6f25b0:{NFSU2_TR(0x6f25b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f25b4:{NFSU2_TR(0x6f25b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f25b8:{NFSU2_TR(0x6f25b8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6f25bb:{NFSU2_TR(0x6f25bb);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f25bf:{NFSU2_TR(0x6f25bf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B6f25c2:{NFSU2_TR(0x6f25c2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x80ull))));
}
B6f25c8:{NFSU2_TR(0x6f25c8);
{u32 ea_=u32(r4(R+4)+u32(4294967160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f25ce:{NFSU2_TR(0x6f25ce);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f25d2:{NFSU2_TR(0x6f25d2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f25d6:{NFSU2_TR(0x6f25d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f25da:{NFSU2_TR(0x6f25da);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f25de:{NFSU2_TR(0x6f25de);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f25e2:{NFSU2_TR(0x6f25e2);
{u32 ea_=u32(r4(R+4)+u32(4294967164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f25e8:{NFSU2_TR(0x6f25e8);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f25ec:{NFSU2_TR(0x6f25ec);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f25f0:{NFSU2_TR(0x6f25f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f25f4:{NFSU2_TR(0x6f25f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f25f8:{NFSU2_TR(0x6f25f8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f25fc:{NFSU2_TR(0x6f25fc);
{u32 ea_=u32(r4(R+4)+u32(4294967168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f25ff:{NFSU2_TR(0x6f25ff);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2603:{NFSU2_TR(0x6f2603);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f2607:{NFSU2_TR(0x6f2607);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6f260b:{NFSU2_TR(0x6f260b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f260f:{NFSU2_TR(0x6f260f);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f2613:{NFSU2_TR(0x6f2613);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2617:{NFSU2_TR(0x6f2617);
{u32 ea_=u32(r4(R+4)+u32(4294967192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f261a:{NFSU2_TR(0x6f261a);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f261e:{NFSU2_TR(0x6f261e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f2622:{NFSU2_TR(0x6f2622);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2626:{NFSU2_TR(0x6f2626);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f262a:{NFSU2_TR(0x6f262a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f262e:{NFSU2_TR(0x6f262e);
{u32 ea_=u32(r4(R+4)+u32(4294967196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2631:{NFSU2_TR(0x6f2631);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2635:{NFSU2_TR(0x6f2635);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f2639:{NFSU2_TR(0x6f2639);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f263d:{NFSU2_TR(0x6f263d);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f2641:{NFSU2_TR(0x6f2641);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2645:{NFSU2_TR(0x6f2645);
{u32 ea_=u32(r4(R+4)+u32(4294967200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2648:{NFSU2_TR(0x6f2648);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f264c:{NFSU2_TR(0x6f264c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f2650:{NFSU2_TR(0x6f2650);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6f2654:{NFSU2_TR(0x6f2654);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2658:{NFSU2_TR(0x6f2658);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f265c:{NFSU2_TR(0x6f265c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2660:{NFSU2_TR(0x6f2660);
{u32 ea_=u32(r4(R+4)+u32(4294967224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2663:{NFSU2_TR(0x6f2663);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2667:{NFSU2_TR(0x6f2667);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f266b:{NFSU2_TR(0x6f266b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f266f:{NFSU2_TR(0x6f266f);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f2673:{NFSU2_TR(0x6f2673);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2677:{NFSU2_TR(0x6f2677);
{u32 ea_=u32(r4(R+4)+u32(4294967228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f267a:{NFSU2_TR(0x6f267a);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f267e:{NFSU2_TR(0x6f267e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f2682:{NFSU2_TR(0x6f2682);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2686:{NFSU2_TR(0x6f2686);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f268a:{NFSU2_TR(0x6f268a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f268e:{NFSU2_TR(0x6f268e);
{u32 ea_=u32(r4(R+4)+u32(4294967232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2691:{NFSU2_TR(0x6f2691);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2695:{NFSU2_TR(0x6f2695);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f2699:{NFSU2_TR(0x6f2699);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6f269d:{NFSU2_TR(0x6f269d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f26a1:{NFSU2_TR(0x6f26a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f26a5:{NFSU2_TR(0x6f26a5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f26a9:{NFSU2_TR(0x6f26a9);
{u32 ea_=u32(r4(R+4)+u32(4294967256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f26ac:{NFSU2_TR(0x6f26ac);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f26b0:{NFSU2_TR(0x6f26b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f26b4:{NFSU2_TR(0x6f26b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f26b8:{NFSU2_TR(0x6f26b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f26bc:{NFSU2_TR(0x6f26bc);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f26c0:{NFSU2_TR(0x6f26c0);
{u32 ea_=u32(r4(R+4)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f26c3:{NFSU2_TR(0x6f26c3);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f26c7:{NFSU2_TR(0x6f26c7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f26cb:{NFSU2_TR(0x6f26cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f26cf:{NFSU2_TR(0x6f26cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f26d3:{NFSU2_TR(0x6f26d3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f26d7:{NFSU2_TR(0x6f26d7);
{u32 ea_=u32(r4(R+4)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f26da:{NFSU2_TR(0x6f26da);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f26de:{NFSU2_TR(0x6f26de);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f26e2:{NFSU2_TR(0x6f26e2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6f26e5:{NFSU2_TR(0x6f26e5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B6f26e8:{NFSU2_TR(0x6f26e8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f26ea:{NFSU2_TR(0x6f26ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f26ee:{NFSU2_TR(0x6f26ee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f25a9u);}goto L6f25a9;}}
}
B6f26f4:L6f26f4:{c.instructions+=1;NFSU2_TR(0x6f26f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f26f8:L6f26f8:{c.instructions+=2;NFSU2_TR(0x6f26f8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f26fa:{NFSU2_TR(0x6f26fa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f275c;}}
}
B6f26fc:L6f26fc:{c.instructions+=3;NFSU2_TR(0x6f26fc);
__builtin_memmove((R+8),(R+24),4);
}
B6f26fe:{NFSU2_TR(0x6f26fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6f2701:{NFSU2_TR(0x6f2701);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6f2705:L6f2705:{c.instructions+=25;NFSU2_TR(0x6f2705);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+20,u32(s32(s16(r2(U+0)))));
}
B6f2708:{NFSU2_TR(0x6f2708);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f270c:{NFSU2_TR(0x6f270c);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+12,u32(r2(U+8)));
}
B6f2710:{NFSU2_TR(0x6f2710);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2714:{NFSU2_TR(0x6f2714);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f2718:{NFSU2_TR(0x6f2718);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
}
B6f271b:{NFSU2_TR(0x6f271b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f271f:{NFSU2_TR(0x6f271f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f2720:{NFSU2_TR(0x6f2720);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B6f2723:{NFSU2_TR(0x6f2723);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f2725:{NFSU2_TR(0x6f2725);
{u32 ea_=u32(r4(R+8)+u32(4294967256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2728:{NFSU2_TR(0x6f2728);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f272c:{NFSU2_TR(0x6f272c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f2730:{NFSU2_TR(0x6f2730);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2734:{NFSU2_TR(0x6f2734);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f2738:{NFSU2_TR(0x6f2738);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f273c:{NFSU2_TR(0x6f273c);
{u32 ea_=u32(r4(R+8)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f273f:{NFSU2_TR(0x6f273f);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2743:{NFSU2_TR(0x6f2743);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f2747:{NFSU2_TR(0x6f2747);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f274b:{NFSU2_TR(0x6f274b);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f274f:{NFSU2_TR(0x6f274f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f2753:{NFSU2_TR(0x6f2753);
{u32 ea_=u32(r4(R+8)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2756:{NFSU2_TR(0x6f2756);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f275a:{NFSU2_TR(0x6f275a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f2705u);}goto L6f2705;}}
}
B6f275c:L6f275c:{c.instructions+=3;NFSU2_TR(0x6f275c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6f275f:{NFSU2_TR(0x6f275f);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f2761:{NFSU2_TR(0x6f2761);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f27c0;}}
}
B6f2763:L6f2763:{c.instructions+=12;NFSU2_TR(0x6f2763);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6f2767:{NFSU2_TR(0x6f2767);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f276a:{NFSU2_TR(0x6f276a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6f276d:{NFSU2_TR(0x6f276d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6f2771:{NFSU2_TR(0x6f2771);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6f2774:{NFSU2_TR(0x6f2774);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6f2777:{NFSU2_TR(0x6f2777);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f277b:{NFSU2_TR(0x6f277b);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6f277f:{NFSU2_TR(0x6f277f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B6f2782:{NFSU2_TR(0x6f2782);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6f2784:{NFSU2_TR(0x6f2784);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f2786:{NFSU2_TR(0x6f2786);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f27c0;}}
}
B6f2788:L6f2788:{c.instructions+=2;NFSU2_TR(0x6f2788);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6f278b:{NFSU2_TR(0x6f278b);
{goto L6f2790;}
}
B6f2790:L6f2790:{c.instructions+=15;NFSU2_TR(0x6f2790);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6f2794:{NFSU2_TR(0x6f2794);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f2797:{NFSU2_TR(0x6f2797);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f279b:{NFSU2_TR(0x6f279b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6f279f:{NFSU2_TR(0x6f279f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f27a2:{NFSU2_TR(0x6f27a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f27a6:{NFSU2_TR(0x6f27a6);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f27aa:{NFSU2_TR(0x6f27aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6f27ac:{NFSU2_TR(0x6f27ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f27b0:{NFSU2_TR(0x6f27b0);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f27b4:{NFSU2_TR(0x6f27b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6f27b8:{NFSU2_TR(0x6f27b8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f27b9:{NFSU2_TR(0x6f27b9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6f27bc:{NFSU2_TR(0x6f27bc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f27be:{NFSU2_TR(0x6f27be);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f2790u);}goto L6f2790;}}
}
B6f27c0:L6f27c0:{c.instructions+=7;NFSU2_TR(0x6f27c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f27c1:{NFSU2_TR(0x6f27c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f27c2:{NFSU2_TR(0x6f27c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f27c3:{NFSU2_TR(0x6f27c3);
w1(R+0,u8(0x1ull));
}
B6f27c5:{NFSU2_TR(0x6f27c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f27c6:{NFSU2_TR(0x6f27c6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f27c9:{NFSU2_TR(0x6f27c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f27cc:L6f27cc:{c.instructions+=12;NFSU2_TR(0x6f27cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f27d0:{NFSU2_TR(0x6f27d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f27d4:{NFSU2_TR(0x6f27d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f27d5:{NFSU2_TR(0x6f27d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f27d9:{NFSU2_TR(0x6f27d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f27da:{NFSU2_TR(0x6f27da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f27db:{NFSU2_TR(0x6f27db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f27dc:{NFSU2_TR(0x6f27dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f27e0:{NFSU2_TR(0x6f27e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f27e1:{NFSU2_TR(0x6f27e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f27e2:{NFSU2_TR(0x6f27e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f27e6:{NFSU2_TR(0x6f27e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f27ebull));
TAIL_STATIC(0x6f1090u,6f1);
}
B6f27eb:L6f27eb:{c.instructions+=6;NFSU2_TR(0x6f27eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f27ec:{NFSU2_TR(0x6f27ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f27ed:{NFSU2_TR(0x6f27ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f27ee:{NFSU2_TR(0x6f27ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f27ef:{NFSU2_TR(0x6f27ef);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f27f2:{NFSU2_TR(0x6f27f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f2800:L6f2800:{c.instructions+=3;NFSU2_TR(0x6f2800);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f2801:{NFSU2_TR(0x6f2801);
__builtin_memmove((R+24),(R+4),4);
}
B6f2803:{NFSU2_TR(0x6f2803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f2808ull));
TAIL_STATIC(0x6e3ed0u,6e3);
}
B6f2808:L6f2808:{c.instructions+=6;NFSU2_TR(0x6f2808);
u8 U[4];
w4(U+0,u32(0x7c2250ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6f280e:{NFSU2_TR(0x6f280e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x16ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f2815:{NFSU2_TR(0x6f2815);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6f281b:{NFSU2_TR(0x6f281b);
__builtin_memmove((R+0),(R+24),4);
}
B6f281d:{NFSU2_TR(0x6f281d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f281e:{NFSU2_TR(0x6f281e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f2820:L6f2820:{c.instructions+=3;NFSU2_TR(0x6f2820);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f2823:{NFSU2_TR(0x6f2823);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6f2827:{NFSU2_TR(0x6f2827);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f2830:L6f2830:{c.instructions+=2;NFSU2_TR(0x6f2830);
u8 U[4];
w4(U+0,u32(0x7c2250ull));
s4(u32(r4(R+4)),r4(U+0));
}
B6f2836:{NFSU2_TR(0x6f2836);
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6f2840:L6f2840:{c.instructions+=5;NFSU2_TR(0x6f2840);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f2841:{NFSU2_TR(0x6f2841);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f2844:{NFSU2_TR(0x6f2844);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f2847:{NFSU2_TR(0x6f2847);
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
B6f2849:{NFSU2_TR(0x6f2849);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f2863;}}
}
B6f284b:L6f284b:{c.instructions+=8;NFSU2_TR(0x6f284b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6f284f:{NFSU2_TR(0x6f284f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f2853:{NFSU2_TR(0x6f2853);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6f2857:{NFSU2_TR(0x6f2857);
w1(R+0,u8(0x1ull));
}
B6f2859:{NFSU2_TR(0x6f2859);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f285d:{NFSU2_TR(0x6f285d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f285f:{NFSU2_TR(0x6f285f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f2860:{NFSU2_TR(0x6f2860);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f2863:L6f2863:{c.instructions+=10;NFSU2_TR(0x6f2863);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6f2867:{NFSU2_TR(0x6f2867);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6f286c:{NFSU2_TR(0x6f286c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f2870:{NFSU2_TR(0x6f2870);
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
B6f2871:{NFSU2_TR(0x6f2871);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6f2875:{NFSU2_TR(0x6f2875);
w1(R+0,u8(0x1ull));
}
B6f2877:{NFSU2_TR(0x6f2877);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f287b:{NFSU2_TR(0x6f287b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f287d:{NFSU2_TR(0x6f287d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f287e:{NFSU2_TR(0x6f287e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f2890:L6f2890:{c.instructions+=3;NFSU2_TR(0x6f2890);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f2893:{NFSU2_TR(0x6f2893);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f2896:{NFSU2_TR(0x6f2896);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f28a0:L6f28a0:{c.instructions+=7;NFSU2_TR(0x6f28a0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f28a4:{NFSU2_TR(0x6f28a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f28a6:{NFSU2_TR(0x6f28a6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f28a8:{NFSU2_TR(0x6f28a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f28a9:{NFSU2_TR(0x6f28a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f28ad:{NFSU2_TR(0x6f28ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f28ae:{NFSU2_TR(0x6f28ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f28b1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f28b1:L6f28b1:{c.instructions+=1;NFSU2_TR(0x6f28b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f28c0:L6f28c0:{c.instructions+=5;NFSU2_TR(0x6f28c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f28c4:{NFSU2_TR(0x6f28c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f28c7:{NFSU2_TR(0x6f28c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B6f28ca:{NFSU2_TR(0x6f28ca);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f28cc:{NFSU2_TR(0x6f28cc);
if(r1(R+518)){{goto L6f28d1;}}
}
B6f28ce:L6f28ce:{c.instructions+=1;NFSU2_TR(0x6f28ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f28d1:L6f28d1:{c.instructions+=19;NFSU2_TR(0x6f28d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f28d2:{NFSU2_TR(0x6f28d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f28d6:{NFSU2_TR(0x6f28d6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f28d7:{NFSU2_TR(0x6f28d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f28d8:{NFSU2_TR(0x6f28d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f28d9:{NFSU2_TR(0x6f28d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f28dc:{NFSU2_TR(0x6f28dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6f28e0:{NFSU2_TR(0x6f28e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f28e4:{NFSU2_TR(0x6f28e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f28e7:{NFSU2_TR(0x6f28e7);
__builtin_memmove((R+8),(R+12),4);
}
B6f28e9:{NFSU2_TR(0x6f28e9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6f28ec:{NFSU2_TR(0x6f28ec);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6f28f0:{NFSU2_TR(0x6f28f0);
u8 U[5];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6f28f4:{NFSU2_TR(0x6f28f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f28f6:{NFSU2_TR(0x6f28f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f28fa:{NFSU2_TR(0x6f28fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f28fe:{NFSU2_TR(0x6f28fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2902:{NFSU2_TR(0x6f2902);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2906:{NFSU2_TR(0x6f2906);
if(r1(R+518)){TAIL_STATIC(0x6f30c7u,6f3);}
}
B6f290c:L6f290c:{c.instructions+=4;NFSU2_TR(0x6f290c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6f2910:{NFSU2_TR(0x6f2910);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6f2911:{NFSU2_TR(0x6f2911);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f2913:{NFSU2_TR(0x6f2913);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6f30c7u,6f3);}
}
B6f2919:L6f2919:{c.instructions+=8;NFSU2_TR(0x6f2919);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f291a:{NFSU2_TR(0x6f291a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6f291d:{NFSU2_TR(0x6f291d);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6f2921:{NFSU2_TR(0x6f2921);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f2923:{NFSU2_TR(0x6f2923);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f2926:{NFSU2_TR(0x6f2926);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f292a:{NFSU2_TR(0x6f292a);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f292e:{NFSU2_TR(0x6f292e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f2f18;}}
}
B6f2934:L6f2934:{c.instructions+=10;NFSU2_TR(0x6f2934);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f2938:{NFSU2_TR(0x6f2938);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6f293c:{NFSU2_TR(0x6f293c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2940:{NFSU2_TR(0x6f2940);
w4(R+4,u32(0x2ull));
}
B6f2945:{NFSU2_TR(0x6f2945);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1eull))));
}
B6f2948:{NFSU2_TR(0x6f2948);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xeull))));
}
B6f294b:{NFSU2_TR(0x6f294b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f294e:{NFSU2_TR(0x6f294e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B6f2950:{NFSU2_TR(0x6f2950);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2954:{NFSU2_TR(0x6f2954);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2958:L6f2958:{c.instructions+=10;NFSU2_TR(0x6f2958);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6f295c:{NFSU2_TR(0x6f295c);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f2960:{NFSU2_TR(0x6f2960);
__builtin_memmove((R+4),(R+28),4);
}
B6f2962:{NFSU2_TR(0x6f2962);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f2965:{NFSU2_TR(0x6f2965);
w4(R+20,u32(0x1ull));
}
B6f296a:{NFSU2_TR(0x6f296a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6f296c:{NFSU2_TR(0x6f296c);
__builtin_memmove((R+4),(R+28),4);
}
B6f296e:{NFSU2_TR(0x6f296e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6f2971:{NFSU2_TR(0x6f2971);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f2974:{NFSU2_TR(0x6f2974);
if(r1(R+518)){{goto L6f2ab8;}}
}
B6f297a:L6f297a:{c.instructions+=86;NFSU2_TR(0x6f297a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f297e:{NFSU2_TR(0x6f297e);
__builtin_memmove((R+20),(R+4),4);
}
B6f2980:{NFSU2_TR(0x6f2980);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2986:{NFSU2_TR(0x6f2986);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2988:{NFSU2_TR(0x6f2988);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f298e:{NFSU2_TR(0x6f298e);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2990:{NFSU2_TR(0x6f2990);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2993:{NFSU2_TR(0x6f2993);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2997:{NFSU2_TR(0x6f2997);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f299b:{NFSU2_TR(0x6f299b);
__builtin_memmove((R+20),(R+4),4);
}
B6f299d:{NFSU2_TR(0x6f299d);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f29a3:{NFSU2_TR(0x6f29a3);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f29a5:{NFSU2_TR(0x6f29a5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f29ab:{NFSU2_TR(0x6f29ab);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f29ad:{NFSU2_TR(0x6f29ad);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f29b1:{NFSU2_TR(0x6f29b1);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f29b4:{NFSU2_TR(0x6f29b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f29b8:{NFSU2_TR(0x6f29b8);
__builtin_memmove((R+20),(R+4),4);
}
B6f29ba:{NFSU2_TR(0x6f29ba);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f29c0:{NFSU2_TR(0x6f29c0);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f29c2:{NFSU2_TR(0x6f29c2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f29c8:{NFSU2_TR(0x6f29c8);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f29ca:{NFSU2_TR(0x6f29ca);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f29ce:{NFSU2_TR(0x6f29ce);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f29d1:{NFSU2_TR(0x6f29d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f29d5:{NFSU2_TR(0x6f29d5);
__builtin_memmove((R+20),(R+4),4);
}
B6f29d7:{NFSU2_TR(0x6f29d7);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f29dd:{NFSU2_TR(0x6f29dd);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f29df:{NFSU2_TR(0x6f29df);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f29e5:{NFSU2_TR(0x6f29e5);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f29e7:{NFSU2_TR(0x6f29e7);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f29eb:{NFSU2_TR(0x6f29eb);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f29ee:{NFSU2_TR(0x6f29ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f29f2:{NFSU2_TR(0x6f29f2);
__builtin_memmove((R+20),(R+4),4);
}
B6f29f4:{NFSU2_TR(0x6f29f4);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f29fa:{NFSU2_TR(0x6f29fa);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f29fc:{NFSU2_TR(0x6f29fc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2a02:{NFSU2_TR(0x6f2a02);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2a04:{NFSU2_TR(0x6f2a04);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2a08:{NFSU2_TR(0x6f2a08);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2a0b:{NFSU2_TR(0x6f2a0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2a0f:{NFSU2_TR(0x6f2a0f);
__builtin_memmove((R+20),(R+4),4);
}
B6f2a11:{NFSU2_TR(0x6f2a11);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2a17:{NFSU2_TR(0x6f2a17);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2a1b:{NFSU2_TR(0x6f2a1b);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2a1d:{NFSU2_TR(0x6f2a1d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f2a21:{NFSU2_TR(0x6f2a21);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2a27:{NFSU2_TR(0x6f2a27);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2a29:{NFSU2_TR(0x6f2a29);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2a2d:{NFSU2_TR(0x6f2a2d);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2a30:{NFSU2_TR(0x6f2a30);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2a34:{NFSU2_TR(0x6f2a34);
__builtin_memmove((R+20),(R+4),4);
}
B6f2a36:{NFSU2_TR(0x6f2a36);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2a3c:{NFSU2_TR(0x6f2a3c);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2a3e:{NFSU2_TR(0x6f2a3e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2a44:{NFSU2_TR(0x6f2a44);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2a46:{NFSU2_TR(0x6f2a46);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2a4a:{NFSU2_TR(0x6f2a4a);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2a4d:{NFSU2_TR(0x6f2a4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2a51:{NFSU2_TR(0x6f2a51);
__builtin_memmove((R+20),(R+4),4);
}
B6f2a53:{NFSU2_TR(0x6f2a53);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2a59:{NFSU2_TR(0x6f2a59);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2a5b:{NFSU2_TR(0x6f2a5b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2a61:{NFSU2_TR(0x6f2a61);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2a63:{NFSU2_TR(0x6f2a63);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2a67:{NFSU2_TR(0x6f2a67);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2a6a:{NFSU2_TR(0x6f2a6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f2a6d:{NFSU2_TR(0x6f2a6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6f2a70:{NFSU2_TR(0x6f2a70);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f2a74:{NFSU2_TR(0x6f2a74);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2a78:{NFSU2_TR(0x6f2a78);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2a7c:{NFSU2_TR(0x6f2a7c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2a80:{NFSU2_TR(0x6f2a80);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f2a84:{NFSU2_TR(0x6f2a84);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2a88:{NFSU2_TR(0x6f2a88);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f2a8c:{NFSU2_TR(0x6f2a8c);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2a90:{NFSU2_TR(0x6f2a90);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2a94:{NFSU2_TR(0x6f2a94);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f2a98:{NFSU2_TR(0x6f2a98);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2a9c:{NFSU2_TR(0x6f2a9c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f2aa0:{NFSU2_TR(0x6f2aa0);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2aa4:{NFSU2_TR(0x6f2aa4);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2aa8:{NFSU2_TR(0x6f2aa8);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f2aac:{NFSU2_TR(0x6f2aac);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2ab0:{NFSU2_TR(0x6f2ab0);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f2ab4:{NFSU2_TR(0x6f2ab4);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2ab8:L6f2ab8:{c.instructions+=10;NFSU2_TR(0x6f2ab8);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f2abc:{NFSU2_TR(0x6f2abc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+28,u32(r1(U+0)));
}
B6f2abf:{NFSU2_TR(0x6f2abf);
__builtin_memmove((R+4),(R+28),4);
}
B6f2ac1:{NFSU2_TR(0x6f2ac1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f2ac4:{NFSU2_TR(0x6f2ac4);
w4(R+20,u32(0x1ull));
}
B6f2ac9:{NFSU2_TR(0x6f2ac9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6f2acb:{NFSU2_TR(0x6f2acb);
__builtin_memmove((R+4),(R+28),4);
}
B6f2acd:{NFSU2_TR(0x6f2acd);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6f2ad0:{NFSU2_TR(0x6f2ad0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f2ad3:{NFSU2_TR(0x6f2ad3);
if(r1(R+518)){{goto L6f2c1a;}}
}
B6f2ad9:L6f2ad9:{c.instructions+=87;NFSU2_TR(0x6f2ad9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffeaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2add:{NFSU2_TR(0x6f2add);
__builtin_memmove((R+20),(R+4),4);
}
B6f2adf:{NFSU2_TR(0x6f2adf);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2ae5:{NFSU2_TR(0x6f2ae5);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2ae7:{NFSU2_TR(0x6f2ae7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2aed:{NFSU2_TR(0x6f2aed);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2aef:{NFSU2_TR(0x6f2aef);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2af2:{NFSU2_TR(0x6f2af2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2af6:{NFSU2_TR(0x6f2af6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2afa:{NFSU2_TR(0x6f2afa);
__builtin_memmove((R+20),(R+4),4);
}
B6f2afc:{NFSU2_TR(0x6f2afc);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2b02:{NFSU2_TR(0x6f2b02);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2b04:{NFSU2_TR(0x6f2b04);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2b0a:{NFSU2_TR(0x6f2b0a);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2b0c:{NFSU2_TR(0x6f2b0c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffeeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2b10:{NFSU2_TR(0x6f2b10);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2b13:{NFSU2_TR(0x6f2b13);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2b17:{NFSU2_TR(0x6f2b17);
__builtin_memmove((R+20),(R+4),4);
}
B6f2b19:{NFSU2_TR(0x6f2b19);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2b1f:{NFSU2_TR(0x6f2b1f);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2b21:{NFSU2_TR(0x6f2b21);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2b27:{NFSU2_TR(0x6f2b27);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2b29:{NFSU2_TR(0x6f2b29);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f2b2d:{NFSU2_TR(0x6f2b2d);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B6f2b31:{NFSU2_TR(0x6f2b31);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2b34:{NFSU2_TR(0x6f2b34);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2b38:{NFSU2_TR(0x6f2b38);
__builtin_memmove((R+20),(R+4),4);
}
B6f2b3a:{NFSU2_TR(0x6f2b3a);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2b40:{NFSU2_TR(0x6f2b40);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2b42:{NFSU2_TR(0x6f2b42);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2b48:{NFSU2_TR(0x6f2b48);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2b4a:{NFSU2_TR(0x6f2b4a);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2b4e:{NFSU2_TR(0x6f2b4e);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2b51:{NFSU2_TR(0x6f2b51);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2b55:{NFSU2_TR(0x6f2b55);
__builtin_memmove((R+20),(R+4),4);
}
B6f2b57:{NFSU2_TR(0x6f2b57);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2b5d:{NFSU2_TR(0x6f2b5d);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2b5f:{NFSU2_TR(0x6f2b5f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2b65:{NFSU2_TR(0x6f2b65);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2b67:{NFSU2_TR(0x6f2b67);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2b6b:{NFSU2_TR(0x6f2b6b);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2b6e:{NFSU2_TR(0x6f2b6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2b72:{NFSU2_TR(0x6f2b72);
__builtin_memmove((R+20),(R+4),4);
}
B6f2b74:{NFSU2_TR(0x6f2b74);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2b7a:{NFSU2_TR(0x6f2b7a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2b7e:{NFSU2_TR(0x6f2b7e);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2b80:{NFSU2_TR(0x6f2b80);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f2b84:{NFSU2_TR(0x6f2b84);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2b8a:{NFSU2_TR(0x6f2b8a);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2b8c:{NFSU2_TR(0x6f2b8c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2b90:{NFSU2_TR(0x6f2b90);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2b93:{NFSU2_TR(0x6f2b93);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2b97:{NFSU2_TR(0x6f2b97);
__builtin_memmove((R+20),(R+4),4);
}
B6f2b99:{NFSU2_TR(0x6f2b99);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2b9f:{NFSU2_TR(0x6f2b9f);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2ba1:{NFSU2_TR(0x6f2ba1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2ba7:{NFSU2_TR(0x6f2ba7);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2ba9:{NFSU2_TR(0x6f2ba9);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+4,u32(r2(U+0)));
}
B6f2bac:{NFSU2_TR(0x6f2bac);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2baf:{NFSU2_TR(0x6f2baf);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2bb3:{NFSU2_TR(0x6f2bb3);
__builtin_memmove((R+20),(R+4),4);
}
B6f2bb5:{NFSU2_TR(0x6f2bb5);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2bbb:{NFSU2_TR(0x6f2bbb);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2bbd:{NFSU2_TR(0x6f2bbd);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2bc3:{NFSU2_TR(0x6f2bc3);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2bc5:{NFSU2_TR(0x6f2bc5);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2bc9:{NFSU2_TR(0x6f2bc9);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2bcc:{NFSU2_TR(0x6f2bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f2bcf:{NFSU2_TR(0x6f2bcf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6f2bd2:{NFSU2_TR(0x6f2bd2);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f2bd6:{NFSU2_TR(0x6f2bd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2bda:{NFSU2_TR(0x6f2bda);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2bde:{NFSU2_TR(0x6f2bde);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2be2:{NFSU2_TR(0x6f2be2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f2be6:{NFSU2_TR(0x6f2be6);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2bea:{NFSU2_TR(0x6f2bea);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f2bee:{NFSU2_TR(0x6f2bee);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2bf2:{NFSU2_TR(0x6f2bf2);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2bf6:{NFSU2_TR(0x6f2bf6);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f2bfa:{NFSU2_TR(0x6f2bfa);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2bfe:{NFSU2_TR(0x6f2bfe);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f2c02:{NFSU2_TR(0x6f2c02);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2c06:{NFSU2_TR(0x6f2c06);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2c0a:{NFSU2_TR(0x6f2c0a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f2c0e:{NFSU2_TR(0x6f2c0e);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2c12:{NFSU2_TR(0x6f2c12);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f2c16:{NFSU2_TR(0x6f2c16);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2c1a:L6f2c1a:{c.instructions+=10;NFSU2_TR(0x6f2c1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f2c1e:{NFSU2_TR(0x6f2c1e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6f2c22:{NFSU2_TR(0x6f2c22);
__builtin_memmove((R+4),(R+28),4);
}
B6f2c24:{NFSU2_TR(0x6f2c24);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f2c27:{NFSU2_TR(0x6f2c27);
w4(R+20,u32(0x1ull));
}
B6f2c2c:{NFSU2_TR(0x6f2c2c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6f2c2e:{NFSU2_TR(0x6f2c2e);
__builtin_memmove((R+4),(R+28),4);
}
B6f2c30:{NFSU2_TR(0x6f2c30);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6f2c33:{NFSU2_TR(0x6f2c33);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f2c36:{NFSU2_TR(0x6f2c36);
if(r1(R+518)){{goto L6f2d7a;}}
}
B6f2c3c:L6f2c3c:{c.instructions+=86;NFSU2_TR(0x6f2c3c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2c40:{NFSU2_TR(0x6f2c40);
__builtin_memmove((R+20),(R+4),4);
}
B6f2c42:{NFSU2_TR(0x6f2c42);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2c48:{NFSU2_TR(0x6f2c48);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2c4a:{NFSU2_TR(0x6f2c4a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2c50:{NFSU2_TR(0x6f2c50);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2c52:{NFSU2_TR(0x6f2c52);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2c55:{NFSU2_TR(0x6f2c55);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2c59:{NFSU2_TR(0x6f2c59);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2c5d:{NFSU2_TR(0x6f2c5d);
__builtin_memmove((R+20),(R+4),4);
}
B6f2c5f:{NFSU2_TR(0x6f2c5f);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2c65:{NFSU2_TR(0x6f2c65);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2c67:{NFSU2_TR(0x6f2c67);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2c6d:{NFSU2_TR(0x6f2c6d);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2c6f:{NFSU2_TR(0x6f2c6f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2c73:{NFSU2_TR(0x6f2c73);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2c76:{NFSU2_TR(0x6f2c76);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2c7a:{NFSU2_TR(0x6f2c7a);
__builtin_memmove((R+20),(R+4),4);
}
B6f2c7c:{NFSU2_TR(0x6f2c7c);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2c82:{NFSU2_TR(0x6f2c82);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2c84:{NFSU2_TR(0x6f2c84);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2c8a:{NFSU2_TR(0x6f2c8a);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2c8c:{NFSU2_TR(0x6f2c8c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2c90:{NFSU2_TR(0x6f2c90);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2c93:{NFSU2_TR(0x6f2c93);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2c97:{NFSU2_TR(0x6f2c97);
__builtin_memmove((R+20),(R+4),4);
}
B6f2c99:{NFSU2_TR(0x6f2c99);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2c9f:{NFSU2_TR(0x6f2c9f);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2ca1:{NFSU2_TR(0x6f2ca1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2ca7:{NFSU2_TR(0x6f2ca7);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2ca9:{NFSU2_TR(0x6f2ca9);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2cad:{NFSU2_TR(0x6f2cad);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2cb0:{NFSU2_TR(0x6f2cb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2cb4:{NFSU2_TR(0x6f2cb4);
__builtin_memmove((R+20),(R+4),4);
}
B6f2cb6:{NFSU2_TR(0x6f2cb6);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2cbc:{NFSU2_TR(0x6f2cbc);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2cbe:{NFSU2_TR(0x6f2cbe);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2cc4:{NFSU2_TR(0x6f2cc4);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2cc6:{NFSU2_TR(0x6f2cc6);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2cca:{NFSU2_TR(0x6f2cca);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2ccd:{NFSU2_TR(0x6f2ccd);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2cd1:{NFSU2_TR(0x6f2cd1);
__builtin_memmove((R+20),(R+4),4);
}
B6f2cd3:{NFSU2_TR(0x6f2cd3);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2cd9:{NFSU2_TR(0x6f2cd9);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2cdd:{NFSU2_TR(0x6f2cdd);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2cdf:{NFSU2_TR(0x6f2cdf);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f2ce3:{NFSU2_TR(0x6f2ce3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2ce9:{NFSU2_TR(0x6f2ce9);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2ceb:{NFSU2_TR(0x6f2ceb);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2cef:{NFSU2_TR(0x6f2cef);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2cf2:{NFSU2_TR(0x6f2cf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2cf6:{NFSU2_TR(0x6f2cf6);
__builtin_memmove((R+20),(R+4),4);
}
B6f2cf8:{NFSU2_TR(0x6f2cf8);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2cfe:{NFSU2_TR(0x6f2cfe);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2d00:{NFSU2_TR(0x6f2d00);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2d06:{NFSU2_TR(0x6f2d06);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2d08:{NFSU2_TR(0x6f2d08);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2d0c:{NFSU2_TR(0x6f2d0c);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2d0f:{NFSU2_TR(0x6f2d0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2d13:{NFSU2_TR(0x6f2d13);
__builtin_memmove((R+20),(R+4),4);
}
B6f2d15:{NFSU2_TR(0x6f2d15);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f2d1b:{NFSU2_TR(0x6f2d1b);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f2d1d:{NFSU2_TR(0x6f2d1d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2d23:{NFSU2_TR(0x6f2d23);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B6f2d25:{NFSU2_TR(0x6f2d25);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2d29:{NFSU2_TR(0x6f2d29);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f2d2c:{NFSU2_TR(0x6f2d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f2d2f:{NFSU2_TR(0x6f2d2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6f2d32:{NFSU2_TR(0x6f2d32);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f2d36:{NFSU2_TR(0x6f2d36);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2d3a:{NFSU2_TR(0x6f2d3a);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2d3e:{NFSU2_TR(0x6f2d3e);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2d42:{NFSU2_TR(0x6f2d42);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f2d46:{NFSU2_TR(0x6f2d46);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2d4a:{NFSU2_TR(0x6f2d4a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f2d4e:{NFSU2_TR(0x6f2d4e);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2d52:{NFSU2_TR(0x6f2d52);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2d56:{NFSU2_TR(0x6f2d56);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f2d5a:{NFSU2_TR(0x6f2d5a);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2d5e:{NFSU2_TR(0x6f2d5e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f2d62:{NFSU2_TR(0x6f2d62);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2d66:{NFSU2_TR(0x6f2d66);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2d6a:{NFSU2_TR(0x6f2d6a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f2d6e:{NFSU2_TR(0x6f2d6e);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2d72:{NFSU2_TR(0x6f2d72);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f2d76:{NFSU2_TR(0x6f2d76);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2d7a:L6f2d7a:{c.instructions+=10;NFSU2_TR(0x6f2d7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f2d7e:{NFSU2_TR(0x6f2d7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6f2d82:{NFSU2_TR(0x6f2d82);
__builtin_memmove((R+4),(R+28),4);
}
B6f2d84:{NFSU2_TR(0x6f2d84);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f2d87:{NFSU2_TR(0x6f2d87);
w4(R+20,u32(0x1ull));
}
B6f2d8c:{NFSU2_TR(0x6f2d8c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6f2d8e:{NFSU2_TR(0x6f2d8e);
__builtin_memmove((R+4),(R+28),4);
}
B6f2d90:{NFSU2_TR(0x6f2d90);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6f2d93:{NFSU2_TR(0x6f2d93);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f2d96:{NFSU2_TR(0x6f2d96);
if(r1(R+518)){{goto L6f2ed9;}}
}
B6f2d9c:L6f2d9c:{c.instructions+=86;NFSU2_TR(0x6f2d9c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2da0:{NFSU2_TR(0x6f2da0);
__builtin_memmove((R+12),(R+4),4);
}
B6f2da2:{NFSU2_TR(0x6f2da2);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
}
B6f2da8:{NFSU2_TR(0x6f2da8);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f2daa:{NFSU2_TR(0x6f2daa);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2db0:{NFSU2_TR(0x6f2db0);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6f2db2:{NFSU2_TR(0x6f2db2);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f2db5:{NFSU2_TR(0x6f2db5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2db9:{NFSU2_TR(0x6f2db9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2dbd:{NFSU2_TR(0x6f2dbd);
__builtin_memmove((R+12),(R+4),4);
}
B6f2dbf:{NFSU2_TR(0x6f2dbf);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
}
B6f2dc5:{NFSU2_TR(0x6f2dc5);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f2dc7:{NFSU2_TR(0x6f2dc7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2dcd:{NFSU2_TR(0x6f2dcd);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6f2dcf:{NFSU2_TR(0x6f2dcf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2dd3:{NFSU2_TR(0x6f2dd3);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f2dd6:{NFSU2_TR(0x6f2dd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2dda:{NFSU2_TR(0x6f2dda);
__builtin_memmove((R+12),(R+4),4);
}
B6f2ddc:{NFSU2_TR(0x6f2ddc);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
}
B6f2de2:{NFSU2_TR(0x6f2de2);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f2de4:{NFSU2_TR(0x6f2de4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2dea:{NFSU2_TR(0x6f2dea);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6f2dec:{NFSU2_TR(0x6f2dec);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B6f2def:{NFSU2_TR(0x6f2def);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f2df2:{NFSU2_TR(0x6f2df2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2df6:{NFSU2_TR(0x6f2df6);
__builtin_memmove((R+12),(R+4),4);
}
B6f2df8:{NFSU2_TR(0x6f2df8);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
}
B6f2dfe:{NFSU2_TR(0x6f2dfe);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f2e00:{NFSU2_TR(0x6f2e00);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2e06:{NFSU2_TR(0x6f2e06);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6f2e08:{NFSU2_TR(0x6f2e08);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2e0c:{NFSU2_TR(0x6f2e0c);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f2e0f:{NFSU2_TR(0x6f2e0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2e13:{NFSU2_TR(0x6f2e13);
__builtin_memmove((R+12),(R+4),4);
}
B6f2e15:{NFSU2_TR(0x6f2e15);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
}
B6f2e1b:{NFSU2_TR(0x6f2e1b);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f2e1d:{NFSU2_TR(0x6f2e1d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2e23:{NFSU2_TR(0x6f2e23);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6f2e25:{NFSU2_TR(0x6f2e25);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2e29:{NFSU2_TR(0x6f2e29);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f2e2c:{NFSU2_TR(0x6f2e2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2e30:{NFSU2_TR(0x6f2e30);
__builtin_memmove((R+12),(R+4),4);
}
B6f2e32:{NFSU2_TR(0x6f2e32);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
}
B6f2e38:{NFSU2_TR(0x6f2e38);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2e3c:{NFSU2_TR(0x6f2e3c);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f2e3e:{NFSU2_TR(0x6f2e3e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f2e42:{NFSU2_TR(0x6f2e42);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2e48:{NFSU2_TR(0x6f2e48);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6f2e4a:{NFSU2_TR(0x6f2e4a);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2e4e:{NFSU2_TR(0x6f2e4e);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f2e51:{NFSU2_TR(0x6f2e51);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2e55:{NFSU2_TR(0x6f2e55);
__builtin_memmove((R+12),(R+4),4);
}
B6f2e57:{NFSU2_TR(0x6f2e57);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
}
B6f2e5d:{NFSU2_TR(0x6f2e5d);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f2e5f:{NFSU2_TR(0x6f2e5f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2e65:{NFSU2_TR(0x6f2e65);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6f2e67:{NFSU2_TR(0x6f2e67);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2e6b:{NFSU2_TR(0x6f2e6b);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f2e6e:{NFSU2_TR(0x6f2e6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2e72:{NFSU2_TR(0x6f2e72);
__builtin_memmove((R+12),(R+4),4);
}
B6f2e74:{NFSU2_TR(0x6f2e74);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
}
B6f2e7a:{NFSU2_TR(0x6f2e7a);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f2e7c:{NFSU2_TR(0x6f2e7c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2e82:{NFSU2_TR(0x6f2e82);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6f2e84:{NFSU2_TR(0x6f2e84);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2e88:{NFSU2_TR(0x6f2e88);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f2e8b:{NFSU2_TR(0x6f2e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f2e8e:{NFSU2_TR(0x6f2e8e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6f2e91:{NFSU2_TR(0x6f2e91);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f2e95:{NFSU2_TR(0x6f2e95);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2e99:{NFSU2_TR(0x6f2e99);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2e9d:{NFSU2_TR(0x6f2e9d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2ea1:{NFSU2_TR(0x6f2ea1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f2ea5:{NFSU2_TR(0x6f2ea5);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2ea9:{NFSU2_TR(0x6f2ea9);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f2ead:{NFSU2_TR(0x6f2ead);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2eb1:{NFSU2_TR(0x6f2eb1);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2eb5:{NFSU2_TR(0x6f2eb5);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f2eb9:{NFSU2_TR(0x6f2eb9);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2ebd:{NFSU2_TR(0x6f2ebd);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f2ec1:{NFSU2_TR(0x6f2ec1);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2ec5:{NFSU2_TR(0x6f2ec5);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f2ec9:{NFSU2_TR(0x6f2ec9);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f2ecd:{NFSU2_TR(0x6f2ecd);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f2ed1:{NFSU2_TR(0x6f2ed1);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f2ed5:{NFSU2_TR(0x6f2ed5);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f2ed9:L6f2ed9:{c.instructions+=13;NFSU2_TR(0x6f2ed9);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f2edd:{NFSU2_TR(0x6f2edd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f2ee1:{NFSU2_TR(0x6f2ee1);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f2ee5:{NFSU2_TR(0x6f2ee5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6f2ee8:{NFSU2_TR(0x6f2ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B6f2eeb:{NFSU2_TR(0x6f2eeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f2eef:{NFSU2_TR(0x6f2eef);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6f2ef2:{NFSU2_TR(0x6f2ef2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B6f2ef5:{NFSU2_TR(0x6f2ef5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B6f2ef8:{NFSU2_TR(0x6f2ef8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f2efa:{NFSU2_TR(0x6f2efa);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2efe:{NFSU2_TR(0x6f2efe);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2f02:{NFSU2_TR(0x6f2f02);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f2958u);}goto L6f2958;}}
}
B6f2f08:L6f2f08:{c.instructions+=4;NFSU2_TR(0x6f2f08);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f2f0c:{NFSU2_TR(0x6f2f0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f2f10:{NFSU2_TR(0x6f2f10);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f2f14:{NFSU2_TR(0x6f2f14);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f2f18:L6f2f18:{c.instructions+=2;NFSU2_TR(0x6f2f18);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f2f1a:{NFSU2_TR(0x6f2f1a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6f3192u,6f3);}
}
B6f2f20:L6f2f20:{c.instructions+=6;NFSU2_TR(0x6f2f20);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f2f24:{NFSU2_TR(0x6f2f24);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B6f2f28:{NFSU2_TR(0x6f2f28);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6f2f2c:{NFSU2_TR(0x6f2f2c);
u8 U[12];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6f2f30:{NFSU2_TR(0x6f2f30);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2f34:{NFSU2_TR(0x6f2f34);
{goto L6f2f40;}
}
B6f2f36:L6f2f36:{c.instructions+=2;NFSU2_TR(0x6f2f36);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f2f3a:{NFSU2_TR(0x6f2f3a);
__builtin_memmove((R+12),(R+12),4);
}
B6f2f40:L6f2f40:{c.instructions+=10;NFSU2_TR(0x6f2f40);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B6f2f44:{NFSU2_TR(0x6f2f44);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f2f48:{NFSU2_TR(0x6f2f48);
__builtin_memmove((R+4),(R+28),4);
}
B6f2f4a:{NFSU2_TR(0x6f2f4a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f2f4d:{NFSU2_TR(0x6f2f4d);
w4(R+12,u32(0x1ull));
}
B6f2f52:{NFSU2_TR(0x6f2f52);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B6f2f54:{NFSU2_TR(0x6f2f54);
__builtin_memmove((R+4),(R+28),4);
}
B6f2f56:{NFSU2_TR(0x6f2f56);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6f2f59:{NFSU2_TR(0x6f2f59);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f2f5d:{NFSU2_TR(0x6f2f5d);
if(r1(R+518)){TAIL_STATIC(0x6f30a3u,6f3);}
}
B6f2f63:L6f2f63:{c.instructions+=44;NFSU2_TR(0x6f2f63);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2f67:{NFSU2_TR(0x6f2f67);
__builtin_memmove((R+12),(R+4),4);
}
B6f2f69:{NFSU2_TR(0x6f2f69);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
}
B6f2f6f:{NFSU2_TR(0x6f2f6f);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f2f71:{NFSU2_TR(0x6f2f71);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2f77:{NFSU2_TR(0x6f2f77);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6f2f79:{NFSU2_TR(0x6f2f79);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f2f7c:{NFSU2_TR(0x6f2f7c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B6f2f7f:{NFSU2_TR(0x6f2f7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2f83:{NFSU2_TR(0x6f2f83);
__builtin_memmove((R+12),(R+4),4);
}
B6f2f85:{NFSU2_TR(0x6f2f85);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
}
B6f2f8b:{NFSU2_TR(0x6f2f8b);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f2f8d:{NFSU2_TR(0x6f2f8d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2f93:{NFSU2_TR(0x6f2f93);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6f2f95:{NFSU2_TR(0x6f2f95);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2f99:{NFSU2_TR(0x6f2f99);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f2f9c:{NFSU2_TR(0x6f2f9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2fa0:{NFSU2_TR(0x6f2fa0);
__builtin_memmove((R+12),(R+4),4);
}
B6f2fa2:{NFSU2_TR(0x6f2fa2);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
}
B6f2fa8:{NFSU2_TR(0x6f2fa8);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f2faa:{NFSU2_TR(0x6f2faa);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2fb0:{NFSU2_TR(0x6f2fb0);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6f2fb2:{NFSU2_TR(0x6f2fb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f2fb6:{NFSU2_TR(0x6f2fb6);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B6f2fba:{NFSU2_TR(0x6f2fba);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f2fbd:{NFSU2_TR(0x6f2fbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2fc1:{NFSU2_TR(0x6f2fc1);
__builtin_memmove((R+12),(R+4),4);
}
B6f2fc3:{NFSU2_TR(0x6f2fc3);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
}
B6f2fc9:{NFSU2_TR(0x6f2fc9);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f2fcb:{NFSU2_TR(0x6f2fcb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2fd1:{NFSU2_TR(0x6f2fd1);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6f2fd3:{NFSU2_TR(0x6f2fd3);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2fd7:{NFSU2_TR(0x6f2fd7);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f2fda:{NFSU2_TR(0x6f2fda);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2fde:{NFSU2_TR(0x6f2fde);
__builtin_memmove((R+12),(R+4),4);
}
B6f2fe0:{NFSU2_TR(0x6f2fe0);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
}
B6f2fe6:{NFSU2_TR(0x6f2fe6);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f2fe8:{NFSU2_TR(0x6f2fe8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f2fee:{NFSU2_TR(0x6f2fee);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6f2ff0:{NFSU2_TR(0x6f2ff0);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f2ff4:{NFSU2_TR(0x6f2ff4);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f2ff7:{NFSU2_TR(0x6f2ff7);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f2ffb:{NFSU2_TR(0x6f2ffb);
__builtin_memmove((R+12),(R+4),4);
}
B6f2ffd:{NFSU2_TR(0x6f2ffd);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
TAIL_STATIC(0x6f3003u,6f3);
}
XIT:NFSU2_TR_EXIT(0x6f2,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
