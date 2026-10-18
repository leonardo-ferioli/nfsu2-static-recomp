#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69c(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x69d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x69d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_69d(u8* __restrict R,Cpu& c);
u32 page_69d(Cpu& c){return body_69d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_69d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x69d002:goto L69d002;
case 0x69d006:c.instructions+=2;goto B69d006;
case 0x69d00a:c.instructions+=1;goto B69d00a;
case 0x69d00c:goto L69d00c;
case 0x69d00d:goto L69d00d;
case 0x69d010:c.instructions+=5;goto B69d010;
case 0x69d013:c.instructions+=4;goto B69d013;
case 0x69d016:c.instructions+=3;goto B69d016;
case 0x69d018:c.instructions+=2;goto B69d018;
case 0x69d01b:c.instructions+=1;goto B69d01b;
case 0x69d01d:goto L69d01d;
case 0x69d020:c.instructions+=1;goto B69d020;
case 0x69d022:goto L69d022;
case 0x69d025:c.instructions+=5;goto B69d025;
case 0x69d028:c.instructions+=4;goto B69d028;
case 0x69d02b:c.instructions+=3;goto B69d02b;
case 0x69d02e:c.instructions+=2;goto B69d02e;
case 0x69d031:c.instructions+=1;goto B69d031;
case 0x69d033:goto L69d033;
case 0x69d037:c.instructions+=1;goto B69d037;
case 0x69d039:goto L69d039;
case 0x69d03c:c.instructions+=2;goto B69d03c;
case 0x69d042:c.instructions+=1;goto B69d042;
case 0x69d044:goto L69d044;
case 0x69d047:c.instructions+=1;goto B69d047;
case 0x69d049:goto L69d049;
case 0x69d04c:c.instructions+=1;goto B69d04c;
case 0x69d052:goto L69d052;
case 0x69d053:c.instructions+=2;goto B69d053;
case 0x69d056:c.instructions+=1;goto B69d056;
case 0x69d058:goto L69d058;
case 0x69d05b:c.instructions+=3;goto B69d05b;
case 0x69d05e:c.instructions+=2;goto B69d05e;
case 0x69d061:c.instructions+=1;goto B69d061;
case 0x69d063:goto L69d063;
case 0x69d064:goto L69d064;
case 0x69d065:c.instructions+=3;goto B69d065;
case 0x69d066:c.instructions+=2;goto B69d066;
case 0x69d067:c.instructions+=1;goto B69d067;
case 0x69d06a:goto L69d06a;
case 0x69d06c:c.instructions+=14;goto B69d06c;
case 0x69d06d:c.instructions+=13;goto B69d06d;
case 0x69d06f:c.instructions+=12;goto B69d06f;
case 0x69d072:c.instructions+=11;goto B69d072;
case 0x69d073:c.instructions+=10;goto B69d073;
case 0x69d075:c.instructions+=9;goto B69d075;
case 0x69d078:c.instructions+=8;goto B69d078;
case 0x69d07b:c.instructions+=7;goto B69d07b;
case 0x69d07c:c.instructions+=6;goto B69d07c;
case 0x69d07f:c.instructions+=5;goto B69d07f;
case 0x69d080:c.instructions+=4;goto B69d080;
case 0x69d082:c.instructions+=3;goto B69d082;
case 0x69d085:c.instructions+=2;goto B69d085;
case 0x69d088:c.instructions+=1;goto B69d088;
case 0x69d08e:goto L69d08e;
case 0x69d091:c.instructions+=1;goto B69d091;
case 0x69d093:goto L69d093;
case 0x69d096:c.instructions+=14;goto B69d096;
case 0x69d099:c.instructions+=13;goto B69d099;
case 0x69d09d:c.instructions+=12;goto B69d09d;
case 0x69d0a0:c.instructions+=11;goto B69d0a0;
case 0x69d0a2:c.instructions+=10;goto B69d0a2;
case 0x69d0a5:c.instructions+=9;goto B69d0a5;
case 0x69d0a9:c.instructions+=8;goto B69d0a9;
case 0x69d0ab:c.instructions+=7;goto B69d0ab;
case 0x69d0ae:c.instructions+=6;goto B69d0ae;
case 0x69d0b1:c.instructions+=5;goto B69d0b1;
case 0x69d0b2:c.instructions+=4;goto B69d0b2;
case 0x69d0b5:c.instructions+=3;goto B69d0b5;
case 0x69d0b6:c.instructions+=2;goto B69d0b6;
case 0x69d0b7:c.instructions+=1;goto B69d0b7;
case 0x69d0bc:goto L69d0bc;
case 0x69d0bf:c.instructions+=9;goto B69d0bf;
case 0x69d0c2:c.instructions+=8;goto B69d0c2;
case 0x69d0c5:c.instructions+=7;goto B69d0c5;
case 0x69d0c6:c.instructions+=6;goto B69d0c6;
case 0x69d0c8:c.instructions+=5;goto B69d0c8;
case 0x69d0c9:c.instructions+=4;goto B69d0c9;
case 0x69d0cc:c.instructions+=3;goto B69d0cc;
case 0x69d0cf:c.instructions+=2;goto B69d0cf;
case 0x69d0d2:c.instructions+=1;goto B69d0d2;
case 0x69d0d4:goto L69d0d4;
case 0x69d0d5:c.instructions+=4;goto B69d0d5;
case 0x69d0d8:c.instructions+=3;goto B69d0d8;
case 0x69d0db:c.instructions+=2;goto B69d0db;
case 0x69d0e0:c.instructions+=1;goto B69d0e0;
case 0x69d0e5:goto L69d0e5;
case 0x69d0e7:c.instructions+=2;goto B69d0e7;
case 0x69d0ea:c.instructions+=1;goto B69d0ea;
case 0x69d0ec:goto L69d0ec;
case 0x69d0ef:c.instructions+=5;goto B69d0ef;
case 0x69d0f2:c.instructions+=4;goto B69d0f2;
case 0x69d0f5:c.instructions+=3;goto B69d0f5;
case 0x69d0f7:c.instructions+=2;goto B69d0f7;
case 0x69d0fa:c.instructions+=1;goto B69d0fa;
case 0x69d0ff:goto L69d0ff;
case 0x69d101:c.instructions+=1;goto B69d101;
case 0x69d107:goto L69d107;
case 0x69d108:c.instructions+=2;goto B69d108;
case 0x69d10b:c.instructions+=1;goto B69d10b;
case 0x69d10d:goto L69d10d;
case 0x69d111:c.instructions+=1;goto B69d111;
case 0x69d117:goto L69d117;
case 0x69d11a:c.instructions+=9;goto B69d11a;
case 0x69d11d:c.instructions+=8;goto B69d11d;
case 0x69d120:c.instructions+=7;goto B69d120;
case 0x69d124:c.instructions+=6;goto B69d124;
case 0x69d12b:c.instructions+=5;goto B69d12b;
case 0x69d12d:c.instructions+=4;goto B69d12d;
case 0x69d130:c.instructions+=3;goto B69d130;
case 0x69d132:c.instructions+=2;goto B69d132;
case 0x69d136:c.instructions+=1;goto B69d136;
case 0x69d13c:goto L69d13c;
case 0x69d13f:c.instructions+=9;goto B69d13f;
case 0x69d142:c.instructions+=8;goto B69d142;
case 0x69d145:c.instructions+=7;goto B69d145;
case 0x69d148:c.instructions+=6;goto B69d148;
case 0x69d14b:c.instructions+=5;goto B69d14b;
case 0x69d14e:c.instructions+=4;goto B69d14e;
case 0x69d152:c.instructions+=3;goto B69d152;
case 0x69d155:c.instructions+=2;goto B69d155;
case 0x69d157:c.instructions+=1;goto B69d157;
case 0x69d15d:goto L69d15d;
case 0x69d160:c.instructions+=2;goto B69d160;
case 0x69d163:c.instructions+=1;goto B69d163;
case 0x69d166:goto L69d166;
case 0x69d169:c.instructions+=4;goto B69d169;
case 0x69d16b:c.instructions+=3;goto B69d16b;
case 0x69d16e:c.instructions+=2;goto B69d16e;
case 0x69d172:c.instructions+=1;goto B69d172;
case 0x69d174:goto L69d174;
case 0x69d177:c.instructions+=1;goto B69d177;
case 0x69d179:goto L69d179;
case 0x69d17c:goto L69d17c;
case 0x69d17f:c.instructions+=3;goto B69d17f;
case 0x69d183:c.instructions+=2;goto B69d183;
case 0x69d186:c.instructions+=1;goto B69d186;
case 0x69d188:goto L69d188;
case 0x69d18b:c.instructions+=1;goto B69d18b;
case 0x69d18d:goto L69d18d;
case 0x69d190:c.instructions+=1;goto B69d190;
case 0x69d192:goto L69d192;
case 0x69d195:c.instructions+=6;goto B69d195;
case 0x69d198:c.instructions+=5;goto B69d198;
case 0x69d19b:c.instructions+=4;goto B69d19b;
case 0x69d19e:c.instructions+=3;goto B69d19e;
case 0x69d1a2:c.instructions+=2;goto B69d1a2;
case 0x69d1a4:c.instructions+=1;goto B69d1a4;
case 0x69d1a6:goto L69d1a6;
case 0x69d1a9:c.instructions+=1;goto B69d1a9;
case 0x69d1ac:goto L69d1ac;
case 0x69d1af:c.instructions+=4;goto B69d1af;
case 0x69d1b1:c.instructions+=3;goto B69d1b1;
case 0x69d1b4:c.instructions+=2;goto B69d1b4;
case 0x69d1b8:c.instructions+=1;goto B69d1b8;
case 0x69d1ba:goto L69d1ba;
case 0x69d1bd:c.instructions+=3;goto B69d1bd;
case 0x69d1c1:c.instructions+=2;goto B69d1c1;
case 0x69d1c4:c.instructions+=1;goto B69d1c4;
case 0x69d1c6:goto L69d1c6;
case 0x69d1c9:c.instructions+=1;goto B69d1c9;
case 0x69d1cb:goto L69d1cb;
case 0x69d1ce:c.instructions+=4;goto B69d1ce;
case 0x69d1d0:c.instructions+=3;goto B69d1d0;
case 0x69d1d3:c.instructions+=2;goto B69d1d3;
case 0x69d1d4:c.instructions+=1;goto B69d1d4;
case 0x69d1d9:goto L69d1d9;
case 0x69d1db:c.instructions+=1;goto B69d1db;
case 0x69d1dd:goto L69d1dd;
case 0x69d1e0:c.instructions+=3;goto B69d1e0;
case 0x69d1e3:c.instructions+=2;goto B69d1e3;
case 0x69d1e6:c.instructions+=1;goto B69d1e6;
case 0x69d1ec:goto L69d1ec;
case 0x69d1ee:goto L69d1ee;
case 0x69d1ef:c.instructions+=4;goto B69d1ef;
case 0x69d1f0:c.instructions+=3;goto B69d1f0;
case 0x69d1f1:c.instructions+=2;goto B69d1f1;
case 0x69d1f2:c.instructions+=1;goto B69d1f2;
case 0x69d1f5:goto L69d1f5;
case 0x69d1f7:c.instructions+=11;goto B69d1f7;
case 0x69d1f8:c.instructions+=10;goto B69d1f8;
case 0x69d1fa:c.instructions+=9;goto B69d1fa;
case 0x69d1fd:c.instructions+=8;goto B69d1fd;
case 0x69d1fe:c.instructions+=7;goto B69d1fe;
case 0x69d201:c.instructions+=6;goto B69d201;
case 0x69d202:c.instructions+=5;goto B69d202;
case 0x69d205:c.instructions+=4;goto B69d205;
case 0x69d208:c.instructions+=3;goto B69d208;
case 0x69d20b:c.instructions+=2;goto B69d20b;
case 0x69d20e:c.instructions+=1;goto B69d20e;
case 0x69d210:goto L69d210;
case 0x69d213:c.instructions+=6;goto B69d213;
case 0x69d214:c.instructions+=5;goto B69d214;
case 0x69d217:c.instructions+=4;goto B69d217;
case 0x69d21a:c.instructions+=3;goto B69d21a;
case 0x69d21d:c.instructions+=2;goto B69d21d;
case 0x69d221:c.instructions+=1;goto B69d221;
case 0x69d223:goto L69d223;
case 0x69d226:c.instructions+=7;goto B69d226;
case 0x69d229:c.instructions+=6;goto B69d229;
case 0x69d22c:c.instructions+=5;goto B69d22c;
case 0x69d22f:c.instructions+=4;goto B69d22f;
case 0x69d232:c.instructions+=3;goto B69d232;
case 0x69d235:c.instructions+=2;goto B69d235;
case 0x69d238:c.instructions+=1;goto B69d238;
case 0x69d23a:goto L69d23a;
case 0x69d23d:c.instructions+=7;goto B69d23d;
case 0x69d23e:c.instructions+=6;goto B69d23e;
case 0x69d23f:c.instructions+=5;goto B69d23f;
case 0x69d242:c.instructions+=4;goto B69d242;
case 0x69d243:c.instructions+=3;goto B69d243;
case 0x69d244:c.instructions+=2;goto B69d244;
case 0x69d247:c.instructions+=1;goto B69d247;
case 0x69d24c:goto L69d24c;
case 0x69d24e:c.instructions+=1;goto B69d24e;
case 0x69d24f:goto L69d24f;
case 0x69d251:c.instructions+=4;goto B69d251;
case 0x69d252:c.instructions+=3;goto B69d252;
case 0x69d253:c.instructions+=2;goto B69d253;
case 0x69d254:c.instructions+=1;goto B69d254;
case 0x69d257:goto L69d257;
case 0x69d259:c.instructions+=13;goto B69d259;
case 0x69d25a:c.instructions+=12;goto B69d25a;
case 0x69d25c:c.instructions+=11;goto B69d25c;
case 0x69d25d:c.instructions+=10;goto B69d25d;
case 0x69d25f:c.instructions+=9;goto B69d25f;
case 0x69d260:c.instructions+=8;goto B69d260;
case 0x69d263:c.instructions+=7;goto B69d263;
case 0x69d265:c.instructions+=6;goto B69d265;
case 0x69d266:c.instructions+=5;goto B69d266;
case 0x69d269:c.instructions+=4;goto B69d269;
case 0x69d26a:c.instructions+=3;goto B69d26a;
case 0x69d26b:c.instructions+=2;goto B69d26b;
case 0x69d26e:c.instructions+=1;goto B69d26e;
case 0x69d270:goto L69d270;
case 0x69d273:c.instructions+=2;goto B69d273;
case 0x69d275:c.instructions+=1;goto B69d275;
case 0x69d278:goto L69d278;
case 0x69d27b:c.instructions+=7;goto B69d27b;
case 0x69d27e:c.instructions+=6;goto B69d27e;
case 0x69d281:c.instructions+=5;goto B69d281;
case 0x69d284:c.instructions+=4;goto B69d284;
case 0x69d286:c.instructions+=3;goto B69d286;
case 0x69d288:c.instructions+=2;goto B69d288;
case 0x69d28b:c.instructions+=1;goto B69d28b;
case 0x69d28d:goto L69d28d;
case 0x69d28e:c.instructions+=2;goto B69d28e;
case 0x69d291:c.instructions+=1;goto B69d291;
case 0x69d293:goto L69d293;
case 0x69d297:c.instructions+=1;goto B69d297;
case 0x69d29a:goto L69d29a;
case 0x69d29d:c.instructions+=5;goto B69d29d;
case 0x69d29e:c.instructions+=4;goto B69d29e;
case 0x69d2a1:c.instructions+=3;goto B69d2a1;
case 0x69d2a4:c.instructions+=2;goto B69d2a4;
case 0x69d2a7:c.instructions+=1;goto B69d2a7;
case 0x69d2a9:goto L69d2a9;
case 0x69d2ac:c.instructions+=10;goto B69d2ac;
case 0x69d2af:c.instructions+=9;goto B69d2af;
case 0x69d2b1:c.instructions+=8;goto B69d2b1;
case 0x69d2b4:c.instructions+=7;goto B69d2b4;
case 0x69d2b7:c.instructions+=6;goto B69d2b7;
case 0x69d2ba:c.instructions+=5;goto B69d2ba;
case 0x69d2bd:c.instructions+=4;goto B69d2bd;
case 0x69d2bf:c.instructions+=3;goto B69d2bf;
case 0x69d2c1:c.instructions+=2;goto B69d2c1;
case 0x69d2c4:c.instructions+=1;goto B69d2c4;
case 0x69d2c6:goto L69d2c6;
case 0x69d2c9:c.instructions+=2;goto B69d2c9;
case 0x69d2cd:c.instructions+=1;goto B69d2cd;
case 0x69d2cf:goto L69d2cf;
case 0x69d2d1:goto L69d2d1;
case 0x69d2d3:c.instructions+=2;goto B69d2d3;
case 0x69d2d6:c.instructions+=1;goto B69d2d6;
case 0x69d2d8:goto L69d2d8;
case 0x69d2db:goto L69d2db;
case 0x69d2dd:c.instructions+=4;goto B69d2dd;
case 0x69d2e0:c.instructions+=3;goto B69d2e0;
case 0x69d2e1:c.instructions+=2;goto B69d2e1;
case 0x69d2e4:c.instructions+=1;goto B69d2e4;
case 0x69d2e6:goto L69d2e6;
case 0x69d2e8:goto L69d2e8;
case 0x69d2ea:c.instructions+=2;goto B69d2ea;
case 0x69d2ed:c.instructions+=1;goto B69d2ed;
case 0x69d2ef:goto L69d2ef;
case 0x69d2f3:goto L69d2f3;
case 0x69d2f6:c.instructions+=6;goto B69d2f6;
case 0x69d2f9:c.instructions+=5;goto B69d2f9;
case 0x69d2fc:c.instructions+=4;goto B69d2fc;
case 0x69d2ff:c.instructions+=3;goto B69d2ff;
case 0x69d302:c.instructions+=2;goto B69d302;
case 0x69d305:c.instructions+=1;goto B69d305;
case 0x69d307:goto L69d307;
case 0x69d30a:c.instructions+=10;goto B69d30a;
case 0x69d30d:c.instructions+=9;goto B69d30d;
case 0x69d310:c.instructions+=8;goto B69d310;
case 0x69d313:c.instructions+=7;goto B69d313;
case 0x69d316:c.instructions+=6;goto B69d316;
case 0x69d319:c.instructions+=5;goto B69d319;
case 0x69d31c:c.instructions+=4;goto B69d31c;
case 0x69d31e:c.instructions+=3;goto B69d31e;
case 0x69d320:c.instructions+=2;goto B69d320;
case 0x69d323:c.instructions+=1;goto B69d323;
case 0x69d325:goto L69d325;
case 0x69d328:c.instructions+=2;goto B69d328;
case 0x69d32c:c.instructions+=1;goto B69d32c;
case 0x69d32e:goto L69d32e;
case 0x69d330:goto L69d330;
case 0x69d333:c.instructions+=2;goto B69d333;
case 0x69d336:c.instructions+=1;goto B69d336;
case 0x69d339:goto L69d339;
case 0x69d33a:c.instructions+=2;goto B69d33a;
case 0x69d33d:c.instructions+=1;goto B69d33d;
case 0x69d33f:goto L69d33f;
case 0x69d340:c.instructions+=5;goto B69d340;
case 0x69d341:c.instructions+=4;goto B69d341;
case 0x69d343:c.instructions+=3;goto B69d343;
case 0x69d344:c.instructions+=2;goto B69d344;
case 0x69d345:c.instructions+=1;goto B69d345;
case 0x69d348:goto L69d348;
case 0x69d34a:c.instructions+=8;goto B69d34a;
case 0x69d34b:c.instructions+=7;goto B69d34b;
case 0x69d34d:c.instructions+=6;goto B69d34d;
case 0x69d350:c.instructions+=5;goto B69d350;
case 0x69d352:c.instructions+=4;goto B69d352;
case 0x69d355:c.instructions+=3;goto B69d355;
case 0x69d358:c.instructions+=2;goto B69d358;
case 0x69d35a:c.instructions+=1;goto B69d35a;
case 0x69d35b:goto L69d35b;
case 0x69d35e:c.instructions+=2;goto B69d35e;
case 0x69d362:c.instructions+=1;goto B69d362;
case 0x69d364:goto L69d364;
case 0x69d367:c.instructions+=3;goto B69d367;
case 0x69d368:c.instructions+=2;goto B69d368;
case 0x69d36b:c.instructions+=1;goto B69d36b;
case 0x69d36d:goto L69d36d;
case 0x69d370:c.instructions+=1;goto B69d370;
case 0x69d372:goto L69d372;
case 0x69d374:c.instructions+=1;goto B69d374;
case 0x69d379:goto L69d379;
case 0x69d37c:c.instructions+=5;goto B69d37c;
case 0x69d37e:c.instructions+=4;goto B69d37e;
case 0x69d37f:c.instructions+=3;goto B69d37f;
case 0x69d382:c.instructions+=2;goto B69d382;
case 0x69d383:c.instructions+=1;goto B69d383;
case 0x69d385:goto L69d385;
case 0x69d388:c.instructions+=1;goto B69d388;
case 0x69d38a:goto L69d38a;
case 0x69d38d:c.instructions+=2;goto B69d38d;
case 0x69d38f:c.instructions+=1;goto B69d38f;
case 0x69d391:goto L69d391;
case 0x69d393:goto L69d393;
case 0x69d396:c.instructions+=2;goto B69d396;
case 0x69d39a:c.instructions+=1;goto B69d39a;
case 0x69d39d:goto L69d39d;
case 0x69d3a0:c.instructions+=8;goto B69d3a0;
case 0x69d3a4:c.instructions+=7;goto B69d3a4;
case 0x69d3a8:c.instructions+=6;goto B69d3a8;
case 0x69d3ab:c.instructions+=5;goto B69d3ab;
case 0x69d3ac:c.instructions+=4;goto B69d3ac;
case 0x69d3ad:c.instructions+=3;goto B69d3ad;
case 0x69d3ae:c.instructions+=2;goto B69d3ae;
case 0x69d3af:c.instructions+=1;goto B69d3af;
case 0x69d3b5:goto L69d3b5;
case 0x69d3b8:c.instructions+=3;goto B69d3b8;
case 0x69d3ba:c.instructions+=2;goto B69d3ba;
case 0x69d3bd:c.instructions+=1;goto B69d3bd;
case 0x69d3c0:goto L69d3c0;
case 0x69d3c2:c.instructions+=4;goto B69d3c2;
case 0x69d3c3:c.instructions+=3;goto B69d3c3;
case 0x69d3c5:c.instructions+=2;goto B69d3c5;
case 0x69d3c7:c.instructions+=1;goto B69d3c7;
case 0x69d3cd:goto L69d3cd;
case 0x69d3d1:c.instructions+=3;goto B69d3d1;
case 0x69d3d3:c.instructions+=2;goto B69d3d3;
case 0x69d3d6:c.instructions+=1;goto B69d3d6;
case 0x69d3dc:goto L69d3dc;
case 0x69d3df:c.instructions+=3;goto B69d3df;
case 0x69d3e2:c.instructions+=2;goto B69d3e2;
case 0x69d3e4:c.instructions+=1;goto B69d3e4;
case 0x69d3e9:goto L69d3e9;
case 0x69d3eb:c.instructions+=3;goto B69d3eb;
case 0x69d3ec:c.instructions+=2;goto B69d3ec;
case 0x69d3ef:c.instructions+=1;goto B69d3ef;
case 0x69d3f1:goto L69d3f1;
case 0x69d3f4:c.instructions+=2;goto B69d3f4;
case 0x69d3f6:c.instructions+=1;goto B69d3f6;
case 0x69d3f9:goto L69d3f9;
case 0x69d3fc:c.instructions+=8;goto B69d3fc;
case 0x69d3ff:c.instructions+=7;goto B69d3ff;
case 0x69d402:c.instructions+=6;goto B69d402;
case 0x69d405:c.instructions+=5;goto B69d405;
case 0x69d408:c.instructions+=4;goto B69d408;
case 0x69d40a:c.instructions+=3;goto B69d40a;
case 0x69d40c:c.instructions+=2;goto B69d40c;
case 0x69d40f:c.instructions+=1;goto B69d40f;
case 0x69d411:goto L69d411;
case 0x69d412:c.instructions+=2;goto B69d412;
case 0x69d415:c.instructions+=1;goto B69d415;
case 0x69d417:goto L69d417;
case 0x69d41a:goto L69d41a;
case 0x69d41d:c.instructions+=1;goto B69d41d;
case 0x69d41f:goto L69d41f;
case 0x69d422:c.instructions+=1;goto B69d422;
case 0x69d429:goto L69d429;
case 0x69d42b:c.instructions+=2;goto B69d42b;
case 0x69d42e:c.instructions+=1;goto B69d42e;
case 0x69d430:goto L69d430;
case 0x69d432:c.instructions+=6;goto B69d432;
case 0x69d435:c.instructions+=5;goto B69d435;
case 0x69d438:c.instructions+=4;goto B69d438;
case 0x69d43a:c.instructions+=3;goto B69d43a;
case 0x69d43b:c.instructions+=2;goto B69d43b;
case 0x69d43e:c.instructions+=1;goto B69d43e;
case 0x69d440:goto L69d440;
case 0x69d443:goto L69d443;
case 0x69d447:c.instructions+=1;goto B69d447;
case 0x69d449:goto L69d449;
case 0x69d44b:c.instructions+=1;goto B69d44b;
case 0x69d44d:goto L69d44d;
case 0x69d450:c.instructions+=1;goto B69d450;
case 0x69d452:goto L69d452;
case 0x69d454:c.instructions+=2;goto B69d454;
case 0x69d457:c.instructions+=1;goto B69d457;
case 0x69d459:goto L69d459;
case 0x69d45b:c.instructions+=1;goto B69d45b;
case 0x69d45c:goto L69d45c;
case 0x69d45f:c.instructions+=2;goto B69d45f;
case 0x69d461:c.instructions+=1;goto B69d461;
case 0x69d463:goto L69d463;
case 0x69d465:c.instructions+=1;goto B69d465;
case 0x69d467:goto L69d467;
case 0x69d46a:goto L69d46a;
case 0x69d46b:c.instructions+=2;goto B69d46b;
case 0x69d46e:c.instructions+=1;goto B69d46e;
case 0x69d470:goto L69d470;
case 0x69d472:goto L69d472;
case 0x69d474:c.instructions+=3;goto B69d474;
case 0x69d476:c.instructions+=2;goto B69d476;
case 0x69d479:c.instructions+=1;goto B69d479;
case 0x69d47b:goto L69d47b;
case 0x69d47e:c.instructions+=2;goto B69d47e;
case 0x69d480:c.instructions+=1;goto B69d480;
case 0x69d482:goto L69d482;
case 0x69d484:c.instructions+=3;goto B69d484;
case 0x69d485:c.instructions+=2;goto B69d485;
case 0x69d488:c.instructions+=1;goto B69d488;
case 0x69d48a:goto L69d48a;
case 0x69d48c:c.instructions+=1;goto B69d48c;
case 0x69d48e:goto L69d48e;
case 0x69d490:c.instructions+=4;goto B69d490;
case 0x69d491:c.instructions+=3;goto B69d491;
case 0x69d493:c.instructions+=2;goto B69d493;
case 0x69d495:c.instructions+=1;goto B69d495;
case 0x69d497:goto L69d497;
case 0x69d498:goto L69d498;
case 0x69d499:c.instructions+=2;goto B69d499;
case 0x69d49c:c.instructions+=1;goto B69d49c;
case 0x69d49e:goto L69d49e;
case 0x69d4a0:c.instructions+=2;goto B69d4a0;
case 0x69d4a3:c.instructions+=1;goto B69d4a3;
case 0x69d4a9:goto L69d4a9;
case 0x69d4ae:c.instructions+=1;goto B69d4ae;
case 0x69d4b3:goto L69d4b3;
case 0x69d4b6:c.instructions+=12;goto B69d4b6;
case 0x69d4b9:c.instructions+=11;goto B69d4b9;
case 0x69d4bc:c.instructions+=10;goto B69d4bc;
case 0x69d4bf:c.instructions+=9;goto B69d4bf;
case 0x69d4c2:c.instructions+=8;goto B69d4c2;
case 0x69d4c5:c.instructions+=7;goto B69d4c5;
case 0x69d4c8:c.instructions+=6;goto B69d4c8;
case 0x69d4cb:c.instructions+=5;goto B69d4cb;
case 0x69d4ce:c.instructions+=4;goto B69d4ce;
case 0x69d4d0:c.instructions+=3;goto B69d4d0;
case 0x69d4d2:c.instructions+=2;goto B69d4d2;
case 0x69d4d5:c.instructions+=1;goto B69d4d5;
case 0x69d4d7:goto L69d4d7;
case 0x69d4d8:c.instructions+=2;goto B69d4d8;
case 0x69d4db:c.instructions+=1;goto B69d4db;
case 0x69d4e1:goto L69d4e1;
case 0x69d4e4:c.instructions+=1;goto B69d4e4;
case 0x69d4e6:goto L69d4e6;
case 0x69d4e9:c.instructions+=3;goto B69d4e9;
case 0x69d4ec:c.instructions+=2;goto B69d4ec;
case 0x69d4ef:c.instructions+=1;goto B69d4ef;
case 0x69d4f5:goto L69d4f5;
case 0x69d4f8:c.instructions+=2;goto B69d4f8;
case 0x69d4fb:c.instructions+=1;goto B69d4fb;
case 0x69d501:goto L69d501;
case 0x69d503:c.instructions+=3;goto B69d503;
case 0x69d506:c.instructions+=2;goto B69d506;
case 0x69d509:c.instructions+=1;goto B69d509;
case 0x69d50f:goto L69d50f;
case 0x69d512:c.instructions+=2;goto B69d512;
case 0x69d515:c.instructions+=1;goto B69d515;
case 0x69d518:goto L69d518;
case 0x69d51b:c.instructions+=3;goto B69d51b;
case 0x69d51d:c.instructions+=2;goto B69d51d;
case 0x69d520:c.instructions+=1;goto B69d520;
case 0x69d522:goto L69d522;
case 0x69d524:c.instructions+=1;goto B69d524;
case 0x69d527:goto L69d527;
case 0x69d52b:c.instructions+=2;goto B69d52b;
case 0x69d52e:c.instructions+=1;goto B69d52e;
case 0x69d530:goto L69d530;
case 0x69d533:c.instructions+=12;goto B69d533;
case 0x69d536:c.instructions+=11;goto B69d536;
case 0x69d539:c.instructions+=10;goto B69d539;
case 0x69d53c:c.instructions+=9;goto B69d53c;
case 0x69d53f:c.instructions+=8;goto B69d53f;
case 0x69d542:c.instructions+=7;goto B69d542;
case 0x69d545:c.instructions+=6;goto B69d545;
case 0x69d548:c.instructions+=5;goto B69d548;
case 0x69d54b:c.instructions+=4;goto B69d54b;
case 0x69d54d:c.instructions+=3;goto B69d54d;
case 0x69d54f:c.instructions+=2;goto B69d54f;
case 0x69d552:c.instructions+=1;goto B69d552;
case 0x69d554:goto L69d554;
case 0x69d555:c.instructions+=2;goto B69d555;
case 0x69d558:c.instructions+=1;goto B69d558;
case 0x69d55a:goto L69d55a;
case 0x69d55d:c.instructions+=1;goto B69d55d;
case 0x69d55f:goto L69d55f;
case 0x69d561:goto L69d561;
case 0x69d566:c.instructions+=1;goto B69d566;
case 0x69d568:goto L69d568;
case 0x69d569:c.instructions+=2;goto B69d569;
case 0x69d56c:c.instructions+=1;goto B69d56c;
case 0x69d56e:goto L69d56e;
case 0x69d570:goto L69d570;
case 0x69d572:c.instructions+=1;goto B69d572;
case 0x69d576:goto L69d576;
case 0x69d579:c.instructions+=1;goto B69d579;
case 0x69d57b:goto L69d57b;
case 0x69d57e:c.instructions+=5;goto B69d57e;
case 0x69d57f:c.instructions+=4;goto B69d57f;
case 0x69d582:c.instructions+=3;goto B69d582;
case 0x69d585:c.instructions+=2;goto B69d585;
case 0x69d588:c.instructions+=1;goto B69d588;
case 0x69d58a:goto L69d58a;
case 0x69d58d:c.instructions+=2;goto B69d58d;
case 0x69d590:c.instructions+=1;goto B69d590;
case 0x69d592:goto L69d592;
case 0x69d595:c.instructions+=2;goto B69d595;
case 0x69d599:c.instructions+=1;goto B69d599;
case 0x69d59e:goto L69d59e;
case 0x69d5a1:c.instructions+=7;goto B69d5a1;
case 0x69d5a4:c.instructions+=6;goto B69d5a4;
case 0x69d5a7:c.instructions+=5;goto B69d5a7;
case 0x69d5a9:c.instructions+=4;goto B69d5a9;
case 0x69d5ac:c.instructions+=3;goto B69d5ac;
case 0x69d5ae:c.instructions+=2;goto B69d5ae;
case 0x69d5b0:c.instructions+=1;goto B69d5b0;
case 0x69d5b2:goto L69d5b2;
case 0x69d5b5:c.instructions+=6;goto B69d5b5;
case 0x69d5b7:c.instructions+=5;goto B69d5b7;
case 0x69d5ba:c.instructions+=4;goto B69d5ba;
case 0x69d5be:c.instructions+=3;goto B69d5be;
case 0x69d5c0:c.instructions+=2;goto B69d5c0;
case 0x69d5c4:c.instructions+=1;goto B69d5c4;
case 0x69d5c6:goto L69d5c6;
case 0x69d5c9:c.instructions+=5;goto B69d5c9;
case 0x69d5ca:c.instructions+=4;goto B69d5ca;
case 0x69d5cb:c.instructions+=3;goto B69d5cb;
case 0x69d5ce:c.instructions+=2;goto B69d5ce;
case 0x69d5d1:c.instructions+=1;goto B69d5d1;
case 0x69d5d6:goto L69d5d6;
case 0x69d5d8:c.instructions+=4;goto B69d5d8;
case 0x69d5d9:c.instructions+=3;goto B69d5d9;
case 0x69d5dc:c.instructions+=2;goto B69d5dc;
case 0x69d5e0:c.instructions+=1;goto B69d5e0;
case 0x69d5e2:goto L69d5e2;
case 0x69d5e4:goto L69d5e4;
case 0x69d5e5:c.instructions+=1;goto B69d5e5;
case 0x69d5e6:goto L69d5e6;
case 0x69d5e7:c.instructions+=2;goto B69d5e7;
case 0x69d5e8:c.instructions+=1;goto B69d5e8;
case 0x69d5eb:goto L69d5eb;
case 0x69d5ed:c.instructions+=9;goto B69d5ed;
case 0x69d5ee:c.instructions+=8;goto B69d5ee;
case 0x69d5f0:c.instructions+=7;goto B69d5f0;
case 0x69d5f3:c.instructions+=6;goto B69d5f3;
case 0x69d5f6:c.instructions+=5;goto B69d5f6;
case 0x69d5f7:c.instructions+=4;goto B69d5f7;
case 0x69d5fa:c.instructions+=3;goto B69d5fa;
case 0x69d5fd:c.instructions+=2;goto B69d5fd;
case 0x69d600:c.instructions+=1;goto B69d600;
case 0x69d602:goto L69d602;
case 0x69d605:c.instructions+=1;goto B69d605;
case 0x69d607:goto L69d607;
case 0x69d60a:c.instructions+=1;goto B69d60a;
case 0x69d60c:goto L69d60c;
case 0x69d60f:c.instructions+=8;goto B69d60f;
case 0x69d612:c.instructions+=7;goto B69d612;
case 0x69d614:c.instructions+=6;goto B69d614;
case 0x69d617:c.instructions+=5;goto B69d617;
case 0x69d61a:c.instructions+=4;goto B69d61a;
case 0x69d61d:c.instructions+=3;goto B69d61d;
case 0x69d620:c.instructions+=2;goto B69d620;
case 0x69d623:c.instructions+=1;goto B69d623;
case 0x69d625:goto L69d625;
case 0x69d626:c.instructions+=1;goto B69d626;
case 0x69d629:goto L69d629;
case 0x69d62b:c.instructions+=1;goto B69d62b;
case 0x69d62d:goto L69d62d;
case 0x69d630:c.instructions+=5;goto B69d630;
case 0x69d633:c.instructions+=4;goto B69d633;
case 0x69d636:c.instructions+=3;goto B69d636;
case 0x69d639:c.instructions+=2;goto B69d639;
case 0x69d63c:c.instructions+=1;goto B69d63c;
case 0x69d63e:goto L69d63e;
case 0x69d63f:goto L69d63f;
case 0x69d642:c.instructions+=1;goto B69d642;
case 0x69d644:goto L69d644;
case 0x69d647:c.instructions+=1;goto B69d647;
case 0x69d649:goto L69d649;
case 0x69d64b:c.instructions+=2;goto B69d64b;
case 0x69d64c:c.instructions+=1;goto B69d64c;
case 0x69d64e:goto L69d64e;
case 0x69d650:goto L69d650;
case 0x69d651:c.instructions+=2;goto B69d651;
case 0x69d652:c.instructions+=1;goto B69d652;
case 0x69d655:goto L69d655;
case 0x69d657:c.instructions+=14;goto B69d657;
case 0x69d658:c.instructions+=13;goto B69d658;
case 0x69d65a:c.instructions+=12;goto B69d65a;
case 0x69d65d:c.instructions+=11;goto B69d65d;
case 0x69d660:c.instructions+=10;goto B69d660;
case 0x69d661:c.instructions+=9;goto B69d661;
case 0x69d664:c.instructions+=8;goto B69d664;
case 0x69d667:c.instructions+=7;goto B69d667;
case 0x69d66a:c.instructions+=6;goto B69d66a;
case 0x69d66b:c.instructions+=5;goto B69d66b;
case 0x69d66e:c.instructions+=4;goto B69d66e;
case 0x69d671:c.instructions+=3;goto B69d671;
case 0x69d674:c.instructions+=2;goto B69d674;
case 0x69d677:c.instructions+=1;goto B69d677;
case 0x69d679:goto L69d679;
case 0x69d67c:c.instructions+=5;goto B69d67c;
case 0x69d67f:c.instructions+=4;goto B69d67f;
case 0x69d682:c.instructions+=3;goto B69d682;
case 0x69d685:c.instructions+=2;goto B69d685;
case 0x69d688:c.instructions+=1;goto B69d688;
case 0x69d68a:goto L69d68a;
case 0x69d68d:c.instructions+=5;goto B69d68d;
case 0x69d690:c.instructions+=4;goto B69d690;
case 0x69d693:c.instructions+=3;goto B69d693;
case 0x69d696:c.instructions+=2;goto B69d696;
case 0x69d699:c.instructions+=1;goto B69d699;
case 0x69d69b:goto L69d69b;
case 0x69d69d:c.instructions+=2;goto B69d69d;
case 0x69d69e:c.instructions+=1;goto B69d69e;
case 0x69d6a0:goto L69d6a0;
case 0x69d6a2:goto L69d6a2;
case 0x69d6a3:c.instructions+=3;goto B69d6a3;
case 0x69d6a4:c.instructions+=2;goto B69d6a4;
case 0x69d6a5:c.instructions+=1;goto B69d6a5;
case 0x69d6a8:goto L69d6a8;
case 0x69d6aa:c.instructions+=14;goto B69d6aa;
case 0x69d6ab:c.instructions+=13;goto B69d6ab;
case 0x69d6ad:c.instructions+=12;goto B69d6ad;
case 0x69d6b0:c.instructions+=11;goto B69d6b0;
case 0x69d6b3:c.instructions+=10;goto B69d6b3;
case 0x69d6b4:c.instructions+=9;goto B69d6b4;
case 0x69d6b5:c.instructions+=8;goto B69d6b5;
case 0x69d6b6:c.instructions+=7;goto B69d6b6;
case 0x69d6b9:c.instructions+=6;goto B69d6b9;
case 0x69d6bc:c.instructions+=5;goto B69d6bc;
case 0x69d6bf:c.instructions+=4;goto B69d6bf;
case 0x69d6c2:c.instructions+=3;goto B69d6c2;
case 0x69d6c5:c.instructions+=2;goto B69d6c5;
case 0x69d6c7:c.instructions+=1;goto B69d6c7;
case 0x69d6cd:goto L69d6cd;
case 0x69d6d0:c.instructions+=1;goto B69d6d0;
case 0x69d6d6:goto L69d6d6;
case 0x69d6d9:c.instructions+=6;goto B69d6d9;
case 0x69d6dc:c.instructions+=5;goto B69d6dc;
case 0x69d6de:c.instructions+=4;goto B69d6de;
case 0x69d6e4:c.instructions+=3;goto B69d6e4;
case 0x69d6ea:c.instructions+=2;goto B69d6ea;
case 0x69d6ed:c.instructions+=1;goto B69d6ed;
case 0x69d6ef:goto L69d6ef;
case 0x69d6f2:c.instructions+=3;goto B69d6f2;
case 0x69d6f4:c.instructions+=2;goto B69d6f4;
case 0x69d6f6:c.instructions+=1;goto B69d6f6;
case 0x69d6f8:goto L69d6f8;
case 0x69d6fb:goto L69d6fb;
case 0x69d6fd:c.instructions+=1;goto B69d6fd;
case 0x69d6ff:goto L69d6ff;
case 0x69d700:c.instructions+=3;goto B69d700;
case 0x69d703:c.instructions+=2;goto B69d703;
case 0x69d705:c.instructions+=1;goto B69d705;
case 0x69d707:goto L69d707;
case 0x69d70a:c.instructions+=2;goto B69d70a;
case 0x69d70c:c.instructions+=1;goto B69d70c;
case 0x69d70e:goto L69d70e;
case 0x69d710:c.instructions+=2;goto B69d710;
case 0x69d712:c.instructions+=1;goto B69d712;
case 0x69d714:goto L69d714;
case 0x69d717:c.instructions+=2;goto B69d717;
case 0x69d71a:c.instructions+=1;goto B69d71a;
case 0x69d71f:goto L69d71f;
case 0x69d725:c.instructions+=1;goto B69d725;
case 0x69d727:goto L69d727;
case 0x69d72d:c.instructions+=1;goto B69d72d;
case 0x69d733:goto L69d733;
case 0x69d736:c.instructions+=3;goto B69d736;
case 0x69d738:c.instructions+=2;goto B69d738;
case 0x69d73a:c.instructions+=1;goto B69d73a;
case 0x69d73c:goto L69d73c;
case 0x69d73f:goto L69d73f;
case 0x69d741:c.instructions+=1;goto B69d741;
case 0x69d743:goto L69d743;
case 0x69d744:c.instructions+=3;goto B69d744;
case 0x69d747:c.instructions+=2;goto B69d747;
case 0x69d749:c.instructions+=1;goto B69d749;
case 0x69d74b:goto L69d74b;
case 0x69d74e:c.instructions+=17;goto B69d74e;
case 0x69d751:c.instructions+=16;goto B69d751;
case 0x69d754:c.instructions+=15;goto B69d754;
case 0x69d758:c.instructions+=14;goto B69d758;
case 0x69d75b:c.instructions+=13;goto B69d75b;
case 0x69d75d:c.instructions+=12;goto B69d75d;
case 0x69d760:c.instructions+=11;goto B69d760;
case 0x69d763:c.instructions+=10;goto B69d763;
case 0x69d765:c.instructions+=9;goto B69d765;
case 0x69d767:c.instructions+=8;goto B69d767;
case 0x69d76a:c.instructions+=7;goto B69d76a;
case 0x69d76c:c.instructions+=6;goto B69d76c;
case 0x69d76f:c.instructions+=5;goto B69d76f;
case 0x69d771:c.instructions+=4;goto B69d771;
case 0x69d774:c.instructions+=3;goto B69d774;
case 0x69d776:c.instructions+=2;goto B69d776;
case 0x69d779:c.instructions+=1;goto B69d779;
case 0x69d77c:goto L69d77c;
case 0x69d77e:c.instructions+=10;goto B69d77e;
case 0x69d781:c.instructions+=9;goto B69d781;
case 0x69d783:c.instructions+=8;goto B69d783;
case 0x69d786:c.instructions+=7;goto B69d786;
case 0x69d789:c.instructions+=6;goto B69d789;
case 0x69d78c:c.instructions+=5;goto B69d78c;
case 0x69d78f:c.instructions+=4;goto B69d78f;
case 0x69d792:c.instructions+=3;goto B69d792;
case 0x69d795:c.instructions+=2;goto B69d795;
case 0x69d799:c.instructions+=1;goto B69d799;
case 0x69d79b:goto L69d79b;
case 0x69d79e:c.instructions+=2;goto B69d79e;
case 0x69d7a2:c.instructions+=1;goto B69d7a2;
case 0x69d7a4:goto L69d7a4;
case 0x69d7a7:c.instructions+=6;goto B69d7a7;
case 0x69d7aa:c.instructions+=5;goto B69d7aa;
case 0x69d7ad:c.instructions+=4;goto B69d7ad;
case 0x69d7af:c.instructions+=3;goto B69d7af;
case 0x69d7b3:c.instructions+=2;goto B69d7b3;
case 0x69d7b6:c.instructions+=1;goto B69d7b6;
case 0x69d7b8:goto L69d7b8;
case 0x69d7bf:c.instructions+=1;goto B69d7bf;
case 0x69d7c1:goto L69d7c1;
case 0x69d7c4:c.instructions+=6;goto B69d7c4;
case 0x69d7c7:c.instructions+=5;goto B69d7c7;
case 0x69d7ca:c.instructions+=4;goto B69d7ca;
case 0x69d7cd:c.instructions+=3;goto B69d7cd;
case 0x69d7d0:c.instructions+=2;goto B69d7d0;
case 0x69d7d3:c.instructions+=1;goto B69d7d3;
case 0x69d7d5:goto L69d7d5;
case 0x69d7d8:c.instructions+=2;goto B69d7d8;
case 0x69d7da:c.instructions+=1;goto B69d7da;
case 0x69d7dc:goto L69d7dc;
case 0x69d7de:c.instructions+=2;goto B69d7de;
case 0x69d7e0:c.instructions+=1;goto B69d7e0;
case 0x69d7e2:goto L69d7e2;
case 0x69d7e5:c.instructions+=2;goto B69d7e5;
case 0x69d7e8:c.instructions+=1;goto B69d7e8;
case 0x69d7ea:goto L69d7ea;
case 0x69d7ed:c.instructions+=2;goto B69d7ed;
case 0x69d7ef:c.instructions+=1;goto B69d7ef;
case 0x69d7f1:goto L69d7f1;
case 0x69d7f8:c.instructions+=3;goto B69d7f8;
case 0x69d7fb:c.instructions+=2;goto B69d7fb;
case 0x69d7fd:c.instructions+=1;goto B69d7fd;
case 0x69d7ff:goto L69d7ff;
case 0x69d802:c.instructions+=1;goto B69d802;
case 0x69d804:goto L69d804;
case 0x69d806:goto L69d806;
case 0x69d809:c.instructions+=1;goto B69d809;
case 0x69d80b:goto L69d80b;
case 0x69d80e:goto L69d80e;
case 0x69d80f:c.instructions+=4;goto B69d80f;
case 0x69d810:c.instructions+=3;goto B69d810;
case 0x69d811:c.instructions+=2;goto B69d811;
case 0x69d812:c.instructions+=1;goto B69d812;
case 0x69d815:goto L69d815;
case 0x69d817:c.instructions+=10;goto B69d817;
case 0x69d818:c.instructions+=9;goto B69d818;
case 0x69d81a:c.instructions+=8;goto B69d81a;
case 0x69d81b:c.instructions+=7;goto B69d81b;
case 0x69d81c:c.instructions+=6;goto B69d81c;
case 0x69d81d:c.instructions+=5;goto B69d81d;
case 0x69d81f:c.instructions+=4;goto B69d81f;
case 0x69d822:c.instructions+=3;goto B69d822;
case 0x69d823:c.instructions+=2;goto B69d823;
case 0x69d824:c.instructions+=1;goto B69d824;
case 0x69d826:goto L69d826;
case 0x69d829:c.instructions+=6;goto B69d829;
case 0x69d82c:c.instructions+=5;goto B69d82c;
case 0x69d82f:c.instructions+=4;goto B69d82f;
case 0x69d831:c.instructions+=3;goto B69d831;
case 0x69d834:c.instructions+=2;goto B69d834;
case 0x69d837:c.instructions+=1;goto B69d837;
case 0x69d839:goto L69d839;
case 0x69d83c:c.instructions+=1;goto B69d83c;
case 0x69d83e:goto L69d83e;
case 0x69d842:goto L69d842;
case 0x69d843:c.instructions+=2;goto B69d843;
case 0x69d846:c.instructions+=1;goto B69d846;
case 0x69d848:goto L69d848;
case 0x69d84a:c.instructions+=2;goto B69d84a;
case 0x69d84d:c.instructions+=1;goto B69d84d;
case 0x69d84f:goto L69d84f;
case 0x69d852:c.instructions+=9;goto B69d852;
case 0x69d855:c.instructions+=8;goto B69d855;
case 0x69d858:c.instructions+=7;goto B69d858;
case 0x69d85b:c.instructions+=6;goto B69d85b;
case 0x69d85e:c.instructions+=5;goto B69d85e;
case 0x69d861:c.instructions+=4;goto B69d861;
case 0x69d863:c.instructions+=3;goto B69d863;
case 0x69d866:c.instructions+=2;goto B69d866;
case 0x69d869:c.instructions+=1;goto B69d869;
case 0x69d86b:goto L69d86b;
case 0x69d86e:c.instructions+=1;goto B69d86e;
case 0x69d870:goto L69d870;
case 0x69d873:c.instructions+=3;goto B69d873;
case 0x69d874:c.instructions+=2;goto B69d874;
case 0x69d877:c.instructions+=1;goto B69d877;
case 0x69d879:goto L69d879;
case 0x69d87c:goto L69d87c;
case 0x69d87d:c.instructions+=2;goto B69d87d;
case 0x69d880:c.instructions+=1;goto B69d880;
case 0x69d882:goto L69d882;
case 0x69d884:c.instructions+=4;goto B69d884;
case 0x69d886:c.instructions+=3;goto B69d886;
case 0x69d889:c.instructions+=2;goto B69d889;
case 0x69d88c:c.instructions+=1;goto B69d88c;
case 0x69d88e:goto L69d88e;
case 0x69d891:c.instructions+=6;goto B69d891;
case 0x69d894:c.instructions+=5;goto B69d894;
case 0x69d897:c.instructions+=4;goto B69d897;
case 0x69d899:c.instructions+=3;goto B69d899;
case 0x69d89c:c.instructions+=2;goto B69d89c;
case 0x69d89f:c.instructions+=1;goto B69d89f;
case 0x69d8a1:goto L69d8a1;
case 0x69d8a4:c.instructions+=2;goto B69d8a4;
case 0x69d8a6:c.instructions+=1;goto B69d8a6;
case 0x69d8a8:goto L69d8a8;
case 0x69d8ab:c.instructions+=4;goto B69d8ab;
case 0x69d8ae:c.instructions+=3;goto B69d8ae;
case 0x69d8b1:c.instructions+=2;goto B69d8b1;
case 0x69d8b4:c.instructions+=1;goto B69d8b4;
case 0x69d8b6:goto L69d8b6;
case 0x69d8bd:goto L69d8bd;
case 0x69d8c0:c.instructions+=1;goto B69d8c0;
case 0x69d8c4:goto L69d8c4;
case 0x69d8c5:c.instructions+=2;goto B69d8c5;
case 0x69d8c8:c.instructions+=1;goto B69d8c8;
case 0x69d8ca:goto L69d8ca;
case 0x69d8ce:c.instructions+=2;goto B69d8ce;
case 0x69d8d2:c.instructions+=1;goto B69d8d2;
case 0x69d8d4:goto L69d8d4;
case 0x69d8d7:c.instructions+=9;goto B69d8d7;
case 0x69d8da:c.instructions+=8;goto B69d8da;
case 0x69d8dd:c.instructions+=7;goto B69d8dd;
case 0x69d8e0:c.instructions+=6;goto B69d8e0;
case 0x69d8e3:c.instructions+=5;goto B69d8e3;
case 0x69d8e6:c.instructions+=4;goto B69d8e6;
case 0x69d8e9:c.instructions+=3;goto B69d8e9;
case 0x69d8ec:c.instructions+=2;goto B69d8ec;
case 0x69d8ef:c.instructions+=1;goto B69d8ef;
case 0x69d8f1:goto L69d8f1;
case 0x69d8f4:c.instructions+=3;goto B69d8f4;
case 0x69d8f7:c.instructions+=2;goto B69d8f7;
case 0x69d8f9:c.instructions+=1;goto B69d8f9;
case 0x69d8fb:goto L69d8fb;
case 0x69d8fe:c.instructions+=3;goto B69d8fe;
case 0x69d901:c.instructions+=2;goto B69d901;
case 0x69d904:c.instructions+=1;goto B69d904;
case 0x69d907:goto L69d907;
case 0x69d90a:c.instructions+=3;goto B69d90a;
case 0x69d90d:c.instructions+=2;goto B69d90d;
case 0x69d910:c.instructions+=1;goto B69d910;
case 0x69d912:goto L69d912;
case 0x69d915:c.instructions+=9;goto B69d915;
case 0x69d918:c.instructions+=8;goto B69d918;
case 0x69d91b:c.instructions+=7;goto B69d91b;
case 0x69d91f:c.instructions+=6;goto B69d91f;
case 0x69d922:c.instructions+=5;goto B69d922;
case 0x69d923:c.instructions+=4;goto B69d923;
case 0x69d926:c.instructions+=3;goto B69d926;
case 0x69d927:c.instructions+=2;goto B69d927;
case 0x69d928:c.instructions+=1;goto B69d928;
case 0x69d92a:goto L69d92a;
case 0x69d92d:c.instructions+=2;goto B69d92d;
case 0x69d930:c.instructions+=1;goto B69d930;
case 0x69d934:goto L69d934;
case 0x69d936:c.instructions+=2;goto B69d936;
case 0x69d937:c.instructions+=1;goto B69d937;
case 0x69d93a:goto L69d93a;
case 0x69d93c:c.instructions+=14;goto B69d93c;
case 0x69d93d:c.instructions+=13;goto B69d93d;
case 0x69d93f:c.instructions+=12;goto B69d93f;
case 0x69d940:c.instructions+=11;goto B69d940;
case 0x69d941:c.instructions+=10;goto B69d941;
case 0x69d944:c.instructions+=9;goto B69d944;
case 0x69d945:c.instructions+=8;goto B69d945;
case 0x69d947:c.instructions+=7;goto B69d947;
case 0x69d949:c.instructions+=6;goto B69d949;
case 0x69d94c:c.instructions+=5;goto B69d94c;
case 0x69d94d:c.instructions+=4;goto B69d94d;
case 0x69d950:c.instructions+=3;goto B69d950;
case 0x69d953:c.instructions+=2;goto B69d953;
case 0x69d955:c.instructions+=1;goto B69d955;
case 0x69d957:goto L69d957;
case 0x69d95a:goto L69d95a;
case 0x69d95d:c.instructions+=4;goto B69d95d;
case 0x69d960:c.instructions+=3;goto B69d960;
case 0x69d963:c.instructions+=2;goto B69d963;
case 0x69d966:c.instructions+=1;goto B69d966;
case 0x69d968:goto L69d968;
case 0x69d96b:c.instructions+=4;goto B69d96b;
case 0x69d96e:c.instructions+=3;goto B69d96e;
case 0x69d96f:c.instructions+=2;goto B69d96f;
case 0x69d971:c.instructions+=1;goto B69d971;
case 0x69d973:goto L69d973;
case 0x69d976:goto L69d976;
case 0x69d979:c.instructions+=4;goto B69d979;
case 0x69d97c:c.instructions+=3;goto B69d97c;
case 0x69d97d:c.instructions+=2;goto B69d97d;
case 0x69d980:c.instructions+=1;goto B69d980;
case 0x69d982:goto L69d982;
case 0x69d985:c.instructions+=1;goto B69d985;
case 0x69d987:goto L69d987;
case 0x69d98a:c.instructions+=2;goto B69d98a;
case 0x69d98d:c.instructions+=1;goto B69d98d;
case 0x69d98f:goto L69d98f;
case 0x69d992:c.instructions+=6;goto B69d992;
case 0x69d995:c.instructions+=5;goto B69d995;
case 0x69d998:c.instructions+=4;goto B69d998;
case 0x69d999:c.instructions+=3;goto B69d999;
case 0x69d99c:c.instructions+=2;goto B69d99c;
case 0x69d99f:c.instructions+=1;goto B69d99f;
case 0x69d9a1:goto L69d9a1;
case 0x69d9a4:c.instructions+=1;goto B69d9a4;
case 0x69d9a7:goto L69d9a7;
case 0x69d9a9:goto L69d9a9;
case 0x69d9ac:c.instructions+=1;goto B69d9ac;
case 0x69d9af:goto L69d9af;
case 0x69d9b0:c.instructions+=4;goto B69d9b0;
case 0x69d9b3:c.instructions+=3;goto B69d9b3;
case 0x69d9b6:c.instructions+=2;goto B69d9b6;
case 0x69d9b9:c.instructions+=1;goto B69d9b9;
case 0x69d9bb:goto L69d9bb;
case 0x69d9bd:goto L69d9bd;
case 0x69d9c0:goto L69d9c0;
case 0x69d9c2:c.instructions+=2;goto B69d9c2;
case 0x69d9c3:c.instructions+=1;goto B69d9c3;
case 0x69d9c5:goto L69d9c5;
case 0x69d9c8:goto L69d9c8;
case 0x69d9cb:c.instructions+=8;goto B69d9cb;
case 0x69d9ce:c.instructions+=7;goto B69d9ce;
case 0x69d9d1:c.instructions+=6;goto B69d9d1;
case 0x69d9d4:c.instructions+=5;goto B69d9d4;
case 0x69d9d7:c.instructions+=4;goto B69d9d7;
case 0x69d9da:c.instructions+=3;goto B69d9da;
case 0x69d9dc:c.instructions+=2;goto B69d9dc;
case 0x69d9df:c.instructions+=1;goto B69d9df;
case 0x69d9e1:goto L69d9e1;
case 0x69d9e3:c.instructions+=6;goto B69d9e3;
case 0x69d9e6:c.instructions+=5;goto B69d9e6;
case 0x69d9e7:c.instructions+=4;goto B69d9e7;
case 0x69d9ea:c.instructions+=3;goto B69d9ea;
case 0x69d9eb:c.instructions+=2;goto B69d9eb;
case 0x69d9ec:c.instructions+=1;goto B69d9ec;
case 0x69d9ef:goto L69d9ef;
case 0x69d9f1:c.instructions+=22;goto B69d9f1;
case 0x69d9f2:c.instructions+=21;goto B69d9f2;
case 0x69d9f4:c.instructions+=20;goto B69d9f4;
case 0x69d9f5:c.instructions+=19;goto B69d9f5;
case 0x69d9f6:c.instructions+=18;goto B69d9f6;
case 0x69d9f8:c.instructions+=17;goto B69d9f8;
case 0x69d9fb:c.instructions+=16;goto B69d9fb;
case 0x69d9fe:c.instructions+=15;goto B69d9fe;
case 0x69da01:c.instructions+=14;goto B69da01;
case 0x69da04:c.instructions+=13;goto B69da04;
case 0x69da05:c.instructions+=12;goto B69da05;
case 0x69da06:c.instructions+=11;goto B69da06;
case 0x69da09:c.instructions+=10;goto B69da09;
case 0x69da0c:c.instructions+=9;goto B69da0c;
case 0x69da0f:c.instructions+=8;goto B69da0f;
case 0x69da10:c.instructions+=7;goto B69da10;
case 0x69da13:c.instructions+=6;goto B69da13;
case 0x69da16:c.instructions+=5;goto B69da16;
case 0x69da19:c.instructions+=4;goto B69da19;
case 0x69da1c:c.instructions+=3;goto B69da1c;
case 0x69da1f:c.instructions+=2;goto B69da1f;
case 0x69da22:c.instructions+=1;goto B69da22;
case 0x69da24:goto L69da24;
case 0x69da27:goto L69da27;
case 0x69da28:c.instructions+=4;goto B69da28;
case 0x69da29:c.instructions+=3;goto B69da29;
case 0x69da2a:c.instructions+=2;goto B69da2a;
case 0x69da2b:c.instructions+=1;goto B69da2b;
case 0x69da2e:goto L69da2e;
case 0x69da31:c.instructions+=1;goto B69da31;
case 0x69da34:goto L69da34;
case 0x69da37:c.instructions+=4;goto B69da37;
case 0x69da3a:c.instructions+=3;goto B69da3a;
case 0x69da3d:c.instructions+=2;goto B69da3d;
case 0x69da40:c.instructions+=1;goto B69da40;
case 0x69da46:goto L69da46;
case 0x69da49:c.instructions+=2;goto B69da49;
case 0x69da4c:c.instructions+=1;goto B69da4c;
case 0x69da4e:goto L69da4e;
case 0x69da51:c.instructions+=2;goto B69da51;
case 0x69da54:c.instructions+=1;goto B69da54;
case 0x69da56:goto L69da56;
case 0x69da59:c.instructions+=1;goto B69da59;
case 0x69da5b:goto L69da5b;
case 0x69da5e:c.instructions+=1;goto B69da5e;
case 0x69da60:goto L69da60;
case 0x69da62:c.instructions+=2;goto B69da62;
case 0x69da65:c.instructions+=1;goto B69da65;
case 0x69da67:goto L69da67;
case 0x69da69:c.instructions+=1;goto B69da69;
case 0x69da6c:goto L69da6c;
case 0x69da6f:c.instructions+=11;goto B69da6f;
case 0x69da72:c.instructions+=10;goto B69da72;
case 0x69da75:c.instructions+=9;goto B69da75;
case 0x69da79:c.instructions+=8;goto B69da79;
case 0x69da7c:c.instructions+=7;goto B69da7c;
case 0x69da7f:c.instructions+=6;goto B69da7f;
case 0x69da82:c.instructions+=5;goto B69da82;
case 0x69da85:c.instructions+=4;goto B69da85;
case 0x69da88:c.instructions+=3;goto B69da88;
case 0x69da8a:c.instructions+=2;goto B69da8a;
case 0x69da8d:c.instructions+=1;goto B69da8d;
case 0x69da8f:goto L69da8f;
case 0x69da92:c.instructions+=8;goto B69da92;
case 0x69da95:c.instructions+=7;goto B69da95;
case 0x69da98:c.instructions+=6;goto B69da98;
case 0x69da9b:c.instructions+=5;goto B69da9b;
case 0x69da9e:c.instructions+=4;goto B69da9e;
case 0x69daa1:c.instructions+=3;goto B69daa1;
case 0x69daa4:c.instructions+=2;goto B69daa4;
case 0x69daa6:c.instructions+=1;goto B69daa6;
case 0x69daa8:goto L69daa8;
case 0x69daab:c.instructions+=6;goto B69daab;
case 0x69daae:c.instructions+=5;goto B69daae;
case 0x69dab1:c.instructions+=4;goto B69dab1;
case 0x69dab4:c.instructions+=3;goto B69dab4;
case 0x69dab7:c.instructions+=2;goto B69dab7;
case 0x69daba:c.instructions+=1;goto B69daba;
case 0x69dabf:goto L69dabf;
case 0x69dac1:c.instructions+=1;goto B69dac1;
case 0x69dac3:goto L69dac3;
case 0x69dac6:c.instructions+=4;goto B69dac6;
case 0x69dac9:c.instructions+=3;goto B69dac9;
case 0x69dacc:c.instructions+=2;goto B69dacc;
case 0x69dacf:c.instructions+=1;goto B69dacf;
case 0x69dad1:goto L69dad1;
case 0x69dad4:c.instructions+=3;goto B69dad4;
case 0x69dad7:c.instructions+=2;goto B69dad7;
case 0x69dada:c.instructions+=1;goto B69dada;
case 0x69dae0:goto L69dae0;
case 0x69dae5:goto L69dae5;
case 0x69dae8:c.instructions+=1;goto B69dae8;
case 0x69daed:goto L69daed;
case 0x69daef:c.instructions+=19;goto B69daef;
case 0x69daf0:c.instructions+=18;goto B69daf0;
case 0x69daf2:c.instructions+=17;goto B69daf2;
case 0x69daf5:c.instructions+=16;goto B69daf5;
case 0x69daf8:c.instructions+=15;goto B69daf8;
case 0x69dafb:c.instructions+=14;goto B69dafb;
case 0x69dafc:c.instructions+=13;goto B69dafc;
case 0x69daff:c.instructions+=12;goto B69daff;
case 0x69db00:c.instructions+=11;goto B69db00;
case 0x69db03:c.instructions+=10;goto B69db03;
case 0x69db07:c.instructions+=9;goto B69db07;
case 0x69db0a:c.instructions+=8;goto B69db0a;
case 0x69db0d:c.instructions+=7;goto B69db0d;
case 0x69db10:c.instructions+=6;goto B69db10;
case 0x69db11:c.instructions+=5;goto B69db11;
case 0x69db14:c.instructions+=4;goto B69db14;
case 0x69db17:c.instructions+=3;goto B69db17;
case 0x69db1a:c.instructions+=2;goto B69db1a;
case 0x69db21:c.instructions+=1;goto B69db21;
case 0x69db23:goto L69db23;
case 0x69db26:c.instructions+=1;goto B69db26;
case 0x69db28:goto L69db28;
case 0x69db2c:c.instructions+=1;goto B69db2c;
case 0x69db2e:goto L69db2e;
case 0x69db30:goto L69db30;
case 0x69db32:goto L69db32;
case 0x69db36:c.instructions+=1;goto B69db36;
case 0x69db38:goto L69db38;
case 0x69db3b:c.instructions+=3;goto B69db3b;
case 0x69db3e:c.instructions+=2;goto B69db3e;
case 0x69db41:c.instructions+=1;goto B69db41;
case 0x69db46:goto L69db46;
case 0x69db48:c.instructions+=1;goto B69db48;
case 0x69db4a:goto L69db4a;
case 0x69db51:goto L69db51;
case 0x69db54:c.instructions+=16;goto B69db54;
case 0x69db57:c.instructions+=15;goto B69db57;
case 0x69db5a:c.instructions+=14;goto B69db5a;
case 0x69db5b:c.instructions+=13;goto B69db5b;
case 0x69db5c:c.instructions+=12;goto B69db5c;
case 0x69db5d:c.instructions+=11;goto B69db5d;
case 0x69db5e:c.instructions+=10;goto B69db5e;
case 0x69db61:c.instructions+=9;goto B69db61;
case 0x69db64:c.instructions+=8;goto B69db64;
case 0x69db65:c.instructions+=7;goto B69db65;
case 0x69db66:c.instructions+=6;goto B69db66;
case 0x69db67:c.instructions+=5;goto B69db67;
case 0x69db68:c.instructions+=4;goto B69db68;
case 0x69db6a:c.instructions+=3;goto B69db6a;
case 0x69db71:c.instructions+=2;goto B69db71;
case 0x69db74:c.instructions+=1;goto B69db74;
case 0x69db77:goto L69db77;
case 0x69db7a:c.instructions+=5;goto B69db7a;
case 0x69db7d:c.instructions+=4;goto B69db7d;
case 0x69db80:c.instructions+=3;goto B69db80;
case 0x69db83:c.instructions+=2;goto B69db83;
case 0x69db86:c.instructions+=1;goto B69db86;
case 0x69db8c:goto L69db8c;
case 0x69db8f:c.instructions+=5;goto B69db8f;
case 0x69db92:c.instructions+=4;goto B69db92;
case 0x69db94:c.instructions+=3;goto B69db94;
case 0x69db97:c.instructions+=2;goto B69db97;
case 0x69db9a:c.instructions+=1;goto B69db9a;
case 0x69dba0:goto L69dba0;
case 0x69dba3:c.instructions+=4;goto B69dba3;
case 0x69dba6:c.instructions+=3;goto B69dba6;
case 0x69dba9:c.instructions+=2;goto B69dba9;
case 0x69dbac:c.instructions+=1;goto B69dbac;
case 0x69dbaf:goto L69dbaf;
case 0x69dbb2:c.instructions+=7;goto B69dbb2;
case 0x69dbb4:c.instructions+=6;goto B69dbb4;
case 0x69dbb7:c.instructions+=5;goto B69dbb7;
case 0x69dbb9:c.instructions+=4;goto B69dbb9;
case 0x69dbbc:c.instructions+=3;goto B69dbbc;
case 0x69dbbf:c.instructions+=2;goto B69dbbf;
case 0x69dbc2:c.instructions+=1;goto B69dbc2;
case 0x69dbc4:goto L69dbc4;
case 0x69dbcb:goto L69dbcb;
case 0x69dbce:c.instructions+=1;goto B69dbce;
case 0x69dbd0:goto L69dbd0;
case 0x69dbd3:c.instructions+=3;goto B69dbd3;
case 0x69dbd6:c.instructions+=2;goto B69dbd6;
case 0x69dbd9:c.instructions+=1;goto B69dbd9;
case 0x69dbdb:goto L69dbdb;
case 0x69dbe0:c.instructions+=1;goto B69dbe0;
case 0x69dbe2:goto L69dbe2;
case 0x69dbe6:c.instructions+=1;goto B69dbe6;
case 0x69dbe8:goto L69dbe8;
case 0x69dbeb:c.instructions+=1;goto B69dbeb;
case 0x69dbed:goto L69dbed;
case 0x69dbf0:c.instructions+=5;goto B69dbf0;
case 0x69dbf1:c.instructions+=4;goto B69dbf1;
case 0x69dbf4:c.instructions+=3;goto B69dbf4;
case 0x69dbf7:c.instructions+=2;goto B69dbf7;
case 0x69dbf8:c.instructions+=1;goto B69dbf8;
case 0x69dbfd:goto L69dbfd;
case 0x69dc00:c.instructions+=1;goto B69dc00;
case 0x69dc02:goto L69dc02;
case 0x69dc05:c.instructions+=4;goto B69dc05;
case 0x69dc08:c.instructions+=3;goto B69dc08;
case 0x69dc0c:c.instructions+=2;goto B69dc0c;
case 0x69dc0f:c.instructions+=1;goto B69dc0f;
case 0x69dc11:goto L69dc11;
case 0x69dc13:goto L69dc13;
case 0x69dc16:c.instructions+=3;goto B69dc16;
case 0x69dc19:c.instructions+=2;goto B69dc19;
case 0x69dc1d:c.instructions+=1;goto B69dc1d;
case 0x69dc21:goto L69dc21;
case 0x69dc23:c.instructions+=2;goto B69dc23;
case 0x69dc26:c.instructions+=1;goto B69dc26;
case 0x69dc28:goto L69dc28;
case 0x69dc2b:goto L69dc2b;
case 0x69dc2e:c.instructions+=3;goto B69dc2e;
case 0x69dc31:c.instructions+=2;goto B69dc31;
case 0x69dc35:c.instructions+=1;goto B69dc35;
case 0x69dc3b:goto L69dc3b;
case 0x69dc3e:c.instructions+=3;goto B69dc3e;
case 0x69dc41:c.instructions+=2;goto B69dc41;
case 0x69dc44:c.instructions+=1;goto B69dc44;
case 0x69dc4a:goto L69dc4a;
case 0x69dc4c:c.instructions+=2;goto B69dc4c;
case 0x69dc4f:c.instructions+=1;goto B69dc4f;
case 0x69dc51:goto L69dc51;
case 0x69dc55:c.instructions+=1;goto B69dc55;
case 0x69dc57:goto L69dc57;
case 0x69dc59:goto L69dc59;
case 0x69dc5b:goto L69dc5b;
case 0x69dc5f:c.instructions+=1;goto B69dc5f;
case 0x69dc61:goto L69dc61;
case 0x69dc63:c.instructions+=1;goto B69dc63;
case 0x69dc64:goto L69dc64;
case 0x69dc67:c.instructions+=4;goto B69dc67;
case 0x69dc69:c.instructions+=3;goto B69dc69;
case 0x69dc6c:c.instructions+=2;goto B69dc6c;
case 0x69dc6f:c.instructions+=1;goto B69dc6f;
case 0x69dc75:goto L69dc75;
case 0x69dc7a:c.instructions+=1;goto B69dc7a;
case 0x69dc80:goto L69dc80;
case 0x69dc83:c.instructions+=7;goto B69dc83;
case 0x69dc86:c.instructions+=6;goto B69dc86;
case 0x69dc89:c.instructions+=5;goto B69dc89;
case 0x69dc8c:c.instructions+=4;goto B69dc8c;
case 0x69dc8f:c.instructions+=3;goto B69dc8f;
case 0x69dc92:c.instructions+=2;goto B69dc92;
case 0x69dc95:c.instructions+=1;goto B69dc95;
case 0x69dc9b:goto L69dc9b;
case 0x69dc9d:c.instructions+=2;goto B69dc9d;
case 0x69dca0:c.instructions+=1;goto B69dca0;
case 0x69dca2:goto L69dca2;
case 0x69dca5:c.instructions+=4;goto B69dca5;
case 0x69dca8:c.instructions+=3;goto B69dca8;
case 0x69dcab:c.instructions+=2;goto B69dcab;
case 0x69dcaf:c.instructions+=1;goto B69dcaf;
case 0x69dcb1:goto L69dcb1;
case 0x69dcb5:c.instructions+=1;goto B69dcb5;
case 0x69dcb7:goto L69dcb7;
case 0x69dcba:c.instructions+=8;goto B69dcba;
case 0x69dcbd:c.instructions+=7;goto B69dcbd;
case 0x69dcc0:c.instructions+=6;goto B69dcc0;
case 0x69dcc3:c.instructions+=5;goto B69dcc3;
case 0x69dcc5:c.instructions+=4;goto B69dcc5;
case 0x69dcc7:c.instructions+=3;goto B69dcc7;
case 0x69dccd:c.instructions+=2;goto B69dccd;
case 0x69dcd3:c.instructions+=1;goto B69dcd3;
case 0x69dcd5:goto L69dcd5;
case 0x69dcda:c.instructions+=2;goto B69dcda;
case 0x69dcdd:c.instructions+=1;goto B69dcdd;
case 0x69dcdf:goto L69dcdf;
case 0x69dce1:c.instructions+=3;goto B69dce1;
case 0x69dce2:c.instructions+=2;goto B69dce2;
case 0x69dce4:c.instructions+=1;goto B69dce4;
case 0x69dce6:goto L69dce6;
case 0x69dceb:c.instructions+=1;goto B69dceb;
case 0x69dced:goto L69dced;
case 0x69dcee:c.instructions+=4;goto B69dcee;
case 0x69dcf1:c.instructions+=3;goto B69dcf1;
case 0x69dcf4:c.instructions+=2;goto B69dcf4;
case 0x69dcf7:c.instructions+=1;goto B69dcf7;
case 0x69dcfc:goto L69dcfc;
case 0x69dcff:c.instructions+=1;goto B69dcff;
case 0x69dd01:goto L69dd01;
case 0x69dd02:c.instructions+=2;goto B69dd02;
case 0x69dd05:c.instructions+=1;goto B69dd05;
case 0x69dd07:goto L69dd07;
case 0x69dd09:goto L69dd09;
case 0x69dd0d:c.instructions+=1;goto B69dd0d;
case 0x69dd11:goto L69dd11;
case 0x69dd14:c.instructions+=1;goto B69dd14;
case 0x69dd16:goto L69dd16;
case 0x69dd19:c.instructions+=2;goto B69dd19;
case 0x69dd1d:c.instructions+=1;goto B69dd1d;
case 0x69dd1f:goto L69dd1f;
case 0x69dd23:c.instructions+=1;goto B69dd23;
case 0x69dd25:goto L69dd25;
case 0x69dd28:c.instructions+=5;goto B69dd28;
case 0x69dd2b:c.instructions+=4;goto B69dd2b;
case 0x69dd2d:c.instructions+=3;goto B69dd2d;
case 0x69dd30:c.instructions+=2;goto B69dd30;
case 0x69dd33:c.instructions+=1;goto B69dd33;
case 0x69dd35:goto L69dd35;
case 0x69dd37:goto L69dd37;
case 0x69dd3a:goto L69dd3a;
case 0x69dd3d:goto L69dd3d;
case 0x69dd3e:c.instructions+=2;goto B69dd3e;
case 0x69dd41:c.instructions+=1;goto B69dd41;
case 0x69dd47:goto L69dd47;
case 0x69dd4a:c.instructions+=2;goto B69dd4a;
case 0x69dd4c:c.instructions+=1;goto B69dd4c;
case 0x69dd4e:goto L69dd4e;
case 0x69dd51:c.instructions+=4;goto B69dd51;
case 0x69dd52:c.instructions+=3;goto B69dd52;
case 0x69dd53:c.instructions+=2;goto B69dd53;
case 0x69dd54:c.instructions+=1;goto B69dd54;
case 0x69dd55:goto L69dd55;
case 0x69dd57:goto L69dd57;
case 0x69dd58:c.instructions+=4;goto B69dd58;
case 0x69dd59:c.instructions+=3;goto B69dd59;
case 0x69dd5a:c.instructions+=2;goto B69dd5a;
case 0x69dd5b:c.instructions+=1;goto B69dd5b;
case 0x69dd5e:goto L69dd5e;
case 0x69dd61:c.instructions+=1;goto B69dd61;
case 0x69dd63:goto L69dd63;
case 0x69dd65:c.instructions+=9;goto B69dd65;
case 0x69dd66:c.instructions+=8;goto B69dd66;
case 0x69dd68:c.instructions+=7;goto B69dd68;
case 0x69dd69:c.instructions+=6;goto B69dd69;
case 0x69dd6a:c.instructions+=5;goto B69dd6a;
case 0x69dd6d:c.instructions+=4;goto B69dd6d;
case 0x69dd6e:c.instructions+=3;goto B69dd6e;
case 0x69dd6f:c.instructions+=2;goto B69dd6f;
case 0x69dd72:c.instructions+=1;goto B69dd72;
case 0x69dd73:goto L69dd73;
case 0x69dd76:c.instructions+=4;goto B69dd76;
case 0x69dd79:c.instructions+=3;goto B69dd79;
case 0x69dd7c:c.instructions+=2;goto B69dd7c;
case 0x69dd7f:c.instructions+=1;goto B69dd7f;
case 0x69dd81:goto L69dd81;
case 0x69dd83:goto L69dd83;
case 0x69dd86:c.instructions+=3;goto B69dd86;
case 0x69dd89:c.instructions+=2;goto B69dd89;
case 0x69dd8b:c.instructions+=1;goto B69dd8b;
case 0x69dd91:goto L69dd91;
case 0x69dd95:c.instructions+=3;goto B69dd95;
case 0x69dd98:c.instructions+=2;goto B69dd98;
case 0x69dd9b:c.instructions+=1;goto B69dd9b;
case 0x69dda1:goto L69dda1;
case 0x69dda4:c.instructions+=18;goto B69dda4;
case 0x69dda6:c.instructions+=17;goto B69dda6;
case 0x69dda9:c.instructions+=16;goto B69dda9;
case 0x69ddac:c.instructions+=15;goto B69ddac;
case 0x69ddaf:c.instructions+=14;goto B69ddaf;
case 0x69ddb2:c.instructions+=13;goto B69ddb2;
case 0x69ddb5:c.instructions+=12;goto B69ddb5;
case 0x69ddb8:c.instructions+=11;goto B69ddb8;
case 0x69ddbb:c.instructions+=10;goto B69ddbb;
case 0x69ddbe:c.instructions+=9;goto B69ddbe;
case 0x69ddc1:c.instructions+=8;goto B69ddc1;
case 0x69ddc4:c.instructions+=7;goto B69ddc4;
case 0x69ddc7:c.instructions+=6;goto B69ddc7;
case 0x69ddca:c.instructions+=5;goto B69ddca;
case 0x69ddcd:c.instructions+=4;goto B69ddcd;
case 0x69ddcf:c.instructions+=3;goto B69ddcf;
case 0x69ddd5:c.instructions+=2;goto B69ddd5;
case 0x69dddb:c.instructions+=1;goto B69dddb;
case 0x69dddd:goto L69dddd;
case 0x69dde3:c.instructions+=1;goto B69dde3;
case 0x69dde5:goto L69dde5;
case 0x69ddeb:c.instructions+=1;goto B69ddeb;
case 0x69dded:goto L69dded;
case 0x69ddf0:c.instructions+=6;goto B69ddf0;
case 0x69ddf3:c.instructions+=5;goto B69ddf3;
case 0x69ddf7:c.instructions+=4;goto B69ddf7;
case 0x69ddfa:c.instructions+=3;goto B69ddfa;
case 0x69ddfd:c.instructions+=2;goto B69ddfd;
case 0x69de01:c.instructions+=1;goto B69de01;
case 0x69de03:goto L69de03;
case 0x69de06:c.instructions+=19;goto B69de06;
case 0x69de09:c.instructions+=18;goto B69de09;
case 0x69de0c:c.instructions+=17;goto B69de0c;
case 0x69de0f:c.instructions+=16;goto B69de0f;
case 0x69de11:c.instructions+=15;goto B69de11;
case 0x69de14:c.instructions+=14;goto B69de14;
case 0x69de17:c.instructions+=13;goto B69de17;
case 0x69de1a:c.instructions+=12;goto B69de1a;
case 0x69de1d:c.instructions+=11;goto B69de1d;
case 0x69de21:c.instructions+=10;goto B69de21;
case 0x69de24:c.instructions+=9;goto B69de24;
case 0x69de27:c.instructions+=8;goto B69de27;
case 0x69de2a:c.instructions+=7;goto B69de2a;
case 0x69de2d:c.instructions+=6;goto B69de2d;
case 0x69de2f:c.instructions+=5;goto B69de2f;
case 0x69de32:c.instructions+=4;goto B69de32;
case 0x69de35:c.instructions+=3;goto B69de35;
case 0x69de38:c.instructions+=2;goto B69de38;
case 0x69de3b:c.instructions+=1;goto B69de3b;
case 0x69de3f:goto L69de3f;
case 0x69de42:c.instructions+=4;goto B69de42;
case 0x69de45:c.instructions+=3;goto B69de45;
case 0x69de48:c.instructions+=2;goto B69de48;
case 0x69de4b:c.instructions+=1;goto B69de4b;
case 0x69de4d:goto L69de4d;
case 0x69de50:c.instructions+=8;goto B69de50;
case 0x69de53:c.instructions+=7;goto B69de53;
case 0x69de56:c.instructions+=6;goto B69de56;
case 0x69de59:c.instructions+=5;goto B69de59;
case 0x69de5c:c.instructions+=4;goto B69de5c;
case 0x69de5f:c.instructions+=3;goto B69de5f;
case 0x69de62:c.instructions+=2;goto B69de62;
case 0x69de66:c.instructions+=1;goto B69de66;
case 0x69de68:goto L69de68;
case 0x69de6b:c.instructions+=17;goto B69de6b;
case 0x69de6e:c.instructions+=16;goto B69de6e;
case 0x69de72:c.instructions+=15;goto B69de72;
case 0x69de75:c.instructions+=14;goto B69de75;
case 0x69de78:c.instructions+=13;goto B69de78;
case 0x69de7c:c.instructions+=12;goto B69de7c;
case 0x69de7f:c.instructions+=11;goto B69de7f;
case 0x69de82:c.instructions+=10;goto B69de82;
case 0x69de85:c.instructions+=9;goto B69de85;
case 0x69de88:c.instructions+=8;goto B69de88;
case 0x69de8b:c.instructions+=7;goto B69de8b;
case 0x69de8e:c.instructions+=6;goto B69de8e;
case 0x69de91:c.instructions+=5;goto B69de91;
case 0x69de94:c.instructions+=4;goto B69de94;
case 0x69de97:c.instructions+=3;goto B69de97;
case 0x69de9a:c.instructions+=2;goto B69de9a;
case 0x69de9d:c.instructions+=1;goto B69de9d;
case 0x69de9f:goto L69de9f;
case 0x69dea2:c.instructions+=4;goto B69dea2;
case 0x69dea5:c.instructions+=3;goto B69dea5;
case 0x69dea8:c.instructions+=2;goto B69dea8;
case 0x69deab:c.instructions+=1;goto B69deab;
case 0x69deae:goto L69deae;
case 0x69deb1:c.instructions+=4;goto B69deb1;
case 0x69deb4:c.instructions+=3;goto B69deb4;
case 0x69deb7:c.instructions+=2;goto B69deb7;
case 0x69deba:c.instructions+=1;goto B69deba;
case 0x69debd:goto L69debd;
case 0x69dec0:c.instructions+=3;goto B69dec0;
case 0x69dec3:c.instructions+=2;goto B69dec3;
case 0x69dec6:c.instructions+=1;goto B69dec6;
case 0x69dec8:goto L69dec8;
case 0x69decb:c.instructions+=3;goto B69decb;
case 0x69dece:c.instructions+=2;goto B69dece;
case 0x69ded1:c.instructions+=1;goto B69ded1;
case 0x69ded3:goto L69ded3;
case 0x69ded6:c.instructions+=2;goto B69ded6;
case 0x69ded9:c.instructions+=1;goto B69ded9;
case 0x69dedf:goto L69dedf;
case 0x69dee0:c.instructions+=4;goto B69dee0;
case 0x69dee1:c.instructions+=3;goto B69dee1;
case 0x69dee2:c.instructions+=2;goto B69dee2;
case 0x69dee3:c.instructions+=1;goto B69dee3;
case 0x69dee6:goto L69dee6;
case 0x69dee8:c.instructions+=8;goto B69dee8;
case 0x69dee9:c.instructions+=7;goto B69dee9;
case 0x69deeb:c.instructions+=6;goto B69deeb;
case 0x69deee:c.instructions+=5;goto B69deee;
case 0x69def1:c.instructions+=4;goto B69def1;
case 0x69def4:c.instructions+=3;goto B69def4;
case 0x69def7:c.instructions+=2;goto B69def7;
case 0x69defa:c.instructions+=1;goto B69defa;
case 0x69defc:goto L69defc;
case 0x69deff:c.instructions+=3;goto B69deff;
case 0x69df00:c.instructions+=2;goto B69df00;
case 0x69df03:c.instructions+=1;goto B69df03;
case 0x69df08:goto L69df08;
case 0x69df09:c.instructions+=1;goto B69df09;
case 0x69df0c:goto L69df0c;
case 0x69df0e:c.instructions+=6;goto B69df0e;
case 0x69df0f:c.instructions+=5;goto B69df0f;
case 0x69df11:c.instructions+=4;goto B69df11;
case 0x69df12:c.instructions+=3;goto B69df12;
case 0x69df15:c.instructions+=2;goto B69df15;
case 0x69df18:c.instructions+=1;goto B69df18;
case 0x69df1d:goto L69df1d;
case 0x69df20:c.instructions+=1;goto B69df20;
case 0x69df25:goto L69df25;
case 0x69df28:c.instructions+=1;goto B69df28;
case 0x69df2d:goto L69df2d;
case 0x69df30:c.instructions+=1;goto B69df30;
case 0x69df35:goto L69df35;
case 0x69df38:c.instructions+=1;goto B69df38;
case 0x69df3d:goto L69df3d;
case 0x69df40:c.instructions+=1;goto B69df40;
case 0x69df45:goto L69df45;
case 0x69df48:c.instructions+=1;goto B69df48;
case 0x69df4d:goto L69df4d;
case 0x69df50:c.instructions+=1;goto B69df50;
case 0x69df55:goto L69df55;
case 0x69df58:c.instructions+=1;goto B69df58;
case 0x69df5d:goto L69df5d;
case 0x69df60:c.instructions+=1;goto B69df60;
case 0x69df65:goto L69df65;
case 0x69df68:c.instructions+=1;goto B69df68;
case 0x69df6d:goto L69df6d;
case 0x69df70:c.instructions+=1;goto B69df70;
case 0x69df75:goto L69df75;
case 0x69df78:c.instructions+=1;goto B69df78;
case 0x69df7d:goto L69df7d;
case 0x69df80:c.instructions+=1;goto B69df80;
case 0x69df85:goto L69df85;
case 0x69df88:c.instructions+=1;goto B69df88;
case 0x69df8d:goto L69df8d;
case 0x69df90:c.instructions+=1;goto B69df90;
case 0x69df95:goto L69df95;
case 0x69df98:c.instructions+=2;goto B69df98;
case 0x69df9b:c.instructions+=1;goto B69df9b;
case 0x69dfa0:goto L69dfa0;
case 0x69dfa1:c.instructions+=3;goto B69dfa1;
case 0x69dfa3:c.instructions+=2;goto B69dfa3;
case 0x69dfa4:c.instructions+=1;goto B69dfa4;
case 0x69dfa6:goto L69dfa6;
case 0x69dfa8:goto L69dfa8;
case 0x69dfa9:c.instructions+=2;goto B69dfa9;
case 0x69dfaa:c.instructions+=1;goto B69dfaa;
case 0x69dfad:goto L69dfad;
case 0x69dfaf:c.instructions+=10;goto B69dfaf;
case 0x69dfb0:c.instructions+=9;goto B69dfb0;
case 0x69dfb2:c.instructions+=8;goto B69dfb2;
case 0x69dfb5:c.instructions+=7;goto B69dfb5;
case 0x69dfb9:c.instructions+=6;goto B69dfb9;
case 0x69dfbc:c.instructions+=5;goto B69dfbc;
case 0x69dfbd:c.instructions+=4;goto B69dfbd;
case 0x69dfc0:c.instructions+=3;goto B69dfc0;
case 0x69dfc3:c.instructions+=2;goto B69dfc3;
case 0x69dfc4:c.instructions+=1;goto B69dfc4;
case 0x69dfca:goto L69dfca;
case 0x69dfcc:c.instructions+=2;goto B69dfcc;
case 0x69dfce:c.instructions+=1;goto B69dfce;
case 0x69dfd0:goto L69dfd0;
case 0x69dfd3:c.instructions+=3;goto B69dfd3;
case 0x69dfd4:c.instructions+=2;goto B69dfd4;
case 0x69dfd6:c.instructions+=1;goto B69dfd6;
case 0x69dfd8:goto L69dfd8;
case 0x69dfda:c.instructions+=2;goto B69dfda;
case 0x69dfdc:c.instructions+=1;goto B69dfdc;
case 0x69dfde:goto L69dfde;
case 0x69dfdf:c.instructions+=12;goto B69dfdf;
case 0x69dfe2:c.instructions+=11;goto B69dfe2;
case 0x69dfe5:c.instructions+=10;goto B69dfe5;
case 0x69dfe8:c.instructions+=9;goto B69dfe8;
case 0x69dfeb:c.instructions+=8;goto B69dfeb;
case 0x69dfed:c.instructions+=7;goto B69dfed;
case 0x69dff0:c.instructions+=6;goto B69dff0;
case 0x69dff3:c.instructions+=5;goto B69dff3;
case 0x69dff6:c.instructions+=4;goto B69dff6;
case 0x69dff9:c.instructions+=3;goto B69dff9;
case 0x69dffa:c.instructions+=2;goto B69dffa;
case 0x69dffd:c.instructions+=1;goto B69dffd;
default:missing_instruction(c.pc);}
B69d002:L69d002:{c.instructions+=3;NFSU2_TR(0x69d002);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d006:{NFSU2_TR(0x69d006);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
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
B69d00a:{NFSU2_TR(0x69d00a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d064;}}
}
B69d00c:L69d00c:{c.instructions+=1;NFSU2_TR(0x69d00c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d00d:L69d00d:{c.instructions+=6;NFSU2_TR(0x69d00d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d010:{NFSU2_TR(0x69d010);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d013:{NFSU2_TR(0x69d013);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d016:{NFSU2_TR(0x69d016);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69d018:{NFSU2_TR(0x69d018);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d01b:{NFSU2_TR(0x69d01b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d058;}}
}
B69d01d:L69d01d:{c.instructions+=2;NFSU2_TR(0x69d01d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d020:{NFSU2_TR(0x69d020);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d058;}}
}
B69d022:L69d022:{c.instructions+=6;NFSU2_TR(0x69d022);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d025:{NFSU2_TR(0x69d025);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d028:{NFSU2_TR(0x69d028);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69d02b:{NFSU2_TR(0x69d02b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69d02e:{NFSU2_TR(0x69d02e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69d031:{NFSU2_TR(0x69d031);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d044;}}
}
B69d033:L69d033:{c.instructions+=2;NFSU2_TR(0x69d033);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d037:{NFSU2_TR(0x69d037);
if(r1(R+518)){{goto L69d052;}}
}
B69d039:L69d039:{c.instructions+=3;NFSU2_TR(0x69d039);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d03c:{NFSU2_TR(0x69d03c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0xffff0000ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B69d042:{NFSU2_TR(0x69d042);
{goto L69d052;}
}
B69d044:L69d044:{c.instructions+=2;NFSU2_TR(0x69d044);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d047:{NFSU2_TR(0x69d047);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d052;}}
}
B69d049:L69d049:{c.instructions+=2;NFSU2_TR(0x69d049);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d04c:{NFSU2_TR(0x69d04c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x10000ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B69d052:L69d052:{c.instructions+=3;NFSU2_TR(0x69d052);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B69d053:{NFSU2_TR(0x69d053);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B69d056:{NFSU2_TR(0x69d056);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d022u);}goto L69d022;}}
}
B69d058:L69d058:{c.instructions+=4;NFSU2_TR(0x69d058);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d05b:{NFSU2_TR(0x69d05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d05e:{NFSU2_TR(0x69d05e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
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
B69d061:{NFSU2_TR(0x69d061);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d00du);}goto L69d00d;}}
}
B69d063:L69d063:{c.instructions+=1;NFSU2_TR(0x69d063);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69d064:L69d064:{c.instructions+=4;NFSU2_TR(0x69d064);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69d065:{NFSU2_TR(0x69d065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69d066:{NFSU2_TR(0x69d066);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69d067:{NFSU2_TR(0x69d067);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69d06a:L69d06a:{c.instructions+=15;NFSU2_TR(0x69d06a);
__builtin_memmove((R+28),(R+28),4);
}
B69d06c:{NFSU2_TR(0x69d06c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d06d:{NFSU2_TR(0x69d06d);
__builtin_memmove((R+20),(R+16),4);
}
B69d06f:{NFSU2_TR(0x69d06f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B69d072:{NFSU2_TR(0x69d072);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d073:{NFSU2_TR(0x69d073);
__builtin_memmove((R+12),(R+4),4);
}
B69d075:{NFSU2_TR(0x69d075);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d078:{NFSU2_TR(0x69d078);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d07b:{NFSU2_TR(0x69d07b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d07c:{NFSU2_TR(0x69d07c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69d07f:{NFSU2_TR(0x69d07f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d080:{NFSU2_TR(0x69d080);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69d082:{NFSU2_TR(0x69d082);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d085:{NFSU2_TR(0x69d085);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d088:{NFSU2_TR(0x69d088);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d1ec;}}
}
B69d08e:L69d08e:{c.instructions+=2;NFSU2_TR(0x69d08e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d091:{NFSU2_TR(0x69d091);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d0d4;}}
}
B69d093:L69d093:{c.instructions+=15;NFSU2_TR(0x69d093);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d096:{NFSU2_TR(0x69d096);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d099:{NFSU2_TR(0x69d099);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d09d:{NFSU2_TR(0x69d09d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B69d0a0:{NFSU2_TR(0x69d0a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69d0a2:{NFSU2_TR(0x69d0a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69d0a5:{NFSU2_TR(0x69d0a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d0a9:{NFSU2_TR(0x69d0a9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B69d0ab:{NFSU2_TR(0x69d0ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d0ae:{NFSU2_TR(0x69d0ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69d0b1:{NFSU2_TR(0x69d0b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d0b2:{NFSU2_TR(0x69d0b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69d0b5:{NFSU2_TR(0x69d0b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d0b6:{NFSU2_TR(0x69d0b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d0b7:{NFSU2_TR(0x69d0b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69d0bcull));
TAIL_STATIC(0x69cfeau,69c);
}
B69d0bc:L69d0bc:{c.instructions+=10;NFSU2_TR(0x69d0bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d0bf:{NFSU2_TR(0x69d0bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69d0c2:{NFSU2_TR(0x69d0c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d0c5:{NFSU2_TR(0x69d0c5);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B69d0c6:{NFSU2_TR(0x69d0c6);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x69d0c6);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x69d0c6);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B69d0c8:{NFSU2_TR(0x69d0c8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69d0c9:{NFSU2_TR(0x69d0c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d0cc:{NFSU2_TR(0x69d0cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69d0cf:{NFSU2_TR(0x69d0cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69d0d2:{NFSU2_TR(0x69d0d2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d093u);}goto L69d093;}}
}
B69d0d4:L69d0d4:{c.instructions+=5;NFSU2_TR(0x69d0d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d0d5:{NFSU2_TR(0x69d0d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69d0d8:{NFSU2_TR(0x69d0d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69d0db:{NFSU2_TR(0x69d0db);
u8 U[4];
w4(U+0,u32(0x69a0ddull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d0e0:{NFSU2_TR(0x69d0e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69d0e5ull));
TAIL_STATIC(0x69a41du,69a);
}
B69d0e5:L69d0e5:{c.instructions+=3;NFSU2_TR(0x69d0e5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69d0e7:{NFSU2_TR(0x69d0e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d0ea:{NFSU2_TR(0x69d0ea);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d10d;}}
}
B69d0ec:L69d0ec:{c.instructions+=6;NFSU2_TR(0x69d0ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69d0ef:{NFSU2_TR(0x69d0ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d0f2:{NFSU2_TR(0x69d0f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69d0f5:{NFSU2_TR(0x69d0f5);
__builtin_memmove((R+4),(R+12),4);
}
B69d0f7:{NFSU2_TR(0x69d0f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69d0fa:{NFSU2_TR(0x69d0fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69d0ffull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d06au);}goto L69d06a;}
}
B69d0ff:L69d0ff:{c.instructions+=2;NFSU2_TR(0x69d0ff);
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
B69d101:{NFSU2_TR(0x69d101);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69d1ee;}}
}
B69d107:L69d107:{c.instructions+=3;NFSU2_TR(0x69d107);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69d108:{NFSU2_TR(0x69d108);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69d10b:{NFSU2_TR(0x69d10b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d0ecu);}goto L69d0ec;}}
}
B69d10d:L69d10d:{c.instructions+=2;NFSU2_TR(0x69d10d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d111:{NFSU2_TR(0x69d111);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d1ec;}}
}
B69d117:L69d117:{c.instructions+=10;NFSU2_TR(0x69d117);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d11a:{NFSU2_TR(0x69d11a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d11d:{NFSU2_TR(0x69d11d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d120:{NFSU2_TR(0x69d120);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d124:{NFSU2_TR(0x69d124);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69d12b:{NFSU2_TR(0x69d12b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69d12d:{NFSU2_TR(0x69d12d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69d130:{NFSU2_TR(0x69d130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B69d132:{NFSU2_TR(0x69d132);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d136:{NFSU2_TR(0x69d136);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d1ec;}}
}
B69d13c:L69d13c:{c.instructions+=10;NFSU2_TR(0x69d13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d13f:{NFSU2_TR(0x69d13f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d142:{NFSU2_TR(0x69d142);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69d145:{NFSU2_TR(0x69d145);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d148:{NFSU2_TR(0x69d148);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69d14b:{NFSU2_TR(0x69d14b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d14e:{NFSU2_TR(0x69d14e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d152:{NFSU2_TR(0x69d152);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B69d155:{NFSU2_TR(0x69d155);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69d157:{NFSU2_TR(0x69d157);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d1dd;}}
}
B69d15d:L69d15d:{c.instructions+=3;NFSU2_TR(0x69d15d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d160:{NFSU2_TR(0x69d160);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d163:{NFSU2_TR(0x69d163);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d166:L69d166:{c.instructions+=5;NFSU2_TR(0x69d166);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d169:{NFSU2_TR(0x69d169);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69d16b:{NFSU2_TR(0x69d16b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69d16e:{NFSU2_TR(0x69d16e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d172:{NFSU2_TR(0x69d172);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d17c;}}
}
B69d174:L69d174:{c.instructions+=2;NFSU2_TR(0x69d174);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69d177:{NFSU2_TR(0x69d177);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d18d;}}
}
B69d179:L69d179:{c.instructions+=1;NFSU2_TR(0x69d179);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d17c:L69d17c:{c.instructions+=4;NFSU2_TR(0x69d17c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d17f:{NFSU2_TR(0x69d17f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d183:{NFSU2_TR(0x69d183);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B69d186:{NFSU2_TR(0x69d186);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d166u);}goto L69d166;}}
}
B69d188:L69d188:{c.instructions+=2;NFSU2_TR(0x69d188);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69d18b:{NFSU2_TR(0x69d18b);
if(r1(R+518)){{goto L69d1dd;}}
}
B69d18d:L69d18d:{c.instructions+=2;NFSU2_TR(0x69d18d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d190:{NFSU2_TR(0x69d190);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d1dd;}}
}
B69d192:L69d192:{c.instructions+=7;NFSU2_TR(0x69d192);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d195:{NFSU2_TR(0x69d195);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69d198:{NFSU2_TR(0x69d198);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69d19b:{NFSU2_TR(0x69d19b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d19e:{NFSU2_TR(0x69d19e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d1a2:{NFSU2_TR(0x69d1a2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69d1a4:{NFSU2_TR(0x69d1a4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d1c6;}}
}
B69d1a6:L69d1a6:{c.instructions+=2;NFSU2_TR(0x69d1a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d1a9:{NFSU2_TR(0x69d1a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d1ac:L69d1ac:{c.instructions+=5;NFSU2_TR(0x69d1ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d1af:{NFSU2_TR(0x69d1af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69d1b1:{NFSU2_TR(0x69d1b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69d1b4:{NFSU2_TR(0x69d1b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d1b8:{NFSU2_TR(0x69d1b8);
if(r1(R+518)){{goto L69d1c6;}}
}
B69d1ba:L69d1ba:{c.instructions+=4;NFSU2_TR(0x69d1ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d1bd:{NFSU2_TR(0x69d1bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d1c1:{NFSU2_TR(0x69d1c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B69d1c4:{NFSU2_TR(0x69d1c4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d1acu);}goto L69d1ac;}}
}
B69d1c6:L69d1c6:{c.instructions+=2;NFSU2_TR(0x69d1c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B69d1c9:{NFSU2_TR(0x69d1c9);
if(r1(R+512)){{goto L69d1dd;}}
}
B69d1cb:L69d1cb:{c.instructions+=5;NFSU2_TR(0x69d1cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69d1ce:{NFSU2_TR(0x69d1ce);
__builtin_memmove((R+4),(R+12),4);
}
B69d1d0:{NFSU2_TR(0x69d1d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69d1d3:{NFSU2_TR(0x69d1d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d1d4:{NFSU2_TR(0x69d1d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69d1d9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d06au);}goto L69d06a;}
}
B69d1d9:L69d1d9:{c.instructions+=2;NFSU2_TR(0x69d1d9);
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
B69d1db:{NFSU2_TR(0x69d1db);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69d1ee;}}
}
B69d1dd:L69d1dd:{c.instructions+=4;NFSU2_TR(0x69d1dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d1e0:{NFSU2_TR(0x69d1e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d1e3:{NFSU2_TR(0x69d1e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69d1e6:{NFSU2_TR(0x69d1e6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d13cu);}goto L69d13c;}}
}
B69d1ec:L69d1ec:{c.instructions+=1;NFSU2_TR(0x69d1ec);
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
B69d1ee:L69d1ee:{c.instructions+=5;NFSU2_TR(0x69d1ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69d1ef:{NFSU2_TR(0x69d1ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69d1f0:{NFSU2_TR(0x69d1f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69d1f1:{NFSU2_TR(0x69d1f1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69d1f2:{NFSU2_TR(0x69d1f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69d1f5:L69d1f5:{c.instructions+=12;NFSU2_TR(0x69d1f5);
__builtin_memmove((R+28),(R+28),4);
}
B69d1f7:{NFSU2_TR(0x69d1f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d1f8:{NFSU2_TR(0x69d1f8);
__builtin_memmove((R+20),(R+16),4);
}
B69d1fa:{NFSU2_TR(0x69d1fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d1fd:{NFSU2_TR(0x69d1fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d1fe:{NFSU2_TR(0x69d1fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69d201:{NFSU2_TR(0x69d201);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d202:{NFSU2_TR(0x69d202);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d205:{NFSU2_TR(0x69d205);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B69d208:{NFSU2_TR(0x69d208);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B69d20b:{NFSU2_TR(0x69d20b);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xffffffffull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B69d20e:{NFSU2_TR(0x69d20e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d24f;}}
}
B69d210:L69d210:{c.instructions+=7;NFSU2_TR(0x69d210);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d213:{NFSU2_TR(0x69d213);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d214:{NFSU2_TR(0x69d214);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69d217:{NFSU2_TR(0x69d217);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B69d21a:{NFSU2_TR(0x69d21a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d21d:{NFSU2_TR(0x69d21d);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
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
B69d221:{NFSU2_TR(0x69d221);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d23a;}}
}
B69d223:L69d223:{c.instructions+=8;NFSU2_TR(0x69d223);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d226:{NFSU2_TR(0x69d226);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d229:{NFSU2_TR(0x69d229);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d22c:{NFSU2_TR(0x69d22c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d22f:{NFSU2_TR(0x69d22f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d232:{NFSU2_TR(0x69d232);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d235:{NFSU2_TR(0x69d235);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d238:{NFSU2_TR(0x69d238);
{goto L69d24c;}
}
B69d23a:L69d23a:{c.instructions+=8;NFSU2_TR(0x69d23a);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69d23d:{NFSU2_TR(0x69d23d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d23e:{NFSU2_TR(0x69d23e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d23f:{NFSU2_TR(0x69d23f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69d242:{NFSU2_TR(0x69d242);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d243:{NFSU2_TR(0x69d243);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d244:{NFSU2_TR(0x69d244);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69d247:{NFSU2_TR(0x69d247);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69d24cull));
TAIL_STATIC(0x699c39u,699);
}
B69d24c:L69d24c:{c.instructions+=2;NFSU2_TR(0x69d24c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B69d24e:{NFSU2_TR(0x69d24e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69d24f:L69d24f:{c.instructions+=5;NFSU2_TR(0x69d24f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69d251:{NFSU2_TR(0x69d251);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69d252:{NFSU2_TR(0x69d252);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69d253:{NFSU2_TR(0x69d253);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69d254:{NFSU2_TR(0x69d254);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69d257:L69d257:{c.instructions+=14;NFSU2_TR(0x69d257);
__builtin_memmove((R+28),(R+28),4);
}
B69d259:{NFSU2_TR(0x69d259);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d25a:{NFSU2_TR(0x69d25a);
__builtin_memmove((R+20),(R+16),4);
}
B69d25c:{NFSU2_TR(0x69d25c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d25d:{NFSU2_TR(0x69d25d);
__builtin_memmove((R+0),(R+4),4);
}
B69d25f:{NFSU2_TR(0x69d25f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d260:{NFSU2_TR(0x69d260);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69d263:{NFSU2_TR(0x69d263);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69d265:{NFSU2_TR(0x69d265);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69d266:{NFSU2_TR(0x69d266);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d269:{NFSU2_TR(0x69d269);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d26a:{NFSU2_TR(0x69d26a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d26b:{NFSU2_TR(0x69d26b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d26e:{NFSU2_TR(0x69d26e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d293;}}
}
B69d270:L69d270:{c.instructions+=3;NFSU2_TR(0x69d270);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d273:{NFSU2_TR(0x69d273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69d275:{NFSU2_TR(0x69d275);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69d278:L69d278:{c.instructions+=8;NFSU2_TR(0x69d278);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d27b:{NFSU2_TR(0x69d27b);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69d27e:{NFSU2_TR(0x69d27e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d281:{NFSU2_TR(0x69d281);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69d284:{NFSU2_TR(0x69d284);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69d286:{NFSU2_TR(0x69d286);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69d288:{NFSU2_TR(0x69d288);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69d28b:{NFSU2_TR(0x69d28b);
if(r1(R+514)){{goto L69d2e8;}}
}
B69d28d:L69d28d:{c.instructions+=3;NFSU2_TR(0x69d28d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69d28e:{NFSU2_TR(0x69d28e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B69d291:{NFSU2_TR(0x69d291);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d278u);}goto L69d278;}}
}
B69d293:L69d293:{c.instructions+=2;NFSU2_TR(0x69d293);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d297:{NFSU2_TR(0x69d297);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d29a:L69d29a:{c.instructions+=6;NFSU2_TR(0x69d29a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d29d:{NFSU2_TR(0x69d29d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B69d29e:{NFSU2_TR(0x69d29e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B69d2a1:{NFSU2_TR(0x69d2a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69d2a4:{NFSU2_TR(0x69d2a4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69d2a7:{NFSU2_TR(0x69d2a7);
if(r1(R+518)){{goto L69d2c6;}}
}
B69d2a9:L69d2a9:{c.instructions+=11;NFSU2_TR(0x69d2a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d2ac:{NFSU2_TR(0x69d2ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d2af:{NFSU2_TR(0x69d2af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69d2b1:{NFSU2_TR(0x69d2b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69d2b4:{NFSU2_TR(0x69d2b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d2b7:{NFSU2_TR(0x69d2b7);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69d2ba:{NFSU2_TR(0x69d2ba);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69d2bd:{NFSU2_TR(0x69d2bd);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69d2bf:{NFSU2_TR(0x69d2bf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69d2c1:{NFSU2_TR(0x69d2c1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69d2c4:{NFSU2_TR(0x69d2c4);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L69d2d1;}}
}
B69d2c6:L69d2c6:{c.instructions+=3;NFSU2_TR(0x69d2c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d2c9:{NFSU2_TR(0x69d2c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B69d2cd:{NFSU2_TR(0x69d2cd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d29au);}goto L69d29a;}}
}
B69d2cf:L69d2cf:{c.instructions+=1;NFSU2_TR(0x69d2cf);
{goto L69d33f;}
}
B69d2d1:L69d2d1:{c.instructions+=3;NFSU2_TR(0x69d2d1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69d2d3:{NFSU2_TR(0x69d2d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d2d6:{NFSU2_TR(0x69d2d6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d33f;}}
}
B69d2d8:L69d2d8:{c.instructions+=1;NFSU2_TR(0x69d2d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B69d2db:L69d2db:{c.instructions+=5;NFSU2_TR(0x69d2db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69d2dd:{NFSU2_TR(0x69d2dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69d2e0:{NFSU2_TR(0x69d2e0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69d2e1:{NFSU2_TR(0x69d2e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69d2e4:{NFSU2_TR(0x69d2e4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d2dbu);}goto L69d2db;}}
}
B69d2e6:L69d2e6:{c.instructions+=1;NFSU2_TR(0x69d2e6);
{goto L69d33f;}
}
B69d2e8:L69d2e8:{c.instructions+=3;NFSU2_TR(0x69d2e8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B69d2ea:{NFSU2_TR(0x69d2ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d2ed:{NFSU2_TR(0x69d2ed);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d33f;}}
}
B69d2ef:L69d2ef:{c.instructions+=1;NFSU2_TR(0x69d2ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d2f3:L69d2f3:{c.instructions+=7;NFSU2_TR(0x69d2f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d2f6:{NFSU2_TR(0x69d2f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B69d2f9:{NFSU2_TR(0x69d2f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d2fc:{NFSU2_TR(0x69d2fc);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B69d2ff:{NFSU2_TR(0x69d2ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69d302:{NFSU2_TR(0x69d302);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69d305:{NFSU2_TR(0x69d305);
if(r1(R+518)){{goto L69d325;}}
}
B69d307:L69d307:{c.instructions+=11;NFSU2_TR(0x69d307);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d30a:{NFSU2_TR(0x69d30a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d30d:{NFSU2_TR(0x69d30d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69d310:{NFSU2_TR(0x69d310);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69d313:{NFSU2_TR(0x69d313);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d316:{NFSU2_TR(0x69d316);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69d319:{NFSU2_TR(0x69d319);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69d31c:{NFSU2_TR(0x69d31c);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69d31e:{NFSU2_TR(0x69d31e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69d320:{NFSU2_TR(0x69d320);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69d323:{NFSU2_TR(0x69d323);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L69d330;}}
}
B69d325:L69d325:{c.instructions+=3;NFSU2_TR(0x69d325);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d328:{NFSU2_TR(0x69d328);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B69d32c:{NFSU2_TR(0x69d32c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d2f3u);}goto L69d2f3;}}
}
B69d32e:L69d32e:{c.instructions+=1;NFSU2_TR(0x69d32e);
{goto L69d339;}
}
B69d330:L69d330:{c.instructions+=3;NFSU2_TR(0x69d330);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d333:{NFSU2_TR(0x69d333);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d336:{NFSU2_TR(0x69d336);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69d339:L69d339:{c.instructions+=3;NFSU2_TR(0x69d339);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B69d33a:{NFSU2_TR(0x69d33a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B69d33d:{NFSU2_TR(0x69d33d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d2efu);}goto L69d2ef;}}
}
B69d33f:L69d33f:{c.instructions+=6;NFSU2_TR(0x69d33f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69d340:{NFSU2_TR(0x69d340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69d341:{NFSU2_TR(0x69d341);
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
B69d343:{NFSU2_TR(0x69d343);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69d344:{NFSU2_TR(0x69d344);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69d345:{NFSU2_TR(0x69d345);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69d348:L69d348:{c.instructions+=9;NFSU2_TR(0x69d348);
__builtin_memmove((R+28),(R+28),4);
}
B69d34a:{NFSU2_TR(0x69d34a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d34b:{NFSU2_TR(0x69d34b);
__builtin_memmove((R+20),(R+16),4);
}
B69d34d:{NFSU2_TR(0x69d34d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B69d350:{NFSU2_TR(0x69d350);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69d352:{NFSU2_TR(0x69d352);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d355:{NFSU2_TR(0x69d355);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d358:{NFSU2_TR(0x69d358);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69d35a:{NFSU2_TR(0x69d35a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d35b:L69d35b:{c.instructions+=3;NFSU2_TR(0x69d35b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69d35e:{NFSU2_TR(0x69d35e);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B69d362:{NFSU2_TR(0x69d362);
if(r1(R+518)){{goto L69d36d;}}
}
B69d364:L69d364:{c.instructions+=4;NFSU2_TR(0x69d364);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d367:{NFSU2_TR(0x69d367);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69d368:{NFSU2_TR(0x69d368);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B69d36b:{NFSU2_TR(0x69d36b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d35bu);}goto L69d35b;}}
}
B69d36d:L69d36d:{c.instructions+=2;NFSU2_TR(0x69d36d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d370:{NFSU2_TR(0x69d370);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d379;}}
}
B69d372:L69d372:{c.instructions+=2;NFSU2_TR(0x69d372);
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
B69d374:{NFSU2_TR(0x69d374);
{goto L69d5e6;}
}
B69d379:L69d379:{c.instructions+=6;NFSU2_TR(0x69d379);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d37c:{NFSU2_TR(0x69d37c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x6ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69d37e:{NFSU2_TR(0x69d37e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d37f:{NFSU2_TR(0x69d37f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69d382:{NFSU2_TR(0x69d382);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d383:{NFSU2_TR(0x69d383);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d3e9;}}
}
B69d385:L69d385:{c.instructions+=2;NFSU2_TR(0x69d385);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d388:{NFSU2_TR(0x69d388);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d393;}}
}
B69d38a:L69d38a:{c.instructions+=3;NFSU2_TR(0x69d38a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d38d:{NFSU2_TR(0x69d38d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69d38f:{NFSU2_TR(0x69d38f);
__builtin_memmove((R+28),(R+12),4);
}
B69d391:L69d391:{c.instructions+=1;NFSU2_TR(0x69d391);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L69d393;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d391u);}goto L69d391;}
}
B69d393:L69d393:{c.instructions+=3;NFSU2_TR(0x69d393);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d396:{NFSU2_TR(0x69d396);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d39a:{NFSU2_TR(0x69d39a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d39d:L69d39d:{c.instructions+=9;NFSU2_TR(0x69d39d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69d3a0:{NFSU2_TR(0x69d3a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d3a4:{NFSU2_TR(0x69d3a4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d3a8:{NFSU2_TR(0x69d3a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69d3ab:{NFSU2_TR(0x69d3ab);
u8 U[40];
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
}
B69d3ac:{NFSU2_TR(0x69d3ac);
u8 U[40];
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
}
B69d3ad:{NFSU2_TR(0x69d3ad);
u8 U[40];
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
}
B69d3ae:{NFSU2_TR(0x69d3ae);
u8 U[40];
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
}
B69d3af:{NFSU2_TR(0x69d3af);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d501;}}
}
B69d3b5:L69d3b5:{c.instructions+=4;NFSU2_TR(0x69d3b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d3b8:{NFSU2_TR(0x69d3b8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69d3ba:{NFSU2_TR(0x69d3ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B69d3bd:{NFSU2_TR(0x69d3bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69d3c0:L69d3c0:{c.instructions+=5;NFSU2_TR(0x69d3c0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69d3c2:{NFSU2_TR(0x69d3c2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69d3c3:{NFSU2_TR(0x69d3c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B69d3c5:{NFSU2_TR(0x69d3c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69d3c7:{NFSU2_TR(0x69d3c7);
if(r1(R+518)){{goto L69d4d7;}}
}
B69d3cd:L69d3cd:{c.instructions+=4;NFSU2_TR(0x69d3cd);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B69d3d1:{NFSU2_TR(0x69d3d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69d3d3:{NFSU2_TR(0x69d3d3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69d3d6:{NFSU2_TR(0x69d3d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d4b3;}}
}
B69d3dc:L69d3dc:{c.instructions+=4;NFSU2_TR(0x69d3dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d3df:{NFSU2_TR(0x69d3df);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69d3e2:{NFSU2_TR(0x69d3e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B69d3e4:{NFSU2_TR(0x69d3e4);
{goto L69d4d7;}
}
B69d3e9:L69d3e9:{c.instructions+=4;NFSU2_TR(0x69d3e9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69d3eb:{NFSU2_TR(0x69d3eb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69d3ec:{NFSU2_TR(0x69d3ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d3ef:{NFSU2_TR(0x69d3ef);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d41a;}}
}
B69d3f1:L69d3f1:{c.instructions+=3;NFSU2_TR(0x69d3f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d3f4:{NFSU2_TR(0x69d3f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69d3f6:{NFSU2_TR(0x69d3f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69d3f9:L69d3f9:{c.instructions+=9;NFSU2_TR(0x69d3f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d3fc:{NFSU2_TR(0x69d3fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d3ff:{NFSU2_TR(0x69d3ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d402:{NFSU2_TR(0x69d402);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69d405:{NFSU2_TR(0x69d405);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69d408:{NFSU2_TR(0x69d408);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69d40a:{NFSU2_TR(0x69d40a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69d40c:{NFSU2_TR(0x69d40c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69d40f:{NFSU2_TR(0x69d40f);
if(r1(R+514)){{goto L69d417;}}
}
B69d411:L69d411:{c.instructions+=3;NFSU2_TR(0x69d411);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69d412:{NFSU2_TR(0x69d412);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69d415:{NFSU2_TR(0x69d415);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d3f9u);}goto L69d3f9;}}
}
B69d417:L69d417:{c.instructions+=1;NFSU2_TR(0x69d417);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d41a:L69d41a:{c.instructions+=2;NFSU2_TR(0x69d41a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d41d:{NFSU2_TR(0x69d41d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d429;}}
}
B69d41f:L69d41f:{c.instructions+=2;NFSU2_TR(0x69d41f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B69d422:{NFSU2_TR(0x69d422);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69d429:L69d429:{c.instructions+=3;NFSU2_TR(0x69d429);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69d42b:{NFSU2_TR(0x69d42b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d42e:{NFSU2_TR(0x69d42e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d443;}}
}
B69d430:L69d430:{c.instructions+=7;NFSU2_TR(0x69d430);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69d432:{NFSU2_TR(0x69d432);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B69d435:{NFSU2_TR(0x69d435);
__builtin_memmove((R+4),(R+518),1);
}
B69d438:{NFSU2_TR(0x69d438);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B69d43a:{NFSU2_TR(0x69d43a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69d43b:{NFSU2_TR(0x69d43b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69d43e:{NFSU2_TR(0x69d43e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d430u);}goto L69d430;}}
}
B69d440:L69d440:{c.instructions+=1;NFSU2_TR(0x69d440);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d443:L69d443:{c.instructions+=2;NFSU2_TR(0x69d443);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69d447:{NFSU2_TR(0x69d447);
if(r1(R+518)){{goto L69d472;}}
}
B69d449:L69d449:{c.instructions+=2;NFSU2_TR(0x69d449);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69d44b:{NFSU2_TR(0x69d44b);
if(r1(R+518)){{goto L69d472;}}
}
B69d44d:L69d44d:{c.instructions+=2;NFSU2_TR(0x69d44d);
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
B69d450:{NFSU2_TR(0x69d450);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69d4a9;}}
}
B69d452:L69d452:{c.instructions+=3;NFSU2_TR(0x69d452);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69d454:{NFSU2_TR(0x69d454);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d457:{NFSU2_TR(0x69d457);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d470;}}
}
B69d459:L69d459:{c.instructions+=2;NFSU2_TR(0x69d459);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d45b:{NFSU2_TR(0x69d45b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B69d45c:L69d45c:{c.instructions+=3;NFSU2_TR(0x69d45c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d45f:{NFSU2_TR(0x69d45f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69d461:{NFSU2_TR(0x69d461);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d4a9;}}
}
B69d463:L69d463:{c.instructions+=2;NFSU2_TR(0x69d463);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69d465:{NFSU2_TR(0x69d465);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d46a;}}
}
B69d467:L69d467:{c.instructions+=1;NFSU2_TR(0x69d467);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69d46a:L69d46a:{c.instructions+=3;NFSU2_TR(0x69d46a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69d46b:{NFSU2_TR(0x69d46b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B69d46e:{NFSU2_TR(0x69d46e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d45cu);}goto L69d45c;}}
}
B69d470:L69d470:{c.instructions+=1;NFSU2_TR(0x69d470);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69d472:L69d472:{c.instructions+=4;NFSU2_TR(0x69d472);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69d474:{NFSU2_TR(0x69d474);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B69d476:{NFSU2_TR(0x69d476);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d479:{NFSU2_TR(0x69d479);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d48a;}}
}
B69d47b:L69d47b:{c.instructions+=3;NFSU2_TR(0x69d47b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69d47e:{NFSU2_TR(0x69d47e);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B69d480:{NFSU2_TR(0x69d480);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d4a9;}}
}
B69d482:L69d482:{c.instructions+=4;NFSU2_TR(0x69d482);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+4))));
}
B69d484:{NFSU2_TR(0x69d484);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69d485:{NFSU2_TR(0x69d485);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69d488:{NFSU2_TR(0x69d488);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d47bu);}goto L69d47b;}}
}
B69d48a:L69d48a:{c.instructions+=2;NFSU2_TR(0x69d48a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69d48c:{NFSU2_TR(0x69d48c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69d48e:L69d48e:{c.instructions+=5;NFSU2_TR(0x69d48e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69d490:{NFSU2_TR(0x69d490);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69d491:{NFSU2_TR(0x69d491);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B69d493:{NFSU2_TR(0x69d493);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69d495:{NFSU2_TR(0x69d495);
if(r1(R+518)){{goto L69d498;}}
}
B69d497:L69d497:{c.instructions+=1;NFSU2_TR(0x69d497);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69d498:L69d498:{c.instructions+=3;NFSU2_TR(0x69d498);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69d499:{NFSU2_TR(0x69d499);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B69d49c:{NFSU2_TR(0x69d49c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d48eu);}goto L69d48e;}}
}
B69d49e:L69d49e:{c.instructions+=3;NFSU2_TR(0x69d49e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B69d4a0:{NFSU2_TR(0x69d4a0);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B69d4a3:{NFSU2_TR(0x69d4a3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d393u);}goto L69d393;}}
}
B69d4a9:L69d4a9:{c.instructions+=2;NFSU2_TR(0x69d4a9);
w4(R+0,u32(0x80004005ull));
}
B69d4ae:{NFSU2_TR(0x69d4ae);
{goto L69d5e4;}
}
B69d4b3:L69d4b3:{c.instructions+=13;NFSU2_TR(0x69d4b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d4b6:{NFSU2_TR(0x69d4b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d4b9:{NFSU2_TR(0x69d4b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69d4bc:{NFSU2_TR(0x69d4bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69d4bf:{NFSU2_TR(0x69d4bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69d4c2:{NFSU2_TR(0x69d4c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d4c5:{NFSU2_TR(0x69d4c5);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69d4c8:{NFSU2_TR(0x69d4c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69d4cb:{NFSU2_TR(0x69d4cb);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69d4ce:{NFSU2_TR(0x69d4ce);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69d4d0:{NFSU2_TR(0x69d4d0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69d4d2:{NFSU2_TR(0x69d4d2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69d4d5:{NFSU2_TR(0x69d4d5);
if(r1(R+514)){{goto L69d4e1;}}
}
B69d4d7:L69d4d7:{c.instructions+=3;NFSU2_TR(0x69d4d7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69d4d8:{NFSU2_TR(0x69d4d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B69d4db:{NFSU2_TR(0x69d4db);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d3c0u);}goto L69d3c0;}}
}
B69d4e1:L69d4e1:{c.instructions+=2;NFSU2_TR(0x69d4e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B69d4e4:{NFSU2_TR(0x69d4e4);
if(r1(R+512)){{goto L69d4f5;}}
}
B69d4e6:L69d4e6:{c.instructions+=4;NFSU2_TR(0x69d4e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d4e9:{NFSU2_TR(0x69d4e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d4ec:{NFSU2_TR(0x69d4ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69d4ef:{NFSU2_TR(0x69d4ef);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d3b5u);}goto L69d3b5;}}
}
B69d4f5:L69d4f5:{c.instructions+=3;NFSU2_TR(0x69d4f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d4f8:{NFSU2_TR(0x69d4f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69d4fb:{NFSU2_TR(0x69d4fb);
if(r1(R+512)){{goto L69d592;}}
}
B69d501:L69d501:{c.instructions+=4;NFSU2_TR(0x69d501);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69d503:{NFSU2_TR(0x69d503);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d506:{NFSU2_TR(0x69d506);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d509:{NFSU2_TR(0x69d509);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d59e;}}
}
B69d50f:L69d50f:{c.instructions+=3;NFSU2_TR(0x69d50f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d512:{NFSU2_TR(0x69d512);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d515:{NFSU2_TR(0x69d515);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d518:L69d518:{c.instructions+=4;NFSU2_TR(0x69d518);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d51b:{NFSU2_TR(0x69d51b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B69d51d:{NFSU2_TR(0x69d51d);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+24))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B69d520:{NFSU2_TR(0x69d520);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d57b;}}
}
B69d522:L69d522:{c.instructions+=2;NFSU2_TR(0x69d522);
__builtin_memmove((R+28),(R+0),4);
}
B69d524:{NFSU2_TR(0x69d524);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B69d527:L69d527:{c.instructions+=3;NFSU2_TR(0x69d527);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B69d52b:{NFSU2_TR(0x69d52b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69d52e:{NFSU2_TR(0x69d52e);
if(r1(R+518)){{goto L69d554;}}
}
B69d530:L69d530:{c.instructions+=13;NFSU2_TR(0x69d530);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d533:{NFSU2_TR(0x69d533);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d536:{NFSU2_TR(0x69d536);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69d539:{NFSU2_TR(0x69d539);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69d53c:{NFSU2_TR(0x69d53c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69d53f:{NFSU2_TR(0x69d53f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d542:{NFSU2_TR(0x69d542);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69d545:{NFSU2_TR(0x69d545);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69d548:{NFSU2_TR(0x69d548);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69d54b:{NFSU2_TR(0x69d54b);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69d54d:{NFSU2_TR(0x69d54d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69d54f:{NFSU2_TR(0x69d54f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69d552:{NFSU2_TR(0x69d552);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L69d55a;}}
}
B69d554:L69d554:{c.instructions+=3;NFSU2_TR(0x69d554);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B69d555:{NFSU2_TR(0x69d555);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B69d558:{NFSU2_TR(0x69d558);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d527u);}goto L69d527;}}
}
B69d55a:L69d55a:{c.instructions+=2;NFSU2_TR(0x69d55a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B69d55d:{NFSU2_TR(0x69d55d);
if(r1(R+512)){{goto L69d57b;}}
}
B69d55f:L69d55f:{c.instructions+=1;NFSU2_TR(0x69d55f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69d561:L69d561:{c.instructions+=2;NFSU2_TR(0x69d561);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B69d566:{NFSU2_TR(0x69d566);
if(r1(R+518)){{goto L69d570;}}
}
B69d568:L69d568:{c.instructions+=3;NFSU2_TR(0x69d568);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69d569:{NFSU2_TR(0x69d569);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B69d56c:{NFSU2_TR(0x69d56c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d561u);}goto L69d561;}}
}
B69d56e:L69d56e:{c.instructions+=1;NFSU2_TR(0x69d56e);
{goto L69d576;}
}
B69d570:L69d570:{c.instructions+=2;NFSU2_TR(0x69d570);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69d572:{NFSU2_TR(0x69d572);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B69d576:L69d576:{c.instructions+=2;NFSU2_TR(0x69d576);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69d579:{NFSU2_TR(0x69d579);
if(r1(R+518)){{goto L69d58a;}}
}
B69d57b:L69d57b:{c.instructions+=6;NFSU2_TR(0x69d57b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d57e:{NFSU2_TR(0x69d57e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69d57f:{NFSU2_TR(0x69d57f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B69d582:{NFSU2_TR(0x69d582);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69d585:{NFSU2_TR(0x69d585);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d588:{NFSU2_TR(0x69d588);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d518u);}goto L69d518;}}
}
B69d58a:L69d58a:{c.instructions+=3;NFSU2_TR(0x69d58a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d58d:{NFSU2_TR(0x69d58d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B69d590:{NFSU2_TR(0x69d590);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69d59e;}}
}
B69d592:L69d592:{c.instructions+=3;NFSU2_TR(0x69d592);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d595:{NFSU2_TR(0x69d595);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d599:{NFSU2_TR(0x69d599);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d39du);}goto L69d39d;}
}
B69d59e:L69d59e:{c.instructions+=8;NFSU2_TR(0x69d59e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d5a1:{NFSU2_TR(0x69d5a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d5a4:{NFSU2_TR(0x69d5a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69d5a7:{NFSU2_TR(0x69d5a7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B69d5a9:{NFSU2_TR(0x69d5a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d5ac:{NFSU2_TR(0x69d5ac);
__builtin_memmove((R+0),(R+4),4);
}
B69d5ae:{NFSU2_TR(0x69d5ae);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69d5b0:{NFSU2_TR(0x69d5b0);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B69d5b2:L69d5b2:{c.instructions+=7;NFSU2_TR(0x69d5b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d5b5:{NFSU2_TR(0x69d5b5);
__builtin_memmove((R+24),(R+12),4);
}
B69d5b7:{NFSU2_TR(0x69d5b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B69d5ba:{NFSU2_TR(0x69d5ba);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B69d5be:{NFSU2_TR(0x69d5be);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B69d5c0:{NFSU2_TR(0x69d5c0);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+0))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B69d5c4:{NFSU2_TR(0x69d5c4);
if(r1(R+518)){{goto L69d5d6;}}
}
B69d5c6:L69d5c6:{c.instructions+=6;NFSU2_TR(0x69d5c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d5c9:{NFSU2_TR(0x69d5c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d5ca:{NFSU2_TR(0x69d5ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d5cb:{NFSU2_TR(0x69d5cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69d5ce:{NFSU2_TR(0x69d5ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69d5d1:{NFSU2_TR(0x69d5d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69d5d6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d1f5u);}goto L69d1f5;}
}
B69d5d6:L69d5d6:{c.instructions+=5;NFSU2_TR(0x69d5d6);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B69d5d8:{NFSU2_TR(0x69d5d8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69d5d9:{NFSU2_TR(0x69d5d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B69d5dc:{NFSU2_TR(0x69d5dc);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B69d5e0:{NFSU2_TR(0x69d5e0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d5b2u);}goto L69d5b2;}}
}
B69d5e2:L69d5e2:{c.instructions+=1;NFSU2_TR(0x69d5e2);
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
B69d5e4:L69d5e4:{c.instructions+=2;NFSU2_TR(0x69d5e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69d5e5:{NFSU2_TR(0x69d5e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69d5e6:L69d5e6:{c.instructions+=3;NFSU2_TR(0x69d5e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69d5e7:{NFSU2_TR(0x69d5e7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69d5e8:{NFSU2_TR(0x69d5e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69d5eb:L69d5eb:{c.instructions+=10;NFSU2_TR(0x69d5eb);
__builtin_memmove((R+28),(R+28),4);
}
B69d5ed:{NFSU2_TR(0x69d5ed);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d5ee:{NFSU2_TR(0x69d5ee);
__builtin_memmove((R+20),(R+16),4);
}
B69d5f0:{NFSU2_TR(0x69d5f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d5f3:{NFSU2_TR(0x69d5f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d5f6:{NFSU2_TR(0x69d5f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d5f7:{NFSU2_TR(0x69d5f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69d5fa:{NFSU2_TR(0x69d5fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d5fd:{NFSU2_TR(0x69d5fd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69d600:{NFSU2_TR(0x69d600);
if(r1(R+518)){{goto L69d649;}}
}
B69d602:L69d602:{c.instructions+=2;NFSU2_TR(0x69d602);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69d605:{NFSU2_TR(0x69d605);
if(r1(R+512)){{goto L69d64e;}}
}
B69d607:L69d607:{c.instructions+=2;NFSU2_TR(0x69d607);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69d60a:{NFSU2_TR(0x69d60a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69d64e;}}
}
B69d60c:L69d60c:{c.instructions+=9;NFSU2_TR(0x69d60c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d60f:{NFSU2_TR(0x69d60f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d612:{NFSU2_TR(0x69d612);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69d614:{NFSU2_TR(0x69d614);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d617:{NFSU2_TR(0x69d617);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d61a:{NFSU2_TR(0x69d61a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d61d:{NFSU2_TR(0x69d61d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d620:{NFSU2_TR(0x69d620);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69d623:{NFSU2_TR(0x69d623);
if(r1(R+518)){{goto L69d63f;}}
}
B69d625:L69d625:{c.instructions+=2;NFSU2_TR(0x69d625);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d626:{NFSU2_TR(0x69d626);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d629:L69d629:{c.instructions+=2;NFSU2_TR(0x69d629);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69d62b:{NFSU2_TR(0x69d62b);
if(r1(R+518)){{goto L69d63e;}}
}
B69d62d:L69d62d:{c.instructions+=6;NFSU2_TR(0x69d62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d630:{NFSU2_TR(0x69d630);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d633:{NFSU2_TR(0x69d633);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d636:{NFSU2_TR(0x69d636);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d639:{NFSU2_TR(0x69d639);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69d63c:{NFSU2_TR(0x69d63c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d629u);}goto L69d629;}}
}
B69d63e:L69d63e:{c.instructions+=1;NFSU2_TR(0x69d63e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69d63f:L69d63f:{c.instructions+=2;NFSU2_TR(0x69d63f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d642:{NFSU2_TR(0x69d642);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d64e;}}
}
B69d644:L69d644:{c.instructions+=2;NFSU2_TR(0x69d644);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d647:{NFSU2_TR(0x69d647);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d64e;}}
}
B69d649:L69d649:{c.instructions+=3;NFSU2_TR(0x69d649);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69d64b:{NFSU2_TR(0x69d64b);
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
B69d64c:{NFSU2_TR(0x69d64c);
{goto L69d650;}
}
B69d64e:L69d64e:{c.instructions+=1;NFSU2_TR(0x69d64e);
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
B69d650:L69d650:{c.instructions+=3;NFSU2_TR(0x69d650);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69d651:{NFSU2_TR(0x69d651);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69d652:{NFSU2_TR(0x69d652);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69d655:L69d655:{c.instructions+=15;NFSU2_TR(0x69d655);
__builtin_memmove((R+28),(R+28),4);
}
B69d657:{NFSU2_TR(0x69d657);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d658:{NFSU2_TR(0x69d658);
__builtin_memmove((R+20),(R+16),4);
}
B69d65a:{NFSU2_TR(0x69d65a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d65d:{NFSU2_TR(0x69d65d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d660:{NFSU2_TR(0x69d660);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d661:{NFSU2_TR(0x69d661);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69d664:{NFSU2_TR(0x69d664);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B69d667:{NFSU2_TR(0x69d667);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69d66a:{NFSU2_TR(0x69d66a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d66b:{NFSU2_TR(0x69d66b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69d66e:{NFSU2_TR(0x69d66e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69d671:{NFSU2_TR(0x69d671);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69d674:{NFSU2_TR(0x69d674);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d677:{NFSU2_TR(0x69d677);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d6a0;}}
}
B69d679:L69d679:{c.instructions+=6;NFSU2_TR(0x69d679);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69d67c:{NFSU2_TR(0x69d67c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69d67f:{NFSU2_TR(0x69d67f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69d682:{NFSU2_TR(0x69d682);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69d685:{NFSU2_TR(0x69d685);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d688:{NFSU2_TR(0x69d688);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d6a0;}}
}
B69d68a:L69d68a:{c.instructions+=6;NFSU2_TR(0x69d68a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d68d:{NFSU2_TR(0x69d68d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d690:{NFSU2_TR(0x69d690);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69d693:{NFSU2_TR(0x69d693);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d696:{NFSU2_TR(0x69d696);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d699:{NFSU2_TR(0x69d699);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d6a0;}}
}
B69d69b:L69d69b:{c.instructions+=3;NFSU2_TR(0x69d69b);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69d69d:{NFSU2_TR(0x69d69d);
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
B69d69e:{NFSU2_TR(0x69d69e);
{goto L69d6a2;}
}
B69d6a0:L69d6a0:{c.instructions+=1;NFSU2_TR(0x69d6a0);
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
B69d6a2:L69d6a2:{c.instructions+=4;NFSU2_TR(0x69d6a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69d6a3:{NFSU2_TR(0x69d6a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69d6a4:{NFSU2_TR(0x69d6a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69d6a5:{NFSU2_TR(0x69d6a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69d6a8:L69d6a8:{c.instructions+=15;NFSU2_TR(0x69d6a8);
__builtin_memmove((R+28),(R+28),4);
}
B69d6aa:{NFSU2_TR(0x69d6aa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d6ab:{NFSU2_TR(0x69d6ab);
__builtin_memmove((R+20),(R+16),4);
}
B69d6ad:{NFSU2_TR(0x69d6ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B69d6b0:{NFSU2_TR(0x69d6b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d6b3:{NFSU2_TR(0x69d6b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d6b4:{NFSU2_TR(0x69d6b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d6b5:{NFSU2_TR(0x69d6b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d6b6:{NFSU2_TR(0x69d6b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d6b9:{NFSU2_TR(0x69d6b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69d6bc:{NFSU2_TR(0x69d6bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69d6bf:{NFSU2_TR(0x69d6bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d6c2:{NFSU2_TR(0x69d6c2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B69d6c5:{NFSU2_TR(0x69d6c5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B69d6c7:{NFSU2_TR(0x69d6c7);
if(r1(R+518)){{goto L69d80e;}}
}
B69d6cd:L69d6cd:{c.instructions+=2;NFSU2_TR(0x69d6cd);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69d6d0:{NFSU2_TR(0x69d6d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d80e;}}
}
B69d6d6:L69d6d6:{c.instructions+=7;NFSU2_TR(0x69d6d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d6d9:{NFSU2_TR(0x69d6d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69d6dc:{NFSU2_TR(0x69d6dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69d6de:{NFSU2_TR(0x69d6de);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B69d6e4:{NFSU2_TR(0x69d6e4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69d6ea:{NFSU2_TR(0x69d6ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d6ed:{NFSU2_TR(0x69d6ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d71f;}}
}
B69d6ef:L69d6ef:{c.instructions+=4;NFSU2_TR(0x69d6ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d6f2:{NFSU2_TR(0x69d6f2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69d6f4:{NFSU2_TR(0x69d6f4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69d6f6:{NFSU2_TR(0x69d6f6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d707;}}
}
B69d6f8:L69d6f8:{c.instructions+=1;NFSU2_TR(0x69d6f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d6fb:L69d6fb:{c.instructions+=2;NFSU2_TR(0x69d6fb);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69d6fd:{NFSU2_TR(0x69d6fd);
if(r1(R+518)){{goto L69d707;}}
}
B69d6ff:L69d6ff:{c.instructions+=4;NFSU2_TR(0x69d6ff);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B69d700:{NFSU2_TR(0x69d700);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B69d703:{NFSU2_TR(0x69d703);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B69d705:{NFSU2_TR(0x69d705);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d6fbu);}goto L69d6fb;}}
}
B69d707:L69d707:{c.instructions+=3;NFSU2_TR(0x69d707);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d70a:{NFSU2_TR(0x69d70a);
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
B69d70c:{NFSU2_TR(0x69d70c);
if(r1(R+518)){{goto L69d714;}}
}
B69d70e:L69d70e:{c.instructions+=3;NFSU2_TR(0x69d70e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69d710:{NFSU2_TR(0x69d710);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B69d712:{NFSU2_TR(0x69d712);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69d714:L69d714:{c.instructions+=3;NFSU2_TR(0x69d714);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d717:{NFSU2_TR(0x69d717);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d71a:{NFSU2_TR(0x69d71a);
{goto L69d80e;}
}
B69d71f:L69d71f:{c.instructions+=2;NFSU2_TR(0x69d71f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69d725:{NFSU2_TR(0x69d725);
if(r1(R+518)){{goto L69d733;}}
}
B69d727:L69d727:{c.instructions+=2;NFSU2_TR(0x69d727);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x20400000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x20400000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x20400000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B69d72d:{NFSU2_TR(0x69d72d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d80e;}}
}
B69d733:L69d733:{c.instructions+=4;NFSU2_TR(0x69d733);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d736:{NFSU2_TR(0x69d736);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69d738:{NFSU2_TR(0x69d738);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69d73a:{NFSU2_TR(0x69d73a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d74b;}}
}
B69d73c:L69d73c:{c.instructions+=1;NFSU2_TR(0x69d73c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d73f:L69d73f:{c.instructions+=2;NFSU2_TR(0x69d73f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69d741:{NFSU2_TR(0x69d741);
if(r1(R+518)){{goto L69d74b;}}
}
B69d743:L69d743:{c.instructions+=4;NFSU2_TR(0x69d743);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69d744:{NFSU2_TR(0x69d744);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B69d747:{NFSU2_TR(0x69d747);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B69d749:{NFSU2_TR(0x69d749);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d73fu);}goto L69d73f;}}
}
B69d74b:L69d74b:{c.instructions+=18;NFSU2_TR(0x69d74b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d74e:{NFSU2_TR(0x69d74e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d751:{NFSU2_TR(0x69d751);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d754:{NFSU2_TR(0x69d754);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d758:{NFSU2_TR(0x69d758);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d75b:{NFSU2_TR(0x69d75b);
__builtin_memmove((R+0),(R+8),4);
}
B69d75d:{NFSU2_TR(0x69d75d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69d760:{NFSU2_TR(0x69d760);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d763:{NFSU2_TR(0x69d763);
__builtin_memmove((R+4),(R+8),4);
}
B69d765:{NFSU2_TR(0x69d765);
__builtin_memmove((R+0),(R+12),4);
}
B69d767:{NFSU2_TR(0x69d767);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69d76a:{NFSU2_TR(0x69d76a);
w4(R+4,u32(0-u32(r4(R+4))));
}
B69d76c:{NFSU2_TR(0x69d76c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d76f:{NFSU2_TR(0x69d76f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B69d771:{NFSU2_TR(0x69d771);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B69d774:{NFSU2_TR(0x69d774);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B69d776:{NFSU2_TR(0x69d776);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B69d779:{NFSU2_TR(0x69d779);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d77c:L69d77c:{c.instructions+=11;NFSU2_TR(0x69d77c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69d77e:{NFSU2_TR(0x69d77e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d781:{NFSU2_TR(0x69d781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69d783:{NFSU2_TR(0x69d783);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d786:{NFSU2_TR(0x69d786);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69d789:{NFSU2_TR(0x69d789);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d78c:{NFSU2_TR(0x69d78c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d78f:{NFSU2_TR(0x69d78f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d792:{NFSU2_TR(0x69d792);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69d795:{NFSU2_TR(0x69d795);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69d799:{NFSU2_TR(0x69d799);
if(r1(R+518)){{goto L69d7a4;}}
}
B69d79b:L69d79b:{c.instructions+=3;NFSU2_TR(0x69d79b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d79e:{NFSU2_TR(0x69d79e);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d7a2:{NFSU2_TR(0x69d7a2);
if(r1(R+518)){{goto L69d7ea;}}
}
B69d7a4:L69d7a4:{c.instructions+=7;NFSU2_TR(0x69d7a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d7a7:{NFSU2_TR(0x69d7a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d7aa:{NFSU2_TR(0x69d7aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B69d7ad:{NFSU2_TR(0x69d7ad);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B69d7af:{NFSU2_TR(0x69d7af);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B69d7b3:{NFSU2_TR(0x69d7b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d7b6:{NFSU2_TR(0x69d7b6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d77cu);}goto L69d77c;}}
}
B69d7b8:L69d7b8:{c.instructions+=2;NFSU2_TR(0x69d7b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d7bf:{NFSU2_TR(0x69d7bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d80b;}}
}
B69d7c1:L69d7c1:{c.instructions+=7;NFSU2_TR(0x69d7c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d7c4:{NFSU2_TR(0x69d7c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d7c7:{NFSU2_TR(0x69d7c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B69d7ca:{NFSU2_TR(0x69d7ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d7cd:{NFSU2_TR(0x69d7cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69d7d0:{NFSU2_TR(0x69d7d0);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+28))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B69d7d3:{NFSU2_TR(0x69d7d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d80b;}}
}
B69d7d5:L69d7d5:{c.instructions+=3;NFSU2_TR(0x69d7d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d7d8:{NFSU2_TR(0x69d7d8);
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
B69d7da:{NFSU2_TR(0x69d7da);
if(r1(R+518)){{goto L69d7e2;}}
}
B69d7dc:L69d7dc:{c.instructions+=3;NFSU2_TR(0x69d7dc);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69d7de:{NFSU2_TR(0x69d7de);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B69d7e0:{NFSU2_TR(0x69d7e0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69d7e2:L69d7e2:{c.instructions+=3;NFSU2_TR(0x69d7e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d7e5:{NFSU2_TR(0x69d7e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d7e8:{NFSU2_TR(0x69d7e8);
{goto L69d80e;}
}
B69d7ea:L69d7ea:{c.instructions+=3;NFSU2_TR(0x69d7ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d7ed:{NFSU2_TR(0x69d7ed);
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
B69d7ef:{NFSU2_TR(0x69d7ef);
if(r1(R+518)){{goto L69d806;}}
}
B69d7f1:L69d7f1:{c.instructions+=4;NFSU2_TR(0x69d7f1);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x20500000ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x20500000ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x20500000ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69d7f8:{NFSU2_TR(0x69d7f8);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69d7fb:{NFSU2_TR(0x69d7fb);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B69d7fd:{NFSU2_TR(0x69d7fd);
if(r1(R+518)){{goto L69d804;}}
}
B69d7ff:L69d7ff:{c.instructions+=2;NFSU2_TR(0x69d7ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d802:{NFSU2_TR(0x69d802);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B69d804:L69d804:{c.instructions+=1;NFSU2_TR(0x69d804);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69d806:L69d806:{c.instructions+=2;NFSU2_TR(0x69d806);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d809:{NFSU2_TR(0x69d809);
{goto L69d80e;}
}
B69d80b:L69d80b:{c.instructions+=1;NFSU2_TR(0x69d80b);
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
B69d80e:L69d80e:{c.instructions+=5;NFSU2_TR(0x69d80e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69d80f:{NFSU2_TR(0x69d80f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69d810:{NFSU2_TR(0x69d810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69d811:{NFSU2_TR(0x69d811);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69d812:{NFSU2_TR(0x69d812);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69d815:L69d815:{c.instructions+=11;NFSU2_TR(0x69d815);
__builtin_memmove((R+28),(R+28),4);
}
B69d817:{NFSU2_TR(0x69d817);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d818:{NFSU2_TR(0x69d818);
__builtin_memmove((R+20),(R+16),4);
}
B69d81a:{NFSU2_TR(0x69d81a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d81b:{NFSU2_TR(0x69d81b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d81c:{NFSU2_TR(0x69d81c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d81d:{NFSU2_TR(0x69d81d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69d81f:{NFSU2_TR(0x69d81f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d822:{NFSU2_TR(0x69d822);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d823:{NFSU2_TR(0x69d823);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d824:{NFSU2_TR(0x69d824);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d848;}}
}
B69d826:L69d826:{c.instructions+=7;NFSU2_TR(0x69d826);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d829:{NFSU2_TR(0x69d829);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d82c:{NFSU2_TR(0x69d82c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69d82f:{NFSU2_TR(0x69d82f);
__builtin_memmove((R+28),(R+24),4);
}
B69d831:{NFSU2_TR(0x69d831);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))&u32(r4(U+4))));
}
B69d834:{NFSU2_TR(0x69d834);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d837:{NFSU2_TR(0x69d837);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d842;}}
}
B69d839:L69d839:{c.instructions+=2;NFSU2_TR(0x69d839);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69d83c:{NFSU2_TR(0x69d83c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d842;}}
}
B69d83e:L69d83e:{c.instructions+=1;NFSU2_TR(0x69d83e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d842:L69d842:{c.instructions+=3;NFSU2_TR(0x69d842);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B69d843:{NFSU2_TR(0x69d843);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B69d846:{NFSU2_TR(0x69d846);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d826u);}goto L69d826;}}
}
B69d848:L69d848:{c.instructions+=3;NFSU2_TR(0x69d848);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69d84a:{NFSU2_TR(0x69d84a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d84d:{NFSU2_TR(0x69d84d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d882;}}
}
B69d84f:L69d84f:{c.instructions+=10;NFSU2_TR(0x69d84f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d852:{NFSU2_TR(0x69d852);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69d855:{NFSU2_TR(0x69d855);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69d858:{NFSU2_TR(0x69d858);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d85b:{NFSU2_TR(0x69d85b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d85e:{NFSU2_TR(0x69d85e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69d861:{NFSU2_TR(0x69d861);
__builtin_memmove((R+12),(R+24),4);
}
B69d863:{NFSU2_TR(0x69d863);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))&u32(r4(U+4))));
}
B69d866:{NFSU2_TR(0x69d866);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d869:{NFSU2_TR(0x69d869);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d87c;}}
}
B69d86b:L69d86b:{c.instructions+=2;NFSU2_TR(0x69d86b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69d86e:{NFSU2_TR(0x69d86e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d87c;}}
}
B69d870:L69d870:{c.instructions+=4;NFSU2_TR(0x69d870);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d873:{NFSU2_TR(0x69d873);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B69d874:{NFSU2_TR(0x69d874);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d877:{NFSU2_TR(0x69d877);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69d87c;}}
}
B69d879:L69d879:{c.instructions+=1;NFSU2_TR(0x69d879);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d87c:L69d87c:{c.instructions+=3;NFSU2_TR(0x69d87c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69d87d:{NFSU2_TR(0x69d87d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69d880:{NFSU2_TR(0x69d880);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d84fu);}goto L69d84f;}}
}
B69d882:L69d882:{c.instructions+=5;NFSU2_TR(0x69d882);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69d884:{NFSU2_TR(0x69d884);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B69d886:{NFSU2_TR(0x69d886);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d889:{NFSU2_TR(0x69d889);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d88c:{NFSU2_TR(0x69d88c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d8ca;}}
}
B69d88e:L69d88e:{c.instructions+=7;NFSU2_TR(0x69d88e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d891:{NFSU2_TR(0x69d891);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d894:{NFSU2_TR(0x69d894);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d897:{NFSU2_TR(0x69d897);
__builtin_memmove((R+12),(R+8),4);
}
B69d899:{NFSU2_TR(0x69d899);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))&u32(r4(U+4))));
}
B69d89c:{NFSU2_TR(0x69d89c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d89f:{NFSU2_TR(0x69d89f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d8c4;}}
}
B69d8a1:L69d8a1:{c.instructions+=3;NFSU2_TR(0x69d8a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69d8a4:{NFSU2_TR(0x69d8a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69d8a6:{NFSU2_TR(0x69d8a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d8c4;}}
}
B69d8a8:L69d8a8:{c.instructions+=5;NFSU2_TR(0x69d8a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69d8ab:{NFSU2_TR(0x69d8ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69d8ae:{NFSU2_TR(0x69d8ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d8b1:{NFSU2_TR(0x69d8b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d8b4:{NFSU2_TR(0x69d8b4);
if(r1(R+518)){{goto L69d8bd;}}
}
B69d8b6:L69d8b6:{c.instructions+=1;NFSU2_TR(0x69d8b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69d8bd:L69d8bd:{c.instructions+=2;NFSU2_TR(0x69d8bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B69d8c0:{NFSU2_TR(0x69d8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d8c4:L69d8c4:{c.instructions+=3;NFSU2_TR(0x69d8c4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69d8c5:{NFSU2_TR(0x69d8c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69d8c8:{NFSU2_TR(0x69d8c8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d88eu);}goto L69d88e;}}
}
B69d8ca:L69d8ca:{c.instructions+=3;NFSU2_TR(0x69d8ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d8ce:{NFSU2_TR(0x69d8ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d8d2:{NFSU2_TR(0x69d8d2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d912;}}
}
B69d8d4:L69d8d4:{c.instructions+=10;NFSU2_TR(0x69d8d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d8d7:{NFSU2_TR(0x69d8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d8da:{NFSU2_TR(0x69d8da);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d8dd:{NFSU2_TR(0x69d8dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d8e0:{NFSU2_TR(0x69d8e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d8e3:{NFSU2_TR(0x69d8e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69d8e6:{NFSU2_TR(0x69d8e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d8e9:{NFSU2_TR(0x69d8e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))&u32(r4(U+4))));
}
B69d8ec:{NFSU2_TR(0x69d8ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d8ef:{NFSU2_TR(0x69d8ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d907;}}
}
B69d8f1:L69d8f1:{c.instructions+=4;NFSU2_TR(0x69d8f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d8f4:{NFSU2_TR(0x69d8f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69d8f7:{NFSU2_TR(0x69d8f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69d8f9:{NFSU2_TR(0x69d8f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69d907;}}
}
B69d8fb:L69d8fb:{c.instructions+=4;NFSU2_TR(0x69d8fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d8fe:{NFSU2_TR(0x69d8fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d901:{NFSU2_TR(0x69d901);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d904:{NFSU2_TR(0x69d904);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d907:L69d907:{c.instructions+=4;NFSU2_TR(0x69d907);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d90a:{NFSU2_TR(0x69d90a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d90d:{NFSU2_TR(0x69d90d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69d910:{NFSU2_TR(0x69d910);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d8d4u);}goto L69d8d4;}}
}
B69d912:L69d912:{c.instructions+=10;NFSU2_TR(0x69d912);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d915:{NFSU2_TR(0x69d915);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d918:{NFSU2_TR(0x69d918);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69d91b:{NFSU2_TR(0x69d91b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d91f:{NFSU2_TR(0x69d91f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69d922:{NFSU2_TR(0x69d922);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69d923:{NFSU2_TR(0x69d923);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d926:{NFSU2_TR(0x69d926);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69d927:{NFSU2_TR(0x69d927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69d928:{NFSU2_TR(0x69d928);
if(r1(R+518)){{goto L69d934;}}
}
B69d92a:L69d92a:{c.instructions+=3;NFSU2_TR(0x69d92a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d92d:{NFSU2_TR(0x69d92d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d930:{NFSU2_TR(0x69d930);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x4ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B69d934:L69d934:{c.instructions+=3;NFSU2_TR(0x69d934);
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
B69d936:{NFSU2_TR(0x69d936);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69d937:{NFSU2_TR(0x69d937);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69d93a:L69d93a:{c.instructions+=15;NFSU2_TR(0x69d93a);
__builtin_memmove((R+28),(R+28),4);
}
B69d93c:{NFSU2_TR(0x69d93c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d93d:{NFSU2_TR(0x69d93d);
__builtin_memmove((R+20),(R+16),4);
}
B69d93f:{NFSU2_TR(0x69d93f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d940:{NFSU2_TR(0x69d940);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d941:{NFSU2_TR(0x69d941);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d944:{NFSU2_TR(0x69d944);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d945:{NFSU2_TR(0x69d945);
__builtin_memmove((R+8),(R+4),4);
}
B69d947:{NFSU2_TR(0x69d947);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B69d949:{NFSU2_TR(0x69d949);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69d94c:{NFSU2_TR(0x69d94c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d94d:{NFSU2_TR(0x69d94d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d950:{NFSU2_TR(0x69d950);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d953:{NFSU2_TR(0x69d953);
__builtin_memmove((R+4),(R+0),4);
}
B69d955:{NFSU2_TR(0x69d955);
if(r1(R+518)){{goto L69d968;}}
}
B69d957:L69d957:{c.instructions+=1;NFSU2_TR(0x69d957);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d95a:L69d95a:{c.instructions+=5;NFSU2_TR(0x69d95a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69d95d:{NFSU2_TR(0x69d95d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d960:{NFSU2_TR(0x69d960);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d963:{NFSU2_TR(0x69d963);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69d966:{NFSU2_TR(0x69d966);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d95au);}goto L69d95a;}}
}
B69d968:L69d968:{c.instructions+=5;NFSU2_TR(0x69d968);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d96b:{NFSU2_TR(0x69d96b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69d96e:{NFSU2_TR(0x69d96e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d96f:{NFSU2_TR(0x69d96f);
__builtin_memmove((R+28),(R+4),4);
}
B69d971:{NFSU2_TR(0x69d971);
if(r1(R+518)){{goto L69d982;}}
}
B69d973:L69d973:{c.instructions+=1;NFSU2_TR(0x69d973);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69d976:L69d976:{c.instructions+=5;NFSU2_TR(0x69d976);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69d979:{NFSU2_TR(0x69d979);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d97c:{NFSU2_TR(0x69d97c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B69d97d:{NFSU2_TR(0x69d97d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69d980:{NFSU2_TR(0x69d980);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d976u);}goto L69d976;}}
}
B69d982:L69d982:{c.instructions+=2;NFSU2_TR(0x69d982);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d985:{NFSU2_TR(0x69d985);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69d9a7;}}
}
B69d987:L69d987:{c.instructions+=3;NFSU2_TR(0x69d987);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d98a:{NFSU2_TR(0x69d98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d98d:{NFSU2_TR(0x69d98d);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B69d98f:L69d98f:{c.instructions+=7;NFSU2_TR(0x69d98f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d992:{NFSU2_TR(0x69d992);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69d995:{NFSU2_TR(0x69d995);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69d998:{NFSU2_TR(0x69d998);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B69d999:{NFSU2_TR(0x69d999);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d99c:{NFSU2_TR(0x69d99c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d99f:{NFSU2_TR(0x69d99f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d98fu);}goto L69d98f;}}
}
B69d9a1:L69d9a1:{c.instructions+=2;NFSU2_TR(0x69d9a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d9a4:{NFSU2_TR(0x69d9a4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69d9a7:L69d9a7:{c.instructions+=1;NFSU2_TR(0x69d9a7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69d9bd;}}
}
B69d9a9:L69d9a9:{c.instructions+=2;NFSU2_TR(0x69d9a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69d9ac:{NFSU2_TR(0x69d9ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B69d9af:L69d9af:{c.instructions+=5;NFSU2_TR(0x69d9af);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B69d9b0:{NFSU2_TR(0x69d9b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69d9b3:{NFSU2_TR(0x69d9b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d9b6:{NFSU2_TR(0x69d9b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d9b9:{NFSU2_TR(0x69d9b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d9afu);}goto L69d9af;}}
}
B69d9bb:L69d9bb:{c.instructions+=1;NFSU2_TR(0x69d9bb);
{goto L69d9c0;}
}
B69d9bd:L69d9bd:{c.instructions+=1;NFSU2_TR(0x69d9bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d9c0:L69d9c0:{c.instructions+=3;NFSU2_TR(0x69d9c0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69d9c2:{NFSU2_TR(0x69d9c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69d9c3:{NFSU2_TR(0x69d9c3);
if(r1(R+518)){{goto L69d9e1;}}
}
B69d9c5:L69d9c5:{c.instructions+=1;NFSU2_TR(0x69d9c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69d9c8:L69d9c8:{c.instructions+=9;NFSU2_TR(0x69d9c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69d9cb:{NFSU2_TR(0x69d9cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69d9ce:{NFSU2_TR(0x69d9ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69d9d1:{NFSU2_TR(0x69d9d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69d9d4:{NFSU2_TR(0x69d9d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d9d7:{NFSU2_TR(0x69d9d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d9da:{NFSU2_TR(0x69d9da);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69d9dc:{NFSU2_TR(0x69d9dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69d9df:{NFSU2_TR(0x69d9df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d9c8u);}goto L69d9c8;}}
}
B69d9e1:L69d9e1:{c.instructions+=7;NFSU2_TR(0x69d9e1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69d9e3:{NFSU2_TR(0x69d9e3);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69d9e6:{NFSU2_TR(0x69d9e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69d9e7:{NFSU2_TR(0x69d9e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B69d9ea:{NFSU2_TR(0x69d9ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69d9eb:{NFSU2_TR(0x69d9eb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69d9ec:{NFSU2_TR(0x69d9ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69d9ef:L69d9ef:{c.instructions+=23;NFSU2_TR(0x69d9ef);
__builtin_memmove((R+28),(R+28),4);
}
B69d9f1:{NFSU2_TR(0x69d9f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d9f2:{NFSU2_TR(0x69d9f2);
__builtin_memmove((R+20),(R+16),4);
}
B69d9f4:{NFSU2_TR(0x69d9f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d9f5:{NFSU2_TR(0x69d9f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69d9f6:{NFSU2_TR(0x69d9f6);
__builtin_memmove((R+8),(R+4),4);
}
B69d9f8:{NFSU2_TR(0x69d9f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69d9fb:{NFSU2_TR(0x69d9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69d9fe:{NFSU2_TR(0x69d9fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69da01:{NFSU2_TR(0x69da01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69da04:{NFSU2_TR(0x69da04);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69da05:{NFSU2_TR(0x69da05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69da06:{NFSU2_TR(0x69da06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69da09:{NFSU2_TR(0x69da09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B69da0c:{NFSU2_TR(0x69da0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69da0f:{NFSU2_TR(0x69da0f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69da10:{NFSU2_TR(0x69da10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69da13:{NFSU2_TR(0x69da13);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69da16:{NFSU2_TR(0x69da16);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69da19:{NFSU2_TR(0x69da19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69da1c:{NFSU2_TR(0x69da1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69da1f:{NFSU2_TR(0x69da1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69da22:{NFSU2_TR(0x69da22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69da34;}}
}
B69da24:L69da24:{c.instructions+=1;NFSU2_TR(0x69da24);
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
B69da27:L69da27:{c.instructions+=5;NFSU2_TR(0x69da27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69da28:{NFSU2_TR(0x69da28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69da29:{NFSU2_TR(0x69da29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69da2a:{NFSU2_TR(0x69da2a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69da2b:{NFSU2_TR(0x69da2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69da2e:L69da2e:{c.instructions+=2;NFSU2_TR(0x69da2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69da31:{NFSU2_TR(0x69da31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69da34:L69da34:{c.instructions+=5;NFSU2_TR(0x69da34);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69da37:{NFSU2_TR(0x69da37);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69da3a:{NFSU2_TR(0x69da3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69da3d:{NFSU2_TR(0x69da3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B69da40:{NFSU2_TR(0x69da40);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69dad1;}}
}
B69da46:L69da46:{c.instructions+=3;NFSU2_TR(0x69da46);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69da49:{NFSU2_TR(0x69da49);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B69da4c:{NFSU2_TR(0x69da4c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69da24u);}goto L69da24;}}
}
B69da4e:L69da4e:{c.instructions+=3;NFSU2_TR(0x69da4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69da51:{NFSU2_TR(0x69da51);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69da54:{NFSU2_TR(0x69da54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69da5b;}}
}
B69da56:L69da56:{c.instructions+=2;NFSU2_TR(0x69da56);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69da59:{NFSU2_TR(0x69da59);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69da27u);}goto L69da27;}}
}
B69da5b:L69da5b:{c.instructions+=2;NFSU2_TR(0x69da5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B69da5e:{NFSU2_TR(0x69da5e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69da67;}}
}
B69da60:L69da60:{c.instructions+=3;NFSU2_TR(0x69da60);
__builtin_memmove((R+0),(R+4),4);
}
B69da62:{NFSU2_TR(0x69da62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69da65:{NFSU2_TR(0x69da65);
{goto L69da6c;}
}
B69da67:L69da67:{c.instructions+=2;NFSU2_TR(0x69da67);
__builtin_memmove((R+0),(R+28),4);
}
B69da69:{NFSU2_TR(0x69da69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69da6c:L69da6c:{c.instructions+=12;NFSU2_TR(0x69da6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69da6f:{NFSU2_TR(0x69da6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69da72:{NFSU2_TR(0x69da72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69da75:{NFSU2_TR(0x69da75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69da79:{NFSU2_TR(0x69da79);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69da7c:{NFSU2_TR(0x69da7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69da7f:{NFSU2_TR(0x69da7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B69da82:{NFSU2_TR(0x69da82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69da85:{NFSU2_TR(0x69da85);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69da88:{NFSU2_TR(0x69da88);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69da8a:{NFSU2_TR(0x69da8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69da8d:{NFSU2_TR(0x69da8d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69dad1;}}
}
B69da8f:L69da8f:{c.instructions+=9;NFSU2_TR(0x69da8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69da92:{NFSU2_TR(0x69da92);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69da95:{NFSU2_TR(0x69da95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B69da98:{NFSU2_TR(0x69da98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69da9b:{NFSU2_TR(0x69da9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B69da9e:{NFSU2_TR(0x69da9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69daa1:{NFSU2_TR(0x69daa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69daa4:{NFSU2_TR(0x69daa4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+8))));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69daa6:{NFSU2_TR(0x69daa6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69dad1;}}
}
B69daa8:L69daa8:{c.instructions+=7;NFSU2_TR(0x69daa8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69daab:{NFSU2_TR(0x69daab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69daae:{NFSU2_TR(0x69daae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69dab1:{NFSU2_TR(0x69dab1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69dab4:{NFSU2_TR(0x69dab4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69dab7:{NFSU2_TR(0x69dab7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69daba:{NFSU2_TR(0x69daba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69dabfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d93au);}goto L69d93a;}
}
B69dabf:L69dabf:{c.instructions+=2;NFSU2_TR(0x69dabf);
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
B69dac1:{NFSU2_TR(0x69dac1);
if(r1(R+518)){{goto L69dae5;}}
}
B69dac3:L69dac3:{c.instructions+=5;NFSU2_TR(0x69dac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69dac6:{NFSU2_TR(0x69dac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69dac9:{NFSU2_TR(0x69dac9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69dacc:{NFSU2_TR(0x69dacc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69dacf:{NFSU2_TR(0x69dacf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69da8fu);}goto L69da8f;}}
}
B69dad1:L69dad1:{c.instructions+=4;NFSU2_TR(0x69dad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69dad4:{NFSU2_TR(0x69dad4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69dad7:{NFSU2_TR(0x69dad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69dada:{NFSU2_TR(0x69dada);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69da2eu);}goto L69da2e;}}
}
B69dae0:L69dae0:{c.instructions+=1;NFSU2_TR(0x69dae0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69da24u);}goto L69da24;}
}
B69dae5:L69dae5:{c.instructions+=2;NFSU2_TR(0x69dae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69dae8:{NFSU2_TR(0x69dae8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69da27u);}goto L69da27;}
}
B69daed:L69daed:{c.instructions+=20;NFSU2_TR(0x69daed);
__builtin_memmove((R+28),(R+28),4);
}
B69daef:{NFSU2_TR(0x69daef);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69daf0:{NFSU2_TR(0x69daf0);
__builtin_memmove((R+20),(R+16),4);
}
B69daf2:{NFSU2_TR(0x69daf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B69daf5:{NFSU2_TR(0x69daf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69daf8:{NFSU2_TR(0x69daf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69dafb:{NFSU2_TR(0x69dafb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69dafc:{NFSU2_TR(0x69dafc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69daff:{NFSU2_TR(0x69daff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69db00:{NFSU2_TR(0x69db00);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69db03:{NFSU2_TR(0x69db03);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69db07:{NFSU2_TR(0x69db07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69db0a:{NFSU2_TR(0x69db0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69db0d:{NFSU2_TR(0x69db0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69db10:{NFSU2_TR(0x69db10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69db11:{NFSU2_TR(0x69db11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69db14:{NFSU2_TR(0x69db14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69db17:{NFSU2_TR(0x69db17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69db1a:{NFSU2_TR(0x69db1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69db21:{NFSU2_TR(0x69db21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69db4a;}}
}
B69db23:L69db23:{c.instructions+=2;NFSU2_TR(0x69db23);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69db26:{NFSU2_TR(0x69db26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69db30;}}
}
B69db28:L69db28:{c.instructions+=2;NFSU2_TR(0x69db28);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69db2c:{NFSU2_TR(0x69db2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69db4a;}}
}
B69db2e:L69db2e:{c.instructions+=1;NFSU2_TR(0x69db2e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69db30:L69db30:{c.instructions+=1;NFSU2_TR(0x69db30);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69db38;}}
}
B69db32:L69db32:{c.instructions+=2;NFSU2_TR(0x69db32);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69db36:{NFSU2_TR(0x69db36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69db4a;}}
}
B69db38:L69db38:{c.instructions+=4;NFSU2_TR(0x69db38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69db3b:{NFSU2_TR(0x69db3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69db3e:{NFSU2_TR(0x69db3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69db41:{NFSU2_TR(0x69db41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69db46ull));
TAIL_STATIC(0x698f0fu,698);
}
B69db46:L69db46:{c.instructions+=2;NFSU2_TR(0x69db46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69db48:{NFSU2_TR(0x69db48);
if(r1(R+518)){{goto L69db51;}}
}
B69db4a:L69db4a:{c.instructions+=1;NFSU2_TR(0x69db4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69db51:L69db51:{c.instructions+=17;NFSU2_TR(0x69db51);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B69db54:{NFSU2_TR(0x69db54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69db57:{NFSU2_TR(0x69db57);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69db5a:{NFSU2_TR(0x69db5a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B69db5b:{NFSU2_TR(0x69db5b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B69db5c:{NFSU2_TR(0x69db5c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B69db5d:{NFSU2_TR(0x69db5d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B69db5e:{NFSU2_TR(0x69db5e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B69db61:{NFSU2_TR(0x69db61);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69db64:{NFSU2_TR(0x69db64);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B69db65:{NFSU2_TR(0x69db65);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B69db66:{NFSU2_TR(0x69db66);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B69db67:{NFSU2_TR(0x69db67);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B69db68:{NFSU2_TR(0x69db68);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69db6a:{NFSU2_TR(0x69db6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69db71:{NFSU2_TR(0x69db71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69db74:{NFSU2_TR(0x69db74);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B69db77:L69db77:{c.instructions+=6;NFSU2_TR(0x69db77);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69db7a:{NFSU2_TR(0x69db7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69db7d:{NFSU2_TR(0x69db7d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69db80:{NFSU2_TR(0x69db80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69db83:{NFSU2_TR(0x69db83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69db86:{NFSU2_TR(0x69db86);
if(r1(R+518)){{goto L69dc28;}}
}
B69db8c:L69db8c:{c.instructions+=6;NFSU2_TR(0x69db8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69db8f:{NFSU2_TR(0x69db8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69db92:{NFSU2_TR(0x69db92);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69db94:{NFSU2_TR(0x69db94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69db97:{NFSU2_TR(0x69db97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69db9a:{NFSU2_TR(0x69db9a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69dc28;}}
}
B69dba0:L69dba0:{c.instructions+=5;NFSU2_TR(0x69dba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69dba3:{NFSU2_TR(0x69dba3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69dba6:{NFSU2_TR(0x69dba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69dba9:{NFSU2_TR(0x69dba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B69dbac:{NFSU2_TR(0x69dbac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69dbaf:L69dbaf:{c.instructions+=8;NFSU2_TR(0x69dbaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69dbb2:{NFSU2_TR(0x69dbb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69dbb4:{NFSU2_TR(0x69dbb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69dbb7:{NFSU2_TR(0x69dbb7);
__builtin_memmove((R+8),(R+0),4);
}
B69dbb9:{NFSU2_TR(0x69dbb9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B69dbbc:{NFSU2_TR(0x69dbbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69dbbf:{NFSU2_TR(0x69dbbf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69dbc2:{NFSU2_TR(0x69dbc2);
if(r1(R+518)){{goto L69dbcb;}}
}
B69dbc4:L69dbc4:{c.instructions+=1;NFSU2_TR(0x69dbc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69dbcb:L69dbcb:{c.instructions+=2;NFSU2_TR(0x69dbcb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69dbce:{NFSU2_TR(0x69dbce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69dc02;}}
}
B69dbd0:L69dbd0:{c.instructions+=4;NFSU2_TR(0x69dbd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69dbd3:{NFSU2_TR(0x69dbd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69dbd6:{NFSU2_TR(0x69dbd6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69dbd9:{NFSU2_TR(0x69dbd9);
if(r1(R+518)){{goto L69dc02;}}
}
B69dbdb:L69dbdb:{c.instructions+=2;NFSU2_TR(0x69dbdb);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B69dbe0:{NFSU2_TR(0x69dbe0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69dc02;}}
}
B69dbe2:L69dbe2:{c.instructions+=2;NFSU2_TR(0x69dbe2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69dbe6:{NFSU2_TR(0x69dbe6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69dbed;}}
}
B69dbe8:L69dbe8:{c.instructions+=2;NFSU2_TR(0x69dbe8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69dbeb:{NFSU2_TR(0x69dbeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69dc02;}}
}
B69dbed:L69dbed:{c.instructions+=6;NFSU2_TR(0x69dbed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69dbf0:{NFSU2_TR(0x69dbf0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69dbf1:{NFSU2_TR(0x69dbf1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69dbf4:{NFSU2_TR(0x69dbf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69dbf7:{NFSU2_TR(0x69dbf7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69dbf8:{NFSU2_TR(0x69dbf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69dbfdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d9efu);}goto L69d9ef;}
}
B69dbfd:L69dbfd:{c.instructions+=2;NFSU2_TR(0x69dbfd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69dc00:{NFSU2_TR(0x69dc00);
if(r1(R+518)){{goto L69dc13;}}
}
B69dc02:L69dc02:{c.instructions+=5;NFSU2_TR(0x69dc02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69dc05:{NFSU2_TR(0x69dc05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69dc08:{NFSU2_TR(0x69dc08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69dc0c:{NFSU2_TR(0x69dc0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69dc0f:{NFSU2_TR(0x69dc0f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69dbafu);}goto L69dbaf;}}
}
B69dc11:L69dc11:{c.instructions+=1;NFSU2_TR(0x69dc11);
{goto L69dc21;}
}
B69dc13:L69dc13:{c.instructions+=4;NFSU2_TR(0x69dc13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69dc16:{NFSU2_TR(0x69dc16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69dc19:{NFSU2_TR(0x69dc19);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B69dc1d:{NFSU2_TR(0x69dc1d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B69dc21:L69dc21:{c.instructions+=3;NFSU2_TR(0x69dc21);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69dc23:{NFSU2_TR(0x69dc23);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69dc26:{NFSU2_TR(0x69dc26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69dc2b;}}
}
B69dc28:L69dc28:{c.instructions+=1;NFSU2_TR(0x69dc28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69dc2b:L69dc2b:{c.instructions+=4;NFSU2_TR(0x69dc2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69dc2e:{NFSU2_TR(0x69dc2e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B69dc31:{NFSU2_TR(0x69dc31);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B69dc35:{NFSU2_TR(0x69dc35);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69db77u);}goto L69db77;}}
}
B69dc3b:L69dc3b:{c.instructions+=4;NFSU2_TR(0x69dc3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69dc3e:{NFSU2_TR(0x69dc3e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B69dc41:{NFSU2_TR(0x69dc41);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
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
B69dc44:{NFSU2_TR(0x69dc44);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69dd55;}}
}
B69dc4a:L69dc4a:{c.instructions+=3;NFSU2_TR(0x69dc4a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69dc4c:{NFSU2_TR(0x69dc4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69dc4f:{NFSU2_TR(0x69dc4f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L69dc59;}}
}
B69dc51:L69dc51:{c.instructions+=2;NFSU2_TR(0x69dc51);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69dc55:{NFSU2_TR(0x69dc55);
if(r1(R+518)){{goto L69dc64;}}
}
B69dc57:L69dc57:{c.instructions+=1;NFSU2_TR(0x69dc57);
{goto L69dc61;}
}
B69dc59:L69dc59:{c.instructions+=1;NFSU2_TR(0x69dc59);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L69dc64;}}
}
B69dc5b:L69dc5b:{c.instructions+=2;NFSU2_TR(0x69dc5b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69dc5f:{NFSU2_TR(0x69dc5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69dc64;}}
}
B69dc61:L69dc61:{c.instructions+=2;NFSU2_TR(0x69dc61);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69dc63:{NFSU2_TR(0x69dc63);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69dc64:L69dc64:{c.instructions+=5;NFSU2_TR(0x69dc64);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69dc67:{NFSU2_TR(0x69dc67);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B69dc69:{NFSU2_TR(0x69dc69);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
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
B69dc6c:{NFSU2_TR(0x69dc6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69dc6f:{NFSU2_TR(0x69dc6f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69dd55;}}
}
B69dc75:L69dc75:{c.instructions+=2;NFSU2_TR(0x69dc75);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B69dc7a:{NFSU2_TR(0x69dc7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69dd3d;}}
}
B69dc80:L69dc80:{c.instructions+=8;NFSU2_TR(0x69dc80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69dc83:{NFSU2_TR(0x69dc83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69dc86:{NFSU2_TR(0x69dc86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B69dc89:{NFSU2_TR(0x69dc89);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69dc8c:{NFSU2_TR(0x69dc8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69dc8f:{NFSU2_TR(0x69dc8f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69dc92:{NFSU2_TR(0x69dc92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69dc95:{NFSU2_TR(0x69dc95);
if(r1(R+518)){{goto L69dd3d;}}
}
B69dc9b:L69dc9b:{c.instructions+=3;NFSU2_TR(0x69dc9b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69dc9d:{NFSU2_TR(0x69dc9d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69dca0:{NFSU2_TR(0x69dca0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69dd11;}}
}
B69dca2:L69dca2:{c.instructions+=5;NFSU2_TR(0x69dca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69dca5:{NFSU2_TR(0x69dca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B69dca8:{NFSU2_TR(0x69dca8);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x3ull))));
}
B69dcab:{NFSU2_TR(0x69dcab);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69dcaf:{NFSU2_TR(0x69dcaf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69dce6;}}
}
B69dcb1:L69dcb1:{c.instructions+=2;NFSU2_TR(0x69dcb1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69dcb5:{NFSU2_TR(0x69dcb5);
if(r1(R+518)){{goto L69dcdf;}}
}
B69dcb7:L69dcb7:{c.instructions+=9;NFSU2_TR(0x69dcb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69dcba:{NFSU2_TR(0x69dcba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69dcbd:{NFSU2_TR(0x69dcbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69dcc0:{NFSU2_TR(0x69dcc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69dcc3:{NFSU2_TR(0x69dcc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69dcc5:{NFSU2_TR(0x69dcc5);
__builtin_memmove((R+8),(R+0),4);
}
B69dcc7:{NFSU2_TR(0x69dcc7);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B69dccd:{NFSU2_TR(0x69dccd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69dcd3:{NFSU2_TR(0x69dcd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69dcdf;}}
}
B69dcd5:L69dcd5:{c.instructions+=3;NFSU2_TR(0x69dcd5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B69dcda:{NFSU2_TR(0x69dcda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B69dcdd:{NFSU2_TR(0x69dcdd);
if(r1(R+512)){{goto L69dce6;}}
}
B69dcdf:L69dcdf:{c.instructions+=4;NFSU2_TR(0x69dcdf);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69dce1:{NFSU2_TR(0x69dce1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69dce2:{NFSU2_TR(0x69dce2);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B69dce4:{NFSU2_TR(0x69dce4);
__builtin_memmove((R+24),(R+0),4);
}
B69dce6:L69dce6:{c.instructions+=2;NFSU2_TR(0x69dce6);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B69dceb:{NFSU2_TR(0x69dceb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69dd01;}}
}
B69dced:L69dced:{c.instructions+=5;NFSU2_TR(0x69dced);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69dcee:{NFSU2_TR(0x69dcee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69dcf1:{NFSU2_TR(0x69dcf1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69dcf4:{NFSU2_TR(0x69dcf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69dcf7:{NFSU2_TR(0x69dcf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69dcfcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69d9efu);}goto L69d9ef;}
}
B69dcfc:L69dcfc:{c.instructions+=2;NFSU2_TR(0x69dcfc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69dcff:{NFSU2_TR(0x69dcff);
if(r1(R+518)){{goto L69dd09;}}
}
B69dd01:L69dd01:{c.instructions+=3;NFSU2_TR(0x69dd01);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69dd02:{NFSU2_TR(0x69dd02);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B69dd05:{NFSU2_TR(0x69dd05);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69dca2u);}goto L69dca2;}}
}
B69dd07:L69dd07:{c.instructions+=1;NFSU2_TR(0x69dd07);
{goto L69dd11;}
}
B69dd09:L69dd09:{c.instructions+=2;NFSU2_TR(0x69dd09);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B69dd0d:{NFSU2_TR(0x69dd0d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B69dd11:L69dd11:{c.instructions+=2;NFSU2_TR(0x69dd11);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69dd14:{NFSU2_TR(0x69dd14);
if(r1(R+518)){{goto L69dd5e;}}
}
B69dd16:L69dd16:{c.instructions+=3;NFSU2_TR(0x69dd16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69dd19:{NFSU2_TR(0x69dd19);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69dd1d:{NFSU2_TR(0x69dd1d);
if(r1(R+518)){{goto L69dd25;}}
}
B69dd1f:L69dd1f:{c.instructions+=2;NFSU2_TR(0x69dd1f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69dd23:{NFSU2_TR(0x69dd23);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69dd37;}}
}
B69dd25:L69dd25:{c.instructions+=6;NFSU2_TR(0x69dd25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69dd28:{NFSU2_TR(0x69dd28);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B69dd2b:{NFSU2_TR(0x69dd2b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B69dd2d:{NFSU2_TR(0x69dd2d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
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
B69dd30:{NFSU2_TR(0x69dd30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69dd33:{NFSU2_TR(0x69dd33);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69dd55;}}
}
B69dd35:L69dd35:{c.instructions+=1;NFSU2_TR(0x69dd35);
{goto L69dd3a;}
}
B69dd37:L69dd37:{c.instructions+=1;NFSU2_TR(0x69dd37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69dd3a:L69dd3a:{c.instructions+=1;NFSU2_TR(0x69dd3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69dd3d:L69dd3d:{c.instructions+=3;NFSU2_TR(0x69dd3d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69dd3e:{NFSU2_TR(0x69dd3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B69dd41:{NFSU2_TR(0x69dd41);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69dc75u);}goto L69dc75;}}
}
B69dd47:L69dd47:{c.instructions+=3;NFSU2_TR(0x69dd47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69dd4a:{NFSU2_TR(0x69dd4a);
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
B69dd4c:{NFSU2_TR(0x69dd4c);
if(r1(R+518)){{goto L69dd55;}}
}
B69dd4e:L69dd4e:{c.instructions+=5;NFSU2_TR(0x69dd4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69dd51:{NFSU2_TR(0x69dd51);
u8 U[40];
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
}
B69dd52:{NFSU2_TR(0x69dd52);
u8 U[40];
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
}
B69dd53:{NFSU2_TR(0x69dd53);
u8 U[40];
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
}
B69dd54:{NFSU2_TR(0x69dd54);
u8 U[40];
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
}
B69dd55:L69dd55:{c.instructions+=1;NFSU2_TR(0x69dd55);
__builtin_memmove((R+0),(R+4),4);
}
B69dd57:L69dd57:{c.instructions+=5;NFSU2_TR(0x69dd57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69dd58:{NFSU2_TR(0x69dd58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69dd59:{NFSU2_TR(0x69dd59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69dd5a:{NFSU2_TR(0x69dd5a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69dd5b:{NFSU2_TR(0x69dd5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69dd5e:L69dd5e:{c.instructions+=2;NFSU2_TR(0x69dd5e);
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
B69dd61:{NFSU2_TR(0x69dd61);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69dd57u);}goto L69dd57;}
}
B69dd63:L69dd63:{c.instructions+=10;NFSU2_TR(0x69dd63);
__builtin_memmove((R+28),(R+28),4);
}
B69dd65:{NFSU2_TR(0x69dd65);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69dd66:{NFSU2_TR(0x69dd66);
__builtin_memmove((R+20),(R+16),4);
}
B69dd68:{NFSU2_TR(0x69dd68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69dd69:{NFSU2_TR(0x69dd69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69dd6a:{NFSU2_TR(0x69dd6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69dd6d:{NFSU2_TR(0x69dd6d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69dd6e:{NFSU2_TR(0x69dd6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69dd6f:{NFSU2_TR(0x69dd6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69dd72:{NFSU2_TR(0x69dd72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69dd73:L69dd73:{c.instructions+=5;NFSU2_TR(0x69dd73);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69dd76:{NFSU2_TR(0x69dd76);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69dd79:{NFSU2_TR(0x69dd79);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69dd7c:{NFSU2_TR(0x69dd7c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69dd7f:{NFSU2_TR(0x69dd7f);
if(r1(R+518)){{goto L69dd83;}}
}
B69dd81:L69dd81:{c.instructions+=1;NFSU2_TR(0x69dd81);
__builtin_memmove((R+24),(R+28),4);
}
B69dd83:L69dd83:{c.instructions+=4;NFSU2_TR(0x69dd83);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69dd86:{NFSU2_TR(0x69dd86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69dd89:{NFSU2_TR(0x69dd89);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69dd8b:{NFSU2_TR(0x69dd8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ded3;}}
}
B69dd91:L69dd91:{c.instructions+=4;NFSU2_TR(0x69dd91);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69dd95:{NFSU2_TR(0x69dd95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69dd98:{NFSU2_TR(0x69dd98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69dd9b:{NFSU2_TR(0x69dd9b);
if(r1(R+518)){{goto L69dec8;}}
}
B69dda1:L69dda1:{c.instructions+=19;NFSU2_TR(0x69dda1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69dda4:{NFSU2_TR(0x69dda4);
__builtin_memmove((R+28),(R+8),4);
}
B69dda6:{NFSU2_TR(0x69dda6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69dda9:{NFSU2_TR(0x69dda9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B69ddac:{NFSU2_TR(0x69ddac);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69ddaf:{NFSU2_TR(0x69ddaf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+8))));
}
B69ddb2:{NFSU2_TR(0x69ddb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69ddb5:{NFSU2_TR(0x69ddb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69ddb8:{NFSU2_TR(0x69ddb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69ddbb:{NFSU2_TR(0x69ddbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69ddbe:{NFSU2_TR(0x69ddbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B69ddc1:{NFSU2_TR(0x69ddc1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B69ddc4:{NFSU2_TR(0x69ddc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69ddc7:{NFSU2_TR(0x69ddc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69ddca:{NFSU2_TR(0x69ddca);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69ddcd:{NFSU2_TR(0x69ddcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69ddcf:{NFSU2_TR(0x69ddcf);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfff00000ull))));
}
B69ddd5:{NFSU2_TR(0x69ddd5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69dddb:{NFSU2_TR(0x69dddb);
if(r1(R+518)){{goto L69dded;}}
}
B69dddd:L69dddd:{c.instructions+=2;NFSU2_TR(0x69dddd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69dde3:{NFSU2_TR(0x69dde3);
if(r1(R+518)){{goto L69dded;}}
}
B69dde5:L69dde5:{c.instructions+=2;NFSU2_TR(0x69dde5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69ddeb:{NFSU2_TR(0x69ddeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69de03;}}
}
B69dded:L69dded:{c.instructions+=7;NFSU2_TR(0x69dded);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69ddf0:{NFSU2_TR(0x69ddf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69ddf3:{NFSU2_TR(0x69ddf3);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B69ddf7:{NFSU2_TR(0x69ddf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69ddfa:{NFSU2_TR(0x69ddfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69ddfd:{NFSU2_TR(0x69ddfd);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B69de01:{NFSU2_TR(0x69de01);
{goto L69de3f;}
}
B69de03:L69de03:{c.instructions+=20;NFSU2_TR(0x69de03);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69de06:{NFSU2_TR(0x69de06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69de09:{NFSU2_TR(0x69de09);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69de0c:{NFSU2_TR(0x69de0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69de0f:{NFSU2_TR(0x69de0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69de11:{NFSU2_TR(0x69de11);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69de14:{NFSU2_TR(0x69de14);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69de17:{NFSU2_TR(0x69de17);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69de1a:{NFSU2_TR(0x69de1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69de1d:{NFSU2_TR(0x69de1d);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B69de21:{NFSU2_TR(0x69de21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69de24:{NFSU2_TR(0x69de24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69de27:{NFSU2_TR(0x69de27);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69de2a:{NFSU2_TR(0x69de2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69de2d:{NFSU2_TR(0x69de2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69de2f:{NFSU2_TR(0x69de2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69de32:{NFSU2_TR(0x69de32);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69de35:{NFSU2_TR(0x69de35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69de38:{NFSU2_TR(0x69de38);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69de3b:{NFSU2_TR(0x69de3b);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B69de3f:L69de3f:{c.instructions+=5;NFSU2_TR(0x69de3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69de42:{NFSU2_TR(0x69de42);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B69de45:{NFSU2_TR(0x69de45);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69de48:{NFSU2_TR(0x69de48);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69de4b:{NFSU2_TR(0x69de4b);
{goto L69debd;}
}
B69de4d:L69de4d:{c.instructions+=9;NFSU2_TR(0x69de4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69de50:{NFSU2_TR(0x69de50);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B69de53:{NFSU2_TR(0x69de53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69de56:{NFSU2_TR(0x69de56);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69de59:{NFSU2_TR(0x69de59);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69de5c:{NFSU2_TR(0x69de5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69de5f:{NFSU2_TR(0x69de5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69de62:{NFSU2_TR(0x69de62);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69de66:{NFSU2_TR(0x69de66);
if(r1(R+518)){{goto L69deae;}}
}
B69de68:L69de68:{c.instructions+=18;NFSU2_TR(0x69de68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69de6b:{NFSU2_TR(0x69de6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69de6e:{NFSU2_TR(0x69de6e);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B69de72:{NFSU2_TR(0x69de72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69de75:{NFSU2_TR(0x69de75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69de78:{NFSU2_TR(0x69de78);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B69de7c:{NFSU2_TR(0x69de7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69de7f:{NFSU2_TR(0x69de7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69de82:{NFSU2_TR(0x69de82);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69de85:{NFSU2_TR(0x69de85);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69de88:{NFSU2_TR(0x69de88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69de8b:{NFSU2_TR(0x69de8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69de8e:{NFSU2_TR(0x69de8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69de91:{NFSU2_TR(0x69de91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69de94:{NFSU2_TR(0x69de94);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69de97:{NFSU2_TR(0x69de97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69de9a:{NFSU2_TR(0x69de9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B69de9d:{NFSU2_TR(0x69de9d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69deae;}}
}
B69de9f:L69de9f:{c.instructions+=5;NFSU2_TR(0x69de9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69dea2:{NFSU2_TR(0x69dea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69dea5:{NFSU2_TR(0x69dea5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69dea8:{NFSU2_TR(0x69dea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69deab:{NFSU2_TR(0x69deab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69deae:L69deae:{c.instructions+=5;NFSU2_TR(0x69deae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69deb1:{NFSU2_TR(0x69deb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69deb4:{NFSU2_TR(0x69deb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69deb7:{NFSU2_TR(0x69deb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69deba:{NFSU2_TR(0x69deba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69debd:L69debd:{c.instructions+=4;NFSU2_TR(0x69debd);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69dec0:{NFSU2_TR(0x69dec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69dec3:{NFSU2_TR(0x69dec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69dec6:{NFSU2_TR(0x69dec6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69de4du);}goto L69de4d;}}
}
B69dec8:L69dec8:{c.instructions+=4;NFSU2_TR(0x69dec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69decb:{NFSU2_TR(0x69decb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69dece:{NFSU2_TR(0x69dece);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B69ded1:{NFSU2_TR(0x69ded1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B69ded3:L69ded3:{c.instructions+=3;NFSU2_TR(0x69ded3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69ded6:{NFSU2_TR(0x69ded6);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B69ded9:{NFSU2_TR(0x69ded9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69dd73u);}goto L69dd73;}}
}
B69dedf:L69dedf:{c.instructions+=5;NFSU2_TR(0x69dedf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69dee0:{NFSU2_TR(0x69dee0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69dee1:{NFSU2_TR(0x69dee1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69dee2:{NFSU2_TR(0x69dee2);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69dee3:{NFSU2_TR(0x69dee3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69dee6:L69dee6:{c.instructions+=9;NFSU2_TR(0x69dee6);
__builtin_memmove((R+28),(R+28),4);
}
B69dee8:{NFSU2_TR(0x69dee8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69dee9:{NFSU2_TR(0x69dee9);
__builtin_memmove((R+20),(R+16),4);
}
B69deeb:{NFSU2_TR(0x69deeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69deee:{NFSU2_TR(0x69deee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69def1:{NFSU2_TR(0x69def1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69def4:{NFSU2_TR(0x69def4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69def7:{NFSU2_TR(0x69def7);
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
B69defa:{NFSU2_TR(0x69defa);
if(r1(R+518)){{goto L69df08;}}
}
B69defc:L69defc:{c.instructions+=4;NFSU2_TR(0x69defc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69deff:{NFSU2_TR(0x69deff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69df00:{NFSU2_TR(0x69df00);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69df03:{NFSU2_TR(0x69df03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69df08ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69dd63u);}goto L69dd63;}
}
B69df08:L69df08:{c.instructions+=2;NFSU2_TR(0x69df08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69df09:{NFSU2_TR(0x69df09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69df0c:L69df0c:{c.instructions+=7;NFSU2_TR(0x69df0c);
__builtin_memmove((R+28),(R+28),4);
}
B69df0e:{NFSU2_TR(0x69df0e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69df0f:{NFSU2_TR(0x69df0f);
__builtin_memmove((R+20),(R+16),4);
}
B69df11:{NFSU2_TR(0x69df11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69df12:{NFSU2_TR(0x69df12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69df15:{NFSU2_TR(0x69df15);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69df18:{NFSU2_TR(0x69df18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69df1dull));
TAIL_STATIC(0x575630u,575);
}
B69df1d:L69df1d:{c.instructions+=2;NFSU2_TR(0x69df1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69df20:{NFSU2_TR(0x69df20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69df25ull));
TAIL_STATIC(0x575630u,575);
}
B69df25:L69df25:{c.instructions+=2;NFSU2_TR(0x69df25);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69df28:{NFSU2_TR(0x69df28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69df2dull));
TAIL_STATIC(0x575630u,575);
}
B69df2d:L69df2d:{c.instructions+=2;NFSU2_TR(0x69df2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69df30:{NFSU2_TR(0x69df30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69df35ull));
TAIL_STATIC(0x575630u,575);
}
B69df35:L69df35:{c.instructions+=2;NFSU2_TR(0x69df35);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69df38:{NFSU2_TR(0x69df38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69df3dull));
TAIL_STATIC(0x575630u,575);
}
B69df3d:L69df3d:{c.instructions+=2;NFSU2_TR(0x69df3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69df40:{NFSU2_TR(0x69df40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69df45ull));
TAIL_STATIC(0x575630u,575);
}
B69df45:L69df45:{c.instructions+=2;NFSU2_TR(0x69df45);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69df48:{NFSU2_TR(0x69df48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69df4dull));
TAIL_STATIC(0x575630u,575);
}
B69df4d:L69df4d:{c.instructions+=2;NFSU2_TR(0x69df4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69df50:{NFSU2_TR(0x69df50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69df55ull));
TAIL_STATIC(0x575630u,575);
}
B69df55:L69df55:{c.instructions+=2;NFSU2_TR(0x69df55);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69df58:{NFSU2_TR(0x69df58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69df5dull));
TAIL_STATIC(0x575630u,575);
}
B69df5d:L69df5d:{c.instructions+=2;NFSU2_TR(0x69df5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69df60:{NFSU2_TR(0x69df60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69df65ull));
TAIL_STATIC(0x575630u,575);
}
B69df65:L69df65:{c.instructions+=2;NFSU2_TR(0x69df65);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69df68:{NFSU2_TR(0x69df68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69df6dull));
TAIL_STATIC(0x575630u,575);
}
B69df6d:L69df6d:{c.instructions+=2;NFSU2_TR(0x69df6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69df70:{NFSU2_TR(0x69df70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69df75ull));
TAIL_STATIC(0x575630u,575);
}
B69df75:L69df75:{c.instructions+=2;NFSU2_TR(0x69df75);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69df78:{NFSU2_TR(0x69df78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69df7dull));
TAIL_STATIC(0x575630u,575);
}
B69df7d:L69df7d:{c.instructions+=2;NFSU2_TR(0x69df7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69df80:{NFSU2_TR(0x69df80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69df85ull));
TAIL_STATIC(0x575630u,575);
}
B69df85:L69df85:{c.instructions+=2;NFSU2_TR(0x69df85);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69df88:{NFSU2_TR(0x69df88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69df8dull));
TAIL_STATIC(0x575630u,575);
}
B69df8d:L69df8d:{c.instructions+=2;NFSU2_TR(0x69df8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69df90:{NFSU2_TR(0x69df90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69df95ull));
TAIL_STATIC(0x575630u,575);
}
B69df95:L69df95:{c.instructions+=3;NFSU2_TR(0x69df95);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B69df98:{NFSU2_TR(0x69df98);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69df9b:{NFSU2_TR(0x69df9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69dfa0ull));
TAIL_STATIC(0x575630u,575);
}
B69dfa0:L69dfa0:{c.instructions+=4;NFSU2_TR(0x69dfa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69dfa1:{NFSU2_TR(0x69dfa1);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69dfa3:{NFSU2_TR(0x69dfa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69dfa4:{NFSU2_TR(0x69dfa4);
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
B69dfa6:L69dfa6:{c.instructions+=1;NFSU2_TR(0x69dfa6);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L69dfa8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69dfa6u);}goto L69dfa6;}
}
B69dfa8:L69dfa8:{c.instructions+=3;NFSU2_TR(0x69dfa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69dfa9:{NFSU2_TR(0x69dfa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69dfaa:{NFSU2_TR(0x69dfaa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69dfad:L69dfad:{c.instructions+=11;NFSU2_TR(0x69dfad);
__builtin_memmove((R+28),(R+28),4);
}
B69dfaf:{NFSU2_TR(0x69dfaf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69dfb0:{NFSU2_TR(0x69dfb0);
__builtin_memmove((R+20),(R+16),4);
}
B69dfb2:{NFSU2_TR(0x69dfb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B69dfb5:{NFSU2_TR(0x69dfb5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69dfb9:{NFSU2_TR(0x69dfb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69dfbc:{NFSU2_TR(0x69dfbc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69dfbd:{NFSU2_TR(0x69dfbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69dfc0:{NFSU2_TR(0x69dfc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69dfc3:{NFSU2_TR(0x69dfc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69dfc4:{NFSU2_TR(0x69dfc4);
if(r1(R+518)){TAIL_STATIC(0x69e05au,69e);}
}
B69dfca:L69dfca:{c.instructions+=3;NFSU2_TR(0x69dfca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69dfcc:{NFSU2_TR(0x69dfcc);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69dfce:{NFSU2_TR(0x69dfce);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69dfd8;}}
}
B69dfd0:L69dfd0:{c.instructions+=4;NFSU2_TR(0x69dfd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69dfd3:{NFSU2_TR(0x69dfd3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69dfd4:{NFSU2_TR(0x69dfd4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B69dfd6:{NFSU2_TR(0x69dfd6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69dfd0u);}goto L69dfd0;}}
}
B69dfd8:L69dfd8:{c.instructions+=3;NFSU2_TR(0x69dfd8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69dfda:{NFSU2_TR(0x69dfda);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69dfdc:{NFSU2_TR(0x69dfdc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x69e05au,69e);}
}
B69dfde:L69dfde:{c.instructions+=13;NFSU2_TR(0x69dfde);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69dfdf:{NFSU2_TR(0x69dfdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69dfe2:{NFSU2_TR(0x69dfe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69dfe5:{NFSU2_TR(0x69dfe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69dfe8:{NFSU2_TR(0x69dfe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B69dfeb:{NFSU2_TR(0x69dfeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B69dfed:{NFSU2_TR(0x69dfed);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69dff0:{NFSU2_TR(0x69dff0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69dff3:{NFSU2_TR(0x69dff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69dff6:{NFSU2_TR(0x69dff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69dff9:{NFSU2_TR(0x69dff9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69dffa:{NFSU2_TR(0x69dffa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69dffd:{NFSU2_TR(0x69dffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x69e000u,69e);
}
XIT:NFSU2_TR_EXIT(0x69d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
