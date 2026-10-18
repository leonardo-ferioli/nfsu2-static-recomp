#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_724(u8* __restrict R,Cpu& c);
u32 body_725(u8* __restrict R,Cpu& c);
u32 body_72a(u8* __restrict R,Cpu& c);
u32 body_72c(u8* __restrict R,Cpu& c);
u32 body_72e(u8* __restrict R,Cpu& c);
u32 body_733(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x72d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x72d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_72d(u8* __restrict R,Cpu& c);
u32 page_72d(Cpu& c){return body_72d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_72d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x72d001:goto L72d001;
case 0x72d005:c.instructions+=19;goto B72d005;
case 0x72d009:c.instructions+=18;goto B72d009;
case 0x72d00d:c.instructions+=17;goto B72d00d;
case 0x72d010:c.instructions+=16;goto B72d010;
case 0x72d014:c.instructions+=15;goto B72d014;
case 0x72d017:c.instructions+=14;goto B72d017;
case 0x72d01b:c.instructions+=13;goto B72d01b;
case 0x72d01f:c.instructions+=12;goto B72d01f;
case 0x72d022:c.instructions+=11;goto B72d022;
case 0x72d026:c.instructions+=10;goto B72d026;
case 0x72d02a:c.instructions+=9;goto B72d02a;
case 0x72d02c:c.instructions+=8;goto B72d02c;
case 0x72d02d:c.instructions+=7;goto B72d02d;
case 0x72d030:c.instructions+=6;goto B72d030;
case 0x72d032:c.instructions+=5;goto B72d032;
case 0x72d034:c.instructions+=4;goto B72d034;
case 0x72d036:c.instructions+=3;goto B72d036;
case 0x72d038:c.instructions+=2;goto B72d038;
case 0x72d03b:c.instructions+=1;goto B72d03b;
case 0x72d041:goto L72d041;
case 0x72d042:c.instructions+=4;goto B72d042;
case 0x72d043:c.instructions+=3;goto B72d043;
case 0x72d044:c.instructions+=2;goto B72d044;
case 0x72d045:c.instructions+=1;goto B72d045;
case 0x72d046:goto L72d046;
case 0x72d047:c.instructions+=25;goto B72d047;
case 0x72d049:c.instructions+=24;goto B72d049;
case 0x72d04c:c.instructions+=23;goto B72d04c;
case 0x72d04e:c.instructions+=22;goto B72d04e;
case 0x72d04f:c.instructions+=21;goto B72d04f;
case 0x72d050:c.instructions+=20;goto B72d050;
case 0x72d052:c.instructions+=19;goto B72d052;
case 0x72d055:c.instructions+=18;goto B72d055;
case 0x72d058:c.instructions+=17;goto B72d058;
case 0x72d059:c.instructions+=16;goto B72d059;
case 0x72d05a:c.instructions+=15;goto B72d05a;
case 0x72d05b:c.instructions+=14;goto B72d05b;
case 0x72d05c:c.instructions+=13;goto B72d05c;
case 0x72d05d:c.instructions+=12;goto B72d05d;
case 0x72d05f:c.instructions+=11;goto B72d05f;
case 0x72d062:c.instructions+=10;goto B72d062;
case 0x72d065:c.instructions+=9;goto B72d065;
case 0x72d066:c.instructions+=8;goto B72d066;
case 0x72d067:c.instructions+=7;goto B72d067;
case 0x72d068:c.instructions+=6;goto B72d068;
case 0x72d069:c.instructions+=5;goto B72d069;
case 0x72d06a:c.instructions+=4;goto B72d06a;
case 0x72d06d:c.instructions+=3;goto B72d06d;
case 0x72d071:c.instructions+=2;goto B72d071;
case 0x72d073:c.instructions+=1;goto B72d073;
case 0x72d075:goto L72d075;
case 0x72d078:c.instructions+=2;goto B72d078;
case 0x72d07e:c.instructions+=1;goto B72d07e;
case 0x72d07f:goto L72d07f;
case 0x72d082:c.instructions+=10;goto B72d082;
case 0x72d085:c.instructions+=9;goto B72d085;
case 0x72d089:c.instructions+=8;goto B72d089;
case 0x72d08b:c.instructions+=7;goto B72d08b;
case 0x72d08d:c.instructions+=6;goto B72d08d;
case 0x72d090:c.instructions+=5;goto B72d090;
case 0x72d091:c.instructions+=4;goto B72d091;
case 0x72d095:c.instructions+=3;goto B72d095;
case 0x72d098:c.instructions+=2;goto B72d098;
case 0x72d09a:c.instructions+=1;goto B72d09a;
case 0x72d09c:goto L72d09c;
case 0x72d09d:goto L72d09d;
case 0x72d0a1:c.instructions+=16;goto B72d0a1;
case 0x72d0a2:c.instructions+=15;goto B72d0a2;
case 0x72d0a8:c.instructions+=14;goto B72d0a8;
case 0x72d0ae:c.instructions+=13;goto B72d0ae;
case 0x72d0af:c.instructions+=12;goto B72d0af;
case 0x72d0b2:c.instructions+=11;goto B72d0b2;
case 0x72d0b3:c.instructions+=10;goto B72d0b3;
case 0x72d0b6:c.instructions+=9;goto B72d0b6;
case 0x72d0b7:c.instructions+=8;goto B72d0b7;
case 0x72d0ba:c.instructions+=7;goto B72d0ba;
case 0x72d0bd:c.instructions+=6;goto B72d0bd;
case 0x72d0bf:c.instructions+=5;goto B72d0bf;
case 0x72d0c1:c.instructions+=4;goto B72d0c1;
case 0x72d0c4:c.instructions+=3;goto B72d0c4;
case 0x72d0c7:c.instructions+=2;goto B72d0c7;
case 0x72d0ca:c.instructions+=1;goto B72d0ca;
case 0x72d0cf:goto L72d0cf;
case 0x72d0d2:c.instructions+=4;goto B72d0d2;
case 0x72d0d3:c.instructions+=3;goto B72d0d3;
case 0x72d0d4:c.instructions+=2;goto B72d0d4;
case 0x72d0d5:c.instructions+=1;goto B72d0d5;
case 0x72d0d6:goto L72d0d6;
case 0x72d0da:c.instructions+=2;goto B72d0da;
case 0x72d0e2:c.instructions+=1;goto B72d0e2;
case 0x72d0e3:goto L72d0e3;
case 0x72d0e4:c.instructions+=4;goto B72d0e4;
case 0x72d0e8:c.instructions+=3;goto B72d0e8;
case 0x72d0ed:c.instructions+=2;goto B72d0ed;
case 0x72d0ef:c.instructions+=1;goto B72d0ef;
case 0x72d0f1:goto L72d0f1;
case 0x72d0f3:c.instructions+=1;goto B72d0f3;
case 0x72d0f5:goto L72d0f5;
case 0x72d0f7:c.instructions+=1;goto B72d0f7;
case 0x72d0f9:goto L72d0f9;
case 0x72d0fb:goto L72d0fb;
case 0x72d100:goto L72d100;
case 0x72d105:c.instructions+=5;goto B72d105;
case 0x72d10a:c.instructions+=4;goto B72d10a;
case 0x72d10d:c.instructions+=3;goto B72d10d;
case 0x72d110:c.instructions+=2;goto B72d110;
case 0x72d111:c.instructions+=1;goto B72d111;
case 0x72d112:goto L72d112;
case 0x72d119:c.instructions+=1;goto B72d119;
case 0x72d11b:goto L72d11b;
case 0x72d11d:c.instructions+=2;goto B72d11d;
case 0x72d11e:c.instructions+=1;goto B72d11e;
case 0x72d11f:goto L72d11f;
case 0x72d123:c.instructions+=1;goto B72d123;
case 0x72d128:goto L72d128;
case 0x72d129:c.instructions+=5;goto B72d129;
case 0x72d12b:c.instructions+=4;goto B72d12b;
case 0x72d12d:c.instructions+=3;goto B72d12d;
case 0x72d130:c.instructions+=2;goto B72d130;
case 0x72d132:c.instructions+=1;goto B72d132;
case 0x72d140:goto L72d140;
case 0x72d141:c.instructions+=18;goto B72d141;
case 0x72d142:c.instructions+=17;goto B72d142;
case 0x72d143:c.instructions+=16;goto B72d143;
case 0x72d145:c.instructions+=15;goto B72d145;
case 0x72d148:c.instructions+=14;goto B72d148;
case 0x72d149:c.instructions+=13;goto B72d149;
case 0x72d14a:c.instructions+=12;goto B72d14a;
case 0x72d14c:c.instructions+=11;goto B72d14c;
case 0x72d151:c.instructions+=10;goto B72d151;
case 0x72d152:c.instructions+=9;goto B72d152;
case 0x72d153:c.instructions+=8;goto B72d153;
case 0x72d154:c.instructions+=7;goto B72d154;
case 0x72d155:c.instructions+=6;goto B72d155;
case 0x72d157:c.instructions+=5;goto B72d157;
case 0x72d159:c.instructions+=4;goto B72d159;
case 0x72d15a:c.instructions+=3;goto B72d15a;
case 0x72d15b:c.instructions+=2;goto B72d15b;
case 0x72d15c:c.instructions+=1;goto B72d15c;
case 0x72d15d:goto L72d15d;
case 0x72d15e:c.instructions+=22;goto B72d15e;
case 0x72d160:c.instructions+=21;goto B72d160;
case 0x72d161:c.instructions+=20;goto B72d161;
case 0x72d162:c.instructions+=19;goto B72d162;
case 0x72d163:c.instructions+=18;goto B72d163;
case 0x72d164:c.instructions+=17;goto B72d164;
case 0x72d165:c.instructions+=16;goto B72d165;
case 0x72d166:c.instructions+=15;goto B72d166;
case 0x72d169:c.instructions+=14;goto B72d169;
case 0x72d16b:c.instructions+=13;goto B72d16b;
case 0x72d16e:c.instructions+=12;goto B72d16e;
case 0x72d170:c.instructions+=11;goto B72d170;
case 0x72d173:c.instructions+=10;goto B72d173;
case 0x72d176:c.instructions+=9;goto B72d176;
case 0x72d179:c.instructions+=8;goto B72d179;
case 0x72d17a:c.instructions+=7;goto B72d17a;
case 0x72d17b:c.instructions+=6;goto B72d17b;
case 0x72d17c:c.instructions+=5;goto B72d17c;
case 0x72d17d:c.instructions+=4;goto B72d17d;
case 0x72d17e:c.instructions+=3;goto B72d17e;
case 0x72d17f:c.instructions+=2;goto B72d17f;
case 0x72d180:c.instructions+=1;goto B72d180;
case 0x72d181:goto L72d181;
case 0x72d185:c.instructions+=3;goto B72d185;
case 0x72d189:c.instructions+=2;goto B72d189;
case 0x72d18c:c.instructions+=1;goto B72d18c;
case 0x72d18d:goto L72d18d;
case 0x72d18e:c.instructions+=13;goto B72d18e;
case 0x72d190:c.instructions+=12;goto B72d190;
case 0x72d191:c.instructions+=11;goto B72d191;
case 0x72d194:c.instructions+=10;goto B72d194;
case 0x72d195:c.instructions+=9;goto B72d195;
case 0x72d198:c.instructions+=8;goto B72d198;
case 0x72d199:c.instructions+=7;goto B72d199;
case 0x72d19c:c.instructions+=6;goto B72d19c;
case 0x72d19f:c.instructions+=5;goto B72d19f;
case 0x72d1a5:c.instructions+=4;goto B72d1a5;
case 0x72d1a6:c.instructions+=3;goto B72d1a6;
case 0x72d1a9:c.instructions+=2;goto B72d1a9;
case 0x72d1ac:c.instructions+=1;goto B72d1ac;
case 0x72d1b2:goto L72d1b2;
case 0x72d1b7:c.instructions+=2;goto B72d1b7;
case 0x72d1bb:c.instructions+=1;goto B72d1bb;
case 0x72d1bd:goto L72d1bd;
case 0x72d1bf:c.instructions+=2;goto B72d1bf;
case 0x72d1c2:c.instructions+=1;goto B72d1c2;
case 0x72d1c4:goto L72d1c4;
case 0x72d1c8:c.instructions+=5;goto B72d1c8;
case 0x72d1ca:c.instructions+=4;goto B72d1ca;
case 0x72d1cb:c.instructions+=3;goto B72d1cb;
case 0x72d1cd:c.instructions+=2;goto B72d1cd;
case 0x72d1cf:c.instructions+=1;goto B72d1cf;
case 0x72d1d1:goto L72d1d1;
case 0x72d1d5:c.instructions+=11;goto B72d1d5;
case 0x72d1d8:c.instructions+=10;goto B72d1d8;
case 0x72d1da:c.instructions+=9;goto B72d1da;
case 0x72d1db:c.instructions+=8;goto B72d1db;
case 0x72d1df:c.instructions+=7;goto B72d1df;
case 0x72d1e1:c.instructions+=6;goto B72d1e1;
case 0x72d1e5:c.instructions+=5;goto B72d1e5;
case 0x72d1e8:c.instructions+=4;goto B72d1e8;
case 0x72d1eb:c.instructions+=3;goto B72d1eb;
case 0x72d1ed:c.instructions+=2;goto B72d1ed;
case 0x72d1f0:c.instructions+=1;goto B72d1f0;
case 0x72d1f2:goto L72d1f2;
case 0x72d1f5:c.instructions+=2;goto B72d1f5;
case 0x72d1f7:c.instructions+=1;goto B72d1f7;
case 0x72d1f9:goto L72d1f9;
case 0x72d1fd:c.instructions+=6;goto B72d1fd;
case 0x72d1fe:c.instructions+=5;goto B72d1fe;
case 0x72d1ff:c.instructions+=4;goto B72d1ff;
case 0x72d200:c.instructions+=3;goto B72d200;
case 0x72d201:c.instructions+=2;goto B72d201;
case 0x72d202:c.instructions+=1;goto B72d202;
case 0x72d204:goto L72d204;
case 0x72d207:c.instructions+=1;goto B72d207;
case 0x72d20a:goto L72d20a;
case 0x72d20d:c.instructions+=2;goto B72d20d;
case 0x72d20f:c.instructions+=1;goto B72d20f;
case 0x72d211:goto L72d211;
case 0x72d216:c.instructions+=1;goto B72d216;
case 0x72d21b:goto L72d21b;
case 0x72d220:c.instructions+=1;goto B72d220;
case 0x72d222:goto L72d222;
case 0x72d226:c.instructions+=5;goto B72d226;
case 0x72d229:c.instructions+=4;goto B72d229;
case 0x72d22b:c.instructions+=3;goto B72d22b;
case 0x72d231:c.instructions+=2;goto B72d231;
case 0x72d234:c.instructions+=1;goto B72d234;
case 0x72d236:goto L72d236;
case 0x72d239:c.instructions+=1;goto B72d239;
case 0x72d23d:goto L72d23d;
case 0x72d23f:c.instructions+=7;goto B72d23f;
case 0x72d242:c.instructions+=6;goto B72d242;
case 0x72d245:c.instructions+=5;goto B72d245;
case 0x72d248:c.instructions+=4;goto B72d248;
case 0x72d24b:c.instructions+=3;goto B72d24b;
case 0x72d24e:c.instructions+=2;goto B72d24e;
case 0x72d251:c.instructions+=1;goto B72d251;
case 0x72d256:goto L72d256;
case 0x72d259:c.instructions+=5;goto B72d259;
case 0x72d25c:c.instructions+=4;goto B72d25c;
case 0x72d25e:c.instructions+=3;goto B72d25e;
case 0x72d261:c.instructions+=2;goto B72d261;
case 0x72d265:c.instructions+=1;goto B72d265;
case 0x72d267:goto L72d267;
case 0x72d26b:c.instructions+=7;goto B72d26b;
case 0x72d26d:c.instructions+=6;goto B72d26d;
case 0x72d26e:c.instructions+=5;goto B72d26e;
case 0x72d270:c.instructions+=4;goto B72d270;
case 0x72d272:c.instructions+=3;goto B72d272;
case 0x72d274:c.instructions+=2;goto B72d274;
case 0x72d276:c.instructions+=1;goto B72d276;
case 0x72d278:goto L72d278;
case 0x72d27a:c.instructions+=6;goto B72d27a;
case 0x72d27c:c.instructions+=5;goto B72d27c;
case 0x72d280:c.instructions+=4;goto B72d280;
case 0x72d283:c.instructions+=3;goto B72d283;
case 0x72d284:c.instructions+=2;goto B72d284;
case 0x72d286:c.instructions+=1;goto B72d286;
case 0x72d288:goto L72d288;
case 0x72d28a:goto L72d28a;
case 0x72d28d:c.instructions+=8;goto B72d28d;
case 0x72d28f:c.instructions+=7;goto B72d28f;
case 0x72d292:c.instructions+=6;goto B72d292;
case 0x72d295:c.instructions+=5;goto B72d295;
case 0x72d298:c.instructions+=4;goto B72d298;
case 0x72d29b:c.instructions+=3;goto B72d29b;
case 0x72d29e:c.instructions+=2;goto B72d29e;
case 0x72d2a1:c.instructions+=1;goto B72d2a1;
case 0x72d2a4:goto L72d2a4;
case 0x72d2a6:c.instructions+=1;goto B72d2a6;
case 0x72d2a8:goto L72d2a8;
case 0x72d2ab:c.instructions+=2;goto B72d2ab;
case 0x72d2ad:c.instructions+=1;goto B72d2ad;
case 0x72d2af:goto L72d2af;
case 0x72d2b3:c.instructions+=6;goto B72d2b3;
case 0x72d2b4:c.instructions+=5;goto B72d2b4;
case 0x72d2b5:c.instructions+=4;goto B72d2b5;
case 0x72d2b8:c.instructions+=3;goto B72d2b8;
case 0x72d2b9:c.instructions+=2;goto B72d2b9;
case 0x72d2ba:c.instructions+=1;goto B72d2ba;
case 0x72d2bc:goto L72d2bc;
case 0x72d2bf:c.instructions+=2;goto B72d2bf;
case 0x72d2c1:c.instructions+=1;goto B72d2c1;
case 0x72d2c3:goto L72d2c3;
case 0x72d2c7:goto L72d2c7;
case 0x72d2c9:goto L72d2c9;
case 0x72d2cf:goto L72d2cf;
case 0x72d2d1:c.instructions+=8;goto B72d2d1;
case 0x72d2d4:c.instructions+=7;goto B72d2d4;
case 0x72d2d6:c.instructions+=6;goto B72d2d6;
case 0x72d2d9:c.instructions+=5;goto B72d2d9;
case 0x72d2db:c.instructions+=4;goto B72d2db;
case 0x72d2de:c.instructions+=3;goto B72d2de;
case 0x72d2e0:c.instructions+=2;goto B72d2e0;
case 0x72d2e3:c.instructions+=1;goto B72d2e3;
case 0x72d2e5:goto L72d2e5;
case 0x72d2e9:c.instructions+=1;goto B72d2e9;
case 0x72d2eb:goto L72d2eb;
case 0x72d2ef:c.instructions+=2;goto B72d2ef;
case 0x72d2f3:c.instructions+=1;goto B72d2f3;
case 0x72d2f5:goto L72d2f5;
case 0x72d2fb:goto L72d2fb;
case 0x72d2fe:c.instructions+=17;goto B72d2fe;
case 0x72d301:c.instructions+=16;goto B72d301;
case 0x72d304:c.instructions+=15;goto B72d304;
case 0x72d307:c.instructions+=14;goto B72d307;
case 0x72d309:c.instructions+=13;goto B72d309;
case 0x72d30c:c.instructions+=12;goto B72d30c;
case 0x72d30d:c.instructions+=11;goto B72d30d;
case 0x72d310:c.instructions+=10;goto B72d310;
case 0x72d311:c.instructions+=9;goto B72d311;
case 0x72d314:c.instructions+=8;goto B72d314;
case 0x72d315:c.instructions+=7;goto B72d315;
case 0x72d318:c.instructions+=6;goto B72d318;
case 0x72d319:c.instructions+=5;goto B72d319;
case 0x72d31c:c.instructions+=4;goto B72d31c;
case 0x72d31f:c.instructions+=3;goto B72d31f;
case 0x72d320:c.instructions+=2;goto B72d320;
case 0x72d323:c.instructions+=1;goto B72d323;
case 0x72d326:goto L72d326;
case 0x72d329:c.instructions+=18;goto B72d329;
case 0x72d32c:c.instructions+=17;goto B72d32c;
case 0x72d32f:c.instructions+=16;goto B72d32f;
case 0x72d332:c.instructions+=15;goto B72d332;
case 0x72d334:c.instructions+=14;goto B72d334;
case 0x72d338:c.instructions+=13;goto B72d338;
case 0x72d33b:c.instructions+=12;goto B72d33b;
case 0x72d33e:c.instructions+=11;goto B72d33e;
case 0x72d341:c.instructions+=10;goto B72d341;
case 0x72d343:c.instructions+=9;goto B72d343;
case 0x72d346:c.instructions+=8;goto B72d346;
case 0x72d348:c.instructions+=7;goto B72d348;
case 0x72d34b:c.instructions+=6;goto B72d34b;
case 0x72d34e:c.instructions+=5;goto B72d34e;
case 0x72d351:c.instructions+=4;goto B72d351;
case 0x72d354:c.instructions+=3;goto B72d354;
case 0x72d357:c.instructions+=2;goto B72d357;
case 0x72d35a:c.instructions+=1;goto B72d35a;
case 0x72d35e:goto L72d35e;
case 0x72d361:c.instructions+=1;goto B72d361;
case 0x72d364:goto L72d364;
case 0x72d365:c.instructions+=4;goto B72d365;
case 0x72d366:c.instructions+=3;goto B72d366;
case 0x72d367:c.instructions+=2;goto B72d367;
case 0x72d368:c.instructions+=1;goto B72d368;
case 0x72d369:goto L72d369;
case 0x72d36d:c.instructions+=8;goto B72d36d;
case 0x72d36f:c.instructions+=7;goto B72d36f;
case 0x72d373:c.instructions+=6;goto B72d373;
case 0x72d379:c.instructions+=5;goto B72d379;
case 0x72d37c:c.instructions+=4;goto B72d37c;
case 0x72d37f:c.instructions+=3;goto B72d37f;
case 0x72d383:c.instructions+=2;goto B72d383;
case 0x72d387:c.instructions+=1;goto B72d387;
case 0x72d389:goto L72d389;
case 0x72d38e:c.instructions+=1;goto B72d38e;
case 0x72d390:goto L72d390;
case 0x72d397:c.instructions+=1;goto B72d397;
case 0x72d399:goto L72d399;
case 0x72d3a0:c.instructions+=1;goto B72d3a0;
case 0x72d3a2:goto L72d3a2;
case 0x72d3a7:c.instructions+=2;goto B72d3a7;
case 0x72d3ad:c.instructions+=1;goto B72d3ad;
case 0x72d3af:goto L72d3af;
case 0x72d3b6:c.instructions+=1;goto B72d3b6;
case 0x72d3b8:goto L72d3b8;
case 0x72d3bf:goto L72d3bf;
case 0x72d3c0:c.instructions+=8;goto B72d3c0;
case 0x72d3c3:c.instructions+=7;goto B72d3c3;
case 0x72d3c5:c.instructions+=6;goto B72d3c5;
case 0x72d3c6:c.instructions+=5;goto B72d3c6;
case 0x72d3c7:c.instructions+=4;goto B72d3c7;
case 0x72d3c8:c.instructions+=3;goto B72d3c8;
case 0x72d3c9:c.instructions+=2;goto B72d3c9;
case 0x72d3ca:c.instructions+=1;goto B72d3ca;
case 0x72d3cb:goto L72d3cb;
case 0x72d3cf:c.instructions+=5;goto B72d3cf;
case 0x72d3d2:c.instructions+=4;goto B72d3d2;
case 0x72d3d8:c.instructions+=3;goto B72d3d8;
case 0x72d3db:c.instructions+=2;goto B72d3db;
case 0x72d3dd:c.instructions+=1;goto B72d3dd;
case 0x72d3df:goto L72d3df;
case 0x72d3e3:c.instructions+=2;goto B72d3e3;
case 0x72d3e4:c.instructions+=1;goto B72d3e4;
case 0x72d3e9:goto L72d3e9;
case 0x72d3ea:c.instructions+=1;goto B72d3ea;
case 0x72d3eb:goto L72d3eb;
case 0x72d3ec:goto L72d3ec;
case 0x72d3ed:c.instructions+=11;goto B72d3ed;
case 0x72d3ef:c.instructions+=10;goto B72d3ef;
case 0x72d3f2:c.instructions+=9;goto B72d3f2;
case 0x72d3f5:c.instructions+=8;goto B72d3f5;
case 0x72d3f6:c.instructions+=7;goto B72d3f6;
case 0x72d3f9:c.instructions+=6;goto B72d3f9;
case 0x72d3ff:c.instructions+=5;goto B72d3ff;
case 0x72d402:c.instructions+=4;goto B72d402;
case 0x72d404:c.instructions+=3;goto B72d404;
case 0x72d40a:c.instructions+=2;goto B72d40a;
case 0x72d40d:c.instructions+=1;goto B72d40d;
case 0x72d40f:goto L72d40f;
case 0x72d413:c.instructions+=1;goto B72d413;
case 0x72d415:goto L72d415;
case 0x72d417:c.instructions+=1;goto B72d417;
case 0x72d41c:goto L72d41c;
case 0x72d41f:c.instructions+=7;goto B72d41f;
case 0x72d423:c.instructions+=6;goto B72d423;
case 0x72d426:c.instructions+=5;goto B72d426;
case 0x72d42c:c.instructions+=4;goto B72d42c;
case 0x72d42f:c.instructions+=3;goto B72d42f;
case 0x72d433:c.instructions+=2;goto B72d433;
case 0x72d436:c.instructions+=1;goto B72d436;
case 0x72d43b:goto L72d43b;
case 0x72d43e:c.instructions+=3;goto B72d43e;
case 0x72d441:c.instructions+=2;goto B72d441;
case 0x72d442:c.instructions+=1;goto B72d442;
case 0x72d447:goto L72d447;
case 0x72d44a:goto L72d44a;
case 0x72d451:c.instructions+=16;goto B72d451;
case 0x72d454:c.instructions+=15;goto B72d454;
case 0x72d457:c.instructions+=14;goto B72d457;
case 0x72d45a:c.instructions+=13;goto B72d45a;
case 0x72d45d:c.instructions+=12;goto B72d45d;
case 0x72d460:c.instructions+=11;goto B72d460;
case 0x72d463:c.instructions+=10;goto B72d463;
case 0x72d466:c.instructions+=9;goto B72d466;
case 0x72d469:c.instructions+=8;goto B72d469;
case 0x72d46c:c.instructions+=7;goto B72d46c;
case 0x72d46f:c.instructions+=6;goto B72d46f;
case 0x72d472:c.instructions+=5;goto B72d472;
case 0x72d475:c.instructions+=4;goto B72d475;
case 0x72d476:c.instructions+=3;goto B72d476;
case 0x72d47d:c.instructions+=2;goto B72d47d;
case 0x72d480:c.instructions+=1;goto B72d480;
case 0x72d485:goto L72d485;
case 0x72d486:c.instructions+=2;goto B72d486;
case 0x72d487:c.instructions+=1;goto B72d487;
case 0x72d489:goto L72d489;
case 0x72d48c:c.instructions+=2;goto B72d48c;
case 0x72d48e:c.instructions+=1;goto B72d48e;
case 0x72d490:goto L72d490;
case 0x72d491:c.instructions+=3;goto B72d491;
case 0x72d494:c.instructions+=2;goto B72d494;
case 0x72d495:c.instructions+=1;goto B72d495;
case 0x72d49a:goto L72d49a;
case 0x72d49d:c.instructions+=1;goto B72d49d;
case 0x72d4a2:goto L72d4a2;
case 0x72d4a5:c.instructions+=1;goto B72d4a5;
case 0x72d4a9:goto L72d4a9;
case 0x72d4aa:c.instructions+=2;goto B72d4aa;
case 0x72d4ab:c.instructions+=1;goto B72d4ab;
case 0x72d4ac:goto L72d4ac;
case 0x72d4ad:c.instructions+=11;goto B72d4ad;
case 0x72d4af:c.instructions+=10;goto B72d4af;
case 0x72d4b0:c.instructions+=9;goto B72d4b0;
case 0x72d4b1:c.instructions+=8;goto B72d4b1;
case 0x72d4b2:c.instructions+=7;goto B72d4b2;
case 0x72d4b5:c.instructions+=6;goto B72d4b5;
case 0x72d4b8:c.instructions+=5;goto B72d4b8;
case 0x72d4be:c.instructions+=4;goto B72d4be;
case 0x72d4bf:c.instructions+=3;goto B72d4bf;
case 0x72d4c2:c.instructions+=2;goto B72d4c2;
case 0x72d4c4:c.instructions+=1;goto B72d4c4;
case 0x72d4c6:goto L72d4c6;
case 0x72d4ca:c.instructions+=1;goto B72d4ca;
case 0x72d4cc:goto L72d4cc;
case 0x72d4ce:c.instructions+=1;goto B72d4ce;
case 0x72d4d3:goto L72d4d3;
case 0x72d4d6:c.instructions+=7;goto B72d4d6;
case 0x72d4da:c.instructions+=6;goto B72d4da;
case 0x72d4dd:c.instructions+=5;goto B72d4dd;
case 0x72d4e3:c.instructions+=4;goto B72d4e3;
case 0x72d4e6:c.instructions+=3;goto B72d4e6;
case 0x72d4ea:c.instructions+=2;goto B72d4ea;
case 0x72d4ed:c.instructions+=1;goto B72d4ed;
case 0x72d4f2:goto L72d4f2;
case 0x72d4f5:c.instructions+=3;goto B72d4f5;
case 0x72d4f8:c.instructions+=2;goto B72d4f8;
case 0x72d4f9:c.instructions+=1;goto B72d4f9;
case 0x72d4fe:goto L72d4fe;
case 0x72d501:goto L72d501;
case 0x72d508:c.instructions+=8;goto B72d508;
case 0x72d50b:c.instructions+=7;goto B72d50b;
case 0x72d50e:c.instructions+=6;goto B72d50e;
case 0x72d511:c.instructions+=5;goto B72d511;
case 0x72d514:c.instructions+=4;goto B72d514;
case 0x72d515:c.instructions+=3;goto B72d515;
case 0x72d518:c.instructions+=2;goto B72d518;
case 0x72d51b:c.instructions+=1;goto B72d51b;
case 0x72d520:goto L72d520;
case 0x72d521:c.instructions+=2;goto B72d521;
case 0x72d522:c.instructions+=1;goto B72d522;
case 0x72d524:goto L72d524;
case 0x72d527:c.instructions+=2;goto B72d527;
case 0x72d529:c.instructions+=1;goto B72d529;
case 0x72d52b:goto L72d52b;
case 0x72d52c:c.instructions+=3;goto B72d52c;
case 0x72d52f:c.instructions+=2;goto B72d52f;
case 0x72d530:c.instructions+=1;goto B72d530;
case 0x72d535:goto L72d535;
case 0x72d538:c.instructions+=1;goto B72d538;
case 0x72d53d:goto L72d53d;
case 0x72d540:c.instructions+=1;goto B72d540;
case 0x72d544:goto L72d544;
case 0x72d545:c.instructions+=3;goto B72d545;
case 0x72d546:c.instructions+=2;goto B72d546;
case 0x72d547:c.instructions+=1;goto B72d547;
case 0x72d548:goto L72d548;
case 0x72d54c:c.instructions+=5;goto B72d54c;
case 0x72d54f:c.instructions+=4;goto B72d54f;
case 0x72d555:c.instructions+=3;goto B72d555;
case 0x72d558:c.instructions+=2;goto B72d558;
case 0x72d55a:c.instructions+=1;goto B72d55a;
case 0x72d55c:goto L72d55c;
case 0x72d55f:c.instructions+=1;goto B72d55f;
case 0x72d561:goto L72d561;
case 0x72d562:c.instructions+=1;goto B72d562;
case 0x72d563:goto L72d563;
case 0x72d566:c.instructions+=1;goto B72d566;
case 0x72d567:goto L72d567;
case 0x72d56b:c.instructions+=7;goto B72d56b;
case 0x72d56d:c.instructions+=6;goto B72d56d;
case 0x72d56e:c.instructions+=5;goto B72d56e;
case 0x72d56f:c.instructions+=4;goto B72d56f;
case 0x72d571:c.instructions+=3;goto B72d571;
case 0x72d572:c.instructions+=2;goto B72d572;
case 0x72d576:c.instructions+=1;goto B72d576;
case 0x72d57b:goto L72d57b;
case 0x72d57c:c.instructions+=3;goto B72d57c;
case 0x72d57d:c.instructions+=2;goto B72d57d;
case 0x72d580:c.instructions+=1;goto B72d580;
case 0x72d581:goto L72d581;
case 0x72d585:c.instructions+=35;goto B72d585;
case 0x72d58b:c.instructions+=34;goto B72d58b;
case 0x72d58d:c.instructions+=33;goto B72d58d;
case 0x72d58f:c.instructions+=32;goto B72d58f;
case 0x72d591:c.instructions+=31;goto B72d591;
case 0x72d597:c.instructions+=30;goto B72d597;
case 0x72d599:c.instructions+=29;goto B72d599;
case 0x72d59b:c.instructions+=28;goto B72d59b;
case 0x72d5a1:c.instructions+=27;goto B72d5a1;
case 0x72d5a3:c.instructions+=26;goto B72d5a3;
case 0x72d5a5:c.instructions+=25;goto B72d5a5;
case 0x72d5ab:c.instructions+=24;goto B72d5ab;
case 0x72d5ad:c.instructions+=23;goto B72d5ad;
case 0x72d5af:c.instructions+=22;goto B72d5af;
case 0x72d5b5:c.instructions+=21;goto B72d5b5;
case 0x72d5b7:c.instructions+=20;goto B72d5b7;
case 0x72d5b9:c.instructions+=19;goto B72d5b9;
case 0x72d5bf:c.instructions+=18;goto B72d5bf;
case 0x72d5c1:c.instructions+=17;goto B72d5c1;
case 0x72d5c3:c.instructions+=16;goto B72d5c3;
case 0x72d5c9:c.instructions+=15;goto B72d5c9;
case 0x72d5cb:c.instructions+=14;goto B72d5cb;
case 0x72d5cd:c.instructions+=13;goto B72d5cd;
case 0x72d5cf:c.instructions+=12;goto B72d5cf;
case 0x72d5d1:c.instructions+=11;goto B72d5d1;
case 0x72d5d3:c.instructions+=10;goto B72d5d3;
case 0x72d5d5:c.instructions+=9;goto B72d5d5;
case 0x72d5db:c.instructions+=8;goto B72d5db;
case 0x72d5dd:c.instructions+=7;goto B72d5dd;
case 0x72d5df:c.instructions+=6;goto B72d5df;
case 0x72d5e1:c.instructions+=5;goto B72d5e1;
case 0x72d5e3:c.instructions+=4;goto B72d5e3;
case 0x72d5e5:c.instructions+=3;goto B72d5e5;
case 0x72d5e7:c.instructions+=2;goto B72d5e7;
case 0x72d5e9:c.instructions+=1;goto B72d5e9;
case 0x72d5ea:goto L72d5ea;
case 0x72d5ee:c.instructions+=17;goto B72d5ee;
case 0x72d5f0:c.instructions+=16;goto B72d5f0;
case 0x72d5f2:c.instructions+=15;goto B72d5f2;
case 0x72d5f4:c.instructions+=14;goto B72d5f4;
case 0x72d5f7:c.instructions+=13;goto B72d5f7;
case 0x72d5f9:c.instructions+=12;goto B72d5f9;
case 0x72d5fc:c.instructions+=11;goto B72d5fc;
case 0x72d5fe:c.instructions+=10;goto B72d5fe;
case 0x72d601:c.instructions+=9;goto B72d601;
case 0x72d603:c.instructions+=8;goto B72d603;
case 0x72d606:c.instructions+=7;goto B72d606;
case 0x72d608:c.instructions+=6;goto B72d608;
case 0x72d60b:c.instructions+=5;goto B72d60b;
case 0x72d60d:c.instructions+=4;goto B72d60d;
case 0x72d610:c.instructions+=3;goto B72d610;
case 0x72d612:c.instructions+=2;goto B72d612;
case 0x72d615:c.instructions+=1;goto B72d615;
case 0x72d616:goto L72d616;
case 0x72d617:c.instructions+=3;goto B72d617;
case 0x72d61b:c.instructions+=2;goto B72d61b;
case 0x72d61d:c.instructions+=1;goto B72d61d;
case 0x72d61f:goto L72d61f;
case 0x72d623:c.instructions+=4;goto B72d623;
case 0x72d627:c.instructions+=3;goto B72d627;
case 0x72d62b:c.instructions+=2;goto B72d62b;
case 0x72d62d:c.instructions+=1;goto B72d62d;
case 0x72d62e:goto L72d62e;
case 0x72d631:c.instructions+=37;goto B72d631;
case 0x72d633:c.instructions+=36;goto B72d633;
case 0x72d636:c.instructions+=35;goto B72d636;
case 0x72d639:c.instructions+=34;goto B72d639;
case 0x72d63c:c.instructions+=33;goto B72d63c;
case 0x72d63f:c.instructions+=32;goto B72d63f;
case 0x72d641:c.instructions+=31;goto B72d641;
case 0x72d644:c.instructions+=30;goto B72d644;
case 0x72d647:c.instructions+=29;goto B72d647;
case 0x72d64a:c.instructions+=28;goto B72d64a;
case 0x72d64c:c.instructions+=27;goto B72d64c;
case 0x72d64e:c.instructions+=26;goto B72d64e;
case 0x72d651:c.instructions+=25;goto B72d651;
case 0x72d654:c.instructions+=24;goto B72d654;
case 0x72d656:c.instructions+=23;goto B72d656;
case 0x72d659:c.instructions+=22;goto B72d659;
case 0x72d65c:c.instructions+=21;goto B72d65c;
case 0x72d65e:c.instructions+=20;goto B72d65e;
case 0x72d661:c.instructions+=19;goto B72d661;
case 0x72d664:c.instructions+=18;goto B72d664;
case 0x72d667:c.instructions+=17;goto B72d667;
case 0x72d66a:c.instructions+=16;goto B72d66a;
case 0x72d66d:c.instructions+=15;goto B72d66d;
case 0x72d670:c.instructions+=14;goto B72d670;
case 0x72d673:c.instructions+=13;goto B72d673;
case 0x72d676:c.instructions+=12;goto B72d676;
case 0x72d679:c.instructions+=11;goto B72d679;
case 0x72d67c:c.instructions+=10;goto B72d67c;
case 0x72d67f:c.instructions+=9;goto B72d67f;
case 0x72d682:c.instructions+=8;goto B72d682;
case 0x72d685:c.instructions+=7;goto B72d685;
case 0x72d687:c.instructions+=6;goto B72d687;
case 0x72d68a:c.instructions+=5;goto B72d68a;
case 0x72d68c:c.instructions+=4;goto B72d68c;
case 0x72d68f:c.instructions+=3;goto B72d68f;
case 0x72d690:c.instructions+=2;goto B72d690;
case 0x72d692:c.instructions+=1;goto B72d692;
case 0x72d694:goto L72d694;
case 0x72d695:goto L72d695;
case 0x72d696:c.instructions+=1;goto B72d696;
case 0x72d697:goto L72d697;
case 0x72d698:c.instructions+=8;goto B72d698;
case 0x72d69a:c.instructions+=7;goto B72d69a;
case 0x72d69d:c.instructions+=6;goto B72d69d;
case 0x72d6a1:c.instructions+=5;goto B72d6a1;
case 0x72d6a2:c.instructions+=4;goto B72d6a2;
case 0x72d6a3:c.instructions+=3;goto B72d6a3;
case 0x72d6a6:c.instructions+=2;goto B72d6a6;
case 0x72d6a7:c.instructions+=1;goto B72d6a7;
case 0x72d6a9:goto L72d6a9;
case 0x72d6ad:c.instructions+=1;goto B72d6ad;
case 0x72d6af:goto L72d6af;
case 0x72d6b5:c.instructions+=4;goto B72d6b5;
case 0x72d6b8:c.instructions+=3;goto B72d6b8;
case 0x72d6ba:c.instructions+=2;goto B72d6ba;
case 0x72d6bd:c.instructions+=1;goto B72d6bd;
case 0x72d6bf:goto L72d6bf;
case 0x72d6c2:c.instructions+=1;goto B72d6c2;
case 0x72d6c4:goto L72d6c4;
case 0x72d6c6:goto L72d6c6;
case 0x72d6c9:c.instructions+=3;goto B72d6c9;
case 0x72d6ca:c.instructions+=2;goto B72d6ca;
case 0x72d6cb:c.instructions+=1;goto B72d6cb;
case 0x72d6d1:goto L72d6d1;
case 0x72d6d2:c.instructions+=1;goto B72d6d2;
case 0x72d6d4:goto L72d6d4;
case 0x72d6d5:c.instructions+=1;goto B72d6d5;
case 0x72d6db:goto L72d6db;
case 0x72d6de:c.instructions+=4;goto B72d6de;
case 0x72d6e5:c.instructions+=3;goto B72d6e5;
case 0x72d6e8:c.instructions+=2;goto B72d6e8;
case 0x72d6eb:c.instructions+=1;goto B72d6eb;
case 0x72d6ee:goto L72d6ee;
case 0x72d6f1:c.instructions+=9;goto B72d6f1;
case 0x72d6f2:c.instructions+=8;goto B72d6f2;
case 0x72d6f8:c.instructions+=7;goto B72d6f8;
case 0x72d6fb:c.instructions+=6;goto B72d6fb;
case 0x72d6fe:c.instructions+=5;goto B72d6fe;
case 0x72d701:c.instructions+=4;goto B72d701;
case 0x72d704:c.instructions+=3;goto B72d704;
case 0x72d70a:c.instructions+=2;goto B72d70a;
case 0x72d70d:c.instructions+=1;goto B72d70d;
case 0x72d712:goto L72d712;
case 0x72d715:c.instructions+=7;goto B72d715;
case 0x72d718:c.instructions+=6;goto B72d718;
case 0x72d71b:c.instructions+=5;goto B72d71b;
case 0x72d71e:c.instructions+=4;goto B72d71e;
case 0x72d721:c.instructions+=3;goto B72d721;
case 0x72d727:c.instructions+=2;goto B72d727;
case 0x72d72a:c.instructions+=1;goto B72d72a;
case 0x72d72f:goto L72d72f;
case 0x72d732:c.instructions+=7;goto B72d732;
case 0x72d735:c.instructions+=6;goto B72d735;
case 0x72d736:c.instructions+=5;goto B72d736;
case 0x72d738:c.instructions+=4;goto B72d738;
case 0x72d73a:c.instructions+=3;goto B72d73a;
case 0x72d73d:c.instructions+=2;goto B72d73d;
case 0x72d741:c.instructions+=1;goto B72d741;
case 0x72d743:goto L72d743;
case 0x72d745:goto L72d745;
case 0x72d748:c.instructions+=3;goto B72d748;
case 0x72d74b:c.instructions+=2;goto B72d74b;
case 0x72d752:c.instructions+=1;goto B72d752;
case 0x72d755:goto L72d755;
case 0x72d758:c.instructions+=6;goto B72d758;
case 0x72d759:c.instructions+=5;goto B72d759;
case 0x72d75f:c.instructions+=4;goto B72d75f;
case 0x72d762:c.instructions+=3;goto B72d762;
case 0x72d765:c.instructions+=2;goto B72d765;
case 0x72d768:c.instructions+=1;goto B72d768;
case 0x72d76d:goto L72d76d;
case 0x72d770:c.instructions+=6;goto B72d770;
case 0x72d773:c.instructions+=5;goto B72d773;
case 0x72d774:c.instructions+=4;goto B72d774;
case 0x72d776:c.instructions+=3;goto B72d776;
case 0x72d779:c.instructions+=2;goto B72d779;
case 0x72d77d:c.instructions+=1;goto B72d77d;
case 0x72d77f:goto L72d77f;
case 0x72d781:goto L72d781;
case 0x72d784:c.instructions+=3;goto B72d784;
case 0x72d787:c.instructions+=2;goto B72d787;
case 0x72d78e:c.instructions+=1;goto B72d78e;
case 0x72d791:goto L72d791;
case 0x72d794:c.instructions+=6;goto B72d794;
case 0x72d795:c.instructions+=5;goto B72d795;
case 0x72d79b:c.instructions+=4;goto B72d79b;
case 0x72d79e:c.instructions+=3;goto B72d79e;
case 0x72d7a1:c.instructions+=2;goto B72d7a1;
case 0x72d7a4:c.instructions+=1;goto B72d7a4;
case 0x72d7a9:goto L72d7a9;
case 0x72d7ac:c.instructions+=6;goto B72d7ac;
case 0x72d7af:c.instructions+=5;goto B72d7af;
case 0x72d7b0:c.instructions+=4;goto B72d7b0;
case 0x72d7b2:c.instructions+=3;goto B72d7b2;
case 0x72d7b5:c.instructions+=2;goto B72d7b5;
case 0x72d7b9:c.instructions+=1;goto B72d7b9;
case 0x72d7bb:goto L72d7bb;
case 0x72d7bf:c.instructions+=4;goto B72d7bf;
case 0x72d7c1:c.instructions+=3;goto B72d7c1;
case 0x72d7c4:c.instructions+=2;goto B72d7c4;
case 0x72d7c7:c.instructions+=1;goto B72d7c7;
case 0x72d7c9:goto L72d7c9;
case 0x72d7cd:c.instructions+=1;goto B72d7cd;
case 0x72d7cf:goto L72d7cf;
case 0x72d7d3:c.instructions+=1;goto B72d7d3;
case 0x72d7d5:goto L72d7d5;
case 0x72d7d9:c.instructions+=1;goto B72d7d9;
case 0x72d7db:goto L72d7db;
case 0x72d7de:c.instructions+=4;goto B72d7de;
case 0x72d7df:c.instructions+=3;goto B72d7df;
case 0x72d7e5:c.instructions+=2;goto B72d7e5;
case 0x72d7e8:c.instructions+=1;goto B72d7e8;
case 0x72d7ed:goto L72d7ed;
case 0x72d7f0:c.instructions+=13;goto B72d7f0;
case 0x72d7f6:c.instructions+=12;goto B72d7f6;
case 0x72d7f7:c.instructions+=11;goto B72d7f7;
case 0x72d7f9:c.instructions+=10;goto B72d7f9;
case 0x72d7fa:c.instructions+=9;goto B72d7fa;
case 0x72d800:c.instructions+=8;goto B72d800;
case 0x72d801:c.instructions+=7;goto B72d801;
case 0x72d803:c.instructions+=6;goto B72d803;
case 0x72d805:c.instructions+=5;goto B72d805;
case 0x72d807:c.instructions+=4;goto B72d807;
case 0x72d80a:c.instructions+=3;goto B72d80a;
case 0x72d80c:c.instructions+=2;goto B72d80c;
case 0x72d80e:c.instructions+=1;goto B72d80e;
case 0x72d810:goto L72d810;
case 0x72d813:c.instructions+=1;goto B72d813;
case 0x72d815:goto L72d815;
case 0x72d818:c.instructions+=2;goto B72d818;
case 0x72d81b:c.instructions+=1;goto B72d81b;
case 0x72d81d:goto L72d81d;
case 0x72d820:c.instructions+=4;goto B72d820;
case 0x72d821:c.instructions+=3;goto B72d821;
case 0x72d827:c.instructions+=2;goto B72d827;
case 0x72d82a:c.instructions+=1;goto B72d82a;
case 0x72d82f:goto L72d82f;
case 0x72d835:c.instructions+=4;goto B72d835;
case 0x72d836:c.instructions+=3;goto B72d836;
case 0x72d83c:c.instructions+=2;goto B72d83c;
case 0x72d83e:c.instructions+=1;goto B72d83e;
case 0x72d840:goto L72d840;
case 0x72d843:goto L72d843;
case 0x72d846:goto L72d846;
case 0x72d849:c.instructions+=3;goto B72d849;
case 0x72d84c:c.instructions+=2;goto B72d84c;
case 0x72d850:c.instructions+=1;goto B72d850;
case 0x72d856:goto L72d856;
case 0x72d85a:c.instructions+=1;goto B72d85a;
case 0x72d85c:goto L72d85c;
case 0x72d862:c.instructions+=7;goto B72d862;
case 0x72d865:c.instructions+=6;goto B72d865;
case 0x72d867:c.instructions+=5;goto B72d867;
case 0x72d86a:c.instructions+=4;goto B72d86a;
case 0x72d86d:c.instructions+=3;goto B72d86d;
case 0x72d86f:c.instructions+=2;goto B72d86f;
case 0x72d872:c.instructions+=1;goto B72d872;
case 0x72d874:goto L72d874;
case 0x72d877:c.instructions+=6;goto B72d877;
case 0x72d879:c.instructions+=5;goto B72d879;
case 0x72d87c:c.instructions+=4;goto B72d87c;
case 0x72d882:c.instructions+=3;goto B72d882;
case 0x72d884:c.instructions+=2;goto B72d884;
case 0x72d887:c.instructions+=1;goto B72d887;
case 0x72d889:goto L72d889;
case 0x72d88f:goto L72d88f;
case 0x72d891:c.instructions+=7;goto B72d891;
case 0x72d893:c.instructions+=6;goto B72d893;
case 0x72d894:c.instructions+=5;goto B72d894;
case 0x72d896:c.instructions+=4;goto B72d896;
case 0x72d897:c.instructions+=3;goto B72d897;
case 0x72d898:c.instructions+=2;goto B72d898;
case 0x72d89a:c.instructions+=1;goto B72d89a;
case 0x72d89b:goto L72d89b;
case 0x72d89d:c.instructions+=5;goto B72d89d;
case 0x72d89f:c.instructions+=4;goto B72d89f;
case 0x72d8a1:c.instructions+=3;goto B72d8a1;
case 0x72d8a4:c.instructions+=2;goto B72d8a4;
case 0x72d8a5:c.instructions+=1;goto B72d8a5;
case 0x72d8a7:goto L72d8a7;
case 0x72d8a9:c.instructions+=2;goto B72d8a9;
case 0x72d8aa:c.instructions+=1;goto B72d8aa;
case 0x72d8b0:goto L72d8b0;
case 0x72d8b1:c.instructions+=14;goto B72d8b1;
case 0x72d8b3:c.instructions+=13;goto B72d8b3;
case 0x72d8b4:c.instructions+=12;goto B72d8b4;
case 0x72d8b5:c.instructions+=11;goto B72d8b5;
case 0x72d8b6:c.instructions+=10;goto B72d8b6;
case 0x72d8b7:c.instructions+=9;goto B72d8b7;
case 0x72d8ba:c.instructions+=8;goto B72d8ba;
case 0x72d8bd:c.instructions+=7;goto B72d8bd;
case 0x72d8c0:c.instructions+=6;goto B72d8c0;
case 0x72d8c3:c.instructions+=5;goto B72d8c3;
case 0x72d8c6:c.instructions+=4;goto B72d8c6;
case 0x72d8c8:c.instructions+=3;goto B72d8c8;
case 0x72d8ca:c.instructions+=2;goto B72d8ca;
case 0x72d8cc:c.instructions+=1;goto B72d8cc;
case 0x72d8ce:goto L72d8ce;
case 0x72d8d1:c.instructions+=6;goto B72d8d1;
case 0x72d8d4:c.instructions+=5;goto B72d8d4;
case 0x72d8d7:c.instructions+=4;goto B72d8d7;
case 0x72d8d9:c.instructions+=3;goto B72d8d9;
case 0x72d8dc:c.instructions+=2;goto B72d8dc;
case 0x72d8df:c.instructions+=1;goto B72d8df;
case 0x72d8e1:goto L72d8e1;
case 0x72d8e3:c.instructions+=6;goto B72d8e3;
case 0x72d8e4:c.instructions+=5;goto B72d8e4;
case 0x72d8e5:c.instructions+=4;goto B72d8e5;
case 0x72d8e6:c.instructions+=3;goto B72d8e6;
case 0x72d8e7:c.instructions+=2;goto B72d8e7;
case 0x72d8e8:c.instructions+=1;goto B72d8e8;
case 0x72d8e9:goto L72d8e9;
case 0x72d8ea:c.instructions+=8;goto B72d8ea;
case 0x72d8eb:c.instructions+=7;goto B72d8eb;
case 0x72d8ef:c.instructions+=6;goto B72d8ef;
case 0x72d8f2:c.instructions+=5;goto B72d8f2;
case 0x72d8f8:c.instructions+=4;goto B72d8f8;
case 0x72d8f9:c.instructions+=3;goto B72d8f9;
case 0x72d8fd:c.instructions+=2;goto B72d8fd;
case 0x72d900:c.instructions+=1;goto B72d900;
case 0x72d905:goto L72d905;
case 0x72d909:c.instructions+=4;goto B72d909;
case 0x72d90b:c.instructions+=3;goto B72d90b;
case 0x72d90d:c.instructions+=2;goto B72d90d;
case 0x72d90e:c.instructions+=1;goto B72d90e;
case 0x72d911:goto L72d911;
case 0x72d915:c.instructions+=10;goto B72d915;
case 0x72d919:c.instructions+=9;goto B72d919;
case 0x72d91c:c.instructions+=8;goto B72d91c;
case 0x72d91e:c.instructions+=7;goto B72d91e;
case 0x72d921:c.instructions+=6;goto B72d921;
case 0x72d922:c.instructions+=5;goto B72d922;
case 0x72d925:c.instructions+=4;goto B72d925;
case 0x72d926:c.instructions+=3;goto B72d926;
case 0x72d929:c.instructions+=2;goto B72d929;
case 0x72d92d:c.instructions+=1;goto B72d92d;
case 0x72d932:goto L72d932;
case 0x72d935:c.instructions+=4;goto B72d935;
case 0x72d936:c.instructions+=3;goto B72d936;
case 0x72d937:c.instructions+=2;goto B72d937;
case 0x72d938:c.instructions+=1;goto B72d938;
case 0x72d939:goto L72d939;
case 0x72d93d:c.instructions+=6;goto B72d93d;
case 0x72d941:c.instructions+=5;goto B72d941;
case 0x72d945:c.instructions+=4;goto B72d945;
case 0x72d948:c.instructions+=3;goto B72d948;
case 0x72d94b:c.instructions+=2;goto B72d94b;
case 0x72d94e:c.instructions+=1;goto B72d94e;
case 0x72d951:goto L72d951;
case 0x72d953:c.instructions+=2;goto B72d953;
case 0x72d958:c.instructions+=1;goto B72d958;
case 0x72d95d:goto L72d95d;
case 0x72d961:c.instructions+=8;goto B72d961;
case 0x72d965:c.instructions+=7;goto B72d965;
case 0x72d96a:c.instructions+=6;goto B72d96a;
case 0x72d96c:c.instructions+=5;goto B72d96c;
case 0x72d96e:c.instructions+=4;goto B72d96e;
case 0x72d970:c.instructions+=3;goto B72d970;
case 0x72d972:c.instructions+=2;goto B72d972;
case 0x72d975:c.instructions+=1;goto B72d975;
case 0x72d977:goto L72d977;
case 0x72d979:c.instructions+=2;goto B72d979;
case 0x72d97a:c.instructions+=1;goto B72d97a;
case 0x72d97b:goto L72d97b;
case 0x72d97e:c.instructions+=1;goto B72d97e;
case 0x72d982:goto L72d982;
case 0x72d986:c.instructions+=2;goto B72d986;
case 0x72d98a:c.instructions+=1;goto B72d98a;
case 0x72d98c:goto L72d98c;
case 0x72d990:c.instructions+=1;goto B72d990;
case 0x72d992:goto L72d992;
case 0x72d999:c.instructions+=2;goto B72d999;
case 0x72d99b:c.instructions+=1;goto B72d99b;
case 0x72d99d:goto L72d99d;
case 0x72d99f:c.instructions+=2;goto B72d99f;
case 0x72d9a0:c.instructions+=1;goto B72d9a0;
case 0x72d9a1:goto L72d9a1;
case 0x72d9a4:c.instructions+=1;goto B72d9a4;
case 0x72d9a8:goto L72d9a8;
case 0x72d9ac:c.instructions+=2;goto B72d9ac;
case 0x72d9af:c.instructions+=1;goto B72d9af;
case 0x72d9b1:goto L72d9b1;
case 0x72d9b3:goto L72d9b3;
case 0x72d9b8:goto L72d9b8;
case 0x72d9b9:goto L72d9b9;
case 0x72d9bb:c.instructions+=4;goto B72d9bb;
case 0x72d9bf:c.instructions+=3;goto B72d9bf;
case 0x72d9c5:c.instructions+=2;goto B72d9c5;
case 0x72d9c9:c.instructions+=1;goto B72d9c9;
case 0x72d9ca:goto L72d9ca;
case 0x72d9d1:c.instructions+=6;goto B72d9d1;
case 0x72d9d2:c.instructions+=5;goto B72d9d2;
case 0x72d9d4:c.instructions+=4;goto B72d9d4;
case 0x72d9d8:c.instructions+=3;goto B72d9d8;
case 0x72d9d9:c.instructions+=2;goto B72d9d9;
case 0x72d9dc:c.instructions+=1;goto B72d9dc;
case 0x72d9de:goto L72d9de;
case 0x72d9e1:c.instructions+=2;goto B72d9e1;
case 0x72d9e2:c.instructions+=1;goto B72d9e2;
case 0x72d9e8:goto L72d9e8;
case 0x72d9ea:c.instructions+=5;goto B72d9ea;
case 0x72d9ee:c.instructions+=4;goto B72d9ee;
case 0x72d9ef:c.instructions+=3;goto B72d9ef;
case 0x72d9f2:c.instructions+=2;goto B72d9f2;
case 0x72d9f5:c.instructions+=1;goto B72d9f5;
case 0x72d9f7:goto L72d9f7;
case 0x72d9fa:c.instructions+=2;goto B72d9fa;
case 0x72d9fb:c.instructions+=1;goto B72d9fb;
case 0x72da01:goto L72da01;
case 0x72da03:c.instructions+=4;goto B72da03;
case 0x72da07:c.instructions+=3;goto B72da07;
case 0x72da08:c.instructions+=2;goto B72da08;
case 0x72da0b:c.instructions+=1;goto B72da0b;
case 0x72da0e:goto L72da0e;
case 0x72da10:c.instructions+=3;goto B72da10;
case 0x72da13:c.instructions+=2;goto B72da13;
case 0x72da16:c.instructions+=1;goto B72da16;
case 0x72da18:goto L72da18;
case 0x72da1a:goto L72da1a;
case 0x72da1c:c.instructions+=1;goto B72da1c;
case 0x72da1f:goto L72da1f;
case 0x72da21:goto L72da21;
case 0x72da22:c.instructions+=2;goto B72da22;
case 0x72da23:c.instructions+=1;goto B72da23;
case 0x72da24:goto L72da24;
case 0x72da25:c.instructions+=9;goto B72da25;
case 0x72da27:c.instructions+=8;goto B72da27;
case 0x72da28:c.instructions+=7;goto B72da28;
case 0x72da29:c.instructions+=6;goto B72da29;
case 0x72da2c:c.instructions+=5;goto B72da2c;
case 0x72da31:c.instructions+=4;goto B72da31;
case 0x72da33:c.instructions+=3;goto B72da33;
case 0x72da35:c.instructions+=2;goto B72da35;
case 0x72da37:c.instructions+=1;goto B72da37;
case 0x72da39:goto L72da39;
case 0x72da3c:c.instructions+=1;goto B72da3c;
case 0x72da41:goto L72da41;
case 0x72da42:c.instructions+=43;goto B72da42;
case 0x72da44:c.instructions+=42;goto B72da44;
case 0x72da47:c.instructions+=41;goto B72da47;
case 0x72da4a:c.instructions+=40;goto B72da4a;
case 0x72da4c:c.instructions+=39;goto B72da4c;
case 0x72da4e:c.instructions+=38;goto B72da4e;
case 0x72da50:c.instructions+=37;goto B72da50;
case 0x72da53:c.instructions+=36;goto B72da53;
case 0x72da56:c.instructions+=35;goto B72da56;
case 0x72da59:c.instructions+=34;goto B72da59;
case 0x72da5c:c.instructions+=33;goto B72da5c;
case 0x72da5e:c.instructions+=32;goto B72da5e;
case 0x72da61:c.instructions+=31;goto B72da61;
case 0x72da64:c.instructions+=30;goto B72da64;
case 0x72da67:c.instructions+=29;goto B72da67;
case 0x72da6a:c.instructions+=28;goto B72da6a;
case 0x72da6c:c.instructions+=27;goto B72da6c;
case 0x72da6f:c.instructions+=26;goto B72da6f;
case 0x72da72:c.instructions+=25;goto B72da72;
case 0x72da75:c.instructions+=24;goto B72da75;
case 0x72da78:c.instructions+=23;goto B72da78;
case 0x72da7b:c.instructions+=22;goto B72da7b;
case 0x72da7d:c.instructions+=21;goto B72da7d;
case 0x72da80:c.instructions+=20;goto B72da80;
case 0x72da83:c.instructions+=19;goto B72da83;
case 0x72da85:c.instructions+=18;goto B72da85;
case 0x72da88:c.instructions+=17;goto B72da88;
case 0x72da8b:c.instructions+=16;goto B72da8b;
case 0x72da8e:c.instructions+=15;goto B72da8e;
case 0x72da91:c.instructions+=14;goto B72da91;
case 0x72da93:c.instructions+=13;goto B72da93;
case 0x72da95:c.instructions+=12;goto B72da95;
case 0x72da97:c.instructions+=11;goto B72da97;
case 0x72da9a:c.instructions+=10;goto B72da9a;
case 0x72da9d:c.instructions+=9;goto B72da9d;
case 0x72daa0:c.instructions+=8;goto B72daa0;
case 0x72daa2:c.instructions+=7;goto B72daa2;
case 0x72daa5:c.instructions+=6;goto B72daa5;
case 0x72daa8:c.instructions+=5;goto B72daa8;
case 0x72daae:c.instructions+=4;goto B72daae;
case 0x72dab1:c.instructions+=3;goto B72dab1;
case 0x72dab4:c.instructions+=2;goto B72dab4;
case 0x72dab7:c.instructions+=1;goto B72dab7;
case 0x72dab9:goto L72dab9;
case 0x72dabb:c.instructions+=4;goto B72dabb;
case 0x72dabe:c.instructions+=3;goto B72dabe;
case 0x72dac1:c.instructions+=2;goto B72dac1;
case 0x72dac5:c.instructions+=1;goto B72dac5;
case 0x72dac7:goto L72dac7;
case 0x72dacb:c.instructions+=1;goto B72dacb;
case 0x72dacf:goto L72dacf;
case 0x72dad1:c.instructions+=4;goto B72dad1;
case 0x72dad4:c.instructions+=3;goto B72dad4;
case 0x72dad6:c.instructions+=2;goto B72dad6;
case 0x72dada:c.instructions+=1;goto B72dada;
case 0x72dadc:goto L72dadc;
case 0x72dade:c.instructions+=2;goto B72dade;
case 0x72dae1:c.instructions+=1;goto B72dae1;
case 0x72dae3:goto L72dae3;
case 0x72dae6:c.instructions+=11;goto B72dae6;
case 0x72dae9:c.instructions+=10;goto B72dae9;
case 0x72daeb:c.instructions+=9;goto B72daeb;
case 0x72daed:c.instructions+=8;goto B72daed;
case 0x72daf0:c.instructions+=7;goto B72daf0;
case 0x72daf4:c.instructions+=6;goto B72daf4;
case 0x72daf7:c.instructions+=5;goto B72daf7;
case 0x72dafa:c.instructions+=4;goto B72dafa;
case 0x72dafc:c.instructions+=3;goto B72dafc;
case 0x72daff:c.instructions+=2;goto B72daff;
case 0x72db02:c.instructions+=1;goto B72db02;
case 0x72db05:goto L72db05;
case 0x72db09:c.instructions+=9;goto B72db09;
case 0x72db0c:c.instructions+=8;goto B72db0c;
case 0x72db0e:c.instructions+=7;goto B72db0e;
case 0x72db10:c.instructions+=6;goto B72db10;
case 0x72db13:c.instructions+=5;goto B72db13;
case 0x72db17:c.instructions+=4;goto B72db17;
case 0x72db1f:c.instructions+=3;goto B72db1f;
case 0x72db22:c.instructions+=2;goto B72db22;
case 0x72db25:c.instructions+=1;goto B72db25;
case 0x72db27:goto L72db27;
case 0x72db2a:c.instructions+=1;goto B72db2a;
case 0x72db2c:goto L72db2c;
case 0x72db2f:c.instructions+=11;goto B72db2f;
case 0x72db33:c.instructions+=10;goto B72db33;
case 0x72db36:c.instructions+=9;goto B72db36;
case 0x72db39:c.instructions+=8;goto B72db39;
case 0x72db3b:c.instructions+=7;goto B72db3b;
case 0x72db3e:c.instructions+=6;goto B72db3e;
case 0x72db41:c.instructions+=5;goto B72db41;
case 0x72db43:c.instructions+=4;goto B72db43;
case 0x72db47:c.instructions+=3;goto B72db47;
case 0x72db4f:c.instructions+=2;goto B72db4f;
case 0x72db52:c.instructions+=1;goto B72db52;
case 0x72db54:goto L72db54;
case 0x72db5a:c.instructions+=7;goto B72db5a;
case 0x72db5b:c.instructions+=6;goto B72db5b;
case 0x72db5e:c.instructions+=5;goto B72db5e;
case 0x72db62:c.instructions+=4;goto B72db62;
case 0x72db64:c.instructions+=3;goto B72db64;
case 0x72db6b:c.instructions+=2;goto B72db6b;
case 0x72db6e:c.instructions+=1;goto B72db6e;
case 0x72db70:goto L72db70;
case 0x72db76:c.instructions+=5;goto B72db76;
case 0x72db77:c.instructions+=4;goto B72db77;
case 0x72db7a:c.instructions+=3;goto B72db7a;
case 0x72db7e:c.instructions+=2;goto B72db7e;
case 0x72db81:c.instructions+=1;goto B72db81;
case 0x72db83:goto L72db83;
case 0x72db85:c.instructions+=1;goto B72db85;
case 0x72db87:goto L72db87;
case 0x72db89:c.instructions+=1;goto B72db89;
case 0x72db8c:goto L72db8c;
case 0x72db90:c.instructions+=1;goto B72db90;
case 0x72db92:goto L72db92;
case 0x72db95:goto L72db95;
case 0x72db99:goto L72db99;
case 0x72db9b:goto L72db9b;
case 0x72db9c:goto L72db9c;
case 0x72db9d:c.instructions+=2;goto B72db9d;
case 0x72db9e:c.instructions+=1;goto B72db9e;
case 0x72dba1:goto L72dba1;
case 0x72dba5:c.instructions+=1;goto B72dba5;
case 0x72dba7:goto L72dba7;
case 0x72dbaa:c.instructions+=1;goto B72dbaa;
case 0x72dbac:goto L72dbac;
case 0x72dbaf:c.instructions+=10;goto B72dbaf;
case 0x72dbb3:c.instructions+=9;goto B72dbb3;
case 0x72dbb5:c.instructions+=8;goto B72dbb5;
case 0x72dbb6:c.instructions+=7;goto B72dbb6;
case 0x72dbba:c.instructions+=6;goto B72dbba;
case 0x72dbbe:c.instructions+=5;goto B72dbbe;
case 0x72dbc1:c.instructions+=4;goto B72dbc1;
case 0x72dbc3:c.instructions+=3;goto B72dbc3;
case 0x72dbc6:c.instructions+=2;goto B72dbc6;
case 0x72dbc8:c.instructions+=1;goto B72dbc8;
case 0x72dbc9:goto L72dbc9;
case 0x72dbcb:c.instructions+=2;goto B72dbcb;
case 0x72dbcc:c.instructions+=1;goto B72dbcc;
case 0x72dbcf:goto L72dbcf;
case 0x72dbd1:c.instructions+=5;goto B72dbd1;
case 0x72dbd4:c.instructions+=4;goto B72dbd4;
case 0x72dbd7:c.instructions+=3;goto B72dbd7;
case 0x72dbd8:c.instructions+=2;goto B72dbd8;
case 0x72dbda:c.instructions+=1;goto B72dbda;
case 0x72dbdb:goto L72dbdb;
case 0x72dbde:c.instructions+=3;goto B72dbde;
case 0x72dbe1:c.instructions+=2;goto B72dbe1;
case 0x72dbe5:c.instructions+=1;goto B72dbe5;
case 0x72dbe7:goto L72dbe7;
case 0x72dbea:c.instructions+=2;goto B72dbea;
case 0x72dbed:c.instructions+=1;goto B72dbed;
case 0x72dbef:goto L72dbef;
case 0x72dbf2:c.instructions+=4;goto B72dbf2;
case 0x72dbf5:c.instructions+=3;goto B72dbf5;
case 0x72dbf8:c.instructions+=2;goto B72dbf8;
case 0x72dbfb:c.instructions+=1;goto B72dbfb;
case 0x72dbfd:goto L72dbfd;
case 0x72dc01:c.instructions+=1;goto B72dc01;
case 0x72dc03:goto L72dc03;
case 0x72dc05:goto L72dc05;
case 0x72dc08:goto L72dc08;
case 0x72dc0c:c.instructions+=3;goto B72dc0c;
case 0x72dc10:c.instructions+=2;goto B72dc10;
case 0x72dc12:c.instructions+=1;goto B72dc12;
case 0x72dc13:goto L72dc13;
case 0x72dc16:c.instructions+=4;goto B72dc16;
case 0x72dc1a:c.instructions+=3;goto B72dc1a;
case 0x72dc1e:c.instructions+=2;goto B72dc1e;
case 0x72dc21:c.instructions+=1;goto B72dc21;
case 0x72dc22:goto L72dc22;
case 0x72dc24:c.instructions+=2;goto B72dc24;
case 0x72dc27:c.instructions+=1;goto B72dc27;
case 0x72dc29:goto L72dc29;
case 0x72dc2c:c.instructions+=3;goto B72dc2c;
case 0x72dc2f:c.instructions+=2;goto B72dc2f;
case 0x72dc32:c.instructions+=1;goto B72dc32;
case 0x72dc38:goto L72dc38;
case 0x72dc39:goto L72dc39;
case 0x72dc3b:c.instructions+=1;goto B72dc3b;
case 0x72dc3c:goto L72dc3c;
case 0x72dc40:c.instructions+=2;goto B72dc40;
case 0x72dc46:c.instructions+=1;goto B72dc46;
case 0x72dc48:goto L72dc48;
case 0x72dc4d:goto L72dc4d;
case 0x72dc4e:goto L72dc4e;
case 0x72dc4f:c.instructions+=2;goto B72dc4f;
case 0x72dc51:c.instructions+=1;goto B72dc51;
case 0x72dc56:goto L72dc56;
case 0x72dc5b:c.instructions+=1;goto B72dc5b;
case 0x72dc5d:goto L72dc5d;
case 0x72dc5e:c.instructions+=1;goto B72dc5e;
case 0x72dc63:goto L72dc63;
case 0x72dc64:goto L72dc64;
case 0x72dc66:c.instructions+=2;goto B72dc66;
case 0x72dc67:c.instructions+=1;goto B72dc67;
case 0x72dc6a:goto L72dc6a;
case 0x72dc6b:c.instructions+=3;goto B72dc6b;
case 0x72dc6d:c.instructions+=2;goto B72dc6d;
case 0x72dc71:c.instructions+=1;goto B72dc71;
case 0x72dc73:goto L72dc73;
case 0x72dc75:c.instructions+=1;goto B72dc75;
case 0x72dc78:goto L72dc78;
case 0x72dc7c:c.instructions+=5;goto B72dc7c;
case 0x72dc7e:c.instructions+=4;goto B72dc7e;
case 0x72dc82:c.instructions+=3;goto B72dc82;
case 0x72dc85:c.instructions+=2;goto B72dc85;
case 0x72dc88:c.instructions+=1;goto B72dc88;
case 0x72dc8a:goto L72dc8a;
case 0x72dc8c:c.instructions+=1;goto B72dc8c;
case 0x72dc91:goto L72dc91;
case 0x72dc93:c.instructions+=1;goto B72dc93;
case 0x72dc95:goto L72dc95;
case 0x72dc98:c.instructions+=1;goto B72dc98;
case 0x72dc9a:goto L72dc9a;
case 0x72dc9c:c.instructions+=1;goto B72dc9c;
case 0x72dca1:goto L72dca1;
case 0x72dca3:c.instructions+=2;goto B72dca3;
case 0x72dca5:c.instructions+=1;goto B72dca5;
case 0x72dca8:goto L72dca8;
case 0x72dcab:c.instructions+=4;goto B72dcab;
case 0x72dcaf:c.instructions+=3;goto B72dcaf;
case 0x72dcb3:c.instructions+=2;goto B72dcb3;
case 0x72dcb6:c.instructions+=1;goto B72dcb6;
case 0x72dcb8:goto L72dcb8;
case 0x72dcb9:c.instructions+=1;goto B72dcb9;
case 0x72dcbc:goto L72dcbc;
case 0x72dcbd:c.instructions+=2;goto B72dcbd;
case 0x72dcbf:c.instructions+=1;goto B72dcbf;
case 0x72dcc4:goto L72dcc4;
case 0x72dccb:c.instructions+=4;goto B72dccb;
case 0x72dcd1:c.instructions+=3;goto B72dcd1;
case 0x72dcd3:c.instructions+=2;goto B72dcd3;
case 0x72dcd4:c.instructions+=1;goto B72dcd4;
case 0x72dcd5:goto L72dcd5;
case 0x72dcd6:c.instructions+=5;goto B72dcd6;
case 0x72dcd8:c.instructions+=4;goto B72dcd8;
case 0x72dcde:c.instructions+=3;goto B72dcde;
case 0x72dce0:c.instructions+=2;goto B72dce0;
case 0x72dce6:c.instructions+=1;goto B72dce6;
case 0x72dce8:goto L72dce8;
case 0x72dce9:c.instructions+=1;goto B72dce9;
case 0x72dcef:goto L72dcef;
case 0x72dcf0:goto L72dcf0;
case 0x72dcf2:c.instructions+=2;goto B72dcf2;
case 0x72dcf3:c.instructions+=1;goto B72dcf3;
case 0x72dcf8:goto L72dcf8;
case 0x72dcfa:c.instructions+=2;goto B72dcfa;
case 0x72dcfe:c.instructions+=1;goto B72dcfe;
case 0x72dd00:goto L72dd00;
case 0x72dd02:c.instructions+=8;goto B72dd02;
case 0x72dd03:c.instructions+=7;goto B72dd03;
case 0x72dd05:c.instructions+=6;goto B72dd05;
case 0x72dd06:c.instructions+=5;goto B72dd06;
case 0x72dd08:c.instructions+=4;goto B72dd08;
case 0x72dd0b:c.instructions+=3;goto B72dd0b;
case 0x72dd0d:c.instructions+=2;goto B72dd0d;
case 0x72dd10:c.instructions+=1;goto B72dd10;
case 0x72dd13:goto L72dd13;
case 0x72dd16:c.instructions+=1;goto B72dd16;
case 0x72dd1c:goto L72dd1c;
case 0x72dd1e:c.instructions+=7;goto B72dd1e;
case 0x72dd1f:c.instructions+=6;goto B72dd1f;
case 0x72dd22:c.instructions+=5;goto B72dd22;
case 0x72dd24:c.instructions+=4;goto B72dd24;
case 0x72dd26:c.instructions+=3;goto B72dd26;
case 0x72dd29:c.instructions+=2;goto B72dd29;
case 0x72dd2b:c.instructions+=1;goto B72dd2b;
case 0x72dd2c:goto L72dd2c;
case 0x72dd2e:c.instructions+=50;goto B72dd2e;
case 0x72dd30:c.instructions+=49;goto B72dd30;
case 0x72dd32:c.instructions+=48;goto B72dd32;
case 0x72dd35:c.instructions+=47;goto B72dd35;
case 0x72dd36:c.instructions+=46;goto B72dd36;
case 0x72dd38:c.instructions+=45;goto B72dd38;
case 0x72dd3b:c.instructions+=44;goto B72dd3b;
case 0x72dd3e:c.instructions+=43;goto B72dd3e;
case 0x72dd40:c.instructions+=42;goto B72dd40;
case 0x72dd43:c.instructions+=41;goto B72dd43;
case 0x72dd46:c.instructions+=40;goto B72dd46;
case 0x72dd48:c.instructions+=39;goto B72dd48;
case 0x72dd4b:c.instructions+=38;goto B72dd4b;
case 0x72dd4e:c.instructions+=37;goto B72dd4e;
case 0x72dd50:c.instructions+=36;goto B72dd50;
case 0x72dd53:c.instructions+=35;goto B72dd53;
case 0x72dd56:c.instructions+=34;goto B72dd56;
case 0x72dd58:c.instructions+=33;goto B72dd58;
case 0x72dd5b:c.instructions+=32;goto B72dd5b;
case 0x72dd5e:c.instructions+=31;goto B72dd5e;
case 0x72dd60:c.instructions+=30;goto B72dd60;
case 0x72dd63:c.instructions+=29;goto B72dd63;
case 0x72dd66:c.instructions+=28;goto B72dd66;
case 0x72dd68:c.instructions+=27;goto B72dd68;
case 0x72dd6b:c.instructions+=26;goto B72dd6b;
case 0x72dd6e:c.instructions+=25;goto B72dd6e;
case 0x72dd70:c.instructions+=24;goto B72dd70;
case 0x72dd73:c.instructions+=23;goto B72dd73;
case 0x72dd76:c.instructions+=22;goto B72dd76;
case 0x72dd78:c.instructions+=21;goto B72dd78;
case 0x72dd7b:c.instructions+=20;goto B72dd7b;
case 0x72dd7e:c.instructions+=19;goto B72dd7e;
case 0x72dd80:c.instructions+=18;goto B72dd80;
case 0x72dd83:c.instructions+=17;goto B72dd83;
case 0x72dd86:c.instructions+=16;goto B72dd86;
case 0x72dd88:c.instructions+=15;goto B72dd88;
case 0x72dd8b:c.instructions+=14;goto B72dd8b;
case 0x72dd8e:c.instructions+=13;goto B72dd8e;
case 0x72dd90:c.instructions+=12;goto B72dd90;
case 0x72dd93:c.instructions+=11;goto B72dd93;
case 0x72dd96:c.instructions+=10;goto B72dd96;
case 0x72dd98:c.instructions+=9;goto B72dd98;
case 0x72dd9b:c.instructions+=8;goto B72dd9b;
case 0x72dd9e:c.instructions+=7;goto B72dd9e;
case 0x72dda0:c.instructions+=6;goto B72dda0;
case 0x72dda3:c.instructions+=5;goto B72dda3;
case 0x72dda6:c.instructions+=4;goto B72dda6;
case 0x72dda8:c.instructions+=3;goto B72dda8;
case 0x72ddab:c.instructions+=2;goto B72ddab;
case 0x72ddae:c.instructions+=1;goto B72ddae;
case 0x72ddb4:goto L72ddb4;
case 0x72ddb7:c.instructions+=1;goto B72ddb7;
case 0x72ddb9:goto L72ddb9;
case 0x72ddbb:goto L72ddbb;
case 0x72ddbd:c.instructions+=8;goto B72ddbd;
case 0x72ddbf:c.instructions+=7;goto B72ddbf;
case 0x72ddc1:c.instructions+=6;goto B72ddc1;
case 0x72ddc4:c.instructions+=5;goto B72ddc4;
case 0x72ddc5:c.instructions+=4;goto B72ddc5;
case 0x72ddc7:c.instructions+=3;goto B72ddc7;
case 0x72ddca:c.instructions+=2;goto B72ddca;
case 0x72ddcd:c.instructions+=1;goto B72ddcd;
case 0x72ddcf:goto L72ddcf;
case 0x72ddd1:c.instructions+=1;goto B72ddd1;
case 0x72ddd2:goto L72ddd2;
case 0x72ddd3:c.instructions+=19;goto B72ddd3;
case 0x72ddd5:c.instructions+=18;goto B72ddd5;
case 0x72ddd8:c.instructions+=17;goto B72ddd8;
case 0x72dddb:c.instructions+=16;goto B72dddb;
case 0x72ddde:c.instructions+=15;goto B72ddde;
case 0x72dde1:c.instructions+=14;goto B72dde1;
case 0x72dde4:c.instructions+=13;goto B72dde4;
case 0x72dde5:c.instructions+=12;goto B72dde5;
case 0x72dde6:c.instructions+=11;goto B72dde6;
case 0x72dde9:c.instructions+=10;goto B72dde9;
case 0x72ddea:c.instructions+=9;goto B72ddea;
case 0x72ddee:c.instructions+=8;goto B72ddee;
case 0x72ddf5:c.instructions+=7;goto B72ddf5;
case 0x72ddf8:c.instructions+=6;goto B72ddf8;
case 0x72ddfb:c.instructions+=5;goto B72ddfb;
case 0x72ddfe:c.instructions+=4;goto B72ddfe;
case 0x72de04:c.instructions+=3;goto B72de04;
case 0x72de08:c.instructions+=2;goto B72de08;
case 0x72de0b:c.instructions+=1;goto B72de0b;
case 0x72de0d:goto L72de0d;
case 0x72de11:c.instructions+=1;goto B72de11;
case 0x72de13:goto L72de13;
case 0x72de17:c.instructions+=1;goto B72de17;
case 0x72de19:goto L72de19;
case 0x72de1c:c.instructions+=4;goto B72de1c;
case 0x72de1e:c.instructions+=3;goto B72de1e;
case 0x72de21:c.instructions+=2;goto B72de21;
case 0x72de24:c.instructions+=1;goto B72de24;
case 0x72de26:goto L72de26;
case 0x72de28:c.instructions+=1;goto B72de28;
case 0x72de2a:goto L72de2a;
case 0x72de2c:c.instructions+=1;goto B72de2c;
case 0x72de2d:goto L72de2d;
case 0x72de31:c.instructions+=2;goto B72de31;
case 0x72de33:c.instructions+=1;goto B72de33;
case 0x72de35:goto L72de35;
case 0x72de37:c.instructions+=4;goto B72de37;
case 0x72de3a:c.instructions+=3;goto B72de3a;
case 0x72de3d:c.instructions+=2;goto B72de3d;
case 0x72de40:c.instructions+=1;goto B72de40;
case 0x72de42:goto L72de42;
case 0x72de45:goto L72de45;
case 0x72de48:c.instructions+=7;goto B72de48;
case 0x72de4c:c.instructions+=6;goto B72de4c;
case 0x72de4e:c.instructions+=5;goto B72de4e;
case 0x72de52:c.instructions+=4;goto B72de52;
case 0x72de55:c.instructions+=3;goto B72de55;
case 0x72de58:c.instructions+=2;goto B72de58;
case 0x72de5c:c.instructions+=1;goto B72de5c;
case 0x72de5e:goto L72de5e;
case 0x72de61:c.instructions+=2;goto B72de61;
case 0x72de68:c.instructions+=1;goto B72de68;
case 0x72de6a:goto L72de6a;
case 0x72de6d:c.instructions+=9;goto B72de6d;
case 0x72de6f:c.instructions+=8;goto B72de6f;
case 0x72de75:c.instructions+=7;goto B72de75;
case 0x72de78:c.instructions+=6;goto B72de78;
case 0x72de7e:c.instructions+=5;goto B72de7e;
case 0x72de80:c.instructions+=4;goto B72de80;
case 0x72de82:c.instructions+=3;goto B72de82;
case 0x72de84:c.instructions+=2;goto B72de84;
case 0x72de87:c.instructions+=1;goto B72de87;
case 0x72de89:goto L72de89;
case 0x72de8c:c.instructions+=6;goto B72de8c;
case 0x72de8d:c.instructions+=5;goto B72de8d;
case 0x72de90:c.instructions+=4;goto B72de90;
case 0x72de93:c.instructions+=3;goto B72de93;
case 0x72de96:c.instructions+=2;goto B72de96;
case 0x72de98:c.instructions+=1;goto B72de98;
case 0x72de9d:goto L72de9d;
case 0x72de9e:c.instructions+=1;goto B72de9e;
case 0x72dea0:goto L72dea0;
case 0x72dea2:goto L72dea2;
case 0x72dea5:c.instructions+=3;goto B72dea5;
case 0x72dea9:c.instructions+=2;goto B72dea9;
case 0x72deac:c.instructions+=1;goto B72deac;
case 0x72deae:goto L72deae;
case 0x72deb1:goto L72deb1;
case 0x72deb4:c.instructions+=1;goto B72deb4;
case 0x72deb6:goto L72deb6;
case 0x72deb8:c.instructions+=1;goto B72deb8;
case 0x72deba:goto L72deba;
case 0x72debc:c.instructions+=1;goto B72debc;
case 0x72debe:goto L72debe;
case 0x72dec0:goto L72dec0;
case 0x72dec1:goto L72dec1;
case 0x72dec4:c.instructions+=1;goto B72dec4;
case 0x72deca:goto L72deca;
case 0x72dece:c.instructions+=6;goto B72dece;
case 0x72ded1:c.instructions+=5;goto B72ded1;
case 0x72ded3:c.instructions+=4;goto B72ded3;
case 0x72ded4:c.instructions+=3;goto B72ded4;
case 0x72ded6:c.instructions+=2;goto B72ded6;
case 0x72deda:c.instructions+=1;goto B72deda;
case 0x72dedd:goto L72dedd;
case 0x72dee0:c.instructions+=19;goto B72dee0;
case 0x72dee3:c.instructions+=18;goto B72dee3;
case 0x72dee4:c.instructions+=17;goto B72dee4;
case 0x72dee7:c.instructions+=16;goto B72dee7;
case 0x72deea:c.instructions+=15;goto B72deea;
case 0x72deec:c.instructions+=14;goto B72deec;
case 0x72deef:c.instructions+=13;goto B72deef;
case 0x72def2:c.instructions+=12;goto B72def2;
case 0x72def6:c.instructions+=11;goto B72def6;
case 0x72def8:c.instructions+=10;goto B72def8;
case 0x72defc:c.instructions+=9;goto B72defc;
case 0x72deff:c.instructions+=8;goto B72deff;
case 0x72df05:c.instructions+=7;goto B72df05;
case 0x72df08:c.instructions+=6;goto B72df08;
case 0x72df0e:c.instructions+=5;goto B72df0e;
case 0x72df10:c.instructions+=4;goto B72df10;
case 0x72df12:c.instructions+=3;goto B72df12;
case 0x72df14:c.instructions+=2;goto B72df14;
case 0x72df17:c.instructions+=1;goto B72df17;
case 0x72df19:goto L72df19;
case 0x72df1c:c.instructions+=5;goto B72df1c;
case 0x72df1d:c.instructions+=4;goto B72df1d;
case 0x72df20:c.instructions+=3;goto B72df20;
case 0x72df23:c.instructions+=2;goto B72df23;
case 0x72df25:c.instructions+=1;goto B72df25;
case 0x72df2a:goto L72df2a;
case 0x72df2b:c.instructions+=1;goto B72df2b;
case 0x72df2d:goto L72df2d;
case 0x72df2f:goto L72df2f;
case 0x72df32:c.instructions+=14;goto B72df32;
case 0x72df35:c.instructions+=13;goto B72df35;
case 0x72df38:c.instructions+=12;goto B72df38;
case 0x72df3a:c.instructions+=11;goto B72df3a;
case 0x72df3e:c.instructions+=10;goto B72df3e;
case 0x72df41:c.instructions+=9;goto B72df41;
case 0x72df47:c.instructions+=8;goto B72df47;
case 0x72df49:c.instructions+=7;goto B72df49;
case 0x72df4c:c.instructions+=6;goto B72df4c;
case 0x72df52:c.instructions+=5;goto B72df52;
case 0x72df54:c.instructions+=4;goto B72df54;
case 0x72df56:c.instructions+=3;goto B72df56;
case 0x72df58:c.instructions+=2;goto B72df58;
case 0x72df5b:c.instructions+=1;goto B72df5b;
case 0x72df5d:goto L72df5d;
case 0x72df60:c.instructions+=5;goto B72df60;
case 0x72df61:c.instructions+=4;goto B72df61;
case 0x72df64:c.instructions+=3;goto B72df64;
case 0x72df67:c.instructions+=2;goto B72df67;
case 0x72df69:c.instructions+=1;goto B72df69;
case 0x72df6e:goto L72df6e;
case 0x72df6f:c.instructions+=1;goto B72df6f;
case 0x72df71:goto L72df71;
case 0x72df73:goto L72df73;
case 0x72df76:c.instructions+=13;goto B72df76;
case 0x72df7a:c.instructions+=12;goto B72df7a;
case 0x72df7d:c.instructions+=11;goto B72df7d;
case 0x72df7f:c.instructions+=10;goto B72df7f;
case 0x72df83:c.instructions+=9;goto B72df83;
case 0x72df86:c.instructions+=8;goto B72df86;
case 0x72df8c:c.instructions+=7;goto B72df8c;
case 0x72df8f:c.instructions+=6;goto B72df8f;
case 0x72df95:c.instructions+=5;goto B72df95;
case 0x72df97:c.instructions+=4;goto B72df97;
case 0x72df99:c.instructions+=3;goto B72df99;
case 0x72df9b:c.instructions+=2;goto B72df9b;
case 0x72df9e:c.instructions+=1;goto B72df9e;
case 0x72dfa0:goto L72dfa0;
case 0x72dfa1:c.instructions+=6;goto B72dfa1;
case 0x72dfa4:c.instructions+=5;goto B72dfa4;
case 0x72dfa7:c.instructions+=4;goto B72dfa7;
case 0x72dfaa:c.instructions+=3;goto B72dfaa;
case 0x72dfad:c.instructions+=2;goto B72dfad;
case 0x72dfaf:c.instructions+=1;goto B72dfaf;
case 0x72dfb4:goto L72dfb4;
case 0x72dfb5:c.instructions+=1;goto B72dfb5;
case 0x72dfb7:goto L72dfb7;
case 0x72dfb9:goto L72dfb9;
case 0x72dfbd:c.instructions+=3;goto B72dfbd;
case 0x72dfc0:c.instructions+=2;goto B72dfc0;
case 0x72dfc3:c.instructions+=1;goto B72dfc3;
case 0x72dfc9:goto L72dfc9;
case 0x72dfca:c.instructions+=4;goto B72dfca;
case 0x72dfcb:c.instructions+=3;goto B72dfcb;
case 0x72dfcc:c.instructions+=2;goto B72dfcc;
case 0x72dfcd:c.instructions+=1;goto B72dfcd;
case 0x72dfd0:goto L72dfd0;
case 0x72dfd1:c.instructions+=5;goto B72dfd1;
case 0x72dfd3:c.instructions+=4;goto B72dfd3;
case 0x72dfd4:c.instructions+=3;goto B72dfd4;
case 0x72dfda:c.instructions+=2;goto B72dfda;
case 0x72dfdc:c.instructions+=1;goto B72dfdc;
case 0x72dfde:goto L72dfde;
case 0x72dfe4:c.instructions+=9;goto B72dfe4;
case 0x72dfe7:c.instructions+=8;goto B72dfe7;
case 0x72dfea:c.instructions+=7;goto B72dfea;
case 0x72dff0:c.instructions+=6;goto B72dff0;
case 0x72dff2:c.instructions+=5;goto B72dff2;
case 0x72dff4:c.instructions+=4;goto B72dff4;
case 0x72dffa:c.instructions+=3;goto B72dffa;
case 0x72dffc:c.instructions+=2;goto B72dffc;
case 0x72dfff:c.instructions+=1;goto B72dfff;
default:missing_instruction(c.pc);}
B72d001:L72d001:{c.instructions+=20;NFSU2_TR(0x72d001);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72d005:{NFSU2_TR(0x72d005);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B72d009:{NFSU2_TR(0x72d009);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72d00d:{NFSU2_TR(0x72d00d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+12),(U+0),2);
}
B72d010:{NFSU2_TR(0x72d010);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x26ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72d014:{NFSU2_TR(0x72d014);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72d017:{NFSU2_TR(0x72d017);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B72d01b:{NFSU2_TR(0x72d01b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72d01f:{NFSU2_TR(0x72d01f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72d022:{NFSU2_TR(0x72d022);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B72d026:{NFSU2_TR(0x72d026);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2aull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72d02a:{NFSU2_TR(0x72d02a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d02c:{NFSU2_TR(0x72d02c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72d02d:{NFSU2_TR(0x72d02d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B72d030:{NFSU2_TR(0x72d030);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B72d032:{NFSU2_TR(0x72d032);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B72d034:{NFSU2_TR(0x72d034);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B72d036:{NFSU2_TR(0x72d036);
w1(R+512,carry<u32>(r4(R+24),r4(R+12)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B72d038:{NFSU2_TR(0x72d038);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72d03b:{NFSU2_TR(0x72d03b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x72cf45u,72c);}
}
B72d041:L72d041:{c.instructions+=5;NFSU2_TR(0x72d041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72d042:{NFSU2_TR(0x72d042);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72d043:{NFSU2_TR(0x72d043);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72d044:{NFSU2_TR(0x72d044);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72d045:{NFSU2_TR(0x72d045);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d046:L72d046:{c.instructions+=26;NFSU2_TR(0x72d046);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d047:{NFSU2_TR(0x72d047);
__builtin_memmove((R+20),(R+16),4);
}
B72d049:{NFSU2_TR(0x72d049);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B72d04c:{NFSU2_TR(0x72d04c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72d04e:{NFSU2_TR(0x72d04e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d04f:{NFSU2_TR(0x72d04f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d050:{NFSU2_TR(0x72d050);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72d052:{NFSU2_TR(0x72d052);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d055:{NFSU2_TR(0x72d055);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72d058:{NFSU2_TR(0x72d058);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72d059:{NFSU2_TR(0x72d059);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72d05a:{NFSU2_TR(0x72d05a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72d05b:{NFSU2_TR(0x72d05b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72d05c:{NFSU2_TR(0x72d05c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72d05d:{NFSU2_TR(0x72d05d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72d05f:{NFSU2_TR(0x72d05f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d062:{NFSU2_TR(0x72d062);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+28),(U+0),4);
}
B72d065:{NFSU2_TR(0x72d065);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72d066:{NFSU2_TR(0x72d066);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72d067:{NFSU2_TR(0x72d067);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72d068:{NFSU2_TR(0x72d068);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72d069:{NFSU2_TR(0x72d069);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72d06a:{NFSU2_TR(0x72d06a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d06d:{NFSU2_TR(0x72d06d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B72d071:{NFSU2_TR(0x72d071);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72d073:{NFSU2_TR(0x72d073);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72d09d;}}
}
B72d075:L72d075:{c.instructions+=3;NFSU2_TR(0x72d075);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72d078:{NFSU2_TR(0x72d078);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d07e:{NFSU2_TR(0x72d07e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d07f:L72d07f:{c.instructions+=11;NFSU2_TR(0x72d07f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72d082:{NFSU2_TR(0x72d082);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B72d085:{NFSU2_TR(0x72d085);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B72d089:{NFSU2_TR(0x72d089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B72d08b:{NFSU2_TR(0x72d08b);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B72d08d:{NFSU2_TR(0x72d08d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B72d090:{NFSU2_TR(0x72d090);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B72d091:{NFSU2_TR(0x72d091);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B72d095:{NFSU2_TR(0x72d095);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B72d098:{NFSU2_TR(0x72d098);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72d09a:{NFSU2_TR(0x72d09a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72d07fu);}goto L72d07f;}}
}
B72d09c:L72d09c:{c.instructions+=1;NFSU2_TR(0x72d09c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72d09d:L72d09d:{c.instructions+=17;NFSU2_TR(0x72d09d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B72d0a1:{NFSU2_TR(0x72d0a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d0a2:{NFSU2_TR(0x72d0a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d0a8:{NFSU2_TR(0x72d0a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d0ae:{NFSU2_TR(0x72d0ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d0af:{NFSU2_TR(0x72d0af);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d0b2:{NFSU2_TR(0x72d0b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d0b3:{NFSU2_TR(0x72d0b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d0b6:{NFSU2_TR(0x72d0b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d0b7:{NFSU2_TR(0x72d0b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d0ba:{NFSU2_TR(0x72d0ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d0bd:{NFSU2_TR(0x72d0bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d0bf:{NFSU2_TR(0x72d0bf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d0c1:{NFSU2_TR(0x72d0c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d0c4:{NFSU2_TR(0x72d0c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d0c7:{NFSU2_TR(0x72d0c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d0ca:{NFSU2_TR(0x72d0ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d0cfull));
TAIL_STATIC(0x724d81u,724);
}
B72d0cf:L72d0cf:{c.instructions+=5;NFSU2_TR(0x72d0cf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72d0d2:{NFSU2_TR(0x72d0d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72d0d3:{NFSU2_TR(0x72d0d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72d0d4:{NFSU2_TR(0x72d0d4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72d0d5:{NFSU2_TR(0x72d0d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d0d6:L72d0d6:{c.instructions+=3;NFSU2_TR(0x72d0d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d0da:{NFSU2_TR(0x72d0da);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x818ba8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B72d0e2:{NFSU2_TR(0x72d0e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d0e3:L72d0e3:{c.instructions+=5;NFSU2_TR(0x72d0e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d0e4:{NFSU2_TR(0x72d0e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72d0e8:{NFSU2_TR(0x72d0e8);
w4(R+0,u32(0x10000ull));
}
B72d0ed:{NFSU2_TR(0x72d0ed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72d0ef:{NFSU2_TR(0x72d0ef);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72d0f5;}}
}
B72d0f1:L72d0f1:{c.instructions+=2;NFSU2_TR(0x72d0f1);
__builtin_memmove((R+24),(R+0),4);
}
B72d0f3:{NFSU2_TR(0x72d0f3);
{goto L72d0fb;}
}
B72d0f5:L72d0f5:{c.instructions+=2;NFSU2_TR(0x72d0f5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B72d0f7:{NFSU2_TR(0x72d0f7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72d0fb;}}
}
B72d0f9:L72d0f9:{c.instructions+=1;NFSU2_TR(0x72d0f9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B72d0fb:L72d0fb:{c.instructions+=1;NFSU2_TR(0x72d0fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d100ull));
TAIL_STATIC(0x724903u,724);
}
B72d100:L72d100:{c.instructions+=6;NFSU2_TR(0x72d100);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffull))));
}
B72d105:{NFSU2_TR(0x72d105);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72d10a:{NFSU2_TR(0x72d10a);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(r4(R+24)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B72d10d:{NFSU2_TR(0x72d10d);
u8 U[47];
w4(U+39,u32(u32(u32(0xeull))&u32(u32(0x1full))));
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
B72d110:{NFSU2_TR(0x72d110);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72d111:{NFSU2_TR(0x72d111);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d112:L72d112:{c.instructions+=2;NFSU2_TR(0x72d112);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72d119:{NFSU2_TR(0x72d119);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72d11f;}}
}
B72d11b:L72d11b:{c.instructions+=3;NFSU2_TR(0x72d11b);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d11d:{NFSU2_TR(0x72d11d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72d11e:{NFSU2_TR(0x72d11e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d11f:L72d11f:{c.instructions+=2;NFSU2_TR(0x72d11f);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d123:{NFSU2_TR(0x72d123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d128ull));
TAIL_STATIC(0x725480u,725);
}
B72d128:L72d128:{c.instructions+=6;NFSU2_TR(0x72d128);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d129:{NFSU2_TR(0x72d129);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72d12b:{NFSU2_TR(0x72d12b);
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
B72d12d:{NFSU2_TR(0x72d12d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B72d130:{NFSU2_TR(0x72d130);
__builtin_memmove((R+0),(R+4),4);
}
B72d132:{NFSU2_TR(0x72d132);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d140:L72d140:{c.instructions+=19;NFSU2_TR(0x72d140);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d141:{NFSU2_TR(0x72d141);
u8 U[170];
w1(U+0,u8(u32(r1(R+525))&u32(u8(0x1ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(u32(0x4000ull))*u32(r4(U+1))));
w1(U+9,u8(u32(r1(R+523))&u32(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(u32(0x800ull))*u32(r4(U+10))));
w4(U+18,u32(u32(r4(U+5))|u32(r4(U+14))));
w1(U+22,u8(u32(r1(R+522))&u32(u8(0x1ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(u32(0x400ull))*u32(r4(U+23))));
w4(U+31,u32(u32(r4(U+18))|u32(r4(U+27))));
w1(U+35,u8(u32(r1(R+521))&u32(u8(0x1ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(u32(0x200ull))*u32(r4(U+36))));
w4(U+44,u32(u32(r4(U+31))|u32(r4(U+40))));
w1(U+48,u8(u32(r1(R+520))&u32(u8(0x1ull))));
w4(U+49,u32(r1(U+48)));
w4(U+53,u32(u32(u32(0x100ull))*u32(r4(U+49))));
w4(U+57,u32(u32(r4(U+44))|u32(r4(U+53))));
w1(U+61,u8(u32(r1(R+519))&u32(u8(0x1ull))));
w4(U+62,u32(r1(U+61)));
w4(U+66,u32(u32(u32(0x80ull))*u32(r4(U+62))));
w4(U+70,u32(u32(r4(U+57))|u32(r4(U+66))));
w1(U+74,u8(u32(r1(R+518))&u32(u8(0x1ull))));
w4(U+75,u32(r1(U+74)));
w4(U+79,u32(u32(u32(0x40ull))*u32(r4(U+75))));
w4(U+83,u32(u32(r4(U+70))|u32(r4(U+79))));
w1(U+87,u8(u32(r1(R+516))&u32(u8(0x1ull))));
w4(U+88,u32(r1(U+87)));
w4(U+92,u32(u32(u32(0x10ull))*u32(r4(U+88))));
w4(U+96,u32(u32(r4(U+83))|u32(r4(U+92))));
w1(U+100,u8(u32(r1(R+514))&u32(u8(0x1ull))));
w4(U+101,u32(r1(U+100)));
w4(U+105,u32(u32(u32(0x4ull))*u32(r4(U+101))));
w4(U+109,u32(u32(r4(U+96))|u32(r4(U+105))));
w1(U+113,u8(u32(r1(R+512))&u32(u8(0x1ull))));
w4(U+114,u32(r1(U+113)));
w4(U+118,u32(u32(u32(0x1ull))*u32(r4(U+114))));
w4(R+640,u32(u32(r4(U+109))|u32(r4(U+118))));
w1(U+122,u8(u32(r1(R+532))&u32(u8(0x1ull))));
w4(U+123,u32(r1(U+122)));
w4(U+127,u32(u32(u32(0x200000ull))*u32(r4(U+123))));
w4(U+131,u32(u32(r4(R+640))|u32(r4(U+127))));
w1(U+135,u8(u32(r1(R+531))&u32(u8(0x1ull))));
w4(U+136,u32(r1(U+135)));
w4(U+140,u32(u32(u32(0x100000ull))*u32(r4(U+136))));
w4(U+144,u32(u32(r4(U+131))|u32(r4(U+140))));
w1(U+148,u8(u32(r1(R+530))&u32(u8(0x1ull))));
w4(U+149,u32(r1(U+148)));
w4(U+153,u32(u32(u32(0x80000ull))*u32(r4(U+149))));
w4(U+157,u32(u32(r4(U+144))|u32(r4(U+153))));
w1(U+161,u8(u32(r1(R+529))&u32(u8(0x1ull))));
w4(U+162,u32(r1(U+161)));
w4(U+166,u32(u32(u32(0x40000ull))*u32(r4(U+162))));
w4(R+640,u32(u32(r4(U+157))|u32(r4(U+166))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(R+640));
}
B72d142:{NFSU2_TR(0x72d142);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d143:{NFSU2_TR(0x72d143);
__builtin_memmove((R+20),(R+16),4);
}
B72d145:{NFSU2_TR(0x72d145);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72d148:{NFSU2_TR(0x72d148);
u8 U[170];
w1(U+0,u8(u32(r1(R+525))&u32(u8(0x1ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(u32(0x4000ull))*u32(r4(U+1))));
w1(U+9,u8(u32(r1(R+523))&u32(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(u32(0x800ull))*u32(r4(U+10))));
w4(U+18,u32(u32(r4(U+5))|u32(r4(U+14))));
w1(U+22,u8(u32(r1(R+522))&u32(u8(0x1ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(u32(0x400ull))*u32(r4(U+23))));
w4(U+31,u32(u32(r4(U+18))|u32(r4(U+27))));
w1(U+35,u8(u32(r1(R+521))&u32(u8(0x1ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(u32(0x200ull))*u32(r4(U+36))));
w4(U+44,u32(u32(r4(U+31))|u32(r4(U+40))));
w1(U+48,u8(u32(r1(R+520))&u32(u8(0x1ull))));
w4(U+49,u32(r1(U+48)));
w4(U+53,u32(u32(u32(0x100ull))*u32(r4(U+49))));
w4(U+57,u32(u32(r4(U+44))|u32(r4(U+53))));
w1(U+61,u8(u32(r1(R+519))&u32(u8(0x1ull))));
w4(U+62,u32(r1(U+61)));
w4(U+66,u32(u32(u32(0x80ull))*u32(r4(U+62))));
w4(U+70,u32(u32(r4(U+57))|u32(r4(U+66))));
w1(U+74,u8(u32(r1(R+518))&u32(u8(0x1ull))));
w4(U+75,u32(r1(U+74)));
w4(U+79,u32(u32(u32(0x40ull))*u32(r4(U+75))));
w4(U+83,u32(u32(r4(U+70))|u32(r4(U+79))));
w1(U+87,u8(u32(r1(R+516))&u32(u8(0x1ull))));
w4(U+88,u32(r1(U+87)));
w4(U+92,u32(u32(u32(0x10ull))*u32(r4(U+88))));
w4(U+96,u32(u32(r4(U+83))|u32(r4(U+92))));
w1(U+100,u8(u32(r1(R+514))&u32(u8(0x1ull))));
w4(U+101,u32(r1(U+100)));
w4(U+105,u32(u32(u32(0x4ull))*u32(r4(U+101))));
w4(U+109,u32(u32(r4(U+96))|u32(r4(U+105))));
w1(U+113,u8(u32(r1(R+512))&u32(u8(0x1ull))));
w4(U+114,u32(r1(U+113)));
w4(U+118,u32(u32(u32(0x1ull))*u32(r4(U+114))));
w4(R+640,u32(u32(r4(U+109))|u32(r4(U+118))));
w1(U+122,u8(u32(r1(R+532))&u32(u8(0x1ull))));
w4(U+123,u32(r1(U+122)));
w4(U+127,u32(u32(u32(0x200000ull))*u32(r4(U+123))));
w4(U+131,u32(u32(r4(R+640))|u32(r4(U+127))));
w1(U+135,u8(u32(r1(R+531))&u32(u8(0x1ull))));
w4(U+136,u32(r1(U+135)));
w4(U+140,u32(u32(u32(0x100000ull))*u32(r4(U+136))));
w4(U+144,u32(u32(r4(U+131))|u32(r4(U+140))));
w1(U+148,u8(u32(r1(R+530))&u32(u8(0x1ull))));
w4(U+149,u32(r1(U+148)));
w4(U+153,u32(u32(u32(0x80000ull))*u32(r4(U+149))));
w4(U+157,u32(u32(r4(U+144))|u32(r4(U+153))));
w1(U+161,u8(u32(r1(R+529))&u32(u8(0x1ull))));
w4(U+162,u32(r1(U+161)));
w4(U+166,u32(u32(u32(0x40000ull))*u32(r4(U+162))));
w4(R+640,u32(u32(r4(U+157))|u32(r4(U+166))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(R+640));
}
B72d149:{NFSU2_TR(0x72d149);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72d14a:{NFSU2_TR(0x72d14a);
__builtin_memmove((R+4),(R+0),4);
}
B72d14c:{NFSU2_TR(0x72d14c);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0x200000ull))));
}
B72d151:{NFSU2_TR(0x72d151);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d152:{NFSU2_TR(0x72d152);
u8 U[48];
__builtin_memmove((R+640),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(U+0,u32(u32(r4(R+640))&u32(u32(0x4000ull))));
w1(R+525,u8((r4(U+0))!=(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+640))&u32(u32(0x800ull))));
w1(R+523,u8((r4(U+4))!=(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+640))&u32(u32(0x400ull))));
w1(R+522,u8((r4(U+8))!=(u32(0x0ull))));
w4(U+12,u32(u32(r4(R+640))&u32(u32(0x200ull))));
w1(R+521,u8((r4(U+12))!=(u32(0x0ull))));
w4(U+16,u32(u32(r4(R+640))&u32(u32(0x100ull))));
w1(R+520,u8((r4(U+16))!=(u32(0x0ull))));
w4(U+20,u32(u32(r4(R+640))&u32(u32(0x80ull))));
w1(R+519,u8((r4(U+20))!=(u32(0x0ull))));
w4(U+24,u32(u32(r4(R+640))&u32(u32(0x40ull))));
w1(R+518,u8((r4(U+24))!=(u32(0x0ull))));
w4(U+28,u32(u32(r4(R+640))&u32(u32(0x10ull))));
w1(R+516,u8((r4(U+28))!=(u32(0x0ull))));
w4(U+32,u32(u32(r4(R+640))&u32(u32(0x4ull))));
w1(R+514,u8((r4(U+32))!=(u32(0x0ull))));
w4(U+36,u32(u32(r4(R+640))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+36))!=(u32(0x0ull))));
w4(U+40,u32(u32(r4(R+640))&u32(u32(0x200000ull))));
w1(R+532,u8((r4(U+40))!=(u32(0x0ull))));
w4(U+44,u32(u32(r4(R+640))&u32(u32(0x40000ull))));
w1(R+529,u8((r4(U+44))!=(u32(0x0ull))));
w1(R+531,u8(0x0ull));
w1(R+530,u8(0x0ull));
}
B72d153:{NFSU2_TR(0x72d153);
u8 U[170];
w1(U+0,u8(u32(r1(R+525))&u32(u8(0x1ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(u32(0x4000ull))*u32(r4(U+1))));
w1(U+9,u8(u32(r1(R+523))&u32(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(u32(0x800ull))*u32(r4(U+10))));
w4(U+18,u32(u32(r4(U+5))|u32(r4(U+14))));
w1(U+22,u8(u32(r1(R+522))&u32(u8(0x1ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(u32(0x400ull))*u32(r4(U+23))));
w4(U+31,u32(u32(r4(U+18))|u32(r4(U+27))));
w1(U+35,u8(u32(r1(R+521))&u32(u8(0x1ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(u32(0x200ull))*u32(r4(U+36))));
w4(U+44,u32(u32(r4(U+31))|u32(r4(U+40))));
w1(U+48,u8(u32(r1(R+520))&u32(u8(0x1ull))));
w4(U+49,u32(r1(U+48)));
w4(U+53,u32(u32(u32(0x100ull))*u32(r4(U+49))));
w4(U+57,u32(u32(r4(U+44))|u32(r4(U+53))));
w1(U+61,u8(u32(r1(R+519))&u32(u8(0x1ull))));
w4(U+62,u32(r1(U+61)));
w4(U+66,u32(u32(u32(0x80ull))*u32(r4(U+62))));
w4(U+70,u32(u32(r4(U+57))|u32(r4(U+66))));
w1(U+74,u8(u32(r1(R+518))&u32(u8(0x1ull))));
w4(U+75,u32(r1(U+74)));
w4(U+79,u32(u32(u32(0x40ull))*u32(r4(U+75))));
w4(U+83,u32(u32(r4(U+70))|u32(r4(U+79))));
w1(U+87,u8(u32(r1(R+516))&u32(u8(0x1ull))));
w4(U+88,u32(r1(U+87)));
w4(U+92,u32(u32(u32(0x10ull))*u32(r4(U+88))));
w4(U+96,u32(u32(r4(U+83))|u32(r4(U+92))));
w1(U+100,u8(u32(r1(R+514))&u32(u8(0x1ull))));
w4(U+101,u32(r1(U+100)));
w4(U+105,u32(u32(u32(0x4ull))*u32(r4(U+101))));
w4(U+109,u32(u32(r4(U+96))|u32(r4(U+105))));
w1(U+113,u8(u32(r1(R+512))&u32(u8(0x1ull))));
w4(U+114,u32(r1(U+113)));
w4(U+118,u32(u32(u32(0x1ull))*u32(r4(U+114))));
w4(R+640,u32(u32(r4(U+109))|u32(r4(U+118))));
w1(U+122,u8(u32(r1(R+532))&u32(u8(0x1ull))));
w4(U+123,u32(r1(U+122)));
w4(U+127,u32(u32(u32(0x200000ull))*u32(r4(U+123))));
w4(U+131,u32(u32(r4(R+640))|u32(r4(U+127))));
w1(U+135,u8(u32(r1(R+531))&u32(u8(0x1ull))));
w4(U+136,u32(r1(U+135)));
w4(U+140,u32(u32(u32(0x100000ull))*u32(r4(U+136))));
w4(U+144,u32(u32(r4(U+131))|u32(r4(U+140))));
w1(U+148,u8(u32(r1(R+530))&u32(u8(0x1ull))));
w4(U+149,u32(r1(U+148)));
w4(U+153,u32(u32(u32(0x80000ull))*u32(r4(U+149))));
w4(U+157,u32(u32(r4(U+144))|u32(r4(U+153))));
w1(U+161,u8(u32(r1(R+529))&u32(u8(0x1ull))));
w4(U+162,u32(r1(U+161)));
w4(U+166,u32(u32(u32(0x40000ull))*u32(r4(U+162))));
w4(R+640,u32(u32(r4(U+157))|u32(r4(U+166))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(R+640));
}
B72d154:{NFSU2_TR(0x72d154);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72d155:{NFSU2_TR(0x72d155);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B72d157:{NFSU2_TR(0x72d157);
__builtin_memmove((R+16),(R+20),4);
}
B72d159:{NFSU2_TR(0x72d159);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72d15a:{NFSU2_TR(0x72d15a);
u8 U[48];
__builtin_memmove((R+640),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(U+0,u32(u32(r4(R+640))&u32(u32(0x4000ull))));
w1(R+525,u8((r4(U+0))!=(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+640))&u32(u32(0x800ull))));
w1(R+523,u8((r4(U+4))!=(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+640))&u32(u32(0x400ull))));
w1(R+522,u8((r4(U+8))!=(u32(0x0ull))));
w4(U+12,u32(u32(r4(R+640))&u32(u32(0x200ull))));
w1(R+521,u8((r4(U+12))!=(u32(0x0ull))));
w4(U+16,u32(u32(r4(R+640))&u32(u32(0x100ull))));
w1(R+520,u8((r4(U+16))!=(u32(0x0ull))));
w4(U+20,u32(u32(r4(R+640))&u32(u32(0x80ull))));
w1(R+519,u8((r4(U+20))!=(u32(0x0ull))));
w4(U+24,u32(u32(r4(R+640))&u32(u32(0x40ull))));
w1(R+518,u8((r4(U+24))!=(u32(0x0ull))));
w4(U+28,u32(u32(r4(R+640))&u32(u32(0x10ull))));
w1(R+516,u8((r4(U+28))!=(u32(0x0ull))));
w4(U+32,u32(u32(r4(R+640))&u32(u32(0x4ull))));
w1(R+514,u8((r4(U+32))!=(u32(0x0ull))));
w4(U+36,u32(u32(r4(R+640))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+36))!=(u32(0x0ull))));
w4(U+40,u32(u32(r4(R+640))&u32(u32(0x200000ull))));
w1(R+532,u8((r4(U+40))!=(u32(0x0ull))));
w4(U+44,u32(u32(r4(R+640))&u32(u32(0x40000ull))));
w1(R+529,u8((r4(U+44))!=(u32(0x0ull))));
w1(R+531,u8(0x0ull));
w1(R+530,u8(0x0ull));
}
B72d15b:{NFSU2_TR(0x72d15b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d15c:{NFSU2_TR(0x72d15c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d15d:L72d15d:{c.instructions+=23;NFSU2_TR(0x72d15d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d15e:{NFSU2_TR(0x72d15e);
__builtin_memmove((R+20),(R+16),4);
}
B72d160:{NFSU2_TR(0x72d160);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d161:{NFSU2_TR(0x72d161);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d162:{NFSU2_TR(0x72d162);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d163:{NFSU2_TR(0x72d163);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d164:{NFSU2_TR(0x72d164);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d165:{NFSU2_TR(0x72d165);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d166:{NFSU2_TR(0x72d166);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d169:{NFSU2_TR(0x72d169);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L72d169_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L72d169_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L72d169_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L72d169_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L72d169_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L72d169_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L72d169_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L72d169_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L72d169_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L72d169_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L72d169_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L72d169_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L72d169_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L72d169_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L72d169_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L72d169_65;}
{SPILL();c.pc=0x72d169u;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d169_67;
L72d169_35:;
{SPILL();c.pc=0x72d169u;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d169_67;
L72d169_37:;
{SPILL();c.pc=0x72d169u;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d169_67;
L72d169_39:;
{SPILL();c.pc=0x72d169u;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d169_67;
L72d169_41:;
{SPILL();c.pc=0x72d169u;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d169_67;
L72d169_43:;
{SPILL();c.pc=0x72d169u;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d169_67;
L72d169_45:;
{SPILL();c.pc=0x72d169u;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d169_67;
L72d169_47:;
{SPILL();c.pc=0x72d169u;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d169_67;
L72d169_49:;
{SPILL();c.pc=0x72d169u;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d169_67;
L72d169_51:;
{SPILL();c.pc=0x72d169u;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d169_67;
L72d169_53:;
{SPILL();c.pc=0x72d169u;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d169_67;
L72d169_55:;
{SPILL();c.pc=0x72d169u;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d169_67;
L72d169_57:;
{SPILL();c.pc=0x72d169u;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d169_67;
L72d169_59:;
{SPILL();c.pc=0x72d169u;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d169_67;
L72d169_61:;
{SPILL();c.pc=0x72d169u;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d169_67;
L72d169_63:;
{SPILL();c.pc=0x72d169u;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d169_67;
L72d169_65:;
{SPILL();c.pc=0x72d169u;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d169_67;
L72d169_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B72d16b:{NFSU2_TR(0x72d16b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72d16e:{NFSU2_TR(0x72d16e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B72d170:{NFSU2_TR(0x72d170);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d173:{NFSU2_TR(0x72d173);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d176:{NFSU2_TR(0x72d176);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d179:{NFSU2_TR(0x72d179);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72d17a:{NFSU2_TR(0x72d17a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72d17b:{NFSU2_TR(0x72d17b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72d17c:{NFSU2_TR(0x72d17c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d17d:{NFSU2_TR(0x72d17d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72d17e:{NFSU2_TR(0x72d17e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72d17f:{NFSU2_TR(0x72d17f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72d180:{NFSU2_TR(0x72d180);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d181:L72d181:{c.instructions+=4;NFSU2_TR(0x72d181);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d185:{NFSU2_TR(0x72d185);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72d189:{NFSU2_TR(0x72d189);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d18c:{NFSU2_TR(0x72d18c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d18d:L72d18d:{c.instructions+=14;NFSU2_TR(0x72d18d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d18e:{NFSU2_TR(0x72d18e);
__builtin_memmove((R+20),(R+16),4);
}
B72d190:{NFSU2_TR(0x72d190);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d191:{NFSU2_TR(0x72d191);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d194:{NFSU2_TR(0x72d194);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d195:{NFSU2_TR(0x72d195);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72d198:{NFSU2_TR(0x72d198);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d199:{NFSU2_TR(0x72d199);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72d19c:{NFSU2_TR(0x72d19c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72d19f:{NFSU2_TR(0x72d19f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72d1a5:{NFSU2_TR(0x72d1a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d1a6:{NFSU2_TR(0x72d1a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72d1a9:{NFSU2_TR(0x72d1a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d1ac:{NFSU2_TR(0x72d1ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72d256;}}
}
B72d1b2:L72d1b2:{c.instructions+=3;NFSU2_TR(0x72d1b2);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B72d1b7:{NFSU2_TR(0x72d1b7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B72d1bb:{NFSU2_TR(0x72d1bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72d1c4;}}
}
B72d1bd:L72d1bd:{c.instructions+=3;NFSU2_TR(0x72d1bd);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B72d1bf:{NFSU2_TR(0x72d1bf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B72d1c2:{NFSU2_TR(0x72d1c2);
{goto L72d1f2;}
}
B72d1c4:L72d1c4:{c.instructions+=6;NFSU2_TR(0x72d1c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72d1c8:{NFSU2_TR(0x72d1c8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d1ca:{NFSU2_TR(0x72d1ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72d1cb:{NFSU2_TR(0x72d1cb);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B72d1cd:{NFSU2_TR(0x72d1cd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72d1cf:{NFSU2_TR(0x72d1cf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72d1f2;}}
}
B72d1d1:L72d1d1:{c.instructions+=12;NFSU2_TR(0x72d1d1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B72d1d5:{NFSU2_TR(0x72d1d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B72d1d8:{NFSU2_TR(0x72d1d8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d1da:{NFSU2_TR(0x72d1da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72d1db:{NFSU2_TR(0x72d1db);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d1df:{NFSU2_TR(0x72d1df);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d1e1:{NFSU2_TR(0x72d1e1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B72d1e5:{NFSU2_TR(0x72d1e5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B72d1e8:{NFSU2_TR(0x72d1e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72d1eb:{NFSU2_TR(0x72d1eb);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B72d1ed:{NFSU2_TR(0x72d1ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+8)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72d1f0:{NFSU2_TR(0x72d1f0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72d1d1u);}goto L72d1d1;}}
}
B72d1f2:L72d1f2:{c.instructions+=3;NFSU2_TR(0x72d1f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72d1f5:{NFSU2_TR(0x72d1f5);
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
B72d1f7:{NFSU2_TR(0x72d1f7);
if(r1(R+518)){{goto L72d20a;}}
}
B72d1f9:L72d1f9:{c.instructions+=7;NFSU2_TR(0x72d1f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B72d1fd:{NFSU2_TR(0x72d1fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d1fe:{NFSU2_TR(0x72d1fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d1ff:{NFSU2_TR(0x72d1ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d200:{NFSU2_TR(0x72d200);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d201:{NFSU2_TR(0x72d201);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d202:{NFSU2_TR(0x72d202);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d204ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B72d204:L72d204:{c.instructions+=2;NFSU2_TR(0x72d204);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B72d207:{NFSU2_TR(0x72d207);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d20a:L72d20a:{c.instructions+=3;NFSU2_TR(0x72d20a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d20d:{NFSU2_TR(0x72d20d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72d20f:{NFSU2_TR(0x72d20f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L72d21b;}}
}
B72d211:L72d211:{c.instructions+=2;NFSU2_TR(0x72d211);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B72d216:{NFSU2_TR(0x72d216);
{goto L72d2c7;}
}
B72d21b:L72d21b:{c.instructions+=2;NFSU2_TR(0x72d21b);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B72d220:{NFSU2_TR(0x72d220);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72d236;}}
}
B72d222:L72d222:{c.instructions+=6;NFSU2_TR(0x72d222);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B72d226:{NFSU2_TR(0x72d226);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72d229:{NFSU2_TR(0x72d229);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72d22b:{NFSU2_TR(0x72d22b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B72d231:{NFSU2_TR(0x72d231);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72d234:{NFSU2_TR(0x72d234);
{goto L72d23d;}
}
B72d236:L72d236:{c.instructions+=2;NFSU2_TR(0x72d236);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d239:{NFSU2_TR(0x72d239);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72d23d:L72d23d:{c.instructions+=8;NFSU2_TR(0x72d23d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B72d23f:{NFSU2_TR(0x72d23f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d242:{NFSU2_TR(0x72d242);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72d245:{NFSU2_TR(0x72d245);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d248:{NFSU2_TR(0x72d248);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72d24b:{NFSU2_TR(0x72d24b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d24e:{NFSU2_TR(0x72d24e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d251:{NFSU2_TR(0x72d251);
{goto L72d35e;}
}
B72d256:L72d256:{c.instructions+=6;NFSU2_TR(0x72d256);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B72d259:{NFSU2_TR(0x72d259);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B72d25c:{NFSU2_TR(0x72d25c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72d25e:{NFSU2_TR(0x72d25e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B72d261:{NFSU2_TR(0x72d261);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B72d265:{NFSU2_TR(0x72d265);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72d28a;}}
}
B72d267:L72d267:{c.instructions+=8;NFSU2_TR(0x72d267);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B72d26b:{NFSU2_TR(0x72d26b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d26d:{NFSU2_TR(0x72d26d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72d26e:{NFSU2_TR(0x72d26e);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B72d270:{NFSU2_TR(0x72d270);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B72d272:{NFSU2_TR(0x72d272);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72d274:{NFSU2_TR(0x72d274);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72d276:{NFSU2_TR(0x72d276);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72d2a4;}}
}
B72d278:L72d278:{c.instructions+=7;NFSU2_TR(0x72d278);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72d27a:{NFSU2_TR(0x72d27a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d27c:{NFSU2_TR(0x72d27c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B72d280:{NFSU2_TR(0x72d280);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B72d283:{NFSU2_TR(0x72d283);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B72d284:{NFSU2_TR(0x72d284);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72d286:{NFSU2_TR(0x72d286);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72d278u);}goto L72d278;}}
}
B72d288:L72d288:{c.instructions+=1;NFSU2_TR(0x72d288);
{goto L72d2a4;}
}
B72d28a:L72d28a:{c.instructions+=9;NFSU2_TR(0x72d28a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d28d:{NFSU2_TR(0x72d28d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B72d28f:{NFSU2_TR(0x72d28f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d292:{NFSU2_TR(0x72d292);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d295:{NFSU2_TR(0x72d295);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d298:{NFSU2_TR(0x72d298);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d29b:{NFSU2_TR(0x72d29b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d29e:{NFSU2_TR(0x72d29e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d2a1:{NFSU2_TR(0x72d2a1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B72d2a4:L72d2a4:{c.instructions+=2;NFSU2_TR(0x72d2a4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72d2a6:{NFSU2_TR(0x72d2a6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72d2e5;}}
}
B72d2a8:L72d2a8:{c.instructions+=3;NFSU2_TR(0x72d2a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d2ab:{NFSU2_TR(0x72d2ab);
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
B72d2ad:{NFSU2_TR(0x72d2ad);
if(r1(R+518)){{goto L72d2e5;}}
}
B72d2af:L72d2af:{c.instructions+=7;NFSU2_TR(0x72d2af);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B72d2b3:{NFSU2_TR(0x72d2b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d2b4:{NFSU2_TR(0x72d2b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d2b5:{NFSU2_TR(0x72d2b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d2b8:{NFSU2_TR(0x72d2b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d2b9:{NFSU2_TR(0x72d2b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d2ba:{NFSU2_TR(0x72d2ba);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d2bcull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B72d2bc:L72d2bc:{c.instructions+=3;NFSU2_TR(0x72d2bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B72d2bf:{NFSU2_TR(0x72d2bf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72d2c1:{NFSU2_TR(0x72d2c1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L72d2e5;}}
}
B72d2c3:L72d2c3:{c.instructions+=1;NFSU2_TR(0x72d2c3);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+12))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+12)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+12))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B72d2c7:L72d2c7:{c.instructions+=1;NFSU2_TR(0x72d2c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72d2cf;}}
}
B72d2c9:L72d2c9:{c.instructions+=1;NFSU2_TR(0x72d2c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B72d2cf:L72d2cf:{c.instructions+=9;NFSU2_TR(0x72d2cf);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72d2d1:{NFSU2_TR(0x72d2d1);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d2d4:{NFSU2_TR(0x72d2d4);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72d2d6:{NFSU2_TR(0x72d2d6);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d2d9:{NFSU2_TR(0x72d2d9);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72d2db:{NFSU2_TR(0x72d2db);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d2de:{NFSU2_TR(0x72d2de);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72d2e0:{NFSU2_TR(0x72d2e0);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d2e3:{NFSU2_TR(0x72d2e3);
{goto L72d364;}
}
B72d2e5:L72d2e5:{c.instructions+=2;NFSU2_TR(0x72d2e5);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+12))));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+12))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B72d2e9:{NFSU2_TR(0x72d2e9);
if(r1(R+518)){{goto L72d2f5;}}
}
B72d2eb:L72d2eb:{c.instructions+=3;NFSU2_TR(0x72d2eb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B72d2ef:{NFSU2_TR(0x72d2ef);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B72d2f3:{NFSU2_TR(0x72d2f3);
{goto L72d2fb;}
}
B72d2f5:L72d2f5:{c.instructions+=1;NFSU2_TR(0x72d2f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B72d2fb:L72d2fb:{c.instructions+=18;NFSU2_TR(0x72d2fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d2fe:{NFSU2_TR(0x72d2fe);
u8 U[42];
w4(U+34,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+38),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+34))));
w1(U+24,u8((r4(U+34))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+34))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+38),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+34))!=(u32(0x0ull))));
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
B72d301:{NFSU2_TR(0x72d301);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d304:{NFSU2_TR(0x72d304);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d307:{NFSU2_TR(0x72d307);
__builtin_memmove((R+4),(R+0),4);
}
B72d309:{NFSU2_TR(0x72d309);
u8 U[42];
w4(U+34,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+38),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+34))));
w1(U+24,u8((r4(U+34))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+34))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+38),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+34))!=(u32(0x0ull))));
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
B72d30c:{NFSU2_TR(0x72d30c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d30d:{NFSU2_TR(0x72d30d);
u8 U[48];
w4(U+40,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
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
B72d310:{NFSU2_TR(0x72d310);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d311:{NFSU2_TR(0x72d311);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B72d314:{NFSU2_TR(0x72d314);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d315:{NFSU2_TR(0x72d315);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72d318:{NFSU2_TR(0x72d318);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d319:{NFSU2_TR(0x72d319);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d31c:{NFSU2_TR(0x72d31c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d31f:{NFSU2_TR(0x72d31f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d320:{NFSU2_TR(0x72d320);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d323:{NFSU2_TR(0x72d323);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d326ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B72d326:L72d326:{c.instructions+=19;NFSU2_TR(0x72d326);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d329:{NFSU2_TR(0x72d329);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72d32c:{NFSU2_TR(0x72d32c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B72d32f:{NFSU2_TR(0x72d32f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72d332:{NFSU2_TR(0x72d332);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B72d334:{NFSU2_TR(0x72d334);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B72d338:{NFSU2_TR(0x72d338);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d33b:{NFSU2_TR(0x72d33b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72d33e:{NFSU2_TR(0x72d33e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B72d341:{NFSU2_TR(0x72d341);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72d343:{NFSU2_TR(0x72d343);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72d346:{NFSU2_TR(0x72d346);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B72d348:{NFSU2_TR(0x72d348);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d34b:{NFSU2_TR(0x72d34b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72d34e:{NFSU2_TR(0x72d34e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d351:{NFSU2_TR(0x72d351);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72d354:{NFSU2_TR(0x72d354);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d357:{NFSU2_TR(0x72d357);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d35a:{NFSU2_TR(0x72d35a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72d35e:L72d35e:{c.instructions+=2;NFSU2_TR(0x72d35e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d361:{NFSU2_TR(0x72d361);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d364:L72d364:{c.instructions+=5;NFSU2_TR(0x72d364);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72d365:{NFSU2_TR(0x72d365);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72d366:{NFSU2_TR(0x72d366);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72d367:{NFSU2_TR(0x72d367);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72d368:{NFSU2_TR(0x72d368);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d369:L72d369:{c.instructions+=9;NFSU2_TR(0x72d369);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d36d:{NFSU2_TR(0x72d36d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72d36f:{NFSU2_TR(0x72d36f);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72d373:{NFSU2_TR(0x72d373);
u8 U[4];
w4(U+0,u32(0x72d18dull));
s4(u32(r4(R+0)),r4(U+0));
}
B72d379:{NFSU2_TR(0x72d379);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d37c:{NFSU2_TR(0x72d37c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d37f:{NFSU2_TR(0x72d37f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72d383:{NFSU2_TR(0x72d383);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2aull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72d387:{NFSU2_TR(0x72d387);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72d3a2;}}
}
B72d389:L72d389:{c.instructions+=2;NFSU2_TR(0x72d389);
u8 U[6];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B72d38e:{NFSU2_TR(0x72d38e);
if(r1(R+518)){{goto L72d399;}}
}
B72d390:L72d390:{c.instructions+=2;NFSU2_TR(0x72d390);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x7337d0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72d397:{NFSU2_TR(0x72d397);
{goto L72d3bf;}
}
B72d399:L72d399:{c.instructions+=2;NFSU2_TR(0x72d399);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x733700ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72d3a0:{NFSU2_TR(0x72d3a0);
{goto L72d3bf;}
}
B72d3a2:L72d3a2:{c.instructions+=3;NFSU2_TR(0x72d3a2);
u8 U[6];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B72d3a7:{NFSU2_TR(0x72d3a7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2aull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B72d3ad:{NFSU2_TR(0x72d3ad);
if(r1(R+518)){{goto L72d3b8;}}
}
B72d3af:L72d3af:{c.instructions+=2;NFSU2_TR(0x72d3af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x733460ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72d3b6:{NFSU2_TR(0x72d3b6);
{goto L72d3bf;}
}
B72d3b8:L72d3b8:{c.instructions+=1;NFSU2_TR(0x72d3b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x733388ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72d3bf:L72d3bf:{c.instructions+=9;NFSU2_TR(0x72d3bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d3c0:{NFSU2_TR(0x72d3c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((R+28),(U+0),4);
}
B72d3c3:{NFSU2_TR(0x72d3c3);
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
B72d3c5:{NFSU2_TR(0x72d3c5);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72d3c6:{NFSU2_TR(0x72d3c6);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72d3c7:{NFSU2_TR(0x72d3c7);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72d3c8:{NFSU2_TR(0x72d3c8);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72d3c9:{NFSU2_TR(0x72d3c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72d3ca:{NFSU2_TR(0x72d3ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d3cb:L72d3cb:{c.instructions+=6;NFSU2_TR(0x72d3cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d3cf:{NFSU2_TR(0x72d3cf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x5cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72d3d2:{NFSU2_TR(0x72d3d2);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b4a00))));
}
B72d3d8:{NFSU2_TR(0x72d3d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d3db:{NFSU2_TR(0x72d3db);
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
B72d3dd:{NFSU2_TR(0x72d3dd);
if(r1(R+518)){{goto L72d3eb;}}
}
B72d3df:L72d3df:{c.instructions+=3;NFSU2_TR(0x72d3df);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d3e3:{NFSU2_TR(0x72d3e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d3e4:{NFSU2_TR(0x72d3e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d3e9ull));
TAIL_STATIC(0x72c92fu,72c);
}
B72d3e9:L72d3e9:{c.instructions+=2;NFSU2_TR(0x72d3e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d3ea:{NFSU2_TR(0x72d3ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d3eb:L72d3eb:{c.instructions+=1;NFSU2_TR(0x72d3eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d3ec:L72d3ec:{c.instructions+=12;NFSU2_TR(0x72d3ec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d3ed:{NFSU2_TR(0x72d3ed);
__builtin_memmove((R+20),(R+16),4);
}
B72d3ef:{NFSU2_TR(0x72d3ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B72d3f2:{NFSU2_TR(0x72d3f2);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d3f5:{NFSU2_TR(0x72d3f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d3f6:{NFSU2_TR(0x72d3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72d3f9:{NFSU2_TR(0x72d3f9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B72d3ff:{NFSU2_TR(0x72d3ff);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x5cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B72d402:{NFSU2_TR(0x72d402);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72d404:{NFSU2_TR(0x72d404);
w4(R+24,u32(u32(r4(R+24))+u32(m4(0x8b4a00))));
}
B72d40a:{NFSU2_TR(0x72d40a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72d40d:{NFSU2_TR(0x72d40d);
if(r1(R+514)){{goto L72d489;}}
}
B72d40f:L72d40f:{c.instructions+=2;NFSU2_TR(0x72d40f);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72d413:{NFSU2_TR(0x72d413);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72d44a;}}
}
B72d415:L72d415:{c.instructions+=2;NFSU2_TR(0x72d415);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d417:{NFSU2_TR(0x72d417);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d41cull));
TAIL_STATIC(0x724792u,724);
}
B72d41c:L72d41c:{c.instructions+=8;NFSU2_TR(0x72d41c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d41f:{NFSU2_TR(0x72d41f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72d423:{NFSU2_TR(0x72d423);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d426:{NFSU2_TR(0x72d426);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w2(U+4,u16(0x28ull));
s2(u32(r4(U+0)),r2(U+4));
}
B72d42c:{NFSU2_TR(0x72d42c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d42f:{NFSU2_TR(0x72d42f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72d433:{NFSU2_TR(0x72d433);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d436:{NFSU2_TR(0x72d436);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d43bull));
TAIL_STATIC(0x72aa98u,72a);
}
B72d43b:L72d43b:{c.instructions+=4;NFSU2_TR(0x72d43b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d43e:{NFSU2_TR(0x72d43e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72d441:{NFSU2_TR(0x72d441);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d442:{NFSU2_TR(0x72d442);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d447ull));
TAIL_STATIC(0x72a1e9u,72a);
}
B72d447:L72d447:{c.instructions+=1;NFSU2_TR(0x72d447);
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
B72d44a:L72d44a:{c.instructions+=17;NFSU2_TR(0x72d44a);
w4(R+0,u32(m2(0x8b44c6)));
}
B72d451:{NFSU2_TR(0x72d451);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d454:{NFSU2_TR(0x72d454);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B72d457:{NFSU2_TR(0x72d457);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72d45a:{NFSU2_TR(0x72d45a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d45d:{NFSU2_TR(0x72d45d);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d460:{NFSU2_TR(0x72d460);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d463:{NFSU2_TR(0x72d463);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d466:{NFSU2_TR(0x72d466);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72d469:{NFSU2_TR(0x72d469);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d46c:{NFSU2_TR(0x72d46c);
u8 U[45];
w4(U+37,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
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
B72d46f:{NFSU2_TR(0x72d46f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d472:{NFSU2_TR(0x72d472);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72d475:{NFSU2_TR(0x72d475);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d476:{NFSU2_TR(0x72d476);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x100ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72d47d:{NFSU2_TR(0x72d47d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d480:{NFSU2_TR(0x72d480);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d485ull));
TAIL_STATIC(0x72aabeu,72a);
}
B72d485:L72d485:{c.instructions+=3;NFSU2_TR(0x72d485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d486:{NFSU2_TR(0x72d486);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d487:{NFSU2_TR(0x72d487);
{goto L72d4a9;}
}
B72d489:L72d489:{c.instructions+=3;NFSU2_TR(0x72d489);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d48c:{NFSU2_TR(0x72d48c);
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
B72d48e:{NFSU2_TR(0x72d48e);
if(r1(R+518)){{goto L72d4a9;}}
}
B72d490:L72d490:{c.instructions+=4;NFSU2_TR(0x72d490);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d491:{NFSU2_TR(0x72d491);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72d494:{NFSU2_TR(0x72d494);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d495:{NFSU2_TR(0x72d495);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d49aull));
TAIL_STATIC(0x72a229u,72a);
}
B72d49a:L72d49a:{c.instructions+=2;NFSU2_TR(0x72d49a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d49d:{NFSU2_TR(0x72d49d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d4a2ull));
TAIL_STATIC(0x724894u,724);
}
B72d4a2:L72d4a2:{c.instructions+=2;NFSU2_TR(0x72d4a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B72d4a5:{NFSU2_TR(0x72d4a5);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72d4a9:L72d4a9:{c.instructions+=3;NFSU2_TR(0x72d4a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72d4aa:{NFSU2_TR(0x72d4aa);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72d4ab:{NFSU2_TR(0x72d4ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d4ac:L72d4ac:{c.instructions+=12;NFSU2_TR(0x72d4ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d4ad:{NFSU2_TR(0x72d4ad);
__builtin_memmove((R+20),(R+16),4);
}
B72d4af:{NFSU2_TR(0x72d4af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d4b0:{NFSU2_TR(0x72d4b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d4b1:{NFSU2_TR(0x72d4b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d4b2:{NFSU2_TR(0x72d4b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72d4b5:{NFSU2_TR(0x72d4b5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x5cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B72d4b8:{NFSU2_TR(0x72d4b8);
w4(R+24,u32(u32(r4(R+24))+u32(m4(0x8b4a00))));
}
B72d4be:{NFSU2_TR(0x72d4be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d4bf:{NFSU2_TR(0x72d4bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72d4c2:{NFSU2_TR(0x72d4c2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72d4c4:{NFSU2_TR(0x72d4c4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72d524;}}
}
B72d4c6:L72d4c6:{c.instructions+=2;NFSU2_TR(0x72d4c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72d4ca:{NFSU2_TR(0x72d4ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72d501;}}
}
B72d4cc:L72d4cc:{c.instructions+=2;NFSU2_TR(0x72d4cc);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d4ce:{NFSU2_TR(0x72d4ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d4d3ull));
TAIL_STATIC(0x724792u,724);
}
B72d4d3:L72d4d3:{c.instructions+=8;NFSU2_TR(0x72d4d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d4d6:{NFSU2_TR(0x72d4d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72d4da:{NFSU2_TR(0x72d4da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d4dd:{NFSU2_TR(0x72d4dd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w2(U+4,u16(0x50ull));
s2(u32(r4(U+0)),r2(U+4));
}
B72d4e3:{NFSU2_TR(0x72d4e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d4e6:{NFSU2_TR(0x72d4e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72d4ea:{NFSU2_TR(0x72d4ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d4ed:{NFSU2_TR(0x72d4ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d4f2ull));
TAIL_STATIC(0x72a956u,72a);
}
B72d4f2:L72d4f2:{c.instructions+=4;NFSU2_TR(0x72d4f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d4f5:{NFSU2_TR(0x72d4f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72d4f8:{NFSU2_TR(0x72d4f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d4f9:{NFSU2_TR(0x72d4f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d4feull));
TAIL_STATIC(0x72a1e9u,72a);
}
B72d4fe:L72d4fe:{c.instructions+=1;NFSU2_TR(0x72d4fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B72d501:L72d501:{c.instructions+=9;NFSU2_TR(0x72d501);
w4(R+0,u32(m2(0x8b44c6)));
}
B72d508:{NFSU2_TR(0x72d508);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72d50b:{NFSU2_TR(0x72d50b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d50e:{NFSU2_TR(0x72d50e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72d511:{NFSU2_TR(0x72d511);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B72d514:{NFSU2_TR(0x72d514);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d515:{NFSU2_TR(0x72d515);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d518:{NFSU2_TR(0x72d518);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d51b:{NFSU2_TR(0x72d51b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d520ull));
TAIL_STATIC(0x72a981u,72a);
}
B72d520:L72d520:{c.instructions+=3;NFSU2_TR(0x72d520);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d521:{NFSU2_TR(0x72d521);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d522:{NFSU2_TR(0x72d522);
{goto L72d544;}
}
B72d524:L72d524:{c.instructions+=3;NFSU2_TR(0x72d524);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d527:{NFSU2_TR(0x72d527);
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
B72d529:{NFSU2_TR(0x72d529);
if(r1(R+518)){{goto L72d544;}}
}
B72d52b:L72d52b:{c.instructions+=4;NFSU2_TR(0x72d52b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d52c:{NFSU2_TR(0x72d52c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72d52f:{NFSU2_TR(0x72d52f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d530:{NFSU2_TR(0x72d530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d535ull));
TAIL_STATIC(0x72a229u,72a);
}
B72d535:L72d535:{c.instructions+=2;NFSU2_TR(0x72d535);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d538:{NFSU2_TR(0x72d538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d53dull));
TAIL_STATIC(0x724894u,724);
}
B72d53d:L72d53d:{c.instructions+=2;NFSU2_TR(0x72d53d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B72d540:{NFSU2_TR(0x72d540);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72d544:L72d544:{c.instructions+=4;NFSU2_TR(0x72d544);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72d545:{NFSU2_TR(0x72d545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72d546:{NFSU2_TR(0x72d546);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72d547:{NFSU2_TR(0x72d547);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d548:L72d548:{c.instructions+=6;NFSU2_TR(0x72d548);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d54c:{NFSU2_TR(0x72d54c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x5cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72d54f:{NFSU2_TR(0x72d54f);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8b4a00))));
}
B72d555:{NFSU2_TR(0x72d555);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72d558:{NFSU2_TR(0x72d558);
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
B72d55a:{NFSU2_TR(0x72d55a);
if(r1(R+518)){{goto L72d563;}}
}
B72d55c:L72d55c:{c.instructions+=2;NFSU2_TR(0x72d55c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d55f:{NFSU2_TR(0x72d55f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d561ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B72d561:L72d561:{c.instructions+=2;NFSU2_TR(0x72d561);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d562:{NFSU2_TR(0x72d562);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d563:L72d563:{c.instructions+=2;NFSU2_TR(0x72d563);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72d566:{NFSU2_TR(0x72d566);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d567:L72d567:{c.instructions+=8;NFSU2_TR(0x72d567);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d56b:{NFSU2_TR(0x72d56b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d56d:{NFSU2_TR(0x72d56d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d56e:{NFSU2_TR(0x72d56e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B72d56f:{NFSU2_TR(0x72d56f);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x72d56f);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x72d56f);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B72d571:{NFSU2_TR(0x72d571);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d572:{NFSU2_TR(0x72d572);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d576:{NFSU2_TR(0x72d576);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d57bull));
TAIL_STATIC(0x7339e9u,733);
}
B72d57b:L72d57b:{c.instructions+=4;NFSU2_TR(0x72d57b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d57c:{NFSU2_TR(0x72d57c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d57d:{NFSU2_TR(0x72d57d);
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
B72d580:{NFSU2_TR(0x72d580);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d581:L72d581:{c.instructions+=36;NFSU2_TR(0x72d581);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d585:{NFSU2_TR(0x72d585);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d58b:{NFSU2_TR(0x72d58b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72d58d:{NFSU2_TR(0x72d58d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72d58f:{NFSU2_TR(0x72d58f);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B72d591:{NFSU2_TR(0x72d591);
{u32 ea_=u32(u32(7887724u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d597:{NFSU2_TR(0x72d597);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72d599:{NFSU2_TR(0x72d599);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B72d59b:{NFSU2_TR(0x72d59b);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d5a1:{NFSU2_TR(0x72d5a1);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72d5a3:{NFSU2_TR(0x72d5a3);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B72d5a5:{NFSU2_TR(0x72d5a5);
{u32 ea_=u32(u32(8153720u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d5ab:{NFSU2_TR(0x72d5ab);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72d5ad:{NFSU2_TR(0x72d5ad);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B72d5af:{NFSU2_TR(0x72d5af);
{u32 ea_=u32(u32(8153716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d5b5:{NFSU2_TR(0x72d5b5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72d5b7:{NFSU2_TR(0x72d5b7);
__asm__ volatile(".byte 0xd8,0xce":::"memory");
}
B72d5b9:{NFSU2_TR(0x72d5b9);
{u32 ea_=u32(u32(8153712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d5bf:{NFSU2_TR(0x72d5bf);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72d5c1:{NFSU2_TR(0x72d5c1);
__asm__ volatile(".byte 0xd8,0xcf":::"memory");
}
B72d5c3:{NFSU2_TR(0x72d5c3);
{u32 ea_=u32(u32(8153708u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d5c9:{NFSU2_TR(0x72d5c9);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B72d5cb:{NFSU2_TR(0x72d5cb);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B72d5cd:{NFSU2_TR(0x72d5cd);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B72d5cf:{NFSU2_TR(0x72d5cf);
__asm__ volatile(".byte 0xd8,0xc4":::"memory");
}
B72d5d1:{NFSU2_TR(0x72d5d1);
__asm__ volatile(".byte 0xd8,0xc5":::"memory");
}
B72d5d3:{NFSU2_TR(0x72d5d3);
__asm__ volatile(".byte 0xd8,0xc6":::"memory");
}
B72d5d5:{NFSU2_TR(0x72d5d5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72d5db:{NFSU2_TR(0x72d5db);
__asm__ volatile(".byte 0xdd,0xdf":::"memory");
}
B72d5dd:{NFSU2_TR(0x72d5dd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72d5df:{NFSU2_TR(0x72d5df);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72d5e1:{NFSU2_TR(0x72d5e1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72d5e3:{NFSU2_TR(0x72d5e3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72d5e5:{NFSU2_TR(0x72d5e5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72d5e7:{NFSU2_TR(0x72d5e7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72d5e9:{NFSU2_TR(0x72d5e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d5ea:L72d5ea:{c.instructions+=18;NFSU2_TR(0x72d5ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d5ee:{NFSU2_TR(0x72d5ee);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72d5f0:{NFSU2_TR(0x72d5f0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d5f2:{NFSU2_TR(0x72d5f2);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72d5f4:{NFSU2_TR(0x72d5f4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d5f7:{NFSU2_TR(0x72d5f7);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72d5f9:{NFSU2_TR(0x72d5f9);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d5fc:{NFSU2_TR(0x72d5fc);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72d5fe:{NFSU2_TR(0x72d5fe);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d601:{NFSU2_TR(0x72d601);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72d603:{NFSU2_TR(0x72d603);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d606:{NFSU2_TR(0x72d606);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72d608:{NFSU2_TR(0x72d608);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d60b:{NFSU2_TR(0x72d60b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72d60d:{NFSU2_TR(0x72d60d);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d610:{NFSU2_TR(0x72d610);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72d612:{NFSU2_TR(0x72d612);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d615:{NFSU2_TR(0x72d615);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d616:L72d616:{c.instructions+=4;NFSU2_TR(0x72d616);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d617:{NFSU2_TR(0x72d617);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72d61b:{NFSU2_TR(0x72d61b);
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
B72d61d:{NFSU2_TR(0x72d61d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72d695;}}
}
B72d61f:L72d61f:{c.instructions+=5;NFSU2_TR(0x72d61f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72d623:{NFSU2_TR(0x72d623);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72d627:{NFSU2_TR(0x72d627);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d62b:{NFSU2_TR(0x72d62b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B72d62d:{NFSU2_TR(0x72d62d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d62e:L72d62e:{c.instructions+=38;NFSU2_TR(0x72d62e);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d631:{NFSU2_TR(0x72d631);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72d633:{NFSU2_TR(0x72d633);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d636:{NFSU2_TR(0x72d636);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d639:{NFSU2_TR(0x72d639);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72d63c:{NFSU2_TR(0x72d63c);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d63f:{NFSU2_TR(0x72d63f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72d641:{NFSU2_TR(0x72d641);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d644:{NFSU2_TR(0x72d644);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72d647:{NFSU2_TR(0x72d647);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d64a:{NFSU2_TR(0x72d64a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72d64c:{NFSU2_TR(0x72d64c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d64e:{NFSU2_TR(0x72d64e);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72d651:{NFSU2_TR(0x72d651);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d654:{NFSU2_TR(0x72d654);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72d656:{NFSU2_TR(0x72d656);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d659:{NFSU2_TR(0x72d659);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d65c:{NFSU2_TR(0x72d65c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72d65e:{NFSU2_TR(0x72d65e);
{u32 ea_=u32(r4(R+4)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d661:{NFSU2_TR(0x72d661);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72d664:{NFSU2_TR(0x72d664);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d667:{NFSU2_TR(0x72d667);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72d66a:{NFSU2_TR(0x72d66a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d66d:{NFSU2_TR(0x72d66d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72d670:{NFSU2_TR(0x72d670);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d673:{NFSU2_TR(0x72d673);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72d676:{NFSU2_TR(0x72d676);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d679:{NFSU2_TR(0x72d679);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72d67c:{NFSU2_TR(0x72d67c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d67f:{NFSU2_TR(0x72d67f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72d682:{NFSU2_TR(0x72d682);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d685:{NFSU2_TR(0x72d685);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B72d687:{NFSU2_TR(0x72d687);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d68a:{NFSU2_TR(0x72d68a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B72d68c:{NFSU2_TR(0x72d68c);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B72d68f:{NFSU2_TR(0x72d68f);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72d690:{NFSU2_TR(0x72d690);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B72d692:{NFSU2_TR(0x72d692);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72d62eu);}goto L72d62e;}}
}
B72d694:L72d694:{c.instructions+=1;NFSU2_TR(0x72d694);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72d695:L72d695:{c.instructions+=2;NFSU2_TR(0x72d695);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72d696:{NFSU2_TR(0x72d696);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d697:L72d697:{c.instructions+=9;NFSU2_TR(0x72d697);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d698:{NFSU2_TR(0x72d698);
__builtin_memmove((R+20),(R+16),4);
}
B72d69a:{NFSU2_TR(0x72d69a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B72d69d:{NFSU2_TR(0x72d69d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72d6a1:{NFSU2_TR(0x72d6a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d6a2:{NFSU2_TR(0x72d6a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d6a3:{NFSU2_TR(0x72d6a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72d6a6:{NFSU2_TR(0x72d6a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d6a7:{NFSU2_TR(0x72d6a7);
if(r1(R+518)){{goto L72d6af;}}
}
B72d6a9:L72d6a9:{c.instructions+=2;NFSU2_TR(0x72d6a9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72d6ad:{NFSU2_TR(0x72d6ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72d6c6;}}
}
B72d6af:L72d6af:{c.instructions+=5;NFSU2_TR(0x72d6af);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d6b5:{NFSU2_TR(0x72d6b5);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B72d6b8:{NFSU2_TR(0x72d6b8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72d6ba:{NFSU2_TR(0x72d6ba);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72d6bd:{NFSU2_TR(0x72d6bd);
if(r1(R+514)){{goto L72d6c4;}}
}
B72d6bf:L72d6bf:{c.instructions+=2;NFSU2_TR(0x72d6bf);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d6c2:{NFSU2_TR(0x72d6c2);
{goto L72d6c6;}
}
B72d6c4:L72d6c4:{c.instructions+=1;NFSU2_TR(0x72d6c4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72d6c6:L72d6c6:{c.instructions+=4;NFSU2_TR(0x72d6c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d6c9:{NFSU2_TR(0x72d6c9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B72d6ca:{NFSU2_TR(0x72d6ca);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B72d6cb:{NFSU2_TR(0x72d6cb);
if(r1(R+518)){{goto L72d781;}}
}
B72d6d1:L72d6d1:{c.instructions+=2;NFSU2_TR(0x72d6d1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B72d6d2:{NFSU2_TR(0x72d6d2);
if(r1(R+518)){{goto L72d745;}}
}
B72d6d4:L72d6d4:{c.instructions+=2;NFSU2_TR(0x72d6d4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B72d6d5:{NFSU2_TR(0x72d6d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72d7bb;}}
}
B72d6db:L72d6db:{c.instructions+=5;NFSU2_TR(0x72d6db);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d6de:{NFSU2_TR(0x72d6de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72d6e5:{NFSU2_TR(0x72d6e5);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72d6e8:{NFSU2_TR(0x72d6e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+28),(U+0),4);
}
B72d6eb:{NFSU2_TR(0x72d6eb);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d6ee:L72d6ee:{c.instructions+=10;NFSU2_TR(0x72d6ee);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72d6f1:{NFSU2_TR(0x72d6f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d6f2:{NFSU2_TR(0x72d6f2);
{u32 ea_=u32(u32(7892376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d6f8:{NFSU2_TR(0x72d6f8);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d6fb:{NFSU2_TR(0x72d6fb);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d6fe:{NFSU2_TR(0x72d6fe);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72d701:{NFSU2_TR(0x72d701);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d704:{NFSU2_TR(0x72d704);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d70a:{NFSU2_TR(0x72d70a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d70d:{NFSU2_TR(0x72d70d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d712ull));
TAIL_STATIC(0x72a0aeu,72a);
}
B72d712:L72d712:{c.instructions+=8;NFSU2_TR(0x72d712);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B72d715:{NFSU2_TR(0x72d715);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d718:{NFSU2_TR(0x72d718);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d71b:{NFSU2_TR(0x72d71b);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72d71e:{NFSU2_TR(0x72d71e);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d721:{NFSU2_TR(0x72d721);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d727:{NFSU2_TR(0x72d727);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d72a:{NFSU2_TR(0x72d72a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d72full));
TAIL_STATIC(0x72a032u,72a);
}
B72d72f:L72d72f:{c.instructions+=8;NFSU2_TR(0x72d72f);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d732:{NFSU2_TR(0x72d732);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72d735:{NFSU2_TR(0x72d735);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d736:{NFSU2_TR(0x72d736);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B72d738:{NFSU2_TR(0x72d738);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d73a:{NFSU2_TR(0x72d73a);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x4ull))));
}
B72d73d:{NFSU2_TR(0x72d73d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72d741:{NFSU2_TR(0x72d741);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72d6eeu);}goto L72d6ee;}}
}
B72d743:L72d743:{c.instructions+=1;NFSU2_TR(0x72d743);
{goto L72d7bb;}
}
B72d745:L72d745:{c.instructions+=4;NFSU2_TR(0x72d745);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d748:{NFSU2_TR(0x72d748);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d74b:{NFSU2_TR(0x72d74b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72d752:{NFSU2_TR(0x72d752);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+28),(U+0),4);
}
B72d755:L72d755:{c.instructions+=7;NFSU2_TR(0x72d755);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72d758:{NFSU2_TR(0x72d758);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d759:{NFSU2_TR(0x72d759);
{u32 ea_=u32(u32(7892376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d75f:{NFSU2_TR(0x72d75f);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72d762:{NFSU2_TR(0x72d762);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d765:{NFSU2_TR(0x72d765);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d768:{NFSU2_TR(0x72d768);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d76dull));
TAIL_STATIC(0x72a0aeu,72a);
}
B72d76d:L72d76d:{c.instructions+=7;NFSU2_TR(0x72d76d);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B72d770:{NFSU2_TR(0x72d770);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72d773:{NFSU2_TR(0x72d773);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d774:{NFSU2_TR(0x72d774);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d776:{NFSU2_TR(0x72d776);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x4ull))));
}
B72d779:{NFSU2_TR(0x72d779);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72d77d:{NFSU2_TR(0x72d77d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72d755u);}goto L72d755;}}
}
B72d77f:L72d77f:{c.instructions+=1;NFSU2_TR(0x72d77f);
{goto L72d7bb;}
}
B72d781:L72d781:{c.instructions+=4;NFSU2_TR(0x72d781);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d784:{NFSU2_TR(0x72d784);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d787:{NFSU2_TR(0x72d787);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72d78e:{NFSU2_TR(0x72d78e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+28),(U+0),4);
}
B72d791:L72d791:{c.instructions+=7;NFSU2_TR(0x72d791);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72d794:{NFSU2_TR(0x72d794);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d795:{NFSU2_TR(0x72d795);
{u32 ea_=u32(u32(7892376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d79b:{NFSU2_TR(0x72d79b);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72d79e:{NFSU2_TR(0x72d79e);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d7a1:{NFSU2_TR(0x72d7a1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d7a4:{NFSU2_TR(0x72d7a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d7a9ull));
TAIL_STATIC(0x72a0aeu,72a);
}
B72d7a9:L72d7a9:{c.instructions+=7;NFSU2_TR(0x72d7a9);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B72d7ac:{NFSU2_TR(0x72d7ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72d7af:{NFSU2_TR(0x72d7af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d7b0:{NFSU2_TR(0x72d7b0);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d7b2:{NFSU2_TR(0x72d7b2);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x4ull))));
}
B72d7b5:{NFSU2_TR(0x72d7b5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72d7b9:{NFSU2_TR(0x72d7b9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72d791u);}goto L72d791;}}
}
B72d7bb:L72d7bb:{c.instructions+=5;NFSU2_TR(0x72d7bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72d7bf:{NFSU2_TR(0x72d7bf);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72d7c1:{NFSU2_TR(0x72d7c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72d7c4:{NFSU2_TR(0x72d7c4);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d7c7:{NFSU2_TR(0x72d7c7);
__builtin_memmove((R+28),(R+12),4);
}
B72d7c9:L72d7c9:{c.instructions+=2;NFSU2_TR(0x72d7c9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72d7cd:{NFSU2_TR(0x72d7cd);
if(r1(R+518)){{goto L72d81d;}}
}
B72d7cf:L72d7cf:{c.instructions+=2;NFSU2_TR(0x72d7cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72d7d3:{NFSU2_TR(0x72d7d3);
if(r1(R+518)){{goto L72d81d;}}
}
B72d7d5:L72d7d5:{c.instructions+=2;NFSU2_TR(0x72d7d5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72d7d9:{NFSU2_TR(0x72d7d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72d846;}}
}
B72d7db:L72d7db:{c.instructions+=5;NFSU2_TR(0x72d7db);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72d7de:{NFSU2_TR(0x72d7de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d7df:{NFSU2_TR(0x72d7df);
{u32 ea_=u32(u32(7881884u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d7e5:{NFSU2_TR(0x72d7e5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d7e8:{NFSU2_TR(0x72d7e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d7edull));
TAIL_STATIC(0x72a032u,72a);
}
B72d7ed:L72d7ed:{c.instructions+=14;NFSU2_TR(0x72d7ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d7f0:{NFSU2_TR(0x72d7f0);
{u32 ea_=u32(u32(8153724u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d7f6:{NFSU2_TR(0x72d7f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d7f7:{NFSU2_TR(0x72d7f7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d7f9:{NFSU2_TR(0x72d7f9);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B72d7fa:{NFSU2_TR(0x72d7fa);
{u32 ea_=u32(u32(7920052u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B72d800:{NFSU2_TR(0x72d800);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d801:{NFSU2_TR(0x72d801);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x72d801);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x72d801);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B72d803:{NFSU2_TR(0x72d803);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d805:{NFSU2_TR(0x72d805);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B72d807:{NFSU2_TR(0x72d807);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72d80a:{NFSU2_TR(0x72d80a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d80c:{NFSU2_TR(0x72d80c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72d80e:{NFSU2_TR(0x72d80e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72d815;}}
}
B72d810:L72d810:{c.instructions+=2;NFSU2_TR(0x72d810);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d813:{NFSU2_TR(0x72d813);
{goto L72d840;}
}
B72d815:L72d815:{c.instructions+=3;NFSU2_TR(0x72d815);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d818:{NFSU2_TR(0x72d818);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72d81b:{NFSU2_TR(0x72d81b);
{goto L72d843;}
}
B72d81d:L72d81d:{c.instructions+=5;NFSU2_TR(0x72d81d);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72d820:{NFSU2_TR(0x72d820);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d821:{NFSU2_TR(0x72d821);
{u32 ea_=u32(u32(7881884u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d827:{NFSU2_TR(0x72d827);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d82a:{NFSU2_TR(0x72d82a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d82full));
TAIL_STATIC(0x72a032u,72a);
}
B72d82f:L72d82f:{c.instructions+=5;NFSU2_TR(0x72d82f);
{u32 ea_=u32(u32(8153724u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d835:{NFSU2_TR(0x72d835);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d836:{NFSU2_TR(0x72d836);
{u32 ea_=u32(u32(7920052u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B72d83c:{NFSU2_TR(0x72d83c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d83e:{NFSU2_TR(0x72d83e);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72d840:L72d840:{c.instructions+=1;NFSU2_TR(0x72d840);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72d843:L72d843:{c.instructions+=1;NFSU2_TR(0x72d843);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d846:L72d846:{c.instructions+=4;NFSU2_TR(0x72d846);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72d849:{NFSU2_TR(0x72d849);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B72d84c:{NFSU2_TR(0x72d84c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72d850:{NFSU2_TR(0x72d850);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72d7c9u);}goto L72d7c9;}}
}
B72d856:L72d856:{c.instructions+=2;NFSU2_TR(0x72d856);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72d85a:{NFSU2_TR(0x72d85a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72d874;}}
}
B72d85c:L72d85c:{c.instructions+=8;NFSU2_TR(0x72d85c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d862:{NFSU2_TR(0x72d862);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d865:{NFSU2_TR(0x72d865);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B72d867:{NFSU2_TR(0x72d867);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d86a:{NFSU2_TR(0x72d86a);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d86d:{NFSU2_TR(0x72d86d);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B72d86f:{NFSU2_TR(0x72d86f);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d872:{NFSU2_TR(0x72d872);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72d874:L72d874:{c.instructions+=7;NFSU2_TR(0x72d874);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d877:{NFSU2_TR(0x72d877);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B72d879:{NFSU2_TR(0x72d879);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72d87c:{NFSU2_TR(0x72d87c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B72d882:{NFSU2_TR(0x72d882);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72d884:{NFSU2_TR(0x72d884);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72d887:{NFSU2_TR(0x72d887);
if(r1(R+514)){{goto L72d88f;}}
}
B72d889:L72d889:{c.instructions+=1;NFSU2_TR(0x72d889);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d88f:L72d88f:{c.instructions+=8;NFSU2_TR(0x72d88f);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d891:{NFSU2_TR(0x72d891);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B72d893:{NFSU2_TR(0x72d893);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d894:{NFSU2_TR(0x72d894);
__asm__ volatile(".byte 0xde,0xf1":::"memory");
}
B72d896:{NFSU2_TR(0x72d896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72d897:{NFSU2_TR(0x72d897);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72d898:{NFSU2_TR(0x72d898);
__builtin_memmove((R+0),(R+12),4);
}
B72d89a:{NFSU2_TR(0x72d89a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72d89b:L72d89b:{c.instructions+=6;NFSU2_TR(0x72d89b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72d89d:{NFSU2_TR(0x72d89d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d89f:{NFSU2_TR(0x72d89f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d8a1:{NFSU2_TR(0x72d8a1);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B72d8a4:{NFSU2_TR(0x72d8a4);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72d8a5:{NFSU2_TR(0x72d8a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72d89bu);}goto L72d89b;}}
}
B72d8a7:L72d8a7:{c.instructions+=3;NFSU2_TR(0x72d8a7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72d8a9:{NFSU2_TR(0x72d8a9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72d8aa:{NFSU2_TR(0x72d8aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d8b0:L72d8b0:{c.instructions+=15;NFSU2_TR(0x72d8b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d8b1:{NFSU2_TR(0x72d8b1);
__builtin_memmove((R+20),(R+16),4);
}
B72d8b3:{NFSU2_TR(0x72d8b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d8b4:{NFSU2_TR(0x72d8b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d8b5:{NFSU2_TR(0x72d8b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d8b6:{NFSU2_TR(0x72d8b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d8b7:{NFSU2_TR(0x72d8b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72d8ba:{NFSU2_TR(0x72d8ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72d8bd:{NFSU2_TR(0x72d8bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B72d8c0:{NFSU2_TR(0x72d8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72d8c3:{NFSU2_TR(0x72d8c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72d8c6:{NFSU2_TR(0x72d8c6);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B72d8c8:{NFSU2_TR(0x72d8c8);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B72d8ca:{NFSU2_TR(0x72d8ca);
w4(R+4,u32(0-u32(r4(R+4))));
}
B72d8cc:{NFSU2_TR(0x72d8cc);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d8ce:L72d8ce:{c.instructions+=7;NFSU2_TR(0x72d8ce);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d8d1:{NFSU2_TR(0x72d8d1);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72d8d4:{NFSU2_TR(0x72d8d4);
{u32 ea_=u32(r4(R+24)+r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72d8d7:{NFSU2_TR(0x72d8d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72d8d9:{NFSU2_TR(0x72d8d9);
{u32 ea_=u32(r4(R+12)+r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72d8dc:{NFSU2_TR(0x72d8dc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72d8df:{NFSU2_TR(0x72d8df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72d8ceu);}goto L72d8ce;}}
}
B72d8e1:L72d8e1:{c.instructions+=7;NFSU2_TR(0x72d8e1);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72d8e3:{NFSU2_TR(0x72d8e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72d8e4:{NFSU2_TR(0x72d8e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72d8e5:{NFSU2_TR(0x72d8e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d8e6:{NFSU2_TR(0x72d8e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72d8e7:{NFSU2_TR(0x72d8e7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72d8e8:{NFSU2_TR(0x72d8e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d8e9:L72d8e9:{c.instructions+=9;NFSU2_TR(0x72d8e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d8ea:{NFSU2_TR(0x72d8ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d8eb:{NFSU2_TR(0x72d8eb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72d8ef:{NFSU2_TR(0x72d8ef);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x5cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B72d8f2:{NFSU2_TR(0x72d8f2);
w4(R+24,u32(u32(r4(R+24))+u32(m4(0x8b4a00))));
}
B72d8f8:{NFSU2_TR(0x72d8f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d8f9:{NFSU2_TR(0x72d8f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72d8fd:{NFSU2_TR(0x72d8fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d900:{NFSU2_TR(0x72d900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d905ull));
TAIL_STATIC(0x724792u,724);
}
B72d905:L72d905:{c.instructions+=5;NFSU2_TR(0x72d905);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72d909:{NFSU2_TR(0x72d909);
__builtin_memmove((R+12),(R+0),4);
}
B72d90b:{NFSU2_TR(0x72d90b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B72d90d:{NFSU2_TR(0x72d90d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d90e:{NFSU2_TR(0x72d90e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d911ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B72d911:L72d911:{c.instructions+=11;NFSU2_TR(0x72d911);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B72d915:{NFSU2_TR(0x72d915);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72d919:{NFSU2_TR(0x72d919);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d91c:{NFSU2_TR(0x72d91c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B72d91e:{NFSU2_TR(0x72d91e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d921:{NFSU2_TR(0x72d921);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d922:{NFSU2_TR(0x72d922);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B72d925:{NFSU2_TR(0x72d925);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d926:{NFSU2_TR(0x72d926);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d929:{NFSU2_TR(0x72d929);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1aull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72d92d:{NFSU2_TR(0x72d92d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d932ull));
TAIL_STATIC(0x72a1e9u,72a);
}
B72d932:L72d932:{c.instructions+=5;NFSU2_TR(0x72d932);
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
B72d935:{NFSU2_TR(0x72d935);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72d936:{NFSU2_TR(0x72d936);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72d937:{NFSU2_TR(0x72d937);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72d938:{NFSU2_TR(0x72d938);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d939:L72d939:{c.instructions+=7;NFSU2_TR(0x72d939);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72d93d:{NFSU2_TR(0x72d93d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72d941:{NFSU2_TR(0x72d941);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72d945:{NFSU2_TR(0x72d945);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d948:{NFSU2_TR(0x72d948);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d94b:{NFSU2_TR(0x72d94b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d94e:{NFSU2_TR(0x72d94e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d951:L72d951:{c.instructions+=3;NFSU2_TR(0x72d951);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d953:{NFSU2_TR(0x72d953);
u8 U[4];
w4(U+0,u32(0x7c6b58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d958:{NFSU2_TR(0x72d958);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d95dull));
TAIL_STATIC(0x760da0u,760);
}
B72d95d:L72d95d:{c.instructions+=9;NFSU2_TR(0x72d95d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe7ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72d961:{NFSU2_TR(0x72d961);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72d965:{NFSU2_TR(0x72d965);
w4(R+0,u32(0x1ull));
}
B72d96a:{NFSU2_TR(0x72d96a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72d96c:{NFSU2_TR(0x72d96c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72d96e:{NFSU2_TR(0x72d96e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72d970:{NFSU2_TR(0x72d970);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L72d970_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L72d970_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L72d970_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L72d970_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L72d970_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L72d970_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L72d970_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L72d970_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L72d970_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L72d970_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L72d970_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L72d970_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L72d970_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L72d970_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L72d970_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L72d970_65;}
{SPILL();c.pc=0x72d970u;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d970_67;
L72d970_35:;
{SPILL();c.pc=0x72d970u;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d970_67;
L72d970_37:;
{SPILL();c.pc=0x72d970u;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d970_67;
L72d970_39:;
{SPILL();c.pc=0x72d970u;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d970_67;
L72d970_41:;
{SPILL();c.pc=0x72d970u;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d970_67;
L72d970_43:;
{SPILL();c.pc=0x72d970u;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d970_67;
L72d970_45:;
{SPILL();c.pc=0x72d970u;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d970_67;
L72d970_47:;
{SPILL();c.pc=0x72d970u;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d970_67;
L72d970_49:;
{SPILL();c.pc=0x72d970u;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d970_67;
L72d970_51:;
{SPILL();c.pc=0x72d970u;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d970_67;
L72d970_53:;
{SPILL();c.pc=0x72d970u;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d970_67;
L72d970_55:;
{SPILL();c.pc=0x72d970u;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d970_67;
L72d970_57:;
{SPILL();c.pc=0x72d970u;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d970_67;
L72d970_59:;
{SPILL();c.pc=0x72d970u;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d970_67;
L72d970_61:;
{SPILL();c.pc=0x72d970u;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d970_67;
L72d970_63:;
{SPILL();c.pc=0x72d970u;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d970_67;
L72d970_65:;
{SPILL();c.pc=0x72d970u;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72d970_67;
L72d970_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B72d972:{NFSU2_TR(0x72d972);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72d975:{NFSU2_TR(0x72d975);
{goto L72d982;}
}
B72d977:L72d977:{c.instructions+=3;NFSU2_TR(0x72d977);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72d979:{NFSU2_TR(0x72d979);
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
B72d97a:{NFSU2_TR(0x72d97a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d97b:L72d97b:{c.instructions+=2;NFSU2_TR(0x72d97b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B72d97e:{NFSU2_TR(0x72d97e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe7ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72d982:L72d982:{c.instructions+=3;NFSU2_TR(0x72d982);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72d986:{NFSU2_TR(0x72d986);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72d98a:{NFSU2_TR(0x72d98a);
if(r1(R+518)){{goto L72d9b1;}}
}
B72d98c:L72d98c:{c.instructions+=2;NFSU2_TR(0x72d98c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B72d990:{NFSU2_TR(0x72d990);
if(r1(R+518)){{goto L72d9b1;}}
}
B72d992:L72d992:{c.instructions+=3;NFSU2_TR(0x72d992);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72d999:{NFSU2_TR(0x72d999);
w2(R+4260,u16(0xffffull));
}
B72d99b:{NFSU2_TR(0x72d99b);
{goto L72d9a8;}
}
B72d99d:L72d99d:{c.instructions+=3;NFSU2_TR(0x72d99d);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72d99f:{NFSU2_TR(0x72d99f);
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
B72d9a0:{NFSU2_TR(0x72d9a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d9a1:L72d9a1:{c.instructions+=2;NFSU2_TR(0x72d9a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B72d9a4:{NFSU2_TR(0x72d9a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe7ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72d9a8:L72d9a8:{c.instructions+=3;NFSU2_TR(0x72d9a8);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72d9ac:{NFSU2_TR(0x72d9ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72d9af:{NFSU2_TR(0x72d9af);
{goto L72d9b3;}
}
B72d9b1:L72d9b1:{c.instructions+=1;NFSU2_TR(0x72d9b1);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72d9b3:L72d9b3:{c.instructions+=1;NFSU2_TR(0x72d9b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d9b8ull));
TAIL_STATIC(0x760ddbu,760);
}
B72d9b8:L72d9b8:{c.instructions+=1;NFSU2_TR(0x72d9b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d9b9:L72d9b9:{c.instructions+=5;NFSU2_TR(0x72d9b9);
__builtin_memmove((R+0),(R+4),4);
}
B72d9bb:{NFSU2_TR(0x72d9bb);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72d9bf:{NFSU2_TR(0x72d9bf);
u8 U[4];
w4(U+0,u32(0x7c6b70ull));
s4(u32(r4(R+0)),r4(U+0));
}
B72d9c5:{NFSU2_TR(0x72d9c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x47ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72d9c9:{NFSU2_TR(0x72d9c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72d9ca:L72d9ca:{c.instructions+=7;NFSU2_TR(0x72d9ca);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b4a2c),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72d9d1:{NFSU2_TR(0x72d9d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d9d2:{NFSU2_TR(0x72d9d2);
__builtin_memmove((R+24),(R+4),4);
}
B72d9d4:{NFSU2_TR(0x72d9d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72d9d8:{NFSU2_TR(0x72d9d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d9d9:{NFSU2_TR(0x72d9d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72d9dc:{NFSU2_TR(0x72d9dc);
if(r1(R+518)){{goto L72d9f7;}}
}
B72d9de:L72d9de:{c.instructions+=3;NFSU2_TR(0x72d9de);
u8 U[45];
w4(U+37,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
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
B72d9e1:{NFSU2_TR(0x72d9e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d9e2:{NFSU2_TR(0x72d9e2);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a1c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72d9e8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B72d9e8:L72d9e8:{c.instructions+=6;NFSU2_TR(0x72d9e8);
__builtin_memmove((R+28),(R+0),4);
}
B72d9ea:{NFSU2_TR(0x72d9ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72d9ee:{NFSU2_TR(0x72d9ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72d9ef:{NFSU2_TR(0x72d9ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B72d9f2:{NFSU2_TR(0x72d9f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B72d9f5:{NFSU2_TR(0x72d9f5);
{goto L72da0e;}
}
B72d9f7:L72d9f7:{c.instructions+=3;NFSU2_TR(0x72d9f7);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B72d9fa:{NFSU2_TR(0x72d9fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72d9fb:{NFSU2_TR(0x72d9fb);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a1c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72da01ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B72da01:L72da01:{c.instructions+=5;NFSU2_TR(0x72da01);
__builtin_memmove((R+28),(R+0),4);
}
B72da03:{NFSU2_TR(0x72da03);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72da07:{NFSU2_TR(0x72da07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72da08:{NFSU2_TR(0x72da08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B72da0b:{NFSU2_TR(0x72da0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B72da0e:L72da0e:{c.instructions+=4;NFSU2_TR(0x72da0e);
__builtin_memmove((R+8),(R+4),4);
}
B72da10:{NFSU2_TR(0x72da10);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B72da13:{NFSU2_TR(0x72da13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72da16:{NFSU2_TR(0x72da16);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72da18:L72da18:{c.instructions+=1;NFSU2_TR(0x72da18);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L72da1a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72da18u);}goto L72da18;}
}
B72da1a:L72da1a:{c.instructions+=2;NFSU2_TR(0x72da1a);
__builtin_memmove((R+4),(R+8),4);
}
B72da1c:{NFSU2_TR(0x72da1c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72da1f:L72da1f:{c.instructions+=1;NFSU2_TR(0x72da1f);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L72da21;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72da1fu);}goto L72da1f;}
}
B72da21:L72da21:{c.instructions+=3;NFSU2_TR(0x72da21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72da22:{NFSU2_TR(0x72da22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72da23:{NFSU2_TR(0x72da23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72da24:L72da24:{c.instructions+=10;NFSU2_TR(0x72da24);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72da25:{NFSU2_TR(0x72da25);
__builtin_memmove((R+20),(R+16),4);
}
B72da27:{NFSU2_TR(0x72da27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72da28:{NFSU2_TR(0x72da28);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72da29:{NFSU2_TR(0x72da29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72da2c:{NFSU2_TR(0x72da2c);
w4(R+0,u32(0xffe00000ull));
}
B72da31:{NFSU2_TR(0x72da31);
__builtin_memmove((R+8),(R+24),4);
}
B72da33:{NFSU2_TR(0x72da33);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B72da35:{NFSU2_TR(0x72da35);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72da37:{NFSU2_TR(0x72da37);
if(r1(R+518)){{goto L72da41;}}
}
B72da39:L72da39:{c.instructions+=2;NFSU2_TR(0x72da39);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72da3c:{NFSU2_TR(0x72da3c);
{goto L72db9c;}
}
B72da41:L72da41:{c.instructions+=44;NFSU2_TR(0x72da41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72da42:{NFSU2_TR(0x72da42);
__builtin_memmove((R+12),(R+24),4);
}
B72da44:{NFSU2_TR(0x72da44);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B72da47:{NFSU2_TR(0x72da47);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x3ull))));
}
B72da4a:{NFSU2_TR(0x72da4a);
w1(R+8,u8(0x4ull));
}
B72da4c:{NFSU2_TR(0x72da4c);
w1(R+8,u8(u32(r1(R+8))-u32(r1(R+12))));
}
B72da4e:{NFSU2_TR(0x72da4e);
__builtin_memmove((R+12),(R+24),4);
}
B72da50:{NFSU2_TR(0x72da50);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B72da53:{NFSU2_TR(0x72da53);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x1ull))));
}
B72da56:{NFSU2_TR(0x72da56);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72da59:{NFSU2_TR(0x72da59);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x42ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72da5c:{NFSU2_TR(0x72da5c);
__builtin_memmove((R+12),(R+24),4);
}
B72da5e:{NFSU2_TR(0x72da5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B72da61:{NFSU2_TR(0x72da61);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x3ull))));
}
B72da64:{NFSU2_TR(0x72da64);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72da67:{NFSU2_TR(0x72da67);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x43ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72da6a:{NFSU2_TR(0x72da6a);
__builtin_memmove((R+12),(R+24),4);
}
B72da6c:{NFSU2_TR(0x72da6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B72da6f:{NFSU2_TR(0x72da6f);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x3ull))));
}
B72da72:{NFSU2_TR(0x72da72);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72da75:{NFSU2_TR(0x72da75);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72da78:{NFSU2_TR(0x72da78);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72da7b:{NFSU2_TR(0x72da7b);
__builtin_memmove((R+8),(R+24),4);
}
B72da7d:{NFSU2_TR(0x72da7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B72da80:{NFSU2_TR(0x72da80);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B72da83:{NFSU2_TR(0x72da83);
__builtin_memmove((R+12),(R+24),4);
}
B72da85:{NFSU2_TR(0x72da85);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B72da88:{NFSU2_TR(0x72da88);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x1ull))));
}
B72da8b:{NFSU2_TR(0x72da8b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72da8e:{NFSU2_TR(0x72da8e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72da91:{NFSU2_TR(0x72da91);
__builtin_memmove((R+0),(R+24),4);
}
B72da93:{NFSU2_TR(0x72da93);
__builtin_memmove((R+8),(R+24),4);
}
B72da95:{NFSU2_TR(0x72da95);
__builtin_memmove((R+12),(R+24),4);
}
B72da97:{NFSU2_TR(0x72da97);
u8 U[4];
w4(U+0,u32(u32(u32(0x13ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72da9a:{NFSU2_TR(0x72da9a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B72da9d:{NFSU2_TR(0x72da9d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B72daa0:{NFSU2_TR(0x72daa0);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B72daa2:{NFSU2_TR(0x72daa2);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B72daa5:{NFSU2_TR(0x72daa5);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x1ull))));
}
B72daa8:{NFSU2_TR(0x72daa8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(u32(0x100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72daae:{NFSU2_TR(0x72daae);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72dab1:{NFSU2_TR(0x72dab1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72dab4:{NFSU2_TR(0x72dab4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x46ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72dab7:{NFSU2_TR(0x72dab7);
if(r1(R+518)){{goto L72dac7;}}
}
B72dab9:L72dab9:{c.instructions+=5;NFSU2_TR(0x72dab9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72dabb:{NFSU2_TR(0x72dabb);
__builtin_memmove((R+0),(R+518),1);
}
B72dabe:{NFSU2_TR(0x72dabe);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72dac1:{NFSU2_TR(0x72dac1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3aull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72dac5:{NFSU2_TR(0x72dac5);
{goto L72dacf;}
}
B72dac7:L72dac7:{c.instructions+=2;NFSU2_TR(0x72dac7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72dacb:{NFSU2_TR(0x72dacb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72dacf:L72dacf:{c.instructions+=5;NFSU2_TR(0x72dacf);
__builtin_memmove((R+0),(R+24),4);
}
B72dad1:{NFSU2_TR(0x72dad1);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72dad4:{NFSU2_TR(0x72dad4);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x3ull))));
}
B72dad6:{NFSU2_TR(0x72dad6);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72dada:{NFSU2_TR(0x72dada);
if(r1(R+518)){{goto L72dae3;}}
}
B72dadc:L72dadc:{c.instructions+=3;NFSU2_TR(0x72dadc);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x6ull))));
}
B72dade:{NFSU2_TR(0x72dade);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x41ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72dae1:{NFSU2_TR(0x72dae1);
{goto L72db05;}
}
B72dae3:L72dae3:{c.instructions+=12;NFSU2_TR(0x72dae3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72dae6:{NFSU2_TR(0x72dae6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72dae9:{NFSU2_TR(0x72dae9);
w1(R+12,u8(0x3ull));
}
B72daeb:{NFSU2_TR(0x72daeb);
u8 U[4];
w2(U+0,u16(s16(s8(r1(R+0)))));
w2(U+2,u16(s16(s8(r1(R+12)))));
w2(R+0,u16(u32(r2(U+0))*u32(r2(U+2))));
}
B72daed:{NFSU2_TR(0x72daed);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))+u32(r1(U+4))));
}
B72daf0:{NFSU2_TR(0x72daf0);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72daf4:{NFSU2_TR(0x72daf4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x41ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72daf7:{NFSU2_TR(0x72daf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B72dafa:{NFSU2_TR(0x72dafa);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B72dafc:{NFSU2_TR(0x72dafc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B72daff:{NFSU2_TR(0x72daff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))+u32(r1(U+4))));
}
B72db02:{NFSU2_TR(0x72db02);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72db05:L72db05:{c.instructions+=10;NFSU2_TR(0x72db05);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72db09:{NFSU2_TR(0x72db09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B72db0c:{NFSU2_TR(0x72db0c);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B72db0e:{NFSU2_TR(0x72db0e);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72db10:{NFSU2_TR(0x72db10);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72db13:{NFSU2_TR(0x72db13);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72db17:{NFSU2_TR(0x72db17);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7c6b40ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B72db1f:{NFSU2_TR(0x72db1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72db22:{NFSU2_TR(0x72db22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72db25:{NFSU2_TR(0x72db25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72db2c;}}
}
B72db27:L72db27:{c.instructions+=2;NFSU2_TR(0x72db27);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72db2a:{NFSU2_TR(0x72db2a);
{goto L72db9b;}
}
B72db2c:L72db2c:{c.instructions+=12;NFSU2_TR(0x72db2c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B72db2f:{NFSU2_TR(0x72db2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B72db33:{NFSU2_TR(0x72db33);
w4(R+0,u32(r1(R+12)));
}
B72db36:{NFSU2_TR(0x72db36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72db39:{NFSU2_TR(0x72db39);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B72db3b:{NFSU2_TR(0x72db3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72db3e:{NFSU2_TR(0x72db3e);
w4(R+8,u32(r1(R+8)));
}
B72db41:{NFSU2_TR(0x72db41);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B72db43:{NFSU2_TR(0x72db43);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72db47:{NFSU2_TR(0x72db47);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7c6a60ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B72db4f:{NFSU2_TR(0x72db4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72db52:{NFSU2_TR(0x72db52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72db70;}}
}
B72db54:L72db54:{c.instructions+=8;NFSU2_TR(0x72db54);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2ee0ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72db5a:{NFSU2_TR(0x72db5a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B72db5b:{NFSU2_TR(0x72db5b);
u8 U[64];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x72db5b);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x72db5b);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B72db5e:{NFSU2_TR(0x72db5e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B72db62:{NFSU2_TR(0x72db62);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B72db64:{NFSU2_TR(0x72db64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0xfffffffcull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72db6b:{NFSU2_TR(0x72db6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72db6e:{NFSU2_TR(0x72db6e);
{goto L72db99;}
}
B72db70:L72db70:{c.instructions+=6;NFSU2_TR(0x72db70);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x23280ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72db76:{NFSU2_TR(0x72db76);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B72db77:{NFSU2_TR(0x72db77);
u8 U[64];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x72db77);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x72db77);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B72db7a:{NFSU2_TR(0x72db7a);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72db7e:{NFSU2_TR(0x72db7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72db81:{NFSU2_TR(0x72db81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72db8c;}}
}
B72db83:L72db83:{c.instructions+=2;NFSU2_TR(0x72db83);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72db85:{NFSU2_TR(0x72db85);
if(r1(R+518)){{goto L72db8c;}}
}
B72db87:L72db87:{c.instructions+=2;NFSU2_TR(0x72db87);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B72db89:{NFSU2_TR(0x72db89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72db8c:L72db8c:{c.instructions+=2;NFSU2_TR(0x72db8c);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72db90:{NFSU2_TR(0x72db90);
if(r1(R+518)){{goto L72db95;}}
}
B72db92:L72db92:{c.instructions+=1;NFSU2_TR(0x72db92);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72db95:L72db95:{c.instructions+=1;NFSU2_TR(0x72db95);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xfffffffcull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72db99:L72db99:{c.instructions+=1;NFSU2_TR(0x72db99);
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
B72db9b:L72db9b:{c.instructions+=1;NFSU2_TR(0x72db9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72db9c:L72db9c:{c.instructions+=3;NFSU2_TR(0x72db9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72db9d:{NFSU2_TR(0x72db9d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72db9e:{NFSU2_TR(0x72db9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72dba1:L72dba1:{c.instructions+=2;NFSU2_TR(0x72dba1);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72dba5:{NFSU2_TR(0x72dba5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72dbac;}}
}
B72dba7:L72dba7:{c.instructions+=2;NFSU2_TR(0x72dba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72dbaa:{NFSU2_TR(0x72dbaa);
{goto L72dbc9;}
}
B72dbac:L72dbac:{c.instructions+=11;NFSU2_TR(0x72dbac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72dbaf:{NFSU2_TR(0x72dbaf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B72dbb3:{NFSU2_TR(0x72dbb3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+9),(U+0),1);
}
B72dbb5:{NFSU2_TR(0x72dbb5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72dbb6:{NFSU2_TR(0x72dbb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B72dbba:{NFSU2_TR(0x72dbba);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72dbbe:{NFSU2_TR(0x72dbbe);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B72dbc1:{NFSU2_TR(0x72dbc1);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B72dbc3:{NFSU2_TR(0x72dbc3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B72dbc6:{NFSU2_TR(0x72dbc6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72dbc8:{NFSU2_TR(0x72dbc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72dbc9:L72dbc9:{c.instructions+=3;NFSU2_TR(0x72dbc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B72dbcb:{NFSU2_TR(0x72dbcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72dbcc:{NFSU2_TR(0x72dbcc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72dbcfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B72dbcf:L72dbcf:{c.instructions+=6;NFSU2_TR(0x72dbcf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72dbd1:{NFSU2_TR(0x72dbd1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0xffffffffull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72dbd4:{NFSU2_TR(0x72dbd4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B72dbd7:{NFSU2_TR(0x72dbd7);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72dbd8:{NFSU2_TR(0x72dbd8);
__builtin_memmove((R+0),(R+4),4);
}
B72dbda:{NFSU2_TR(0x72dbda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72dbdb:L72dbdb:{c.instructions+=4;NFSU2_TR(0x72dbdb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B72dbde:{NFSU2_TR(0x72dbde);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B72dbe1:{NFSU2_TR(0x72dbe1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72dbe5:{NFSU2_TR(0x72dbe5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72dbef;}}
}
B72dbe7:L72dbe7:{c.instructions+=3;NFSU2_TR(0x72dbe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72dbea:{NFSU2_TR(0x72dbea);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72dbed:{NFSU2_TR(0x72dbed);
{goto L72dc05;}
}
B72dbef:L72dbef:{c.instructions+=5;NFSU2_TR(0x72dbef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72dbf2:{NFSU2_TR(0x72dbf2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72dbf5:{NFSU2_TR(0x72dbf5);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B72dbf8:{NFSU2_TR(0x72dbf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72dbfb:{NFSU2_TR(0x72dbfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72dc08;}}
}
B72dbfd:L72dbfd:{c.instructions+=2;NFSU2_TR(0x72dbfd);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72dc01:{NFSU2_TR(0x72dc01);
if(r1(R+518)){{goto L72dc08;}}
}
B72dc03:L72dc03:{c.instructions+=1;NFSU2_TR(0x72dc03);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B72dc05:L72dc05:{c.instructions+=1;NFSU2_TR(0x72dc05);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72dc08:L72dc08:{c.instructions+=4;NFSU2_TR(0x72dc08);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72dc0c:{NFSU2_TR(0x72dc0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x39ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72dc10:{NFSU2_TR(0x72dc10);
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
B72dc12:{NFSU2_TR(0x72dc12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72dc13:L72dc13:{c.instructions+=5;NFSU2_TR(0x72dc13);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72dc16:{NFSU2_TR(0x72dc16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72dc1a:{NFSU2_TR(0x72dc1a);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72dc1e:{NFSU2_TR(0x72dc1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72dc21:{NFSU2_TR(0x72dc21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72dc22:L72dc22:{c.instructions+=3;NFSU2_TR(0x72dc22);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72dc24:{NFSU2_TR(0x72dc24);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x47ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+0)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B72dc27:{NFSU2_TR(0x72dc27);
if(r1(R+518)){{goto L72dc39;}}
}
B72dc29:L72dc29:{c.instructions+=4;NFSU2_TR(0x72dc29);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72dc2c:{NFSU2_TR(0x72dc2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72dc2f:{NFSU2_TR(0x72dc2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x47ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72dc32:{NFSU2_TR(0x72dc32);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72dc38ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B72dc38:L72dc38:{c.instructions+=1;NFSU2_TR(0x72dc38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72dc39:L72dc39:{c.instructions+=2;NFSU2_TR(0x72dc39);
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
B72dc3b:{NFSU2_TR(0x72dc3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72dc3c:L72dc3c:{c.instructions+=3;NFSU2_TR(0x72dc3c);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x47ull))));
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
B72dc40:{NFSU2_TR(0x72dc40);
u8 U[4];
w4(U+0,u32(0x7c6b70ull));
s4(u32(r4(R+4)),r4(U+0));
}
B72dc46:{NFSU2_TR(0x72dc46);
if(r1(R+518)){{goto L72dc4d;}}
}
B72dc48:L72dc48:{c.instructions+=1;NFSU2_TR(0x72dc48);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72dc22u);}goto L72dc22;}
}
B72dc4d:L72dc4d:{c.instructions+=1;NFSU2_TR(0x72dc4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72dc4e:L72dc4e:{c.instructions+=3;NFSU2_TR(0x72dc4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72dc4f:{NFSU2_TR(0x72dc4f);
__builtin_memmove((R+24),(R+4),4);
}
B72dc51:{NFSU2_TR(0x72dc51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72dc56ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72dc3cu);}goto L72dc3c;}
}
B72dc56:L72dc56:{c.instructions+=2;NFSU2_TR(0x72dc56);
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
B72dc5b:{NFSU2_TR(0x72dc5b);
if(r1(R+518)){{goto L72dc64;}}
}
B72dc5d:L72dc5d:{c.instructions+=2;NFSU2_TR(0x72dc5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72dc5e:{NFSU2_TR(0x72dc5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72dc63ull));
TAIL_STATIC(0x575630u,575);
}
B72dc63:L72dc63:{c.instructions+=1;NFSU2_TR(0x72dc63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72dc64:L72dc64:{c.instructions+=3;NFSU2_TR(0x72dc64);
__builtin_memmove((R+0),(R+24),4);
}
B72dc66:{NFSU2_TR(0x72dc66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72dc67:{NFSU2_TR(0x72dc67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72dc6a:L72dc6a:{c.instructions+=4;NFSU2_TR(0x72dc6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72dc6b:{NFSU2_TR(0x72dc6b);
__builtin_memmove((R+24),(R+4),4);
}
B72dc6d:{NFSU2_TR(0x72dc6d);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x47ull))));
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
B72dc71:{NFSU2_TR(0x72dc71);
if(r1(R+518)){{goto L72dc78;}}
}
B72dc73:L72dc73:{c.instructions+=2;NFSU2_TR(0x72dc73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72dc75:{NFSU2_TR(0x72dc75);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72dc78ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B72dc78:L72dc78:{c.instructions+=6;NFSU2_TR(0x72dc78);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72dc7c:{NFSU2_TR(0x72dc7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72dc7e:{NFSU2_TR(0x72dc7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x47ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72dc82:{NFSU2_TR(0x72dc82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72dc85:{NFSU2_TR(0x72dc85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72dc88:{NFSU2_TR(0x72dc88);
if(r1(R+518)){{goto L72dc95;}}
}
B72dc8a:L72dc8a:{c.instructions+=2;NFSU2_TR(0x72dc8a);
__builtin_memmove((R+4),(R+24),4);
}
B72dc8c:{NFSU2_TR(0x72dc8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72dc91ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72dba1u);}goto L72dba1;}
}
B72dc91:L72dc91:{c.instructions+=2;NFSU2_TR(0x72dc91);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72dc93:{NFSU2_TR(0x72dc93);
if(r1(R+518)){{goto L72dc9a;}}
}
B72dc95:L72dc95:{c.instructions+=2;NFSU2_TR(0x72dc95);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72dc98:{NFSU2_TR(0x72dc98);
{goto L72dcb8;}
}
B72dc9a:L72dc9a:{c.instructions+=2;NFSU2_TR(0x72dc9a);
__builtin_memmove((R+4),(R+24),4);
}
B72dc9c:{NFSU2_TR(0x72dc9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72dca1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72d9cau);}goto L72d9ca;}
}
B72dca1:L72dca1:{c.instructions+=3;NFSU2_TR(0x72dca1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72dca3:{NFSU2_TR(0x72dca3);
__builtin_memmove((R+4),(R+24),4);
}
B72dca5:{NFSU2_TR(0x72dca5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72dca8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B72dca8:L72dca8:{c.instructions+=5;NFSU2_TR(0x72dca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72dcab:{NFSU2_TR(0x72dcab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72dcaf:{NFSU2_TR(0x72dcaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72dcb3:{NFSU2_TR(0x72dcb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72dcb6:{NFSU2_TR(0x72dcb6);
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
B72dcb8:L72dcb8:{c.instructions+=2;NFSU2_TR(0x72dcb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72dcb9:{NFSU2_TR(0x72dcb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72dcbc:L72dcbc:{c.instructions+=3;NFSU2_TR(0x72dcbc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72dcbd:{NFSU2_TR(0x72dcbd);
__builtin_memmove((R+24),(R+4),4);
}
B72dcbf:{NFSU2_TR(0x72dcbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72dcc4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72d9b9u);}goto L72d9b9;}
}
B72dcc4:L72dcc4:{c.instructions+=5;NFSU2_TR(0x72dcc4);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72dccb:{NFSU2_TR(0x72dccb);
u8 U[4];
w4(U+0,u32(0x7cf570ull));
s4(u32(r4(R+24)),r4(U+0));
}
B72dcd1:{NFSU2_TR(0x72dcd1);
__builtin_memmove((R+0),(R+24),4);
}
B72dcd3:{NFSU2_TR(0x72dcd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72dcd4:{NFSU2_TR(0x72dcd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72dcd5:L72dcd5:{c.instructions+=6;NFSU2_TR(0x72dcd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72dcd6:{NFSU2_TR(0x72dcd6);
__builtin_memmove((R+24),(R+4),4);
}
B72dcd8:{NFSU2_TR(0x72dcd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72dcde:{NFSU2_TR(0x72dcde);
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
B72dce0:{NFSU2_TR(0x72dce0);
u8 U[4];
w4(U+0,u32(0x7cf570ull));
s4(u32(r4(R+24)),r4(U+0));
}
B72dce6:{NFSU2_TR(0x72dce6);
if(r1(R+518)){{goto L72dcf0;}}
}
B72dce8:L72dce8:{c.instructions+=2;NFSU2_TR(0x72dce8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72dce9:{NFSU2_TR(0x72dce9);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72dcefull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B72dcef:L72dcef:{c.instructions+=1;NFSU2_TR(0x72dcef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72dcf0:L72dcf0:{c.instructions+=3;NFSU2_TR(0x72dcf0);
__builtin_memmove((R+4),(R+24),4);
}
B72dcf2:{NFSU2_TR(0x72dcf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72dcf3:{NFSU2_TR(0x72dcf3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72dc3cu);}goto L72dc3c;}
}
B72dcf8:L72dcf8:{c.instructions+=3;NFSU2_TR(0x72dcf8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72dcfa:{NFSU2_TR(0x72dcfa);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72dcfe:{NFSU2_TR(0x72dcfe);
if(r1(R+518)){{goto L72dd13;}}
}
B72dd00:L72dd00:{c.instructions+=9;NFSU2_TR(0x72dd00);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72dd02:{NFSU2_TR(0x72dd02);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B72dd03:{NFSU2_TR(0x72dd03);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72dd05:{NFSU2_TR(0x72dd05);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B72dd06:{NFSU2_TR(0x72dd06);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72dd08:{NFSU2_TR(0x72dd08);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B72dd0b:{NFSU2_TR(0x72dd0b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72dd0d:{NFSU2_TR(0x72dd0d);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72dd10:{NFSU2_TR(0x72dd10);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72dd13:L72dd13:{c.instructions+=2;NFSU2_TR(0x72dd13);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72dd16:{NFSU2_TR(0x72dd16);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72ddb4;}}
}
B72dd1c:L72dd1c:{c.instructions+=8;NFSU2_TR(0x72dd1c);
__builtin_memmove((R+8),(R+4),4);
}
B72dd1e:{NFSU2_TR(0x72dd1e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72dd1f:{NFSU2_TR(0x72dd1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B72dd22:{NFSU2_TR(0x72dd22);
__builtin_memmove((R+24),(R+8),4);
}
B72dd24:{NFSU2_TR(0x72dd24);
w4(R+24,u32(0-u32(r4(R+24))));
}
B72dd26:{NFSU2_TR(0x72dd26);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B72dd29:{NFSU2_TR(0x72dd29);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B72dd2b:{NFSU2_TR(0x72dd2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72dd2c:L72dd2c:{c.instructions+=51;NFSU2_TR(0x72dd2c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72dd2e:{NFSU2_TR(0x72dd2e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72dd30:{NFSU2_TR(0x72dd30);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72dd32:{NFSU2_TR(0x72dd32);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B72dd35:{NFSU2_TR(0x72dd35);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B72dd36:{NFSU2_TR(0x72dd36);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72dd38:{NFSU2_TR(0x72dd38);
{u32 ea_=u32(r4(R+0)+u32(4294967236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72dd3b:{NFSU2_TR(0x72dd3b);
{u32 ea_=u32(r4(R+0)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72dd3e:{NFSU2_TR(0x72dd3e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72dd40:{NFSU2_TR(0x72dd40);
{u32 ea_=u32(r4(R+0)+u32(4294967240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72dd43:{NFSU2_TR(0x72dd43);
{u32 ea_=u32(r4(R+0)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72dd46:{NFSU2_TR(0x72dd46);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72dd48:{NFSU2_TR(0x72dd48);
{u32 ea_=u32(r4(R+0)+u32(4294967244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72dd4b:{NFSU2_TR(0x72dd4b);
{u32 ea_=u32(r4(R+0)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72dd4e:{NFSU2_TR(0x72dd4e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72dd50:{NFSU2_TR(0x72dd50);
{u32 ea_=u32(r4(R+0)+u32(4294967248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72dd53:{NFSU2_TR(0x72dd53);
{u32 ea_=u32(r4(R+0)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72dd56:{NFSU2_TR(0x72dd56);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72dd58:{NFSU2_TR(0x72dd58);
{u32 ea_=u32(r4(R+0)+u32(4294967252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72dd5b:{NFSU2_TR(0x72dd5b);
{u32 ea_=u32(r4(R+0)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72dd5e:{NFSU2_TR(0x72dd5e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72dd60:{NFSU2_TR(0x72dd60);
{u32 ea_=u32(r4(R+0)+u32(4294967256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72dd63:{NFSU2_TR(0x72dd63);
{u32 ea_=u32(r4(R+0)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72dd66:{NFSU2_TR(0x72dd66);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72dd68:{NFSU2_TR(0x72dd68);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72dd6b:{NFSU2_TR(0x72dd6b);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72dd6e:{NFSU2_TR(0x72dd6e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72dd70:{NFSU2_TR(0x72dd70);
{u32 ea_=u32(r4(R+0)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72dd73:{NFSU2_TR(0x72dd73);
{u32 ea_=u32(r4(R+0)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72dd76:{NFSU2_TR(0x72dd76);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72dd78:{NFSU2_TR(0x72dd78);
{u32 ea_=u32(r4(R+0)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72dd7b:{NFSU2_TR(0x72dd7b);
{u32 ea_=u32(r4(R+0)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72dd7e:{NFSU2_TR(0x72dd7e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72dd80:{NFSU2_TR(0x72dd80);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72dd83:{NFSU2_TR(0x72dd83);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72dd86:{NFSU2_TR(0x72dd86);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72dd88:{NFSU2_TR(0x72dd88);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72dd8b:{NFSU2_TR(0x72dd8b);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72dd8e:{NFSU2_TR(0x72dd8e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72dd90:{NFSU2_TR(0x72dd90);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72dd93:{NFSU2_TR(0x72dd93);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72dd96:{NFSU2_TR(0x72dd96);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72dd98:{NFSU2_TR(0x72dd98);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72dd9b:{NFSU2_TR(0x72dd9b);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72dd9e:{NFSU2_TR(0x72dd9e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72dda0:{NFSU2_TR(0x72dda0);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72dda3:{NFSU2_TR(0x72dda3);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72dda6:{NFSU2_TR(0x72dda6);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72dda8:{NFSU2_TR(0x72dda8);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ddab:{NFSU2_TR(0x72ddab);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ddae:{NFSU2_TR(0x72ddae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72dd2cu);}goto L72dd2c;}}
}
B72ddb4:L72ddb4:{c.instructions+=2;NFSU2_TR(0x72ddb4);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B72ddb7:{NFSU2_TR(0x72ddb7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72ddcf;}}
}
B72ddb9:L72ddb9:{c.instructions+=1;NFSU2_TR(0x72ddb9);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B72ddbb:L72ddbb:{c.instructions+=9;NFSU2_TR(0x72ddbb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72ddbd:{NFSU2_TR(0x72ddbd);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ddbf:{NFSU2_TR(0x72ddbf);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ddc1:{NFSU2_TR(0x72ddc1);
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B72ddc4:{NFSU2_TR(0x72ddc4);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72ddc5:{NFSU2_TR(0x72ddc5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72ddc7:{NFSU2_TR(0x72ddc7);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72ddca:{NFSU2_TR(0x72ddca);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ddcd:{NFSU2_TR(0x72ddcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72ddbbu);}goto L72ddbb;}}
}
B72ddcf:L72ddcf:{c.instructions+=2;NFSU2_TR(0x72ddcf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ddd1:{NFSU2_TR(0x72ddd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72ddd2:L72ddd2:{c.instructions+=20;NFSU2_TR(0x72ddd2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ddd3:{NFSU2_TR(0x72ddd3);
__builtin_memmove((R+20),(R+16),4);
}
B72ddd5:{NFSU2_TR(0x72ddd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B72ddd8:{NFSU2_TR(0x72ddd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72dddb:{NFSU2_TR(0x72dddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72ddde:{NFSU2_TR(0x72ddde);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72dde1:{NFSU2_TR(0x72dde1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x7cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72dde4:{NFSU2_TR(0x72dde4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72dde5:{NFSU2_TR(0x72dde5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72dde6:{NFSU2_TR(0x72dde6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72dde9:{NFSU2_TR(0x72dde9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ddea:{NFSU2_TR(0x72ddea);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B72ddee:{NFSU2_TR(0x72ddee);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72ddf5:{NFSU2_TR(0x72ddf5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B72ddf8:{NFSU2_TR(0x72ddf8);
w4(R+24,u32(r1(R+4)));
}
B72ddfb:{NFSU2_TR(0x72ddfb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B72ddfe:{NFSU2_TR(0x72ddfe);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x7cf048ull))));
}
B72de04:{NFSU2_TR(0x72de04);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72de08:{NFSU2_TR(0x72de08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72de0b:{NFSU2_TR(0x72de0b);
if(r1(R+518)){{goto L72de2a;}}
}
B72de0d:L72de0d:{c.instructions+=2;NFSU2_TR(0x72de0d);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72de11:{NFSU2_TR(0x72de11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72de2a;}}
}
B72de13:L72de13:{c.instructions+=2;NFSU2_TR(0x72de13);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72de17:{NFSU2_TR(0x72de17);
if(r1(R+518)){{goto L72de26;}}
}
B72de19:L72de19:{c.instructions+=5;NFSU2_TR(0x72de19);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(U+0))<(u8(0x3ull))));
}
B72de1c:{NFSU2_TR(0x72de1c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B72de1e:{NFSU2_TR(0x72de1e);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffffeull))));
}
B72de21:{NFSU2_TR(0x72de21);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B72de24:{NFSU2_TR(0x72de24);
{goto L72de2d;}
}
B72de26:L72de26:{c.instructions+=2;NFSU2_TR(0x72de26);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72de28:{NFSU2_TR(0x72de28);
{goto L72de2d;}
}
B72de2a:L72de2a:{c.instructions+=2;NFSU2_TR(0x72de2a);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72de2c:{NFSU2_TR(0x72de2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72de2d:L72de2d:{c.instructions+=3;NFSU2_TR(0x72de2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72de31:{NFSU2_TR(0x72de31);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72de33:{NFSU2_TR(0x72de33);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72deb1;}}
}
B72de35:L72de35:{c.instructions+=5;NFSU2_TR(0x72de35);
__builtin_memmove((R+4),(R+24),4);
}
B72de37:{NFSU2_TR(0x72de37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72de3a:{NFSU2_TR(0x72de3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B72de3d:{NFSU2_TR(0x72de3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72de40:{NFSU2_TR(0x72de40);
{goto L72de45;}
}
B72de42:L72de42:{c.instructions+=1;NFSU2_TR(0x72de42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72de45:L72de45:{c.instructions+=8;NFSU2_TR(0x72de45);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B72de48:{NFSU2_TR(0x72de48);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B72de4c:{NFSU2_TR(0x72de4c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B72de4e:{NFSU2_TR(0x72de4e);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72de52:{NFSU2_TR(0x72de52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72de55:{NFSU2_TR(0x72de55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72de58:{NFSU2_TR(0x72de58);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B72de5c:{NFSU2_TR(0x72de5c);
if(r1(R+518)){{goto L72de6a;}}
}
B72de5e:L72de5e:{c.instructions+=3;NFSU2_TR(0x72de5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72de61:{NFSU2_TR(0x72de61);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7c6bf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B72de68:{NFSU2_TR(0x72de68);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B72de6a:L72de6a:{c.instructions+=10;NFSU2_TR(0x72de6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72de6d:{NFSU2_TR(0x72de6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B72de6f:{NFSU2_TR(0x72de6f);
__builtin_memmove((R+4),gp(0x818cb0),4);
}
B72de75:{NFSU2_TR(0x72de75);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72de78:{NFSU2_TR(0x72de78);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72de7e:{NFSU2_TR(0x72de7e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72de80:{NFSU2_TR(0x72de80);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B72de82:{NFSU2_TR(0x72de82);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72de84:{NFSU2_TR(0x72de84);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72de87:{NFSU2_TR(0x72de87);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L72dea0;}}
}
B72de89:L72de89:{c.instructions+=7;NFSU2_TR(0x72de89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72de8c:{NFSU2_TR(0x72de8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72de8d:{NFSU2_TR(0x72de8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72de90:{NFSU2_TR(0x72de90);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72de93:{NFSU2_TR(0x72de93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72de96:{NFSU2_TR(0x72de96);
__builtin_memmove((R+4),(R+8),4);
}
B72de98:{NFSU2_TR(0x72de98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72de9dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72dcf8u);}goto L72dcf8;}
}
B72de9d:L72de9d:{c.instructions+=2;NFSU2_TR(0x72de9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72de9e:{NFSU2_TR(0x72de9e);
{goto L72dea2;}
}
B72dea0:L72dea0:{c.instructions+=1;NFSU2_TR(0x72dea0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72dea2:L72dea2:{c.instructions+=4;NFSU2_TR(0x72dea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72dea5:{NFSU2_TR(0x72dea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72dea9:{NFSU2_TR(0x72dea9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72deac:{NFSU2_TR(0x72deac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72de42u);}goto L72de42;}}
}
B72deae:L72deae:{c.instructions+=1;NFSU2_TR(0x72deae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72deb1:L72deb1:{c.instructions+=2;NFSU2_TR(0x72deb1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x16ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72deb4:{NFSU2_TR(0x72deb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72deba;}}
}
B72deb6:L72deb6:{c.instructions+=2;NFSU2_TR(0x72deb6);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72deb8:{NFSU2_TR(0x72deb8);
{goto L72dec0;}
}
B72deba:L72deba:{c.instructions+=2;NFSU2_TR(0x72deba);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72debc:{NFSU2_TR(0x72debc);
if(r1(R+518)){{goto L72dec1;}}
}
B72debe:L72debe:{c.instructions+=1;NFSU2_TR(0x72debe);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72dec0:L72dec0:{c.instructions+=1;NFSU2_TR(0x72dec0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72dec1:L72dec1:{c.instructions+=2;NFSU2_TR(0x72dec1);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72dec4:{NFSU2_TR(0x72dec4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72dfc9;}}
}
B72deca:L72deca:{c.instructions+=7;NFSU2_TR(0x72deca);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72dece:{NFSU2_TR(0x72dece);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ded1:{NFSU2_TR(0x72ded1);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ded3:{NFSU2_TR(0x72ded3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72ded4:{NFSU2_TR(0x72ded4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B72ded6:{NFSU2_TR(0x72ded6);
u8 U[12];
w4(U+0,u32(u32(u32(0x2eull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B72deda:{NFSU2_TR(0x72deda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72dedd:L72dedd:{c.instructions+=20;NFSU2_TR(0x72dedd);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B72dee0:{NFSU2_TR(0x72dee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72dee3:{NFSU2_TR(0x72dee3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B72dee4:{NFSU2_TR(0x72dee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72dee7:{NFSU2_TR(0x72dee7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+24,u32(r1(U+0)));
}
B72deea:{NFSU2_TR(0x72deea);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B72deec:{NFSU2_TR(0x72deec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B72deef:{NFSU2_TR(0x72deef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72def2:{NFSU2_TR(0x72def2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B72def6:{NFSU2_TR(0x72def6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B72def8:{NFSU2_TR(0x72def8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72defc:{NFSU2_TR(0x72defc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72deff:{NFSU2_TR(0x72deff);
__builtin_memmove((R+4),gp(0x818cb0),4);
}
B72df05:{NFSU2_TR(0x72df05);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72df08:{NFSU2_TR(0x72df08);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72df0e:{NFSU2_TR(0x72df0e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72df10:{NFSU2_TR(0x72df10);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B72df12:{NFSU2_TR(0x72df12);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72df14:{NFSU2_TR(0x72df14);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72df17:{NFSU2_TR(0x72df17);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L72df2d;}}
}
B72df19:L72df19:{c.instructions+=6;NFSU2_TR(0x72df19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72df1c:{NFSU2_TR(0x72df1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72df1d:{NFSU2_TR(0x72df1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72df20:{NFSU2_TR(0x72df20);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72df23:{NFSU2_TR(0x72df23);
__builtin_memmove((R+4),(R+24),4);
}
B72df25:{NFSU2_TR(0x72df25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72df2aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72dcf8u);}goto L72dcf8;}
}
B72df2a:L72df2a:{c.instructions+=2;NFSU2_TR(0x72df2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72df2b:{NFSU2_TR(0x72df2b);
{goto L72df2f;}
}
B72df2d:L72df2d:{c.instructions+=1;NFSU2_TR(0x72df2d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72df2f:L72df2f:{c.instructions+=15;NFSU2_TR(0x72df2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72df32:{NFSU2_TR(0x72df32);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B72df35:{NFSU2_TR(0x72df35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72df38:{NFSU2_TR(0x72df38);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B72df3a:{NFSU2_TR(0x72df3a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72df3e:{NFSU2_TR(0x72df3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72df41:{NFSU2_TR(0x72df41);
__builtin_memmove((R+4),gp(0x818cb0),4);
}
B72df47:{NFSU2_TR(0x72df47);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B72df49:{NFSU2_TR(0x72df49);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72df4c:{NFSU2_TR(0x72df4c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72df52:{NFSU2_TR(0x72df52);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72df54:{NFSU2_TR(0x72df54);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B72df56:{NFSU2_TR(0x72df56);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72df58:{NFSU2_TR(0x72df58);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72df5b:{NFSU2_TR(0x72df5b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L72df71;}}
}
B72df5d:L72df5d:{c.instructions+=6;NFSU2_TR(0x72df5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72df60:{NFSU2_TR(0x72df60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72df61:{NFSU2_TR(0x72df61);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72df64:{NFSU2_TR(0x72df64);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72df67:{NFSU2_TR(0x72df67);
__builtin_memmove((R+4),(R+24),4);
}
B72df69:{NFSU2_TR(0x72df69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72df6eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72dcf8u);}goto L72dcf8;}
}
B72df6e:L72df6e:{c.instructions+=2;NFSU2_TR(0x72df6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72df6f:{NFSU2_TR(0x72df6f);
{goto L72df73;}
}
B72df71:L72df71:{c.instructions+=1;NFSU2_TR(0x72df71);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72df73:L72df73:{c.instructions+=14;NFSU2_TR(0x72df73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72df76:{NFSU2_TR(0x72df76);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B72df7a:{NFSU2_TR(0x72df7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72df7d:{NFSU2_TR(0x72df7d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B72df7f:{NFSU2_TR(0x72df7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72df83:{NFSU2_TR(0x72df83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72df86:{NFSU2_TR(0x72df86);
__builtin_memmove((R+4),gp(0x818cb0),4);
}
B72df8c:{NFSU2_TR(0x72df8c);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72df8f:{NFSU2_TR(0x72df8f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72df95:{NFSU2_TR(0x72df95);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72df97:{NFSU2_TR(0x72df97);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B72df99:{NFSU2_TR(0x72df99);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72df9b:{NFSU2_TR(0x72df9b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72df9e:{NFSU2_TR(0x72df9e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L72dfb7;}}
}
B72dfa0:L72dfa0:{c.instructions+=7;NFSU2_TR(0x72dfa0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72dfa1:{NFSU2_TR(0x72dfa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72dfa4:{NFSU2_TR(0x72dfa4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72dfa7:{NFSU2_TR(0x72dfa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72dfaa:{NFSU2_TR(0x72dfaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72dfad:{NFSU2_TR(0x72dfad);
__builtin_memmove((R+4),(R+24),4);
}
B72dfaf:{NFSU2_TR(0x72dfaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72dfb4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72dcf8u);}goto L72dcf8;}
}
B72dfb4:L72dfb4:{c.instructions+=2;NFSU2_TR(0x72dfb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72dfb5:{NFSU2_TR(0x72dfb5);
{goto L72dfb9;}
}
B72dfb7:L72dfb7:{c.instructions+=1;NFSU2_TR(0x72dfb7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72dfb9:L72dfb9:{c.instructions+=4;NFSU2_TR(0x72dfb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),u32(0x2ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72dfbd:{NFSU2_TR(0x72dfbd);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72dfc0:{NFSU2_TR(0x72dfc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72dfc3:{NFSU2_TR(0x72dfc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72deddu);}goto L72dedd;}}
}
B72dfc9:L72dfc9:{c.instructions+=5;NFSU2_TR(0x72dfc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72dfca:{NFSU2_TR(0x72dfca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72dfcb:{NFSU2_TR(0x72dfcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72dfcc:{NFSU2_TR(0x72dfcc);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72dfcd:{NFSU2_TR(0x72dfcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72dfd0:L72dfd0:{c.instructions+=6;NFSU2_TR(0x72dfd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72dfd1:{NFSU2_TR(0x72dfd1);
__builtin_memmove((R+20),(R+16),4);
}
B72dfd3:{NFSU2_TR(0x72dfd3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72dfd4:{NFSU2_TR(0x72dfd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72dfda:{NFSU2_TR(0x72dfda);
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
B72dfdc:{NFSU2_TR(0x72dfdc);
if(r1(R+518)){TAIL_STATIC(0x72e057u,72e);}
}
B72dfde:L72dfde:{c.instructions+=10;NFSU2_TR(0x72dfde);
{u32 ea_=u32(u32(8189320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72dfe4:{NFSU2_TR(0x72dfe4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B72dfe7:{NFSU2_TR(0x72dfe7);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72dfea:{NFSU2_TR(0x72dfea);
{u32 ea_=u32(r4(R+0)+u32(2300u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72dff0:{NFSU2_TR(0x72dff0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72dff2:{NFSU2_TR(0x72dff2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72dff4:{NFSU2_TR(0x72dff4);
{u32 ea_=u32(r4(R+0)+u32(2304u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72dffa:{NFSU2_TR(0x72dffa);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B72dffc:{NFSU2_TR(0x72dffc);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72dfff:{NFSU2_TR(0x72dfff);
{u32 ea_=u32(r4(R+0)+u32(2308u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
TAIL_STATIC(0x72e005u,72e);
}
XIT:NFSU2_TR_EXIT(0x72d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
